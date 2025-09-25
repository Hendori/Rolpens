/* EditorAssetLibrary::_search_text_changed(String const&) */

void EditorAssetLibrary::_search_text_changed(String *param_1)

{
  Timer::start(_LC1);
  return;
}



/* EditorAssetLibrary::_asset_open() */

void EditorAssetLibrary::_asset_open(void)

{
  EditorFileDialog::popup_file_dialog();
  return;
}



/* EditorAssetLibrary::_manage_plugins() */

void EditorAssetLibrary::_manage_plugins(void)

{
  ProjectSettingsEditor::popup_project_settings(SUB81(ProjectSettingsEditor::singleton,0));
  ProjectSettingsEditor::set_plugins_page();
  return;
}



/* EditorAssetLibraryItem::set_image(int, int, Ref<Texture2D> const&) */

void EditorAssetLibraryItem::set_image(int param_1,int param_2,Ref *param_3)

{
  undefined4 in_register_0000003c;
  
  if (param_2 != 0) {
    _err_print_error("set_image","editor/plugins/asset_library_editor_plugin.cpp",0x55,
                     "Condition \"p_type != EditorAssetLibrary::IMAGE_QUEUE_ICON\" is true.",0,0);
    return;
  }
  if ((int)param_3 == 0) {
    TextureButton::set_texture_normal(*(Ref **)(CONCAT44(in_register_0000003c,param_1) + 0xa08));
    return;
  }
  _err_print_error("set_image","editor/plugins/asset_library_editor_plugin.cpp",0x56,
                   "Condition \"p_index != 0\" is true.",0,0);
  return;
}



/* EditorAssetLibraryItemDescription::_link_click(String const&) */

void __thiscall
EditorAssetLibraryItemDescription::_link_click
          (EditorAssetLibraryItemDescription *this,String *param_1)

{
  char cVar1;
  long *plVar2;
  
  cVar1 = String::begins_with((char *)param_1);
  if (cVar1 != '\0') {
    plVar2 = (long *)OS::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100101. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x150))(plVar2,param_1);
    return;
  }
  _err_print_error("_link_click","editor/plugins/asset_library_editor_plugin.cpp",0xfe,
                   "Condition \"!p_url.begins_with(\"http\")\" is true.",0,0);
  return;
}



/* EditorAssetLibraryItemDescription::_preview_click(int) */

void __thiscall
EditorAssetLibraryItemDescription::_preview_click
          (EditorAssetLibraryItemDescription *this,int param_1)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  lVar4 = 0;
  lVar2 = *(long *)(this + 0xdf0);
joined_r0x00100150:
  if (lVar2 == 0) {
    return;
  }
  do {
    if (*(long *)(lVar2 + -8) <= lVar4) {
      return;
    }
    piVar3 = (int *)(lVar2 + lVar4 * 0x20);
    bVar6 = SUB81(*(undefined8 *)(piVar3 + 4),0);
    if (*piVar3 != param_1) {
      BaseButton::set_pressed(bVar6);
      lVar2 = *(long *)(this + 0xdf0);
LAB_0010016f:
      lVar4 = lVar4 + 1;
      goto joined_r0x00100150;
    }
    BaseButton::set_pressed(bVar6);
    lVar2 = *(long *)(this + 0xdf0);
    if (lVar2 == 0) {
      lVar5 = 0;
LAB_00100233:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = *(long *)(lVar2 + -8);
    if (lVar5 <= lVar4) goto LAB_00100233;
    lVar5 = lVar4 * 0x20 + lVar2;
    if (*(char *)(lVar5 + 4) != '\0') {
      _link_click(this,(String *)(lVar5 + 8));
      lVar2 = *(long *)(this + 0xdf0);
      goto LAB_0010016f;
    }
    if (*(long *)(lVar5 + 0x18) != 0) break;
    lVar4 = lVar4 + 1;
  } while( true );
  lVar4 = lVar4 + 1;
  TextureRect::set_texture(*(Ref **)(this + 0xdf8));
  Window::child_controls_changed();
  lVar2 = *(long *)(this + 0xdf0);
  goto joined_r0x00100150;
}



/* EditorAssetLibrary::_asset_file_selected(String const&) */

void __thiscall EditorAssetLibrary::_asset_file_selected(EditorAssetLibrary *this,String *param_1)

{
  Object *pOVar1;
  char cVar2;
  EditorAssetInstaller *this_00;
  
  pOVar1 = *(Object **)(this + 0xa18);
  if (pOVar1 != (Object *)0x0) {
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    *(undefined8 *)(this + 0xa18) = 0;
  }
  this_00 = (EditorAssetInstaller *)operator_new(0xef8,"");
  EditorAssetInstaller::EditorAssetInstaller(this_00);
  postinitialize_handler((Object *)this_00);
  *(EditorAssetInstaller **)(this + 0xa18) = this_00;
  EditorAssetInstaller::set_asset_name((String *)this_00);
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  EditorAssetInstaller::open_asset(*(String **)(this + 0xa18),SUB81(param_1,0));
  return;
}



/* AssetLibraryEditorPlugin::make_visible(bool) */

void __thiscall AssetLibraryEditorPlugin::make_visible(AssetLibraryEditorPlugin *this,bool param_1)

{
  if (param_1) {
    CanvasItem::show();
    return;
  }
  CanvasItem::hide();
  return;
}



/* EditorAssetLibraryItem::_category_clicked() */

void __thiscall EditorAssetLibraryItem::_category_clicked(EditorAssetLibraryItem *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  iVar2 = *(int *)(this + 0xa3c);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_category_clicked()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_category_clicked()::{lambda()#1}::operator()()::sname),
     iVar3 != 0)) {
    _scs_create((char *)&_category_clicked()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_category_clicked()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_category_clicked()::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,iVar2);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_category_clicked()::{lambda()#1}::operator()()::sname,local_78,1);
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



/* EditorAssetLibraryItem::_asset_clicked() */

void __thiscall EditorAssetLibraryItem::_asset_clicked(EditorAssetLibraryItem *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  iVar2 = *(int *)(this + 0xa38);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_asset_clicked()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_asset_clicked()::{lambda()#1}::operator()()::sname), iVar3 != 0)
     ) {
    _scs_create((char *)&_asset_clicked()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_asset_clicked()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_asset_clicked()::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,iVar2);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_asset_clicked()::{lambda()#1}::operator()()::sname,local_78,1);
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



/* EditorAssetLibrary::shortcut_input(Ref<InputEvent> const&) */

void __thiscall EditorAssetLibrary::shortcut_input(EditorAssetLibrary *this,Ref *param_1)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  Object *pOVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("shortcut_input","editor/plugins/asset_library_editor_plugin.cpp",0x2d0,
                       "Condition \"p_event.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_001008c1;
  }
  pOVar4 = (Object *)__dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0);
  if ((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 != '\0')) {
    cVar2 = InputEvent::is_pressed();
    if (cVar2 != '\0') {
      pcVar1 = *(code **)(*(long *)pOVar4 + 0x1e8);
      InputEventKey::create_reference(&local_40,0x1000046,0);
      local_38 = (Object *)0x0;
      if (((local_40 != (Object *)0x0) &&
          (pOVar5 = (Object *)__dynamic_cast(local_40,&Object::typeinfo,&InputEvent::typeinfo,0),
          pOVar5 != (Object *)0x0)) &&
         (local_38 = pOVar5, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
        local_38 = (Object *)0x0;
      }
      cVar2 = (*pcVar1)(pOVar4,&local_38,1);
      if (cVar2 == '\0') {
        cVar2 = '\0';
        if (local_38 != (Object *)0x0) {
LAB_00100757:
          cVar3 = RefCounted::unreference();
          pOVar5 = local_38;
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_38), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
          goto LAB_00100764;
        }
        if (((local_40 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0')) ||
           (cVar3 = predelete_handler(local_40), cVar3 == '\0')) goto LAB_0010067c;
LAB_00100835:
        (**(code **)(*(long *)local_40 + 0x140))(local_40);
        Memory::free_static(local_40,false);
      }
      else {
        cVar2 = CanvasItem::is_visible_in_tree();
        if (local_38 != (Object *)0x0) goto LAB_00100757;
LAB_00100764:
        if (((local_40 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
           (cVar3 = predelete_handler(local_40), cVar3 != '\0')) goto LAB_00100835;
      }
      if (cVar2 != '\0') {
        Control::grab_focus();
        LineEdit::select_all();
        Control::accept_event();
      }
    }
LAB_0010067c:
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar4,false);
        return;
      }
      goto LAB_001008c1;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001008c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorAssetLibraryItem::_notification(int) [clone .part.0] */

void EditorAssetLibraryItem::_notification(int param_1)

{
  Ref *pRVar1;
  StringName *pSVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  undefined4 in_register_0000003c;
  long lVar6;
  long in_FS_OFFSET;
  Object *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  lVar6 = CONCAT44(in_register_0000003c,param_1);
  pRVar1 = *(Ref **)(lVar6 + 0xa08);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_50);
  TextureButton::set_texture_normal(pRVar1);
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
  local_48 = __LC36;
  uStack_40 = _UNK_0012b6b8;
  Control::add_theme_color_override
            (*(StringName **)(lVar6 + 0xa18),(Color *)(SceneStringNames::singleton + 0xb0));
  local_48 = __LC36;
  uStack_40 = _UNK_0012b6b8;
  Control::add_theme_color_override
            (*(StringName **)(lVar6 + 0xa20),(Color *)(SceneStringNames::singleton + 0xb0));
  local_48 = __LC36;
  uStack_40 = _UNK_0012b6b8;
  Control::add_theme_color_override
            (*(StringName **)(lVar6 + 0xa28),(Color *)(SceneStringNames::singleton + 0xb0));
  iVar5 = Control::get_default_cursor_shape();
  if (iVar5 == 0) {
    pSVar2 = *(StringName **)(lVar6 + 0xa20);
    local_48 = __LC36;
    uStack_40 = _UNK_0012b6b8;
    StringName::StringName((StringName *)&local_50,"font_pressed_color",false);
    Control::add_theme_color_override(pSVar2,(Color *)&local_50);
    if ((StringName::configured != '\0') && (local_50 != (Object *)0x0)) {
      StringName::unref();
    }
    pSVar2 = *(StringName **)(lVar6 + 0xa20);
    local_48 = __LC36;
    uStack_40 = _UNK_0012b6b8;
    StringName::StringName((StringName *)&local_50,"font_hover_color",false);
    Control::add_theme_color_override(pSVar2,(Color *)&local_50);
    if ((StringName::configured != '\0') && (local_50 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* EditorAssetLibrary::_force_online_mode() */

void EditorAssetLibrary::_force_online_mode(void)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar3 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_38,1);
  local_48 = "network/connection/network_mode";
  local_50 = 0;
  local_40 = 0x1f;
  String::parse_latin1((StrRange *)&local_50);
  EditorSettings::set_setting(pSVar3,(Variant *)&local_50);
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
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  EditorSettings::get_singleton();
  EditorSettings::notify_changes();
  EditorSettings::get_singleton();
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorSettings::save();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibraryItem::_author_clicked() */

void __thiscall EditorAssetLibraryItem::_author_clicked(EditorAssetLibraryItem *this)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  LinkButton::get_text();
  if ((_author_clicked()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&_author_clicked()::{lambda()#1}::operator()()::sname), iVar4 != 0
     )) {
    _scs_create((char *)&_author_clicked()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_author_clicked()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_author_clicked()::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,(String *)&local_80);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_author_clicked()::{lambda()#1}::operator()()::sname,local_78,1);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar2 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorAssetLibraryItem::configure(String const&, int, String const&, int, String const&, int,
   String const&) */

void EditorAssetLibraryItem::configure
               (String *param_1,int param_2,String *param_3,int param_4,String *param_5,int param_6,
               String *param_7)

{
  undefined4 in_register_00000034;
  
  if (*(long *)(param_1 + 0xa30) != *(long *)CONCAT44(in_register_00000034,param_2)) {
    CowData<char32_t>::_ref
              ((CowData<char32_t> *)(param_1 + 0xa30),
               (CowData *)CONCAT44(in_register_00000034,param_2));
  }
  LinkButton::set_text(*(String **)(param_1 + 0xa10));
  Control::set_tooltip_text(*(String **)(param_1 + 0xa10));
  *(int *)(param_1 + 0xa38) = (int)param_3;
  LinkButton::set_text(*(String **)(param_1 + 0xa18));
  *(int *)(param_1 + 0xa3c) = (int)param_5;
  LinkButton::set_text(*(String **)(param_1 + 0xa20));
  *(undefined4 *)(param_1 + 0xa40) = param_7._0_4_;
  Label::set_text(*(String **)(param_1 + 0xa28));
  return;
}



/* EditorAssetLibraryItem::_notification(int) */

void __thiscall EditorAssetLibraryItem::_notification(EditorAssetLibraryItem *this,int param_1)

{
  if (param_1 != 10) {
    return;
  }
  _notification((int)this);
  return;
}



/* EditorAssetLibraryItemDescription::_notification(int) */

void EditorAssetLibraryItemDescription::_notification(int param_1)

{
  StringName *pSVar1;
  StringName *pSVar2;
  char cVar3;
  int iVar4;
  undefined8 in_RDX;
  undefined8 in_RSI;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((int)in_RSI == 10) || ((int)in_RSI == 0x20)) {
    pSVar1 = *(StringName **)(CONCAT44(in_register_0000003c,param_1) + 0xde0);
    pSVar2 = *(StringName **)(CONCAT44(in_register_0000003c,param_1) + 0xdd0);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname,in_RSI,
                                  in_RDX,&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_theme_stylebox((StringName *)&local_28,pSVar2);
    Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
    if (local_28 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(local_28);
        if (cVar3 != '\0') {
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



/* EditorAssetLibraryItemDownload::can_install() const */

uint EditorAssetLibraryItemDownload::can_install(void)

{
  uint uVar1;
  
  uVar1 = BaseButton::is_disabled();
  return uVar1 ^ 1;
}



/* EditorAssetLibrary::_get_asset_in_progress(int) const */

long __thiscall EditorAssetLibrary::_get_asset_in_progress(EditorAssetLibrary *this,int param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xb28),0));
    if (iVar1 <= iVar3) {
      return 0;
    }
    lVar2 = Node::get_child((int)*(undefined8 *)(this + 0xb28),SUB41(iVar3,0));
    if (((lVar2 != 0) &&
        (lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&EditorAssetLibraryItemDownload::typeinfo,0)
        , lVar2 != 0)) && (*(int *)(lVar2 + 0xa74) == param_1)) break;
    iVar3 = iVar3 + 1;
  }
  return lVar2;
}



/* EditorAssetLibrary::_set_library_message(String const&) */

void EditorAssetLibrary::_set_library_message(String *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Label::set_text(*(String **)(param_1 + 0xa40));
  cVar1 = Callable::is_valid();
  if (cVar1 != '\0') {
    (**(code **)(**(long **)(param_1 + 0xa48) + 0x110))
              (*(long **)(param_1 + 0xa48),SceneStringNames::singleton + 0x238,
               (Callable *)(param_1 + 0xa50));
    local_38 = 0;
    local_30 = 0;
    Callable::operator=((Callable *)(param_1 + 0xa50),(Callable *)&local_38);
    Callable::~Callable((Callable *)&local_38);
  }
  CanvasItem::hide();
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::show();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_set_library_message_with_action(String const&, String const&, Callable
   const&) */

void __thiscall
EditorAssetLibrary::_set_library_message_with_action
          (EditorAssetLibrary *this,String *param_1,String *param_2,Callable *param_3)

{
  Callable *this_00;
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Label::set_text(*(String **)(this + 0xa40));
  this_00 = (Callable *)(this + 0xa50);
  Button::set_text(*(String **)(this + 0xa48));
  cVar1 = Callable::is_valid();
  if (cVar1 != '\0') {
    (**(code **)(**(long **)(this + 0xa48) + 0x110))
              (*(long **)(this + 0xa48),SceneStringNames::singleton + 0x238,this_00);
    local_48 = 0;
    local_40 = 0;
    Callable::operator=(this_00,(Callable *)&local_48);
    Callable::~Callable((Callable *)&local_48);
  }
  Callable::operator=(this_00,param_3);
  (**(code **)(**(long **)(this + 0xa48) + 0x108))
            (*(long **)(this + 0xa48),SceneStringNames::singleton + 0x238,this_00,0);
  CanvasItem::show();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::show();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::disable_community_support() */

void EditorAssetLibrary::disable_community_support(void)

{
  int iVar1;
  
  iVar1 = MenuButton::get_popup();
  PopupMenu::set_item_checked(iVar1,true);
  return;
}



/* AssetLibraryEditorPlugin::is_available() */

ulong AssetLibraryEditorPlugin::is_available(void)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = StreamPeerTLS::is_available();
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  lVar2 = Engine::get_singleton();
  return (ulong)(*(byte *)(lVar2 + 0xc4) ^ 1);
}



/* EditorAssetLibraryItemDescription::configure(String const&, int, String const&, int, String
   const&, int, String const&, int, String const&, String const&, String const&, String const&,
   String const&) */

void EditorAssetLibraryItemDescription::configure
               (String *param_1,int param_2,String *param_3,int param_4,String *param_5,int param_6,
               String *param_7,int param_8,String *param_9,String *param_10,String *param_11,
               String *param_12,String *param_13)

{
  long lVar1;
  String *pSVar2;
  undefined8 uVar3;
  undefined4 in_register_00000034;
  CowData *pCVar4;
  long in_FS_OFFSET;
  CowData *in_stack_00000040;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pCVar4 = (CowData *)CONCAT44(in_register_00000034,param_2);
  lVar1 = *(long *)pCVar4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(param_1 + 0xe00) = (int)param_3;
  if (*(long *)(param_1 + 0xe10) != lVar1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0xe10),pCVar4);
  }
  if (*(long *)(param_1 + 0xe08) != *(long *)param_12) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0xe08),(CowData *)param_12);
  }
  if (*(long *)(param_1 + 0xe18) != *(long *)in_stack_00000040) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0xe18),in_stack_00000040);
  }
  lVar1 = *(long *)(param_1 + 0xdb8);
  if (*(long *)(lVar1 + 0xa30) != *(long *)pCVar4) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar1 + 0xa30),pCVar4);
  }
  LinkButton::set_text(*(String **)(lVar1 + 0xa10));
  Control::set_tooltip_text(*(String **)(lVar1 + 0xa10));
  *(int *)(lVar1 + 0xa38) = (int)param_3;
  LinkButton::set_text(*(String **)(lVar1 + 0xa18));
  *(int *)(lVar1 + 0xa3c) = (int)param_5;
  LinkButton::set_text(*(String **)(lVar1 + 0xa20));
  *(undefined4 *)(lVar1 + 0xa40) = param_7._0_4_;
  Label::set_text(*(String **)(lVar1 + 0xa28));
  RichTextLabel::clear();
  pSVar2 = *(String **)(param_1 + 0xdc0);
  local_70 = 0;
  local_68 = "\n";
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = " ";
  local_88 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_88);
  local_98 = 0;
  local_68 = "";
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_98);
  local_68 = "Version:";
  local_a0 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_90,(String *)&local_a0);
  String::operator+((String *)&local_80,(String *)&local_90);
  String::operator+((String *)&local_78,(String *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_78);
  RichTextLabel::add_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  pSVar2 = *(String **)(param_1 + 0xdc0);
  local_68 = " ";
  local_70 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "";
  local_80 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = "Contents:";
  local_88 = 0;
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_78,(String *)&local_88);
  String::operator+((String *)&local_68,(String *)&local_78);
  RichTextLabel::add_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  uVar3 = *(undefined8 *)(param_1 + 0xdc0);
  local_68 = (char *)0x0;
  Variant::Variant((Variant *)local_58,param_13);
  RichTextLabel::push_meta(uVar3,(Variant *)local_58,1,(String *)&local_68);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = "";
  pSVar2 = *(String **)(param_1 + 0xdc0);
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "View Files";
  local_78 = 0;
  local_60 = 10;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  RichTextLabel::add_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  RichTextLabel::pop();
  local_68 = "\n\n";
  pSVar2 = *(String **)(param_1 + 0xdc0);
  local_70 = 0;
  local_60 = 2;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "";
  local_88 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_88);
  local_68 = "Description:";
  local_90 = 0;
  local_60 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  TTR((String *)&local_80,(String *)&local_90);
  operator+((char *)&local_78,(String *)&_LC44);
  String::operator+((String *)&local_68,(String *)&local_78);
  RichTextLabel::add_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  RichTextLabel::append_text(*(String **)(param_1 + 0xdc0));
  RichTextLabel::set_selection_enabled(SUB81(*(undefined8 *)(param_1 + 0xdc0),0));
  RichTextLabel::set_context_menu_enabled(SUB81(*(undefined8 *)(param_1 + 0xdc0),0));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Window::set_title(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* setup_http_request(HTTPRequest*) */

void setup_http_request(HTTPRequest *param_1)

{
  long in_FS_OFFSET;
  Variant aVStack_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = "asset_library/use_threads";
  local_60 = 0x19;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  HTTPRequest::set_use_threads(SUB81(param_1,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "network/http_proxy/host";
  local_70 = 0;
  local_60 = 0x17;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String(aVStack_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "network/http_proxy/port";
  local_70 = 0;
  local_60 = 0x17;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  HTTPRequest::set_http_proxy((String *)param_1,(int)aVStack_78);
  HTTPRequest::set_https_proxy((String *)param_1,(int)aVStack_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)aVStack_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_update_repository_options() */

void __thiscall EditorAssetLibrary::_update_repository_options(EditorAssetLibrary *this)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  int iVar5;
  Variant *pVVar6;
  uint uVar7;
  long in_FS_OFFSET;
  Dictionary local_a0 [8];
  Variant local_98 [8];
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_a0);
  Variant::Variant((Variant *)local_58,"https://godotengine.org/asset-library/api");
  Variant::Variant((Variant *)local_78,"godotengine.org (Official)");
  pVVar6 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
  if (pVVar6 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar6 = 0;
    *(int *)pVVar6 = local_58[0];
    *(undefined8 *)(pVVar6 + 8) = local_50;
    *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,local_a0);
  local_88 = "asset_library/available_urls";
  local_90 = 0;
  local_80 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_90,SUB81((Variant *)local_78,0),true);
  Variant::operator_cast_to_Dictionary(local_98);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  OptionButton::clear();
  Dictionary::keys();
  for (uVar7 = 0; iVar5 = Array::size(), (int)uVar7 < iVar5; uVar7 = uVar7 + 1) {
    Array::operator[]((int)(StrRange *)&local_90);
    Variant::operator_cast_to_String((Variant *)&local_88);
    OptionButton::add_item(*(String **)(this + 0xa78),(int)(Variant *)&local_88);
    uVar3 = *(undefined8 *)(this + 0xa78);
    Variant::Variant((Variant *)local_58,(String *)&local_88);
    Dictionary::operator[](local_98);
    OptionButton::set_item_metadata((int)uVar3,(Variant *)(ulong)uVar7);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    pcVar4 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
  }
  Array::~Array((Array *)&local_90);
  Dictionary::~Dictionary((Dictionary *)local_98);
  Dictionary::~Dictionary(local_a0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_select_author(String const&) */

void EditorAssetLibrary::_select_author(String *param_1)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_40;
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = String::find((char *)(param_1 + 0xa08),0x11518e);
  if (iVar3 != -1) {
    plVar4 = (long *)OS::get_singleton();
    pcVar1 = *(code **)(*plVar4 + 0x150);
    String::uri_encode();
    operator+((char *)&local_40,(String *)"https://godotengine.org/asset-library/asset?user=");
    (*pcVar1)(plVar4);
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar4 = (long *)(local_40 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    CowData<char32_t>::_unref(local_38);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AssetLibraryEditorPlugin::~AssetLibraryEditorPlugin() */

void __thiscall AssetLibraryEditorPlugin::~AssetLibraryEditorPlugin(AssetLibraryEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012a730;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* AssetLibraryEditorPlugin::~AssetLibraryEditorPlugin() */

void __thiscall AssetLibraryEditorPlugin::~AssetLibraryEditorPlugin(AssetLibraryEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012a730;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x668);
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
    if ((code *)PTR__bind_methods_00133008 != RefCounted::_bind_methods) {
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



/* EditorAssetLibraryItemDownload::install() */

void __thiscall EditorAssetLibraryItemDownload::install(EditorAssetLibraryItemDownload *this)

{
  Variant *pVVar1;
  String *pSVar2;
  int iVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_c0;
  CowData<char32_t> local_b8 [8];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  HTTPRequest::get_download_file();
  if (this[0xa78] == (EditorAssetLibraryItemDownload)0x0) {
    pSVar2 = *(String **)(this + 0xa80);
    Label::get_text();
    EditorAssetInstaller::set_asset_name(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    EditorAssetInstaller::open_asset
              (*(String **)(this + 0xa80),SUB81((CowData<char32_t> *)&local_c0,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  }
  else {
    Label::get_text();
    local_b0 = 0;
    if (local_c0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_c0);
    }
    if ((install()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&install()::{lambda()#1}::operator()()::sname), iVar3 != 0)) {
      _scs_create((char *)&install()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&install()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&install()::{lambda()#1}::operator()()::sname);
    }
    Variant::Variant(local_88,(String *)&local_b0);
    Variant::Variant(local_70,(String *)local_b8);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    pVVar4 = (Variant *)local_40;
    local_a8 = local_88;
    pVStack_a0 = local_70;
    (**(code **)(*(long *)this + 0xd0))
              (this,&install()::{lambda()#1}::operator()()::sname,&local_a8,2);
    do {
      pVVar1 = pVVar4 + -0x18;
      pVVar4 = pVVar4 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar4 != local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref(local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorAssetLibrary::_install_external_asset(String, String) */

void __thiscall
EditorAssetLibrary::_install_external_asset(EditorAssetLibrary *this,long *param_2,long *param_3)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  Variant *pVVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_b8;
  long local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  if (*param_3 != 0) {
    plVar1 = (long *)(*param_3 + -0x10);
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_001025d0;
      LOCK();
      lVar5 = *plVar1;
      bVar7 = lVar3 == lVar5;
      if (bVar7) {
        *plVar1 = lVar3 + 1;
        lVar5 = lVar3;
      }
      UNLOCK();
    } while (!bVar7);
    if (lVar5 != -1) {
      local_b0 = *param_3;
    }
  }
LAB_001025d0:
  local_b8 = 0;
  plVar1 = (long *)(*param_2 + -0x10);
  if (*param_2 != 0) {
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_00102606;
      LOCK();
      lVar5 = *plVar1;
      bVar7 = lVar3 == lVar5;
      if (bVar7) {
        *plVar1 = lVar3 + 1;
        lVar5 = lVar3;
      }
      UNLOCK();
    } while (!bVar7);
    if (lVar5 != -1) {
      local_b8 = *param_2;
    }
  }
LAB_00102606:
  if ((_install_external_asset(String,String)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&_install_external_asset(String,String)::{lambda()#1}::
                                   operator()()::sname), iVar4 != 0)) {
    _scs_create((char *)&_install_external_asset(String,String)::{lambda()#1}::operator()()::sname,
                true);
    __cxa_atexit(StringName::~StringName,
                 &_install_external_asset(String,String)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_install_external_asset(String,String)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant(local_88,(String *)&local_b8);
  Variant::Variant(local_70,(String *)&local_b0);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pVVar6 = (Variant *)local_40;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_install_external_asset(String,String)::{lambda()#1}::operator()()::sname,
             &local_a8,2);
  do {
    pVVar2 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorAssetLibraryItemDownload::EditorAssetLibraryItemDownload() */

void __thiscall
EditorAssetLibraryItemDownload::EditorAssetLibraryItemDownload(EditorAssetLibraryItemDownload *this)

{
  long lVar1;
  code *pcVar2;
  String *pSVar3;
  long *plVar4;
  undefined8 uVar5;
  PanelContainer *this_00;
  BoxContainer *pBVar6;
  TextureRect *this_01;
  BoxContainer *this_02;
  Label *pLVar7;
  TextureButton *this_03;
  ProgressBar *this_04;
  Button *pBVar8;
  HTTPRequest *this_05;
  CallableCustom *this_06;
  AcceptDialog *this_07;
  EditorAssetInstaller *this_08;
  long in_FS_OFFSET;
  float fVar9;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MarginContainer::MarginContainer((MarginContainer *)this);
  *(undefined4 *)(this + 0xa74) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00129e68;
  *(undefined8 *)(this + 0xa80) = 0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  this_00 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(this_00);
  postinitialize_handler((Object *)this_00);
  *(PanelContainer **)(this + 0xa10) = this_00;
  Node::add_child(this,this_00,0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00128f10;
  postinitialize_handler((Object *)pBVar6);
  Node::add_child(*(undefined8 *)(this + 0xa10),pBVar6,0,0);
  this_01 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_01);
  postinitialize_handler((Object *)this_01);
  *(TextureRect **)(this + 0xa18) = this_01;
  TextureRect::set_stretch_mode(this_01,5);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa18),0);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa18),0,0);
  this_02 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_02,true);
  this_02[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_02 = &PTR__initialize_classv_00129288;
  postinitialize_handler((Object *)this_02);
  Node::add_child(pBVar6,this_02,0,0);
  Control::set_h_size_flags(this_02,3);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00128f10;
  postinitialize_handler((Object *)pBVar6);
  Node::add_child(this_02,pBVar6,0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58 = (char *)0x0;
  Label::Label(pLVar7,(String *)&local_58);
  postinitialize_handler((Object *)pLVar7);
  *(Label **)(this + 0xa20) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa20),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa20),3);
  this_03 = (TextureButton *)operator_new(0xaa0,"");
  TextureButton::TextureButton(this_03);
  postinitialize_handler((Object *)this_03);
  lVar1 = *(long *)this_03;
  *(TextureButton **)(this + 0xa40) = this_03;
  pcVar2 = *(code **)(lVar1 + 0x108);
  create_custom_callable_function_pointer<EditorAssetLibraryItemDownload>
            ((EditorAssetLibraryItemDownload *)&local_58,(char *)this,
             (_func_void *)"&EditorAssetLibraryItemDownload::_close");
  (*pcVar2)(this_03,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa40),0,0);
  Label::set_clip_text(SUB81(*(undefined8 *)(this + 0xa20),0));
  BoxContainer::add_spacer(SUB81(this_02,0));
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Idle";
  local_68 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::Label(pLVar7,(String *)&local_58);
  postinitialize_handler((Object *)pLVar7);
  *(Label **)(this + 0xa68) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_02,*(undefined8 *)(this + 0xa68),0,0);
  this_04 = (ProgressBar *)operator_new(0xa48,"");
  ProgressBar::ProgressBar(this_04);
  postinitialize_handler((Object *)this_04);
  *(ProgressBar **)(this + 0xa28) = this_04;
  ProgressBar::set_editor_preview_indeterminate(SUB81(this_04,0));
  Node::add_child(this_02,*(undefined8 *)(this + 0xa28),0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00128f10;
  pBVar6[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar6);
  Node::add_child(this_02,pBVar6,0,0);
  BoxContainer::add_spacer(SUB81(pBVar6,0));
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar8,(String *)&local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa30) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  local_60 = 0;
  pSVar3 = *(String **)(this + 0xa30);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Install...";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa30),0));
  plVar4 = *(long **)(this + 0xa30);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<EditorAssetLibraryItemDownload>
            ((EditorAssetLibraryItemDownload *)&local_58,(char *)this,
             (_func_void *)"&EditorAssetLibraryItemDownload::install");
  (*pcVar2)(plVar4,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar8,(String *)&local_58);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa38) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  local_60 = 0;
  pSVar3 = *(String **)(this + 0xa38);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Retry";
  local_68 = 0;
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  plVar4 = *(long **)(this + 0xa38);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<EditorAssetLibraryItemDownload>
            ((EditorAssetLibraryItemDownload *)&local_58,(char *)this,
             (_func_void *)"&EditorAssetLibraryItemDownload::_make_request");
  (*pcVar2)(plVar4,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  CanvasItem::hide();
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa38),0,0);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa30),0,0);
  fVar9 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar9 * _LC74._4_4_,fVar9 * (float)_LC74);
  Control::set_custom_minimum_size((Vector2 *)this);
  this_05 = (HTTPRequest *)operator_new(0x4f0,"");
  HTTPRequest::HTTPRequest(this_05);
  postinitialize_handler((Object *)this_05);
  *(HTTPRequest **)(this + 0xa50) = this_05;
  Node::add_child(*(undefined8 *)(this + 0xa10),this_05,0,0);
  plVar4 = *(long **)(this + 0xa50);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  this_06 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_06);
  *(undefined **)(this_06 + 0x20) = &_LC12;
  *(EditorAssetLibraryItemDownload **)(this_06 + 0x28) = this;
  *(undefined1 (*) [16])(this_06 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_06 = &PTR_hash_0012ac18;
  *(undefined8 *)(this_06 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_06 + 0x10) = 0;
  *(undefined8 *)(this_06 + 0x30) = uVar5;
  *(code **)(this_06 + 0x38) = _http_download_completed;
  CallableCustomMethodPointerBase::_setup((uint *)this_06,(int)this_06 + 0x28);
  *(char **)(this_06 + 0x20) = "EditorAssetLibraryItemDownload::_http_download_completed";
  Callable::Callable((Callable *)&local_58,this_06);
  StringName::StringName((StringName *)&local_60,"request_completed",false);
  (*pcVar2)(plVar4,(StrRange *)&local_60,(CowData<char32_t> *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  setup_http_request(*(HTTPRequest **)(this + 0xa50));
  this_07 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(this_07);
  postinitialize_handler((Object *)this_07);
  *(AcceptDialog **)(this + 0xa48) = this_07;
  Node::add_child(*(undefined8 *)(this + 0xa10),this_07,0,0);
  local_58 = "";
  local_60 = 0;
  pSVar3 = *(String **)(this + 0xa48);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Download Error";
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Window::set_title(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_08 = (EditorAssetInstaller *)operator_new(0xef8,"");
  EditorAssetInstaller::EditorAssetInstaller(this_08);
  postinitialize_handler((Object *)this_08);
  *(EditorAssetInstaller **)(this + 0xa80) = this_08;
  Node::add_child(*(undefined8 *)(this + 0xa10),this_08,0,0);
  plVar4 = *(long **)(this + 0xa80);
  pcVar2 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<EditorAssetLibraryItemDownload>
            ((EditorAssetLibraryItemDownload *)&local_58,(char *)this,
             (_func_void *)"&EditorAssetLibraryItemDownload::_close");
  (*pcVar2)(plVar4,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this[0xa78] = (EditorAssetLibraryItemDownload)0x0;
  *(undefined4 *)(this + 0xa70) = 0xffffffff;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_make_pages(int, int, int, int, int) */

BoxContainer *
EditorAssetLibrary::_make_pages(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  BoxContainer *this;
  Button *pBVar3;
  VSeparator *pVVar4;
  int iVar5;
  undefined4 in_register_0000003c;
  char *pcVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  float fVar9;
  undefined8 local_70;
  undefined8 local_68 [2];
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  pcVar6 = (char *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this,false);
  this[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00128f10;
  postinitialize_handler((Object *)this);
  if (1 < param_3) {
    fVar9 = (float)EditorScale::get_scale();
    iVar7 = (int)((float)param_2 - _LC80 / fVar9);
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    fVar9 = (float)EditorScale::get_scale();
    iVar2 = (int)(_LC81 / fVar9 + (float)iVar7);
    if (param_3 < iVar2) {
      iVar2 = param_3;
    }
    BoxContainer::add_spacer(SUB81(this,0));
    EditorScale::get_scale();
    StringName::StringName((StringName *)&local_58,"separation",false);
    iVar5 = (int)(StringName *)&local_58;
    Control::add_theme_constant_override((StringName *)this,iVar5);
    if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
      StringName::unref();
    }
    pBVar3 = (Button *)operator_new(0xc10,"");
    local_58 = (char *)0x0;
    Button::Button(pBVar3,(String *)&local_58);
    postinitialize_handler((Object *)pBVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    local_58 = "Pagination";
    local_68[0] = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)local_68);
    local_70 = 0;
    local_58 = "First";
    local_50 = 5;
    String::parse_latin1((StrRange *)&local_70);
    TTR((String *)&local_58,(String *)&local_70);
    Button::set_text((String *)pBVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    StringName::StringName((StringName *)&local_58,"PanelBackgroundButton",false);
    Control::set_theme_type_variation((StringName *)pBVar3);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    if (param_2 == 0) {
      BaseButton::set_disabled(SUB81(pBVar3,0));
      Control::set_focus_mode(pBVar3,0);
    }
    else {
      pcVar1 = *(code **)(*(long *)pBVar3 + 0x108);
      create_custom_callable_function_pointer<EditorAssetLibrary,int>
                ((EditorAssetLibrary *)local_68,pcVar6,
                 (_func_void_int *)"&EditorAssetLibrary::_search");
      Callable::bind<int>(iVar5);
      (*pcVar1)(pBVar3,SceneStringNames::singleton + 0x238,(StringName *)&local_58,0);
      Callable::~Callable((Callable *)&local_58);
      Callable::~Callable((Callable *)local_68);
    }
    Node::add_child(this,pBVar3,0,0);
    pBVar3 = (Button *)operator_new(0xc10,"");
    local_58 = (char *)0x0;
    Button::Button(pBVar3,(String *)&local_58);
    postinitialize_handler((Object *)pBVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    local_58 = "Pagination";
    local_68[0] = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)local_68);
    local_58 = "Previous";
    local_70 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_70);
    TTR((String *)&local_58,(String *)&local_70);
    Button::set_text((String *)pBVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    StringName::StringName((StringName *)&local_58,"PanelBackgroundButton",false);
    Control::set_theme_type_variation((StringName *)pBVar3);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    if (param_2 < 1) {
      BaseButton::set_disabled(SUB81(pBVar3,0));
      Control::set_focus_mode(pBVar3,0);
    }
    else {
      pcVar1 = *(code **)(*(long *)pBVar3 + 0x108);
      create_custom_callable_function_pointer<EditorAssetLibrary,int>
                ((EditorAssetLibrary *)local_68,pcVar6,
                 (_func_void_int *)"&EditorAssetLibrary::_search");
      Callable::bind<int>(iVar5);
      (*pcVar1)(pBVar3,SceneStringNames::singleton + 0x238,(StringName *)&local_58,0);
      Callable::~Callable((Callable *)&local_58);
      Callable::~Callable((Callable *)local_68);
    }
    Node::add_child(this,pBVar3,0,0);
    pVVar4 = (VSeparator *)operator_new(0x9e0,"");
    VSeparator::VSeparator(pVVar4);
    postinitialize_handler((Object *)pVVar4);
    Node::add_child(this,pVVar4,0,0);
    if (iVar7 < iVar2) {
      do {
        iVar8 = iVar7 + 1;
        pBVar3 = (Button *)operator_new(0xc10,"");
        local_58 = (char *)0x0;
        Button::Button(pBVar3,(String *)&local_58);
        postinitialize_handler((Object *)pBVar3);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        local_58 = " %d ";
        local_68[0] = 0;
        local_50 = 4;
        String::parse_latin1((StrRange *)local_68);
        vformat<int>((String *)&local_58,(int)(StrRange *)local_68);
        Button::set_text((String *)pBVar3);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
        StringName::StringName((StringName *)&local_58,"PanelBackgroundButton",false);
        Control::set_theme_type_variation((StringName *)pBVar3);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        if (param_2 == iVar7) {
          BaseButton::set_disabled(SUB81(pBVar3,0));
          Control::set_focus_mode(pBVar3,0);
        }
        else {
          pcVar1 = *(code **)(*(long *)pBVar3 + 0x108);
          create_custom_callable_function_pointer<EditorAssetLibrary,int>
                    ((EditorAssetLibrary *)local_68,pcVar6,
                     (_func_void_int *)"&EditorAssetLibrary::_search");
          Callable::bind<int>(iVar5);
          (*pcVar1)(pBVar3,SceneStringNames::singleton + 0x238,(StringName *)&local_58,0);
          Callable::~Callable((Callable *)&local_58);
          Callable::~Callable((Callable *)local_68);
        }
        Node::add_child(this,pBVar3,0,0);
        iVar7 = iVar8;
      } while (iVar2 != iVar8);
    }
    pBVar3 = (Button *)operator_new(0xc10,"");
    local_58 = (char *)0x0;
    Button::Button(pBVar3,(String *)&local_58);
    postinitialize_handler((Object *)pBVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    local_58 = "Pagination";
    local_68[0] = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)local_68);
    local_58 = "Next";
    local_70 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_70);
    TTR((String *)&local_58,(String *)&local_70);
    Button::set_text((String *)pBVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    StringName::StringName((StringName *)&local_58,"PanelBackgroundButton",false);
    Control::set_theme_type_variation((StringName *)pBVar3);
    if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
      StringName::unref();
    }
    if (param_2 < param_3 + -1) {
      pcVar1 = *(code **)(*(long *)pBVar3 + 0x108);
      create_custom_callable_function_pointer<EditorAssetLibrary,int>
                ((EditorAssetLibrary *)local_68,pcVar6,
                 (_func_void_int *)"&EditorAssetLibrary::_search");
      Callable::bind<int>(iVar5);
      (*pcVar1)(pBVar3,SceneStringNames::singleton + 0x238,(StringName *)&local_58,0);
      Callable::~Callable((Callable *)&local_58);
      Callable::~Callable((Callable *)local_68);
    }
    else {
      BaseButton::set_disabled(SUB81(pBVar3,0));
      Control::set_focus_mode(pBVar3,0);
    }
    pVVar4 = (VSeparator *)operator_new(0x9e0,"");
    VSeparator::VSeparator(pVVar4);
    postinitialize_handler((Object *)pVVar4);
    Node::add_child(this,pVVar4,0,0);
    Node::add_child(this,pBVar3,0,0);
    pBVar3 = (Button *)operator_new(0xc10,"");
    local_58 = (char *)0x0;
    Button::Button(pBVar3,(String *)&local_58);
    postinitialize_handler((Object *)pBVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    local_58 = "Pagination";
    local_68[0] = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)local_68);
    local_58 = "Last";
    local_70 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_70);
    TTR((String *)&local_58,(String *)&local_70);
    Button::set_text((String *)pBVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    StringName::StringName((StringName *)&local_58,"PanelBackgroundButton",false);
    Control::set_theme_type_variation((StringName *)pBVar3);
    if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
      StringName::unref();
    }
    if (param_3 + -1 == param_2) {
      BaseButton::set_disabled(SUB81(pBVar3,0));
      Control::set_focus_mode(pBVar3,0);
    }
    else {
      pcVar1 = *(code **)(*(long *)pBVar3 + 0x108);
      create_custom_callable_function_pointer<EditorAssetLibrary,int>
                ((EditorAssetLibrary *)local_68,pcVar6,
                 (_func_void_int *)"&EditorAssetLibrary::_search");
      Callable::bind<int>(iVar5);
      (*pcVar1)(pBVar3,SceneStringNames::singleton + 0x238,(StringName *)&local_58,0);
      Callable::~Callable((Callable *)&local_58);
      Callable::~Callable((Callable *)local_68);
    }
    Node::add_child(this,pBVar3,0,0);
    BoxContainer::add_spacer(SUB81(this,0));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* EditorAssetLibraryItem::clamp_width(int) */

void __thiscall EditorAssetLibraryItem::clamp_width(EditorAssetLibraryItem *this,int param_1)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  String local_68 [8];
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LinkButton::get_button_font();
  fVar4 = (float)(**(code **)(*(long *)local_58 + 0x288))(_LC91,local_58,this + 0xa30,0,0x10,3,0,0);
  fVar5 = (float)EditorScale::get_scale();
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
  if (param_1 < (int)(fVar5 * fVar4)) {
    if ((*(long *)(this + 0xa30) == 0) || ((int)*(undefined8 *)(*(long *)(this + 0xa30) + -8) == 0))
    {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_60 = 0;
    local_50 = 3;
    local_58 = (Object *)&_LC92;
    String::parse_latin1((StrRange *)&local_60);
    String::left((int)(CowData<char32_t> *)&local_58);
    String::operator+(local_68,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    LinkButton::set_text(*(String **)(this + 0xa10));
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    LinkButton::set_text(*(String **)(this + 0xa10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorAssetLibrary::_update_asset_items_columns() */

void __thiscall EditorAssetLibrary::_update_asset_items_columns(EditorAssetLibrary *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  EditorAssetLibraryItem *this_00;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)Control::get_size();
  fVar6 = (float)EditorScale::get_scale();
  iVar4 = (int)((double)fVar5 / ((double)fVar6 * __LC94));
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  iVar2 = GridContainer::get_columns();
  if (iVar2 != iVar4) {
    GridContainer::set_columns((int)*(undefined8 *)(this + 0xab8));
  }
  fVar5 = (float)Control::get_size();
  fVar6 = (float)EditorScale::get_scale();
  iVar2 = 0;
  *(int *)(this + 0xb30) = (int)(fVar5 / (float)iVar4 - _LC95 * fVar6);
  while( true ) {
    iVar4 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xab8),0));
    if (iVar4 <= iVar2) break;
    lVar3 = Node::get_child((int)*(undefined8 *)(this + 0xab8),SUB41(iVar2,0));
    if (lVar3 != 0) {
      this_00 = (EditorAssetLibraryItem *)
                __dynamic_cast(lVar3,&Object::typeinfo,&EditorAssetLibraryItem::typeinfo,0);
      if (this_00 != (EditorAssetLibraryItem *)0x0) {
        cVar1 = CanvasItem::is_visible();
        if (cVar1 != '\0') {
          EditorAssetLibraryItem::clamp_width(this_00,*(int *)(this + 0xb30));
        }
      }
    }
    iVar2 = iVar2 + 1;
  }
  return;
}



/* EditorAssetLibraryItemDownload::_close() */

void EditorAssetLibraryItemDownload::_close(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  HTTPRequest::get_download_file();
  DirAccess::remove_file_or_error((String *)&local_28);
  lVar2 = local_28;
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_28 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::queue_free();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<int, EditorAssetLibrary::ImageQueue, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, EditorAssetLibrary::ImageQueue> > >::erase(int const&)
   [clone .isra.0] */

void __thiscall
HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
::erase(HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
        *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
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
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  long *plVar34;
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  uint *puVar38;
  ulong uVar39;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar33 = *param_1;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar39 = CONCAT44(0,uVar5);
    uVar7 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar28 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
    uVar28 = (uVar28 ^ uVar28 >> 0xd) * -0x3d4d51cb;
    uVar32 = uVar28 ^ uVar28 >> 0x10;
    if (uVar28 == uVar28 >> 0x10) {
      uVar32 = 1;
      uVar30 = uVar7;
    }
    else {
      uVar30 = uVar32 * uVar7;
    }
    lVar8 = *(long *)(this + 0x10);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar39;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar30;
    uVar30 = SUB168(auVar10 * auVar19,8);
    uVar28 = *(uint *)(lVar8 + uVar30 * 4);
    uVar35 = (ulong)SUB164(auVar10 * auVar19,8);
    if (uVar28 != 0) {
      uVar37 = 0;
      do {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = ((int)uVar35 + 1) * uVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar39;
        uVar31 = SUB168(auVar13 * auVar22,8);
        uVar29 = SUB164(auVar13 * auVar22,8);
        if ((uVar32 == uVar28) && (uVar33 == *(uint *)(*(long *)(lVar6 + uVar30 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar8 + uVar31 * 4);
          uVar33 = *puVar38;
          if ((uVar33 != 0) &&
             (auVar14._8_8_ = 0, auVar14._0_8_ = uVar33 * uVar7, auVar23._8_8_ = 0,
             auVar23._0_8_ = uVar39, auVar15._8_8_ = 0,
             auVar15._0_8_ = ((uVar29 + uVar5) - SUB164(auVar14 * auVar23,8)) * uVar7,
             auVar24._8_8_ = 0, auVar24._0_8_ = uVar39, uVar30 = (ulong)uVar29, uVar36 = uVar35,
             SUB164(auVar15 * auVar24,8) != 0)) {
            while( true ) {
              uVar35 = uVar30;
              puVar1 = (uint *)(lVar8 + uVar36 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar33;
              puVar3 = (undefined8 *)(lVar6 + uVar36 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = ((int)uVar35 + 1) * uVar7;
              auVar27._8_8_ = 0;
              auVar27._0_8_ = uVar39;
              uVar31 = SUB168(auVar18 * auVar27,8);
              puVar38 = (uint *)(lVar8 + uVar31 * 4);
              uVar33 = *puVar38;
              if ((uVar33 == 0) ||
                 (auVar16._8_8_ = 0, auVar16._0_8_ = uVar33 * uVar7, auVar25._8_8_ = 0,
                 auVar25._0_8_ = uVar39, auVar17._8_8_ = 0,
                 auVar17._0_8_ =
                      ((SUB164(auVar18 * auVar27,8) + uVar5) - SUB164(auVar16 * auVar25,8)) * uVar7,
                 auVar26._8_8_ = 0, auVar26._0_8_ = uVar39, SUB164(auVar17 * auVar26,8) == 0))
              break;
              uVar30 = uVar31 & 0xffffffff;
              uVar36 = uVar35;
            }
          }
          plVar4 = (long *)(lVar6 + uVar35 * 8);
          *(undefined4 *)(lVar8 + uVar35 * 4) = 0;
          plVar34 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar34) {
            *(long *)(this + 0x18) = *plVar34;
            plVar34 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x20) == plVar34) {
            *(long *)(this + 0x20) = plVar34[1];
            plVar34 = (long *)*plVar4;
          }
          if ((long *)plVar34[1] != (long *)0x0) {
            *(long *)plVar34[1] = *plVar34;
            plVar34 = (long *)*plVar4;
          }
          if (*plVar34 != 0) {
            *(long *)(*plVar34 + 8) = plVar34[1];
            plVar34 = (long *)*plVar4;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar34 + 5));
          Memory::free_static(plVar34,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar35 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar28 = *(uint *)(lVar8 + uVar31 * 4);
        uVar35 = uVar31 & 0xffffffff;
        uVar37 = uVar37 + 1;
      } while ((uVar28 != 0) &&
              (auVar11._8_8_ = 0, auVar11._0_8_ = uVar28 * uVar7, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar39, auVar12._8_8_ = 0,
              auVar12._0_8_ = ((uVar5 + uVar29) - SUB164(auVar11 * auVar20,8)) * uVar7,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar39, uVar30 = uVar31,
              uVar37 <= SUB164(auVar12 * auVar21,8)));
    }
  }
  return;
}



/* EditorAssetLibraryItem::EditorAssetLibraryItem(bool) */

void __thiscall
EditorAssetLibraryItem::EditorAssetLibraryItem(EditorAssetLibraryItem *this,bool param_1)

{
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  StringName *pSVar4;
  Object *pOVar5;
  char cVar6;
  Object *pOVar7;
  BoxContainer *pBVar8;
  TextureButton *this_00;
  BoxContainer *this_01;
  LinkButton *pLVar9;
  HSeparator *this_02;
  Label *this_03;
  Object *pOVar10;
  int iVar11;
  long in_FS_OFFSET;
  float fVar12;
  Object *local_78;
  Object *local_70;
  undefined8 local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PanelContainer::PanelContainer((PanelContainer *)this);
  *(undefined8 *)(this + 0xa38) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00129878;
  *(undefined4 *)(this + 0xa40) = 0;
  *(undefined1 (*) [16])(this + 0xa08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  local_78 = (Object *)0x0;
  Ref<StyleBoxEmpty>::instantiate<>((Ref<StyleBoxEmpty> *)&local_78);
  pOVar5 = local_78;
  fVar12 = (float)EditorScale::get_scale();
  StyleBox::set_content_margin_all(fVar12 * _LC80);
  local_58 = (Object *)0x0;
  if (pOVar5 != (Object *)0x0) {
    pOVar7 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar7 != (Object *)0x0) {
      local_58 = pOVar7;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_58 = (Object *)0x0;
      }
    }
  }
  Control::add_theme_style_override((StringName *)this,(Ref *)(SceneStringNames::singleton + 600));
  if (local_58 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar7 = local_58;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_58);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
  }
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00128f10;
  pBVar8[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar8);
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_58,"separation",false);
  iVar11 = (int)(StringName *)&local_58;
  Control::add_theme_constant_override((StringName *)pBVar8,iVar11);
  if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
    StringName::unref();
  }
  Node::add_child(this,pBVar8,0,0);
  this_00 = (TextureButton *)operator_new(0xaa0,"");
  TextureButton::TextureButton(this_00);
  postinitialize_handler((Object *)this_00);
  *(TextureButton **)(this + 0xa08) = this_00;
  fVar12 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar12 * _LC102,fVar12 * _LC102);
  Control::set_custom_minimum_size((Vector2 *)this_00);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa08),0,0);
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,true);
  this_01[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_00129288;
  postinitialize_handler((Object *)this_01);
  Node::add_child(pBVar8,this_01,0,0);
  Control::set_h_size_flags(this_01,3);
  pLVar9 = (LinkButton *)operator_new(0xb10,"");
  local_58 = (Object *)0x0;
  LinkButton::LinkButton(pLVar9,(String *)&local_58);
  postinitialize_handler((Object *)pLVar9);
  *(LinkButton **)(this + 0xa10) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xa10),2);
  LinkButton::set_underline_mode(*(undefined8 *)(this + 0xa10),1);
  Node::add_child(this_01,*(undefined8 *)(this + 0xa10),0,0);
  pLVar9 = (LinkButton *)operator_new(0xb10,"");
  local_58 = (Object *)0x0;
  LinkButton::LinkButton(pLVar9,(String *)&local_58);
  postinitialize_handler((Object *)pLVar9);
  *(LinkButton **)(this + 0xa18) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  LinkButton::set_underline_mode(*(undefined8 *)(this + 0xa18),1);
  Node::add_child(this_01,*(undefined8 *)(this + 0xa18),0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00128f10;
  pBVar8[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar8);
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_58,"separation",false);
  Control::add_theme_constant_override((StringName *)pBVar8,iVar11);
  if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
    StringName::unref();
  }
  Node::add_child(this_01,pBVar8,0,0);
  pLVar9 = (LinkButton *)operator_new(0xb10,"");
  local_58 = (Object *)0x0;
  LinkButton::LinkButton(pLVar9,(String *)&local_58);
  postinitialize_handler((Object *)pLVar9);
  *(LinkButton **)(this + 0xa20) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = (Object *)&_LC12;
  pSVar1 = *(String **)(this + 0xa20);
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_68 = 0;
  local_58 = (Object *)0x115262;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa20),0,0);
  this_02 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(this_02);
  postinitialize_handler((Object *)this_02);
  Node::add_child(pBVar8,this_02,0,0);
  if (param_1) {
    LinkButton::set_underline_mode(*(undefined8 *)(this + 0xa20),1);
    Control::set_default_cursor_shape(*(undefined8 *)(this + 0xa08),2);
    plVar2 = *(long **)(this + 0xa08);
    pcVar3 = *(code **)(*plVar2 + 0x108);
    create_custom_callable_function_pointer<EditorAssetLibraryItem>
              ((EditorAssetLibraryItem *)&local_58,(char *)this,
               (_func_void *)"&EditorAssetLibraryItem::_asset_clicked");
    (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StringName *)&local_58,0);
    Callable::~Callable((Callable *)&local_58);
    plVar2 = *(long **)(this + 0xa10);
    pcVar3 = *(code **)(*plVar2 + 0x108);
    create_custom_callable_function_pointer<EditorAssetLibraryItem>
              ((EditorAssetLibraryItem *)&local_58,(char *)this,
               (_func_void *)"&EditorAssetLibraryItem::_asset_clicked");
    (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StringName *)&local_58,0);
    Callable::~Callable((Callable *)&local_58);
    plVar2 = *(long **)(this + 0xa18);
    pcVar3 = *(code **)(*plVar2 + 0x108);
    create_custom_callable_function_pointer<EditorAssetLibraryItem>
              ((EditorAssetLibraryItem *)&local_58,(char *)this,
               (_func_void *)"&EditorAssetLibraryItem::_category_clicked");
    (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StringName *)&local_58,0);
    Callable::~Callable((Callable *)&local_58);
    plVar2 = *(long **)(this + 0xa20);
    pcVar3 = *(code **)(*plVar2 + 0x108);
    create_custom_callable_function_pointer<EditorAssetLibraryItem>
              ((EditorAssetLibraryItem *)&local_58,(char *)this,
               (_func_void *)"&EditorAssetLibraryItem::_author_clicked");
    (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(StringName *)&local_58,0);
    Callable::~Callable((Callable *)&local_58);
  }
  else {
    Control::set_mouse_filter(*(undefined8 *)(this + 0xa10),2);
    Control::set_mouse_filter(*(undefined8 *)(this + 0xa18),2);
    LinkButton::set_underline_mode(*(undefined8 *)(this + 0xa20),2);
    Control::set_default_cursor_shape(*(undefined8 *)(this + 0xa20),0);
  }
  local_70 = (Object *)0x0;
  Ref<StyleBoxEmpty>::instantiate<>((Ref<StyleBoxEmpty> *)&local_70);
  pOVar7 = local_70;
  StyleBox::set_content_margin_all(0.0);
  this_03 = (Label *)operator_new(0xad8,"");
  local_58 = (Object *)0x0;
  Label::Label(this_03,(String *)&local_58);
  postinitialize_handler((Object *)this_03);
  *(Label **)(this + 0xa28) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  pSVar4 = *(StringName **)(this + 0xa28);
  local_58 = (Object *)0x0;
  if (pOVar7 != (Object *)0x0) {
    pOVar10 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar10 != (Object *)0x0) {
      local_58 = pOVar10;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_58 = (Object *)0x0;
      }
    }
  }
  Control::add_theme_style_override(pSVar4,(Ref *)(CoreStringNames::singleton + 0xb8));
  if (local_58 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar10 = local_58;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_58);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
    }
  }
  local_58 = (Object *)&_LC12;
  local_60 = 0;
  pSVar1 = *(String **)(this + 0xa28);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x115269;
  local_68 = 0;
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Control::set_mouse_filter(*(undefined8 *)(this + 0xa28),1);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa28),0,0);
  fVar12 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar12 * _LC108._4_4_,fVar12 * (float)_LC108);
  Control::set_custom_minimum_size((Vector2 *)this);
  Control::set_h_size_flags(this);
  if (pOVar7 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(pOVar7);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
  }
  if (pOVar5 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(pOVar5);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar5,false);
          return;
        }
        goto LAB_00104a89;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104a89:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibraryItemDescription::EditorAssetLibraryItemDescription() */

void __thiscall
EditorAssetLibraryItemDescription::EditorAssetLibraryItemDescription
          (EditorAssetLibraryItemDescription *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  StringName *pSVar4;
  Vector2 *pVVar5;
  BoxContainer *pBVar6;
  BoxContainer *pBVar7;
  EditorAssetLibraryItem *this_00;
  RichTextLabel *this_01;
  CallableCustom *this_02;
  TextureRect *this_03;
  PanelContainer *this_04;
  ScrollContainer *this_05;
  int iVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined4 *)(this + 0xe00) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00129bf0;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe18) = (undefined1  [16])0x0;
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00128f10;
  postinitialize_handler((Object *)pBVar6);
  Node::add_child(this,pBVar6,0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00129288;
  postinitialize_handler((Object *)pBVar7);
  Node::add_child(pBVar6,pBVar7,0,0);
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_58,"separation",false);
  iVar8 = (int)(StringName *)&local_58;
  Control::add_theme_constant_override((StringName *)pBVar6,iVar8);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  this_00 = (EditorAssetLibraryItem *)operator_new(0xa48,"");
  EditorAssetLibraryItem::EditorAssetLibraryItem(this_00,false);
  postinitialize_handler((Object *)this_00);
  *(EditorAssetLibraryItem **)(this + 0xdb8) = this_00;
  Node::add_child(pBVar7,this_00,0,0);
  fVar9 = (float)EditorScale::get_scale();
  fVar10 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar9 * _LC109._4_4_,fVar10 * (float)_LC109);
  Control::set_custom_minimum_size((Vector2 *)pBVar7);
  this_01 = (RichTextLabel *)operator_new(0xcf0,"");
  local_58 = (char *)0x0;
  RichTextLabel::RichTextLabel(this_01,(String *)&local_58);
  postinitialize_handler((Object *)this_01);
  *(RichTextLabel **)(this + 0xdc0) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xdc0),0,0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdc0),3);
  plVar1 = *(long **)(this + 0xdc0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined **)(this_02 + 0x20) = &_LC12;
  *(EditorAssetLibraryItemDescription **)(this_02 + 0x28) = this;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_02 = &PTR_hash_0012aaf8;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar3;
  *(code **)(this_02 + 0x38) = _link_click;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "EditorAssetLibraryItemDescription::_link_click";
  Callable::Callable((Callable *)&local_58,this_02);
  StringName::StringName((StringName *)&local_60,"meta_clicked",false);
  (*pcVar2)(plVar1,(StringName *)&local_60,(StringName *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  pSVar4 = *(StringName **)(this + 0xdc0);
  fVar9 = (float)EditorScale::get_scale();
  roundf(fVar9 * _LC80);
  Control::add_theme_constant_override(pSVar4,(int)SceneStringNames::singleton + 0x98);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00129288;
  postinitialize_handler((Object *)pBVar7);
  *(BoxContainer **)(this + 0xdc8) = pBVar7;
  CanvasItem::hide();
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xdc8),0,0);
  pSVar4 = *(StringName **)(this + 0xdc8);
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_58,"separation",false);
  Control::add_theme_constant_override(pSVar4,iVar8);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdc8),3);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdc8),3);
  this_03 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_03);
  postinitialize_handler((Object *)this_03);
  *(TextureRect **)(this + 0xdf8) = this_03;
  Node::add_child(*(undefined8 *)(this + 0xdc8),this_03,0,0);
  TextureRect::set_expand_mode(*(undefined8 *)(this + 0xdf8),1);
  TextureRect::set_stretch_mode(*(undefined8 *)(this + 0xdf8),5);
  pVVar5 = *(Vector2 **)(this + 0xdf8);
  fVar9 = (float)EditorScale::get_scale();
  fVar10 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar9 * _LC112._4_4_,fVar10 * (float)_LC112);
  Control::set_custom_minimum_size(pVVar5);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdf8),3);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdf8),3);
  this_04 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(this_04);
  postinitialize_handler((Object *)this_04);
  *(PanelContainer **)(this + 0xde0) = this_04;
  Node::add_child(*(undefined8 *)(this + 0xdc8),this_04,0,0);
  pVVar5 = *(Vector2 **)(this + 0xde0);
  fVar9 = (float)EditorScale::get_scale();
  fVar10 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar9 * _LC113._4_4_,fVar10 * (float)_LC113);
  Control::set_custom_minimum_size(pVVar5);
  this_05 = (ScrollContainer *)operator_new(0xa68,"");
  ScrollContainer::ScrollContainer(this_05);
  postinitialize_handler((Object *)this_05);
  *(ScrollContainer **)(this + 0xdd0) = this_05;
  Node::add_child(*(undefined8 *)(this + 0xde0),this_05,0,0);
  ScrollContainer::set_vertical_scroll_mode(*(undefined8 *)(this + 0xdd0),0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00128f10;
  postinitialize_handler((Object *)pBVar6);
  *(BoxContainer **)(this + 0xdd8) = pBVar6;
  Control::set_v_size_flags(pBVar6,3);
  Node::add_child(*(undefined8 *)(this + 0xdd0),*(undefined8 *)(this + 0xdd8),0,0);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Download";
  local_68 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  AcceptDialog::set_ok_button_text(this,(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Close";
  local_68 = 0;
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  ConfirmationDialog::set_cancel_button_text(this,(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::EditorAssetLibrary(bool) */

void __thiscall EditorAssetLibrary::EditorAssetLibrary(EditorAssetLibrary *this,bool param_1)

{
  code *pcVar1;
  String *pSVar2;
  StringName *pSVar3;
  Object *pOVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  BoxContainer *pBVar9;
  BoxContainer *pBVar10;
  LineEdit *this_00;
  Timer *this_01;
  Button *pBVar11;
  Label *pLVar12;
  OptionButton *pOVar13;
  size_t sVar14;
  VSeparator *pVVar15;
  MenuButton *this_02;
  undefined8 uVar16;
  long *plVar17;
  PanelContainer *pPVar18;
  ScrollContainer *pSVar19;
  Object *pOVar20;
  GridContainer *this_03;
  HTTPRequest *this_04;
  CallableCustom *this_05;
  TextureRect *this_06;
  EditorFileDialog *this_07;
  char *pcVar21;
  undefined **ppuVar22;
  long in_FS_OFFSET;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  Object *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  Object *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PanelContainer::PanelContainer((PanelContainer *)this);
  *(undefined8 *)(this + 0xa58) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0012a3b8;
  *(undefined2 *)(this + 0xad0) = 0x100;
  this[0xad2] = (EditorAssetLibrary)0x0;
  *(undefined8 *)(this + 0xb00) = 2;
  *(undefined8 *)(this + 0xb08) = 0;
  *(undefined1 (*) [16])(this + 0xa08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xae0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaf0) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this + 0xb18));
  this[0xad0] = (EditorAssetLibrary)param_1;
  *(undefined4 *)(this + 0xb30) = 0;
  *(undefined4 *)(this + 0xb10) = 0;
  *(undefined1 (*) [16])(this + 0xb20) = (undefined1  [16])0x0;
  local_68 = (Object *)0x114270;
  local_70 = 0;
  local_60 = 0x1f;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar7 = Variant::operator_cast_to_int((Variant *)local_58);
  this[0xad2] = (EditorAssetLibrary)(iVar7 == 0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,true);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_00129288;
  postinitialize_handler((Object *)pBVar9);
  Node::add_child(this,pBVar9,0,0);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00128f10;
  postinitialize_handler((Object *)pBVar10);
  Node::add_child(pBVar9,pBVar10,0,0);
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_68,"separation",false);
  iVar7 = (int)(StringName *)&local_68;
  Control::add_theme_constant_override((StringName *)pBVar9,iVar7);
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  this_00 = (LineEdit *)operator_new(0xbb0,"");
  local_68 = (Object *)0x0;
  LineEdit::LineEdit(this_00,(String *)&local_68);
  postinitialize_handler((Object *)this_00);
  *(LineEdit **)(this + 0xa60) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = (Object *)0x0;
  uVar16 = *(undefined8 *)(this + 0xa60);
  if (this[0xad0] == (EditorAssetLibrary)0x0) {
    String::parse_latin1((String *)&local_68,"");
    pcVar21 = "Search Assets (Excluding Templates, Projects, and Demos)";
  }
  else {
    String::parse_latin1((String *)&local_68,"");
    pcVar21 = "Search Templates, Projects, and Demos";
  }
  local_70 = 0;
  String::parse_latin1((String *)&local_70,pcVar21);
  TTR((String *)&local_78,(String *)&local_70);
  LineEdit::set_placeholder(uVar16,(String *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xa60),0));
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xa60),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa60),3);
  plVar17 = *(long **)(this + 0xa60);
  pcVar1 = *(code **)(*plVar17 + 0x108);
  create_custom_callable_function_pointer<EditorAssetLibrary,String_const&>
            ((EditorAssetLibrary *)&local_68,(char *)this,
             (_func_void_String_ptr *)"&EditorAssetLibrary::_search_text_changed");
  (*pcVar1)(plVar17,SceneStringNames::singleton + 0x270,(StringName *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  this_01 = (Timer *)operator_new(0x428,"");
  Timer::Timer(this_01);
  postinitialize_handler((Object *)this_01);
  *(Timer **)(this + 0xa68) = this_01;
  Timer::set_one_shot(SUB81(this_01,0));
  Timer::set_wait_time(_LC121);
  plVar17 = *(long **)(this + 0xa68);
  pcVar1 = *(code **)(*plVar17 + 0x108);
  create_custom_callable_function_pointer<EditorAssetLibrary>
            ((EditorAssetLibrary *)&local_68,(char *)this,
             (_func_void *)"&EditorAssetLibrary::_filter_debounce_timer_timeout");
  StringName::StringName((StringName *)&local_70,"timeout",false);
  (*pcVar1)(plVar17,(StrRange *)&local_70,(StringName *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xa68),0,0);
  if (!param_1) {
    pVVar15 = (VSeparator *)operator_new(0x9e0,"");
    VSeparator::VSeparator(pVVar15);
    postinitialize_handler((Object *)pVVar15);
    Node::add_child(pBVar10,pVVar15,0,0);
  }
  pBVar11 = (Button *)operator_new(0xc10,"");
  local_68 = (Object *)0x0;
  Button::Button(pBVar11,(String *)&local_68);
  postinitialize_handler((Object *)pBVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = (Object *)&_LC12;
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)0x115295;
  local_78 = 0;
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Button::set_text((String *)pBVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Node::add_child(pBVar10,pBVar11,0,0);
  pcVar1 = *(code **)(*(long *)pBVar11 + 0x108);
  create_custom_callable_function_pointer<EditorAssetLibrary>
            ((EditorAssetLibrary *)&local_68,(char *)this,
             (_func_void *)"&EditorAssetLibrary::_asset_open");
  (*pcVar1)(pBVar11,SceneStringNames::singleton + 0x238,(StringName *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  pBVar11 = (Button *)operator_new(0xc10,"");
  local_68 = (Object *)0x0;
  Button::Button(pBVar11,(String *)&local_68);
  postinitialize_handler((Object *)pBVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = (Object *)&_LC12;
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)0x11529f;
  local_78 = 0;
  local_60 = 10;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Button::set_text((String *)pBVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Node::add_child(pBVar10,pBVar11,0,0);
  pcVar1 = *(code **)(*(long *)pBVar11 + 0x108);
  create_custom_callable_function_pointer<EditorAssetLibrary>
            ((EditorAssetLibrary *)&local_68,(char *)this,
             (_func_void *)"&EditorAssetLibrary::_manage_plugins");
  (*pcVar1)(pBVar11,SceneStringNames::singleton + 0x238,(StringName *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  if (param_1) {
    CanvasItem::hide();
    CanvasItem::hide();
  }
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00128f10;
  postinitialize_handler((Object *)pBVar10);
  Node::add_child(pBVar9,pBVar10,0,0);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_70 = 0;
  local_60 = 1;
  local_68 = (Object *)&_LC45;
  String::parse_latin1((StrRange *)&local_70);
  local_78 = 0;
  local_68 = (Object *)&_LC12;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  local_68 = (Object *)0x1152aa;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  String::operator+((String *)&local_88,(String *)&local_68);
  Label::Label(pLVar12,(String *)&local_88);
  postinitialize_handler((Object *)pLVar12);
  Node::add_child(pBVar10,pLVar12,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  pOVar13 = (OptionButton *)operator_new(0xd00,"");
  local_68 = (Object *)0x0;
  OptionButton::OptionButton(pOVar13,(String *)&local_68);
  postinitialize_handler((Object *)pOVar13);
  *(OptionButton **)(this + 0xa80) = pOVar13;
  ppuVar22 = &sort_text;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  do {
    local_68 = (Object *)&_LC12;
    local_70 = 0;
    local_60 = 0;
    pSVar2 = *(String **)(this + 0xa80);
    String::parse_latin1((StrRange *)&local_70);
    pcVar21 = *ppuVar22;
    sVar14 = 0;
    local_78 = 0;
    if (pcVar21 != (char *)0x0) {
      sVar14 = strlen(pcVar21);
    }
    ppuVar22 = ppuVar22 + 1;
    local_68 = (Object *)pcVar21;
    local_60 = sVar14;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    OptionButton::add_item(pSVar2,iVar7);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  } while (ppuVar22 != (undefined **)&DAT_0012b0d0);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xa80),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa80),3);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xa80),0));
  plVar17 = *(long **)(this + 0xa80);
  pcVar1 = *(code **)(*plVar17 + 0x108);
  create_custom_callable_function_pointer<EditorAssetLibrary,int>
            ((EditorAssetLibrary *)&local_68,(char *)this,
             (_func_void_int *)"&EditorAssetLibrary::_rerun_search");
  (*pcVar1)(plVar17,SceneStringNames::singleton + 0x260,(StringName *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  pVVar15 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar15);
  postinitialize_handler((Object *)pVVar15);
  Node::add_child(pBVar10,pVVar15,0,0);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_70 = 0;
  local_60 = 1;
  local_68 = (Object *)&_LC45;
  String::parse_latin1((StrRange *)&local_70);
  local_78 = 0;
  local_68 = (Object *)&_LC12;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_78);
  local_68 = (Object *)0x1152b0;
  local_80 = 0;
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  String::operator+((String *)&local_88,(String *)&local_68);
  Label::Label(pLVar12,(String *)&local_88);
  postinitialize_handler((Object *)pLVar12);
  Node::add_child(pBVar10,pLVar12,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  pOVar13 = (OptionButton *)operator_new(0xd00,"");
  local_68 = (Object *)0x0;
  OptionButton::OptionButton(pOVar13,(String *)&local_68);
  postinitialize_handler((Object *)pOVar13);
  *(OptionButton **)(this + 0xa70) = pOVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = (Object *)&_LC12;
  local_70 = 0;
  pSVar2 = *(String **)(this + 0xa70);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)&_LC131;
  local_78 = 0;
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  OptionButton::add_item(pSVar2,iVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xa70),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa70),3);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xa70),0));
  plVar17 = *(long **)(this + 0xa70);
  pcVar1 = *(code **)(*plVar17 + 0x108);
  create_custom_callable_function_pointer<EditorAssetLibrary,int>
            ((EditorAssetLibrary *)&local_68,(char *)this,
             (_func_void_int *)"&EditorAssetLibrary::_rerun_search");
  (*pcVar1)(plVar17,SceneStringNames::singleton + 0x260,(StringName *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  pVVar15 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar15);
  postinitialize_handler((Object *)pVVar15);
  Node::add_child(pBVar10,pVVar15,0,0);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_70 = 0;
  local_60 = 1;
  local_68 = (Object *)&_LC45;
  String::parse_latin1((StrRange *)&local_70);
  local_78 = 0;
  local_68 = (Object *)&_LC12;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_78);
  local_68 = (Object *)0x1152be;
  local_80 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  String::operator+((String *)&local_88,(String *)&local_68);
  Label::Label(pLVar12,(String *)&local_88);
  postinitialize_handler((Object *)pLVar12);
  Node::add_child(pBVar10,pLVar12,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  pOVar13 = (OptionButton *)operator_new(0xd00,"");
  local_68 = (Object *)0x0;
  OptionButton::OptionButton(pOVar13,(String *)&local_68);
  postinitialize_handler((Object *)pOVar13);
  *(OptionButton **)(this + 0xa78) = pOVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  _update_repository_options(this);
  plVar17 = *(long **)(this + 0xa78);
  pcVar1 = *(code **)(*plVar17 + 0x108);
  create_custom_callable_function_pointer<EditorAssetLibrary,int>
            ((EditorAssetLibrary *)&local_68,(char *)this,
             (_func_void_int *)"&EditorAssetLibrary::_repository_changed");
  (*pcVar1)(plVar17,SceneStringNames::singleton + 0x260,(StringName *)&local_68);
  Callable::~Callable((Callable *)&local_68);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xa78),0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa78),3);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xa78),0));
  pVVar15 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar15);
  postinitialize_handler((Object *)pVVar15);
  Node::add_child(pBVar10,pVVar15,0);
  this_02 = (MenuButton *)operator_new(0xc68,"");
  local_68 = (Object *)0x0;
  MenuButton::MenuButton(this_02,(String *)&local_68);
  postinitialize_handler((Object *)this_02);
  *(MenuButton **)(this + 0xaa0) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xaa0),0);
  local_68 = (Object *)&_LC12;
  local_70 = 0;
  pSVar2 = *(String **)(this + 0xaa0);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)0x1152c4;
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Button::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  bVar5 = (bool)MenuButton::get_popup();
  PopupMenu::set_hide_on_checkable_item_selection(bVar5);
  uVar16 = MenuButton::get_popup();
  local_68 = (Object *)&_LC12;
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)0x0;
  String::parse_latin1((String *)&local_68,support_text);
  TTR((String *)&local_78,(String *)&local_68);
  PopupMenu::add_check_item(uVar16,(String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  uVar16 = MenuButton::get_popup();
  local_68 = (Object *)&_LC12;
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)0x0;
  String::parse_latin1((String *)&local_68,PTR_s_Community_0012b068);
  TTR((String *)&local_78,(String *)&local_68);
  PopupMenu::add_check_item(uVar16,(String *)&local_78,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  uVar16 = MenuButton::get_popup();
  local_68 = (Object *)&_LC12;
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)0x0;
  String::parse_latin1((String *)&local_68,PTR_s_Testing_0012b070);
  TTR((String *)&local_78,(String *)&local_68);
  PopupMenu::add_check_item(uVar16,(String *)&local_78,2,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  iVar8 = MenuButton::get_popup();
  PopupMenu::set_item_checked(iVar8,false);
  iVar8 = MenuButton::get_popup();
  PopupMenu::set_item_checked(iVar8,true);
  plVar17 = (long *)MenuButton::get_popup();
  pcVar1 = *(code **)(*plVar17 + 0x108);
  create_custom_callable_function_pointer<EditorAssetLibrary,int>
            ((EditorAssetLibrary *)&local_68,(char *)this,
             (_func_void_int *)"&EditorAssetLibrary::_support_toggled");
  (*pcVar1)(plVar17,SceneStringNames::singleton + 0x240,(StringName *)&local_68);
  Callable::~Callable((Callable *)&local_68);
  pPVar18 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(pPVar18);
  postinitialize_handler((Object *)pPVar18);
  *(PanelContainer **)(this + 0xa20) = pPVar18;
  Node::add_child(pBVar9,pPVar18,0,0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa20),3);
  pSVar19 = (ScrollContainer *)operator_new(0xa68,"");
  ScrollContainer::ScrollContainer(pSVar19);
  postinitialize_handler((Object *)pSVar19);
  *(ScrollContainer **)(this + 0xa28) = pSVar19;
  ScrollContainer::set_horizontal_scroll_mode(pSVar19,0);
  Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa28),0,0);
  local_90 = (Object *)0x0;
  Ref<StyleBoxEmpty>::instantiate<>((Ref<StyleBoxEmpty> *)&local_90);
  pOVar4 = local_90;
  fVar23 = (float)EditorScale::get_scale();
  fVar23 = _LC101 * fVar23;
  fVar24 = (float)EditorScale::get_scale();
  fVar24 = _LC136 * fVar24;
  fVar25 = (float)EditorScale::get_scale();
  fVar25 = _LC101 * fVar25;
  fVar26 = (float)EditorScale::get_scale();
  StyleBox::set_content_margin_individual(fVar26 * _LC101,fVar25,fVar24,fVar23);
  pPVar18 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(pPVar18);
  postinitialize_handler((Object *)pPVar18);
  Node::add_child(*(undefined8 *)(this + 0xa28),pPVar18,0,0);
  local_68 = (Object *)0x0;
  if (pOVar4 != (Object *)0x0) {
    pOVar20 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar20 != (Object *)0x0) {
      local_68 = pOVar20;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_68 = (Object *)0x0;
      }
    }
  }
  Control::add_theme_style_override
            ((StringName *)pPVar18,(Ref *)(SceneStringNames::singleton + 600));
  if (local_68 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar20 = local_68;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_68);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar20 + 0x140))();
        Memory::free_static(pOVar20,false);
      }
    }
  }
  Control::set_h_size_flags(pPVar18,3);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,true);
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00129288;
  pBVar10[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar10);
  *(BoxContainer **)(this + 0xa30) = pBVar10;
  Control::set_h_size_flags(pBVar10,3);
  Node::add_child(pPVar18,*(undefined8 *)(this + 0xa30),0,0);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,true);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00129288;
  postinitialize_handler((Object *)pBVar10);
  *(BoxContainer **)(this + 0xa38) = pBVar10;
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa38),0,0);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_68 = (Object *)0x0;
  Label::Label(pLVar12,(String *)&local_68);
  postinitialize_handler((Object *)pLVar12);
  *(Label **)(this + 0xa40) = pLVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xa40),1);
  Node::add_child(*(undefined8 *)(this + 0xa38),*(undefined8 *)(this + 0xa40),0,0);
  pBVar11 = (Button *)operator_new(0xc10,"");
  local_68 = (Object *)0x0;
  Button::Button(pBVar11,(String *)&local_68);
  postinitialize_handler((Object *)pBVar11);
  *(Button **)(this + 0xa48) = pBVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa48),4);
  pSVar3 = *(StringName **)(this + 0xa48);
  StringName::StringName((StringName *)&local_68,"PanelBackgroundButton",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  Node::add_child(*(undefined8 *)(this + 0xa38),*(undefined8 *)(this + 0xa48),0,0);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00128f10;
  postinitialize_handler((Object *)pBVar10);
  *(BoxContainer **)(this + 0xab0) = pBVar10;
  Node::add_child(*(undefined8 *)(this + 0xa30),pBVar10,0,0);
  this_03 = (GridContainer *)operator_new(0xa10,"");
  GridContainer::GridContainer(this_03);
  postinitialize_handler((Object *)this_03);
  *(GridContainer **)(this + 0xab8) = this_03;
  _update_asset_items_columns(this);
  pSVar3 = *(StringName **)(this + 0xab8);
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_68,"h_separation",false);
  Control::add_theme_constant_override(pSVar3,iVar7);
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar3 = *(StringName **)(this + 0xab8);
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_68,"v_separation",false);
  Control::add_theme_constant_override(pSVar3,iVar7);
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xab8),0,0);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00128f10;
  postinitialize_handler((Object *)pBVar10);
  *(BoxContainer **)(this + 0xac0) = pBVar10;
  Node::add_child(*(undefined8 *)(this + 0xa30),pBVar10,0,0);
  this_04 = (HTTPRequest *)operator_new(0x4f0,"");
  HTTPRequest::HTTPRequest(this_04);
  postinitialize_handler((Object *)this_04);
  *(HTTPRequest **)(this + 0xac8) = this_04;
  Node::add_child(this,this_04,0,0);
  setup_http_request(*(HTTPRequest **)(this + 0xac8));
  plVar17 = *(long **)(this + 0xac8);
  pcVar1 = *(code **)(*plVar17 + 0x108);
  this_05 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_05);
  *(undefined **)(this_05 + 0x20) = &_LC12;
  *(EditorAssetLibrary **)(this_05 + 0x28) = this;
  *(undefined1 (*) [16])(this_05 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_05 = &PTR_hash_0012af78;
  *(undefined8 *)(this_05 + 0x40) = 0;
  uVar16 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_05 + 0x10) = 0;
  *(undefined8 *)(this_05 + 0x30) = uVar16;
  *(code **)(this_05 + 0x38) = _http_request_completed;
  CallableCustomMethodPointerBase::_setup((uint *)this_05,(int)this_05 + 0x28);
  *(char **)(this_05 + 0x20) = "EditorAssetLibrary::_http_request_completed";
  Callable::Callable((Callable *)&local_68,this_05);
  StringName::StringName((StringName *)&local_70,"request_completed",false);
  (*pcVar1)(plVar17,(StrRange *)&local_70,(StringName *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  pSVar3 = *(StringName **)(this + 0xa30);
  *(undefined4 *)(this + 0xad4) = 0;
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_68,"separation",false);
  Control::add_theme_constant_override(pSVar3,iVar7);
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00128f10;
  postinitialize_handler((Object *)pBVar10);
  *(BoxContainer **)(this + 0xa88) = pBVar10;
  Node::add_child(pBVar9,pBVar10,0,0);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_68 = (Object *)0x0;
  Label::Label(pLVar12,(String *)&local_68);
  postinitialize_handler((Object *)pLVar12);
  *(Label **)(this + 0xa98) = pLVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Node::add_child(*(undefined8 *)(this + 0xa88),*(undefined8 *)(this + 0xa98),0,0);
  this_06 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_06);
  postinitialize_handler((Object *)this_06);
  *(TextureRect **)(this + 0xa90) = this_06;
  Control::set_v_size_flags(this_06,4);
  Node::add_child(*(undefined8 *)(this + 0xa88),*(undefined8 *)(this + 0xa90),0,0);
  *(undefined8 *)(this + 0xb08) = 0;
  Node::set_process(SUB81(this,0));
  Node::set_process_shortcut_input(SUB81(this,0));
  pSVar19 = (ScrollContainer *)operator_new(0xa68,"");
  ScrollContainer::ScrollContainer(pSVar19);
  postinitialize_handler((Object *)pSVar19);
  *(ScrollContainer **)(this + 0xb20) = pSVar19;
  ScrollContainer::set_vertical_scroll_mode(pSVar19,0);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xb20),0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,false);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_00128f10;
  postinitialize_handler((Object *)pBVar9);
  *(BoxContainer **)(this + 0xb28) = pBVar9;
  Node::add_child(*(undefined8 *)(this + 0xb20),pBVar9,0,0);
  this_07 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_07);
  postinitialize_handler((Object *)this_07);
  *(EditorFileDialog **)(this + 0xa10) = this_07;
  EditorFileDialog::set_access(this_07,2);
  local_68 = (Object *)&_LC12;
  local_70 = 0;
  pSVar2 = *(String **)(this + 0xa10);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)0x1152e6;
  local_78 = 0;
  local_60 = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_80,(String *)&local_78);
  local_68 = (Object *)0x1152f6;
  local_88 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_88);
  EditorFileDialog::add_filter(pSVar2,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xa10),0);
  Node::add_child(this,*(undefined8 *)(this + 0xa10),0,0);
  plVar17 = *(long **)(this + 0xa10);
  pcVar1 = *(code **)(*plVar17 + 0x108);
  create_custom_callable_function_pointer<EditorAssetLibrary,String_const&>
            ((EditorAssetLibrary *)&local_68,(char *)this,
             (_func_void_String_ptr *)"&EditorAssetLibrary::_asset_file_selected");
  StringName::StringName((StringName *)&local_70,"file_selected",false);
  (*pcVar1)(plVar17,(StrRange *)&local_70,(StringName *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  *(undefined8 *)(this + 0xa18) = 0;
  if (pOVar4 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(pOVar4);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar4,false);
          return;
        }
        goto LAB_00106e2d;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106e2d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AssetLibraryEditorPlugin::AssetLibraryEditorPlugin() */

void __thiscall AssetLibraryEditorPlugin::AssetLibraryEditorPlugin(AssetLibraryEditorPlugin *this)

{
  EditorAssetLibrary *this_00;
  undefined8 uVar1;
  
  Node::Node((Node *)this);
  *(code **)this = RefCounted::_bind_methods;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (AssetLibraryEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (AssetLibraryEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0012a730;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  this_00 = (EditorAssetLibrary *)operator_new(0xb38,"");
  EditorAssetLibrary::EditorAssetLibrary(this_00,false);
  postinitialize_handler((Object *)this_00);
  *(EditorAssetLibrary **)(this + 0x660) = this_00;
  Control::set_v_size_flags(this_00,3);
  uVar1 = EditorMainScreen::get_control();
  Node::add_child(uVar1,*(undefined8 *)(this + 0x660),0,0);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0x660),0xf,0,0);
  CanvasItem::hide();
  return;
}



/* Container::initialize_class() [clone .part.0] */

void Container::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
        if ((code *)PTR__bind_methods_00133008 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_compatibility_methods_00133010 != Object::_bind_compatibility_methods) {
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
  if ((code *)PTR__bind_methods_00133018 != Control::_bind_methods) {
    Container::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorAssetLibraryItemDownload::_http_download_completed(int, int, Vector<String> const&,
   Vector<unsigned char> const&) */

void EditorAssetLibraryItemDownload::_http_download_completed
               (int param_1,int param_2,Vector *param_3,Vector *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  char *pcVar5;
  String *pSVar6;
  char *pcVar7;
  undefined4 in_register_0000003c;
  EditorAssetLibraryItemDownload *this;
  long in_FS_OFFSET;
  CowData<char32_t> *local_150;
  char *local_e8;
  String local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  String local_c8 [8];
  undefined8 local_c0;
  String local_b8 [8];
  String local_b0 [8];
  undefined8 local_a8;
  String local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  this = (EditorAssetLibraryItemDownload *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = (char *)0x0;
  switch(param_2) {
  default:
    if ((int)param_3 == 200) {
      if ((*(long *)(this + 0xa60) != 0) && (1 < *(uint *)(*(long *)(this + 0xa60) + -8))) {
        HTTPRequest::get_download_file();
        FileAccess::get_sha256(local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        cVar4 = String::operator!=((String *)(this + 0xa60),local_e0);
        if (cVar4 != '\0') {
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"\n");
          local_80 = 0;
          String::parse_latin1((String *)&local_80,"");
          local_88 = 0;
          String::parse_latin1
                    ((String *)&local_88,"Bad download hash, assuming file has been tampered with.")
          ;
          TTR((String *)&local_78,(String *)&local_88);
          String::operator+((String *)&local_68,(String *)&local_78);
          pcVar7 = local_e8;
          if (local_e8 != local_68) {
            pcVar5 = local_68;
            if (local_e8 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_e8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_e8 = (char *)0x0;
                Memory::free_static(pcVar7 + -0x10,false);
                pcVar5 = local_68;
              }
            }
            local_68 = (char *)0x0;
            local_e8 = pcVar5;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          local_78 = 0;
          String::parse_latin1((String *)&local_78," ");
          local_90 = 0;
          String::parse_latin1((String *)&local_90,"");
          local_98 = 0;
          String::parse_latin1((String *)&local_98,"Got:");
          TTR((String *)&local_88,(String *)&local_98);
          local_a8 = 0;
          String::parse_latin1((String *)&local_a8,"\n");
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0," ");
          local_d0 = 0;
          String::parse_latin1((String *)&local_d0,"");
          local_d8 = 0;
          String::parse_latin1((String *)&local_d8,"Expected:");
          TTR(local_c8,(String *)&local_d8);
          String::operator+(local_b8,local_c8);
          String::operator+(local_b0,local_b8);
          String::operator+(local_a0,local_b0);
          String::operator+((String *)&local_80,local_a0);
          String::operator+((String *)&local_70,(String *)&local_80);
          String::operator+((String *)&local_68,(String *)&local_70);
          String::operator+=((String *)&local_e8,(String *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          pSVar6 = *(String **)(this + 0xa68);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"");
          local_78 = 0;
          String::parse_latin1((String *)&local_78,"Failed SHA-256 hash check");
          TTR((String *)&local_68,(String *)&local_78);
          Label::set_text(pSVar6);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      }
    }
    else {
      itos((long)&local_70);
      local_80 = 0;
      String::parse_latin1((String *)&local_80," ");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"");
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"Request failed, return code:");
      TTR((String *)&local_88,(String *)&local_98);
      String::operator+((String *)&local_78,(String *)&local_88);
      String::operator+((String *)&local_68,(String *)&local_78);
      if (local_e8 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        local_e8 = local_68;
        local_68 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      pSVar6 = *(String **)(this + 0xa68);
      itos((long)&local_70);
      local_80 = 0;
      String::parse_latin1((String *)&local_80," ");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"");
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"Failed:");
      TTR((String *)&local_88,(String *)&local_98);
      String::operator+((String *)&local_78,(String *)&local_88);
      String::operator+((String *)&local_68,(String *)&local_78);
      Label::set_text(pSVar6);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    goto LAB_00107878;
  case 1:
  case 4:
  case 7:
    pSVar6 = (String *)&local_70;
    local_70 = 0;
    String::parse_latin1(pSVar6,"");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Connection error, please try again.");
    TTR((String *)&local_68,(String *)&local_78);
    if (local_e8 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      local_e8 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    goto LAB_00107809;
  case 2:
  case 5:
    pSVar6 = (String *)&local_78;
    local_78 = 0;
    String::parse_latin1(pSVar6," ");
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"");
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"Can\'t connect to host:");
    TTR((String *)&local_80,(String *)&local_90);
    String::operator+((String *)&local_70,(String *)&local_80);
    String::operator+((String *)&local_68,(String *)&local_70);
    if (local_e8 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      local_e8 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
LAB_00107809:
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar6);
    local_70 = 0;
    pSVar6 = *(String **)(this + 0xa68);
    String::parse_latin1((String *)&local_70,"");
    pcVar7 = "Can\'t connect.";
    break;
  case 3:
    local_78 = 0;
    String::parse_latin1((String *)&local_78," ");
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"");
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"Can\'t resolve hostname:");
    TTR((String *)&local_80,(String *)&local_90);
    String::operator+((String *)&local_70,(String *)&local_80);
    String::operator+((String *)&local_68,(String *)&local_70);
    if (local_e8 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      local_e8 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_70 = 0;
    pSVar6 = *(String **)(this + 0xa68);
    String::parse_latin1((String *)&local_70,"");
    pcVar7 = "Can\'t resolve.";
    break;
  case 6:
    local_78 = 0;
    String::parse_latin1((String *)&local_78," ");
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"");
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"No response from host:");
    TTR((String *)&local_80,(String *)&local_90);
    String::operator+((String *)&local_70,(String *)&local_80);
    String::operator+((String *)&local_68,(String *)&local_70);
    if (local_e8 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      local_e8 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_70 = 0;
    pSVar6 = *(String **)(this + 0xa68);
    String::parse_latin1((String *)&local_70,"");
    pcVar7 = "No response.";
    break;
  case 9:
    itos((long)&local_70);
    local_80 = 0;
    String::parse_latin1((String *)&local_80," ");
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"");
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"Request failed, return code:");
    TTR((String *)&local_88,(String *)&local_98);
    String::operator+((String *)&local_78,(String *)&local_88);
    String::operator+((String *)&local_68,(String *)&local_78);
    if (local_e8 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      local_e8 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_70 = 0;
    pSVar6 = *(String **)(this + 0xa68);
    String::parse_latin1((String *)&local_70,"");
    pcVar7 = "Request failed.";
    break;
  case 10:
  case 0xb:
    HTTPRequest::get_download_file();
    local_80 = 0;
    String::parse_latin1((String *)&local_80," ");
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"");
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"Cannot save response to:");
    TTR((String *)&local_88,(String *)&local_98);
    String::operator+((String *)&local_78,(String *)&local_88);
    String::operator+((String *)&local_68,(String *)&local_78);
    if (local_e8 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      local_e8 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_70 = 0;
    pSVar6 = *(String **)(this + 0xa68);
    String::parse_latin1((String *)&local_70,"");
    pcVar7 = "Write error.";
    break;
  case 0xc:
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Request failed, too many redirects");
    TTR((String *)&local_68,(String *)&local_78);
    if (local_e8 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      local_e8 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_70 = 0;
    pSVar6 = *(String **)(this + 0xa68);
    String::parse_latin1((String *)&local_70,"");
    pcVar7 = "Redirect loop.";
    break;
  case 0xd:
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Request failed, timeout");
    TTR((String *)&local_68,(String *)&local_78);
    if (local_e8 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      local_e8 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_70 = 0;
    pSVar6 = *(String **)(this + 0xa68);
    String::parse_latin1((String *)&local_70,"");
    pcVar7 = "Timeout.";
  }
  local_78 = 0;
  String::parse_latin1((String *)&local_78,pcVar7);
  TTR((String *)&local_68,(String *)&local_78);
  Label::set_text(pSVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00107878:
  local_150 = (CowData<char32_t> *)&local_e8;
  local_58 = (undefined1  [16])0x0;
  CanvasItem::set_modulate(*(Color **)(this + 0xa28));
  ProgressBar::set_indeterminate(SUB81(*(undefined8 *)(this + 0xa28),0));
  if ((local_e8 == (char *)0x0) || (*(uint *)(local_e8 + -8) < 2)) {
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa30),0));
    pSVar6 = *(String **)(this + 0xa68);
    local_70 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Ready to install!";
    local_78 = 0;
    local_60 = 0x11;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    Label::set_text(pSVar6);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    Node::set_process(SUB41(param_1,0));
    install(this);
    CowData<char32_t>::_unref(local_150);
  }
  else {
    uVar2 = *(undefined8 *)(this + 0xa48);
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"\n");
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"");
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"Asset Download Error:");
    TTR((String *)&local_80,(String *)&local_90);
    String::operator+((String *)&local_70,(String *)&local_80);
    String::operator+((String *)&local_68,(String *)&local_70);
    AcceptDialog::set_text(uVar2,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_58._8_8_;
    local_58 = auVar3 << 0x40;
    Window::popup_centered(*(Vector2i **)(this + 0xa48));
    CanvasItem::show();
    CowData<char32_t>::_unref(local_150);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_bind_methods() */

void EditorAssetLibrary::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  StringName *local_1a8;
  undefined8 local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  undefined4 local_148 [2];
  undefined8 local_140;
  char *local_138;
  int local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_118;
  long local_110;
  undefined *local_108;
  int local_100;
  long local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined8 local_e0;
  long local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
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
  local_158 = 0;
  local_160 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_160);
  local_168 = 0;
  local_b8 = "name";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_168);
  local_118 = 4;
  local_110 = 0;
  if (local_168 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_168);
  }
  local_108 = (undefined *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_160 == 0) {
LAB_00108c3b:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_158);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_160);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_00108c3b;
    StringName::StringName((StringName *)&local_b8,(String *)&local_f8,false);
    if (local_108 == local_b8) {
      if ((StringName::configured != '\0') && (local_b8 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = local_b8;
    }
  }
  local_1a8 = (StringName *)&local_108;
  local_170 = 0;
  local_178 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_178);
  local_180 = 0;
  local_b8 = "zip_path";
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_180);
  local_148[0] = 4;
  local_140 = 0;
  if (local_180 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)&local_180);
  }
  local_138 = (char *)0x0;
  local_130 = 0;
  local_128 = 0;
  if (local_178 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_178);
    local_120 = 6;
    if (local_130 == 0x11) {
      StringName::StringName((StringName *)&local_b8,(String *)&local_128,false);
      if (local_138 == local_b8) {
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_138 = local_b8;
      }
      goto LAB_00108d9d;
    }
  }
  local_120 = 6;
  StringName::operator=((StringName *)&local_138,(StringName *)&local_170);
LAB_00108d9d:
  local_150 = 0;
  local_b8 = "install_asset";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_150);
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
  if (local_150 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_150);
  }
  local_e0 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,local_118);
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  }
  StringName::StringName((StringName *)&local_d8,local_1a8);
  local_c8 = 0;
  local_d0 = local_100;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  }
  local_c0 = local_f0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_e8 = "EditorAssetLibrary";
  local_188 = 0;
  local_e0 = 0x12;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_e8,(String *)&local_188,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
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
      lVar6 = 0;
      piVar5 = piVar4;
      if (lVar2 != 0) {
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_108 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_158 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorAssetLibraryItemDownload::_bind_methods() */

void EditorAssetLibraryItemDownload::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  StringName *local_1a8;
  undefined8 local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  undefined4 local_148 [2];
  undefined8 local_140;
  char *local_138;
  int local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_118;
  long local_110;
  undefined *local_108;
  int local_100;
  long local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined8 local_e0;
  long local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
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
  local_158 = 0;
  local_160 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_160);
  local_168 = 0;
  local_b8 = "name";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_168);
  local_118 = 4;
  local_110 = 0;
  if (local_168 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_168);
  }
  local_108 = (undefined *)0x0;
  local_100 = 0;
  local_f8 = 0;
  if (local_160 == 0) {
LAB_001093eb:
    local_f0 = 6;
    StringName::operator=((StringName *)&local_108,(StringName *)&local_158);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_160);
    local_f0 = 6;
    if (local_100 != 0x11) goto LAB_001093eb;
    StringName::StringName((StringName *)&local_b8,(String *)&local_f8,false);
    if (local_108 == local_b8) {
      if ((StringName::configured != '\0') && (local_b8 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_108 = local_b8;
    }
  }
  local_1a8 = (StringName *)&local_108;
  local_170 = 0;
  local_178 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_178);
  local_180 = 0;
  local_b8 = "zip_path";
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_180);
  local_148[0] = 4;
  local_140 = 0;
  if (local_180 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)&local_180);
  }
  local_138 = (char *)0x0;
  local_130 = 0;
  local_128 = 0;
  if (local_178 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)&local_178);
    local_120 = 6;
    if (local_130 == 0x11) {
      StringName::StringName((StringName *)&local_b8,(String *)&local_128,false);
      if (local_138 == local_b8) {
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_138 = local_b8;
      }
      goto LAB_0010954d;
    }
  }
  local_120 = 6;
  StringName::operator=((StringName *)&local_138,(StringName *)&local_170);
LAB_0010954d:
  local_150 = 0;
  local_b8 = "install_asset";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_150);
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
  if (local_150 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_150);
  }
  local_e0 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,local_118);
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  }
  StringName::StringName((StringName *)&local_d8,local_1a8);
  local_c8 = 0;
  local_d0 = local_100;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  }
  local_c0 = local_f0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_e8 = "EditorAssetLibraryItemDownload";
  local_188 = 0;
  local_e0 = 0x1e;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_e8,(String *)&local_188,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
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
      lVar6 = 0;
      piVar5 = piVar4;
      if (lVar2 != 0) {
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_170 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_108 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  if ((StringName::configured != '\0') && (local_158 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorAssetLibraryItemDownload::_notification(int) */

void EditorAssetLibraryItemDownload::_notification(int param_1)

{
  StringName *pSVar1;
  Ref *pRVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 in_RDX;
  undefined8 in_RSI;
  char *pcVar6;
  undefined4 in_register_0000003c;
  StringName *pSVar7;
  String *pSVar8;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  Object *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pSVar7 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)in_RSI != 0x11) {
    if ((int)in_RSI == 0x2d) {
      pSVar1 = *(StringName **)(pSVar7 + 0xa10);
      if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname,in_RSI,
                                      in_RDX,&_notification(int)::{lambda()#1}::operator()()::sname)
         , iVar4 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
      Control::get_theme_stylebox((StringName *)&local_60,pSVar7);
      Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
      if (((local_60 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_60), cVar3 != '\0')) {
        (**(code **)(*(long *)local_60 + 0x140))(local_60);
        Memory::free_static(local_60,false);
      }
      pSVar1 = *(StringName **)(pSVar7 + 0xa68);
      if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
         iVar4 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
      if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
         iVar4 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
      local_58 = Control::get_theme_color
                           (pSVar7,(StringName *)
                                   &_notification(int)::{lambda()#2}::operator()()::sname);
      uStack_50 = in_XMM1_Qa;
      Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
      pRVar2 = *(Ref **)(pSVar7 + 0xa40);
      if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
         iVar4 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
      }
      if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
         iVar4 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
      }
      Control::get_theme_icon((StringName *)&local_60,pSVar7);
      TextureButton::set_texture_normal(pRVar2);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
    }
    goto LAB_00109a46;
  }
  local_58 = CONCAT44(_LC226,_LC226);
  uStack_50 = CONCAT44(_LC226,_LC226);
  CanvasItem::set_modulate(*(Color **)(pSVar7 + 0xa28));
  iVar4 = HTTPRequest::get_downloaded_bytes();
  if (0 < iVar4) {
    iVar4 = HTTPRequest::get_body_size();
    Range::set_max((double)iVar4);
    iVar4 = HTTPRequest::get_downloaded_bytes();
    Range::set_value((double)iVar4);
  }
  iVar4 = HTTPRequest::get_http_client_status();
  if (iVar4 == 7) {
    iVar5 = HTTPRequest::get_body_size();
    if (iVar5 < 1) {
      ProgressBar::set_indeterminate(SUB81(*(undefined8 *)(pSVar7 + 0xa28),0));
      pSVar8 = *(String **)(pSVar7 + 0xa68);
      HTTPRequest::get_downloaded_bytes();
      String::humanize_size((ulong)&local_68);
      local_78 = 0;
      String::parse_latin1((String *)&local_78," (%s)");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"Downloading...");
      TTR((String *)&local_80,(String *)&local_90);
      String::operator+((String *)&local_70,(String *)&local_80);
      vformat<String>((CowData<char32_t> *)&local_60,(String *)&local_70,
                      (CowData<char32_t> *)&local_68);
      Label::set_text(pSVar8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      iVar5 = *(int *)(pSVar7 + 0xa70);
    }
    else {
      ProgressBar::set_indeterminate(SUB81(*(undefined8 *)(pSVar7 + 0xa28),0));
      pSVar8 = *(String **)(pSVar7 + 0xa68);
      HTTPRequest::get_body_size();
      String::humanize_size((ulong)&local_68);
      HTTPRequest::get_downloaded_bytes();
      String::humanize_size((ulong)&local_70);
      local_80 = 0;
      String::parse_latin1((String *)&local_80,"");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"Downloading (%s / %s)...");
      TTR((String *)&local_78,(String *)&local_88);
      vformat<String,String>
                ((CowData<char32_t> *)&local_60,(String *)&local_78,(CowData<char32_t> *)&local_70,
                 (CowData<char32_t> *)&local_68);
      Label::set_text(pSVar8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      iVar5 = *(int *)(pSVar7 + 0xa70);
    }
    if (iVar5 == 7) goto LAB_00109a46;
  }
  else {
    if (*(int *)(pSVar7 + 0xa70) == iVar4) goto LAB_00109a46;
    if (iVar4 == 3) {
      local_68 = 0;
      pSVar8 = *(String **)(pSVar7 + 0xa68);
      String::parse_latin1((String *)&local_68,"");
      pcVar6 = "Connecting...";
    }
    else if (iVar4 == 6) {
      local_68 = 0;
      pSVar8 = *(String **)(pSVar7 + 0xa68);
      String::parse_latin1((String *)&local_68,"");
      pcVar6 = "Requesting...";
    }
    else {
      if (iVar4 != 1) goto LAB_00109cd0;
      local_68 = 0;
      pSVar8 = *(String **)(pSVar7 + 0xa68);
      String::parse_latin1((String *)&local_68,"");
      pcVar6 = "Resolving...";
    }
    local_70 = 0;
    String::parse_latin1((String *)&local_70,pcVar6);
    TTR((String *)&local_60,(String *)&local_70);
    Label::set_text(pSVar8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Range::set_max(_LC231);
    Range::set_value(0.0);
  }
LAB_00109cd0:
  *(int *)(pSVar7 + 0xa70) = iVar4;
LAB_00109a46:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibraryItem::_bind_methods() */

void EditorAssetLibraryItem::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  MethodBind *pMVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  int *local_78;
  undefined8 local_70;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar5 = create_method_bind<EditorAssetLibraryItem,int,int,Ref<Texture2D>const&>(set_image);
  StringName::StringName((StringName *)&local_c8,"set_image",false);
  local_b8._0_8_ = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  uVar3 = local_b8._0_8_;
  if ((long *)local_b8._0_8_ != (long *)0x0) {
    LOCK();
    plVar7 = (long *)(local_b8._0_8_ + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if ((long *)local_b8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_b8._0_8_ + -8);
      local_b8._0_8_ = (long *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        plVar7 = (long *)uVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static((long *)(uVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_e0 = 0;
  local_c8 = "asset_selected";
  local_c0 = 0xe;
  String::parse_latin1((StrRange *)&local_e0);
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = (int *)0x0;
  local_70 = 0;
  local_60 = 0;
  local_b8 = (undefined1  [16])0x0;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_e0);
  }
  local_e8 = 0;
  local_d0 = 0x16;
  local_d8 = "EditorAssetLibraryItem";
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
  ClassDB::add_signal((StringName *)&local_d8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar7 = (long *)(local_60 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar7 = (long *)(local_78 + -4);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_e0 = 0;
  local_c8 = "category_selected";
  local_c0 = 0x11;
  String::parse_latin1((StrRange *)&local_e0);
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = (int *)0x0;
  local_70 = 0;
  local_60 = 0;
  local_b8 = (undefined1  [16])0x0;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_e0);
  }
  local_d8 = "EditorAssetLibraryItem";
  local_e8 = 0;
  local_d0 = 0x16;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
  ClassDB::add_signal((StringName *)&local_d8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar7 = (long *)(local_60 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar7 = (long *)(local_78 + -4);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_e0 = 0;
  local_c8 = "author_selected";
  local_c0 = 0xf;
  String::parse_latin1((StrRange *)&local_e0);
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = (int *)0x0;
  local_70 = 0;
  local_60 = 0;
  local_b8 = (undefined1  [16])0x0;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_e0);
  }
  local_d8 = "EditorAssetLibraryItem";
  local_e8 = 0;
  local_d0 = 0x16;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
  ClassDB::add_signal((StringName *)&local_d8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar7 = (long *)(local_60 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar7 = (long *)(local_78 + -4);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibraryItemDescription::_bind_methods() */

void EditorAssetLibraryItemDescription::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68 [2];
  long *local_58;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_68,(char ***)"set_image",0);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar4 = create_method_bind<EditorAssetLibraryItemDescription,int,int,Ref<Texture2D>const&>
                     (set_image);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_58;
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar5 = local_58 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_58 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_58[-1];
      local_58 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  size_t __n;
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar3 = 0x10;
  if (__n != 0) {
    uVar3 = __n - 1 | __n - 1 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    uVar3 = (uVar3 | uVar3 >> 0x20) + 0x11;
  }
  puVar2 = (undefined8 *)Memory::alloc_static(uVar3,false);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 1;
    puVar2[1] = __n;
    memcpy(puVar2 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar2 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* EditorAssetLibraryItemDownload::_make_request() */

void __thiscall EditorAssetLibraryItemDownload::_make_request(EditorAssetLibraryItemDownload *this)

{
  String *pSVar1;
  undefined8 uVar2;
  int iVar3;
  long in_FS_OFFSET;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CanvasItem::hide();
  HTTPRequest::cancel_request();
  pSVar1 = *(String **)(this + 0xa50);
  local_60 = 0;
  local_58 = ".zip";
  local_50[0] = 4;
  String::parse_latin1((StrRange *)&local_60);
  EditorPaths::get_cache_dir();
  itos((long)local_78);
  operator+((char *)local_70,(String *)"tmp_asset_");
  String::path_join((String *)&local_68);
  String::operator+((String *)&local_58,(String *)&local_68);
  HTTPRequest::set_download_file(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  uVar2 = *(undefined8 *)(this + 0xa50);
  local_50[0] = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_50[0] = 0;
  iVar3 = HTTPRequest::request(uVar2,this + 0xa58,(String *)&local_58,0,(StrRange *)&local_60);
  CowData<String>::_unref((CowData<String> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (iVar3 == 0) {
    ProgressBar::set_indeterminate(SUB81(*(undefined8 *)(this + 0xa28),0));
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::set_process(SUB81(this,0));
      return;
    }
  }
  else {
    pSVar1 = *(String **)(this + 0xa68);
    local_60 = 0;
    local_58 = "";
    local_50[0] = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Error making request";
    local_68 = 0;
    local_50[0] = 0x14;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_58,(String *)&local_68);
    Label::set_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibraryItemDownload::configure(String const&, int, Ref<Texture2D> const&, String
   const&, String const&) */

void __thiscall
EditorAssetLibraryItemDownload::configure
          (EditorAssetLibraryItemDownload *this,String *param_1,int param_2,Ref *param_3,
          String *param_4,String *param_5)

{
  Ref *pRVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Label::set_text(*(String **)(this + 0xa20));
  TextureRect::set_texture(*(Ref **)(this + 0xa18));
  lVar2 = *(long *)param_3;
  *(int *)(this + 0xa74) = param_2;
  if (lVar2 == 0) {
    pRVar1 = *(Ref **)(this + 0xa18);
    if (configure(String_const&,int,Ref<Texture2D>const&,String_const&,String_const&)::{lambda()#1}
        ::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&configure(String_const&,int,Ref<Texture2D>const&,String_const&,String_const&)
                                   ::{lambda()#1}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&configure(String_const&,int,Ref<Texture2D>const&,String_const&,String_const&)
                             ::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &configure(String_const&,int,Ref<Texture2D>const&,String_const&,String_const&)
                      ::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&configure(String_const&,int,Ref<Texture2D>const&,String_const&,String_const&)
                             ::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_48);
    TextureRect::set_texture(pRVar1);
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
  }
  if (*(long *)(this + 0xa58) != *(long *)param_4) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa58),(CowData *)param_4);
  }
  if (*(long *)(this + 0xa60) != *(long *)param_5) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa60),(CowData *)param_5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _make_request(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_install_asset() */

void __thiscall EditorAssetLibrary::_install_asset(EditorAssetLibrary *this)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  EditorAssetLibraryItemDownload *pEVar6;
  CallableCustom *this_00;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  Object *local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xb08) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_install_asset","editor/plugins/asset_library_editor_plugin.cpp",0x2de,
                       "Parameter \"description\" is null.",0,0);
      return;
    }
  }
  else {
    pEVar6 = (EditorAssetLibraryItemDownload *)
             _get_asset_in_progress(this,*(int *)(*(long *)(this + 0xb08) + 0xe00));
    if (pEVar6 == (EditorAssetLibraryItemDownload *)0x0) {
      pEVar6 = (EditorAssetLibraryItemDownload *)operator_new(0xa88,"");
      EditorAssetLibraryItemDownload::EditorAssetLibraryItemDownload(pEVar6);
      postinitialize_handler((Object *)pEVar6);
      Node::add_child(*(undefined8 *)(this + 0xb28),pEVar6,0,0);
      lVar7 = *(long *)(this + 0xb08);
      local_70 = 0;
      if (*(long *)(lVar7 + 0xe18) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar7 + 0xe18));
        lVar7 = *(long *)(this + 0xb08);
      }
      local_68 = 0;
      if (*(long *)(lVar7 + 0xe08) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar7 + 0xe08));
        lVar7 = *(long *)(this + 0xb08);
      }
      local_60 = (Object *)0x0;
      if (*(Object **)(lVar7 + 0xe20) != (Object *)0x0) {
        local_60 = *(Object **)(lVar7 + 0xe20);
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          local_60 = (Object *)0x0;
        }
        lVar7 = *(long *)(this + 0xb08);
      }
      iVar1 = *(int *)(lVar7 + 0xe00);
      local_58[0] = 0;
      if (*(long *)(lVar7 + 0xe10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)(lVar7 + 0xe10));
      }
      EditorAssetLibraryItemDownload::configure
                (pEVar6,(String *)local_58,iVar1,(Ref *)&local_60,(String *)&local_68,
                 (String *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      if (local_60 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        pOVar4 = local_60;
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(local_60);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))();
            Memory::free_static(pOVar4,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if (this[0xad0] != (EditorAssetLibrary)0x0) {
        pEVar6[0xa78] = (EditorAssetLibraryItemDownload)0x1;
        pcVar2 = *(code **)(*(long *)pEVar6 + 0x108);
        this_00 = (CallableCustom *)operator_new(0x48,"");
        CallableCustom::CallableCustom(this_00);
        *(EditorAssetLibrary **)(this_00 + 0x28) = this;
        *(undefined **)(this_00 + 0x20) = &_LC12;
        *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
        *(undefined ***)this_00 = &PTR_hash_0012aca8;
        *(undefined8 *)(this_00 + 0x40) = 0;
        uVar3 = *(undefined8 *)(this + 0x60);
        *(undefined8 *)(this_00 + 0x10) = 0;
        *(undefined8 *)(this_00 + 0x30) = uVar3;
        *(code **)(this_00 + 0x38) = _install_external_asset;
        CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
        *(char **)(this_00 + 0x20) = "EditorAssetLibrary::_install_external_asset";
        Callable::Callable((Callable *)local_58,this_00);
        StringName::StringName((StringName *)&local_60,"install_asset",false);
        (*pcVar2)(pEVar6,(Ref *)&local_60,(CowData<char32_t> *)local_58,0);
        if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
          StringName::unref();
        }
        Callable::~Callable((Callable *)local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorAssetLibraryItemDownload::install(pEVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_api_request(String const&, EditorAssetLibrary::RequestType, String const&)
    */

void EditorAssetLibrary::_api_request
               (EditorAssetLibrary *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  EditorAssetLibrary local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0xb10) != 0) {
    HTTPRequest::cancel_request();
  }
  CanvasItem::hide();
  if (param_1[0xad2] == (EditorAssetLibrary)0x0) {
    *(undefined4 *)(param_1 + 0xb10) = param_3;
    uVar1 = *(undefined8 *)(param_1 + 0xac8);
    local_58 = "";
    local_70 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = "/";
    local_60 = 0;
    local_88 = 0;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_88);
    String::operator+((String *)&local_80,(String *)(param_1 + 0xa08));
    String::operator+((String *)&local_78,(String *)&local_80);
    String::operator+((String *)&local_58,(String *)&local_78);
    HTTPRequest::request(uVar1,(String *)&local_58,local_68,0,(StrRange *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<String>::_unref((CowData<String> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  else {
    create_custom_callable_function_pointer<EditorAssetLibrary>
              (local_68,(char *)param_1,(_func_void *)"&EditorAssetLibrary::_force_online_mode");
    local_78 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_58 = "Go Online";
    local_80 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String *)&local_70,(String *)&local_80);
    local_58 = "";
    local_88 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    local_58 = 
    "The Asset Library requires an online connection and involves sending data over the internet.";
    local_50 = 0x5c;
    String::parse_latin1((StrRange *)&local_90);
    TTR((String *)&local_58,(String *)&local_90);
    _set_library_message_with_action
              (param_1,(String *)&local_58,(String *)&local_70,(Callable *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    Callable::~Callable((Callable *)local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_select_asset(int) */

void EditorAssetLibrary::_select_asset(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = &_LC12;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_50);
  itos((long)&local_58);
  operator+((char *)&local_48,(String *)"asset/");
  _api_request(CONCAT44(in_register_0000003c,param_1),&local_48,3,(StrRange *)&local_50);
  puVar3 = local_48;
  if (local_48 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_repository_changed(int) */

void EditorAssetLibrary::_repository_changed(int param_1)

{
  char *pcVar1;
  undefined4 in_register_0000003c;
  String *pSVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pSVar2 = (String *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = "";
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Loading...";
  local_78 = 0;
  local_60 = 10;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  _set_library_message(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CanvasItem::hide();
  CanvasItem::hide();
  CanvasItem::hide();
  LineEdit::set_editable(SUB81(*(undefined8 *)(pSVar2 + 0xa60),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(pSVar2 + 0xa80),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(pSVar2 + 0xa70),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(pSVar2 + 0xaa0),0));
  OptionButton::get_item_metadata((int)local_58);
  Variant::operator_cast_to_String((Variant *)&local_68);
  if (*(char **)(pSVar2 + 0xa08) != local_68) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pSVar2 + 0xa08));
    pcVar1 = local_68;
    local_68 = (char *)0x0;
    *(char **)(pSVar2 + 0xa08) = pcVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_70 = 0;
  if (pSVar2[0xad0] == (String)0x0) {
    local_68 = "";
    local_60 = 0;
  }
  else {
    local_60 = 0xd;
    local_68 = "?type=project";
  }
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "configure";
  local_78 = 0;
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_78);
  _api_request(pSVar2,(StrRange *)&local_78,1,(StrRange *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_request_current_config() */

void __thiscall EditorAssetLibrary::_request_current_config(EditorAssetLibrary *this)

{
  OptionButton::get_selected();
  _repository_changed((int)this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorAssetLibrary::_notification(int) */

void EditorAssetLibrary::_notification(int param_1)

{
  Ref *pRVar1;
  StringName *pSVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  String *pSVar6;
  int in_ESI;
  undefined4 in_register_0000003c;
  EditorAssetLibrary *this;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  undefined8 local_68;
  Object *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  this = (EditorAssetLibrary *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x2d < in_ESI) {
    if (in_ESI == 10000) {
      pSVar6 = (String *)EditorSettings::get_singleton();
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"asset_library");
      cVar4 = EditorSettings::check_changed_settings_in_group(pSVar6);
      if (cVar4 == '\0') {
        pSVar6 = (String *)EditorSettings::get_singleton();
        local_60 = (Object *)0x0;
        String::parse_latin1((String *)&local_60,"network");
        cVar4 = EditorSettings::check_changed_settings_in_group(pSVar6);
        if (cVar4 == '\0') {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          goto switchD_0010ba69_caseD_b;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
      _update_repository_options(this);
      setup_http_request(*(HTTPRequest **)(this + 0xac8));
      local_60 = (Object *)0x0;
      String::parse_latin1((String *)&local_60,"network/connection/network_mode");
      _EDITOR_GET((String *)&local_58);
      iVar5 = Variant::operator_cast_to_int((Variant *)&local_58);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (((this[0xad2] != (EditorAssetLibrary)(iVar5 == 0)) &&
          (this[0xad2] = (EditorAssetLibrary)(iVar5 == 0), iVar5 != 0)) &&
         (cVar4 = CanvasItem::is_visible(), cVar4 != '\0')) {
        OptionButton::get_selected();
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010be4c:
          _repository_changed(param_1);
          return;
        }
        goto LAB_0010bbff;
      }
    }
    goto switchD_0010ba69_caseD_b;
  }
  if (in_ESI < 10) goto switchD_0010ba69_caseD_b;
  switch(in_ESI) {
  case 10:
  case 0x2d:
    pRVar1 = *(Ref **)(this + 0xa90);
    if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
       iVar5 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_60);
    TextureRect::set_texture(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
    pRVar1 = *(Ref **)(this + 0xa60);
    if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
       iVar5 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_60);
    LineEdit::set_right_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
    pSVar2 = *(StringName **)(this + 0xa20);
    if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
       iVar5 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
    }
    Control::get_theme_stylebox((StringName *)&local_60,(StringName *)this);
    Control::add_theme_style_override(pSVar2,(Ref *)(SceneStringNames::singleton + 600));
    if (((local_60 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar3 = local_60, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_60), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    pSVar2 = *(StringName **)(this + 0xb20);
    if ((_notification(int)::{lambda()#6}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname),
       iVar5 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
    }
    Control::get_theme_stylebox((StringName *)&local_60,(StringName *)this);
    Control::add_theme_style_override(pSVar2,(Ref *)(SceneStringNames::singleton + 600));
    if (((local_60 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar3 = local_60, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_60), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    pSVar2 = *(StringName **)(this + 0xa98);
    if ((_notification(int)::{lambda()#7}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname),
       iVar5 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
    }
    local_58 = Control::get_theme_color
                         ((StringName *)this,
                          (StringName *)&_notification(int)::{lambda()#7}::operator()()::sname);
    uStack_50 = in_XMM1_Qa;
    StringName::StringName((StringName *)&local_60,"color",false);
    Control::add_theme_color_override(pSVar2,(Color *)&local_60);
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
    break;
  case 0xd:
    if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
       iVar5 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
    if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
       iVar5 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_theme_stylebox((StringName *)&local_60,(StringName *)this);
    Control::add_theme_style_override((StringName *)this,(Ref *)(SceneStringNames::singleton + 600))
    ;
    if (((local_60 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar3 = local_60, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_60), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::move_to_front();
      return;
    }
    goto LAB_0010bbff;
  case 0x11:
    iVar5 = HTTPRequest::get_http_client_status();
    if (iVar5 == 0) {
      local_58 = CONCAT44(_LC226,_LC226);
      uStack_50 = CONCAT44(_LC226,_LC226);
      CanvasItem::set_modulate(*(Color **)(this + 0xa28));
    }
    else {
      local_58 = __LC261;
      uStack_50 = _UNK_0012b6c8;
      CanvasItem::set_modulate(*(Color **)(this + 0xa28));
    }
    iVar5 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xb28),0));
    cVar4 = CanvasItem::is_visible();
    if ((bool)cVar4 == (iVar5 == 0)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xb20),0));
        return;
      }
      goto LAB_0010bbff;
    }
    break;
  case 0x1f:
    cVar4 = CanvasItem::is_visible();
    if ((cVar4 != '\0') && (Control::grab_focus(), this[0xad1] != (EditorAssetLibrary)0x0)) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010bbff;
      goto LAB_0010be4c;
    }
    break;
  case 0x28:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_asset_items_columns(this);
      return;
    }
    goto LAB_0010bbff;
  }
switchD_0010ba69_caseD_b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bbff:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_search(int) */

void __thiscall EditorAssetLibrary::_search(EditorAssetLibrary *this,int param_1)

{
  undefined8 uVar1;
  char *__s;
  char cVar2;
  int iVar3;
  size_t sVar4;
  String *this_00;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  if (this[0xad0] == (EditorAssetLibrary)0x0) {
    String::operator+=((String *)&local_90,"?");
  }
  else {
    String::operator+=((String *)&local_90,"?type=project&");
  }
  iVar3 = OptionButton::get_selected();
  local_70 = 0;
  local_68 = *(char **)(sort_key + (long)iVar3 * 8);
  local_60 = 0;
  if (local_68 != (char *)0x0) {
    local_60 = strlen(local_68);
  }
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "sort=";
  local_80 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  String::operator+((String *)&local_78,(String *)&local_88);
  String::operator+((String *)&local_68,(String *)&local_78);
  String::operator+=((String *)&local_90,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  lVar5 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "4.4";
  local_70 = 0;
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_70);
  operator+((char *)&local_68,(String *)"&godot_version=");
  String::operator+=((String *)&local_90,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_80 = 0;
  do {
    iVar3 = MenuButton::get_popup();
    cVar2 = PopupMenu::is_item_checked(iVar3);
    if (cVar2 != '\0') {
      local_70 = 0;
      local_68 = "+";
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_70);
      local_78 = 0;
      __s = (&support_key)[lVar5];
      sVar4 = 0;
      if (__s != (char *)0x0) {
        sVar4 = strlen(__s);
      }
      local_68 = __s;
      local_60 = sVar4;
      String::parse_latin1((StrRange *)&local_78);
      String::operator+((String *)&local_68,(String *)&local_78);
      String::operator+=((String *)&local_80,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  if ((local_80 != 0) && (1 < (uint)*(undefined8 *)(local_80 + -8))) {
    String::substr((int)(StrRange *)&local_70,(int)(StrRange *)&local_80);
    operator+((char *)&local_68,(String *)"&support=");
    String::operator+=((String *)&local_90,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  iVar3 = OptionButton::get_selected();
  if (0 < iVar3) {
    OptionButton::get_selected();
    OptionButton::get_item_metadata((int)(Variant *)local_58);
    Variant::operator_cast_to_long((Variant *)local_58);
    itos((long)&local_70);
    operator+((char *)&local_68,(String *)"&category=");
    String::operator+=((String *)&local_90,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  iVar3 = OptionButton::get_selected();
  if (iVar3 % 2 == 1) {
    String::operator+=((String *)&local_90,"&reverse=true");
  }
  LineEdit::get_text();
  this_00 = (String *)&local_68;
  if ((local_68 != (char *)0x0) && (uVar1 = *(undefined8 *)(local_68 + -8), (int)uVar1 != 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((int)uVar1 == 1) goto LAB_0010c58f;
    LineEdit::get_text();
    String::uri_encode();
    operator+((char *)&local_68,(String *)"&filter=");
    String::operator+=((String *)&local_90,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    this_00 = (String *)&local_78;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
LAB_0010c58f:
  if (0 < param_1) {
    itos((long)&local_70);
    operator+((char *)&local_68,(String *)"&page=");
    String::operator+=((String *)&local_90,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  local_70 = 0;
  local_68 = "asset";
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_70);
  _api_request(this,(StrRange *)&local_70,2,(String *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_select_category(int) */

void __thiscall EditorAssetLibrary::_select_category(EditorAssetLibrary *this,int param_1)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  iVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = OptionButton::get_item_count();
  if (iVar1 < 1) {
LAB_0010c8e0:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    do {
      iVar2 = iVar2 + 1;
      iVar1 = OptionButton::get_item_count();
      if (iVar1 <= iVar2) goto LAB_0010c8e0;
      OptionButton::get_item_metadata((int)(Variant *)local_48);
      iVar1 = Variant::operator_cast_to_int((Variant *)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
    } while (iVar1 != param_1);
    OptionButton::select((int)*(undefined8 *)(this + 0xa70));
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _search(this,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_support_toggled(int) */

void __thiscall EditorAssetLibrary::_support_toggled(EditorAssetLibrary *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = MenuButton::get_popup();
  iVar2 = MenuButton::get_popup();
  PopupMenu::is_item_checked(iVar2);
  PopupMenu::set_item_checked(iVar1,SUB41(param_1,0));
  _search(this,0);
  return;
}



/* EditorAssetLibrary::_rerun_search(int) */

void EditorAssetLibrary::_rerun_search(int param_1)

{
  undefined4 in_register_0000003c;
  
  _search((EditorAssetLibrary *)CONCAT44(in_register_0000003c,param_1),0);
  return;
}



/* EditorAssetLibrary::_filter_debounce_timer_timeout() */

void __thiscall EditorAssetLibrary::_filter_debounce_timer_timeout(EditorAssetLibrary *this)

{
  _search(this,0);
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



/* EditorAssetLibrary::_update_image_queue() */

void __thiscall EditorAssetLibrary::_update_image_queue(EditorAssetLibrary *this)

{
  undefined1 (*pauVar1) [16];
  CowData<char32_t> *this_00;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  long in_FS_OFFSET;
  undefined1 (*local_b0) [16];
  String local_88 [8];
  undefined8 local_80;
  Object *local_78;
  undefined8 local_70;
  CowData<char32_t> local_68 [8];
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_b0 = (undefined1 (*) [16])0x0;
  plVar10 = *(long **)(this + 0xaf0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar10 != (long *)0x0) {
    local_b0 = (undefined1 (*) [16])0x0;
    iVar6 = 0;
LAB_0010cb17:
    do {
      if ((char)plVar10[3] == '\0') {
        if (iVar6 < 6) {
          EditorPaths::get_cache_dir();
          String::md5_text();
          operator+((char *)&local_58,(String *)"assetimage_");
          String::path_join(local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref(local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          local_58 = ".etag";
          local_60 = 0;
          local_80 = 0;
          local_50 = 5;
          String::parse_latin1((StrRange *)&local_80);
          String::operator+((String *)&local_78,local_88);
          cVar3 = FileAccess::exists((String *)&local_78);
          if (cVar3 == '\0') {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          }
          else {
            local_70 = 0;
            local_58 = ".data";
            local_50 = 5;
            String::parse_latin1((StrRange *)&local_70);
            String::operator+((String *)&local_58,local_88);
            cVar3 = FileAccess::exists((String *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            if (cVar3 != '\0') {
              local_70 = 0;
              local_58 = ".etag";
              local_50 = 5;
              String::parse_latin1((StrRange *)&local_70);
              String::operator+((String *)&local_58,local_88);
              FileAccess::open((String *)&local_78,(int)(CowData<char32_t> *)&local_58,(Error *)0x1)
              ;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if (local_78 != (Object *)0x0) {
                (**(code **)(*(long *)local_78 + 0x228))((CowData<char32_t> *)&local_70);
                operator+((char *)&local_58,(String *)"If-None-Match: ");
                if (local_60 == 0) {
                  lVar7 = 1;
                }
                else {
                  lVar7 = *(long *)(local_60 + -8) + 1;
                }
                iVar4 = CowData<String>::resize<false>((CowData<String> *)&local_60,lVar7);
                if (iVar4 == 0) {
                  if (local_60 == 0) {
                    lVar9 = -1;
                    lVar7 = 0;
                  }
                  else {
                    lVar7 = *(long *)(local_60 + -8);
                    lVar9 = lVar7 + -1;
                    if (-1 < lVar9) {
                      CowData<String>::_copy_on_write((CowData<String> *)&local_60);
                      this_00 = (CowData<char32_t> *)(local_60 + lVar9 * 8);
                      if (*(char **)this_00 != local_58) {
                        CowData<char32_t>::_ref(this_00,(CowData *)&local_58);
                      }
                      goto LAB_0010ce35;
                    }
                  }
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar7,"p_index","size()",
                             "",false,false);
                }
                else {
                  _err_print_error("push_back","./core/templates/vector.h",0x142,
                                   "Condition \"err\" is true. Returning: true",0,0);
                }
LAB_0010ce35:
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                if (((local_78 != (Object *)0x0) &&
                    (cVar3 = RefCounted::unreference(), pOVar2 = local_78, cVar3 != '\0')) &&
                   (cVar3 = predelete_handler(local_78), cVar3 != '\0')) {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
          }
          local_58 = &_LC12;
          lVar7 = plVar10[6];
          local_70 = 0;
          local_50 = 0;
          String::parse_latin1((StrRange *)&local_70);
          iVar4 = HTTPRequest::request(lVar7,plVar10 + 5,local_68,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if (iVar4 == 0) {
            *(undefined1 *)(plVar10 + 3) = 1;
          }
          else {
            if (local_b0 == (undefined1 (*) [16])0x0) {
              local_b0 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined4 *)local_b0[1] = 0;
              *local_b0 = (undefined1  [16])0x0;
            }
            puVar5 = (undefined4 *)operator_new(0x20,DefaultAllocator::alloc);
            lVar7 = plVar10[2];
            *(undefined8 *)(puVar5 + 2) = 0;
            *puVar5 = (int)lVar7;
            lVar7 = *(long *)(*local_b0 + 8);
            *(undefined1 (**) [16])(puVar5 + 6) = local_b0;
            *(long *)(puVar5 + 4) = lVar7;
            if (lVar7 != 0) {
              *(undefined4 **)(lVar7 + 8) = puVar5;
            }
            lVar7 = *(long *)*local_b0;
            *(undefined4 **)(*local_b0 + 8) = puVar5;
            if (lVar7 == 0) {
              *(undefined4 **)*local_b0 = puVar5;
            }
            *(int *)local_b0[1] = *(int *)local_b0[1] + 1;
          }
          iVar6 = iVar6 + 1;
          CowData<String>::_unref((CowData<String> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) break;
          goto LAB_0010cb17;
        }
      }
      else {
        iVar6 = iVar6 + 1;
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  if (local_b0 != (undefined1 (*) [16])0x0) {
    do {
      piVar8 = *(int **)*local_b0;
      do {
        if (*(int *)local_b0[1] == 0) {
          if (piVar8 == (int *)0x0) goto LAB_0010d037;
          goto LAB_0010cff0;
        }
        HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
        ::operator[]((HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
                      *)(this + 0xad8),piVar8);
        Node::queue_free();
        HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
        ::erase((HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
                 *)(this + 0xad8),*(int **)*local_b0);
        piVar8 = *(int **)*local_b0;
      } while (piVar8 == (int *)0x0);
      if (local_b0 == *(undefined1 (**) [16])(piVar8 + 6)) {
        lVar7 = *(long *)(piVar8 + 2);
        lVar9 = *(long *)(piVar8 + 4);
        *(long *)*local_b0 = lVar7;
        if (piVar8 == *(int **)(*local_b0 + 8)) {
          *(long *)(*local_b0 + 8) = lVar9;
        }
        if (lVar9 != 0) {
          *(long *)(lVar9 + 8) = lVar7;
          lVar7 = *(long *)(piVar8 + 2);
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x10) = lVar9;
        }
        Memory::free_static(piVar8,false);
        iVar6 = *(int *)local_b0[1] + -1;
        *(int *)local_b0[1] = iVar6;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        iVar6 = *(int *)local_b0[1];
      }
    } while (iVar6 != 0);
    Memory::free_static(local_b0,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  goto LAB_0010d1dc;
  while (piVar8 = *(int **)*local_b0, piVar8 != (int *)0x0) {
LAB_0010cff0:
    if (local_b0 == *(undefined1 (**) [16])(piVar8 + 6)) {
      lVar7 = *(long *)(piVar8 + 2);
      lVar9 = *(long *)(piVar8 + 4);
      *(long *)*local_b0 = lVar7;
      if (piVar8 == *(int **)(*local_b0 + 8)) {
        *(long *)(*local_b0 + 8) = lVar9;
      }
      if (lVar9 != 0) {
        *(long *)(lVar9 + 8) = lVar7;
        lVar7 = *(long *)(piVar8 + 2);
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar9;
      }
      Memory::free_static(piVar8,false);
      pauVar1 = local_b0 + 1;
      *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
      iVar6 = *(int *)*pauVar1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      iVar6 = *(int *)local_b0[1];
    }
    if (iVar6 == 0) goto LAB_0010d043;
  }
LAB_0010d037:
  if (*(int *)local_b0[1] == 0) {
LAB_0010d043:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(local_b0,false);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("~List","./core/templates/list.h",0x316,
                     "Condition \"_data->size_cache\" is true.",0,0);
    return;
  }
LAB_0010d1dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<EditorAssetLibraryItemDescription::Preview>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorAssetLibraryItemDescription::Preview>::_copy_on_write
          (CowData<EditorAssetLibraryItemDescription::Preview> *this)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar9 = 0x10;
  if (lVar2 * 0x20 != 0) {
    uVar9 = lVar2 * 0x20 - 1;
    uVar9 = uVar9 | uVar9 >> 1;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = uVar9 | uVar9 >> 0x10;
    uVar9 = (uVar9 | uVar9 >> 0x20) + 0x11;
  }
  puVar7 = (undefined8 *)Memory::alloc_static(uVar9,false);
  if (puVar7 != (undefined8 *)0x0) {
    lVar11 = 0;
    *puVar7 = 1;
    puVar7[1] = lVar2;
    puVar8 = puVar7 + 2;
    if (lVar2 != 0) {
      do {
        puVar10 = (undefined4 *)(lVar11 * 0x20 + *(long *)this);
        *(undefined4 *)puVar8 = *puVar10;
        uVar1 = *(undefined1 *)(puVar10 + 1);
        puVar8[1] = 0;
        lVar4 = *(long *)(puVar10 + 2);
        *(undefined1 *)((long)puVar8 + 4) = uVar1;
        if (lVar4 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 1),(CowData *)(puVar10 + 2));
        }
        uVar3 = *(undefined8 *)(puVar10 + 4);
        puVar8[3] = 0;
        lVar4 = *(long *)(puVar10 + 6);
        puVar8[2] = uVar3;
        if (lVar4 != 0) {
          puVar8[3] = lVar4;
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            puVar8[3] = 0;
          }
        }
        lVar11 = lVar11 + 1;
        puVar8 = puVar8 + 4;
      } while (lVar2 != lVar11);
    }
    _unref(this);
    *(undefined8 **)this = puVar7 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* EditorAssetLibraryItemDescription::set_image(int, int, Ref<Texture2D> const&) */

void __thiscall
EditorAssetLibraryItemDescription::set_image
          (EditorAssetLibraryItemDescription *this,int param_1,int param_2,Ref *param_3)

{
  Variant *pVVar1;
  long *plVar2;
  Object *pOVar3;
  int *piVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int *piVar11;
  long lVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  int *piVar19;
  Ref *pRVar20;
  Object *pOVar21;
  long lVar22;
  long lVar23;
  Variant *pVVar24;
  long lVar25;
  long in_FS_OFFSET;
  Ref<Image> local_138 [8];
  Ref *local_130;
  Object *local_128;
  Object *local_120;
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int local_108 [2];
  undefined1 local_100 [16];
  int local_e8 [8];
  undefined8 local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  undefined1 local_a8 [16];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  auVar10._8_8_ = local_a8._8_8_;
  auVar10._0_8_ = local_a8._0_8_;
  auVar9._8_8_ = local_a8._8_8_;
  auVar9._0_8_ = local_a8._0_8_;
  auVar8._8_8_ = local_a8._8_8_;
  auVar8._0_8_ = local_a8._0_8_;
  auVar7._8_8_ = local_a8._8_8_;
  auVar7._0_8_ = local_a8._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 1) {
    piVar4 = *(int **)(this + 0xdf0);
    if (piVar4 != (int *)0x0) {
      piVar11 = piVar4;
      lVar18 = 0;
      do {
        lVar22 = lVar18;
        piVar19 = piVar11;
        local_a8 = auVar10;
        if (*(long *)(piVar4 + -2) <= lVar22) goto LAB_0010d588;
        piVar11 = piVar19 + 8;
        lVar18 = lVar22 + 1;
      } while (*piVar19 != param_2);
      if ((char)piVar19[1] == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Button::set_button_icon(*(Ref **)(piVar19 + 4));
          return;
        }
        goto LAB_0010dbe6;
      }
      if ((set_image(int,int,Ref<Texture2D>const&)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar14 = __cxa_guard_acquire(&set_image(int,int,Ref<Texture2D>const&)::{lambda()#1}::
                                        operator()()::sname), iVar14 != 0)) {
        _scs_create((char *)&set_image(int,int,Ref<Texture2D>const&)::{lambda()#1}::operator()()::
                             sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_image(int,int,Ref<Texture2D>const&)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&set_image(int,int,Ref<Texture2D>const&)::{lambda()#1}::operator()()::
                             sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_118);
      (**(code **)(*(long *)CONCAT44(uStack_114,local_118) + 0x210))(local_138);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_118);
      (**(code **)(**(long **)param_3 + 0x210))((Ref<Image> *)&local_130);
      (**(code **)(*(long *)local_130 + 0x198))((Ref<Texture2D> *)&local_120,local_130,0);
      if (local_120 == (Object *)0x0) {
        if (local_130 != (Ref *)0x0) {
          local_118 = (int)local_130;
          uStack_114 = (undefined4)((ulong)local_130 >> 0x20);
          local_130 = (Ref *)0x0;
          goto LAB_0010d7be;
        }
      }
      else {
        pRVar20 = (Ref *)__dynamic_cast(local_120,&Object::typeinfo,&Image::typeinfo,0);
        if (local_130 != pRVar20) {
          local_118 = (int)local_130;
          uStack_114 = (undefined4)((ulong)local_130 >> 0x20);
          local_130 = pRVar20;
          if ((pRVar20 != (Ref *)0x0) && (cVar13 = RefCounted::reference(), cVar13 == '\0')) {
            local_130 = (Ref *)0x0;
          }
LAB_0010d7be:
          Ref<Image>::unref((Ref<Image> *)&local_118);
          if (local_120 == (Object *)0x0) goto LAB_0010d7d9;
        }
        cVar13 = RefCounted::unreference();
        pOVar21 = local_120;
        if ((cVar13 != '\0') && (cVar13 = predelete_handler(local_120), cVar13 != '\0')) {
          (**(code **)(*(long *)pOVar21 + 0x140))(pOVar21);
          Memory::free_static(pOVar21,false);
        }
      }
LAB_0010d7d9:
      iVar14 = Image::get_height();
      iVar15 = Image::get_height();
      iVar16 = Image::get_width();
      iVar17 = Image::get_width();
      local_c8 = (Variant *)CONCAT44((iVar14 - iVar15) / 2,(iVar16 - iVar17) / 2);
      Image::convert(local_130,5);
      pRVar20 = local_130;
      local_a8 = Image::get_used_rect();
      Image::blend_rect(pRVar20,(Rect2i *)local_138,(Vector2i *)local_a8);
      lVar18 = *(long *)(this + 0xdf0);
      if (lVar18 != 0) {
        lVar23 = *(long *)(lVar18 + -8);
        if (lVar23 <= lVar22) goto LAB_0010db4e;
        pRVar20 = *(Ref **)(lVar18 + 0x10 + lVar22 * 0x20);
        ImageTexture::create_from_image((Ref *)&local_128);
        local_120 = (Object *)0x0;
        if (local_128 != (Object *)0x0) {
          pOVar21 = (Object *)__dynamic_cast(local_128,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pOVar21 != (Object *)0x0) {
            local_118 = 0;
            uStack_114 = 0;
            local_120 = pOVar21;
            cVar13 = RefCounted::reference();
            if (cVar13 == '\0') {
              local_120 = (Object *)0x0;
            }
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_118);
          }
        }
        Button::set_button_icon(pRVar20);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_120);
        if (local_128 != (Object *)0x0) {
          cVar13 = RefCounted::unreference();
          if (cVar13 != '\0') {
            cVar13 = predelete_handler(local_128);
            if (cVar13 != '\0') {
              (**(code **)(*(long *)local_128 + 0x140))(local_128);
              Memory::free_static(local_128,false);
            }
          }
        }
        lVar18 = *(long *)(this + 0xdf0);
        if (lVar18 != 0) {
          lVar23 = *(long *)(lVar18 + -8);
          if (lVar23 <= lVar22) goto LAB_0010db4e;
          Control::set_default_cursor_shape(*(undefined8 *)(lVar18 + 0x10 + lVar22 * 0x20),2);
          Ref<Image>::unref((Ref<Image> *)&local_130);
          Ref<Image>::unref(local_138);
          goto LAB_0010d588;
        }
      }
      lVar23 = 0;
LAB_0010db4e:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar22,lVar23,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  else if (param_1 == 2) {
    lVar18 = *(long *)(this + 0xdf0);
    local_a8 = auVar8;
    if (lVar18 != 0) {
      lVar23 = 0;
      lVar12 = 0;
      do {
        lVar25 = lVar12;
        lVar22 = lVar23;
        local_a8 = auVar9;
        if (*(long *)(lVar18 + -8) <= lVar22) goto LAB_0010d588;
        lVar23 = lVar22 + 1;
        lVar12 = lVar25 + 0x20;
      } while (*(int *)(lVar18 + lVar25) != param_2);
      CowData<EditorAssetLibraryItemDescription::Preview>::_copy_on_write
                ((CowData<EditorAssetLibraryItemDescription::Preview> *)(this + 0xdf0));
      lVar18 = *(long *)(this + 0xdf0);
      pOVar21 = *(Object **)param_3;
      lVar25 = lVar18 + lVar25;
      pOVar3 = *(Object **)(lVar25 + 0x18);
      if (pOVar21 != pOVar3) {
        *(Object **)(lVar25 + 0x18) = pOVar21;
        if ((pOVar21 != (Object *)0x0) && (cVar13 = RefCounted::reference(), cVar13 == '\0')) {
          *(undefined8 *)(lVar25 + 0x18) = 0;
        }
        if (((pOVar3 != (Object *)0x0) && (cVar13 = RefCounted::unreference(), cVar13 != '\0')) &&
           (cVar13 = predelete_handler(pOVar3), cVar13 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        lVar18 = *(long *)(this + 0xdf0);
      }
      auVar6._8_8_ = local_a8._8_8_;
      auVar6._0_8_ = local_a8._0_8_;
      if (lVar18 == 0) {
        lVar23 = 0;
        goto LAB_0010db4e;
      }
      lVar23 = *(long *)(lVar18 + -8);
      local_a8 = auVar6;
      if (lVar23 <= lVar22) goto LAB_0010db4e;
      cVar13 = BaseButton::is_pressed();
      auVar10._8_8_ = local_a8._8_8_;
      auVar10._0_8_ = local_a8._0_8_;
      local_a8 = auVar10;
      if (cVar13 != '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _preview_click(this,param_2);
          return;
        }
        goto LAB_0010dbe6;
      }
    }
  }
  else {
    local_a8 = auVar7;
    if (param_1 == 0) {
      pOVar21 = *(Object **)param_3;
      plVar2 = *(long **)(this + 0xdb8);
      if ((pOVar21 == (Object *)0x0) ||
         (local_120 = pOVar21, cVar13 = RefCounted::reference(), cVar13 == '\0')) {
        local_120 = (Object *)0x0;
        pOVar21 = (Object *)0x0;
      }
      StringName::StringName((StringName *)&local_128,"set_image",false);
      Variant::Variant((Variant *)local_a8,0);
      Variant::Variant(local_90,param_2);
      Variant::Variant(local_78,pOVar21);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      local_c8 = (Variant *)local_a8;
      pVStack_c0 = local_90;
      local_b8 = local_78;
      (**(code **)(*plVar2 + 0x68))
                ((Variant *)local_e8,plVar2,(StringName *)&local_128,&local_c8,3,&local_118);
      if (local_118 == 0) {
        Variant::Variant((Variant *)local_108,(Variant *)local_e8);
      }
      else {
        local_108[0] = 0;
        local_100 = (undefined1  [16])0x0;
      }
      if (Variant::needs_deinit[local_e8[0]] != '\0') {
        Variant::_clear_internal();
      }
      pVVar24 = local_48;
      do {
        pVVar1 = pVVar24 + -0x18;
        pVVar24 = pVVar24 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar24 != (Variant *)local_a8);
      if (Variant::needs_deinit[local_108[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_128 != (Object *)0x0)) {
        StringName::unref();
      }
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_120);
      pOVar21 = *(Object **)param_3;
      pOVar3 = *(Object **)(this + 0xe20);
      if (pOVar21 != pOVar3) {
        *(Object **)(this + 0xe20) = pOVar21;
        if ((pOVar21 != (Object *)0x0) && (cVar13 = RefCounted::reference(), cVar13 == '\0')) {
          *(undefined8 *)(this + 0xe20) = 0;
        }
        if (pOVar3 != (Object *)0x0) {
          cVar13 = RefCounted::unreference();
          if (cVar13 != '\0') {
            cVar13 = predelete_handler(pOVar3);
            if (cVar13 != '\0') {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              auVar10._8_8_ = local_a8._8_8_;
              auVar10._0_8_ = local_a8._0_8_;
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                Memory::free_static(pOVar3,false);
                return;
              }
              goto LAB_0010dbe6;
            }
          }
        }
      }
    }
  }
LAB_0010d588:
  auVar10 = local_a8;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010dbe6:
  local_a8 = auVar10;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::_image_update(bool, bool, Vector<unsigned char> const&, int) */

void __thiscall
EditorAssetLibrary::_image_update
          (EditorAssetLibrary *this,bool param_1,bool param_2,Vector *param_3,int param_4)

{
  Variant *pVVar1;
  HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
  *this_00;
  undefined4 uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  Resource *pRVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  code *pcVar14;
  long *plVar15;
  Variant *pVVar16;
  Object *pOVar17;
  uint uVar18;
  ulong *puVar19;
  int *piVar20;
  undefined4 uVar21;
  Image *pIVar22;
  Image *pIVar23;
  long in_FS_OFFSET;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int local_160;
  int local_14c;
  Resource *local_148;
  Image *local_140;
  Object *local_138;
  long local_130 [2];
  long *local_120;
  uint local_118;
  undefined4 uStack_114;
  undefined8 local_110;
  int local_108 [2];
  undefined1 local_100 [16];
  int local_e8 [8];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [6];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [5];
  undefined2 local_43;
  undefined1 local_41;
  long local_40;
  
  this_00 = (HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
             *)(this + 0xad8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_14c = param_4;
  lVar9 = HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
          ::operator[](this_00,&local_14c);
  uVar18 = (uint)*(ulong *)(lVar9 + 0x20) & 0xffffff;
  if ((uint)ObjectDB::slot_max <= uVar18) {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    goto LAB_0010df68;
  }
  while( true ) {
    uVar4 = local_118 >> 8;
    local_118 = uVar4 << 8;
    LOCK();
    bVar24 = (char)ObjectDB::spin_lock == '\0';
    if (bVar24) {
      ObjectDB::spin_lock._0_1_ = '\x01';
    }
    UNLOCK();
    if (bVar24) break;
    local_118 = uVar4 << 8;
    do {
    } while ((char)ObjectDB::spin_lock != '\0');
  }
  puVar19 = (ulong *)((ulong)uVar18 * 0x10 + ObjectDB::object_slots);
  if ((*puVar19 & 0x7fffffffff) != (*(ulong *)(lVar9 + 0x20) >> 0x18 & 0x7fffffffff)) {
    ObjectDB::spin_lock._0_1_ = '\0';
    goto LAB_0010df68;
  }
  plVar3 = (long *)puVar19[1];
  ObjectDB::spin_lock._0_1_ = '\0';
  if (plVar3 == (long *)0x0) goto LAB_0010df68;
  local_120 = (long *)0x0;
  plVar15 = (long *)(*(long *)(param_3 + 8) + -0x10);
  if (*(long *)(param_3 + 8) != 0) {
    do {
      lVar9 = *plVar15;
      if (lVar9 == 0) goto LAB_0010dcf9;
      LOCK();
      lVar13 = *plVar15;
      bVar24 = lVar9 == lVar13;
      if (bVar24) {
        *plVar15 = lVar9 + 1;
        lVar13 = lVar9;
      }
      UNLOCK();
    } while (!bVar24);
    if (lVar13 != -1) {
      local_120 = *(long **)(param_3 + 8);
    }
  }
LAB_0010dcf9:
  if (param_1) {
    EditorPaths::get_cache_dir();
    HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
    ::operator[](this_00,&local_14c);
    String::md5_text();
    operator+((char *)&local_118,(String *)"assetimage_");
    String::path_join((String *)&local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    local_130[0] = 0;
    String::parse_latin1((String *)local_130,".data");
    String::operator+((String *)&local_118,(String *)&local_140);
    FileAccess::open((String *)&local_138,(int)(StringName *)&local_118,(Error *)0x1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
    if (local_138 != (Object *)0x0) {
      local_110._0_4_ = 0;
      local_110._4_4_ = 0;
      uVar18 = (**(code **)(*(long *)local_138 + 0x1f0))();
      lVar9 = (long)(int)uVar18;
      if (lVar9 < 0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x157,
                         "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
      }
      else if (lVar9 != 0) {
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_110);
        uVar11 = (ulong)uVar18 - 1;
        uVar11 = uVar11 | uVar11 >> 1;
        uVar11 = uVar11 | uVar11 >> 2;
        uVar11 = uVar11 | uVar11 >> 4;
        uVar11 = uVar11 | uVar11 >> 8;
        puVar12 = (undefined8 *)Memory::alloc_static((uVar11 | uVar11 >> 0x10) + 0x11,false);
        if (puVar12 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          local_110 = puVar12 + 2;
          *puVar12 = 1;
          puVar12[1] = (ulong)uVar18;
        }
      }
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_110);
      plVar15 = local_110;
      (**(code **)(*(long *)local_138 + 0x220))(local_138,local_110,lVar9);
      plVar5 = local_120;
      if (plVar15 != local_120) {
        if (local_120 != (long *)0x0) {
          LOCK();
          local_120 = local_120 + -2;
          *local_120 = *local_120 + -1;
          UNLOCK();
          if (*local_120 == 0) {
            local_120 = (long *)0x0;
            Memory::free_static(plVar5 + -2,false);
            plVar15 = local_110;
          }
          else {
            local_120 = (long *)0x0;
            plVar15 = local_110;
          }
        }
        if (plVar15 != (long *)0x0) {
          plVar15 = plVar15 + -2;
          do {
            lVar9 = *plVar15;
            if (lVar9 == 0) goto LAB_0010e3ed;
            LOCK();
            lVar13 = *plVar15;
            bVar24 = lVar9 == lVar13;
            if (bVar24) {
              *plVar15 = lVar9 + 1;
              lVar13 = lVar9;
            }
            UNLOCK();
          } while (!bVar24);
          if (lVar13 != -1) {
            local_120 = local_110;
          }
        }
      }
LAB_0010e3ed:
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_110);
      if (local_138 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar17 = local_138;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_138);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
            Memory::free_static(pOVar17,false);
          }
        }
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  }
  plVar15 = local_120;
  if (local_120 == (long *)0x0) {
    local_160 = 0;
  }
  else {
    local_160 = (int)local_120[-1];
  }
  pRVar10 = (Resource *)operator_new(0x268,"");
  Resource::Resource(pRVar10);
  pRVar10[0x260] = (Resource)0x0;
  *(code **)pRVar10 = BoxContainer::_notification;
  *(undefined4 *)(pRVar10 + 0x240) = 0;
  *(undefined8 *)(pRVar10 + 0x250) = 0;
  *(undefined8 *)(pRVar10 + 600) = 0;
  postinitialize_handler((Object *)pRVar10);
  local_148 = pRVar10;
  cVar6 = RefCounted::init_ref();
  if (cVar6 == '\0') {
    local_148 = (Resource *)0x0;
  }
  local_41 = 0xff;
  local_43 = 0xd8ff;
  if (plVar15 != (long *)0x0) {
    local_140 = (Image *)0x0;
    if (((_LC295 == *plVar15) &&
        (pcVar14 = Image::_png_mem_loader_func, Image::_png_mem_loader_func != (code *)0x0)) ||
       (((short)*plVar15 == -0x2701 &&
        ((*(char *)((long)plVar15 + 2) == -1 &&
         (pcVar14 = Image::_jpg_mem_loader_func, Image::_jpg_mem_loader_func != (code *)0x0)))))) {
      (*pcVar14)((StringName *)&local_118,plVar15,local_160);
      pIVar23 = local_140;
      pIVar22 = (Image *)CONCAT44(uStack_114,local_118);
      if (pIVar22 != local_140) {
        if (pIVar22 == (Image *)0x0) {
          bVar24 = local_140 == (Image *)0x0;
          local_140 = pIVar22;
          if (bVar24) goto LAB_0010e4cf;
LAB_0010de12:
          cVar6 = RefCounted::unreference();
          if (cVar6 != '\0') {
            memdelete<Image>(pIVar23);
          }
        }
        else {
          local_140 = pIVar22;
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_140 = (Image *)0x0;
          }
          if (pIVar23 != (Image *)0x0) goto LAB_0010de12;
        }
        pIVar23 = (Image *)CONCAT44(uStack_114,local_118);
      }
      if (pIVar23 != (Image *)0x0) {
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          memdelete<Image>((Image *)CONCAT44(uStack_114,local_118));
        }
      }
LAB_0010de41:
      if (local_140 == (Image *)0x0) goto LAB_0010e4cf;
      Image::copy_internals_from((Ref *)local_148);
    }
    else {
      if (((_LC296 == (int)*plVar15) &&
          (pcVar14 = Image::_webp_mem_loader_func, Image::_webp_mem_loader_func != (code *)0x0)) ||
         ((_LC297 == (short)*plVar15 &&
          (pcVar14 = Image::_bmp_mem_loader_func, Image::_bmp_mem_loader_func != (code *)0x0)))) {
        (*pcVar14)((StringName *)&local_118,plVar15,local_160);
        pIVar22 = (Image *)CONCAT44(uStack_114,local_118);
        pIVar23 = local_140;
        if (pIVar22 != local_140) {
LAB_0010e465:
          local_140 = pIVar22;
          if (pIVar22 != (Image *)0x0) {
            cVar6 = RefCounted::reference();
            if (cVar6 == '\0') {
              local_140 = (Image *)0x0;
            }
          }
          if (pIVar23 != (Image *)0x0) {
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              memdelete<Image>(pIVar23);
            }
          }
        }
LAB_0010e491:
        Ref<Image>::unref((Ref<Image> *)&local_118);
        goto LAB_0010de41;
      }
      if (Image::_svg_scalable_mem_loader_func != (code *)0x0) {
        (*Image::_svg_scalable_mem_loader_func)((StringName *)&local_118,plVar15,local_160);
        pIVar22 = (Image *)CONCAT44(uStack_114,local_118);
        pIVar23 = local_140;
        if (pIVar22 != local_140) goto LAB_0010e465;
        goto LAB_0010e491;
      }
LAB_0010e4cf:
      cVar6 = is_print_verbose_enabled();
      if (cVar6 != '\0') {
        lVar9 = HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
                ::operator[](this_00,&local_14c);
        uVar21 = *(undefined4 *)(lVar9 + 0x28);
        lVar9 = HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
                ::operator[](this_00,&local_14c);
        local_130[0] = 0;
        if (*(long *)(lVar9 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_130,(CowData *)(lVar9 + 0x10));
        }
        local_138 = (Object *)0x0;
        String::parse_latin1
                  ((String *)&local_138,
                   "Asset Library: Invalid image downloaded from \'%s\' for asset # %d");
        vformat<String,int>((StringName *)&local_118,(String *)&local_138,
                            (CowData<char32_t> *)local_130,uVar21);
        _err_print_error("_image_update","editor/plugins/asset_library_editor_plugin.cpp",0x35b,
                         (StringName *)&local_118,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
      }
    }
    if (local_140 != (Image *)0x0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        memdelete<Image>(local_140);
      }
    }
  }
  cVar6 = Image::is_empty();
  if (cVar6 == '\0') {
    piVar20 = &local_14c;
    lVar9 = HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
            ::operator[](this_00,&local_14c);
    pRVar10 = local_148;
    uVar21 = (undefined4)((ulong)piVar20 >> 0x20);
    iVar7 = *(int *)(lVar9 + 8);
    if (iVar7 == 1) {
      fVar26 = (float)EditorScale::get_scale();
      fVar26 = _LC300 * fVar26;
      iVar7 = Image::get_height();
      fVar25 = (float)EditorScale::get_scale();
      pRVar10 = local_148;
      fVar26 = fVar26 / (fVar25 * (float)iVar7);
      if (fVar26 < _LC226) {
        iVar7 = Image::get_height();
        fVar27 = (float)EditorScale::get_scale();
        iVar8 = Image::get_width();
        fVar25 = (float)EditorScale::get_scale();
        fVar25 = (float)iVar8 * fVar25;
        fVar27 = (float)iVar7 * fVar27 * fVar26;
LAB_0010e6c2:
        Image::resize(pRVar10,CONCAT44(uVar21,(int)(fVar25 * fVar26)),(int)fVar27,4);
      }
    }
    else if (iVar7 == 2) {
      fVar26 = (float)EditorScale::get_scale();
      fVar26 = _LC301 * fVar26;
      iVar7 = Image::get_height();
      fVar25 = (float)EditorScale::get_scale();
      pRVar10 = local_148;
      fVar26 = fVar26 / (fVar25 * (float)iVar7);
      if (fVar26 < _LC226) {
        iVar7 = Image::get_height();
        fVar27 = (float)EditorScale::get_scale();
        iVar8 = Image::get_width();
        fVar25 = (float)EditorScale::get_scale();
        fVar25 = (float)iVar8 * fVar25;
        fVar27 = (float)iVar7 * fVar27 * fVar26;
        goto LAB_0010e6c2;
      }
    }
    else if (iVar7 == 0) {
      fVar25 = (float)EditorScale::get_scale();
      fVar26 = (float)EditorScale::get_scale();
      Image::resize(pRVar10,CONCAT44(uVar21,(int)(fVar26 * _LC102)),(int)(fVar25 * _LC102),4);
    }
    ImageTexture::create_from_image((Ref *)&local_138);
    pOVar17 = local_138;
    if (local_138 != (Object *)0x0) {
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        pOVar17 = (Object *)0x0;
      }
    }
    lVar9 = HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
            ::operator[](this_00,&local_14c);
    iVar7 = *(int *)(lVar9 + 0xc);
    lVar9 = HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
            ::operator[](this_00,&local_14c);
    iVar8 = *(int *)(lVar9 + 8);
    StringName::StringName((StringName *)local_130,"set_image",false);
    Variant::Variant((Variant *)local_a8,iVar8);
    Variant::Variant(local_90,iVar7);
    Variant::Variant(local_78,pOVar17);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_118 = 0;
    uStack_114 = 0;
    local_110._0_4_ = 0;
    local_c8 = (Variant *)local_a8;
    pVStack_c0 = local_90;
    local_b8 = local_78;
    (**(code **)(*plVar3 + 0x68))
              ((Variant *)local_e8,plVar3,(StringName *)local_130,&local_c8,3,
               (StringName *)&local_118);
    if (local_118 == 0) {
      Variant::Variant((Variant *)local_108,(Variant *)local_e8);
    }
    else {
      local_108[0] = 0;
      local_100 = (undefined1  [16])0x0;
    }
    if (Variant::needs_deinit[local_e8[0]] != '\0') {
      Variant::_clear_internal();
    }
    pVVar16 = local_48;
    do {
      pVVar1 = pVVar16 + -0x18;
      pVVar16 = pVVar16 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar16 != (Variant *)local_a8);
    if (Variant::needs_deinit[local_108[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_130[0] != 0)) {
      StringName::unref();
    }
    if (((pOVar17 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
       (cVar6 = predelete_handler(pOVar17), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
      Memory::free_static(pOVar17,false);
    }
    if (local_138 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar17 = local_138;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_138);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
          Memory::free_static(pOVar17,false);
        }
      }
    }
  }
  else if (param_2) {
    if (_image_update(bool,bool,Vector<unsigned_char>const&,int)::{lambda()#1}::operator()()::sname
        == '\0') {
      iVar7 = __cxa_guard_acquire(&_image_update(bool,bool,Vector<unsigned_char>const&,int)::
                                   {lambda()#1}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_image_update(bool,bool,Vector<unsigned_char>const&,int)::{lambda()#1}
                             ::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_image_update(bool,bool,Vector<unsigned_char>const&,int)::{lambda()#1}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_image_update(bool,bool,Vector<unsigned_char>const&,int)::{lambda()#1}
                             ::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)local_130);
    lVar9 = HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
            ::operator[](this_00,&local_14c);
    uVar21 = *(undefined4 *)(lVar9 + 0xc);
    lVar9 = HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
            ::operator[](this_00,&local_14c);
    uVar2 = *(undefined4 *)(lVar9 + 8);
    StringName::StringName((StringName *)&local_118,"set_image",false);
    Object::call<EditorAssetLibrary::ImageType,int,Ref<Texture2D>>
              (local_a8,plVar3,(StringName *)&local_118,uVar2,uVar21,(StringName *)local_130);
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_114,local_118) != 0)) {
      StringName::unref();
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_130);
  }
  if (local_148 != (Resource *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      memdelete<Image>((Image *)local_148);
    }
  }
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_120);
LAB_0010df68:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorAssetLibrary::_image_request_completed(int, int, Vector<String> const&, Vector<unsigned
   char> const&, int) */

void __thiscall
EditorAssetLibrary::_image_request_completed
          (EditorAssetLibrary *this,int param_1,int param_2,Vector *param_3,Vector *param_4,
          int param_5)

{
  HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
  *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  Object *pOVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  Object *pOVar19;
  wchar32 wVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long in_FS_OFFSET;
  bool bVar27;
  int *local_c0;
  int local_8c;
  String local_88 [8];
  CowData<char32_t> local_80 [8];
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  StringName local_60;
  undefined7 uStack_5f;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
             *)(this + 0xad8);
  local_8c = param_5;
  if ((*(long *)(this + 0xae0) != 0) && (*(int *)(this + 0xb04) != 0)) {
    uVar25 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb00) * 8);
    uVar14 = ((uint)param_5 >> 0x10 ^ param_5) * -0x7a143595;
    uVar14 = (uVar14 ^ uVar14 >> 0xd) * -0x3d4d51cb;
    uVar24 = uVar14 ^ uVar14 >> 0x10;
    if (uVar14 == uVar14 >> 0x10) {
      uVar24 = 1;
      uVar17 = uVar25;
    }
    else {
      uVar17 = uVar24 * uVar25;
    }
    uVar21 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb00) * 4));
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar21;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar18 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0xae8) + lVar18 * 4);
    iVar15 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar23 = 0;
      do {
        if ((uVar14 == uVar24) &&
           (param_5 == *(int *)(*(long *)(*(long *)(this + 0xae0) + lVar18 * 8) + 0x10))) {
          if ((param_1 == 0) && (param_2 < 400)) {
            if (param_2 == 0x130) goto LAB_0010eb9b;
            lVar18 = *(long *)(param_3 + 8);
            lVar26 = 0;
            goto joined_r0x0010eb5a;
          }
          cVar13 = is_print_verbose_enabled();
          if (cVar13 != '\0') {
            lVar18 = HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
                     ::operator[](this_00,&local_8c);
            uVar1 = *(undefined4 *)(lVar18 + 0x28);
            lVar18 = HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
                     ::operator[](this_00,&local_8c);
            local_68 = 0;
            if (*(long *)(lVar18 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar18 + 0x10));
            }
            local_70 = 0;
            String::parse_latin1
                      ((String *)&local_70,
                       "Asset Library: Error getting image from \'%s\' for asset # %d.");
            vformat<String,int>((CowData<char32_t> *)&local_60,(String *)&local_70,
                                (CowData<char32_t> *)&local_68,uVar1);
            _err_print_error("_image_request_completed",
                             "editor/plugins/asset_library_editor_plugin.cpp",0x3a4,
                             (CowData<char32_t> *)&local_60,0,1);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          }
          lVar18 = HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
                   ::operator[](this_00,&local_8c);
          uVar14 = (uint)*(ulong *)(lVar18 + 0x20) & 0xffffff;
          if (uVar14 < (uint)ObjectDB::slot_max) {
            while( true ) {
              local_60 = (StringName)0x0;
              LOCK();
              bVar27 = (char)ObjectDB::spin_lock == '\0';
              if (bVar27) {
                ObjectDB::spin_lock._0_1_ = '\x01';
              }
              UNLOCK();
              if (bVar27) break;
              do {
              } while ((char)ObjectDB::spin_lock != '\0');
            }
            puVar16 = (ulong *)((ulong)uVar14 * 0x10 + ObjectDB::object_slots);
            if ((*(ulong *)(lVar18 + 0x20) >> 0x18 & 0x7fffffffff) == (*puVar16 & 0x7fffffffff)) {
              uVar25 = puVar16[1];
              ObjectDB::spin_lock._0_1_ = '\0';
              if (uVar25 != 0) {
                if ((_image_request_completed(int,int,Vector<String>const&,Vector<unsigned_char>const&,int)
                     ::{lambda()#1}::operator()()::sname == '\0') &&
                   (iVar15 = __cxa_guard_acquire(&_image_request_completed(int,int,Vector<String>const&,Vector<unsigned_char>const&,int)
                                                  ::{lambda()#1}::operator()()::sname), iVar15 != 0)
                   ) {
                  _scs_create((char *)&_image_request_completed(int,int,Vector<String>const&,Vector<unsigned_char>const&,int)
                                       ::{lambda()#1}::operator()()::sname,true);
                  __cxa_atexit(StringName::~StringName,
                               &_image_request_completed(int,int,Vector<String>const&,Vector<unsigned_char>const&,int)
                                ::{lambda()#1}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release(&_image_request_completed(int,int,Vector<String>const&,Vector<unsigned_char>const&,int)
                                       ::{lambda()#1}::operator()()::sname);
                }
                Control::get_editor_theme_icon((StringName *)&local_68);
                lVar18 = HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
                         ::operator[](this_00,&local_8c);
                uVar1 = *(undefined4 *)(lVar18 + 0xc);
                lVar18 = HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
                         ::operator[](this_00,&local_8c);
                uVar2 = *(undefined4 *)(lVar18 + 8);
                StringName::StringName(&local_60,"set_image",false);
                Object::call<EditorAssetLibrary::ImageType,int,Ref<Texture2D>>
                          (local_58,uVar25,&local_60,uVar2,uVar1,(StringName *)&local_68);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
                  StringName::unref();
                }
                Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
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
          goto LAB_0010ebc0;
        }
        uVar23 = uVar23 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (iVar15 + 1) * uVar25;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar21;
        lVar18 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0xae8) + lVar18 * 4);
        iVar15 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar14 * uVar25, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar21, auVar6._8_8_ = 0,
              auVar6._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb00) * 4
                                        ) + iVar15) - SUB164(auVar5 * auVar9,8)) * uVar25,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar21, uVar23 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  _err_print_error("_image_request_completed","editor/plugins/asset_library_editor_plugin.cpp",0x387
                   ,"Condition \"!image_queue.has(p_queue_id)\" is true.",0,0);
  goto LAB_0010ebf1;
joined_r0x0010eb5a:
  if ((lVar18 == 0) || (*(long *)(lVar18 + -8) <= lVar26)) goto LAB_0010eb9b;
  iVar15 = String::findn((char *)(lVar18 + lVar26 * 8),0x1157e2);
  if (iVar15 != 0) {
    lVar18 = *(long *)(param_3 + 8);
    lVar26 = lVar26 + 1;
    goto joined_r0x0010eb5a;
  }
  EditorPaths::get_cache_dir();
  HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
  ::operator[](this_00,&local_8c);
  String::md5_text();
  operator+((char *)&local_60,(String *)"assetimage_");
  String::path_join(local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  lVar18 = *(long *)(param_3 + 8);
  if (lVar18 == 0) {
    lVar22 = 0;
LAB_0010f163:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar26,lVar22,"p_index","size()","",false,
               true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  lVar22 = *(long *)(lVar18 + -8);
  if (lVar22 <= lVar26) goto LAB_0010f163;
  wVar20 = (int)(lVar26 * 8) + (int)lVar18;
  String::find_char(wVar20,0x3a);
  iVar15 = (int)(CowData<char32_t> *)&local_60;
  String::substr(iVar15,wVar20);
  String::strip_edges(SUB81(local_80,0),SUB81((CowData<char32_t> *)&local_60,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,".etag");
  String::operator+((String *)&local_60,local_88);
  FileAccess::open((String *)&local_78,iVar15,(Error *)0x2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_78 != (Object *)0x0) {
    (**(code **)(*(long *)local_78 + 0x2b0))(local_78,local_80);
  }
  lVar18 = *(long *)(param_4 + 8);
  if (lVar18 == 0) {
    uVar25 = 0;
    iVar15 = 0;
  }
  else {
    uVar25 = *(ulong *)(lVar18 + -8);
    iVar15 = (int)uVar25;
  }
  local_70 = 0;
  String::parse_latin1((String *)&local_70,".data");
  String::operator+((String *)&local_68,local_88);
  FileAccess::open((String *)&local_60,(int)(CowData<char32_t> *)&local_68,(Error *)0x2);
  pOVar19 = local_78;
  pOVar12 = (Object *)CONCAT71(uStack_5f,local_60);
  if (pOVar12 == local_78) {
LAB_0010efd9:
    if ((pOVar19 != (Object *)0x0) && (cVar13 = RefCounted::unreference(), cVar13 != '\0')) {
      pOVar12 = (Object *)CONCAT71(uStack_5f,local_60);
      cVar13 = predelete_handler(pOVar12);
      if (cVar13 != '\0') {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
    }
  }
  else {
    if (pOVar12 != (Object *)0x0) {
      local_78 = pOVar12;
      cVar13 = RefCounted::reference();
      if (cVar13 == '\0') {
        local_78 = (Object *)0x0;
      }
      if (pOVar19 != (Object *)0x0) goto LAB_0010efba;
LAB_0010efd4:
      pOVar19 = (Object *)CONCAT71(uStack_5f,local_60);
      goto LAB_0010efd9;
    }
    bVar27 = local_78 != (Object *)0x0;
    local_78 = pOVar12;
    if (bVar27) {
LAB_0010efba:
      cVar13 = RefCounted::unreference();
      if ((cVar13 != '\0') && (cVar13 = predelete_handler(pOVar19), cVar13 != '\0')) {
        (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
        Memory::free_static(pOVar19,false);
      }
      goto LAB_0010efd4;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_78 != (Object *)0x0) {
    (**(code **)(*(long *)local_78 + 0x278))(local_78,uVar25 & 0xffffffff);
    (**(code **)(*(long *)local_78 + 0x2d0))(local_78,lVar18,(long)iVar15);
    if (((local_78 != (Object *)0x0) &&
        (cVar13 = RefCounted::unreference(), pOVar12 = local_78, cVar13 != '\0')) &&
       (cVar13 = predelete_handler(local_78), cVar13 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
LAB_0010eb9b:
  _image_update(this,param_2 == 0x130,true,param_4,param_5);
LAB_0010ebc0:
  local_c0 = &local_8c;
  HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
  ::operator[](this_00,local_c0);
  Node::queue_free();
  HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
  ::erase(this_00,local_c0);
  _update_image_queue(this);
LAB_0010ebf1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorAssetLibrary::_request_image(ObjectID, int, String, EditorAssetLibrary::ImageType, int) */

void __thiscall
EditorAssetLibrary::_request_image
          (EditorAssetLibrary *this,ulong param_2,undefined4 param_3,String *param_4,
          undefined4 param_5,undefined4 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  HTTPRequest *this_00;
  CallableCustom *this_01;
  undefined1 *puVar8;
  ulong *puVar9;
  long in_FS_OFFSET;
  bool bVar10;
  uint local_e8;
  String local_d4 [4];
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  int iStack_84;
  undefined8 local_80;
  CowData<char32_t> local_78 [8];
  HTTPRequest *pHStack_70;
  ulong local_68;
  undefined4 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::strip_edges(SUB81((String *)&local_d0,0),SUB81(param_4,0));
  cVar6 = String::operator!=((String *)&local_d0,param_4);
  if ((cVar6 != '\0') && (cVar6 = is_print_verbose_enabled(), cVar6 != '\0')) {
    local_98 = 0;
    if (*(long *)param_4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)param_4);
    }
    local_a8[0] = 0;
    String::parse_latin1
              ((String *)local_a8,"Asset Library: Badly formatted image URL \'%s\' for asset # %d.")
    ;
    vformat<String,int>((CowData<char32_t> *)&local_88,(String *)local_a8,
                        (CowData<char32_t> *)&local_98,param_3);
    _err_print_error("_request_image","editor/plugins/asset_library_editor_plugin.cpp",0x3db,
                     (CowData<char32_t> *)&local_88,0,1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  iVar7 = String::parse_url((String *)&local_d0,(String *)&local_c8,(int *)&local_c0,local_d4,
                            (String *)&local_b8);
  if (iVar7 == 0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    local_88 = local_88 & 0xffffff00;
    iStack_84 = 0;
    local_80 = 0;
    local_68 = 0;
    local_60 = 0xffffffff;
    _local_78 = (undefined1  [16])0x0;
    if (local_d0 != 0) {
      CowData<char32_t>::_ref(local_78,(CowData *)&local_d0);
    }
    local_80 = CONCAT44(param_6,param_5);
    this_00 = (HTTPRequest *)operator_new(0x4f0,"");
    HTTPRequest::HTTPRequest(this_00);
    postinitialize_handler((Object *)this_00);
    pHStack_70 = this_00;
    setup_http_request(this_00);
    local_88 = local_88 & 0xffffff00;
    iVar7 = *(int *)(this + 0xad4) + 1;
    lVar1 = *(long *)this_00;
    *(int *)(this + 0xad4) = iVar7;
    pcVar2 = *(code **)(lVar1 + 0x108);
    iStack_84 = iVar7;
    local_68 = param_2;
    local_60 = param_3;
    this_01 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_01);
    *(undefined **)(this_01 + 0x20) = &_LC12;
    *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
    *(undefined8 *)(this_01 + 0x40) = 0;
    uVar3 = *(undefined8 *)(this + 0x60);
    *(undefined ***)this_01 = &PTR_hash_0012ad38;
    *(undefined8 *)(this_01 + 0x30) = uVar3;
    *(code **)(this_01 + 0x38) = _image_request_completed;
    *(undefined8 *)(this_01 + 0x10) = 0;
    *(EditorAssetLibrary **)(this_01 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
    *(char **)(this_01 + 0x20) = "EditorAssetLibrary::_image_request_completed";
    Callable::Callable((Callable *)local_a8,this_01);
    Callable::bind<int>((int)(Callable *)&local_98);
    StringName::StringName((StringName *)&local_b0,"request_completed",false);
    (*pcVar2)(this_00,(CowData<char32_t> *)&local_b0,(Callable *)&local_98,0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_98);
    Callable::~Callable((Callable *)local_a8);
    puVar8 = (undefined1 *)
             HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
             ::operator[]((HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
                           *)(this + 0xad8),&iStack_84);
    *puVar8 = 0;
    *(int *)(puVar8 + 4) = iVar7;
    *(undefined4 *)(puVar8 + 8) = param_5;
    *(undefined4 *)(puVar8 + 0xc) = param_6;
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar8 + 0x10),(CowData *)local_78);
    *(HTTPRequest **)(puVar8 + 0x18) = this_00;
    *(ulong *)(puVar8 + 0x20) = local_68;
    *(undefined4 *)(puVar8 + 0x28) = param_3;
    Node::add_child(this,this_00,0,0);
    local_90 = 0;
    _image_update(this,true,false,(Vector *)&local_98,iVar7);
    _update_image_queue(this);
    CowData<char32_t>::_unref(local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  }
  else {
    cVar6 = is_print_verbose_enabled();
    if (cVar6 != '\0') {
      local_98 = 0;
      if (local_d0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_d0);
      }
      local_a8[0] = 0;
      String::parse_latin1
                ((String *)local_a8,"Asset Library: Invalid image URL \'%s\' for asset # %d.");
      vformat<String,int>((CowData<char32_t> *)&local_88,(String *)local_a8,
                          (CowData<char32_t> *)&local_98,param_3);
      _err_print_error("_request_image","editor/plugins/asset_library_editor_plugin.cpp",1000,
                       (CowData<char32_t> *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    }
    local_e8 = (uint)param_2;
    if ((local_e8 & 0xffffff) < (uint)ObjectDB::slot_max) {
      while( true ) {
        uVar5 = local_88 >> 8;
        local_88 = uVar5 << 8;
        LOCK();
        bVar10 = (char)ObjectDB::spin_lock == '\0';
        if (bVar10) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar10) break;
        local_88 = uVar5 << 8;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar9 = (ulong *)((ulong)(local_e8 & 0xffffff) * 0x10 + ObjectDB::object_slots);
      if ((param_2 >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
        uVar4 = puVar9[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if (uVar4 != 0) {
          if ((_request_image(ObjectID,int,String,EditorAssetLibrary::ImageType,int)::{lambda()#1}::
               operator()()::sname == '\0') &&
             (iVar7 = __cxa_guard_acquire(&_request_image(ObjectID,int,String,EditorAssetLibrary::ImageType,int)
                                           ::{lambda()#1}::operator()()::sname), iVar7 != 0)) {
            _scs_create((char *)&_request_image(ObjectID,int,String,EditorAssetLibrary::ImageType,int)
                                 ::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_request_image(ObjectID,int,String,EditorAssetLibrary::ImageType,int)::
                          {lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_request_image(ObjectID,int,String,EditorAssetLibrary::ImageType,int)
                                 ::{lambda()#1}::operator()()::sname);
          }
          Control::get_editor_theme_icon((StringName *)&local_98);
          StringName::StringName((StringName *)&local_88,"set_image",false);
          Object::call<EditorAssetLibrary::ImageType,int,Ref<Texture2D>>
                    (local_58,uVar4,(StringName *)&local_88,param_5,param_6,(StringName *)&local_98)
          ;
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (CONCAT44(iStack_84,local_88) != 0)) {
            StringName::unref();
          }
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_98);
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorAssetLibraryItemDescription::add_preview(int, bool, String const&) */

void __thiscall
EditorAssetLibraryItemDescription::add_preview
          (EditorAssetLibraryItemDescription *this,int param_1,bool param_2,String *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  Button *this_00;
  CallableCustom *this_01;
  undefined4 *puVar6;
  Object *pOVar7;
  long lVar8;
  Object *pOVar9;
  long *plVar10;
  long in_FS_OFFSET;
  long local_a0;
  Object *local_98 [2];
  int local_88;
  undefined1 local_84;
  undefined1 local_80 [16];
  Object *local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  Object *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xdf0) == 0) {
    CanvasItem::show();
  }
  local_84 = 0;
  local_70 = (Object *)0x0;
  local_80 = (undefined1  [16])0x0;
  local_88 = param_1;
  if (*(long *)param_3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_80,(CowData *)param_3);
  }
  local_84 = param_2;
  this_00 = (Button *)operator_new(0xc10,"");
  local_68 = (Object *)0x0;
  Button::Button(this_00,(String *)&local_68);
  postinitialize_handler((Object *)this_00);
  local_80._8_8_ = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((add_preview(int,bool,String_const&)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&add_preview(int,bool,String_const&)::{lambda()#1}::operator()()::
                                   sname), iVar5 != 0)) {
    _scs_create((char *)&add_preview(int,bool,String_const&)::{lambda()#1}::operator()()::sname,true
               );
    __cxa_atexit(StringName::~StringName,
                 &add_preview(int,bool,String_const&)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&add_preview(int,bool,String_const&)::{lambda()#1}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_68);
  Button::set_button_icon((Ref *)this_00);
  if (((local_68 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar9 = local_68, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_68), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
  plVar10 = (long *)local_80._8_8_;
  BaseButton::set_toggle_mode(local_80[8]);
  pcVar1 = *(code **)(*plVar10 + 0x108);
  this_01 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_01);
  *(undefined8 *)(this_01 + 0x40) = 0;
  *(undefined **)(this_01 + 0x20) = &_LC12;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_01 = &PTR_hash_0012aa68;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x30) = uVar2;
  *(code **)(this_01 + 0x38) = _preview_click;
  *(EditorAssetLibraryItemDescription **)(this_01 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
  *(char **)(this_01 + 0x20) = "EditorAssetLibraryItemDescription::_preview_click";
  Callable::Callable((Callable *)local_98,this_01);
  Callable::bind<int>((int)(CowData<char32_t> *)&local_68);
  (*pcVar1)(plVar10,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_68,0);
  Callable::~Callable((Callable *)&local_68);
  Callable::~Callable((Callable *)local_98);
  Node::add_child(*(undefined8 *)(this + 0xdd8),plVar10,0,0);
  pOVar9 = local_70;
  if (!param_2) {
    if ((add_preview(int,bool,String_const&)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&add_preview(int,bool,String_const&)::{lambda()#2}::operator()()
                                     ::sname), iVar5 != 0)) {
      _scs_create((char *)&add_preview(int,bool,String_const&)::{lambda()#2}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &add_preview(int,bool,String_const&)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&add_preview(int,bool,String_const&)::{lambda()#2}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_68);
    pOVar9 = local_70;
    if (local_68 != local_70) {
      local_70 = local_68;
      if ((local_68 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        local_70 = (Object *)0x0;
      }
      if (((pOVar9 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
    pOVar9 = local_70;
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
    plVar10 = (long *)local_80._8_8_;
  }
  local_60 = 0;
  local_68._0_5_ = CONCAT14(local_84,local_88);
  if (local_80._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)local_80);
  }
  local_58 = plVar10;
  if ((pOVar9 == (Object *)0x0) ||
     (local_50 = pOVar9, cVar4 = RefCounted::reference(), pOVar7 = pOVar9, cVar4 == '\0')) {
    local_50 = (Object *)0x0;
    pOVar7 = (Object *)0x0;
  }
  if (*(long *)(this + 0xdf0) == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0xdf0) + -8) + 1;
  }
  iVar5 = CowData<EditorAssetLibraryItemDescription::Preview>::resize<false>
                    ((CowData<EditorAssetLibraryItemDescription::Preview> *)(this + 0xdf0),lVar8);
  if (iVar5 == 0) {
    if (*(long *)(this + 0xdf0) == 0) {
      local_a0 = -1;
      lVar8 = 0;
LAB_00110094:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,local_a0,lVar8,"p_index","size()","",false,
                 false);
      goto LAB_0010fe8d;
    }
    lVar8 = *(long *)(*(long *)(this + 0xdf0) + -8);
    local_a0 = lVar8 + -1;
    if (local_a0 < 0) goto LAB_00110094;
    CowData<EditorAssetLibraryItemDescription::Preview>::_copy_on_write
              ((CowData<EditorAssetLibraryItemDescription::Preview> *)(this + 0xdf0));
    puVar6 = (undefined4 *)(local_a0 * 0x20 + *(long *)(this + 0xdf0));
    *puVar6 = (undefined4)local_68;
    *(undefined1 *)(puVar6 + 1) = local_68._4_1_;
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)&local_60);
    pOVar3 = *(Object **)(puVar6 + 6);
    *(long **)(puVar6 + 4) = plVar10;
    if (pOVar3 == pOVar7) goto LAB_0010fe8d;
    *(Object **)(puVar6 + 6) = pOVar7;
    local_98[0] = pOVar3;
    if (pOVar7 == (Object *)0x0) {
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_98);
      goto LAB_0010fdf8;
    }
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      *(undefined8 *)(puVar6 + 6) = 0;
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_98);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
LAB_0010fe8d:
    if (pOVar7 == (Object *)0x0) goto LAB_0010fdf8;
  }
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
    Memory::free_static(pOVar7,false);
  }
LAB_0010fdf8:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (((*(long *)(this + 0xdf0) != 0) && (*(long *)(*(long *)(this + 0xdf0) + -8) == 1)) &&
     (!param_2)) {
    _preview_click(this,param_1);
  }
  if (((pOVar9 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorAssetLibrary::_http_request_completed(int, int, Vector<String> const&, Vector<unsigned
   char> const&) */

void __thiscall
EditorAssetLibrary::_http_request_completed
          (EditorAssetLibrary *this,int param_1,int param_2,Vector *param_3,Vector *param_4)

{
  Object *pOVar1;
  long *plVar2;
  code *pcVar3;
  StringName *pSVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  EditorAssetLibraryItemDescription *this_00;
  long lVar12;
  undefined8 uVar13;
  GridContainer *this_01;
  EditorAssetLibraryItem *this_02;
  Variant *pVVar14;
  Resource *pRVar15;
  undefined1 uVar16;
  bool bVar17;
  int iVar18;
  String *pSVar19;
  char *pcVar20;
  long in_FS_OFFSET;
  String *local_570;
  String *local_558;
  int local_548;
  int local_540;
  undefined8 local_4a0;
  Dictionary local_498 [8];
  Dictionary local_490 [8];
  long local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  long local_450;
  long local_448 [2];
  int local_438 [8];
  int local_418 [8];
  int local_3f8 [8];
  int local_3d8 [8];
  int local_3b8 [8];
  int local_398 [8];
  int local_378 [8];
  int local_358 [8];
  int local_338 [8];
  int local_318 [8];
  int local_2f8 [8];
  int local_2d8 [8];
  undefined **local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_78;
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  lVar12 = *(long *)(param_4 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4a0 = 0;
  if (lVar12 == 0) {
    uVar16 = false;
  }
  else {
    uVar16 = (undefined1)*(undefined4 *)(lVar12 + -8);
  }
  String::parse_utf8((char *)&local_4a0,(int)lVar12,(bool)uVar16);
  switch(param_1) {
  default:
    if (param_2 == 200) {
      Dictionary::Dictionary(local_498);
      Resource::Resource((Resource *)&local_2b8);
      local_68 = (undefined1  [16])0x0;
      local_2b8 = &PTR__initialize_classv_0012a1e0;
      local_78 = 0;
      local_70[0] = 0;
      local_58 = 0;
      local_50 = 0;
      JSON::parse((String *)&local_2b8,SUB81((CowData<char32_t> *)&local_4a0,0));
      Variant::Variant((Variant *)local_2d8,(Variant *)local_70);
      Variant::operator_cast_to_Dictionary((Variant *)local_448);
      Dictionary::operator=(local_498,(Dictionary *)local_448);
      Dictionary::~Dictionary((Dictionary *)local_448);
      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_2b8 = &PTR__initialize_classv_0012a1e0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      Resource::~Resource((Resource *)&local_2b8);
      iVar18 = *(int *)(this + 0xb10);
      *(undefined4 *)(this + 0xb10) = 0;
      iVar11 = (int)(Variant *)local_448;
      if (iVar18 == 2) {
        pOVar1 = *(Object **)(this + 0xab8);
        this[0xad1] = (EditorAssetLibrary)0x0;
        if ((pOVar1 != (Object *)0x0) && (cVar5 = predelete_handler(pOVar1), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
        pOVar1 = *(Object **)(this + 0xab0);
        if ((pOVar1 != (Object *)0x0) && (cVar5 = predelete_handler(pOVar1), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
        pOVar1 = *(Object **)(this + 0xac0);
        if ((pOVar1 != (Object *)0x0) && (cVar5 = predelete_handler(pOVar1), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
        Array::Array((Array *)local_490);
        Variant::Variant((Variant *)&local_2b8,"page");
        cVar5 = Dictionary::has((Variant *)local_498);
        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
          Variant::_clear_internal();
        }
        local_570._0_4_ = 0;
        if (cVar5 != '\0') {
          Variant::Variant((Variant *)&local_2b8,"page");
          pVVar14 = (Variant *)Dictionary::operator[]((Variant *)local_498);
          local_570._0_4_ = Variant::operator_cast_to_int(pVVar14);
          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
            Variant::_clear_internal();
          }
        }
        Variant::Variant((Variant *)&local_2b8,"pages");
        cVar5 = Dictionary::has((Variant *)local_498);
        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
          Variant::_clear_internal();
        }
        local_548 = 1;
        if (cVar5 != '\0') {
          Variant::Variant((Variant *)&local_2b8,"pages");
          pVVar14 = (Variant *)Dictionary::operator[]((Variant *)local_498);
          local_548 = Variant::operator_cast_to_int(pVVar14);
          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
            Variant::_clear_internal();
          }
        }
        Variant::Variant((Variant *)&local_2b8,"page_length");
        cVar5 = Dictionary::has((Variant *)local_498);
        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
          Variant::_clear_internal();
        }
        local_540 = 10;
        if (cVar5 != '\0') {
          Variant::Variant((Variant *)&local_2b8,"page_length");
          pVVar14 = (Variant *)Dictionary::operator[]((Variant *)local_498);
          local_540 = Variant::operator_cast_to_int(pVVar14);
          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
            Variant::_clear_internal();
          }
        }
        Variant::Variant((Variant *)&local_2b8,"total");
        cVar5 = Dictionary::has((Variant *)local_498);
        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
          Variant::_clear_internal();
        }
        iVar18 = 1;
        if (cVar5 != '\0') {
          Variant::Variant((Variant *)&local_2b8,"total");
          pVVar14 = (Variant *)Dictionary::operator[]((Variant *)local_498);
          iVar18 = Variant::operator_cast_to_int(pVVar14);
          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
            Variant::_clear_internal();
          }
        }
        Variant::Variant((Variant *)&local_2b8,"result");
        cVar5 = Dictionary::has((Variant *)local_498);
        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar5 != '\0') {
          Variant::Variant((Variant *)&local_2b8,"result");
          Dictionary::operator[]((Variant *)local_498);
          Variant::operator_cast_to_Array((Variant *)local_448);
          Array::operator=((Array *)local_490,(Array *)local_448);
          Array::~Array((Array *)local_448);
          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
            Variant::_clear_internal();
          }
        }
        Array::size();
        uVar13 = _make_pages((int)this,(int)local_570,local_548,local_540,iVar18);
        *(undefined8 *)(this + 0xab0) = uVar13;
        Node::add_child(*(undefined8 *)(this + 0xa30),uVar13,0,0);
        this_01 = (GridContainer *)operator_new(0xa10,"");
        GridContainer::GridContainer(this_01);
        postinitialize_handler((Object *)this_01);
        *(GridContainer **)(this + 0xab8) = this_01;
        _update_asset_items_columns(this);
        pSVar4 = *(StringName **)(this + 0xab8);
        EditorScale::get_scale();
        StringName::StringName((StringName *)local_448,"h_separation",false);
        Control::add_theme_constant_override(pSVar4,iVar11);
        if ((StringName::configured != '\0') && (local_448[0] != 0)) {
          StringName::unref();
        }
        pSVar4 = *(StringName **)(this + 0xab8);
        EditorScale::get_scale();
        StringName::StringName((StringName *)local_448,"v_separation",false);
        Control::add_theme_constant_override(pSVar4,iVar11);
        if ((StringName::configured != '\0') && (local_448[0] != 0)) {
          StringName::unref();
        }
        Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xab8),0,0);
        Array::size();
        uVar13 = _make_pages((int)this,(int)local_570,local_548,local_540,iVar18);
        *(undefined8 *)(this + 0xac0) = uVar13;
        Node::add_child(*(undefined8 *)(this + 0xa30),uVar13,0,0);
        cVar5 = Array::is_empty();
        if (cVar5 == '\0') {
          CanvasItem::hide();
        }
        else {
          lVar12 = 0;
          local_488 = 0;
          do {
            iVar18 = MenuButton::get_popup();
            cVar5 = PopupMenu::is_item_checked(iVar18);
            if (cVar5 != '\0') {
              if ((local_488 != 0) && (1 < *(uint *)(local_488 + -8))) {
                String::operator+=((String *)&local_488,", ");
              }
              local_450 = 0;
              String::parse_latin1((String *)&local_450,"");
              local_458 = 0;
              String::parse_latin1((String *)&local_458,(&support_text)[lVar12]);
              TTR((String *)local_448,(String *)&local_458);
              String::operator+=((String *)&local_488,(String *)local_448);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 != 3);
          if ((local_488 == 0) || (*(uint *)(local_488 + -8) < 2)) {
            String::parse_latin1((String *)&local_488,"-");
          }
          LineEdit::get_text();
          if ((local_448[0] == 0) || (iVar18 = (int)*(undefined8 *)(local_448[0] + -8), iVar18 == 0)
             ) {
            CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
LAB_00112402:
            local_450 = 0;
            if (local_488 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_450,(CowData *)&local_488);
            }
            local_458 = 0;
            String::parse_latin1((String *)&local_458,"4.4");
            local_468 = 0;
            String::parse_latin1((String *)&local_468,"godot");
            String::capitalize();
            local_478 = 0;
            String::parse_latin1((String *)&local_478,"");
            local_480 = 0;
            String::parse_latin1
                      ((String *)&local_480,
                       "No results compatible with %s %s for support level(s): %s.\nCheck the enabled support levels using the \'Support\' button in the top-right corner."
                      );
            TTR((String *)&local_470,(String *)&local_480);
            vformat<String,String,String>
                      ((Variant *)local_448,(String *)&local_470,(CowData<char32_t> *)&local_460,
                       (String *)&local_458,(String *)&local_450);
            _set_library_message((String *)this);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_470);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_480);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_478);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
          }
          else {
            CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
            if (iVar18 == 1) goto LAB_00112402;
            local_450 = 0;
            if (local_488 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_450,(CowData *)&local_488);
            }
            LineEdit::get_text();
            local_468 = 0;
            String::parse_latin1((String *)&local_468,"");
            local_470 = 0;
            String::parse_latin1
                      ((String *)&local_470,"No results for \"%s\" for support level(s): %s.");
            TTR((String *)&local_460,(String *)&local_470);
            vformat<String,String>
                      ((Variant *)local_448,(String *)&local_460,(String *)&local_458,
                       (String *)&local_450);
            _set_library_message((String *)this);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_470);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_468);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_488);
        }
        for (iVar18 = 0; iVar11 = Array::size(), iVar18 < iVar11; iVar18 = iVar18 + 1) {
          Array::operator[]((int)(Array *)local_490);
          Variant::operator_cast_to_Dictionary((Variant *)&local_468);
          Variant::Variant((Variant *)&local_2b8,"title");
          cVar5 = Dictionary::has((Variant *)&local_468);
          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
            Variant::_clear_internal();
          }
          if (cVar5 == '\0') {
            _err_print_error("_http_request_completed",
                             "editor/plugins/asset_library_editor_plugin.cpp",0x569,
                             "Condition \"!r.has(\"title\")\" is true. Continuing.",0,0);
          }
          else {
            Variant::Variant((Variant *)&local_2b8,"asset_id");
            cVar5 = Dictionary::has((Variant *)&local_468);
            if (Variant::needs_deinit[(int)local_2b8] != '\0') {
              Variant::_clear_internal();
            }
            if (cVar5 == '\0') {
              _err_print_error("_http_request_completed",
                               "editor/plugins/asset_library_editor_plugin.cpp",0x56a,
                               "Condition \"!r.has(\"asset_id\")\" is true. Continuing.",0,0);
            }
            else {
              Variant::Variant((Variant *)&local_2b8,"author");
              cVar5 = Dictionary::has((Variant *)&local_468);
              if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                Variant::_clear_internal();
              }
              if (cVar5 == '\0') {
                _err_print_error("_http_request_completed",
                                 "editor/plugins/asset_library_editor_plugin.cpp",0x56b,
                                 "Condition \"!r.has(\"author\")\" is true. Continuing.",0,0);
              }
              else {
                Variant::Variant((Variant *)&local_2b8,"author_id");
                cVar5 = Dictionary::has((Variant *)&local_468);
                if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                  Variant::_clear_internal();
                }
                if (cVar5 == '\0') {
                  _err_print_error("_http_request_completed",
                                   "editor/plugins/asset_library_editor_plugin.cpp",0x56c,
                                   "Condition \"!r.has(\"author_id\")\" is true. Continuing.",0,0);
                }
                else {
                  Variant::Variant((Variant *)&local_2b8,"category_id");
                  cVar5 = Dictionary::has((Variant *)&local_468);
                  if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (cVar5 == '\0') {
                    _err_print_error("_http_request_completed",
                                     "editor/plugins/asset_library_editor_plugin.cpp",0x56d,
                                     "Condition \"!r.has(\"category_id\")\" is true. Continuing.",0,
                                     0);
                  }
                  else {
                    Variant::Variant((Variant *)&local_2b8,"category_id");
                    Dictionary::operator[]((Variant *)&local_468);
                    cVar5 = Dictionary::has((Variant *)(this + 0xb18));
                    if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (cVar5 == '\0') {
                      _err_print_error("_http_request_completed",
                                       "editor/plugins/asset_library_editor_plugin.cpp",0x56e,
                                       "Condition \"!category_map.has(r[\"category_id\"])\" is true."
                                       ,0,0);
                      Dictionary::~Dictionary((Dictionary *)&local_468);
                      Array::~Array((Array *)local_490);
                      goto LAB_0011089f;
                    }
                    Variant::Variant((Variant *)&local_2b8,"cost");
                    cVar5 = Dictionary::has((Variant *)&local_468);
                    if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (cVar5 == '\0') {
                      _err_print_error("_http_request_completed",
                                       "editor/plugins/asset_library_editor_plugin.cpp",0x56f,
                                       "Condition \"!r.has(\"cost\")\" is true. Continuing.",0,0);
                    }
                    else {
                      this_02 = (EditorAssetLibraryItem *)operator_new(0xa48,"");
                      EditorAssetLibraryItem::EditorAssetLibraryItem(this_02,true);
                      postinitialize_handler((Object *)this_02);
                      Node::add_child(*(undefined8 *)(this + 0xab8),this_02,0,0);
                      Variant::Variant((Variant *)&local_2b8,"cost");
                      Dictionary::operator[]((Variant *)&local_468);
                      Variant::operator_cast_to_String((Variant *)local_448);
                      Variant::Variant((Variant *)local_2d8,"author_id");
                      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_468);
                      uVar6 = Variant::operator_cast_to_int(pVVar14);
                      Variant::Variant((Variant *)local_2f8,"author");
                      Dictionary::operator[]((Variant *)&local_468);
                      Variant::operator_cast_to_String((Variant *)&local_450);
                      Variant::Variant((Variant *)local_318,"category_id");
                      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_468);
                      uVar7 = Variant::operator_cast_to_int(pVVar14);
                      Variant::Variant((Variant *)local_338,"category_id");
                      Dictionary::operator[]((Variant *)&local_468);
                      Dictionary::operator[]((Variant *)(this + 0xb18));
                      Variant::operator_cast_to_String((Variant *)&local_458);
                      Variant::Variant((Variant *)local_358,"asset_id");
                      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_468);
                      uVar8 = Variant::operator_cast_to_int(pVVar14);
                      Variant::Variant((Variant *)local_378,"title");
                      Dictionary::operator[]((Variant *)&local_468);
                      Variant::operator_cast_to_String((Variant *)&local_460);
                      EditorAssetLibraryItem::configure
                                ((String *)this_02,(int)(Variant *)&local_460,(String *)(ulong)uVar8
                                 ,(int)(Variant *)&local_458,(String *)(ulong)uVar7,
                                 (int)(Variant *)&local_450,(String *)(ulong)uVar6);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
                      if (Variant::needs_deinit[local_378[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      if (Variant::needs_deinit[local_358[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
                      if (Variant::needs_deinit[local_338[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      if (Variant::needs_deinit[local_318[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
                      if (Variant::needs_deinit[local_2f8[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                        Variant::_clear_internal();
                      }
                      CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
                      if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                        Variant::_clear_internal();
                      }
                      EditorAssetLibraryItem::clamp_width(this_02,*(int *)(this + 0xb30));
                      pcVar3 = *(code **)(*(long *)this_02 + 0x108);
                      create_custom_callable_function_pointer<EditorAssetLibrary,int>
                                ((EditorAssetLibrary *)local_448,(char *)this,
                                 (_func_void_int *)"&EditorAssetLibrary::_select_asset");
                      StringName::StringName((StringName *)&local_450,"asset_selected",false);
                      (*pcVar3)(this_02,(Variant *)&local_450,(Variant *)local_448,0);
                      if ((StringName::configured != '\0') && (local_450 != 0)) {
                        StringName::unref();
                      }
                      Callable::~Callable((Callable *)local_448);
                      pcVar3 = *(code **)(*(long *)this_02 + 0x108);
                      create_custom_callable_function_pointer<EditorAssetLibrary,String_const&>
                                ((EditorAssetLibrary *)local_448,(char *)this,
                                 (_func_void_String_ptr *)"&EditorAssetLibrary::_select_author");
                      StringName::StringName((StringName *)&local_450,"author_selected",false);
                      (*pcVar3)(this_02,(Variant *)&local_450,(Variant *)local_448,0);
                      if ((StringName::configured != '\0') && (local_450 != 0)) {
                        StringName::unref();
                      }
                      Callable::~Callable((Callable *)local_448);
                      pcVar3 = *(code **)(*(long *)this_02 + 0x108);
                      create_custom_callable_function_pointer<EditorAssetLibrary,int>
                                ((EditorAssetLibrary *)local_448,(char *)this,
                                 (_func_void_int *)"&EditorAssetLibrary::_select_category");
                      StringName::StringName((StringName *)&local_450,"category_selected",false);
                      (*pcVar3)(this_02,(Variant *)&local_450,(Variant *)local_448,0);
                      if ((StringName::configured != '\0') && (local_450 != 0)) {
                        StringName::unref();
                      }
                      Callable::~Callable((Callable *)local_448);
                      Variant::Variant((Variant *)local_2d8,"icon_url");
                      cVar5 = Dictionary::has((Variant *)&local_468);
                      if (cVar5 == '\0') {
                        if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                      }
                      else {
                        Variant::Variant((Variant *)&local_2b8,"icon_url");
                        Dictionary::operator[]((Variant *)&local_468);
                        Variant::operator_cast_to_String((Variant *)local_448);
                        if (local_448[0] == 0) {
                          bVar17 = false;
                        }
                        else {
                          bVar17 = 1 < *(uint *)(local_448[0] + -8);
                        }
                        CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
                        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                          Variant::_clear_internal();
                        }
                        if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        if (bVar17) {
                          Variant::Variant((Variant *)&local_2b8,"icon_url");
                          Dictionary::operator[]((Variant *)&local_468);
                          Variant::operator_cast_to_String((Variant *)local_448);
                          Variant::Variant((Variant *)local_2d8,"asset_id");
                          pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_468);
                          iVar11 = Variant::operator_cast_to_int(pVVar14);
                          _request_image(this,*(undefined8 *)(this_02 + 0x60),iVar11,
                                         (Variant *)local_448);
                          if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                            Variant::_clear_internal();
                          }
                          CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
                          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                            Variant::_clear_internal();
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          Dictionary::~Dictionary((Dictionary *)&local_468);
        }
        cVar5 = Array::is_empty();
        if (cVar5 == '\0') {
          ScrollContainer::set_v_scroll((int)*(undefined8 *)(this + 0xa28));
        }
        Array::~Array((Array *)local_490);
      }
      else if (iVar18 == 3) {
        Dictionary::Dictionary(local_490,local_498);
        Variant::Variant((Variant *)&local_2b8,"title");
        cVar5 = Dictionary::has((Variant *)local_490);
        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar5 == '\0') {
          _err_print_error("_http_request_completed",
                           "editor/plugins/asset_library_editor_plugin.cpp",0x585,
                           "Condition \"!r.has(\"title\")\" is true.",0,0);
        }
        else {
          Variant::Variant((Variant *)&local_2b8,"asset_id");
          cVar5 = Dictionary::has((Variant *)local_490);
          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
            Variant::_clear_internal();
          }
          if (cVar5 == '\0') {
            _err_print_error("_http_request_completed",
                             "editor/plugins/asset_library_editor_plugin.cpp",0x586,
                             "Condition \"!r.has(\"asset_id\")\" is true.",0,0);
          }
          else {
            Variant::Variant((Variant *)&local_2b8,"author");
            cVar5 = Dictionary::has((Variant *)local_490);
            if (Variant::needs_deinit[(int)local_2b8] != '\0') {
              Variant::_clear_internal();
            }
            if (cVar5 == '\0') {
              _err_print_error("_http_request_completed",
                               "editor/plugins/asset_library_editor_plugin.cpp",0x587,
                               "Condition \"!r.has(\"author\")\" is true.",0,0);
            }
            else {
              Variant::Variant((Variant *)&local_2b8,"author_id");
              cVar5 = Dictionary::has((Variant *)local_490);
              if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                Variant::_clear_internal();
              }
              if (cVar5 == '\0') {
                _err_print_error("_http_request_completed",
                                 "editor/plugins/asset_library_editor_plugin.cpp",0x588,
                                 "Condition \"!r.has(\"author_id\")\" is true.",0,0);
              }
              else {
                Variant::Variant((Variant *)&local_2b8,"version");
                cVar5 = Dictionary::has((Variant *)local_490);
                if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                  Variant::_clear_internal();
                }
                if (cVar5 == '\0') {
                  _err_print_error("_http_request_completed",
                                   "editor/plugins/asset_library_editor_plugin.cpp",0x589,
                                   "Condition \"!r.has(\"version\")\" is true.",0,0);
                }
                else {
                  Variant::Variant((Variant *)&local_2b8,"version_string");
                  cVar5 = Dictionary::has((Variant *)local_490);
                  if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (cVar5 == '\0') {
                    _err_print_error("_http_request_completed",
                                     "editor/plugins/asset_library_editor_plugin.cpp",0x58a,
                                     "Condition \"!r.has(\"version_string\")\" is true.",0,0);
                  }
                  else {
                    Variant::Variant((Variant *)&local_2b8,"category_id");
                    cVar5 = Dictionary::has((Variant *)local_490);
                    if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (cVar5 == '\0') {
                      _err_print_error("_http_request_completed",
                                       "editor/plugins/asset_library_editor_plugin.cpp",0x58b,
                                       "Condition \"!r.has(\"category_id\")\" is true.",0,0);
                    }
                    else {
                      Variant::Variant((Variant *)&local_2b8,"category_id");
                      Dictionary::operator[]((Variant *)local_490);
                      cVar5 = Dictionary::has((Variant *)(this + 0xb18));
                      if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                        Variant::_clear_internal();
                      }
                      if (cVar5 == '\0') {
                        _err_print_error("_http_request_completed",
                                         "editor/plugins/asset_library_editor_plugin.cpp",0x58c,
                                         "Condition \"!category_map.has(r[\"category_id\"])\" is true."
                                         ,0,0);
                      }
                      else {
                        Variant::Variant((Variant *)&local_2b8,"cost");
                        cVar5 = Dictionary::has((Variant *)local_490);
                        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                          Variant::_clear_internal();
                        }
                        if (cVar5 == '\0') {
                          _err_print_error("_http_request_completed",
                                           "editor/plugins/asset_library_editor_plugin.cpp",0x58d,
                                           "Condition \"!r.has(\"cost\")\" is true.",0,0);
                        }
                        else {
                          Variant::Variant((Variant *)&local_2b8,"description");
                          cVar5 = Dictionary::has((Variant *)local_490);
                          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                            Variant::_clear_internal();
                          }
                          if (cVar5 == '\0') {
                            _err_print_error("_http_request_completed",
                                             "editor/plugins/asset_library_editor_plugin.cpp",0x58e,
                                             "Condition \"!r.has(\"description\")\" is true.",0,0);
                          }
                          else {
                            Variant::Variant((Variant *)&local_2b8,"download_url");
                            cVar5 = Dictionary::has((Variant *)local_490);
                            if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                              Variant::_clear_internal();
                            }
                            if (cVar5 == '\0') {
                              _err_print_error("_http_request_completed",
                                               "editor/plugins/asset_library_editor_plugin.cpp",
                                               0x58f,
                                               "Condition \"!r.has(\"download_url\")\" is true.",0,0
                                              );
                            }
                            else {
                              Variant::Variant((Variant *)&local_2b8,"download_hash");
                              cVar5 = Dictionary::has((Variant *)local_490);
                              if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                Variant::_clear_internal();
                              }
                              if (cVar5 == '\0') {
                                _err_print_error("_http_request_completed",
                                                 "editor/plugins/asset_library_editor_plugin.cpp",
                                                 0x590,
                                                 "Condition \"!r.has(\"download_hash\")\" is true.",
                                                 0,0);
                              }
                              else {
                                Variant::Variant((Variant *)&local_2b8,"browse_url");
                                cVar5 = Dictionary::has((Variant *)local_490);
                                if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                  Variant::_clear_internal();
                                }
                                if (cVar5 != '\0') {
                                  pOVar1 = *(Object **)(this + 0xb08);
                                  if ((pOVar1 != (Object *)0x0) &&
                                     (cVar5 = predelete_handler(pOVar1), cVar5 != '\0')) {
                                    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
                                    Memory::free_static(pOVar1,false);
                                  }
                                  this_00 = (EditorAssetLibraryItemDescription *)
                                            operator_new(0xe28,"");
                                  EditorAssetLibraryItemDescription::
                                  EditorAssetLibraryItemDescription(this_00);
                                  postinitialize_handler((Object *)this_00);
                                  *(EditorAssetLibraryItemDescription **)(this + 0xb08) = this_00;
                                  Node::add_child(this,this_00,0,0);
                                  plVar2 = *(long **)(this + 0xb08);
                                  pcVar3 = *(code **)(*plVar2 + 0x108);
                                  create_custom_callable_function_pointer<EditorAssetLibrary>
                                            ((EditorAssetLibrary *)local_448,(char *)this,
                                             (_func_void *)"&EditorAssetLibrary::_install_asset");
                                  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x268,
                                            (Variant *)local_448,0);
                                  Callable::~Callable((Callable *)local_448);
                                  pSVar19 = *(String **)(this + 0xb08);
                                  Variant::Variant((Variant *)&local_2b8,"download_hash");
                                  Dictionary::operator[]((Variant *)local_490);
                                  Variant::operator_cast_to_String((Variant *)local_448);
                                  Variant::Variant((Variant *)local_2d8,"browse_url");
                                  Dictionary::operator[]((Variant *)local_490);
                                  Variant::operator_cast_to_String((Variant *)&local_450);
                                  Variant::Variant((Variant *)local_2f8,"download_url");
                                  Dictionary::operator[]((Variant *)local_490);
                                  Variant::operator_cast_to_String((Variant *)&local_458);
                                  Variant::Variant((Variant *)local_318,"description");
                                  Dictionary::operator[]((Variant *)local_490);
                                  Variant::operator_cast_to_String((Variant *)&local_460);
                                  Variant::Variant((Variant *)local_338,"version_string");
                                  Dictionary::operator[]((Variant *)local_490);
                                  Variant::operator_cast_to_String((Variant *)&local_468);
                                  Variant::Variant((Variant *)local_358,"version");
                                  pVVar14 = (Variant *)Dictionary::operator[]((Variant *)local_490);
                                  uVar6 = Variant::operator_cast_to_int(pVVar14);
                                  Variant::Variant((Variant *)local_378,"cost");
                                  Dictionary::operator[]((Variant *)local_490);
                                  Variant::operator_cast_to_String((Variant *)&local_470);
                                  Variant::Variant((Variant *)local_398,"author_id");
                                  pVVar14 = (Variant *)Dictionary::operator[]((Variant *)local_490);
                                  uVar7 = Variant::operator_cast_to_int(pVVar14);
                                  Variant::Variant((Variant *)local_3b8,"author");
                                  Dictionary::operator[]((Variant *)local_490);
                                  Variant::operator_cast_to_String((Variant *)&local_478);
                                  Variant::Variant((Variant *)local_3d8,"category_id");
                                  pVVar14 = (Variant *)Dictionary::operator[]((Variant *)local_490);
                                  uVar8 = Variant::operator_cast_to_int(pVVar14);
                                  Variant::Variant((Variant *)local_3f8,"category_id");
                                  Dictionary::operator[]((Variant *)local_490);
                                  Dictionary::operator[]((Variant *)(this + 0xb18));
                                  Variant::operator_cast_to_String((Variant *)&local_480);
                                  Variant::Variant((Variant *)local_418,"asset_id");
                                  pVVar14 = (Variant *)Dictionary::operator[]((Variant *)local_490);
                                  uVar9 = Variant::operator_cast_to_int(pVVar14);
                                  Variant::Variant((Variant *)local_438,"title");
                                  Dictionary::operator[]((Variant *)local_490);
                                  Variant::operator_cast_to_String((Variant *)&local_488);
                                  EditorAssetLibraryItemDescription::configure
                                            (pSVar19,(int)(Variant *)&local_488,
                                             (String *)(ulong)uVar9,(int)(Variant *)&local_480,
                                             (String *)(ulong)uVar8,(int)(Variant *)&local_478,
                                             (String *)(ulong)uVar7,(int)(Variant *)&local_470,
                                             (String *)(ulong)uVar6,(String *)&local_468,
                                             (String *)&local_460,(String *)&local_458,
                                             (String *)&local_450);
                                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_488);
                                  if (Variant::needs_deinit[local_438[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  if (Variant::needs_deinit[local_418[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_480);
                                  if (Variant::needs_deinit[local_3f8[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  if (Variant::needs_deinit[local_3d8[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_478);
                                  if (Variant::needs_deinit[local_3b8[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  if (Variant::needs_deinit[local_398[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_470);
                                  if (Variant::needs_deinit[local_378[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  if (Variant::needs_deinit[local_358[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_468);
                                  if (Variant::needs_deinit[local_338[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
                                  if (Variant::needs_deinit[local_318[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
                                  if (Variant::needs_deinit[local_2f8[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
                                  if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
                                  if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  lVar12 = _get_asset_in_progress
                                                     (this,*(int *)(*(long *)(this + 0xb08) + 0xe00)
                                                     );
                                  if (lVar12 == 0) {
                                    local_450 = 0;
                                    uVar13 = *(undefined8 *)(this + 0xb08);
                                    String::parse_latin1((String *)&local_450,"");
                                    pcVar20 = "Download";
LAB_0011137f:
                                    local_458 = 0;
                                    String::parse_latin1((String *)&local_458,pcVar20);
                                    TTR((String *)local_448,(String *)&local_458);
                                    AcceptDialog::set_ok_button_text(uVar13,(Variant *)local_448);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
                                    BaseButton::set_disabled
                                              (SUB81(*(undefined8 *)
                                                      (*(long *)(this + 0xb08) + 0xd88),0));
                                  }
                                  else {
                                    cVar5 = BaseButton::is_disabled();
                                    uVar13 = *(undefined8 *)(this + 0xb08);
                                    local_450 = 0;
                                    if (cVar5 == '\0') {
                                      String::parse_latin1((String *)&local_450,"");
                                      pcVar20 = "Install";
                                      goto LAB_0011137f;
                                    }
                                    String::parse_latin1((String *)&local_450,"");
                                    local_458 = 0;
                                    String::parse_latin1((String *)&local_458,"Downloading...");
                                    TTR((String *)local_448,(String *)&local_458);
                                    AcceptDialog::set_ok_button_text(uVar13,(Variant *)local_448);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
                                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
                                    BaseButton::set_disabled
                                              (SUB81(*(undefined8 *)
                                                      (*(long *)(this + 0xb08) + 0xd88),0));
                                  }
                                  Variant::Variant((Variant *)local_2d8,"icon_url");
                                  cVar5 = Dictionary::has((Variant *)local_490);
                                  if (cVar5 == '\0') {
                                    if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                                      Variant::_clear_internal();
                                    }
                                  }
                                  else {
                                    Variant::Variant((Variant *)&local_2b8,"icon_url");
                                    Dictionary::operator[]((Variant *)local_490);
                                    Variant::operator_cast_to_String((Variant *)local_448);
                                    if (local_448[0] == 0) {
                                      bVar17 = false;
                                    }
                                    else {
                                      bVar17 = 1 < *(uint *)(local_448[0] + -8);
                                    }
                                    CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
                                    if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                      Variant::_clear_internal();
                                    }
                                    if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                                      Variant::_clear_internal();
                                    }
                                    if (bVar17) {
                                      Variant::Variant((Variant *)&local_2b8,"icon_url");
                                      Dictionary::operator[]((Variant *)local_490);
                                      Variant::operator_cast_to_String((Variant *)local_448);
                                      Variant::Variant((Variant *)local_2d8,"asset_id");
                                      pVVar14 = (Variant *)
                                                Dictionary::operator[]((Variant *)local_490);
                                      iVar18 = Variant::operator_cast_to_int(pVVar14);
                                      _request_image(this,*(undefined8 *)
                                                           (*(long *)(this + 0xb08) + 0x60),iVar18,
                                                     (Variant *)local_448,0,0);
                                      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                                        Variant::_clear_internal();
                                      }
                                      CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
                                      if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                        Variant::_clear_internal();
                                      }
                                    }
                                  }
                                  Variant::Variant((Variant *)&local_2b8,"previews");
                                  cVar5 = Dictionary::has((Variant *)local_498);
                                  if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                    Variant::_clear_internal();
                                  }
                                  if (cVar5 != '\0') {
                                    Variant::Variant((Variant *)&local_2b8,"previews");
                                    Dictionary::operator[]((Variant *)local_498);
                                    Variant::operator_cast_to_Array((Variant *)&local_460);
                                    if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                      Variant::_clear_internal();
                                    }
                                    for (iVar18 = 0; iVar11 = Array::size(), iVar18 < iVar11;
                                        iVar18 = iVar18 + 1) {
                                      Array::operator[]((int)(Variant *)&local_460);
                                      Variant::operator_cast_to_Dictionary((Variant *)&local_458);
                                      Variant::Variant((Variant *)&local_2b8,"type");
                                      cVar5 = Dictionary::has((Variant *)&local_458);
                                      if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                        Variant::_clear_internal();
                                      }
                                      if (cVar5 == '\0') {
                                        _err_print_error("_http_request_completed",
                                                                                                                  
                                                  "editor/plugins/asset_library_editor_plugin.cpp",
                                                  0x5b5,
                                                  "Condition \"!p.has(\"type\")\" is true. Continuing."
                                                  ,0,0);
LAB_00113183:
                                        Dictionary::~Dictionary((Dictionary *)&local_458);
                                      }
                                      else {
                                        Variant::Variant((Variant *)&local_2b8,"link");
                                        cVar5 = Dictionary::has((Variant *)&local_458);
                                        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                          Variant::_clear_internal();
                                        }
                                        if (cVar5 == '\0') {
                                          _err_print_error("_http_request_completed",
                                                                                                                      
                                                  "editor/plugins/asset_library_editor_plugin.cpp",
                                                  0x5b6,
                                                  "Condition \"!p.has(\"link\")\" is true. Continuing."
                                                  ,0,0);
                                          goto LAB_00113183;
                                        }
                                        Variant::Variant((Variant *)local_2d8,"type");
                                        cVar5 = Dictionary::has((Variant *)&local_458);
                                        if (cVar5 == '\0') {
                                          if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                                            Variant::_clear_internal();
                                          }
LAB_00112bdb:
                                          local_450 = 0;
                                          local_570._0_1_ = '\0';
                                          bVar17 = false;
                                        }
                                        else {
                                          Variant::Variant((Variant *)&local_2b8,"type");
                                          Dictionary::operator[]((Variant *)&local_458);
                                          Variant::operator_cast_to_String((Variant *)local_448);
                                          local_570._0_1_ =
                                               String::operator==((String *)local_448,"video");
                                          CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
                                          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                            Variant::_clear_internal();
                                          }
                                          if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                                            Variant::_clear_internal();
                                          }
                                          local_450 = 0;
                                          if ((char)local_570 == '\0') goto LAB_00112bdb;
                                          Variant::Variant((Variant *)&local_2b8,"link");
                                          cVar5 = Dictionary::has((Variant *)&local_458);
                                          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                            Variant::_clear_internal();
                                          }
                                          if (cVar5 != '\0') {
                                            Variant::Variant((Variant *)&local_2b8,"link");
                                            Dictionary::operator[]((Variant *)&local_458);
                                            Variant::operator_cast_to_String((Variant *)local_448);
                                            if (local_448[0] != 0) {
                                              CowData<char32_t>::_unref
                                                        ((CowData<char32_t> *)&local_450);
                                              local_450 = local_448[0];
                                              local_448[0] = 0;
                                            }
                                            CowData<char32_t>::_unref
                                                      ((CowData<char32_t> *)local_448);
                                            if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                              Variant::_clear_internal();
                                            }
                                          }
                                          bVar17 = true;
                                        }
                                        EditorAssetLibraryItemDescription::add_preview
                                                  (*(EditorAssetLibraryItemDescription **)
                                                    (this + 0xb08),iVar18,bVar17,
                                                   (String *)&local_450);
                                        Variant::Variant((Variant *)&local_2b8,"thumbnail");
                                        cVar5 = Dictionary::has((Variant *)&local_458);
                                        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                          Variant::_clear_internal();
                                        }
                                        if (cVar5 != '\0') {
                                          Variant::Variant((Variant *)&local_2b8,"thumbnail");
                                          Dictionary::operator[]((Variant *)&local_458);
                                          Variant::operator_cast_to_String((Variant *)local_448);
                                          Variant::Variant((Variant *)local_2d8,"asset_id");
                                          pVVar14 = (Variant *)
                                                    Dictionary::operator[]((Variant *)local_490);
                                          iVar11 = Variant::operator_cast_to_int(pVVar14);
                                          _request_image(this,*(undefined8 *)
                                                               (*(long *)(this + 0xb08) + 0x60),
                                                         iVar11,(Variant *)local_448);
                                          if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                                            Variant::_clear_internal();
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
                                          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                            Variant::_clear_internal();
                                          }
                                        }
                                        if ((char)local_570 == '\0') {
                                          Variant::Variant((Variant *)&local_2b8,"link");
                                          Dictionary::operator[]((Variant *)&local_458);
                                          Variant::operator_cast_to_String((Variant *)local_448);
                                          Variant::Variant((Variant *)local_2d8,"asset_id");
                                          pVVar14 = (Variant *)
                                                    Dictionary::operator[]((Variant *)local_490);
                                          iVar11 = Variant::operator_cast_to_int(pVVar14);
                                          _request_image(this,*(undefined8 *)
                                                               (*(long *)(this + 0xb08) + 0x60),
                                                         iVar11,(Variant *)local_448);
                                          if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                                            Variant::_clear_internal();
                                          }
                                          CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
                                          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                                            Variant::_clear_internal();
                                          }
                                        }
                                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
                                        Dictionary::~Dictionary((Dictionary *)&local_458);
                                      }
                                    }
                                    Array::~Array((Array *)&local_460);
                                  }
                                  local_2b8 = (undefined **)0x0;
                                  Window::popup_centered(*(Vector2i **)(this + 0xb08));
                                  Dictionary::~Dictionary(local_490);
                                  goto LAB_0011089f;
                                }
                                _err_print_error("_http_request_completed",
                                                 "editor/plugins/asset_library_editor_plugin.cpp",
                                                 0x591,
                                                 "Condition \"!r.has(\"browse_url\")\" is true.",0,0
                                                );
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        Dictionary::~Dictionary(local_490);
      }
      else if (iVar18 == 1) {
        OptionButton::clear();
        pSVar19 = *(String **)(this + 0xa70);
        local_450 = 0;
        String::parse_latin1((String *)&local_450,"");
        local_458 = 0;
        String::parse_latin1((String *)&local_458,"All");
        TTR((String *)local_448,(String *)&local_458);
        OptionButton::add_item(pSVar19,iVar11);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
        uVar13 = *(undefined8 *)(this + 0xa70);
        Variant::Variant((Variant *)&local_2b8,0);
        OptionButton::set_item_metadata((int)uVar13,(Variant *)0x0);
        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_2b8,"categories");
        cVar5 = Dictionary::has((Variant *)local_498);
        if (Variant::needs_deinit[(int)local_2b8] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar5 != '\0') {
          Variant::Variant((Variant *)&local_2b8,"categories");
          Dictionary::operator[]((Variant *)local_498);
          Variant::operator_cast_to_Array((Variant *)&local_458);
          if (Variant::needs_deinit[(int)local_2b8] != '\0') {
            Variant::_clear_internal();
          }
          for (iVar18 = 0; iVar10 = Array::size(), iVar18 < iVar10; iVar18 = iVar18 + 1) {
            Array::operator[]((int)(String *)&local_458);
            Variant::operator_cast_to_Dictionary((Variant *)&local_450);
            Variant::Variant((Variant *)local_2d8,"name");
            cVar5 = Dictionary::has((Variant *)&local_450);
            if (cVar5 == '\0') {
              if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                Variant::_clear_internal();
              }
            }
            else {
              Variant::Variant((Variant *)&local_2b8,"id");
              cVar5 = Dictionary::has((Variant *)&local_450);
              if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                Variant::_clear_internal();
              }
              if (cVar5 != '\0') {
                Variant::Variant((Variant *)&local_2b8,"name");
                Dictionary::operator[]((Variant *)&local_450);
                Variant::operator_cast_to_String((Variant *)local_448);
                if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                  Variant::_clear_internal();
                }
                Variant::Variant((Variant *)&local_2b8,"id");
                pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_450);
                iVar10 = Variant::operator_cast_to_int(pVVar14);
                if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                  Variant::_clear_internal();
                }
                OptionButton::add_item(*(String **)(this + 0xa70),iVar11);
                uVar13 = *(undefined8 *)(this + 0xa70);
                Variant::Variant((Variant *)&local_2b8,iVar10);
                OptionButton::set_item_metadata((int)uVar13,(Variant *)0xffffffff);
                if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                  Variant::_clear_internal();
                }
                Variant::Variant((Variant *)&local_2b8,(String *)local_448);
                Variant::Variant((Variant *)local_2d8,"id");
                Dictionary::operator[]((Variant *)&local_450);
                pRVar15 = (Resource *)Dictionary::operator[]((Variant *)(this + 0xb18));
                if (pRVar15 != (Resource *)&local_2b8) {
                  if (Variant::needs_deinit[*(int *)pRVar15] != '\0') {
                    Variant::_clear_internal();
                  }
                  *(undefined4 *)pRVar15 = 0;
                  *(int *)pRVar15 = (int)local_2b8;
                  *(undefined8 *)(pRVar15 + 8) = local_2b0;
                  *(undefined8 *)(pRVar15 + 0x10) = uStack_2a8;
                  local_2b8 = (undefined **)((ulong)local_2b8 & 0xffffffff00000000);
                }
                if (Variant::needs_deinit[local_2d8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[(int)local_2b8] != '\0') {
                  Variant::_clear_internal();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
              }
            }
            Dictionary::~Dictionary((Dictionary *)&local_450);
          }
          Array::~Array((Array *)&local_458);
        }
        LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xa60),0));
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa80),0));
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa70),0));
        BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xaa0),0));
        _search(this,0);
      }
LAB_0011089f:
      Dictionary::~Dictionary(local_498);
      goto LAB_001102e4;
    }
  case 9:
    pSVar19 = *(String **)(this + 0xa98);
    itos((long)&local_450);
    local_460 = 0;
    String::parse_latin1((String *)&local_460," ");
    local_470 = 0;
    String::parse_latin1((String *)&local_470,"");
    local_478 = 0;
    String::parse_latin1((String *)&local_478,"Request failed, return code:");
    TTR((String *)&local_468,(String *)&local_478);
    String::operator+((String *)&local_458,(String *)&local_468);
    String::operator+((String *)local_448,(String *)&local_458);
    Label::set_text(pSVar19);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_468);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_478);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_470);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
    goto LAB_001102ca;
  case 1:
  case 4:
  case 7:
    local_450 = 0;
    pSVar19 = *(String **)(this + 0xa98);
    String::parse_latin1((String *)&local_450,"");
    pcVar20 = "Connection error, please try again.";
    goto LAB_00110375;
  case 2:
  case 5:
    local_558 = *(String **)(this + 0xa98);
    local_458 = 0;
    String::parse_latin1((String *)&local_458," ");
    local_468 = 0;
    String::parse_latin1((String *)&local_468,"");
    pcVar20 = "Can\'t connect to host:";
    break;
  case 3:
    local_558 = *(String **)(this + 0xa98);
    local_458 = 0;
    String::parse_latin1((String *)&local_458," ");
    local_468 = 0;
    String::parse_latin1((String *)&local_468,"");
    pcVar20 = "Can\'t resolve hostname:";
    break;
  case 6:
    local_558 = *(String **)(this + 0xa98);
    local_458 = 0;
    String::parse_latin1((String *)&local_458," ");
    local_468 = 0;
    String::parse_latin1((String *)&local_468,"");
    pcVar20 = "No response from host:";
    break;
  case 0xc:
    local_450 = 0;
    pSVar19 = *(String **)(this + 0xa98);
    String::parse_latin1((String *)&local_450,"");
    pcVar20 = "Request failed, too many redirects";
LAB_00110375:
    local_458 = 0;
    String::parse_latin1((String *)&local_458,pcVar20);
    TTR((String *)local_448,(String *)&local_458);
    Label::set_text(pSVar19);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
    iVar18 = *(int *)(this + 0xb10);
    goto joined_r0x001103be;
  }
  local_470 = 0;
  String::parse_latin1((String *)&local_470,pcVar20);
  TTR((String *)&local_460,(String *)&local_470);
  String::operator+((String *)&local_450,(String *)&local_460);
  String::operator+((String *)local_448,(String *)&local_450);
  Label::set_text(local_558);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_448);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_470);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_468);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_458);
LAB_001102ca:
  iVar18 = *(int *)(this + 0xb10);
joined_r0x001103be:
  if (iVar18 == 1) {
    local_570 = (String *)&local_458;
    create_custom_callable_function_pointer<EditorAssetLibrary>
              ((EditorAssetLibrary *)local_448,(char *)this,
               (_func_void *)"&EditorAssetLibrary::_request_current_config");
    local_458 = 0;
    String::parse_latin1(local_570,"");
    local_460 = 0;
    String::parse_latin1((String *)&local_460,"Retry");
    TTR((String *)&local_450,(String *)&local_460);
    local_470 = 0;
    String::parse_latin1((String *)&local_470,"");
    local_478 = 0;
    String::parse_latin1((String *)&local_478,"Failed to get repository configuration.");
    TTR((String *)&local_468,(String *)&local_478);
    _set_library_message_with_action
              (this,(String *)&local_468,(String *)&local_450,(Callable *)local_448);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_468);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_478);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_470);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_450);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_460);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_570);
    Callable::~Callable((Callable *)local_448);
  }
  CanvasItem::show();
LAB_001102e4:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_4a0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* StyleBoxEmpty::is_class_ptr(void*) const */

uint __thiscall StyleBoxEmpty::is_class_ptr(StyleBoxEmpty *this,void *param_1)

{
  return (uint)CONCAT71(0x12b4,(undefined4 *)param_1 == &StyleBox::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b4,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b4,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* StyleBoxEmpty::_getv(StringName const&, Variant&) const */

undefined8 StyleBoxEmpty::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_setv(StringName const&, Variant const&) */

undefined8 StyleBoxEmpty::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_validate_propertyv(PropertyInfo&) const */

void StyleBoxEmpty::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* StyleBoxEmpty::_property_can_revertv(StringName const&) const */

undefined8 StyleBoxEmpty::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StyleBoxEmpty::_property_get_revertv(StringName const&, Variant&) const */

undefined8 StyleBoxEmpty::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_notificationv(int, bool) */

void StyleBoxEmpty::_notificationv(int param_1,bool param_2)

{
  return;
}



/* StyleBoxEmpty::get_style_margin(Side) const */

undefined8 StyleBoxEmpty::get_style_margin(void)

{
  return 0;
}



/* StyleBoxEmpty::draw(RID, Rect2 const&) const */

void StyleBoxEmpty::draw(void)

{
  return;
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
  
  return (uint)CONCAT71(0x12b3,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b3,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b3,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b3,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b4,in_RSI == &Node::get_class_ptr_static()::ptr) |
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



/* EditorAssetLibraryItemDescription::_property_can_revertv(StringName const&) const */

undefined8 EditorAssetLibraryItemDescription::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorAssetLibraryItemDescription::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorAssetLibraryItemDescription::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AssetLibraryEditorPlugin::is_class_ptr(void*) const */

uint __thiscall AssetLibraryEditorPlugin::is_class_ptr(AssetLibraryEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x12b3,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x12b2,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b4,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AssetLibraryEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 AssetLibraryEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AssetLibraryEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 AssetLibraryEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AssetLibraryEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 AssetLibraryEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AssetLibraryEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AssetLibraryEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AssetLibraryEditorPlugin::has_main_screen() const */

undefined8 AssetLibraryEditorPlugin::has_main_screen(void)

{
  return 1;
}



/* AssetLibraryEditorPlugin::edit(Object*) */

void AssetLibraryEditorPlugin::edit(Object *param_1)

{
  return;
}



/* AssetLibraryEditorPlugin::handles(Object*) const */

undefined8 AssetLibraryEditorPlugin::handles(Object *param_1)

{
  return 0;
}



/* JSON::is_class_ptr(void*) const */

uint __thiscall JSON::is_class_ptr(JSON *this,void *param_1)

{
  return (uint)CONCAT71(0x12b4,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b2,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b4,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12b4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* JSON::_getv(StringName const&, Variant&) const */

undefined8 JSON::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::_setv(StringName const&, Variant const&) */

undefined8 JSON::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::_validate_propertyv(PropertyInfo&) const */

void JSON::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* JSON::_property_can_revertv(StringName const&) const */

undefined8 JSON::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* JSON::_property_get_revertv(StringName const&, Variant&) const */

undefined8 JSON::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JSON::_notificationv(int, bool) */

void JSON::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&,int>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&,int>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, String,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,String,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,String,String> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDownload, void, int, int, Vector<String>
   const&, Vector<unsigned char> const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDownload, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDescription, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDescription, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItem,void> *this)

{
  return;
}



/* MethodBindT<int, int, Ref<Texture2D> const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,int,Ref<Texture2D>const&>::get_argument_meta
          (MethodBindT<int,int,Ref<Texture2D>const&> *this,int param_1)

{
  return -((uint)param_1 < 2) & 3;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::get_argument_count
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
           *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorAssetLibrary,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void>::get_argument_count
          (CallableCustomMethodPointer<EditorAssetLibrary,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&,int>
::get_argument_count
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&,int>
           *this,bool *param_1)

{
  *param_1 = true;
  return 5;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, String, String>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,String,String>::get_argument_count
          (CallableCustomMethodPointer<EditorAssetLibrary,void,String,String> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDownload, void, int, int, Vector<String>
   const&, Vector<unsigned char> const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::get_argument_count
          (CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
           *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDownload, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void>::get_argument_count
          (CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDescription, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,String_const&>::
get_argument_count(CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,String_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDescription, void,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItem, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItem,void>::get_argument_count
          (CallableCustomMethodPointer<EditorAssetLibraryItem,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<EditorAssetLibraryItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItem,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDescription, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDescription, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDownload, void, int, int, Vector<String>
   const&, Vector<unsigned char> const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDownload, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, String,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,String,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,String,String> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&,int>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&,int>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<int, int, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,int,Ref<Texture2D>const&>::~MethodBindT
          (MethodBindT<int,int,Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b008;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, int, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,int,Ref<Texture2D>const&>::~MethodBindT
          (MethodBindT<int,int,Ref<Texture2D>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012b008;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00133020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00133020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorAssetLibraryItem::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorAssetLibraryItem::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00133020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorAssetLibraryItemDownload::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorAssetLibraryItemDownload::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00133020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorAssetLibrary::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorAssetLibrary::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00133020 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00133028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00133028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorAssetLibraryItem::_property_can_revertv(StringName const&) const */

undefined8 EditorAssetLibraryItem::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00133028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorAssetLibraryItemDownload::_property_can_revertv(StringName const&) const */

undefined8 EditorAssetLibraryItemDownload::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00133028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorAssetLibrary::_property_can_revertv(StringName const&) const */

undefined8 EditorAssetLibrary::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00133028 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* AssetLibraryEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void AssetLibraryEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00133030 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00129600;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00129600;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00133038 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorAssetLibraryItemDescription::_getv(StringName const&, Variant&) const */

undefined8 EditorAssetLibraryItemDescription::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00133038 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00133040 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorAssetLibraryItemDescription::_setv(StringName const&, Variant const&) */

undefined8 EditorAssetLibraryItemDescription::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00133040 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<int, int, Ref<Texture2D> const&>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<int,int,Ref<Texture2D>const&>::_gen_argument_type
          (MethodBindT<int,int,Ref<Texture2D>const&> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((uint)param_1 < 3) && (uVar1 = 0x18, param_1 != 2)) {
    uVar1 = 2;
  }
  return uVar1;
}



/* ConfirmationDialog::_validate_propertyv(PropertyInfo&) const */

void ConfirmationDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00133048 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* EditorAssetLibraryItemDescription::_validate_propertyv(PropertyInfo&) const */

void EditorAssetLibraryItemDescription::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00133048 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::get_object(CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
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
      goto LAB_00115bad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00115bad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00115bad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, String, String>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,String,String>::get_object
          (CallableCustomMethodPointer<EditorAssetLibrary,void,String,String> *this)

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
      goto LAB_00115cad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00115cad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00115cad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDownload, void, int, int, Vector<String>
   const&, Vector<unsigned char> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::get_object(CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
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
      goto LAB_00115dad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00115dad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00115dad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void>::get_object
          (CallableCustomMethodPointer<EditorAssetLibrary,void> *this)

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
      goto LAB_00115ead;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00115ead;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00115ead:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorAssetLibrary,void,String_const&> *this)

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
      goto LAB_00115fad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00115fad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00115fad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int>::get_object
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int> *this)

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
      goto LAB_001160ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001160ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001160ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItem, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItem,void>::get_object
          (CallableCustomMethodPointer<EditorAssetLibraryItem,void> *this)

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
      goto LAB_001161ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001161ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001161ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDescription, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,int>::get_object
          (CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,int> *this)

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
      goto LAB_001162ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001162ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001162ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&,int>
::get_object(CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&,int>
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
      goto LAB_001163ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001163ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001163ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDescription, void, String const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,String_const&> *this)

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
      goto LAB_001164ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001164ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001164ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDownload, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void>::get_object
          (CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void> *this)

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
      goto LAB_001165ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001165ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001165ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorAssetLibraryItemDownload::is_class_ptr(void*) const */

uint EditorAssetLibraryItemDownload::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12b3,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b3,in_RSI == &MarginContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b3,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b4,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b4,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* AssetLibraryEditorPlugin::_notificationv(int, bool) */

void __thiscall
AssetLibraryEditorPlugin::_notificationv(AssetLibraryEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00133050 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00133050 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* ConfirmationDialog::_notificationv(int, bool) */

void __thiscall
ConfirmationDialog::_notificationv(ConfirmationDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00133058 != Window::_notification) {
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
  if ((code *)PTR__notification_00133058 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* EditorAssetLibraryItem::_validate_propertyv(PropertyInfo&) const */

void EditorAssetLibraryItem::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00133060 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorAssetLibrary::_validate_propertyv(PropertyInfo&) const */

void EditorAssetLibrary::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00133060 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorAssetLibraryItemDownload::_validate_propertyv(PropertyInfo&) const */

void EditorAssetLibraryItemDownload::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00133060 == CanvasItem::_validate_property) {
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
  if ((code *)PTR__validate_property_00133068 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00133068 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
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
    uVar1 = (uint)CONCAT71(0x12b3,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b3,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b3,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b4,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b4,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x12b3,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b3,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b3,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b4,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b4,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorAssetLibrary::is_class_ptr(void*) const */

uint EditorAssetLibrary::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12b3,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b2,in_RSI == &PanelContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b3,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b4,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b4,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorAssetLibraryItem::is_class_ptr(void*) const */

uint EditorAssetLibraryItem::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12b3,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b2,in_RSI == &PanelContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b3,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b4,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b4,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorAssetLibraryItemDescription::is_class_ptr(void*) const */

uint EditorAssetLibraryItemDescription::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12b3,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b3,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b3,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b3,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12b4,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00133070 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorAssetLibraryItemDownload::_setv(StringName const&, Variant const&) */

undefined8 EditorAssetLibraryItemDownload::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00133070 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorAssetLibraryItem::_setv(StringName const&, Variant const&) */

undefined8 EditorAssetLibraryItem::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00133070 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorAssetLibrary::_setv(StringName const&, Variant const&) */

undefined8 EditorAssetLibrary::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00133070 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00133070 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00116f58) */
/* EditorAssetLibraryItem::_getv(StringName const&, Variant&) const */

undefined8 EditorAssetLibraryItem::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00133078 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00116fc8) */
/* EditorAssetLibraryItemDownload::_getv(StringName const&, Variant&) const */

undefined8 EditorAssetLibraryItemDownload::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00133078 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00117038) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00133078 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001170a8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00133078 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00117118) */
/* EditorAssetLibrary::_getv(StringName const&, Variant&) const */

undefined8 EditorAssetLibrary::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00133078 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* StyleBox::get_save_class() const */

StyleBox * __thiscall StyleBox::get_save_class(StyleBox *this)

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



/* AssetLibraryEditorPlugin::get_plugin_name() const */

AssetLibraryEditorPlugin * __thiscall
AssetLibraryEditorPlugin::get_plugin_name(AssetLibraryEditorPlugin *this)

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



/* StyleBox::get_base_extension() const */

StyleBox * __thiscall StyleBox::get_base_extension(StyleBox *this)

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



/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Container::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011736e;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011736e;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011736e;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_0011736e:
  Resource::~Resource((Resource *)this);
  return;
}



/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Container::vtable;
  if (bVar1) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011740e;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011740e;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011740e;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_0011740e:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2b0);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117480;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00117480:
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
      if (StringName::configured == '\0') goto LAB_001174e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001174e0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00117540;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00117540:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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
      if (StringName::configured == '\0') goto LAB_001175b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001175b0:
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = BoxContainer::_notification;
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



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00133080 != Container::_notification) {
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
  if ((code *)PTR__notification_00133080 == Container::_notification) {
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
    if ((code *)PTR__notification_00133080 != Container::_notification) {
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
  if ((code *)PTR__notification_00133080 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* EditorAssetLibraryItemDownload::_get_class_namev() const */

undefined8 * EditorAssetLibraryItemDownload::_get_class_namev(void)

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
LAB_00117933:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117933;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorAssetLibraryItemDownload");
      goto LAB_0011799e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorAssetLibraryItemDownload")
  ;
LAB_0011799e:
  return &_get_class_namev()::_class_name_static;
}



/* JSON::_get_class_namev() const */

undefined8 * JSON::_get_class_namev(void)

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
LAB_00117a13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117a13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"JSON");
      goto LAB_00117a7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JSON");
LAB_00117a7e:
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
LAB_00117b03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117b03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_00117b6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_00117b6e:
  return &_get_class_namev()::_class_name_static;
}



/* AssetLibraryEditorPlugin::_get_class_namev() const */

undefined8 * AssetLibraryEditorPlugin::_get_class_namev(void)

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
LAB_00117bf3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117bf3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AssetLibraryEditorPlugin");
      goto LAB_00117c5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AssetLibraryEditorPlugin");
LAB_00117c5e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorAssetLibraryItem::_get_class_namev() const */

undefined8 * EditorAssetLibraryItem::_get_class_namev(void)

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
LAB_00117ce3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117ce3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorAssetLibraryItem");
      goto LAB_00117d4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorAssetLibraryItem");
LAB_00117d4e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorAssetLibrary::_get_class_namev() const */

undefined8 * EditorAssetLibrary::_get_class_namev(void)

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
LAB_00117dd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117dd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorAssetLibrary");
      goto LAB_00117e3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorAssetLibrary");
LAB_00117e3e:
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
LAB_00117ec3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117ec3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00117f2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00117f2e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorAssetLibraryItemDescription::_get_class_namev() const */

undefined8 * EditorAssetLibraryItemDescription::_get_class_namev(void)

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
LAB_00117fc3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00117fc3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorAssetLibraryItemDescription");
      goto LAB_0011802e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "EditorAssetLibraryItemDescription");
LAB_0011802e:
  return &_get_class_namev()::_class_name_static;
}



/* StyleBoxEmpty::_get_class_namev() const */

undefined8 * StyleBoxEmpty::_get_class_namev(void)

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
LAB_001180b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001180b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StyleBoxEmpty");
      goto LAB_0011811e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StyleBoxEmpty");
LAB_0011811e:
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
LAB_001181a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001181a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0011820e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0011820e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorAssetLibraryItem::_notificationv(int, bool) */

void __thiscall
EditorAssetLibraryItem::_notificationv(EditorAssetLibraryItem *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_00133088 != Container::_notification) {
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
  if ((code *)PTR__notification_00133088 != Container::_notification) {
    PanelContainer::_notification(iVar1);
  }
  if (param_1 != 10) {
    return;
  }
  _notification(iVar1);
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



/* EditorAssetLibrary::get_class() const */

void EditorAssetLibrary::get_class(void)

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



/* StyleBoxEmpty::get_class() const */

void StyleBoxEmpty::get_class(void)

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



/* EditorAssetLibraryItemDescription::get_class() const */

void EditorAssetLibraryItemDescription::get_class(void)

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



/* EditorAssetLibraryItemDownload::get_class() const */

void EditorAssetLibraryItemDownload::get_class(void)

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



/* AssetLibraryEditorPlugin::get_class() const */

void AssetLibraryEditorPlugin::get_class(void)

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



/* JSON::get_class() const */

void JSON::get_class(void)

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



/* EditorAssetLibraryItem::get_class() const */

void EditorAssetLibraryItem::get_class(void)

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



/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012a1e0;
  if (*(long *)(this + 0x260) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x260) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x260);
      *(undefined8 *)(this + 0x260) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[*(int *)(this + 0x248)] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(this + 0x240) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0012a1e0;
  if (*(long *)(this + 0x260) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x260) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x260);
      *(undefined8 *)(this + 0x260) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (Variant::needs_deinit[*(int *)(this + 0x248)] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(this + 0x240) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x240) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x240);
      *(undefined8 *)(this + 0x240) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x270);
  return;
}



/* EditorAssetLibraryItemDownload::~EditorAssetLibraryItemDownload() */

void __thiscall
EditorAssetLibraryItemDownload::~EditorAssetLibraryItemDownload
          (EditorAssetLibraryItemDownload *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00129e68;
  if (*(long *)(this + 0xa60) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa60) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa60);
      *(undefined8 *)(this + 0xa60) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa58);
      *(undefined8 *)(this + 0xa58) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00118de6;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00118de6:
  Control::~Control((Control *)this);
  return;
}



/* EditorAssetLibraryItemDownload::~EditorAssetLibraryItemDownload() */

void __thiscall
EditorAssetLibraryItemDownload::~EditorAssetLibraryItemDownload
          (EditorAssetLibraryItemDownload *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00129e68;
  if (*(long *)(this + 0xa60) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa60) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa60);
      *(undefined8 *)(this + 0xa60) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa58);
      *(undefined8 *)(this + 0xa58) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00118ec6;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00118ec6:
  Control::~Control((Control *)this);
  operator_delete(this,0xa88);
  return;
}



/* EditorAssetLibraryItem::~EditorAssetLibraryItem() */

void __thiscall EditorAssetLibraryItem::~EditorAssetLibraryItem(EditorAssetLibraryItem *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00129878;
  if (*(long *)(this + 0xa30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa30);
      *(undefined8 *)(this + 0xa30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(code **)this = String::operator==;
  if (*(long *)(this + 0xa00) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa00);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00118fc2;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00118fc2:
  Control::~Control((Control *)this);
  return;
}



/* EditorAssetLibraryItem::~EditorAssetLibraryItem() */

void __thiscall EditorAssetLibraryItem::~EditorAssetLibraryItem(EditorAssetLibraryItem *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00129878;
  if (*(long *)(this + 0xa30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa30);
      *(undefined8 *)(this + 0xa30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(code **)this = String::operator==;
  if (*(long *)(this + 0xa00) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xa00);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar5) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001190ca;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001190ca:
  Control::~Control((Control *)this);
  operator_delete(this,0xa48);
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = BoxContainer::_notification;
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



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011943f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011943f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_001194f3;
  }
  cVar6 = String::operator==(param_1,"Node");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_001194f3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_001194f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibraryItemDescription::_notificationv(int, bool) */

void __thiscall
EditorAssetLibraryItemDescription::_notificationv
          (EditorAssetLibraryItemDescription *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification((int)this);
    ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,true);
    return;
  }
  ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,false);
  _notification((int)this);
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



/* void Ref<StyleBoxEmpty>::instantiate<>() */

void __thiscall Ref<StyleBoxEmpty>::instantiate<>(Ref<StyleBoxEmpty> *this)

{
  char cVar1;
  StyleBox *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (StyleBox *)operator_new(0x2b0,"");
  StyleBox::StyleBox(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00128d10;
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
    this_00 = (StyleBox *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (StyleBox *)pOVar3) goto LAB_00119755;
    *(StyleBox **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00119755;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (StyleBox *)0x0) {
    return;
  }
LAB_00119755:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<EditorAssetLibraryItem>(EditorAssetLibraryItem*,
   char const*, void (EditorAssetLibraryItem::*)()) */

EditorAssetLibraryItem *
create_custom_callable_function_pointer<EditorAssetLibraryItem>
          (EditorAssetLibraryItem *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC12;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012a9d8;
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



/* Callable
   create_custom_callable_function_pointer<EditorAssetLibraryItemDownload>(EditorAssetLibraryItemDownload*,
   char const*, void (EditorAssetLibraryItemDownload::*)()) */

EditorAssetLibraryItemDownload *
create_custom_callable_function_pointer<EditorAssetLibraryItemDownload>
          (EditorAssetLibraryItemDownload *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC12;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012ab88;
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



/* Variant Object::call<EditorAssetLibrary::ImageType, int, Ref<Texture2D> >(StringName const&,
   EditorAssetLibrary::ImageType, int, Ref<Texture2D>) */

Variant * Object::call<EditorAssetLibrary::ImageType,int,Ref<Texture2D>>
                    (Variant *param_1,long *param_2,undefined8 param_3,int param_4,int param_5,
                    undefined8 *param_6)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  int local_f8 [4];
  int local_e8 [8];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_4);
  Variant::Variant(local_90,param_5);
  Variant::Variant(local_78,(Object *)*param_6);
  local_60 = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_58 = (undefined1  [16])0x0;
  local_c8 = local_a8;
  pVStack_c0 = local_90;
  local_b8 = local_78;
  (**(code **)(*param_2 + 0x68))((Variant *)local_e8,param_2,param_3,&local_c8,3,local_f8);
  if (local_f8[0] == 0) {
    Variant::Variant(param_1,(Variant *)local_e8);
  }
  else {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  if (Variant::needs_deinit[local_e8[0]] != '\0') {
    Variant::_clear_internal();
  }
  pVVar2 = local_48;
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<EditorAssetLibrary, int>(EditorAssetLibrary*,
   char const*, void (EditorAssetLibrary::*)(int)) */

EditorAssetLibrary *
create_custom_callable_function_pointer<EditorAssetLibrary,int>
          (EditorAssetLibrary *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC12;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012adc8;
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



/* Callable create_custom_callable_function_pointer<EditorAssetLibrary>(EditorAssetLibrary*, char
   const*, void (EditorAssetLibrary::*)()) */

EditorAssetLibrary *
create_custom_callable_function_pointer<EditorAssetLibrary>
          (EditorAssetLibrary *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC12;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012ae58;
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



/* Callable create_custom_callable_function_pointer<EditorAssetLibrary, String
   const&>(EditorAssetLibrary*, char const*, void (EditorAssetLibrary::*)(String const&)) */

EditorAssetLibrary *
create_custom_callable_function_pointer<EditorAssetLibrary,String_const&>
          (EditorAssetLibrary *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC12;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012aee8;
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
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a16a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0011a16a:
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



/* StyleBoxEmpty::_initialize_classv() */

void StyleBoxEmpty::_initialize_classv(void)

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
    if (StyleBox::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "StyleBox";
      local_60 = 0;
      local_40 = 8;
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
      if ((code *)PTR__bind_methods_00133090 != Resource::_bind_methods) {
        StyleBox::_bind_methods();
      }
      StyleBox::initialize_class()::initialized = '\x01';
    }
    local_48 = "StyleBox";
    local_58 = 0;
    local_40 = 8;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "StyleBoxEmpty";
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



/* JSON::_initialize_classv() */

void JSON::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "JSON";
    local_60 = 0;
    local_40 = 4;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00133098 != Resource::_bind_methods) {
      JSON::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0011a6d8) */
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



/* WARNING: Removing unreachable block (ram,0x0011aa10) */
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



/* WARNING: Removing unreachable block (ram,0x0011ad00) */
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



/* WARNING: Removing unreachable block (ram,0x0011afb8) */
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



/* WARNING: Removing unreachable block (ram,0x0011b300) */
/* String vformat<String, String, String>(String const&, String const, String const, String const)
    */

undefined8 *
vformat<String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,String *param_5)

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



/* EditorAssetLibraryItem::clamp_width(int) [clone .cold] */

void EditorAssetLibraryItem::clamp_width(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorAssetLibrary::_bind_methods() [clone .cold] */

void EditorAssetLibrary::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorAssetLibraryItemDownload::_bind_methods() [clone .cold] */

void EditorAssetLibraryItemDownload::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorAssetLibraryItem::_bind_methods() [clone .cold] */

void EditorAssetLibraryItem::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorAssetLibraryItemDescription::_bind_methods() [clone .cold] */

void EditorAssetLibraryItemDescription::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

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



/* CowData<EditorAssetLibraryItemDescription::Preview>::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<EditorAssetLibraryItemDescription::Preview>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
        if (pvVar5 == (void *)0x0) goto LAB_0011b654;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011b654:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* EditorAssetLibrary::~EditorAssetLibrary() */

void __thiscall EditorAssetLibrary::~EditorAssetLibrary(EditorAssetLibrary *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  void *pvVar7;
  bool bVar8;
  
  *(undefined ***)this = &PTR__initialize_classv_0012a3b8;
  Dictionary::~Dictionary((Dictionary *)(this + 0xb18));
  pvVar7 = *(void **)(this + 0xae0);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0xb04) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb00) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xb04) = 0;
        *(undefined1 (*) [16])(this + 0xaf0) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xae8) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0xae8) + lVar6) = 0;
            if (*(long *)((long)pvVar7 + 0x28) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar7 + 0x28) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar7 + 0x28);
                *(undefined8 *)((long)pvVar7 + 0x28) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0xae0);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xb04) = 0;
        *(undefined1 (*) [16])(this + 0xaf0) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0011b7a7;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0xae8),false);
  }
LAB_0011b7a7:
  Callable::~Callable((Callable *)(this + 0xa50));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa08));
  *(code **)this = String::operator==;
  if (*(long *)(this + 0xa00) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0xa00);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  bVar8 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar8) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011b82a;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011b82a:
  Control::~Control((Control *)this);
  return;
}



/* DirAccess::remove_file_or_error(String const&) */

void DirAccess::remove_file_or_error(String *param_1)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  Object *local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::create(&local_60,2);
  pOVar2 = local_60;
  pcVar1 = *(code **)(*(long *)local_60 + 0x1d0);
  local_48 = (char *)0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)param_1);
  }
  cVar3 = (*pcVar1)(pOVar2,(CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  pOVar2 = local_60;
  if (cVar3 == '\0') {
    local_50 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)param_1);
    local_48 = "Cannot remove non-existent file or directory: \'%s\'.";
    local_58 = 0;
    local_40 = 0x33;
    String::parse_latin1((StrRange *)&local_58);
    vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_58,
                    (CowData<char32_t> *)&local_50);
    uVar5 = 0x81;
  }
  else {
    pcVar1 = *(code **)(*(long *)local_60 + 0x208);
    local_48 = (char *)0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)param_1);
    }
    iVar4 = (*pcVar1)(pOVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (iVar4 == 0) goto LAB_0011ba11;
    local_50 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)param_1);
    local_48 = "Cannot remove file or directory: \'%s\'.";
    local_58 = 0;
    local_40 = 0x26;
    String::parse_latin1((StrRange *)&local_58);
    vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_58,
                    (CowData<char32_t> *)&local_50);
    uVar5 = 0x7e;
  }
  _err_print_error("remove_file_or_error","./core/io/dir_access.h",uVar5,"Method/function failed.",
                   (CowData<char32_t> *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011ba11:
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, EditorAssetLibrary::ImageQueue, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, EditorAssetLibrary::ImageQueue> > >::operator[](int
   const&) */

undefined1 * __thiscall
HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
::operator[](HashMap<int,EditorAssetLibrary::ImageQueue,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,EditorAssetLibrary::ImageQueue>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  long lVar4;
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
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  ulong uVar44;
  ulong uVar45;
  int iVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  long in_FS_OFFSET;
  void *local_e0;
  CowData local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  int local_78;
  undefined8 local_70;
  undefined8 local_68;
  CowData<char32_t> local_60 [16];
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  uVar40 = *param_1;
  local_e0 = *(void **)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar39);
  if (local_e0 == (void *)0x0) {
    uVar44 = uVar41 * 4;
    uVar47 = uVar41 * 8;
    local_a8[0] = (CowData)0x0;
    local_a8[1] = (CowData)0x0;
    local_a8[2] = (CowData)0x0;
    local_a8[3] = (CowData)0x0;
    local_a8[4] = (CowData)0x0;
    local_a8[5] = (CowData)0x0;
    local_a8[6] = (CowData)0x0;
    local_a8[7] = (CowData)0x0;
    local_a8[8] = (CowData)0x0;
    local_a8[9] = (CowData)0x0;
    local_a8[10] = (CowData)0x0;
    local_a8[0xb] = (CowData)0x0;
    local_a8[0xc] = (CowData)0x0;
    local_a8[0xd] = (CowData)0x0;
    local_a8[0xe] = (CowData)0x0;
    local_a8[0xf] = (CowData)0x0;
    local_98._0_12_ = ZEXT412(0xffffffff) << 0x40;
    local_98._12_4_ = 0;
    uVar42 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    local_e0 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = local_e0;
    if (uVar39 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_e0 + uVar47)) &&
         (local_e0 < (void *)((long)pvVar3 + uVar44))) {
        uVar44 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar44 * 4) = 0;
          *(undefined8 *)((long)local_e0 + uVar44 * 8) = 0;
          uVar44 = uVar44 + 1;
        } while (uVar41 != uVar44);
        uVar40 = *param_1;
        iVar46 = *(int *)(this + 0x2c);
      }
      else {
        memset(pvVar3,0,uVar44);
        memset(local_e0,0,uVar47);
        uVar40 = *param_1;
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_0011bdb3;
    }
    uVar40 = *param_1;
    iVar46 = *(int *)(this + 0x2c);
    if (local_e0 != (void *)0x0) goto LAB_0011bdb3;
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      uVar44 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = (uVar40 >> 0x10 ^ uVar40) * -0x7a143595;
      uVar38 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
      uVar54 = uVar38 ^ uVar38 >> 0x10;
      if (uVar38 == uVar38 >> 0x10) {
        uVar54 = 1;
        uVar47 = uVar44;
      }
      else {
        uVar47 = uVar54 * uVar44;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar41;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar47;
      lVar48 = SUB168(auVar5 * auVar21,8);
      uVar52 = SUB164(auVar5 * auVar21,8);
      uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
      if (uVar38 != 0) {
        uVar53 = 0;
        do {
          if ((uVar54 == uVar38) &&
             (uVar40 == *(uint *)(*(long *)((long)local_e0 + lVar48 * 8) + 0x10))) {
            pauVar43 = *(undefined1 (**) [16])((long)local_e0 + (ulong)uVar52 * 8);
            goto LAB_0011c304;
          }
          uVar53 = uVar53 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar52 + 1) * uVar44;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar41;
          lVar48 = SUB168(auVar6 * auVar22,8);
          uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
          uVar52 = SUB164(auVar6 * auVar22,8);
        } while ((uVar38 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar38 * uVar44, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar41, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar52 + uVar39) - SUB164(auVar7 * auVar23,8)) * uVar44,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar41, uVar53 <= SUB164(auVar8 * auVar24,8)));
      }
    }
    local_98._0_12_ = ZEXT412(0xffffffff) << 0x40;
    local_98._12_4_ = 0;
    local_a8[0] = (CowData)0x0;
    local_a8[1] = (CowData)0x0;
    local_a8[2] = (CowData)0x0;
    local_a8[3] = (CowData)0x0;
    local_a8[4] = (CowData)0x0;
    local_a8[5] = (CowData)0x0;
    local_a8[6] = (CowData)0x0;
    local_a8[7] = (CowData)0x0;
    local_a8[8] = (CowData)0x0;
    local_a8[9] = (CowData)0x0;
    local_a8[10] = (CowData)0x0;
    local_a8[0xb] = (CowData)0x0;
    local_a8[0xc] = (CowData)0x0;
    local_a8[0xd] = (CowData)0x0;
    local_a8[0xe] = (CowData)0x0;
    local_a8[0xf] = (CowData)0x0;
LAB_0011bdb3:
    if (iVar46 != 0) {
      uVar47 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
      uVar44 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = (uVar40 >> 0x10 ^ uVar40) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar38 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar38 = 1;
        uVar45 = uVar44;
      }
      else {
        uVar45 = uVar38 * uVar44;
      }
      uVar52 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar47;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar45;
      lVar48 = SUB168(auVar9 * auVar25,8);
      uVar54 = SUB164(auVar9 * auVar25,8);
      uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
      if (uVar39 != 0) {
        do {
          if ((uVar38 == uVar39) &&
             (uVar40 == *(uint *)(*(long *)((long)local_e0 + lVar48 * 8) + 0x10))) {
            lVar48 = *(long *)((long)local_e0 + (ulong)uVar54 * 8);
            *(undefined1 *)(lVar48 + 0x18) = 0;
            *(undefined4 *)(lVar48 + 0x1c) = 0;
            *(undefined8 *)(lVar48 + 0x20) = 0;
            CowData<char32_t>::_ref((CowData<char32_t> *)(lVar48 + 0x28),local_a8);
            *(undefined8 *)(lVar48 + 0x30) = 0;
            *(undefined4 *)(lVar48 + 0x40) = 0xffffffff;
            *(undefined8 *)(lVar48 + 0x38) = local_98._0_8_;
            pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar54 * 8);
            goto LAB_0011c2f8;
          }
          uVar52 = uVar52 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (uVar54 + 1) * uVar44;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar47;
          lVar48 = SUB168(auVar10 * auVar26,8);
          uVar39 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
          uVar54 = SUB164(auVar10 * auVar26,8);
        } while ((uVar39 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = uVar39 * uVar44, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar47, auVar12._8_8_ = 0,
                auVar12._0_8_ =
                     ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                      uVar54) - SUB164(auVar11 * auVar27,8)) * uVar44, auVar28._8_8_ = 0,
                auVar28._0_8_ = uVar47, uVar52 <= SUB164(auVar12 * auVar28,8)));
      }
    }
  }
  if ((float)uVar41 * __LC169 < (float)(iVar46 + 1)) {
    uVar40 = *(uint *)(this + 0x28);
    if (uVar40 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011c2f8;
    }
    uVar41 = (ulong)(uVar40 + 1);
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar40 + 1 < 2) {
      uVar41 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar3 = *(void **)(this + 0x10);
    uVar47 = (ulong)uVar40;
    uVar41 = uVar47 * 4;
    uVar44 = uVar47 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar47);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar44);
      }
    }
    uVar41 = 0;
    if (uVar39 != 0) {
      do {
        uVar40 = *(uint *)((long)pvVar3 + uVar41 * 4);
        if (uVar40 != 0) {
          uVar52 = 0;
          lVar48 = *(long *)(this + 0x10);
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar38);
          lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar40 * lVar4;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar44;
          lVar49 = SUB168(auVar13 * auVar29,8);
          puVar1 = (uint *)(lVar48 + lVar49 * 4);
          iVar46 = SUB164(auVar13 * auVar29,8);
          uVar54 = *puVar1;
          uVar42 = *(undefined8 *)((long)local_e0 + uVar41 * 8);
          while (uVar54 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar54 * lVar4;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar44;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((iVar46 + uVar38) - SUB164(auVar14 * auVar30,8)) * lVar4;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar44;
            uVar53 = SUB164(auVar15 * auVar31,8);
            uVar51 = uVar42;
            if (uVar53 < uVar52) {
              *puVar1 = uVar40;
              puVar2 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar51 = *puVar2;
              *puVar2 = uVar42;
              uVar40 = uVar54;
              uVar52 = uVar53;
            }
            uVar52 = uVar52 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar4;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar44;
            lVar49 = SUB168(auVar16 * auVar32,8);
            puVar1 = (uint *)(lVar48 + lVar49 * 4);
            iVar46 = SUB164(auVar16 * auVar32,8);
            uVar42 = uVar51;
            uVar54 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar42;
          *puVar1 = uVar40;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar39 != uVar41);
      Memory::free_static(local_e0,false);
      Memory::free_static(pvVar3,false);
    }
  }
  local_88 = (undefined1  [16])0x0;
  iVar46 = *param_1;
  local_60[0] = (CowData<char32_t>)0x0;
  local_60[1] = (CowData<char32_t>)0x0;
  local_60[2] = (CowData<char32_t>)0x0;
  local_60[3] = (CowData<char32_t>)0x0;
  local_60[4] = (CowData<char32_t>)0x0;
  local_60[5] = (CowData<char32_t>)0x0;
  local_60[6] = (CowData<char32_t>)0x0;
  local_60[7] = (CowData<char32_t>)0x0;
  local_60[8] = (CowData<char32_t>)0x0;
  local_60[9] = (CowData<char32_t>)0x0;
  local_60[10] = (CowData<char32_t>)0x0;
  local_60[0xb] = (CowData<char32_t>)0x0;
  local_60[0xc] = (CowData<char32_t>)0x0;
  local_60[0xd] = (CowData<char32_t>)0x0;
  local_60[0xe] = (CowData<char32_t>)0x0;
  local_60[0xf] = (CowData<char32_t>)0x0;
  local_70 = 0;
  local_68 = 0;
  local_50 = local_98._0_8_;
  local_48 = 0xffffffff;
  local_78 = iVar46;
  pauVar43 = (undefined1 (*) [16])operator_new(0x48,"");
  *(int *)pauVar43[1] = iVar46;
  pauVar43[1][8] = 0;
  *(undefined4 *)(pauVar43[1] + 0xc) = 0;
  *(undefined8 *)pauVar43[2] = 0;
  *pauVar43 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pauVar43[2] + 8) = (undefined1  [16])0x0;
  *(undefined4 *)pauVar43[4] = 0xffffffff;
  *(undefined8 *)(pauVar43[3] + 8) = local_50;
  CowData<char32_t>::_unref(local_60);
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar40 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar40 ^ uVar40 >> 0xd) * -0x3d4d51cb;
  uVar40 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar41 = 1;
    uVar40 = 1;
  }
  else {
    uVar41 = (ulong)uVar40;
  }
  uVar54 = 0;
  lVar48 = *(long *)(this + 0x10);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar44 = CONCAT44(0,uVar39);
  lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar41 * lVar4;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar44;
  lVar50 = SUB168(auVar17 * auVar33,8);
  lVar49 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar48 + lVar50 * 4);
  iVar46 = SUB164(auVar17 * auVar33,8);
  uVar38 = *puVar1;
  pauVar37 = pauVar43;
  while (uVar38 != 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)uVar38 * lVar4;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar44;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)((iVar46 + uVar39) - SUB164(auVar18 * auVar34,8)) * lVar4;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar44;
    uVar52 = SUB164(auVar19 * auVar35,8);
    pauVar55 = pauVar37;
    if (uVar52 < uVar54) {
      *puVar1 = uVar40;
      puVar2 = (undefined8 *)(lVar49 + lVar50 * 8);
      pauVar55 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar40 = uVar38;
      uVar54 = uVar52;
    }
    uVar54 = uVar54 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(iVar46 + 1) * lVar4;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar44;
    lVar50 = SUB168(auVar20 * auVar36,8);
    puVar1 = (uint *)(lVar48 + lVar50 * 4);
    iVar46 = SUB164(auVar20 * auVar36,8);
    pauVar37 = pauVar55;
    uVar38 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar49 + lVar50 * 8) = pauVar37;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011c2f8:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
LAB_0011c304:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar43[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void>::call
          (CallableCustomMethodPointer<EditorAssetLibrary,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011c6ef;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011c6ef;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011c7b1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011c6ef:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC178,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011c7b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDownload, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void>::call
          (CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void> *this,Variant **param_1,
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
      goto LAB_0011c90f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011c90f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011c8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011c9d1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011c90f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC178,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011c9d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAssetLibraryItem, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItem,void>::call
          (CallableCustomMethodPointer<EditorAssetLibraryItem,void> *this,Variant **param_1,
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
      goto LAB_0011cb2f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011cb2f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011cb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011cbf1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011cb2f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC178,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011cbf1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDescription, void, int>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,int>::call
          (CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,int> *this,
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
      goto LAB_0011cdb8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0011cdb8;
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
        uVar4 = _LC179;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011cd67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011ce7a;
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
LAB_0011cdb8:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC178,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011ce7a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int>::call
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int> *this,Variant **param_1,
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
      goto LAB_0011d038;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0011d038;
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
        uVar4 = _LC179;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011cfe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011d0fa;
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
LAB_0011d038:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC178,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011d0fa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDescription, void, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,String_const&>::call
          (CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,String_const&> *this,
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
            uVar4 = _LC180;
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
        goto LAB_0011d1ce;
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
  _err_print_error(&_LC178,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011d1ce:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, String, String>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,String,String>::call
          (CallableCustomMethodPointer<EditorAssetLibrary,void,String,String> *this,
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
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_58 = (char *)(uVar3 << 8);
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
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
            uVar4 = _LC181;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_60);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC180;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_58);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_58,(Variant *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
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
        goto LAB_0011d435;
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
  _err_print_error(&_LC178,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0011d435:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,String_const&>::call
          (CallableCustomMethodPointer<EditorAssetLibrary,void,String_const&> *this,
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
            uVar4 = _LC180;
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
        goto LAB_0011d6ee;
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
  _err_print_error(&_LC178,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011d6ee:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011d8ff;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011d8ff:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0011d9b3;
  }
  cVar6 = String::operator==(param_1,"Resource");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0011d9b3;
    }
    cVar6 = String::operator==(param_1,"RefCounted");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_60 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar4 == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
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
        if (cVar6 != '\0') goto LAB_0011d9b3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = String::operator==(param_1,"Object");
        return uVar8;
      }
      goto LAB_0011db98;
    }
  }
LAB_0011d9b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011db98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::is_class(String const&) const */

undefined8 __thiscall JSON::is_class(JSON *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011dc0f;
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
LAB_0011dc0f:
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
    if (cVar5 != '\0') goto LAB_0011dcc3;
  }
  cVar5 = String::operator==(param_1,"JSON");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011dcc3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StyleBoxEmpty::is_class(String const&) const */

undefined8 __thiscall StyleBoxEmpty::is_class(StyleBoxEmpty *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011dd8f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011dd8f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0011de43;
  }
  cVar6 = String::operator==(param_1,"StyleBoxEmpty");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_0011de43;
    }
    cVar6 = String::operator==(param_1,"StyleBox");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Resource::is_class((Resource *)this,param_1);
        return uVar8;
      }
      goto LAB_0011df88;
    }
  }
LAB_0011de43:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011df88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AssetLibraryEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
AssetLibraryEditorPlugin::is_class(AssetLibraryEditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011e00f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011e00f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0011e0c3;
  }
  cVar6 = String::operator==(param_1,"AssetLibraryEditorPlugin");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0011e0c3;
    }
    cVar6 = String::operator==(param_1,"EditorPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node::is_class((Node *)this,param_1);
        return uVar8;
      }
      goto LAB_0011e1d5;
    }
  }
LAB_0011e0c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011e1d5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Window::is_class(String const&) const */

undefined8 __thiscall Window::is_class(Window *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011e25f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011e25f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0011e313;
  }
  cVar6 = String::operator==(param_1,"Window");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0011e313;
    }
    cVar6 = String::operator==(param_1,"Viewport");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node::is_class((Node *)this,param_1);
        return uVar8;
      }
      goto LAB_0011e425;
    }
  }
LAB_0011e313:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011e425:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfirmationDialog::is_class(String const&) const */

undefined8 __thiscall ConfirmationDialog::is_class(ConfirmationDialog *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011e4af;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011e4af:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0011e563;
  }
  cVar6 = String::operator==(param_1,"ConfirmationDialog");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0011e563;
    }
    cVar6 = String::operator==(param_1,"AcceptDialog");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Window::is_class((Window *)this,param_1);
        return uVar8;
      }
      goto LAB_0011e675;
    }
  }
LAB_0011e563:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011e675:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibraryItemDescription::is_class(String const&) const */

undefined8 __thiscall
EditorAssetLibraryItemDescription::is_class(EditorAssetLibraryItemDescription *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011e6ef;
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
LAB_0011e6ef:
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
    if (cVar5 != '\0') goto LAB_0011e7a3;
  }
  cVar5 = String::operator==(param_1,"EditorAssetLibraryItemDescription");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0011e7a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::~EditorAssetLibrary() */

void __thiscall EditorAssetLibrary::~EditorAssetLibrary(EditorAssetLibrary *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  void *pvVar7;
  bool bVar8;
  
  *(undefined ***)this = &PTR__initialize_classv_0012a3b8;
  Dictionary::~Dictionary((Dictionary *)(this + 0xb18));
  pvVar7 = *(void **)(this + 0xae0);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0xb04) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb00) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xb04) = 0;
        *(undefined1 (*) [16])(this + 0xaf0) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xae8) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0xae8) + lVar6) = 0;
            if (*(long *)((long)pvVar7 + 0x28) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar7 + 0x28) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar7 + 0x28);
                *(undefined8 *)((long)pvVar7 + 0x28) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0xae0);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xb04) = 0;
        *(undefined1 (*) [16])(this + 0xaf0) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0011e8f7;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0xae8),false);
  }
LAB_0011e8f7:
  Callable::~Callable((Callable *)(this + 0xa50));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa08));
  *(code **)this = String::operator==;
  if (*(long *)(this + 0xa00) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0xa00);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  bVar8 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar8) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e97a;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011e97a:
  Control::~Control((Control *)this);
  operator_delete(this,0xb38);
  return;
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011ea9f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011ea9f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0011eb53;
  }
  cVar6 = String::operator==(param_1,"Container");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0011eb53;
    }
    cVar6 = String::operator==(param_1,"Control");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_60 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar4 == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_0011eb53;
      }
      cVar6 = String::operator==(param_1,"CanvasItem");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = Node::is_class((Node *)this,param_1);
          return uVar8;
        }
        goto LAB_0011ed0e;
      }
    }
  }
LAB_0011eb53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011ed0e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibraryItemDownload::is_class(String const&) const */

undefined8 __thiscall
EditorAssetLibraryItemDownload::is_class(EditorAssetLibraryItemDownload *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011ed9f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011ed9f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0011ee53;
  }
  cVar6 = String::operator==(param_1,"EditorAssetLibraryItemDownload");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0011ee53;
    }
    cVar6 = String::operator==(param_1,"MarginContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0011ef65;
    }
  }
LAB_0011ee53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011ef65:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AssetLibraryEditorPlugin::_initialize_classv() */

void AssetLibraryEditorPlugin::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00133008 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_001330a0 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_001330a8 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AssetLibraryEditorPlugin";
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
      if ((code *)PTR__bind_methods_001330b0 != Container::_bind_methods) {
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
      if ((code *)PTR__bind_methods_001330b0 != Container::_bind_methods) {
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
            if ((code *)PTR__bind_methods_00133008 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_58 = "Node";
          local_68 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Viewport";
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
      if ((code *)PTR__bind_compatibility_methods_001330b8 != Object::_bind_compatibility_methods) {
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
    if ((code *)PTR__bind_methods_001330c0 != AcceptDialog::_bind_methods) {
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



/* EditorAssetLibraryItem::is_class(String const&) const */

undefined8 __thiscall EditorAssetLibraryItem::is_class(EditorAssetLibraryItem *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011fd2f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011fd2f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_0011fde3;
  }
  cVar6 = String::operator==(param_1,"EditorAssetLibraryItem");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0011fde3;
    }
    cVar6 = String::operator==(param_1,"PanelContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0011fef5;
    }
  }
LAB_0011fde3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011fef5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0011ff6f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011ff6f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00120023;
  }
  cVar6 = String::operator==(param_1,"VBoxContainer");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00120023;
    }
    cVar6 = String::operator==(param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_00120135;
    }
  }
LAB_00120023:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00120135:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAssetLibrary::is_class(String const&) const */

undefined8 __thiscall EditorAssetLibrary::is_class(EditorAssetLibrary *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001201af;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001201af:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00120263;
  }
  cVar6 = String::operator==(param_1,"EditorAssetLibrary");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00120263;
    }
    cVar6 = String::operator==(param_1,"PanelContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_00120375;
    }
  }
LAB_00120263:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00120375:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001203ef;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001203ef:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_001204a3;
  }
  cVar6 = String::operator==(param_1,"HBoxContainer");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001204a3;
    }
    cVar6 = String::operator==(param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_001205b5;
    }
  }
LAB_001204a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001205b5:
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
  local_78 = &_LC41;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC41;
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
LAB_0012084d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0012084d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0012086f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0012086f:
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
      goto LAB_00120ba1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00120ba1:
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
      goto LAB_00120e51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00120e51:
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



/* AssetLibraryEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
AssetLibraryEditorPlugin::_get_property_listv
          (AssetLibraryEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "AssetLibraryEditorPlugin";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AssetLibraryEditorPlugin";
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
      goto LAB_00121101;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121101:
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
  StringName::StringName((StringName *)&local_78,"AssetLibraryEditorPlugin",false);
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
      goto LAB_001213b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001213b1:
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
  if ((code *)PTR__get_property_list_001330c8 != Object::_get_property_list) {
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
      goto LAB_00121681;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121681:
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
      goto LAB_00121931;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121931:
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



/* EditorAssetLibraryItemDescription::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
EditorAssetLibraryItemDescription::_get_property_listv
          (EditorAssetLibraryItemDescription *this,List *param_1,bool param_2)

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
  local_78 = "EditorAssetLibraryItemDescription";
  local_70 = 0x21;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorAssetLibraryItemDescription";
  local_98 = 0;
  local_70 = 0x21;
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
      goto LAB_00121be1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121be1:
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
  StringName::StringName((StringName *)&local_78,"EditorAssetLibraryItemDescription",false);
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
      goto LAB_00121e91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00121e91:
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
  if ((code *)PTR__get_property_list_001330d0 != Object::_get_property_list) {
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
      goto LAB_00122161;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122161:
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
  if ((code *)PTR__get_property_list_001330d8 != CanvasItem::_get_property_list) {
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
      goto LAB_00122431;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122431:
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



/* PanelContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PanelContainer::_get_property_listv(PanelContainer *this,List *param_1,bool param_2)

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
  local_78 = "PanelContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PanelContainer";
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
      goto LAB_001226e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001226e1:
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



/* EditorAssetLibraryItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorAssetLibraryItem::_get_property_listv(EditorAssetLibraryItem *this,List *param_1,bool param_2)

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
    PanelContainer::_get_property_listv((PanelContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorAssetLibraryItem";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorAssetLibraryItem";
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
      goto LAB_00122991;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122991:
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
  StringName::StringName((StringName *)&local_78,"EditorAssetLibraryItem",false);
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



/* EditorAssetLibrary::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorAssetLibrary::_get_property_listv(EditorAssetLibrary *this,List *param_1,bool param_2)

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
    PanelContainer::_get_property_listv((PanelContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorAssetLibrary";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorAssetLibrary";
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
      goto LAB_00122c41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122c41:
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
  StringName::StringName((StringName *)&local_78,"EditorAssetLibrary",false);
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
      goto LAB_00122ef1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00122ef1:
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
      goto LAB_001231a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001231a1:
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
      goto LAB_00123451;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123451:
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



/* MarginContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MarginContainer::_get_property_listv(MarginContainer *this,List *param_1,bool param_2)

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
  local_78 = "MarginContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MarginContainer";
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
      goto LAB_00123701;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123701:
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



/* EditorAssetLibraryItemDownload::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorAssetLibraryItemDownload::_get_property_listv
          (EditorAssetLibraryItemDownload *this,List *param_1,bool param_2)

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
    MarginContainer::_get_property_listv((MarginContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorAssetLibraryItemDownload";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorAssetLibraryItemDownload";
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
      goto LAB_001239b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001239b1:
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
  StringName::StringName((StringName *)&local_78,"EditorAssetLibraryItemDownload",false);
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
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
    local_80 = 0;
    local_88 = 0;
    local_78 = "RefCounted";
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
    StringName::StringName((StringName *)&local_78,"RefCounted",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_b0 = (CowData<char32_t> *)&local_70;
  local_b8 = (CowData<char32_t> *)&local_58;
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
    CowData<char32_t>::_ref(local_b0,(CowData *)&local_98);
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
      goto LAB_00123e0f;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00123e0f:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_b0);
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
    local_80 = 0;
    local_78 = "RefCounted";
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
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_b8);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"RefCounted",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* StyleBox::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StyleBox::_get_property_listv(StyleBox *this,List *param_1,bool param_2)

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
  local_78 = "StyleBox";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StyleBox";
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
      goto LAB_00124301;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00124301:
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
  StringName::StringName((StringName *)&local_78,"StyleBox",false);
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



/* StyleBoxEmpty::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StyleBoxEmpty::_get_property_listv(StyleBoxEmpty *this,List *param_1,bool param_2)

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
    StyleBox::_get_property_listv((StyleBox *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StyleBoxEmpty";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StyleBoxEmpty";
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
      goto LAB_001245b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001245b1:
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
  StringName::StringName((StringName *)&local_78,"StyleBoxEmpty",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      StyleBox::_get_property_listv((StyleBox *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JSON::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall JSON::_get_property_listv(JSON *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC26;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC26;
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
      goto LAB_00124861;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00124861:
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
  StringName::StringName((StringName *)&local_78,"JSON",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
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



/* EditorAssetLibrary::_initialize_classv() */

void EditorAssetLibrary::_initialize_classv(void)

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
    if (PanelContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_58 = 0;
      local_40 = 9;
      local_48 = "Container";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "PanelContainer";
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
      if ((code *)PTR__bind_methods_001330e0 != Container::_bind_methods) {
        PanelContainer::_bind_methods();
      }
      PanelContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "PanelContainer";
    local_58 = 0;
    local_40 = 0xe;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorAssetLibrary";
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



/* EditorAssetLibraryItemDownload::_initialize_classv() */

void EditorAssetLibraryItemDownload::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_001330e8 != Container::_bind_methods) {
        MarginContainer::_bind_methods();
      }
      MarginContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "MarginContainer";
    local_58 = 0;
    local_40 = 0xf;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorAssetLibraryItemDownload";
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



/* WARNING: Removing unreachable block (ram,0x00124f30) */
/* EditorAssetLibraryItemDownload::_notificationv(int, bool) */

void __thiscall
EditorAssetLibraryItemDownload::_notificationv
          (EditorAssetLibraryItemDownload *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(iVar1);
    if ((code *)PTR__notification_001330f0 != Container::_notification) {
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
  if ((code *)PTR__notification_001330f0 != Container::_notification) {
    MarginContainer::_notification(iVar1);
  }
  _notification(iVar1);
  return;
}



/* MethodBind* create_method_bind<EditorAssetLibraryItem, int, int, Ref<Texture2D> const&>(void
   (EditorAssetLibraryItem::*)(int, int, Ref<Texture2D> const&)) */

MethodBind *
create_method_bind<EditorAssetLibraryItem,int,int,Ref<Texture2D>const&>
          (_func_void_int_int_Ref_ptr *param_1)

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
  *(_func_void_int_int_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b008;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "EditorAssetLibraryItem";
  local_30 = 0x16;
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



/* EditorAssetLibraryItem::_initialize_classv() */

void EditorAssetLibraryItem::_initialize_classv(void)

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
    if (PanelContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        Container::initialize_class();
      }
      local_58 = 0;
      local_40 = 9;
      local_48 = "Container";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "PanelContainer";
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
      if ((code *)PTR__bind_methods_001330e0 != Container::_bind_methods) {
        PanelContainer::_bind_methods();
      }
      PanelContainer::initialize_class()::initialized = '\x01';
    }
    local_48 = "PanelContainer";
    local_58 = 0;
    local_40 = 0xe;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorAssetLibraryItem";
    local_60 = 0;
    local_40 = 0x16;
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



/* MethodBind* create_method_bind<EditorAssetLibraryItemDescription, int, int, Ref<Texture2D>
   const&>(void (EditorAssetLibraryItemDescription::*)(int, int, Ref<Texture2D> const&)) */

MethodBind *
create_method_bind<EditorAssetLibraryItemDescription,int,int,Ref<Texture2D>const&>
          (_func_void_int_int_Ref_ptr *param_1)

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
  *(_func_void_int_int_Ref_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012b008;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "EditorAssetLibraryItemDescription";
  local_30 = 0x21;
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



/* EditorAssetLibraryItemDescription::_initialize_classv() */

void EditorAssetLibraryItemDescription::_initialize_classv(void)

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
              if ((code *)PTR__bind_methods_00133008 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_001330b8 != Object::_bind_compatibility_methods)
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
      if ((code *)PTR__bind_methods_001330c0 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorAssetLibraryItemDescription";
    local_70 = 0;
    local_50 = 0x21;
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



/* WARNING: Removing unreachable block (ram,0x00125c10) */
/* EditorAssetLibrary::_notificationv(int, bool) */

void __thiscall
EditorAssetLibrary::_notificationv(EditorAssetLibrary *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(iVar1);
    if ((code *)PTR__notification_00133088 != Container::_notification) {
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
  if ((code *)PTR__notification_00133088 != Container::_notification) {
    PanelContainer::_notification(iVar1);
  }
  _notification(iVar1);
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibraryItemDownload, void, int, int, Vector<String>
   const&, Vector<unsigned char> const&>::call(Variant const**, int, Variant&, Callable::CallError&)
   const */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::call(CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  CowData<unsigned_char> local_60 [8];
  char *local_58;
  undefined8 local_50 [2];
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
        if ((uint)param_2 < 5) {
          if (param_2 == 4) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar10 & 1) != 0) {
              pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],0x1d);
            uVar4 = _LC276;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_Vector((Variant *)&local_68);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x22);
            uVar4 = _LC277;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_Vector((Variant *)&local_58);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar4 = _LC278;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar6 = Variant::operator_cast_to_int(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
            uVar4 = _LC179;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar7 = Variant::operator_cast_to_int(*param_1);
            (*pcVar10)((long *)(lVar1 + lVar2),iVar7,iVar6,(Variant *)&local_58,(Variant *)&local_68
                      );
            CowData<String>::_unref((CowData<String> *)local_50);
            CowData<unsigned_char>::_unref(local_60);
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
        goto LAB_00125d64;
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
  local_58 = "\', can\'t call method.";
  local_50[0] = 0x15;
  String::parse_latin1((StrRange *)&local_68);
  uitos((ulong)local_78);
  operator+((char *)local_70,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_70);
  _err_print_error(&_LC178,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00125d64:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&, int>::call(Variant const**, int, Variant&, Callable::CallError&)
   const */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&,int>
::call(CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&,int>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong *puVar11;
  code *pcVar12;
  long in_FS_OFFSET;
  bool bVar13;
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar4 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar4 << 8);
      LOCK();
      bVar13 = (char)ObjectDB::spin_lock == '\0';
      if (bVar13) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar13) break;
      local_58 = (char *)(uVar4 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar11[1] != 0) {
        lVar2 = *(long *)(this + 0x28);
        pcVar12 = *(code **)(this + 0x38);
        lVar3 = *(long *)(this + 0x40);
        if ((uint)param_2 < 6) {
          if (param_2 == 5) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar12 & 1) != 0) {
              pcVar12 = *(code **)(pcVar12 + *(long *)(lVar2 + lVar3) + -1);
            }
            cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[4],2);
            uVar5 = _LC279;
            if (cVar6 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar5;
            }
            iVar7 = Variant::operator_cast_to_int(param_1[4]);
            cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[3],0x1d);
            uVar5 = _LC276;
            if (cVar6 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar5;
            }
            Variant::operator_cast_to_Vector((Variant *)&local_68);
            cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x22);
            uVar5 = _LC277;
            if (cVar6 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar5;
            }
            Variant::operator_cast_to_Vector((Variant *)&local_58);
            cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar5 = _LC278;
            if (cVar6 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar5;
            }
            iVar8 = Variant::operator_cast_to_int(param_1[1]);
            cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
            uVar5 = _LC179;
            if (cVar6 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar5;
            }
            iVar9 = Variant::operator_cast_to_int(*param_1);
            (*pcVar12)((long *)(lVar2 + lVar3),iVar9,iVar8,(Variant *)&local_58,(Variant *)&local_68
                       ,iVar7);
            CowData<String>::_unref((CowData<String> *)local_50);
            lVar2 = local_60;
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 5;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 5;
        }
        goto LAB_0012608c;
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
  local_58 = "\', can\'t call method.";
  local_50[0] = 0x15;
  String::parse_latin1((StrRange *)&local_68);
  uitos((ulong)local_78);
  operator+((char *)local_70,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_70);
  _err_print_error(&_LC178,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_0012608c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorAssetLibrary, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&>::call(Variant const**, int, Variant&, Callable::CallError&) const
    */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::call(CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  CowData<unsigned_char> local_60 [8];
  char *local_58;
  undefined8 local_50 [2];
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
        if ((uint)param_2 < 5) {
          if (param_2 == 4) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar10 & 1) != 0) {
              pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],0x1d);
            uVar4 = _LC276;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_Vector((Variant *)&local_68);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x22);
            uVar4 = _LC277;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_Vector((Variant *)&local_58);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar4 = _LC278;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar6 = Variant::operator_cast_to_int(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
            uVar4 = _LC179;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar7 = Variant::operator_cast_to_int(*param_1);
            (*pcVar10)((long *)(lVar1 + lVar2),iVar7,iVar6,(Variant *)&local_58,(Variant *)&local_68
                      );
            CowData<String>::_unref((CowData<String> *)local_50);
            CowData<unsigned_char>::_unref(local_60);
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
        goto LAB_00126404;
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
  local_58 = "\', can\'t call method.";
  local_50[0] = 0x15;
  String::parse_latin1((StrRange *)&local_68);
  uitos((ulong)local_78);
  operator+((char *)local_70,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_70);
  _err_print_error(&_LC178,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00126404:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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
LAB_001269e0:
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
  if (lVar9 == 0) goto LAB_001269e0;
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
    goto LAB_00126a36;
  }
  if (lVar9 == lVar5) {
LAB_0012695b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00126a36:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_001268cf;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0012695b;
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
LAB_001268cf:
  puVar7[-1] = param_1;
  return 0;
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
    *(code **)param_1 = BoxContainer::_notification;
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



/* Ref<Image>::unref() */

void __thiscall Ref<Image>::unref(Ref<Image> *this)

{
  char cVar1;
  
  if (*(long *)this != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<Image>(*(Image **)this);
      *(undefined8 *)this = 0;
      return;
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<EditorAssetLibraryItemDescription::Preview>::_unref() */

void __thiscall
CowData<EditorAssetLibraryItemDescription::Preview>::_unref
          (CowData<EditorAssetLibraryItemDescription::Preview> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  
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
        lVar9 = 0;
        lVar8 = lVar2;
        do {
          if (*(long *)(lVar8 + 0x18) != 0) {
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
              pOVar5 = *(Object **)(lVar8 + 0x18);
              cVar7 = predelete_handler(pOVar5);
              if (cVar7 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          if (*(long *)(lVar8 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar8 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar8 + 8);
              *(undefined8 *)(lVar8 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x20;
        } while (lVar3 != lVar9);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* EditorAssetLibraryItemDescription::~EditorAssetLibraryItemDescription() */

void __thiscall
EditorAssetLibraryItemDescription::~EditorAssetLibraryItemDescription
          (EditorAssetLibraryItemDescription *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00129bf0;
  if (*(long *)(this + 0xe20) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xe20);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe18));
  if (*(long *)(this + 0xe10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xe10);
      *(undefined8 *)(this + 0xe10) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xe08) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe08) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xe08);
      *(undefined8 *)(this + 0xe08) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<EditorAssetLibraryItemDescription::Preview>::_unref
            ((CowData<EditorAssetLibraryItemDescription::Preview> *)(this + 0xdf0));
  *(undefined ***)this = &PTR__initialize_classv_00129600;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* EditorAssetLibraryItemDescription::~EditorAssetLibraryItemDescription() */

void __thiscall
EditorAssetLibraryItemDescription::~EditorAssetLibraryItemDescription
          (EditorAssetLibraryItemDescription *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00129bf0;
  if (*(long *)(this + 0xe20) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0xe20);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe18));
  if (*(long *)(this + 0xe10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xe10);
      *(undefined8 *)(this + 0xe10) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe08));
  CowData<EditorAssetLibraryItemDescription::Preview>::_unref
            ((CowData<EditorAssetLibraryItemDescription::Preview> *)(this + 0xdf0));
  *(undefined ***)this = &PTR__initialize_classv_00129600;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xe28);
  return;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* CowData<EditorAssetLibraryItemDescription::Preview>::_realloc(long) */

undefined8 __thiscall
CowData<EditorAssetLibraryItemDescription::Preview>::_realloc
          (CowData<EditorAssetLibraryItemDescription::Preview> *this,long param_1)

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
/* Error CowData<EditorAssetLibraryItemDescription::Preview>::resize<false>(long) */

undefined8 __thiscall
CowData<EditorAssetLibraryItemDescription::Preview>::resize<false>
          (CowData<EditorAssetLibraryItemDescription::Preview> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
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
    lVar9 = 0;
    lVar10 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar10 = lVar9 * 0x20;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_001271d0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x20 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar4 = uVar11 + 1;
  if (lVar4 == 0) goto LAB_001271d0;
  uVar12 = param_1;
  if (param_1 <= lVar9) {
    while (lVar9 = *(long *)this, lVar9 != 0) {
      if (*(ulong *)(lVar9 + -8) <= uVar12) {
        if (lVar4 != lVar10) {
          uVar7 = _realloc(this,lVar4);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          lVar9 = *(long *)this;
          if (lVar9 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar9 + -8) = param_1;
        return 0;
      }
      lVar9 = lVar9 + uVar12 * 0x20;
      if ((*(long *)(lVar9 + 0x18) != 0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
        pOVar1 = *(Object **)(lVar9 + 0x18);
        cVar3 = predelete_handler(pOVar1);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar9 + 8));
      uVar12 = uVar12 + 1;
    }
    goto LAB_00127226;
  }
  if (lVar4 == lVar10) {
LAB_0012710d:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_00127226:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar9 = puVar8[-1];
    if (param_1 <= lVar9) goto LAB_0012705f;
  }
  else {
    if (lVar9 != 0) {
      uVar7 = _realloc(this,lVar4);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0012710d;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar9 = 0;
  }
  puVar5 = puVar8 + lVar9 * 4;
  do {
    *(undefined4 *)puVar5 = 0;
    puVar6 = puVar5 + 4;
    *(undefined1 *)((long)puVar5 + 4) = 0;
    *(undefined1 (*) [16])(puVar5 + 1) = (undefined1  [16])0x0;
    puVar5[3] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar8 + param_1 * 4);
LAB_0012705f:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00127358) */
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



/* MethodBindT<int, int, Ref<Texture2D> const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<int,int,Ref<Texture2D>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x127528;
      local_60 = 0x35;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0012771f;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 0x10) + 0x10));
  local_68 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_68;
  if (pOVar4 != local_68) {
    if (pOVar4 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_001276d0:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_68 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_001276d0;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),*(undefined4 *)(*(long *)param_3 + 8),
            *(undefined4 *)(*(long *)(param_3 + 8) + 8),(StringName *)&local_68);
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
LAB_0012771f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int, Ref<Texture2D> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,int,Ref<Texture2D>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x127528;
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
      goto LAB_001279df;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*(long **)((long)param_3 + 0x10) == (long *)0x0) ||
     (local_48 = (Object *)**(long **)((long)param_3 + 0x10), local_48 == (Object *)0x0)) {
LAB_001279af:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_001279af;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar5)((long *)((long)param_2 + lVar1),**param_3,**(undefined4 **)((long)param_3 + 8),
            (StringName *)&local_48);
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
LAB_001279df:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, int, Ref<Texture2D> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<int,int,Ref<Texture2D>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  char *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  long *plVar12;
  uint uVar13;
  undefined4 in_register_00000014;
  long *plVar14;
  Variant *pVVar15;
  long lVar16;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar17;
  long in_FS_OFFSET;
  long local_78;
  char *local_70;
  char *local_68;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar12 = (long *)plVar14[0x23];
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)(**(code **)(*plVar14 + 0x40))(plVar14);
      }
    }
    else {
      plVar12 = (long *)(plVar14[1] + 0x20);
    }
    if (local_68 == (char *)*plVar12) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (char *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC178,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00127df2;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar17 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar16;
    }
    if ((int)(3 - in_R8D) <= iVar8) {
      lVar10 = 0;
      do {
        if ((int)lVar10 < (int)in_R8D) {
          pVVar15 = *(Variant **)(param_4 + lVar10 * 8);
        }
        else {
          uVar13 = iVar8 + -3 + (int)lVar10;
          if (lVar16 <= (int)uVar13) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar13,lVar16,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          pVVar15 = pVVar2 + (ulong)uVar13 * 0x18;
        }
        local_58[lVar10] = pVVar15;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar17 & 1) != 0) {
        pVVar17 = *(Variant **)(pVVar17 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[2],0x18);
      uVar5 = _LC378;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      local_70 = (char *)0x0;
      pcVar11 = (char *)Variant::get_validated_object();
      pcVar3 = local_70;
      if (pcVar11 != local_70) {
        if (pcVar11 == (char *)0x0) {
          if (local_70 != (char *)0x0) {
            local_70 = (char *)0x0;
            local_68 = pcVar3;
            goto LAB_00127d49;
          }
        }
        else {
          pcVar11 = (char *)__dynamic_cast(pcVar11,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pcVar3 != pcVar11) {
            local_68 = pcVar3;
            local_70 = pcVar11;
            if (pcVar11 != (char *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_70 = (char *)0x0;
              }
            }
LAB_00127d49:
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[1],2);
      uVar5 = _LC278;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      iVar8 = Variant::operator_cast_to_int(local_58[1]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[0],2);
      uVar5 = _LC179;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar5;
      }
      iVar9 = Variant::operator_cast_to_int(local_58[0]);
      (*(code *)pVVar17)((Variant *)((long)plVar14 + (long)pVVar1),iVar9,iVar8,
                         (Ref<Texture2D> *)&local_70);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
      goto LAB_00127df2;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_00127df2:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
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
    local_78 = &_LC12;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<int, int, Ref<Texture2D> const&>(int, PropertyInfo&) */

void call_get_argument_type_info<int,int,Ref<Texture2D>const&>(int param_1,PropertyInfo *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_84;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 0;
  call_get_argument_type_info_helper<int>(param_1,&local_84,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_84,param_2);
  if (param_1 == local_84) {
    local_70 = 0;
    local_78 = 0;
    local_68 = "Texture2D";
    local_60 = 9;
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



/* MethodBindT<int, int, Ref<Texture2D> const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<int,int,Ref<Texture2D>const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info<int,int,Ref<Texture2D>const&>(in_EDX,pPVar1);
  return pPVar1;
}



/* EditorAssetLibraryItem::configure(String const&, int, String const&, int, String const&, int,
   String const&) */

void EditorAssetLibraryItem::_GLOBAL__sub_I_configure(void)

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
  if (TabBar::base_property_helper == '\0') {
    TabBar::base_property_helper = '\x01';
    TabBar::base_property_helper._64_8_ = 0;
    TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle)
    ;
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
/* EditorAssetLibraryItemDescription::~EditorAssetLibraryItemDescription() */

void __thiscall
EditorAssetLibraryItemDescription::~EditorAssetLibraryItemDescription
          (EditorAssetLibraryItemDescription *this)

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
/* EditorAssetLibrary::~EditorAssetLibrary() */

void __thiscall EditorAssetLibrary::~EditorAssetLibrary(EditorAssetLibrary *this)

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
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

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
/* EditorAssetLibraryItem::~EditorAssetLibraryItem() */

void __thiscall EditorAssetLibraryItem::~EditorAssetLibraryItem(EditorAssetLibraryItem *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorAssetLibraryItemDownload::~EditorAssetLibraryItemDownload() */

void __thiscall
EditorAssetLibraryItemDownload::~EditorAssetLibraryItemDownload
          (EditorAssetLibraryItemDownload *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JSON::~JSON() */

void __thiscall JSON::~JSON(JSON *this)

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
/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

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
/* MethodBindT<int, int, Ref<Texture2D> const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,int,Ref<Texture2D>const&>::~MethodBindT
          (MethodBindT<int,int,Ref<Texture2D>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetLibraryItem, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItem,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItem,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetLibraryItemDescription, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetLibraryItemDescription, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItemDescription,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetLibraryItemDownload, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetLibraryItemDownload, void, int, int, Vector<String>
   const&, Vector<unsigned char> const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibraryItemDownload,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetLibrary, void, String,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,String,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,String,String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetLibrary, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&,int>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&,int>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetLibrary, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetLibrary, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetLibrary, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAssetLibrary, void, int, int, Vector<String> const&,
   Vector<unsigned char> const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAssetLibrary,void,int,int,Vector<String>const&,Vector<unsigned_char>const&>
           *this)

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



