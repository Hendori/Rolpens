/* ImportDock::_advanced_options() */

void __thiscall ImportDock::_advanced_options(ImportDock *this)

{
  long lVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0);
  if ((((lVar1 != 0) && (*(long *)(lVar1 + -8) == 1)) &&
      (plVar2 = *(long **)(*(long *)(this + 0xaa0) + 0x1b0), plVar2 != (long *)0x0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x198),
     UNRECOVERED_JUMPTABLE != ResourceImporter::show_advanced_options)) {
                    /* WARNING: Could not recover jumptable at 0x00100042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* ImportDock::_notification(int) */

void ImportDock::_notification(int param_1)

{
  StringName *pSVar1;
  char cVar2;
  int iVar3;
  int in_ESI;
  undefined4 in_register_0000003c;
  StringName *pSVar4;
  long in_FS_OFFSET;
  Object *local_50;
  undefined8 local_48;
  long local_30;
  
  pSVar4 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_ESI == 10) {
    EditorInspector::edit(*(Object **)(pSVar4 + 0xa28));
    pSVar1 = *(StringName **)(pSVar4 + 0xa78);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    local_48 = Control::get_theme_color
                         (pSVar4,(StringName *)
                                 &_notification(int)::{lambda()#2}::operator()()::sname);
    Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
  }
  else if (in_ESI == 10000) {
    cVar2 = EditorThemeManager::is_generated_theme_outdated();
    if (cVar2 != '\0') {
      pSVar1 = *(StringName **)(pSVar4 + 0xa10);
      if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
        iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
        if (iVar3 != 0) {
          _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
        }
      }
      Control::get_theme_stylebox((StringName *)&local_50,pSVar4);
      Control::add_theme_style_override(pSVar1,(Ref *)(CoreStringNames::singleton + 0xb8));
      if (local_50 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_50);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)local_50 + 0x140))(local_50);
            Memory::free_static(local_50,false);
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



/* ImportDock::initialize_import_options() const */

void __thiscall ImportDock::initialize_import_options(ImportDock *this)

{
  if ((*(Object **)(this + 0xa28) != (Object *)0x0) && (*(long *)(this + 0xaa0) != 0)) {
    EditorInspector::edit(*(Object **)(this + 0xa28));
    return;
  }
  _err_print_error("initialize_import_options","editor/import_dock.cpp",0x2e8,
                   "Condition \"!import_opts || !params\" is true.",0,0);
  return;
}



/* ImportDock::_property_toggled(StringName const&, bool) */

void __thiscall ImportDock::_property_toggled(ImportDock *this,StringName *param_1,bool param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  uint *puVar38;
  long lVar39;
  uint *puVar40;
  ulong uVar41;
  uint *puVar42;
  uint uVar43;
  ulong uVar44;
  long in_FS_OFFSET;
  StringName local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2) {
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_58);
  }
  else {
    lVar5 = *(long *)(this + 0xaa0);
    if ((*(long *)(lVar5 + 0x1c8) != 0) && (*(int *)(lVar5 + 0x1ec) != 0)) {
      uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar5 + 0x1e8) * 4);
      lVar39 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar5 + 0x1e8) * 8);
      if (*(long *)param_1 == 0) {
        uVar32 = StringName::get_empty_hash();
      }
      else {
        uVar32 = *(uint *)(*(long *)param_1 + 0x20);
      }
      uVar37 = CONCAT44(0,uVar31);
      uVar30 = 1;
      if (uVar32 != 0) {
        uVar30 = uVar32;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar30 * lVar39;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar37;
      lVar34 = SUB168(auVar10 * auVar20,8);
      lVar6 = *(long *)(lVar5 + 0x1e0);
      iVar33 = SUB164(auVar10 * auVar20,8);
      uVar32 = *(uint *)(lVar6 + lVar34 * 4);
      if (uVar32 != 0) {
        uVar43 = 0;
        do {
          if (uVar30 == uVar32) {
            lVar7 = *(long *)(lVar5 + 0x1d0);
            lVar8 = *(long *)(lVar5 + 0x1c8);
            uVar32 = *(uint *)(lVar7 + lVar34 * 4);
            uVar35 = (ulong)uVar32;
            if (*(long *)(lVar8 + uVar35 * 8) == *(long *)param_1) {
              lVar34 = *(long *)(lVar5 + 0x1d8);
              uVar31 = *(uint *)(lVar34 + uVar35 * 4);
              uVar37 = (ulong)uVar31;
              uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar5 + 0x1e8) * 4);
              uVar44 = CONCAT44(0,uVar30);
              lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar5 + 0x1e8) * 8);
              auVar14._8_8_ = 0;
              auVar14._0_8_ = (ulong)(uVar31 + 1) * lVar9;
              auVar24._8_8_ = 0;
              auVar24._0_8_ = uVar44;
              lVar39 = SUB168(auVar14 * auVar24,8) * 4;
              uVar31 = SUB164(auVar14 * auVar24,8);
              puVar38 = (uint *)(lVar6 + lVar39);
              if ((*puVar38 != 0) &&
                 (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)*puVar38 * lVar9, auVar25._8_8_ = 0,
                 auVar25._0_8_ = uVar44, auVar16._8_8_ = 0,
                 auVar16._0_8_ = (ulong)((uVar30 + uVar31) - SUB164(auVar15 * auVar25,8)) * lVar9,
                 auVar26._8_8_ = 0, auVar26._0_8_ = uVar44, uVar36 = (ulong)uVar31, uVar41 = uVar37,
                 SUB164(auVar16 * auVar26,8) != 0)) {
                while( true ) {
                  uVar37 = uVar36;
                  puVar40 = (uint *)(lVar39 + lVar7);
                  puVar1 = (uint *)(lVar7 + uVar41 * 4);
                  puVar42 = (uint *)(uVar41 * 4 + lVar6);
                  puVar2 = (undefined4 *)(lVar34 + (ulong)*puVar40 * 4);
                  puVar3 = (undefined4 *)(lVar34 + (ulong)*puVar1 * 4);
                  uVar4 = *puVar3;
                  *puVar3 = *puVar2;
                  *puVar2 = uVar4;
                  uVar31 = *puVar38;
                  *puVar38 = *puVar42;
                  *puVar42 = uVar31;
                  uVar31 = *puVar40;
                  *puVar40 = *puVar1;
                  *puVar1 = uVar31;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = (ulong)((int)uVar37 + 1) * lVar9;
                  auVar29._8_8_ = 0;
                  auVar29._0_8_ = uVar44;
                  uVar36 = SUB168(auVar19 * auVar29,8);
                  lVar39 = uVar36 * 4;
                  puVar38 = (uint *)(lVar6 + lVar39);
                  if ((*puVar38 == 0) ||
                     (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)*puVar38 * lVar9, auVar27._8_8_ = 0,
                     auVar27._0_8_ = uVar44, auVar18._8_8_ = 0,
                     auVar18._0_8_ =
                          (ulong)((SUB164(auVar19 * auVar29,8) + uVar30) -
                                 SUB164(auVar17 * auVar27,8)) * lVar9, auVar28._8_8_ = 0,
                     auVar28._0_8_ = uVar44, SUB164(auVar18 * auVar28,8) == 0)) break;
                  uVar36 = uVar36 & 0xffffffff;
                  uVar41 = uVar37;
                }
              }
              *(undefined4 *)(lVar6 + uVar37 * 4) = 0;
              if ((StringName::configured != '\0') && (*(long *)(lVar8 + uVar35 * 8) != 0)) {
                StringName::unref();
              }
              uVar31 = *(int *)(lVar5 + 0x1ec) - 1;
              *(uint *)(lVar5 + 0x1ec) = uVar31;
              if (uVar32 < uVar31) {
                StringName::StringName
                          ((StringName *)(*(long *)(lVar5 + 0x1c8) + uVar35 * 8),
                           (StringName *)(*(long *)(lVar5 + 0x1c8) + (ulong)uVar31 * 8));
                uVar37 = (ulong)*(uint *)(lVar5 + 0x1ec);
                if ((StringName::configured != '\0') &&
                   (*(long *)(*(long *)(lVar5 + 0x1c8) + uVar37 * 8) != 0)) {
                  StringName::unref();
                  uVar37 = (ulong)*(uint *)(lVar5 + 0x1ec);
                }
                lVar39 = *(long *)(lVar5 + 0x1d8);
                *(undefined4 *)(lVar39 + uVar35 * 4) = *(undefined4 *)(lVar39 + uVar37 * 4);
                *(uint *)(*(long *)(lVar5 + 0x1d0) +
                         (ulong)*(uint *)(lVar39 + (ulong)*(uint *)(lVar5 + 0x1ec) * 4) * 4) =
                     uVar32;
              }
              break;
            }
          }
          uVar43 = uVar43 + 1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)(iVar33 + 1) * lVar39;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar37;
          lVar34 = SUB168(auVar11 * auVar21,8);
          uVar32 = *(uint *)(lVar6 + lVar34 * 4);
          iVar33 = SUB164(auVar11 * auVar21,8);
        } while ((uVar32 != 0) &&
                (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar32 * lVar39, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar37, auVar13._8_8_ = 0,
                auVar13._0_8_ = (ulong)((uVar31 + iVar33) - SUB164(auVar12 * auVar22,8)) * lVar39,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar37, uVar43 <= SUB164(auVar13 * auVar23,8)));
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ImportDock::_add_keep_import_option(String const&) */

void __thiscall ImportDock::_add_keep_import_option(ImportDock *this,String *param_1)

{
  String *pSVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pSVar1 = *(String **)(this + 0xa18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = "";
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  OptionButton::add_separator(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "";
  pSVar1 = *(String **)(this + 0xa18);
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Keep File (exported as is)";
  local_78 = 0;
  local_60 = 0x1a;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  iVar4 = (int)(String *)&local_68;
  OptionButton::add_item(pSVar1,iVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  uVar2 = *(undefined8 *)(this + 0xa18);
  Variant::Variant((Variant *)local_58,"keep");
  OptionButton::set_item_metadata((int)uVar2,(Variant *)0xffffffff);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar1 = *(String **)(this + 0xa18);
  local_70 = 0;
  local_68 = "";
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Skip File (not exported)";
  local_78 = 0;
  local_60 = 0x18;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  OptionButton::add_item(pSVar1,iVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  uVar2 = *(undefined8 *)(this + 0xa18);
  Variant::Variant((Variant *)local_58,"skip");
  OptionButton::set_item_metadata((int)uVar2,(Variant *)0xffffffff);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar3 = String::operator==(param_1,"keep");
  if (cVar3 == '\0') {
    cVar3 = String::operator==(param_1,"skip");
    if (cVar3 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      iVar4 = (int)*(undefined8 *)(this + 0xa18);
      OptionButton::get_item_count();
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100898;
    }
  }
  else {
    iVar4 = (int)*(undefined8 *)(this + 0xa18);
    OptionButton::get_item_count();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00100898:
      OptionButton::select(iVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImportDock::_set_dirty(bool) */

void ImportDock::_set_dirty(bool param_1)

{
  String *pSVar1;
  StringName *pSVar2;
  int iVar3;
  char in_SIL;
  undefined7 in_register_00000039;
  StringName *pSVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_40;
  
  pSVar4 = (StringName *)CONCAT71(in_register_00000039,param_1);
  pSVar1 = *(String **)(pSVar4 + 0xa80);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  if (in_SIL == '\0') {
    local_60 = 0;
    local_68 = "";
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Reimport";
    local_78 = 0;
    local_60 = 8;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    Button::set_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    Control::remove_theme_color_override(*(StringName **)(pSVar4 + 0xa80));
    local_68 = "";
    local_70 = 0;
    pSVar1 = *(String **)(pSVar4 + 0xa80);
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    Control::set_tooltip_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  else {
    local_60 = 4;
    local_68 = " (*)";
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "";
    local_80 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_80);
    local_88 = 0;
    local_68 = "Reimport";
    local_60 = 8;
    String::parse_latin1((StrRange *)&local_88);
    TTR((String *)&local_78,(String *)&local_88);
    String::operator+((String *)&local_68,(String *)&local_78);
    Button::set_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    pSVar2 = *(StringName **)(pSVar4 + 0xa80);
    if (_set_dirty(bool)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_set_dirty(bool)::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_set_dirty(bool)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_set_dirty(bool)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_set_dirty(bool)::{lambda()#1}::operator()()::sname);
      }
    }
    local_58 = Control::get_theme_color
                         (pSVar4,(StringName *)&_set_dirty(bool)::{lambda()#1}::operator()()::sname)
    ;
    Control::add_theme_color_override(pSVar2,(Color *)(SceneStringNames::singleton + 0xb0));
    local_68 = "";
    pSVar1 = *(String **)(pSVar4 + 0xa80);
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = 
    "You have pending changes that haven\'t been applied yet. Click Reimport to apply changes made to the import options.\nSelecting another resource in the FileSystem dock without clicking Reimport first will discard changes made in the Import dock."
    ;
    local_78 = 0;
    local_60 = 0xf3;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    Control::set_tooltip_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImportDock::_property_edited(StringName const&) */

void ImportDock::_property_edited(StringName *param_1)

{
  _set_dirty(SUB81(param_1,0));
  return;
}



/* ImportDock::_update_preset_menu() */

void __thiscall ImportDock::_update_preset_menu(ImportDock *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  String *pSVar6;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  code *pcVar7;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = (bool)MenuButton::get_popup();
  PopupMenu::clear(bVar1);
  if (*(long *)(*(long *)(this + 0xaa0) + 0x1b0) == 0) {
    uVar5 = MenuButton::get_popup();
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"");
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"Default");
    TTR((String *)&local_58,(String *)&local_68);
    PopupMenu::add_item(uVar5,(String *)&local_58,0xffffffff,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::hide();
      return;
    }
  }
  else {
    CanvasItem::show();
    pcVar7 = *(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 0x1a0);
    if ((pcVar7 == ResourceImporter::get_preset_count) || (iVar3 = (*pcVar7)(), iVar3 == 0)) {
      uVar5 = MenuButton::get_popup();
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"");
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"Default");
      TTR((String *)&local_58,(String *)&local_68);
      PopupMenu::add_item(uVar5,(String *)&local_58,0xffffffff,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    else {
      pcVar7 = *(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 0x1a0);
      if (pcVar7 != ResourceImporter::get_preset_count) {
        iVar3 = 0;
        do {
          iVar4 = (*pcVar7)();
          if (iVar4 <= iVar3) break;
          uVar5 = MenuButton::get_popup();
          pcVar7 = *(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 0x1a8);
          if (pcVar7 == ResourceImporter::get_preset_name) {
            local_58 = (char *)0x0;
          }
          else {
            (*pcVar7)((CowData<char32_t> *)&local_58,*(long **)(*(long *)(this + 0xaa0) + 0x1b0),
                      iVar3);
          }
          PopupMenu::add_item(uVar5,(CowData<char32_t> *)&local_58,0xffffffff,0);
          iVar3 = iVar3 + 1;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          pcVar7 = *(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 0x1a0);
        } while (pcVar7 != ResourceImporter::get_preset_count);
      }
    }
    pSVar6 = (String *)MenuButton::get_popup();
    local_58 = (char *)0x0;
    iVar3 = (int)(CowData<char32_t> *)&local_58;
    PopupMenu::add_separator(pSVar6,iVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    uVar5 = MenuButton::get_popup();
    (**(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 0x158))
              ((CowData<char32_t> *)&local_60);
    local_70 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_78 = 0;
    local_58 = "Set as Default for \'%s\'";
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    vformat<String>((CowData<char32_t> *)&local_58,(String *)&local_68,
                    (CowData<char32_t> *)&local_60);
    PopupMenu::add_item(uVar5,(CowData<char32_t> *)&local_58,100,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    pSVar6 = (String *)ProjectSettings::get_singleton();
    (**(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 0x150))
              ((CowData<char32_t> *)&local_60);
    operator+((char *)&local_58,(String *)"importer_defaults/");
    cVar2 = ProjectSettings::has_setting(pSVar6);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar2 != '\0') {
      uVar5 = MenuButton::get_popup();
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"");
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"Load Default");
      TTR((String *)&local_58,(String *)&local_68);
      PopupMenu::add_item(uVar5,(CowData<char32_t> *)&local_58,0x65,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      pSVar6 = (String *)MenuButton::get_popup();
      local_58 = (char *)0x0;
      PopupMenu::add_separator(pSVar6,iVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      uVar5 = MenuButton::get_popup();
      (**(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 0x158))
                ((CowData<char32_t> *)&local_60);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"Clear Default for \'%s\'");
      TTR((String *)&local_68,(String *)&local_78);
      vformat<String>((CowData<char32_t> *)&local_58,(String *)&local_68,
                      (CowData<char32_t> *)&local_60);
      PopupMenu::add_item(uVar5,(CowData<char32_t> *)&local_58,0x66,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
/* ImportDock::ImportDock() */

void __thiscall ImportDock::ImportDock(ImportDock *this)

{
  StringName *pSVar1;
  code *pcVar2;
  String *pSVar3;
  Vector2 *pVVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  BoxContainer *pBVar8;
  Label *pLVar9;
  OptionButton *this_00;
  MenuButton *this_01;
  long *plVar10;
  EditorInspector *this_02;
  CallableCustom *pCVar11;
  Button *pBVar12;
  undefined8 uVar13;
  ConfirmationDialog *this_03;
  bool bVar14;
  Object *pOVar15;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  float local_48;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (ImportDock)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00117ec0;
  uVar13 = _LC23;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined8 *)(this + 0xa60) = uVar13;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  local_58 = (Object *)0x10ad5a;
  local_60 = 0;
  local_50 = 6;
  singleton = this;
  String::parse_latin1((StrRange *)&local_60);
  Node::set_name((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_001179e8;
  postinitialize_handler((Object *)pBVar8);
  *(BoxContainer **)(this + 0xaa8) = pBVar8;
  Control::set_v_size_flags(pBVar8,3);
  Node::add_child(this,*(undefined8 *)(this + 0xaa8),0,0);
  CanvasItem::hide();
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_58 = (Object *)0x0;
  Label::Label(pLVar9,(String *)&local_58);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0xa10) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  pSVar1 = *(StringName **)(this + 0xa10);
  pOVar15 = *(Object **)(EditorNode::singleton + 0x838);
  if (pOVar15 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar6 = RefCounted::reference();
  if (cVar6 == '\0') {
    pOVar15 = (Object *)0x0;
  }
  pcVar2 = *(code **)(*(long *)pOVar15 + 0x1d0);
  if ((ImportDock()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar7 = __cxa_guard_acquire(&ImportDock()::{lambda()#1}::operator()()::sname), iVar7 != 0)) {
    _scs_create((char *)&ImportDock()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&ImportDock()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&ImportDock()::{lambda()#1}::operator()()::sname);
  }
  (*pcVar2)((CowData<char32_t> *)&local_58,pOVar15,CoreStringNames::singleton + 0xb8,
            &ImportDock()::{lambda()#1}::operator()()::sname);
  Control::add_theme_style_override(pSVar1,(Ref *)(CoreStringNames::singleton + 0xb8));
  if (((local_58 == (Object *)0x0) ||
      (cVar6 = RefCounted::unreference(), pOVar5 = local_58, cVar6 == '\0')) ||
     (cVar6 = predelete_handler(local_58), cVar6 == '\0')) {
    cVar6 = RefCounted::unreference();
  }
  else {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
    cVar6 = RefCounted::unreference();
  }
  if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar15), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
    Memory::free_static(pOVar15,false);
  }
  Label::set_clip_text(SUB81(*(undefined8 *)(this + 0xa10),0));
  Node::add_child(*(undefined8 *)(this + 0xaa8),*(undefined8 *)(this + 0xa10),0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00117670;
  postinitialize_handler((Object *)pBVar8);
  local_58 = (Object *)&_LC22;
  local_60 = 0;
  pSVar3 = *(String **)(this + 0xaa8);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_68 = 0;
  local_58 = (Object *)0x10ad61;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  VBoxContainer::add_margin_child(pSVar3,(Control *)&local_58,SUB81(pBVar8,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_00 = (OptionButton *)operator_new(0xd00,"");
  local_58 = (Object *)0x0;
  OptionButton::OptionButton(this_00,(String *)&local_58);
  postinitialize_handler((Object *)this_00);
  *(OptionButton **)(this + 0xa18) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa18),0));
  OptionButton::set_fit_to_longest_item(SUB81(*(undefined8 *)(this + 0xa18),0));
  Button::set_text_overrun_behavior(*(undefined8 *)(this + 0xa18),3);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa18),3);
  plVar10 = *(long **)(this + 0xa18);
  pcVar2 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ImportDock,int>
            ((ImportDock *)&local_58,(char *)this,
             (_func_void_int *)"&ImportDock::_importer_selected");
  (*pcVar2)(plVar10,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa18),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa18),3);
  this_01 = (MenuButton *)operator_new(0xc68,"");
  local_58 = (Object *)0x0;
  MenuButton::MenuButton(this_01,(String *)&local_58);
  postinitialize_handler((Object *)this_01);
  *(MenuButton **)(this + 0xa20) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = (Object *)&_LC22;
  local_60 = 0;
  pSVar3 = *(String **)(this + 0xa20);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x0;
  String::parse_latin1((String *)&local_58,"Preset");
  TTR((String *)&local_68,(String *)&local_58);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa20),0));
  plVar10 = (long *)MenuButton::get_popup();
  pcVar2 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ImportDock,int>
            ((ImportDock *)&local_58,(char *)this,(_func_void_int *)"&ImportDock::_preset_selected")
  ;
  StringName::StringName((StringName *)&local_60,"index_pressed",false);
  (*pcVar2)(plVar10,(StrRange *)&local_60,(CowData<char32_t> *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa20),0,0);
  this_02 = (EditorInspector *)operator_new(0xcb0,"");
  EditorInspector::EditorInspector(this_02);
  postinitialize_handler((Object *)this_02);
  *(EditorInspector **)(this + 0xa28) = this_02;
  Node::add_child(*(undefined8 *)(this + 0xaa8),this_02,0,0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa28),3);
  plVar10 = *(long **)(this + 0xa28);
  pcVar2 = *(code **)(*plVar10 + 0x108);
  pCVar11 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar11);
  *(undefined **)(pCVar11 + 0x20) = &_LC22;
  *(ImportDock **)(pCVar11 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar11 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar11 = &PTR_hash_001182c8;
  *(undefined8 *)(pCVar11 + 0x40) = 0;
  uVar13 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar11 + 0x10) = 0;
  *(undefined8 *)(pCVar11 + 0x30) = uVar13;
  *(code **)(pCVar11 + 0x38) = _property_edited;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar11,(int)pCVar11 + 0x28);
  *(char **)(pCVar11 + 0x20) = "ImportDock::_property_edited";
  Callable::Callable((Callable *)&local_58,pCVar11);
  StringName::StringName((StringName *)&local_60,"property_edited",false);
  (*pcVar2)(plVar10,(StrRange *)&local_60,(CowData<char32_t> *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  plVar10 = *(long **)(this + 0xa28);
  pcVar2 = *(code **)(*plVar10 + 0x108);
  pCVar11 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar11);
  *(undefined **)(pCVar11 + 0x20) = &_LC22;
  *(ImportDock **)(pCVar11 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar11 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar11 = &PTR_hash_00118358;
  *(undefined8 *)(pCVar11 + 0x40) = 0;
  uVar13 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar11 + 0x10) = 0;
  *(undefined8 *)(pCVar11 + 0x30) = uVar13;
  *(code **)(pCVar11 + 0x38) = _property_toggled;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar11,(int)pCVar11 + 0x28);
  *(char **)(pCVar11 + 0x20) = "ImportDock::_property_toggled";
  Callable::Callable((Callable *)&local_58,pCVar11);
  StringName::StringName((StringName *)&local_60,"property_toggled",false);
  (*pcVar2)(plVar10,(StrRange *)&local_60,(CowData<char32_t> *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  EditorInspector::set_use_doc_hints(SUB81(*(undefined8 *)(this + 0xa28),0));
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00117670;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(*(undefined8 *)(this + 0xaa8),pBVar8,0,0);
  pBVar12 = (Button *)operator_new(0xc10,"");
  local_58 = (Object *)0x0;
  Button::Button(pBVar12,(String *)&local_58);
  postinitialize_handler((Object *)pBVar12);
  *(Button **)(this + 0xa80) = pBVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = (Object *)&_LC22;
  local_60 = 0;
  pSVar3 = *(String **)(this + 0xa80);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x0;
  String::parse_latin1((String *)&local_58,"Reimport");
  TTR((String *)&local_68,(String *)&local_58);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa80),0));
  plVar10 = *(long **)(this + 0xa80);
  pcVar2 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ImportDock>
            ((ImportDock *)&local_58,(char *)this,(_func_void *)"&ImportDock::_reimport_pressed");
  (*pcVar2)(plVar10,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  bVar14 = SUB81(pBVar8,0);
  uVar13 = BoxContainer::add_spacer(bVar14);
  *(undefined8 *)(this + 0xa90) = uVar13;
  pBVar12 = (Button *)operator_new(0xc10,"");
  local_58 = (Object *)0x0;
  Button::Button(pBVar12,(String *)&local_58);
  postinitialize_handler((Object *)pBVar12);
  *(Button **)(this + 0xa98) = pBVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  pSVar3 = *(String **)(this + 0xa98);
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"");
  local_58 = (Object *)0x10adde;
  local_68 = 0;
  local_50 = 0xb;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa98),0,0);
  BoxContainer::add_spacer(bVar14);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa80),0,0);
  BoxContainer::add_spacer(bVar14);
  CanvasItem::hide();
  CanvasItem::hide();
  plVar10 = *(long **)(this + 0xa98);
  pcVar2 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ImportDock>
            ((ImportDock *)&local_58,(char *)this,(_func_void *)"&ImportDock::_advanced_options");
  (*pcVar2)(plVar10,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this_03 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_03);
  postinitialize_handler((Object *)this_03);
  *(ConfirmationDialog **)(this + 0xa68) = this_03;
  Node::add_child(*(undefined8 *)(this + 0xaa8),this_03,0,0);
  plVar10 = *(long **)(this + 0xa68);
  pcVar2 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<ImportDock>
            ((ImportDock *)&local_58,(char *)this,(_func_void *)"&ImportDock::_reimport_and_cleanup"
            );
  (*pcVar2)(plVar10,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_001179e8;
  postinitialize_handler((Object *)pBVar8);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"");
  local_58 = (Object *)0x10b158;
  local_68 = 0;
  local_50 = 0x6b;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::Label(pLVar9,(String *)&local_58);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0xa70) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa70),0,0);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_58 = (Object *)0x0;
  String::parse_latin1((String *)&local_58,"");
  local_60 = 0;
  String::parse_latin1
            ((String *)&local_60,
             "WARNING: Assets exist that use this resource. They may stop loading properly after changing type."
            );
  TTR((String *)&local_68,(String *)&local_60);
  Label::Label(pLVar9,(String *)&local_68);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0xa78) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa78),0,0);
  Node::add_child(*(undefined8 *)(this + 0xa68),pBVar8,0,0);
  pOVar15 = (Object *)operator_new(0x200,"");
  Object::Object(pOVar15);
  *(undefined ***)pOVar15 = &PTR__initialize_classv_00117d60;
  uVar13 = _LC23;
  *(undefined8 *)(pOVar15 + 0x1e0) = 0;
  *(undefined8 *)(pOVar15 + 0x1a0) = uVar13;
  *(undefined8 *)(pOVar15 + 0x1e8) = uVar13;
  *(undefined2 *)(pOVar15 + 0x1f0) = 0;
  *(undefined8 *)(pOVar15 + 0x1f8) = 0;
  *(undefined1 (*) [16])(pOVar15 + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pOVar15 + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pOVar15 + 0x1a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pOVar15 + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pOVar15 + 0x1d0) = (undefined1  [16])0x0;
  postinitialize_handler(pOVar15);
  *(Object **)(this + 0xaa0) = pOVar15;
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_58 = (Object *)0x0;
  Label::Label(pLVar9,(String *)&local_58);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0xab0) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  pSVar3 = *(String **)(this + 0xab0);
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"");
  local_58 = (Object *)0x10b230;
  local_68 = 0;
  local_50 = 0x57;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xab0),2);
  pVVar4 = *(Vector2 **)(this + 0xab0);
  local_48 = (float)EditorScale::get_scale();
  local_48 = local_48 * __LC70;
  local_44 = 0;
  Control::set_custom_minimum_size(pVVar4);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xab0),3);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xab0),1);
  Label::set_vertical_alignment(*(undefined8 *)(this + 0xab0),1);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,*(undefined8 *)(this + 0xab0),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImportDock::clear() */

void __thiscall ImportDock::clear(ImportDock *this)

{
  uint uVar1;
  String *pSVar2;
  void *pvVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  pSVar2 = *(String **)(this + 0xa10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = &_LC22;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa80),0));
  OptionButton::clear();
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa18),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa20),0));
  lVar6 = *(long *)(this + 0xaa0);
  lVar8 = lVar6;
  if ((*(long *)(lVar6 + 0x180) != 0) && (*(int *)(lVar6 + 0x1a4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar6 + 0x1a0) * 4);
    if (uVar1 != 0) {
      lVar8 = 0;
      do {
        piVar7 = (int *)(*(long *)(lVar6 + 0x188) + lVar8);
        if (*piVar7 != 0) {
          *piVar7 = 0;
          pvVar3 = *(void **)(*(long *)(lVar6 + 0x180) + lVar8 * 2);
          if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x18)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(lVar6 + 0x180) + lVar8 * 2) = 0;
        }
        lVar8 = lVar8 + 4;
      } while (lVar8 != (ulong)uVar1 << 2);
      lVar8 = *(long *)(this + 0xaa0);
    }
    *(undefined4 *)(lVar6 + 0x1a4) = 0;
    *(undefined1 (*) [16])(lVar6 + 400) = (undefined1  [16])0x0;
  }
  plVar9 = *(long **)(lVar8 + 0x1a8);
  if (plVar9 != (long *)0x0) {
    do {
      pvVar3 = (void *)*plVar9;
      if (pvVar3 == (void *)0x0) goto LAB_0010255f;
      if (*(long **)((long)pvVar3 + 0x40) == plVar9) {
        lVar6 = *(long *)((long)pvVar3 + 0x30);
        lVar4 = *(long *)((long)pvVar3 + 0x38);
        *plVar9 = lVar6;
        if (pvVar3 == (void *)plVar9[1]) {
          plVar9[1] = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x30) = lVar6;
          lVar6 = *(long *)((long)pvVar3 + 0x30);
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x38) = lVar4;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 8));
        Memory::free_static(pvVar3,false);
        *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar9 = *(long **)(lVar8 + 0x1a8);
    } while ((int)plVar9[2] != 0);
    Memory::free_static(plVar9,false);
    *(undefined8 *)(lVar8 + 0x1a8) = 0;
  }
LAB_0010255f:
  Object::notify_property_list_changed();
  bVar5 = (bool)MenuButton::get_popup();
  PopupMenu::clear(bVar5);
  CanvasItem::hide();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  CanvasItem::show();
  return;
}



/* ImportDock::~ImportDock() */

void __thiscall ImportDock::~ImportDock(ImportDock *this)

{
  uint uVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  bool bVar8;
  
  *(undefined ***)this = &PTR__initialize_classv_00117ec0;
  pOVar2 = *(Object **)(this + 0xaa0);
  singleton = 0;
  cVar4 = predelete_handler(pOVar2);
  if (cVar4 != '\0') {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)(this + 0xa88));
  pvVar6 = *(void **)(this + 0xa40);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xa64) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa60) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa64) = 0;
        *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa48) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0xa48) + lVar5) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar6 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0xa40);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa64) = 0;
        *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00102762;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xa48),false);
  }
LAB_00102762:
  plVar7 = *(long **)(this + 0xa30);
  if (plVar7 != (long *)0x0) {
    do {
      pvVar6 = (void *)*plVar7;
      if (pvVar6 == (void *)0x0) {
        if ((int)plVar7[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010280f;
        }
        break;
      }
      if (plVar7 == *(long **)((long)pvVar6 + 0x40)) {
        lVar5 = *(long *)((long)pvVar6 + 0x30);
        lVar3 = *(long *)((long)pvVar6 + 0x38);
        *plVar7 = lVar5;
        if (pvVar6 == (void *)plVar7[1]) {
          plVar7[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x30) = lVar5;
          lVar5 = *(long *)((long)pvVar6 + 0x30);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x38) = lVar3;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 8));
        Memory::free_static(pvVar6,false);
        *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar7 = *(long **)(this + 0xa30);
    } while ((int)plVar7[2] != 0);
    Memory::free_static(plVar7,false);
  }
LAB_0010280f:
  bVar8 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar8) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102857;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00102857:
  Control::~Control((Control *)this);
  return;
}



/* ImportDock::~ImportDock() */

void __thiscall ImportDock::~ImportDock(ImportDock *this)

{
  ~ImportDock(this);
  operator_delete(this,0xab8);
  return;
}



/* ImportDock::_update_options(String const&, Ref<ConfigFile> const&) */

void __thiscall ImportDock::_update_options(ImportDock *this,String *param_1,Ref *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  bool bVar12;
  uint uVar13;
  long *plVar14;
  int *piVar15;
  String *pSVar16;
  Variant *pVVar17;
  Variant *this_00;
  int iVar18;
  long lVar19;
  PropertyInfo *pPVar20;
  uint uVar21;
  void *pvVar22;
  ulong uVar23;
  uint uVar24;
  long *plVar25;
  long lVar26;
  String *pSVar27;
  long lVar28;
  long in_FS_OFFSET;
  CowData<char32_t> *local_1a0;
  List<ResourceImporter::ImportOption,DefaultAllocator> *local_160;
  long *local_158;
  undefined8 local_150;
  long *local_148;
  long local_140;
  char *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  int local_d8 [8];
  int local_b8 [8];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  lVar19 = *(long *)(this + 0xaa0);
  plVar25 = *(long **)(lVar19 + 0x1b0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar25 == (long *)0x0) {
    local_158 = (long *)0x0;
  }
  else {
    pSVar27 = *(String **)(this + 0xa28);
    if (plVar25[1] == 0) {
      plVar14 = (long *)plVar25[0x23];
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)(**(code **)(*plVar25 + 0x40))();
      }
    }
    else {
      plVar14 = (long *)(plVar25[1] + 0x20);
    }
    lVar19 = *plVar14;
    if (lVar19 == 0) {
      local_128 = 0;
    }
    else {
      local_128 = 0;
      if (*(char **)(lVar19 + 8) == (char *)0x0) {
        if (*(long *)(lVar19 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar19 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_128,*(char **)(lVar19 + 8));
      }
    }
    local_1a0 = (CowData<char32_t> *)&local_128;
    EditorInspector::set_object_class(pSVar27);
    CowData<char32_t>::_unref(local_1a0);
    local_158 = (long *)0x0;
    lVar19 = *(long *)(this + 0xaa0);
    if (*(long **)(lVar19 + 0x1b0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar19 + 0x1b0) + 0x1b0))();
      lVar19 = *(long *)(this + 0xaa0);
    }
  }
  local_160 = (List<ResourceImporter::ImportOption,DefaultAllocator> *)&local_158;
  plVar25 = *(long **)(lVar19 + 0x1a8);
  if (plVar25 != (long *)0x0) {
    do {
      pPVar20 = (PropertyInfo *)*plVar25;
      if (pPVar20 == (PropertyInfo *)0x0) {
        lVar19 = *(long *)(this + 0xaa0);
        goto LAB_00102af2;
      }
      if (*(long **)(pPVar20 + 0x40) == plVar25) {
        lVar28 = *(long *)(pPVar20 + 0x30);
        lVar26 = *(long *)(pPVar20 + 0x38);
        *plVar25 = lVar28;
        if (pPVar20 == (PropertyInfo *)plVar25[1]) {
          plVar25[1] = lVar26;
        }
        if (lVar26 != 0) {
          *(long *)(lVar26 + 0x30) = lVar28;
          lVar28 = *(long *)(pPVar20 + 0x30);
        }
        if (lVar28 != 0) {
          *(long *)(lVar28 + 0x38) = lVar26;
        }
        PropertyInfo::~PropertyInfo(pPVar20);
        Memory::free_static(pPVar20,false);
        *(int *)(plVar25 + 2) = (int)plVar25[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar25 = *(long **)(lVar19 + 0x1a8);
    } while ((int)plVar25[2] != 0);
    Memory::free_static(plVar25,false);
    *(undefined8 *)(lVar19 + 0x1a8) = 0;
    lVar19 = *(long *)(this + 0xaa0);
  }
LAB_00102af2:
  lVar28 = lVar19;
  if ((*(long *)(lVar19 + 0x180) != 0) && (*(int *)(lVar19 + 0x1a4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar19 + 0x1a0) * 4);
    if (uVar1 != 0) {
      lVar28 = 0;
      do {
        piVar15 = (int *)(*(long *)(lVar19 + 0x188) + lVar28);
        if (*piVar15 != 0) {
          *piVar15 = 0;
          pvVar22 = *(void **)(*(long *)(lVar19 + 0x180) + lVar28 * 2);
          if (Variant::needs_deinit[*(int *)((long)pvVar22 + 0x18)] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar22 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar22,false);
          *(undefined8 *)(*(long *)(lVar19 + 0x180) + lVar28 * 2) = 0;
        }
        lVar28 = lVar28 + 4;
      } while ((ulong)uVar1 << 2 != lVar28);
      lVar28 = *(long *)(this + 0xaa0);
    }
    *(undefined4 *)(lVar19 + 0x1a4) = 0;
    *(undefined1 (*) [16])(lVar19 + 400) = (undefined1  [16])0x0;
  }
  if (*(long *)(lVar28 + 0x1c0) == 0) {
    bVar12 = false;
  }
  else {
    bVar12 = 1 < *(long *)(*(long *)(lVar28 + 0x1c0) + -8);
  }
  lVar19 = *(long *)(lVar28 + 0x1c8);
  *(bool *)(lVar28 + 0x1f0) = bVar12;
  lVar26 = lVar28;
  if ((lVar19 != 0) && (*(int *)(lVar28 + 0x1ec) != 0)) {
    if ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar28 + 0x1e8) * 4) == 0) ||
       (memset(*(void **)(lVar28 + 0x1e0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar28 + 0x1e8) * 4) * 4),
       *(int *)(lVar28 + 0x1ec) != 0)) {
      lVar26 = 0;
      while( true ) {
        if ((StringName::configured != '\0') && (*(long *)(lVar19 + lVar26 * 8) != 0)) {
          StringName::unref();
        }
        lVar26 = lVar26 + 1;
        if (*(uint *)(lVar28 + 0x1ec) <= (uint)lVar26) break;
        lVar19 = *(long *)(lVar28 + 0x1c8);
      }
      lVar26 = *(long *)(this + 0xaa0);
    }
    *(undefined4 *)(lVar28 + 0x1ec) = 0;
  }
  if (*(long *)(lVar26 + 0x1f8) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar26 + 0x1f8),(CowData *)param_1);
  }
  local_100 = 2;
  local_120 = (undefined1  [16])0x0;
  pSVar27 = *(String **)param_2;
  local_110 = (undefined1  [16])0x0;
  if (pSVar27 != (String *)0x0) {
    local_138 = (char *)0x0;
    String::parse_latin1((String *)&local_138,"params");
    cVar11 = ConfigFile::has_section(pSVar27);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    if (cVar11 != '\0') {
      pSVar27 = *(String **)param_2;
      local_148 = (long *)0x0;
      local_138 = (char *)0x0;
      String::parse_latin1((String *)&local_138,"params");
      ConfigFile::get_section_keys(pSVar27,(List *)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      if ((local_148 != (long *)0x0) && (pSVar27 = (String *)*local_148, pSVar27 != (String *)0x0))
      {
        do {
          local_70 = (undefined1  [16])0x0;
          local_78 = 0;
          pSVar16 = *(String **)param_2;
          local_138 = "params";
          local_140 = 0;
          local_130 = 6;
          String::parse_latin1((StrRange *)&local_140);
          ConfigFile::get_value((String *)local_58,pSVar16,(Variant *)&local_140);
          StringName::StringName((StringName *)&local_138,pSVar27,false);
          pSVar16 = (String *)
                    HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                    ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)&local_128,(StringName *)&local_138);
          if (pSVar16 != (String *)local_58) {
            if (Variant::needs_deinit[*(int *)pSVar16] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pSVar16 = 0;
            *(int *)pSVar16 = local_58[0];
            *(undefined8 *)(pSVar16 + 8) = local_50;
            *(undefined8 *)(pSVar16 + 0x10) = uStack_48;
            local_58[0] = 0;
          }
          if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          pSVar27 = *(String **)(pSVar27 + 8);
        } while (pSVar27 != (String *)0x0);
      }
      if ((*(long **)(*(long *)(this + 0xaa0) + 0x1b0) != (long *)0x0) &&
         (pcVar2 = *(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 0x1c0),
         pcVar2 != ResourceImporter::handle_compatibility_options)) {
        (*pcVar2)();
      }
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_148);
    }
  }
  if ((local_158 != (long *)0x0) &&
     (pPVar20 = (PropertyInfo *)*local_158, pPVar20 != (PropertyInfo *)0x0)) {
    do {
      pSVar27 = (String *)(pPVar20 + 8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)(*(long *)(this + 0xaa0) + 0x1a8),pPVar20);
      if (*(long *)param_2 == 0) {
LAB_00103450:
        lVar19 = *(long *)(this + 0xaa0);
        StringName::StringName((StringName *)&local_138,pSVar27,false);
        pVVar17 = (Variant *)
                  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                  ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                *)(lVar19 + 0x178),(StringName *)&local_138);
        Variant::operator=(pVVar17,(Variant *)(pPVar20 + 0x30));
        if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::StringName((StringName *)&local_138,pSVar27,false);
        if ((local_120._0_8_ == 0) || (local_100._4_4_ == 0)) {
joined_r0x00103437:
          if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
            StringName::unref();
          }
          goto LAB_00103450;
        }
        uVar1 = *(uint *)(hash_table_size_primes + (local_100 & 0xffffffff) * 4);
        lVar19 = *(long *)(hash_table_size_primes_inv + (local_100 & 0xffffffff) * 8);
        if (local_138 == (char *)0x0) {
          uVar13 = StringName::get_empty_hash();
        }
        else {
          uVar13 = *(uint *)(local_138 + 0x20);
        }
        uVar23 = CONCAT44(0,uVar1);
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)uVar13 * lVar19;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar23;
        lVar28 = SUB168(auVar3 * auVar7,8);
        uVar21 = *(uint *)(local_120._8_8_ + lVar28 * 4);
        iVar18 = SUB164(auVar3 * auVar7,8);
        if (uVar21 == 0) goto joined_r0x00103437;
        uVar24 = 0;
        do {
          if ((uVar21 == uVar13) &&
             (*(char **)(*(long *)(local_120._0_8_ + lVar28 * 8) + 0x10) == local_138)) {
            bVar12 = true;
            goto LAB_001030b0;
          }
          uVar24 = uVar24 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar18 + 1) * lVar19;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar23;
          lVar28 = SUB168(auVar4 * auVar8,8);
          uVar21 = *(uint *)(local_120._8_8_ + lVar28 * 4);
          iVar18 = SUB164(auVar4 * auVar8,8);
        } while ((uVar21 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar21 * lVar19, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar23, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar1 + iVar18) - SUB164(auVar5 * auVar9,8)) * lVar19,
                auVar10._8_8_ = 0, auVar10._0_8_ = uVar23, uVar24 <= SUB164(auVar6 * auVar10,8)));
        bVar12 = false;
LAB_001030b0:
        if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
          StringName::unref();
        }
        if (!bVar12) goto LAB_00103450;
        StringName::StringName((StringName *)&local_138,pSVar27,false);
        pVVar17 = (Variant *)
                  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                  ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                *)&local_128,(StringName *)&local_138);
        lVar19 = *(long *)(this + 0xaa0);
        StringName::StringName((StringName *)&local_140,pSVar27,false);
        this_00 = (Variant *)
                  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                  ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                *)(lVar19 + 0x178),(StringName *)&local_140);
        Variant::operator=(this_00,pVVar17);
        if ((StringName::configured != '\0') &&
           (((local_140 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
            (local_138 != (char *)0x0)))) {
          StringName::unref();
        }
      }
      pPVar20 = *(PropertyInfo **)(pPVar20 + 0x48);
    } while (pPVar20 != (PropertyInfo *)0x0);
  }
  Object::notify_property_list_changed();
  _update_preset_menu(this);
  if (*(long *)param_2 == 0) {
LAB_001032e6:
    CanvasItem::hide();
    CanvasItem::hide();
  }
  else {
    Variant::Variant((Variant *)local_b8,"skip");
    local_f0 = (undefined1  [16])0x0;
    pSVar27 = *(String **)param_2;
    local_f8 = 0;
    local_148 = (long *)0x0;
    String::parse_latin1((String *)&local_148,"importer");
    local_150 = 0;
    String::parse_latin1((String *)&local_150,"remap");
    ConfigFile::get_value((String *)local_d8,pSVar27,(Variant *)&local_150);
    cVar11 = Variant::operator!=((Variant *)local_d8,(Variant *)local_b8);
    if (cVar11 != '\0') {
      Variant::Variant((Variant *)local_58,"keep");
      local_98 = 0;
      pSVar27 = *(String **)param_2;
      local_90 = (undefined1  [16])0x0;
      local_138 = (char *)0x0;
      String::parse_latin1((String *)&local_138,"importer");
      local_140 = 0;
      String::parse_latin1((String *)&local_140,"remap");
      ConfigFile::get_value((String *)&local_78,pSVar27,(Variant *)&local_140);
      cVar11 = Variant::operator!=((Variant *)&local_78,(Variant *)local_58);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      if (Variant::needs_deinit[(int)local_98] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (Variant::needs_deinit[local_d8[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
    if (Variant::needs_deinit[(int)local_f8] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_b8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar11 == '\0') goto LAB_001032e6;
    plVar25 = *(long **)(*(long *)(this + 0xaa0) + 0x1b0);
    if (((plVar25 == (long *)0x0) ||
        (lVar19 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0), lVar19 == 0)) ||
       ((*(long *)(lVar19 + -8) != 1 ||
        ((pcVar2 = *(code **)(*plVar25 + 400), pcVar2 == ResourceImporter::has_advanced_options ||
         (cVar11 = (*pcVar2)(), cVar11 == '\0')))))) goto LAB_001032e6;
    CanvasItem::show();
    CanvasItem::show();
  }
  if ((void *)local_120._0_8_ != (void *)0x0) {
    pvVar22 = (void *)local_120._0_8_;
    if (local_100._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_100 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_100 = local_100 & 0xffffffff;
        local_110 = (undefined1  [16])0x0;
      }
      else {
        lVar19 = 0;
        do {
          if (*(int *)(local_120._8_8_ + lVar19) != 0) {
            pvVar22 = *(void **)((long)pvVar22 + lVar19 * 2);
            *(int *)(local_120._8_8_ + lVar19) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar22 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar22 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar22,false);
            *(undefined8 *)(local_120._0_8_ + lVar19 * 2) = 0;
            pvVar22 = (void *)local_120._0_8_;
          }
          lVar19 = lVar19 + 4;
        } while ((ulong)uVar1 << 2 != lVar19);
        local_100 = local_100 & 0xffffffff;
        local_110 = (undefined1  [16])0x0;
        if (pvVar22 == (void *)0x0) goto LAB_001033db;
      }
    }
    Memory::free_static(pvVar22,false);
    Memory::free_static((void *)local_120._8_8_,false);
  }
LAB_001033db:
  List<ResourceImporter::ImportOption,DefaultAllocator>::~List(local_160);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ImportDock::_importer_selected(int) */

void ImportDock::_importer_selected(int param_1)

{
  long lVar1;
  CowData *pCVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined4 in_register_0000003c;
  ImportDock *this;
  Object *pOVar7;
  long in_FS_OFFSET;
  Variant local_88 [8];
  Object *local_80;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  Object *local_60;
  int local_58;
  long local_40;
  
  this = (ImportDock *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OptionButton::get_selected_metadata();
  Variant::operator_cast_to_String(local_88);
  if (Variant::needs_deinit[local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar4 = String::operator==((String *)local_88,"keep");
  if (cVar4 == '\0') {
    cVar4 = String::operator==((String *)local_88,"skip");
    if (cVar4 != '\0') {
      Ref<ResourceImporter>::unref((Ref<ResourceImporter> *)(*(long *)(this + 0xaa0) + 0x1b0));
      lVar6 = *(long *)(this + 0xaa0);
      *(undefined1 *)(lVar6 + 0x1f1) = 1;
      goto LAB_00103884;
    }
    ResourceFormatImporter::get_importer_by_name((String *)&local_80);
    if (local_80 == (Object *)0x0) {
      _err_print_error("_importer_selected","editor/import_dock.cpp",0x19f,
                       "Condition \"importer.is_null()\" is true.",0,0);
      Ref<ResourceImporter>::unref((Ref<ResourceImporter> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      goto LAB_001038a9;
    }
    lVar6 = *(long *)(this + 0xaa0);
    pOVar7 = *(Object **)(lVar6 + 0x1b0);
    if (local_80 != pOVar7) {
      *(Object **)(lVar6 + 0x1b0) = local_80;
      local_60 = pOVar7;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(lVar6 + 0x1b0) = 0;
      }
      Ref<ResourceImporter>::unref((Ref<ResourceImporter> *)&local_60);
      lVar6 = *(long *)(this + 0xaa0);
    }
    pCVar2 = *(CowData **)(lVar6 + 0x1c0);
    *(undefined1 *)(lVar6 + 0x1f1) = 0;
    local_78 = (Object *)0x0;
    if ((pCVar2 == (CowData *)0x0) || (lVar1 = *(long *)(pCVar2 + -8), lVar1 == 0)) {
      _update_options(this,(String *)(lVar6 + 0x1f8),(Ref *)&local_78);
    }
    else {
      if (lVar1 < 1) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,0,lVar1,"p_index","size()","",false,true)
        ;
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      local_70 = 0;
      if (*(long *)pCVar2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,pCVar2);
      }
      Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_78);
      pOVar7 = local_78;
      local_68 = 0;
      String::parse_latin1((String *)&local_68,".import");
      String::operator+((String *)&local_60,(String *)&local_70);
      iVar5 = ConfigFile::load((String *)pOVar7);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (iVar5 == 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        _update_options(this,(String *)(*(long *)(this + 0xaa0) + 0x1f8),(Ref *)&local_78);
      }
      else {
        Ref<ConfigFile>::unref((Ref<ConfigFile> *)&local_78);
        pOVar7 = local_78;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        _update_options(this,(String *)(*(long *)(this + 0xaa0) + 0x1f8),(Ref *)&local_78);
        if (pOVar7 == (Object *)0x0) goto LAB_00103ab5;
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar7), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
LAB_00103ab5:
    if (((local_80 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_80), cVar4 != '\0')) {
      (**(code **)(*(long *)local_80 + 0x140))(local_80);
      Memory::free_static(local_80,false);
    }
  }
  else {
    lVar1 = *(long *)(this + 0xaa0);
    lVar6 = lVar1;
    if (*(long *)(lVar1 + 0x1b0) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar7 = *(Object **)(lVar1 + 0x1b0);
        cVar4 = predelete_handler(pOVar7);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
      lVar6 = *(long *)(this + 0xaa0);
    }
    *(undefined8 *)(lVar1 + 0x1b0) = 0;
    *(undefined1 *)(lVar6 + 0x1f1) = 0;
LAB_00103884:
    local_60 = (Object *)0x0;
    _update_options(this,(String *)(lVar6 + 0x1f8),(Ref *)&local_60);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
LAB_001038a9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ImportDock::_preset_selected(int) */

void __thiscall ImportDock::_preset_selected(ImportDock *this,int param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  String *pSVar4;
  Variant *pVVar5;
  Variant *pVVar6;
  StringName *pSVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  String local_88 [8];
  Variant local_80 [8];
  long *local_78;
  long local_70;
  long local_68 [2];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = MenuButton::get_popup();
  iVar3 = PopupMenu::get_item_id(iVar3);
  (**(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 0x150))((CowData<char32_t> *)local_68)
  ;
  operator+((char *)local_88,(String *)"importer_defaults/");
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  if (iVar3 == 0x65) {
    pSVar4 = (String *)ProjectSettings::get_singleton();
    cVar2 = ProjectSettings::has_setting(pSVar4);
    if (cVar2 == '\0') {
      _err_print_error("_preset_selected","editor/import_dock.cpp",0x1c8,
                       "Condition \"!ProjectSettings::get_singleton()->has_setting(setting_name)\" is true."
                       ,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      goto LAB_00103e36;
    }
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)local_68,local_88,false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    Variant::operator_cast_to_Dictionary(local_80);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68[0] != 0)) {
      StringName::unref();
    }
    local_78 = (long *)0x0;
    Dictionary::get_key_list((List *)local_80);
    if (*(char *)(*(long *)(this + 0xaa0) + 0x1f0) != '\0') {
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear
                ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
                 (*(long *)(this + 0xaa0) + 0x1c8));
    }
    if ((local_78 != (long *)0x0) && (lVar9 = *local_78, lVar9 != 0)) {
      do {
        while( true ) {
          pVVar5 = (Variant *)Dictionary::operator[](local_80);
          lVar8 = *(long *)(this + 0xaa0);
          Variant::operator_cast_to_StringName((Variant *)local_68);
          pVVar6 = (Variant *)
                   HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                 *)(lVar8 + 0x178),(StringName *)local_68);
          Variant::operator=(pVVar6,pVVar5);
          if ((StringName::configured != '\0') && (local_68[0] != 0)) {
            StringName::unref();
          }
          if (*(char *)(*(long *)(this + 0xaa0) + 0x1f0) != '\0') break;
LAB_00104110:
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 == 0) goto LAB_001041e0;
        }
        Variant::operator_cast_to_StringName((Variant *)&local_70);
        HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                  ((StringName *)local_68);
        if ((StringName::configured == '\0') || (local_70 == 0)) goto LAB_00104110;
        StringName::unref();
        lVar9 = *(long *)(lVar9 + 0x18);
      } while (lVar9 != 0);
    }
LAB_001041e0:
    Object::notify_property_list_changed();
    List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_78);
    Dictionary::~Dictionary((Dictionary *)local_80);
  }
  else if (iVar3 == 0x66) {
    pSVar7 = (StringName *)ProjectSettings::get_singleton();
    local_50 = (undefined1  [16])0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    StringName::StringName((StringName *)local_68,local_88,false);
    Object::set(pSVar7,(Variant *)local_68,(bool *)local_58);
    if ((StringName::configured != '\0') && (local_68[0] != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    ProjectSettings::get_singleton();
    ProjectSettings::save();
    _update_preset_menu(this);
  }
  else if (iVar3 == 100) {
    Dictionary::Dictionary((Dictionary *)&local_78);
    pSVar4 = (String *)ProjectSettings::get_singleton();
    cVar2 = ProjectSettings::has_setting(pSVar4);
    if (cVar2 != '\0') {
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_70,local_88,false);
      ProjectSettings::get_setting_with_override((StringName *)local_58);
      Variant::operator_cast_to_Dictionary((Variant *)local_68);
      Dictionary::operator=((Dictionary *)&local_78,(Dictionary *)local_68);
      Dictionary::~Dictionary((Dictionary *)local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    lVar9 = *(long *)(this + 0xaa0);
    if ((*(long **)(lVar9 + 0x1a8) != (long *)0x0) &&
       (lVar8 = **(long **)(lVar9 + 0x1a8), lVar8 != 0)) {
      while( true ) {
        StringName::StringName((StringName *)local_68,(String *)(lVar8 + 8),false);
        pVVar5 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)(lVar9 + 0x178),(StringName *)local_68);
        Variant::Variant((Variant *)local_58,(String *)(lVar8 + 8));
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_78);
        Variant::operator=(pVVar6,pVVar5);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_68[0] != 0)) {
          StringName::unref();
        }
        lVar8 = *(long *)(lVar8 + 0x30);
        if (lVar8 == 0) break;
        lVar9 = *(long *)(this + 0xaa0);
      }
    }
    pSVar7 = (StringName *)ProjectSettings::get_singleton();
    Variant::Variant((Variant *)local_58,(Dictionary *)&local_78);
    StringName::StringName((StringName *)local_68,local_88,false);
    Object::set(pSVar7,(Variant *)local_68,(bool *)local_58);
    if ((StringName::configured != '\0') && (local_68[0] != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    ProjectSettings::get_singleton();
    ProjectSettings::save();
    _update_preset_menu(this);
    Dictionary::~Dictionary((Dictionary *)&local_78);
  }
  else {
    local_78 = (long *)0x0;
    plVar1 = *(long **)(*(long *)(this + 0xaa0) + 0x1b0);
    (**(code **)(*plVar1 + 0x1b0))
              (plVar1,*(long *)(this + 0xaa0) + 0x1f8,
               (List<ResourceImporter::ImportOption,DefaultAllocator> *)&local_78,param_1);
    lVar9 = *(long *)(this + 0xaa0);
    if (*(char *)(lVar9 + 0x1f0) != '\0') {
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear
                ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
                 (lVar9 + 0x1c8));
      lVar9 = *(long *)(this + 0xaa0);
    }
    if ((local_78 != (long *)0x0) && (lVar8 = *local_78, lVar8 != 0)) {
      do {
        while( true ) {
          StringName::StringName((StringName *)local_68,(String *)(lVar8 + 8),false);
          pVVar5 = (Variant *)
                   HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                 *)(lVar9 + 0x178),(StringName *)local_68);
          Variant::operator=(pVVar5,(Variant *)(lVar8 + 0x30));
          if ((StringName::configured != '\0') && (local_68[0] != 0)) {
            StringName::unref();
          }
          lVar9 = *(long *)(this + 0xaa0);
          if (*(char *)(lVar9 + 0x1f0) == '\0') break;
          StringName::StringName((StringName *)&local_70,(String *)(lVar8 + 8),false);
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    ((StringName *)local_68);
          if ((StringName::configured != '\0') && (local_70 != 0)) {
            StringName::unref();
          }
          lVar8 = *(long *)(lVar8 + 0x48);
          lVar9 = *(long *)(this + 0xaa0);
          if (lVar8 == 0) goto LAB_00104013;
        }
        lVar8 = *(long *)(lVar8 + 0x48);
      } while (lVar8 != 0);
    }
LAB_00104013:
    Object::notify_property_list_changed();
    List<ResourceImporter::ImportOption,DefaultAllocator>::~List
              ((List<ResourceImporter::ImportOption,DefaultAllocator> *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
LAB_00103e36:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ImportDock::_reimport() */

void __thiscall ImportDock::_reimport(ImportDock *this)

{
  String *pSVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  Vector *pVVar13;
  String *pSVar14;
  Object *pOVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  char cVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  long local_138;
  StrRange *local_128;
  Variant *local_110;
  String *local_e0;
  String local_d8 [8];
  Object *local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  ulong local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  int local_78 [8];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar19 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0);
  if (lVar19 != 0) {
    local_138 = 0;
    do {
      if (*(long *)(lVar19 + -8) <= local_138) break;
      local_e0 = (String *)0x0;
      Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_e0);
      pSVar14 = local_e0;
      local_b0 = 0;
      local_a8 = ".import";
      local_a0 = 7;
      String::parse_latin1((StrRange *)&local_b0);
      lVar19 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0);
      if (lVar19 == 0) {
LAB_00104f4d:
        lVar22 = 0;
LAB_00104f50:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,local_138,lVar22,"p_index","size()","",
                   false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      lVar22 = *(long *)(lVar19 + -8);
      if (lVar22 <= local_138) goto LAB_00104f50;
      String::operator+((String *)&local_a8,(String *)(lVar19 + local_138 * 8));
      iVar17 = ConfigFile::load(pSVar14);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (iVar17 == 0) {
        if (*(long **)(*(long *)(this + 0xaa0) + 0x1b0) == (long *)0x0) {
          ConfigFile::clear();
          if (*(char *)(*(long *)(this + 0xaa0) + 0x1f1) == '\0') {
            Variant::Variant((Variant *)&local_58,"keep");
            local_a8 = (char *)0x0;
            String::parse_latin1((String *)&local_a8,"importer");
            local_b0 = 0;
            String::parse_latin1((String *)&local_b0,"remap");
          }
          else {
            Variant::Variant((Variant *)&local_58,"skip");
            local_a8 = (char *)0x0;
            String::parse_latin1((String *)&local_a8,"importer");
            local_b0 = 0;
            String::parse_latin1((String *)&local_b0,"remap");
          }
          ConfigFile::set_value(pSVar14,(String *)&local_b0,(Variant *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          (**(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 0x150))(local_d8);
          if (*(char *)(*(long *)(this + 0xaa0) + 0x1f0) == '\0') {
LAB_001044fb:
            local_110 = (Variant *)&local_58;
            local_128 = (StrRange *)&local_b8;
            Variant::Variant(local_110,local_d8);
            local_b0 = 0;
            local_a8 = "importer";
            local_a0 = 8;
            String::parse_latin1((StrRange *)&local_b0);
            local_b8 = 0;
            local_a8 = "remap";
            local_a0 = 5;
            String::parse_latin1(local_128);
            ConfigFile::set_value(pSVar14,(String *)local_128,(Variant *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
            local_b0 = 0;
            local_a8 = "params";
            local_a0 = 6;
            String::parse_latin1((StrRange *)&local_b0);
            cVar16 = ConfigFile::has_section(pSVar14);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            if (cVar16 != '\0') {
              local_a8 = (char *)0x0;
              String::parse_latin1((String *)&local_a8,"params");
              ConfigFile::erase_section(pSVar14);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            }
            lVar19 = *(long *)(this + 0xaa0);
            if ((*(long **)(lVar19 + 0x1a8) != (long *)0x0) &&
               (lVar22 = **(long **)(lVar19 + 0x1a8), lVar22 != 0)) {
              while( true ) {
                StringName::StringName((StringName *)local_128,(String *)(lVar22 + 8),false);
                HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                              *)(lVar19 + 0x178),(StringName *)local_128);
                local_b0 = 0;
                local_a8 = "params";
                local_a0 = 6;
                String::parse_latin1((StrRange *)&local_b0);
                ConfigFile::set_value(pSVar14,(String *)&local_b0,(Variant *)(lVar22 + 8));
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                if ((StringName::configured != '\0') && (local_b8 != 0)) {
                  StringName::unref();
                }
                lVar22 = *(long *)(lVar22 + 0x30);
                if (lVar22 == 0) break;
                lVar19 = *(long *)(this + 0xaa0);
              }
            }
          }
          else {
            (**(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 0x150))
                      ((StrRange *)&local_b0);
            Variant::Variant((Variant *)&local_58,(String *)&local_b0);
            local_90 = (undefined1  [16])0x0;
            local_98 = 0;
            local_b8 = 0;
            local_a8 = "importer";
            local_a0 = 8;
            String::parse_latin1((StrRange *)&local_b8);
            local_a8 = "remap";
            local_c0 = 0;
            local_a0 = 5;
            String::parse_latin1((StrRange *)&local_c0);
            ConfigFile::get_value((String *)local_78,pSVar14,(Variant *)&local_c0);
            cVar16 = Variant::operator==((Variant *)local_78,(Variant *)&local_58);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_128 = (StrRange *)&local_b8;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
            if (Variant::needs_deinit[(int)local_98] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            if (cVar16 == '\0') goto LAB_001044fb;
            lVar19 = *(long *)(this + 0xaa0);
            if ((*(long **)(lVar19 + 0x1a8) != (long *)0x0) &&
               (lVar22 = **(long **)(lVar19 + 0x1a8), lVar22 != 0)) {
              do {
                pSVar1 = (String *)(lVar22 + 8);
                StringName::StringName((StringName *)&local_a8,pSVar1,false);
                if ((*(long *)(lVar19 + 0x1c8) == 0) || (*(int *)(lVar19 + 0x1ec) == 0)) {
                  if (StringName::configured == '\0') goto LAB_00104ed7;
LAB_00104f01:
                  if (local_a8 == (char *)0x0) goto LAB_00104ed7;
                  StringName::unref();
                  lVar22 = *(long *)(lVar22 + 0x30);
                }
                else {
                  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar19 + 0x1e8) * 4);
                  uVar25 = CONCAT44(0,uVar2);
                  lVar3 = *(long *)(hash_table_size_primes_inv +
                                   (ulong)*(uint *)(lVar19 + 0x1e8) * 8);
                  if (local_a8 == (char *)0x0) {
                    uVar18 = StringName::get_empty_hash();
                  }
                  else {
                    uVar18 = *(uint *)(local_a8 + 0x20);
                  }
                  if (uVar18 == 0) {
                    uVar18 = 1;
                  }
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = (ulong)uVar18 * lVar3;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = uVar25;
                  lVar20 = SUB168(auVar4 * auVar8,8);
                  uVar23 = *(uint *)(*(long *)(lVar19 + 0x1e0) + lVar20 * 4);
                  iVar17 = SUB164(auVar4 * auVar8,8);
                  if (uVar23 == 0) {
                    if (StringName::configured != '\0') goto LAB_00104f01;
                  }
                  else {
                    uVar24 = 0;
                    do {
                      if ((uVar18 == uVar23) &&
                         (cVar21 = cVar16,
                         *(char **)(*(long *)(lVar19 + 0x1c8) +
                                   (ulong)*(uint *)(*(long *)(lVar19 + 0x1d0) + lVar20 * 4) * 8) ==
                         local_a8)) goto LAB_00104e10;
                      uVar24 = uVar24 + 1;
                      auVar5._8_8_ = 0;
                      auVar5._0_8_ = (ulong)(iVar17 + 1) * lVar3;
                      auVar9._8_8_ = 0;
                      auVar9._0_8_ = uVar25;
                      lVar20 = SUB168(auVar5 * auVar9,8);
                      uVar23 = *(uint *)(*(long *)(lVar19 + 0x1e0) + lVar20 * 4);
                      iVar17 = SUB164(auVar5 * auVar9,8);
                    } while ((uVar23 != 0) &&
                            (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar23 * lVar3,
                            auVar10._8_8_ = 0, auVar10._0_8_ = uVar25, auVar7._8_8_ = 0,
                            auVar7._0_8_ = (ulong)((uVar2 + iVar17) - SUB164(auVar6 * auVar10,8)) *
                                           lVar3, auVar11._8_8_ = 0, auVar11._0_8_ = uVar25,
                            uVar24 <= SUB164(auVar7 * auVar11,8)));
                    cVar21 = '\0';
LAB_00104e10:
                    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
                      StringName::unref();
                    }
                    if (cVar21 != '\0') {
                      lVar19 = *(long *)(this + 0xaa0);
                      StringName::StringName((StringName *)local_128,pSVar1,false);
                      HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                      ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                    *)(lVar19 + 0x178),(StringName *)local_128);
                      local_b0 = 0;
                      local_a0 = 6;
                      local_a8 = "params";
                      String::parse_latin1((StrRange *)&local_b0);
                      ConfigFile::set_value(pSVar14,(String *)&local_b0,(Variant *)pSVar1);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                      if ((StringName::configured != '\0') && (local_b8 != 0)) {
                        StringName::unref();
                      }
                    }
                  }
LAB_00104ed7:
                  lVar22 = *(long *)(lVar22 + 0x30);
                }
                if (lVar22 == 0) break;
                lVar19 = *(long *)(this + 0xaa0);
              } while( true );
            }
          }
          local_110 = (Variant *)&local_58;
          local_128 = (StrRange *)&local_b8;
          ResourceFormatImporter::get_importer_by_name((String *)&local_d0);
          if (local_d0 == (Object *)0x0) {
            _err_print_error("_reimport","editor/import_dock.cpp",0x29c,
                             "Condition \"importer.is_null()\" is true. Continuing.");
LAB_001051ce:
            Ref<ResourceImporter>::unref((Ref<ResourceImporter> *)&local_d0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
            goto LAB_00104fb8;
          }
          if (*(code **)(*(long *)local_d0 + 0x1c8) == ResourceImporter::get_option_group_file) {
            local_c8 = 0;
LAB_00104730:
            local_50 = (undefined1  [16])0x0;
            local_a8 = "group_file";
            local_58 = 0;
            local_b0 = 0;
            local_a0 = 10;
            String::parse_latin1((StrRange *)&local_b0);
            local_b8 = 0;
            local_a8 = "remap";
            local_a0 = 5;
            String::parse_latin1(local_128);
            ConfigFile::set_value(pSVar14,(String *)local_128,(Variant *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            (**(code **)(*(long *)local_d0 + 0x1c8))((CowData<char32_t> *)&local_c8);
            if ((local_c8 == 0) || (*(uint *)(local_c8 + -8) < 2)) goto LAB_00104730;
            lVar19 = *(long *)(this + 0xaa0);
            StringName::StringName((StringName *)&local_a8,(String *)&local_c8,false);
            local_b0 = local_b0 & 0xffffffff00000000;
            cVar16 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                     ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                    *)(lVar19 + 0x178),(StringName *)&local_a8,(uint *)&local_b0);
            if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
              StringName::unref();
            }
            if (cVar16 == '\0') {
              _err_print_error("_reimport","editor/import_dock.cpp",0x2a0,
                               "Condition \"!params->values.has(group_file_property)\" is true. Continuing."
                              );
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              goto LAB_001051ce;
            }
            lVar19 = *(long *)(this + 0xaa0);
            StringName::StringName((StringName *)&local_a8,(String *)&local_c8,false);
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)(lVar19 + 0x178),(StringName *)&local_a8);
            Variant::operator_cast_to_String((Variant *)&local_c0);
            if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
              StringName::unref();
            }
            Variant::Variant(local_110,(String *)&local_c0);
            local_a8 = "group_file";
            local_b0 = 0;
            local_a0 = 10;
            String::parse_latin1((StrRange *)&local_b0);
            local_b8 = 0;
            local_a8 = "remap";
            local_a0 = 5;
            String::parse_latin1(local_128);
            ConfigFile::set_value(pSVar14,(String *)local_128,(Variant *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          if (((local_d0 != (Object *)0x0) &&
              (cVar16 = RefCounted::unreference(), pOVar15 = local_d0, cVar16 != '\0')) &&
             (cVar16 = predelete_handler(local_d0), cVar16 != '\0')) {
            (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
            Memory::free_static(pOVar15,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        }
        local_b0 = 0;
        local_a8 = ".import";
        local_a0 = 7;
        String::parse_latin1((StrRange *)&local_b0);
        lVar19 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0);
        if (lVar19 == 0) goto LAB_00104f4d;
        lVar22 = *(long *)(lVar19 + -8);
        if (lVar22 <= local_138) goto LAB_00104f50;
        String::operator+((String *)&local_a8,(String *)(lVar19 + local_138 * 8));
        ConfigFile::save(pSVar14);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        cVar16 = RefCounted::unreference();
      }
      else {
        _err_print_error("_reimport","editor/import_dock.cpp",0x282,
                         "Condition \"err != OK\" is true. Continuing.");
LAB_00104fb8:
        cVar16 = RefCounted::unreference();
      }
      if ((cVar16 != '\0') && (cVar16 = predelete_handler((Object *)pSVar14), cVar16 != '\0')) {
        (**(code **)(*(long *)pSVar14 + 0x140))(pSVar14);
        Memory::free_static(pSVar14,false);
      }
      local_138 = local_138 + 1;
      lVar19 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0);
    } while (lVar19 != 0);
  }
  EditorFileSystem::reimport_files(EditorFileSystem::singleton);
  pVVar13 = EditorFileSystem::singleton;
  if ((_reimport()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar17 = __cxa_guard_acquire(&_reimport()::{lambda()#1}::operator()()::sname), iVar17 != 0)) {
    _scs_create((char *)&_reimport()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_reimport()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_reimport()::{lambda()#1}::operator()()::sname);
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  (**(code **)(*(long *)pVVar13 + 0xd0))
            (pVVar13,&_reimport()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  _set_dirty(SUB81(this,0));
  return;
}



/* ImportDock::_bind_methods() */

void ImportDock::_bind_methods(void)

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
  D_METHODP((char *)local_68,(char ***)"_reimport",0);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar4 = create_method_bind<ImportDock>(_reimport);
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



/* ImportDock::_reimport_attempt() */

void __thiscall ImportDock::_reimport_attempt(ImportDock *this)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  String *pSVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  CowData<char32_t> *this_00;
  EditorFileSystemDirectory *pEVar9;
  undefined1 (*pauVar10) [16];
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  char local_b9;
  char *local_b0;
  String *local_a8;
  CowData<char32_t> local_a0 [8];
  undefined8 local_98;
  Object *local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (char *)0x0;
  plVar2 = *(long **)(*(long *)(this + 0xaa0) + 0x1b0);
  if (plVar2 == (long *)0x0) {
    if (*(char *)(*(long *)(this + 0xaa0) + 0x1f1) == '\0') {
      String::parse_latin1((String *)&local_b0,"keep");
    }
    else {
      String::parse_latin1((String *)&local_b0,"skip");
    }
  }
  else {
    (**(code **)(*plVar2 + 0x150))((CowData<char32_t> *)&local_88);
    if (local_b0 != local_88) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      local_b0 = local_88;
      local_88 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  local_b9 = '\0';
  lVar13 = 0;
  lVar8 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0);
  if (lVar8 == 0) {
    if ((*(long *)(this + 0xa88) == 0) || (*(int *)(*(long *)(this + 0xa88) + 0x10) == 0)) {
LAB_00105b63:
      _reimport(this);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      goto LAB_00105b75;
    }
LAB_00105b15:
    uVar11 = (undefined1)*(undefined8 *)(this + 0xa70);
  }
  else {
    do {
      if (*(long *)(lVar8 + -8) <= lVar13) break;
      local_a8 = (String *)0x0;
      Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_a8);
      pSVar4 = local_a8;
      local_88 = ".import";
      local_90 = (Object *)0x0;
      local_80 = 7;
      String::parse_latin1((StrRange *)&local_90);
      lVar8 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0);
      if (lVar8 == 0) goto LAB_00105a28;
      lVar12 = *(long *)(lVar8 + -8);
      if (lVar12 <= lVar13) goto LAB_00105a2b;
      lVar1 = lVar13 * 8;
      String::operator+((String *)&local_88,(String *)(lVar8 + lVar1));
      iVar7 = ConfigFile::load(pSVar4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if (iVar7 == 0) {
        local_70 = (undefined1  [16])0x0;
        local_88 = "importer";
        local_78 = 0;
        local_90 = (Object *)0x0;
        local_80 = 8;
        String::parse_latin1((StrRange *)&local_90);
        local_98 = 0;
        local_88 = "remap";
        local_80 = 5;
        String::parse_latin1((StrRange *)&local_98);
        ConfigFile::get_value((String *)local_58,pSVar4,(Variant *)&local_98);
        Variant::operator_cast_to_String((Variant *)local_a0);
        if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        cVar6 = String::operator!=((String *)local_a0,(String *)&local_b0);
        if (((cVar6 != '\0') &&
            (cVar6 = String::operator!=((String *)local_a0,"keep"), cVar6 != '\0')) &&
           (cVar6 = String::operator!=((String *)local_a0,"skip"), cVar6 != '\0')) {
          local_88 = (char *)0x0;
          String::parse_latin1((String *)&local_88,"");
          lVar8 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0);
          if (lVar8 != 0) {
            lVar12 = *(long *)(lVar8 + -8);
            if (lVar12 <= lVar13) goto LAB_00105a2b;
            ResourceLoader::load((StrRange *)&local_90,lVar8 + lVar1,(String *)&local_88,1);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            if (local_90 == (Object *)0x0) goto LAB_00105600;
            lVar8 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0);
            if (lVar8 != 0) {
              lVar12 = *(long *)(lVar8 + -8);
              if (lVar12 <= lVar13) goto LAB_00105a2b;
              if (*(long *)(this + 0xa88) == 0) {
                pauVar10 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
                *(undefined1 (**) [16])(this + 0xa88) = pauVar10;
                *(undefined4 *)pauVar10[1] = 0;
                *pauVar10 = (undefined1  [16])0x0;
              }
              this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
              *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
              CowData<char32_t>::_ref(this_00,(CowData *)(lVar8 + lVar1));
              plVar2 = *(long **)(this + 0xa88);
              lVar8 = plVar2[1];
              *(undefined8 *)(this_00 + 8) = 0;
              *(long **)(this_00 + 0x18) = plVar2;
              *(long *)(this_00 + 0x10) = lVar8;
              if (lVar8 != 0) {
                *(CowData<char32_t> **)(lVar8 + 8) = this_00;
              }
              plVar2[1] = (long)this_00;
              if (*plVar2 == 0) {
                *plVar2 = (long)this_00;
              }
              *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
              lVar8 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0);
              if (lVar8 != 0) {
                lVar12 = *(long *)(lVar8 + -8);
                if (lVar12 <= lVar13) goto LAB_00105a2b;
                pEVar9 = (EditorFileSystemDirectory *)EditorFileSystem::get_filesystem();
                cVar6 = _find_owners(pEVar9,(String *)(lVar1 + lVar8));
                if (cVar6 != '\0') {
                  local_b9 = cVar6;
                }
                if (((local_90 != (Object *)0x0) &&
                    (cVar6 = RefCounted::unreference(), pOVar5 = local_90, cVar6 != '\0')) &&
                   (cVar6 = predelete_handler(local_90), cVar6 != '\0')) {
                  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                  Memory::free_static(pOVar5,false);
                }
                goto LAB_00105600;
              }
            }
          }
LAB_00105a28:
          lVar12 = 0;
LAB_00105a2b:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar13,lVar12,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
LAB_00105600:
        CowData<char32_t>::_unref(local_a0);
        cVar6 = RefCounted::unreference();
      }
      else {
        _err_print_error("_reimport_attempt","editor/import_dock.cpp",0x231,
                         "Condition \"err != OK\" is true. Continuing.",0,0);
        cVar6 = RefCounted::unreference();
      }
      if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)pSVar4), cVar6 != '\0')) {
        (**(code **)(*(long *)pSVar4 + 0x140))(pSVar4);
        Memory::free_static(pSVar4,false);
      }
      lVar13 = lVar13 + 1;
      lVar8 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0);
    } while (lVar8 != 0);
    if (*(long *)(this + 0xa88) == 0) {
      if (local_b9 == '\0') goto LAB_00105b63;
      uVar11 = (undefined1)*(undefined8 *)(this + 0xa70);
    }
    else {
      if (*(int *)(*(long *)(this + 0xa88) + 0x10) != 0) goto LAB_00105b15;
      if (local_b9 == '\0') goto LAB_00105b63;
      uVar11 = (undefined1)*(undefined8 *)(this + 0xa70);
    }
  }
  CanvasItem::set_visible((bool)uVar11);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa78),0));
  local_58[0] = 0;
  Window::popup_centered(*(Vector2i **)(this + 0xa68));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
LAB_00105b75:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImportDock::_reimport_pressed() */

void __thiscall ImportDock::_reimport_pressed(ImportDock *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  
  _reimport_attempt(this);
  plVar1 = *(long **)(*(long *)(this + 0xaa0) + 0x1b0);
  if ((((plVar1 != (long *)0x0) && (lVar2 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0), lVar2 != 0))
      && (*(long *)(lVar2 + -8) == 1)) &&
     (pcVar3 = *(code **)(*plVar1 + 400), pcVar3 != ResourceImporter::has_advanced_options)) {
    cVar4 = (*pcVar3)();
    if (cVar4 != '\0') {
      CanvasItem::show();
      CanvasItem::show();
      return;
    }
  }
  CanvasItem::hide();
  CanvasItem::hide();
  return;
}



/* ImportDock::set_edit_multiple_paths(Vector<String> const&) */

void __thiscall ImportDock::set_edit_multiple_paths(ImportDock *this,Vector *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  Dictionary *pDVar18;
  Variant *this_00;
  Variant *pVVar19;
  CowData<char32_t> *pCVar20;
  String *pSVar21;
  uint uVar22;
  long lVar23;
  CowData<char32_t> *pCVar24;
  CowData<char32_t> *pCVar25;
  int *piVar26;
  undefined8 *puVar27;
  long *plVar28;
  ulong uVar29;
  undefined8 *puVar30;
  CowData *pCVar31;
  String *pSVar32;
  long lVar33;
  long lVar34;
  PropertyInfo *pPVar35;
  uint uVar36;
  long in_FS_OFFSET;
  bool bVar37;
  Variant *local_1a8;
  List<Pair<String,String>,DefaultAllocator> *local_198;
  long local_120;
  long *local_118;
  long *local_110;
  String *local_108;
  undefined8 local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
  local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  clear(this);
  pCVar31 = *(CowData **)(param_1 + 8);
  local_a0 = (undefined1  [16])0x0;
  local_80 = _LC23;
  local_b8 = _LC23;
  local_90 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  if (pCVar31 == (CowData *)0x0) {
    plVar28 = *(long **)(*(long *)(this + 0xaa0) + 0x1b0);
    if (plVar28 == (long *)0x0) {
      puVar30 = (undefined8 *)0x0;
      pCVar20 = (CowData<char32_t> *)0x0;
      goto LAB_00106057;
    }
LAB_00106824:
    local_120 = 0;
LAB_0010682c:
    local_118 = (long *)0x0;
    (**(code **)(*plVar28 + 0x1b0))
              (plVar28,(CowData *)&local_120,
               (List<ResourceImporter::ImportOption,DefaultAllocator> *)&local_118);
    lVar34 = *(long *)(this + 0xaa0);
    plVar28 = *(long **)(lVar34 + 0x1a8);
    if (plVar28 != (long *)0x0) {
      do {
        pvVar2 = (void *)*plVar28;
        if (pvVar2 == (void *)0x0) {
          lVar34 = *(long *)(this + 0xaa0);
          goto LAB_00106927;
        }
        if (*(long **)((long)pvVar2 + 0x40) == plVar28) {
          lVar33 = *(long *)((long)pvVar2 + 0x30);
          lVar23 = *(long *)((long)pvVar2 + 0x38);
          *plVar28 = lVar33;
          if (pvVar2 == (void *)plVar28[1]) {
            plVar28[1] = lVar23;
          }
          if (lVar23 != 0) {
            *(long *)(lVar23 + 0x30) = lVar33;
            lVar33 = *(long *)((long)pvVar2 + 0x30);
          }
          if (lVar33 != 0) {
            *(long *)(lVar33 + 0x38) = lVar23;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x20));
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 8));
          Memory::free_static(pvVar2,false);
          *(int *)(plVar28 + 2) = (int)plVar28[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar28 = *(long **)(lVar34 + 0x1a8);
      } while ((int)plVar28[2] != 0);
      Memory::free_static(plVar28,false);
      *(undefined8 *)(lVar34 + 0x1a8) = 0;
      lVar34 = *(long *)(this + 0xaa0);
    }
LAB_00106927:
    lVar33 = lVar34;
    if ((*(long *)(lVar34 + 0x180) != 0) && (*(int *)(lVar34 + 0x1a4) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar34 + 0x1a0) * 4);
      if (uVar1 != 0) {
        lVar33 = 0;
        do {
          piVar17 = (int *)(*(long *)(lVar34 + 0x188) + lVar33);
          if (*piVar17 != 0) {
            *piVar17 = 0;
            pvVar2 = *(void **)(*(long *)(lVar34 + 0x180) + lVar33 * 2);
            if (Variant::needs_deinit[*(int *)((long)pvVar2 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar2,false);
            *(undefined8 *)(*(long *)(lVar34 + 0x180) + lVar33 * 2) = 0;
          }
          lVar33 = lVar33 + 4;
        } while ((ulong)uVar1 * 4 - lVar33 != 0);
        lVar33 = *(long *)(this + 0xaa0);
      }
      *(undefined4 *)(lVar34 + 0x1a4) = 0;
      *(undefined1 (*) [16])(lVar34 + 400) = (undefined1  [16])0x0;
    }
    *(undefined1 *)(lVar33 + 0x1f0) = 1;
    HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear
              ((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *)
               (lVar33 + 0x1c8));
    lVar34 = *(long *)(this + 0xaa0);
    if (*(long *)(lVar34 + 0x1f8) != local_120) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(lVar34 + 0x1f8),(CowData *)&local_120);
      lVar34 = *(long *)(this + 0xaa0);
    }
    if ((local_118 != (long *)0x0) &&
       (pPVar35 = (PropertyInfo *)*local_118, pPVar35 != (PropertyInfo *)0x0)) {
      do {
        pSVar21 = (String *)(pPVar35 + 8);
        List<PropertyInfo,DefaultAllocator>::push_back
                  ((List<PropertyInfo,DefaultAllocator> *)(lVar34 + 0x1a8),pPVar35);
        local_e8 = (long *)((ulong)local_e8 & 0xffffffff00000000);
        cVar14 = HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
                 ::_lookup_pos(local_a8,pSVar21,(uint *)&local_e8);
        if (cVar14 == '\0') {
          lVar34 = *(long *)(this + 0xaa0);
          StringName::StringName((StringName *)&local_e8,pSVar21,false);
          pVVar19 = (Variant *)
                    HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                    ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)(lVar34 + 0x178),(StringName *)&local_e8);
          Variant::operator=(pVVar19,(Variant *)(pPVar35 + 0x30));
          if ((StringName::configured != '\0') && (local_e8 != (long *)0x0)) {
            StringName::unref();
          }
        }
        else {
          pDVar18 = (Dictionary *)
                    HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
                    ::operator[](local_a8,pSVar21);
          Dictionary::Dictionary((Dictionary *)&local_f8,pDVar18);
          local_f0 = (long *)0x0;
          Dictionary::get_key_list((List *)&local_f8);
          local_58 = 0;
          local_50 = (undefined1  [16])0x0;
          if ((local_f0 != (long *)0x0) &&
             (pVVar19 = (Variant *)*local_f0, pVVar19 != (Variant *)0x0)) {
            do {
              this_00 = (Variant *)Dictionary::operator[]((Variant *)&local_f8);
              iVar15 = Variant::operator_cast_to_int(this_00);
              if (0 < iVar15) {
                Variant::operator=((Variant *)&local_58,pVVar19);
              }
              pVVar19 = *(Variant **)(pVVar19 + 0x18);
            } while (pVVar19 != (Variant *)0x0);
          }
          local_1a8 = (Variant *)&local_58;
          lVar34 = *(long *)(this + 0xaa0);
          StringName::StringName((StringName *)&local_e8,pSVar21,false);
          pVVar19 = (Variant *)
                    HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                    ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)(lVar34 + 0x178),(StringName *)&local_e8);
          Variant::operator=(pVVar19,local_1a8);
          if ((StringName::configured != '\0') && (local_e8 != (long *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_f0);
          Dictionary::~Dictionary((Dictionary *)&local_f8);
        }
        pPVar35 = *(PropertyInfo **)(pPVar35 + 0x48);
        lVar34 = *(long *)(this + 0xaa0);
      } while (pPVar35 != (PropertyInfo *)0x0);
    }
    Object::notify_property_list_changed();
    pSVar21 = ResourceFormatImporter::singleton;
    local_110 = (long *)0x0;
    if (*(long *)(param_1 + 8) == 0) {
      lVar33 = 0;
LAB_001073e4:
      lVar34 = 0;
LAB_00106621:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar34,lVar33,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar33 = *(long *)(*(long *)(param_1 + 8) + -8);
    if (lVar33 < 1) goto LAB_001073e4;
    String::get_extension();
    ResourceFormatImporter::get_importers_for_extension(pSVar21,(List *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    local_108 = (String *)0x0;
    if ((local_110 == (long *)0x0) ||
       (puVar30 = (undefined8 *)*local_110, puVar30 == (undefined8 *)0x0)) {
      List<Pair<String,String>,DefaultAllocator>::sort_custom<PairSort<String,String>>
                ((List<Pair<String,String>,DefaultAllocator> *)&local_108);
      OptionButton::clear();
    }
    else {
      pSVar21 = (String *)0x0;
      do {
        (**(code **)(*(long *)*puVar30 + 0x150))((CowData *)&local_f0);
        (**(code **)(*(long *)*puVar30 + 0x158))((CowData<char32_t> *)&local_f8);
        local_e8 = (long *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_f8);
        local_e0 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_f0);
        if (pSVar21 == (String *)0x0) {
          pSVar21 = (String *)operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)(pSVar21 + 0x10) = 0;
          *(undefined1 (*) [16])pSVar21 = (undefined1  [16])0x0;
          local_108 = pSVar21;
        }
        pCVar20 = (CowData<char32_t> *)operator_new(0x28,DefaultAllocator::alloc);
        *(undefined8 *)(pCVar20 + 0x20) = 0;
        *(undefined1 (*) [16])pCVar20 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(pCVar20 + 0x10) = (undefined1  [16])0x0;
        CowData<char32_t>::_ref(pCVar20,(CowData *)&local_e8);
        CowData<char32_t>::_ref(pCVar20 + 8,(CowData *)&local_e0);
        lVar34 = *(long *)(pSVar21 + 8);
        *(String **)(pCVar20 + 0x20) = pSVar21;
        *(undefined8 *)(pCVar20 + 0x10) = 0;
        *(long *)(pCVar20 + 0x18) = lVar34;
        if (lVar34 != 0) {
          *(CowData<char32_t> **)(lVar34 + 0x10) = pCVar20;
        }
        *(CowData<char32_t> **)(pSVar21 + 8) = pCVar20;
        if (*(long *)pSVar21 == 0) {
          *(CowData<char32_t> **)pSVar21 = pCVar20;
        }
        *(int *)(pSVar21 + 0x10) = *(int *)(pSVar21 + 0x10) + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        puVar30 = (undefined8 *)puVar30[1];
      } while (puVar30 != (undefined8 *)0x0);
      List<Pair<String,String>,DefaultAllocator>::sort_custom<PairSort<String,String>>
                ((List<Pair<String,String>,DefaultAllocator> *)&local_108);
      OptionButton::clear();
      for (lVar34 = *(long *)pSVar21; lVar34 != 0; lVar34 = *(long *)(lVar34 + 0x10)) {
        OptionButton::add_item(*(String **)(this + 0xa18),(int)lVar34);
        uVar3 = *(undefined8 *)(this + 0xa18);
        Variant::Variant((Variant *)&local_58,(String *)(lVar34 + 8));
        OptionButton::set_item_metadata((int)uVar3,(Variant *)0xffffffff);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        (**(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 0x150))
                  ((CowData<char32_t> *)&local_e8);
        cVar14 = String::operator==((String *)(lVar34 + 8),(String *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        if (cVar14 != '\0') {
          uVar3 = *(undefined8 *)(this + 0xa18);
          OptionButton::get_item_count();
          OptionButton::select((int)uVar3);
        }
      }
    }
    local_198 = (List<Pair<String,String>,DefaultAllocator> *)&local_108;
    local_1a8 = (Variant *)&local_f0;
    (**(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 0x150))
              ((CowData<char32_t> *)&local_e8);
    _add_keep_import_option(this,(String *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    _update_preset_menu(this);
    lVar34 = *(long *)(this + 0xaa0);
    if (*(long *)(lVar34 + 0x1c0) != *(long *)(param_1 + 8)) {
      CowData<String>::_unref((CowData<String> *)(lVar34 + 0x1c0));
      if (*(long *)(param_1 + 8) != 0) {
        plVar28 = (long *)(*(long *)(param_1 + 8) + -0x10);
        do {
          lVar33 = *plVar28;
          if (lVar33 == 0) goto LAB_0010701c;
          LOCK();
          lVar23 = *plVar28;
          bVar37 = lVar33 == lVar23;
          if (bVar37) {
            *plVar28 = lVar33 + 1;
            lVar23 = lVar33;
          }
          UNLOCK();
        } while (!bVar37);
        if (lVar23 != -1) {
          *(undefined8 *)(lVar34 + 0x1c0) = *(undefined8 *)(param_1 + 8);
        }
      }
    }
LAB_0010701c:
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa80),0));
    _set_dirty(SUB81(this,0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa18),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa20),0));
    CanvasItem::show();
    CanvasItem::hide();
    pSVar21 = *(String **)(this + 0xa10);
    local_f8 = (long *)0x0;
    String::parse_latin1((String *)&local_f8,"");
    local_100 = 0;
    String::parse_latin1((String *)&local_100,"%d Files");
    TTR((String *)local_1a8,(String *)&local_100);
    vformat<long>((String *)&local_e8,(long)local_1a8);
    Label::set_text(pSVar21);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    lVar34 = *(long *)(*(long *)(this + 0xaa0) + 0x1c0);
    if ((((lVar34 == 0) || (*(long *)(lVar34 + -8) != 1)) ||
        (pcVar4 = *(code **)(**(long **)(*(long *)(this + 0xaa0) + 0x1b0) + 400),
        pcVar4 == ResourceImporter::has_advanced_options)) || (cVar14 = (*pcVar4)(), cVar14 == '\0')
       ) {
      CanvasItem::hide();
      CanvasItem::hide();
    }
    else {
      CanvasItem::show();
      CanvasItem::show();
    }
    List<Pair<String,String>,DefaultAllocator>::~List(local_198);
    List<Ref<ResourceImporter>,DefaultAllocator>::~List
              ((List<Ref<ResourceImporter>,DefaultAllocator> *)&local_110);
    List<ResourceImporter::ImportOption,DefaultAllocator>::~List
              ((List<ResourceImporter::ImportOption,DefaultAllocator> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    uVar3 = local_d8._0_8_;
    if ((CowData<char32_t> *)local_d8._0_8_ != (CowData<char32_t> *)0x0) {
      uVar29 = (ulong)local_b8._4_4_;
      uVar13 = local_c8._8_8_;
      if (local_b8._4_4_ != 0) {
        if (*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) != 0) {
          memset((void *)local_c8._8_8_,0,
                 (ulong)*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) * 4);
        }
        pCVar20 = (CowData<char32_t> *)uVar3;
        do {
          pCVar25 = pCVar20 + 8;
          CowData<char32_t>::_unref(pCVar20);
          pCVar20 = pCVar25;
        } while ((CowData<char32_t> *)(uVar3 + uVar29 * 8) != pCVar25);
      }
      Memory::free_static((void *)uVar3,false);
      Memory::free_static((void *)local_c8._0_8_,false);
      Memory::free_static((void *)local_d8._8_8_,false);
      Memory::free_static((void *)uVar13,false);
    }
    uVar3 = local_a0._0_8_;
    if ((undefined8 *)local_a0._0_8_ != (undefined8 *)0x0) {
      uVar13 = local_a0._8_8_;
      if ((local_80._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) != 0)) {
        piVar17 = (int *)(local_a0._8_8_ +
                         (ulong)*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) * 4)
        ;
        piVar26 = (int *)local_a0._8_8_;
        puVar30 = (undefined8 *)local_a0._0_8_;
        do {
          if (*piVar26 != 0) {
            pvVar2 = (void *)*puVar30;
            *piVar26 = 0;
            Dictionary::~Dictionary((Dictionary *)((long)pvVar2 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
            Memory::free_static(pvVar2,false);
            *puVar30 = 0;
          }
          piVar26 = piVar26 + 1;
          puVar30 = puVar30 + 1;
        } while (piVar17 != piVar26);
      }
      Memory::free_static((void *)uVar3,false);
      Memory::free_static((void *)uVar13,false);
    }
  }
  else {
    lVar34 = 0;
    do {
      if (*(long *)(pCVar31 + -8) <= lVar34) {
        plVar28 = *(long **)(*(long *)(this + 0xaa0) + 0x1b0);
        if (plVar28 == (long *)0x0) goto LAB_00106047;
        local_120 = 0;
        if (local_b8._4_4_ != 1) goto LAB_00106824;
        if ((0 < *(long *)(pCVar31 + -8)) && (*(long *)pCVar31 != 0)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,pCVar31);
          plVar28 = *(long **)(*(long *)(this + 0xaa0) + 0x1b0);
        }
        goto LAB_0010682c;
      }
      local_108 = (String *)0x0;
      Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_108);
      if (*(long *)(param_1 + 8) == 0) {
LAB_00106600:
        lVar33 = 0;
        goto LAB_00106621;
      }
      lVar33 = *(long *)(*(long *)(param_1 + 8) + -8);
      if (lVar33 <= lVar34) goto LAB_00106621;
      String::get_extension();
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                ((String *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      pSVar21 = local_108;
      local_f0 = (long *)0x0;
      local_e8 = (long *)0x10ae41;
      local_e0 = 7;
      String::parse_latin1((StrRange *)&local_f0);
      lVar23 = *(long *)(param_1 + 8);
      if (lVar23 == 0) goto LAB_00106600;
      lVar33 = *(long *)(lVar23 + -8);
      if (lVar33 <= lVar34) goto LAB_00106621;
      String::operator+((String *)&local_e8,(String *)(lVar23 + lVar34 * 8));
      iVar15 = ConfigFile::load(pSVar21);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      if (iVar15 == 0) {
        if (lVar34 == 0) {
          local_70 = (undefined1  [16])0x0;
          local_e8 = (long *)0x10adf1;
          local_78 = 0;
          local_f0 = (long *)0x0;
          local_e0 = 8;
          String::parse_latin1((StrRange *)&local_f0);
          local_e8 = (long *)0x10adfa;
          local_f8 = (long *)0x0;
          local_e0 = 5;
          String::parse_latin1((StrRange *)&local_f8);
          ConfigFile::get_value((String *)&local_58,pSVar21,(Variant *)&local_f8);
          Variant::operator_cast_to_String((Variant *)&local_100);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          cVar14 = String::operator==((String *)&local_100,"keep");
          if (cVar14 == '\0') {
            cVar14 = String::operator==((String *)&local_100,"skip");
            if (cVar14 == '\0') {
              ResourceFormatImporter::get_importer_by_name((String *)&local_f0);
              lVar33 = *(long *)(this + 0xaa0);
              plVar28 = *(long **)(lVar33 + 0x1b0);
              if (local_f0 != plVar28) {
                *(long **)(lVar33 + 0x1b0) = local_f0;
                local_e8 = plVar28;
                if ((local_f0 != (long *)0x0) && (cVar14 = RefCounted::reference(), cVar14 == '\0'))
                {
                  *(undefined8 *)(lVar33 + 0x1b0) = 0;
                }
                Ref<ResourceImporter>::unref((Ref<ResourceImporter> *)&local_e8);
              }
              Ref<ResourceImporter>::unref((Ref<ResourceImporter> *)&local_f0);
              lVar33 = *(long *)(this + 0xaa0);
              *(undefined1 *)(lVar33 + 0x1f1) = 0;
            }
            else {
              Ref<ResourceImporter>::unref
                        ((Ref<ResourceImporter> *)(*(long *)(this + 0xaa0) + 0x1b0));
              lVar33 = *(long *)(this + 0xaa0);
              *(undefined1 *)(lVar33 + 0x1f1) = 1;
            }
          }
          else {
            Ref<ResourceImporter>::unref((Ref<ResourceImporter> *)(*(long *)(this + 0xaa0) + 0x1b0))
            ;
            lVar33 = *(long *)(this + 0xaa0);
            *(undefined1 *)(lVar33 + 0x1f1) = 0;
          }
          if (*(long *)(lVar33 + 0x1b0) == 0) {
            clear(this);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
            Ref<ConfigFile>::unref((Ref<ConfigFile> *)&local_108);
            pCVar20 = (CowData<char32_t> *)local_d8._0_8_;
            puVar30 = (undefined8 *)local_a0._0_8_;
            goto LAB_0010607c;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        }
        local_f0 = (long *)0x0;
        local_e8 = (long *)0x10adea;
        local_e0 = 6;
        String::parse_latin1((StrRange *)&local_f0);
        cVar14 = ConfigFile::has_section(pSVar21);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        if (cVar14 == '\0') goto LAB_00106008;
        local_f8 = (long *)0x0;
        local_e8 = (long *)0x0;
        String::parse_latin1((String *)&local_e8,"params");
        ConfigFile::get_section_keys(pSVar21,(List *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        if ((local_f8 != (long *)0x0) && (pSVar32 = (String *)*local_f8, pSVar32 != (String *)0x0))
        {
          do {
            uVar3 = local_a0._0_8_;
            if ((local_a0._0_8_ != 0) && (local_80._4_4_ != 0)) {
              uVar1 = *(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4);
              lVar33 = *(long *)(hash_table_size_primes_inv + (local_80 & 0xffffffff) * 8);
              uVar16 = String::hash();
              uVar29 = CONCAT44(0,uVar1);
              uVar13 = local_a0._8_8_;
              uVar22 = 1;
              if (uVar16 != 0) {
                uVar22 = uVar16;
              }
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)uVar22 * lVar33;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar29;
              lVar23 = SUB168(auVar5 * auVar9,8);
              uVar16 = *(uint *)(local_a0._8_8_ + lVar23 * 4);
              iVar15 = SUB164(auVar5 * auVar9,8);
              if (uVar16 != 0) {
                uVar36 = 0;
                do {
                  if ((uVar16 == uVar22) &&
                     (cVar14 = String::operator==((String *)(*(long *)(uVar3 + lVar23 * 8) + 0x10),
                                                  pSVar32), cVar14 != '\0')) goto LAB_001063f6;
                  uVar36 = uVar36 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = (ulong)(iVar15 + 1) * lVar33;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = uVar29;
                  lVar23 = SUB168(auVar6 * auVar10,8);
                  uVar16 = *(uint *)(uVar13 + lVar23 * 4);
                  iVar15 = SUB164(auVar6 * auVar10,8);
                } while ((uVar16 != 0) &&
                        (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar16 * lVar33, auVar11._8_8_ = 0,
                        auVar11._0_8_ = uVar29, auVar8._8_8_ = 0,
                        auVar8._0_8_ = (ulong)((uVar1 + iVar15) - SUB164(auVar7 * auVar11,8)) *
                                       lVar33, auVar12._8_8_ = 0, auVar12._0_8_ = uVar29,
                        uVar36 <= SUB164(auVar8 * auVar12,8)));
              }
            }
            Dictionary::Dictionary((Dictionary *)&local_e8);
            pDVar18 = (Dictionary *)
                      HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
                      ::operator[](local_a8,pSVar32);
            Dictionary::operator=(pDVar18,(Dictionary *)&local_e8);
            Dictionary::~Dictionary((Dictionary *)&local_e8);
LAB_001063f6:
            local_e8 = (long *)0x10adea;
            local_50 = (undefined1  [16])0x0;
            local_58 = 0;
            local_f0 = (long *)0x0;
            local_e0 = 6;
            String::parse_latin1((StrRange *)&local_f0);
            ConfigFile::get_value((String *)&local_78,pSVar21,(Variant *)&local_f0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
            pVVar19 = (Variant *)
                      HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
                      ::operator[](local_a8,pSVar32);
            cVar14 = Dictionary::has(pVVar19);
            if (cVar14 == '\0') {
              Variant::Variant((Variant *)&local_58,1);
              pVVar19 = (Variant *)
                        HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
                        ::operator[](local_a8,pSVar32);
              pVVar19 = (Variant *)Dictionary::operator[](pVVar19);
              if (pVVar19 == (Variant *)&local_58) goto LAB_001066f0;
              if (Variant::needs_deinit[*(int *)pVVar19] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pVVar19 = 0;
              *(int *)pVVar19 = (int)local_58;
              *(undefined8 *)(pVVar19 + 8) = local_50._0_8_;
              *(undefined8 *)(pVVar19 + 0x10) = local_50._8_8_;
              cVar14 = Variant::needs_deinit[(int)local_78];
            }
            else {
              pVVar19 = (Variant *)
                        HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
                        ::operator[](local_a8,pSVar32);
              pVVar19 = (Variant *)Dictionary::operator[](pVVar19);
              iVar15 = Variant::operator_cast_to_int(pVVar19);
              Variant::Variant((Variant *)&local_58,iVar15 + 1);
              pVVar19 = (Variant *)
                        HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
                        ::operator[](local_a8,pSVar32);
              pVVar19 = (Variant *)Dictionary::operator[](pVVar19);
              if (pVVar19 == (Variant *)&local_58) {
LAB_001066f0:
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
              }
              else {
                if (Variant::needs_deinit[*(int *)pVVar19] != '\0') {
                  Variant::_clear_internal();
                }
                *(undefined4 *)pVVar19 = 0;
                *(int *)pVVar19 = (int)local_58;
                *(undefined8 *)(pVVar19 + 8) = local_50._0_8_;
                *(undefined8 *)(pVVar19 + 0x10) = local_50._8_8_;
              }
              cVar14 = Variant::needs_deinit[(int)local_78];
            }
            if (cVar14 != '\0') {
              Variant::_clear_internal();
            }
            pSVar32 = *(String **)(pSVar32 + 8);
          } while (pSVar32 != (String *)0x0);
        }
        List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_f8);
        Ref<ConfigFile>::unref((Ref<ConfigFile> *)&local_108);
      }
      else {
        _err_print_error("set_edit_multiple_paths","editor/import_dock.cpp",0xed,
                         "Condition \"err != OK\" is true. Continuing.",0,0);
LAB_00106008:
        cVar14 = RefCounted::unreference();
        if ((cVar14 != '\0') && (cVar14 = predelete_handler((Object *)pSVar21), cVar14 != '\0')) {
          (**(code **)(*(long *)pSVar21 + 0x140))(pSVar21);
          Memory::free_static(pSVar21,false);
        }
      }
      pCVar31 = *(CowData **)(param_1 + 8);
      lVar34 = lVar34 + 1;
    } while (pCVar31 != (CowData *)0x0);
    plVar28 = *(long **)(*(long *)(this + 0xaa0) + 0x1b0);
    if (plVar28 != (long *)0x0) goto LAB_00106824;
LAB_00106047:
    pCVar20 = (CowData<char32_t> *)local_d8._0_8_;
    puVar30 = (undefined8 *)local_a0._0_8_;
LAB_00106057:
    _err_print_error("set_edit_multiple_paths","editor/import_dock.cpp",0x117,
                     "Condition \"params->importer.is_null()\" is true.",0,0);
LAB_0010607c:
    if (pCVar20 != (CowData<char32_t> *)0x0) {
      uVar29 = (ulong)local_b8._4_4_;
      uVar3 = local_c8._8_8_;
      if (local_b8._4_4_ != 0) {
        if (*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) != 0) {
          memset((void *)local_c8._8_8_,0,
                 (ulong)*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) * 4);
        }
        pCVar25 = pCVar20;
        do {
          pCVar24 = pCVar25 + 8;
          CowData<char32_t>::_unref(pCVar25);
          pCVar25 = pCVar24;
        } while (pCVar20 + uVar29 * 8 != pCVar24);
      }
      Memory::free_static(pCVar20,false);
      Memory::free_static((void *)local_c8._0_8_,false);
      Memory::free_static((void *)local_d8._8_8_,false);
      Memory::free_static((void *)uVar3,false);
    }
    if (puVar30 != (undefined8 *)0x0) {
      uVar3 = local_a0._8_8_;
      if ((local_80._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) != 0)) {
        piVar17 = (int *)(local_a0._8_8_ +
                         (ulong)*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) * 4)
        ;
        piVar26 = (int *)local_a0._8_8_;
        puVar27 = puVar30;
        do {
          if (*piVar26 != 0) {
            pvVar2 = (void *)*puVar27;
            *piVar26 = 0;
            Dictionary::~Dictionary((Dictionary *)((long)pvVar2 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
            Memory::free_static(pvVar2,false);
            *puVar27 = 0;
          }
          piVar26 = piVar26 + 1;
          puVar27 = puVar27 + 1;
        } while (piVar17 != piVar26);
      }
      Memory::free_static(puVar30,false);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)uVar3,false);
        return;
      }
      goto LAB_0010745c;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010745c:
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



/* ImportDock::set_edit_path(String const&) */

void __thiscall ImportDock::set_edit_path(ImportDock *this,String *param_1)

{
  undefined8 uVar1;
  String *pSVar2;
  String *pSVar3;
  char cVar4;
  int iVar5;
  CowData<char32_t> *pCVar6;
  undefined1 (*pauVar7) [16];
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long in_FS_OFFSET;
  String *local_b8;
  Variant local_b0 [8];
  long *local_a8;
  undefined1 (*local_a0) [16];
  long local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (String *)0x0;
  Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_b8);
  pSVar3 = local_b8;
  local_90 = (char *)0x0;
  local_88 = ".import";
  local_80 = (char *)0x7;
  String::parse_latin1((StrRange *)&local_90);
  String::operator+((String *)&local_88,param_1);
  iVar5 = ConfigFile::load(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (iVar5 != 0) {
    clear(this);
    Ref<ConfigFile>::unref((Ref<ConfigFile> *)&local_b8);
    goto LAB_00107cce;
  }
  local_70 = (undefined1  [16])0x0;
  local_88 = "importer";
  local_78 = 0;
  local_90 = (char *)0x0;
  local_80 = (char *)0x8;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_88 = "remap";
  local_80 = (char *)0x5;
  String::parse_latin1((StrRange *)&local_98);
  ConfigFile::get_value((String *)local_58,pSVar3,(Variant *)&local_98);
  Variant::operator_cast_to_String(local_b0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  cVar4 = String::operator==((String *)local_b0,"keep");
  if (cVar4 == '\0') {
    cVar4 = String::operator==((String *)local_b0,"skip");
    if (cVar4 == '\0') {
      ResourceFormatImporter::get_importer_by_name((String *)&local_90);
      lVar11 = *(long *)(this + 0xaa0);
      pcVar9 = *(char **)(lVar11 + 0x1b0);
      if (local_90 != pcVar9) {
        *(char **)(lVar11 + 0x1b0) = local_90;
        local_88 = pcVar9;
        if ((local_90 != (char *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          *(undefined8 *)(lVar11 + 0x1b0) = 0;
        }
        Ref<ResourceImporter>::unref((Ref<ResourceImporter> *)&local_88);
      }
      Ref<ResourceImporter>::unref((Ref<ResourceImporter> *)&local_90);
      lVar11 = *(long *)(this + 0xaa0);
      *(undefined1 *)(lVar11 + 0x1f1) = 0;
    }
    else {
      Ref<ResourceImporter>::unref((Ref<ResourceImporter> *)(*(long *)(this + 0xaa0) + 0x1b0));
      lVar11 = *(long *)(this + 0xaa0);
      *(undefined1 *)(lVar11 + 0x1f1) = 1;
    }
  }
  else {
    Ref<ResourceImporter>::unref((Ref<ResourceImporter> *)(*(long *)(this + 0xaa0) + 0x1b0));
    lVar11 = *(long *)(this + 0xaa0);
    *(undefined1 *)(lVar11 + 0x1f1) = 0;
  }
  if ((*(long *)(lVar11 + 0x1c0) != 0) && (*(long *)(*(long *)(lVar11 + 0x1c0) + -8) != 0)) {
    CowData<String>::_unref((CowData<String> *)(lVar11 + 0x1c0));
    lVar11 = *(long *)(this + 0xaa0);
  }
  local_88 = (char *)0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)param_1);
  }
  if (*(long *)(lVar11 + 0x1c0) == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar11 + 0x1c0) + -8) + 1;
  }
  iVar5 = CowData<String>::resize<false>((CowData<String> *)(lVar11 + 0x1c0),lVar10);
  if (iVar5 == 0) {
    if (*(long *)(lVar11 + 0x1c0) == 0) {
      lVar13 = -1;
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(*(long *)(lVar11 + 0x1c0) + -8);
      lVar13 = lVar10 + -1;
      if (-1 < lVar13) {
        CowData<String>::_copy_on_write((CowData<String> *)(lVar11 + 0x1c0));
        pCVar6 = (CowData<char32_t> *)(*(long *)(lVar11 + 0x1c0) + lVar13 * 8);
        if (*(char **)pCVar6 != local_88) {
          CowData<char32_t>::_ref(pCVar6,(CowData *)&local_88);
        }
        goto LAB_001078af;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar10,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_001078af:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (*(long *)(*(long *)(this + 0xaa0) + 0x1f8) != *(long *)param_1) {
    CowData<char32_t>::_ref
              ((CowData<char32_t> *)(*(long *)(this + 0xaa0) + 0x1f8),(CowData *)param_1);
  }
  _update_options(this,param_1,(Ref *)&local_b8);
  pSVar2 = ResourceFormatImporter::singleton;
  local_a8 = (long *)0x0;
  String::get_extension();
  ResourceFormatImporter::get_importers_for_extension(pSVar2,(List *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_a0 = (undefined1 (*) [16])0x0;
  if ((local_a8 == (long *)0x0) || (puVar12 = (undefined8 *)*local_a8, puVar12 == (undefined8 *)0x0)
     ) {
    List<Pair<String,String>,DefaultAllocator>::sort_custom<PairSort<String,String>>
              ((List<Pair<String,String>,DefaultAllocator> *)&local_a0);
    OptionButton::clear();
  }
  else {
    pauVar7 = (undefined1 (*) [16])0x0;
    do {
      (**(code **)(*(long *)*puVar12 + 0x150))((StrRange *)&local_90);
      (**(code **)(*(long *)*puVar12 + 0x158))((StrRange *)&local_98);
      local_88 = (char *)0x0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_98);
      }
      local_80 = (char *)0x0;
      pcVar9 = local_90;
      if (local_90 != (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_90);
        pcVar9 = local_80;
      }
      if (pauVar7 == (undefined1 (*) [16])0x0) {
        pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar7[1] = 0;
        *pauVar7 = (undefined1  [16])0x0;
        local_a0 = pauVar7;
      }
      pCVar6 = (CowData<char32_t> *)operator_new(0x28,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pCVar6 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pCVar6 + 0x10) = (undefined1  [16])0x0;
      *(undefined8 *)(pCVar6 + 0x20) = 0;
      pcVar8 = local_88;
      if (local_88 != (char *)0x0) {
        CowData<char32_t>::_ref(pCVar6,(CowData *)&local_88);
        pcVar8 = *(char **)(pCVar6 + 8);
      }
      if (pcVar8 != pcVar9) {
        CowData<char32_t>::_ref(pCVar6 + 8,(CowData *)&local_80);
      }
      lVar11 = *(long *)(*pauVar7 + 8);
      *(undefined8 *)(pCVar6 + 0x10) = 0;
      *(undefined1 (**) [16])(pCVar6 + 0x20) = pauVar7;
      *(long *)(pCVar6 + 0x18) = lVar11;
      if (lVar11 != 0) {
        *(CowData<char32_t> **)(lVar11 + 0x10) = pCVar6;
      }
      lVar11 = *(long *)*pauVar7;
      *(CowData<char32_t> **)(*pauVar7 + 8) = pCVar6;
      if (lVar11 == 0) {
        *(CowData<char32_t> **)*pauVar7 = pCVar6;
      }
      *(int *)pauVar7[1] = *(int *)pauVar7[1] + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      puVar12 = (undefined8 *)puVar12[1];
    } while (puVar12 != (undefined8 *)0x0);
    List<Pair<String,String>,DefaultAllocator>::sort_custom<PairSort<String,String>>
              ((List<Pair<String,String>,DefaultAllocator> *)&local_a0);
    OptionButton::clear();
    for (lVar11 = *(long *)*pauVar7; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
      while( true ) {
        OptionButton::add_item(*(String **)(this + 0xa18),(int)lVar11);
        uVar1 = *(undefined8 *)(this + 0xa18);
        Variant::Variant((Variant *)local_58,(String *)(lVar11 + 8));
        OptionButton::set_item_metadata((int)uVar1,(Variant *)0xffffffff);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        cVar4 = String::operator==((String *)(lVar11 + 8),(String *)local_b0);
        if (cVar4 == '\0') break;
        uVar1 = *(undefined8 *)(this + 0xa18);
        OptionButton::get_item_count();
        OptionButton::select((int)uVar1);
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) goto LAB_00107c1f;
      }
    }
  }
LAB_00107c1f:
  _add_keep_import_option(this,(String *)local_b0);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa80),0));
  _set_dirty(SUB81(this,0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa18),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa20),0));
  CanvasItem::show();
  CanvasItem::hide();
  pSVar2 = *(String **)(this + 0xa10);
  String::get_file();
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  List<Pair<String,String>,DefaultAllocator>::~List
            ((List<Pair<String,String>,DefaultAllocator> *)&local_a0);
  List<Ref<ResourceImporter>,DefaultAllocator>::~List
            ((List<Ref<ResourceImporter>,DefaultAllocator> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pSVar3), cVar4 != '\0')) {
    (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
    Memory::free_static(pSVar3,false);
  }
LAB_00107cce:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImportDock::reimport_resources(Vector<String> const&) */

undefined8 __thiscall ImportDock::reimport_resources(ImportDock *this,Vector *param_1)

{
  String *pSVar1;
  undefined8 uVar2;
  
  pSVar1 = *(String **)(param_1 + 8);
  if ((pSVar1 != (String *)0x0) && (*(long *)(pSVar1 + -8) != 0)) {
    if (*(long *)(pSVar1 + -8) == 1) {
      set_edit_path(this,pSVar1);
      uVar2 = _reimport_attempt(this);
      return uVar2;
    }
    set_edit_multiple_paths(this,param_1);
    uVar2 = _reimport_attempt(this);
    return uVar2;
  }
  _err_print_error("reimport_resources","editor/import_dock.cpp",0x16c,"Method/function failed.",
                   "You need to select files to reimport them.",0);
  return 0;
}



/* CowData<Ref<Resource> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Resource>>::_copy_on_write(CowData<Ref<Resource>> *this)

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



/* Vector<Ref<Resource> >::push_back(Ref<Resource>) [clone .isra.0] */

void __thiscall Vector<Ref<Resource>>::push_back(Vector<Ref<Resource>> *this,long *param_2)

{
  long *plVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar5 = CowData<Ref<Resource>>::resize<false>((CowData<Ref<Resource>> *)(this + 8),lVar6);
  if (iVar5 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar7 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8);
    lVar7 = lVar6 + -1;
    if (-1 < lVar7) {
      CowData<Ref<Resource>>::_copy_on_write((CowData<Ref<Resource>> *)(this + 8));
      pOVar2 = (Object *)*param_2;
      plVar1 = (long *)(*(long *)(this + 8) + lVar7 * 8);
      pOVar3 = (Object *)*plVar1;
      if (pOVar2 == pOVar3) {
        return;
      }
      *plVar1 = (long)pOVar2;
      if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *plVar1 = 0;
      }
      if (pOVar3 == (Object *)0x0) {
        return;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') {
        return;
      }
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 == '\0') {
        return;
      }
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false);
  return;
}



/* ImportDock::_reimport_and_cleanup() */

void __thiscall ImportDock::_reimport_and_cleanup(ImportDock *this)

{
  int *piVar1;
  code *pcVar2;
  Vector *pVVar3;
  CowData<char32_t> *this_00;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  Object *pOVar13;
  long *plVar14;
  Object *pOVar15;
  String *pSVar16;
  long in_FS_OFFSET;
  Vector *local_f8;
  undefined8 *local_d0;
  Object *local_c8;
  undefined8 local_c0;
  Object *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  Object *local_98;
  undefined8 local_90;
  HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
  local_88 [8];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 2;
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  if ((*(long **)(this + 0xa88) != (long *)0x0) &&
     (pSVar16 = (String *)**(long **)(this + 0xa88), pSVar16 != (String *)0x0)) {
    do {
      while( true ) {
        local_98 = (Object *)&_LC22;
        local_a8 = 0;
        local_90 = 0;
        String::parse_latin1((StrRange *)&local_a8);
        ResourceLoader::load(&local_b8,pSVar16,(StrRange *)&local_a8,1,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        pOVar13 = local_b8;
        pcVar2 = *(code **)(*(long *)local_b8 + 0x188);
        local_98 = (Object *)&_LC22;
        local_a8 = 0;
        local_90 = 0;
        String::parse_latin1((StrRange *)&local_a8);
        (*pcVar2)(pOVar13,(StrRange *)&local_a8,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        pOVar13 = local_b8;
        pcVar2 = *(code **)(*(long *)local_b8 + 0xa8);
        Variant::Variant((Variant *)local_58,true);
        if ((_reimport_and_cleanup()::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar9 = __cxa_guard_acquire(&_reimport_and_cleanup()::{lambda()#1}::operator()()::sname)
           , iVar9 != 0)) {
          _scs_create((char *)&_reimport_and_cleanup()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_reimport_and_cleanup()::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_reimport_and_cleanup()::{lambda()#1}::operator()()::sname);
        }
        (*pcVar2)(pOVar13,&_reimport_and_cleanup()::{lambda()#1}::operator()()::sname,
                  (Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        puVar10 = (undefined8 *)
                  HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                  ::operator[](local_88,pSVar16);
        pOVar13 = (Object *)*puVar10;
        pOVar15 = pOVar13;
        if (local_b8 != pOVar13) {
          *puVar10 = local_b8;
          if ((local_b8 != (Object *)0x0) && (cVar8 = RefCounted::reference(), cVar8 == '\0')) {
            *puVar10 = 0;
          }
          pOVar15 = local_b8;
          if (((pOVar13 != (Object *)0x0) &&
              (cVar8 = RefCounted::unreference(), pOVar15 = local_b8, cVar8 != '\0')) &&
             (cVar8 = predelete_handler(pOVar13), pOVar15 = local_b8, cVar8 != '\0')) {
            (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
            Memory::free_static(pOVar13,false);
            pOVar15 = local_b8;
          }
        }
        if (((pOVar15 != (Object *)0x0) &&
            (cVar8 = RefCounted::unreference(), pOVar13 = local_b8, cVar8 != '\0')) &&
           (cVar8 = predelete_handler(local_b8), cVar8 != '\0')) break;
        pSVar16 = *(String **)(pSVar16 + 8);
        if (pSVar16 == (String *)0x0) goto LAB_00108428;
      }
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
      pSVar16 = *(String **)(pSVar16 + 8);
    } while (pSVar16 != (String *)0x0);
  }
LAB_00108428:
  EditorResourcePreview::get_singleton();
  EditorResourcePreview::stop();
  _reimport(this);
  pOVar13 = EditorNode::singleton;
  if ((*(long *)(this + 0xa88) == 0) || (*(int *)(*(long *)(this + 0xa88) + 0x10) == 0)) {
    uVar6 = local_80._0_8_;
    if ((undefined8 *)local_80._0_8_ != (undefined8 *)0x0) {
      uVar7 = local_80._8_8_;
      if ((local_60._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0)) {
        piVar1 = (int *)(local_80._8_8_ +
                        (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) * 4);
        piVar12 = (int *)local_80._8_8_;
        puVar10 = (undefined8 *)local_80._0_8_;
        do {
          if (*piVar12 != 0) {
            pvVar5 = (void *)*puVar10;
            *piVar12 = 0;
            if ((*(long *)((long)pvVar5 + 0x18) != 0) &&
               (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
              pOVar13 = *(Object **)((long)pvVar5 + 0x18);
              cVar8 = predelete_handler(pOVar13);
              if (cVar8 != '\0') {
                (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
                Memory::free_static(pOVar13,false);
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            *puVar10 = 0;
          }
          piVar12 = piVar12 + 1;
          puVar10 = puVar10 + 1;
        } while (piVar1 != piVar12);
      }
      Memory::free_static((void *)uVar6,false);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)uVar7,false);
        return;
      }
      goto LAB_00108c47;
    }
  }
  else {
    local_98 = (Object *)0x0;
    String::parse_latin1((String *)&local_98,"");
    EditorNode::push_item(pOVar13,(String *)0x0,SUB81((String *)&local_98,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    iVar9 = EditorUndoRedoManager::get_singleton();
    EditorUndoRedoManager::clear_history(iVar9,true);
    local_d0 = (undefined8 *)0x0;
    ResourceCache::get_cached_resources((List *)&local_d0);
    local_b0 = 0;
    local_a0 = 0;
    if ((*(long **)(this + 0xa88) != (long *)0x0) &&
       (pSVar16 = (String *)**(long **)(this + 0xa88), pSVar16 != (String *)0x0)) {
      do {
        puVar10 = (undefined8 *)
                  HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
                  ::operator[](local_88,pSVar16);
        pOVar13 = (Object *)*puVar10;
        if ((pOVar13 == (Object *)0x0) || (cVar8 = RefCounted::reference(), cVar8 == '\0')) {
          if (*(long *)(*(long *)(this + 0xaa0) + 0x1b0) != 0) {
            local_c0 = 0;
            local_90 = 0;
            local_98 = (Object *)&_LC22;
            String::parse_latin1((StrRange *)&local_c0);
            ResourceLoader::load(&local_c8,pSVar16,(StrRange *)&local_c0,1,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            if (local_c8 != (Object *)0x0) {
              pOVar13 = (Object *)0x0;
              local_98 = (Object *)0x0;
              Vector<Ref<Resource>>::push_back
                        ((Vector<Ref<Resource>> *)&local_b8,(String *)&local_98);
              goto LAB_00108a7d;
            }
          }
        }
        else {
          if (*(long *)(*(long *)(this + 0xaa0) + 0x1b0) != 0) {
            local_c0 = 0;
            local_90 = 0;
            local_98 = (Object *)&_LC22;
            String::parse_latin1((StrRange *)&local_c0);
            ResourceLoader::load(&local_c8,pSVar16,(StrRange *)&local_c0,1,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            if (local_c8 != (Object *)0x0) {
              local_98 = pOVar13;
              cVar8 = RefCounted::reference();
              if (cVar8 == '\0') {
                local_98 = (Object *)0x0;
                Vector<Ref<Resource>>::push_back
                          ((Vector<Ref<Resource>> *)&local_b8,(String *)&local_98);
              }
              else {
                Vector<Ref<Resource>>::push_back((Vector<Ref<Resource>> *)&local_b8);
                cVar8 = RefCounted::unreference();
                if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar13), cVar8 != '\0')) {
                  (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
                  Memory::free_static(pOVar13,false);
                }
              }
LAB_00108a7d:
              pOVar15 = local_c8;
              if (local_c8 == (Object *)0x0) {
LAB_00108aae:
                local_98 = (Object *)0x0;
                Vector<Ref<Resource>>::push_back((Vector<Ref<Resource>> *)&local_a8);
              }
              else {
                local_98 = local_c8;
                cVar8 = RefCounted::reference();
                if (cVar8 == '\0') goto LAB_00108aae;
                Vector<Ref<Resource>>::push_back((Vector<Ref<Resource>> *)&local_a8);
                cVar8 = RefCounted::unreference();
                if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar15), cVar8 != '\0')) {
                  (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
                  Memory::free_static(pOVar15,false);
                }
              }
              if (((local_c8 != (Object *)0x0) &&
                  (cVar8 = RefCounted::unreference(), pOVar15 = local_c8, cVar8 != '\0')) &&
                 (cVar8 = predelete_handler(local_c8), cVar8 != '\0')) {
                (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
                Memory::free_static(pOVar15,false);
              }
              if (pOVar13 == (Object *)0x0) goto LAB_00108783;
            }
          }
          cVar8 = RefCounted::unreference();
          if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar13), cVar8 != '\0')) {
            (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
            Memory::free_static(pOVar13,false);
          }
        }
LAB_00108783:
        pSVar16 = *(String **)(pSVar16 + 8);
      } while (pSVar16 != (String *)0x0);
    }
    local_f8 = (Vector *)&local_b8;
    EditorNode::replace_resources_in_scenes((Vector *)EditorNode::singleton,local_f8);
    if (local_d0 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)*local_d0;
joined_r0x001087c2:
      if (puVar10 != (undefined8 *)0x0) {
        do {
          pVVar3 = (Vector *)*puVar10;
          if (pVVar3 == (Vector *)0x0) {
            EditorNode::replace_resources_in_object(EditorNode::singleton,(Vector *)0x0,local_f8);
          }
          else {
            cVar8 = RefCounted::reference();
            if (cVar8 == '\0') {
              EditorNode::replace_resources_in_object(EditorNode::singleton,(Vector *)0x0,local_f8);
            }
            else {
              EditorNode::replace_resources_in_object(EditorNode::singleton,pVVar3,local_f8);
              cVar8 = RefCounted::unreference();
              if ((cVar8 != '\0') && (cVar8 = predelete_handler((Object *)pVVar3), cVar8 != '\0'))
              goto code_r0x0010882e;
            }
          }
          puVar10 = (undefined8 *)puVar10[1];
          if (puVar10 == (undefined8 *)0x0) break;
        } while( true );
      }
    }
    plVar14 = *(long **)(this + 0xa88);
    if (plVar14 != (long *)0x0) {
      do {
        this_00 = (CowData<char32_t> *)*plVar14;
        if (this_00 == (CowData<char32_t> *)0x0) goto LAB_001088e7;
        if (*(long **)(this_00 + 0x18) == plVar14) {
          lVar11 = *(long *)(this_00 + 8);
          lVar4 = *(long *)(this_00 + 0x10);
          *plVar14 = lVar11;
          if (this_00 == (CowData<char32_t> *)plVar14[1]) {
            plVar14[1] = lVar4;
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 8) = lVar11;
            lVar11 = *(long *)(this_00 + 8);
          }
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x10) = lVar4;
          }
          CowData<char32_t>::_unref(this_00);
          Memory::free_static(this_00,false);
          *(int *)(plVar14 + 2) = (int)plVar14[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        plVar14 = *(long **)(this + 0xa88);
      } while ((int)plVar14[2] != 0);
      Memory::free_static(plVar14,false);
      *(undefined8 *)(this + 0xa88) = 0;
    }
LAB_001088e7:
    CowData<Ref<Resource>>::_unref((CowData<Ref<Resource>> *)&local_a0);
    CowData<Ref<Resource>>::_unref((CowData<Ref<Resource>> *)&local_b0);
    List<Ref<Resource>,DefaultAllocator>::~List((List<Ref<Resource>,DefaultAllocator> *)&local_d0);
    uVar6 = local_80._0_8_;
    if ((undefined8 *)local_80._0_8_ != (undefined8 *)0x0) {
      uVar7 = local_80._8_8_;
      if ((local_60._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0)) {
        piVar1 = (int *)(local_80._8_8_ +
                        (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) * 4);
        piVar12 = (int *)local_80._8_8_;
        puVar10 = (undefined8 *)local_80._0_8_;
        do {
          if (*piVar12 != 0) {
            pvVar5 = (void *)*puVar10;
            *piVar12 = 0;
            if ((*(long *)((long)pvVar5 + 0x18) != 0) &&
               (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
              pOVar13 = *(Object **)((long)pvVar5 + 0x18);
              cVar8 = predelete_handler(pOVar13);
              if (cVar8 != '\0') {
                (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
                Memory::free_static(pOVar13,false);
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            *puVar10 = 0;
          }
          piVar12 = piVar12 + 1;
          puVar10 = puVar10 + 1;
        } while (piVar12 != piVar1);
      }
      Memory::free_static((void *)uVar6,false);
      Memory::free_static((void *)uVar7,false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108c47:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010882e:
  (**(code **)(*(long *)pVVar3 + 0x140))(pVVar3);
  Memory::free_static(pVVar3,false);
  puVar10 = (undefined8 *)puVar10[1];
  goto joined_r0x001087c2;
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
  return (uint)CONCAT71(0x1186,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1186,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x1186,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1186,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1186,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ConfigFile::_getv(StringName const&, Variant&) const */

undefined8 ConfigFile::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_setv(StringName const&, Variant const&) */

undefined8 ConfigFile::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_validate_propertyv(PropertyInfo&) const */

void ConfigFile::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ConfigFile::_property_can_revertv(StringName const&) const */

undefined8 ConfigFile::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConfigFile::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConfigFile::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_notificationv(int, bool) */

void ConfigFile::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceImporter::has_advanced_options() const */

undefined8 ResourceImporter::has_advanced_options(void)

{
  return 0;
}



/* ResourceImporter::show_advanced_options(String const&) */

void ResourceImporter::show_advanced_options(String *param_1)

{
  return;
}



/* ResourceImporter::get_preset_count() const */

undefined8 ResourceImporter::get_preset_count(void)

{
  return 0;
}



/* ResourceImporter::get_preset_name(int) const */

undefined8 ResourceImporter::get_preset_name(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* ResourceImporter::handle_compatibility_options(HashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Variant> >
   >&) const */

void ResourceImporter::handle_compatibility_options(HashMap *param_1)

{
  return;
}



/* ResourceImporter::get_option_group_file() const */

ResourceImporter * __thiscall ResourceImporter::get_option_group_file(ResourceImporter *this)

{
  *(undefined8 *)this = 0;
  return this;
}



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* ImportDockParameters::is_class_ptr(void*) const */

uint __thiscall ImportDockParameters::is_class_ptr(ImportDockParameters *this,void *param_1)

{
  return (uint)CONCAT71(0x1186,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1184,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* ImportDockParameters::_validate_propertyv(PropertyInfo&) const */

void ImportDockParameters::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ImportDockParameters::_property_can_revertv(StringName const&) const */

undefined8 ImportDockParameters::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ImportDockParameters::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ImportDockParameters::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImportDockParameters::_notificationv(int, bool) */

void ImportDockParameters::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<ImportDock, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ImportDock,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ImportDock,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ImportDock, void, StringName const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ImportDock,void,StringName_const&,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ImportDock,void,StringName_const&,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ImportDock, void, StringName const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ImportDock,void,StringName_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ImportDock,void,StringName_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ImportDock, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ImportDock,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ImportDock,void,int> *this)

{
  return;
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



/* CallableCustomMethodPointer<ImportDock, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ImportDock,void>::get_argument_count
          (CallableCustomMethodPointer<ImportDock,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ImportDock, void, StringName const&, bool>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ImportDock,void,StringName_const&,bool>::get_argument_count
          (CallableCustomMethodPointer<ImportDock,void,StringName_const&,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ImportDock, void, StringName const&>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<ImportDock,void,StringName_const&>::get_argument_count
          (CallableCustomMethodPointer<ImportDock,void,StringName_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ImportDock, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ImportDock,void,int>::get_argument_count
          (CallableCustomMethodPointer<ImportDock,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ImportDock, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ImportDock,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ImportDock,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ImportDock, void, StringName const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ImportDock,void,StringName_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ImportDock,void,StringName_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ImportDock, void, StringName const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ImportDock,void,StringName_const&,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ImportDock,void,StringName_const&,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ImportDock, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ImportDock,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ImportDock,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001173b0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001173b0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
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



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118478;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00118478;
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



/* ImportDock::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ImportDock::_property_get_revertv(StringName *param_1,Variant *param_2)

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



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011d008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ImportDock::_property_can_revertv(StringName const&) const */

undefined8 ImportDock::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011d008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
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
LAB_00109303:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109303;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010936e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010936e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<ImportDock, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ImportDock,void,int>::get_object
          (CallableCustomMethodPointer<ImportDock,void,int> *this)

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
      goto LAB_0010949d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010949d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010949d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ImportDock, void, StringName const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ImportDock,void,StringName_const&>::get_object
          (CallableCustomMethodPointer<ImportDock,void,StringName_const&> *this)

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
      goto LAB_0010959d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010959d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010959d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ImportDock, void, StringName const&, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ImportDock,void,StringName_const&,bool>::get_object
          (CallableCustomMethodPointer<ImportDock,void,StringName_const&,bool> *this)

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
      goto LAB_0010969d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010969d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010969d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ImportDock, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ImportDock,void>::get_object
          (CallableCustomMethodPointer<ImportDock,void> *this)

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
      goto LAB_0010979d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010979d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010979d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ImportDock::_validate_propertyv(PropertyInfo&) const */

void ImportDock::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011d010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0011d010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0011d010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* ImportDock::_setv(StringName const&, Variant const&) */

undefined8 ImportDock::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011d018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011d018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011d018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00109b68) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011d020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00109bd8) */
/* ImportDock::_getv(StringName const&, Variant&) const */

undefined8 ImportDock::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011d020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00109c48) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011d020 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x1186,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1186,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1186,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1186,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1186,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1186,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1186,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1186,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1186,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1186,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ImportDock::is_class_ptr(void*) const */

ulong ImportDock::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x1186,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x1186,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1186,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1186,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1186,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1186,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* SortArray<List<Pair<String, String>, DefaultAllocator>::Element*, List<Pair<String, String>,
   DefaultAllocator>::AuxiliaryComparator<PairSort<String, String> >, true>::adjust_heap(long, long,
   long, List<Pair<String, String>, DefaultAllocator>::Element*, List<Pair<String, String>,
   DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<Pair<String,String>,DefaultAllocator>::Element*,List<Pair<String,String>,DefaultAllocator>::AuxiliaryComparator<PairSort<String,String>>,true>
     ::adjust_heap(long param_1,long param_2,long param_3,Element *param_4,Element **param_5)

{
  char cVar1;
  long lVar2;
  String *pSVar3;
  String *this;
  long lVar4;
  Element **ppEVar5;
  Element **ppEVar6;
  long lVar7;
  long local_60;
  
  lVar4 = param_2 * 2 + 2;
  local_60 = param_2;
  if (lVar4 < param_3) {
    do {
      pSVar3 = (String *)param_5[lVar4 + -1 + param_1];
      this = (String *)param_5[param_1 + lVar4];
      cVar1 = String::operator!=(this,pSVar3);
      if (cVar1 == '\0') {
        pSVar3 = pSVar3 + 8;
        this = this + 8;
      }
      cVar1 = String::operator<(this,pSVar3);
      lVar2 = lVar4 + -1;
      ppEVar6 = param_5 + lVar4 + -1 + param_1;
      lVar7 = lVar4;
      if (cVar1 == '\0') {
        lVar7 = lVar4 + 1;
        lVar2 = lVar4;
        ppEVar6 = param_5 + param_1 + lVar4;
      }
      lVar4 = lVar7 * 2;
      param_5[local_60 + param_1] = *ppEVar6;
      local_60 = lVar2;
    } while (lVar4 < param_3);
    ppEVar5 = ppEVar6;
    if (lVar4 == param_3) goto LAB_00109f70;
  }
  else {
    ppEVar6 = param_5 + param_2 + param_1;
    if (lVar4 != param_3) goto LAB_00109f30;
LAB_00109f70:
    lVar2 = lVar4 + -1;
    ppEVar5 = param_5 + param_1 + lVar2;
    *ppEVar6 = *ppEVar5;
  }
  lVar4 = (lVar2 + -1) - (lVar2 + -1 >> 0x3f);
  ppEVar6 = ppEVar5;
  if (param_2 < lVar2) {
    do {
      lVar7 = lVar4 >> 1;
      ppEVar5 = param_5 + param_1 + lVar7;
      pSVar3 = (String *)*ppEVar5;
      cVar1 = String::operator!=(pSVar3,(String *)param_4);
      if (cVar1 == '\0') {
        cVar1 = String::operator<(pSVar3 + 8,(String *)(param_4 + 8));
      }
      else {
        cVar1 = String::operator<(pSVar3,(String *)param_4);
      }
      ppEVar6 = param_5 + lVar2 + param_1;
      if (cVar1 == '\0') break;
      param_5[lVar2 + param_1] = *ppEVar5;
      lVar4 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
      lVar2 = lVar7;
      ppEVar6 = ppEVar5;
    } while (param_2 < lVar7);
  }
LAB_00109f30:
  *ppEVar6 = param_4;
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
      if (StringName::configured == '\0') goto LAB_00109fe0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00109fe0:
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
      if (StringName::configured == '\0') goto LAB_0010a040;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010a040:
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
      if (StringName::configured == '\0') goto LAB_0010a0a0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010a0a0:
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
      if (StringName::configured == '\0') goto LAB_0010a110;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010a110:
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



/* ImportDockParameters::_get_class_namev() const */

undefined8 * ImportDockParameters::_get_class_namev(void)

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
LAB_0010a1e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a1e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ImportDockParameters");
      goto LAB_0010a24e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ImportDockParameters");
LAB_0010a24e:
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
LAB_0010a2d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a2d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010a33e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010a33e:
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
LAB_0010a3c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a3c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010a42e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010a42e:
  return &_get_class_namev()::_class_name_static;
}



/* ImportDock::_get_class_namev() const */

undefined8 * ImportDock::_get_class_namev(void)

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
LAB_0010a4a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a4a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ImportDock");
      goto LAB_0010a50e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ImportDock");
LAB_0010a50e:
  return &_get_class_namev()::_class_name_static;
}



/* ConfigFile::_get_class_namev() const */

undefined8 * ConfigFile::_get_class_namev(void)

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
LAB_0010a583:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a583;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_0010a5ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_0010a5ee:
  return &_get_class_namev()::_class_name_static;
}



/* SortArray<List<Pair<String, String>, DefaultAllocator>::Element*, List<Pair<String, String>,
   DefaultAllocator>::AuxiliaryComparator<PairSort<String, String> >, true>::introsort(long, long,
   List<Pair<String, String>, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<Pair<String,String>,DefaultAllocator>::Element*,List<Pair<String,String>,DefaultAllocator>::AuxiliaryComparator<PairSort<String,String>>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  Element **ppEVar1;
  String *pSVar2;
  String *pSVar3;
  Element *pEVar4;
  bool bVar5;
  char cVar6;
  Element **ppEVar7;
  Element **ppEVar8;
  long lVar9;
  long lVar10;
  long local_60;
  long local_58;
  
  lVar10 = param_2 - param_1;
  if (0x10 < lVar10) {
    local_60 = param_2;
    if (param_4 != 0) {
      ppEVar7 = param_3 + param_1;
      local_58 = param_2;
LAB_0010a6e1:
      param_4 = param_4 + -1;
      ppEVar8 = param_3 + (lVar10 >> 1) + param_1;
      ppEVar1 = param_3 + local_58 + -1;
      pSVar2 = (String *)*ppEVar8;
      pSVar3 = (String *)*ppEVar7;
      cVar6 = String::operator!=(pSVar3,pSVar2);
      if (cVar6 == '\0') {
        cVar6 = String::operator<(pSVar3 + 8,pSVar2 + 8);
      }
      else {
        cVar6 = String::operator<(pSVar3,pSVar2);
      }
      pSVar2 = (String *)*ppEVar1;
      if (cVar6 == '\0') {
        pSVar3 = (String *)*ppEVar7;
        cVar6 = String::operator!=(pSVar3,pSVar2);
        if (cVar6 == '\0') {
          cVar6 = String::operator<(pSVar3 + 8,pSVar2 + 8);
        }
        else {
          cVar6 = String::operator<(pSVar3,pSVar2);
        }
        if (cVar6 == '\0') {
          pSVar2 = (String *)*ppEVar8;
          pSVar3 = (String *)*ppEVar1;
          cVar6 = String::operator!=(pSVar2,pSVar3);
          if (cVar6 == '\0') {
            cVar6 = String::operator<(pSVar2 + 8,pSVar3 + 8);
          }
          else {
            cVar6 = String::operator<(pSVar2,pSVar3);
          }
          if (cVar6 != '\0') {
            ppEVar8 = ppEVar1;
          }
          goto LAB_0010a7a0;
        }
      }
      else {
        pSVar3 = (String *)*ppEVar8;
        cVar6 = String::operator!=(pSVar3,pSVar2);
        if (cVar6 == '\0') {
          cVar6 = String::operator<(pSVar3 + 8,pSVar2 + 8);
        }
        else {
          cVar6 = String::operator<(pSVar3,pSVar2);
        }
        if (cVar6 != '\0') goto LAB_0010a7a0;
        pSVar2 = (String *)*ppEVar1;
        pSVar3 = (String *)*ppEVar7;
        cVar6 = String::operator!=(pSVar3,pSVar2);
        if (cVar6 == '\0') {
          cVar6 = String::operator<(pSVar3 + 8,pSVar2 + 8);
        }
        else {
          cVar6 = String::operator<(pSVar3,pSVar2);
        }
        ppEVar8 = ppEVar1;
        if (cVar6 != '\0') goto LAB_0010a7a0;
      }
      ppEVar8 = ppEVar7;
LAB_0010a7a0:
      pSVar2 = (String *)*ppEVar8;
      lVar10 = local_58;
      local_60 = param_1;
      do {
        pSVar3 = (String *)param_3[local_60];
        cVar6 = String::operator!=(pSVar3,pSVar2);
        if (cVar6 == '\0') {
          cVar6 = String::operator<(pSVar3 + 8,pSVar2 + 8);
        }
        else {
          cVar6 = String::operator<(pSVar3,pSVar2);
        }
        if (cVar6 == '\0') {
LAB_0010a813:
          lVar10 = lVar10 + -1;
          ppEVar8 = param_3 + lVar10;
          while( true ) {
            pSVar3 = (String *)*ppEVar8;
            cVar6 = String::operator!=(pSVar2,pSVar3);
            if (cVar6 == '\0') {
              cVar6 = String::operator<(pSVar2 + 8,pSVar3 + 8);
            }
            else {
              cVar6 = String::operator<(pSVar2,pSVar3);
            }
            if (cVar6 == '\0') goto joined_r0x0010a87a;
            if (param_1 == lVar10) break;
            lVar10 = lVar10 + -1;
            ppEVar8 = ppEVar8 + -1;
          }
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                           "bad comparison function; sorting will be broken",0,0);
joined_r0x0010a87a:
          if (lVar10 <= local_60) goto LAB_0010a87c;
          pEVar4 = param_3[local_60];
          param_3[local_60] = *ppEVar8;
          *ppEVar8 = pEVar4;
        }
        else if (local_58 + -1 == local_60) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_0010a813;
        }
        local_60 = local_60 + 1;
      } while( true );
    }
LAB_0010a98c:
    ppEVar7 = param_3 + param_1;
    for (lVar9 = lVar10 + -2 >> 1; adjust_heap(param_1,lVar9,lVar10,ppEVar7[lVar9],param_3),
        lVar9 != 0; lVar9 = lVar9 + -1) {
    }
    lVar10 = (local_60 + -1) - param_1;
    do {
      pEVar4 = ppEVar7[lVar10];
      ppEVar7[lVar10] = *ppEVar7;
      adjust_heap(param_1,0,lVar10,pEVar4,param_3);
      bVar5 = 1 < lVar10;
      lVar10 = lVar10 + -1;
    } while (bVar5);
  }
  return;
LAB_0010a87c:
  lVar10 = local_60 - param_1;
  introsort(local_60,local_58,param_3,param_4);
  if (lVar10 < 0x11) {
    return;
  }
  local_58 = local_60;
  if (param_4 == 0) goto LAB_0010a98c;
  goto LAB_0010a6e1;
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



/* WARNING: Removing unreachable block (ram,0x0010abf0) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011d028 != Container::_notification) {
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
  if ((code *)PTR__notification_0011d028 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  if (param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
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



/* ImportDock::_notificationv(int, bool) */

void __thiscall ImportDock::_notificationv(ImportDock *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification((int)this);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  _notification((int)this);
  return;
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
    if (*in_RSI != 0) goto LAB_0010b54c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_0010b54c:
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
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_0010b998;
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
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC17) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_0010b875;
LAB_0010b9d6:
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
      goto LAB_0010b998;
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
    if (lVar30 == 0) goto LAB_0010b9d6;
LAB_0010b875:
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
LAB_0010b998:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
}



/* void Ref<ConfigFile>::instantiate<>() */

void __thiscall Ref<ConfigFile>::instantiate<>(Ref<ConfigFile> *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  RefCounted *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (RefCounted *)operator_new(0x1b0,"");
  pRVar3 = this_00;
  for (lVar2 = 0x36; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00117510;
  *(undefined8 *)(this_00 + 0x1a8) = 2;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
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
    if (this_00 == (RefCounted *)pOVar5) goto LAB_0010bbd5;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_0010bbd5;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_0010bbd5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* Ref<ResourceImporter>::unref() */

void __thiscall Ref<ResourceImporter>::unref(Ref<ResourceImporter> *this)

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



/* List<Ref<ResourceImporter>, DefaultAllocator>::~List() */

undefined8 __thiscall
List<Ref<ResourceImporter>,DefaultAllocator>::~List
          (List<Ref<ResourceImporter>,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_28;
  
  plVar7 = *(long **)this;
  if (plVar7 == (long *)0x0) {
    return uStack_28;
  }
  do {
    plVar1 = (long *)*plVar7;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar7[2] != 0) {
        uVar6 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar6;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar7) {
      lVar5 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar7 = lVar5;
      if (plVar1 == (long *)plVar7[1]) {
        plVar7[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar5;
        lVar5 = plVar1[1];
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar2;
      }
      if (*plVar1 != 0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          pOVar3 = (Object *)*plVar1;
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar7 = *(long **)this;
  } while ((int)plVar7[2] != 0);
  uVar6 = Memory::free_static(plVar7,false);
  return uVar6;
}



/* void List<Pair<String, String>, DefaultAllocator>::sort_custom<PairSort<String, String> >() */

void __thiscall
List<Pair<String,String>,DefaultAllocator>::sort_custom<PairSort<String,String>>
          (List<Pair<String,String>,DefaultAllocator> *this)

{
  int iVar1;
  String *pSVar2;
  undefined8 *puVar3;
  char cVar4;
  Element *pEVar5;
  Element **__src;
  long lVar6;
  Element **ppEVar7;
  Element *pEVar8;
  Element **ppEVar9;
  String *pSVar10;
  Element *pEVar11;
  long local_68;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar5 = (Element *)(long)iVar1;
  __src = (Element **)Memory::alloc_static((long)pEVar5 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    __src[-1] = pEVar5;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar7 = __src;
    for (pEVar11 = (Element *)**(long **)this; pEVar11 != (Element *)0x0;
        pEVar11 = *(Element **)(pEVar11 + 0x10)) {
      *ppEVar7 = pEVar11;
      ppEVar7 = ppEVar7 + 1;
    }
  }
  lVar6 = 0;
  pEVar11 = pEVar5;
  do {
    pEVar11 = (Element *)((long)pEVar11 >> 1);
    lVar6 = lVar6 + 1;
  } while (pEVar11 != (Element *)0x1);
  SortArray<List<Pair<String,String>,DefaultAllocator>::Element*,List<Pair<String,String>,DefaultAllocator>::AuxiliaryComparator<PairSort<String,String>>,true>
  ::introsort(0,(long)pEVar5,__src,lVar6 * 2);
  if ((long)pEVar5 < 0x11) {
    pEVar11 = (Element *)0x1;
    pEVar8 = *__src;
    do {
      while( true ) {
        pSVar10 = (String *)__src[(long)pEVar11];
        cVar4 = String::operator!=(pSVar10,(String *)pEVar8);
        if (cVar4 == '\0') {
          cVar4 = String::operator<(pSVar10 + 8,(String *)pEVar8 + 8);
        }
        else {
          cVar4 = String::operator<(pSVar10,(String *)pEVar8);
        }
        if (cVar4 == '\0') break;
        memmove(__src + 1,__src,(long)pEVar11 * 8);
        pEVar11 = pEVar11 + 1;
        *__src = (Element *)pSVar10;
        pEVar8 = (Element *)pSVar10;
        if (pEVar5 == pEVar11) goto LAB_0010c2cb;
      }
      ppEVar7 = __src + (long)pEVar11;
      while( true ) {
        pSVar2 = (String *)ppEVar7[-1];
        cVar4 = String::operator!=(pSVar10,pSVar2);
        if (cVar4 == '\0') {
          cVar4 = String::operator<(pSVar10 + 8,pSVar2 + 8);
        }
        else {
          cVar4 = String::operator<(pSVar10,pSVar2);
        }
        if (cVar4 == '\0') goto LAB_0010c2a1;
        if (ppEVar7 == __src + 1) break;
        *ppEVar7 = ppEVar7[-1];
        ppEVar7 = ppEVar7 + -1;
      }
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_0010c2a1:
      *ppEVar7 = (Element *)pSVar10;
      pEVar11 = pEVar11 + 1;
      pSVar10 = (String *)*__src;
      pEVar8 = (Element *)pSVar10;
    } while (pEVar5 != pEVar11);
  }
  else {
    lVar6 = 1;
    do {
      while( true ) {
        local_68 = lVar6;
        pSVar10 = (String *)*__src;
        pSVar2 = (String *)__src[local_68];
        cVar4 = String::operator!=(pSVar2,pSVar10);
        if (cVar4 == '\0') {
          cVar4 = String::operator<(pSVar2 + 8,pSVar10 + 8);
        }
        else {
          cVar4 = String::operator<(pSVar2,pSVar10);
        }
        if (cVar4 == '\0') break;
        memmove(__src + 1,__src,local_68 * 8);
        *__src = (Element *)pSVar2;
        lVar6 = local_68 + 1;
        if (local_68 + 1 == 0x10) goto LAB_0010c0c9;
      }
      ppEVar7 = __src + local_68;
      while( true ) {
        pSVar10 = (String *)ppEVar7[-1];
        cVar4 = String::operator!=(pSVar2,pSVar10);
        if (cVar4 == '\0') {
          cVar4 = String::operator<(pSVar2 + 8,pSVar10 + 8);
        }
        else {
          cVar4 = String::operator<(pSVar2,pSVar10);
        }
        if (cVar4 == '\0') {
          *ppEVar7 = (Element *)pSVar2;
          goto LAB_0010c0b6;
        }
        ppEVar9 = ppEVar7 + -1;
        if (__src == ppEVar9) break;
        *ppEVar7 = *ppEVar9;
        ppEVar7 = ppEVar9;
      }
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
      *ppEVar7 = (Element *)pSVar2;
LAB_0010c0b6:
      lVar6 = local_68 + 1;
    } while (local_68 + 1 != 0x10);
LAB_0010c0c9:
    pEVar11 = (Element *)(local_68 + 1);
    do {
      pSVar10 = (String *)__src[(long)pEVar11];
      ppEVar7 = __src + (long)pEVar11;
      pEVar8 = pEVar11;
      while( true ) {
        pEVar8 = pEVar8 + -1;
        pSVar2 = (String *)ppEVar7[-1];
        cVar4 = String::operator!=(pSVar10,pSVar2);
        if (cVar4 == '\0') {
          cVar4 = String::operator<(pSVar10 + 8,pSVar2 + 8);
        }
        else {
          cVar4 = String::operator<(pSVar10,pSVar2);
        }
        if (cVar4 == '\0') goto LAB_0010c382;
        if (pEVar8 == (Element *)0x0) break;
        *ppEVar7 = ppEVar7[-1];
        ppEVar7 = ppEVar7 + -1;
      }
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_0010c382:
      *ppEVar7 = (Element *)pSVar10;
      pEVar11 = pEVar11 + 1;
    } while (pEVar5 != pEVar11);
    pSVar10 = (String *)*__src;
  }
LAB_0010c2cb:
  puVar3 = *(undefined8 **)this;
  *puVar3 = pSVar10;
  *(undefined8 *)(pSVar10 + 0x18) = 0;
  *(Element **)(*__src + 0x10) = __src[1];
  pEVar11 = __src[(long)(pEVar5 + -1)];
  puVar3[1] = pEVar11;
  *(Element **)(pEVar11 + 0x18) = __src[(long)(pEVar5 + -2)];
  *(undefined8 *)(__src[(long)(pEVar5 + -1)] + 0x10) = 0;
  if (iVar1 != 2) {
    ppEVar7 = __src;
    do {
      ppEVar9 = ppEVar7 + 1;
      *(Element **)(ppEVar7[1] + 0x18) = *ppEVar7;
      *(Element **)(*ppEVar9 + 0x10) = ppEVar7[2];
      ppEVar7 = ppEVar9;
    } while (__src + (iVar1 - 2) != ppEVar9);
  }
  Memory::free_static(__src,true);
  return;
}



/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::clear() */

void __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::clear
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(this + 0x24) != 0) {
    if ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) == 0) ||
       (memset(*(void **)(this + 0x18),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2),
       *(int *)(this + 0x24) != 0)) {
      lVar1 = 0;
      while( true ) {
        if ((StringName::configured != '\0') && (*(long *)(lVar2 + lVar1 * 8) != 0)) {
          StringName::unref();
        }
        lVar1 = lVar1 + 1;
        if (*(uint *)(this + 0x24) <= (uint)lVar1) break;
        lVar2 = *(long *)this;
      }
    }
    *(undefined4 *)(this + 0x24) = 0;
    return;
  }
  return;
}



/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)*puVar2;
    if (piVar1 == (int *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)(piVar1 + 10) == puVar2) {
      *puVar2 = *(undefined8 *)(piVar1 + 6);
      if (piVar1 == (int *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)(piVar1 + 8);
      }
      if (*(long *)(piVar1 + 8) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 8) + 0x18) = *(undefined8 *)(piVar1 + 6);
      }
      if (*(long *)(piVar1 + 6) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 6) + 0x20) = *(undefined8 *)(piVar1 + 8);
      }
      if (Variant::needs_deinit[*piVar1] != '\0') {
        Variant::_clear_internal();
      }
      Memory::free_static(piVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* Ref<ConfigFile>::unref() */

void __thiscall Ref<ConfigFile>::unref(Ref<ConfigFile> *this)

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



/* List<Ref<Resource>, DefaultAllocator>::~List() */

undefined8 __thiscall
List<Ref<Resource>,DefaultAllocator>::~List(List<Ref<Resource>,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_28;
  
  plVar7 = *(long **)this;
  if (plVar7 == (long *)0x0) {
    return uStack_28;
  }
  do {
    plVar1 = (long *)*plVar7;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar7[2] != 0) {
        uVar6 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar6;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar7) {
      lVar5 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar7 = lVar5;
      if (plVar1 == (long *)plVar7[1]) {
        plVar7[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar5;
        lVar5 = plVar1[1];
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar2;
      }
      if (*plVar1 != 0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          pOVar3 = (Object *)*plVar1;
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar7 = *(long **)this;
  } while ((int)plVar7[2] != 0);
  uVar6 = Memory::free_static(plVar7,false);
  return uVar6;
}



/* Callable create_custom_callable_function_pointer<ImportDock, int>(ImportDock*, char const*, void
   (ImportDock::*)(int)) */

ImportDock *
create_custom_callable_function_pointer<ImportDock,int>
          (ImportDock *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC22;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00118238;
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



/* Callable create_custom_callable_function_pointer<ImportDock>(ImportDock*, char const*, void
   (ImportDock::*)()) */

ImportDock *
create_custom_callable_function_pointer<ImportDock>
          (ImportDock *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC22;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001183e8;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* ConfigFile::_initialize_classv() */

void ConfigFile::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_0011d038 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConfigFile";
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
    if ((code *)PTR__bind_methods_0011d030 != RefCounted::_bind_methods) {
      ConfigFile::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010cd78) */
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



/* ImportDockParameters::_initialize_classv() */

void ImportDockParameters::_initialize_classv(void)

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
    local_48 = "ImportDockParameters";
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010d168) */
/* String vformat<long>(String const&, long const) */

String * vformat<long>(String *param_1,long param_2)

{
  char cVar1;
  Variant *this;
  long in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,(bool *)param_2);
  *(undefined8 *)param_1 = local_b8[0];
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
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



/* ImportDockParameters::get_class() const */

void ImportDockParameters::get_class(void)

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



/* ImportDock::get_class() const */

void ImportDock::get_class(void)

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



/* ConfigFile::get_class() const */

void ConfigFile::get_class(void)

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
    if (*in_RSI != 0) goto LAB_0010d82c;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_0010d82c:
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
              goto LAB_0010db8b;
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
  if ((float)uVar28 * __LC17 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0010db8b;
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
LAB_0010db8b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
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
LAB_0010df67:
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
      goto LAB_0010df67;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
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
    if (cVar5 != '\0') goto LAB_0010e06b;
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
      if (cVar5 != '\0') goto LAB_0010e06b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010e06b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::is_class(String const&) const */

undefined8 __thiscall ConfigFile::is_class(ConfigFile *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010e29b;
  }
  cVar4 = String::operator==(param_1,"ConfigFile");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010e29b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImportDockParameters::is_class(String const&) const */

undefined8 __thiscall ImportDockParameters::is_class(ImportDockParameters *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010e3eb;
  }
  cVar5 = String::operator==(param_1,"ImportDockParameters");
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
      if (cVar5 != '\0') goto LAB_0010e3eb;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010e3eb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImportDock::ImportDock() [clone .cold] */

void __thiscall ImportDock::ImportDock(ImportDock *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ImportDock::_bind_methods() [clone .cold] */

void ImportDock::_bind_methods(void)

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



/* CowData<Ref<Resource> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Resource>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<Resource> > > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
::operator[](HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
  Object *pOVar4;
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
  char cVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  void *pvVar43;
  ulong uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint *puVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0010ec80:
    uVar40 = (ulong)uVar55;
    uVar44 = uVar40 * 4;
    uVar48 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar43 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar43 + uVar48)) && (pvVar43 < (void *)((long)pvVar2 + uVar44))
         ) {
        uVar44 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar44 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar44 * 8) = 0;
          uVar44 = uVar44 + 1;
        } while (uVar40 != uVar44);
        goto LAB_0010eb02;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_0010eb06:
      if (iVar45 != 0) {
LAB_0010eb0e:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar52 = String::hash();
        uVar40 = CONCAT44(0,uVar38);
        lVar53 = *(long *)(this + 0x10);
        uVar39 = 1;
        if (uVar52 != 0) {
          uVar39 = uVar52;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar3;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar40;
        lVar46 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(lVar53 + lVar46 * 4);
        uVar51 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if (uVar39 == uVar52) {
              cVar37 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar37 != '\0') {
                pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
                pOVar4 = *(Object **)(pauVar42[1] + 8);
                if (pOVar4 != (Object *)0x0) {
                  *(undefined8 *)(pauVar42[1] + 8) = 0;
                  cVar37 = RefCounted::unreference();
                  if ((cVar37 != '\0') && (cVar37 = predelete_handler(pOVar4), cVar37 != '\0')) {
                    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                    Memory::free_static(pOVar4,false);
                  }
                  pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
                }
                goto LAB_0010e9cb;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar51 + 1) * lVar3;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar40;
            lVar46 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(lVar53 + lVar46 * 4);
            uVar51 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar3, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar40, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar51) - SUB164(auVar19 * auVar35,8)) * lVar3,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar40, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar40 = (ulong)uVar55;
      goto LAB_0010e614;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_0010e614;
    if (iVar45 != 0) goto LAB_0010eb0e;
LAB_0010e63a:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010e9cb;
    }
    uVar40 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar40 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar43 = *(void **)(this + 8);
    uVar40 = uVar48 * 4;
    uVar44 = uVar48 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar38 != 0) {
      uVar40 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar40 * 4);
        if (uVar55 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar51 = 0;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar39);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar55 * lVar53;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar44;
          lVar46 = SUB168(auVar5 * auVar21,8);
          puVar50 = (uint *)(lVar3 + lVar46 * 4);
          iVar45 = SUB164(auVar5 * auVar21,8);
          uVar52 = *puVar50;
          uVar41 = *(undefined8 *)((long)pvVar43 + uVar40 * 8);
          while (uVar52 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar52 * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar39 + iVar45) - SUB164(auVar6 * auVar22,8)) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar44;
            uVar54 = SUB164(auVar7 * auVar23,8);
            uVar49 = uVar41;
            if (uVar54 < uVar51) {
              *puVar50 = uVar55;
              puVar1 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar1;
              *puVar1 = uVar41;
              uVar55 = uVar52;
              uVar51 = uVar54;
            }
            uVar51 = uVar51 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar44;
            lVar46 = SUB168(auVar8 * auVar24,8);
            puVar50 = (uint *)(lVar3 + lVar46 * 4);
            iVar45 = SUB164(auVar8 * auVar24,8);
            uVar41 = uVar49;
            uVar52 = *puVar50;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar41;
          *puVar50 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar38 != uVar40);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    uVar40 = CONCAT44(0,uVar55);
    if (iVar45 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar38 = 1;
      if (uVar39 != 0) {
        uVar38 = uVar39;
      }
      uVar51 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar3;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      lVar46 = SUB168(auVar13 * auVar29,8);
      uVar39 = *(uint *)(lVar53 + lVar46 * 4);
      uVar52 = SUB164(auVar13 * auVar29,8);
      if (uVar39 != 0) {
        do {
          if (uVar38 == uVar39) {
            cVar37 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),param_1
                                       );
            if (cVar37 != '\0') {
              pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
              goto LAB_0010e9cb;
            }
            lVar53 = *(long *)(this + 0x10);
          }
          uVar51 = uVar51 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar52 + 1) * lVar3;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar40;
          lVar46 = SUB168(auVar14 * auVar30,8);
          uVar39 = *(uint *)(lVar53 + lVar46 * 4);
          uVar52 = SUB164(auVar14 * auVar30,8);
        } while ((uVar39 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar39 * lVar3, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar40, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar52 + uVar55) - SUB164(auVar15 * auVar31,8)) * lVar3,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar40, uVar51 <= SUB164(auVar16 * auVar32,8)));
      }
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_0010ec80;
LAB_0010eb02:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_0010eb06;
    }
LAB_0010e614:
    if ((float)uVar40 * __LC17 < (float)(iVar45 + 1)) goto LAB_0010e63a;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar42[1] = 0;
    *pauVar42 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar42[1] = 0;
    *(undefined8 *)*pauVar42 = 0;
    *(undefined8 *)(*pauVar42 + 8) = 0;
    if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar42 + 1),(CowData *)local_58);
    }
  }
  *(undefined8 *)(pauVar42[1] + 8) = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar1 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar1;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar38 != 0) {
    uVar55 = uVar38;
  }
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar55 * lVar53;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar47 = SUB168(auVar9 * auVar25,8);
  lVar46 = *(long *)(this + 8);
  puVar50 = (uint *)(lVar3 + lVar47 * 4);
  iVar45 = SUB164(auVar9 * auVar25,8);
  uVar39 = *puVar50;
  pauVar57 = pauVar42;
  if (uVar39 != 0) {
    uVar52 = 0;
    pauVar56 = pauVar42;
    do {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar39 * lVar53;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar40;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)((iVar45 + uVar38) - SUB164(auVar10 * auVar26,8)) * lVar53;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar40;
      uVar51 = SUB164(auVar11 * auVar27,8);
      pauVar57 = pauVar56;
      if (uVar51 < uVar52) {
        *puVar50 = uVar55;
        puVar1 = (undefined8 *)(lVar46 + lVar47 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar1;
        *puVar1 = pauVar56;
        uVar52 = uVar51;
        uVar55 = uVar39;
      }
      uVar52 = uVar52 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar53;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      lVar47 = SUB168(auVar12 * auVar28,8);
      puVar50 = (uint *)(lVar3 + lVar47 * 4);
      iVar45 = SUB164(auVar12 * auVar28,8);
      uVar39 = *puVar50;
      pauVar56 = pauVar57;
    } while (uVar39 != 0);
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar57;
  *puVar50 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010e9cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar42[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<Pair<String, String>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<String,String>,DefaultAllocator>::~List(List<Pair<String,String>,DefaultAllocator> *this)

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
    if (*(long **)(this_00 + 0x20) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x10);
      lVar1 = *(long *)(this_00 + 0x18);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
        lVar2 = *(long *)(this_00 + 0x10);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x18) = lVar1;
      }
      CowData<char32_t>::_unref(this_00 + 8);
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



/* CallableCustomMethodPointer<ImportDock, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ImportDock,void>::call
          (CallableCustomMethodPointer<ImportDock,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010f0bf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f0bf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f170;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f0bf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC80,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f170:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ImportDock, void, StringName const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ImportDock,void,StringName_const&>::call
          (CallableCustomMethodPointer<ImportDock,void,StringName_const&> *this,Variant **param_1,
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
  Variant local_38;
  undefined7 uStack_37;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38 = (Variant)0x0;
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
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar3 = _LC81;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_StringName(&local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),&local_38);
            if ((StringName::configured != '\0') && (CONCAT71(uStack_37,local_38) != 0)) {
              StringName::unref();
            }
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0010f24e;
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
  String::operator+((String *)&local_38,(String *)local_48);
  _err_print_error(&_LC80,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   &local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010f24e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ImportDock, void, StringName const&, bool>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ImportDock,void,StringName_const&,bool>::call
          (CallableCustomMethodPointer<ImportDock,void,StringName_const&,bool> *this,
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
  Variant local_48;
  undefined7 uStack_47;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48 = (Variant)0x0;
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
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
            uVar3 = _LC82;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            bVar8 = Variant::operator_cast_to_bool(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar3 = _LC81;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_StringName(&local_48);
            (*pcVar7)((long *)(lVar1 + lVar2),&local_48,bVar8);
            if ((StringName::configured != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
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
        goto LAB_0010f4c5;
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
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC80,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   &local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010f4c5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ImportDock, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ImportDock,void,int>::call
          (CallableCustomMethodPointer<ImportDock,void,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_0010f868;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010f868;
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
        uVar3 = _LC83;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010f919;
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
LAB_0010f868:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC80,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f919:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar5 != '\0') goto LAB_0010fa2b;
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
      if (cVar5 != '\0') goto LAB_0010fa2b;
    }
    cVar5 = String::operator==(param_1,"Node");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Object::is_class((Object *)this,param_1);
        return uVar6;
      }
      goto LAB_0010fb2e;
    }
  }
LAB_0010fa2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fb2e:
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
    if (cVar5 != '\0') goto LAB_0010fc4b;
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
      if (cVar5 != '\0') goto LAB_0010fc4b;
    }
    cVar5 = String::operator==(param_1,"Control");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar6;
      }
      goto LAB_0010fd4e;
    }
  }
LAB_0010fc4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fd4e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if ((code *)PTR__bind_methods_0011d040 != Object::_bind_methods) {
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
              if ((code *)PTR__bind_methods_0011d038 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011d048 !=
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
      if ((code *)PTR__bind_methods_0011d050 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_0011d038 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0011d048 !=
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
      if ((code *)PTR__bind_methods_0011d050 != Container::_bind_methods) {
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
        if (pvVar3 == (void *)0x0) goto LAB_00110c9f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00110c9f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* ImportDock::is_class(String const&) const */

undefined8 __thiscall ImportDock::is_class(ImportDock *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00110dfb;
  }
  cVar5 = String::operator==(param_1,"ImportDock");
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
      if (cVar5 != '\0') goto LAB_00110dfb;
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
        if (cVar5 != '\0') goto LAB_00110dfb;
      }
      cVar5 = String::operator==(param_1,"BoxContainer");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Container::is_class((Container *)this,param_1);
          return uVar6;
        }
        goto LAB_00110fe8;
      }
    }
  }
LAB_00110dfb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00110fe8:
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
    if (cVar5 != '\0') goto LAB_001110eb;
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
      if (cVar5 != '\0') goto LAB_001110eb;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_001111ee;
    }
  }
LAB_001110eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001111ee:
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
    if (cVar5 != '\0') goto LAB_001112fb;
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
      if (cVar5 != '\0') goto LAB_001112fb;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_001113fe;
    }
  }
LAB_001112fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001113fe:
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
  local_78 = &_LC85;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC85;
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
      goto LAB_0011156c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011156c:
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
      goto LAB_001117bc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001117bc:
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



/* List<ResourceImporter::ImportOption, DefaultAllocator>::~List() */

void __thiscall
List<ResourceImporter::ImportOption,DefaultAllocator>::~List
          (List<ResourceImporter::ImportOption,DefaultAllocator> *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 == (void *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)((long)pvVar1 + 0x58) == puVar2) {
      *puVar2 = *(undefined8 *)((long)pvVar1 + 0x48);
      if (pvVar1 == (void *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)((long)pvVar1 + 0x50);
      }
      if (*(long *)((long)pvVar1 + 0x50) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar1 + 0x50) + 0x48) =
             *(undefined8 *)((long)pvVar1 + 0x48);
      }
      if (*(long *)((long)pvVar1 + 0x48) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar1 + 0x48) + 0x50) =
             *(undefined8 *)((long)pvVar1 + 0x50);
      }
      if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x30)] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConfigFile::_get_property_listv(ConfigFile *this,List *param_1,bool param_2)

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
  local_78 = "ConfigFile";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConfigFile";
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
      goto LAB_00111b81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111b81:
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
  StringName::StringName((StringName *)&local_78,"ConfigFile",false);
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
      goto LAB_00111e31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111e31:
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
  if ((code *)PTR__get_property_list_0011d058 != Object::_get_property_list) {
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
      goto LAB_00112101;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112101:
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
  if ((code *)PTR__get_property_list_0011d060 != CanvasItem::_get_property_list) {
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
      goto LAB_001123d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001123d1:
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
      goto LAB_00112681;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112681:
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
      goto LAB_00112931;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112931:
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



/* ImportDock::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ImportDock::_get_property_listv(ImportDock *this,List *param_1,bool param_2)

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
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ImportDock";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ImportDock";
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
      goto LAB_00112be1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112be1:
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
  StringName::StringName((StringName *)&local_78,"ImportDock",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
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
      goto LAB_00112e91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112e91:
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



/* ImportDockParameters::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void ImportDockParameters::_get_property_listv(List *param_1,bool param_2)

{
  CowData *pCVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined1 (*pauVar16) [16];
  uint uVar17;
  int iVar18;
  long lVar19;
  undefined7 in_register_00000031;
  List<PropertyInfo,DefaultAllocator> *this;
  ulong uVar20;
  uint uVar21;
  List LVar22;
  undefined4 *puVar23;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  uint local_50;
  long local_40;
  
  this = (List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "ImportDockParameters";
  local_88 = 0;
  local_90 = 0;
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ImportDockParameters";
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
      goto LAB_00113155;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113155:
  List<PropertyInfo,DefaultAllocator>::push_back(this,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"ImportDockParameters",false);
  ClassDB::get_property_list((StringName *)&local_78,(List *)this,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((*(undefined8 **)(param_1 + 0x1a8) != (undefined8 *)0x0) &&
     (puVar23 = (undefined4 *)**(undefined8 **)(param_1 + 0x1a8), puVar23 != (undefined4 *)0x0)) {
    do {
      pCVar1 = (CowData *)(puVar23 + 2);
      cVar13 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x1b8))
                         (*(long **)(param_1 + 0x1b0),param_1 + 0x1f8,pCVar1,param_1 + 0x178);
      if (cVar13 != '\0') {
        local_70 = 0;
        local_78 = (char *)CONCAT44(local_78._4_4_,*puVar23);
        if (*(long *)(puVar23 + 2) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,pCVar1);
        }
        StringName::StringName((StringName *)&local_68,(StringName *)(puVar23 + 4));
        local_60 = puVar23[6];
        local_58 = 0;
        if (*(long *)(puVar23 + 8) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(puVar23 + 8));
        }
        local_50 = puVar23[10];
        LVar22 = param_1[0x1f0];
        if (LVar22 != (List)0x0) {
          local_50 = local_50 | 0x10;
          StringName::StringName((StringName *)&local_80,(String *)pCVar1,false);
          if ((*(long *)(param_1 + 0x1c8) != 0) && (*(int *)(param_1 + 0x1ec) != 0)) {
            uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x1e8) * 4);
            lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x1e8) * 8);
            if (local_80 == 0) {
              uVar14 = StringName::get_empty_hash();
            }
            else {
              uVar14 = *(uint *)(local_80 + 0x20);
            }
            uVar20 = CONCAT44(0,uVar2);
            uVar17 = 1;
            if (uVar14 != 0) {
              uVar17 = uVar14;
            }
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar17 * lVar4;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar20;
            lVar19 = SUB168(auVar5 * auVar9,8);
            uVar14 = *(uint *)(*(long *)(param_1 + 0x1e0) + lVar19 * 4);
            iVar18 = SUB164(auVar5 * auVar9,8);
            if (uVar14 != 0) {
              uVar21 = 0;
              do {
                if ((uVar17 == uVar14) &&
                   (*(long *)(*(long *)(param_1 + 0x1c8) +
                             (ulong)*(uint *)(*(long *)(param_1 + 0x1d0) + lVar19 * 4) * 8) ==
                    local_80)) goto LAB_00113608;
                uVar21 = uVar21 + 1;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (ulong)(iVar18 + 1) * lVar4;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = uVar20;
                lVar19 = SUB168(auVar6 * auVar10,8);
                uVar14 = *(uint *)(*(long *)(param_1 + 0x1e0) + lVar19 * 4);
                iVar18 = SUB164(auVar6 * auVar10,8);
              } while ((uVar14 != 0) &&
                      (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar14 * lVar4, auVar11._8_8_ = 0,
                      auVar11._0_8_ = uVar20, auVar8._8_8_ = 0,
                      auVar8._0_8_ = (ulong)((uVar2 + iVar18) - SUB164(auVar7 * auVar11,8)) * lVar4,
                      auVar12._8_8_ = 0, auVar12._0_8_ = uVar20,
                      uVar21 <= SUB164(auVar8 * auVar12,8)));
              LVar22 = (List)0x0;
LAB_00113608:
              if ((StringName::configured != '\0') && (local_80 != 0)) {
                StringName::unref();
              }
              if (LVar22 != (List)0x0) {
                local_50 = local_50 | 0x20;
              }
              goto LAB_00113240;
            }
          }
          if ((StringName::configured != '\0') && (local_80 != 0)) {
            StringName::unref();
          }
        }
LAB_00113240:
        if (*(long *)this == 0) {
          pauVar16 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])this = pauVar16;
          *(undefined4 *)pauVar16[1] = 0;
          *pauVar16 = (undefined1  [16])0x0;
        }
        puVar15 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar15 + 8) = 0;
        *(undefined1 (*) [16])(puVar15 + 2) = (undefined1  [16])0x0;
        *puVar15 = 0;
        puVar15[6] = 0;
        puVar15[10] = 6;
        *(undefined8 *)(puVar15 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar15 + 0xc) = (undefined1  [16])0x0;
        *puVar15 = local_78._0_4_;
        if (local_70 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar15 + 2),(CowData *)&local_70);
        }
        StringName::operator=((StringName *)(puVar15 + 4),(StringName *)&local_68);
        puVar15[6] = local_60;
        if (*(long *)(puVar15 + 8) != local_58) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar15 + 8),(CowData *)&local_58);
        }
        puVar15[10] = local_50;
        plVar3 = *(long **)this;
        lVar4 = plVar3[1];
        *(undefined8 *)(puVar15 + 0xc) = 0;
        *(long **)(puVar15 + 0x10) = plVar3;
        *(long *)(puVar15 + 0xe) = lVar4;
        if (lVar4 != 0) {
          *(undefined4 **)(lVar4 + 0x30) = puVar15;
        }
        plVar3[1] = (long)puVar15;
        if (*plVar3 == 0) {
          *plVar3 = (long)puVar15;
        }
        *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      }
      puVar23 = *(undefined4 **)(puVar23 + 0xc);
    } while (puVar23 != (undefined4 *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::_lookup_pos(StringName const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::_lookup_pos(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              *this,StringName *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* ImportDockParameters::_getv(StringName const&, Variant&) const */

char __thiscall
ImportDockParameters::_getv(ImportDockParameters *this,StringName *param_1,Variant *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x180) != 0) && (*(int *)(this + 0x1a4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
    uVar18 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
    if (*(long *)param_1 == 0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar18;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar16 = *(uint *)(*(long *)(this + 0x188) + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        if ((uVar13 == uVar16) &&
           (*(long *)(*(long *)(*(long *)(this + 0x180) + lVar15 * 8) + 0x10) == *(long *)param_1))
        {
          local_44 = 0;
          cVar12 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)(this + 0x178),param_1,&local_44);
          if (cVar12 == '\0') {
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          Variant::operator=(param_2,(Variant *)
                                     (*(long *)(*(long *)(this + 0x180) + (ulong)local_44 * 8) +
                                     0x18));
          goto LAB_0011393a;
        }
        uVar17 = uVar17 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(*(long *)(this + 0x188) + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar16 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar18, uVar17 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  cVar12 = '\0';
LAB_0011393a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&) */

Variant * __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::operator[](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *__s;
  long lVar6;
  long lVar7;
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
  char cVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  void *__s_00;
  undefined8 *puVar29;
  void *pvVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 *puVar39;
  long in_FS_OFFSET;
  Variant *local_e0;
  uint local_a0;
  uint local_9c;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined1 local_78 [16];
  long local_68;
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  cVar24 = _lookup_pos(this,param_1,&local_a0);
  if (cVar24 != '\0') {
    local_e0 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)local_a0 * 8) + 0x18);
    goto LAB_00113e50;
  }
  local_90 = (undefined1  [16])0x0;
  local_98[0] = 0;
  local_98[1] = 0;
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
      pvVar5 = *(void **)(this + 0x10);
      if ((pvVar5 < (void *)((long)pvVar30 + uVar38)) && (pvVar30 < (void *)((long)pvVar5 + uVar27))
         ) {
        uVar27 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar27 * 4) = 0;
          *(undefined8 *)((long)pvVar30 + uVar27 * 8) = 0;
          uVar27 = uVar27 + 1;
        } while (uVar34 != uVar27);
      }
      else {
        memset(pvVar5,0,uVar27);
        memset(pvVar30,0,uVar38);
      }
    }
  }
  local_9c = 0;
  cVar24 = _lookup_pos(this,param_1,&local_9c);
  if (cVar24 == '\0') {
    if ((float)uVar26 * __LC17 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar26 = *(uint *)(this + 0x28);
      if (uVar26 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_e0 = (Variant *)0x18;
        goto LAB_00113e3b;
      }
      uVar27 = (ulong)(uVar26 + 1);
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar26 * 4);
      *(undefined4 *)(this + 0x2c) = 0;
      if (uVar26 + 1 < 2) {
        uVar27 = 2;
      }
      uVar26 = *(uint *)(hash_table_size_primes + uVar27 * 4);
      uVar34 = (ulong)uVar26;
      *(int *)(this + 0x28) = (int)uVar27;
      pvVar30 = *(void **)(this + 8);
      uVar27 = uVar34 * 4;
      uVar38 = uVar34 * 8;
      pvVar5 = *(void **)(this + 0x10);
      uVar28 = Memory::alloc_static(uVar27,false);
      *(undefined8 *)(this + 0x10) = uVar28;
      __s_00 = (void *)Memory::alloc_static(uVar38,false);
      *(void **)(this + 8) = __s_00;
      if (uVar26 != 0) {
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
      if (uVar3 != 0) {
        local_e0 = (Variant *)0x0;
        do {
          uVar26 = *(uint *)((long)pvVar5 + (long)local_e0 * 4);
          if (uVar26 != 0) {
            uVar36 = 0;
            lVar6 = *(long *)(this + 0x10);
            uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar27 = CONCAT44(0,uVar4);
            lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar26 * lVar7;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar27;
            lVar32 = SUB168(auVar8 * auVar16,8);
            puVar1 = (uint *)(lVar6 + lVar32 * 4);
            iVar31 = SUB164(auVar8 * auVar16,8);
            uVar37 = *puVar1;
            uVar28 = *(undefined8 *)((long)pvVar30 + (long)local_e0 * 8);
            while (uVar37 != 0) {
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)uVar37 * lVar7;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar27;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)((uVar4 + iVar31) - SUB164(auVar9 * auVar17,8)) * lVar7;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar27;
              uVar25 = SUB164(auVar10 * auVar18,8);
              uVar35 = uVar28;
              if (uVar25 < uVar36) {
                puVar29 = (undefined8 *)((long)__s_00 + lVar32 * 8);
                *puVar1 = uVar26;
                uVar35 = *puVar29;
                *puVar29 = uVar28;
                uVar26 = uVar37;
                uVar36 = uVar25;
              }
              uVar36 = uVar36 + 1;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = (ulong)(iVar31 + 1) * lVar7;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar27;
              lVar32 = SUB168(auVar11 * auVar19,8);
              puVar1 = (uint *)(lVar6 + lVar32 * 4);
              iVar31 = SUB164(auVar11 * auVar19,8);
              uVar28 = uVar35;
              uVar37 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar32 * 8) = uVar28;
            *puVar1 = uVar26;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          local_e0 = (Variant *)((long)local_e0 + 1);
        } while ((Variant *)(ulong)uVar3 != local_e0);
        Memory::free_static(pvVar30,false);
        Memory::free_static(pvVar5,false);
      }
    }
    local_78 = (undefined1  [16])0x0;
    StringName::StringName((StringName *)&local_68,param_1);
    Variant::Variant((Variant *)local_60,(Variant *)local_98);
    puVar29 = (undefined8 *)operator_new(0x30,"");
    *puVar29 = local_78._0_8_;
    puVar29[1] = local_78._8_8_;
    StringName::StringName((StringName *)(puVar29 + 2),(StringName *)&local_68);
    local_e0 = (Variant *)(puVar29 + 3);
    Variant::Variant(local_e0,(Variant *)local_60);
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
      *(undefined8 **)(this + 0x18) = puVar29;
    }
    else {
      **(undefined8 **)(this + 0x20) = puVar29;
      puVar29[1] = *(undefined8 *)(this + 0x20);
    }
    *(undefined8 **)(this + 0x20) = puVar29;
    if (*(long *)param_1 == 0) {
      uVar26 = StringName::get_empty_hash();
    }
    else {
      uVar26 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar26 == 0) {
      uVar26 = 1;
    }
    uVar27 = (ulong)uVar26;
    uVar37 = 0;
    lVar6 = *(long *)(this + 0x10);
    lVar7 = *(long *)(this + 8);
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar38 = CONCAT44(0,uVar3);
    lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar27 * lVar32;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar38;
    lVar33 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar6 + lVar33 * 4);
    iVar31 = SUB164(auVar12 * auVar20,8);
    uVar4 = *puVar1;
    while (uVar4 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar4 * lVar32;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar38;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)((uVar3 + iVar31) - SUB164(auVar13 * auVar21,8)) * lVar32;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar38;
      uVar26 = SUB164(auVar14 * auVar22,8);
      puVar39 = puVar29;
      if (uVar26 < uVar37) {
        puVar2 = (undefined8 *)(lVar7 + lVar33 * 8);
        *puVar1 = (uint)uVar27;
        uVar27 = (ulong)uVar4;
        puVar39 = (undefined8 *)*puVar2;
        *puVar2 = puVar29;
        uVar37 = uVar26;
      }
      uVar26 = (uint)uVar27;
      uVar37 = uVar37 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)(iVar31 + 1) * lVar32;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar38;
      lVar33 = SUB168(auVar15 * auVar23,8);
      puVar1 = (uint *)(lVar6 + lVar33 * 4);
      iVar31 = SUB164(auVar15 * auVar23,8);
      puVar29 = puVar39;
      uVar4 = *puVar1;
    }
    *(undefined8 **)(lVar7 + lVar33 * 8) = puVar29;
    *puVar1 = uVar26;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar27 = (ulong)local_9c;
    Variant::operator=((Variant *)(*(long *)(*(long *)(this + 8) + uVar27 * 8) + 0x18),
                       (Variant *)local_98);
    local_e0 = (Variant *)(*(long *)(*(long *)(this + 8) + uVar27 * 8) + 0x18);
  }
LAB_00113e3b:
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00113e50:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImportDockParameters::_setv(StringName const&, Variant const&) */

undefined8 __thiscall
ImportDockParameters::_setv(ImportDockParameters *this,StringName *param_1,Variant *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  Variant *this_00;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  StringName aSStack_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x180) != 0) && (*(int *)(this + 0x1a4) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1a0) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar16 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar15 = *(uint *)(*(long *)(this + 0x188) + lVar14 * 4);
    iVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar15 != 0) {
      uVar17 = 0;
      do {
        if ((uVar11 == uVar15) &&
           (*(long *)(*(long *)(*(long *)(this + 0x180) + lVar14 * 8) + 0x10) == *(long *)param_1))
        {
          this_00 = (Variant *)
                    HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                    ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)(this + 0x178),param_1);
          Variant::operator=(this_00,param_2);
          if (this[0x1f0] != (ImportDockParameters)0x0) {
            HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                      (aSStack_58);
            Object::notify_property_list_changed();
          }
          uVar12 = 1;
          goto LAB_0011418a;
        }
        uVar17 = uVar17 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar15 = *(uint *)(*(long *)(this + 0x188) + lVar14 * 4);
        iVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar15 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar17 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  uVar12 = 0;
LAB_0011418a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<String, Dictionary, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Dictionary> > >::_lookup_pos(String const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
::_lookup_pos(HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
              *this,String *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = String::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    lVar17 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar14;
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x10);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Dictionary, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Dictionary> > >::operator[](String const&) */

Dictionary * __thiscall
HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
::operator[](HashMap<String,Dictionary,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Dictionary>>>
             *this,String *param_1)

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
  char cVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *__s_00;
  undefined8 *puVar34;
  void *pvVar35;
  int iVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  long lVar45;
  undefined8 *puVar46;
  long in_FS_OFFSET;
  uint local_d8;
  Dictionary *local_b0;
  uint local_74;
  Dictionary local_70 [8];
  undefined1 local_68 [16];
  long local_58;
  Dictionary local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar31 = String::hash();
    uVar32 = CONCAT44(0,uVar39);
    lVar45 = *(long *)(this + 0x10);
    uVar30 = 1;
    if (uVar31 != 0) {
      uVar30 = uVar31;
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar30 * lVar4;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar32;
    lVar37 = SUB168(auVar13 * auVar25,8);
    uVar31 = *(uint *)(lVar45 + lVar37 * 4);
    uVar43 = SUB164(auVar13 * auVar25,8);
    if (uVar31 != 0) {
      uVar42 = 0;
      do {
        if (uVar30 == uVar31) {
          cVar29 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar37 * 8) + 0x10)
                                      ,param_1);
          if (cVar29 != '\0') {
            local_b0 = (Dictionary *)(*(long *)(*(long *)(this + 8) + (ulong)uVar43 * 8) + 0x18);
            goto LAB_00114794;
          }
          lVar45 = *(long *)(this + 0x10);
        }
        uVar42 = uVar42 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(uVar43 + 1) * lVar4;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar32;
        lVar37 = SUB168(auVar14 * auVar26,8);
        uVar31 = *(uint *)(lVar45 + lVar37 * 4);
        uVar43 = SUB164(auVar14 * auVar26,8);
      } while ((uVar31 != 0) &&
              (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar31 * lVar4, auVar27._8_8_ = 0,
              auVar27._0_8_ = uVar32, auVar16._8_8_ = 0,
              auVar16._0_8_ = (ulong)((uVar39 + uVar43) - SUB164(auVar15 * auVar27,8)) * lVar4,
              auVar28._8_8_ = 0, auVar28._0_8_ = uVar32, uVar42 <= SUB164(auVar16 * auVar28,8)));
    }
  }
  Dictionary::Dictionary(local_70);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
    uVar40 = (ulong)uVar39;
    uVar32 = uVar40 * 4;
    uVar44 = uVar40 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(this + 0x10) = uVar33;
    pvVar35 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = pvVar35;
    if (uVar39 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar35 + uVar44)) && (pvVar35 < (void *)((long)pvVar3 + uVar32))
         ) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar32 * 4) = 0;
          *(undefined8 *)((long)pvVar35 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar40 != uVar32);
      }
      else {
        memset(pvVar3,0,uVar32);
        memset(pvVar35,0,uVar44);
      }
    }
  }
  local_74 = 0;
  cVar29 = _lookup_pos(this,param_1,&local_74);
  if (cVar29 == '\0') {
    if ((float)uVar39 * __LC17 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar39 = *(uint *)(this + 0x28);
      if (uVar39 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_b0 = (Dictionary *)0x18;
        goto LAB_00114785;
      }
      uVar32 = (ulong)(uVar39 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar30 = *(uint *)(hash_table_size_primes + (ulong)uVar39 * 4);
      if (uVar39 + 1 < 2) {
        uVar32 = 2;
      }
      uVar39 = *(uint *)(hash_table_size_primes + uVar32 * 4);
      uVar40 = (ulong)uVar39;
      *(int *)(this + 0x28) = (int)uVar32;
      pvVar35 = *(void **)(this + 8);
      uVar32 = uVar40 * 4;
      uVar44 = uVar40 * 8;
      pvVar3 = *(void **)(this + 0x10);
      uVar33 = Memory::alloc_static(uVar32,false);
      *(undefined8 *)(this + 0x10) = uVar33;
      __s_00 = (void *)Memory::alloc_static(uVar44,false);
      *(void **)(this + 8) = __s_00;
      if (uVar39 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar32))) {
          uVar32 = 0;
          do {
            *(undefined4 *)((long)__s + uVar32 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
            uVar32 = uVar32 + 1;
          } while (uVar32 != uVar40);
        }
        else {
          memset(__s,0,uVar32);
          memset(__s_00,0,uVar44);
        }
      }
      if (uVar30 != 0) {
        uVar32 = 0;
        do {
          uVar39 = *(uint *)((long)pvVar3 + uVar32 * 4);
          if (uVar39 != 0) {
            uVar42 = 0;
            lVar4 = *(long *)(this + 0x10);
            uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar44 = CONCAT44(0,uVar31);
            lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar39 * lVar45;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar44;
            lVar37 = SUB168(auVar5 * auVar17,8);
            puVar1 = (uint *)(lVar4 + lVar37 * 4);
            iVar36 = SUB164(auVar5 * auVar17,8);
            uVar43 = *puVar1;
            uVar33 = *(undefined8 *)((long)pvVar35 + uVar32 * 8);
            while (uVar43 != 0) {
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)uVar43 * lVar45;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar44;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)((uVar31 + iVar36) - SUB164(auVar6 * auVar18,8)) * lVar45;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar44;
              local_d8 = SUB164(auVar7 * auVar19,8);
              uVar41 = uVar33;
              if (local_d8 < uVar42) {
                *puVar1 = uVar39;
                puVar34 = (undefined8 *)((long)__s_00 + lVar37 * 8);
                uVar41 = *puVar34;
                *puVar34 = uVar33;
                uVar39 = uVar43;
                uVar42 = local_d8;
              }
              uVar42 = uVar42 + 1;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)(iVar36 + 1) * lVar45;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = uVar44;
              lVar37 = SUB168(auVar8 * auVar20,8);
              puVar1 = (uint *)(lVar4 + lVar37 * 4);
              iVar36 = SUB164(auVar8 * auVar20,8);
              uVar33 = uVar41;
              uVar43 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar37 * 8) = uVar33;
            *puVar1 = uVar39;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar30);
        Memory::free_static(pvVar35,false);
        Memory::free_static(pvVar3,false);
      }
    }
    local_58 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    }
    Dictionary::Dictionary(local_50,local_70);
    puVar34 = (undefined8 *)operator_new(0x20,"");
    puVar34[2] = 0;
    *puVar34 = local_68._0_8_;
    puVar34[1] = local_68._8_8_;
    if (local_58 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar34 + 2),(CowData *)&local_58);
    }
    local_b0 = (Dictionary *)(puVar34 + 3);
    Dictionary::Dictionary(local_b0,local_50);
    Dictionary::~Dictionary(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    puVar46 = *(undefined8 **)(this + 0x20);
    if (puVar46 == (undefined8 *)0x0) {
      *(undefined8 **)(this + 0x18) = puVar34;
    }
    else {
      *puVar46 = puVar34;
      puVar34[1] = puVar46;
    }
    *(undefined8 **)(this + 0x20) = puVar34;
    uVar30 = String::hash();
    lVar4 = *(long *)(this + 0x10);
    uVar39 = 1;
    if (uVar30 != 0) {
      uVar39 = uVar30;
    }
    uVar43 = 0;
    uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar32 = CONCAT44(0,uVar30);
    lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar39 * lVar45;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar32;
    lVar38 = SUB168(auVar9 * auVar21,8);
    lVar37 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar4 + lVar38 * 4);
    iVar36 = SUB164(auVar9 * auVar21,8);
    uVar31 = *puVar1;
    while (uVar31 != 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar31 * lVar45;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar32;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)((uVar30 + iVar36) - SUB164(auVar10 * auVar22,8)) * lVar45;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar32;
      local_d8 = SUB164(auVar11 * auVar23,8);
      puVar46 = puVar34;
      if (local_d8 < uVar43) {
        *puVar1 = uVar39;
        puVar2 = (undefined8 *)(lVar37 + lVar38 * 8);
        puVar46 = (undefined8 *)*puVar2;
        *puVar2 = puVar34;
        uVar43 = local_d8;
        uVar39 = uVar31;
      }
      uVar43 = uVar43 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)(iVar36 + 1) * lVar45;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar32;
      lVar38 = SUB168(auVar12 * auVar24,8);
      puVar1 = (uint *)(lVar4 + lVar38 * 4);
      iVar36 = SUB164(auVar12 * auVar24,8);
      puVar34 = puVar46;
      uVar31 = *puVar1;
    }
    *(undefined8 **)(lVar37 + lVar38 * 8) = puVar34;
    *puVar1 = uVar39;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar32 = (ulong)local_74;
    Dictionary::operator=
              ((Dictionary *)(*(long *)(*(long *)(this + 8) + uVar32 * 8) + 0x18),local_70);
    local_b0 = (Dictionary *)(*(long *)(*(long *)(this + 8) + uVar32 * 8) + 0x18);
  }
LAB_00114785:
  Dictionary::~Dictionary(local_70);
LAB_00114794:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ImportDock>(void (ImportDock::*)()) */

MethodBind * create_method_bind<ImportDock>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00118478;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ImportDock";
  local_30 = 10;
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



/* ImportDock::_initialize_classv() */

void ImportDock::_initialize_classv(void)

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
    if (VBoxContainer::initialize_class()::initialized == '\0') {
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
                if ((code *)PTR__bind_methods_0011d038 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_0011d048 !=
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
        if ((code *)PTR__bind_methods_0011d050 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "BoxContainer";
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
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "VBoxContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ImportDock";
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



/* ImportDockParameters::~ImportDockParameters() */

void __thiscall ImportDockParameters::~ImportDockParameters(ImportDockParameters *this)

{
  uint uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_00117d60;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1f8));
  pvVar6 = *(void **)(this + 0x1c8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x1ec) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4) != 0) {
        memset(*(void **)(this + 0x1e0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4) << 2);
        if (*(int *)(this + 0x1ec) == 0) goto LAB_00115588;
      }
      lVar5 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + lVar5 * 8) != 0)) {
          StringName::unref();
          pvVar6 = *(void **)(this + 0x1c8);
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0x1ec));
      *(undefined4 *)(this + 0x1ec) = 0;
      if (pvVar6 == (void *)0x0) goto LAB_0011535e;
    }
LAB_00115588:
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x1d8),false);
    Memory::free_static(*(void **)(this + 0x1d0),false);
    Memory::free_static(*(void **)(this + 0x1e0),false);
  }
LAB_0011535e:
  CowData<String>::_unref((CowData<String> *)(this + 0x1c0));
  if (*(long *)(this + 0x1b0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1b0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  plVar7 = *(long **)(this + 0x1a8);
  if (plVar7 != (long *)0x0) {
    do {
      pvVar6 = (void *)*plVar7;
      if (pvVar6 == (void *)0x0) {
        if ((int)plVar7[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00115430;
        }
        break;
      }
      if (*(long **)((long)pvVar6 + 0x40) == plVar7) {
        lVar5 = *(long *)((long)pvVar6 + 0x30);
        lVar2 = *(long *)((long)pvVar6 + 0x38);
        *plVar7 = lVar5;
        if (pvVar6 == (void *)plVar7[1]) {
          plVar7[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x30) = lVar5;
          lVar5 = *(long *)((long)pvVar6 + 0x30);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x38) = lVar2;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 8));
        Memory::free_static(pvVar6,false);
        *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar7 = *(long **)(this + 0x1a8);
    } while ((int)plVar7[2] != 0);
    Memory::free_static(plVar7,false);
  }
LAB_00115430:
  pvVar6 = *(void **)(this + 0x180);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x1a4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1a4) = 0;
        *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x188) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x188) + lVar5) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar6 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x180);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1a4) = 0;
        *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001154fe;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x188),false);
  }
LAB_001154fe:
  Object::~Object((Object *)this);
  return;
}



/* ImportDockParameters::~ImportDockParameters() */

void __thiscall ImportDockParameters::~ImportDockParameters(ImportDockParameters *this)

{
  uint uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_00117d60;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1f8));
  pvVar6 = *(void **)(this + 0x1c8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x1ec) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4) != 0) {
        memset(*(void **)(this + 0x1e0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4) << 2);
        if (*(int *)(this + 0x1ec) == 0) goto LAB_00115968;
      }
      lVar5 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + lVar5 * 8) != 0)) {
          StringName::unref();
          pvVar6 = *(void **)(this + 0x1c8);
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0x1ec));
      *(undefined4 *)(this + 0x1ec) = 0;
      if (pvVar6 == (void *)0x0) goto LAB_0011572e;
    }
LAB_00115968:
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x1d8),false);
    Memory::free_static(*(void **)(this + 0x1d0),false);
    Memory::free_static(*(void **)(this + 0x1e0),false);
  }
LAB_0011572e:
  CowData<String>::_unref((CowData<String> *)(this + 0x1c0));
  if (*(long *)(this + 0x1b0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x1b0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  plVar7 = *(long **)(this + 0x1a8);
  if (plVar7 != (long *)0x0) {
    do {
      pvVar6 = (void *)*plVar7;
      if (pvVar6 == (void *)0x0) {
        if ((int)plVar7[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00115800;
        }
        break;
      }
      if (*(long **)((long)pvVar6 + 0x40) == plVar7) {
        lVar5 = *(long *)((long)pvVar6 + 0x30);
        lVar2 = *(long *)((long)pvVar6 + 0x38);
        *plVar7 = lVar5;
        if (pvVar6 == (void *)plVar7[1]) {
          plVar7[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x30) = lVar5;
          lVar5 = *(long *)((long)pvVar6 + 0x30);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x38) = lVar2;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 8));
        Memory::free_static(pvVar6,false);
        *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar7 = *(long **)(this + 0x1a8);
    } while ((int)plVar7[2] != 0);
    Memory::free_static(plVar7,false);
  }
LAB_00115800:
  pvVar6 = *(void **)(this + 0x180);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x1a4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1a4) = 0;
        *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x188) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x188) + lVar5) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar6 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x180);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1a4) = 0;
        *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001158ce;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x188),false);
  }
LAB_001158ce:
  Object::~Object((Object *)this);
  operator_delete(this,0x200);
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
LAB_00115db0:
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
  if (lVar9 == 0) goto LAB_00115db0;
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
    goto LAB_00115e06;
  }
  if (lVar9 == lVar5) {
LAB_00115d2b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00115e06:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00115c9f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00115d2b;
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
LAB_00115c9f:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<Ref<Resource> >::_unref() */

void __thiscall CowData<Ref<Resource>>::_unref(CowData<Ref<Resource>> *this)

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
LAB_00115e6d:
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
            goto LAB_00115e6d;
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



/* void memdelete<HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >
   >(HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >*)
    */

void memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
               (HashMapElement *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x20);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(param_1 + 0x28) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
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
            pvVar5 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00115fd1;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_00115fd1:
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x10));
  Memory::free_static(param_1,false);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00117510;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001160e1;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_001160e1:
  *(undefined ***)this = &PTR__initialize_classv_001173b0;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00117510;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001161d1;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_001161d1:
  *(undefined ***)this = &PTR__initialize_classv_001173b0;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* CowData<Ref<Resource> >::_realloc(long) */

undefined8 __thiscall CowData<Ref<Resource>>::_realloc(CowData<Ref<Resource>> *this,long param_1)

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
/* Error CowData<Ref<Resource> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<Resource>>::resize<false>(CowData<Ref<Resource>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    lVar8 = 0;
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
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00116560:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_00116560;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0011640a:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0011640a;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_001163d0;
  }
  if (lVar11 == lVar8) {
LAB_001164db:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_001163d0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_001164bb;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_001164db;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_001164bb:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x001166e8) */
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
      _err_print_error(&_LC80,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001169d0;
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
LAB_001169d0:
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
      goto LAB_00116ddf;
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
                    /* WARNING: Could not recover jumptable at 0x00116c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00116ddf:
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
      goto LAB_00116f9f;
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
                    /* WARNING: Could not recover jumptable at 0x00116e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00116f9f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImportDock::singleton */

void ImportDock::_GLOBAL__sub_I_singleton(void)

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
/* List<ResourceImporter::ImportOption, DefaultAllocator>::~List() */

void __thiscall
List<ResourceImporter::ImportOption,DefaultAllocator>::~List
          (List<ResourceImporter::ImportOption,DefaultAllocator> *this)

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
/* List<Pair<String, String>, DefaultAllocator>::~List() */

void __thiscall
List<Pair<String,String>,DefaultAllocator>::~List(List<Pair<String,String>,DefaultAllocator> *this)

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
/* List<Ref<Resource>, DefaultAllocator>::~List() */

void __thiscall
List<Ref<Resource>,DefaultAllocator>::~List(List<Ref<Resource>,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Ref<ResourceImporter>, DefaultAllocator>::~List() */

void __thiscall
List<Ref<ResourceImporter>,DefaultAllocator>::~List
          (List<Ref<ResourceImporter>,DefaultAllocator> *this)

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
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

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
/* CallableCustomMethodPointer<ImportDock, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ImportDock,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ImportDock,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ImportDock, void, StringName const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ImportDock,void,StringName_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ImportDock,void,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ImportDock, void, StringName const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ImportDock,void,StringName_const&,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ImportDock,void,StringName_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ImportDock, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ImportDock,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ImportDock,void> *this)

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
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ImportDockParameters::~ImportDockParameters() */

void __thiscall ImportDockParameters::~ImportDockParameters(ImportDockParameters *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



