/* CowData<EditorPlugin*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<EditorPlugin*>::_copy_on_write(CowData<EditorPlugin*> *this)

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



/* CowData<Button*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Button*>::_copy_on_write(CowData<Button*> *this)

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



/* EditorMainScreen::set_button_container(HBoxContainer*) */

void __thiscall
EditorMainScreen::set_button_container(EditorMainScreen *this,HBoxContainer *param_1)

{
  *(HBoxContainer **)(this + 0xa18) = param_1;
  return;
}



/* EditorMainScreen::is_button_enabled(int) const */

undefined8 __thiscall EditorMainScreen::is_button_enabled(EditorMainScreen *this,int param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0xa28);
  if (param_1 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_00100419;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (param_1 < lVar2) {
      uVar1 = CanvasItem::is_visible();
      return uVar1;
    }
    goto LAB_00100419;
  }
  lVar2 = 0;
LAB_00100419:
  _err_print_index_error
            ("is_button_enabled","editor/editor_main_screen.cpp",0x71,(long)param_1,lVar2,"p_index",
             "buttons.size()","",false,false);
  return 0;
}



/* EditorMainScreen::_get_current_main_editor() const */

long __thiscall EditorMainScreen::_get_current_main_editor(EditorMainScreen *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0xa38);
  if (lVar1 != 0) {
    lVar2 = 0;
    while (lVar3 = lVar2, lVar3 < *(long *)(lVar1 + -8)) {
      lVar2 = lVar3 + 1;
      if (*(long *)(lVar1 + lVar3 * 8) == *(long *)(this + 0xa10)) {
        return lVar3;
      }
    }
  }
  return 0;
}



/* EditorMainScreen::get_selected_index() const */

long __thiscall EditorMainScreen::get_selected_index(EditorMainScreen *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0xa38);
  if (lVar1 != 0) {
    lVar2 = 0;
    while (lVar3 = lVar2, lVar3 < *(long *)(lVar1 + -8)) {
      lVar2 = lVar3 + 1;
      if (*(long *)(this + 0xa10) == *(long *)(lVar1 + lVar3 * 8)) {
        return lVar3;
      }
    }
  }
  return 0xffffffff;
}



/* EditorMainScreen::get_plugin_index(EditorPlugin*) const */

long __thiscall EditorMainScreen::get_plugin_index(EditorMainScreen *this,EditorPlugin *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0xa38);
  if (lVar1 != 0) {
    lVar2 = 0;
    while (lVar3 = lVar2, lVar3 < *(long *)(lVar1 + -8)) {
      lVar2 = lVar3 + 1;
      if (*(EditorPlugin **)(lVar1 + lVar3 * 8) == param_1) {
        return lVar3;
      }
    }
  }
  return 0xffffffff;
}



/* EditorMainScreen::get_selected_plugin() const */

undefined8 __thiscall EditorMainScreen::get_selected_plugin(EditorMainScreen *this)

{
  return *(undefined8 *)(this + 0xa10);
}



/* EditorMainScreen::get_plugin_by_name(String const&) const */

undefined8 __thiscall EditorMainScreen::get_plugin_by_name(EditorMainScreen *this,String *param_1)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  
  if ((*(long *)(this + 0xa48) != 0) && (*(int *)(this + 0xa6c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa68) * 4);
    uVar25 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa68) * 8);
    uVar21 = String::hash();
    lVar26 = *(long *)(this + 0xa50);
    uVar22 = 1;
    if (uVar21 != 0) {
      uVar22 = uVar21;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar22 * lVar2;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar25;
    lVar24 = SUB168(auVar3 * auVar11,8);
    uVar21 = *(uint *)(lVar26 + lVar24 * 4);
    iVar23 = SUB164(auVar3 * auVar11,8);
    if (uVar21 != 0) {
      uVar28 = 0;
      do {
        if (uVar22 == uVar21) {
          cVar20 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0xa48) + lVar24 * 8) + 0x10),
                                      param_1);
          if (cVar20 != '\0') {
            if ((*(long *)(this + 0xa48) != 0) && (*(int *)(this + 0xa6c) != 0)) {
              uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa68) * 4);
              uVar25 = CONCAT44(0,uVar1);
              lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa68) * 8);
              uVar21 = String::hash();
              lVar26 = *(long *)(this + 0xa50);
              uVar22 = 1;
              if (uVar21 != 0) {
                uVar22 = uVar21;
              }
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar22 * lVar2;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar25;
              lVar24 = SUB168(auVar7 * auVar15,8);
              uVar21 = *(uint *)(lVar26 + lVar24 * 4);
              uVar28 = SUB164(auVar7 * auVar15,8);
              if (uVar21 != 0) {
                uVar27 = 0;
                do {
                  if (uVar22 == uVar21) {
                    cVar20 = String::operator==((String *)
                                                (*(long *)(*(long *)(this + 0xa48) + lVar24 * 8) +
                                                0x10),param_1);
                    if (cVar20 != '\0') {
                      return *(undefined8 *)
                              (*(long *)(*(long *)(this + 0xa48) + (ulong)uVar28 * 8) + 0x18);
                    }
                    lVar26 = *(long *)(this + 0xa50);
                  }
                  uVar27 = uVar27 + 1;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = (ulong)(uVar28 + 1) * lVar2;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar25;
                  lVar24 = SUB168(auVar8 * auVar16,8);
                  uVar21 = *(uint *)(lVar26 + lVar24 * 4);
                  uVar28 = SUB164(auVar8 * auVar16,8);
                } while ((uVar21 != 0) &&
                        (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar21 * lVar2, auVar17._8_8_ = 0,
                        auVar17._0_8_ = uVar25, auVar10._8_8_ = 0,
                        auVar10._0_8_ =
                             (ulong)((uVar1 + uVar28) - SUB164(auVar9 * auVar17,8)) * lVar2,
                        auVar18._8_8_ = 0, auVar18._0_8_ = uVar25,
                        uVar27 <= SUB164(auVar10 * auVar18,8)));
              }
            }
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar19 = (code *)invalidInstructionException();
            (*pcVar19)();
          }
          lVar26 = *(long *)(this + 0xa50);
        }
        uVar28 = uVar28 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar23 + 1) * lVar2;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar25;
        lVar24 = SUB168(auVar4 * auVar12,8);
        uVar21 = *(uint *)(lVar26 + lVar24 * 4);
        iVar23 = SUB164(auVar4 * auVar12,8);
      } while ((uVar21 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar21 * lVar2, auVar13._8_8_ = 0,
              auVar13._0_8_ = uVar25, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar23) - SUB164(auVar5 * auVar13,8)) * lVar2,
              auVar14._8_8_ = 0, auVar14._0_8_ = uVar25, uVar28 <= SUB164(auVar6 * auVar14,8)));
    }
  }
  _err_print_error("get_plugin_by_name","editor/editor_main_screen.cpp",0xe8,
                   "Condition \"!main_editor_plugins.has(p_plugin_name)\" is true. Returning: nullptr"
                   ,0,0);
  return 0;
}



/* EditorMainScreen::get_control() const */

undefined8 __thiscall EditorMainScreen::get_control(EditorMainScreen *this)

{
  return *(undefined8 *)(this + 0xa08);
}



/* EditorMainScreen::EditorMainScreen() */

void __thiscall EditorMainScreen::EditorMainScreen(EditorMainScreen *this)

{
  StringName *pSVar1;
  BoxContainer *this_00;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  PanelContainer::PanelContainer((PanelContainer *)this);
  *(undefined8 *)(this + 0xa18) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00108238;
  *(undefined8 *)(this + 0xa28) = 0;
  *(undefined8 *)(this + 0xa38) = 0;
  *(undefined8 *)(this + 0xa68) = 2;
  *(undefined1 (*) [16])(this + 0xa08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_001085b0;
  postinitialize_handler((Object *)this_00);
  *(BoxContainer **)(this + 0xa08) = this_00;
  local_50 = 0;
  local_48 = "MainScreen";
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_50);
  Node::set_name((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa08),3);
  pSVar1 = *(StringName **)(this + 0xa08);
  StringName::StringName((StringName *)&local_48,"separation",false);
  Control::add_theme_constant_override(pSVar1,(int)(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,*(undefined8 *)(this + 0xa08),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMainScreen::save_layout_to_config(Ref<ConfigFile>, String const&) const */

void __thiscall
EditorMainScreen::save_layout_to_config(EditorMainScreen *this,undefined8 *param_2,String *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0xa28);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      if (*(long *)(lVar2 + -8) <= lVar3) break;
      cVar1 = BaseButton::is_pressed();
      if (cVar1 != '\0') {
        pSVar4 = (String *)*param_2;
        Variant::Variant((Variant *)local_48,(int)lVar3);
        local_60 = 0;
        local_58 = "selected_main_editor_idx";
        local_50 = 0x18;
        String::parse_latin1((StrRange *)&local_60);
        goto LAB_00100aa3;
      }
      lVar2 = *(long *)(this + 0xa28);
      lVar3 = lVar3 + 1;
    } while (lVar2 != 0);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_58 = "selected_main_editor_idx";
  pSVar4 = (String *)*param_2;
  local_60 = 0;
  local_50 = 0x18;
  local_40 = (undefined1  [16])0x0;
  String::parse_latin1((StrRange *)&local_60);
LAB_00100aa3:
  ConfigFile::set_value(pSVar4,param_3,(Variant *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMainScreen::load_layout_from_config(Ref<ConfigFile>, String const&) */

void __thiscall
EditorMainScreen::load_layout_from_config
          (EditorMainScreen *this,undefined8 *param_2,Variant *param_3)

{
  String *pSVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  String *local_98 [4];
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  pSVar1 = (String *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_98,-1);
  local_a8 = "selected_main_editor_idx";
  local_b0 = 0;
  local_a0 = 0x18;
  String::parse_latin1((StrRange *)&local_b0);
  ConfigFile::get_value((String *)local_78,pSVar1,param_3);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_78);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (-1 < iVar2) {
    if ((*(long *)(this + 0xa28) != 0) && ((long)iVar2 < *(long *)(*(long *)(this + 0xa28) + -8))) {
      create_custom_callable_function_pointer<EditorMainScreen,int>
                ((EditorMainScreen *)&local_a8,(char *)this,
                 (_func_void_int *)"&EditorMainScreen::select");
      Variant::Variant((Variant *)local_78,iVar2);
      Variant::Variant((Variant *)local_60,0);
      local_98[0] = (String *)local_78;
      Callable::call_deferredp((Variant **)&local_a8,(int)(Variant *)local_98);
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable((Callable *)&local_a8);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMainScreen::select(int) [clone .part.0] */

void __thiscall EditorMainScreen::select(EditorMainScreen *this,int param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  String *pSVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_48 [8];
  long local_40;
  
  lVar11 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = *(long *)(this + 0xa38);
  if (param_1 < 0) {
    if (lVar10 == 0) goto LAB_00100f58;
    lVar10 = *(long *)(lVar10 + -8);
LAB_00100ead:
    _err_print_index_error
              ("select","editor/editor_main_screen.cpp",0xad,lVar11,lVar10,"p_index",
               "editor_table.size()","",false,false);
  }
  else {
    if (lVar10 == 0) {
LAB_00100f58:
      lVar10 = 0;
      goto LAB_00100ead;
    }
    lVar10 = *(long *)(lVar10 + -8);
    if (lVar10 <= lVar11) goto LAB_00100ead;
    if (*(long *)(this + 0xa28) == 0) {
LAB_00100f10:
      lVar10 = 0;
LAB_00100f13:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar10 = *(long *)(*(long *)(this + 0xa28) + -8);
    if (lVar10 <= lVar11) goto LAB_00100f13;
    cVar5 = CanvasItem::is_visible();
    if (cVar5 != '\0') {
      lVar10 = *(long *)(this + 0xa28);
      for (lVar9 = 0; (lVar10 != 0 && (lVar9 < *(long *)(lVar10 + -8))); lVar9 = lVar9 + 1) {
        BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(lVar10 + lVar9 * 8),0));
        lVar10 = *(long *)(this + 0xa28);
      }
      lVar9 = *(long *)(this + 0xa38);
      if (lVar9 == 0) goto LAB_00100f10;
      lVar10 = *(long *)(lVar9 + -8);
      if (lVar10 <= lVar11) goto LAB_00100f13;
      plVar1 = *(long **)(lVar9 + lVar11 * 8);
      if (plVar1 == (long *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _err_print_error("select","editor/editor_main_screen.cpp",0xb8,
                           "Parameter \"new_editor\" is null.",0,0);
          return;
        }
        goto LAB_00100faa;
      }
      plVar2 = *(long **)(this + 0xa10);
      if (plVar1 != plVar2) {
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x210))(plVar2,0);
        }
        lVar10 = *plVar1;
        *(long **)(this + 0xa10) = plVar1;
        (**(code **)(lVar10 + 0x210))(plVar1,1);
        if (*(code **)(**(long **)(this + 0xa10) + 0x218) != EditorPlugin::selected_notify) {
          (**(code **)(**(long **)(this + 0xa10) + 0x218))();
        }
        iVar8 = 0;
        iVar4 = (int)EditorNode::singleton;
        iVar6 = EditorData::get_editor_plugin_count();
        if (0 < iVar6) {
          do {
            iVar8 = iVar8 + 1;
            pSVar7 = (String *)EditorData::get_editor_plugin(iVar4 + 0x430);
            (**(code **)(**(long **)(this + 0xa10) + 0x1e8))(aCStack_48);
            EditorPlugin::notify_main_screen_changed(pSVar7);
            CowData<char32_t>::_unref(aCStack_48);
          } while (iVar6 != iVar8);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          EditorNode::update_distraction_free_mode();
          return;
        }
        goto LAB_00100faa;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100faa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMainScreen::select(int) */

void __thiscall EditorMainScreen::select(EditorMainScreen *this,int param_1)

{
  char cVar1;
  
  cVar1 = EditorNode::is_changing_scene();
  if (cVar1 == '\0') {
    select(this,param_1);
    return;
  }
  return;
}



/* EditorMainScreen::select_prev() */

void __thiscall EditorMainScreen::select_prev(EditorMainScreen *this)

{
  code *pcVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar4 = *(long *)(this + 0xa38);
  if (lVar4 == 0) {
LAB_00101120:
    uVar7 = 0;
  }
  else {
    uVar2 = 0;
    do {
      uVar7 = uVar2;
      if (*(long *)(lVar4 + -8) <= (long)uVar7) goto LAB_00101120;
      uVar2 = uVar7 + 1;
    } while (*(long *)(lVar4 + uVar7 * 8) != *(long *)(this + 0xa10));
    uVar7 = uVar7 & 0xffffffff;
  }
  while ((int)uVar7 != 0) {
    uVar6 = (int)uVar7 - 1;
    lVar4 = *(long *)(this + 0xa28);
    lVar5 = (long)(int)uVar6;
joined_r0x001010c3:
    if (lVar4 == 0) goto LAB_001010c5;
    uVar7 = (ulong)uVar6;
    if (*(long *)(lVar4 + -8) <= lVar5) goto LAB_001010dc;
    cVar3 = CanvasItem::is_visible();
    if (cVar3 != '\0') {
      cVar3 = EditorNode::is_changing_scene();
      if (cVar3 == '\0') {
        select(this,uVar6);
        return;
      }
      return;
    }
  }
  if (*(long *)(this + 0xa38) == 0) {
    lVar4 = *(long *)(this + 0xa28);
    lVar5 = -1;
  }
  else {
    uVar6 = (int)*(undefined8 *)(*(long *)(this + 0xa38) + -8) - 1;
    lVar5 = (long)(int)uVar6;
    if (-1 < lVar5) {
      lVar4 = *(long *)(this + 0xa28);
      goto joined_r0x001010c3;
    }
    lVar4 = *(long *)(this + 0xa28);
  }
  if (lVar4 != 0) {
LAB_001010dc:
    lVar4 = *(long *)(lVar4 + -8);
    goto LAB_001010e0;
  }
LAB_001010c5:
  lVar4 = 0;
LAB_001010e0:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar4,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorMainScreen::select_next() */

void __thiscall EditorMainScreen::select_next(EditorMainScreen *this)

{
  code *pcVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(this + 0xa38);
  if (lVar7 == 0) {
LAB_00101248:
    uVar6 = 0;
  }
  else {
    uVar2 = 0;
    do {
      uVar6 = uVar2;
      if (*(long *)(lVar7 + -8) <= (long)uVar6) goto LAB_00101248;
      uVar2 = uVar6 + 1;
    } while (*(long *)(lVar7 + uVar6 * 8) != *(long *)(this + 0xa10));
    uVar6 = uVar6 & 0xffffffff;
  }
  if ((lVar7 != 0) && ((long)(int)uVar6 == *(long *)(lVar7 + -8) + -1)) goto LAB_001011f4;
LAB_001011b0:
  lVar7 = *(long *)(this + 0xa28);
  uVar5 = (int)uVar6 + 1;
  uVar6 = (ulong)uVar5;
  lVar4 = (long)(int)uVar5;
  do {
    if (lVar7 == 0) {
      lVar7 = 0;
LAB_00101207:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar7,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = *(long *)(lVar7 + -8);
    if (lVar7 <= lVar4) goto LAB_00101207;
    cVar3 = CanvasItem::is_visible();
    if (cVar3 != '\0') {
      cVar3 = EditorNode::is_changing_scene();
      if (cVar3 == '\0') {
        select(this,(int)uVar6);
        return;
      }
      return;
    }
    if ((*(long *)(this + 0xa38) == 0) ||
       ((long)(int)uVar6 != *(long *)(*(long *)(this + 0xa38) + -8) + -1)) goto LAB_001011b0;
LAB_001011f4:
    lVar7 = *(long *)(this + 0xa28);
    uVar6 = 0;
    lVar4 = 0;
  } while( true );
}



/* EditorMainScreen::set_button_enabled(int, bool) */

void __thiscall
EditorMainScreen::set_button_enabled(EditorMainScreen *this,int param_1,bool param_2)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)param_1;
  lVar4 = *(long *)(this + 0xa28);
  if (param_1 < 0) {
    if (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + -8);
      goto LAB_00101319;
    }
  }
  else if (lVar4 != 0) {
    lVar3 = *(long *)(lVar4 + -8);
    if (lVar5 < lVar3) {
      CanvasItem::set_visible(SUB81(*(undefined8 *)(lVar4 + lVar5 * 8),0));
      if (param_2) {
        return;
      }
      if (*(long *)(this + 0xa28) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(*(long *)(this + 0xa28) + -8);
        if (lVar5 < lVar4) {
          cVar2 = BaseButton::is_pressed();
          if (cVar2 == '\0') {
            return;
          }
          cVar2 = EditorNode::is_changing_scene();
          if (cVar2 != '\0') {
            return;
          }
          select(this,0);
          return;
        }
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar5,lVar4,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    goto LAB_00101319;
  }
  lVar3 = 0;
LAB_00101319:
  _err_print_index_error
            ("set_button_enabled","editor/editor_main_screen.cpp",0x69,lVar5,lVar3,"p_index",
             "buttons.size()","",false,false);
  return;
}



/* EditorMainScreen::_notification(int) */

void __thiscall EditorMainScreen::_notification(EditorMainScreen *this,int param_1)

{
  Ref *pRVar1;
  long *plVar2;
  code *pcVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long in_FS_OFFSET;
  Object *local_60;
  String local_58 [8];
  long local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0xd) {
    lVar6 = *(long *)(this + 0xa28);
    if (lVar6 != 0) {
      if (1 < *(long *)(lVar6 + -8)) {
        cVar5 = CanvasItem::is_visible();
        if (cVar5 != '\0') {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            select(this,1);
            return;
          }
          goto LAB_00101796;
        }
        lVar6 = *(long *)(this + 0xa28);
        if (lVar6 == 0) goto LAB_001015ef;
      }
      lVar7 = 0;
      do {
        if (*(long *)(lVar6 + -8) <= lVar7) break;
        cVar5 = CanvasItem::is_visible();
        if (cVar5 != '\0') {
          cVar5 = EditorNode::is_changing_scene();
          if (cVar5 != '\0') goto LAB_00101608;
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101796;
          iVar8 = (int)lVar7;
          goto LAB_001016c9;
        }
        lVar6 = *(long *)(this + 0xa28);
        lVar7 = lVar7 + 1;
      } while (lVar6 != 0);
    }
LAB_001015ef:
    cVar5 = EditorNode::is_changing_scene();
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar8 = -1;
LAB_001016c9:
        select(this,iVar8);
        return;
      }
      goto LAB_00101796;
    }
  }
  else if (param_1 == 0x2d) {
    lVar6 = *(long *)(this + 0xa28);
    for (lVar7 = 0; (lVar6 != 0 && (lVar7 < *(long *)(lVar6 + -8))); lVar7 = lVar7 + 1) {
      pRVar1 = *(Ref **)(lVar6 + lVar7 * 8);
      lVar6 = *(long *)(this + 0xa38);
      if (lVar6 == 0) {
        lVar9 = 0;
LAB_0010166b:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar9,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar9 = *(long *)(lVar6 + -8);
      if (lVar9 <= lVar7) goto LAB_0010166b;
      plVar2 = *(long **)(lVar6 + lVar7 * 8);
      (**(code **)(*plVar2 + 0x1f0))(&local_60,plVar2);
      if (local_60 == (Object *)0x0) {
        (**(code **)(*plVar2 + 0x1e8))((CowData<char32_t> *)&local_50,plVar2);
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        cVar5 = Control::has_theme_icon((StringName *)this,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if (cVar5 != '\0') {
          (**(code **)(*plVar2 + 0x1e8))(local_58,plVar2);
          StringName::StringName((StringName *)&local_50,local_58,false);
          Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
          Button::set_button_icon(pRVar1);
          if (((local_48 != (Object *)0x0) &&
              (cVar5 = RefCounted::unreference(), pOVar4 = local_48, cVar5 != '\0')) &&
             (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
          if ((StringName::configured != '\0') && (local_50 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
        }
      }
      else {
        Button::set_button_icon(pRVar1);
      }
      if (((local_60 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar4 = local_60, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_60), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      lVar6 = *(long *)(this + 0xa28);
    }
  }
LAB_00101608:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101796:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMainScreen::select_by_name(String const&) */

void __thiscall EditorMainScreen::select_by_name(EditorMainScreen *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("select_by_name","editor/editor_main_screen.cpp",0x9c,
                       "Condition \"p_name.is_empty()\" is true.",0,0);
      return;
    }
  }
  else {
    lVar2 = *(long *)(this + 0xa28);
    for (lVar5 = 0; (lVar2 != 0 && (lVar5 < *(long *)(lVar2 + -8))); lVar5 = lVar5 + 1) {
      Button::get_text();
      cVar4 = String::operator==((String *)&local_48,param_1);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      if (cVar4 != '\0') {
        cVar4 = EditorNode::is_changing_scene();
        if (cVar4 != '\0') goto LAB_001018ec;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          select(this,(int)lVar5);
          return;
        }
        goto LAB_00101991;
      }
      lVar2 = *(long *)(this + 0xa28);
    }
    local_48 = "\' was not found.";
    local_40 = 0x10;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_50);
    operator+((char *)aCStack_58,(String *)"The editor name \'");
    String::operator+((String *)&local_48,(String *)aCStack_58);
    _err_print_error("select_by_name","editor/editor_main_screen.cpp",0xa5,"Method/function failed."
                     ,(String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(aCStack_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001018ec:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_00101991:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMainScreen::remove_main_plugin(EditorPlugin*) */

void __thiscall EditorMainScreen::remove_main_plugin(EditorMainScreen *this,EditorPlugin *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  Object *pOVar6;
  undefined8 uVar7;
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
  char cVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  long *plVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  uint *puVar39;
  uint uVar40;
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  String local_a8 [16];
  CowData<char32_t> local_98 [16];
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar36 = *(long *)(this + 0xa28);
  if ((lVar36 != 0) && (uVar37 = *(int *)(lVar36 + -8) - 1, -1 < (int)uVar37)) {
    uVar34 = (ulong)uVar37;
    do {
      if (lVar36 == 0) {
LAB_00101bee:
        lVar36 = 0;
LAB_00101bf1:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar34,lVar36,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar36 = *(long *)(lVar36 + -8);
      if (lVar36 <= (long)uVar34) goto LAB_00101bf1;
      lVar38 = uVar34 * 8;
      Button::get_text();
      (**(code **)(*(long *)param_1 + 0x1e8))(local_a8,param_1);
      cVar28 = String::operator==(local_a8,(String *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref(local_98);
      if (cVar28 != '\0') {
        if (*(long *)(this + 0xa28) != 0) {
          lVar36 = *(long *)(*(long *)(this + 0xa28) + -8);
          if (lVar36 <= (long)uVar34) goto LAB_00101bf1;
          cVar28 = BaseButton::is_pressed();
          if (cVar28 != '\0') {
            select(this,2);
          }
          lVar32 = *(long *)(this + 0xa28);
          if (lVar32 != 0) {
            lVar36 = *(long *)(lVar32 + -8);
            if (lVar36 <= (long)uVar34) goto LAB_00101bf1;
            pOVar6 = *(Object **)(lVar32 + lVar38);
            cVar28 = predelete_handler(pOVar6);
            if (cVar28 != '\0') {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
            if (*(long *)(this + 0xa28) == 0) {
              lVar36 = 0;
            }
            else {
              lVar36 = *(long *)(*(long *)(this + 0xa28) + -8);
              if ((long)uVar34 < lVar36) {
                CowData<Button*>::_copy_on_write((CowData<Button*> *)(this + 0xa28));
                lVar36 = *(long *)(this + 0xa28);
                if (lVar36 == 0) {
                  lVar32 = -1;
                }
                else {
                  lVar32 = *(long *)(lVar36 + -8) + -1;
                  if ((long)uVar34 < lVar32) {
                    memmove((void *)(lVar36 + lVar38),(void *)(lVar36 + 8 + lVar38),
                            (lVar32 - uVar34) * 8);
                  }
                }
                CowData<Button*>::resize<false>((CowData<Button*> *)(this + 0xa28),lVar32);
                break;
              }
            }
            _err_print_index_error
                      ("remove_at","./core/templates/cowdata.h",0xe4,uVar34,lVar36,"p_index",
                       "size()","",false,false);
            break;
          }
        }
        goto LAB_00101bee;
      }
      lVar32 = *(long *)(this + 0xa28);
      if (lVar32 == 0) goto LAB_00101bee;
      lVar36 = *(long *)(lVar32 + -8);
      if (lVar36 <= (long)uVar34) goto LAB_00101bf1;
      plVar4 = *(long **)(lVar32 + lVar38);
      pcVar5 = *(code **)(*plVar4 + 0x110);
      create_custom_callable_function_pointer<EditorMainScreen,int>
                ((EditorMainScreen *)local_98,(char *)this,
                 (_func_void_int *)"&EditorMainScreen::select");
      (*pcVar5)(plVar4,SceneStringNames::singleton + 0x238,local_98);
      Callable::~Callable((Callable *)local_98);
      lVar32 = *(long *)(this + 0xa28);
      if (lVar32 == 0) goto LAB_00101bee;
      lVar36 = *(long *)(lVar32 + -8);
      if (lVar36 <= (long)uVar34) goto LAB_00101bf1;
      plVar4 = *(long **)(lVar32 + lVar38);
      pcVar5 = *(code **)(*plVar4 + 0x108);
      create_custom_callable_function_pointer<EditorMainScreen,int>
                ((EditorMainScreen *)local_a8,(char *)this,
                 (_func_void_int *)"&EditorMainScreen::select");
      uVar37 = uVar37 - 1;
      Variant::Variant((Variant *)local_78,uVar37);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88 = (Variant *)local_78;
      Callable::bindp((Variant **)local_98,(int)local_a8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      uVar34 = uVar34 - 1;
      (*pcVar5)(plVar4,SceneStringNames::singleton + 0x238,local_98,0);
      Callable::~Callable((Callable *)local_98);
      Callable::~Callable((Callable *)local_a8);
      if (uVar37 == 0xffffffff) break;
      lVar36 = *(long *)(this + 0xa28);
    } while( true );
  }
  local_b0 = local_98;
  if (*(EditorPlugin **)(this + 0xa10) == param_1) {
    *(undefined8 *)(this + 0xa10) = 0;
  }
  lVar36 = *(long *)(this + 0xa38);
  if ((lVar36 != 0) && (lVar38 = *(long *)(lVar36 + -8), 0 < lVar38)) {
    lVar32 = 0;
    do {
      if (*(EditorPlugin **)(lVar36 + lVar32 * 8) == param_1) {
        if (lVar32 < lVar38) {
          CowData<EditorPlugin*>::_copy_on_write((CowData<EditorPlugin*> *)(this + 0xa38));
          lVar36 = *(long *)(this + 0xa38);
          if (lVar36 == 0) {
            lVar38 = -1;
          }
          else {
            lVar38 = *(long *)(lVar36 + -8) + -1;
            if (lVar32 < lVar38) {
              memmove((void *)(lVar36 + lVar32 * 8),(void *)(lVar36 + 8 + lVar32 * 8),
                      (lVar38 - lVar32) * 8);
            }
          }
          CowData<EditorPlugin*>::resize<false>((CowData<EditorPlugin*> *)(this + 0xa38),lVar38);
        }
        else {
          _err_print_index_error
                    ("remove_at","./core/templates/cowdata.h",0xe4,lVar32,lVar38,"p_index","size()",
                     "",false,false);
        }
        break;
      }
      lVar32 = lVar32 + 1;
    } while (lVar38 != lVar32);
  }
  (**(code **)(*(long *)param_1 + 0x1e8))(local_b0,param_1);
  if ((*(long *)(this + 0xa48) != 0) && (*(int *)(this + 0xa6c) != 0)) {
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa68) * 4);
    lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa68) * 8);
    uVar29 = String::hash();
    uVar34 = CONCAT44(0,uVar37);
    lVar38 = *(long *)(this + 0xa50);
    uVar30 = 1;
    if (uVar29 != 0) {
      uVar30 = uVar29;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar30 * lVar36;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    lVar32 = SUB168(auVar8 * auVar18,8);
    uVar29 = *(uint *)(lVar38 + lVar32 * 4);
    uVar31 = SUB164(auVar8 * auVar18,8);
    if (uVar29 != 0) {
      uVar40 = 0;
      do {
        if (uVar29 == uVar30) {
          cVar28 = String::operator==((String *)
                                      (*(long *)(*(long *)(this + 0xa48) + lVar32 * 8) + 0x10),
                                      (String *)local_b0);
          if (cVar28 != '\0') {
            lVar36 = *(long *)(this + 0xa50);
            lVar38 = *(long *)(this + 0xa48);
            uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa68) * 4);
            uVar34 = CONCAT44(0,uVar37);
            lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xa68) * 8);
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(uVar31 + 1) * lVar32;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar34;
            lVar33 = SUB168(auVar12 * auVar22,8);
            puVar39 = (uint *)(lVar36 + lVar33 * 4);
            uVar29 = SUB164(auVar12 * auVar22,8);
            uVar30 = *puVar39;
            if ((uVar30 == 0) ||
               (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar30 * lVar32, auVar23._8_8_ = 0,
               auVar23._0_8_ = uVar34, auVar14._8_8_ = 0,
               auVar14._0_8_ = (ulong)((uVar37 + uVar29) - SUB164(auVar13 * auVar23,8)) * lVar32,
               auVar24._8_8_ = 0, auVar24._0_8_ = uVar34, uVar40 = uVar31,
               SUB164(auVar14 * auVar24,8) == 0)) goto LAB_001020d9;
            goto LAB_00102095;
          }
          lVar38 = *(long *)(this + 0xa50);
        }
        uVar40 = uVar40 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(uVar31 + 1) * lVar36;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar34;
        lVar32 = SUB168(auVar9 * auVar19,8);
        uVar29 = *(uint *)(lVar38 + lVar32 * 4);
        uVar31 = SUB164(auVar9 * auVar19,8);
      } while ((uVar29 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar29 * lVar36, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar34, auVar11._8_8_ = 0,
              auVar11._0_8_ = (ulong)((uVar37 + uVar31) - SUB164(auVar10 * auVar20,8)) * lVar36,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar34, uVar40 <= SUB164(auVar11 * auVar21,8)));
    }
  }
  goto LAB_00101d60;
  while (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar30 * lVar32, auVar25._8_8_ = 0,
        auVar25._0_8_ = uVar34, auVar16._8_8_ = 0,
        auVar16._0_8_ = (ulong)((uVar29 + uVar37) - SUB164(auVar15 * auVar25,8)) * lVar32,
        auVar26._8_8_ = 0, auVar26._0_8_ = uVar34, uVar40 = uVar31, SUB164(auVar16 * auVar26,8) != 0
        ) {
LAB_00102095:
    uVar31 = uVar29;
    puVar1 = (uint *)(lVar36 + (ulong)uVar40 * 4);
    *puVar39 = *puVar1;
    puVar2 = (undefined8 *)(lVar38 + lVar33 * 8);
    *puVar1 = uVar30;
    puVar3 = (undefined8 *)(lVar38 + (ulong)uVar40 * 8);
    uVar7 = *puVar2;
    *puVar2 = *puVar3;
    *puVar3 = uVar7;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(uVar31 + 1) * lVar32;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar34;
    lVar33 = SUB168(auVar17 * auVar27,8);
    puVar39 = (uint *)(lVar36 + lVar33 * 4);
    uVar29 = SUB164(auVar17 * auVar27,8);
    uVar30 = *puVar39;
    if (uVar30 == 0) break;
  }
LAB_001020d9:
  uVar34 = (ulong)uVar31;
  plVar4 = (long *)(lVar38 + uVar34 * 8);
  *(undefined4 *)(lVar36 + uVar34 * 4) = 0;
  plVar35 = (long *)*plVar4;
  if (*(long **)(this + 0xa58) == plVar35) {
    *(long *)(this + 0xa58) = *plVar35;
    plVar35 = (long *)*plVar4;
  }
  if (*(long **)(this + 0xa60) == plVar35) {
    *(long *)(this + 0xa60) = plVar35[1];
    plVar35 = (long *)*plVar4;
  }
  if ((long *)plVar35[1] != (long *)0x0) {
    *(long *)plVar35[1] = *plVar35;
    plVar35 = (long *)*plVar4;
  }
  if (*plVar35 != 0) {
    *(long *)(*plVar35 + 8) = plVar35[1];
    plVar35 = (long *)*plVar4;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar35 + 2));
  Memory::free_static(plVar35,false);
  *(undefined8 *)(*(long *)(this + 0xa48) + uVar34 * 8) = 0;
  *(int *)(this + 0xa6c) = *(int *)(this + 0xa6c) + -1;
LAB_00101d60:
  CowData<char32_t>::_unref(local_b0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMainScreen::add_main_plugin(EditorPlugin*) */

void __thiscall EditorMainScreen::add_main_plugin(EditorMainScreen *this,EditorPlugin *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  Callable *pCVar3;
  char cVar4;
  int iVar5;
  Button *this_00;
  CallableCustom *this_01;
  long lVar6;
  Callable *pCVar7;
  long lVar8;
  long in_FS_OFFSET;
  Callable *local_b8;
  String local_b0 [8];
  long local_a8 [2];
  Callable *local_98 [2];
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Button *)operator_new(0xc10,"");
  local_98[0] = (Callable *)0x0;
  Button::Button(this_00,(String *)local_98);
  postinitialize_handler((Object *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  BaseButton::set_toggle_mode(SUB81(this_00,0));
  StringName::StringName((StringName *)local_98,"MainScreenButton",false);
  Control::set_theme_type_variation((StringName *)this_00);
  if ((StringName::configured != '\0') && (local_98[0] != (Callable *)0x0)) {
    StringName::unref();
  }
  (**(code **)(*(long *)param_1 + 0x1e8))((CowData<char32_t> *)local_98,param_1);
  Node::set_name((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  (**(code **)(*(long *)param_1 + 0x1e8))((CowData<char32_t> *)local_98,param_1);
  Button::set_text((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  (**(code **)(*(long *)param_1 + 0x1f0))(&local_b8,param_1);
  if (local_b8 == (Callable *)0x0) {
    (**(code **)(*(long *)param_1 + 0x1e8))((EditorMainScreen *)local_a8,param_1);
    StringName::StringName((StringName *)local_98,(String *)local_a8,false);
    cVar4 = Control::has_theme_icon((StringName *)this,(StringName *)local_98);
    if ((StringName::configured != '\0') && (local_98[0] != (Callable *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)param_1 + 0x1e8))(local_b0,param_1);
      StringName::StringName((StringName *)local_a8,local_b0,false);
      Control::get_editor_theme_icon((StringName *)local_98);
      pCVar3 = local_b8;
      pCVar7 = local_b8;
      if (local_98[0] == local_b8) {
LAB_00102704:
        if (((pCVar7 != (Callable *)0x0) &&
            (cVar4 = RefCounted::unreference(), pCVar3 = local_98[0], cVar4 != '\0')) &&
           (cVar4 = predelete_handler((Object *)local_98[0]), cVar4 != '\0')) {
          (**(code **)(*(long *)pCVar3 + 0x140))();
          Memory::free_static(pCVar3,false);
        }
      }
      else {
        local_b8 = local_98[0];
        if (local_98[0] != (Callable *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_b8 = (Callable *)0x0;
          }
          pCVar7 = local_98[0];
          if (pCVar3 != (Callable *)0x0) goto LAB_001026e5;
          goto LAB_00102704;
        }
        if (pCVar3 != (Callable *)0x0) {
LAB_001026e5:
          cVar4 = RefCounted::unreference();
          pCVar7 = local_98[0];
          if ((cVar4 != '\0') &&
             (cVar4 = predelete_handler((Object *)pCVar3), pCVar7 = local_98[0], cVar4 != '\0')) {
            (**(code **)(*(long *)pCVar3 + 0x140))(pCVar3);
            Memory::free_static(pCVar3,false);
            pCVar7 = local_98[0];
          }
          goto LAB_00102704;
        }
      }
      if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
    }
    if (local_b8 != (Callable *)0x0) goto LAB_00102317;
  }
  else {
LAB_00102317:
    Button::set_button_icon(this_00);
    pCVar3 = local_b8;
    this_01 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_01);
    *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
    *(undefined8 *)(this_01 + 0x40) = 0;
    uVar1 = *(undefined8 *)(this_00 + 0x60);
    *(undefined ***)this_01 = &PTR_hash_001089b8;
    *(undefined8 *)(this_01 + 0x30) = uVar1;
    *(undefined8 *)(this_01 + 0x10) = 0;
    *(code **)(this_01 + 0x38) = Control::update_minimum_size;
    *(undefined **)(this_01 + 0x20) = &_LC13;
    *(Button **)(this_01 + 0x28) = this_00;
    CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
    *(char **)(this_01 + 0x20) = "Control::update_minimum_size";
    Callable::Callable((Callable *)local_98,this_01);
    Resource::connect_changed(pCVar3,(uint)(CowData<char32_t> *)local_98);
    Callable::~Callable((Callable *)local_98);
  }
  pcVar2 = *(code **)(*(long *)this_00 + 0x108);
  create_custom_callable_function_pointer<EditorMainScreen,int>
            ((EditorMainScreen *)local_a8,(char *)this,(_func_void_int *)"&EditorMainScreen::select"
            );
  if (*(long *)(this + 0xa28) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0xa28) + -8);
  }
  Variant::Variant((Variant *)local_78,lVar8);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)local_78;
  Callable::bindp((Variant **)local_98,(int)(EditorMainScreen *)local_a8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar4 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar4 != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar2)(this_00,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)local_a8);
  if (*(long *)(this + 0xa28) == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0xa28) + -8) + 1;
  }
  iVar5 = CowData<Button*>::resize<false>((CowData<Button*> *)(this + 0xa28),lVar8);
  if (iVar5 == 0) {
    if (*(long *)(this + 0xa28) == 0) {
      lVar6 = -1;
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(this + 0xa28) + -8);
      lVar6 = lVar8 + -1;
      if (-1 < lVar6) {
        CowData<Button*>::_copy_on_write((CowData<Button*> *)(this + 0xa28));
        *(Button **)(*(long *)(this + 0xa28) + lVar6 * 8) = this_00;
        goto LAB_0010250e;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar8,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010250e:
  Node::add_child(*(undefined8 *)(this + 0xa18),this_00,0,0);
  if (*(long *)(this + 0xa38) == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = *(long *)(*(long *)(this + 0xa38) + -8) + 1;
  }
  iVar5 = CowData<EditorPlugin*>::resize<false>((CowData<EditorPlugin*> *)(this + 0xa38),lVar8);
  if (iVar5 == 0) {
    if (*(long *)(this + 0xa38) == 0) {
      lVar6 = -1;
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(this + 0xa38) + -8);
      lVar6 = lVar8 + -1;
      if (-1 < lVar6) {
        CowData<EditorPlugin*>::_copy_on_write((CowData<EditorPlugin*> *)(this + 0xa38));
        *(EditorPlugin **)(*(long *)(this + 0xa38) + lVar6 * 8) = param_1;
        goto LAB_0010258c;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar8,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010258c:
  (**(code **)(*(long *)param_1 + 0x1e8))((EditorMainScreen *)local_a8,param_1);
  HashMap<String,EditorPlugin*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorPlugin*>>>
  ::insert((String *)local_98,(EditorPlugin **)(this + 0xa40),SUB81((EditorMainScreen *)local_a8,0))
  ;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  if (((local_b8 != (Callable *)0x0) &&
      (cVar4 = RefCounted::unreference(), pCVar3 = local_b8, cVar4 != '\0')) &&
     (cVar4 = predelete_handler((Object *)local_b8), cVar4 != '\0')) {
    (**(code **)(*(long *)pCVar3 + 0x140))(pCVar3);
    Memory::free_static(pCVar3,false);
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EditorPlugin::selected_notify() */

void EditorPlugin::selected_notify(void)

{
  return;
}



/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorMainScreen, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorMainScreen,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorMainScreen,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<Control, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_argument_count
          (CallableCustomMethodPointer<Control,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorMainScreen, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorMainScreen,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorMainScreen,void,int> *this,bool *param_1)

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



/* CallableCustomMethodPointer<EditorMainScreen, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorMainScreen,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorMainScreen,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* EditorMainScreen::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorMainScreen::_property_get_revertv(StringName *param_1,Variant *param_2)

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



/* EditorMainScreen::_property_can_revertv(StringName const&) const */

undefined8 EditorMainScreen::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010c008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010c008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CowData<EditorPlugin*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorPlugin*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Button*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Button*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<EditorMainScreen, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorMainScreen,void,int>::get_object
          (CallableCustomMethodPointer<EditorMainScreen,void,int> *this)

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
      goto LAB_00102e9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00102e9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00102e9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Control, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_object
          (CallableCustomMethodPointer<Control,void> *this)

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
      goto LAB_00102f9d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00102f9d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00102f9d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorMainScreen::_validate_propertyv(PropertyInfo&) const */

void EditorMainScreen::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010c010 == CanvasItem::_validate_property) {
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
  if ((code *)PTR__validate_property_0010c018 == Control::_validate_property) {
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
    uVar1 = (uint)CONCAT71(0x108a,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x108a,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x108a,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x108a,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x108a,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorMainScreen::is_class_ptr(void*) const */

uint EditorMainScreen::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x108a,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x108a,in_RSI == &PanelContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x108a,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x108a,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x108a,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010c020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorMainScreen::_setv(StringName const&, Variant const&) */

undefined8 EditorMainScreen::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010c020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00103338) */
/* EditorMainScreen::_getv(StringName const&, Variant&) const */

undefined8 EditorMainScreen::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010c028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001033a8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010c028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
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
LAB_00103403:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103403;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010346e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010346e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorMainScreen::_get_class_namev() const */

undefined8 * EditorMainScreen::_get_class_namev(void)

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
LAB_001034f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001034f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorMainScreen");
      goto LAB_0010355e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorMainScreen");
LAB_0010355e:
  return &_get_class_namev()::_class_name_static;
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
      if (StringName::configured == '\0') goto LAB_001035f0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001035f0:
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
      if (StringName::configured == '\0') goto LAB_00103650;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00103650:
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
    if ((code *)PTR__notification_0010c030 != Container::_notification) {
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
  if ((code *)PTR__notification_0010c030 == Container::_notification) {
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
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



/* EditorMainScreen::get_class() const */

void EditorMainScreen::get_class(void)

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



/* Callable create_custom_callable_function_pointer<EditorMainScreen, int>(EditorMainScreen*, char
   const*, void (EditorMainScreen::*)(int)) */

EditorMainScreen *
create_custom_callable_function_pointer<EditorMainScreen,int>
          (EditorMainScreen *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC13;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00108928;
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



/* WARNING: Removing unreachable block (ram,0x00103cb0) */
/* EditorMainScreen::_notificationv(int, bool) */

void __thiscall EditorMainScreen::_notificationv(EditorMainScreen *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0010c038 != Container::_notification) {
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
  if ((code *)PTR__notification_0010c038 != Container::_notification) {
    PanelContainer::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, EditorPlugin*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, EditorPlugin*> > >::insert(String const&,
   EditorPlugin* const&, bool) */

String * HashMap<String,EditorPlugin*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorPlugin*>>>
         ::insert(String *param_1,EditorPlugin **param_2,bool param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
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
  char cVar26;
  uint uVar27;
  ulong uVar28;
  EditorPlugin *pEVar29;
  EditorPlugin *pEVar30;
  undefined8 *in_RCX;
  int iVar31;
  undefined7 in_register_00000011;
  String *pSVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  undefined8 uVar36;
  EditorPlugin *pEVar37;
  uint uVar38;
  char in_R8B;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  uint uVar43;
  EditorPlugin *pEVar44;
  EditorPlugin *pEVar45;
  long in_FS_OFFSET;
  EditorPlugin *pEStack_c0;
  long local_58;
  undefined8 local_50;
  long local_40;
  
  pSVar32 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  if (param_2[1] == (EditorPlugin *)0x0) {
    uVar35 = (ulong)uVar34;
    uVar28 = uVar35 * 4;
    uVar41 = uVar35 * 8;
    pEVar30 = (EditorPlugin *)Memory::alloc_static(uVar28,false);
    param_2[2] = pEVar30;
    pEVar30 = (EditorPlugin *)Memory::alloc_static(uVar41,false);
    param_2[1] = pEVar30;
    if (uVar34 != 0) {
      pEVar37 = param_2[2];
      if ((pEVar37 < pEVar30 + uVar41) && (pEVar30 < pEVar37 + uVar28)) {
        uVar28 = 0;
        do {
          *(undefined4 *)(pEVar37 + uVar28 * 4) = 0;
          *(undefined8 *)(pEVar30 + uVar28 * 8) = 0;
          uVar28 = uVar28 + 1;
        } while (uVar35 != uVar28);
      }
      else {
        memset(pEVar37,0,uVar28);
        memset(pEVar30,0,uVar41);
      }
      goto LAB_00103e38;
    }
    iVar31 = *(int *)((long)param_2 + 0x2c);
    if (pEVar30 == (EditorPlugin *)0x0) goto LAB_00103e47;
    if (*(int *)((long)param_2 + 0x2c) != 0) goto LAB_00104278;
LAB_00103e6d:
    uVar34 = *(uint *)(param_2 + 5);
    if (uVar34 == 0x1c) {
      pEStack_c0 = (EditorPlugin *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00104227;
    }
    uVar28 = (ulong)(uVar34 + 1);
    *(undefined4 *)((long)param_2 + 0x2c) = 0;
    uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar34 * 4);
    if (uVar34 + 1 < 2) {
      uVar28 = 2;
    }
    uVar34 = *(uint *)(hash_table_size_primes + uVar28 * 4);
    uVar35 = (ulong)uVar34;
    *(int *)(param_2 + 5) = (int)uVar28;
    pEVar30 = param_2[1];
    uVar28 = uVar35 * 4;
    uVar41 = uVar35 * 8;
    pEVar37 = param_2[2];
    pEVar29 = (EditorPlugin *)Memory::alloc_static(uVar28,false);
    param_2[2] = pEVar29;
    pEVar29 = (EditorPlugin *)Memory::alloc_static(uVar41,false);
    param_2[1] = pEVar29;
    if (uVar34 != 0) {
      pEVar45 = param_2[2];
      if ((pEVar45 < pEVar29 + uVar41) && (pEVar29 < pEVar45 + uVar28)) {
        uVar28 = 0;
        do {
          *(undefined4 *)(pEVar45 + uVar28 * 4) = 0;
          *(undefined8 *)(pEVar29 + uVar28 * 8) = 0;
          uVar28 = uVar28 + 1;
        } while (uVar28 != uVar35);
      }
      else {
        memset(pEVar45,0,uVar28);
        memset(pEVar29,0,uVar41);
      }
    }
    if (uVar27 != 0) {
      uVar28 = 0;
      do {
        uVar34 = *(uint *)(pEVar37 + uVar28 * 4);
        if (uVar34 != 0) {
          pEVar44 = param_2[2];
          uVar39 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
          uVar41 = CONCAT44(0,uVar38);
          lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
          auVar2._8_8_ = 0;
          auVar2._0_8_ = (ulong)uVar34 * lVar1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar41;
          lVar33 = SUB168(auVar2 * auVar14,8);
          pEVar45 = pEVar44 + lVar33 * 4;
          iVar31 = SUB164(auVar2 * auVar14,8);
          uVar40 = *(uint *)pEVar45;
          uVar42 = *(undefined8 *)(pEVar30 + uVar28 * 8);
          while (uVar40 != 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)uVar40 * lVar1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar41;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)((uVar38 + iVar31) - SUB164(auVar3 * auVar15,8)) * lVar1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar41;
            uVar43 = SUB164(auVar4 * auVar16,8);
            uVar36 = uVar42;
            if (uVar43 < uVar39) {
              *(uint *)pEVar45 = uVar34;
              uVar36 = *(undefined8 *)(pEVar29 + lVar33 * 8);
              *(undefined8 *)(pEVar29 + lVar33 * 8) = uVar42;
              uVar34 = uVar40;
              uVar39 = uVar43;
            }
            uVar39 = uVar39 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar31 + 1) * lVar1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar41;
            lVar33 = SUB168(auVar5 * auVar17,8);
            pEVar45 = pEVar44 + lVar33 * 4;
            iVar31 = SUB164(auVar5 * auVar17,8);
            uVar42 = uVar36;
            uVar40 = *(uint *)pEVar45;
          }
          *(undefined8 *)(pEVar29 + lVar33 * 8) = uVar42;
          *(uint *)pEVar45 = uVar34;
          *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
        }
        uVar28 = uVar28 + 1;
      } while (uVar27 != uVar28);
      Memory::free_static(pEVar30,false);
      Memory::free_static(pEVar37,false);
    }
  }
  else {
LAB_00103e38:
    iVar31 = *(int *)((long)param_2 + 0x2c);
    if (iVar31 != 0) {
LAB_00104278:
      uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
      uVar28 = CONCAT44(0,uVar27);
      lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      uVar40 = String::hash();
      pEVar30 = param_2[2];
      uVar38 = 1;
      if (uVar40 != 0) {
        uVar38 = uVar40;
      }
      uVar43 = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar38 * lVar1;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar28;
      lVar33 = SUB168(auVar10 * auVar22,8);
      uVar40 = *(uint *)(pEVar30 + lVar33 * 4);
      uVar39 = SUB164(auVar10 * auVar22,8);
      if (uVar40 != 0) {
        do {
          if (uVar38 == uVar40) {
            cVar26 = String::operator==((String *)(*(long *)(param_2[1] + lVar33 * 8) + 0x10),
                                        pSVar32);
            if (cVar26 != '\0') {
              pEStack_c0 = *(EditorPlugin **)(param_2[1] + (ulong)uVar39 * 8);
              *(undefined8 *)(pEStack_c0 + 0x18) = *in_RCX;
              goto LAB_00104227;
            }
            pEVar30 = param_2[2];
          }
          uVar43 = uVar43 + 1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)(uVar39 + 1) * lVar1;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar28;
          lVar33 = SUB168(auVar11 * auVar23,8);
          uVar40 = *(uint *)(pEVar30 + lVar33 * 4);
          uVar39 = SUB164(auVar11 * auVar23,8);
        } while ((uVar40 != 0) &&
                (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar40 * lVar1, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar28, auVar13._8_8_ = 0,
                auVar13._0_8_ = (ulong)((uVar27 + uVar39) - SUB164(auVar12 * auVar24,8)) * lVar1,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar28, uVar43 <= SUB164(auVar13 * auVar25,8)));
      }
      iVar31 = *(int *)((long)param_2 + 0x2c);
    }
LAB_00103e47:
    if ((float)uVar34 * __LC37 < (float)(iVar31 + 1)) goto LAB_00103e6d;
  }
  local_58 = 0;
  if (*(long *)pSVar32 == 0) {
    uVar42 = *in_RCX;
    local_50 = uVar42;
    pEStack_c0 = (EditorPlugin *)operator_new(0x20,"");
    *(undefined8 *)(pEStack_c0 + 0x10) = 0;
    *(undefined1 (*) [16])pEStack_c0 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar32);
    lVar1 = local_58;
    uVar42 = *in_RCX;
    local_50 = uVar42;
    pEStack_c0 = (EditorPlugin *)operator_new(0x20,"");
    *(undefined8 *)(pEStack_c0 + 0x10) = 0;
    *(undefined8 *)pEStack_c0 = 0;
    *(undefined8 *)(pEStack_c0 + 8) = 0;
    if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pEStack_c0 + 0x10),(CowData *)&local_58);
    }
  }
  *(undefined8 *)(pEStack_c0 + 0x18) = uVar42;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  pEVar30 = param_2[4];
  if (pEVar30 == (EditorPlugin *)0x0) {
    param_2[3] = pEStack_c0;
    param_2[4] = pEStack_c0;
  }
  else if (in_R8B == '\0') {
    *(EditorPlugin **)pEVar30 = pEStack_c0;
    *(EditorPlugin **)(pEStack_c0 + 8) = pEVar30;
    param_2[4] = pEStack_c0;
  }
  else {
    pEVar30 = param_2[3];
    *(EditorPlugin **)(pEVar30 + 8) = pEStack_c0;
    *(EditorPlugin **)pEStack_c0 = pEVar30;
    param_2[3] = pEStack_c0;
  }
  uVar27 = String::hash();
  pEVar30 = param_2[2];
  uVar34 = 1;
  if (uVar27 != 0) {
    uVar34 = uVar27;
  }
  lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar28 = CONCAT44(0,uVar27);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (ulong)uVar34 * lVar1;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar28;
  lVar33 = SUB168(auVar6 * auVar18,8);
  pEVar29 = param_2[1];
  pEVar37 = pEVar30 + lVar33 * 4;
  iVar31 = SUB164(auVar6 * auVar18,8);
  uVar38 = *(uint *)pEVar37;
  pEVar45 = pEStack_c0;
  if (uVar38 != 0) {
    uVar40 = 0;
    pEVar44 = pEStack_c0;
    do {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar38 * lVar1;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar28;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)((uVar27 + iVar31) - SUB164(auVar7 * auVar19,8)) * lVar1;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar28;
      uVar39 = SUB164(auVar8 * auVar20,8);
      pEVar45 = pEVar44;
      if (uVar39 < uVar40) {
        *(uint *)pEVar37 = uVar34;
        pEVar37 = pEVar29 + lVar33 * 8;
        pEVar45 = *(EditorPlugin **)pEVar37;
        *(EditorPlugin **)pEVar37 = pEVar44;
        uVar40 = uVar39;
        uVar34 = uVar38;
      }
      uVar40 = uVar40 + 1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)(iVar31 + 1) * lVar1;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar28;
      lVar33 = SUB168(auVar9 * auVar21,8);
      pEVar37 = pEVar30 + lVar33 * 4;
      iVar31 = SUB164(auVar9 * auVar21,8);
      uVar38 = *(uint *)pEVar37;
      pEVar44 = pEVar45;
    } while (uVar38 != 0);
  }
  *(EditorPlugin **)(pEVar29 + lVar33 * 8) = pEVar45;
  *(uint *)pEVar37 = uVar34;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_00104227:
  *(EditorPlugin **)param_1 = pEStack_c0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Control, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Control,void>::call
          (CallableCustomMethodPointer<Control,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001046ff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001046ff;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001046d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001047c1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001046ff:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC45,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001047c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorMainScreen, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorMainScreen,void,int>::call
          (CallableCustomMethodPointer<EditorMainScreen,void,int> *this,Variant **param_1,
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
      goto LAB_00104988;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00104988;
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
        uVar3 = _LC46;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00104a39;
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
LAB_00104988:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC45,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00104a39:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMainScreen::~EditorMainScreen() */

void __thiscall EditorMainScreen::~EditorMainScreen(EditorMainScreen *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_00108238;
  pvVar6 = *(void **)(this + 0xa48);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xa6c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa68) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xa6c) = 0;
        *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa50) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0xa50) + lVar5) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x10));
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0xa48);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xa6c) = 0;
        *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00104b03;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xa50),false);
  }
LAB_00104b03:
  if (*(long *)(this + 0xa38) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa38) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0xa38);
      *(undefined8 *)(this + 0xa38) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0xa28);
      *(undefined8 *)(this + 0xa28) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  *(code **)this = Node::_bind_methods;
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
  bVar7 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar7) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104b9e;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104b9e:
  Control::~Control((Control *)this);
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
            if (lVar5 == 0) goto LAB_00104cff;
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
LAB_00104cff:
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
    if (cVar6 != '\0') goto LAB_00104db3;
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
      if (cVar6 != '\0') goto LAB_00104db3;
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
                if (lVar5 == 0) goto LAB_00104f13;
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
LAB_00104f13:
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
        if (cVar6 != '\0') goto LAB_00104db3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00104fbc;
    }
  }
LAB_00104db3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104fbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
            if (lVar3 == 0) goto LAB_0010504f;
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
LAB_0010504f:
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
    if (cVar6 != '\0') goto LAB_00105103;
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
      if (cVar6 != '\0') goto LAB_00105103;
    }
    cVar6 = String::operator==(param_1,"Control");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar8;
      }
      goto LAB_0010520e;
    }
  }
LAB_00105103:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010520e:
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
            if (lVar3 == 0) goto LAB_0010528f;
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
LAB_0010528f:
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
    if (cVar6 != '\0') goto LAB_00105343;
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
      if (cVar6 != '\0') goto LAB_00105343;
    }
    cVar6 = String::operator==(param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0010544e;
    }
  }
LAB_00105343:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010544e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMainScreen::is_class(String const&) const */

undefined8 __thiscall EditorMainScreen::is_class(EditorMainScreen *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_001054df;
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
LAB_001054df:
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
    if (cVar6 != '\0') goto LAB_00105593;
  }
  cVar6 = String::operator==(param_1,"EditorMainScreen");
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
      if (cVar6 != '\0') goto LAB_00105593;
    }
    cVar6 = String::operator==(param_1,"PanelContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0010569e;
    }
  }
LAB_00105593:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010569e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMainScreen::~EditorMainScreen() */

void __thiscall EditorMainScreen::~EditorMainScreen(EditorMainScreen *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_00108238;
  pvVar6 = *(void **)(this + 0xa48);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xa6c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa68) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xa6c) = 0;
        *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa50) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0xa50) + lVar5) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x10));
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0xa48);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xa6c) = 0;
        *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00105773;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xa50),false);
  }
LAB_00105773:
  if (*(long *)(this + 0xa38) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa38) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0xa38);
      *(undefined8 *)(this + 0xa38) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (*(long *)(this + 0xa28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0xa28);
      *(undefined8 *)(this + 0xa28) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  *(code **)this = Node::_bind_methods;
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
  bVar7 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar7) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010580e;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010580e:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
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
              if ((code *)PTR__bind_methods_0010c050 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0010c040 !=
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
      if ((code *)PTR__bind_methods_0010c048 != Container::_bind_methods) {
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



/* EditorMainScreen::_initialize_classv() */

void EditorMainScreen::_initialize_classv(void)

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
    if (PanelContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_0010c050 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0010c040 !=
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
      local_58 = "PanelContainer";
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
      if ((code *)PTR__bind_methods_0010c058 != Container::_bind_methods) {
        PanelContainer::_bind_methods();
      }
      PanelContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "PanelContainer";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorMainScreen";
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
  local_78 = &_LC48;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC48;
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
      goto LAB_0010668c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010668c:
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
      goto LAB_001068f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001068f1:
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
  if ((code *)PTR__get_property_list_0010c060 != Object::_get_property_list) {
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
      goto LAB_00106bc1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00106bc1:
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
  if ((code *)PTR__get_property_list_0010c068 != CanvasItem::_get_property_list) {
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
      goto LAB_00106e91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00106e91:
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
      goto LAB_00107141;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00107141:
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



/* EditorMainScreen::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorMainScreen::_get_property_listv(EditorMainScreen *this,List *param_1,bool param_2)

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
  local_78 = "EditorMainScreen";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorMainScreen";
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
      goto LAB_001073f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001073f1:
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
  StringName::StringName((StringName *)&local_78,"EditorMainScreen",false);
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
      goto LAB_001076a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001076a1:
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
      goto LAB_00107951;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00107951:
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



/* CowData<Button*>::_realloc(long) */

undefined8 __thiscall CowData<Button*>::_realloc(CowData<Button*> *this,long param_1)

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
/* Error CowData<Button*>::resize<false>(long) */

undefined8 __thiscall CowData<Button*>::resize<false>(CowData<Button*> *this,long param_1)

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
LAB_00107dd0:
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
  if (lVar8 == 0) goto LAB_00107dd0;
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
        goto LAB_00107ce1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00107ce1:
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



/* CowData<EditorPlugin*>::_realloc(long) */

undefined8 __thiscall CowData<EditorPlugin*>::_realloc(CowData<EditorPlugin*> *this,long param_1)

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
/* Error CowData<EditorPlugin*>::resize<false>(long) */

undefined8 __thiscall
CowData<EditorPlugin*>::resize<false>(CowData<EditorPlugin*> *this,long param_1)

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
LAB_001080b0:
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
  if (lVar8 == 0) goto LAB_001080b0;
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
        goto LAB_00107fc1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00107fc1:
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



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorMainScreen::~EditorMainScreen() */

void __thiscall EditorMainScreen::~EditorMainScreen(EditorMainScreen *this)

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
/* CallableCustomMethodPointer<EditorMainScreen, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorMainScreen,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorMainScreen,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



