/* ActionMapEditor::can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */

ulong ActionMapEditor::can_drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  Variant *pVVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  Variant local_88 [8];
  long local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_Dictionary(local_88);
  Variant::Variant((Variant *)local_58,"input_type");
  uVar3 = Dictionary::has(local_88);
  uVar9 = (ulong)uVar3;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((char)uVar3 != '\0') {
    plVar4 = (long *)Tree::get_selected();
    plVar5 = (long *)Tree::get_item_at_position(*(Vector2 **)(param_1 + 0x9d8));
    if ((plVar4 != (long *)0x0 && plVar5 != (long *)0x0) && (plVar4 != plVar5)) {
      Variant::Variant((Variant *)local_58,"action");
      Variant::Variant((Variant *)local_78,"input_type");
      pVVar6 = (Variant *)Dictionary::operator[](local_88);
      cVar2 = Variant::operator==(pVVar6,(Variant *)local_58);
      if (cVar2 != '\0') {
        pcVar1 = *(code **)(*plVar5 + 0xa0);
        StringName::StringName((StringName *)&local_80,"__event",false);
        cVar2 = (*pcVar1)(plVar5,(StringName *)&local_80);
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar2 == '\0') {
        Variant::Variant((Variant *)local_58,"event");
        Variant::Variant((Variant *)local_78,"input_type");
        pVVar6 = (Variant *)Dictionary::operator[](local_88);
        cVar2 = Variant::operator==(pVVar6,(Variant *)local_58);
        if (cVar2 != '\0') {
          lVar7 = TreeItem::get_parent();
          lVar8 = TreeItem::get_parent();
          uVar9 = CONCAT71((int7)((ulong)lVar7 >> 8),lVar7 == lVar8);
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_001000da;
      }
    }
  }
  uVar9 = 0;
LAB_001000da:
  Dictionary::~Dictionary((Dictionary *)local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::_on_filter_focused() */

void __thiscall ActionMapEditor::_on_filter_focused(ActionMapEditor *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (_on_filter_focused()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_on_filter_focused()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_on_filter_focused()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_on_filter_focused()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_on_filter_focused()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&_on_filter_focused()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::_on_filter_unfocused() */

void __thiscall ActionMapEditor::_on_filter_unfocused(ActionMapEditor *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (_on_filter_unfocused()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_on_filter_unfocused()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_on_filter_unfocused()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_on_filter_unfocused()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_on_filter_unfocused()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&_on_filter_unfocused()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* ActionMapEditor::_has_action(String const&) const */

undefined8 __thiscall ActionMapEditor::_has_action(ActionMapEditor *this,String *param_1)

{
  undefined8 uVar1;
  String *pSVar2;
  String *pSVar3;
  
  pSVar2 = *(String **)(this + 0x9d0);
  if (pSVar2 != (String *)0x0) {
    pSVar3 = pSVar2 + *(long *)(pSVar2 + -8) * 0x30;
    for (; pSVar3 != pSVar2; pSVar2 = pSVar2 + 0x30) {
      uVar1 = String::operator==(param_1,pSVar2);
      if ((char)uVar1 != '\0') {
        return uVar1;
      }
    }
  }
  return 0;
}



/* ActionMapEditor::get_search_box() const */

undefined8 __thiscall ActionMapEditor::get_search_box(ActionMapEditor *this)

{
  return *(undefined8 *)(this + 0xa18);
}



/* ActionMapEditor::get_path_box() const */

undefined8 __thiscall ActionMapEditor::get_path_box(ActionMapEditor *this)

{
  return *(undefined8 *)(this + 0xa38);
}



/* ActionMapEditor::get_configuration_dialog() */

undefined8 __thiscall ActionMapEditor::get_configuration_dialog(ActionMapEditor *this)

{
  return *(undefined8 *)(this + 0x9f8);
}



/* ActionMapEditor::show_message(String const&) */

void __thiscall ActionMapEditor::show_message(ActionMapEditor *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_20;
  
  uVar2 = *(undefined8 *)(this + 0xa00);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar4 = *plVar1;
      if (lVar4 == 0) goto LAB_00100789;
      LOCK();
      lVar5 = *plVar1;
      bVar6 = lVar4 == lVar5;
      if (bVar6) {
        *plVar1 = lVar4 + 1;
        lVar5 = lVar4;
      }
      UNLOCK();
    } while (!bVar6);
    if (lVar5 != -1) {
      local_20 = *(long *)param_1;
    }
  }
LAB_00100789:
  AcceptDialog::set_text(uVar2);
  if (local_20 != 0) {
    LOCK();
    plVar1 = (long *)(local_20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_20 + -0x10),false);
    }
  }
  Window::popup_centered(*(Vector2i **)(this + 0xa00));
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ActionMapEditor::use_external_search_box(LineEdit*) */

void __thiscall ActionMapEditor::use_external_search_box(ActionMapEditor *this,LineEdit *param_1)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  long in_FS_OFFSET;
  ActionMapEditor aAStack_48 [24];
  long local_30;
  
  pOVar1 = *(Object **)(this + 0xa18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = predelete_handler(pOVar1);
  if (cVar3 != '\0') {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  *(LineEdit **)(this + 0xa18) = param_1;
  pcVar2 = *(code **)(*(long *)param_1 + 0x108);
  create_custom_callable_function_pointer<ActionMapEditor,String_const&>
            (aAStack_48,(char *)this,
             (_func_void_String_ptr *)"&ActionMapEditor::_search_term_updated");
  (*pcVar2)(param_1,SceneStringNames::singleton + 0x270,aAStack_48,0);
  Callable::~Callable((Callable *)aAStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::get_drag_data_fw(Vector2 const&, Control*) */

Vector2 * ActionMapEditor::get_drag_data_fw(Vector2 *param_1,Control *param_2)

{
  code *pcVar1;
  char cVar2;
  long *plVar3;
  Label *this;
  Variant *pVVar4;
  long in_FS_OFFSET;
  CowData<char32_t> local_90 [8];
  Dictionary local_88 [8];
  long local_80;
  int local_78 [8];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)Tree::get_selected();
  if (plVar3 == (long *)0x0) {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  else {
    TreeItem::get_text((int)local_90);
    this = (Label *)operator_new(0xad8,"");
    Label::Label(this,(String *)local_90);
    postinitialize_handler((Object *)this);
    StringName::StringName((StringName *)&local_80,"HeaderSmall",false);
    Control::set_theme_type_variation((StringName *)this);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    local_58 = _LC22;
    iStack_54 = _LC22;
    iStack_50 = _LC22;
    iStack_4c = _LC22;
    CanvasItem::set_modulate((Color *)this);
    Node::set_auto_translate_mode(this,2);
    Control::set_drag_preview(*(Control **)(param_2 + 0x9d8));
    Dictionary::Dictionary(local_88);
    pcVar1 = *(code **)(*plVar3 + 0xa0);
    StringName::StringName((StringName *)&local_80,"__action",false);
    cVar2 = (*pcVar1)(plVar3,(StringName *)&local_80);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    if (cVar2 != '\0') {
      Variant::Variant((Variant *)&local_58,"action");
      Variant::Variant((Variant *)local_78,"input_type");
      pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_88);
      if (pVVar4 != (Variant *)&local_58) {
        if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar4 = 0;
        *(int *)pVVar4 = local_58;
        *(ulong *)(pVVar4 + 8) = CONCAT44(iStack_4c,iStack_50);
        *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
        local_58 = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58] != '\0') {
        Variant::_clear_internal();
      }
    }
    pcVar1 = *(code **)(*plVar3 + 0xa0);
    StringName::StringName((StringName *)&local_80,"__event",false);
    cVar2 = (*pcVar1)(plVar3,(StringName *)&local_80);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    if (cVar2 != '\0') {
      Variant::Variant((Variant *)&local_58,"event");
      Variant::Variant((Variant *)local_78,"input_type");
      pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_88);
      if (pVVar4 != (Variant *)&local_58) {
        if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar4 = 0;
        *(int *)pVVar4 = local_58;
        *(ulong *)(pVVar4 + 8) = CONCAT44(iStack_4c,iStack_50);
        *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
        local_58 = 0;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58] != '\0') {
        Variant::_clear_internal();
      }
    }
    Tree::set_drop_mode_flags((int)*(undefined8 *)(param_2 + 0x9d8));
    Variant::Variant((Variant *)param_1,local_88);
    Dictionary::~Dictionary(local_88);
    CowData<char32_t>::_unref(local_90);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::drop_data_fw(Vector2 const&, Variant const&, Control*) */

void ActionMapEditor::drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  Variant *pVVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  Variant *pVVar10;
  int iVar11;
  long in_FS_OFFSET;
  Variant local_138 [8];
  Variant local_130 [8];
  Variant local_128 [8];
  Variant local_120 [8];
  long local_118;
  long local_110;
  undefined8 local_108;
  undefined1 local_100 [16];
  int local_e8 [8];
  Variant *local_c8;
  undefined1 auStack_c0 [24];
  int local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  Variant local_90 [24];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = can_drop_data_fw(param_1,param_2,param_3);
  if (cVar3 != '\0') {
    plVar8 = (long *)Tree::get_selected();
    plVar9 = (long *)Tree::get_item_at_position(*(Vector2 **)(param_1 + 0x9d8));
    iVar4 = Tree::get_drop_section_at_position(*(Vector2 **)(param_1 + 0x9d8));
    if (plVar9 != (long *)0x0) {
      Variant::operator_cast_to_Dictionary(local_138);
      Variant::Variant((Variant *)local_a8,"action");
      Variant::Variant((Variant *)&local_c8,"input_type");
      pVVar10 = (Variant *)Dictionary::operator[](local_138);
      cVar3 = Variant::operator==(pVVar10,(Variant *)local_a8);
      if (Variant::needs_deinit[(int)local_c8] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar3 == '\0') {
        Variant::Variant((Variant *)local_a8,"event");
        Variant::Variant((Variant *)&local_c8,"input_type");
        pVVar10 = (Variant *)Dictionary::operator[](local_138);
        cVar3 = Variant::operator==(pVVar10,(Variant *)local_a8);
        if (Variant::needs_deinit[(int)local_c8] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar3 != '\0') {
          pcVar2 = *(code **)(*plVar8 + 0xb8);
          auStack_c0._0_16_ = (undefined1  [16])0x0;
          local_c8 = (Variant *)0x0;
          StringName::StringName((StringName *)&local_110,"__index",false);
          (*pcVar2)((Variant *)local_a8,plVar8,(StringName *)&local_110,(Variant *)&local_c8);
          iVar5 = Variant::operator_cast_to_int((Variant *)local_a8);
          if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_110 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_c8] != '\0') {
            Variant::_clear_internal();
          }
          pcVar2 = *(code **)(*plVar9 + 0xb8);
          auStack_c0._0_16_ = (undefined1  [16])0x0;
          local_c8 = (Variant *)0x0;
          StringName::StringName((StringName *)&local_110,"__index",false);
          (*pcVar2)((Variant *)local_a8,plVar9,(StringName *)&local_110,(Variant *)&local_c8);
          iVar6 = Variant::operator_cast_to_int((Variant *)local_a8);
          if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_110 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_c8] != '\0') {
            Variant::_clear_internal();
          }
          plVar8 = (long *)TreeItem::get_parent();
          pcVar2 = *(code **)(*plVar8 + 0xb8);
          auStack_c0._0_16_ = (undefined1  [16])0x0;
          local_c8 = (Variant *)0x0;
          StringName::StringName((StringName *)&local_110,"__action",false);
          (*pcVar2)((Variant *)local_a8,plVar8,(StringName *)&local_110,(Variant *)&local_c8);
          Variant::operator_cast_to_Dictionary(local_130);
          if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_110 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_c8] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_a8,"events");
          Dictionary::operator[](local_130);
          Variant::operator_cast_to_Array(local_128);
          if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
          }
          Array::Array((Array *)local_120);
          for (iVar11 = 0; iVar7 = Array::size(), iVar11 < iVar7; iVar11 = iVar11 + 1) {
            if (iVar11 != iVar5) {
              iVar7 = (int)local_128;
              if (iVar11 == iVar6) {
                if (iVar4 == -1) {
                  Array::operator[](iVar7);
                  Array::push_back(local_120);
                }
                else {
                  Array::operator[](iVar7);
                  Array::push_back(local_120);
                }
              }
              Array::operator[](iVar7);
              Array::push_back(local_120);
            }
          }
          Variant::Variant((Variant *)local_a8,(Array *)local_120);
          Variant::Variant((Variant *)&local_c8,"events");
          pVVar10 = (Variant *)Dictionary::operator[](local_130);
          if (pVVar10 != (Variant *)local_a8) {
            if (Variant::needs_deinit[*(int *)pVVar10] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar10 = 0;
            *(int *)pVVar10 = local_a8[0];
            *(undefined8 *)(pVVar10 + 8) = local_a0;
            *(undefined8 *)(pVVar10 + 0x10) = uStack_98;
            local_a8[0] = 0;
          }
          if (Variant::needs_deinit[(int)local_c8] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
          }
          Dictionary::Dictionary((Dictionary *)&local_110,(Dictionary *)local_130);
          plVar8 = (long *)TreeItem::get_parent();
          local_100 = (undefined1  [16])0x0;
          pcVar2 = *(code **)(*plVar8 + 0xb8);
          local_108 = 0;
          StringName::StringName((StringName *)&local_118,"__name",false);
          (*pcVar2)((Variant *)local_e8,plVar8,(StringName *)&local_118,&local_108);
          if ((drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#2}::operator()()::
               sname == '\0') &&
             (iVar4 = __cxa_guard_acquire(&drop_data_fw(Vector2_const&,Variant_const&,Control*)::
                                           {lambda()#2}::operator()()::sname), iVar4 != 0)) {
            _scs_create((char *)&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#2}
                                 ::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#2}::
                          operator()()::sname,&__dso_handle);
            __cxa_guard_release(&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#2}
                                 ::operator()()::sname);
          }
          Variant::Variant((Variant *)local_a8,(Variant *)local_e8);
          Variant::Variant(local_90,(Dictionary *)&local_110);
          local_70 = (undefined1  [16])0x0;
          local_78 = 0;
          pVVar10 = (Variant *)&local_60;
          auStack_c0._0_8_ = local_90;
          local_c8 = (Variant *)local_a8;
          (**(code **)(*(long *)param_1 + 0xd0))
                    (param_1,&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#2}::
                              operator()()::sname,(Variant *)&local_c8,2);
          do {
            pVVar1 = pVVar10 + -0x18;
            pVVar10 = pVVar10 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar10 != (Variant *)local_a8);
          if (Variant::needs_deinit[local_e8[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_118 != 0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_108] != '\0') {
            Variant::_clear_internal();
          }
          Dictionary::~Dictionary((Dictionary *)&local_110);
          Array::~Array((Array *)local_120);
          Array::~Array((Array *)local_128);
          Dictionary::~Dictionary((Dictionary *)local_130);
        }
      }
      else {
        pcVar2 = *(code **)(*plVar9 + 0xb8);
        auStack_c0._0_16_ = (undefined1  [16])0x0;
        local_c8 = (Variant *)0x0;
        StringName::StringName((StringName *)&local_110,"__name",false);
        (*pcVar2)((Variant *)local_a8,plVar9,(StringName *)&local_110,(Variant *)&local_c8);
        Variant::operator_cast_to_String(local_128);
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_110 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_c8] != '\0') {
          Variant::_clear_internal();
        }
        pcVar2 = *(code **)(*plVar8 + 0xb8);
        auStack_c0._0_16_ = (undefined1  [16])0x0;
        local_c8 = (Variant *)0x0;
        StringName::StringName((StringName *)&local_110,"__name",false);
        (*pcVar2)((Variant *)local_a8,plVar8,(StringName *)&local_110,(Variant *)&local_c8);
        Variant::operator_cast_to_String(local_120);
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_110 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_c8] != '\0') {
          Variant::_clear_internal();
        }
        local_110 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)local_128);
        local_118 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)local_120);
        if ((drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#1}::operator()()::sname
             == '\0') &&
           (iVar5 = __cxa_guard_acquire(&drop_data_fw(Vector2_const&,Variant_const&,Control*)::
                                         {lambda()#1}::operator()()::sname), iVar5 != 0)) {
          _scs_create((char *)&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#1}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#1}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#1}::
                               operator()()::sname);
        }
        Variant::Variant((Variant *)local_a8,(String *)&local_118);
        Variant::Variant(local_90,(String *)&local_110);
        Variant::Variant((Variant *)&local_78,iVar4 == -1);
        local_58 = (undefined1  [16])0x0;
        pVVar10 = local_48;
        local_60 = 0;
        auStack_c0._8_8_ = (Variant *)&local_78;
        auStack_c0._0_8_ = local_90;
        local_c8 = (Variant *)local_a8;
        (**(code **)(*(long *)param_1 + 0xd0))
                  (param_1,&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#1}::
                            operator()()::sname,(Variant *)&local_c8,3);
        do {
          pVVar1 = pVVar10 + -0x18;
          pVVar10 = pVVar10 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar10 != (Variant *)local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
      }
      Dictionary::~Dictionary((Dictionary *)local_138);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ActionMapEditor::_event_config_confirmed() */

void __thiscall ActionMapEditor::_event_config_confirmed(ActionMapEditor *this)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  Variant *pVVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  Object *local_f0;
  Variant local_e8 [8];
  Variant local_e0 [8];
  undefined8 local_d8;
  Dictionary local_d0 [8];
  int local_c8 [8];
  Variant *local_a8;
  Variant *pVStack_a0;
  undefined8 uStack_98;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  InputEventConfigurationDialog::get_event();
  Dictionary::duplicate(SUB81(local_e8,0));
  Variant::Variant((Variant *)local_c8,"events");
  Dictionary::operator[](local_e8);
  Variant::duplicate(SUB81((Variant *)&local_a8,0));
  Variant::operator_cast_to_Array(local_e0);
  if (Variant::needs_deinit[(int)local_a8] == '\0') {
    cVar4 = Variant::needs_deinit[local_c8[0]];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[local_c8[0]];
  }
  if (cVar4 != '\0') {
    Variant::_clear_internal();
  }
  if (*(int *)(this + 0x9f0) == -1) {
    Variant::Variant((Variant *)&local_a8,local_f0);
    Array::push_back(local_e0);
    cVar4 = Variant::needs_deinit[(int)local_a8];
  }
  else {
    Variant::Variant((Variant *)&local_a8,local_f0);
    pVVar6 = (Variant *)Array::operator[]((int)local_e0);
    if (pVVar6 != (Variant *)&local_a8) {
      if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar6 = 0;
      *(int *)pVVar6 = (int)local_a8;
      *(Variant **)(pVVar6 + 8) = pVStack_a0;
      *(undefined8 *)(pVVar6 + 0x10) = uStack_98;
      goto LAB_00101954;
    }
    cVar4 = Variant::needs_deinit[(int)local_a8];
  }
  if (cVar4 != '\0') {
    Variant::_clear_internal();
  }
LAB_00101954:
  Variant::Variant((Variant *)&local_a8,(Array *)local_e0);
  Variant::Variant((Variant *)local_c8,"events");
  pVVar6 = (Variant *)Dictionary::operator[](local_e8);
  if (pVVar6 != (Variant *)&local_a8) {
    if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar6 = 0;
    *(int *)pVVar6 = (int)local_a8;
    *(Variant **)(pVVar6 + 8) = pVStack_a0;
    *(undefined8 *)(pVVar6 + 0x10) = uStack_98;
    local_a8 = (Variant *)((ulong)local_a8 & 0xffffffff00000000);
  }
  if (Variant::needs_deinit[local_c8[0]] == '\0') {
    cVar4 = Variant::needs_deinit[(int)local_a8];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[(int)local_a8];
  }
  if (cVar4 != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::Dictionary(local_d0,(Dictionary *)local_e8);
  local_d8 = 0;
  plVar1 = (long *)(*(long *)(this + 0x9e8) + -0x10);
  if (*(long *)(this + 0x9e8) != 0) {
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_00101a25;
      LOCK();
      lVar7 = *plVar1;
      bVar8 = lVar3 == lVar7;
      if (bVar8) {
        *plVar1 = lVar3 + 1;
        lVar7 = lVar3;
      }
      UNLOCK();
    } while (!bVar8);
    if (lVar7 != -1) {
      local_d8 = *(undefined8 *)(this + 0x9e8);
    }
  }
LAB_00101a25:
  if ((_event_config_confirmed()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_event_config_confirmed()::{lambda()#1}::operator()()::sname),
     iVar5 != 0)) {
    _scs_create((char *)&_event_config_confirmed()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_event_config_confirmed()::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_event_config_confirmed()::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant(local_88,(String *)&local_d8);
  Variant::Variant(local_70,local_d0);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pVVar6 = (Variant *)local_40;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_event_config_confirmed()::{lambda()#1}::operator()()::sname,(Variant *)&local_a8
             ,2);
  do {
    pVVar2 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  Dictionary::~Dictionary(local_d0);
  Array::~Array((Array *)local_e0);
  Dictionary::~Dictionary((Dictionary *)local_e8);
  if (((local_f0 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_f0), cVar4 != '\0')) {
    (**(code **)(*(long *)local_f0 + 0x140))(local_f0);
    Memory::free_static(local_f0,false);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::_should_display_action(String const&, Array const&) const */

undefined4 __thiscall
ActionMapEditor::_should_display_action(ActionMapEditor *this,String *param_1,Array *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  Object *pOVar6;
  int iVar7;
  long in_FS_OFFSET;
  Object *local_50;
  String local_48 [8];
  long local_40;
  
  uVar4 = 0;
  iVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EventListenerLineEdit::get_event();
  if (local_50 != (Object *)0x0) {
    for (; iVar2 = Array::size(), iVar7 < iVar2; iVar7 = iVar7 + 1) {
      Array::operator[]((int)param_2);
      lVar5 = Variant::get_validated_object();
      if (((lVar5 != 0) &&
          (pOVar6 = (Object *)__dynamic_cast(lVar5,&Object::typeinfo,&InputEvent::typeinfo,0),
          pOVar6 != (Object *)0x0)) && (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
        uVar3 = (**(code **)(*(long *)pOVar6 + 0x1e8))(pOVar6,&local_50,1);
        if ((char)uVar3 != '\0') {
          uVar4 = uVar3;
        }
        cVar1 = RefCounted::unreference();
        if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar6), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
    }
    if ((char)uVar4 == '\0') goto LAB_00101dcd;
  }
  LineEdit::get_text();
  uVar4 = String::is_subsequence_ofn(local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
LAB_00101dcd:
  if (((local_50 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_50), cVar1 != '\0')) {
    (**(code **)(*(long *)local_50 + 0x140))(local_50);
    Memory::free_static(local_50,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* ActionMapEditor::_check_new_action_name(String const&) */

String * ActionMapEditor::_check_new_action_name(String *param_1)

{
  char cVar1;
  String *in_RDX;
  long in_RSI;
  String *pSVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)in_RDX == 0) || (*(uint *)(*(long *)in_RDX + -8) < 2)) ||
     (cVar1 = _is_action_name_valid(in_RDX), cVar1 == '\0')) {
    local_50 = 0;
    local_48 = "";
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_50);
    local_48 = 
    "Invalid action name. It cannot be empty nor contain \'/\', \':\', \'=\', \'\\\' or \'\"\'";
    local_58 = 0;
    local_40 = 0x4d;
    String::parse_latin1((StrRange *)&local_58);
    TTR(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  else {
    pSVar2 = *(String **)(in_RSI + 0x9d0);
    if (pSVar2 != (String *)0x0) {
      pSVar3 = pSVar2 + *(long *)(pSVar2 + -8) * 0x30;
      for (; pSVar2 != pSVar3; pSVar2 = pSVar2 + 0x30) {
        cVar1 = String::operator==(in_RDX,pSVar2);
        if (cVar1 != '\0') {
          local_48 = (char *)0x0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)in_RDX);
          local_58 = 0;
          String::parse_latin1((String *)&local_58,"");
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"An action with the name \'%s\' already exists.")
          ;
          TTR((String *)&local_50,(String *)&local_60);
          vformat<String>(param_1,(String *)&local_50,(CowData<char32_t> *)&local_48);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          goto LAB_00101f32;
        }
      }
    }
    *(undefined8 *)param_1 = 0;
    String::parse_latin1(param_1,"");
  }
LAB_00101f32:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::_add_edit_text_changed(String const&) */

void ActionMapEditor::_add_edit_text_changed(String *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  _check_new_action_name((String *)&local_28);
  Control::set_tooltip_text(*(String **)(param_1 + 0xa40));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(param_1 + 0xa40),0));
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::ActionMapEditor() */

void __thiscall ActionMapEditor::ActionMapEditor(ActionMapEditor *this)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  ActionMapEditor AVar5;
  BoxContainer *this_00;
  BoxContainer *pBVar6;
  LineEdit *pLVar7;
  EventListenerLineEdit *this_01;
  CallableCustom *pCVar8;
  Button *pBVar9;
  VSeparator *this_02;
  CheckButton *this_03;
  String *pSVar10;
  Tree *this_04;
  InputEventConfigurationDialog *this_05;
  AcceptDialog *this_06;
  long in_FS_OFFSET;
  Tree local_d8 [16];
  Callable local_c8 [16];
  Tree local_b8 [16];
  undefined8 local_a8 [2];
  long local_98 [2];
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined ***)this = &PTR__initialize_classv_001123c0;
  *(undefined1 (*) [16])(this + 0x9d0) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this + 0x9e0));
  this[0xa08] = (ActionMapEditor)0x0;
  *(undefined8 *)(this + 0x9e8) = 0;
  *(undefined4 *)(this + 0x9f0) = 0xffffffff;
  *(undefined8 *)(this + 0xa40) = 0;
  *(undefined1 (*) [16])(this + 0x9f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00112aa0;
  postinitialize_handler((Object *)this_00);
  Control::set_anchors_and_offsets_preset(this_00,0xf,0,0);
  Node::add_child(this,this_00,0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00112728;
  postinitialize_handler((Object *)pBVar6);
  Node::add_child(this_00,pBVar6,0,0);
  pLVar7 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = (char *)0x0;
  LineEdit::LineEdit(pLVar7,(String *)&local_88);
  postinitialize_handler((Object *)pLVar7);
  *(LineEdit **)(this + 0xa18) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa18),3);
  uVar1 = *(undefined8 *)(this + 0xa18);
  local_98[0] = 0;
  local_88 = "";
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Filter by Name";
  local_a8[0] = 0;
  local_80 = 0xe;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  LineEdit::set_placeholder(uVar1,(CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xa18),0));
  plVar2 = *(long **)(this + 0xa18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ActionMapEditor,String_const&>
            ((ActionMapEditor *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ActionMapEditor::_search_term_updated");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x270,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa18),0,0);
  this_01 = (EventListenerLineEdit *)operator_new(0xbc0,"");
  EventListenerLineEdit::EventListenerLineEdit(this_01);
  postinitialize_handler((Object *)this_01);
  *(EventListenerLineEdit **)(this + 0xa20) = this_01;
  Control::set_h_size_flags(this_01,3);
  Control::set_stretch_ratio(_LC33);
  plVar2 = *(long **)(this + 0xa20);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar8 = &PTR_hash_00112ea8;
  *(undefined8 *)(pCVar8 + 0x30) = uVar1;
  *(code **)(pCVar8 + 0x38) = _search_by_event;
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined **)(pCVar8 + 0x20) = &_LC12;
  *(ActionMapEditor **)(pCVar8 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "ActionMapEditor::_search_by_event";
  Callable::Callable((Callable *)&local_88,pCVar8);
  StringName::StringName((StringName *)local_98,"event_changed",false);
  (*pcVar3)(plVar2,(StrRange *)local_98,(CowData<char32_t> *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar2 = *(long **)(this + 0xa20);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ActionMapEditor>
            ((ActionMapEditor *)&local_88,(char *)this,
             (_func_void *)"&ActionMapEditor::_on_filter_focused");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0xd8,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  plVar2 = *(long **)(this + 0xa20);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ActionMapEditor>
            ((ActionMapEditor *)&local_88,(char *)this,
             (_func_void *)"&ActionMapEditor::_on_filter_unfocused");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0xe0,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa20),0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_88 = (char *)0x0;
  Button::Button(pBVar9,(String *)&local_88);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa28) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar10 = *(String **)(this + 0xa28);
  local_98[0] = 0;
  local_88 = "";
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Clear All";
  local_a8[0] = 0;
  local_80 = 9;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  Button::set_text(pSVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar10 = *(String **)(this + 0xa28);
  local_98[0] = 0;
  local_88 = "";
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Clear all search filters.";
  local_a8[0] = 0;
  local_80 = 0x19;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  Control::set_tooltip_text(pSVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar2 = *(long **)(this + 0xa28);
  lVar4 = *(long *)(this + 0xa20);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  *(long *)(pCVar8 + 0x28) = lVar4;
  uVar1 = *(undefined8 *)(lVar4 + 0x60);
  *(undefined ***)pCVar8 = &PTR_hash_00112fc8;
  *(undefined8 *)(pCVar8 + 0x30) = uVar1;
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(code **)(pCVar8 + 0x38) = EventListenerLineEdit::clear_event;
  *(undefined **)(pCVar8 + 0x20) = &_LC12;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "EventListenerLineEdit::clear_event";
  Callable::Callable((Callable *)&local_88,pCVar8);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  plVar2 = *(long **)(this + 0xa28);
  lVar4 = *(long *)(this + 0xa18);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  *(long *)(pCVar8 + 0x28) = lVar4;
  uVar1 = *(undefined8 *)(lVar4 + 0x60);
  *(undefined ***)pCVar8 = &PTR_hash_00113058;
  *(undefined8 *)(pCVar8 + 0x30) = uVar1;
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(code **)(pCVar8 + 0x38) = LineEdit::clear;
  *(undefined **)(pCVar8 + 0x20) = &_LC12;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "LineEdit::clear";
  Callable::Callable((Callable *)&local_88,pCVar8);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa28),0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,false);
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00112728;
  pBVar6[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar6);
  *(BoxContainer **)(this + 0xa30) = pBVar6;
  Control::set_h_size_flags(pBVar6,3);
  pLVar7 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = (char *)0x0;
  LineEdit::LineEdit(pLVar7,(String *)&local_88);
  postinitialize_handler((Object *)pLVar7);
  *(LineEdit **)(this + 0xa38) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa38),3);
  uVar1 = *(undefined8 *)(this + 0xa38);
  local_98[0] = 0;
  local_88 = "";
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Add New Action";
  local_a8[0] = 0;
  local_80 = 0xe;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  LineEdit::set_placeholder(uVar1,(CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xa38),0));
  LineEdit::set_keep_editing_on_text_submit(SUB81(*(undefined8 *)(this + 0xa38),0));
  plVar2 = *(long **)(this + 0xa38);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ActionMapEditor,String_const&>
            ((ActionMapEditor *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ActionMapEditor::_add_edit_text_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x270,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  plVar2 = *(long **)(this + 0xa38);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ActionMapEditor,String_const&>
            ((ActionMapEditor *)&local_88,(char *)this,
             (_func_void_String_ptr *)"&ActionMapEditor::_add_action");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x278,(CowData<char32_t> *)&local_88);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa38),0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_88 = (char *)0x0;
  Button::Button(pBVar9,(String *)&local_88);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa40) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar10 = *(String **)(this + 0xa40);
  local_98[0] = 0;
  local_88 = "";
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Add";
  local_a8[0] = 0;
  local_80 = 3;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  Button::set_text(pSVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar2 = *(long **)(this + 0xa40);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ActionMapEditor>
            ((ActionMapEditor *)&local_88,(char *)this,
             (_func_void *)"&ActionMapEditor::_add_action_pressed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_88);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa40),0,0);
  LineEdit::get_text();
  _add_edit_text_changed((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  uVar1 = *(undefined8 *)(this + 0xa30);
  this_02 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(this_02);
  postinitialize_handler((Object *)this_02);
  Node::add_child(uVar1,this_02,0,0);
  this_03 = (CheckButton *)operator_new(0xc60,"");
  local_88 = (char *)0x0;
  CheckButton::CheckButton(this_03,(String *)&local_88);
  postinitialize_handler((Object *)this_03);
  *(CheckButton **)(this + 0xa10) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  pSVar10 = *(String **)(this + 0xa10);
  local_98[0] = 0;
  local_88 = "";
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Show Built-in Actions";
  local_a8[0] = 0;
  local_80 = 0x15;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  Button::set_text(pSVar10);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar2 = *(long **)(this + 0xa10);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar8 = &PTR_hash_001130e8;
  *(undefined8 *)(pCVar8 + 0x30) = uVar1;
  *(code **)(pCVar8 + 0x38) = set_show_builtin_actions;
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined **)(pCVar8 + 0x20) = &_LC12;
  *(ActionMapEditor **)(pCVar8 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "ActionMapEditor::set_show_builtin_actions";
  Callable::Callable((Callable *)&local_88,pCVar8);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(*(undefined8 *)(this + 0xa30),*(undefined8 *)(this + 0xa10),0,0);
  pSVar10 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,false);
  local_88 = "show_builtin_actions";
  local_98[0] = 0;
  local_80 = 0x14;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "project_settings";
  local_a8[0] = 0;
  local_80 = 0x10;
  String::parse_latin1((StrRange *)local_a8);
  EditorSettings::get_project_metadata((String *)local_78,pSVar10,(Variant *)local_a8);
  AVar5 = (ActionMapEditor)Variant::operator_cast_to_bool((Variant *)local_78);
  this[0xa08] = AVar5;
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0xa10),0));
  Node::add_child(this_00,*(undefined8 *)(this + 0xa30),0,0);
  this_04 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_04);
  postinitialize_handler((Object *)this_04);
  *(Tree **)(this + 0x9d8) = this_04;
  Control::set_v_size_flags(this_04,3);
  Tree::set_columns((int)*(undefined8 *)(this + 0x9d8));
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0x9d8),0));
  Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0x9d8),0));
  uVar1 = *(undefined8 *)(this + 0x9d8);
  local_98[0] = 0;
  local_88 = "";
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Action";
  local_a8[0] = 0;
  local_80 = 6;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  Tree::set_column_title((int)uVar1,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0x9d8),false);
  uVar1 = *(undefined8 *)(this + 0x9d8);
  local_98[0] = 0;
  local_88 = "";
  local_80 = 0;
  String::parse_latin1((StrRange *)local_98);
  local_88 = "Deadzone";
  local_a8[0] = 0;
  local_80 = 8;
  String::parse_latin1((StrRange *)local_a8);
  TTR((String *)&local_88,(String *)local_a8);
  Tree::set_column_title((int)uVar1,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0x9d8),true);
  uVar1 = *(undefined8 *)(this + 0x9d8);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar1,1);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0x9d8),true);
  uVar1 = *(undefined8 *)(this + 0x9d8);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar1,2);
  plVar2 = *(long **)(this + 0x9d8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ActionMapEditor>
            ((ActionMapEditor *)&local_88,(char *)this,
             (_func_void *)"&ActionMapEditor::_action_edited");
  StringName::StringName((StringName *)local_98,"item_edited",false);
  (*pcVar3)(plVar2,(StrRange *)local_98,(CowData<char32_t> *)&local_88,1);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar2 = *(long **)(this + 0x9d8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<ActionMapEditor>
            ((ActionMapEditor *)&local_88,(char *)this,
             (_func_void *)"&ActionMapEditor::_tree_item_activated");
  StringName::StringName((StringName *)local_98,"item_activated",false);
  (*pcVar3)(plVar2,(StrRange *)local_98,(CowData<char32_t> *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  plVar2 = *(long **)(this + 0x9d8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar8 = &PTR_hash_00113178;
  *(undefined8 *)(pCVar8 + 0x30) = uVar1;
  *(code **)(pCVar8 + 0x38) = _tree_button_pressed;
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined **)(pCVar8 + 0x20) = &_LC12;
  *(ActionMapEditor **)(pCVar8 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "ActionMapEditor::_tree_button_pressed";
  Callable::Callable((Callable *)&local_88,pCVar8);
  StringName::StringName((StringName *)local_98,"button_clicked",false);
  (*pcVar3)(plVar2,(StrRange *)local_98,(CowData<char32_t> *)&local_88,0);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(this_00,*(undefined8 *)(this + 0x9d8),0,0);
  plVar2 = *(long **)(this + 0x9d8);
  pcVar3 = *(code **)(*plVar2 + 0x318);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC12;
  *(ActionMapEditor **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_00113328;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar1;
  *(code **)(pCVar8 + 0x38) = drop_data_fw;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "ActionMapEditor::drop_data_fw";
  Callable::Callable((Callable *)&local_88,pCVar8);
  Callable::bind<Tree*>((Tree *)local_98);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC12;
  *(ActionMapEditor **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_00113298;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar1;
  *(code **)(pCVar8 + 0x38) = can_drop_data_fw;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "ActionMapEditor::can_drop_data_fw";
  Callable::Callable((Callable *)local_a8,pCVar8);
  Callable::bind<Tree*>(local_b8);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC12;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar8 = &PTR_hash_00113208;
  *(undefined8 *)(pCVar8 + 0x30) = uVar1;
  *(code **)(pCVar8 + 0x38) = get_drag_data_fw;
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(ActionMapEditor **)(pCVar8 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "ActionMapEditor::get_drag_data_fw";
  Callable::Callable(local_c8,pCVar8);
  Callable::bind<Tree*>(local_d8);
  (*pcVar3)(plVar2,local_d8,local_b8,(StrRange *)local_98);
  Callable::~Callable((Callable *)local_d8);
  Callable::~Callable(local_c8);
  Callable::~Callable((Callable *)local_b8);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)local_98);
  Callable::~Callable((Callable *)&local_88);
  this_05 = (InputEventConfigurationDialog *)operator_new(0xeb8,"");
  InputEventConfigurationDialog::InputEventConfigurationDialog(this_05);
  postinitialize_handler((Object *)this_05);
  lVar4 = *(long *)this_05;
  *(InputEventConfigurationDialog **)(this + 0x9f8) = this_05;
  pcVar3 = *(code **)(lVar4 + 0x108);
  create_custom_callable_function_pointer<ActionMapEditor>
            ((ActionMapEditor *)&local_88,(char *)this,
             (_func_void *)"&ActionMapEditor::_event_config_confirmed");
  (*pcVar3)(this_05,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Node::add_child(this,*(undefined8 *)(this + 0x9f8),0,0);
  this_06 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(this_06);
  postinitialize_handler((Object *)this_06);
  *(AcceptDialog **)(this + 0xa00) = this_06;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,this_06,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::_action_edited() */

void __thiscall ActionMapEditor::_action_edited(ActionMapEditor *this)

{
  Variant *pVVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  Object *pOVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  double dVar8;
  long local_100;
  Variant local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  Variant *local_c8;
  undefined1 auStack_c0 [24];
  int local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  Variant local_90 [24];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar5 = (long *)Tree::get_edited();
  if (plVar5 != (long *)0x0) {
    iVar4 = Tree::get_selected_column();
    if (iVar4 == 0) {
      TreeItem::get_text((int)(String *)&local_100);
      pcVar2 = *(code **)(*plVar5 + 0xb8);
      auStack_c0._0_16_ = (undefined1  [16])0x0;
      local_c8 = (Variant *)0x0;
      StringName::StringName((StringName *)&local_d0,"__name",false);
      (*pcVar2)((Variant *)local_a8,plVar5,(StringName *)&local_d0,&local_c8);
      Variant::operator_cast_to_String(local_f8);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_c8] != '\0') {
        Variant::_clear_internal();
      }
      cVar3 = String::operator==((String *)&local_100,(String *)local_f8);
      if (cVar3 == '\0') {
        if (((local_100 == 0) || (*(uint *)(local_100 + -8) < 2)) ||
           (cVar3 = _is_action_name_valid((String *)&local_100), cVar3 == '\0')) {
          local_d0 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)local_f8);
          TreeItem::set_text(plVar5,0,(StringName *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          local_d8 = 0;
          String::parse_latin1((String *)&local_d8,"");
          local_e0 = 0;
          String::parse_latin1
                    ((String *)&local_e0,
                     "Invalid action name. It cannot be empty nor contain \'/\', \':\', \'=\', \'\\\' or \'\"\'"
                    );
          TTR((String *)&local_d0,(String *)&local_e0);
          show_message(this,(String *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        }
        else {
          cVar3 = _has_action(this,(String *)&local_100);
          if (cVar3 == '\0') {
            local_d0 = 0;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_100);
            local_d8 = 0;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)local_f8);
            if ((_action_edited()::{lambda()#1}::operator()()::sname == '\0') &&
               (iVar4 = __cxa_guard_acquire(&_action_edited()::{lambda()#1}::operator()()::sname),
               iVar4 != 0)) {
              _scs_create((char *)&_action_edited()::{lambda()#1}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_action_edited()::{lambda()#1}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_action_edited()::{lambda()#1}::operator()()::sname);
            }
            Variant::Variant((Variant *)local_a8,(String *)&local_d8);
            Variant::Variant(local_90,(String *)&local_d0);
            local_70 = (undefined1  [16])0x0;
            local_78 = 0;
            pVVar7 = (Variant *)&local_60;
            auStack_c0._0_8_ = local_90;
            local_c8 = (Variant *)local_a8;
            (**(code **)(*(long *)this + 0xd0))
                      (this,&_action_edited()::{lambda()#1}::operator()()::sname,&local_c8,2);
            do {
              pVVar1 = pVVar7 + -0x18;
              pVVar7 = pVVar7 + -0x18;
              if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                Variant::_clear_internal();
              }
            } while (pVVar7 != (Variant *)local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
            goto LAB_0010398e;
          }
          local_d0 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)local_f8);
          TreeItem::set_text(plVar5,0,(StringName *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          local_d8 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_100);
          local_e8 = 0;
          String::parse_latin1((String *)&local_e8,"");
          local_f0 = 0;
          String::parse_latin1((String *)&local_f0,"An action with the name \'%s\' already exists.")
          ;
          TTR((String *)&local_e0,(String *)&local_f0);
          vformat<String>((StringName *)&local_d0,(String *)&local_e0,(CowData<char32_t> *)&local_d8
                         );
          show_message(this,(String *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    }
    else {
      iVar4 = Tree::get_selected_column();
      if (iVar4 == 1) {
        pcVar2 = *(code **)(*plVar5 + 0xb8);
        auStack_c0._0_16_ = (undefined1  [16])0x0;
        local_c8 = (Variant *)0x0;
        StringName::StringName((StringName *)&local_d0,"__name",false);
        (*pcVar2)((Variant *)local_a8,plVar5,(StringName *)&local_d0,(Variant *)&local_c8);
        Variant::operator_cast_to_String((Variant *)&local_100);
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_d0 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_c8] != '\0') {
          Variant::_clear_internal();
        }
        pcVar2 = *(code **)(*plVar5 + 0xb8);
        auStack_c0._0_16_ = (undefined1  [16])0x0;
        local_c8 = (Variant *)0x0;
        StringName::StringName((StringName *)&local_d0,"__action",false);
        (*pcVar2)((Variant *)local_a8,plVar5,(StringName *)&local_d0,(Variant *)&local_c8);
        Variant::operator_cast_to_Dictionary(local_f8);
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_d0 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_c8] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::duplicate(SUB81((Variant *)&local_f0,0));
        dVar8 = (double)TreeItem::get_range((int)plVar5);
        Variant::Variant((Variant *)local_a8,dVar8);
        Variant::Variant((Variant *)&local_c8,"deadzone");
        pVVar7 = (Variant *)Dictionary::operator[]((Variant *)&local_f0);
        if (pVVar7 != (Variant *)local_a8) {
          if (Variant::needs_deinit[*(int *)pVVar7] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar7 = 0;
          *(int *)pVVar7 = local_a8[0];
          *(undefined8 *)(pVVar7 + 8) = local_a0;
          *(undefined8 *)(pVVar7 + 0x10) = uStack_98;
          local_a8[0] = 0;
        }
        if (Variant::needs_deinit[(int)local_c8] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::Dictionary((Dictionary *)&local_e0,(Dictionary *)&local_f0);
        local_e8 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_100);
        if ((_action_edited()::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar4 = __cxa_guard_acquire(&_action_edited()::{lambda()#2}::operator()()::sname),
           iVar4 != 0)) {
          _scs_create((char *)&_action_edited()::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&_action_edited()::{lambda()#2}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_action_edited()::{lambda()#2}::operator()()::sname);
        }
        MessageQueue::thread_singleton();
        pOVar6 = MessageQueue::main_singleton;
        if (*(long *)(in_FS_OFFSET + lRam0000000000103c3e) != 0) {
          MessageQueue::thread_singleton();
          pOVar6 = *(Object **)(in_FS_OFFSET + lRam0000000000103c5c);
        }
        Dictionary::Dictionary((Dictionary *)&local_d0,(Dictionary *)&local_e0);
        local_d8 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_e8);
        Variant::Variant((Variant *)local_a8,"action_edited");
        Variant::Variant(local_90,(String *)&local_d8);
        Variant::Variant((Variant *)&local_78,(Dictionary *)&local_d0);
        pVVar7 = local_48;
        local_58 = (undefined1  [16])0x0;
        local_60 = 0;
        auStack_c0._8_8_ = (Variant *)&local_78;
        auStack_c0._0_8_ = local_90;
        local_c8 = (Variant *)local_a8;
        CallQueue::push_callp
                  (pOVar6,(StringName *)this,
                   (Variant **)&_action_edited()::{lambda()#2}::operator()()::sname,
                   (int)(Variant *)&local_c8,true);
        do {
          pVVar1 = pVVar7 + -0x18;
          pVVar7 = pVVar7 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar7 != (Variant *)local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        Dictionary::~Dictionary((Dictionary *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        Dictionary::~Dictionary((Dictionary *)&local_e0);
        Dictionary::~Dictionary((Dictionary *)&local_f0);
        Dictionary::~Dictionary((Dictionary *)local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      }
    }
  }
LAB_0010398e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::_add_action(String const&) */

void __thiscall ActionMapEditor::_add_action(ActionMapEditor *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  long local_88;
  undefined8 local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _check_new_action_name((String *)&local_88);
  if ((local_88 == 0) || (*(uint *)(local_88 + -8) < 2)) {
    LineEdit::clear();
    local_80 = 0;
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    if (*(long *)param_1 != 0) {
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_001041ae;
        LOCK();
        lVar5 = *plVar1;
        bVar6 = lVar2 == lVar5;
        if (bVar6) {
          *plVar1 = lVar2 + 1;
          lVar5 = lVar2;
        }
        UNLOCK();
      } while (!bVar6);
      if (lVar5 != -1) {
        local_80 = *(undefined8 *)param_1;
      }
    }
LAB_001041ae:
    if ((_add_action(String_const&)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&_add_action(String_const&)::{lambda()#1}::operator()()::sname),
       iVar4 != 0)) {
      _scs_create((char *)&_add_action(String_const&)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_add_action(String_const&)::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_add_action(String_const&)::{lambda()#1}::operator()()::sname);
    }
    Variant::Variant((Variant *)local_68,(String *)&local_80);
    local_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_78[0] = (Variant *)local_68;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_add_action(String_const&)::{lambda()#1}::operator()()::sname,local_78,1);
    if (Variant::needs_deinit[(int)local_50] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    uVar3 = *(undefined8 *)(this + 0xa00);
    local_80 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_88);
    AcceptDialog::set_text(uVar3,(CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    local_68[0] = 0;
    local_68[1] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xa00));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ActionMapEditor::_add_action_pressed() */

void __thiscall ActionMapEditor::_add_action_pressed(ActionMapEditor *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  _add_action(this,(String *)&local_28);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::_bind_methods() */

void ActionMapEditor::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_228;
  undefined8 local_220;
  long local_218;
  undefined8 local_210;
  undefined8 local_208;
  long local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8 [6];
  long local_1a8;
  CowData local_1a0 [8];
  StringName local_198 [8];
  undefined4 local_190;
  CowData local_188 [8];
  undefined4 local_180;
  long local_178;
  CowData local_170 [8];
  StringName local_168 [8];
  undefined4 local_160;
  CowData local_158 [8];
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_140;
  StringName local_138 [8];
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  char *local_118;
  undefined8 local_110;
  StringName local_108 [8];
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined8 local_e0;
  StringName local_d8 [8];
  undefined4 local_d0;
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
  local_b8 = "";
  local_178 = 0;
  local_1a8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_1a8);
  local_1d8[0] = 0;
  local_b8 = "name";
  local_b0 = 4;
  String::parse_latin1((StrRange *)local_1d8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)local_1d8,0,(StrRange *)&local_1a8,6,
             (String *)&local_178);
  local_b8 = "action_added";
  local_148 = 0;
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_148);
  _local_a8 = (undefined1  [16])0x0;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  local_1e0 = 0;
  local_118 = "ActionMapEditor";
  local_110 = 0xf;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_118,(String *)&local_1e0,false);
  ClassDB::add_signal((StringName *)&local_118,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
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
        lVar7 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar7 = lVar7 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar7);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  local_1a8 = 0;
  local_1d8[0] = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)local_1d8);
  local_1e0 = 0;
  local_b8 = "new_action";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_1e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,0x1b,(StrRange *)&local_1e0,0,(StrRange *)local_1d8,6,
             (StrRange *)&local_1a8);
  local_1e8 = 0;
  local_1f0 = 0;
  String::parse_latin1((String *)&local_1f0,"");
  local_1f8 = 0;
  local_b8 = "name";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_1f8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,4,(StrRange *)&local_1f8,0,(String *)&local_1f0,6,&local_1e8
            );
  local_178 = 0;
  String::parse_latin1((String *)&local_178,"action_edited");
  _local_a8 = (undefined1  [16])0x0;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_178);
  local_e0 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,local_118._0_4_);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  StringName::StringName(local_d8,local_108);
  local_c8 = 0;
  local_d0 = local_100;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  local_c0 = local_f0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_200 = 0;
  String::parse_latin1((String *)&local_200,"ActionMapEditor");
  StringName::StringName((StringName *)&local_e8,(String *)&local_200,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
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
        lVar7 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar7 = lVar7 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar7);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  local_178 = 0;
  local_1a8 = 0;
  String::parse_latin1((String *)&local_1a8,"");
  local_b8 = "name";
  local_1d8[0] = 0;
  local_b0 = 4;
  String::parse_latin1((StrRange *)local_1d8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,4,(StrRange *)local_1d8,0,(StrRange *)&local_1a8,6,
             (String *)&local_178);
  local_b8 = "action_removed";
  local_148 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_148);
  _local_a8 = (undefined1  [16])0x0;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  local_118 = "ActionMapEditor";
  local_1e0 = 0;
  local_110 = 0xf;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_118,(String *)&local_1e0,false);
  ClassDB::add_signal((StringName *)&local_118,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
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
        lVar7 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar7 = lVar7 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar7);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a8);
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  local_1a8 = 0;
  local_1d8[0] = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)local_1d8);
  local_b8 = "new_name";
  local_1e0 = 0;
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_1e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,4,(StrRange *)&local_1e0,0,(StrRange *)local_1d8,6,
             (StrRange *)&local_1a8);
  local_1e8 = 0;
  local_1f0 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_1f0);
  local_b8 = "old_name";
  local_1f8 = 0;
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_1f8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,4,(StrRange *)&local_1f8,0,(String *)&local_1f0,6,&local_1e8
            );
  local_b8 = "action_renamed";
  local_178 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_178);
  _local_a8 = (undefined1  [16])0x0;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_178);
  local_e0 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,local_118._0_4_);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  StringName::StringName(local_d8,local_108);
  local_c8 = 0;
  local_d0 = local_100;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  local_c0 = local_f0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "ActionMapEditor";
  local_200 = 0;
  local_e0 = 0xf;
  String::parse_latin1((StrRange *)&local_200);
  StringName::StringName((StringName *)&local_e8,(String *)&local_200,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
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
        lVar7 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar7 = lVar7 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar7);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  local_1e8 = 0;
  local_1f0 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_1f0);
  local_b8 = "before";
  local_1f8 = 0;
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_1f8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_178,1,(StrRange *)&local_1f8,0,(String *)&local_1f0,6,&local_1e8
            );
  local_b8 = "";
  local_200 = 0;
  local_208 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_208);
  local_210 = 0;
  local_b8 = "relative_to";
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_210);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1a8,4,(StrRange *)&local_210,0,(StrRange *)&local_208,6,
             (String *)&local_200);
  local_b8 = "";
  local_218 = 0;
  local_220 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_220);
  local_b8 = "action_name";
  local_228 = 0;
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_228);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,4,(StrRange *)&local_228,0,(StrRange *)&local_220,6,
             &local_218);
  local_1e0 = 0;
  String::parse_latin1((String *)&local_1e0,"action_reordered");
  _local_a8 = (undefined1  [16])0x0;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_1e0);
  local_110 = 0;
  local_118 = (char *)CONCAT44(local_118._4_4_,(undefined4)local_178);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,local_170);
  StringName::StringName(local_108,local_168);
  local_f8 = 0;
  local_100 = local_160;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,local_158);
  local_140 = 0;
  local_f0 = local_150;
  local_148 = CONCAT44(local_148._4_4_,(undefined4)local_1a8);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,local_1a0);
  StringName::StringName(local_138,local_198);
  local_128 = 0;
  local_130 = local_190;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,local_188);
  local_120 = local_180;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)local_1d8);
  local_e0 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,local_118._0_4_);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  StringName::StringName(local_d8,local_108);
  local_c8 = 0;
  local_d0 = local_100;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  local_c0 = local_f0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  local_e8 = "ActionMapEditor";
  local_118 = (char *)0x0;
  local_e0 = 0xf;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
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
        lVar7 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar7 = lVar7 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar7);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  if ((StringName::configured != '\0') && (local_200 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  if ((_bind_methods()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_bind_methods()::{lambda()#1}::operator()()::sname), iVar5 != 0))
  {
    _scs_create((char *)&_bind_methods()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_bind_methods()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_bind_methods()::{lambda()#1}::operator()()::sname);
  }
  if (_bind_methods()::{lambda()#1}::operator()()::sname == 0) {
    local_118 = (char *)0x0;
  }
  else {
    local_118 = (char *)0x0;
    if (*(char **)(_bind_methods()::{lambda()#1}::operator()()::sname + 8) == (char *)0x0) {
      if (*(long *)(_bind_methods()::{lambda()#1}::operator()()::sname + 0x10) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_118,
                   (CowData *)(_bind_methods()::{lambda()#1}::operator()()::sname + 0x10));
      }
    }
    else {
      String::parse_latin1
                ((String *)&local_118,
                 *(char **)(_bind_methods()::{lambda()#1}::operator()()::sname + 8));
    }
  }
  local_b8 = (char *)0x0;
  _local_a8 = (undefined1  [16])0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_118);
  local_e8 = "ActionMapEditor";
  local_148 = 0;
  local_e0 = 0xf;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_e8,(String *)&local_148,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
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
        lVar7 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar7 = lVar7 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar7);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if ((_bind_methods()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_bind_methods()::{lambda()#2}::operator()()::sname), iVar5 != 0))
  {
    _scs_create((char *)&_bind_methods()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_bind_methods()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_bind_methods()::{lambda()#2}::operator()()::sname);
  }
  if (_bind_methods()::{lambda()#2}::operator()()::sname == 0) {
    local_118 = (char *)0x0;
  }
  else {
    local_118 = (char *)0x0;
    if (*(char **)(_bind_methods()::{lambda()#2}::operator()()::sname + 8) == (char *)0x0) {
      if (*(long *)(_bind_methods()::{lambda()#2}::operator()()::sname + 0x10) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_118,
                   (CowData *)(_bind_methods()::{lambda()#2}::operator()()::sname + 0x10));
      }
    }
    else {
      String::parse_latin1
                ((String *)&local_118,
                 *(char **)(_bind_methods()::{lambda()#2}::operator()()::sname + 8));
    }
  }
  local_b8 = (char *)0x0;
  _local_a8 = (undefined1  [16])0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_118);
  local_e8 = "ActionMapEditor";
  local_148 = 0;
  local_e0 = 0xf;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_e8,(String *)&local_148,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
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
        lVar7 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar7 = lVar7 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar7);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::_tree_button_pressed(Object*, int, int, MouseButton) [clone .part.0] */

void ActionMapEditor::_tree_button_pressed(long *param_1,long param_2,undefined4 param_3)

{
  Variant *pVVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  Variant local_f0 [8];
  Variant local_e8 [8];
  Variant local_e0 [8];
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  Variant *local_a8;
  undefined1 auStack_a0 [16];
  int local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) &&
     (plVar6 = (long *)__dynamic_cast(param_2,&Object::typeinfo,&TreeItem::typeinfo,0),
     plVar6 != (long *)0x0)) {
    switch(param_3) {
    case 0:
      pcVar2 = *(code **)(*plVar6 + 0xb8);
      auStack_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant *)0x0;
      StringName::StringName((StringName *)&local_d8,"__action",false);
      (*pcVar2)(local_88,plVar6,(StringName *)&local_d8,&local_a8);
      Variant::operator_cast_to_Dictionary((Variant *)&local_d0);
      Dictionary::operator=((Dictionary *)(param_1 + 0x13c),(Dictionary *)&local_d0);
      Dictionary::~Dictionary((Dictionary *)&local_d0);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d8 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      pcVar2 = *(code **)(*plVar6 + 0xb8);
      auStack_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant *)0x0;
      StringName::StringName((StringName *)&local_d8,"__name",false);
      (*pcVar2)(local_88,plVar6,(StringName *)&local_d8,&local_a8);
      Variant::operator_cast_to_String((Variant *)&local_d0);
      if (param_1[0x13d] != local_d0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x13d));
        lVar3 = local_d0;
        local_d0 = 0;
        param_1[0x13d] = lVar3;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d8 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)(param_1 + 0x13e) = 0xffffffff;
      local_d0 = 0;
      InputEventConfigurationDialog::popup_and_configure((Ref *)param_1[0x13f],(String *)&local_d0);
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_d0);
      break;
    case 1:
      plVar7 = (long *)TreeItem::get_parent();
      pcVar2 = *(code **)(*plVar7 + 0xb8);
      auStack_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant *)0x0;
      StringName::StringName((StringName *)&local_d8,"__action",false);
      (*pcVar2)((Variant *)local_88,plVar7,(StringName *)&local_d8,&local_a8);
      Variant::operator_cast_to_Dictionary((Variant *)&local_d0);
      Dictionary::operator=((Dictionary *)(param_1 + 0x13c),(Dictionary *)&local_d0);
      Dictionary::~Dictionary((Dictionary *)&local_d0);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d8 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      plVar7 = (long *)TreeItem::get_parent();
      pcVar2 = *(code **)(*plVar7 + 0xb8);
      auStack_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant *)0x0;
      StringName::StringName((StringName *)&local_d8,"__name",false);
      (*pcVar2)((Variant *)local_88,plVar7,(StringName *)&local_d8,&local_a8);
      Variant::operator_cast_to_String((Variant *)&local_d0);
      if (param_1[0x13d] != local_d0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x13d));
        lVar3 = local_d0;
        local_d0 = 0;
        param_1[0x13d] = lVar3;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d8 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      pcVar2 = *(code **)(*plVar6 + 0xb8);
      auStack_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant *)0x0;
      StringName::StringName((StringName *)&local_d0,"__index",false);
      (*pcVar2)((Variant *)local_88,plVar6,(Variant *)&local_d0,&local_a8);
      iVar5 = Variant::operator_cast_to_int((Variant *)local_88);
      *(int *)(param_1 + 0x13e) = iVar5;
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      pcVar2 = *(code **)(*plVar6 + 0xb8);
      auStack_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant *)0x0;
      StringName::StringName((StringName *)&local_d0,"__event",false);
      (*pcVar2)((Variant *)local_88,plVar6,(Variant *)&local_d0,&local_a8);
      local_d8 = 0;
      Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_d8,(Variant *)local_88);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      if (local_d8 != 0) {
        InputEventConfigurationDialog::popup_and_configure
                  ((Ref *)param_1[0x13f],(String *)&local_d8);
      }
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_d8);
      break;
    case 2:
      pcVar2 = *(code **)(*plVar6 + 0xb8);
      auStack_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant *)0x0;
      StringName::StringName((StringName *)&local_d0,"__name",false);
      (*pcVar2)((Variant *)local_88,plVar6,(StringName *)&local_d0,&local_a8);
      Variant::operator_cast_to_String((Variant *)&local_d8);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      local_d0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_d8);
      if ((_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#1}::operator()()::sname ==
           '\0') &&
         (iVar5 = __cxa_guard_acquire(&_tree_button_pressed(Object*,int,int,MouseButton)::
                                       {lambda()#1}::operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#1}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#1}::operator()()
                      ::sname,&__dso_handle);
        __cxa_guard_release(&_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#1}::
                             operator()()::sname);
      }
      Variant::Variant((Variant *)local_88,(String *)&local_d0);
      local_70[0] = 0;
      local_70[1] = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      (**(code **)(*param_1 + 0xd0))
                (param_1,&_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#1}::
                          operator()()::sname,&local_a8,1);
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      break;
    case 3:
      plVar7 = (long *)TreeItem::get_parent();
      pcVar2 = *(code **)(*plVar7 + 0xb8);
      local_c0 = (undefined1  [16])0x0;
      local_c8 = 0;
      StringName::StringName((StringName *)&local_d0,"__action",false);
      (*pcVar2)((Variant *)&local_a8,plVar7,(StringName *)&local_d0,&local_c8);
      bVar8 = SUB81((Variant *)local_88,0);
      Variant::duplicate(bVar8);
      Variant::operator_cast_to_Dictionary(local_f0);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_c8] != '\0') {
        Variant::_clear_internal();
      }
      plVar7 = (long *)TreeItem::get_parent();
      pcVar2 = *(code **)(*plVar7 + 0xb8);
      auStack_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant *)0x0;
      StringName::StringName((StringName *)&local_d0,"__name",false);
      (*pcVar2)((Variant *)local_88,plVar7,(StringName *)&local_d0,(Variant *)&local_a8);
      Variant::operator_cast_to_String(local_e8);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      pcVar2 = *(code **)(*plVar6 + 0xb8);
      auStack_a0 = (undefined1  [16])0x0;
      local_a8 = (Variant *)0x0;
      StringName::StringName((StringName *)&local_d0,"__index",false);
      (*pcVar2)((Variant *)local_88,plVar6,(StringName *)&local_d0,(Variant *)&local_a8);
      Variant::operator_cast_to_int((Variant *)local_88);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)&local_a8,"events");
      Dictionary::operator[](local_f0);
      Variant::duplicate(bVar8);
      Variant::operator_cast_to_Array(local_e0);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      Array::remove_at((int)local_e0);
      Variant::Variant((Variant *)local_88,(Array *)local_e0);
      Variant::Variant((Variant *)&local_a8,"events");
      pVVar9 = (Variant *)Dictionary::operator[](local_f0);
      if (pVVar9 != (Variant *)local_88) {
        if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar9 = 0;
        *(int *)pVVar9 = local_88[0];
        *(undefined8 *)(pVVar9 + 8) = local_80;
        *(undefined8 *)(pVVar9 + 0x10) = uStack_78;
        local_88[0] = 0;
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      Dictionary::Dictionary((Dictionary *)&local_d0,(Dictionary *)local_f0);
      local_d8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)local_e8);
      if ((_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#2}::operator()()::sname ==
           '\0') &&
         (iVar5 = __cxa_guard_acquire(&_tree_button_pressed(Object*,int,int,MouseButton)::
                                       {lambda()#2}::operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#2}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#2}::operator()()
                      ::sname,&__dso_handle);
        __cxa_guard_release(&_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#2}::
                             operator()()::sname);
      }
      Variant::Variant((Variant *)local_88,(String *)&local_d8);
      Variant::Variant((Variant *)local_70,(Dictionary *)&local_d0);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      pVVar9 = (Variant *)local_40;
      auStack_a0._0_8_ = (Variant *)local_70;
      local_a8 = (Variant *)local_88;
      (**(code **)(*param_1 + 0xd0))
                (param_1,&_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#2}::
                          operator()()::sname,(Variant *)&local_a8,2);
      do {
        pVVar1 = pVVar9 + -0x18;
        pVVar9 = pVVar9 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar9 != (Variant *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      Dictionary::~Dictionary((Dictionary *)&local_d0);
      Array::~Array((Array *)local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
      Dictionary::~Dictionary((Dictionary *)local_f0);
      break;
    case 4:
      pcVar2 = *(code **)(*plVar6 + 0xa0);
      StringName::StringName((StringName *)&local_d0,"__action_initial",false);
      cVar4 = (*pcVar2)(plVar6,(StringName *)&local_d0);
      if ((StringName::configured != '\0') && (local_d0 != 0)) {
        StringName::unref();
      }
      if (cVar4 == '\0') {
        _err_print_error("_tree_button_pressed","editor/action_map_editor.cpp",0xcc,
                         "Condition \"!item->has_meta(\"__action_initial\")\" is true.",
                         "Tree Item for action which can be reverted is expected to have meta value with initial value of action."
                         ,0,0);
      }
      else {
        pcVar2 = *(code **)(*plVar6 + 0xb8);
        local_c0 = (undefined1  [16])0x0;
        local_c8 = 0;
        StringName::StringName((StringName *)&local_d0,"__action_initial",false);
        (*pcVar2)(&local_a8,plVar6,(StringName *)&local_d0,&local_c8);
        Variant::duplicate(SUB81((Variant *)local_88,0));
        Variant::operator_cast_to_Dictionary(local_e8);
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_a8] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_d0 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_c8] != '\0') {
          Variant::_clear_internal();
        }
        pcVar2 = *(code **)(*plVar6 + 0xb8);
        auStack_a0 = (undefined1  [16])0x0;
        local_a8 = (Variant *)0x0;
        StringName::StringName((StringName *)&local_d0,"__name",false);
        (*pcVar2)((Variant *)local_88,plVar6,(StringName *)&local_d0,&local_a8);
        Variant::operator_cast_to_String(local_e0);
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_d0 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_a8] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::Dictionary((Dictionary *)&local_d0,(Dictionary *)local_e8);
        local_d8 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)local_e0);
        if ((_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#3}::operator()()::sname ==
             '\0') &&
           (iVar5 = __cxa_guard_acquire(&_tree_button_pressed(Object*,int,int,MouseButton)::
                                         {lambda()#3}::operator()()::sname), iVar5 != 0)) {
          _scs_create((char *)&_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#3}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#3}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#3}::
                               operator()()::sname);
        }
        Variant::Variant((Variant *)local_88,(String *)&local_d8);
        Variant::Variant((Variant *)local_70,(Dictionary *)&local_d0);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        pVVar9 = (Variant *)local_40;
        auStack_a0._0_8_ = (Variant *)local_70;
        local_a8 = (Variant *)local_88;
        (**(code **)(*param_1 + 0xd0))
                  (param_1,&_tree_button_pressed(Object*,int,int,MouseButton)::{lambda()#3}::
                            operator()()::sname,&local_a8,2);
        do {
          pVVar1 = pVVar9 + -0x18;
          pVVar9 = pVVar9 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar9 != (Variant *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        Dictionary::~Dictionary((Dictionary *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
        Dictionary::~Dictionary((Dictionary *)local_e8);
      }
    }
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ActionMapEditor::_tree_button_pressed(Object*, int, int, MouseButton) */

void __thiscall
ActionMapEditor::_tree_button_pressed
          (ActionMapEditor *this,undefined8 param_1,undefined8 param_3_00,undefined4 param_3,
          int param_5)

{
  if (param_5 == 1) {
    _tree_button_pressed(this,param_1,param_3);
    return;
  }
  return;
}



/* ActionMapEditor::_tree_item_activated() */

void __thiscall ActionMapEditor::_tree_item_activated(ActionMapEditor *this)

{
  code *pcVar1;
  char cVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)Tree::get_selected();
  if (plVar3 != (long *)0x0) {
    pcVar1 = *(code **)(*plVar3 + 0xa0);
    StringName::StringName((StringName *)&local_38,"__event",false);
    cVar2 = (*pcVar1)(plVar3,&local_38);
    if (cVar2 != '\0') {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _tree_button_pressed(this,plVar3,1);
        return;
      }
      goto LAB_001074e2;
    }
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001074e2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionMapEditor::update_action_list(Vector<ActionMapEditor::ActionInfo> const&) */

void __thiscall ActionMapEditor::update_action_list(ActionMapEditor *this,Vector *param_1)

{
  long *plVar1;
  code *pcVar2;
  StringName *pSVar3;
  undefined8 uVar4;
  CowData CVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  Variant *pVVar15;
  long *plVar16;
  long lVar17;
  Object *pOVar18;
  Object *pOVar19;
  Object *pOVar20;
  Variant *this_00;
  char *pcVar21;
  long lVar22;
  CowData *pCVar23;
  undefined1 *puVar24;
  undefined1 uVar25;
  int iVar26;
  long in_FS_OFFSET;
  bool bVar27;
  double dVar28;
  double dVar29;
  StrRange *local_190;
  StringName *local_188;
  Object *local_178;
  StrRange *local_170;
  Object *local_158;
  StringName *local_150;
  long local_130;
  Variant local_108 [8];
  Object *local_100;
  Object *local_f8;
  Object *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  Object *local_d8;
  undefined8 local_d0;
  long local_c8;
  Dictionary local_c0 [8];
  CowData local_b8;
  Dictionary local_b0 [8];
  Object *local_a8;
  CowData local_a0;
  int local_98 [8];
  int local_78 [8];
  undefined8 local_58;
  double dStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 8) != *(long *)(this + 0x9d0))) {
    CowData<ActionMapEditor::ActionInfo>::_unref
              ((CowData<ActionMapEditor::ActionInfo> *)(this + 0x9d0));
    if (*(long *)(param_1 + 8) != 0) {
      plVar16 = (long *)(*(long *)(param_1 + 8) + -0x10);
      do {
        lVar22 = *plVar16;
        if (lVar22 == 0) goto LAB_00107570;
        LOCK();
        lVar17 = *plVar16;
        bVar27 = lVar22 == lVar17;
        if (bVar27) {
          *plVar16 = lVar22 + 1;
          lVar17 = lVar22;
        }
        UNLOCK();
      } while (!bVar27);
      if (lVar17 != -1) {
        *(undefined8 *)(this + 0x9d0) = *(undefined8 *)(param_1 + 8);
      }
    }
  }
LAB_00107570:
  Tree::clear();
  iVar10 = Tree::create_item(*(TreeItem **)(this + 0x9d8),0);
  lVar22 = *(long *)(this + 0x9d0);
  if (lVar22 != 0) {
    local_130 = 0;
    do {
      if (*(long *)(lVar22 + -8) <= local_130) break;
      local_c8 = 0;
      pCVar23 = (CowData *)(lVar22 + local_130 * 0x30);
      if (*(long *)pCVar23 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,pCVar23);
      }
      Dictionary::Dictionary(local_c0,(Dictionary *)(pCVar23 + 8));
      local_b8 = pCVar23[0x10];
      Dictionary::Dictionary(local_b0,(Dictionary *)(pCVar23 + 0x18));
      local_a8 = (Object *)0x0;
      if ((*(Object **)(pCVar23 + 0x20) != (Object *)0x0) &&
         (local_a8 = *(Object **)(pCVar23 + 0x20), cVar6 = RefCounted::reference(), cVar6 == '\0'))
      {
        local_a8 = (Object *)0x0;
      }
      local_a0 = pCVar23[0x28];
      Variant::Variant((Variant *)&local_58,"events");
      Dictionary::operator[]((Variant *)local_c0);
      Variant::operator_cast_to_Array(local_108);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      cVar6 = _should_display_action(this,(String *)&local_c8,(Array *)local_108);
      if ((cVar6 != '\0') && ((local_a0 != (CowData)0x0 || (this[0xa08] != (ActionMapEditor)0x0))))
      {
        Variant::Variant((Variant *)&local_58,"deadzone");
        pVVar15 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
        Variant::Variant((Variant *)local_98,pVVar15);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        plVar16 = (long *)Tree::create_item(*(TreeItem **)(this + 0x9d8),iVar10);
        if (plVar16 == (long *)0x0) {
          _err_print_error("update_action_list","editor/action_map_editor.cpp",0x1b0,
                           "Parameter \"action_item\" is null.",0,0);
          if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
          }
          Array::~Array((Array *)local_108);
          if (((local_a8 != (Object *)0x0) &&
              (cVar6 = RefCounted::unreference(), pOVar20 = local_a8, cVar6 != '\0')) &&
             (cVar6 = predelete_handler(local_a8), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
            Memory::free_static(pOVar20,false);
          }
          Dictionary::~Dictionary(local_b0);
          Dictionary::~Dictionary(local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          goto LAB_001090e9;
        }
        pcVar2 = *(code **)(*plVar16 + 0xa8);
        Variant::Variant((Variant *)&local_58,local_c0);
        StringName::StringName((StringName *)&local_d8,"__action",false);
        (*pcVar2)(plVar16,(StringName *)&local_d8,(Variant *)&local_58);
        if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        pcVar2 = *(code **)(*plVar16 + 0xa8);
        Variant::Variant((Variant *)&local_58,(String *)&local_c8);
        StringName::StringName((StringName *)&local_d8,"__name",false);
        (*pcVar2)(plVar16,(StringName *)&local_d8,(Variant *)&local_58);
        if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        local_d8 = (Object *)0x0;
        plVar1 = (long *)(local_c8 + -0x10);
        if (local_c8 != 0) {
          do {
            lVar22 = *plVar1;
            if (lVar22 == 0) goto LAB_00107905;
            LOCK();
            lVar17 = *plVar1;
            bVar27 = lVar22 == lVar17;
            if (bVar27) {
              *plVar1 = lVar22 + 1;
              lVar17 = lVar22;
            }
            UNLOCK();
          } while (!bVar27);
          if (lVar17 != -1) {
            local_d8 = (Object *)local_c8;
          }
        }
LAB_00107905:
        TreeItem::set_text(plVar16,0,(StringName *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        iVar26 = (int)plVar16;
        TreeItem::set_editable(iVar26,false);
        TreeItem::set_icon(iVar26,(Ref *)0x0);
        TreeItem::set_editable(iVar26,true);
        TreeItem::set_cell_mode(plVar16,1,2);
        dVar29 = _LC114;
        TreeItem::set_range_config(iVar26,0.0,_LC114,_LC113,true);
        dVar28 = Variant::operator_cast_to_double((Variant *)local_98);
        TreeItem::set_range(iVar26,dVar28);
        CVar5 = local_b8;
        if (local_b8 != (CowData)0x0) {
          Variant::Variant((Variant *)&local_58,"deadzone");
          pVVar15 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
          Variant::Variant((Variant *)local_78,"deadzone");
          this_00 = (Variant *)Dictionary::operator[]((Variant *)local_b0);
          bVar8 = Variant::operator==(this_00,pVVar15);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)&local_58,"events");
          Dictionary::operator[]((Variant *)local_c0);
          Variant::operator_cast_to_Array((Variant *)&local_d8);
          Variant::Variant((Variant *)local_78,"events");
          Dictionary::operator[]((Variant *)local_b0);
          Variant::operator_cast_to_Array((Variant *)&local_e0);
          bVar9 = Shortcut::is_event_array_equal((Array *)&local_e0,(Array *)&local_d8);
          Array::~Array((Array *)&local_e0);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_190 = (StrRange *)&local_e0;
          Array::~Array((Array *)&local_d8);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          bVar9 = bVar9 & bVar8;
          pcVar2 = *(code **)(*plVar16 + 0xa8);
          Variant::Variant((Variant *)&local_58,local_b0);
          StringName::StringName((StringName *)&local_d8,"__action_initial",false);
          (*pcVar2)(plVar16,(StringName *)&local_d8,(Variant *)&local_58);
          if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          if (bVar9 == 0) {
            local_e0 = 0;
            String::parse_latin1((String *)local_190,"");
            local_e8 = 0;
            String::parse_latin1((String *)&local_e8,"Revert Action");
            bVar8 = 0;
            TTR((String *)&local_d8,(String *)&local_e8);
          }
          else {
            local_f0 = (Object *)0x0;
            String::parse_latin1((String *)&local_f0,"");
            local_f8 = (Object *)0x0;
            String::parse_latin1((String *)&local_f8,"Cannot Revert - Action is same as initial");
            TTR((String *)&local_d8,(String *)&local_f8);
            CVar5 = (CowData)0x0;
            bVar8 = bVar9;
          }
          local_150 = (StringName *)&local_f0;
          local_170 = (StrRange *)&local_e8;
          if ((update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::{lambda()#1}::
               operator()()::sname == '\0') &&
             (iVar13 = __cxa_guard_acquire(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                            ::{lambda()#1}::operator()()::sname), iVar13 != 0)) {
            _scs_create((char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                                 {lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                          {lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                                 {lambda()#1}::operator()()::sname);
          }
          Control::get_editor_theme_icon((StringName *)&local_100);
          TreeItem::add_button
                    (iVar26,(Ref *)0x2,(int)(StringName *)&local_100,true,(String *)(ulong)bVar9);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_100);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          if (CVar5 != (CowData)0x0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)local_170);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_190);
          }
          if (bVar8 != 0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
          }
        }
        local_150 = (StringName *)&local_f0;
        local_170 = (StrRange *)&local_e8;
        local_188 = (StringName *)&local_100;
        local_190 = (StrRange *)&local_e0;
        local_e0 = 0;
        local_d0 = 0;
        local_d8 = (Object *)&_LC12;
        String::parse_latin1(local_190);
        local_d8 = (Object *)0x10a07c;
        local_e8 = 0;
        local_d0 = 9;
        String::parse_latin1(local_170);
        TTR((String *)&local_d8,(String *)local_170);
        if ((update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::{lambda()#2}::
             operator()()::sname == '\0') &&
           (iVar13 = __cxa_guard_acquire(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                          ::{lambda()#2}::operator()()::sname), iVar13 != 0)) {
          _scs_create((char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                               {lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::{lambda()#2}
                        ::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                               {lambda()#2}::operator()()::sname);
        }
        Control::get_editor_theme_icon(local_150);
        iVar13 = (int)local_150;
        TreeItem::add_button(iVar26,(Ref *)0x2,iVar13,false,(String *)0x0);
        if (((local_f0 != (Object *)0x0) &&
            (cVar7 = RefCounted::unreference(), pOVar20 = local_f0, cVar7 != '\0')) &&
           (cVar7 = predelete_handler(local_f0), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
          Memory::free_static(pOVar20,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_170);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_190);
        CVar5 = local_a0;
        if (local_a0 == (CowData)0x0) {
          local_e0 = 0;
          local_d0 = 0;
          local_d8 = (Object *)&_LC12;
          String::parse_latin1(local_190);
          local_e8 = 0;
          local_d8 = (Object *)0x10a094;
          local_d0 = 0x14;
          String::parse_latin1(local_170);
          TTR((String *)&local_d8,(String *)local_170);
        }
        else {
          local_f0 = (Object *)0x0;
          local_d8 = (Object *)&_LC12;
          local_d0 = 0;
          String::parse_latin1((StrRange *)local_150);
          local_d8 = (Object *)0x10a086;
          local_f8 = (Object *)0x0;
          local_d0 = 0xd;
          String::parse_latin1((StrRange *)&local_f8);
          TTR((String *)&local_d8,(String *)&local_f8);
          cVar6 = '\0';
        }
        bVar8 = (byte)local_a0 ^ 1;
        if ((update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::{lambda()#3}::
             operator()()::sname == '\0') &&
           (iVar14 = __cxa_guard_acquire(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                          ::{lambda()#3}::operator()()::sname), iVar14 != 0)) {
          _scs_create((char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                               {lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::{lambda()#3}
                        ::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                               {lambda()#3}::operator()()::sname);
        }
        Control::get_editor_theme_icon(local_188);
        TreeItem::add_button(iVar26,(Ref *)0x2,(int)local_188,true,(String *)(ulong)bVar8);
        if (((local_100 != (Object *)0x0) &&
            (cVar7 = RefCounted::unreference(), pOVar20 = local_100, cVar7 != '\0')) &&
           (cVar7 = predelete_handler(local_100), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
          Memory::free_static(pOVar20,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        if (cVar6 != '\0') {
          CowData<char32_t>::_unref((CowData<char32_t> *)local_170);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_190);
        }
        if (CVar5 != (CowData)0x0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_150);
        }
        pSVar3 = *(StringName **)(this + 0x9d8);
        if ((update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::{lambda()#4}::
             operator()()::sname == '\0') &&
           (iVar14 = __cxa_guard_acquire(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                          ::{lambda()#4}::operator()()::sname), iVar14 != 0)) {
          _scs_create((char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                               {lambda()#4}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::{lambda()#4}
                        ::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                               {lambda()#4}::operator()()::sname);
        }
        local_58 = Control::get_theme_color
                             (pSVar3,(StringName *)
                                     &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                      ::{lambda()#4}::operator()()::sname);
        bVar27 = SUB81((Variant *)&local_58,0);
        dStack_50 = dVar29;
        TreeItem::set_custom_bg_color(iVar26,(Color *)0x0,bVar27);
        pSVar3 = *(StringName **)(this + 0x9d8);
        if ((update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::{lambda()#5}::
             operator()()::sname == '\0') &&
           (iVar14 = __cxa_guard_acquire(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                          ::{lambda()#5}::operator()()::sname), iVar14 != 0)) {
          _scs_create((char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                               {lambda()#5}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::{lambda()#5}
                        ::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                               {lambda()#5}::operator()()::sname);
        }
        local_58 = Control::get_theme_color
                             (pSVar3,(StringName *)
                                     &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                      ::{lambda()#5}::operator()()::sname);
        dStack_50 = dVar29;
        TreeItem::set_custom_bg_color(iVar26,(Color *)0x1,bVar27);
        for (iVar14 = 0; iVar11 = Array::size(), iVar14 < iVar11; iVar14 = iVar14 + 1) {
          Array::operator[]((int)local_108);
          local_f8 = (Object *)0x0;
          pOVar18 = (Object *)Variant::get_validated_object();
          pOVar20 = local_f8;
          pOVar19 = pOVar20;
          if (pOVar18 == local_f8) {
LAB_00107d85:
            if (pOVar19 != (Object *)0x0) {
              plVar16 = (long *)Tree::create_item(*(TreeItem **)(this + 0x9d8),iVar26);
              EventListenerLineEdit::get_event_text((Ref *)&local_d8,SUB81(&local_f8,0));
              TreeItem::set_text(plVar16,0,(StringName *)&local_d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              pcVar2 = *(code **)(*plVar16 + 0xa8);
              Variant::Variant((Variant *)&local_58,local_f8);
              StringName::StringName((StringName *)&local_d8,"__event",false);
              (*pcVar2)(plVar16,(StringName *)&local_d8,(Variant *)&local_58);
              if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
                StringName::unref();
              }
              if (Variant::needs_deinit[(int)local_58] != '\0') {
                Variant::_clear_internal();
              }
              pcVar2 = *(code **)(*plVar16 + 0xa8);
              Variant::Variant((Variant *)&local_58,iVar14);
              StringName::StringName((StringName *)&local_d8,"__index",false);
              (*pcVar2)(plVar16,(StringName *)&local_d8,(Variant *)&local_58);
              if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
                StringName::unref();
              }
              if (Variant::needs_deinit[(int)local_58] != '\0') {
                Variant::_clear_internal();
              }
              pOVar20 = local_f8;
              iVar11 = (int)plVar16;
              local_178 = local_f8;
              if (local_f8 == (Object *)0x0) {
LAB_001088f0:
                local_158 = (Object *)0x0;
LAB_001088f9:
                pOVar19 = (Object *)0x0;
LAB_001088fc:
                pOVar20 = (Object *)0x0;
              }
              else {
                local_178 = (Object *)
                            __dynamic_cast(local_f8,&Object::typeinfo,&InputEventKey::typeinfo,0);
                if (local_178 != (Object *)0x0) {
                  cVar6 = RefCounted::reference();
                  if (cVar6 == '\0') {
                    local_178 = (Object *)0x0;
                  }
                  else {
                    iVar12 = InputEventKey::get_physical_keycode();
                    if (((iVar12 == 0) && (iVar12 = InputEventKey::get_keycode(), iVar12 == 0)) &&
                       (iVar12 = InputEventKey::get_key_label(), iVar12 != 0)) {
                      if ((update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                           {lambda()#6}::operator()()::sname == '\0') &&
                         (iVar12 = __cxa_guard_acquire(&
                                                  update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                                  ::{lambda()#6}::operator()()::sname), iVar12 != 0)
                         ) {
                        _scs_create((char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                             ::{lambda()#6}::operator()()::sname,true);
                        __cxa_atexit(StringName::~StringName,
                                     &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                      ::{lambda()#6}::operator()()::sname,&__dso_handle);
                        __cxa_guard_release(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                             ::{lambda()#6}::operator()()::sname);
                      }
                      Control::get_editor_theme_icon((StringName *)&local_d8);
                      TreeItem::set_icon(iVar11,(Ref *)0x0);
                      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_d8);
                    }
                    else {
                      iVar12 = InputEventKey::get_keycode();
                      if (iVar12 == 0) {
                        iVar12 = InputEventKey::get_physical_keycode();
                        if (iVar12 == 0) {
                          if (update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                              {lambda()#9}::operator()()::sname == '\0') {
                            puVar24 = &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                       ::{lambda()#9}::operator()()::sname;
                            iVar12 = __cxa_guard_acquire(&
                                                  update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                                  ::{lambda()#9}::operator()()::sname);
                            pcVar21 = (char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                               ::{lambda()#9}::operator()()::sname;
                            if (iVar12 != 0) {
                              uVar25 = 0xe8;
                              goto LAB_0010858a;
                            }
                          }
                        }
                        else if (update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                                 {lambda()#8}::operator()()::sname == '\0') {
                          puVar24 = &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                                     {lambda()#8}::operator()()::sname;
                          iVar12 = __cxa_guard_acquire(&
                                                  update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                                  ::{lambda()#8}::operator()()::sname);
                          pcVar21 = (char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                             ::{lambda()#8}::operator()()::sname;
                          uVar25 = 0xd7;
                          goto joined_r0x00108584;
                        }
                      }
                      else if (update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                               {lambda()#7}::operator()()::sname == '\0') {
                        puVar24 = &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                                   {lambda()#7}::operator()()::sname;
                        iVar12 = __cxa_guard_acquire(&
                                                  update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                                  ::{lambda()#7}::operator()()::sname);
                        pcVar21 = (char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                           ::{lambda()#7}::operator()()::sname;
                        uVar25 = 0xce;
joined_r0x00108584:
                        if (iVar12 != 0) {
LAB_0010858a:
                          _scs_create(pcVar21,(bool)uVar25);
                          __cxa_atexit(StringName::~StringName,pcVar21,&__dso_handle);
                          __cxa_guard_release(puVar24);
                        }
                      }
                      Control::get_editor_theme_icon((StringName *)&local_d8);
                      TreeItem::set_icon(iVar11,(Ref *)0x0);
                      if (((local_d8 != (Object *)0x0) &&
                          (cVar6 = RefCounted::unreference(), pOVar20 = local_d8, cVar6 != '\0')) &&
                         (cVar6 = predelete_handler(local_d8), cVar6 != '\0')) {
                        (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
                        Memory::free_static(pOVar20,false);
                      }
                    }
                  }
                  pOVar20 = local_f8;
                  if (local_f8 == (Object *)0x0) goto LAB_001088f0;
                }
                local_158 = (Object *)
                            __dynamic_cast(pOVar20,&Object::typeinfo,
                                           &InputEventMouseButton::typeinfo,0);
                if (local_158 != (Object *)0x0) {
                  cVar6 = RefCounted::reference();
                  if (cVar6 == '\0') {
                    local_158 = (Object *)0x0;
                  }
                  else {
                    if ((update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                         {lambda()#10}::operator()()::sname == '\0') &&
                       (iVar12 = __cxa_guard_acquire(&
                                                  update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                                  ::{lambda()#10}::operator()()::sname), iVar12 != 0
                       )) {
                      _scs_create((char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                           ::{lambda()#10}::operator()()::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                                    {lambda()#10}::operator()()::sname,&__dso_handle);
                      __cxa_guard_release(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                           ::{lambda()#10}::operator()()::sname);
                    }
                    Control::get_editor_theme_icon((StringName *)&local_d8);
                    TreeItem::set_icon(iVar11,(Ref *)0x0);
                    if (((local_d8 != (Object *)0x0) &&
                        (cVar6 = RefCounted::unreference(), pOVar20 = local_d8, cVar6 != '\0')) &&
                       (cVar6 = predelete_handler(local_d8), cVar6 != '\0')) {
                      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
                      Memory::free_static(pOVar20,false);
                    }
                  }
                  pOVar20 = local_f8;
                  if (local_f8 == (Object *)0x0) goto LAB_001088f9;
                }
                pOVar19 = (Object *)
                          __dynamic_cast(pOVar20,&Object::typeinfo,&InputEventJoypadButton::typeinfo
                                         ,0);
                if (pOVar19 != (Object *)0x0) {
                  cVar6 = RefCounted::reference();
                  if (cVar6 == '\0') {
                    pOVar19 = (Object *)0x0;
                  }
                  else {
                    if ((update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                         {lambda()#11}::operator()()::sname == '\0') &&
                       (iVar12 = __cxa_guard_acquire(&
                                                  update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                                  ::{lambda()#11}::operator()()::sname), iVar12 != 0
                       )) {
                      _scs_create((char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                           ::{lambda()#11}::operator()()::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                                    {lambda()#11}::operator()()::sname,&__dso_handle);
                      __cxa_guard_release(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                           ::{lambda()#11}::operator()()::sname);
                    }
                    Control::get_editor_theme_icon((StringName *)&local_d8);
                    TreeItem::set_icon(iVar11,(Ref *)0x0);
                    if (((local_d8 != (Object *)0x0) &&
                        (cVar6 = RefCounted::unreference(), pOVar20 = local_d8, cVar6 != '\0')) &&
                       (cVar6 = predelete_handler(local_d8), cVar6 != '\0')) {
                      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
                      Memory::free_static(pOVar20,false);
                    }
                  }
                  pOVar20 = local_f8;
                  if (local_f8 == (Object *)0x0) goto LAB_001088fc;
                }
                pOVar20 = (Object *)
                          __dynamic_cast(pOVar20,&Object::typeinfo,&InputEventJoypadMotion::typeinfo
                                         ,0);
                if ((pOVar20 == (Object *)0x0) || (cVar6 = RefCounted::reference(), cVar6 == '\0'))
                {
                  pOVar20 = (Object *)0x0;
                }
                else {
                  if ((update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::{lambda()#12}
                       ::operator()()::sname == '\0') &&
                     (iVar12 = __cxa_guard_acquire(&
                                                  update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                                  ::{lambda()#12}::operator()()::sname), iVar12 != 0
                     )) {
                    _scs_create((char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                         ::{lambda()#12}::operator()()::sname,true);
                    __cxa_atexit(StringName::~StringName,
                                 &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                                  {lambda()#12}::operator()()::sname,&__dso_handle);
                    __cxa_guard_release(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                         ::{lambda()#12}::operator()()::sname);
                  }
                  Control::get_editor_theme_icon((StringName *)&local_d8);
                  TreeItem::set_icon(iVar11,(Ref *)0x0);
                  if (((local_d8 != (Object *)0x0) &&
                      (cVar6 = RefCounted::unreference(), pOVar18 = local_d8, cVar6 != '\0')) &&
                     (cVar6 = predelete_handler(local_d8), cVar6 != '\0')) {
                    (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
                    Memory::free_static(pOVar18,false);
                  }
                }
              }
              local_e0 = 0;
              local_d0 = 0;
              local_d8 = (Object *)&_LC12;
              String::parse_latin1(local_190);
              local_d8 = (Object *)0x10a10e;
              local_e8 = 0;
              local_d0 = 10;
              String::parse_latin1(local_170);
              TTR((String *)&local_d8,(String *)local_170);
              if ((update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::{lambda()#13}::
                   operator()()::sname == '\0') &&
                 (iVar12 = __cxa_guard_acquire(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                                ::{lambda()#13}::operator()()::sname), iVar12 != 0))
              {
                _scs_create((char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                                     {lambda()#13}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                              {lambda()#13}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                                     {lambda()#13}::operator()()::sname);
              }
              Control::get_editor_theme_icon(local_150);
              TreeItem::add_button(iVar11,(Ref *)0x2,iVar13,true,(String *)0x0);
              if (((local_f0 != (Object *)0x0) &&
                  (cVar6 = RefCounted::unreference(), pOVar18 = local_f0, cVar6 != '\0')) &&
                 (cVar6 = predelete_handler(local_f0), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
                Memory::free_static(pOVar18,false);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_170);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_190);
              local_e0 = 0;
              local_d8 = (Object *)&_LC12;
              local_d0 = 0;
              String::parse_latin1(local_190);
              local_d8 = (Object *)0x10a11e;
              local_e8 = 0;
              local_d0 = 0xc;
              String::parse_latin1(local_170);
              TTR((String *)&local_d8,(String *)local_170);
              if ((update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::{lambda()#14}::
                   operator()()::sname == '\0') &&
                 (iVar12 = __cxa_guard_acquire(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)
                                                ::{lambda()#14}::operator()()::sname), iVar12 != 0))
              {
                _scs_create((char *)&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                                     {lambda()#14}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                              {lambda()#14}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&update_action_list(Vector<ActionMapEditor::ActionInfo>const&)::
                                     {lambda()#14}::operator()()::sname);
              }
              Control::get_editor_theme_icon(local_150);
              TreeItem::add_button(iVar11,(Ref *)0x2,iVar13,true,(String *)0x0);
              if (((local_f0 != (Object *)0x0) &&
                  (cVar6 = RefCounted::unreference(), pOVar18 = local_f0, cVar6 != '\0')) &&
                 (cVar6 = predelete_handler(local_f0), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
                Memory::free_static(pOVar18,false);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_170);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_190);
              local_58 = __LC22;
              dStack_50 = _UNK_001135a8;
              TreeItem::set_button_color(iVar11,2,(Color *)0x0);
              local_58 = __LC22;
              dStack_50 = _UNK_001135a8;
              TreeItem::set_button_color(iVar11,2,(Color *)0x1);
              if (((pOVar20 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0'))
                 && (cVar6 = predelete_handler(pOVar20), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
                Memory::free_static(pOVar20,false);
              }
              if (((pOVar19 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0'))
                 && (cVar6 = predelete_handler(pOVar19), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
                Memory::free_static(pOVar19,false);
              }
              if (((local_158 != (Object *)0x0) &&
                  (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
                 (cVar6 = predelete_handler(local_158), cVar6 != '\0')) {
                (**(code **)(*(long *)local_158 + 0x140))(local_158);
                Memory::free_static(local_158,false);
              }
              if (((local_178 != (Object *)0x0) &&
                  (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
                 (cVar6 = predelete_handler(local_178), cVar6 != '\0')) {
                (**(code **)(*(long *)local_178 + 0x140))(local_178);
                Memory::free_static(local_178,false);
              }
              if (((local_f8 != (Object *)0x0) &&
                  (cVar6 = RefCounted::unreference(), pOVar20 = local_f8, cVar6 != '\0')) &&
                 (cVar6 = predelete_handler(local_f8), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
                Memory::free_static(pOVar20,false);
              }
            }
          }
          else if (pOVar18 == (Object *)0x0) {
            if (local_f8 != (Object *)0x0) {
              local_f8 = (Object *)0x0;
LAB_00107d6d:
              cVar6 = RefCounted::unreference();
              pOVar19 = local_f8;
              if (cVar6 != '\0') {
LAB_001085e8:
                cVar6 = predelete_handler(pOVar20);
                pOVar19 = local_f8;
                if (cVar6 != '\0') {
                  (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
                  Memory::free_static(pOVar20,false);
                  pOVar19 = local_f8;
                }
              }
              goto LAB_00107d85;
            }
          }
          else {
            pOVar18 = (Object *)__dynamic_cast(pOVar18,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar20 == pOVar18) goto LAB_00107d85;
            local_f8 = pOVar18;
            if (pOVar18 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_f8 = (Object *)0x0;
                goto LAB_00107d64;
              }
              pOVar19 = local_f8;
              if ((pOVar20 == (Object *)0x0) ||
                 (cVar6 = RefCounted::unreference(), pOVar19 = local_f8, cVar6 == '\0'))
              goto LAB_00107d85;
              goto LAB_001085e8;
            }
LAB_00107d64:
            if (pOVar20 != (Object *)0x0) goto LAB_00107d6d;
          }
        }
        if (Variant::needs_deinit[local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      Array::~Array((Array *)local_108);
      if (((local_a8 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar20 = local_a8, cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_a8), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
        Memory::free_static(pOVar20,false);
      }
      Dictionary::~Dictionary(local_b0);
      Dictionary::~Dictionary(local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      lVar22 = *(long *)(this + 0x9d0);
      local_130 = local_130 + 1;
    } while (lVar22 != 0);
  }
  uVar4 = *(undefined8 *)(this + 0xa28);
  LineEdit::get_text();
  bVar27 = SUB81(uVar4,0);
  if ((local_d8 == (Object *)0x0) || (*(uint *)(local_d8 + -8) < 2)) {
    EventListenerLineEdit::get_event();
    if (local_c8 == 0) {
      BaseButton::set_disabled(bVar27);
    }
    else {
      BaseButton::set_disabled(bVar27);
    }
    Ref<InputEvent>::unref((Ref<InputEvent> *)&local_c8);
  }
  else {
    BaseButton::set_disabled(bVar27);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
LAB_001090e9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::set_show_builtin_actions(bool) */

void __thiscall ActionMapEditor::set_show_builtin_actions(ActionMapEditor *this,bool param_1)

{
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xa08] = (ActionMapEditor)param_1;
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa10),0));
  pSVar1 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,(bool)this[0xa08]);
  local_68 = "show_builtin_actions";
  local_70 = 0;
  local_60 = 0x14;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "project_settings";
  local_78 = 0;
  local_60 = 0x10;
  String::parse_latin1((StrRange *)&local_78);
  EditorSettings::set_project_metadata(pSVar1,(String *)&local_78,(Variant *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (*(long *)(this + 0x9d0) != 0) {
    local_60 = 0;
    update_action_list(this,(Vector *)&local_68);
    CowData<ActionMapEditor::ActionInfo>::_unref((CowData<ActionMapEditor::ActionInfo> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::_search_term_updated(String const&) */

void ActionMapEditor::_search_term_updated(String *param_1)

{
  long in_FS_OFFSET;
  Vector aVStack_28 [8];
  undefined8 local_20 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20[0] = 0;
  update_action_list((ActionMapEditor *)param_1,aVStack_28);
  CowData<ActionMapEditor::ActionInfo>::_unref((CowData<ActionMapEditor::ActionInfo> *)local_20);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::_search_by_event(Ref<InputEvent> const&) */

void __thiscall ActionMapEditor::_search_by_event(ActionMapEditor *this,Ref *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  Vector aVStack_38 [8];
  undefined8 local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 != 0) {
    cVar1 = InputEvent::is_pressed();
    if (cVar1 == '\0') goto LAB_00109641;
    cVar1 = (**(code **)(**(long **)param_1 + 0x1c8))();
    if (cVar1 != '\0') goto LAB_00109641;
  }
  local_30[0] = 0;
  update_action_list(this,aVStack_38);
  CowData<ActionMapEditor::ActionInfo>::_unref((CowData<ActionMapEditor::ActionInfo> *)local_30);
LAB_00109641:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::_notification(int) [clone .part.0] */

void ActionMapEditor::_notification(int param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  undefined4 in_register_0000003c;
  ActionMapEditor *this;
  long in_FS_OFFSET;
  Object *local_48;
  undefined8 local_40 [2];
  long local_30;
  
  this = (ActionMapEditor *)CONCAT44(in_register_0000003c,param_1);
  pRVar1 = *(Ref **)(this + 0xa18);
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
  Control::get_editor_theme_icon((StringName *)&local_48);
  LineEdit::set_right_icon(pRVar1);
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
  pRVar1 = *(Ref **)(this + 0xa40);
  if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_48);
  Button::set_button_icon(pRVar1);
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
  if (*(long *)(this + 0x9d0) != 0) {
    local_40[0] = 0;
    update_action_list(this,(Vector *)&local_48);
    CowData<ActionMapEditor::ActionInfo>::_unref((CowData<ActionMapEditor::ActionInfo> *)local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ActionMapEditor::_notification(int) */

void __thiscall ActionMapEditor::_notification(ActionMapEditor *this,int param_1)

{
  if ((param_1 != 10) && (param_1 != 0x2d)) {
    return;
  }
  _notification((int)this);
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* ActionMapEditor::is_class_ptr(void*) const */

uint __thiscall ActionMapEditor::is_class_ptr(ActionMapEditor *this,void *param_1)

{
  return (uint)CONCAT71(0x1134,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1134,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1134,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1134,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1134,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<ActionMapEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<ActionMapEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<ActionMapEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,Variant,Vector2_const&,Control*> *this)

{
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,Object*,int,int,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<LineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LineEdit,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<ActionMapEditor,void,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<ActionMapEditor, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<ActionMapEditor,bool,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointerC<ActionMapEditor,bool,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<ActionMapEditor, Variant, Vector2 const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,Variant,Vector2_const&,Control*>::get_argument_count
          (CallableCustomMethodPointer<ActionMapEditor,Variant,Vector2_const&,Control*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Object*,int,int,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<ActionMapEditor,void,Object*,int,int,MouseButton> *this,
          bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,bool>::get_argument_count
          (CallableCustomMethodPointer<ActionMapEditor,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<LineEdit, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<LineEdit,void>::get_argument_count
          (CallableCustomMethodPointer<LineEdit,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::get_argument_count
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ActionMapEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,void>::get_argument_count
          (CallableCustomMethodPointer<ActionMapEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<ActionMapEditor,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<ActionMapEditor,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<LineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LineEdit,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,Object*,int,int,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<ActionMapEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<ActionMapEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<ActionMapEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,Variant,Vector2_const&,Control*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void> *this)

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



/* ActionMapEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ActionMapEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
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



/* ActionMapEditor::_property_can_revertv(StringName const&) const */

undefined8 ActionMapEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00117008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00117008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00117008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ActionMapEditor::_get_class_namev() const */

undefined8 * ActionMapEditor::_get_class_namev(void)

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
LAB_0010a2a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a2a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ActionMapEditor");
      goto LAB_0010a30e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ActionMapEditor");
LAB_0010a30e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,bool>::get_object
          (CallableCustomMethodPointer<ActionMapEditor,void,bool> *this)

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
      goto LAB_0010a43d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a43d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a43d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ActionMapEditor::_validate_propertyv(PropertyInfo&) const */

void ActionMapEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00117010 == CanvasItem::_validate_property) {
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
  if ((code *)PTR__validate_property_00117018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* CallableCustomMethodPointer<LineEdit, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<LineEdit,void>::get_object
          (CallableCustomMethodPointer<LineEdit,void> *this)

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
      goto LAB_0010a64d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a64d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a64d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Object*, int, int, MouseButton>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Object*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<ActionMapEditor,void,Object*,int,int,MouseButton> *this)

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
      goto LAB_0010a74d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a74d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a74d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<ActionMapEditor, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<ActionMapEditor,bool,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointerC<ActionMapEditor,bool,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_0010a84d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a84d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a84d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Vector2_const&,Variant_const&,Control*>::get_object
          (CallableCustomMethodPointer<ActionMapEditor,void,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_0010a94d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a94d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a94d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ActionMapEditor, Variant, Vector2 const&, Control*>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,Variant,Vector2_const&,Control*>::get_object
          (CallableCustomMethodPointer<ActionMapEditor,Variant,Vector2_const&,Control*> *this)

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
      goto LAB_0010aa4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010aa4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010aa4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Ref<InputEvent> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<ActionMapEditor,void,Ref<InputEvent>const&> *this)

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
      goto LAB_0010ab4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ab4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ab4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<ActionMapEditor,void,String_const&> *this)

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
      goto LAB_0010ac4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ac4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ac4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::get_object
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this)

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
      goto LAB_0010ad4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ad4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ad4d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ActionMapEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ActionMapEditor,void>::get_object
          (CallableCustomMethodPointer<ActionMapEditor,void> *this)

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
      goto LAB_0010ae4d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ae4d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ae4d:
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
  if ((code *)PTR__validate_property_00117018 == Control::_validate_property) {
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
    uVar1 = (uint)CONCAT71(0x1134,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1133,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1134,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1133,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    if ((code *)PTR__set_00117020 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00117020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ActionMapEditor::_setv(StringName const&, Variant const&) */

undefined8 ActionMapEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00117020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b1d8) */
/* ActionMapEditor::_getv(StringName const&, Variant&) const */

undefined8 ActionMapEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00117028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b248) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00117028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b2b8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00117028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
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
LAB_0010b313:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b313;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010b37e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010b37e:
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
LAB_0010b403:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b403;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010b46e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010b46e:
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
      if (StringName::configured == '\0') goto LAB_0010b500;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b500:
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
      if (StringName::configured == '\0') goto LAB_0010b560;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b560:
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
      if (StringName::configured == '\0') goto LAB_0010b5c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b5c0:
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
      if (StringName::configured == '\0') goto LAB_0010b630;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b630:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00117030 != Container::_notification) {
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
  if ((code *)PTR__notification_00117030 == Container::_notification) {
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
    if ((code *)PTR__notification_00117030 != Container::_notification) {
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
  if ((code *)PTR__notification_00117030 == Container::_notification) {
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



/* ActionMapEditor::get_class() const */

void ActionMapEditor::get_class(void)

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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<ActionMapEditor, String
   const&>(ActionMapEditor*, char const*, void (ActionMapEditor::*)(String const&)) */

ActionMapEditor *
create_custom_callable_function_pointer<ActionMapEditor,String_const&>
          (ActionMapEditor *param_1,char *param_2,_func_void_String_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_00112e18;
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



/* Callable create_custom_callable_function_pointer<ActionMapEditor>(ActionMapEditor*, char const*,
   void (ActionMapEditor::*)()) */

ActionMapEditor *
create_custom_callable_function_pointer<ActionMapEditor>
          (ActionMapEditor *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_00112f38;
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



/* WARNING: Removing unreachable block (ram,0x0010c5b8) */
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
        if (pvVar5 == (void *)0x0) goto LAB_0010c8e4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010c8e4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* CallableCustomMethodPointer<LineEdit, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<LineEdit,void>::call
          (CallableCustomMethodPointer<LineEdit,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010cb2f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010cb2f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cb08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010cbf1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010cb2f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC74,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010cbf1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EventListenerLineEdit, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::call
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this,Variant **param_1,
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
      goto LAB_0010cd4f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010cd4f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010ce11;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010cd4f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC74,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ce11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ActionMapEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void>::call
          (CallableCustomMethodPointer<ActionMapEditor,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010cf6f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010cf6f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010d031;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010cf6f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC74,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010d031:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointer<ActionMapEditor,void,Vector2_const&,Variant_const&,Control*>
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
          goto LAB_0010d105;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010d105;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_0010d18f:
          uVar4 = _LC75;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0010d18f;
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
        uVar4 = _LC77;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar11)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar6);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_0010d105;
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
  _err_print_error(&_LC74,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_0010d105:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<ActionMapEditor, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<ActionMapEditor,bool,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointerC<ActionMapEditor,bool,Vector2_const&,Variant_const&,Control*>
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
          goto LAB_0010d484;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_0010d484;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_0010d50c:
          uVar4 = _LC75;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0010d50c;
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
        uVar4 = _LC77;
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
        goto LAB_0010d484;
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
  _err_print_error(&_LC74,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_98,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_0010d484:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, Variant, Vector2 const&, Control*>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,Variant,Vector2_const&,Control*>::call
          (CallableCustomMethodPointer<ActionMapEditor,Variant,Vector2_const&,Control*> *this,
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
          goto LAB_0010d82c;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_0010d82c;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar4 == '\0') {
LAB_0010d8ac:
          uVar3 = _LC78;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[1];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_0010d8ac;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC77;
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
        goto LAB_0010d82c;
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
  _err_print_error(&_LC74,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010d82c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Object*, int, int, MouseButton>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<ActionMapEditor,void,Object*,int,int,MouseButton> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  Object *pOVar8;
  Object *pOVar9;
  uint uVar10;
  ulong *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar7 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_58 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010dd00;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_0010dd00;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 5) {
      if (param_2 == 4) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar3 = _LC79;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC80;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC81;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0010dc88:
          uVar3 = _LC82;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_0010dc88;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010dcd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_0010ddfb;
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
LAB_0010dd00:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC74,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ddfb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ActionMapEditor, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,bool>::call
          (CallableCustomMethodPointer<ActionMapEditor,void,bool> *this,Variant **param_1,
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
      goto LAB_0010dfb9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010dfb9;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar4 = _LC83;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_0010e07b;
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
LAB_0010dfb9:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC74,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e07b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ActionMapEditor, void, Ref<InputEvent> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<ActionMapEditor,void,Ref<InputEvent>const&> *this,
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
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_38 >> 8;
      local_38 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_38 = (Object *)(uVar3 << 8);
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
          goto LAB_0010e14e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010e14e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC82;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_38 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_38;
        if (pOVar7 != local_38) {
          if (pOVar7 == (Object *)0x0) {
            if (local_38 != (Object *)0x0) {
              local_38 = (Object *)0x0;
LAB_0010e21d:
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
              local_38 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_38 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_0010e21d;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_38 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_38, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_38), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0010e14e;
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
  _err_print_error(&_LC74,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010e14e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ActionMapEditor, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,String_const&>::call
          (CallableCustomMethodPointer<ActionMapEditor,void,String_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
            uVar4 = _LC84;
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
        goto LAB_0010e4be;
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
  _err_print_error(&_LC74,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010e4be:
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
            if (lVar3 == 0) goto LAB_0010e6ef;
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
LAB_0010e6ef:
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
    if (cVar6 != '\0') goto LAB_0010e7a3;
  }
  cVar6 = String::operator==(param_1,"CanvasItem");
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
      if (cVar6 != '\0') goto LAB_0010e7a3;
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
        if (cVar6 != '\0') goto LAB_0010e7a3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = String::operator==(param_1,"Object");
        return uVar8;
      }
      goto LAB_0010e988;
    }
  }
LAB_0010e7a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e988:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010ea1f;
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
LAB_0010ea1f:
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
    if (cVar6 != '\0') goto LAB_0010ead3;
  }
  cVar6 = String::operator==(param_1,"BoxContainer");
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
      if (cVar6 != '\0') goto LAB_0010ead3;
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
        if (cVar6 != '\0') goto LAB_0010ead3;
      }
      cVar6 = String::operator==(param_1,"Control");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
          return uVar8;
        }
        goto LAB_0010ecc8;
      }
    }
  }
LAB_0010ead3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ecc8:
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
            if (lVar4 == 0) goto LAB_0010ed3f;
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
LAB_0010ed3f:
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
    if (cVar5 != '\0') goto LAB_0010edf3;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010edf3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010eebf;
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
LAB_0010eebf:
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
    if (cVar5 != '\0') goto LAB_0010ef73;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010ef73:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
              if ((code *)PTR__bind_methods_00117048 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00117038 !=
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
      if ((code *)PTR__bind_methods_00117040 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00117048 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00117038 !=
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
      if ((code *)PTR__bind_methods_00117040 != Container::_bind_methods) {
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



/* ActionMapEditor::is_class(String const&) const */

undefined8 __thiscall ActionMapEditor::is_class(ActionMapEditor *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010fc7f;
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
LAB_0010fc7f:
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
    if (cVar6 != '\0') goto LAB_0010fd33;
  }
  cVar6 = String::operator==(param_1,"ActionMapEditor");
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
      if (cVar6 != '\0') goto LAB_0010fd33;
    }
    cVar6 = String::operator==(param_1,"Control");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar8;
      }
      goto LAB_0010fe3e;
    }
  }
LAB_0010fd33:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fe3e:
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
  local_78 = &_LC86;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC86;
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
      goto LAB_0011014c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011014c:
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
      goto LAB_001103b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001103b1:
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
  if ((code *)PTR__get_property_list_00117050 != Object::_get_property_list) {
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
      goto LAB_00110681;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110681:
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
  if ((code *)PTR__get_property_list_00117058 != CanvasItem::_get_property_list) {
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



/* ActionMapEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ActionMapEditor::_get_property_listv(ActionMapEditor *this,List *param_1,bool param_2)

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
  local_78 = "ActionMapEditor";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ActionMapEditor";
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
      goto LAB_00110951;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110951:
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
  StringName::StringName((StringName *)&local_78,"ActionMapEditor",false);
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
      goto LAB_00110c01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110c01:
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
      goto LAB_00110eb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110eb1:
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
      goto LAB_00111161;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111161:
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
      goto LAB_00111411;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111411:
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



/* ActionMapEditor::_bind_methods() [clone .cold] */

void ActionMapEditor::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ActionMapEditor::_initialize_classv() */

void ActionMapEditor::_initialize_classv(void)

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
          if ((code *)PTR__bind_methods_00117048 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_00117038 != Object::_bind_compatibility_methods)
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
      if ((code *)PTR__bind_methods_00117060 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ActionMapEditor";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<InputEvent>::unref() */

void __thiscall Ref<InputEvent>::unref(Ref<InputEvent> *this)

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



/* Ref<InputEvent>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<InputEvent>::operator=(Ref<InputEvent> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&InputEvent::typeinfo,0);
    if (pOVar1 == pOVar3) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* CowData<ActionMapEditor::ActionInfo>::_unref() */

void __thiscall
CowData<ActionMapEditor::ActionInfo>::_unref(CowData<ActionMapEditor::ActionInfo> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long *plVar8;
  long lVar9;
  
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
        lVar9 = 0;
        plVar8 = plVar1;
        do {
          if (plVar8[4] != 0) {
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
              pOVar5 = (Object *)plVar8[4];
              cVar7 = predelete_handler(pOVar5);
              if (cVar7 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          Dictionary::~Dictionary((Dictionary *)(plVar8 + 3));
          Dictionary::~Dictionary((Dictionary *)(plVar8 + 1));
          if (*plVar8 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar8 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar8;
              *plVar8 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar9 = lVar9 + 1;
          plVar8 = plVar8 + 6;
        } while (lVar3 != lVar9);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* ActionMapEditor::~ActionMapEditor() */

void __thiscall ActionMapEditor::~ActionMapEditor(ActionMapEditor *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001123c0;
  if (*(long *)(this + 0x9e8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x9e8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x9e8);
      *(undefined8 *)(this + 0x9e8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Dictionary::~Dictionary((Dictionary *)(this + 0x9e0));
  CowData<ActionMapEditor::ActionInfo>::_unref
            ((CowData<ActionMapEditor::ActionInfo> *)(this + 0x9d0));
  Control::~Control((Control *)this);
  return;
}



/* ActionMapEditor::_notificationv(int, bool) */

void __thiscall ActionMapEditor::_notificationv(ActionMapEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((param_1 == 10) || (param_1 == 0x2d)) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_00117068 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_00117068 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  if ((param_1 != 10) && (param_1 != 0x2d)) {
    return;
  }
  _notification(iVar1);
  return;
}



/* ActionMapEditor::~ActionMapEditor() */

void __thiscall ActionMapEditor::~ActionMapEditor(ActionMapEditor *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001123c0;
  if (*(long *)(this + 0x9e8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x9e8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x9e8);
      *(undefined8 *)(this + 0x9e8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Dictionary::~Dictionary((Dictionary *)(this + 0x9e0));
  CowData<ActionMapEditor::ActionInfo>::_unref
            ((CowData<ActionMapEditor::ActionInfo> *)(this + 0x9d0));
  Control::~Control((Control *)this);
  operator_delete(this,0xa48);
  return;
}



/* ActionMapEditor::_event_config_confirmed() */

void ActionMapEditor::_GLOBAL__sub_I__event_config_confirmed(void)

{
  if (PopupMenu::base_property_helper != '\0') {
    return;
  }
  PopupMenu::base_property_helper = 1;
  PopupMenu::base_property_helper._56_8_ = 2;
  PopupMenu::base_property_helper._64_8_ = 0;
  PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,&__dso_handle
              );
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
/* CallableCustomMethodPointer<ActionMapEditor, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ActionMapEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ActionMapEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EventListenerLineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EventListenerLineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EventListenerLineEdit,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<LineEdit, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LineEdit,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LineEdit,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ActionMapEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ActionMapEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,Object*,int,int,MouseButton> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ActionMapEditor, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,Variant,Vector2_const&,Control*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<ActionMapEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<ActionMapEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<ActionMapEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ActionMapEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ActionMapEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ActionMapEditor,void,Vector2_const&,Variant_const&,Control*>
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



/* WARNING: Control flow encountered bad instruction data */
/* ActionMapEditor::~ActionMapEditor() */

void __thiscall ActionMapEditor::~ActionMapEditor(ActionMapEditor *this)

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



