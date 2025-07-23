/* CodeTextEditor::_text_changed() */

void __thiscall CodeTextEditor::_text_changed(CodeTextEditor *this)

{
  char cVar1;
  undefined4 uVar2;
  double dVar3;
  
  dVar3 = _LC0;
  if ((this[0xa78] != (CodeTextEditor)0x0) &&
     (cVar1 = TextEdit::is_insert_text_operation(), dVar3 = _LC0, cVar1 != '\0')) {
    uVar2 = TextEdit::get_caret_line((int)*(undefined8 *)(this + 0xa10));
    *(undefined4 *)(this + 0xa88) = uVar2;
    Timer::start(dVar3);
  }
  Timer::start(dVar3);
  if (*(long *)(this + 0xa18) != 0) {
    *(undefined1 *)(*(long *)(this + 0xa18) + 0xaae) = 1;
  }
  return;
}



/* CodeTextEditor::_code_complete_timer_timeout() */

void __thiscall CodeTextEditor::_code_complete_timer_timeout(CodeTextEditor *this)

{
  char cVar1;
  
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 == '\0') {
    return;
  }
  CodeEdit::request_code_completion(SUB81(*(undefined8 *)(this + 0xa10),0));
  return;
}



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2i>::_copy_on_write(CowData<Vector2i> *this)

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



/* CodeTextEditor::_error_pressed(Ref<InputEvent> const&) */

void __thiscall CodeTextEditor::_error_pressed(CodeTextEditor *this,Ref *param_1)

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
            (**(code **)(*(long *)this + 0x388))(this);
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



/* CodeTextEditor::set_preview_navigation_change(bool) [clone .part.0] */

void CodeTextEditor::set_preview_navigation_change(bool param_1)

{
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_40,"navigation_preview_ended",false);
  local_30 = (undefined1  [16])0x0;
  local_38 = 0;
  (**(code **)(*(long *)CONCAT71(in_register_00000039,param_1) + 0xd0))
            ((long *)CONCAT71(in_register_00000039,param_1),(StringName *)&local_40,0,0);
  if (Variant::needs_deinit[(int)local_38] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::_text_changed_idle_timeout() */

void __thiscall CodeTextEditor::_text_changed_idle_timeout(CodeTextEditor *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x370) != _validate_script) {
    (**(code **)(*(long *)this + 0x370))();
  }
  if (_text_changed_idle_timeout()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_text_changed_idle_timeout()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_text_changed_idle_timeout()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_text_changed_idle_timeout()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_text_changed_idle_timeout()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))
            (this,&_text_changed_idle_timeout()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void Ref<InputEvent>::TEMPNAMEPLACEHOLDERVALUE(Ref<InputEventKey> const&) [clone .isra.0] */

void __thiscall Ref<InputEvent>::operator=(Ref<InputEvent> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&InputEvent::typeinfo,0);
    if (pOVar3 == pOVar1) {
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



/* Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Texture2D> const&) [clone .isra.0] */

void __thiscall Ref<Texture2D>::operator=(Ref<Texture2D> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
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



/* FindReplaceBar::_hide_bar() */

void __thiscall FindReplaceBar::_hide_bar(FindReplaceBar *this)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char cVar4;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = Control::has_focus();
  if (cVar4 == '\0') {
    cVar4 = Control::has_focus();
    if (cVar4 == '\0') goto LAB_00100777;
  }
  Control::grab_focus();
LAB_00100777:
  pSVar2 = *(String **)(this + 0xa90);
  local_40 = 0;
  local_30 = 0;
  local_38 = &_LC15;
  String::parse_latin1((StrRange *)&local_40);
  TextEdit::set_search_text(pSVar2);
  lVar3 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  *(undefined8 *)(this + 0xa9c) = 0xffffffffffffffff;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::hide();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindReplaceBar::input(Ref<InputEvent> const&) */

void __thiscall FindReplaceBar::input(FindReplaceBar *this,Ref *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  StringName *pSVar4;
  long lVar5;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("input","editor/code_editor.cpp",0xa6,
                       "Condition \"p_event.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_00100a17;
  }
  pSVar4 = (StringName *)
           __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0);
  if (pSVar4 != (StringName *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') {
      if (input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname == '\0') {
        iVar3 = __cxa_guard_acquire(&input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname
                                   );
        if (iVar3 != 0) {
          _scs_create((char *)&input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname,true)
          ;
          __cxa_atexit(StringName::~StringName,
                       &input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&input(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname);
        }
      }
      cVar2 = InputEvent::is_action_pressed(pSVar4,true,false);
      if (cVar2 != '\0') {
        lVar5 = Viewport::gui_get_focus_owner();
        cVar2 = Control::has_focus();
        if (cVar2 == '\0') {
          if (lVar5 != 0) {
            cVar2 = Node::is_ancestor_of((Node *)this);
            if (cVar2 != '\0') goto LAB_0010096b;
          }
        }
        else {
LAB_0010096b:
          _hide_bar(this);
          Control::accept_event();
        }
      }
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler((Object *)pSVar4);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pSVar4 + 0x140))(pSVar4);
          if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pSVar4,false);
            return;
          }
          goto LAB_00100a17;
        }
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100a17:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GotoLinePopup::_notification(int) */

void __thiscall GotoLinePopup::_notification(GotoLinePopup *this,int param_1)

{
  long lVar1;
  char cVar2;
  
  if (param_1 != 0x1e) {
    return;
  }
  cVar2 = Window::is_visible();
  if ((cVar2 == '\0') && (lVar1 = *(long *)(this + 0xdc0), *(char *)(lVar1 + 0xaa0) != '\0')) {
    *(undefined1 *)(lVar1 + 0xaa0) = 0;
    CodeTextEditor::set_preview_navigation_change(SUB81(lVar1,0));
    return;
  }
  return;
}



/* FindReplaceBar::_update_flags(bool) */

void __thiscall FindReplaceBar::_update_flags(FindReplaceBar *this,bool param_1)

{
  char cVar1;
  
  *(undefined4 *)(this + 0xa98) = 0;
  cVar1 = BaseButton::is_pressed();
  if (cVar1 != '\0') {
    *(uint *)(this + 0xa98) = *(uint *)(this + 0xa98) | 2;
  }
  cVar1 = BaseButton::is_pressed();
  if (cVar1 != '\0') {
    *(uint *)(this + 0xa98) = *(uint *)(this + 0xa98) | 1;
  }
  if (param_1) {
    *(uint *)(this + 0xa98) = *(uint *)(this + 0xa98) | 4;
  }
  return;
}



/* FindReplaceBar::get_search_text() const */

FindReplaceBar * __thiscall FindReplaceBar::get_search_text(FindReplaceBar *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindReplaceBar::get_replace_text() const */

FindReplaceBar * __thiscall FindReplaceBar::get_replace_text(FindReplaceBar *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindReplaceBar::is_case_sensitive() const */

void FindReplaceBar::is_case_sensitive(void)

{
  BaseButton::is_pressed();
  return;
}



/* FindReplaceBar::is_whole_words() const */

void FindReplaceBar::is_whole_words(void)

{
  BaseButton::is_pressed();
  return;
}



/* FindReplaceBar::is_selection_only() const */

void FindReplaceBar::is_selection_only(void)

{
  BaseButton::is_pressed();
  return;
}



/* CodeTextEditor::trim_trailing_whitespace() */

void __thiscall CodeTextEditor::trim_trailing_whitespace(CodeTextEditor *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  bVar4 = false;
  iVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = TextEdit::get_line_count();
  if (0 < iVar6) {
    do {
      TextEdit::get_line((int)&local_48);
      cVar5 = String::ends_with((char *)&local_48);
      if ((cVar5 != '\0') || (cVar5 = String::ends_with((char *)&local_48), cVar5 != '\0')) {
        if (bVar4) {
          if (local_48 == 0) goto LAB_00100d79;
LAB_00100c9e:
          lVar2 = *(long *)(local_48 + -8);
          iVar6 = (int)lVar2;
          if ((iVar6 == 0) || (iVar6 + -2 < 0)) {
            iVar9 = (int)*(undefined8 *)(this + 0xa10);
            iVar6 = 0;
          }
          else {
            lVar7 = (long)(iVar6 + -2);
            do {
              if (lVar2 == lVar7) {
                iVar6 = iVar6 + 1;
                goto LAB_00100d0b;
              }
              if (lVar2 <= lVar7) {
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()",""
                           ,false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              iVar9 = *(int *)(local_48 + lVar7 * 4);
              if ((iVar9 != 0x20) && (iVar9 != 9)) {
                iVar6 = (int)lVar7 + 1;
                goto LAB_00100d0b;
              }
              lVar7 = lVar7 + -1;
            } while (-1 < (int)lVar7);
            iVar6 = 0;
LAB_00100d0b:
            iVar9 = (int)*(undefined8 *)(this + 0xa10);
          }
        }
        else {
          TextEdit::begin_complex_operation();
          if (local_48 != 0) goto LAB_00100c9e;
LAB_00100d79:
          iVar9 = (int)*(undefined8 *)(this + 0xa10);
          iVar6 = 0;
        }
        bVar4 = true;
        TextEdit::remove_text(iVar9,iVar8,iVar6,iVar8);
      }
      lVar2 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      iVar8 = iVar8 + 1;
      iVar6 = TextEdit::get_line_count();
    } while (iVar8 < iVar6);
  }
  if (bVar4) {
    TextEdit::merge_overlapping_carets();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      TextEdit::end_complex_operation();
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::toggle_inline_comment(String const&) */

void __thiscall CodeTextEditor::toggle_inline_comment(CodeTextEditor *this,String *param_1)

{
  long *plVar1;
  int *piVar2;
  bool bVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  String *pSVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long in_FS_OFFSET;
  int *local_70;
  long local_68;
  long local_60;
  undefined1 local_58 [8];
  int *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TextEdit::begin_complex_operation();
  TextEdit::begin_multicaret_edit();
  TextEdit::get_line_ranges_from_carets(SUB81(local_58,0),SUB81(*(undefined8 *)(this + 0xa10),0));
  CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)local_50);
  piVar2 = local_50[0];
  CowData<Vector2i>::_copy_on_write((CowData<Vector2i> *)local_50);
  local_70 = local_50[0];
  if (local_50[0] != (int *)0x0) {
    local_70 = local_50[0] + *(long *)(local_50[0] + -2) * 2;
  }
  do {
    if (piVar2 == local_70) {
      TextEdit::end_multicaret_edit();
      TextEdit::end_complex_operation();
      piVar2 = local_50[0];
      if (local_50[0] != (int *)0x0) {
        LOCK();
        plVar1 = (long *)(local_50[0] + -4);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_50[0] = (int *)0x0;
          Memory::free_static(piVar2 + -4,false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar13 = piVar2[1];
    iVar11 = *piVar2;
    cVar5 = CodeEdit::is_line_folded((int)*(undefined8 *)(this + 0xa10));
    if (cVar5 != '\0') {
      iVar9 = TextEdit::get_next_visible_line_offset_from
                        ((int)*(undefined8 *)(this + 0xa10),iVar13 + 1);
      iVar13 = iVar13 + -1 + iVar9;
    }
    if (iVar11 <= iVar13) {
      bVar6 = true;
      pSVar10 = *(String **)(this + 0xa10);
      iVar9 = iVar11;
      do {
        TextEdit::get_first_non_whitespace_column((int)pSVar10);
        iVar7 = CodeEdit::is_in_comment((int)pSVar10,iVar9);
        TextEdit::get_line((int)&local_68);
        String::strip_edges(SUB81((String *)&local_60,0),SUB81(&local_68,0));
        lVar4 = local_60;
        iVar12 = (int)(String *)&local_60;
        if (local_60 == 0) {
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              iVar8 = 0;
              goto LAB_00100fb9;
            }
          }
LAB_00100ee9:
          pSVar10 = *(String **)(this + 0xa10);
        }
        else {
          iVar8 = (int)*(undefined8 *)(local_60 + -8);
          if (iVar8 != 0) {
            iVar8 = iVar8 + -1;
            bVar6 = (bool)(bVar6 & iVar8 == 0);
          }
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
LAB_00100fb9:
              lVar4 = local_68;
              local_68 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          pSVar10 = *(String **)(this + 0xa10);
          if (iVar8 != 0) {
            if (iVar7 != -1) {
              CodeEdit::get_delimiter_start_key(iVar12);
              cVar5 = String::begins_with((String *)&local_60);
              lVar4 = local_60;
              if (cVar5 != '\0') {
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
                goto LAB_00100ee9;
              }
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
              pSVar10 = *(String **)(this + 0xa10);
            }
            bVar3 = false;
            goto LAB_00101048;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 <= iVar13);
      bVar3 = (bool)(bVar6 ^ 1);
LAB_00101048:
      iVar9 = (int)param_1;
      if (bVar6) {
        while( true ) {
          TextEdit::insert_text(pSVar10,iVar9,iVar11,false,true);
          if (iVar13 < iVar11 + 1) break;
          pSVar10 = *(String **)(this + 0xa10);
          iVar11 = iVar11 + 1;
        }
      }
      else if (bVar3) {
        do {
          TextEdit::get_line(iVar12);
          iVar7 = String::find((String *)&local_60,iVar9);
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
          TextEdit::remove_text((int)*(undefined8 *)(this + 0xa10),iVar11,iVar7,iVar11);
          iVar11 = iVar11 + 1;
        } while (iVar11 <= iVar13);
      }
      else {
        while( true ) {
          bVar6 = (bool)TextEdit::get_first_non_whitespace_column((int)pSVar10);
          TextEdit::insert_text(pSVar10,iVar9,iVar11,bVar6,true);
          if (iVar13 < iVar11 + 1) break;
          pSVar10 = *(String **)(this + 0xa10);
          iVar11 = iVar11 + 1;
        }
      }
    }
    piVar2 = piVar2 + 2;
  } while( true );
}



/* CodeTextEditor::set_executing_line(int) */

void __thiscall CodeTextEditor::set_executing_line(CodeTextEditor *this,int param_1)

{
  CodeEdit::set_line_as_executing((int)*(undefined8 *)(this + 0xa10),SUB41(param_1,0));
  return;
}



/* CodeTextEditor::clear_executing_line() */

void CodeTextEditor::clear_executing_line(void)

{
  CodeEdit::clear_executing_lines();
  return;
}



/* CodeTextEditor::get_previous_state() */

void CodeTextEditor::get_previous_state(void)

{
  long in_RSI;
  Variant *in_RDI;
  
  Variant::Variant(in_RDI,(Dictionary *)(in_RSI + 0xaa8));
  return;
}



/* CodeTextEditor::is_previewing_navigation_change() const */

CodeTextEditor __thiscall CodeTextEditor::is_previewing_navigation_change(CodeTextEditor *this)

{
  return this[0xaa0];
}



/* CodeTextEditor::set_preview_navigation_change(bool) */

void __thiscall CodeTextEditor::set_preview_navigation_change(CodeTextEditor *this,bool param_1)

{
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xaa0] != (CodeTextEditor)param_1) && (this[0xaa0] = (CodeTextEditor)param_1, !param_1))
  {
    StringName::StringName((StringName *)&local_40,"navigation_preview_ended",false);
    local_30 = (undefined1  [16])0x0;
    local_38 = 0;
    (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_40,0,0);
    if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::get_navigation_state() */

void CodeTextEditor::get_navigation_state(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Variant *pVVar4;
  long in_RSI;
  Variant *in_RDI;
  long in_FS_OFFSET;
  double dVar5;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_80);
  dVar5 = (double)TextEdit::get_v_scroll();
  Variant::Variant((Variant *)local_58,dVar5);
  Variant::Variant((Variant *)local_78,"scroll_position");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar4 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar4 = 0;
    *(int *)pVVar4 = local_58[0];
    *(undefined8 *)(pVVar4 + 8) = local_50;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
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
  iVar3 = TextEdit::get_h_scroll();
  Variant::Variant((Variant *)local_58,iVar3);
  Variant::Variant((Variant *)local_78,"h_scroll_position");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar4 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar4 = 0;
    *(int *)pVVar4 = local_58[0];
    *(undefined8 *)(pVVar4 + 8) = local_50;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
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
  iVar3 = TextEdit::get_caret_column((int)*(undefined8 *)(in_RSI + 0xa10));
  Variant::Variant((Variant *)local_58,iVar3);
  Variant::Variant((Variant *)local_78,"column");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar4 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar4 = 0;
    *(int *)pVVar4 = local_58[0];
    *(undefined8 *)(pVVar4 + 8) = local_50;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
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
  iVar3 = TextEdit::get_caret_line((int)*(undefined8 *)(in_RSI + 0xa10));
  Variant::Variant((Variant *)local_58,iVar3);
  Variant::Variant((Variant *)local_78,"row");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar4 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar4 = 0;
    *(int *)pVVar4 = local_58[0];
    *(undefined8 *)(pVVar4 + 8) = local_50;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
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
  bVar1 = (bool)TextEdit::has_selection((int)*(undefined8 *)(in_RSI + 0xa10));
  Variant::Variant((Variant *)local_58,bVar1);
  Variant::Variant((Variant *)local_78,"selection");
  pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar4 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar4 = 0;
    *(int *)pVVar4 = local_58[0];
    *(undefined8 *)(pVVar4 + 8) = local_50;
    *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
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
  cVar2 = TextEdit::has_selection((int)*(undefined8 *)(in_RSI + 0xa10));
  if (cVar2 != '\0') {
    iVar3 = TextEdit::get_selection_from_line((int)*(undefined8 *)(in_RSI + 0xa10));
    Variant::Variant((Variant *)local_58,iVar3);
    Variant::Variant((Variant *)local_78,"selection_from_line");
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_80);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar3 = TextEdit::get_selection_from_column((int)*(undefined8 *)(in_RSI + 0xa10));
    Variant::Variant((Variant *)local_58,iVar3);
    Variant::Variant((Variant *)local_78,"selection_from_column");
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_80);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar3 = TextEdit::get_selection_to_line((int)*(undefined8 *)(in_RSI + 0xa10));
    Variant::Variant((Variant *)local_58,iVar3);
    Variant::Variant((Variant *)local_78,"selection_to_line");
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_80);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar3 = TextEdit::get_selection_to_column((int)*(undefined8 *)(in_RSI + 0xa10));
    Variant::Variant((Variant *)local_58,iVar3);
    Variant::Variant((Variant *)local_78,"selection_to_column");
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_80);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  Variant::Variant(in_RDI,local_80);
  Dictionary::~Dictionary(local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::store_previous_state() */

void __thiscall CodeTextEditor::store_previous_state(CodeTextEditor *this)

{
  long in_FS_OFFSET;
  Variant local_40 [8];
  int local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  get_navigation_state();
  Variant::operator_cast_to_Dictionary(local_40);
  Dictionary::operator=((Dictionary *)(this + 0xaa8),(Dictionary *)local_40);
  Dictionary::~Dictionary((Dictionary *)local_40);
  if (Variant::needs_deinit[local_38] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::set_error(String const&) */

void __thiscall CodeTextEditor::set_error(CodeTextEditor *this,String *param_1)

{
  Label::set_text(*(String **)(this + 0xa90));
  if ((*(long *)param_1 != 0) && (1 < *(uint *)(*(long *)param_1 + -8))) {
    Control::set_default_cursor_shape(*(undefined8 *)(this + 0xa90),2);
    return;
  }
  Control::set_default_cursor_shape(*(undefined8 *)(this + 0xa90),0);
  return;
}



/* CodeTextEditor::set_error_pos(int, int) */

void __thiscall CodeTextEditor::set_error_pos(CodeTextEditor *this,int param_1,int param_2)

{
  *(int *)(this + 0xa98) = param_1;
  *(int *)(this + 0xa9c) = param_2;
  return;
}



/* CodeTextEditor::get_error_pos() const */

undefined8 __thiscall CodeTextEditor::get_error_pos(CodeTextEditor *this)

{
  return *(undefined8 *)(this + 0xa98);
}



/* CodeTextEditor::validate_script() */

void CodeTextEditor::validate_script(void)

{
  Timer::start(_LC0);
  return;
}



/* CodeTextEditor::_set_show_errors_panel(bool) */

void __thiscall CodeTextEditor::_set_show_errors_panel(CodeTextEditor *this,bool param_1)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xb21] = (CodeTextEditor)param_1;
  if ((_set_show_errors_panel(bool)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&_set_show_errors_panel(bool)::{lambda()#1}::operator()()::sname),
     iVar2 != 0)) {
    _scs_create((char *)&_set_show_errors_panel(bool)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_set_show_errors_panel(bool)::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_set_show_errors_panel(bool)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,param_1);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_set_show_errors_panel(bool)::{lambda()#1}::operator()()::sname,local_78,1);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::_set_show_warnings_panel(bool) */

void __thiscall CodeTextEditor::_set_show_warnings_panel(CodeTextEditor *this,bool param_1)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xb20] = (CodeTextEditor)param_1;
  if ((_set_show_warnings_panel(bool)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&_set_show_warnings_panel(bool)::{lambda()#1}::operator()()::sname
                                 ), iVar2 != 0)) {
    _scs_create((char *)&_set_show_warnings_panel(bool)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_set_show_warnings_panel(bool)::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_set_show_warnings_panel(bool)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,param_1);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_set_show_warnings_panel(bool)::{lambda()#1}::operator()()::sname,local_78,1);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::_error_button_pressed() */

void __thiscall CodeTextEditor::_error_button_pressed(CodeTextEditor *this)

{
  _set_show_errors_panel(this,(bool)((byte)this[0xb21] ^ 1));
  _set_show_warnings_panel(this,false);
  return;
}



/* CodeTextEditor::_warning_button_pressed() */

void __thiscall CodeTextEditor::_warning_button_pressed(CodeTextEditor *this)

{
  _set_show_warnings_panel(this,(bool)((byte)this[0xb20] ^ 1));
  _set_show_errors_panel(this,false);
  return;
}



/* CodeTextEditor::set_error_count(int) */

void __thiscall CodeTextEditor::set_error_count(CodeTextEditor *this,int param_1)

{
  long *plVar1;
  float fVar2;
  String *pSVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  pSVar3 = *(String **)(this + 0xa38);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  itos((long)&local_38);
  Button::set_text(pSVar3);
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa38),0));
  if (param_1 < 1) {
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001020be;
    fVar2 = *(float *)(this + 0xa70);
  }
  else {
    _set_show_errors_panel(this,false);
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001020be:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    fVar2 = *(float *)(this + 0xa74);
  }
  Timer::set_wait_time((double)fVar2);
  return;
}



/* CodeTextEditor::set_warning_count(int) */

void __thiscall CodeTextEditor::set_warning_count(CodeTextEditor *this,int param_1)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  pSVar2 = *(String **)(this + 0xa40);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  itos((long)&local_38);
  Button::set_text(pSVar2);
  lVar3 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa40),0));
  if (param_1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _set_show_warnings_panel(this,false);
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::remove_all_bookmarks() */

void CodeTextEditor::remove_all_bookmarks(void)

{
  CodeEdit::clear_bookmarked_lines();
  return;
}



/* CodeTextEditor::get_zoom_factor() */

undefined4 __thiscall CodeTextEditor::get_zoom_factor(CodeTextEditor *this)

{
  return *(undefined4 *)(this + 0xa8c);
}



/* CodeTextEditor::set_code_complete_func(void (*)(void*, String const&,
   List<ScriptLanguage::CodeCompletionOption, DefaultAllocator>*, bool&), void*) */

void __thiscall
CodeTextEditor::set_code_complete_func
          (CodeTextEditor *this,_func_void_void_ptr_String_ptr_List_ptr_bool_ptr *param_1,
          void *param_2)

{
  *(_func_void_void_ptr_String_ptr_List_ptr_bool_ptr **)(this + 0xb10) = param_1;
  *(void **)(this + 0xb18) = param_2;
  return;
}



/* CodeTextEditor::set_toggle_list_control(Control*) */

void __thiscall CodeTextEditor::set_toggle_list_control(CodeTextEditor *this,Control *param_1)

{
  *(Control **)(this + 0xa30) = param_1;
  return;
}



/* CodeTextEditor::show_toggle_scripts_button() */

void CodeTextEditor::show_toggle_scripts_button(void)

{
  CanvasItem::show();
  return;
}



/* CodeTextEditor::remove_find_replace_bar() */

void __thiscall CodeTextEditor::remove_find_replace_bar(CodeTextEditor *this)

{
  long *plVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  long local_50;
  Label local_48 [24];
  long local_30;
  
  plVar1 = *(long **)(this + 0xa18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x110);
    create_custom_callable_function_pointer<Label,String_const&>
              (local_48,*(char **)(this + 0xa90),(_func_void_String_ptr *)"&Label::set_text");
    StringName::StringName((StringName *)&local_50,"error",false);
    (*pcVar2)(plVar1,(StringName *)&local_50,local_48);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_48);
    *(undefined8 *)(this + 0xa18) = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::set_indent_using_spaces(bool) */

void __thiscall CodeTextEditor::set_indent_using_spaces(CodeTextEditor *this,bool param_1)

{
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CodeEdit::set_indent_using_spaces(SUB81(*(undefined8 *)(this + 0xa10),0));
  pSVar1 = *(String **)(this + 0xa58);
  local_48 = "Indentation";
  local_50 = 0;
  local_40 = 0xb;
  if (param_1) {
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Spaces";
    local_40 = 6;
  }
  else {
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Tabs";
    local_40 = 4;
  }
  local_58 = 0;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)&local_48,(String *)&local_58);
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::set_zoom_factor(float) */

void __thiscall CodeTextEditor::set_zoom_factor(CodeTextEditor *this,float param_1)

{
  String *pSVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  float fVar4;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = _LC44;
  if ((_LC44 <= param_1) && (fVar4 = param_1, _LC45 < param_1)) {
    fVar4 = _LC45;
  }
  *(float *)(this + 0xa8c) = fVar4;
  local_68 = "interface/editor/code_font_size";
  local_70 = 0;
  local_60 = 0x1f;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar3 = Variant::operator_cast_to_int((Variant *)local_58);
  fVar4 = (float)EditorScale::get_scale();
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  roundf((float)(int)(fVar4 * (float)iVar3) * *(float *)(this + 0xa8c));
  local_68 = " %";
  pSVar1 = *(String **)(this + 0xa48);
  local_70 = 0;
  local_60 = 2;
  String::parse_latin1((StrRange *)&local_70);
  roundf(_LC48 * *(float *)(this + 0xa8c));
  itos((long)local_78);
  String::operator+((String *)&local_68,(String *)local_78);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  cVar2 = Control::has_theme_font_size_override(*(StringName **)(this + 0xa10));
  if (cVar2 != '\0') {
    Control::remove_theme_font_size_override(*(StringName **)(this + 0xa10));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  Control::add_theme_font_size_override
            (*(StringName **)(this + 0xa10),(int)SceneStringNames::singleton + 0xa8);
  return;
}



/* CodeTextEditor::_zoom_to(float) */

void __thiscall CodeTextEditor::_zoom_to(CodeTextEditor *this,float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  long in_FS_OFFSET;
  Variant *local_68 [2];
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  fVar1 = *(float *)(this + 0xa8c);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (fVar1 != param_1) {
    set_zoom_factor(this,param_1);
    fVar2 = *(float *)(this + 0xa8c);
    if (fVar1 != fVar2) {
      if ((_zoom_to(float)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar3 = __cxa_guard_acquire(&_zoom_to(float)::{lambda()#1}::operator()()::sname),
         iVar3 != 0)) {
        _scs_create((char *)&_zoom_to(float)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_zoom_to(float)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_zoom_to(float)::{lambda()#1}::operator()()::sname);
      }
      Variant::Variant((Variant *)local_58,fVar2);
      local_40 = 0;
      local_38 = (undefined1  [16])0x0;
      local_68[0] = (Variant *)local_58;
      (**(code **)(*(long *)this + 0xd0))
                (this,&_zoom_to(float)::{lambda()#1}::operator()()::sname,local_68,1);
      if (Variant::needs_deinit[(int)local_40] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CodeTextEditor::_zoom_popup_id_pressed(int) */

void CodeTextEditor::_zoom_popup_id_pressed(int param_1)

{
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  float fVar1;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  MenuButton::get_popup();
  PopupMenu::get_item_metadata((int)local_38);
  fVar1 = Variant::operator_cast_to_float((Variant *)local_38);
  _zoom_to((CodeTextEditor *)CONCAT44(in_register_0000003c,param_1),fVar1);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001028ad) */
/* CodeTextEditor::_zoom_in() */

void __thiscall CodeTextEditor::_zoom_in(CodeTextEditor *this)

{
  float fVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = Control::get_theme_font_size
                    (*(StringName **)(this + 0xa10),
                     (StringName *)(SceneStringNames::singleton + 0xa8));
  fVar1 = *(float *)(this + 0xa8c);
  fVar4 = (float)EditorScale::get_scale();
  fVar5 = _LC50;
  if (_LC50 <= fVar4) {
    fVar5 = fVar4;
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  _zoom_to(this,((fVar5 + (float)iVar3) * fVar1) / (float)iVar3);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010297d) */
/* CodeTextEditor::_zoom_out() */

void __thiscall CodeTextEditor::_zoom_out(CodeTextEditor *this)

{
  float fVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = Control::get_theme_font_size
                    (*(StringName **)(this + 0xa10),
                     (StringName *)(SceneStringNames::singleton + 0xa8));
  fVar1 = *(float *)(this + 0xa8c);
  fVar4 = (float)EditorScale::get_scale();
  fVar5 = _LC50;
  if (_LC50 <= fVar4) {
    fVar5 = fVar4;
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  _zoom_to(this,(((float)iVar3 - fVar5) * fVar1) / (float)iVar3);
  return;
}



/* CodeTextEditor::update_editor_settings() */

void CodeTextEditor::update_editor_settings(void)

{
  StringName *pSVar1;
  String *pSVar2;
  bool bVar3;
  CodeTextEditor CVar4;
  char cVar5;
  int iVar6;
  Variant *pVVar7;
  uint uVar8;
  CodeTextEditor *in_RDI;
  long in_FS_OFFSET;
  float fVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 in_XMM1_Qa;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = "text_editor/theme/highlighting/completion_font_color";
  local_60 = 0x34;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  uVar10 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0xab0) = uVar10;
  *(undefined8 *)(in_RDI + 0xab8) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/theme/highlighting/string_color";
  local_70 = 0;
  local_60 = 0x2b;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  uVar10 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0xac0) = uVar10;
  *(undefined8 *)(in_RDI + 0xac8) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/theme/highlighting/gdscript/string_name_color";
  local_70 = 0;
  local_60 = 0x39;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  uVar10 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0xad0) = uVar10;
  *(undefined8 *)(in_RDI + 0xad8) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/theme/highlighting/gdscript/node_path_color";
  local_70 = 0;
  local_60 = 0x37;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  uVar10 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0xae0) = uVar10;
  *(undefined8 *)(in_RDI + 0xae8) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/theme/highlighting/comment_color";
  local_70 = 0;
  local_60 = 0x2c;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  uVar10 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0xaf0) = uVar10;
  *(undefined8 *)(in_RDI + 0xaf8) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/theme/highlighting/doc_comment_color";
  local_70 = 0;
  local_60 = 0x30;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  uVar10 = Variant::operator_cast_to_Color((Variant *)local_58);
  *(undefined8 *)(in_RDI + 0xb00) = uVar10;
  *(undefined8 *)(in_RDI + 0xb08) = in_XMM1_Qa;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/caret/type";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x21;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar6 = Variant::operator_cast_to_int((Variant *)local_58);
  TextEdit::set_caret_type(uVar10,iVar6);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/caret/caret_blink";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x28;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  TextEdit::set_caret_blink_enabled(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/caret/caret_blink_interval";
  local_70 = 0;
  local_60 = 0x31;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  fVar9 = Variant::operator_cast_to_float((Variant *)local_58);
  TextEdit::set_caret_blink_interval(fVar9);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/caret/highlight_current_line";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x33;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  TextEdit::set_highlight_current_line(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/caret/highlight_all_occurrences";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x36;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  TextEdit::set_highlight_all_occurrences(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/gutters/show_line_numbers";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x30;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  CodeEdit::set_draw_line_numbers(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/gutters/line_numbers_zero_padded";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x37;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  CodeEdit::set_line_numbers_zero_padded(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/minimap/show_minimap";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x2b;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  TextEdit::set_draw_minimap(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/minimap/minimap_width";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x2c;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_int((Variant *)local_58);
  EditorScale::get_scale();
  TextEdit::set_minimap_width((int)uVar10);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/lines/code_folding";
  local_70 = 0;
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_60 = 0x29;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  CodeEdit::set_line_folding_enabled(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/lines/code_folding";
  local_70 = 0;
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_60 = 0x29;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  CodeEdit::set_draw_fold_gutter(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/lines/word_wrap";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x26;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar6 = Variant::operator_cast_to_int((Variant *)local_58);
  TextEdit::set_line_wrapping_mode(uVar10,iVar6);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/lines/autowrap_mode";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x2a;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar6 = Variant::operator_cast_to_int((Variant *)local_58);
  TextEdit::set_autowrap_mode(uVar10,iVar6);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/whitespace/draw_tabs";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x2b;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  TextEdit::set_draw_tabs(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/whitespace/draw_spaces";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x2d;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  TextEdit::set_draw_spaces(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  pSVar1 = *(StringName **)(in_RDI + 0xa10);
  local_70 = 0;
  local_68 = "text_editor/appearance/whitespace/line_spacing";
  local_60 = 0x2e;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_int((Variant *)local_58);
  StringName::StringName((StringName *)&local_68,"line_spacing",false);
  Control::add_theme_constant_override(pSVar1,(int)(StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/behavior/general/empty_selection_clipboard";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x36;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  TextEdit::set_empty_selection_clipboard_enabled(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/behavior/navigation/scroll_past_end_of_file";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x37;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  TextEdit::set_scroll_past_end_of_file_enabled(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/behavior/navigation/smooth_scrolling";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x30;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  TextEdit::set_smooth_scroll_enabled(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/behavior/navigation/v_scroll_speed";
  local_70 = 0;
  local_60 = 0x2e;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  fVar9 = Variant::operator_cast_to_float((Variant *)local_58);
  TextEdit::set_v_scroll_speed(fVar9);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/behavior/navigation/drag_and_drop_selection";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x37;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  TextEdit::set_drag_and_drop_selection_enabled(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/behavior/navigation/use_default_word_separators";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x3b;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  TextEdit::set_use_default_word_separators(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/behavior/navigation/use_custom_word_separators";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x3a;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  TextEdit::set_use_custom_word_separators(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/behavior/navigation/custom_word_separators";
  pSVar2 = *(String **)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x36;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_68);
  TextEdit::set_custom_word_separators(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/behavior/indent/type";
  local_70 = 0;
  local_60 = 0x20;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
  set_indent_using_spaces(in_RDI,bVar3);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/behavior/indent/size";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x20;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_int((Variant *)local_58);
  CodeEdit::set_indent_size((int)uVar10);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/behavior/indent/auto_indent";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x27;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  CodeEdit::set_auto_indent_enabled(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/behavior/indent/indent_wrapped_lines";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x30;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  TextEdit::set_indent_wrapped_lines(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/completion/auto_brace_complete";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x2a;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  CodeEdit::set_auto_brace_completion_enabled(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/completion/put_callhint_tooltip_below_current_line";
  uVar10 = *(undefined8 *)(in_RDI + 0xa10);
  local_70 = 0;
  local_60 = 0x3e;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  CodeEdit::set_code_hint_draw_below(SUB81(uVar10,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/completion/code_complete_enabled";
  local_70 = 0;
  local_60 = 0x2c;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  CVar4 = (CodeTextEditor)Variant::operator_cast_to_bool((Variant *)local_58);
  in_RDI[0xa78] = CVar4;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/completion/code_complete_delay";
  local_70 = 0;
  local_60 = 0x2a;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  dVar11 = Variant::operator_cast_to_double((Variant *)local_58);
  Timer::set_wait_time(dVar11);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/completion/idle_parse_delay";
  local_70 = 0;
  local_60 = 0x27;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  fVar9 = Variant::operator_cast_to_float((Variant *)local_58);
  *(float *)(in_RDI + 0xa70) = fVar9;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/completion/idle_parse_delay_with_errors_found";
  local_70 = 0;
  local_60 = 0x39;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  fVar9 = Variant::operator_cast_to_float((Variant *)local_58);
  *(float *)(in_RDI + 0xa74) = fVar9;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "text_editor/appearance/guidelines/show_line_length_guidelines";
  local_70 = 0;
  local_60 = 0x3d;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  uVar8 = (uint)(StrRange *)&local_70;
  if (bVar3) {
    Array::Array((Array *)&local_70);
    local_58[0] = 0;
    local_58[1] = 0;
    local_68 = (char *)0x0;
    local_50 = (undefined1  [16])0x0;
    Array::set_typed(uVar8,(StringName *)0x2,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_68 = (char *)0x0;
    String::parse_latin1
              ((String *)&local_68,
               "text_editor/appearance/guidelines/line_length_guideline_hard_column");
    _EDITOR_GET((String *)local_58);
    Array::push_back((Variant *)&local_70);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    pVVar7 = (Variant *)Array::operator[](uVar8);
    local_68 = (char *)0x0;
    String::parse_latin1
              ((String *)&local_68,
               "text_editor/appearance/guidelines/line_length_guideline_soft_column");
    _EDITOR_GET((String *)local_58);
    cVar5 = Variant::operator!=((Variant *)local_58,pVVar7);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (cVar5 != '\0') {
      local_68 = (char *)0x0;
      String::parse_latin1
                ((String *)&local_68,
                 "text_editor/appearance/guidelines/line_length_guideline_soft_column");
      _EDITOR_GET((String *)local_58);
      Array::push_back((Variant *)&local_70);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    uVar10 = *(undefined8 *)(in_RDI + 0xa10);
    Array::Array((Array *)&local_68,(Array *)&local_70);
    CodeEdit::set_line_length_guidelines(uVar10,(StringName *)&local_68);
    Array::~Array((Array *)&local_68);
    Array::~Array((Array *)&local_70);
  }
  else {
    uVar10 = *(undefined8 *)(in_RDI + 0xa10);
    Array::Array((Array *)&local_70);
    local_58[0] = 0;
    local_58[1] = 0;
    local_68 = (char *)0x0;
    local_50 = (undefined1  [16])0x0;
    Array::set_typed(uVar8,(StringName *)0x2,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CodeEdit::set_line_length_guidelines(uVar10,(StrRange *)&local_70);
    Array::~Array((Array *)&local_70);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    set_zoom_factor(in_RDI,*(float *)(in_RDI + 0xa8c));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindReplaceBar::set_error(String const&) */

void __thiscall FindReplaceBar::set_error(FindReplaceBar *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00104027;
      LOCK();
      lVar4 = *plVar1;
      bVar5 = lVar2 == lVar4;
      if (bVar5) {
        *plVar1 = lVar2 + 1;
        lVar4 = lVar2;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar4 != -1) {
      local_80 = *(undefined8 *)param_1;
    }
  }
LAB_00104027:
  if ((set_error(String_const&)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&set_error(String_const&)::{lambda()#1}::operator()()::sname),
     iVar3 != 0)) {
    _scs_create((char *)&set_error(String_const&)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &set_error(String_const&)::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&set_error(String_const&)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,(String *)&local_80);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&set_error(String_const&)::{lambda()#1}::operator()()::sname,local_78,1);
  if (Variant::needs_deinit[(int)local_50] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GotoLinePopup::popup_find_line(CodeTextEditor*) */

void __thiscall GotoLinePopup::popup_find_line(GotoLinePopup *this,CodeTextEditor *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  float fVar4;
  double dVar5;
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  Vector2i local_58 [4];
  undefined4 uStack_54;
  Vector2i local_50 [8];
  undefined1 local_48 [16];
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(CodeTextEditor **)(this + 0xdc0) = param_1;
  CodeTextEditor::get_navigation_state();
  if (Variant::needs_deinit[*(int *)(this + 0xda0)] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)(this + 0xda0) = local_48._0_4_;
  *(undefined8 *)(this + 0xda8) = local_48._8_8_;
  *(undefined8 *)(this + 0xdb0) = uStack_38;
  TextEdit::get_caret_line((int)*(undefined8 *)(*(long *)(this + 0xdc0) + 0xa10));
  uVar3 = *(undefined8 *)(this + 0xdb8);
  itos((long)local_68);
  LineEdit::set_text(uVar3,local_68);
  CowData<char32_t>::_unref(local_68);
  if (*(char *)(*(long *)(this + 0xdc0) + 0xaa0) == '\0') {
    *(undefined1 *)(*(long *)(this + 0xdc0) + 0xaa0) = 1;
  }
  local_48 = Control::get_global_rect();
  _local_58 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_48);
  uVar1 = uStack_54;
  uVar3 = Vector2i::operator/(local_50,2);
  local_48._0_8_ = uVar3;
  iVar2 = Vector2i::operator+(local_58,(Vector2i *)local_48);
  fVar4 = (float)Window::get_contents_minimum_size();
  local_60 = 0;
  dVar5 = (double)fVar4 * __LC100;
  local_48._8_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
  local_48._0_8_ = CONCAT44(uVar1,(int)((double)iVar2 - dVar5));
  Window::popup_on_parent(this);
  Window::reset_size();
  Control::grab_focus();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindReplaceBar::_update_matches_display() */

void __thiscall FindReplaceBar::_update_matches_display(FindReplaceBar *this)

{
  uint uVar1;
  undefined8 uVar2;
  StringName *pSVar3;
  String *pSVar4;
  int iVar5;
  StrRange *this_00;
  CowData<char32_t> *this_01;
  StrRange *this_02;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  if (((local_68 == (char *)0x0) || (*(uint *)(local_68 + -8) < 2)) ||
     (*(int *)(this + 0xaa4) == -1)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CanvasItem::hide();
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CanvasItem::show();
    pSVar3 = *(StringName **)(this + 0xa20);
    if (*(int *)(this + 0xaa4) < 1) {
      if ((_update_matches_display()::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_update_matches_display()::{lambda()#2}::operator()()::sname)
         , iVar5 != 0)) {
        _scs_create((char *)&_update_matches_display()::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_matches_display()::{lambda()#2}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_matches_display()::{lambda()#2}::operator()()::sname);
      }
      local_58 = Control::get_theme_color
                           ((StringName *)this,
                            (StringName *)
                            &_update_matches_display()::{lambda()#2}::operator()()::sname);
    }
    else {
      if ((_update_matches_display()::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_update_matches_display()::{lambda()#1}::operator()()::sname)
         , iVar5 != 0)) {
        _scs_create((char *)&_update_matches_display()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_matches_display()::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_matches_display()::{lambda()#1}::operator()()::sname);
      }
      local_58 = Control::get_theme_color
                           ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xb0));
    }
    Control::add_theme_color_override(pSVar3,(Color *)(SceneStringNames::singleton + 0xb0));
    if (*(int *)(this + 0xaa4) == 0) {
      this_00 = (StrRange *)&local_70;
      pSVar4 = *(String **)(this + 0xa20);
      this_02 = (StrRange *)&local_78;
      local_68 = "";
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1(this_00);
      local_68 = "No match";
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1(this_02);
      TTR((String *)&local_68,(String *)this_02);
      Label::set_text(pSVar4);
      this_01 = (CowData<char32_t> *)&local_68;
    }
    else {
      pSVar4 = *(String **)(this + 0xa20);
      iVar5 = *(int *)(this + 0xaa8);
      if (iVar5 == -1) {
        local_78 = 0;
        String::parse_latin1((String *)&local_78,"");
        uVar1 = *(uint *)(this + 0xaa4);
        local_80 = 0;
        String::parse_latin1((String *)&local_80,"%d matches");
        local_88 = 0;
        String::parse_latin1((String *)&local_88,"%d match");
        TTRN((String *)&local_70,(String *)&local_88,(int)(String *)&local_80,(String *)(ulong)uVar1
            );
        vformat<int>((String *)&local_68,(int)(String *)&local_70);
      }
      else {
        local_68 = "";
        local_78 = 0;
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_78);
        uVar1 = *(uint *)(this + 0xaa4);
        local_80 = 0;
        local_68 = "%d of %d matches";
        local_60 = 0x10;
        String::parse_latin1((StrRange *)&local_80);
        local_68 = "%d of %d match";
        local_88 = 0;
        local_60 = 0xe;
        String::parse_latin1((StrRange *)&local_88);
        TTRN((String *)&local_70,(String *)&local_88,(int)(StrRange *)&local_80,
             (String *)(ulong)uVar1);
        vformat<int,int>((String *)&local_68,(int)(String *)&local_70,iVar5);
      }
      this_02 = (StrRange *)&local_80;
      this_00 = (StrRange *)&local_78;
      Label::set_text(pSVar4);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      this_01 = (CowData<char32_t> *)&local_88;
    }
    CowData<char32_t>::_unref(this_01);
    CowData<char32_t>::_unref((CowData<char32_t> *)this_02);
    CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
  }
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa28),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa30),0));
  uVar2 = *(undefined8 *)(this + 0xa58);
  LineEdit::get_text();
  BaseButton::set_disabled(SUB81(uVar2,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  uVar2 = *(undefined8 *)(this + 0xa60);
  LineEdit::get_text();
  BaseButton::set_disabled(SUB81(uVar2,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::trim_final_newlines() */

void __thiscall CodeTextEditor::trim_final_newlines(CodeTextEditor *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = TextEdit::get_line_count();
  iVar4 = iVar4 + -1;
  TextEdit::get_line((int)(CowData<char32_t> *)&local_40);
  iVar5 = iVar4;
  while ((local_40 == 0 || (*(uint *)(local_40 + -8) < 2))) {
    do {
      while( true ) {
        if (iVar5 < 0) goto LAB_00104910;
        iVar5 = iVar5 + -1;
        TextEdit::get_line((int)&local_38);
        lVar3 = local_38;
        lVar2 = local_40;
        if (local_40 == local_38) break;
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
        local_40 = local_38;
        if ((local_38 != 0) && (1 < *(uint *)(local_38 + -8))) goto LAB_00104910;
      }
    } while (local_40 == 0);
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
LAB_00104910:
  if (iVar5 + 1 < iVar4) {
    TextEdit::begin_complex_operation();
    TextEdit::remove_text((int)*(undefined8 *)(this + 0xa10),iVar5 + 1,0,iVar4);
    TextEdit::merge_overlapping_carets();
    TextEdit::end_complex_operation();
    CanvasItem::queue_redraw();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FindReplaceBar::_get_search_from(int&, int&, FindReplaceBar::SearchMode) */

void __thiscall
FindReplaceBar::_get_search_from(FindReplaceBar *this,int *param_1,int *param_2,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = TextEdit::has_selection((int)*(undefined8 *)(this + 0xa90));
  if (cVar3 != '\0') {
    cVar3 = BaseButton::is_pressed();
    if (cVar3 == '\0') {
      if (param_4 == 1) {
        iVar4 = TextEdit::get_selection_to_line((int)*(undefined8 *)(this + 0xa90));
        uVar1 = *(undefined8 *)(this + 0xa90);
        *param_1 = iVar4;
        iVar4 = TextEdit::get_selection_to_column((int)uVar1);
        *param_2 = iVar4;
      }
      else {
        iVar4 = TextEdit::get_selection_from_line((int)*(undefined8 *)(this + 0xa90));
        uVar1 = *(undefined8 *)(this + 0xa90);
        *param_1 = iVar4;
        iVar4 = TextEdit::get_selection_from_column((int)uVar1);
        *param_2 = iVar4;
      }
      goto LAB_00104a49;
    }
  }
  iVar4 = TextEdit::get_caret_line((int)*(undefined8 *)(this + 0xa90));
  uVar1 = *(undefined8 *)(this + 0xa90);
  *param_1 = iVar4;
  iVar4 = TextEdit::get_caret_column((int)uVar1);
  *param_2 = iVar4;
  if (((param_4 == 2) && (*param_1 == *(int *)(this + 0xa9c))) &&
     (iVar5 = *(int *)(this + 0xaa0), iVar5 <= iVar4)) {
    LineEdit::get_text();
    if ((local_38 != 0) && (iVar2 = (int)*(undefined8 *)(local_38 + -8), iVar2 != 0)) {
      iVar5 = iVar5 + -1 + iVar2;
    }
    if (iVar5 < iVar4) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      *param_2 = *(int *)(this + 0xaa0);
    }
  }
LAB_00104a49:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::insert_final_newline() */

void __thiscall CodeTextEditor::insert_final_newline(CodeTextEditor *this)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = TextEdit::get_line_count();
  TextEdit::get_line((int)&local_58);
  if (local_58 != 0) {
    if (1 < *(int *)(local_58 + -8)) {
      cVar4 = String::ends_with((char *)&local_58);
      if (cVar4 == '\0') {
        pSVar2 = *(String **)(this + 0xa10);
        if (local_58 == 0) {
          cVar4 = false;
        }
        else {
          cVar4 = (char)*(undefined8 *)(local_58 + -8) + -1 +
                  ((int)*(undefined8 *)(local_58 + -8) == 0);
        }
        local_48 = &_LC108;
        local_50 = 0;
        local_40 = 1;
        String::parse_latin1((StrRange *)&local_50);
        TextEdit::insert_text(pSVar2,(int)(StrRange *)&local_50,iVar5 + -1,(bool)cVar4,false);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      }
      if (local_58 == 0) goto LAB_00104b9d;
    }
    lVar3 = local_58;
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
LAB_00104b9d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* FindReplaceBar::_update_results_count() */

void __thiscall FindReplaceBar::_update_results_count(FindReplaceBar *this)

{
  code *pcVar1;
  FindReplaceBar FVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  bool bVar10;
  long in_FS_OFFSET;
  bool bVar11;
  FindReplaceBar local_5d;
  int local_58;
  int local_54;
  int *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_search_from(this,&local_58,&local_54);
  if ((((*(int *)(this + 0xa9c) == local_58) && (*(int *)(this + 0xaa0) == local_54)) &&
      (cVar3 = BaseButton::is_pressed(), cVar3 == '\0')) &&
     (FVar2 = (FindReplaceBar)TextEdit::has_selection((int)*(undefined8 *)(this + 0xa90)),
     FVar2 != (FindReplaceBar)0x0)) {
    local_5d = this[0xaae];
    if (((this[0xaae] == (FindReplaceBar)0x0) && (local_5d = FVar2, *(int *)(this + 0xa9c) != -1))
       && (iVar5 = *(int *)(this + 0xaa8), 0 < iVar5)) {
      iVar4 = *(int *)(this + 0xaa4);
      if (((byte)this[0xa98] & 4) == 0) {
        iVar5 = iVar5 + 1;
        *(int *)(this + 0xaa8) = iVar5;
        if (iVar5 <= iVar4) goto LAB_00104cfc;
      }
      else {
        iVar5 = iVar5 + -1;
        *(int *)(this + 0xaa8) = iVar5;
        if (iVar5 <= iVar4) {
          if (iVar5 == 0) {
            *(int *)(this + 0xaa8) = iVar4;
          }
          goto LAB_00104cfc;
        }
      }
      *(int *)(this + 0xaa8) = iVar5 - iVar4;
      goto LAB_00104cfc;
    }
  }
  else {
    local_5d = (FindReplaceBar)0x0;
  }
  LineEdit::get_text();
  if ((local_50 != (int *)0x0) && (1 < (uint)local_50[-2])) {
    iVar5 = 0;
    *(undefined8 *)(this + 0xaa4) = 0;
    this[0xaae] = (FindReplaceBar)((byte)local_5d ^ 1);
LAB_00104de1:
    iVar4 = TextEdit::get_line_count();
    if (iVar5 < iVar4) {
      TextEdit::get_line((int)(String *)&local_48);
      if (local_50 == (int *)0x0) {
        lVar9 = 0;
        lVar7 = -1;
        goto LAB_00105095;
      }
      lVar9 = *(long *)(local_50 + -2);
      if (lVar9 != 0) {
        if (lVar9 < 1) {
          lVar7 = 0;
          goto LAB_00105095;
        }
        iVar4 = *local_50;
        bVar11 = false;
        if (((iVar4 != 0x5f) &&
            (bVar11 = (0xfc000000fe007fffU >> ((ulong)(iVar4 - 0x21U) & 0x3f) & 1) != 0,
            0x3f < iVar4 - 0x21U)) && (bVar11 = true, 3 < iVar4 - 0x7bU)) {
          bVar11 = iVar4 == 0x20 || iVar4 == 9;
        }
        if ((int)lVar9 != 0) {
          iVar4 = (int)lVar9 + -2;
          lVar7 = (long)iVar4;
          if (lVar7 == lVar9) {
            iVar4 = 0;
            goto LAB_00105271;
          }
          if (lVar9 <= lVar7 || iVar4 < 0) goto LAB_00105095;
          iVar4 = local_50[lVar7];
          bVar10 = false;
          if (iVar4 != 0x5f) {
            if (iVar4 - 0x21U < 0x40) {
              bVar10 = true;
              if ((0xfc000000fe007fffU >> ((ulong)(iVar4 - 0x21U) & 0x3f) & 1) == 0)
              goto LAB_00105271;
            }
            else if (iVar4 - 0x7bU < 4) {
              bVar10 = true;
            }
            else {
LAB_00105271:
              bVar10 = iVar4 == 9 || iVar4 == 0x20;
            }
          }
LAB_00104eb0:
          cVar3 = BaseButton::is_pressed();
          iVar4 = (int)(CowData<char32_t> *)&local_50;
          if (cVar3 == '\0') {
            iVar4 = String::findn((String *)&local_48,iVar4);
          }
          else {
            iVar4 = String::find((String *)&local_48,iVar4);
          }
          if (iVar4 == -1) goto LAB_00105122;
          cVar3 = BaseButton::is_pressed();
          if (cVar3 != '\0') {
            if ((!bVar11) && (0 < iVar4)) {
              lVar7 = (long)(iVar4 + -1);
              if (local_48 == 0) {
                if (iVar4 + -1 != 0) {
                  lVar9 = 0;
                  goto LAB_00105095;
                }
                goto LAB_00104eb0;
              }
              lVar9 = *(long *)(local_48 + -8);
              if (lVar7 == lVar9) goto LAB_00104eb0;
              if (lVar9 <= lVar7) goto LAB_00105095;
              iVar6 = *(int *)(local_48 + lVar7 * 4);
              if (iVar6 == 0x5f) goto LAB_00104eb0;
              if (iVar6 - 0x21U < 0x40) {
                if ((0xfc000000fe007fffU >> ((ulong)(iVar6 - 0x21U) & 0x3f) & 1) != 0)
                goto LAB_00104f50;
                goto LAB_00104eb0;
              }
              if (((3 < iVar6 - 0x7bU) && (iVar6 != 9)) && (iVar6 != 0x20)) goto LAB_00104eb0;
            }
LAB_00104f50:
            if (bVar10) goto LAB_00104ff0;
            iVar6 = iVar4;
            if (local_50 != (int *)0x0) {
              iVar8 = (int)*(undefined8 *)(local_50 + -2);
              if (iVar8 == 0) {
                if (local_48 != 0) {
                  lVar9 = *(long *)(local_48 + -8);
                  if ((int)lVar9 == 0) {
joined_r0x001051d2:
                    if (-1 < iVar6) goto LAB_00104ff0;
                  }
                  else if ((int)lVar9 + -1 <= iVar4) goto LAB_00104ff0;
joined_r0x0010516d:
                  if (iVar8 == 0) {
                    if (iVar4 != lVar9) goto LAB_0010517f;
                    goto LAB_00104eb0;
                  }
                  iVar8 = iVar4 + -1 + iVar8;
                  lVar7 = (long)iVar8;
                  if (lVar7 == lVar9) goto LAB_00104eb0;
LAB_00104fb4:
                  if ((lVar9 <= lVar7) || (lVar7 < 0)) goto LAB_00105095;
                  iVar6 = *(int *)(local_48 + (long)iVar8 * 4);
                  if (iVar6 == 0x5f) goto LAB_00104eb0;
                  if (iVar6 - 0x21U < 0x40) {
                    if ((0xfc000000fe007fffU >> ((ulong)(iVar6 - 0x21U) & 0x3f) & 1) != 0)
                    goto LAB_00104ff0;
                    goto LAB_00104eb0;
                  }
                  if (((3 < iVar6 - 0x7bU) && (iVar6 != 9)) && (iVar6 != 0x20)) goto LAB_00104eb0;
                  goto LAB_00104ff0;
                }
                if (-1 < iVar4) {
                  iVar6 = *(int *)(this + 0xa9c);
                  iVar8 = *(int *)(this + 0xaa4) + 1;
                  *(int *)(this + 0xaa4) = iVar8;
joined_r0x00105371:
                  if (iVar5 <= iVar6) {
                    iVar6 = *(int *)(this + 0xaa0);
                    goto joined_r0x00105331;
                  }
                  goto LAB_00104eb0;
                }
              }
              else {
                iVar6 = iVar4 + -1 + iVar8;
                if (local_48 != 0) {
                  lVar9 = *(long *)(local_48 + -8);
                  if ((int)lVar9 == 0) goto joined_r0x001051d2;
                  if (iVar6 < (int)lVar9 + -1) goto joined_r0x0010516d;
                  goto LAB_00104ff0;
                }
                if (-1 < iVar6) {
                  iVar6 = *(int *)(this + 0xa9c);
                  iVar8 = *(int *)(this + 0xaa4) + 1;
                  *(int *)(this + 0xaa4) = iVar8;
                  goto joined_r0x00105371;
                }
              }
LAB_001052fa:
              lVar7 = (long)iVar6;
              lVar9 = 0;
              goto LAB_00105095;
            }
            if (local_48 == 0) {
              if (iVar4 < 0) goto LAB_001052fa;
              iVar8 = *(int *)(this + 0xaa4) + 1;
              *(int *)(this + 0xaa4) = iVar8;
              if (iVar5 <= *(int *)(this + 0xa9c)) {
                iVar6 = *(int *)(this + 0xaa0);
                goto joined_r0x00105331;
              }
              goto LAB_00104eb0;
            }
            lVar9 = *(long *)(local_48 + -8);
            if ((int)lVar9 == 0) {
              if (iVar4 < 0) {
LAB_0010517f:
                lVar7 = (long)iVar4;
                iVar8 = iVar4;
                goto LAB_00104fb4;
              }
              goto LAB_00104ff0;
            }
            if (iVar4 < (int)lVar9 + -1) {
              if (iVar4 != lVar9) goto LAB_0010517f;
              goto LAB_00104eb0;
            }
          }
LAB_00104ff0:
          iVar8 = *(int *)(this + 0xaa4) + 1;
          *(int *)(this + 0xaa4) = iVar8;
          if (iVar5 <= *(int *)(this + 0xa9c)) {
            iVar6 = *(int *)(this + 0xaa0);
joined_r0x00105331:
            if (iVar4 <= iVar6) {
              *(int *)(this + 0xaa8) = iVar8;
            }
          }
          goto LAB_00104eb0;
        }
      }
      lVar7 = -1;
LAB_00105095:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (local_5d == (FindReplaceBar)0x0) {
      if (local_58 == *(int *)(this + 0xa9c)) {
        if (((*(int *)(this + 0xaa0) != local_54) &&
            (iVar5 = *(int *)(this + 0xaa8) + -1, *(int *)(this + 0xaa8) = iVar5, iVar5 == 0)) &&
           (*(int *)(this + 0xaa0) < local_54)) goto LAB_001053b1;
      }
      else {
        iVar5 = *(int *)(this + 0xaa8) + -1;
        *(int *)(this + 0xaa8) = iVar5;
        if ((iVar5 == 0) && (*(int *)(this + 0xa9c) < local_58)) {
LAB_001053b1:
          *(undefined4 *)(this + 0xaa8) = *(undefined4 *)(this + 0xaa4);
        }
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00104cfc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00105122:
  iVar5 = iVar5 + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  goto LAB_00104de1;
}



/* FindReplaceBar::_search(unsigned int, int, int) */

bool FindReplaceBar::_search(uint param_1,int param_2,int param_3)

{
  String *pSVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 in_register_0000003c;
  FindReplaceBar *this;
  int iVar6;
  long in_FS_OFFSET;
  int iVar7;
  long local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  this = (FindReplaceBar *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xaad] == (FindReplaceBar)0x0) {
    TextEdit::remove_secondary_carets();
  }
  LineEdit::get_text();
  uVar5 = TextEdit::search(*(String **)(this + 0xa90),(uint)(CowData<char32_t> *)&local_68,param_2,
                           param_3);
  iVar4 = (int)uVar5;
  iVar7 = (int)((ulong)uVar5 >> 0x20);
  if (iVar4 == -1) {
    *(undefined4 *)(this + 0xaa4) = 0;
    pSVar1 = *(String **)(this + 0xa90);
    local_58 = &_LC15;
    *(undefined8 *)(this + 0xa9c) = 0xffffffffffffffff;
    local_60 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    TextEdit::set_search_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    TextEdit::set_search_flags((uint)*(undefined8 *)(this + 0xa90));
  }
  else {
    if ((this[0xaad] == (FindReplaceBar)0x0) && (cVar3 = BaseButton::is_pressed(), cVar3 == '\0')) {
      CodeEdit::unfold_line((int)*(undefined8 *)(this + 0xa90));
      iVar6 = iVar4;
      if ((local_68 != 0) &&
         (iVar2 = (int)*(undefined8 *)(local_68 + -8), iVar6 = iVar4 + -1 + iVar2, iVar2 == 0)) {
        iVar6 = iVar4;
      }
      TextEdit::select((int)*(undefined8 *)(this + 0xa90),iVar7,iVar4,iVar7,iVar6);
      TextEdit::center_viewport_to_caret((int)*(undefined8 *)(this + 0xa90));
      pSVar1 = *(String **)(this + 0xa90);
      local_60 = 0;
      local_58 = &_LC15;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_60);
      CodeEdit::set_code_hint(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CodeEdit::cancel_code_completion();
      this[0xaaf] = (FindReplaceBar)0x1;
    }
    TextEdit::set_search_text(*(String **)(this + 0xa90));
    TextEdit::set_search_flags((uint)*(undefined8 *)(this + 0xa90));
    *(ulong *)(this + 0xa9c) = CONCAT44(iVar4,iVar7);
    _update_results_count(this);
  }
  _update_matches_display(this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4 != -1;
}



/* FindReplaceBar::search_current() */

void __thiscall FindReplaceBar::search_current(FindReplaceBar *this)

{
  long in_FS_OFFSET;
  int local_18;
  undefined1 local_14 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  _update_flags(this,false);
  _get_search_from(this,&local_18,local_14,0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    _search((uint)this,*(int *)(this + 0xa98),local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindReplaceBar::_search_options_changed(bool) */

void FindReplaceBar::_search_options_changed(bool param_1)

{
  undefined7 in_register_00000039;
  
  *(undefined8 *)(CONCAT71(in_register_00000039,param_1) + 0xaa4) = 0xffffffffffffffff;
  *(undefined1 *)(CONCAT71(in_register_00000039,param_1) + 0xaae) = 1;
  search_current((FindReplaceBar *)CONCAT71(in_register_00000039,param_1));
  return;
}



/* FindReplaceBar::_editor_text_changed() */

void __thiscall FindReplaceBar::_editor_text_changed(FindReplaceBar *this)

{
  char cVar1;
  
  *(undefined8 *)(this + 0xaa4) = 0xffffffffffffffff;
  this[0xaae] = (FindReplaceBar)0x1;
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 == '\0') {
    return;
  }
  this[0xaad] = (FindReplaceBar)0x1;
  search_current(this);
  this[0xaad] = (FindReplaceBar)0x0;
  return;
}



/* FindReplaceBar::_search_text_changed(String const&) */

void FindReplaceBar::_search_text_changed(String *param_1)

{
  *(undefined8 *)(param_1 + 0xaa4) = 0xffffffffffffffff;
  param_1[0xaae] = (String)0x1;
  search_current((FindReplaceBar *)param_1);
  return;
}



/* FindReplaceBar::_replace() */

void __thiscall FindReplaceBar::_replace(FindReplaceBar *this)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long in_FS_OFFSET;
  int local_64;
  int local_60;
  int local_5c;
  int local_54;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TextEdit::begin_complex_operation();
  TextEdit::remove_secondary_carets();
  cVar3 = TextEdit::has_selection((int)*(undefined8 *)(this + 0xa90));
  if (cVar3 == '\0') {
    LineEdit::get_text();
    LineEdit::get_text();
    if ((local_48 == 0) || (local_60 = (int)*(undefined8 *)(local_48 + -8), local_60 == 0)) {
      iVar5 = 0;
      iVar6 = 0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      local_60 = 0;
      local_64 = 0;
      local_5c = 0;
    }
    else {
      local_64 = 0;
      iVar5 = 0;
      iVar6 = 0;
      local_5c = 0;
LAB_00105976:
      local_60 = local_60 + -1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      if ((cVar3 != '\0') && (cVar4 = BaseButton::is_pressed(), cVar4 != '\0')) goto LAB_001059a1;
    }
  }
  else {
    iVar5 = TextEdit::get_selection_from_column((int)*(undefined8 *)(this + 0xa90));
    iVar6 = TextEdit::get_selection_from_line((int)*(undefined8 *)(this + 0xa90));
    local_5c = TextEdit::get_selection_to_column((int)*(undefined8 *)(this + 0xa90));
    local_64 = TextEdit::get_selection_to_line((int)*(undefined8 *)(this + 0xa90));
    LineEdit::get_text();
    LineEdit::get_text();
    if ((local_48 != 0) && (local_60 = (int)*(undefined8 *)(local_48 + -8), local_60 != 0))
    goto LAB_00105976;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    local_60 = 0;
    cVar4 = BaseButton::is_pressed();
    if (cVar4 == '\0') goto LAB_001058bb;
LAB_001059a1:
    TextEdit::set_caret_line((int)*(undefined8 *)(this + 0xa90),SUB41(iVar6,0),false,1,-1);
    TextEdit::set_caret_column((int)*(undefined8 *)(this + 0xa90),SUB41(iVar5,0),1);
  }
LAB_001058bb:
  _update_flags(this,false);
  _get_search_from(this,&local_54,&local_48,0);
  cVar4 = _search((uint)this,*(int *)(this + 0xa98),local_54);
  if (cVar4 == '\0') {
LAB_001058f6:
    TextEdit::end_complex_operation();
    this[0xaae] = (FindReplaceBar)0x1;
    *(undefined8 *)(this + 0xaa4) = 0xffffffffffffffff;
    if (cVar3 != '\0') goto LAB_00105a98;
  }
  else {
    CodeEdit::unfold_line((int)*(undefined8 *)(this + 0xa90));
    TextEdit::select((int)*(undefined8 *)(this + 0xa90),*(int *)(this + 0xa9c),
                     *(int *)(this + 0xaa0),*(int *)(this + 0xa9c),*(int *)(this + 0xaa0) + local_60
                    );
    iVar7 = (int)(CowData<char32_t> *)&local_50;
    if ((cVar3 == '\0') || (cVar4 = BaseButton::is_pressed(), cVar4 == '\0')) {
      TextEdit::insert_text_at_caret(*(String **)(this + 0xa90),iVar7);
      goto LAB_001058f6;
    }
    iVar1 = *(int *)(this + 0xa9c);
    bVar2 = iVar1 < iVar6;
    if (iVar1 == iVar6) {
      bVar2 = *(int *)(this + 0xaa0) < iVar5;
    }
    if (bVar2) {
LAB_00105a7c:
      TextEdit::end_complex_operation();
      this[0xaae] = (FindReplaceBar)0x1;
      *(undefined8 *)(this + 0xaa4) = 0xffffffffffffffff;
    }
    else {
      if (iVar1 != local_64) {
        if (iVar1 <= local_64) {
          TextEdit::insert_text_at_caret(*(String **)(this + 0xa90),iVar7);
        }
        goto LAB_00105a7c;
      }
      if (local_5c < *(int *)(this + 0xaa0) + local_60) goto LAB_00105a7c;
      TextEdit::insert_text_at_caret(*(String **)(this + 0xa90),iVar7);
      if (local_50 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (int)*(undefined8 *)(local_50 + -8);
        iVar7 = iVar7 + -1 + (uint)(iVar7 == 0);
      }
      local_5c = local_5c + (iVar7 - local_60);
      TextEdit::end_complex_operation();
      this[0xaae] = (FindReplaceBar)0x1;
      *(undefined8 *)(this + 0xaa4) = 0xffffffffffffffff;
    }
LAB_00105a98:
    cVar3 = BaseButton::is_pressed();
    if (cVar3 != '\0') {
      TextEdit::select((int)*(undefined8 *)(this + 0xa90),iVar6,iVar5,local_64,local_5c);
      goto LAB_0010592b;
    }
  }
  TextEdit::deselect((int)*(undefined8 *)(this + 0xa90));
LAB_0010592b:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GotoLinePopup::GotoLinePopup() */

void __thiscall GotoLinePopup::GotoLinePopup(GotoLinePopup *this)

{
  Vector2 *pVVar1;
  long *plVar2;
  code *pcVar3;
  BoxContainer *this_00;
  Label *this_01;
  LineEdit *this_02;
  int iVar4;
  long in_FS_OFFSET;
  float fVar5;
  undefined8 local_70;
  undefined8 local_68 [2];
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  PopupPanel::PopupPanel((PopupPanel *)this);
  local_58 = "";
  *(undefined ***)this = &PTR__initialize_classv_00120bc0;
  *(undefined4 *)(this + 0xda0) = 0;
  *(undefined1 (*) [16])(this + 0xda8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  local_68[0] = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = "Go to Line";
  local_70 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00120848;
  postinitialize_handler((Object *)this_00);
  fVar5 = (float)EditorScale::get_scale();
  Control::set_anchor_and_offset(0,_LC110 * fVar5,this_00,0,1);
  fVar5 = (float)EditorScale::get_scale();
  Control::set_anchor_and_offset(0,_LC110 * fVar5,this_00,1,1);
  EditorScale::get_scale();
  Control::set_anchor_and_offset(this_00,2,1);
  EditorScale::get_scale();
  Control::set_anchor_and_offset(this_00,3,1);
  Node::add_child(this,this_00,0,0);
  this_01 = (Label *)operator_new(0xad8,"");
  local_58 = (char *)0x0;
  Label::Label(this_01,(String *)&local_58);
  postinitialize_handler((Object *)this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  local_68[0] = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = "Line Number:";
  local_70 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  Label::set_text((String *)this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_00,this_01,0,0);
  this_02 = (LineEdit *)operator_new(0xbb0,"");
  local_58 = (char *)0x0;
  LineEdit::LineEdit(this_02,(String *)&local_58);
  postinitialize_handler((Object *)this_02);
  *(LineEdit **)(this + 0xdb8) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  pVVar1 = *(Vector2 **)(this + 0xdb8);
  fVar5 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar5 * _UNK_00121eac,fVar5 * _LC48);
  Control::set_custom_minimum_size(pVVar1);
  LineEdit::set_select_all_on_focus(SUB81(*(undefined8 *)(this + 0xdb8),0));
  plVar2 = *(long **)(this + 0xdb8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<GotoLinePopup>
            ((GotoLinePopup *)&local_58,(char *)this,(_func_void *)"&GotoLinePopup::_goto_line");
  iVar4 = (int)(StrRange *)local_68;
  Callable::unbind(iVar4);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x270,(StrRange *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xdb8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<GotoLinePopup>
            ((GotoLinePopup *)&local_58,(char *)this,(_func_void *)"&GotoLinePopup::_submit");
  Callable::unbind(iVar4);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x278,(StrRange *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this_00,*(undefined8 *)(this + 0xdb8),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindReplaceBar::_show_search(bool, bool) [clone .part.0] */

void FindReplaceBar::_show_search(bool param_1,bool param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined7 in_register_00000039;
  FindReplaceBar *this;
  long in_FS_OFFSET;
  Variant *local_58 [2];
  int local_48 [6];
  long local_30;
  
  this = (FindReplaceBar *)CONCAT71(in_register_00000039,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = TextEdit::has_selection((int)*(undefined8 *)(this + 0xa90));
  if (cVar2 == '\0') {
LAB_0010606a:
    cVar2 = '\0';
LAB_0010606d:
    param_2 = (bool)cVar2;
    LineEdit::deselect();
    create_custom_callable_function_pointer<Control>
              ((Control *)local_58,*(char **)(this + 0xa18),(_func_void *)"&Control::grab_focus");
    Variant::Variant((Variant *)local_48,0);
    Callable::call_deferredp(local_58,0);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)local_58);
    if (param_2 == false) goto LAB_001060de;
    param_2 = false;
  }
  else {
    iVar3 = TextEdit::get_selection_from_line((int)*(undefined8 *)(this + 0xa90));
    iVar4 = TextEdit::get_selection_to_line((int)*(undefined8 *)(this + 0xa90));
    if (iVar3 != iVar4) goto LAB_0010606a;
    if (!param_2) goto LAB_0010606d;
    LineEdit::deselect();
    create_custom_callable_function_pointer<Control>
              ((Control *)local_58,*(char **)(this + 0xa50),(_func_void *)"&Control::grab_focus");
    Variant::Variant((Variant *)local_48,0);
    Callable::call_deferredp(local_58,0);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)local_58);
  }
  uVar1 = *(undefined8 *)(this + 0xa18);
  TextEdit::get_selected_text((int)local_58);
  LineEdit::set_text(uVar1,local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = TextEdit::get_selection_from_line((int)*(undefined8 *)(this + 0xa90));
  *(undefined4 *)(this + 0xa9c) = uVar5;
  uVar5 = TextEdit::get_selection_from_column((int)*(undefined8 *)(this + 0xa90));
  *(undefined4 *)(this + 0xaa0) = uVar5;
LAB_001060de:
  LineEdit::get_text();
  if ((local_58[0] == (Variant *)0x0) ||
     (uVar1 = *(undefined8 *)(local_58[0] + -8), (int)uVar1 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    if ((int)uVar1 != 1) {
      if (param_2 == false) {
        LineEdit::select_all();
        iVar3 = (int)*(undefined8 *)(this + 0xa18);
      }
      else {
        LineEdit::select_all();
        iVar3 = (int)*(undefined8 *)(this + 0xa50);
      }
      LineEdit::get_text();
      LineEdit::set_caret_column(iVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      this[0xaad] = (FindReplaceBar)0x1;
      LineEdit::get_text();
      this[0xaae] = (FindReplaceBar)0x1;
      *(undefined8 *)(this + 0xaa4) = 0xffffffffffffffff;
      search_current(this);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      this[0xaad] = (FindReplaceBar)0x0;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindReplaceBar::_show_search(bool, bool) */

void __thiscall FindReplaceBar::_show_search(FindReplaceBar *this,bool param_1,bool param_2)

{
  CanvasItem::show();
  if (param_2) {
    return;
  }
  _show_search(SUB81(this,0),param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FindReplaceBar::FindReplaceBar() */

void __thiscall FindReplaceBar::FindReplaceBar(FindReplaceBar *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  String *pSVar4;
  Vector2 *pVVar5;
  undefined8 uVar6;
  Button *pBVar7;
  BoxContainer *pBVar8;
  BoxContainer *this_00;
  BoxContainer *this_01;
  BoxContainer *pBVar9;
  LineEdit *pLVar10;
  Label *this_02;
  CheckBox *pCVar11;
  TextureButton *this_03;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  float local_48;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,false);
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  uVar6 = _LC16;
  uVar3 = __LC120;
  this[0xa0c] = (FindReplaceBar)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00120e28;
  *(undefined8 *)(this + 0xa90) = 0;
  *(undefined4 *)(this + 0xa98) = 0;
  *(undefined4 *)(this + 0xaac) = 0x10000;
  *(undefined8 *)(this + 0xa9c) = uVar3;
  *(undefined8 *)(this + 0xaa4) = uVar6;
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar7,(String *)&local_58);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa10) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa10),0,0);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa10),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa10),0);
  plVar1 = *(long **)(this + 0xa10);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindReplaceBar>
            ((FindReplaceBar *)&local_58,(char *)this,
             (_func_void *)"&FindReplaceBar::_toggle_replace_pressed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00120848;
  postinitialize_handler((Object *)pBVar8);
  *(BoxContainer **)(this + 0xa70) = pBVar8;
  Node::add_child(this,pBVar8,0,0);
  BoxContainer::set_alignment(*(undefined8 *)(this + 0xa70),1);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa70),3);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_00120848;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(this,pBVar8,0,0);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00120848;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,false);
  this_01[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_001204d0;
  postinitialize_handler((Object *)this_01);
  Node::add_child(pBVar8,this_01,0,0);
  BoxContainer::set_alignment(this_01,2);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,false);
  *(undefined ***)pBVar9 = &PTR__initialize_classv_001204d0;
  pBVar9[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar9);
  *(BoxContainer **)(this + 0xa78) = pBVar9;
  Node::add_child(pBVar8,pBVar9,0,0);
  BoxContainer::set_alignment(*(undefined8 *)(this + 0xa78),2);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_001204d0;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(this_00,pBVar8,0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,false);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_001204d0;
  postinitialize_handler((Object *)pBVar9);
  *(BoxContainer **)(this + 0xa80) = pBVar9;
  Node::add_child(this_00,pBVar9,0,0);
  pLVar10 = (LineEdit *)operator_new(0xbb0,"");
  local_58 = (char *)0x0;
  LineEdit::LineEdit(pLVar10,(String *)&local_58);
  postinitialize_handler((Object *)pLVar10);
  *(LineEdit **)(this + 0xa18) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  LineEdit::set_keep_editing_on_text_submit(SUB81(*(undefined8 *)(this + 0xa18),0));
  Node::add_child(*(undefined8 *)(this + 0xa70),*(undefined8 *)(this + 0xa18),0,0);
  local_58 = "";
  local_60 = 0;
  uVar3 = *(undefined8 *)(this + 0xa18);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Find";
  local_68 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  LineEdit::set_placeholder(uVar3,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xa18);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Find";
  local_68 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pVVar5 = *(Vector2 **)(this + 0xa18);
  local_48 = (float)EditorScale::get_scale();
  local_48 = local_48 * _LC48;
  local_44 = 0;
  Control::set_custom_minimum_size(pVVar5);
  plVar1 = *(long **)(this + 0xa18);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindReplaceBar,String_const&>
            ((FindReplaceBar *)&local_58,(char *)this,
             (_func_void_String_ptr *)"&FindReplaceBar::_search_text_changed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x270,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar1 = *(long **)(this + 0xa18);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindReplaceBar,String_const&>
            ((FindReplaceBar *)&local_58,(char *)this,
             (_func_void_String_ptr *)"&FindReplaceBar::_search_text_submitted");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x278,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this_02 = (Label *)operator_new(0xad8,"");
  local_58 = (char *)0x0;
  Label::Label(this_02,(String *)&local_58);
  postinitialize_handler((Object *)this_02);
  *(Label **)(this + 0xa20) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(this_01,*(undefined8 *)(this + 0xa20),0,0);
  CanvasItem::hide();
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar7,(String *)&local_58);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa28) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa28),0));
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xa28);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Previous Match";
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_01,*(undefined8 *)(this + 0xa28),0,0);
  Control::set_focus_mode(*(undefined8 *)(this + 0xa28),0);
  plVar1 = *(long **)(this + 0xa28);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindReplaceBar,bool>
            ((FindReplaceBar *)&local_58,(char *)this,(_func_bool *)"&FindReplaceBar::search_prev");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar7,(String *)&local_58);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa30) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa30),0));
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xa30);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Next Match";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_01,*(undefined8 *)(this + 0xa30),0,0);
  Control::set_focus_mode(*(undefined8 *)(this + 0xa30),0);
  plVar1 = *(long **)(this + 0xa30);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindReplaceBar,bool>
            ((FindReplaceBar *)&local_58,(char *)this,(_func_bool *)"&FindReplaceBar::search_next");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  pCVar11 = (CheckBox *)operator_new(0xc60,"");
  local_58 = (char *)0x0;
  CheckBox::CheckBox(pCVar11,(String *)&local_58);
  postinitialize_handler((Object *)pCVar11);
  *(CheckBox **)(this + 0xa38) = pCVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa38),0,0);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xa38);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Match Case";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Control::set_focus_mode(*(undefined8 *)(this + 0xa38),0);
  plVar1 = *(long **)(this + 0xa38);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindReplaceBar,bool>
            ((FindReplaceBar *)&local_58,(char *)this,
             (_func_void_bool *)"&FindReplaceBar::_search_options_changed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  pCVar11 = (CheckBox *)operator_new(0xc60,"");
  local_58 = (char *)0x0;
  CheckBox::CheckBox(pCVar11,(String *)&local_58);
  postinitialize_handler((Object *)pCVar11);
  *(CheckBox **)(this + 0xa40) = pCVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa40),0,0);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xa40);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Whole Words";
  local_68 = 0;
  local_50 = 0xb;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Control::set_focus_mode(*(undefined8 *)(this + 0xa40),0);
  plVar1 = *(long **)(this + 0xa40);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindReplaceBar,bool>
            ((FindReplaceBar *)&local_58,(char *)this,
             (_func_void_bool *)"&FindReplaceBar::_search_options_changed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  pLVar10 = (LineEdit *)operator_new(0xbb0,"");
  local_58 = (char *)0x0;
  LineEdit::LineEdit(pLVar10,(String *)&local_58);
  postinitialize_handler((Object *)pLVar10);
  *(LineEdit **)(this + 0xa50) = pLVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(*(undefined8 *)(this + 0xa70),*(undefined8 *)(this + 0xa50),0,0);
  local_58 = "";
  local_60 = 0;
  uVar3 = *(undefined8 *)(this + 0xa50);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Replace";
  local_68 = 0;
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  LineEdit::set_placeholder(uVar3,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xa50);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Replace";
  local_68 = 0;
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pVVar5 = *(Vector2 **)(this + 0xa50);
  local_48 = (float)EditorScale::get_scale();
  local_48 = local_48 * _LC48;
  local_44 = 0;
  Control::set_custom_minimum_size(pVVar5);
  plVar1 = *(long **)(this + 0xa50);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindReplaceBar,String_const&>
            ((FindReplaceBar *)&local_58,(char *)this,
             (_func_void_String_ptr *)"&FindReplaceBar::_replace_text_submitted");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x278,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar7,(String *)&local_58);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa58) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(*(undefined8 *)(this + 0xa78),*(undefined8 *)(this + 0xa58),0,0);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xa58);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Replace";
  local_68 = 0;
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  plVar1 = *(long **)(this + 0xa58);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindReplaceBar>
            ((FindReplaceBar *)&local_58,(char *)this,(_func_void *)"&FindReplaceBar::_replace");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(pBVar7,(String *)&local_58);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa60) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(*(undefined8 *)(this + 0xa78),*(undefined8 *)(this + 0xa60),0,0);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xa60);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Replace All";
  local_68 = 0;
  local_50 = 0xb;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  plVar1 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindReplaceBar>
            ((FindReplaceBar *)&local_58,(char *)this,(_func_void *)"&FindReplaceBar::_replace_all")
  ;
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  pCVar11 = (CheckBox *)operator_new(0xc60,"");
  local_58 = (char *)0x0;
  CheckBox::CheckBox(pCVar11,(String *)&local_58);
  postinitialize_handler((Object *)pCVar11);
  *(CheckBox **)(this + 0xa68) = pCVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(*(undefined8 *)(this + 0xa80),*(undefined8 *)(this + 0xa68),0,0);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xa68);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Selection Only";
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Control::set_focus_mode(*(undefined8 *)(this + 0xa68),0);
  plVar1 = *(long **)(this + 0xa68);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindReplaceBar,bool>
            ((FindReplaceBar *)&local_58,(char *)this,
             (_func_void_bool *)"&FindReplaceBar::_search_options_changed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  this_03 = (TextureButton *)operator_new(0xaa0,"");
  TextureButton::TextureButton(this_03);
  postinitialize_handler((Object *)this_03);
  *(TextureButton **)(this + 0xa48) = this_03;
  Node::add_child(this,this_03,0,0);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xa48);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Hide";
  local_68 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Control::set_focus_mode(*(undefined8 *)(this + 0xa48),0);
  plVar1 = *(long **)(this + 0xa48);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<FindReplaceBar>
            ((FindReplaceBar *)&local_58,(char *)this,(_func_void *)"&FindReplaceBar::_hide_bar");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::set_v_size_flags(*(undefined8 *)(this + 0xa48),4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(this + 0xa48));
}



/* FindReplaceBar::set_text_edit(CodeTextEditor*) */

void __thiscall FindReplaceBar::set_text_edit(FindReplaceBar *this,CodeTextEditor *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  long in_FS_OFFSET;
  undefined8 local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(CodeTextEditor **)(this + 0xa88) != param_1) {
    if (*(CodeTextEditor **)(this + 0xa88) != (CodeTextEditor *)0x0) {
      local_48[0] = 0;
      TextEdit::set_search_text(*(String **)(this + 0xa90));
      CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
      CodeTextEditor::remove_find_replace_bar(*(CodeTextEditor **)(this + 0xa88));
      plVar1 = *(long **)(this + 0xa90);
      *(undefined8 *)(this + 0xa88) = 0;
      pcVar2 = *(code **)(*plVar1 + 0x110);
      create_custom_callable_function_pointer<FindReplaceBar>
                ((FindReplaceBar *)local_48,(char *)this,
                 (_func_void *)"&FindReplaceBar::_editor_text_changed");
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x270,local_48);
      Callable::~Callable((Callable *)local_48);
      *(undefined8 *)(this + 0xa90) = 0;
    }
    uVar3 = _LC16;
    if (param_1 != (CodeTextEditor *)0x0) {
      plVar1 = *(long **)(param_1 + 0xa10);
      this[0xaae] = (FindReplaceBar)0x1;
      *(undefined8 *)(this + 0xaa4) = uVar3;
      *(CodeTextEditor **)(this + 0xa88) = param_1;
      *(long **)(this + 0xa90) = plVar1;
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<FindReplaceBar>
                ((FindReplaceBar *)local_48,(char *)this,
                 (_func_void *)"&FindReplaceBar::_editor_text_changed");
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x270,local_48,0);
      Callable::~Callable((Callable *)local_48);
      *(undefined8 *)(this + 0xaa4) = uVar3;
      this[0xaae] = (FindReplaceBar)0x1;
      cVar4 = CanvasItem::is_visible_in_tree();
      if (cVar4 != '\0') {
        this[0xaad] = (FindReplaceBar)0x1;
        search_current(this);
        this[0xaad] = (FindReplaceBar)0x0;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::set_find_replace_bar(FindReplaceBar*) */

void __thiscall CodeTextEditor::set_find_replace_bar(CodeTextEditor *this,FindReplaceBar *param_1)

{
  long *plVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  long local_50;
  Label local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa18) == 0) {
    *(FindReplaceBar **)(this + 0xa18) = param_1;
    FindReplaceBar::set_text_edit(param_1,this);
    plVar1 = *(long **)(this + 0xa18);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<Label,String_const&>
              (local_48,*(char **)(this + 0xa90),(_func_void_String_ptr *)"&Label::set_text");
    StringName::StringName((StringName *)&local_50,"error",false);
    (*pcVar2)(plVar1,(StringName *)&local_50,local_48,0);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_48);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::goto_line(int, int) */

void __thiscall CodeTextEditor::goto_line(CodeTextEditor *this,int param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  Variant *local_78 [2];
  int local_68 [6];
  int local_50 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  TextEdit::remove_secondary_carets();
  TextEdit::deselect((int)*(undefined8 *)(this + 0xa10));
  uVar2 = *(undefined8 *)(this + 0xa10);
  TextEdit::get_line_count();
  CodeEdit::unfold_line((int)uVar2);
  TextEdit::set_caret_line((int)*(undefined8 *)(this + 0xa10),SUB41(param_1,0),false,1,0);
  TextEdit::set_caret_column((int)*(undefined8 *)(this + 0xa10),SUB41(param_2,0),0);
  pSVar3 = *(String **)(this + 0xa10);
  local_90 = 0;
  local_88 = &_LC15;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_90);
  CodeEdit::set_code_hint(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CodeEdit::cancel_code_completion();
  create_custom_callable_function_pointer<TextEdit,int>
            ((TextEdit *)&local_88,*(char **)(this + 0xa10),
             (_func_void_int *)"&TextEdit::adjust_viewport_to_caret");
  Variant::Variant((Variant *)local_68,0);
  Variant::Variant((Variant *)local_50,0);
  local_78[0] = (Variant *)local_68;
  Callable::call_deferredp((Variant **)&local_88,(int)local_78);
  if (Variant::needs_deinit[local_50[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)&local_88);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CodeTextEditor::goto_line_selection(int, int, int) */

void __thiscall
CodeTextEditor::goto_line_selection(CodeTextEditor *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  Variant *local_78 [2];
  int local_68 [6];
  int local_50 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  TextEdit::remove_secondary_carets();
  uVar2 = *(undefined8 *)(this + 0xa10);
  TextEdit::get_line_count();
  CodeEdit::unfold_line((int)uVar2);
  TextEdit::select((int)*(undefined8 *)(this + 0xa10),param_1,param_2,param_1,param_3);
  pSVar3 = *(String **)(this + 0xa10);
  local_90 = 0;
  local_88 = &_LC15;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_90);
  CodeEdit::set_code_hint(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CodeEdit::cancel_code_completion();
  create_custom_callable_function_pointer<TextEdit,int>
            ((TextEdit *)&local_88,*(char **)(this + 0xa10),
             (_func_void_int *)"&TextEdit::adjust_viewport_to_caret");
  Variant::Variant((Variant *)local_68,0);
  Variant::Variant((Variant *)local_50,0);
  local_78[0] = (Variant *)local_68;
  Callable::call_deferredp((Variant **)&local_88,(int)local_78);
  if (Variant::needs_deinit[local_50[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)&local_88);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CodeTextEditor::goto_line_centered(int, int) */

void __thiscall CodeTextEditor::goto_line_centered(CodeTextEditor *this,int param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  Variant *local_78 [2];
  int local_68 [6];
  int local_50 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  TextEdit::remove_secondary_carets();
  TextEdit::deselect((int)*(undefined8 *)(this + 0xa10));
  uVar2 = *(undefined8 *)(this + 0xa10);
  TextEdit::get_line_count();
  CodeEdit::unfold_line((int)uVar2);
  TextEdit::set_caret_line((int)*(undefined8 *)(this + 0xa10),SUB41(param_1,0),false,1,0);
  TextEdit::set_caret_column((int)*(undefined8 *)(this + 0xa10),SUB41(param_2,0),0);
  pSVar3 = *(String **)(this + 0xa10);
  local_90 = 0;
  local_88 = &_LC15;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_90);
  CodeEdit::set_code_hint(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CodeEdit::cancel_code_completion();
  create_custom_callable_function_pointer<TextEdit,int>
            ((TextEdit *)&local_88,*(char **)(this + 0xa10),
             (_func_void_int *)"&TextEdit::center_viewport_to_caret");
  Variant::Variant((Variant *)local_68,0);
  Variant::Variant((Variant *)local_50,0);
  local_78[0] = (Variant *)local_68;
  Callable::call_deferredp((Variant **)&local_88,(int)local_78);
  if (Variant::needs_deinit[local_50[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)&local_88);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CodeTextEditor::goto_next_bookmark() */

void __thiscall CodeTextEditor::goto_next_bookmark(CodeTextEditor *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  int *local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  CodeEdit::get_bookmarked_lines();
  if (local_20 != (int *)0x0) {
    if (0 < *(long *)(local_20 + -2)) {
      iVar4 = TextEdit::get_caret_line((int)*(undefined8 *)(this + 0xa10));
      if (local_20 == (int *)0x0) {
        lVar7 = 0;
        lVar6 = -1;
LAB_00107ec8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = *(long *)(local_20 + -2);
      lVar6 = lVar7 + -1;
      if (lVar6 < 0) goto LAB_00107ec8;
      piVar5 = local_20;
      if (iVar4 < local_20[lVar6]) {
        lVar6 = 1;
        do {
          if (iVar4 < local_20[lVar6 + -1]) {
            iVar4 = (int)lVar6 + -1;
            lVar6 = (long)iVar4;
            goto LAB_00107e28;
          }
          bVar8 = lVar7 != lVar6;
          lVar6 = lVar6 + 1;
        } while (bVar8);
        iVar4 = (int)lVar7;
        lVar6 = lVar7;
LAB_00107e28:
        if (lVar7 <= lVar6) goto LAB_00107ec8;
        piVar5 = local_20 + iVar4;
      }
      goto_line_centered(this,*piVar5,0);
      if (local_20 == (int *)0x0) goto LAB_00107e56;
    }
    LOCK();
    plVar1 = (long *)(local_20 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(local_20 + -4,false);
    }
  }
LAB_00107e56:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CodeTextEditor::goto_prev_bookmark() */

void __thiscall CodeTextEditor::goto_prev_bookmark(CodeTextEditor *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  int *local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  CodeEdit::get_bookmarked_lines();
  if (local_20 == (int *)0x0) goto LAB_0010803c;
  if (0 < *(long *)(local_20 + -2)) {
    iVar5 = TextEdit::get_caret_line((int)*(undefined8 *)(this + 0xa10));
    if (local_20 == (int *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(local_20 + -2);
      uVar6 = (int)lVar8 - 1;
      if (0 < lVar8) {
        if (*local_20 < iVar5) {
          uVar7 = (ulong)(int)uVar6;
          if (-1 < (int)uVar6) {
            uVar4 = (ulong)uVar6;
            do {
              if (lVar8 <= (long)uVar7) goto LAB_00107fe3;
              if (local_20[uVar4] < iVar5) goto LAB_00108010;
              uVar7 = uVar4 - 1;
              uVar6 = uVar6 - 1;
              uVar4 = uVar7;
            } while (uVar6 != 0xffffffff);
            uVar7 = 0xffffffffffffffff;
          }
          goto LAB_00107fe3;
        }
LAB_00108010:
        uVar7 = (ulong)(int)uVar6;
        if (((long)uVar7 < 0) || (lVar8 <= (long)uVar7)) goto LAB_00107fe3;
        goto_line_centered(this,local_20[uVar7],0);
        if (local_20 == (int *)0x0) goto LAB_0010803c;
        goto LAB_00108034;
      }
    }
    uVar7 = 0;
LAB_00107fe3:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,uVar7,lVar8,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
LAB_00108034:
  LOCK();
  plVar1 = (long *)(local_20 + -4);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    Memory::free_static(local_20 + -4,false);
  }
LAB_0010803c:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CodeTextEditor::goto_error() */

void __thiscall CodeTextEditor::goto_error(CodeTextEditor *this)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Label::get_text();
  puVar3 = local_58;
  if (local_58 != (undefined *)0x0) {
    uVar2 = *(undefined8 *)(local_58 + -8);
    if ((int)uVar2 == 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar3 + -0x10,false);
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar3 + -0x10,false);
      }
      if ((int)uVar2 != 1) {
        iVar5 = *(int *)(this + 0xa9c);
        TextEdit::get_line((int)(CowData<char32_t> *)&local_68);
        iVar4 = CodeEdit::get_indent_size();
        if (1 < iVar4) {
          if (local_68 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (int)*(undefined8 *)(local_68 + -8);
            iVar6 = iVar6 + -1 + (uint)(iVar6 == 0);
          }
          local_60 = 0;
          local_58 = &_LC24;
          local_50 = 1;
          String::parse_latin1((StrRange *)&local_60);
          String::lstrip((String *)&local_58);
          if ((local_58 != (undefined *)0x0) && ((int)*(undefined8 *)(local_58 + -8) != 0)) {
            iVar6 = iVar6 - ((int)*(undefined8 *)(local_58 + -8) + -1);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          iVar5 = iVar5 - (iVar4 + -1) * iVar6;
        }
        goto_line_centered(this,*(int *)(this + 0xa98),iVar5);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindReplaceBar::_update_toggle_replace_button(bool) */

void __thiscall FindReplaceBar::_update_toggle_replace_button(FindReplaceBar *this,bool param_1)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  Ref *pRVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  StringName *pSVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> *local_a0;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = (Object *)&_LC15;
  local_50 = 0;
  if (param_1) {
    String::parse_latin1((StrRange *)&local_60);
    local_58 = (Object *)0x111d24;
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_80,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_50 = 0x17;
    local_58 = (Object *)0x111d0c;
  }
  else {
    String::parse_latin1((StrRange *)&local_60);
    local_58 = (Object *)0x111d31;
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_80,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_50 = 0x1a;
    local_58 = (Object *)0x111cf1;
  }
  local_a0 = (CowData<char32_t> *)&local_80;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_60);
  ED_GET_SHORTCUT((String *)&local_58);
  Shortcut::get_as_text();
  if (((local_58 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar5 = local_58, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_58), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pSVar2 = *(String **)(this + 0xa10);
  local_60 = 0;
  plVar1 = (long *)(local_78 + -0x10);
  if (local_78 != 0) {
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_001083ec;
      LOCK();
      lVar8 = *plVar1;
      bVar10 = lVar3 == lVar8;
      if (bVar10) {
        *plVar1 = lVar3 + 1;
        lVar8 = lVar3;
      }
      UNLOCK();
    } while (!bVar10);
    if (lVar8 != -1) {
      local_60 = local_78;
    }
  }
LAB_001083ec:
  local_68 = 0;
  plVar1 = (long *)(local_80 + -0x10);
  if (local_80 != 0) {
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_00108426;
      LOCK();
      lVar8 = *plVar1;
      bVar10 = lVar3 == lVar8;
      if (bVar10) {
        *plVar1 = lVar3 + 1;
        lVar8 = lVar3;
      }
      UNLOCK();
    } while (!bVar10);
    if (lVar8 != -1) {
      local_68 = local_80;
    }
  }
LAB_00108426:
  local_70 = 0;
  local_58 = (Object *)0x111d3e;
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_70);
  vformat<String,String>
            ((String *)&local_58,(StrRange *)&local_70,(CowData<char32_t> *)&local_68,
             (StrRange *)&local_60);
  Control::set_tooltip_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  cVar6 = (**(code **)(*(long *)this + 0x340))(this);
  if (cVar6 == '\0') {
    if ((_update_toggle_replace_button(bool)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar7 = __cxa_guard_acquire(&_update_toggle_replace_button(bool)::{lambda()#2}::operator()()
                                     ::sname), iVar7 != 0)) {
      _scs_create((char *)&_update_toggle_replace_button(bool)::{lambda()#2}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &_update_toggle_replace_button(bool)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_toggle_replace_button(bool)::{lambda()#2}::operator()()::sname);
    }
    pSVar9 = (StringName *)&_update_toggle_replace_button(bool)::{lambda()#2}::operator()()::sname;
  }
  else {
    if ((_update_toggle_replace_button(bool)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar7 = __cxa_guard_acquire(&_update_toggle_replace_button(bool)::{lambda()#1}::operator()()
                                     ::sname), iVar7 != 0)) {
      _scs_create((char *)&_update_toggle_replace_button(bool)::{lambda()#1}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &_update_toggle_replace_button(bool)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_toggle_replace_button(bool)::{lambda()#1}::operator()()::sname);
    }
    pSVar9 = (StringName *)&_update_toggle_replace_button(bool)::{lambda()#1}::operator()()::sname;
  }
  StringName::StringName((StringName *)&local_60,pSVar9);
  pRVar4 = *(Ref **)(this + 0xa10);
  if (((param_1) && (_update_toggle_replace_button(bool)::{lambda()#3}::operator()()::sname == '\0')
      ) && (iVar7 = __cxa_guard_acquire(&_update_toggle_replace_button(bool)::{lambda()#3}::
                                         operator()()::sname), iVar7 != 0)) {
    _scs_create((char *)&_update_toggle_replace_button(bool)::{lambda()#3}::operator()()::sname,true
               );
    __cxa_atexit(StringName::~StringName,
                 &_update_toggle_replace_button(bool)::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_toggle_replace_button(bool)::{lambda()#3}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_58);
  Button::set_button_icon(pRVar4);
  if (((local_58 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar5 = local_58, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_58), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_a0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FindReplaceBar::popup_search(bool) */

void __thiscall FindReplaceBar::popup_search(FindReplaceBar *this,bool param_1)

{
  CanvasItem::hide();
  CanvasItem::hide();
  CanvasItem::hide();
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa68),0));
  _update_toggle_replace_button(this,false);
  CanvasItem::show();
  if (param_1) {
    return;
  }
  _show_search(SUB81(this,0),false);
  return;
}



/* FindReplaceBar::search_next() */

undefined8 __thiscall FindReplaceBar::search_next(FindReplaceBar *this)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_18;
  undefined1 local_14 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = BaseButton::is_pressed();
  if ((cVar1 == '\0') || (this[0xaac] != (FindReplaceBar)0x0)) {
    cVar1 = CanvasItem::is_visible();
    if (cVar1 == '\0') {
      popup_search(this,true);
    }
    if (((byte)this[0xa98] & 4) != 0) {
      this[0xaae] = (FindReplaceBar)0x1;
    }
    _update_flags(this,false);
    _get_search_from(this,&local_18,local_14,1);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar2 = _search((uint)this,*(int *)(this + 0xa98),local_18);
      return uVar2;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindReplaceBar::popup_replace() */

void __thiscall FindReplaceBar::popup_replace(FindReplaceBar *this)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = CanvasItem::is_visible_in_tree();
  if (cVar2 == '\0') {
    CanvasItem::show();
    CanvasItem::show();
    CanvasItem::show();
    _update_toggle_replace_button(this,true);
  }
  uVar1 = *(undefined8 *)(this + 0xa68);
  cVar2 = TextEdit::has_selection((int)*(undefined8 *)(this + 0xa90));
  if (cVar2 != '\0') {
    TextEdit::get_selection_from_line((int)*(undefined8 *)(this + 0xa90));
    TextEdit::get_selection_to_line((int)*(undefined8 *)(this + 0xa90));
  }
  BaseButton::set_pressed(SUB81(uVar1,0));
  CanvasItem::show();
  _show_search(SUB81(this,0),true);
  return;
}



/* FindReplaceBar::_toggle_replace_pressed() */

void __thiscall FindReplaceBar::_toggle_replace_pressed(FindReplaceBar *this)

{
  char cVar1;
  
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 != '\0') {
    popup_search(this,true);
    return;
  }
  popup_replace(this);
  return;
}



/* FindReplaceBar::search_prev() */

uint __thiscall FindReplaceBar::search_prev(FindReplaceBar *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = BaseButton::is_pressed();
  if ((cVar1 == '\0') || (uVar3 = (uint)(byte)this[0xaac], this[0xaac] != (FindReplaceBar)0x0)) {
    cVar1 = CanvasItem::is_visible();
    if (cVar1 == '\0') {
      popup_search(this,true);
    }
    LineEdit::get_text();
    if (((byte)this[0xa98] & 4) == 0) {
      this[0xaae] = (FindReplaceBar)0x1;
    }
    _update_flags(this,true);
    _get_search_from(this,&local_48,&local_44,2);
    if (local_40 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(undefined8 *)(local_40 + -8);
      iVar2 = iVar2 + -1 + (uint)(iVar2 == 0);
    }
    local_44 = local_44 - iVar2;
    if (local_44 < 0) {
      local_48 = local_48 + -1;
      if (local_48 < 0) {
        local_48 = TextEdit::get_line_count();
        local_48 = local_48 + -1;
      }
      TextEdit::get_line((int)local_38);
      CowData<char32_t>::_unref(local_38);
    }
    uVar3 = _search((uint)this,*(int *)(this + 0xa98),local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindReplaceBar::_search_text_submitted(String const&) */

void FindReplaceBar::_search_text_submitted(String *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = Input::get_singleton();
  cVar2 = Input::is_key_pressed(uVar1,0x400015);
  if (cVar2 != '\0') {
    search_prev((FindReplaceBar *)param_1);
    return;
  }
  search_next((FindReplaceBar *)param_1);
  return;
}



/* FindReplaceBar::_replace_all() */

void __thiscall FindReplaceBar::_replace_all(FindReplaceBar *this)

{
  Variant *pVVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  StringName *pSVar6;
  String *pSVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  CallableCustom *this_00;
  ulong uVar18;
  Variant *pVVar19;
  long in_FS_OFFSET;
  double dVar20;
  uint local_160;
  int local_15c;
  uint local_148;
  int local_144;
  int local_130;
  undefined8 local_110;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  int local_e8 [4];
  char *local_d8;
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TextEdit::begin_complex_operation();
  TextEdit::remove_secondary_carets();
  plVar4 = *(long **)(this + 0xa90);
  pcVar5 = *(code **)(*plVar4 + 0x110);
  create_custom_callable_function_pointer<FindReplaceBar>
            ((FindReplaceBar *)&local_d8,(char *)this,
             (_func_void *)"&FindReplaceBar::_editor_text_changed");
  (*pcVar5)(plVar4,SceneStringNames::singleton + 0x270,(FindReplaceBar *)&local_d8);
  Callable::~Callable((Callable *)&local_d8);
  bVar11 = (bool)TextEdit::get_caret_column((int)*(undefined8 *)(this + 0xa90));
  bVar12 = (bool)TextEdit::get_caret_line((int)*(undefined8 *)(this + 0xa90));
  local_c8 = (Variant *)_LC152;
  uVar17 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_c8);
  cVar13 = TextEdit::has_selection((int)*(undefined8 *)(this + 0xa90));
  uVar18 = uVar17 >> 0x20;
  cVar14 = BaseButton::is_pressed();
  if (cVar14 == '\0') {
    TextEdit::deselect((int)*(undefined8 *)(this + 0xa90));
    local_110 = _LC16;
  }
  else {
    local_110 = _LC16;
    *(undefined8 *)(this + 0xa9c) = _LC16;
    if (cVar13 != '\0') {
      local_130 = TextEdit::get_selection_from_column((int)*(undefined8 *)(this + 0xa90));
      local_148 = TextEdit::get_selection_from_line((int)*(undefined8 *)(this + 0xa90));
      local_144 = TextEdit::get_selection_to_column((int)*(undefined8 *)(this + 0xa90));
      local_160 = TextEdit::get_selection_to_line((int)*(undefined8 *)(this + 0xa90));
      goto LAB_00108d6d;
    }
  }
  local_144 = 0;
  cVar13 = '\0';
  local_160 = 0;
  local_130 = 0;
  local_148 = 0;
LAB_00108d6d:
  dVar20 = (double)TextEdit::get_v_scroll();
  LineEdit::get_text();
  LineEdit::get_text();
  if (local_d8 == (char *)0x0) {
    local_15c = 0;
  }
  else {
    iVar16 = (int)*(undefined8 *)((long)local_d8 + -8);
    local_15c = iVar16 + -1 + (uint)(iVar16 == 0);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  this[0xaac] = (FindReplaceBar)0x1;
  if ((cVar13 == '\0') || (cVar14 = BaseButton::is_pressed(), cVar14 == '\0')) {
    TextEdit::set_caret_line((int)*(undefined8 *)(this + 0xa90),false,false,1,-1);
    TextEdit::set_caret_column((int)*(undefined8 *)(this + 0xa90),false,1);
  }
  else {
    TextEdit::set_caret_line((int)*(undefined8 *)(this + 0xa90),SUB41(local_148,0),false,1,-1);
    TextEdit::set_caret_column((int)*(undefined8 *)(this + 0xa90),SUB41(local_130,0),1);
  }
  iVar16 = 0;
  _update_flags(this,false);
  _get_search_from(this,(String *)local_e8,(FindReplaceBar *)&local_d8,0);
  cVar14 = _search((uint)this,*(int *)(this + 0xa98),local_e8[0]);
  if (cVar14 != '\0') {
    uVar17 = uVar17 & 0xffffffff;
    do {
      uVar2 = *(uint *)(this + 0xaa0);
      uVar3 = *(uint *)(this + 0xa9c);
      bVar10 = (int)uVar3 < (int)(uint)uVar17;
      if (uVar3 == (uint)uVar17) {
        bVar10 = (int)uVar2 < (int)uVar18;
      }
      if (bVar10) break;
      if (local_100 == 0) {
        uVar18 = (ulong)uVar2;
      }
      else {
        iVar15 = (int)*(undefined8 *)(local_100 + -8);
        uVar18 = (ulong)((uVar2 - 1) + iVar15);
        if (iVar15 == 0) {
          uVar18 = (ulong)uVar2;
        }
      }
      CodeEdit::unfold_line((int)*(undefined8 *)(this + 0xa90));
      TextEdit::select((int)*(undefined8 *)(this + 0xa90),*(int *)(this + 0xa9c),
                       *(int *)(this + 0xaa0),*(int *)(this + 0xa9c),local_15c + uVar2);
      iVar15 = (int)(CowData<char32_t> *)&local_100;
      if (cVar13 == '\0') {
        TextEdit::insert_text_at_caret(*(String **)(this + 0xa90),iVar15);
      }
      else {
        bVar10 = (int)uVar3 < (int)local_148;
        if (uVar3 == local_148) {
          bVar10 = (int)uVar2 < local_130;
        }
        if (bVar10) {
LAB_00109346:
          TextEdit::end_complex_operation();
          this[0xaac] = (FindReplaceBar)0x0;
          TextEdit::set_caret_line((int)*(undefined8 *)(this + 0xa90),bVar12,false,1,0);
          TextEdit::set_caret_column((int)*(undefined8 *)(this + 0xa90),bVar11,1);
          goto LAB_00109392;
        }
        if (uVar3 == local_160) {
          if (local_144 < (int)(local_15c + uVar2)) goto LAB_00109346;
        }
        else if (uVar3 != local_160 && (int)local_160 <= (int)uVar3) goto LAB_00109346;
        TextEdit::insert_text_at_caret(*(String **)(this + 0xa90),iVar15);
        if (uVar3 == local_160) {
          if (local_100 == 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = (int)*(undefined8 *)(local_100 + -8);
            iVar15 = iVar15 + -1 + (uint)(iVar15 == 0);
          }
          local_144 = local_144 + (iVar15 - local_15c);
        }
      }
      iVar16 = iVar16 + 1;
      cVar14 = search_next(this);
      uVar17 = (ulong)uVar3;
    } while (cVar14 != '\0');
  }
  TextEdit::end_complex_operation();
  this[0xaac] = (FindReplaceBar)0x0;
  TextEdit::set_caret_line((int)*(undefined8 *)(this + 0xa90),bVar12,false,1,0);
  TextEdit::set_caret_column((int)*(undefined8 *)(this + 0xa90),bVar11,1);
  if (cVar13 != '\0') {
LAB_00109392:
    TextEdit::select((int)*(undefined8 *)(this + 0xa90),local_148,local_130,local_160,local_144);
  }
  TextEdit::set_v_scroll((double)(int)dVar20);
  pSVar6 = *(StringName **)(this + 0xa20);
  if (iVar16 == 0) {
    if ((_replace_all()::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar16 = __cxa_guard_acquire(&_replace_all()::{lambda()#2}::operator()()::sname),
       iVar16 != 0)) {
      _scs_create((char *)&_replace_all()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_replace_all()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_replace_all()::{lambda()#2}::operator()()::sname);
    }
    local_c8 = (Variant *)
               Control::get_theme_color
                         ((StringName *)this,
                          (StringName *)&_replace_all()::{lambda()#2}::operator()()::sname);
  }
  else {
    if ((_replace_all()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar16 = __cxa_guard_acquire(&_replace_all()::{lambda()#1}::operator()()::sname),
       iVar16 != 0)) {
      _scs_create((char *)&_replace_all()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_replace_all()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_replace_all()::{lambda()#1}::operator()()::sname);
    }
    local_c8 = (Variant *)
               Control::get_theme_color
                         ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xb0));
  }
  Control::add_theme_color_override(pSVar6,(Color *)(SceneStringNames::singleton + 0xb0));
  pSVar7 = *(String **)(this + 0xa20);
  local_d8 = "";
  local_f0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_f0);
  local_d8 = "%d replaced.";
  local_f8 = 0;
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_f8);
  TTR((String *)local_e8,(String *)&local_f8);
  vformat<int>((String *)&local_d8,(int)(String *)local_e8);
  Label::set_text(pSVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  lVar8 = *(long *)(this + 0xa90);
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(undefined **)(this_00 + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_00 = &PTR_hash_00121660;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar9 = *(undefined8 *)(lVar8 + 0x60);
  *(long *)(this_00 + 0x28) = lVar8;
  *(undefined8 *)(this_00 + 0x30) = uVar9;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0x109;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "Object::connect";
  Callable::Callable((Callable *)local_e8,this_00);
  create_custom_callable_function_pointer<FindReplaceBar>
            ((FindReplaceBar *)&local_d8,(char *)this,
             (_func_void *)"&FindReplaceBar::_editor_text_changed");
  StringName::StringName
            ((StringName *)&local_f0,(StringName *)(SceneStringNames::singleton + 0x270));
  Variant::Variant(local_a8,(StringName *)&local_f0);
  Variant::Variant(local_90,(Callable *)&local_d8);
  Variant::Variant(local_78,0);
  Variant::Variant(local_60,0);
  pVVar19 = local_48;
  local_c8 = local_a8;
  pVStack_c0 = local_90;
  local_b8 = local_78;
  Callable::call_deferredp((Variant **)local_e8,(int)(Vector2 *)&local_c8);
  do {
    pVVar1 = pVVar19 + -0x18;
    pVVar19 = pVVar19 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar19 != local_a8);
  if ((StringName::configured != '\0') && (local_f0 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_d8);
  Callable::~Callable((Callable *)local_e8);
  this[0xaae] = (FindReplaceBar)0x1;
  *(undefined8 *)(this + 0xaa4) = local_110;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FindReplaceBar::_replace_text_submitted(String const&) */

void FindReplaceBar::_replace_text_submitted(String *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = BaseButton::is_pressed();
  if (cVar2 != '\0') {
    cVar2 = TextEdit::has_selection((int)*(undefined8 *)(param_1 + 0xa90));
    if (cVar2 != '\0') {
      _replace_all((FindReplaceBar *)param_1);
      _hide_bar((FindReplaceBar *)param_1);
      return;
    }
  }
  uVar1 = Input::get_singleton();
  cVar2 = Input::is_key_pressed(uVar1,0x400015);
  if (cVar2 != '\0') {
    _replace((FindReplaceBar *)param_1);
    search_prev((FindReplaceBar *)param_1);
    return;
  }
  _replace((FindReplaceBar *)param_1);
  search_next((FindReplaceBar *)param_1);
  return;
}



/* CodeTextEditor::update_toggle_scripts_button() */

void __thiscall CodeTextEditor::update_toggle_scripts_button(CodeTextEditor *this)

{
  Ref *pRVar1;
  String *pSVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  String local_80 [8];
  undefined8 local_78;
  Object *local_70;
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa30) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("update_toggle_scripts_button","editor/code_editor.cpp",0x71b,
                       "Parameter \"toggle_scripts_list\" is null.",0,0);
      return;
    }
  }
  else {
    cVar3 = CanvasItem::is_visible();
    cVar4 = (**(code **)(*(long *)this + 0x340))(this);
    pRVar1 = *(Ref **)(this + 0xa28);
    if (cVar3 == cVar4) {
      if ((update_toggle_scripts_button()::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&update_toggle_scripts_button()::{lambda()#1}::operator()()::
                                       sname), iVar5 != 0)) {
        _scs_create((char *)&update_toggle_scripts_button()::{lambda()#1}::operator()()::sname,true)
        ;
        __cxa_atexit(StringName::~StringName,
                     &update_toggle_scripts_button()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&update_toggle_scripts_button()::{lambda()#1}::operator()()::sname);
      }
    }
    else if ((update_toggle_scripts_button()::{lambda()#2}::operator()()::sname == '\0') &&
            (iVar5 = __cxa_guard_acquire(&update_toggle_scripts_button()::{lambda()#2}::operator()()
                                          ::sname), iVar5 != 0)) {
      _scs_create((char *)&update_toggle_scripts_button()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &update_toggle_scripts_button()::{lambda()#2}::operator()()::sname,&__dso_handle)
      ;
      __cxa_guard_release(&update_toggle_scripts_button()::{lambda()#2}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_58);
    Button::set_button_icon(pRVar1);
    if (((local_58 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_58), cVar3 != '\0')) {
      (**(code **)(*(long *)local_58 + 0x140))(local_58);
      Memory::free_static(local_58,false);
    }
    pSVar2 = *(String **)(this + 0xa28);
    local_78 = 0;
    local_58 = (Object *)0x114c28;
    local_50 = 0x22;
    String::parse_latin1((StrRange *)&local_78);
    ED_GET_SHORTCUT((String *)&local_70);
    Shortcut::get_as_text();
    local_58 = (Object *)&_LC15;
    local_88 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_58 = (Object *)0x111dc2;
    local_90 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_90);
    TTR(local_80,(String *)&local_90);
    local_58 = (Object *)0x111d3e;
    local_60 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_60);
    vformat<String,String>((StringName *)&local_58,(StrRange *)&local_60,local_80,local_68);
    Control::set_tooltip_text(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref(local_68);
    if (((local_70 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_70), cVar3 != '\0')) {
      (**(code **)(*(long *)local_70 + 0x140))(local_70);
      Memory::free_static(local_70,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::_toggle_scripts_pressed() */

void __thiscall CodeTextEditor::_toggle_scripts_pressed(CodeTextEditor *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0xa30);
  if (lVar1 != 0) {
    CanvasItem::is_visible();
    CanvasItem::set_visible(SUB81(lVar1,0));
    update_toggle_scripts_button(this);
    return;
  }
  _err_print_error("_toggle_scripts_pressed","editor/code_editor.cpp",0x65a,
                   "Parameter \"toggle_scripts_list\" is null.",0,0);
  return;
}



/* CodeTextEditor::_text_editor_gui_input(Ref<InputEvent> const&) */

void __thiscall CodeTextEditor::_text_editor_gui_input(CodeTextEditor *this,Ref *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  Object *pOVar5;
  String *pSVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  undefined8 local_48;
  long local_40;
  
  lVar7 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar7 != 0) {
    pOVar4 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar4 == (Object *)0x0) {
LAB_00109ad1:
      pOVar5 = (Object *)
               __dynamic_cast(lVar7,&Object::typeinfo,&InputEventMagnifyGesture::typeinfo,0);
      if (pOVar5 == (Object *)0x0) {
LAB_00109b02:
        pOVar5 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&InputEventKey::typeinfo,0);
        if (pOVar5 != (Object *)0x0) {
          cVar2 = RefCounted::reference();
          if (cVar2 != '\0') {
            cVar2 = InputEvent::is_pressed();
            if (cVar2 != '\0') {
              pSVar6 = (String *)EditorSettings::get_singleton();
              local_48 = 0;
              String::parse_latin1((String *)&local_48,"script_editor/zoom_in");
              cVar2 = EditorSettings::is_shortcut(pSVar6,(Ref *)&local_48);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
              if (cVar2 == '\0') {
                pSVar6 = (String *)EditorSettings::get_singleton();
                local_48 = 0;
                String::parse_latin1((String *)&local_48,"script_editor/zoom_out");
                cVar2 = EditorSettings::is_shortcut(pSVar6,(Ref *)&local_48);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
                if (cVar2 == '\0') {
                  pSVar6 = (String *)EditorSettings::get_singleton();
                  local_48 = 0;
                  String::parse_latin1((String *)&local_48,"script_editor/reset_zoom");
                  cVar2 = EditorSettings::is_shortcut(pSVar6,(Ref *)&local_48);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
                  if (cVar2 != '\0') {
                    _zoom_to(this,_LC50);
                    Control::accept_event();
                  }
                }
                else {
                  _zoom_out(this);
                  Control::accept_event();
                }
              }
              else {
                _zoom_in(this);
                Control::accept_event();
              }
            }
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
              cVar2 = predelete_handler(pOVar5);
              if (cVar2 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
      }
      else {
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          lVar7 = *(long *)param_1;
          if (lVar7 != 0) goto LAB_00109b02;
        }
        else {
          fVar1 = *(float *)(this + 0xa8c);
          fVar8 = (float)InputEventMagnifyGesture::get_factor();
          fVar8 = powf(fVar8,_LC44);
          _zoom_to(this,fVar8 * fVar1);
          Control::accept_event();
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar5);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
        }
      }
      if (pOVar4 == (Object *)0x0) goto LAB_00109b45;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        lVar7 = *(long *)param_1;
        if (lVar7 == 0) goto LAB_00109b45;
        pOVar4 = (Object *)0x0;
        goto LAB_00109ad1;
      }
      cVar2 = InputEvent::is_pressed();
      if (cVar2 == '\0') {
LAB_00109ac8:
        lVar7 = *(long *)param_1;
        if (lVar7 != 0) goto LAB_00109ad1;
      }
      else {
        cVar2 = InputEventWithModifiers::is_command_or_control_pressed();
        if (cVar2 == '\0') goto LAB_00109ac8;
        iVar3 = InputEventMouseButton::get_button_index();
        if (iVar3 == 4) {
          _zoom_in(this);
          Control::accept_event();
        }
        else {
          iVar3 = InputEventMouseButton::get_button_index();
          if (iVar3 != 5) goto LAB_00109ac8;
          _zoom_out(this);
          Control::accept_event();
        }
      }
    }
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar4);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar4,false);
          return;
        }
        goto LAB_00109e0d;
      }
    }
  }
LAB_00109b45:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109e0d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::get_edit_state() */

CodeTextEditor * __thiscall CodeTextEditor::get_edit_state(CodeTextEditor *this)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  Variant *pVVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  Dictionary local_90 [8];
  Object *local_88;
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_90);
  get_navigation_state();
  Variant::operator_cast_to_Dictionary((Variant *)&local_88);
  Dictionary::merge(local_90,SUB81((Variant *)&local_88,0));
  Dictionary::~Dictionary((Dictionary *)&local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CodeEdit::get_folded_lines();
  Variant::Variant((Variant *)local_58,(Array *)&local_88);
  Variant::Variant((Variant *)local_78,"folded_lines");
  pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_90);
  if (pVVar5 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar5 = 0;
    *(int *)pVVar5 = local_58[0];
    *(undefined8 *)(pVVar5 + 8) = local_50;
    *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar4 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar4 != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)&local_88);
  CodeEdit::get_breakpointed_lines();
  Variant::Variant((Variant *)local_58,(Vector *)&local_88);
  Variant::Variant((Variant *)local_78,"breakpoints");
  pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_90);
  if (pVVar5 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar5 = 0;
    *(int *)pVVar5 = local_58[0];
    *(undefined8 *)(pVVar5 + 8) = local_50;
    *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar4 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar4 != '\0') {
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
  CodeEdit::get_bookmarked_lines();
  Variant::Variant((Variant *)local_58,(Vector *)&local_88);
  Variant::Variant((Variant *)local_78,"bookmarks");
  pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_90);
  if (pVVar5 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar5 = 0;
    *(int *)pVVar5 = local_58[0];
    *(undefined8 *)(pVVar5 + 8) = local_50;
    *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar4 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar4 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar4 != '\0') {
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
  TextEdit::get_syntax_highlighter();
  if (local_88 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pOVar6 = (Object *)__dynamic_cast(local_88,&Object::typeinfo,&EditorSyntaxHighlighter::typeinfo,0)
  ;
  if (pOVar6 != (Object *)0x0) {
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      pOVar6 = (Object *)0x0;
    }
    if (local_88 == (Object *)0x0) goto LAB_0010a0d8;
  }
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(local_88), cVar4 != '\0')) {
    (**(code **)(*(long *)local_88 + 0x140))();
    Memory::free_static(local_88,false);
  }
LAB_0010a0d8:
  (**(code **)(*(long *)pOVar6 + 0x1e0))((Variant *)&local_88,pOVar6);
  Variant::Variant((Variant *)local_58,(String *)&local_88);
  Variant::Variant((Variant *)local_78,"syntax_highlighter");
  pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_90);
  if (pVVar5 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar5 = 0;
    *(int *)pVVar5 = local_58[0];
    *(undefined8 *)(pVVar5 + 8) = local_50;
    *(undefined8 *)(pVVar5 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Variant::Variant((Variant *)this,local_90);
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  Dictionary::~Dictionary(local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::_line_col_changed() */

void __thiscall CodeTextEditor::_line_col_changed(CodeTextEditor *this)

{
  String *pSVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_a0;
  String local_98 [8];
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = Timer::is_stopped();
  if ((cVar3 == '\0') &&
     (iVar4 = *(int *)(this + 0xa88),
     iVar5 = TextEdit::get_caret_line((int)*(undefined8 *)(this + 0xa10)), iVar4 != iVar5)) {
    Timer::stop();
  }
  TextEdit::get_caret_line((int)*(undefined8 *)(this + 0xa10));
  lVar6 = 0;
  TextEdit::get_line((int)(CowData<char32_t> *)&local_a0);
  do {
    iVar4 = TextEdit::get_caret_column((int)*(undefined8 *)(this + 0xa10));
    if (iVar4 <= (int)lVar6) {
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      TextEdit::get_caret_line((int)*(undefined8 *)(this + 0xa10));
      itos((long)local_98);
      local_88 = &_LC23;
      local_90 = 0;
      local_80 = 1;
      String::parse_latin1((StrRange *)&local_90);
      iVar4 = (int)(CowData<char32_t> *)&local_88;
      String::lpad(iVar4,local_98);
      StringBuilder::append((String *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      StringBuilder::append((char *)&local_78);
      itos((long)local_98);
      local_88 = &_LC23;
      local_90 = 0;
      local_80 = 1;
      String::parse_latin1((StrRange *)&local_90);
      String::lpad(iVar4,local_98);
      StringBuilder::append((String *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      pSVar1 = *(String **)(this + 0xa50);
      StringBuilder::as_string();
      Label::set_text(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      lVar6 = *(long *)(this + 0xa18);
      if (lVar6 != 0) {
        if (*(char *)(lVar6 + 0xaaf) == '\0') {
          *(undefined1 *)(lVar6 + 0xaae) = 1;
        }
        *(undefined1 *)(lVar6 + 0xaaf) = 0;
      }
      StringBuilder::~StringBuilder((StringBuilder *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    if (local_a0 == 0) {
      if (lVar6 != 0) {
        lVar7 = 0;
LAB_0010a458:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      lVar7 = *(long *)(local_a0 + -8);
      if (lVar6 != lVar7) {
        if (lVar7 <= lVar6) goto LAB_0010a458;
        if (*(int *)(local_a0 + lVar6 * 4) == 9) {
          CodeEdit::get_indent_size();
        }
      }
    }
    lVar6 = lVar6 + 1;
  } while( true );
}



/* CodeTextEditor::convert_case(CodeTextEditor::CaseStyle) */

void __thiscall CodeTextEditor::convert_case(CodeTextEditor *this,int param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_60;
  CowData<char32_t> local_58 [8];
  CowData<char32_t> local_50 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = TextEdit::has_selection((int)*(undefined8 *)(this + 0xa10));
  if (cVar3 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    iVar8 = 0;
    TextEdit::begin_complex_operation();
    TextEdit::begin_multicaret_edit();
    while( true ) {
      iVar4 = TextEdit::get_caret_count();
      if (iVar4 <= iVar8) break;
      cVar3 = TextEdit::multicaret_edit_ignore_caret((int)*(undefined8 *)(this + 0xa10));
      if ((cVar3 == '\0') &&
         (cVar3 = TextEdit::has_selection((int)*(undefined8 *)(this + 0xa10)), cVar3 != '\0')) {
        uVar5 = TextEdit::get_selection_from_line((int)*(undefined8 *)(this + 0xa10));
        uVar6 = TextEdit::get_selection_to_line((int)*(undefined8 *)(this + 0xa10));
        TextEdit::get_selection_from_column((int)*(undefined8 *)(this + 0xa10));
        TextEdit::get_selection_to_column((int)*(undefined8 *)(this + 0xa10));
        if ((int)uVar5 <= (int)uVar6) {
          uVar7 = uVar5;
          do {
            iVar4 = (int)(CowData<char32_t> *)&local_48;
            TextEdit::get_line(iVar4);
            lVar2 = local_48;
            if (local_48 != 0) {
              LOCK();
              plVar1 = (long *)(local_48 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_48 = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            if (uVar5 == uVar7) {
              TextEdit::get_line(iVar4);
            }
            else {
              TextEdit::get_line(iVar4);
            }
            String::substr((int)(CowData<char32_t> *)&local_60,iVar4);
            lVar2 = local_48;
            if (local_48 != 0) {
              LOCK();
              plVar1 = (long *)(local_48 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_48 = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            if (param_2 == 1) {
              String::to_lower();
              if (local_60 != local_48) {
LAB_0010a80b:
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                local_60 = local_48;
                local_48 = 0;
              }
LAB_0010a826:
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
            }
            else {
              if (param_2 == 2) {
                String::capitalize();
                if (local_60 != local_48) goto LAB_0010a80b;
                goto LAB_0010a826;
              }
              if (param_2 == 0) {
                String::to_upper();
                if (local_60 != local_48) goto LAB_0010a80b;
                goto LAB_0010a826;
              }
            }
            iVar4 = (int)local_58;
            if (uVar5 == uVar7) {
              TextEdit::get_line(iVar4);
              String::left((int)(String *)local_50);
              String::operator+((String *)&local_48,(String *)local_50);
              if (local_60 != local_48) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                local_60 = local_48;
                local_48 = 0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
              CowData<char32_t>::_unref(local_50);
              CowData<char32_t>::_unref(local_58);
            }
            if (uVar6 == uVar7) {
              TextEdit::get_line(iVar4);
              String::substr((int)local_50,iVar4);
              String::operator+((String *)&local_48,(String *)&local_60);
              if (local_60 != local_48) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                local_60 = local_48;
                local_48 = 0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
              CowData<char32_t>::_unref(local_50);
              CowData<char32_t>::_unref(local_58);
              TextEdit::set_line((int)*(undefined8 *)(this + 0xa10),(String *)(ulong)uVar7);
              if (local_60 == 0) break;
LAB_0010a85c:
              lVar2 = local_60;
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar2 + -0x10),false);
              }
            }
            else {
              TextEdit::set_line((int)*(undefined8 *)(this + 0xa10),(String *)(ulong)uVar7);
              if (local_60 != 0) goto LAB_0010a85c;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 <= (int)uVar6);
        }
      }
      iVar8 = iVar8 + 1;
    }
    TextEdit::end_multicaret_edit();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      TextEdit::end_complex_operation();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::input(Ref<InputEvent> const&) */

void __thiscall CodeTextEditor::input(CodeTextEditor *this,Ref *param_1)

{
  Node *pNVar1;
  Object *pOVar2;
  char cVar3;
  char cVar4;
  Object *pOVar5;
  String *pSVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("input","editor/code_editor.cpp",0x357,
                       "Condition \"event.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_0010b0c2;
  }
  pOVar5 = (Object *)__dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0);
  if ((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
    cVar3 = InputEvent::is_pressed();
    if (cVar3 != '\0') {
      cVar3 = Control::has_focus();
      if (cVar3 == '\0') {
        if ((*(long *)(this + 0xa18) != 0) && (cVar3 = CanvasItem::is_visible(), cVar3 != '\0')) {
          cVar3 = Control::has_focus();
          if (cVar3 == '\0') {
            lVar7 = Viewport::gui_get_focus_owner();
            if (lVar7 != 0) {
              pNVar1 = *(Node **)(this + 0xa18);
              Viewport::gui_get_focus_owner();
              cVar3 = Node::is_ancestor_of(pNVar1);
              if (cVar3 != '\0') goto LAB_0010ac4d;
            }
          }
          else {
LAB_0010ac4d:
            pSVar6 = (String *)EditorSettings::get_singleton();
            local_48 = (Object *)0x0;
            Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_48,(Ref *)pOVar5);
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"script_text_editor/find_next");
            cVar3 = EditorSettings::is_shortcut(pSVar6,(Ref *)&local_50);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            Ref<InputEvent>::unref((Ref<InputEvent> *)&local_48);
            if (cVar3 == '\0') {
              pSVar6 = (String *)EditorSettings::get_singleton();
              local_48 = (Object *)0x0;
              Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_48,(Ref *)pOVar5);
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"script_text_editor/find_previous");
              cVar3 = EditorSettings::is_shortcut(pSVar6,(Ref *)&local_50);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              Ref<InputEvent>::unref((Ref<InputEvent> *)&local_48);
              if (cVar3 != '\0') {
                FindReplaceBar::search_prev(*(FindReplaceBar **)(this + 0xa18));
                Control::accept_event();
              }
            }
            else {
              FindReplaceBar::search_next(*(FindReplaceBar **)(this + 0xa18));
              Control::accept_event();
            }
          }
        }
      }
      else {
        pSVar6 = (String *)EditorSettings::get_singleton();
        local_48 = (Object *)0x0;
        Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_48,(Ref *)pOVar5);
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"script_text_editor/move_up");
        cVar3 = EditorSettings::is_shortcut(pSVar6,(Ref *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if (((local_48 != (Object *)0x0) &&
            (cVar4 = RefCounted::unreference(), pOVar2 = local_48, cVar4 != '\0')) &&
           (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
        if (cVar3 == '\0') {
          pSVar6 = (String *)EditorSettings::get_singleton();
          local_48 = (Object *)0x0;
          Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_48,(Ref *)pOVar5);
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"script_text_editor/move_down");
          cVar3 = EditorSettings::is_shortcut(pSVar6,(Ref *)&local_50);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          if (((local_48 != (Object *)0x0) &&
              (cVar4 = RefCounted::unreference(), pOVar2 = local_48, cVar4 != '\0')) &&
             (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
          if (cVar3 == '\0') {
            pSVar6 = (String *)EditorSettings::get_singleton();
            local_48 = (Object *)0x0;
            Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_48,(Ref *)pOVar5);
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"script_text_editor/delete_line");
            cVar3 = EditorSettings::is_shortcut(pSVar6,(Ref *)&local_50);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            Ref<InputEvent>::unref((Ref<InputEvent> *)&local_48);
            if (cVar3 == '\0') {
              pSVar6 = (String *)EditorSettings::get_singleton();
              local_48 = (Object *)0x0;
              Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_48,(Ref *)pOVar5);
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"script_text_editor/duplicate_selection");
              cVar3 = EditorSettings::is_shortcut(pSVar6,(Ref *)&local_50);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              Ref<InputEvent>::unref((Ref<InputEvent> *)&local_48);
              if (cVar3 == '\0') {
                pSVar6 = (String *)EditorSettings::get_singleton();
                local_48 = (Object *)0x0;
                Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_48,(Ref *)pOVar5);
                local_50 = 0;
                String::parse_latin1((String *)&local_50,"script_text_editor/duplicate_lines");
                cVar3 = EditorSettings::is_shortcut(pSVar6,(Ref *)&local_50);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
                Ref<InputEvent>::unref((Ref<InputEvent> *)&local_48);
                if (cVar3 != '\0') {
                  CodeEdit::duplicate_lines();
                  Control::accept_event();
                }
              }
              else {
                CodeEdit::duplicate_selection();
                Control::accept_event();
              }
            }
            else {
              CodeEdit::delete_lines();
              Control::accept_event();
            }
          }
          else {
            CodeEdit::move_lines_down();
            Control::accept_event();
          }
        }
        else {
          CodeEdit::move_lines_up();
          Control::accept_event();
        }
      }
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar5,false);
        return;
      }
      goto LAB_0010b0c2;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b0c2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FindReplaceBar::_notification(int) */

void __thiscall FindReplaceBar::_notification(FindReplaceBar *this,int param_1)

{
  Ref *pRVar1;
  Vector2 *pVVar2;
  StringName *pSVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long in_FS_OFFSET;
  long *local_50;
  undefined8 local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x1f) {
    CanvasItem::is_visible_in_tree();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::set_process_input(SUB81(this,0));
      return;
    }
    goto LAB_0010b675;
  }
  if (param_1 < 0x20) {
    if (param_1 == 1) {
      if (*(CodeTextEditor **)(this + 0xa88) != (CodeTextEditor *)0x0) {
        CodeTextEditor::remove_find_replace_bar(*(CodeTextEditor **)(this + 0xa88));
        *(undefined8 *)(this + 0xa88) = 0;
      }
    }
    else if (param_1 == 0xd) goto LAB_0010b156;
  }
  else if (param_1 == 0x2d) {
    pSVar3 = *(StringName **)(this + 0xa20);
    if (*(int *)(this + 0xaa4) < 1) {
      if ((_notification(int)::{lambda()#7}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
      }
      local_48 = Control::get_theme_color
                           ((StringName *)this,
                            (StringName *)&_notification(int)::{lambda()#7}::operator()()::sname);
    }
    else {
      if ((_notification(int)::{lambda()#6}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
      }
      local_48 = Control::get_theme_color
                           ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xb0));
    }
    Control::add_theme_color_override(pSVar3,(Color *)(SceneStringNames::singleton + 0xb0));
  }
  else if ((param_1 == 10000) &&
          (cVar4 = EditorThemeManager::is_generated_theme_outdated(), cVar4 != '\0')) {
LAB_0010b156:
    pRVar1 = *(Ref **)(this + 0xa28);
    if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_50);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
    pRVar1 = *(Ref **)(this + 0xa30);
    if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_50);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
    pRVar1 = *(Ref **)(this + 0xa48);
    if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_50);
    TextureButton::set_texture_normal(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
    pRVar1 = *(Ref **)(this + 0xa48);
    if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_50);
    TextureButton::set_texture_hover(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
    pRVar1 = *(Ref **)(this + 0xa48);
    if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_50);
    TextureButton::set_texture_pressed(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
    pVVar2 = *(Vector2 **)(this + 0xa48);
    TextureButton::get_texture_normal();
    local_48 = (**(code **)(*local_50 + 0x1d8))();
    Control::set_custom_minimum_size(pVVar2);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_50);
    bVar5 = (bool)CanvasItem::is_visible_in_tree();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_toggle_replace_button(this,bVar5);
      return;
    }
    goto LAB_0010b675;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b675:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::_get_completion_icon(ScriptLanguage::CodeCompletionOption const&) */

CodeCompletionOption * CodeTextEditor::_get_completion_icon(CodeCompletionOption *param_1)

{
  String *pSVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_RDX;
  undefined1 *puVar4;
  undefined1 uVar5;
  StringName *in_RSI;
  char *pcVar6;
  long in_FS_OFFSET;
  long local_50;
  Ref *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  switch(*in_RDX) {
  case 0:
    StringName::StringName((StringName *)&local_48,(String *)(in_RDX + 2),false);
    cVar2 = Control::has_theme_icon(in_RSI,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_48 != (Ref *)0x0)) {
      StringName::unref();
    }
    pSVar1 = EditorNode::singleton;
    if (cVar2 == '\0') {
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      EditorNode::get_class_icon((String *)&local_48,pSVar1);
      Ref<Texture2D>::operator=((Ref<Texture2D> *)param_1,local_48);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if (*(long *)param_1 == 0) {
        if ((_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#1}::
             operator()()::sname == '\0') &&
           (iVar3 = __cxa_guard_acquire(&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)
                                         ::{lambda()#1}::operator()()::sname), iVar3 != 0)) {
          _scs_create((char *)&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::
                               {lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::
                        {lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::
                               {lambda()#1}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_48);
        Ref<Texture2D>::operator=((Ref<Texture2D> *)param_1,local_48);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
      }
    }
    else {
      StringName::StringName((StringName *)&local_50,(String *)(in_RDX + 2),false);
      Control::get_editor_theme_icon((StringName *)&local_48);
      Ref<Texture2D>::operator=((Ref<Texture2D> *)param_1,local_48);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
    }
    goto LAB_0010b718;
  case 1:
    if (_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#9}::
        operator()()::sname == '\0') {
      puVar4 = &_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#9}::
                operator()()::sname;
      pcVar6 = (char *)&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::
                        {lambda()#9}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)
                                   ::{lambda()#9}::operator()()::sname);
      uVar5 = 0x26;
joined_r0x0010bb64:
      if (iVar3 != 0) {
LAB_0010ba30:
        _scs_create(pcVar6,(bool)uVar5);
        __cxa_atexit(StringName::~StringName,pcVar6,&__dso_handle);
        __cxa_guard_release(puVar4);
      }
    }
    break;
  case 2:
    if (_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#8}::
        operator()()::sname == '\0') {
      puVar4 = &_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#8}::
                operator()()::sname;
      pcVar6 = (char *)&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::
                        {lambda()#8}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)
                                   ::{lambda()#8}::operator()()::sname);
      uVar5 = 0x19;
      goto joined_r0x0010bb64;
    }
    break;
  case 3:
    if (_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#5}::
        operator()()::sname == '\0') {
      puVar4 = &_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#5}::
                operator()()::sname;
      pcVar6 = (char *)&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::
                        {lambda()#5}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)
                                   ::{lambda()#5}::operator()()::sname);
      uVar5 = 0xed;
      goto joined_r0x0010bb64;
    }
    break;
  case 4:
    if (_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#7}::
        operator()()::sname == '\0') {
      puVar4 = &_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#7}::
                operator()()::sname;
      pcVar6 = (char *)&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::
                        {lambda()#7}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)
                                   ::{lambda()#7}::operator()()::sname);
      uVar5 = 10;
      goto joined_r0x0010bb64;
    }
    break;
  case 5:
    if (_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#2}::
        operator()()::sname == '\0') {
      puVar4 = &_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#2}::
                operator()()::sname;
      pcVar6 = (char *)&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::
                        {lambda()#2}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)
                                   ::{lambda()#2}::operator()()::sname);
      uVar5 = 0xda;
      goto joined_r0x0010bb64;
    }
    break;
  case 6:
    if (_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#6}::
        operator()()::sname == '\0') {
      puVar4 = &_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#6}::
                operator()()::sname;
      pcVar6 = (char *)&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::
                        {lambda()#6}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)
                                   ::{lambda()#6}::operator()()::sname);
      uVar5 = 0xfb;
      goto joined_r0x0010bb64;
    }
    break;
  case 7:
    if (_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#4}::
        operator()()::sname == '\0') {
      puVar4 = &_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#4}::
                operator()()::sname;
      pcVar6 = (char *)&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::
                        {lambda()#4}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)
                                   ::{lambda()#4}::operator()()::sname);
      uVar5 = 0xe4;
      goto joined_r0x0010bb64;
    }
    break;
  case 8:
    if (_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#3}::
        operator()()::sname == '\0') {
      puVar4 = &_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#3}::
                operator()()::sname;
      pcVar6 = (char *)&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::
                        {lambda()#3}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)
                                   ::{lambda()#3}::operator()()::sname);
      uVar5 = 0xdf;
      goto joined_r0x0010bb64;
    }
    break;
  case 9:
    if (_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#10}::
        operator()()::sname == '\0') {
      puVar4 = &_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#10}::
                operator()()::sname;
      pcVar6 = (char *)&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::
                        {lambda()#10}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)
                                   ::{lambda()#10}::operator()()::sname);
      uVar5 = 0x33;
      goto joined_r0x0010bb64;
    }
    break;
  default:
    if (_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#11}::
        operator()()::sname == '\0') {
      puVar4 = &_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::{lambda()#11}::
                operator()()::sname;
      pcVar6 = (char *)&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)::
                        {lambda()#11}::operator()()::sname;
      iVar3 = __cxa_guard_acquire(&_get_completion_icon(ScriptLanguage::CodeCompletionOption_const&)
                                   ::{lambda()#11}::operator()()::sname);
      if (iVar3 != 0) {
        uVar5 = 0x3b;
        goto LAB_0010ba30;
      }
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_48);
  Ref<Texture2D>::operator=((Ref<Texture2D> *)param_1,local_48);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
LAB_0010b718:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::_complete_request() */

void CodeTextEditor::_complete_request(void)

{
  char *pcVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  Object *pOVar7;
  undefined8 *puVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  Object *pOVar12;
  StringName *in_RDI;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  undefined1 local_91;
  undefined8 *local_90;
  CowData<char32_t> local_88 [8];
  Object *local_80;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (undefined8 *)0x0;
  CodeEdit::get_text_for_code_completion();
  if (*(code **)(*(long *)in_RDI + 0x378) != _code_complete_script) {
    (**(code **)(*(long *)in_RDI + 0x378))();
  }
  local_91 = 0;
  if (*(code **)(in_RDI + 0xb10) != (code *)0x0) {
    (**(code **)(in_RDI + 0xb10))(*(undefined8 *)(in_RDI + 0xb18),local_88,&local_90,&local_91);
  }
  if ((local_90 != (undefined8 *)0x0) &&
     (puVar13 = (undefined4 *)*local_90, puVar13 != (undefined4 *)0x0)) {
LAB_0010be41:
    do {
      local_68 = *(undefined8 *)(in_RDI + 0xab0);
      uStack_60 = *(undefined8 *)(in_RDI + 0xab8);
      if ((*(long *)(puVar13 + 0x1c) == 0) || (*(uint *)(*(long *)(puVar13 + 0x1c) + -8) < 2)) {
LAB_0010be62:
        pcVar1 = (char *)(puVar13 + 4);
        cVar10 = String::begins_with(pcVar1);
        if ((cVar10 == '\0') && (cVar10 = String::begins_with(pcVar1), cVar10 == '\0')) {
          cVar10 = String::begins_with(pcVar1);
          if ((cVar10 == '\0') && (cVar10 = String::begins_with(pcVar1), cVar10 == '\0')) {
            cVar10 = String::begins_with(pcVar1);
            if (cVar10 == '\0') {
              cVar10 = String::begins_with(pcVar1);
              if (cVar10 == '\0') {
                cVar10 = String::begins_with(pcVar1);
                if ((cVar10 != '\0') || (cVar10 = String::begins_with(pcVar1), cVar10 != '\0')) {
                  local_68 = *(undefined8 *)(in_RDI + 0xaf0);
                  uStack_60 = *(undefined8 *)(in_RDI + 0xaf8);
                }
              }
              else {
                local_68 = *(undefined8 *)(in_RDI + 0xae0);
                uStack_60 = *(undefined8 *)(in_RDI + 0xae8);
              }
            }
            else {
              local_68 = *(undefined8 *)(in_RDI + 0xad0);
              uStack_60 = *(undefined8 *)(in_RDI + 0xad8);
            }
          }
          else {
            local_68 = *(undefined8 *)(in_RDI + 0xb00);
            uStack_60 = *(undefined8 *)(in_RDI + 0xb08);
          }
        }
        else {
          local_68 = *(undefined8 *)(in_RDI + 0xac0);
          uStack_60 = *(undefined8 *)(in_RDI + 0xac8);
        }
      }
      else {
        local_78 = (Object *)0x114d10;
        local_80 = (Object *)0x0;
        local_70 = 0x2b;
        String::parse_latin1((StrRange *)&local_80);
        _EDITOR_GET((String *)local_58);
        bVar9 = Variant::operator_cast_to_bool((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        if (!bVar9) goto LAB_0010be62;
        if ((_complete_request()::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar11 = __cxa_guard_acquire(&_complete_request()::{lambda()#1}::operator()()::sname),
           iVar11 != 0)) {
          _scs_create((char *)&_complete_request()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_complete_request()::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_complete_request()::{lambda()#1}::operator()()::sname);
        }
        StringName::StringName((StringName *)&local_78,(String *)(puVar13 + 0x1c),false);
        local_68 = Control::get_theme_color(in_RDI,(StringName *)&local_78);
        uStack_60 = in_XMM1_Qa;
        if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
          StringName::unref();
        }
      }
      uVar3 = puVar13[0x1a];
      uVar4 = *(undefined8 *)(in_RDI + 0xa10);
      _get_completion_icon((CodeCompletionOption *)&local_80);
      pOVar7 = local_80;
      local_78 = (Object *)0x0;
      if (local_80 == (Object *)0x0) {
        CodeEdit::add_code_completion_option
                  (uVar4,*puVar13,puVar13 + 2,puVar13 + 4,&local_68,(StringName *)&local_78,
                   puVar13 + 0xc,uVar3);
        if ((local_78 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0'))
        goto LAB_0010bed0;
      }
      else {
        pOVar12 = (Object *)__dynamic_cast(local_80,&Object::typeinfo,&Resource::typeinfo,0);
        if ((pOVar12 != (Object *)0x0) &&
           (local_78 = pOVar12, cVar10 = RefCounted::reference(), cVar10 == '\0')) {
          local_78 = (Object *)0x0;
        }
        CodeEdit::add_code_completion_option
                  (uVar4,*puVar13,puVar13 + 2,puVar13 + 4,&local_68,(StringName *)&local_78,
                   puVar13 + 0xc,uVar3);
        if ((local_78 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) {
LAB_0010bed0:
          pOVar12 = local_78;
          cVar10 = predelete_handler(local_78);
          if (cVar10 != '\0') {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
          if (pOVar7 == (Object *)0x0) {
            puVar13 = *(undefined4 **)(puVar13 + 0x20);
            if (puVar13 == (undefined4 *)0x0) break;
            goto LAB_0010be41;
          }
        }
        cVar10 = RefCounted::unreference();
        if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar7), cVar10 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
      puVar13 = *(undefined4 **)(puVar13 + 0x20);
    } while (puVar13 != (undefined4 *)0x0);
  }
  CodeEdit::update_code_completion_options(SUB81(*(undefined8 *)(in_RDI + 0xa10),0));
  CowData<char32_t>::_unref(local_88);
  if (local_90 != (undefined8 *)0x0) {
    do {
      puVar8 = local_90;
      pvVar5 = (void *)*local_90;
      if (pvVar5 == (void *)0x0) {
        if (*(int *)(local_90 + 2) != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010c043;
        }
        break;
      }
      if (*(undefined8 **)((long)pvVar5 + 0x90) == local_90) {
        *local_90 = *(undefined8 *)((long)pvVar5 + 0x80);
        if (pvVar5 == (void *)local_90[1]) {
          local_90[1] = *(undefined8 *)((long)pvVar5 + 0x88);
        }
        if (*(long *)((long)pvVar5 + 0x88) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar5 + 0x88) + 0x80) =
               *(undefined8 *)((long)pvVar5 + 0x80);
        }
        if (*(long *)((long)pvVar5 + 0x80) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar5 + 0x80) + 0x88) =
               *(undefined8 *)((long)pvVar5 + 0x88);
        }
        Array::~Array((Array *)((long)pvVar5 + 0x78));
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x70));
        if (*(long *)((long)pvVar5 + 0x60) != 0) {
          LOCK();
          plVar2 = (long *)(*(long *)((long)pvVar5 + 0x60) + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar6 = *(long *)((long)pvVar5 + 0x60);
            *(undefined8 *)((long)pvVar5 + 0x60) = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        if (*(long *)((long)pvVar5 + 0x50) != 0) {
          LOCK();
          plVar2 = (long *)(*(long *)((long)pvVar5 + 0x50) + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar6 = *(long *)((long)pvVar5 + 0x50);
            *(undefined8 *)((long)pvVar5 + 0x50) = 0;
            Memory::free_static((void *)(lVar6 + -0x10),false);
          }
        }
        if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x30)] != '\0') {
          Variant::_clear_internal();
        }
        if ((*(long *)((long)pvVar5 + 0x28) != 0) &&
           (cVar10 = RefCounted::unreference(), cVar10 != '\0')) {
          pOVar7 = *(Object **)((long)pvVar5 + 0x28);
          cVar10 = predelete_handler(pOVar7);
          if (cVar10 != '\0') {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 8));
        Memory::free_static(pvVar5,false);
        *(int *)(puVar8 + 2) = *(int *)(puVar8 + 2) + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
    } while (*(int *)(local_90 + 2) != 0);
    Memory::free_static(local_90,false);
  }
LAB_0010c043:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FindReplaceBar::_bind_methods() */

void FindReplaceBar::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  MethodBind *pMVar5;
  long *plVar6;
  int *piVar7;
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
  pMVar5 = create_method_bind<FindReplaceBar,bool>(search_current);
  StringName::StringName((StringName *)&local_c8,"_search_current",false);
  local_b8._0_8_ = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  uVar3 = local_b8._0_8_;
  if ((long *)local_b8._0_8_ != (long *)0x0) {
    LOCK();
    plVar6 = (long *)(local_b8._0_8_ + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if ((long *)local_b8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_b8._0_8_ + -8);
      local_b8._0_8_ = (long *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        plVar6 = (long *)uVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar6 = plVar6 + 1;
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
  local_c8 = "error";
  local_c0 = 5;
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
  local_d0 = 0xe;
  local_d8 = "FindReplaceBar";
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
    plVar6 = (long *)(local_60 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar6 = (long *)(local_78 + -4);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        piVar7 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar7] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar7 = piVar7 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::set_edit_state(Variant const&) */

void CodeTextEditor::set_edit_state(Variant *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Variant *pVVar8;
  long lVar9;
  long in_FS_OFFSET;
  double dVar10;
  Variant local_d0 [8];
  Variant local_c8 [8];
  long local_c0;
  int local_b8 [8];
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_Dictionary(local_d0);
  uVar1 = *(undefined8 *)(param_1 + 0xa10);
  Variant::Variant((Variant *)local_58,"row");
  pVVar8 = (Variant *)Dictionary::operator[](local_d0);
  iVar4 = Variant::operator_cast_to_int(pVVar8);
  TextEdit::set_caret_line((int)uVar1,SUB41(iVar4,0),true,1,0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar1 = *(undefined8 *)(param_1 + 0xa10);
  Variant::Variant((Variant *)local_58,"column");
  pVVar8 = (Variant *)Dictionary::operator[](local_d0);
  iVar4 = Variant::operator_cast_to_int(pVVar8);
  TextEdit::set_caret_column((int)uVar1,SUB41(iVar4,0),1);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,"scroll_position");
  pVVar8 = (Variant *)Dictionary::operator[](local_d0);
  iVar4 = Variant::operator_cast_to_int(pVVar8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (iVar4 == -1) {
    TextEdit::center_viewport_to_caret((int)*(undefined8 *)(param_1 + 0xa10));
  }
  else {
    Variant::Variant((Variant *)local_58,"scroll_position");
    pVVar8 = (Variant *)Dictionary::operator[](local_d0);
    dVar10 = Variant::operator_cast_to_double(pVVar8);
    TextEdit::set_v_scroll(dVar10);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0xa10);
  Variant::Variant((Variant *)local_58,"h_scroll_position");
  pVVar8 = (Variant *)Dictionary::operator[](local_d0);
  Variant::operator_cast_to_int(pVVar8);
  TextEdit::set_h_scroll((int)uVar1);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,false);
  Variant::Variant((Variant *)local_98,"selection");
  Dictionary::get((Variant *)local_58,local_d0);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    cVar3 = Variant::needs_deinit[local_98[0]];
  }
  else {
    Variant::_clear_internal();
    cVar3 = Variant::needs_deinit[local_98[0]];
  }
  if (cVar3 == '\0') {
    cVar3 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar3 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  uVar1 = *(undefined8 *)(param_1 + 0xa10);
  if (bVar2) {
    Variant::Variant((Variant *)local_58,"selection_to_column");
    pVVar8 = (Variant *)Dictionary::operator[](local_d0);
    iVar4 = Variant::operator_cast_to_int(pVVar8);
    Variant::Variant((Variant *)local_78,"selection_to_line");
    pVVar8 = (Variant *)Dictionary::operator[](local_d0);
    iVar5 = Variant::operator_cast_to_int(pVVar8);
    Variant::Variant((Variant *)local_98,"selection_from_column");
    pVVar8 = (Variant *)Dictionary::operator[](local_d0);
    iVar6 = Variant::operator_cast_to_int(pVVar8);
    Variant::Variant((Variant *)local_b8,"selection_from_line");
    pVVar8 = (Variant *)Dictionary::operator[](local_d0);
    iVar7 = Variant::operator_cast_to_int(pVVar8);
    TextEdit::select((int)uVar1,iVar7,iVar6,iVar5,iVar4);
    if (Variant::needs_deinit[local_b8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    TextEdit::deselect((int)uVar1);
  }
  Variant::Variant((Variant *)local_58,"folded_lines");
  cVar3 = Dictionary::has(local_d0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar3 != '\0') {
    Variant::Variant((Variant *)local_58,"folded_lines");
    Dictionary::operator[](local_d0);
    Variant::operator_cast_to_Vector(local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    for (lVar9 = 0; (local_c0 != 0 && (lVar9 < *(long *)(local_c0 + -8))); lVar9 = lVar9 + 1) {
      CodeEdit::fold_line((int)*(undefined8 *)(param_1 + 0xa10));
    }
    CowData<int>::_unref((CowData<int> *)&local_c0);
  }
  Variant::Variant((Variant *)local_58,"breakpoints");
  cVar3 = Dictionary::has(local_d0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar3 != '\0') {
    Variant::Variant((Variant *)local_58,"breakpoints");
    Dictionary::operator[](local_d0);
    Variant::operator_cast_to_Array(local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    for (iVar4 = 0; iVar5 = Array::size(), iVar4 < iVar5; iVar4 = iVar4 + 1) {
      uVar1 = *(undefined8 *)(param_1 + 0xa10);
      pVVar8 = (Variant *)Array::operator[]((int)local_c8);
      iVar5 = Variant::operator_cast_to_int(pVVar8);
      CodeEdit::set_line_as_breakpoint((int)uVar1,SUB41(iVar5,0));
    }
    Array::~Array((Array *)local_c8);
  }
  Variant::Variant((Variant *)local_58,"bookmarks");
  cVar3 = Dictionary::has(local_d0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar3 != '\0') {
    Variant::Variant((Variant *)local_58,"bookmarks");
    Dictionary::operator[](local_d0);
    Variant::operator_cast_to_Array(local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    for (iVar4 = 0; iVar5 = Array::size(), iVar4 < iVar5; iVar4 = iVar4 + 1) {
      uVar1 = *(undefined8 *)(param_1 + 0xa10);
      pVVar8 = (Variant *)Array::operator[]((int)local_c8);
      iVar5 = Variant::operator_cast_to_int(pVVar8);
      CodeEdit::set_line_as_bookmarked((int)uVar1,SUB41(iVar5,0));
    }
    Array::~Array((Array *)local_c8);
  }
  cVar3 = Dictionary::is_empty();
  if (cVar3 != '\0') {
    Variant::operator_cast_to_Dictionary(local_c8);
    Dictionary::operator=((Dictionary *)(param_1 + 0xaa8),(Dictionary *)local_c8);
    Dictionary::~Dictionary((Dictionary *)local_c8);
  }
  Dictionary::~Dictionary((Dictionary *)local_d0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GotoLinePopup::_input_from_window(Ref<InputEvent> const&) */

void __thiscall GotoLinePopup::_input_from_window(GotoLinePopup *this,Ref *param_1)

{
  StringName *pSVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  
  pSVar1 = *(StringName **)param_1;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (_input_from_window(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_input_from_window(Ref<InputEvent>const&)::{lambda()#1}::
                                 operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_input_from_window(Ref<InputEvent>const&)::{lambda()#1}::operator()()::
                           sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_input_from_window(Ref<InputEvent>const&)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_input_from_window(Ref<InputEvent>const&)::{lambda()#1}::operator()()::
                           sname);
    }
  }
  cVar3 = InputEvent::is_action_pressed(pSVar1,true,false);
  if (cVar3 != '\0') {
    CodeTextEditor::set_edit_state(*(Variant **)(this + 0xdc0));
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    PopupPanel::_input_from_window((Ref *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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



/* CodeTextEditor::toggle_bookmark() */

void __thiscall CodeTextEditor::toggle_bookmark(CodeTextEditor *this)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_60;
  undefined1 local_58 [8];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TextEdit::get_sorted_carets(SUB81(local_58,0));
  CowData<int>::_copy_on_write((CowData<int> *)local_50);
  lVar9 = local_50[0];
  CowData<int>::_copy_on_write((CowData<int> *)local_50);
  if (local_50[0] == 0) {
    local_60 = 0;
    if (lVar9 == 0) goto LAB_0010d1a2;
LAB_0010d0e6:
    iVar8 = -1;
LAB_0010d0ff:
    do {
      iVar5 = TextEdit::get_selection_from_line((int)*(undefined8 *)(this + 0xa10));
      iVar5 = iVar5 + (uint)(iVar5 == iVar8);
      iVar6 = TextEdit::get_selection_to_line((int)*(undefined8 *)(this + 0xa10));
      iVar7 = iVar5;
      if (iVar5 <= iVar6) {
        do {
          cVar3 = CodeEdit::is_line_bookmarked((int)*(undefined8 *)(this + 0xa10));
          if (cVar3 != '\0') goto LAB_0010d160;
          iVar7 = iVar7 + 1;
        } while (iVar7 <= iVar6);
        iVar5 = TextEdit::get_caret_line((int)*(undefined8 *)(this + 0xa10));
        if (iVar5 != iVar8) {
          uVar2 = *(undefined8 *)(this + 0xa10);
          bVar4 = (bool)TextEdit::get_caret_line((int)uVar2);
          CodeEdit::set_line_as_bookmarked((int)uVar2,bVar4);
        }
        goto LAB_0010d180;
      }
      lVar9 = lVar9 + 4;
    } while (local_60 != lVar9);
    goto LAB_0010d190;
  }
  local_60 = local_50[0] + *(long *)(local_50[0] + -8) * 4;
  if (local_60 != lVar9) goto LAB_0010d0e6;
  goto LAB_0010d19a;
LAB_0010d160:
  do {
    iVar8 = iVar5 + 1;
    CodeEdit::set_line_as_bookmarked((int)*(undefined8 *)(this + 0xa10),SUB41(iVar5,0));
    iVar5 = iVar8;
  } while (iVar8 <= iVar6);
LAB_0010d180:
  lVar9 = lVar9 + 4;
  iVar8 = iVar6;
  if (local_60 == lVar9) goto LAB_0010d190;
  goto LAB_0010d0ff;
LAB_0010d190:
  if (local_50[0] == 0) goto LAB_0010d1a2;
LAB_0010d19a:
  lVar9 = local_50[0];
  LOCK();
  plVar1 = (long *)(local_50[0] + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    local_50[0] = 0;
    Memory::free_static((void *)(lVar9 + -0x10),false);
  }
LAB_0010d1a2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CodeTextEditor::_bind_methods() */

void CodeTextEditor::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  char *local_d8;
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
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f8 = (char *)0x0;
  local_b0 = 0xf;
  local_b8 = "validate_script";
  String::parse_latin1((StrRange *)&local_f8);
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
  local_50[0] = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f8);
  local_100 = 0;
  local_e8 = "CodeTextEditor";
  local_e0 = 0xe;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<int>::_unref((CowData<int> *)local_50);
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = "load_theme_settings";
  local_f8 = (char *)0x0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_f8);
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
  local_50[0] = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f8);
  local_e8 = "CodeTextEditor";
  local_100 = 0;
  local_e0 = 0xe;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<int>::_unref((CowData<int> *)local_50);
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = "show_errors_panel";
  local_f8 = (char *)0x0;
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_f8);
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
  local_50[0] = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f8);
  local_e8 = "CodeTextEditor";
  local_100 = 0;
  local_e0 = 0xe;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<int>::_unref((CowData<int> *)local_50);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = "show_warnings_panel";
  local_f8 = (char *)0x0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_f8);
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
  local_50[0] = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f8);
  local_e8 = "CodeTextEditor";
  local_100 = 0;
  local_e0 = 0xe;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<int>::_unref((CowData<int> *)local_50);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = "navigation_preview_ended";
  local_f8 = (char *)0x0;
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_f8);
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
  local_50[0] = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f8);
  local_e8 = "CodeTextEditor";
  local_100 = 0;
  local_e0 = 0xe;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<int>::_unref((CowData<int> *)local_50);
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  local_b8 = "";
  local_108 = 0;
  local_110 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_b8 = "p_zoom_factor";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_118);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,3);
  local_e0 = 0;
  if (local_118 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_118);
  }
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
    local_c0 = 6;
    if (local_d0 == 0x11) {
      StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
      if (local_d8 == local_b8) {
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_d8 = local_b8;
      }
      goto LAB_0010de6d;
    }
  }
  local_c0 = 6;
  StringName::operator=((StringName *)&local_d8,(StringName *)&local_108);
LAB_0010de6d:
  local_100 = 0;
  local_b8 = "zoomed";
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_100);
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
  local_50[0] = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  local_f8 = "CodeTextEditor";
  local_120 = 0;
  local_f0 = 0xe;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_f8,(String *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<int>::_unref((CowData<int> *)local_50);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
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



/* GotoLinePopup::_goto_line() */

void __thiscall GotoLinePopup::_goto_line(GotoLinePopup *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  CowData<char32_t> local_40 [8];
  long local_38;
  long local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  if ((local_38 == 0) || (iVar2 = (int)*(undefined8 *)(local_38 + -8), iVar2 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if (iVar2 != 1) {
      LineEdit::get_text();
      String::split((char *)&local_38,SUB81(local_40,0),0x111f8f);
      CowData<char32_t>::_unref(local_40);
      if (local_30[0] == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(local_30[0] + -8);
        if (0 < lVar4) {
          iVar2 = String::to_int();
          iVar2 = iVar2 + -1;
          if (-1 < iVar2) {
            iVar3 = TextEdit::get_line_count();
            if (iVar2 < iVar3) {
              iVar3 = 0;
              if ((local_30[0] != 0) && (iVar3 = 0, 1 < *(long *)(local_30[0] + -8))) {
                iVar3 = String::to_int();
                iVar3 = iVar3 + -1;
              }
              CodeTextEditor::goto_line_centered(*(CodeTextEditor **)(this + 0xdc0),iVar2,iVar3);
            }
          }
          CowData<String>::_unref((CowData<String> *)local_30);
          goto LAB_0010e2a5;
        }
      }
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar4,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
LAB_0010e2a5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GotoLinePopup::_submit() */

void __thiscall GotoLinePopup::_submit(GotoLinePopup *this)

{
  _goto_line(this);
  Window::hide();
  return;
}



/* CodeTextEditor::_update_font_ligatures() */

void __thiscall CodeTextEditor::_update_font_ligatures(CodeTextEditor *this)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  long lVar5;
  String *pSVar6;
  long lVar7;
  Object *pOVar8;
  long in_FS_OFFSET;
  Object *local_c0;
  undefined8 local_a0;
  long local_98;
  long local_90;
  Object *local_88;
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  local_88 = (Object *)0x114d40;
  local_80 = 0x2f;
  String::parse_latin1((StrRange *)&local_98);
  _EDITOR_GET((String *)local_58);
  iVar3 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  local_98 = 0;
  Control::get_theme_font((StringName *)&local_88,*(StringName **)(this + 0xa10));
  if (local_88 == (Object *)0x0) {
LAB_0010e800:
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
  }
  else {
    pOVar4 = (Object *)__dynamic_cast(local_88,&Object::typeinfo,&FontVariation::typeinfo,0);
    if (pOVar4 == (Object *)0x0) {
LAB_0010e45c:
      cVar2 = RefCounted::unreference();
      pOVar8 = local_88;
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_88), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))();
        Memory::free_static(pOVar8,false);
      }
      if ((StringName::configured != '\0') && (local_98 != 0)) {
LAB_0010e47a:
        StringName::unref();
      }
      if (pOVar4 == (Object *)0x0) goto LAB_0010e5be;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pOVar4 = (Object *)0x0;
        if (local_88 == (Object *)0x0) goto LAB_0010e800;
        goto LAB_0010e45c;
      }
      if (local_88 != (Object *)0x0) goto LAB_0010e45c;
      if ((StringName::configured != '\0') && (local_98 != 0)) goto LAB_0010e47a;
    }
    if (iVar3 == 1) {
      Dictionary::Dictionary((Dictionary *)&local_98);
      Variant::Variant((Variant *)local_58,0);
      pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar8 == (Object *)0x0) {
CodeTextEditor__update_font_ligatures:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      cVar2 = RefCounted::reference();
      local_c0 = (Object *)0x0;
      if (cVar2 != '\0') {
        local_c0 = pOVar8;
      }
      pcVar1 = *(code **)(*(long *)local_c0 + 0x1a8);
      local_88 = (Object *)0x0;
      String::parse_latin1((String *)&local_88,"calt");
      lVar5 = (*pcVar1)(local_c0,(StringName *)&local_88);
      Variant::Variant((Variant *)local_78,lVar5);
      pSVar6 = (String *)Dictionary::operator[]((Variant *)&local_98);
      if (pSVar6 != (String *)local_58) {
        if (Variant::needs_deinit[*(int *)pSVar6] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pSVar6 = 0;
        *(int *)pSVar6 = local_58[0];
        *(undefined8 *)(pSVar6 + 8) = local_50;
        *(undefined8 *)(pSVar6 + 0x10) = uStack_48;
        local_58[0] = 0;
      }
LAB_0010e55c:
      if (Variant::needs_deinit[local_78[0]] == '\0') {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      }
      else {
        Variant::_clear_internal();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      }
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_c0), cVar2 != '\0')) {
        (**(code **)(*(long *)local_c0 + 0x140))(local_c0);
        Memory::free_static(local_c0,false);
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      (**(code **)(*(long *)pOVar4 + 0x360))(pOVar4);
      Dictionary::~Dictionary((Dictionary *)&local_98);
      cVar2 = RefCounted::unreference();
    }
    else {
      if (iVar3 != 2) {
        Dictionary::Dictionary((Dictionary *)&local_98);
        Variant::Variant((Variant *)local_58,1);
        pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
        if (pOVar8 == (Object *)0x0) goto CodeTextEditor__update_font_ligatures;
        cVar2 = RefCounted::reference();
        local_c0 = (Object *)0x0;
        if (cVar2 != '\0') {
          local_c0 = pOVar8;
        }
        pcVar1 = *(code **)(*(long *)local_c0 + 0x1a8);
        local_88 = (Object *)0x0;
        String::parse_latin1((String *)&local_88,"calt");
        lVar5 = (*pcVar1)(local_c0,(StringName *)&local_88);
        Variant::Variant((Variant *)local_78,lVar5);
        pSVar6 = (String *)Dictionary::operator[]((Variant *)&local_98);
        if (pSVar6 != (String *)local_58) {
          if (Variant::needs_deinit[*(int *)pSVar6] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pSVar6 = 0;
          *(int *)pSVar6 = local_58[0];
          *(undefined8 *)(pSVar6 + 8) = local_50;
          *(undefined8 *)(pSVar6 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        goto LAB_0010e55c;
      }
      local_a0 = 0;
      String::parse_latin1
                ((String *)&local_a0,"interface/editor/code_font_custom_opentype_features");
      _EDITOR_GET((String *)local_58);
      Variant::operator_cast_to_String((Variant *)&local_88);
      String::split((char *)&local_98,SUB81((StringName *)&local_88,0),0x111f96);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      Dictionary::Dictionary((Dictionary *)&local_a0);
      for (lVar5 = 0; (local_90 != 0 && (lVar5 < *(long *)(local_90 + -8))); lVar5 = lVar5 + 1) {
        String::split((char *)&local_88,(bool)((char)local_90 + (char)lVar5 * '\b'),0x111f98);
        if (local_80 != 0) {
          if (*(long *)(local_80 + -8) == 2) {
            lVar7 = String::to_int();
            Variant::Variant((Variant *)local_58,lVar7);
            pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
            if (pOVar8 == (Object *)0x0) goto CodeTextEditor__update_font_ligatures;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              pOVar8 = (Object *)0x0;
            }
            if (local_80 == 0) {
LAB_0010eb30:
              lVar7 = 0;
LAB_0010eb33:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,0,lVar7,"p_index","size()","",false
                         ,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            lVar7 = *(long *)(local_80 + -8);
            if (lVar7 < 1) goto LAB_0010eb33;
            lVar7 = (**(code **)(*(long *)pOVar8 + 0x1a8))(pOVar8);
            Variant::Variant((Variant *)local_78,lVar7);
            pSVar6 = (String *)Dictionary::operator[]((Variant *)&local_a0);
            if (pSVar6 != (String *)local_58) {
              if (Variant::needs_deinit[*(int *)pSVar6] != '\0') {
                Variant::_clear_internal();
              }
              *(undefined4 *)pSVar6 = 0;
              *(int *)pSVar6 = local_58[0];
              *(undefined8 *)(pSVar6 + 8) = local_50;
              *(undefined8 *)(pSVar6 + 0x10) = uStack_48;
              local_58[0] = 0;
            }
LAB_0010e7b1:
            cVar2 = Variant::needs_deinit[local_78[0]];
          }
          else {
            if (*(long *)(local_80 + -8) != 1) goto LAB_0010e692;
            Variant::Variant((Variant *)local_58,1);
            pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
            if (pOVar8 == (Object *)0x0) goto CodeTextEditor__update_font_ligatures;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              pOVar8 = (Object *)0x0;
            }
            if (local_80 == 0) goto LAB_0010eb30;
            lVar7 = *(long *)(local_80 + -8);
            if (lVar7 < 1) goto LAB_0010eb33;
            lVar7 = (**(code **)(*(long *)pOVar8 + 0x1a8))(pOVar8);
            Variant::Variant((Variant *)local_78,lVar7);
            pSVar6 = (String *)Dictionary::operator[]((Variant *)&local_a0);
            if (pSVar6 == (String *)local_58) goto LAB_0010e7b1;
            if (Variant::needs_deinit[*(int *)pSVar6] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pSVar6 = 0;
            *(int *)pSVar6 = local_58[0];
            *(undefined8 *)(pSVar6 + 8) = local_50;
            *(undefined8 *)(pSVar6 + 0x10) = uStack_48;
            local_58[0] = 0;
            cVar2 = Variant::needs_deinit[local_78[0]];
          }
          if (cVar2 != '\0') {
            Variant::_clear_internal();
          }
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
LAB_0010e692:
        CowData<String>::_unref((CowData<String> *)&local_80);
      }
      (**(code **)(*(long *)pOVar4 + 0x360))(pOVar4);
      Dictionary::~Dictionary((Dictionary *)&local_a0);
      CowData<String>::_unref((CowData<String> *)&local_90);
      cVar2 = RefCounted::unreference();
    }
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar4,false);
        return;
      }
      goto LAB_0010ec34;
    }
  }
LAB_0010e5be:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010ec34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::_update_text_editor_theme() */

void CodeTextEditor::_update_text_editor_theme(void)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  StringName *pSVar6;
  int iVar7;
  StringName *in_RDI;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  Object *local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_update_text_editor_theme()::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_text_editor_theme()::{lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_text_editor_theme()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_text_editor_theme()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_text_editor_theme()::{lambda()#1}::operator()()::sname);
    }
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  (**(code **)(*(long *)in_RDI + 0xd0))();
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  pRVar1 = *(Ref **)(in_RDI + 0xa38);
  if (_update_text_editor_theme()::{lambda()#2}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_text_editor_theme()::{lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_text_editor_theme()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_text_editor_theme()::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_text_editor_theme()::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar1);
  if (local_70 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_70;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_70);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  pRVar1 = *(Ref **)(in_RDI + 0xa40);
  if (_update_text_editor_theme()::{lambda()#3}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_text_editor_theme()::{lambda()#3}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_text_editor_theme()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_text_editor_theme()::{lambda()#3}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_text_editor_theme()::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar1);
  if (local_70 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_70;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_70);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (_update_text_editor_theme()::{lambda()#4}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_text_editor_theme()::{lambda()#4}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_text_editor_theme()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_text_editor_theme()::{lambda()#4}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_text_editor_theme()::{lambda()#4}::operator()()::sname);
    }
  }
  Control::get_theme_font((StringName *)&local_70,in_RDI);
  if (_update_text_editor_theme()::{lambda()#5}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_text_editor_theme()::{lambda()#5}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_text_editor_theme()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_text_editor_theme()::{lambda()#5}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_text_editor_theme()::{lambda()#5}::operator()()::sname);
    }
  }
  Control::get_theme_font_size
            (in_RDI,(StringName *)&_update_text_editor_theme()::{lambda()#5}::operator()()::sname);
  iVar4 = Node::get_child_count(SUB81(*(undefined8 *)(in_RDI + 0xa20),0));
  if (0 < iVar4) {
    iVar7 = 0;
    do {
      lVar5 = Node::get_child((int)*(undefined8 *)(in_RDI + 0xa20),SUB41(iVar7,0));
      if (lVar5 != 0) {
        pSVar6 = (StringName *)__dynamic_cast(lVar5,&Object::typeinfo,&Control::typeinfo,0);
        if (pSVar6 != (StringName *)0x0) {
          Control::add_theme_font_override(pSVar6,(Ref *)(SceneStringNames::singleton + 0xa0));
          Control::add_theme_font_size_override(pSVar6,(int)SceneStringNames::singleton + 0xa8);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar4 != iVar7);
  }
  if (_update_text_editor_theme()::{lambda()#6}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_text_editor_theme()::{lambda()#6}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_text_editor_theme()::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_text_editor_theme()::{lambda()#6}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_text_editor_theme()::{lambda()#6}::operator()()::sname);
    }
  }
  local_68 = Control::get_theme_color
                       (in_RDI,(StringName *)
                               &_update_text_editor_theme()::{lambda()#6}::operator()()::sname);
  if (_update_text_editor_theme()::{lambda()#7}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_update_text_editor_theme()::{lambda()#7}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_update_text_editor_theme()::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_text_editor_theme()::{lambda()#7}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_update_text_editor_theme()::{lambda()#7}::operator()()::sname);
    }
  }
  local_58 = Control::get_theme_color
                       (in_RDI,(StringName *)
                               &_update_text_editor_theme()::{lambda()#7}::operator()()::sname);
  local_50._0_8_ = in_XMM1_Qa;
  Control::add_theme_color_override
            (*(StringName **)(in_RDI + 0xa90),(Color *)(SceneStringNames::singleton + 0xb0));
  Control::add_theme_color_override
            (*(StringName **)(in_RDI + 0xa38),(Color *)(SceneStringNames::singleton + 0xb0));
  Control::add_theme_color_override
            (*(StringName **)(in_RDI + 0xa40),(Color *)(SceneStringNames::singleton + 0xb0));
  _update_font_ligatures((CodeTextEditor *)in_RDI);
  if (local_70 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_70);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_70 + 0x140))(local_70);
        Memory::free_static(local_70,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::_notification(int) */

void __thiscall CodeTextEditor::_notification(CodeTextEditor *this,int param_1)

{
  String *pSVar1;
  char cVar2;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x1f) {
    cVar2 = CanvasItem::is_visible();
    if (cVar2 != '\0') {
      update_toggle_scripts_button(this);
    }
    CanvasItem::is_visible_in_tree();
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::set_process_input(SUB81(this,0));
      return;
    }
  }
  else {
    if (param_1 < 0x20) {
      if (param_1 == 1) {
        if (*(FindReplaceBar **)(this + 0xa18) != (FindReplaceBar *)0x0) {
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            FindReplaceBar::set_text_edit(*(FindReplaceBar **)(this + 0xa18),(CodeTextEditor *)0x0);
            return;
          }
          goto LAB_0010f46a;
        }
      }
      else if (param_1 == 0xd) {
        pSVar1 = *(String **)(this + 0xa38);
        itos((long)aCStack_28);
        Button::set_text(pSVar1);
        CowData<char32_t>::_unref(aCStack_28);
        CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa38),0));
        Timer::set_wait_time((double)*(float *)(this + 0xa70));
        pSVar1 = *(String **)(this + 0xa40);
        itos((long)aCStack_28);
        Button::set_text(pSVar1);
        CowData<char32_t>::_unref(aCStack_28);
        CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa40),0));
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          _set_show_warnings_panel(this,false);
          return;
        }
        goto LAB_0010f46a;
      }
    }
    else if (param_1 == 0x2d) {
      cVar2 = CanvasItem::is_visible();
      if (cVar2 != '\0') {
        update_toggle_scripts_button(this);
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_text_editor_theme();
        return;
      }
      goto LAB_0010f46a;
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
LAB_0010f46a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CodeTextEditor::CodeTextEditor() */

void __thiscall CodeTextEditor::CodeTextEditor(CodeTextEditor *this)

{
  Vector2 *pVVar1;
  code *pcVar2;
  String *pSVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Object *pOVar6;
  char cVar7;
  CodeTextEditor CVar8;
  undefined8 *puVar9;
  CodeEdit *this_00;
  BoxContainer *this_01;
  Timer *pTVar10;
  Button *pBVar11;
  ScrollContainer *this_02;
  Label *pLVar12;
  VSeparator *pVVar13;
  MenuButton *this_03;
  long *plVar14;
  CallableCustom *this_04;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long in_FS_OFFSET;
  float fVar18;
  String *local_178;
  String local_108 [8];
  String local_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  CowData<char32_t> local_e0 [8];
  String local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  CowData<char32_t> local_c0 [8];
  CowData<char32_t> local_b8 [8];
  Object *local_b0;
  undefined8 local_a8;
  CowData<char32_t> local_a0 [8];
  Object *local_98;
  undefined8 local_90;
  undefined8 local_88;
  Object *local_80;
  long local_78;
  undefined8 *local_70;
  Object *local_68;
  undefined8 local_60;
  long local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (CodeTextEditor)0x1;
  *(undefined ***)this = &PTR__initialize_classv_001211a0;
  *(undefined8 *)(this + 0xa88) = 0x3f80000000000000;
  *(undefined8 *)(this + 0xa70) = 0;
  this[0xa78] = (CodeTextEditor)0x1;
  *(undefined8 *)(this + 0xa80) = 0;
  *(undefined8 *)(this + 0xa90) = 0;
  this[0xaa0] = (CodeTextEditor)0x0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this + 0xaa8));
  uVar5 = _UNK_00121f28;
  uVar4 = __LC247;
  *(undefined2 *)(this + 0xb20) = 0;
  *(undefined8 *)(this + 0xb18) = 0;
  *(undefined8 *)(this + 0xb10) = 0;
  *(undefined8 *)(this + 0xab0) = uVar4;
  *(undefined8 *)(this + 0xab8) = uVar5;
  *(undefined8 *)(this + 0xac0) = uVar4;
  *(undefined8 *)(this + 0xac8) = uVar5;
  *(undefined8 *)(this + 0xad0) = uVar4;
  *(undefined8 *)(this + 0xad8) = uVar5;
  *(undefined8 *)(this + 0xae0) = uVar4;
  *(undefined8 *)(this + 0xae8) = uVar5;
  *(undefined8 *)(this + 0xaf0) = uVar4;
  *(undefined8 *)(this + 0xaf8) = uVar5;
  *(undefined8 *)(this + 0xb00) = uVar4;
  *(undefined8 *)(this + 0xb08) = uVar5;
  local_68 = (Object *)0x111fe1;
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  local_68 = (Object *)0x111def;
  local_80 = (Object *)0x0;
  local_60 = 0x15;
  String::parse_latin1((StrRange *)&local_80);
  ED_SHORTCUT((String *)&local_68,(StrRange *)&local_80,(StrRange *)&local_78,0x100003d);
  if (((local_68 != (Object *)0x0) &&
      (cVar7 = RefCounted::unreference(), pOVar6 = local_68, cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_68), cVar7 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  local_68 = (Object *)0x111fe9;
  local_78 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_78);
  local_68 = (Object *)0x111e05;
  local_80 = (Object *)0x0;
  local_60 = 0x16;
  String::parse_latin1((StrRange *)&local_80);
  ED_SHORTCUT((String *)&local_68,(StrRange *)&local_80,(StrRange *)&local_78,0x100002d);
  if (((local_68 != (Object *)0x0) &&
      (cVar7 = RefCounted::unreference(), pOVar6 = local_68, cVar7 != '\0')) &&
     (cVar7 = predelete_handler(local_68), cVar7 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  local_70 = (undefined8 *)0x0;
  local_58 = _LC250;
  CowData<int>::_copy_on_write((CowData<int> *)&local_70);
  puVar9 = (undefined8 *)Memory::alloc_static(0x18,false);
  if (puVar9 == (undefined8 *)0x0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",0,
                     0);
LAB_0010f7ab:
    local_178 = (String *)&local_58;
    local_80 = (Object *)0x0;
    local_68 = (Object *)0x111ffd;
    local_60 = 10;
    String::parse_latin1((StrRange *)&local_80);
    local_88 = 0;
    local_68 = (Object *)0x111e1c;
    local_60 = 0x18;
    String::parse_latin1((StrRange *)&local_88);
    ED_SHORTCUT_ARRAY((String *)&local_68,(String *)&local_88,(Vector *)&local_80,
                      SUB81((StrRange *)&local_78,0));
    if (((local_68 != (Object *)0x0) &&
        (cVar7 = RefCounted::unreference(), pOVar6 = local_68, cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_68), cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<int>::_unref((CowData<int> *)&local_70);
    this_00 = (CodeEdit *)operator_new(0x1280,"");
    CodeEdit::CodeEdit(this_00);
    postinitialize_handler((Object *)this_00);
    *(CodeEdit **)(this + 0xa10) = this_00;
    Node::add_child(this,this_00,0,0);
    Control::set_v_size_flags(*(undefined8 *)(this + 0xa10),3);
    TextEdit::set_structured_text_bidi_override(*(undefined8 *)(this + 0xa10),5);
    CodeEdit::set_draw_bookmarks_gutter(SUB81(*(undefined8 *)(this + 0xa10),0));
    CodeEdit::set_draw_line_numbers(SUB81(*(undefined8 *)(this + 0xa10),0));
    CodeEdit::set_highlight_matching_braces_enabled(SUB81(*(undefined8 *)(this + 0xa10),0));
    CodeEdit::set_auto_indent_enabled(SUB81(*(undefined8 *)(this + 0xa10),0));
    TextEdit::set_deselect_on_focus_loss_enabled(SUB81(*(undefined8 *)(this + 0xa10),0));
    this_01 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(this_01,false);
    this_01[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)this_01 = &PTR__initialize_classv_001204d0;
    postinitialize_handler((Object *)this_01);
    *(BoxContainer **)(this + 0xa20) = this_01;
    Node::add_child(this,this_01,0,0);
    Control::set_h_size_flags(*(undefined8 *)(this + 0xa20),3);
    pVVar1 = *(Vector2 **)(this + 0xa20);
    fVar18 = (float)EditorScale::get_scale();
    local_58 = (ulong)(uint)(fVar18 * __LC254) << 0x20;
    Control::set_custom_minimum_size(pVVar1);
    pTVar10 = (Timer *)operator_new(0x428,"");
    Timer::Timer(pTVar10);
    postinitialize_handler((Object *)pTVar10);
    *(Timer **)(this + 0xa68) = pTVar10;
    Node::add_child(this,pTVar10,0,0);
    Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xa68),0));
    local_68 = (Object *)0x114908;
    local_78 = 0;
    local_60 = 0x2c;
    String::parse_latin1((StrRange *)&local_78);
    _EDITOR_GET(local_178);
    CVar8 = (CodeTextEditor)Variant::operator_cast_to_bool((Variant *)local_178);
    this[0xa78] = CVar8;
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    pTVar10 = (Timer *)operator_new(0x428,"");
    Timer::Timer(pTVar10);
    postinitialize_handler((Object *)pTVar10);
    *(Timer **)(this + 0xa80) = pTVar10;
    Node::add_child(this,pTVar10,0,0);
    Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xa80),0));
    *(undefined8 *)(this + 0xa98) = 0;
    pBVar11 = (Button *)operator_new(0xc10,"");
    local_68 = (Object *)0x0;
    Button::Button(pBVar11,(String *)&local_68);
    postinitialize_handler((Object *)pBVar11);
    *(Button **)(this + 0xa28) = pBVar11;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Button::set_flat(SUB81(*(undefined8 *)(this + 0xa28),0));
    Control::set_v_size_flags(*(undefined8 *)(this + 0xa28),6);
    plVar14 = *(long **)(this + 0xa28);
    pcVar2 = *(code **)(*plVar14 + 0x108);
    create_custom_callable_function_pointer<CodeTextEditor>
              ((CodeTextEditor *)&local_68,(char *)this,
               (_func_void *)"&CodeTextEditor::_toggle_scripts_pressed");
    (*pcVar2)(plVar14,SceneStringNames::singleton + 0x238,(String *)&local_68,0);
    Callable::~Callable((Callable *)&local_68);
    Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa28),0,0);
    CanvasItem::hide();
    this_02 = (ScrollContainer *)operator_new(0xa68,"");
    ScrollContainer::ScrollContainer(this_02);
    postinitialize_handler((Object *)this_02);
    Control::set_h_size_flags(this_02,3);
    Control::set_v_size_flags(this_02,3);
    ScrollContainer::set_vertical_scroll_mode(this_02,0);
    Node::add_child(*(undefined8 *)(this + 0xa20),this_02,0,0);
    pLVar12 = (Label *)operator_new(0xad8,"");
    local_68 = (Object *)0x0;
    Label::Label(pLVar12,(String *)&local_68);
    postinitialize_handler((Object *)pLVar12);
    *(Label **)(this + 0xa90) = pLVar12;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Node::add_child(this_02,*(undefined8 *)(this + 0xa90),0,0);
    Control::set_v_size_flags(*(undefined8 *)(this + 0xa90),6);
    Control::set_mouse_filter(*(undefined8 *)(this + 0xa90),0);
    plVar14 = *(long **)(this + 0xa90);
    pcVar2 = *(code **)(*plVar14 + 0x108);
    create_custom_callable_function_pointer<CodeTextEditor,Ref<InputEvent>const&>
              ((CodeTextEditor *)&local_68,(char *)this,
               (_func_void_Ref_ptr *)"&CodeTextEditor::_error_pressed");
    (*pcVar2)(plVar14,SceneStringNames::singleton + 0x28,(String *)&local_68,0);
    Callable::~Callable((Callable *)&local_68);
    pBVar11 = (Button *)operator_new(0xc10,"");
    local_68 = (Object *)0x0;
    Button::Button(pBVar11,(String *)&local_68);
    postinitialize_handler((Object *)pBVar11);
    *(Button **)(this + 0xa38) = pBVar11;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Button::set_flat(SUB81(*(undefined8 *)(this + 0xa38),0));
    Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa38),0,0);
    Control::set_v_size_flags(*(undefined8 *)(this + 0xa38),6);
    Control::set_default_cursor_shape(*(undefined8 *)(this + 0xa38),2);
    plVar14 = *(long **)(this + 0xa38);
    pcVar2 = *(code **)(*plVar14 + 0x108);
    create_custom_callable_function_pointer<CodeTextEditor>
              ((CodeTextEditor *)&local_68,(char *)this,
               (_func_void *)"&CodeTextEditor::_error_button_pressed");
    (*pcVar2)(plVar14,SceneStringNames::singleton + 0x238,(String *)&local_68,0);
    Callable::~Callable((Callable *)&local_68);
    pSVar3 = *(String **)(this + 0xa38);
    local_78 = 0;
    local_68 = (Object *)&_LC15;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (Object *)0x112008;
    local_80 = (Object *)0x0;
    local_60 = 6;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String *)&local_68,(String *)&local_80);
    Control::set_tooltip_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    pBVar11 = (Button *)operator_new(0xc10,"");
    local_68 = (Object *)0x0;
    Button::Button(pBVar11,(String *)&local_68);
    postinitialize_handler((Object *)pBVar11);
    *(Button **)(this + 0xa40) = pBVar11;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Button::set_flat(SUB81(*(undefined8 *)(this + 0xa40),0));
    Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa40),0,0);
    Control::set_v_size_flags(*(undefined8 *)(this + 0xa40),6);
    Control::set_default_cursor_shape(*(undefined8 *)(this + 0xa40),2);
    plVar14 = *(long **)(this + 0xa40);
    pcVar2 = *(code **)(*plVar14 + 0x108);
    create_custom_callable_function_pointer<CodeTextEditor>
              ((CodeTextEditor *)&local_68,(char *)this,
               (_func_void *)"&CodeTextEditor::_warning_button_pressed");
    (*pcVar2)(plVar14,SceneStringNames::singleton + 0x238,(String *)&local_68,0);
    Callable::~Callable((Callable *)&local_68);
    pSVar3 = *(String **)(this + 0xa40);
    local_78 = 0;
    local_68 = (Object *)&_LC15;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (Object *)0x11200f;
    local_80 = (Object *)0x0;
    local_60 = 8;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String *)&local_68,(String *)&local_80);
    Control::set_tooltip_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    uVar4 = *(undefined8 *)(this + 0xa20);
    pVVar13 = (VSeparator *)operator_new(0x9e0,"");
    VSeparator::VSeparator(pVVar13);
    postinitialize_handler((Object *)pVVar13);
    Node::add_child(uVar4,pVVar13,0,0);
    this_03 = (MenuButton *)operator_new(0xc68,"");
    local_68 = (Object *)0x0;
    MenuButton::MenuButton(this_03,(String *)&local_68);
    postinitialize_handler((Object *)this_03);
    *(MenuButton **)(this + 0xa48) = this_03;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa48),0,0);
    Button::set_flat(SUB81(*(undefined8 *)(this + 0xa48),0));
    Control::set_v_size_flags(*(undefined8 *)(this + 0xa48),6);
    pSVar3 = *(String **)(this + 0xa48);
    local_78 = 0;
    local_68 = (Object *)0x111e1c;
    local_60 = 0x18;
    String::parse_latin1((StrRange *)&local_78);
    ED_GET_SHORTCUT((String *)&local_80);
    Shortcut::get_as_text();
    local_68 = (Object *)0x111e05;
    local_90 = 0;
    local_60 = 0x16;
    String::parse_latin1((StrRange *)&local_90);
    ED_GET_SHORTCUT((String *)&local_98);
    Shortcut::get_as_text();
    local_68 = (Object *)0x111def;
    local_a8 = 0;
    local_60 = 0x15;
    String::parse_latin1((StrRange *)&local_a8);
    ED_GET_SHORTCUT((String *)&local_b0);
    Shortcut::get_as_text();
    keycode_get_string(local_c0,0x1000000);
    local_68 = (Object *)&_LC15;
    local_c8 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_c8);
    local_d0 = 0;
    local_68 = (Object *)0x114e50;
    local_60 = 0x28;
    String::parse_latin1((StrRange *)&local_d0);
    TTR(local_d8,(String *)&local_d0);
    vformat<String,String,String,String>
              (local_e0,local_d8,local_c0,local_b8,local_a0,(StrRange *)&local_88);
    local_68 = (Object *)&_LC108;
    local_e8 = 0;
    local_60 = 1;
    String::parse_latin1((StrRange *)&local_e8);
    local_68 = (Object *)&_LC15;
    local_f0 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_f0);
    local_68 = (Object *)0x112018;
    local_f8 = 0;
    local_60 = 0xb;
    String::parse_latin1((StrRange *)&local_f8);
    TTR((String *)&local_68,(String *)&local_f8);
    String::operator+(local_100,(String *)&local_68);
    String::operator+(local_108,local_100);
    Control::set_tooltip_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref(local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref(local_c0);
    CowData<char32_t>::_unref(local_b8);
    if (((local_b0 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_b0), cVar7 != '\0')) {
      (**(code **)(*(long *)local_b0 + 0x140))(local_b0);
      Memory::free_static(local_b0,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref(local_a0);
    if (((local_98 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_98), cVar7 != '\0')) {
      (**(code **)(*(long *)local_98 + 0x140))(local_98);
      Memory::free_static(local_98,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (((local_80 != (Object *)0x0) &&
        (cVar7 = RefCounted::unreference(), pOVar6 = local_80, cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_80), cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
    uVar16 = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    pSVar3 = *(String **)(this + 0xa48);
    local_78 = 0;
    local_68 = (Object *)0x112024;
    local_60 = 5;
    String::parse_latin1((StrRange *)&local_78);
    Button::set_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    plVar14 = (long *)MenuButton::get_popup();
    do {
      local_78 = 0;
      fVar18 = (float)(&ZOOM_FACTOR_PRESETS)[uVar16];
      local_60 = 2;
      local_68 = (Object *)&_LC47;
      String::parse_latin1((StrRange *)&local_78);
      roundf(_LC48 * fVar18);
      itos((long)&local_68);
      String::operator+((String *)&local_80,(String *)&local_68);
      PopupMenu::add_item(plVar14,(StrRange *)&local_80,0xffffffff,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      Variant::Variant((Variant *)local_178,fVar18);
      PopupMenu::set_item_metadata((int)plVar14,(Variant *)(uVar16 & 0xffffffff));
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != 8);
    pcVar2 = *(code **)(*plVar14 + 0x108);
    this_04 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_04);
    *(CodeTextEditor **)(this_04 + 0x28) = this;
    *(undefined1 (*) [16])(this_04 + 0x30) = (undefined1  [16])0x0;
    *(undefined8 *)(this_04 + 0x40) = 0;
    *(undefined **)(this_04 + 0x20) = &_LC15;
    uVar4 = *(undefined8 *)(this + 0x60);
    *(undefined ***)this_04 = &PTR_hash_00121b70;
    *(undefined8 *)(this_04 + 0x30) = uVar4;
    *(code **)(this_04 + 0x38) = _zoom_popup_id_pressed;
    *(undefined8 *)(this_04 + 0x10) = 0;
    CallableCustomMethodPointerBase::_setup((uint *)this_04,(int)this_04 + 0x28);
    *(char **)(this_04 + 0x20) = "CodeTextEditor::_zoom_popup_id_pressed";
    Callable::Callable((Callable *)&local_68,this_04);
    (*pcVar2)(plVar14,SceneStringNames::singleton + 0x240,(String *)&local_68,0);
    Callable::~Callable((Callable *)&local_68);
    uVar4 = *(undefined8 *)(this + 0xa20);
    pVVar13 = (VSeparator *)operator_new(0x9e0,"");
    VSeparator::VSeparator(pVVar13);
    postinitialize_handler((Object *)pVVar13);
    Node::add_child(uVar4,pVVar13,0,0);
    pLVar12 = (Label *)operator_new(0xad8,"");
    local_68 = (Object *)0x0;
    Label::Label(pLVar12,(String *)&local_68);
    postinitialize_handler((Object *)pLVar12);
    *(Label **)(this + 0xa50) = pLVar12;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa50),0,0);
    Control::set_v_size_flags(*(undefined8 *)(this + 0xa50),6);
    pSVar3 = *(String **)(this + 0xa50);
    local_68 = (Object *)&_LC15;
    local_78 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (Object *)0x11202a;
    local_80 = (Object *)0x0;
    local_60 = 0x18;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String *)&local_68,(String *)&local_80);
    Control::set_tooltip_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    Control::set_mouse_filter(*(undefined8 *)(this + 0xa50),0);
    uVar4 = *(undefined8 *)(this + 0xa20);
    pVVar13 = (VSeparator *)operator_new(0x9e0,"");
    VSeparator::VSeparator(pVVar13);
    postinitialize_handler((Object *)pVVar13);
    Node::add_child(uVar4,pVVar13,0,0);
    pLVar12 = (Label *)operator_new(0xad8,"");
    local_68 = (Object *)0x0;
    Label::Label(pLVar12,(String *)&local_68);
    postinitialize_handler((Object *)pLVar12);
    *(Label **)(this + 0xa58) = pLVar12;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Node::add_child(*(undefined8 *)(this + 0xa20),*(undefined8 *)(this + 0xa58),0,0);
    Control::set_v_size_flags(*(undefined8 *)(this + 0xa58),6);
    pSVar3 = *(String **)(this + 0xa58);
    local_68 = (Object *)&_LC15;
    local_78 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (Object *)0x111b26;
    local_80 = (Object *)0x0;
    local_60 = 0xb;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String *)&local_68,(String *)&local_80);
    Control::set_tooltip_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    Control::set_mouse_filter(*(undefined8 *)(this + 0xa58),0);
    plVar14 = *(long **)(this + 0xa10);
    pcVar2 = *(code **)(*plVar14 + 0x108);
    create_custom_callable_function_pointer<CodeTextEditor,Ref<InputEvent>const&>
              ((CodeTextEditor *)&local_68,(char *)this,
               (_func_void_Ref_ptr *)"&CodeTextEditor::_text_editor_gui_input");
    (*pcVar2)(plVar14,SceneStringNames::singleton + 0x28,(String *)&local_68,0);
    Callable::~Callable((Callable *)&local_68);
    plVar14 = *(long **)(this + 0xa10);
    pcVar2 = *(code **)(*plVar14 + 0x108);
    create_custom_callable_function_pointer<CodeTextEditor>
              ((CodeTextEditor *)&local_68,(char *)this,
               (_func_void *)"&CodeTextEditor::_line_col_changed");
    StringName::StringName((StringName *)&local_78,"caret_changed",false);
    (*pcVar2)(plVar14,(StrRange *)&local_78,(String *)&local_68,0);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_68);
    plVar14 = *(long **)(this + 0xa10);
    pcVar2 = *(code **)(*plVar14 + 0x108);
    create_custom_callable_function_pointer<CodeTextEditor>
              ((CodeTextEditor *)&local_68,(char *)this,
               (_func_void *)"&CodeTextEditor::_text_changed");
    (*pcVar2)(plVar14,SceneStringNames::singleton + 0x270,(String *)&local_68,0);
    Callable::~Callable((Callable *)&local_68);
    plVar14 = *(long **)(this + 0xa10);
    pcVar2 = *(code **)(*plVar14 + 0x108);
    create_custom_callable_function_pointer<CodeTextEditor>
              ((CodeTextEditor *)&local_68,(char *)this,
               (_func_void *)"&CodeTextEditor::_complete_request");
    StringName::StringName((StringName *)&local_78,"code_completion_requested",false);
    (*pcVar2)(plVar14,(StrRange *)&local_78,(String *)&local_68,0);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_68);
    Array::Array((Array *)&local_80);
    local_58 = 0;
    local_68 = (Object *)0x0;
    local_50 = (undefined1  [16])0x0;
    Array::set_typed((uint)(StrRange *)&local_80,(StringName *)0x4,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_178,".");
    Array::push_back((Variant *)&local_80);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_178,",");
    Array::push_back((Variant *)&local_80);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_178,"(");
    Array::push_back((Variant *)&local_80);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_178,"=");
    Array::push_back((Variant *)&local_80);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_178,"$");
    Array::push_back((Variant *)&local_80);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_178,"@");
    Array::push_back((Variant *)&local_80);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_178,"\"");
    Array::push_back((Variant *)&local_80);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_178,"\'");
    Array::push_back((Variant *)&local_80);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CodeEdit::set_code_completion_prefixes(*(TypedArray **)(this + 0xa10));
    plVar14 = *(long **)(this + 0xa68);
    pcVar2 = *(code **)(*plVar14 + 0x108);
    create_custom_callable_function_pointer<CodeTextEditor>
              ((CodeTextEditor *)&local_68,(char *)this,
               (_func_void *)"&CodeTextEditor::_text_changed_idle_timeout");
    StringName::StringName((StringName *)&local_78,"timeout",false);
    (*pcVar2)(plVar14,(StrRange *)&local_78,(String *)&local_68,0);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_68);
    plVar14 = *(long **)(this + 0xa80);
    pcVar2 = *(code **)(*plVar14 + 0x108);
    create_custom_callable_function_pointer<CodeTextEditor>
              ((CodeTextEditor *)&local_68,(char *)this,
               (_func_void *)"&CodeTextEditor::_code_complete_timer_timeout");
    StringName::StringName((StringName *)&local_78,"timeout",false);
    (*pcVar2)(plVar14,(StrRange *)&local_78,(String *)&local_68,0);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_68);
    EditorScale::get_scale();
    StringName::StringName((StringName *)&local_68,"separation",false);
    Control::add_theme_constant_override((StringName *)this,(int)(String *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
    Array::~Array((Array *)&local_80);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  local_70 = puVar9 + 2;
  lVar15 = 0;
  *puVar9 = 1;
  puVar9[1] = 2;
  do {
    if (local_70 == (undefined8 *)0x0) {
      lVar17 = 0;
LAB_00110e3b:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar17,"p_index","size()","",false,
                 false);
    }
    else {
      lVar17 = local_70[-1];
      if (lVar17 <= lVar15) goto LAB_00110e3b;
      CowData<int>::_copy_on_write((CowData<int> *)&local_70);
      *(undefined4 *)((long)local_70 + lVar15 * 4) = *(undefined4 *)(local_50 + lVar15 * 4 + -8);
    }
    if (lVar15 != 0) goto LAB_0010f7ab;
    lVar15 = 1;
  } while( true );
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



/* GotoLinePopup::_property_can_revertv(StringName const&) const */

undefined8 GotoLinePopup::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GotoLinePopup::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GotoLinePopup::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CodeTextEditor::_load_theme_settings() */

void CodeTextEditor::_load_theme_settings(void)

{
  return;
}



/* CodeTextEditor::_validate_script() */

void CodeTextEditor::_validate_script(void)

{
  return;
}



/* CodeTextEditor::_code_complete_script(String const&, List<ScriptLanguage::CodeCompletionOption,
   DefaultAllocator>*) */

void CodeTextEditor::_code_complete_script(String *param_1,List *param_2)

{
  return;
}



/* CodeTextEditor::apply_code() */

void CodeTextEditor::apply_code(void)

{
  return;
}



/* CallableCustomMethodPointer<CodeTextEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CodeTextEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CodeTextEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<CodeTextEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CodeTextEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CodeTextEditor,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<CodeTextEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CodeTextEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CodeTextEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<TextEdit, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextEdit,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextEdit,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<Label, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Label,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Label,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<FindReplaceBar, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindReplaceBar,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<FindReplaceBar, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindReplaceBar,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<FindReplaceBar, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindReplaceBar,void,String_const&> *this)

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



/* CallableCustomMethodPointer<Object, Error, StringName const&, Callable const&, unsigned
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Object,Error,StringName_const&,Callable_const&,unsigned_int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Object,Error,StringName_const&,Callable_const&,unsigned_int>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<FindReplaceBar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindReplaceBar,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<GotoLinePopup, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GotoLinePopup,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GotoLinePopup,void> *this)

{
  return;
}



/* MethodBindTR<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTR<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTR<bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<CodeTextEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CodeTextEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<CodeTextEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<CodeTextEditor, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CodeTextEditor,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<CodeTextEditor,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<CodeTextEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CodeTextEditor,void>::get_argument_count
          (CallableCustomMethodPointer<CodeTextEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<TextEdit, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TextEdit,void,int>::get_argument_count
          (CallableCustomMethodPointer<TextEdit,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Label, void, String const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Label,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<Label,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<FindReplaceBar, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<FindReplaceBar,void,bool>::get_argument_count
          (CallableCustomMethodPointer<FindReplaceBar,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<FindReplaceBar, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<FindReplaceBar,bool>::get_argument_count
          (CallableCustomMethodPointer<FindReplaceBar,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<FindReplaceBar, void, String const&>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<FindReplaceBar,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<FindReplaceBar,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Control, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_argument_count
          (CallableCustomMethodPointer<Control,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Object, Error, StringName const&, Callable const&, unsigned
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Object,Error,StringName_const&,Callable_const&,unsigned_int>::
get_argument_count(CallableCustomMethodPointer<Object,Error,StringName_const&,Callable_const&,unsigned_int>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<FindReplaceBar, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<FindReplaceBar,void>::get_argument_count
          (CallableCustomMethodPointer<FindReplaceBar,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<GotoLinePopup, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GotoLinePopup,void>::get_argument_count
          (CallableCustomMethodPointer<GotoLinePopup,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<GotoLinePopup, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GotoLinePopup,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GotoLinePopup,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Object, Error, StringName const&, Callable const&, unsigned
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Object,Error,StringName_const&,Callable_const&,unsigned_int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Object,Error,StringName_const&,Callable_const&,unsigned_int>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<FindReplaceBar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindReplaceBar,void> *this)

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



/* CallableCustomMethodPointer<FindReplaceBar, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindReplaceBar,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<FindReplaceBar, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindReplaceBar,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<FindReplaceBar, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindReplaceBar,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Label, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Label,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Label,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TextEdit, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextEdit,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextEdit,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<CodeTextEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CodeTextEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CodeTextEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<CodeTextEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CodeTextEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CodeTextEditor,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<CodeTextEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CodeTextEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CodeTextEditor,void> *this)

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



/* FindReplaceBar::_property_get_revertv(StringName const&, Variant&) const */

undefined8 FindReplaceBar::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CodeTextEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CodeTextEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00129008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00129008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* FindReplaceBar::_property_can_revertv(StringName const&) const */

undefined8 FindReplaceBar::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00129008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CodeTextEditor::_property_can_revertv(StringName const&) const */

undefined8 CodeTextEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00129008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
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



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121c00;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00121c00;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* GotoLinePopup::_getv(StringName const&, Variant&) const */

undefined8 GotoLinePopup::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00129010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* GotoLinePopup::_setv(StringName const&, Variant const&) */

undefined8 GotoLinePopup::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00129018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2i>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CodeTextEditor::get_edit_state() [clone .cold] */

void CodeTextEditor::get_edit_state(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* FindReplaceBar::_bind_methods() [clone .cold] */

void FindReplaceBar::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CodeTextEditor::_bind_methods() [clone .cold] */

void CodeTextEditor::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CodeTextEditor::_update_font_ligatures() [clone .cold] */

void CodeTextEditor::_update_font_ligatures(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GotoLinePopup::_validate_propertyv(PropertyInfo&) const */

void GotoLinePopup::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  Window::_validate_property(param_1);
  if ((code *)PTR__validate_property_00129020 == Window::_validate_property) {
    return;
  }
  Popup::_validate_property(param_1);
  return;
}



/* GotoLinePopup::~GotoLinePopup() */

void __thiscall GotoLinePopup::~GotoLinePopup(GotoLinePopup *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00120bc0;
  if (Variant::needs_deinit[*(int *)(this + 0xda0)] != '\0') {
    Variant::_clear_internal();
  }
  *(code **)this = Popup::~Popup;
  if (*(long *)(this + 0xd88) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xd88);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Popup::~Popup((Popup *)this);
        return;
      }
    }
  }
  Popup::~Popup((Popup *)this);
  return;
}



/* CallableCustomMethodPointer<CodeTextEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CodeTextEditor,void>::get_object
          (CallableCustomMethodPointer<CodeTextEditor,void> *this)

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
      goto LAB_0011233d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011233d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011233d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* GotoLinePopup::is_class_ptr(void*) const */

uint GotoLinePopup::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x121d,in_RSI == &Popup::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121d,in_RSI == &PopupPanel::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121d,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121d,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121d,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* CallableCustomMethodPointer<CodeTextEditor, void, Ref<InputEvent> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CodeTextEditor,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<CodeTextEditor,void,Ref<InputEvent>const&> *this)

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



/* CallableCustomMethodPointer<FindReplaceBar, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<FindReplaceBar,bool>::get_object
          (CallableCustomMethodPointer<FindReplaceBar,bool> *this)

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



/* CallableCustomMethodPointer<FindReplaceBar, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<FindReplaceBar,void,bool>::get_object
          (CallableCustomMethodPointer<FindReplaceBar,void,bool> *this)

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



/* CallableCustomMethodPointer<Label, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Label,void,String_const&>::get_object
          (CallableCustomMethodPointer<Label,void,String_const&> *this)

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



/* CallableCustomMethodPointer<GotoLinePopup, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GotoLinePopup,void>::get_object
          (CallableCustomMethodPointer<GotoLinePopup,void> *this)

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



/* CallableCustomMethodPointer<FindReplaceBar, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<FindReplaceBar,void>::get_object
          (CallableCustomMethodPointer<FindReplaceBar,void> *this)

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



/* CallableCustomMethodPointer<Object, Error, StringName const&, Callable const&, unsigned
   int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Object,Error,StringName_const&,Callable_const&,unsigned_int>::get_object
          (CallableCustomMethodPointer<Object,Error,StringName_const&,Callable_const&,unsigned_int>
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



/* CallableCustomMethodPointer<FindReplaceBar, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<FindReplaceBar,void,String_const&>::get_object
          (CallableCustomMethodPointer<FindReplaceBar,void,String_const&> *this)

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
      goto LAB_00112cad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112cad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112cad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<CodeTextEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CodeTextEditor,void,int>::get_object
          (CallableCustomMethodPointer<CodeTextEditor,void,int> *this)

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
      goto LAB_00112dad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112dad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112dad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TextEdit, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TextEdit,void,int>::get_object
          (CallableCustomMethodPointer<TextEdit,void,int> *this)

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
      goto LAB_00112ead;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00112ead;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00112ead:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CodeTextEditor::_validate_propertyv(PropertyInfo&) const */

void CodeTextEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00129028 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00129028 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00129028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* FindReplaceBar::_validate_propertyv(PropertyInfo&) const */

void FindReplaceBar::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00129028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* CodeTextEditor::_setv(StringName const&, Variant const&) */

undefined8 CodeTextEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00129030 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00129030 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00129030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* FindReplaceBar::_setv(StringName const&, Variant const&) */

undefined8 FindReplaceBar::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00129030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* GotoLinePopup::~GotoLinePopup() */

void __thiscall GotoLinePopup::~GotoLinePopup(GotoLinePopup *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00120bc0;
  if (Variant::needs_deinit[*(int *)(this + 0xda0)] != '\0') {
    Variant::_clear_internal();
  }
  *(code **)this = Popup::~Popup;
  if (*(long *)(this + 0xd88) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xd88);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Popup::~Popup((Popup *)this);
  operator_delete(this,0xdc8);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00113428) */
/* CodeTextEditor::_getv(StringName const&, Variant&) const */

undefined8 CodeTextEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00129038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113498) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00129038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113508) */
/* FindReplaceBar::_getv(StringName const&, Variant&) const */

undefined8 FindReplaceBar::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00129038 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00113578) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00129038 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x121d,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121d,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121d,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121d,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121d,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x121d,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121d,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121d,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121d,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x121d,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* CodeTextEditor::is_class_ptr(void*) const */

ulong CodeTextEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x121d,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x121d,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x121d,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x121d,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x121d,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x121d,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* FindReplaceBar::is_class_ptr(void*) const */

ulong FindReplaceBar::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x121d,in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x121d,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x121d,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x121d,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x121d,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x121d,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* GotoLinePopup::_notificationv(int, bool) */

void __thiscall GotoLinePopup::_notificationv(GotoLinePopup *this,int param_1,bool param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = (int)this;
  if (param_2) {
    if (((param_1 == 0x1e) && (cVar2 = Window::is_visible(), cVar2 == '\0')) &&
       (lVar1 = *(long *)(this + 0xdc0), *(char *)(lVar1 + 0xaa0) != '\0')) {
      *(undefined1 *)(lVar1 + 0xaa0) = 0;
      CodeTextEditor::set_preview_navigation_change(SUB81(lVar1,0));
    }
    if ((code *)PTR__notification_00129040 != Popup::_notification) {
      PopupPanel::_notification(iVar3);
    }
    Popup::_notification(iVar3);
    Window::_notification(iVar3);
    Viewport::_notification(iVar3);
    Node::_notification(iVar3);
    return;
  }
  Node::_notification(iVar3);
  Viewport::_notification(iVar3);
  Window::_notification(iVar3);
  Popup::_notification(iVar3);
  if ((code *)PTR__notification_00129040 != Popup::_notification) {
    PopupPanel::_notification(iVar3);
  }
  if (((param_1 == 0x1e) && (cVar2 = Window::is_visible(), cVar2 == '\0')) &&
     (lVar1 = *(long *)(this + 0xdc0), *(char *)(lVar1 + 0xaa0) != '\0')) {
    *(undefined1 *)(lVar1 + 0xaa0) = 0;
    CodeTextEditor::set_preview_navigation_change(SUB81(lVar1,0));
    return;
  }
  return;
}



/* FindReplaceBar::~FindReplaceBar() */

void __thiscall FindReplaceBar::~FindReplaceBar(FindReplaceBar *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Dictionary::~Dictionary;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113970;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113970:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Dictionary::~Dictionary;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001139d0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001139d0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Dictionary::~Dictionary;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113a30;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113a30:
  Control::~Control((Control *)this);
  return;
}



/* CodeTextEditor::~CodeTextEditor() */

void __thiscall CodeTextEditor::~CodeTextEditor(CodeTextEditor *this)

{
  bool bVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_001211a0;
  Dictionary::~Dictionary((Dictionary *)(this + 0xaa8));
  bVar1 = StringName::configured != '\0';
  *(code **)this = Dictionary::~Dictionary;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113aaa;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113aaa:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Dictionary::~Dictionary;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b10;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113b10:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Dictionary::~Dictionary;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113b80;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113b80:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* FindReplaceBar::~FindReplaceBar() */

void __thiscall FindReplaceBar::~FindReplaceBar(FindReplaceBar *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Dictionary::~Dictionary;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113bf0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113bf0:
  Control::~Control((Control *)this);
  operator_delete(this,0xab0);
  return;
}



/* CodeTextEditor::~CodeTextEditor() */

void __thiscall CodeTextEditor::~CodeTextEditor(CodeTextEditor *this)

{
  bool bVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_001211a0;
  Dictionary::~Dictionary((Dictionary *)(this + 0xaa8));
  bVar1 = StringName::configured != '\0';
  *(code **)this = Dictionary::~Dictionary;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00113c7a;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00113c7a:
  Control::~Control((Control *)this);
  operator_delete(this,0xb28);
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
LAB_00113d43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113d43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00113dae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00113dae:
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
LAB_00113e33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113e33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00113e9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00113e9e:
  return &_get_class_namev()::_class_name_static;
}



/* GotoLinePopup::_get_class_namev() const */

undefined8 * GotoLinePopup::_get_class_namev(void)

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
LAB_00113f23:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00113f23;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GotoLinePopup");
      goto LAB_00113f8e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GotoLinePopup");
LAB_00113f8e:
  return &_get_class_namev()::_class_name_static;
}



/* FindReplaceBar::_get_class_namev() const */

undefined8 * FindReplaceBar::_get_class_namev(void)

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
LAB_00114013:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114013;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FindReplaceBar");
      goto LAB_0011407e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FindReplaceBar");
LAB_0011407e:
  return &_get_class_namev()::_class_name_static;
}



/* CodeTextEditor::_get_class_namev() const */

undefined8 * CodeTextEditor::_get_class_namev(void)

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
LAB_00114103:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00114103;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CodeTextEditor");
      goto LAB_0011416e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CodeTextEditor");
LAB_0011416e:
  return &_get_class_namev()::_class_name_static;
}



/* GotoLinePopup::get_class() const */

void GotoLinePopup::get_class(void)

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



/* CodeTextEditor::get_class() const */

void CodeTextEditor::get_class(void)

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



/* FindReplaceBar::get_class() const */

void FindReplaceBar::get_class(void)

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



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011550f;
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
LAB_0011550f:
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
    if (cVar6 != '\0') goto LAB_001155c3;
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
              if (lVar5 == 0) goto LAB_00115673;
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
LAB_00115673:
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
      if (cVar6 != '\0') goto LAB_001155c3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001155c3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00115810) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00129048 != Container::_notification) {
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
  if ((code *)PTR__notification_00129048 == Container::_notification) {
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<GotoLinePopup>(GotoLinePopup*, char const*, void
   (GotoLinePopup::*)()) */

GotoLinePopup *
create_custom_callable_function_pointer<GotoLinePopup>
          (GotoLinePopup *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_00121540;
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



/* Callable create_custom_callable_function_pointer<FindReplaceBar>(FindReplaceBar*, char const*,
   void (FindReplaceBar::*)()) */

FindReplaceBar *
create_custom_callable_function_pointer<FindReplaceBar>
          (FindReplaceBar *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_001215d0;
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



/* Callable create_custom_callable_function_pointer<Control>(Control*, char const*, void
   (Control::*)()) */

Control * create_custom_callable_function_pointer<Control>
                    (Control *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_001216f0;
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



/* Callable create_custom_callable_function_pointer<FindReplaceBar, String const&>(FindReplaceBar*,
   char const*, void (FindReplaceBar::*)(String const&)) */

FindReplaceBar *
create_custom_callable_function_pointer<FindReplaceBar,String_const&>
          (FindReplaceBar *param_1,char *param_2,_func_void_String_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_00121780;
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



/* Callable create_custom_callable_function_pointer<FindReplaceBar, bool>(FindReplaceBar*, char
   const*, bool (FindReplaceBar::*)()) */

FindReplaceBar *
create_custom_callable_function_pointer<FindReplaceBar,bool>
          (FindReplaceBar *param_1,char *param_2,_func_bool *param_3)

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
  *(undefined ***)this = &PTR_hash_00121810;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<FindReplaceBar, bool>(FindReplaceBar*, char
   const*, void (FindReplaceBar::*)(bool)) */

FindReplaceBar *
create_custom_callable_function_pointer<FindReplaceBar,bool>
          (FindReplaceBar *param_1,char *param_2,_func_void_bool *param_3)

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
  *(undefined ***)this = &PTR_hash_001218a0;
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



/* Callable create_custom_callable_function_pointer<Label, String const&>(Label*, char const*, void
   (Label::*)(String const&)) */

Label * create_custom_callable_function_pointer<Label,String_const&>
                  (Label *param_1,char *param_2,_func_void_String_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_00121930;
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



/* Callable create_custom_callable_function_pointer<TextEdit, int>(TextEdit*, char const*, void
   (TextEdit::*)(int)) */

TextEdit *
create_custom_callable_function_pointer<TextEdit,int>
          (TextEdit *param_1,char *param_2,_func_void_int *param_3)

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
  *(undefined ***)this = &PTR_hash_001219c0;
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



/* Callable create_custom_callable_function_pointer<CodeTextEditor>(CodeTextEditor*, char const*,
   void (CodeTextEditor::*)()) */

CodeTextEditor *
create_custom_callable_function_pointer<CodeTextEditor>
          (CodeTextEditor *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_00121a50;
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



/* Callable create_custom_callable_function_pointer<CodeTextEditor, Ref<InputEvent>
   const&>(CodeTextEditor*, char const*, void (CodeTextEditor::*)(Ref<InputEvent> const&)) */

CodeTextEditor *
create_custom_callable_function_pointer<CodeTextEditor,Ref<InputEvent>const&>
          (CodeTextEditor *param_1,char *param_2,_func_void_Ref_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_00121ae0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Ref_ptr **)(this + 0x20) = param_3 + 1;
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



/* MethodBindTR<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
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
  *puVar1 = 1;
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
      goto LAB_00116155;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00116155:
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



/* WARNING: Removing unreachable block (ram,0x00116368) */
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



/* WARNING: Removing unreachable block (ram,0x001166a0) */
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



/* WARNING: Removing unreachable block (ram,0x00116990) */
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



/* WARNING: Removing unreachable block (ram,0x00116ca8) */
/* String vformat<String, String, String, String>(String const&, String const, String const, String
   const, String const) */

undefined8 *
vformat<String,String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,String *param_5,
          String *param_6)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_108 [8];
  undefined8 local_100 [9];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_b8,param_3);
  Variant::Variant(local_a0,param_4);
  iVar4 = 0;
  Variant::Variant(local_88,param_5);
  Variant::Variant(local_70,param_6);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_108);
  iVar3 = (int)local_108;
  Array::resize(iVar3);
  pVVar2 = local_b8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 4);
  String::sprintf((Array *)local_100,param_2);
  *param_1 = local_100[0];
  local_100[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_108);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_b8);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
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
        if (pvVar5 == (void *)0x0) goto LAB_00116f94;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00116f94:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* StringBuilder::~StringBuilder() */

void __thiscall StringBuilder::~StringBuilder(StringBuilder *this)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  if (*(void **)(this + 0x30) != (void *)0x0) {
    if (*(int *)(this + 0x28) != 0) {
      *(undefined4 *)(this + 0x28) = 0;
    }
    Memory::free_static(*(void **)(this + 0x30),false);
  }
  if (*(void **)(this + 0x20) != (void *)0x0) {
    if (*(int *)(this + 0x18) != 0) {
      *(undefined4 *)(this + 0x18) = 0;
    }
    Memory::free_static(*(void **)(this + 0x20),false);
  }
  pvVar3 = *(void **)(this + 0x10);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 8) != 0) {
    lVar2 = 0;
    while( true ) {
      lVar1 = lVar2 * 8;
      lVar2 = lVar2 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + lVar1));
      if (*(uint *)(this + 8) <= (uint)lVar2) break;
      pvVar3 = *(void **)(this + 0x10);
    }
    pvVar3 = *(void **)(this + 0x10);
    *(undefined4 *)(this + 8) = 0;
    if (pvVar3 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar3,false);
  return;
}



/* CallableCustomMethodPointer<CodeTextEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CodeTextEditor,void>::call
          (CallableCustomMethodPointer<CodeTextEditor,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011729f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011729f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00117361;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011729f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC176,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00117361:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<FindReplaceBar, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,bool>::call
          (CallableCustomMethodPointer<FindReplaceBar,bool> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar4 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar5[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar6 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 0;
          if (((ulong)pcVar6 & 1) != 0) {
            pcVar6 = *(code **)(pcVar6 + *(long *)(lVar1 + lVar2) + -1);
          }
          bVar7 = (bool)(*pcVar6)();
          Variant::Variant((Variant *)local_48,bVar7);
          if (Variant::needs_deinit[*(int *)param_3] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)param_3 = local_48[0];
          *(undefined8 *)(param_3 + 8) = local_40;
          *(undefined8 *)(param_3 + 0x10) = uStack_38;
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 0;
        }
        goto LAB_0011742c;
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
  _err_print_error(&_LC176,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0011742c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
      goto LAB_0011770f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011770f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001176e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001177d1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011770f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC176,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001177d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<FindReplaceBar, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,void>::call
          (CallableCustomMethodPointer<FindReplaceBar,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011792f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011792f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001179f1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011792f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC176,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001179f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GotoLinePopup, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GotoLinePopup,void>::call
          (CallableCustomMethodPointer<GotoLinePopup,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00117b4f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00117b4f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00117c11;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00117b4f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC176,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00117c11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TextEdit, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TextEdit,void,int>::call
          (CallableCustomMethodPointer<TextEdit,void,int> *this,Variant **param_1,int param_2,
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
      goto LAB_00117dd8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00117dd8;
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
        uVar4 = _LC177;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_00117e9a;
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
LAB_00117dd8:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC176,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00117e9a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CodeTextEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CodeTextEditor,void,int>::call
          (CallableCustomMethodPointer<CodeTextEditor,void,int> *this,Variant **param_1,int param_2,
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
      goto LAB_00118058;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00118058;
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
        uVar4 = _LC177;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0011811a;
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
LAB_00118058:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC176,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011811a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CodeTextEditor, void, Ref<InputEvent> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CodeTextEditor,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<CodeTextEditor,void,Ref<InputEvent>const&> *this,
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
          goto LAB_001181ee;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_001181ee;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC178;
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
LAB_001182bd:
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
              if (pOVar5 != (Object *)0x0) goto LAB_001182bd;
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
        goto LAB_001181ee;
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
  local_48 = (Object *)0x1170a4;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC176,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001181ee:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<FindReplaceBar, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,void,bool>::call
          (CallableCustomMethodPointer<FindReplaceBar,void,bool> *this,Variant **param_1,int param_2
          ,Variant *param_3,CallError *param_4)

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
      goto LAB_00118659;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00118659;
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
        uVar4 = _LC179;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_0011871b;
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
LAB_00118659:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC176,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011871b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Object, Error, StringName const&, Callable const&, unsigned
   int>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Object,Error,StringName_const&,Callable_const&,unsigned_int>::call
          (CallableCustomMethodPointer<Object,Error,StringName_const&,Callable_const&,unsigned_int>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  long in_FS_OFFSET;
  bool bVar9;
  code *local_90;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
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
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] != 0) {
        local_90 = *(code **)(this + 0x38);
        lVar1 = *(long *)(this + 0x28);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 4) {
          if (param_2 == 3) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)local_90 & 1) != 0) {
              local_90 = *(code **)(local_90 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
            uVar4 = _LC180;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            uVar7 = Variant::operator_cast_to_unsigned_int(param_1[2]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x19);
            uVar4 = _LC181;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_Callable((Variant *)&local_68);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar4 = _LC182;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_StringName((Variant *)&local_70);
            iVar6 = (*local_90)((long *)(lVar1 + lVar2),(Variant *)&local_70,(Variant *)&local_68,
                                uVar7);
            Variant::Variant((Variant *)local_58,iVar6);
            if (Variant::needs_deinit[*(int *)param_3] != '\0') {
              Variant::_clear_internal();
            }
            bVar9 = StringName::configured != '\0';
            *(undefined4 *)param_3 = local_58[0];
            *(undefined8 *)(param_3 + 8) = local_50;
            *(undefined8 *)(param_3 + 0x10) = uStack_48;
            if ((bVar9) && (local_70 != 0)) {
              StringName::unref();
            }
            Callable::~Callable((Callable *)&local_68);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 3;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
        }
        goto LAB_001187f1;
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
  _err_print_error(&_LC176,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001187f1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<FindReplaceBar, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,void,String_const&>::call
          (CallableCustomMethodPointer<FindReplaceBar,void,String_const&> *this,Variant **param_1,
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
            uVar4 = _LC183;
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
        goto LAB_00118b3e;
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
  _err_print_error(&_LC176,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00118b3e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<Label, void, String const&>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Label,void,String_const&>::call
          (CallableCustomMethodPointer<Label,void,String_const&> *this,Variant **param_1,int param_2
          ,Variant *param_3,CallError *param_4)

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
            uVar4 = _LC183;
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
        goto LAB_00118dae;
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
  _err_print_error(&_LC176,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00118dae:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00118fdf;
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
LAB_00118fdf:
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
    if (cVar6 != '\0') goto LAB_00119093;
  }
  cVar6 = String::operator==(param_1,"Control");
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
              if (lVar5 == 0) goto LAB_0011914f;
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
LAB_0011914f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00119093;
    }
    cVar6 = String::operator==(param_1,"CanvasItem");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Node::is_class((Node *)this,param_1);
        return uVar7;
      }
      goto LAB_001191c1;
    }
  }
LAB_00119093:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001191c1:
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
            if (lVar5 == 0) goto LAB_0011924f;
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
LAB_0011924f:
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
    if (cVar6 != '\0') goto LAB_00119303;
  }
  cVar6 = String::operator==(param_1,"BoxContainer");
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
              if (lVar5 == 0) goto LAB_001193bf;
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
LAB_001193bf:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00119303;
    }
    cVar6 = String::operator==(param_1,"Container");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Control::is_class((Control *)this,param_1);
        return uVar7;
      }
      goto LAB_00119431;
    }
  }
LAB_00119303:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00119431:
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
            if (lVar4 == 0) goto LAB_001194af;
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
LAB_001194af:
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
    if (cVar5 != '\0') goto LAB_00119563;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00119563:
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
            if (lVar4 == 0) goto LAB_0011962f;
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
LAB_0011962f:
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
    if (cVar5 != '\0') goto LAB_001196e3;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001196e3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Popup::is_class(String const&) const */

undefined8 __thiscall Popup::is_class(Popup *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_001197cf;
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
LAB_001197cf:
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
    if (cVar6 != '\0') goto LAB_00119883;
  }
  cVar6 = String::operator==(param_1,"Popup");
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
      if (cVar6 != '\0') goto LAB_00119883;
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
        if (cVar6 != '\0') goto LAB_00119883;
      }
      cVar6 = String::operator==(param_1,"Viewport");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = Node::is_class((Node *)this,param_1);
          return uVar8;
        }
        goto LAB_00119a3e;
      }
    }
  }
LAB_00119883:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00119a3e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GotoLinePopup::is_class(String const&) const */

undefined8 __thiscall GotoLinePopup::is_class(GotoLinePopup *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00119abf;
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
LAB_00119abf:
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
    if (cVar6 != '\0') goto LAB_00119b73;
  }
  cVar6 = String::operator==(param_1,"GotoLinePopup");
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
              if (lVar5 == 0) goto LAB_00119c2f;
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
LAB_00119c2f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00119b73;
    }
    cVar6 = String::operator==(param_1,"PopupPanel");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Popup::is_class((Popup *)this,param_1);
        return uVar7;
      }
      goto LAB_00119ca1;
    }
  }
LAB_00119b73:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00119ca1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GotoLinePopup::_initialize_classv() */

void GotoLinePopup::_initialize_classv(void)

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
    if (PopupPanel::initialize_class()::initialized == '\0') {
      if (Popup::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00129058 != Node::_bind_methods) {
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
        local_58 = "Popup";
        local_70 = 0;
        local_50 = 5;
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
        Popup::_bind_methods();
        Popup::initialize_class()::initialized = '\x01';
      }
      local_58 = "Popup";
      local_68 = 0;
      local_50 = 5;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "PopupPanel";
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
      if ((code *)PTR__bind_methods_00129050 != Popup::_bind_methods) {
        PopupPanel::_bind_methods();
      }
      PopupPanel::initialize_class()::initialized = '\x01';
    }
    local_58 = "PopupPanel";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GotoLinePopup";
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
              if ((code *)PTR__bind_methods_00129058 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00129060 !=
                Object::_bind_compatibility_methods) {
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
      if ((code *)PTR__bind_methods_00129068 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00129058 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00129060 !=
                Object::_bind_compatibility_methods) {
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
      if ((code *)PTR__bind_methods_00129068 != Container::_bind_methods) {
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



/* FindReplaceBar::is_class(String const&) const */

undefined8 __thiscall FindReplaceBar::is_class(FindReplaceBar *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011afbf;
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
LAB_0011afbf:
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
    if (cVar6 != '\0') goto LAB_0011b073;
  }
  cVar6 = String::operator==(param_1,"FindReplaceBar");
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
              if (lVar5 == 0) goto LAB_0011b12f;
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
LAB_0011b12f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0011b073;
    }
    cVar6 = String::operator==(param_1,"HBoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar7;
      }
      goto LAB_0011b1a1;
    }
  }
LAB_0011b073:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011b1a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CodeTextEditor::is_class(String const&) const */

undefined8 __thiscall CodeTextEditor::is_class(CodeTextEditor *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0011b21f;
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
LAB_0011b21f:
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
    if (cVar6 != '\0') goto LAB_0011b2d3;
  }
  cVar6 = String::operator==(param_1,"CodeTextEditor");
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
              if (lVar5 == 0) goto LAB_0011b38f;
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
LAB_0011b38f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0011b2d3;
    }
    cVar6 = String::operator==(param_1,"VBoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar7;
      }
      goto LAB_0011b401;
    }
  }
LAB_0011b2d3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011b401:
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
  local_78 = &_LC21;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC21;
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
LAB_0011b59d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011b59d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011b5bf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011b5bf:
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
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
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
  if (local_90 == 0) {
LAB_0011b91d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011b91d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011b93f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011b93f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
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
  plVar1 = *(long **)param_1;
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
      goto LAB_0011bcd1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011bcd1:
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
  if ((code *)PTR__get_property_list_00129070 != Object::_get_property_list) {
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



/* Popup::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Popup::_get_property_listv(Popup *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Window::_get_property_listv((Window *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Popup";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Popup";
  local_98 = 0;
  local_70 = 5;
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
LAB_0011bfcd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011bfcd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011bfef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011bfef:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"Popup",false);
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



/* PopupPanel::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PopupPanel::_get_property_listv(PopupPanel *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Popup::_get_property_listv((Popup *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PopupPanel";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PopupPanel";
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
LAB_0011c3ad:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011c3ad;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011c3cf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011c3cf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"PopupPanel",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Popup::_get_property_listv((Popup *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GotoLinePopup::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GotoLinePopup::_get_property_listv(GotoLinePopup *this,List *param_1,bool param_2)

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
    PopupPanel::_get_property_listv((PopupPanel *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GotoLinePopup";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GotoLinePopup";
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
      goto LAB_0011c761;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011c761:
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
  StringName::StringName((StringName *)&local_78,"GotoLinePopup",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PopupPanel::_get_property_listv((PopupPanel *)this,param_1,true);
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
      goto LAB_0011ca11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ca11:
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
  if ((code *)PTR__get_property_list_00129078 != Object::_get_property_list) {
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
      goto LAB_0011cce1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011cce1:
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
  if ((code *)PTR__get_property_list_00129080 != CanvasItem::_get_property_list) {
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
      goto LAB_0011cfb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011cfb1:
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
      goto LAB_0011d261;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d261:
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
      goto LAB_0011d511;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d511:
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



/* CodeTextEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CodeTextEditor::_get_property_listv(CodeTextEditor *this,List *param_1,bool param_2)

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
  local_78 = "CodeTextEditor";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CodeTextEditor";
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
      goto LAB_0011d7c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011d7c1:
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
  StringName::StringName((StringName *)&local_78,"CodeTextEditor",false);
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
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
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
  if (local_90 == 0) {
LAB_0011da9d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011da9d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011dabf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011dabf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
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
  plVar1 = *(long **)param_1;
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



/* FindReplaceBar::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall FindReplaceBar::_get_property_listv(FindReplaceBar *this,List *param_1,bool param_2)

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
  local_78 = "FindReplaceBar";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FindReplaceBar";
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
      goto LAB_0011de51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011de51:
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
  StringName::StringName((StringName *)&local_78,"FindReplaceBar",false);
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



/* FindReplaceBar::_notificationv(int, bool) */

void __thiscall FindReplaceBar::_notificationv(FindReplaceBar *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  _notification(this,param_1);
  return;
}



/* MethodBind* create_method_bind<FindReplaceBar, bool>(bool (FindReplaceBar::*)()) */

MethodBind * create_method_bind<FindReplaceBar,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00121c00;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "FindReplaceBar";
  local_30 = 0xe;
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



/* FindReplaceBar::_initialize_classv() */

void FindReplaceBar::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_00129058 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_00129060 !=
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
        if ((code *)PTR__bind_methods_00129068 != Container::_bind_methods) {
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
    local_58 = "FindReplaceBar";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* CodeTextEditor::_initialize_classv() */

void CodeTextEditor::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_00129058 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_00129060 !=
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
        if ((code *)PTR__bind_methods_00129068 != Container::_bind_methods) {
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
    local_58 = "CodeTextEditor";
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



/* CodeTextEditor::_notificationv(int, bool) */

void __thiscall CodeTextEditor::_notificationv(CodeTextEditor *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  _notification(this,param_1);
  return;
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x0011f4e8) */
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



/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
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
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC176,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f860;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0011f860:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool>::validated_call
          (MethodBindTR<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fb02;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0011fb02:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool>::ptrcall(MethodBindTR<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fcc1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_0011fcc1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GotoLinePopup::popup_find_line(CodeTextEditor*) */

void GotoLinePopup::_GLOBAL__sub_I_popup_find_line(void)

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
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringBuilder::~StringBuilder() */

void __thiscall StringBuilder::~StringBuilder(StringBuilder *this)

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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CodeTextEditor::~CodeTextEditor() */

void __thiscall CodeTextEditor::~CodeTextEditor(CodeTextEditor *this)

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
/* FindReplaceBar::~FindReplaceBar() */

void __thiscall FindReplaceBar::~FindReplaceBar(FindReplaceBar *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GotoLinePopup::~GotoLinePopup() */

void __thiscall GotoLinePopup::~GotoLinePopup(GotoLinePopup *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GotoLinePopup, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GotoLinePopup,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GotoLinePopup,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<FindReplaceBar, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindReplaceBar,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Object, Error, StringName const&, Callable const&, unsigned
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Object,Error,StringName_const&,Callable_const&,unsigned_int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Object,Error,StringName_const&,Callable_const&,unsigned_int>
           *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<FindReplaceBar, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindReplaceBar,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<FindReplaceBar, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindReplaceBar,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<FindReplaceBar, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<FindReplaceBar,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<FindReplaceBar,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Label, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Label,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Label,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TextEdit, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TextEdit,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TextEdit,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CodeTextEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CodeTextEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CodeTextEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CodeTextEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CodeTextEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CodeTextEditor,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CodeTextEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CodeTextEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CodeTextEditor,void,int> *this)

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



