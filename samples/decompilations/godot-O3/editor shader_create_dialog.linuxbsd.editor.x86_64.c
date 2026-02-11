
/* LocalVector<char const*, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */

void LocalVector<char_const*,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ShaderCreateDialog::_mode_changed(int) */

void __thiscall ShaderCreateDialog::_mode_changed(ShaderCreateDialog *this,int param_1)

{
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0xe30) = param_1;
  pSVar1 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_48,param_1);
  local_58 = "last_selected_mode";
  local_60 = 0;
  local_50 = 0x12;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "shader_setup";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  EditorSettings::set_project_metadata(pSVar1,(String *)&local_68,(Variant *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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



/* ShaderCreateDialog::_template_changed(int) */

void __thiscall ShaderCreateDialog::_template_changed(ShaderCreateDialog *this,int param_1)

{
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(this + 0xe34) = param_1;
  pSVar1 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_48,param_1);
  local_58 = "last_selected_template";
  local_60 = 0;
  local_50 = 0x16;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "shader_setup";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  EditorSettings::set_project_metadata(pSVar1,(String *)&local_68,(Variant *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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



/* ShaderCreateDialog::_path_hbox_sorted() */

void __thiscall ShaderCreateDialog::_path_hbox_sorted(ShaderCreateDialog *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = Window::is_visible();
  if (cVar2 == '\0') {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    iVar3 = String::rfind_char((int)this + L'ฐ',0x2f);
    if (this[0xe22] == (ShaderCreateDialog)0x0) {
      LineEdit::select((int)*(undefined8 *)(this + 0xdf0),iVar3 + 1);
    }
    uVar1 = *(undefined8 *)(this + 0xdf0);
    LineEdit::get_text();
    LineEdit::set_caret_column((int)uVar1);
    CowData<char32_t>::_unref(local_38);
    LineEdit::set_caret_column((int)*(undefined8 *)(this + 0xdf0));
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::grab_focus();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderCreateDialog::_notification(int) */

void __thiscall ShaderCreateDialog::_notification(ShaderCreateDialog *this,int param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  String *pSVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  long local_90;
  Object *local_88;
  Object *local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 10) {
    pSVar6 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_78,"");
    local_80 = (Object *)0x0;
    String::parse_latin1((String *)&local_80,"last_selected_language");
    local_88 = (Object *)0x0;
    String::parse_latin1((String *)&local_88,"shader_setup");
    EditorSettings::get_project_metadata((String *)local_58,pSVar6,(Variant *)&local_88);
    Variant::operator_cast_to_String((Variant *)&local_90);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((local_90 == 0) || (*(uint *)(local_90 + -8) < 2)) {
      OptionButton::select((int)*(undefined8 *)(this + 0xdd0));
    }
    else {
      iVar5 = 0;
      while( true ) {
        iVar4 = OptionButton::get_item_count();
        if (iVar4 <= iVar5) break;
        OptionButton::get_item_text((int)(String *)&local_80);
        cVar3 = String::operator==((String *)&local_80,(String *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        if (cVar3 != '\0') {
          OptionButton::select((int)*(undefined8 *)(this + 0xdd0));
          *(int *)(this + 0xe28) = iVar5;
          break;
        }
        iVar5 = iVar5 + 1;
      }
    }
    pSVar6 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_78,0);
    local_80 = (Object *)0x0;
    String::parse_latin1((String *)&local_80,"last_selected_mode");
    local_88 = (Object *)0x0;
    String::parse_latin1((String *)&local_88,"shader_setup");
    EditorSettings::get_project_metadata((String *)local_58,pSVar6,(Variant *)&local_88);
    iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
    *(int *)(this + 0xe30) = iVar5;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    OptionButton::select((int)*(undefined8 *)(this + 0xdd8));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  }
  else if (param_1 == 0x20) {
    uVar7 = 0;
    do {
      StringName::StringName
                ((StringName *)&local_80,(&_notification(int)::shader_types)[uVar7],false);
      Window::get_editor_theme_icon((StringName *)&local_88);
      if ((StringName::configured != '\0') && (local_80 != (Object *)0x0)) {
        StringName::unref();
      }
      if (local_88 != (Object *)0x0) {
        OptionButton::set_item_icon((int)*(undefined8 *)(this + 0xdd0),(Ref *)(uVar7 & 0xffffffff));
        if (local_88 != (Object *)0x0) {
          cVar3 = RefCounted::unreference();
          pOVar2 = local_88;
          if (cVar3 != '\0') {
            cVar3 = predelete_handler(local_88);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 3);
    pRVar1 = *(Ref **)(this + 0xdf8);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)&local_80);
    Button::set_button_icon(pRVar1);
    if (local_80 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_80;
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(local_80);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
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



/* ShaderCreateDialog::_load_exist() */

void __thiscall ShaderCreateDialog::_load_exist(ShaderCreateDialog *this)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  CowData<char32_t> local_c8 [8];
  Object *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  String local_a8 [8];
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  undefined8 local_78 [3];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  local_98 = "Shader";
  local_a0 = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_a0);
  ResourceLoader::load(&local_c0,local_c8,(StrRange *)&local_a0,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  pOVar4 = local_c0;
  if (local_c0 == (Object *)0x0) {
    local_a0 = 0;
    uVar1 = *(undefined8 *)(this + 0xe08);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_c8);
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"");
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"Error loading shader from %s");
    TTR(local_a8,(String *)&local_b8);
    vformat<String>((CowData<char32_t> *)&local_98,local_a8,(StrRange *)&local_a0);
    AcceptDialog::set_text(uVar1,(CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    local_78[0] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xe08));
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      pOVar4 = (Object *)0x0;
    }
    if ((_load_exist()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar3 = __cxa_guard_acquire(&_load_exist()::{lambda()#1}::operator()()::sname), iVar3 != 0))
    {
      _scs_create((char *)&_load_exist()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_load_exist()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_load_exist()::{lambda()#1}::operator()()::sname);
    }
    Variant::Variant((Variant *)local_78,pOVar4);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_load_exist()::{lambda()#1}::operator()()::sname,local_88,1);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    Window::hide();
  }
  if (((local_c0 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_c0), cVar2 != '\0')) {
    (**(code **)(*(long *)local_c0 + 0x140))(local_c0);
    Memory::free_static(local_c0,false);
  }
  CowData<char32_t>::_unref(local_c8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<String, DefaultAllocator>::push_back(String const&) [clone .isra.0] */

void __thiscall
List<String,DefaultAllocator>::push_back(List<String,DefaultAllocator> *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar3) [16];
  
  if (*(long *)this == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)param_1);
  }
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar1;
  *(long *)(this_00 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)this_00;
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



/* ShaderCreateDialog::_browse_path() */

void __thiscall ShaderCreateDialog::_browse_path(ShaderCreateDialog *this)

{
  String *pSVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  CowData<char32_t> *this_00;
  long *plVar6;
  uint uVar7;
  long lVar8;
  CowData *pCVar9;
  long in_FS_OFFSET;
  undefined1 (*local_68) [16];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xe00),4);
  pSVar1 = *(String **)(this + 0xe00);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_68 = (undefined1 (*) [16])0x0;
  local_58 = "Open Shader / Choose Location";
  local_50 = 0x1d;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Window::set_title(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  uVar2 = *(undefined8 *)(this + 0xe00);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Open";
  local_68 = (undefined1 (*) [16])0x0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  AcceptDialog::set_ok_button_text(uVar2,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  EditorFileDialog::set_disable_overwrite_warning(SUB81(*(undefined8 *)(this + 0xe00),0));
  EditorFileDialog::clear_filters();
  uVar4 = OptionButton::get_selected();
  plVar6 = *(long **)(this + 0xdb8);
  if ((plVar6 == (long *)0x0) || ((int)uVar4 < 0)) {
    lVar8 = 0;
    if (plVar6 != (long *)0x0) {
      lVar8 = (long)(int)plVar6[2];
    }
  }
  else {
    lVar8 = (long)(int)plVar6[2];
    if ((int)uVar4 < (int)plVar6[2]) {
      plVar6 = (long *)*plVar6;
      if (uVar4 != 0) {
        uVar7 = 0;
        if ((uVar4 & 1) != 0) {
          plVar6 = (long *)plVar6[3];
          uVar7 = 1;
          if (uVar4 == 1) goto LAB_00100f2f;
        }
        do {
          uVar7 = uVar7 + 2;
          plVar6 = *(long **)(plVar6[3] + 0x18);
        } while (uVar4 != uVar7);
      }
LAB_00100f2f:
      local_68 = (undefined1 (*) [16])0x0;
      if (((long *)*plVar6 != (long *)0x0) &&
         (pCVar9 = *(CowData **)*plVar6, pCVar9 != (CowData *)0x0)) {
        pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar5[1] = 0;
        *pauVar5 = (undefined1  [16])0x0;
        local_68 = pauVar5;
        do {
          while( true ) {
            this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
            *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
            if (*(long *)pCVar9 != 0) {
              CowData<char32_t>::_ref(this_00,pCVar9);
            }
            lVar8 = *(long *)(*pauVar5 + 8);
            *(undefined8 *)(this_00 + 8) = 0;
            *(undefined1 (**) [16])(this_00 + 0x18) = pauVar5;
            *(long *)(this_00 + 0x10) = lVar8;
            if (lVar8 != 0) {
              *(CowData<char32_t> **)(lVar8 + 8) = this_00;
            }
            lVar8 = *(long *)*pauVar5;
            *(CowData<char32_t> **)(*pauVar5 + 8) = this_00;
            if (lVar8 != 0) break;
            pCVar9 = *(CowData **)(pCVar9 + 8);
            *(int *)pauVar5[1] = *(int *)pauVar5[1] + 1;
            *(CowData<char32_t> **)*pauVar5 = this_00;
            if (pCVar9 == (CowData *)0x0) goto LAB_00100ff6;
          }
          pCVar9 = *(CowData **)(pCVar9 + 8);
          *(int *)pauVar5[1] = *(int *)pauVar5[1] + 1;
        } while (pCVar9 != (CowData *)0x0);
LAB_00100ff6:
        for (lVar8 = *(long *)*pauVar5; lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
          pSVar1 = *(String **)(this + 0xe00);
          local_58 = "";
          local_60 = 0;
          local_50 = 0;
          String::parse_latin1((StrRange *)&local_60);
          operator+((char *)&local_58,(String *)&_LC46);
          EditorFileDialog::add_filter(pSVar1,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
      }
      pSVar1 = *(String **)(this + 0xe00);
      LineEdit::get_text();
      EditorFileDialog::set_current_path(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      EditorFileDialog::popup_file_dialog();
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_68);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  _err_print_index_error
            ("get","./core/templates/list.h",0x21c,(long)(int)uVar4,lVar8,"p_index","size()","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* ShaderCreateDialog::_validate_path(String const&) */

String * ShaderCreateDialog::_validate_path(String *param_1)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulong uVar16;
  undefined1 auVar17 [16];
  Object *pOVar18;
  undefined8 uVar19;
  char cVar20;
  int iVar21;
  uint uVar22;
  long *plVar23;
  bool in_DL;
  int iVar24;
  long lVar25;
  uint uVar26;
  long in_RSI;
  char *pcVar27;
  String *pSVar28;
  long lVar29;
  void *pvVar30;
  String *pSVar31;
  uint uVar32;
  long in_FS_OFFSET;
  bool bVar33;
  int local_c4;
  long local_a0;
  Object *local_98;
  Object *local_90;
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::strip_edges(SUB81((CowData<char32_t> *)&local_a0,0),in_DL);
  if ((local_a0 == 0) || (*(uint *)(local_a0 + -8) < 2)) {
    local_78[0] = 0;
    local_68 = ZEXT816(0x1080bf);
    String::parse_latin1((StrRange *)local_78);
    local_80 = 0;
    local_68._8_8_ = 0xe;
    local_68._0_8_ = "Path is empty.";
    String::parse_latin1((StrRange *)&local_80);
    TTR(param_1,(String *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    goto LAB_00101226;
  }
  String::get_file();
  String::get_basename();
  if ((local_68._0_8_ == 0) || (iVar21 = (int)*(undefined8 *)(local_68._0_8_ + -8), iVar21 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
LAB_00101427:
    auVar17._8_8_ = 0;
    auVar17._0_8_ = local_68._8_8_;
    local_68 = auVar17 << 0x40;
    String::parse_latin1((String *)local_68,"");
    pcVar27 = "Filename is empty.";
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    if (iVar21 == 1) goto LAB_00101427;
    ProjectSettings::get_singleton();
    ProjectSettings::localize_path((String *)local_68);
    if (local_a0 != local_68._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      local_a0 = local_68._0_8_;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_68._8_8_;
      local_68 = auVar11 << 0x40;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    cVar20 = String::begins_with((char *)&local_a0);
    if (cVar20 != '\0') {
      DirAccess::create(&local_98,0);
      pOVar18 = local_98;
      pcVar2 = *(code **)(*(long *)local_98 + 0x1a8);
      String::get_base_dir();
      iVar21 = (*pcVar2)(pOVar18,(CowData<char32_t> *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      if (iVar21 == 0) {
        DirAccess::create(&local_90,0);
        pOVar18 = local_90;
        pcVar2 = *(code **)(*(long *)local_90 + 0x1d8);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = local_68._8_8_;
        local_68 = auVar14 << 0x40;
        CowData<char32_t>::_ref((CowData<char32_t> *)local_68,(CowData *)&local_a0);
        cVar20 = (*pcVar2)(pOVar18,(CowData<char32_t> *)local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
        if (cVar20 == '\0') {
          String::get_extension();
          plVar23 = *(long **)(in_RSI + 0xdb8);
          local_48 = 2;
          local_68 = (undefined1  [16])0x0;
          local_58 = (undefined1  [16])0x0;
          if (plVar23 != (long *)0x0) {
            plVar23 = (long *)*plVar23;
          }
          local_c4 = 3;
          pSVar28 = (String *)0x0;
          do {
            if ((undefined8 *)*plVar23 != (undefined8 *)0x0) {
              uVar16 = local_48;
              for (pSVar31 = *(String **)*plVar23; local_48 = uVar16, pSVar31 != (String *)0x0;
                  pSVar31 = *(String **)(pSVar31 + 8)) {
                if ((pSVar28 != (String *)0x0) &&
                   (local_48._4_4_ = (uint)(uVar16 >> 0x20), bVar33 = local_48._4_4_ != 0, bVar33))
                {
                  uVar1 = *(uint *)(hash_table_size_primes + (uVar16 & 0xffffffff) * 4);
                  lVar29 = *(long *)(hash_table_size_primes_inv + (uVar16 & 0xffffffff) * 8);
                  uVar22 = String::hash();
                  uVar16 = CONCAT44(0,uVar1);
                  uVar19 = local_58._8_8_;
                  uVar26 = 1;
                  if (uVar22 != 0) {
                    uVar26 = uVar22;
                  }
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = (ulong)uVar26 * lVar29;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = uVar16;
                  lVar25 = SUB168(auVar3 * auVar7,8);
                  uVar22 = *(uint *)(local_58._8_8_ + lVar25 * 4);
                  if (uVar22 != 0) {
                    uVar32 = 0;
                    iVar21 = SUB164(auVar3 * auVar7,8);
                    do {
                      if (uVar26 == uVar22) {
                        cVar20 = String::operator==(pSVar28 + (ulong)*(uint *)(local_68._8_8_ +
                                                                              lVar25 * 4) * 8,
                                                    pSVar31);
                        if (cVar20 != '\0') goto LAB_00101770;
                      }
                      uVar32 = uVar32 + 1;
                      auVar4._8_8_ = 0;
                      auVar4._0_8_ = (ulong)(iVar21 + 1) * lVar29;
                      auVar8._8_8_ = 0;
                      auVar8._0_8_ = uVar16;
                      lVar25 = SUB168(auVar4 * auVar8,8);
                      uVar22 = *(uint *)(uVar19 + lVar25 * 4);
                      iVar21 = SUB164(auVar4 * auVar8,8);
                    } while ((uVar22 != 0) &&
                            (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar22 * lVar29,
                            auVar9._8_8_ = 0, auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
                            auVar6._0_8_ = (ulong)((uVar1 + iVar21) - SUB164(auVar5 * auVar9,8)) *
                                           lVar29, auVar10._8_8_ = 0, auVar10._0_8_ = uVar16,
                            uVar32 <= SUB164(auVar6 * auVar10,8)));
                  }
                }
                HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                          ((String *)local_78);
                pSVar28 = (String *)local_68._0_8_;
LAB_00101770:
                uVar16 = local_48;
              }
            }
            local_c4 = local_c4 + -1;
            plVar23 = (long *)plVar23[3];
          } while (local_c4 != 0);
          uVar1 = local_48._4_4_;
          if (local_48._4_4_ != 0) {
            iVar21 = 1;
            pSVar31 = pSVar28;
            while (cVar20 = String::nocasecmp_to(pSVar31), cVar20 != '\0') {
              if ((int)uVar1 <= iVar21) {
                local_78[0] = 0;
                String::parse_latin1((String *)local_78,"");
                local_80 = 0;
                String::parse_latin1((String *)&local_80,"Invalid extension.");
                TTR(param_1,(String *)&local_80);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
                if (pSVar28 == (String *)0x0) goto LAB_0010188c;
                goto LAB_00101a16;
              }
              iVar21 = iVar21 + 1;
              pSVar31 = pSVar31 + 8;
            }
            iVar21 = *(int *)(in_RSI + 0xe28);
            plVar23 = *(long **)(in_RSI + 0xdb8);
            if (iVar21 < 0) {
              lVar29 = 0;
              if (plVar23 == (long *)0x0) goto LAB_00101af7;
            }
            else {
              if (plVar23 == (long *)0x0) {
                lVar29 = 0;
                goto LAB_00101af7;
              }
              if (iVar21 < (int)plVar23[2]) {
                plVar23 = (long *)*plVar23;
                if (iVar21 != 0) {
                  iVar24 = 0;
                  if (((long)iVar21 & 1U) != 0) {
                    plVar23 = (long *)plVar23[3];
                    iVar24 = 1;
                    if (iVar21 == 1) goto LAB_001019a7;
                  }
                  do {
                    iVar24 = iVar24 + 2;
                    plVar23 = *(long **)(plVar23[3] + 0x18);
                  } while (iVar21 != iVar24);
                }
LAB_001019a7:
                if ((undefined8 *)*plVar23 != (undefined8 *)0x0) {
                  for (pSVar31 = *(String **)*plVar23; pSVar31 != (String *)0x0;
                      pSVar31 = *(String **)(pSVar31 + 8)) {
                    cVar20 = String::nocasecmp_to(pSVar31);
                    if (cVar20 == '\0') {
                      *(undefined8 *)param_1 = 0;
                      String::parse_latin1(param_1,"");
                      goto LAB_00101a0d;
                    }
                  }
                }
                local_78[0] = 0;
                String::parse_latin1((String *)local_78,"");
                local_80 = 0;
                String::parse_latin1((String *)&local_80,"Wrong extension chosen.");
                TTR(param_1,(String *)&local_80);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
LAB_00101a0d:
                if (pSVar28 != (String *)0x0) {
LAB_00101a16:
                  pvVar30 = (void *)local_58._8_8_;
                  if (*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) != 0) {
                    memset((void *)local_58._8_8_,0,
                           (ulong)*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) *
                           4);
                  }
                  uVar26 = 0;
                  pSVar31 = pSVar28;
                  do {
                    uVar26 = uVar26 + 1;
                    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar31);
                    pSVar31 = (String *)((CowData<char32_t> *)pSVar31 + 8);
                  } while (uVar26 < uVar1);
                  goto LAB_00101913;
                }
                goto LAB_0010188c;
              }
            }
            lVar29 = (long)(int)plVar23[2];
LAB_00101af7:
            _err_print_index_error
                      ("get","./core/templates/list.h",0x21c,(long)iVar21,lVar29,"p_index","size()",
                       "",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          local_78[0] = 0;
          String::parse_latin1((String *)local_78,"");
          local_80 = 0;
          String::parse_latin1((String *)&local_80,"Invalid extension.");
          TTR(param_1,(String *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
          if (pSVar28 != (String *)0x0) {
            pvVar30 = (void *)local_58._8_8_;
LAB_00101913:
            Memory::free_static(pSVar28,false);
            Memory::free_static((void *)local_58._0_8_,false);
            Memory::free_static((void *)local_68._8_8_,false);
            Memory::free_static(pvVar30,false);
          }
LAB_0010188c:
          CowData<char32_t>::_unref(local_88);
        }
        else {
          auVar15._8_8_ = 0;
          auVar15._0_8_ = local_68._8_8_;
          local_68 = auVar15 << 0x40;
          String::parse_latin1((String *)local_68,"");
          local_78[0] = 0;
          String::parse_latin1((String *)local_78,"A directory with the same name exists.");
          TTR(param_1,(String *)local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
        }
        if (((local_90 != (Object *)0x0) && (cVar20 = RefCounted::unreference(), cVar20 != '\0')) &&
           (cVar20 = predelete_handler(local_90), cVar20 != '\0')) {
          (**(code **)(*(long *)local_90 + 0x140))(local_90);
          Memory::free_static(local_90,false);
        }
      }
      else {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_68._8_8_;
        local_68 = auVar12 << 0x40;
        String::parse_latin1((String *)local_68,"");
        local_78[0] = 0;
        String::parse_latin1((String *)local_78,"Invalid base path.");
        TTR(param_1,(String *)local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      }
      if (((local_98 != (Object *)0x0) && (cVar20 = RefCounted::unreference(), cVar20 != '\0')) &&
         (cVar20 = predelete_handler(local_98), cVar20 != '\0')) {
        (**(code **)(*(long *)local_98 + 0x140))(local_98);
        Memory::free_static(local_98,false);
      }
      goto LAB_00101226;
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = local_68._8_8_;
    local_68 = auVar13 << 0x40;
    String::parse_latin1((String *)local_68,"");
    pcVar27 = "Path is not local.";
  }
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,pcVar27);
  TTR(param_1,(String *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
LAB_00101226:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderCreateDialog::_path_changed(String const&) */

void __thiscall ShaderCreateDialog::_path_changed(ShaderCreateDialog *this,String *param_1)

{
  code *pcVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  long in_FS_OFFSET;
  Object *local_48;
  String local_40 [8];
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xe22] == (ShaderCreateDialog)0x0) {
    *(undefined2 *)(this + 0xe20) = 1;
    _validate_path((String *)&local_38);
    if (*(long *)(this + 0xe18) != local_38) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe18));
      lVar3 = local_38;
      local_38 = 0;
      *(long *)(this + 0xe18) = lVar3;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if ((*(long *)(this + 0xe18) != 0) && (1 < *(uint *)(*(long *)(this + 0xe18) + -8))) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorValidationPanel::update();
        return;
      }
      goto LAB_00101d28;
    }
    DirAccess::create(&local_48,0);
    ProjectSettings::get_singleton();
    String::strip_edges(SUB81((String *)&local_38,0),SUB81(param_1,0));
    ProjectSettings::localize_path(local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    pOVar2 = local_48;
    pcVar1 = *(code **)(*(long *)local_48 + 0x1d0);
    local_38 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)local_40);
    cVar4 = (*pcVar1)(pOVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if (cVar4 != '\0') {
      this[0xe20] = (ShaderCreateDialog)0x0;
    }
    this[0xe21] = (ShaderCreateDialog)0x1;
    EditorValidationPanel::update();
    CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
    if (local_48 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_48);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_48 + 0x140))(local_48);
          Memory::free_static(local_48,false);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101d28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderCreateDialog::_built_in_toggled(bool) */

void __thiscall ShaderCreateDialog::_built_in_toggled(ShaderCreateDialog *this,bool param_1)

{
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xe22] = (ShaderCreateDialog)param_1;
  if (param_1) {
    this[0xe20] = (ShaderCreateDialog)0x1;
  }
  else {
    LineEdit::get_text();
    _path_changed(this,(String *)aCStack_28);
    CowData<char32_t>::_unref(aCStack_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorValidationPanel::update();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderCreateDialog::_file_selected(String const&) */

void ShaderCreateDialog::_file_selected(String *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_48;
  CowData<char32_t> local_40 [8];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  ProjectSettings::localize_path((String *)&local_48);
  local_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0xdf0);
  if (local_48 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_48);
  }
  LineEdit::set_text(uVar1,(CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  _path_changed((ShaderCreateDialog *)param_1,(String *)&local_48);
  String::get_file();
  String::get_basename();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  iVar2 = String::rfind((String *)&local_48,(int)local_40);
  LineEdit::select((int)*(undefined8 *)(param_1 + 0xdf0),iVar2);
  LineEdit::set_caret_column((int)*(undefined8 *)(param_1 + 0xdf0));
  Control::grab_focus();
  CowData<char32_t>::_unref(local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ShaderCreateDialog::_update_dialog() */

void __thiscall ShaderCreateDialog::_update_dialog(ShaderCreateDialog *this)

{
  ShaderCreateDialog SVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  uVar4 = *(undefined8 *)(this + 0xdc8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xe22] == (ShaderCreateDialog)0x0) {
    if (this[0xe21] == (ShaderCreateDialog)0x0) {
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"Invalid path.");
      TTR(local_48,(String *)&local_58);
      EditorValidationPanel::set_message(uVar4,0,local_48,2,1);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      uVar4 = *(undefined8 *)(this + 0xdc8);
      if (this[0xe22] != (ShaderCreateDialog)0x0) goto LAB_00101f5d;
    }
    if ((*(long *)(this + 0xe18) == 0) || (*(uint *)(*(long *)(this + 0xe18) + -8) < 2))
    goto LAB_00101f5d;
    EditorValidationPanel::set_message(uVar4,1,this + 0xe18,2,1);
LAB_00101f6d:
    SVar1 = this[0xe23];
  }
  else {
LAB_00101f5d:
    cVar2 = EditorValidationPanel::is_valid();
    if ((cVar2 == '\0') || (this[0xe20] != (ShaderCreateDialog)0x0)) goto LAB_00101f6d;
    uVar4 = *(undefined8 *)(this + 0xdc8);
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"File exists, it will be reused.");
    TTR(local_48,(String *)&local_58);
    EditorValidationPanel::set_message(uVar4,0,local_48,0,1);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    SVar1 = this[0xe23];
  }
  if (SVar1 == (ShaderCreateDialog)0x0) {
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xde8),0));
  }
  if (this[0xe22] == (ShaderCreateDialog)0x0) {
    LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xdf0),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf8),0));
    if (this[0xe25] != (ShaderCreateDialog)0x0) {
      this[0xe25] = (ShaderCreateDialog)0x0;
      LineEdit::get_text();
      _path_changed(this,local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    }
  }
  else {
    LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xdf0),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf8),0));
    this[0xe25] = (ShaderCreateDialog)0x1;
  }
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xde8),0));
  if (this[0xe22] == (ShaderCreateDialog)0x0) {
LAB_00101fd4:
    if (this[0xe20] == (ShaderCreateDialog)0x0) {
      local_50 = 0;
      if (this[0xe24] != (ShaderCreateDialog)0x0) {
        String::parse_latin1((String *)&local_50,"");
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"Load");
        TTR(local_48,(String *)&local_58);
        AcceptDialog::set_ok_button_text(this,local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if (this[0xe21] == (ShaderCreateDialog)0x0) goto LAB_001021e4;
        local_50 = 0;
        uVar4 = *(undefined8 *)(this + 0xdc8);
        String::parse_latin1((String *)&local_50,"");
        pcVar5 = "Will load an existing shader file.";
        goto LAB_00102413;
      }
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"Create");
      TTR(local_48,(String *)&local_58);
      AcceptDialog::set_ok_button_text(this,local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      local_50 = 0;
      uVar4 = *(undefined8 *)(this + 0xdc8);
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"Shader file already exists.");
      TTR(local_48,(String *)&local_58);
      uVar3 = 2;
      goto LAB_00102431;
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"Create");
    TTR(local_48,(String *)&local_58);
    AcceptDialog::set_ok_button_text(this,local_48);
  }
  else {
    uVar4 = *(undefined8 *)(this + 0xdc8);
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1
              ((String *)&local_58,
               "Note: Built-in shaders can\'t be edited using an external editor.");
    TTR(local_48,(String *)&local_58);
    EditorValidationPanel::set_message(uVar4,2,local_48,3,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if (this[0xe22] == (ShaderCreateDialog)0x0) goto LAB_00101fd4;
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"Create");
    TTR(local_48,(String *)&local_58);
    AcceptDialog::set_ok_button_text(this,local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    local_50 = 0;
    uVar4 = *(undefined8 *)(this + 0xdc8);
    String::parse_latin1((String *)&local_50,"");
    pcVar5 = "Built-in shader (into scene file).";
LAB_00102413:
    local_58 = 0;
    String::parse_latin1((String *)&local_58,pcVar5);
    TTR(local_48,(String *)&local_58);
    uVar3 = 0;
LAB_00102431:
    EditorValidationPanel::set_message(uVar4,1,local_48,uVar3,1);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001021e4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderCreateDialog::_type_changed(int) */

void __thiscall ShaderCreateDialog::_type_changed(ShaderCreateDialog *this,int param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  CowData<char32_t> *this_00;
  String *pSVar5;
  long lVar6;
  CowData *pCVar7;
  long *plVar8;
  long in_FS_OFFSET;
  Variant *local_110;
  CowData<char32_t> local_d8 [8];
  undefined *local_d0;
  undefined *local_c8;
  CowData<char32_t> local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined1 (*local_98) [16];
  undefined8 local_90;
  char local_88;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar8 = *(long **)(this + 0xdb8);
  *(int *)(this + 0xe28) = param_1;
  if ((plVar8 == (long *)0x0) || (param_1 < 0)) {
    lVar6 = 0;
    if (plVar8 != (long *)0x0) {
      lVar6 = (long)(int)plVar8[2];
    }
  }
  else {
    lVar6 = (long)(int)plVar8[2];
    if (param_1 < (int)plVar8[2]) {
      plVar8 = (long *)*plVar8;
      if (param_1 != 0) {
        iVar3 = 0;
        if ((param_1 & 1U) != 0) {
          plVar8 = (long *)plVar8[3];
          iVar3 = 1;
          if (param_1 == 1) goto LAB_00102590;
        }
        do {
          iVar3 = iVar3 + 2;
          plVar8 = *(long **)(plVar8[3] + 0x18);
        } while (param_1 != iVar3);
      }
LAB_00102590:
      local_98 = (undefined1 (*) [16])0x0;
      if (((long *)*plVar8 != (long *)0x0) &&
         (pCVar7 = *(CowData **)*plVar8, pCVar7 != (CowData *)0x0)) {
        local_98 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)local_98[1] = 0;
        *local_98 = (undefined1  [16])0x0;
        do {
          while( true ) {
            this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
            *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
            if (*(long *)pCVar7 != 0) {
              CowData<char32_t>::_ref(this_00,pCVar7);
            }
            lVar6 = *(long *)(*local_98 + 8);
            *(undefined8 *)(this_00 + 8) = 0;
            *(undefined1 (**) [16])(this_00 + 0x18) = local_98;
            *(long *)(this_00 + 0x10) = lVar6;
            if (lVar6 != 0) {
              *(CowData<char32_t> **)(lVar6 + 8) = this_00;
            }
            lVar6 = *(long *)*local_98;
            *(CowData<char32_t> **)(*local_98 + 8) = this_00;
            if (lVar6 != 0) break;
            pCVar7 = *(CowData **)(pCVar7 + 8);
            *(int *)local_98[1] = *(int *)local_98[1] + 1;
            *(CowData<char32_t> **)*local_98 = this_00;
            if (pCVar7 == (CowData *)0x0) goto LAB_00102658;
          }
          pCVar7 = *(CowData **)(pCVar7 + 8);
          *(int *)local_98[1] = *(int *)local_98[1] + 1;
        } while (pCVar7 != (CowData *)0x0);
      }
LAB_00102658:
      local_90 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(plVar8 + 1));
      local_88 = (char)plVar8[2];
      operator+((char *)local_d8,(String *)&_LC20);
      LineEdit::get_text();
      local_c8 = (undefined *)0x0;
      local_a8 = "";
      local_a0 = 0;
      String::parse_latin1((StrRange *)&local_c8);
      if ((local_d0 == (undefined *)0x0) || (*(uint *)(local_d0 + -8) < 2)) {
        operator+((char *)&local_a8,(String *)"shader");
        if (local_d0 != local_a8) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          local_d0 = local_a8;
          local_a8 = (undefined *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      }
      else {
        iVar3 = String::find_char((wchar32)(CowData<char32_t> *)&local_d0,0x2e);
        if (iVar3 != -1) {
          String::get_extension();
          if (local_c8 != local_a8) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            local_c8 = local_a8;
            local_a8 = (undefined *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        }
        if ((local_c8 == (undefined *)0x0) || (*(uint *)(local_c8 + -8) < 2)) {
          String::operator+=((String *)&local_d0,(String *)local_d8);
        }
        else {
          String::get_basename();
          String::operator+((String *)&local_a8,(String *)&local_b0);
          if (local_d0 != local_a8) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            local_d0 = local_a8;
            local_a8 = (undefined *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        }
      }
      _path_changed(this,(String *)&local_d0);
      local_a8 = (char *)0x0;
      uVar1 = *(undefined8 *)(this + 0xdf0);
      if (local_d0 != (undefined *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_d0);
      }
      LineEdit::set_text(uVar1,(CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      OptionButton::set_item_disabled((int)*(undefined8 *)(this + 0xdd0),true);
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdd8),0));
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xde0),0));
      OptionButton::clear();
      iVar3 = (int)(CowData<char32_t> *)&local_a8;
      if (local_88 == '\0') {
        pSVar5 = *(String **)(this + 0xde0);
        local_b0 = 0;
        String::parse_latin1((String *)&local_b0,"");
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"N/A");
        TTR((String *)&local_a8,(String *)&local_b8);
        OptionButton::add_item(pSVar5,iVar3);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      }
      else {
        pSVar5 = (String *)EditorSettings::get_singleton();
        Variant::Variant((Variant *)local_78,0);
        local_a8 = (char *)0x0;
        String::parse_latin1((String *)&local_a8,"last_selected_template");
        local_b0 = 0;
        String::parse_latin1((String *)&local_b0,"shader_setup");
        EditorSettings::get_project_metadata((String *)local_58,pSVar5,(Variant *)&local_b0);
        iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        pSVar5 = *(String **)(this + 0xde0);
        local_b0 = 0;
        String::parse_latin1((String *)&local_b0,"");
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"Default");
        TTR((String *)&local_a8,(String *)&local_b8);
        OptionButton::add_item(pSVar5,iVar3);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        pSVar5 = *(String **)(this + 0xde0);
        local_b0 = 0;
        String::parse_latin1((String *)&local_b0,"");
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"Empty");
        TTR((String *)&local_a8,(String *)&local_b8);
        OptionButton::add_item(pSVar5,iVar3);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        OptionButton::select((int)*(undefined8 *)(this + 0xde0));
        *(int *)(this + 0xe34) = iVar4;
      }
      local_110 = (Variant *)local_58;
      pSVar5 = (String *)EditorSettings::get_singleton();
      OptionButton::get_selected();
      OptionButton::get_item_text((int)local_c0);
      Variant::Variant(local_110,(String *)local_c0);
      local_a8 = "last_selected_language";
      local_b0 = 0;
      local_a0 = 0x16;
      String::parse_latin1((StrRange *)&local_b0);
      local_b8 = 0;
      local_a8 = "shader_setup";
      local_a0 = 0xc;
      String::parse_latin1((StrRange *)&local_b8);
      EditorSettings::set_project_metadata(pSVar5,(String *)&local_b8,(Variant *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref(local_c0);
      EditorValidationPanel::update();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref(local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_98);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  _err_print_index_error
            ("get","./core/templates/list.h",0x21c,(long)param_1,lVar6,"p_index","size()","",false,
             true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* ShaderCreateDialog::config(String const&, bool, bool, int, int) */

void __thiscall
ShaderCreateDialog::config
          (ShaderCreateDialog *this,String *param_1,bool param_2,bool param_3,int param_4,
          int param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
    local_50 = 0;
    local_58 = &_LC13;
    String::parse_latin1((StrRange *)(this + 0xe10));
    uVar1 = *(undefined8 *)(this + 0xdf0);
    local_58 = &_LC13;
    local_60 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    LineEdit::set_text(uVar1,(StrRange *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    goto LAB_00102dc3;
  }
  String::get_basename();
  if ((undefined *)*(long *)(this + 0xe10) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe10));
    puVar4 = local_58;
    local_58 = (undefined *)0x0;
    *(undefined **)(this + 0xe10) = puVar4;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  uVar1 = *(undefined8 *)(this + 0xdf0);
  uVar5 = OptionButton::get_selected();
  lVar2 = *(long *)(this + 0xdb8);
  if ((int)uVar5 < 0) {
    lVar8 = 0;
    if (lVar2 != 0) {
      lVar8 = (long)*(int *)(lVar2 + 0x10);
    }
LAB_00102fe8:
    _err_print_index_error
              ("get","./core/templates/list.h",0x21c,(long)(int)uVar5,lVar8,"p_index","size()","",
               false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (lVar2 == 0) {
    lVar8 = 0;
    goto LAB_00102fe8;
  }
  lVar8 = (long)*(int *)(lVar2 + 0x10);
  if (*(int *)(lVar2 + 0x10) <= (int)uVar5) goto LAB_00102fe8;
  if (uVar5 != 0) {
    uVar7 = 0;
    if ((uVar5 & 1) != 0) {
      uVar7 = 1;
      if (uVar5 == 1) goto LAB_00102f2f;
    }
    do {
      uVar7 = uVar7 + 2;
    } while (uVar5 != uVar7);
  }
LAB_00102f2f:
  local_58 = &_LC20;
  local_68 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_68);
  String::operator+((String *)&local_60,(String *)(this + 0xe10));
  String::operator+((String *)&local_58,(String *)&local_60);
  LineEdit::set_text(uVar1,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  uVar6 = OptionButton::get_selected();
  *(undefined4 *)(this + 0xe28) = uVar6;
LAB_00102dc3:
  LineEdit::deselect();
  this[0xe24] = (ShaderCreateDialog)param_3;
  this[0xe23] = (ShaderCreateDialog)param_2;
  if (-1 < param_4) {
    OptionButton::select((int)*(undefined8 *)(this + 0xdd0));
    _type_changed(this,param_4);
  }
  if (-1 < param_5) {
    OptionButton::select((int)*(undefined8 *)(this + 0xdd8));
    _mode_changed(this,param_5);
  }
  _type_changed(this,*(int *)(this + 0xe28));
  LineEdit::get_text();
  _path_changed(this,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderCreateDialog::_update_language_info() */

void __thiscall ShaderCreateDialog::_update_language_info(ShaderCreateDialog *this)

{
  StrRange *this_00;
  List<String,DefaultAllocator> *this_01;
  long lVar1;
  long lVar2;
  CowData<char32_t> *pCVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  long *plVar6;
  CowData *pCVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48;
  long local_40;
  
  plVar6 = *(long **)(this + 0xdb8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 != (long *)0x0) {
    do {
      this_01 = (List<String,DefaultAllocator> *)*plVar6;
      if (this_01 == (List<String,DefaultAllocator> *)0x0) goto LAB_00103106;
      if (*(long **)(this_01 + 0x28) == plVar6) {
        lVar2 = *(long *)(this_01 + 0x18);
        lVar1 = *(long *)(this_01 + 0x20);
        *plVar6 = lVar2;
        if (this_01 == (List<String,DefaultAllocator> *)plVar6[1]) {
          plVar6[1] = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x18) = lVar2;
          lVar2 = *(long *)(this_01 + 0x18);
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x20) = lVar1;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(this_01 + 8));
        List<String,DefaultAllocator>::~List(this_01);
        Memory::free_static(this_01,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar6 = *(long **)(this + 0xdb8);
    } while ((int)plVar6[2] != 0);
    Memory::free_static(plVar6,false);
    *(undefined8 *)(this + 0xdb8) = 0;
  }
LAB_00103106:
  local_48 = 1;
  local_58 = (undefined1  [16])0x0;
  local_68 = (char *)0x0;
  String::parse_latin1((String *)&local_68,"gdshader");
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)local_58,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  this_00 = (StrRange *)(local_58 + 8);
  local_68 = "gdshader";
  iVar8 = 0;
  local_60 = 8;
  String::parse_latin1(this_00);
  do {
    local_70 = 0;
    local_68 = "res";
    local_60 = 3;
    String::parse_latin1((StrRange *)&local_70);
    if (local_58._0_8_ == 0) {
      pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      local_58._0_8_ = pauVar4;
      *(undefined4 *)pauVar4[1] = 0;
      *pauVar4 = (undefined1  [16])0x0;
    }
    pCVar3 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar3 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar3 + 0x10) = (undefined1  [16])0x0;
    if (local_70 != 0) {
      CowData<char32_t>::_ref(pCVar3,(CowData *)&local_70);
    }
    lVar2 = *(long *)(local_58._0_8_ + 8);
    *(undefined8 *)(pCVar3 + 8) = 0;
    *(undefined8 *)(pCVar3 + 0x18) = local_58._0_8_;
    *(long *)(pCVar3 + 0x10) = lVar2;
    if (lVar2 != 0) {
      *(CowData<char32_t> **)(lVar2 + 8) = pCVar3;
    }
    *(CowData<char32_t> **)(local_58._0_8_ + 8) = pCVar3;
    if (*(long *)local_58._0_8_ == 0) {
      *(CowData<char32_t> **)local_58._0_8_ = pCVar3;
    }
    *(int *)(local_58._0_8_ + 0x10) = (int)*(long *)(local_58._0_8_ + 0x10) + 1;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_70 = 0;
    local_68 = "tres";
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_70);
    if (local_58._0_8_ == 0) {
      pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      local_58._0_8_ = pauVar4;
      *(undefined4 *)pauVar4[1] = 0;
      *pauVar4 = (undefined1  [16])0x0;
    }
    pCVar3 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar3 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar3 + 0x10) = (undefined1  [16])0x0;
    if (local_70 != 0) {
      CowData<char32_t>::_ref(pCVar3,(CowData *)&local_70);
    }
    lVar2 = *(long *)(local_58._0_8_ + 8);
    *(undefined8 *)(pCVar3 + 8) = 0;
    *(undefined8 *)(pCVar3 + 0x18) = local_58._0_8_;
    *(long *)(pCVar3 + 0x10) = lVar2;
    if (lVar2 != 0) {
      *(CowData<char32_t> **)(lVar2 + 8) = pCVar3;
    }
    *(CowData<char32_t> **)(local_58._0_8_ + 8) = pCVar3;
    if (*(long *)local_58._0_8_ == 0) {
      *(CowData<char32_t> **)local_58._0_8_ = pCVar3;
    }
    *(int *)(local_58._0_8_ + 0x10) = (int)*(long *)(local_58._0_8_ + 0x10) + 1;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (*(long *)(this + 0xdb8) == 0) {
      pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(this + 0xdb8) = pauVar4;
      *(undefined4 *)pauVar4[1] = 0;
      *pauVar4 = (undefined1  [16])0x0;
    }
    pauVar4 = (undefined1 (*) [16])operator_new(0x30,DefaultAllocator::alloc);
    *pauVar4 = (undefined1  [16])0x0;
    pauVar4[1][0] = 0;
    *(undefined8 *)(pauVar4[2] + 8) = 0;
    *(undefined1 (*) [16])(pauVar4[1] + 8) = (undefined1  [16])0x0;
    pCVar7 = (CowData *)local_58._0_8_;
    if (((CowData *)local_58._0_8_ != (CowData *)0x0) &&
       (pCVar7 = *(CowData **)local_58._0_8_, pCVar7 != (CowData *)0x0)) {
      pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])*pauVar4 = pauVar5;
      *(undefined4 *)pauVar5[1] = 0;
      *pauVar5 = (undefined1  [16])0x0;
      do {
        while( true ) {
          pCVar3 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
          *(undefined1 (*) [16])pCVar3 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar3 + 0x10) = (undefined1  [16])0x0;
          if (*(long *)pCVar7 != 0) {
            CowData<char32_t>::_ref(pCVar3,pCVar7);
          }
          plVar6 = *(long **)*pauVar4;
          lVar2 = plVar6[1];
          *(undefined8 *)(pCVar3 + 8) = 0;
          *(long **)(pCVar3 + 0x18) = plVar6;
          *(long *)(pCVar3 + 0x10) = lVar2;
          if (lVar2 != 0) {
            *(CowData<char32_t> **)(lVar2 + 8) = pCVar3;
          }
          plVar6[1] = (long)pCVar3;
          if (*plVar6 != 0) break;
          pCVar7 = *(CowData **)(pCVar7 + 8);
          *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
          *plVar6 = (long)pCVar3;
          if (pCVar7 == (CowData *)0x0) goto LAB_001033b4;
        }
        pCVar7 = *(CowData **)(pCVar7 + 8);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
      } while (pCVar7 != (CowData *)0x0);
LAB_001033b4:
      pCVar7 = *(CowData **)(*pauVar4 + 8);
    }
    if ((CowData *)local_58._8_8_ != pCVar7) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(*pauVar4 + 8),(CowData *)this_00);
    }
    pauVar4[1][0] = local_48;
    plVar6 = *(long **)(this + 0xdb8);
    lVar2 = plVar6[1];
    *(undefined8 *)(pauVar4[1] + 8) = 0;
    *(long **)(pauVar4[2] + 8) = plVar6;
    *(long *)pauVar4[2] = lVar2;
    if (lVar2 != 0) {
      *(undefined1 (**) [16])(lVar2 + 0x18) = pauVar4;
    }
    plVar6[1] = (long)pauVar4;
    if (*plVar6 == 0) {
      *plVar6 = (long)pauVar4;
    }
    *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
    iVar8 = iVar8 + 1;
    CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)local_58);
    if (iVar8 == 3) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_48 = 0;
    local_58 = (undefined1  [16])0x0;
    if (iVar8 == 2) {
      local_68 = (char *)0x0;
      String::parse_latin1((String *)&local_68,"gdshaderinc");
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)local_58,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      String::parse_latin1((String *)this_00,"gdshaderinc");
    }
    else {
      local_60 = 4;
      local_68 = "tres";
      String::parse_latin1(this_00);
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShaderCreateDialog::ShaderCreateDialog() */

void __thiscall ShaderCreateDialog::ShaderCreateDialog(ShaderCreateDialog *this)

{
  undefined8 uVar1;
  Callable *pCVar2;
  Vector2 *pVVar3;
  code *pcVar4;
  long lVar5;
  String *pSVar6;
  bool bVar7;
  undefined8 uVar8;
  GridContainer *this_00;
  EditorValidationPanel *this_01;
  Control *this_02;
  BoxContainer *pBVar9;
  OptionButton *pOVar10;
  Label *pLVar11;
  long *plVar12;
  CheckBox *this_03;
  CallableCustom *this_04;
  LineEdit *this_05;
  Button *this_06;
  EditorFileDialog *this_07;
  AcceptDialog *this_08;
  int iVar13;
  int iVar14;
  long in_FS_OFFSET;
  float fVar15;
  String local_68 [8];
  long local_60;
  undefined8 local_58 [2];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined ***)this = &PTR__initialize_classv_00111ba8;
  *(undefined2 *)(this + 0xe24) = 0;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe08) = (undefined1  [16])0x0;
  uVar8 = _UNK_001124d8;
  uVar1 = __LC82;
  *(undefined8 *)(this + 0xe18) = 0;
  *(undefined4 *)(this + 0xe20) = 0x1000001;
  *(undefined8 *)(this + 0xe28) = uVar1;
  *(undefined8 *)(this + 0xe30) = uVar8;
  _update_language_info(this);
  this_00 = (GridContainer *)operator_new(0xa10,"");
  GridContainer::GridContainer(this_00);
  postinitialize_handler((Object *)this_00);
  *(GridContainer **)(this + 0xdc0) = this_00;
  GridContainer::set_columns((int)this_00);
  this_01 = (EditorValidationPanel *)operator_new(0xac0,"");
  EditorValidationPanel::EditorValidationPanel(this_01);
  postinitialize_handler((Object *)this_01);
  *(EditorValidationPanel **)(this + 0xdc8) = this_01;
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Shader path/name is valid.");
  TTR(local_68,(String *)&local_60);
  EditorValidationPanel::add_line((int)this_01,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar1 = *(undefined8 *)(this + 0xdc8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Will create a new shader file.");
  TTR(local_68,(String *)&local_60);
  EditorValidationPanel::add_line((int)uVar1,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar1 = *(undefined8 *)(this + 0xdc8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  EditorValidationPanel::add_line((int)uVar1,(String *)0x2);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pCVar2 = *(Callable **)(this + 0xdc8);
  create_custom_callable_function_pointer<ShaderCreateDialog>
            ((ShaderCreateDialog *)local_58,(char *)this,
             (_func_void *)"&ShaderCreateDialog::_update_dialog");
  EditorValidationPanel::set_update_callback(pCVar2);
  Callable::~Callable((Callable *)local_58);
  EditorValidationPanel::set_accept_button(*(Button **)(this + 0xdc8));
  this_02 = (Control *)operator_new(0x9c8,"");
  Control::Control(this_02);
  postinitialize_handler((Object *)this_02);
  fVar15 = (float)EditorScale::get_scale();
  local_48 = (ulong)(uint)(fVar15 * __LC87) << 0x20;
  Control::set_custom_minimum_size((Vector2 *)this_02);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,true);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_001115b8;
  postinitialize_handler((Object *)pBVar9);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xdc0),0,0);
  Node::add_child(pBVar9,this_02,0,0);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xdc8),0,0);
  Node::add_child(this,pBVar9,0,0);
  pOVar10 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(pOVar10,(String *)local_58);
  postinitialize_handler((Object *)pOVar10);
  *(OptionButton **)(this + 0xdd0) = pOVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pVVar3 = *(Vector2 **)(this + 0xdd0);
  fVar15 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar15 * _LC88._4_4_,fVar15 * (float)_LC88);
  Control::set_custom_minimum_size(pVVar3);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdd0),3);
  uVar1 = *(undefined8 *)(this + 0xdc0);
  pLVar11 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Type:");
  TTR(local_68,(String *)&local_60);
  Label::Label(pLVar11,local_68);
  postinitialize_handler((Object *)pLVar11);
  bVar7 = false;
  Node::add_child(uVar1,pLVar11,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xdc0),*(undefined8 *)(this + 0xdd0),0,0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"Shader");
  *(undefined4 *)(this + 0xe2c) = 0;
  while( true ) {
    iVar13 = (int)(String *)local_58;
    OptionButton::add_item(*(String **)(this + 0xdd0),iVar13);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    local_58[0] = 0;
    if (bVar7) break;
    bVar7 = true;
    String::parse_latin1((String *)local_58,"VisualShader");
  }
  String::parse_latin1((String *)local_58,"ShaderInclude");
  OptionButton::add_item(*(String **)(this + 0xdd0),iVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  iVar14 = *(int *)(this + 0xe2c);
  if (-1 < iVar14) {
    OptionButton::select((int)*(undefined8 *)(this + 0xdd0));
    iVar14 = *(int *)(this + 0xe2c);
  }
  plVar12 = *(long **)(this + 0xdd0);
  *(int *)(this + 0xe28) = iVar14;
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<ShaderCreateDialog,int>
            ((ShaderCreateDialog *)local_58,(char *)this,
             (_func_void_int *)"&ShaderCreateDialog::_type_changed");
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x260,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  pOVar10 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(pOVar10,(String *)local_58);
  postinitialize_handler((Object *)pOVar10);
  *(OptionButton **)(this + 0xdd8) = pOVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar12 = (long *)ShaderTypes::get_types_list();
  if ((long *)*plVar12 != (long *)0x0) {
    for (lVar5 = *(long *)*plVar12; lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
      pSVar6 = *(String **)(this + 0xdd8);
      String::capitalize();
      OptionButton::add_item(pSVar6,iVar13);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    }
  }
  uVar1 = *(undefined8 *)(this + 0xdc0);
  pLVar11 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Mode:");
  TTR(local_68,(String *)&local_60);
  Label::Label(pLVar11,local_68);
  postinitialize_handler((Object *)pLVar11);
  Node::add_child(uVar1,pLVar11,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xdc0),*(undefined8 *)(this + 0xdd8),0,0);
  plVar12 = *(long **)(this + 0xdd8);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<ShaderCreateDialog,int>
            ((ShaderCreateDialog *)local_58,(char *)this,
             (_func_void_int *)"&ShaderCreateDialog::_mode_changed");
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x260,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  pOVar10 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(pOVar10,(String *)local_58);
  postinitialize_handler((Object *)pOVar10);
  *(OptionButton **)(this + 0xde0) = pOVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar1 = *(undefined8 *)(this + 0xdc0);
  pLVar11 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Template:");
  TTR(local_68,(String *)&local_60);
  Label::Label(pLVar11,local_68);
  postinitialize_handler((Object *)pLVar11);
  Node::add_child(uVar1,pLVar11,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xdc0),*(undefined8 *)(this + 0xde0),0,0);
  plVar12 = *(long **)(this + 0xde0);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<ShaderCreateDialog,int>
            ((ShaderCreateDialog *)local_58,(char *)this,
             (_func_void_int *)"&ShaderCreateDialog::_template_changed");
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x260,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  this_03 = (CheckBox *)operator_new(0xc60,"");
  local_58[0] = 0;
  CheckBox::CheckBox(this_03,(String *)local_58);
  postinitialize_handler((Object *)this_03);
  *(CheckBox **)(this + 0xde8) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String **)(this + 0xde8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"On");
  TTR(local_68,(String *)&local_60);
  Button::set_text(pSVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar12 = *(long **)(this + 0xde8);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  this_04 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_04);
  *(undefined **)(this_04 + 0x20) = &_LC13;
  *(ShaderCreateDialog **)(this_04 + 0x28) = this;
  *(undefined1 (*) [16])(this_04 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_04 = &PTR_hash_00111f48;
  *(undefined8 *)(this_04 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_04 + 0x10) = 0;
  *(undefined8 *)(this_04 + 0x30) = uVar1;
  *(code **)(this_04 + 0x38) = _built_in_toggled;
  CallableCustomMethodPointerBase::_setup((uint *)this_04,(int)this_04 + 0x28);
  *(char **)(this_04 + 0x20) = "ShaderCreateDialog::_built_in_toggled";
  Callable::Callable((Callable *)local_58,this_04);
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x248,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  uVar1 = *(undefined8 *)(this + 0xdc0);
  pLVar11 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Built-in Shader:");
  TTR(local_68,(String *)&local_60);
  Label::Label(pLVar11,local_68);
  postinitialize_handler((Object *)pLVar11);
  Node::add_child(uVar1,pLVar11,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xdc0),*(undefined8 *)(this + 0xde8),0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,false);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_00111240;
  postinitialize_handler((Object *)pBVar9);
  Control::set_h_size_flags(pBVar9,3);
  pcVar4 = *(code **)(*(long *)pBVar9 + 0x108);
  create_custom_callable_function_pointer<ShaderCreateDialog>
            ((ShaderCreateDialog *)local_58,(char *)this,
             (_func_void *)"&ShaderCreateDialog::_path_hbox_sorted");
  (*pcVar4)(pBVar9,SceneStringNames::singleton + 0xf0,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  this_05 = (LineEdit *)operator_new(0xbb0,"");
  local_58[0] = 0;
  LineEdit::LineEdit(this_05,(String *)local_58);
  postinitialize_handler((Object *)this_05);
  *(LineEdit **)(this + 0xdf0) = this_05;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar12 = *(long **)(this + 0xdf0);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<ShaderCreateDialog,String_const&>
            ((ShaderCreateDialog *)local_58,(char *)this,
             (_func_void_String_ptr *)"&ShaderCreateDialog::_path_changed");
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x270,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdf0),3);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xdf0),0,0);
  AcceptDialog::register_text_enter((LineEdit *)this);
  this_06 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(this_06,(String *)local_58);
  postinitialize_handler((Object *)this_06);
  *(Button **)(this + 0xdf8) = this_06;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar12 = *(long **)(this + 0xdf8);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<ShaderCreateDialog>
            ((ShaderCreateDialog *)local_58,(char *)this,
             (_func_void *)"&ShaderCreateDialog::_browse_path");
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x238,(String *)local_58);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xdf8),0,0);
  uVar1 = *(undefined8 *)(this + 0xdc0);
  pLVar11 = (Label *)operator_new(0xad8,"");
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Path:");
  TTR(local_68,(String *)&local_60);
  Label::Label(pLVar11,local_68);
  postinitialize_handler((Object *)pLVar11);
  Node::add_child(uVar1,pLVar11,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::add_child(*(undefined8 *)(this + 0xdc0),pBVar9,0,0);
  this_07 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_07);
  postinitialize_handler((Object *)this_07);
  lVar5 = *(long *)this_07;
  *(EditorFileDialog **)(this + 0xe00) = this_07;
  pcVar4 = *(code **)(lVar5 + 0x108);
  create_custom_callable_function_pointer<ShaderCreateDialog,String_const&>
            ((ShaderCreateDialog *)local_58,(char *)this,
             (_func_void_String_ptr *)"&ShaderCreateDialog::_file_selected");
  StringName::StringName((StringName *)&local_60,"file_selected",false);
  (*pcVar4)(this_07,(String *)&local_60,(String *)local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xe00),0);
  Node::add_child(this,*(undefined8 *)(this + 0xe00),0,0);
  this_08 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(this_08);
  postinitialize_handler((Object *)this_08);
  *(AcceptDialog **)(this + 0xe08) = this_08;
  Label::set_autowrap_mode(*(undefined8 *)(this_08 + 0xd78),3);
  Label::set_horizontal_alignment(*(undefined8 *)(*(long *)(this + 0xe08) + 0xd78),1);
  Label::set_vertical_alignment(*(undefined8 *)(*(long *)(this + 0xe08) + 0xd78),1);
  pVVar3 = *(Vector2 **)(*(long *)(this + 0xe08) + 0xd78);
  fVar15 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar15 * _LC105._4_4_,fVar15 * (float)_LC105);
  Control::set_custom_minimum_size(pVVar3);
  Node::add_child(this,*(undefined8 *)(this + 0xe08),0,0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Create");
  TTR(local_68,(String *)&local_60);
  AcceptDialog::set_ok_button_text(this,local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  AcceptDialog::set_hide_on_ok(SUB81(this,0));
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"Create Shader");
  TTR(local_68,(String *)&local_60);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ShaderCreateDialog::_create_new() */

void __thiscall ShaderCreateDialog::_create_new(ShaderCreateDialog *this)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  Shader *this_00;
  VisualShader *pVVar5;
  long lVar6;
  Resource *pRVar7;
  long in_FS_OFFSET;
  byte bVar8;
  VisualShader *local_f8;
  VisualShader *local_f0;
  CowData<char32_t> local_e8 [8];
  CowData<char32_t> local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  VisualShader *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  bVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f8 = (VisualShader *)0x0;
  local_f0 = (VisualShader *)0x0;
  iVar4 = OptionButton::get_selected();
  if (iVar4 == 1) {
    this_00 = (Shader *)operator_new(0x510,"");
    VisualShader::VisualShader((VisualShader *)this_00);
    postinitialize_handler((Object *)this_00);
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') {
LAB_00104d8d:
      pVVar5 = local_f8;
      this_00 = (Shader *)local_f8;
      if (local_f8 != (VisualShader *)0x0) {
        this_00 = (Shader *)0x0;
        local_f8 = (VisualShader *)0x0;
        local_c8 = pVVar5;
        goto LAB_00104cde;
      }
LAB_00105140:
      VisualShader::set_mode(this_00);
    }
    else {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
        }
        goto LAB_00104d8d;
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
      pVVar5 = (VisualShader *)__dynamic_cast(this_00,&Object::typeinfo,&Resource::typeinfo,0);
      if (local_f8 == pVVar5) goto LAB_00105140;
      local_c8 = local_f8;
      local_f8 = pVVar5;
      if ((pVVar5 != (VisualShader *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_f8 = (VisualShader *)0x0;
      }
LAB_00104cde:
      Ref<Resource>::unref((Ref<Resource> *)&local_c8);
      VisualShader::set_mode(this_00);
    }
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler((Object *)this_00);
      if (cVar3 != '\0') goto LAB_00104995;
      goto LAB_001049ba;
    }
LAB_001047bc:
    if (local_f8 == (VisualShader *)0x0) goto LAB_001047d0;
LAB_001049c6:
    if (this[0xe22] == (ShaderCreateDialog)0x0) {
      ProjectSettings::get_singleton();
      LineEdit::get_text();
      ProjectSettings::localize_path((String *)local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      (**(code **)(*(long *)local_f8 + 0x188))(local_f8,(String *)local_e0,0);
      iVar4 = ResourceSaver::save((Ref *)&local_f8,(String *)local_e0,4);
      if (iVar4 != 0) {
        uVar2 = *(undefined8 *)(this + 0xe08);
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"");
        local_d8 = 0;
        String::parse_latin1((String *)&local_d8,"Error - Could not create shader in filesystem.");
        TTR((String *)&local_c8,(String *)&local_d8);
        AcceptDialog::set_text(uVar2,(String *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        local_78[0] = 0;
        local_78[1] = 0;
        Window::popup_centered(*(Vector2i **)(this + 0xe08));
        CowData<char32_t>::_unref(local_e0);
LAB_00104ed1:
        Ref<Resource>::unref((Ref<Resource> *)&local_f0);
        Ref<Resource>::unref((Ref<Resource> *)&local_f8);
        goto LAB_00104ba7;
      }
      CowData<char32_t>::_unref(local_e0);
    }
    else {
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      lVar6 = SceneTree::get_edited_scene_root();
      pVVar5 = local_f8;
      if (lVar6 != 0) {
        pcVar1 = *(code **)(*(long *)local_f8 + 0x188);
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"::");
        Node::get_scene_file_path();
        String::operator+((String *)&local_c8,(String *)&local_d8);
        (*pcVar1)(pVVar5,(String *)&local_c8,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      }
    }
    pVVar5 = local_f8;
    if (local_f8 != (VisualShader *)0x0) {
      local_c8 = (VisualShader *)0x0;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pVVar5 = (VisualShader *)0x0;
      }
      Ref<Resource>::unref((Ref<Resource> *)&local_c8);
    }
    if ((_create_new()::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&_create_new()::{lambda()#2}::operator()()::sname), iVar4 != 0))
    {
      _scs_create((char *)&_create_new()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_create_new()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_create_new()::{lambda()#2}::operator()()::sname);
    }
    Variant::Variant((Variant *)local_78,(Object *)pVVar5);
    local_58 = (undefined1  [16])0x0;
    local_60 = 0;
    local_88[0] = (Variant *)local_78;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_create_new()::{lambda()#2}::operator()()::sname,local_88,1);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (((pVVar5 != (VisualShader *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler((Object *)pVVar5), cVar3 != '\0')) {
      (**(code **)(*(long *)pVVar5 + 0x140))(pVVar5);
      Memory::free_static(pVVar5,false);
    }
  }
  else {
    if (iVar4 == 2) {
      this_00 = (Shader *)operator_new(0x278,"");
      pRVar7 = (Resource *)this_00;
      for (lVar6 = 0x4f; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined8 *)pRVar7 = 0;
        pRVar7 = pRVar7 + (ulong)bVar8 * -0x10 + 8;
      }
      Resource::Resource((Resource *)this_00);
      *(undefined ***)this_00 = &PTR__initialize_classv_00111068;
      *(undefined8 *)((Resource *)this_00 + 0x270) = 2;
      *(undefined1 (*) [16])((Resource *)this_00 + 0x240) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])((Resource *)this_00 + 0x250) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])((Resource *)this_00 + 0x260) = (undefined1  [16])0x0;
      postinitialize_handler((Object *)this_00);
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') {
LAB_00104793:
        if (local_f0 == (VisualShader *)0x0) goto LAB_001049ba;
        local_c8 = local_f0;
        local_f0 = (VisualShader *)0x0;
        Ref<Resource>::unref((Ref<Resource> *)&local_c8);
        goto LAB_001047bc;
      }
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
        }
        goto LAB_00104793;
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
      pVVar5 = (VisualShader *)__dynamic_cast(this_00,&Object::typeinfo,&Resource::typeinfo,0);
      if (pVVar5 != local_f0) {
        local_c8 = local_f0;
        local_f0 = pVVar5;
        if ((pVVar5 != (VisualShader *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
          local_f0 = (VisualShader *)0x0;
        }
        Ref<Resource>::unref((Ref<Resource> *)&local_c8);
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 == '\0') goto LAB_001049ba;
LAB_00104989:
      cVar3 = predelete_handler((Object *)this_00);
      if (cVar3 == '\0') goto LAB_001049ba;
LAB_00104995:
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
    }
    else if (iVar4 == 0) {
      this_00 = (Shader *)operator_new(0x2e8,"");
      Shader::Shader(this_00);
      postinitialize_handler((Object *)this_00);
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') {
LAB_00104e05:
        local_c8 = local_f8;
        this_00 = (Shader *)local_f8;
        if (local_f8 != (VisualShader *)0x0) {
          this_00 = (Shader *)0x0;
          local_f8 = (VisualShader *)0x0;
LAB_00104611:
          Ref<Resource>::unref((Ref<Resource> *)&local_c8);
        }
      }
      else {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
            Memory::free_static(this_00,false);
          }
          goto LAB_00104e05;
        }
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
        }
        pVVar5 = (VisualShader *)__dynamic_cast(this_00,&Object::typeinfo,&Resource::typeinfo,0);
        if (local_f8 != pVVar5) {
          local_c8 = local_f8;
          local_f8 = pVVar5;
          if ((pVVar5 != (VisualShader *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
            local_f8 = (VisualShader *)0x0;
          }
          goto LAB_00104611;
        }
      }
      local_c8 = (VisualShader *)0x0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      Button::get_text();
      String::to_snake_case();
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,"shader_type %s;\n");
      vformat<String>((CowData<char32_t> *)&local_d0,(String *)&local_d8,local_e0);
      StringBuilder::append((String *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref(local_e0);
      CowData<char32_t>::_unref(local_e8);
      if (*(int *)(this + 0xe34) == 0) {
        switch(*(undefined4 *)(this + 0xe30)) {
        case 0:
          StringBuilder::append((char *)&local_c8);
          break;
        case 1:
          StringBuilder::append((char *)&local_c8);
          break;
        case 2:
          StringBuilder::append((char *)&local_c8);
          break;
        case 3:
          StringBuilder::append((char *)&local_c8);
          break;
        case 4:
          StringBuilder::append((char *)&local_c8);
        }
      }
      StringBuilder::as_string();
      Shader::set_code((String *)this_00);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      StringBuilder::~StringBuilder((StringBuilder *)&local_c8);
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') goto LAB_00104989;
    }
LAB_001049ba:
    if (local_f8 != (VisualShader *)0x0) goto LAB_001049c6;
LAB_001047d0:
    ProjectSettings::get_singleton();
    LineEdit::get_text();
    ProjectSettings::localize_path((String *)local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    (**(code **)(*(long *)local_f0 + 0x188))(local_f0,(String *)local_e0,0);
    iVar4 = ResourceSaver::save((Ref *)&local_f0,(String *)local_e0,4);
    if (iVar4 != 0) {
      uVar2 = *(undefined8 *)(this + 0xe08);
      local_d0 = 0;
      String::parse_latin1((String *)&local_d0,"");
      local_d8 = 0;
      String::parse_latin1
                ((String *)&local_d8,"Error - Could not create shader include in filesystem.");
      TTR((String *)&local_c8,(String *)&local_d8);
      AcceptDialog::set_text(uVar2,(CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      local_78[0] = 0;
      local_78[1] = 0;
      Window::popup_centered(*(Vector2i **)(this + 0xe08));
      CowData<char32_t>::_unref(local_e0);
      goto LAB_00104ed1;
    }
    local_c8 = (VisualShader *)0x0;
    if (local_f0 != (VisualShader *)0x0) {
      local_c8 = local_f0;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_c8 = (VisualShader *)0x0;
      }
    }
    if ((_create_new()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&_create_new()::{lambda()#1}::operator()()::sname), iVar4 != 0))
    {
      _scs_create((char *)&_create_new()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_create_new()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_create_new()::{lambda()#1}::operator()()::sname);
    }
    Variant::Variant((Variant *)local_78,(Object *)local_c8);
    local_58 = (undefined1  [16])0x0;
    local_60 = 0;
    local_88[0] = (Variant *)local_78;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_create_new()::{lambda()#1}::operator()()::sname,local_88,1);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Ref<Resource>::unref((Ref<Resource> *)&local_c8);
    CowData<char32_t>::_unref(local_e0);
  }
  uVar2 = *(undefined8 *)(this + 0xdf0);
  LineEdit::get_text();
  String::get_base_dir();
  LineEdit::set_text(uVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  Window::hide();
  if (((local_f0 != (VisualShader *)0x0) &&
      (cVar3 = RefCounted::unreference(), pVVar5 = local_f0, cVar3 != '\0')) &&
     (cVar3 = predelete_handler((Object *)local_f0), cVar3 != '\0')) {
    (**(code **)(*(long *)pVVar5 + 0x140))(pVVar5);
    Memory::free_static(pVVar5,false);
  }
  if (((local_f8 != (VisualShader *)0x0) &&
      (cVar3 = RefCounted::unreference(), pVVar5 = local_f8, cVar3 != '\0')) &&
     (cVar3 = predelete_handler((Object *)local_f8), cVar3 != '\0')) {
    (**(code **)(*(long *)pVVar5 + 0x140))(pVVar5);
    Memory::free_static(pVVar5,false);
  }
LAB_00104ba7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ShaderCreateDialog::ok_pressed() */

void __thiscall ShaderCreateDialog::ok_pressed(ShaderCreateDialog *this)

{
  if (this[0xe20] == (ShaderCreateDialog)0x0) {
    _load_exist(this);
  }
  else {
    _create_new(this);
  }
  this[0xe20] = (ShaderCreateDialog)0x1;
  EditorValidationPanel::update();
  return;
}



/* ShaderCreateDialog::_path_submitted(String const&) */

void ShaderCreateDialog::_path_submitted(String *param_1)

{
  char cVar1;
  
  cVar1 = BaseButton::is_disabled();
  if (cVar1 != '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x250) == ok_pressed) {
    if (param_1[0xe20] == (String)0x0) {
      _load_exist((ShaderCreateDialog *)param_1);
    }
    else {
      _create_new((ShaderCreateDialog *)param_1);
    }
    param_1[0xe20] = (String)0x1;
    EditorValidationPanel::update();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00105391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x250))();
  return;
}



/* ShaderCreateDialog::_bind_methods() */

void ShaderCreateDialog::_bind_methods(void)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  MethodBind *pMVar6;
  int *piVar7;
  Variant *pVVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  long local_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  PropertyInfo local_168 [48];
  char *local_138;
  undefined8 local_130;
  CowData<StringName> local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  int *local_e8;
  undefined8 local_e0;
  long local_d0;
  undefined *local_c8;
  char *pcStack_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  char **local_98;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  local_b8 = "load_enabled";
  local_a8 = (Variant *)&local_c8;
  local_c8 = &_LC130;
  pcStack_c0 = "built_in_enabled";
  pVStack_a0 = (Variant *)&pcStack_c0;
  local_98 = &local_b8;
  D_METHODP((char *)&local_138,(char ***)"config",(uint)&local_a8);
  Variant::Variant(local_88,true);
  pVVar8 = (Variant *)local_40;
  Variant::Variant(local_70,true);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  pMVar6 = create_method_bind<ShaderCreateDialog,String_const&,bool,bool,int,int>(config);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_138,&local_a8,2);
  do {
    pVVar2 = pVVar8 + -0x18;
    pVVar8 = pVVar8 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar8 != local_88);
  CowData<StringName>::_unref(local_128);
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  local_188 = 0;
  local_190 = 0;
  local_138 = "Shader";
  local_130 = 6;
  String::parse_latin1((StrRange *)&local_190);
  local_198 = 0;
  local_138 = "shader";
  local_130 = 6;
  String::parse_latin1((StrRange *)&local_198);
  PropertyInfo::PropertyInfo
            (local_168,0x18,(StrRange *)&local_198,0x11,(StrRange *)&local_190,6,&local_188);
  local_180 = 0;
  local_138 = "shader_created";
  local_130 = 0xe;
  String::parse_latin1((StrRange *)&local_180);
  local_128[0] = (CowData<StringName>)0x0;
  local_128[1] = (CowData<StringName>)0x0;
  local_128[2] = (CowData<StringName>)0x0;
  local_128[3] = (CowData<StringName>)0x0;
  local_128[4] = (CowData<StringName>)0x0;
  local_128[5] = (CowData<StringName>)0x0;
  local_128[6] = (CowData<StringName>)0x0;
  local_128[7] = (CowData<StringName>)0x0;
  local_128[8] = (CowData<StringName>)0x0;
  local_128[9] = (CowData<StringName>)0x0;
  local_128[10] = (CowData<StringName>)0x0;
  local_128[0xb] = (CowData<StringName>)0x0;
  local_128[0xc] = (CowData<StringName>)0x0;
  local_128[0xd] = (CowData<StringName>)0x0;
  local_128[0xe] = (CowData<StringName>)0x0;
  local_128[0xf] = (CowData<StringName>)0x0;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = (int *)0x0;
  local_e0 = 0;
  local_d0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_180);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_f8,local_168);
  local_178 = "ShaderCreateDialog";
  local_1a0 = 0;
  local_170 = 0x12;
  String::parse_latin1((StrRange *)&local_1a0);
  StringName::StringName((StringName *)&local_178,(String *)&local_1a0,false);
  ClassDB::add_signal((StringName *)&local_178,(MethodInfo *)&local_138);
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  lVar3 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  piVar5 = local_e8;
  if (local_e8 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_e8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(local_e8 + -2);
      local_e8 = (int *)0x0;
      if (lVar3 != 0) {
        lVar9 = 0;
        piVar7 = piVar5;
        do {
          if (Variant::needs_deinit[*piVar7] != '\0') {
            Variant::_clear_internal();
          }
          lVar9 = lVar9 + 1;
          piVar7 = piVar7 + 6;
        } while (lVar3 != lVar9);
      }
      Memory::free_static(piVar5 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  PropertyInfo::~PropertyInfo(local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_188 != 0)) {
    StringName::unref();
  }
  local_188 = 0;
  local_138 = "ShaderInclude";
  local_190 = 0;
  local_130 = 0xd;
  String::parse_latin1((StrRange *)&local_190);
  local_138 = "shader_include";
  local_198 = 0;
  local_130 = 0xe;
  String::parse_latin1((StrRange *)&local_198);
  PropertyInfo::PropertyInfo
            (local_168,0x18,(StrRange *)&local_198,0x11,(StrRange *)&local_190,6,&local_188);
  local_138 = "shader_include_created";
  local_180 = 0;
  local_130 = 0x16;
  String::parse_latin1((StrRange *)&local_180);
  local_128[0] = (CowData<StringName>)0x0;
  local_128[1] = (CowData<StringName>)0x0;
  local_128[2] = (CowData<StringName>)0x0;
  local_128[3] = (CowData<StringName>)0x0;
  local_128[4] = (CowData<StringName>)0x0;
  local_128[5] = (CowData<StringName>)0x0;
  local_128[6] = (CowData<StringName>)0x0;
  local_128[7] = (CowData<StringName>)0x0;
  local_128[8] = (CowData<StringName>)0x0;
  local_128[9] = (CowData<StringName>)0x0;
  local_128[10] = (CowData<StringName>)0x0;
  local_128[0xb] = (CowData<StringName>)0x0;
  local_128[0xc] = (CowData<StringName>)0x0;
  local_128[0xd] = (CowData<StringName>)0x0;
  local_128[0xe] = (CowData<StringName>)0x0;
  local_128[0xf] = (CowData<StringName>)0x0;
  local_138 = (char *)0x0;
  local_130 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 6;
  local_100 = 1;
  local_f8[0] = 0;
  local_e8 = (int *)0x0;
  local_e0 = 0;
  local_d0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_180);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_f8,local_168);
  local_178 = "ShaderCreateDialog";
  local_1a0 = 0;
  local_170 = 0x12;
  String::parse_latin1((StrRange *)&local_1a0);
  StringName::StringName((StringName *)&local_178,(String *)&local_1a0,false);
  ClassDB::add_signal((StringName *)&local_178,(MethodInfo *)&local_138);
  if ((StringName::configured != '\0') && (local_178 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  lVar3 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  piVar5 = local_e8;
  if (local_e8 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_e8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(local_e8 + -2);
      local_e8 = (int *)0x0;
      if (lVar3 != 0) {
        lVar9 = 0;
        piVar7 = piVar5;
        do {
          if (Variant::needs_deinit[*piVar7] != '\0') {
            Variant::_clear_internal();
          }
          lVar9 = lVar9 + 1;
          piVar7 = piVar7 + 6;
        } while (lVar3 != lVar9);
      }
      Memory::free_static(piVar5 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_f8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_130);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  PropertyInfo::~PropertyInfo(local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_188 != 0)) {
    StringName::unref();
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* ShaderInclude::is_class_ptr(void*) const */

uint __thiscall ShaderInclude::is_class_ptr(ShaderInclude *this,void *param_1)

{
  return (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ShaderInclude::_getv(StringName const&, Variant&) const */

undefined8 ShaderInclude::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ShaderInclude::_setv(StringName const&, Variant const&) */

undefined8 ShaderInclude::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ShaderInclude::_validate_propertyv(PropertyInfo&) const */

void ShaderInclude::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ShaderInclude::_property_can_revertv(StringName const&) const */

undefined8 ShaderInclude::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ShaderInclude::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ShaderInclude::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ShaderInclude::_notificationv(int, bool) */

void ShaderInclude::_notificationv(int param_1,bool param_2)

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
  
  return (uint)CONCAT71(0x1122,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1121,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,in_RSI == &Node::get_class_ptr_static()::ptr) |
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



/* ShaderCreateDialog::_property_can_revertv(StringName const&) const */

undefined8 ShaderCreateDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ShaderCreateDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ShaderCreateDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderCreateDialog,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderCreateDialog,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderCreateDialog,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderCreateDialog,void> *this)

{
  return;
}



/* MethodBindT<String const&, bool, bool, int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<String_const&,bool,bool,int,int>::get_argument_meta
          (MethodBindT<String_const&,bool,bool,int,int> *this,int param_1)

{
  return -(param_1 - 3U < 2) & 3;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<ShaderCreateDialog,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,bool>::get_argument_count
          (CallableCustomMethodPointer<ShaderCreateDialog,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,int>::get_argument_count
          (CallableCustomMethodPointer<ShaderCreateDialog,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void>::get_argument_count
          (CallableCustomMethodPointer<ShaderCreateDialog,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* MethodBindT<String const&, bool, bool, int, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<String_const&,bool,bool,int,int>::_gen_argument_type
          (MethodBindT<String_const&,bool,bool,int,int> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if (((uint)param_1 < 5) && (cVar1 = '\x04', param_1 != 0)) {
    cVar1 = (1 < param_1 - 1U) + '\x01';
  }
  return cVar1;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderCreateDialog,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderCreateDialog,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderCreateDialog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderCreateDialog,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<String const&, bool, bool, int, int>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,bool,bool,int,int>::~MethodBindT
          (MethodBindT<String_const&,bool,bool,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112068;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, bool, bool, int, int>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,bool,bool,int,int>::~MethodBindT
          (MethodBindT<String_const&,bool,bool,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112068;
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



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00116008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00116008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111930;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111930;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00116010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ShaderCreateDialog::_getv(StringName const&, Variant&) const */

undefined8 ShaderCreateDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00116010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00116018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ShaderCreateDialog::_setv(StringName const&, Variant const&) */

undefined8 ShaderCreateDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00116018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,int>::get_object
          (CallableCustomMethodPointer<ShaderCreateDialog,void,int> *this)

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
      goto LAB_00106ddd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00106ddd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00106ddd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,String_const&>::get_object
          (CallableCustomMethodPointer<ShaderCreateDialog,void,String_const&> *this)

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
      goto LAB_00106edd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00106edd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00106edd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void>::get_object
          (CallableCustomMethodPointer<ShaderCreateDialog,void> *this)

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
      goto LAB_00106fdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00106fdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00106fdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,bool>::get_object
          (CallableCustomMethodPointer<ShaderCreateDialog,void,bool> *this)

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
      goto LAB_001070dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001070dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001070dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ConfirmationDialog::_validate_propertyv(PropertyInfo&) const */

void ConfirmationDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00116020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* ShaderCreateDialog::_validate_propertyv(PropertyInfo&) const */

void ShaderCreateDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00116020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00116028 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00116028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00116030 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00116030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ConfirmationDialog::_notificationv(int, bool) */

void __thiscall
ConfirmationDialog::_notificationv(ConfirmationDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00116038 != Window::_notification) {
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
  if ((code *)PTR__notification_00116038 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001075a8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00116040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107618) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00116040 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x1122,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1122,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ShaderCreateDialog::is_class_ptr(void*) const */

uint ShaderCreateDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1122,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1121,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001077d0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001077d0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107830;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107830:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107890;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107890:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107900;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107900:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
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



/* ShaderInclude::get_save_class() const */

ShaderInclude * __thiscall ShaderInclude::get_save_class(ShaderInclude *this)

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
LAB_00107aa3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107aa3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00107b0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00107b0e:
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
LAB_00107b93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107b93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_00107bfe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_00107bfe:
  return &_get_class_namev()::_class_name_static;
}



/* ShaderInclude::_get_class_namev() const */

undefined8 * ShaderInclude::_get_class_namev(void)

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
LAB_00107c73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107c73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ShaderInclude");
      goto LAB_00107cde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ShaderInclude");
LAB_00107cde:
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
LAB_00107d63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107d63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00107dce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00107dce:
  return &_get_class_namev()::_class_name_static;
}



/* ShaderCreateDialog::_get_class_namev() const */

undefined8 * ShaderCreateDialog::_get_class_namev(void)

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
LAB_00107e53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107e53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ShaderCreateDialog");
      goto LAB_00107ebe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ShaderCreateDialog");
LAB_00107ebe:
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



/* WARNING: Removing unreachable block (ram,0x00108040) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00116048 != Container::_notification) {
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
  if ((code *)PTR__notification_00116048 == Container::_notification) {
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



/* Callable create_custom_callable_function_pointer<ShaderCreateDialog>(ShaderCreateDialog*, char
   const*, void (ShaderCreateDialog::*)()) */

ShaderCreateDialog *
create_custom_callable_function_pointer<ShaderCreateDialog>
          (ShaderCreateDialog *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_00111e28;
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



/* Callable create_custom_callable_function_pointer<ShaderCreateDialog, int>(ShaderCreateDialog*,
   char const*, void (ShaderCreateDialog::*)(int)) */

ShaderCreateDialog *
create_custom_callable_function_pointer<ShaderCreateDialog,int>
          (ShaderCreateDialog *param_1,char *param_2,_func_void_int *param_3)

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
  *(undefined ***)this = &PTR_hash_00111eb8;
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



/* Callable create_custom_callable_function_pointer<ShaderCreateDialog, String
   const&>(ShaderCreateDialog*, char const*, void (ShaderCreateDialog::*)(String const&)) */

ShaderCreateDialog *
create_custom_callable_function_pointer<ShaderCreateDialog,String_const&>
          (ShaderCreateDialog *param_1,char *param_2,_func_void_String_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_00111fd8;
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



/* ShaderInclude::_initialize_classv() */

void ShaderInclude::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00116058 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
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
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ShaderInclude";
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
    if ((code *)PTR__bind_methods_00116050 != Resource::_bind_methods) {
      ShaderInclude::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00108898) */
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



/* ShaderCreateDialog::_notificationv(int, bool) */

void __thiscall
ShaderCreateDialog::_notificationv(ShaderCreateDialog *this,int param_1,bool param_2)

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



/* ShaderInclude::~ShaderInclude() */

void __thiscall ShaderInclude::~ShaderInclude(ShaderInclude *this)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x250);
  *(undefined ***)this = &PTR__initialize_classv_00111068;
  if (pvVar5 == (void *)0x0) goto LAB_00108b7b;
  if (*(int *)(this + 0x274) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x270) * 4) != 0) {
      memset(*(void **)(this + 0x268),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x270) * 4) << 2);
      if (*(int *)(this + 0x274) == 0) goto LAB_00108b47;
    }
    lVar4 = 0;
    do {
      plVar1 = (long *)((long)pvVar5 + lVar4 * 8);
      if (*plVar1 != 0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar2 = (Object *)*plVar1;
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        pvVar5 = *(void **)(this + 0x250);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x274));
    *(undefined4 *)(this + 0x274) = 0;
    if (pvVar5 == (void *)0x0) goto LAB_00108b7b;
  }
LAB_00108b47:
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x260),false);
  Memory::free_static(*(void **)(this + 600),false);
  Memory::free_static(*(void **)(this + 0x268),false);
LAB_00108b7b:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x248));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x240));
  Resource::~Resource((Resource *)this);
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



/* ShaderCreateDialog::get_class() const */

void ShaderCreateDialog::get_class(void)

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



/* ShaderInclude::get_class() const */

void ShaderInclude::get_class(void)

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
    if (*in_RSI != 0) goto LAB_001090cc;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_001090cc:
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
              goto LAB_0010942b;
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
  if ((float)uVar28 * __LC31 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0010942b;
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
LAB_0010942b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
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



/* CallableCustomMethodPointer<ShaderCreateDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void>::call
          (CallableCustomMethodPointer<ShaderCreateDialog,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00109c1f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00109c1f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00109cd0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00109c1f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC51,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109cd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,bool>::call
          (CallableCustomMethodPointer<ShaderCreateDialog,void,bool> *this,Variant **param_1,
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
      goto LAB_00109e99;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00109e99;
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
        uVar3 = _LC52;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_00109f4a;
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
LAB_00109e99:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC51,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109f4a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,int>::call
          (CallableCustomMethodPointer<ShaderCreateDialog,void,int> *this,Variant **param_1,
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
      goto LAB_0010a108;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010a108;
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
        uVar3 = _LC53;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010a1b9;
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
LAB_0010a108:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC51,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010a1b9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ShaderCreateDialog, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,String_const&>::call
          (CallableCustomMethodPointer<ShaderCreateDialog,void,String_const&> *this,
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
            uVar3 = _LC54;
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
        goto LAB_0010a28e;
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
  _err_print_error(&_LC51,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010a28e:
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
    if (cVar5 != '\0') goto LAB_0010a51b;
  }
  cVar5 = String::operator==(param_1,"Resource");
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
      if (cVar5 != '\0') goto LAB_0010a51b;
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
        if (cVar5 != '\0') goto LAB_0010a51b;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_0010a6f8;
    }
  }
LAB_0010a51b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a6f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderInclude::is_class(String const&) const */

undefined8 __thiscall ShaderInclude::is_class(ShaderInclude *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010a7fb;
  }
  cVar4 = String::operator==(param_1,"ShaderInclude");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Resource::is_class((Resource *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010a7fb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderCreateDialog::~ShaderCreateDialog() */

void __thiscall ShaderCreateDialog::~ShaderCreateDialog(ShaderCreateDialog *this)

{
  List<String,DefaultAllocator> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00111ba8;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe18));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe10));
  plVar3 = *(long **)(this + 0xdb8);
  if (plVar3 != (long *)0x0) {
    do {
      this_00 = (List<String,DefaultAllocator> *)*plVar3;
      if (this_00 == (List<String,DefaultAllocator> *)0x0) {
        if ((int)plVar3[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010a90a;
        }
        break;
      }
      if (*(long **)(this_00 + 0x28) == plVar3) {
        lVar2 = *(long *)(this_00 + 0x18);
        lVar1 = *(long *)(this_00 + 0x20);
        *plVar3 = lVar2;
        if (this_00 == (List<String,DefaultAllocator> *)plVar3[1]) {
          plVar3[1] = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x18) = lVar2;
          lVar2 = *(long *)(this_00 + 0x18);
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x20) = lVar1;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(this_00 + 8));
        List<String,DefaultAllocator>::~List(this_00);
        Memory::free_static(this_00,false);
        *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar3 = *(long **)(this + 0xdb8);
    } while ((int)plVar3[2] != 0);
    Memory::free_static(plVar3,false);
  }
LAB_0010a90a:
  *(undefined ***)this = &PTR__initialize_classv_00111930;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ShaderCreateDialog::~ShaderCreateDialog() */

void __thiscall ShaderCreateDialog::~ShaderCreateDialog(ShaderCreateDialog *this)

{
  List<String,DefaultAllocator> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00111ba8;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe18));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe10));
  plVar3 = *(long **)(this + 0xdb8);
  if (plVar3 != (long *)0x0) {
    do {
      this_00 = (List<String,DefaultAllocator> *)*plVar3;
      if (this_00 == (List<String,DefaultAllocator> *)0x0) {
        if ((int)plVar3[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0010aa5a;
        }
        break;
      }
      if (*(long **)(this_00 + 0x28) == plVar3) {
        lVar2 = *(long *)(this_00 + 0x18);
        lVar1 = *(long *)(this_00 + 0x20);
        *plVar3 = lVar2;
        if (this_00 == (List<String,DefaultAllocator> *)plVar3[1]) {
          plVar3[1] = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 0x18) = lVar2;
          lVar2 = *(long *)(this_00 + 0x18);
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x20) = lVar1;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(this_00 + 8));
        List<String,DefaultAllocator>::~List(this_00);
        Memory::free_static(this_00,false);
        *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar3 = *(long **)(this + 0xdb8);
    } while ((int)plVar3[2] != 0);
    Memory::free_static(plVar3,false);
  }
LAB_0010aa5a:
  *(undefined ***)this = &PTR__initialize_classv_00111930;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xe38);
  return;
}



/* ShaderInclude::~ShaderInclude() */

void __thiscall ShaderInclude::~ShaderInclude(ShaderInclude *this)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x250);
  *(undefined ***)this = &PTR__initialize_classv_00111068;
  if (pvVar5 == (void *)0x0) goto LAB_0010abfb;
  if (*(int *)(this + 0x274) != 0) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x270) * 4) != 0) {
      memset(*(void **)(this + 0x268),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x270) * 4) << 2);
      if (*(int *)(this + 0x274) == 0) goto LAB_0010abc7;
    }
    lVar4 = 0;
    do {
      plVar1 = (long *)((long)pvVar5 + lVar4 * 8);
      if (*plVar1 != 0) {
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          pOVar2 = (Object *)*plVar1;
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        pvVar5 = *(void **)(this + 0x250);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(this + 0x274));
    *(undefined4 *)(this + 0x274) = 0;
    if (pvVar5 == (void *)0x0) goto LAB_0010abfb;
  }
LAB_0010abc7:
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x260),false);
  Memory::free_static(*(void **)(this + 600),false);
  Memory::free_static(*(void **)(this + 0x268),false);
LAB_0010abfb:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x248));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x240));
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x278);
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
            if ((code *)PTR__bind_methods_00116058 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_compatibility_methods_00116060 != Object::_bind_compatibility_methods) {
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
    if ((code *)PTR__bind_methods_00116068 != AcceptDialog::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00116058 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00116070 !=
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
      if ((code *)PTR__bind_methods_00116078 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00116058 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00116070 !=
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
      if ((code *)PTR__bind_methods_00116078 != Container::_bind_methods) {
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
    if (cVar5 != '\0') goto LAB_0010be7b;
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
      if (cVar5 != '\0') goto LAB_0010be7b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010be7b:
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
    if (cVar5 != '\0') goto LAB_0010c07b;
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
      if (cVar5 != '\0') goto LAB_0010c07b;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c17e;
    }
  }
LAB_0010c07b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c17e:
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
    if (cVar5 != '\0') goto LAB_0010c28b;
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
      if (cVar5 != '\0') goto LAB_0010c28b;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c38e;
    }
  }
LAB_0010c28b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c38e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderCreateDialog::is_class(String const&) const */

undefined8 __thiscall ShaderCreateDialog::is_class(ShaderCreateDialog *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010c49b;
  }
  cVar4 = String::operator==(param_1,"ShaderCreateDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010c49b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
    if (cVar5 != '\0') goto LAB_0010c5eb;
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
      if (cVar5 != '\0') goto LAB_0010c5eb;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c6ee;
    }
  }
LAB_0010c5eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c6ee:
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
    if (cVar5 != '\0') goto LAB_0010c7fb;
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
      if (cVar5 != '\0') goto LAB_0010c7fb;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c8fe;
    }
  }
LAB_0010c7fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c8fe:
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
    if (cVar4 != '\0') goto LAB_0010ca0b;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010ca0b:
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
    if (cVar4 != '\0') goto LAB_0010cb5b;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010cb5b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
        if (pvVar3 == (void *)0x0) goto LAB_0010cc9f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010cc9f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
  local_78 = &_LC108;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC108;
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
      goto LAB_0010ce5c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ce5c:
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
      goto LAB_0010d0c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d0c1:
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
  if ((code *)PTR__get_property_list_00116080 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_00116088 != CanvasItem::_get_property_list) {
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
      goto LAB_0010d751;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d751:
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
      goto LAB_0010da01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010da01:
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
      goto LAB_0010dcb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010dcb1:
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
      goto LAB_0010df61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010df61:
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



/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Window::_get_property_listv(Window *this,List *param_1,bool param_2)

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
    Viewport::_get_property_listv((Viewport *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Window";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Window";
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
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00116090 != Object::_get_property_list) {
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
      goto LAB_0010e401;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e401:
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
      goto LAB_0010e6b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e6b1:
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



/* ShaderCreateDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ShaderCreateDialog::_get_property_listv(ShaderCreateDialog *this,List *param_1,bool param_2)

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
  local_78 = "ShaderCreateDialog";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ShaderCreateDialog";
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
      goto LAB_0010e961;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e961:
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
  StringName::StringName((StringName *)&local_78,"ShaderCreateDialog",false);
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
  CowData<char32_t> *local_b0;
  CowData<char32_t> *local_a8;
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
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_a8 = (CowData<char32_t> *)&local_70;
  local_b0 = local_58;
  local_80 = 0;
  local_88 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Resource";
  local_90 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
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
    CowData<char32_t>::_unref(local_b0);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_a8);
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



/* ShaderInclude::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ShaderInclude::_get_property_listv(ShaderInclude *this,List *param_1,bool param_2)

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
  local_78 = "ShaderInclude";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ShaderInclude";
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
      goto LAB_0010f151;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f151:
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
  StringName::StringName((StringName *)&local_78,"ShaderInclude",false);
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



/* Ref<Resource>::unref() */

void __thiscall Ref<Resource>::unref(Ref<Resource> *this)

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



/* MethodBind* create_method_bind<ShaderCreateDialog, String const&, bool, bool, int, int>(void
   (ShaderCreateDialog::*)(String const&, bool, bool, int, int)) */

MethodBind *
create_method_bind<ShaderCreateDialog,String_const&,bool,bool,int,int>
          (_func_void_String_ptr_bool_bool_int_int *param_1)

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
  *(_func_void_String_ptr_bool_bool_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112068;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 5;
  local_40 = 0;
  local_38 = "ShaderCreateDialog";
  local_30 = 0x12;
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



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* ShaderCreateDialog::_bind_methods() [clone .cold] */

void ShaderCreateDialog::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ShaderCreateDialog::_initialize_classv() */

void ShaderCreateDialog::_initialize_classv(void)

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
              if ((code *)PTR__bind_methods_00116058 != Node::_bind_methods) {
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
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Window");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"AcceptDialog");
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
        AcceptDialog::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_00116060 != Object::_bind_compatibility_methods)
        {
          AcceptDialog::_bind_compatibility_methods();
        }
        AcceptDialog::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"AcceptDialog");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"ConfirmationDialog");
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
      if ((code *)PTR__bind_methods_00116068 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ShaderCreateDialog";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010fbc8) */
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



/* MethodBindT<String const&, bool, bool, int, int>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<String_const&,bool,bool,int,int>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00110008;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(param_1 + 0x60) + (long)param_2) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010feb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)(*(long *)(param_1 + 0x60) + (long)param_2),*(long *)param_3 + 8,
               *(undefined1 *)(*(long *)(param_3 + 8) + 8),
               *(undefined1 *)(*(long *)(param_3 + 0x10) + 8),
               *(undefined4 *)(*(long *)(param_3 + 0x18) + 8),
               *(undefined4 *)(*(long *)(param_3 + 0x20) + 8));
    return;
  }
LAB_00110008:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, bool, bool, int, int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&,bool,bool,int,int>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00110225;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x001100a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(char **)((long)param_3 + 8) != '\0',**(char **)((long)param_3 + 0x10) != '\0',
               **(undefined4 **)((long)param_3 + 0x18),**(undefined4 **)((long)param_3 + 0x20));
    return;
  }
LAB_00110225:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, bool, bool, int, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<String_const&,bool,bool,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
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
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  Variant *local_68 [5];
  long local_40;
  
  plVar14 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar14 != (long *)0x0) && (plVar14[1] != 0)) && (*(char *)(plVar14[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar14[1] == 0) {
      plVar12 = (long *)plVar14[0x23];
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)(**(code **)(*plVar14 + 0x40))();
      }
    }
    else {
      plVar12 = (long *)(plVar14[1] + 0x20);
    }
    if (local_78 == (char *)*plVar12) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC51,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00110500;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar17 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 6) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar16;
    }
    if ((int)(5 - in_R8D) <= iVar8) {
      lVar11 = 0;
      do {
        if ((int)lVar11 < (int)in_R8D) {
          pVVar15 = *(Variant **)(param_4 + lVar11 * 8);
        }
        else {
          uVar13 = iVar8 + -5 + (int)lVar11;
          if (lVar16 <= (int)uVar13) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar13,lVar16,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar15 = pVVar2 + (ulong)uVar13 * 0x18;
        }
        local_68[lVar11] = pVVar15;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 5);
      *in_R9 = 0;
      if (((ulong)pVVar17 & 1) != 0) {
        pVVar17 = *(Variant **)(pVVar17 + *(long *)((long)plVar14 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[4],2);
      uVar4 = _LC143;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_68[4]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[3],2);
      uVar4 = _LC144;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar9 = Variant::operator_cast_to_int(local_68[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[2],1);
      uVar4 = _LC145;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar6 = Variant::operator_cast_to_bool(local_68[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[1],1);
      uVar4 = _LC146;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      bVar7 = Variant::operator_cast_to_bool(local_68[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[0],4);
      uVar4 = _LC54;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_78);
      (*(code *)pVVar17)((Variant *)((long)plVar14 + (long)pVVar1),(Variant *)&local_78,bVar7,bVar6,
                         iVar9,iVar8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      goto LAB_00110500;
    }
    uVar10 = 4;
  }
  else {
    uVar10 = 3;
  }
  *in_R9 = uVar10;
  in_R9[2] = 5;
LAB_00110500:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<bool>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<bool>(int param_1,int *param_2,PropertyInfo *param_3)

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
    local_78 = &_LC13;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,1,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
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
    local_78 = &_LC13;
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



/* void call_get_argument_type_info<String const&, bool, bool, int, int>(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,bool,bool,int,int>(int param_1,PropertyInfo *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_94;
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
  local_94 = 0;
  if (param_1 == 0) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC13;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,4,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar1;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_94 = 1;
  call_get_argument_type_info_helper<bool>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<bool>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_94,param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, bool, bool, int, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&,bool,bool,int,int>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info<String_const&,bool,bool,int,int>(in_EDX,pPVar1);
  return pPVar1;
}



/* ShaderCreateDialog::_notification(int) */

void ShaderCreateDialog::_GLOBAL__sub_I__notification(void)

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
  if (EditorFileDialog::base_property_helper != '\0') {
    return;
  }
  EditorFileDialog::base_property_helper = 1;
  EditorFileDialog::base_property_helper._64_8_ = 0;
  EditorFileDialog::base_property_helper._56_8_ = 2;
  EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
  EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
  EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
               &__dso_handle,uStack_8);
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
/* ShaderCreateDialog::~ShaderCreateDialog() */

void __thiscall ShaderCreateDialog::~ShaderCreateDialog(ShaderCreateDialog *this)

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
/* StringBuilder::~StringBuilder() */

void __thiscall StringBuilder::~StringBuilder(StringBuilder *this)

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
/* ShaderInclude::~ShaderInclude() */

void __thiscall ShaderInclude::~ShaderInclude(ShaderInclude *this)

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
/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, bool, bool, int, int>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,bool,bool,int,int>::~MethodBindT
          (MethodBindT<String_const&,bool,bool,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ShaderCreateDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderCreateDialog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ShaderCreateDialog, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderCreateDialog,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ShaderCreateDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderCreateDialog,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ShaderCreateDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderCreateDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderCreateDialog,void,String_const&> *this)

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
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


