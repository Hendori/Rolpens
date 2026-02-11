
/* ShaderGlobalsEditor::_changed() */

void __thiscall ShaderGlobalsEditor::_changed(ShaderGlobalsEditor *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (_changed()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_changed()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_changed()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_changed()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_changed()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))(this,&_changed()::{lambda()#1}::operator()()::sname,0,0);
  if (::Variant::needs_deinit[0] != '\0') {
    ::Variant::_clear_internal();
  }
  if (*(char *)(*(long *)(this + 0xa10) + 0x171) == '\0') {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      Object::notify_property_list_changed();
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsEditor::~ShaderGlobalsEditor() */

void __thiscall ShaderGlobalsEditor::~ShaderGlobalsEditor(ShaderGlobalsEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b5a8;
  pOVar1 = *(Object **)(this + 0xa10);
  cVar2 = predelete_handler(pOVar1);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = predelete_handler;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001001b9;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001001b9:
  Control::~Control((Control *)this);
  return;
}



/* ShaderGlobalsEditor::~ShaderGlobalsEditor() */

void __thiscall ShaderGlobalsEditor::~ShaderGlobalsEditor(ShaderGlobalsEditor *this)

{
  ~ShaderGlobalsEditor(this);
  operator_delete(this,0xa38);
  return;
}



/* CowData<float>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<float>::_copy_on_write(CowData<float> *this)

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
  __n = lVar2 * 4;
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



/* ShaderGlobalsEditor::get_name_box() const */

undefined8 __thiscall ShaderGlobalsEditor::get_name_box(ShaderGlobalsEditor *this)

{
  return *(undefined8 *)(this + 0xa20);
}



/* ShaderGlobalsEditor::_notification(int) */

void __thiscall ShaderGlobalsEditor::_notification(ShaderGlobalsEditor *this,int param_1)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x1f) {
    cVar2 = CanvasItem::is_visible_in_tree();
    if (cVar2 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        pOVar4 = *(Object **)(this + 0xa18);
        goto LAB_00100501;
      }
      goto LAB_00100637;
    }
  }
  else if (param_1 == 0x2d) {
    pRVar1 = *(Ref **)(this + 0xa30);
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
  else if (param_1 == 1) {
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100637;
    pOVar4 = *(Object **)(this + 0xa18);
LAB_00100501:
    EditorInspector::edit(pOVar4);
    return;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100637:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsEditor::_variable_deleted(String const&) */

void __thiscall ShaderGlobalsEditor::_variable_deleted(ShaderGlobalsEditor *this,String *param_1)

{
  Variant *pVVar1;
  code *pcVar2;
  int iVar3;
  Object *pOVar4;
  StringName *pSVar5;
  long *plVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  long local_120;
  long local_118;
  long local_110;
  char *local_108;
  undefined8 local_100;
  Variant *local_f8 [4];
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  int local_a8 [2];
  undefined1 local_a0 [16];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
  local_110 = 0;
  local_108 = "";
  local_100 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_108 = "Add Shader Global Parameter";
  local_100 = 0x1b;
  String::parse_latin1((StrRange *)&local_118);
  TTR((String *)&local_108,(String *)&local_118);
  EditorUndoRedoManager::create_action(pOVar4,(String *)&local_108,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  local_108 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)param_1);
  StringName::StringName((StringName *)&local_110,"global_shader_parameter_remove",false);
  pSVar5 = (StringName *)RenderingServer::get_singleton();
  ::Variant::Variant((Variant *)&local_d8,(String *)&local_108);
  local_c0 = 0;
  local_b8 = (undefined1  [16])0x0;
  local_f8[0] = (Variant *)&local_d8;
  EditorUndoRedoManager::add_do_methodp
            (pOVar4,pSVar5,(Variant **)&local_110,(int)(Variant *)local_f8);
  if (::Variant::needs_deinit[(int)local_c0] != '\0') {
    ::Variant::_clear_internal();
  }
  if (::Variant::needs_deinit[(int)local_d8] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  plVar6 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar6 + 0x1190);
  StringName::StringName((StringName *)&local_118,param_1,false);
  (*pcVar2)((Variant *)local_f8,plVar6,(StrRange *)&local_118);
  plVar6 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar6 + 0x1198);
  StringName::StringName((StringName *)&local_120,param_1,false);
  iVar3 = (*pcVar2)(plVar6,(StringName *)&local_120);
  local_108 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)param_1);
  StringName::StringName((StringName *)&local_110,"global_shader_parameter_add",false);
  pSVar5 = (StringName *)RenderingServer::get_singleton();
  ::Variant::Variant((Variant *)local_a8,(String *)&local_108);
  ::Variant::Variant(local_90,iVar3);
  ::Variant::Variant(local_78,(Variant *)local_f8);
  pVVar7 = local_48;
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_d8 = (Variant *)local_a8;
  pVStack_d0 = local_90;
  local_c8 = local_78;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar4,pSVar5,(Variant **)&local_110,(int)(Variant *)&local_d8);
  do {
    pVVar1 = pVVar7 + -0x18;
    pVVar7 = pVVar7 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar7 != (Variant *)local_a8);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  if (::Variant::needs_deinit[(int)local_f8[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  local_a0 = (undefined1  [16])0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  operator+((char *)&local_110,(String *)"shader_globals/");
  StringName::StringName((StringName *)&local_108,(String *)&local_110,false);
  pSVar5 = (StringName *)ProjectSettings::get_singleton();
  EditorUndoRedoManager::add_do_property(pOVar4,pSVar5,(Variant *)&local_108);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if (::Variant::needs_deinit[local_a8[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  ProjectSettings::get_singleton();
  operator+((char *)&local_118,(String *)"shader_globals/");
  StringName::StringName((StringName *)&local_110,(String *)&local_118,false);
  ProjectSettings::get_setting_with_override((StringName *)local_a8);
  operator+((char *)&local_120,(String *)"shader_globals/");
  StringName::StringName((StringName *)&local_108,(String *)&local_120,false);
  pSVar5 = (StringName *)ProjectSettings::get_singleton();
  EditorUndoRedoManager::add_undo_property(pOVar4,pSVar5,(Variant *)&local_108);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if (::Variant::needs_deinit[local_a8[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  StringName::StringName((StringName *)&local_108,"_changed",false);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a0 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar4,(StringName *)this,(Variant **)&local_108,0);
  if (::Variant::needs_deinit[local_a8[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"_changed",false);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a0 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar4,(StringName *)this,(Variant **)&local_108,0);
  if (::Variant::needs_deinit[local_a8[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsEditor::_check_new_variable_name(String const&) */

String * ShaderGlobalsEditor::_check_new_variable_name(String *param_1)

{
  char cVar1;
  long *in_RDX;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*in_RDX == 0) || (*(uint *)(*in_RDX + -8) < 2)) {
    local_50 = 0;
    local_40 = 0;
    local_48 = "";
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Name cannot be empty.";
    local_40 = 0x15;
  }
  else {
    cVar1 = String::is_valid_ascii_identifier();
    if (cVar1 != '\0') {
      *(undefined8 *)param_1 = 0;
      local_48 = "";
      local_40 = 0;
      String::parse_latin1((StrRange *)param_1);
      goto LAB_00100d5d;
    }
    local_50 = 0;
    local_40 = 0;
    local_48 = "";
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Name must be a valid identifier.";
    local_40 = 0x20;
  }
  local_58 = 0;
  String::parse_latin1((StrRange *)&local_58);
  TTR(param_1,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00100d5d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsEditor::_variable_name_text_changed(String const&) */

void __thiscall
ShaderGlobalsEditor::_variable_name_text_changed(ShaderGlobalsEditor *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  CowData<char32_t> local_30 [8];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  String::strip_edges(SUB81(local_30,0),SUB81(param_1,0));
  _check_new_variable_name((String *)&local_28);
  CowData<char32_t>::_unref(local_30);
  Control::set_tooltip_text(*(String **)(this + 0xa30));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa30),0));
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



/* ShaderGlobalsEditor::ShaderGlobalsEditor() */

void __thiscall ShaderGlobalsEditor::ShaderGlobalsEditor(ShaderGlobalsEditor *this)

{
  long *plVar1;
  code *pcVar2;
  char *__s;
  long lVar3;
  String *pSVar4;
  BoxContainer *this_00;
  Label *pLVar5;
  LineEdit *this_01;
  OptionButton *this_02;
  size_t sVar6;
  Button *this_03;
  EditorInspector *this_04;
  Object *this_05;
  undefined **ppuVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68 [2];
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (ShaderGlobalsEditor)0x1;
  *(undefined ***)this = &PTR__initialize_classv_0010b5a8;
  *(undefined8 *)(this + 0xa30) = 0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  pSVar4 = (String *)ProjectSettings::get_singleton();
  local_68[0] = 0;
  local_50 = 0xf;
  local_58 = "shader_globals/";
  String::parse_latin1((StrRange *)local_68);
  ProjectSettings::add_hidden_prefix(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010b0d0;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  pLVar5 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)local_68);
  local_58 = "Name:";
  local_70 = 0;
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  Label::Label(pLVar5,(String *)&local_58);
  postinitialize_handler((Object *)pLVar5);
  Node::add_child(this_00,pLVar5,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  this_01 = (LineEdit *)operator_new(0xbb0,"");
  local_58 = (char *)0x0;
  LineEdit::LineEdit(this_01,(String *)&local_58);
  postinitialize_handler((Object *)this_01);
  *(LineEdit **)(this + 0xa20) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa20),3);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xa20),0));
  plVar1 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<ShaderGlobalsEditor,String_const&>
            ((ShaderGlobalsEditor *)&local_58,(char *)this,
             (_func_void_String_ptr *)"&ShaderGlobalsEditor::_variable_name_text_changed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x270,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar1 = *(long **)(this + 0xa20);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<ShaderGlobalsEditor>
            ((ShaderGlobalsEditor *)&local_58,(char *)this,
             (_func_void *)"&ShaderGlobalsEditor::_variable_added");
  iVar8 = (int)(StrRange *)local_68;
  Callable::unbind(iVar8);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x278,(StrRange *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa20),0,0);
  pLVar5 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)local_68);
  local_58 = "Type:";
  local_70 = 0;
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  Label::Label(pLVar5,(String *)&local_58);
  postinitialize_handler((Object *)pLVar5);
  Node::add_child(this_00,pLVar5,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  this_02 = (OptionButton *)operator_new(0xd00,"");
  local_58 = (char *)0x0;
  OptionButton::OptionButton(this_02,(String *)&local_58);
  postinitialize_handler((Object *)this_02);
  *(OptionButton **)(this + 0xa28) = this_02;
  ppuVar7 = &global_var_type_names;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa28),3);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa28),0,0);
  do {
    __s = *ppuVar7;
    pSVar4 = *(String **)(this + 0xa28);
    sVar6 = 0;
    local_68[0] = 0;
    if (__s != (char *)0x0) {
      sVar6 = strlen(__s);
    }
    local_58 = __s;
    local_50 = sVar6;
    String::parse_latin1((StrRange *)local_68);
    OptionButton::add_item(pSVar4,iVar8);
    lVar3 = local_68[0];
    if (local_68[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_68[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68[0] = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    ppuVar7 = ppuVar7 + 1;
  } while (ppuVar7 != (undefined **)&initialize_class()::initialized);
  this_03 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)local_68);
  local_58 = "Add";
  local_70 = 0;
  local_50 = 3;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  Button::Button(this_03,(String *)&local_58);
  postinitialize_handler((Object *)this_03);
  *(Button **)(this + 0xa30) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa30),0));
  Node::add_child(this_00,*(undefined8 *)(this + 0xa30),0,0);
  plVar1 = *(long **)(this + 0xa30);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<ShaderGlobalsEditor>
            ((ShaderGlobalsEditor *)&local_58,(char *)this,
             (_func_void *)"&ShaderGlobalsEditor::_variable_added");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this_04 = (EditorInspector *)operator_new(0xcb0,"");
  EditorInspector::EditorInspector(this_04);
  postinitialize_handler((Object *)this_04);
  *(EditorInspector **)(this + 0xa18) = this_04;
  Control::set_v_size_flags(this_04,3);
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  EditorInspector::set_use_wide_editors(SUB81(*(undefined8 *)(this + 0xa18),0));
  EditorInspector::set_property_name_style(*(undefined8 *)(this + 0xa18),0);
  EditorInspector::set_use_deletable_properties(SUB81(*(undefined8 *)(this + 0xa18),0));
  plVar1 = *(long **)(this + 0xa18);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<ShaderGlobalsEditor,String_const&>
            ((ShaderGlobalsEditor *)&local_58,(char *)this,
             (_func_void_String_ptr *)"&ShaderGlobalsEditor::_variable_deleted");
  StringName::StringName((StringName *)local_68,"property_deleted",false);
  (*pcVar2)(plVar1,(StrRange *)local_68,(String *)&local_58,1);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  this_05 = (Object *)operator_new(0x178,"");
  Object::Object(this_05);
  this_05[0x171] = (Object)0x0;
  *(undefined ***)this_05 = &PTR__initialize_classv_0010b448;
  postinitialize_handler(this_05);
  lVar3 = *(long *)this_05;
  *(Object **)(this + 0xa10) = this_05;
  pcVar2 = *(code **)(lVar3 + 0x108);
  create_custom_callable_function_pointer<ShaderGlobalsEditor>
            ((ShaderGlobalsEditor *)&local_58,(char *)this,
             (_func_void *)"&ShaderGlobalsEditor::_changed");
  StringName::StringName((StringName *)local_68,"var_changed",false);
  (*pcVar2)(this_05,(StrRange *)local_68,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsEditor::_bind_methods() */

void ShaderGlobalsEditor::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  int *piVar5;
  MethodBind *pMVar6;
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
  
  local_b8._8_8_ = local_b8._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar6 = create_method_bind<ShaderGlobalsEditor>(_changed);
  StringName::StringName((StringName *)&local_c8,"_changed",false);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_b8._8_8_;
  local_b8 = auVar4 << 0x40;
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  local_e0 = 0;
  local_c8 = "globals_changed";
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
  local_e8 = 0;
  local_d0 = 0x13;
  local_d8 = "ShaderGlobalsEditor";
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
  ClassDB::add_signal((StringName *)&local_d8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
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
  piVar5 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_78 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        piVar7 = piVar5;
        do {
          if (::Variant::needs_deinit[*piVar7] != '\0') {
            ::Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar7 = piVar7 + 6;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(piVar5 + -4,false);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShaderGlobalsEditor::_variable_added() */

void __thiscall ShaderGlobalsEditor::_variable_added(ShaderGlobalsEditor *this)

{
  Variant *pVVar1;
  code *pcVar2;
  String *pSVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  Object *pOVar9;
  StringName *pSVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  Variant *local_190;
  long local_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  String local_140 [8];
  undefined8 local_138;
  String local_130 [8];
  undefined8 local_128;
  long local_120;
  char *local_118;
  undefined8 *local_110;
  int local_108 [2];
  undefined1 local_100 [16];
  int local_e8 [8];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulong uStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  String::strip_edges(SUB81((CowData<char32_t> *)&local_160,0),
                      SUB81((CowData<char32_t> *)&local_118,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  plVar8 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar8 + 0x1190);
  StringName::StringName((StringName *)&local_118,(String *)&local_160,false);
  (*pcVar2)((Variant *)&local_a8,plVar8,(CowData<char32_t> *)&local_118);
  uVar4 = local_a8;
  if (::Variant::needs_deinit[(int)local_a8] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
    StringName::unref();
  }
  pSVar3 = EditorNode::singleton;
  if (uVar4 == 0) {
    local_158 = (undefined8 *)0x0;
    ShaderLanguage::get_keyword_list((List *)&local_158);
    if (local_158 != (undefined8 *)0x0) {
      for (pSVar3 = (String *)*local_158; pSVar3 != (String *)0x0; pSVar3 = *(String **)(pSVar3 + 8)
          ) {
        cVar5 = String::operator==(pSVar3,(String *)&local_160);
        if (cVar5 != '\0') goto LAB_00101acd;
      }
    }
    cVar5 = String::operator==((String *)&local_160,"script");
    if (cVar5 == '\0') {
      pOVar9 = (Object *)EditorUndoRedoManager::get_singleton();
      uVar6 = OptionButton::get_selected();
      switch(uVar6) {
      case 0:
        ::Variant::Variant((Variant *)local_108,false);
        break;
      case 1:
      case 2:
      case 3:
      case 4:
      case 9:
        ::Variant::Variant((Variant *)local_108,0);
        break;
      case 5:
      case 10:
        local_a8 = 0;
        uStack_a4 = 0;
        ::Variant::Variant((Variant *)local_108,(Vector2i *)&local_a8);
        break;
      case 6:
      case 0xb:
        local_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        ::Variant::Variant((Variant *)local_108,(Vector3i *)&local_a8);
        break;
      case 7:
      case 0xc:
        local_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        ::Variant::Variant((Variant *)local_108,(Vector4i *)&local_a8);
        break;
      case 8:
        local_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        ::Variant::Variant((Variant *)local_108,(Rect2i *)&local_a8);
        break;
      case 0xd:
        ::Variant::Variant((Variant *)local_108,0.0);
        break;
      case 0xe:
        local_a8 = 0;
        uStack_a4 = 0;
        ::Variant::Variant((Variant *)local_108,(Vector2 *)&local_a8);
        break;
      case 0xf:
        local_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        ::Variant::Variant((Variant *)local_108,(Vector3 *)&local_a8);
        break;
      case 0x10:
        local_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        ::Variant::Variant((Variant *)local_108,(Vector4 *)&local_a8);
        break;
      case 0x11:
        local_a8 = (uint)__LC78;
        uStack_a4 = (undefined4)((ulong)__LC78 >> 0x20);
        uStack_a0 = (undefined4)_UNK_0010be38;
        uStack_9c = (undefined4)((ulong)_UNK_0010be38 >> 0x20);
        ::Variant::Variant((Variant *)local_108,(Color *)&local_a8);
        break;
      case 0x12:
        local_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        ::Variant::Variant((Variant *)local_108,(Rect2 *)&local_a8);
        break;
      case 0x13:
        local_110 = (undefined8 *)0x0;
        CowData<float>::_copy_on_write((CowData<float> *)&local_110);
        puVar11 = (undefined8 *)Memory::alloc_static(0x20,false);
        if (puVar11 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          if (local_110 == (undefined8 *)0x0) {
            lVar13 = 0;
          }
          else {
            lVar13 = local_110[-1];
            if (0 < lVar13) goto LAB_00102717;
          }
          lVar12 = 0;
LAB_00102a51:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar12,lVar13,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        local_110 = puVar11 + 2;
        *puVar11 = 1;
        puVar11[1] = 4;
LAB_00102717:
        CowData<float>::_copy_on_write((CowData<float> *)&local_110);
        lVar13 = local_110[-1];
        *(undefined4 *)local_110 = 0x3f800000;
        if (lVar13 < 2) {
          lVar12 = 1;
          goto LAB_00102a51;
        }
        CowData<float>::_copy_on_write((CowData<float> *)&local_110);
        lVar13 = local_110[-1];
        *(undefined4 *)((long)local_110 + 4) = 0;
        if (lVar13 < 3) {
          lVar12 = 2;
          goto LAB_00102a51;
        }
        CowData<float>::_copy_on_write((CowData<float> *)&local_110);
        lVar13 = local_110[-1];
        *(undefined4 *)(local_110 + 1) = 0;
        if (lVar13 < 4) {
          lVar12 = 3;
          goto LAB_00102a51;
        }
        CowData<float>::_copy_on_write((CowData<float> *)&local_110);
        *(undefined4 *)((long)local_110 + 0xc) = 0x3f800000;
        ::Variant::Variant((Variant *)local_108,(Vector *)&local_118);
        puVar11 = local_110;
        if (local_110 != (undefined8 *)0x0) {
          LOCK();
          plVar8 = local_110 + -2;
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (*plVar8 == 0) {
            local_110 = (undefined8 *)0x0;
            Memory::free_static(puVar11 + -2,false);
          }
        }
        break;
      case 0x14:
        local_88._0_4_ = 0x3f800000;
        local_a8 = _LC85;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = (ulong)_LC85;
        iStack_90 = 0;
        uStack_8c = 0;
        ::Variant::Variant((Variant *)local_108,(Basis *)&local_a8);
        break;
      case 0x15:
        Projection::Projection((Projection *)&local_a8);
        ::Variant::Variant((Variant *)local_108,(Projection *)&local_a8);
        Projection::~Projection((Projection *)&local_a8);
        break;
      case 0x16:
        local_a8 = 0x3f800000;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0x3f800000;
        uStack_98 = 0;
        ::Variant::Variant((Variant *)local_108,(Transform2D *)&local_a8);
        break;
      case 0x17:
        local_88._0_12_ = ZEXT412(0x3f800000);
        local_88._12_4_ = 0;
        local_a8 = _LC85;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = (ulong)_LC85;
        iStack_90 = 0;
        uStack_8c = 0;
        ::Variant::Variant((Variant *)local_108,(Transform3D *)&local_a8);
        break;
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
        ::Variant::Variant((Variant *)local_108,"");
        break;
      default:
        local_108[0] = 0;
        local_100 = (undefined1  [16])0x0;
      }
      local_190 = (Variant *)local_108;
      local_120 = 0;
      String::parse_latin1((String *)&local_120,"");
      local_128 = 0;
      String::parse_latin1((String *)&local_128,"Add Shader Global Parameter");
      TTR((String *)&local_118,(String *)&local_128);
      EditorUndoRedoManager::create_action(pOVar9,(CowData<char32_t> *)&local_118,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
      ::Variant::Variant((Variant *)local_e8,local_190);
      iVar7 = OptionButton::get_selected();
      local_118 = (char *)0x0;
      if (local_160 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_160);
      }
      StringName::StringName((StringName *)&local_120,"global_shader_parameter_add",false);
      pSVar10 = (StringName *)RenderingServer::get_singleton();
      ::Variant::Variant((Variant *)&local_a8,(String *)&local_118);
      ::Variant::Variant((Variant *)&iStack_90,iVar7);
      ::Variant::Variant(local_78,(Variant *)local_e8);
      local_58 = (undefined1  [16])0x0;
      pVVar14 = local_48;
      local_60 = 0;
      iVar7 = (int)(Variant *)&local_c8;
      local_c8 = (Variant *)&local_a8;
      pVStack_c0 = (Variant *)&iStack_90;
      local_b8 = local_78;
      EditorUndoRedoManager::add_do_methodp(pOVar9,pSVar10,(Variant **)&local_120,iVar7);
      do {
        pVVar1 = pVVar14 + -0x18;
        pVVar14 = pVVar14 + -0x18;
        if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          ::Variant::_clear_internal();
        }
      } while (pVVar14 != (Variant *)&local_a8);
      if ((StringName::configured != '\0') && (local_120 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      if (::Variant::needs_deinit[local_e8[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      local_118 = (char *)0x0;
      if (local_160 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_118,(CowData *)&local_160);
      }
      StringName::StringName((StringName *)&local_120,"global_shader_parameter_remove",false);
      pSVar10 = (StringName *)RenderingServer::get_singleton();
      ::Variant::Variant((Variant *)&local_a8,(String *)&local_118);
      iStack_90 = 0;
      uStack_8c = 0;
      local_88 = (undefined1  [16])0x0;
      local_c8 = (Variant *)&local_a8;
      EditorUndoRedoManager::add_undo_methodp(pOVar9,pSVar10,(Variant **)&local_120,iVar7);
      if (::Variant::needs_deinit[iStack_90] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[(int)local_a8] != '\0') {
        ::Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_120 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      Dictionary::Dictionary((Dictionary *)&local_128);
      iVar7 = OptionButton::get_selected();
      ::Variant::Variant((Variant *)&local_a8,(&global_var_type_names)[iVar7]);
      ::Variant::Variant((Variant *)&local_c8,"type");
      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_128);
      if (pVVar14 != (Variant *)&local_a8) {
        if (::Variant::needs_deinit[*(int *)pVVar14] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)pVVar14 = 0;
        *(uint *)pVVar14 = local_a8;
        *(ulong *)(pVVar14 + 8) = CONCAT44(uStack_9c,uStack_a0);
        *(ulong *)(pVVar14 + 0x10) = uStack_98;
        local_a8 = 0;
      }
      if (::Variant::needs_deinit[(int)local_c8] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[(int)local_a8] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)&local_a8,"value");
      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_128);
      ::Variant::operator=(pVVar14,local_190);
      if (::Variant::needs_deinit[(int)local_a8] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)&local_a8,(Dictionary *)&local_128);
      operator+((char *)&local_120,(String *)"shader_globals/");
      StringName::StringName((StringName *)&local_118,(String *)&local_120,false);
      pSVar10 = (StringName *)ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_do_property(pOVar9,pSVar10,(Variant *)&local_118);
      if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
      if (::Variant::needs_deinit[(int)local_a8] != '\0') {
        ::Variant::_clear_internal();
      }
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      local_a8 = 0;
      uStack_a4 = 0;
      operator+((char *)&local_120,(String *)"shader_globals/");
      StringName::StringName((StringName *)&local_118,(String *)&local_120,false);
      pSVar10 = (StringName *)ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_undo_property(pOVar9,pSVar10,(Variant *)&local_118);
      if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
      if (::Variant::needs_deinit[(int)local_a8] != '\0') {
        ::Variant::_clear_internal();
      }
      StringName::StringName((StringName *)&local_118,"_changed",false);
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      EditorUndoRedoManager::add_do_methodp(pOVar9,(StringName *)this,(Variant **)&local_118,0);
      if (::Variant::needs_deinit[(int)local_a8] != '\0') {
        ::Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_118,"_changed",false);
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      EditorUndoRedoManager::add_undo_methodp(pOVar9,(StringName *)this,(Variant **)&local_118,0);
      if (::Variant::needs_deinit[(int)local_a8] != '\0') {
        ::Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_118 != (char *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(pOVar9,0));
      LineEdit::clear();
      Dictionary::~Dictionary((Dictionary *)&local_128);
      if (::Variant::needs_deinit[local_108[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      goto LAB_00101c88;
    }
LAB_00101acd:
    pSVar3 = EditorNode::singleton;
    local_120 = 0;
    local_118 = "";
    local_110 = (undefined8 *)0x0;
    String::parse_latin1((StrRange *)&local_120);
    local_128 = 0;
    local_118 = "Warning!";
    local_110 = (undefined8 *)0x8;
    String::parse_latin1((StrRange *)&local_128);
    TTR(local_130,(String *)&local_128);
    local_138 = 0;
    if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_160);
    }
    local_118 = "";
    local_148 = 0;
    local_110 = (undefined8 *)0x0;
    String::parse_latin1((StrRange *)&local_148);
    local_118 = "Name \'%s\' is a reserved shader language keyword.";
    local_150 = 0;
    local_110 = (undefined8 *)0x30;
    String::parse_latin1((StrRange *)&local_150);
    TTR(local_140,(String *)&local_150);
    vformat<String>((CowData<char32_t> *)&local_118,local_140,(CowData<char32_t> *)&local_138);
    EditorNode::show_warning(pSVar3,(String *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_158);
  }
  else {
    local_118 = (char *)0x0;
    String::parse_latin1((String *)&local_118,"");
    local_120 = 0;
    String::parse_latin1((String *)&local_120,"Warning!");
    TTR((String *)&local_128,(String *)&local_120);
    local_138 = 0;
    if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)&local_160);
    }
    local_148 = 0;
    String::parse_latin1((String *)&local_148,"");
    local_150 = 0;
    String::parse_latin1((String *)&local_150,"Global shader parameter \'%s\' already exists.");
    TTR(local_140,(String *)&local_150);
    vformat<String>((CowData<char32_t> *)local_130,local_140,(CowData<char32_t> *)&local_138);
    EditorNode::show_warning(pSVar3,local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
LAB_00101c88:
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



/* ShaderGlobalsEditorInterface::is_class_ptr(void*) const */

uint __thiscall
ShaderGlobalsEditorInterface::is_class_ptr(ShaderGlobalsEditorInterface *this,void *param_1)

{
  return (uint)CONCAT71(0x10bd,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10bb,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* ShaderGlobalsEditorInterface::_validate_propertyv(PropertyInfo&) const */

void ShaderGlobalsEditorInterface::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ShaderGlobalsEditorInterface::_property_can_revertv(StringName const&) const */

undefined8 ShaderGlobalsEditorInterface::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ShaderGlobalsEditorInterface::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ShaderGlobalsEditorInterface::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ShaderGlobalsEditorInterface::_notificationv(int, bool) */

void ShaderGlobalsEditorInterface::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<ShaderGlobalsEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderGlobalsEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ShaderGlobalsEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderGlobalsEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<ShaderGlobalsEditorInterface, void, StringName const&, Variant
   const&, Variant const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditorInterface,void,StringName_const&,Variant_const&,Variant_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderGlobalsEditorInterface,void,StringName_const&,Variant_const&,Variant_const&>
           *this)

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



/* CallableCustomMethodPointer<ShaderGlobalsEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditor,void>::get_argument_count
          (CallableCustomMethodPointer<ShaderGlobalsEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ShaderGlobalsEditor, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<ShaderGlobalsEditor,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<ShaderGlobalsEditorInterface, void, StringName const&, Variant
   const&, Variant const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditorInterface,void,StringName_const&,Variant_const&,Variant_const&>
::get_argument_count
          (CallableCustomMethodPointer<ShaderGlobalsEditorInterface,void,StringName_const&,Variant_const&,Variant_const&>
           *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<ShaderGlobalsEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderGlobalsEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ShaderGlobalsEditorInterface, void, StringName const&, Variant
   const&, Variant const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditorInterface,void,StringName_const&,Variant_const&,Variant_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderGlobalsEditorInterface,void,StringName_const&,Variant_const&,Variant_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<ShaderGlobalsEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderGlobalsEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010bad0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010bad0;
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



/* ShaderGlobalsEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ShaderGlobalsEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_0010f008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ShaderGlobalsEditor::_property_can_revertv(StringName const&) const */

undefined8 ShaderGlobalsEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010f008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ShaderGlobalsEditorInterface::~ShaderGlobalsEditorInterface() */

void __thiscall
ShaderGlobalsEditorInterface::~ShaderGlobalsEditorInterface(ShaderGlobalsEditorInterface *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b448;
  Object::~Object((Object *)this);
  return;
}



/* ShaderGlobalsEditorInterface::~ShaderGlobalsEditorInterface() */

void __thiscall
ShaderGlobalsEditorInterface::~ShaderGlobalsEditorInterface(ShaderGlobalsEditorInterface *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b448;
  Object::~Object((Object *)this);
  operator_delete(this,0x178);
  return;
}



/* CallableCustomMethodPointer<ShaderGlobalsEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<ShaderGlobalsEditor,void,String_const&> *this)

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
      goto LAB_001031ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001031ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001031ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ShaderGlobalsEditorInterface, void, StringName const&, Variant
   const&, Variant const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditorInterface,void,StringName_const&,Variant_const&,Variant_const&>
::get_object(CallableCustomMethodPointer<ShaderGlobalsEditorInterface,void,StringName_const&,Variant_const&,Variant_const&>
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
      goto LAB_001032ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001032ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001032ed:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ShaderGlobalsEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditor,void>::get_object
          (CallableCustomMethodPointer<ShaderGlobalsEditor,void> *this)

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
      goto LAB_001033ed;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001033ed;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001033ed:
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
  if ((code *)PTR__validate_property_0010f010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* ShaderGlobalsEditor::_validate_propertyv(PropertyInfo&) const */

void ShaderGlobalsEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010f010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* ShaderGlobalsEditor::_setv(StringName const&, Variant const&) */

undefined8 ShaderGlobalsEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010f018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0010f018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001036b8) */
/* ShaderGlobalsEditor::_getv(StringName const&, Variant&) const */

undefined8 ShaderGlobalsEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010f020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00103728) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010f020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
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
    uVar1 = (uint)CONCAT71(0x10bd,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10bd,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10bd,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10bd,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10bd,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* ShaderGlobalsEditor::is_class_ptr(void*) const */

ulong ShaderGlobalsEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10bd,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10bd,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10bd,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10bd,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10bd,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10bd,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* ShaderGlobalsEditorInterface::_var_changed() */

void __thiscall ShaderGlobalsEditorInterface::_var_changed(ShaderGlobalsEditorInterface *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (_var_changed()::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_var_changed()::{lambda()#1}::operator()()::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_var_changed()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_var_changed()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_var_changed()::{lambda()#1}::operator()()::sname);
    }
  }
  (**(code **)(*(long *)this + 0xd0))(this,&_var_changed()::{lambda()#1}::operator()()::sname,0,0);
  if (::Variant::needs_deinit[0] != '\0') {
    ::Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsEditorInterface::_getv(StringName const&, Variant&) const */

bool __thiscall
ShaderGlobalsEditorInterface::_getv
          (ShaderGlobalsEditorInterface *this,StringName *param_1,Variant *param_2)

{
  long *plVar1;
  long in_FS_OFFSET;
  int local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x1190))(local_38,plVar1,param_1);
  if (::Variant::needs_deinit[*(int *)param_2] != '\0') {
    ::Variant::_clear_internal();
  }
  *(int *)param_2 = local_38[0];
  *(undefined8 *)(param_2 + 8) = local_30;
  *(undefined8 *)(param_2 + 0x10) = uStack_28;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0] != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = predelete_handler;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103a10;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00103a10:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = predelete_handler;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103a70;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00103a70:
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



/* ShaderGlobalsEditor::_get_class_namev() const */

undefined8 * ShaderGlobalsEditor::_get_class_namev(void)

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
LAB_00103b43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103b43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ShaderGlobalsEditor");
      goto LAB_00103bae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ShaderGlobalsEditor");
LAB_00103bae:
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
LAB_00103c33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103c33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00103c9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00103c9e:
  return &_get_class_namev()::_class_name_static;
}



/* ShaderGlobalsEditorInterface::_get_class_namev() const */

undefined8 * ShaderGlobalsEditorInterface::_get_class_namev(void)

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
LAB_00103d33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103d33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "ShaderGlobalsEditorInterface");
      goto LAB_00103d9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ShaderGlobalsEditorInterface");
LAB_00103d9e:
  return &_get_class_namev()::_class_name_static;
}



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ShaderGlobalsEditor::_bind_methods() [clone .cold] */

void ShaderGlobalsEditor::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ShaderGlobalsEditorInterface::is_class(String const&) const */

undefined8 __thiscall
ShaderGlobalsEditorInterface::is_class(ShaderGlobalsEditorInterface *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00103e5f;
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
LAB_00103e5f:
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
    if (cVar6 != '\0') goto LAB_00103f13;
  }
  cVar6 = String::operator==(param_1,"ShaderGlobalsEditorInterface");
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
              if (lVar5 == 0) goto LAB_00103fc3;
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
LAB_00103fc3:
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
      if (cVar6 != '\0') goto LAB_00103f13;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00103f13:
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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
LAB_0010423f:
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
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00104153;
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
            local_50 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
LAB_00104153:
    uVar5 = String::operator==(param_1,(String *)&local_50);
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
    if ((char)uVar5 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar5;
      }
      goto LAB_0010423f;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x00104330) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010f028 != Container::_notification) {
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
  if ((code *)PTR__notification_0010f028 == Container::_notification) {
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



/* ShaderGlobalsEditorInterface::_set(StringName const&, Variant const&) */

undefined8 __thiscall
ShaderGlobalsEditorInterface::_set
          (ShaderGlobalsEditorInterface *this,StringName *param_1,Variant *param_2)

{
  Variant *pVVar1;
  long *plVar2;
  CallableCustom *this_00;
  undefined8 uVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  long local_140;
  Callable local_138 [16];
  int local_128 [8];
  int local_108 [8];
  int local_e8 [8];
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
  plVar2 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar2 + 0x1190))((Variant *)local_128,plVar2,param_1);
  if (local_128[0] == 0) {
    uVar3 = 0;
  }
  else {
    this_00 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_00);
    *(undefined **)(this_00 + 0x20) = &_LC13;
    *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_00 = &PTR_hash_0010b920;
    *(undefined8 *)(this_00 + 0x40) = 0;
    uVar3 = *(undefined8 *)(this + 0x60);
    *(ShaderGlobalsEditorInterface **)(this_00 + 0x28) = this;
    *(undefined8 *)(this_00 + 0x30) = uVar3;
    *(code **)(this_00 + 0x38) = _set_var;
    *(undefined8 *)(this_00 + 0x10) = 0;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "ShaderGlobalsEditorInterface::_set_var";
    Callable::Callable(local_138,this_00);
    ::Variant::Variant((Variant *)local_e8,(Variant *)local_128);
    ::Variant::Variant((Variant *)local_108,param_2);
    StringName::StringName((StringName *)&local_140,param_1);
    ::Variant::Variant(local_a8,(StringName *)&local_140);
    ::Variant::Variant(local_90,(Variant *)local_108);
    ::Variant::Variant(local_78,(Variant *)local_e8);
    ::Variant::Variant(local_60,0);
    pVVar4 = local_48;
    local_c8 = local_a8;
    pVStack_c0 = local_90;
    local_b8 = local_78;
    Callable::call_deferredp((Variant **)local_138,(int)&local_c8);
    do {
      pVVar1 = pVVar4 + -0x18;
      pVVar4 = pVVar4 + -0x18;
      if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        ::Variant::_clear_internal();
      }
    } while (pVVar4 != local_a8);
    if ((StringName::configured != '\0') && (local_140 != 0)) {
      StringName::unref();
    }
    if (::Variant::needs_deinit[local_108[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[local_e8[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    Callable::~Callable(local_138);
    if (::Variant::needs_deinit[local_128[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    uVar3 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsEditorInterface::_setv(StringName const&, Variant const&) */

void __thiscall
ShaderGlobalsEditorInterface::_setv
          (ShaderGlobalsEditorInterface *this,StringName *param_1,Variant *param_2)

{
  _set(this,param_1,param_2);
  return;
}



/* ShaderGlobalsEditor::_notificationv(int, bool) */

void __thiscall
ShaderGlobalsEditor::_notificationv(ShaderGlobalsEditor *this,int param_1,bool param_2)

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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* ShaderGlobalsEditorInterface::get_class() const */

void ShaderGlobalsEditorInterface::get_class(void)

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



/* ShaderGlobalsEditor::get_class() const */

void ShaderGlobalsEditor::get_class(void)

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



/* Callable create_custom_callable_function_pointer<ShaderGlobalsEditor, String
   const&>(ShaderGlobalsEditor*, char const*, void (ShaderGlobalsEditor::*)(String const&)) */

ShaderGlobalsEditor *
create_custom_callable_function_pointer<ShaderGlobalsEditor,String_const&>
          (ShaderGlobalsEditor *param_1,char *param_2,_func_void_String_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_0010b9b0;
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



/* Callable create_custom_callable_function_pointer<ShaderGlobalsEditor>(ShaderGlobalsEditor*, char
   const*, void (ShaderGlobalsEditor::*)()) */

ShaderGlobalsEditor *
create_custom_callable_function_pointer<ShaderGlobalsEditor>
          (ShaderGlobalsEditor *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_0010ba40;
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



/* WARNING: Removing unreachable block (ram,0x00104c98) */
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



/* ShaderGlobalsEditorInterface::_set_var(StringName const&, Variant const&, Variant const&) */

void __thiscall
ShaderGlobalsEditorInterface::_set_var
          (ShaderGlobalsEditorInterface *this,StringName *param_1,Variant *param_2,Variant *param_3)

{
  Variant *pVVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  StringName *pSVar5;
  long *plVar6;
  long lVar7;
  Object *pOVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  Dictionary local_140 [8];
  undefined8 local_138;
  long local_130;
  char *local_128;
  undefined8 local_120;
  int local_118 [8];
  Variant *local_f8;
  Variant *pVStack_f0;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant local_c0 [24];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  Variant local_90 [8];
  ulong local_88;
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
  local_128 = "";
  local_130 = 0;
  local_120 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  local_128 = "Set Shader Global Variable";
  local_120 = 0x1a;
  String::parse_latin1((StrRange *)&local_138);
  TTR((String *)&local_128,(String *)&local_138);
  EditorUndoRedoManager::create_action(pOVar4,(String *)&local_128,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  ::Variant::Variant((Variant *)local_118,param_2);
  StringName::StringName((StringName *)&local_128,param_1);
  StringName::StringName((StringName *)&local_130,"global_shader_parameter_set",false);
  pSVar5 = (StringName *)RenderingServer::get_singleton();
  ::Variant::Variant((Variant *)&local_d8,(StringName *)&local_128);
  pVVar9 = local_90;
  ::Variant::Variant(local_c0,(Variant *)local_118);
  local_a8 = 0;
  local_a0 = (undefined1  [16])0x0;
  local_f8 = (Variant *)&local_d8;
  pVStack_f0 = local_c0;
  EditorUndoRedoManager::add_do_methodp
            (pOVar4,pSVar5,(Variant **)&local_130,(int)(Variant *)&local_f8);
  do {
    pVVar1 = pVVar9 + -0x18;
    pVVar9 = pVVar9 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar9 != (Variant *)&local_d8);
  if ((StringName::configured != '\0') &&
     (((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_128 != (char *)0x0)))) {
    StringName::unref();
  }
  if (::Variant::needs_deinit[local_118[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  ::Variant::Variant((Variant *)&local_f8,param_3);
  StringName::StringName((StringName *)&local_128,param_1);
  StringName::StringName((StringName *)&local_130,"global_shader_parameter_set",false);
  pSVar5 = (StringName *)RenderingServer::get_singleton();
  ::Variant::Variant((Variant *)&local_88,(StringName *)&local_128);
  ::Variant::Variant(local_70,(Variant *)&local_f8);
  local_50 = (undefined1  [16])0x0;
  pVVar9 = (Variant *)local_40;
  local_58 = 0;
  local_d8 = (Variant *)&local_88;
  pVStack_d0 = local_70;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar4,pSVar5,(Variant **)&local_130,(int)(Variant *)&local_d8);
  do {
    pVVar1 = pVVar9 + -0x18;
    pVVar9 = pVVar9 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar9 != (Variant *)&local_88);
  if (((StringName::configured != '\0') &&
      ((local_130 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  if (::Variant::needs_deinit[(int)local_f8] != '\0') {
    ::Variant::_clear_internal();
  }
  plVar6 = (long *)RenderingServer::get_singleton();
  iVar3 = (**(code **)(*plVar6 + 0x1198))(plVar6,param_1);
  Dictionary::Dictionary(local_140);
  ::Variant::Variant((Variant *)&local_88,(&global_var_type_names)[iVar3]);
  ::Variant::Variant((Variant *)&local_d8,"type");
  pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_140);
  if (pVVar9 != (Variant *)&local_88) {
    if (::Variant::needs_deinit[*(int *)pVVar9] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)pVVar9 = 0;
    *(int *)pVVar9 = (int)local_88;
    *(undefined8 *)(pVVar9 + 8) = local_80._0_8_;
    *(undefined8 *)(pVVar9 + 0x10) = local_80._8_8_;
    local_88 = local_88 & 0xffffffff00000000;
  }
  if (::Variant::needs_deinit[(int)local_d8] == '\0') {
    cVar2 = ::Variant::needs_deinit[(int)local_88];
  }
  else {
    ::Variant::_clear_internal();
    cVar2 = ::Variant::needs_deinit[(int)local_88];
  }
  if (cVar2 != '\0') {
    ::Variant::_clear_internal();
  }
  if (iVar3 < 0x18) {
    ::Variant::Variant((Variant *)&local_88,"value");
    pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    ::Variant::operator=(pVVar9,param_2);
  }
  else {
    lVar7 = ::Variant::get_validated_object();
    if (((lVar7 != 0) &&
        (pOVar8 = (Object *)__dynamic_cast(lVar7,&Object::typeinfo,&Resource::typeinfo,0),
        pOVar8 != (Object *)0x0)) && (cVar2 = RefCounted::reference(), cVar2 != '\0')) {
      Resource::get_path();
      ::Variant::Variant((Variant *)&local_88,(String *)&local_128);
      ::Variant::Variant((Variant *)&local_d8,"value");
      pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_140);
      if (pVVar9 != (Variant *)&local_88) {
        if (::Variant::needs_deinit[*(int *)pVVar9] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)pVVar9 = 0;
        *(int *)pVVar9 = (int)local_88;
        *(undefined8 *)(pVVar9 + 8) = local_80._0_8_;
        *(undefined8 *)(pVVar9 + 0x10) = local_80._8_8_;
        local_88 = local_88 & 0xffffffff00000000;
      }
      if (::Variant::needs_deinit[(int)local_d8] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[(int)local_88] != '\0') {
        ::Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar8), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
      goto LAB_0010558a;
    }
    ::Variant::Variant((Variant *)&local_88,"");
    ::Variant::Variant((Variant *)&local_d8,"value");
    pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_140);
    if (pVVar9 != (Variant *)&local_88) {
      if (::Variant::needs_deinit[*(int *)pVVar9] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)pVVar9 = 0;
      *(int *)pVVar9 = (int)local_88;
      *(undefined8 *)(pVVar9 + 8) = local_80._0_8_;
      *(undefined8 *)(pVVar9 + 0x10) = local_80._8_8_;
      local_88 = local_88 & 0xffffffff00000000;
    }
    if (::Variant::needs_deinit[(int)local_d8] != '\0') {
      ::Variant::_clear_internal();
    }
  }
  if (::Variant::needs_deinit[(int)local_88] != '\0') {
    ::Variant::_clear_internal();
  }
LAB_0010558a:
  lVar7 = *(long *)param_1;
  if (lVar7 == 0) {
    local_128 = (char *)0x0;
  }
  else {
    local_128 = (char *)0x0;
    if (*(char **)(lVar7 + 8) == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)(lVar7 + 0x10));
    }
    else {
      String::parse_latin1((String *)&local_128,*(char **)(lVar7 + 8));
    }
  }
  operator+((char *)&local_138,(String *)"shader_globals/");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  ::Variant::Variant((Variant *)&local_88,local_140);
  StringName::StringName((StringName *)&local_128,(String *)&local_138,false);
  pSVar5 = (StringName *)ProjectSettings::get_singleton();
  EditorUndoRedoManager::add_do_property(pOVar4,pSVar5,(Variant *)&local_128);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  if (::Variant::needs_deinit[(int)local_88] != '\0') {
    ::Variant::_clear_internal();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
  ProjectSettings::get_setting_with_override((StringName *)&local_88);
  StringName::StringName((StringName *)&local_128,(String *)&local_138,false);
  pSVar5 = (StringName *)ProjectSettings::get_singleton();
  EditorUndoRedoManager::add_undo_property(pOVar4,pSVar5,(Variant *)&local_128);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  if (::Variant::needs_deinit[(int)local_88] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_130 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"_var_changed",false);
  local_88 = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(pOVar4,(StringName *)this,(Variant **)&local_128,0);
  if (::Variant::needs_deinit[(int)local_88] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"_var_changed",false);
  local_88 = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(pOVar4,(StringName *)this,(Variant **)&local_128,0);
  if (::Variant::needs_deinit[(int)local_88] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  this[0x171] = (ShaderGlobalsEditorInterface)0x1;
  EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
  this[0x171] = (ShaderGlobalsEditorInterface)0x0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  Dictionary::~Dictionary(local_140);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
            if (::Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              ::Variant::_clear_internal();
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
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00105b35;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00105b35:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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



/* CallableCustomMethodPointer<ShaderGlobalsEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditor,void>::call
          (CallableCustomMethodPointer<ShaderGlobalsEditor,void> *this,Variant **param_1,int param_2
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
      goto LAB_00105eff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00105eff;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00105fc1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00105eff:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC50,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00105fc1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ShaderGlobalsEditorInterface, void, StringName const&, Variant
   const&, Variant const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditorInterface,void,StringName_const&,Variant_const&,Variant_const&>
::call(CallableCustomMethodPointer<ShaderGlobalsEditorInterface,void,StringName_const&,Variant_const&,Variant_const&>
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
  CowData<char32_t> local_a0 [8];
  CowData<char32_t> local_98 [8];
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_88 >> 8;
      local_88 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_88 = (char *)(uVar3 << 8);
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
        if ((uint)param_2 < 4) {
          if (param_2 == 3) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = ::Variant::can_convert_strict(*(undefined4 *)param_1[2],0);
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 2;
            }
            ::Variant::Variant((Variant *)local_78,param_1[2]);
            cVar5 = ::Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 1;
            }
            ::Variant::Variant((Variant *)local_58,param_1[1]);
            cVar5 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar4 = _LC53;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            ::Variant::operator_cast_to_StringName((Variant *)&local_88);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_88,(Variant *)local_58,
                      (Variant *)local_78);
            if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
              StringName::unref();
            }
            if (::Variant::needs_deinit[local_58[0]] != '\0') {
              ::Variant::_clear_internal();
            }
            if (::Variant::needs_deinit[local_78[0]] != '\0') {
              ::Variant::_clear_internal();
            }
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
        goto LAB_0010609c;
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
  local_90 = 0;
  local_88 = "\', can\'t call method.";
  local_80 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  uitos((ulong)local_a0);
  operator+((char *)local_98,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_88,(String *)local_98);
  _err_print_error(&_LC50,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_88,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref(local_98);
  CowData<char32_t>::_unref(local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_0010609c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<ShaderGlobalsEditor, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditor,void,String_const&>::call
          (CallableCustomMethodPointer<ShaderGlobalsEditor,void,String_const&> *this,
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
            cVar4 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC54;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            ::Variant::operator_cast_to_String(local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),local_38);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_001063ce;
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
  _err_print_error(&_LC50,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_001063ce:
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
            if (lVar3 == 0) goto LAB_001065df;
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
LAB_001065df:
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
    if (cVar6 != '\0') goto LAB_00106693;
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
      if (cVar6 != '\0') goto LAB_00106693;
    }
    cVar6 = String::operator==(param_1,"Node");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Object::is_class((Object *)this,param_1);
        return uVar8;
      }
      goto LAB_0010679e;
    }
  }
LAB_00106693:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010679e:
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
            if (lVar3 == 0) goto LAB_0010683f;
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
LAB_0010683f:
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
    if (cVar6 != '\0') goto LAB_001068f3;
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
      if (cVar6 != '\0') goto LAB_001068f3;
    }
    cVar6 = String::operator==(param_1,"Container");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar5 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar5 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar5 + 8));
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar6 != '\0') goto LAB_001068f3;
      }
      cVar6 = String::operator==(param_1,"Control");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
          return uVar8;
        }
        goto LAB_00106a8e;
      }
    }
  }
LAB_001068f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00106a8e:
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
            if (lVar4 == 0) goto LAB_00106b0f;
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
LAB_00106b0f:
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
    if (cVar5 != '\0') goto LAB_00106bc3;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106bc3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsEditor::is_class(String const&) const */

undefined8 __thiscall ShaderGlobalsEditor::is_class(ShaderGlobalsEditor *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_00106c9f;
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
LAB_00106c9f:
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
    if (cVar6 != '\0') goto LAB_00106d53;
  }
  cVar6 = String::operator==(param_1,"ShaderGlobalsEditor");
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
      if (cVar6 != '\0') goto LAB_00106d53;
    }
    cVar6 = String::operator==(param_1,"VBoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar8;
      }
      goto LAB_00106e5e;
    }
  }
LAB_00106d53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00106e5e:
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
              if ((code *)PTR__bind_methods_0010f040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0010f030 !=
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
      if ((code *)PTR__bind_methods_0010f038 != Container::_bind_methods) {
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
  local_78 = &_LC56;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC56;
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
      goto LAB_0010770c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010770c:
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
      goto LAB_00107971;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00107971:
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
  if ((code *)PTR__get_property_list_0010f048 != Object::_get_property_list) {
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
      goto LAB_00107c41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00107c41:
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
  if ((code *)PTR__get_property_list_0010f050 != CanvasItem::_get_property_list) {
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
      goto LAB_00107f11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00107f11:
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
      goto LAB_001081c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001081c1:
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
      goto LAB_00108471;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108471:
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



/* ShaderGlobalsEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ShaderGlobalsEditor::_get_property_listv(ShaderGlobalsEditor *this,List *param_1,bool param_2)

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
  local_78 = "ShaderGlobalsEditor";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ShaderGlobalsEditor";
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
      goto LAB_00108721;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108721:
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
  StringName::StringName((StringName *)&local_78,"ShaderGlobalsEditor",false);
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
      goto LAB_001089d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001089d1:
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



/* MethodBind* create_method_bind<ShaderGlobalsEditorInterface>(void
   (ShaderGlobalsEditorInterface::*)()) */

MethodBind * create_method_bind<ShaderGlobalsEditorInterface>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010bad0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ShaderGlobalsEditorInterface";
  local_30 = 0x1c;
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



/* MethodBind* create_method_bind<ShaderGlobalsEditor>(void (ShaderGlobalsEditor::*)()) */

MethodBind * create_method_bind<ShaderGlobalsEditor>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010bad0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ShaderGlobalsEditor";
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



/* ShaderGlobalsEditorInterface::_bind_methods() */

void ShaderGlobalsEditorInterface::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  int *piVar5;
  MethodBind *pMVar6;
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
  
  local_b8._8_8_ = local_b8._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar6 = create_method_bind<ShaderGlobalsEditorInterface>(_var_changed);
  StringName::StringName((StringName *)&local_c8,"_var_changed",false);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_b8._8_8_;
  local_b8 = auVar4 << 0x40;
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  local_e0 = 0;
  local_c8 = "var_changed";
  local_c0 = 0xb;
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
  local_d0 = 0x1c;
  local_d8 = "ShaderGlobalsEditorInterface";
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
  ClassDB::add_signal((StringName *)&local_d8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
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
  piVar5 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_78 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        piVar7 = piVar5;
        do {
          if (::Variant::needs_deinit[*piVar7] != '\0') {
            ::Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar7 = piVar7 + 6;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(piVar5 + -4,false);
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



/* ShaderGlobalsEditorInterface::_initialize_classv() */

void ShaderGlobalsEditorInterface::_initialize_classv(void)

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
    local_48 = "ShaderGlobalsEditorInterface";
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
    if ((code *)PTR__bind_methods_0010f040 != _bind_methods) {
      _bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsEditorInterface::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void ShaderGlobalsEditorInterface::_get_property_listv(List *param_1,bool param_2)

{
  char *__s;
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [8];
  long lVar10;
  undefined7 in_register_00000031;
  List<PropertyInfo,DefaultAllocator> *this;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> *local_d0;
  CowData<StringName> *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  size_t local_80;
  char *local_78;
  undefined1 local_70 [8];
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pcStack_68 = (char *)local_70;
  this = (List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  local_a0 = 0;
  local_78 = "ShaderGlobalsEditorInterface";
  local_70 = (undefined1  [8])0x1c;
  String::parse_latin1((StrRange *)&local_a0);
  local_78 = "ShaderGlobalsEditorInterface";
  local_a8 = 0;
  local_70 = (undefined1  [8])0x1c;
  String::parse_latin1((StrRange *)&local_a8);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = pcStack_68;
  _local_70 = auVar3 << 0x40;
  auVar9 = (undefined1  [8])0;
  if (local_a8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_70,(CowData *)&local_a8);
    auVar9 = local_70;
  }
  local_70 = auVar9;
  pcStack_68 = (char *)0x0;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  local_58 = 0;
  if (local_a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_a0);
    local_50 = 0x80;
    if ((int)local_60 == 0x11) {
      StringName::StringName((StringName *)&local_88,(String *)&local_58,false);
      if (pcStack_68 == local_88) {
        if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        pcStack_68 = local_88;
      }
      goto LAB_0010943f;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_98);
LAB_0010943f:
  local_d0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back(this,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_d0);
  if ((StringName::configured != '\0') && (pcStack_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ShaderGlobalsEditorInterface",false);
  ClassDB::get_property_list((StringName *)&local_78,(List *)this,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  local_90 = 0;
  plVar5 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar5 + 0x1178))((StringName *)&local_78,plVar5);
  if (local_70 == (undefined1  [8])0x0) {
    CowData<StringName>::_unref((CowData<StringName> *)local_70);
  }
  else {
    lVar10 = 0;
    CowData<StringName>::_unref((CowData<StringName> *)&local_90);
    auVar9 = local_70;
    local_70 = (undefined1  [8])0x0;
    local_90 = (long)auVar9;
    CowData<StringName>::_unref((CowData<StringName> *)local_70);
    if (auVar9 != (undefined1  [8])0x0) {
      for (; lVar10 < *(long *)((long)auVar9 + -8); lVar10 = lVar10 + 1) {
        local_78 = (char *)0x0;
        local_60 = 0;
        local_70 = (undefined1  [8])0x0;
        pcStack_68 = (char *)0x0;
        lVar11 = *(long *)((long)auVar9 + lVar10 * 8);
        local_58 = 0;
        local_50 = 6;
        if (lVar11 == 0) {
LAB_001095f2:
          local_a0 = 0;
        }
        else {
          __s = *(char **)(lVar11 + 8);
          local_a0 = 0;
          if (__s == (char *)0x0) {
            if (*(long *)(lVar11 + 0x10) != 0) {
              plVar5 = (long *)(*(long *)(lVar11 + 0x10) + -0x10);
              do {
                lVar1 = *plVar5;
                if (lVar1 == 0) goto LAB_001095d9;
                LOCK();
                lVar7 = *plVar5;
                bVar12 = lVar1 == lVar7;
                if (bVar12) {
                  *plVar5 = lVar1 + 1;
                  lVar7 = lVar1;
                }
                UNLOCK();
              } while (!bVar12);
              if (lVar7 != -1) {
                local_a0 = *(long *)(lVar11 + 0x10);
              }
              goto LAB_001095d9;
            }
          }
          else {
            local_80 = strlen(__s);
            local_88 = __s;
            String::parse_latin1((StrRange *)&local_a0);
LAB_001095d9:
            if (local_70 != (undefined1  [8])local_a0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
              local_70 = (undefined1  [8])local_a0;
              goto LAB_001095f2;
            }
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        plVar5 = (long *)RenderingServer::get_singleton();
        auVar9 = (undefined1  [8])local_90;
        if (local_90 == 0) {
          lVar11 = 0;
LAB_00109803:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar11,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar11 = *(long *)(local_90 + -8);
        if (lVar11 <= lVar10) goto LAB_00109803;
        uVar4 = (**(code **)(*plVar5 + 0x1198))(plVar5,local_90 + lVar10 * 8);
        switch(uVar4) {
        case 0:
          local_78 = (char *)CONCAT44(local_78._4_4_,1);
          break;
        case 1:
          local_78 = (char *)CONCAT44(local_78._4_4_,2);
          local_60 = CONCAT44(local_60._4_4_,6);
          String::parse_latin1((String *)local_d0,"x,y");
          break;
        case 2:
          local_78 = (char *)CONCAT44(local_78._4_4_,2);
          local_60 = CONCAT44(local_60._4_4_,6);
          String::parse_latin1((String *)local_d0,"x,y,z");
          break;
        case 3:
          local_78 = (char *)CONCAT44(local_78._4_4_,2);
          local_60 = CONCAT44(local_60._4_4_,6);
          String::parse_latin1((String *)local_d0,"x,y,z,w");
          break;
        case 4:
        case 9:
          local_78 = (char *)CONCAT44(local_78._4_4_,2);
          break;
        case 5:
        case 10:
          local_78 = (char *)CONCAT44(local_78._4_4_,6);
          break;
        case 6:
        case 0xb:
          local_78 = (char *)CONCAT44(local_78._4_4_,10);
          break;
        case 7:
        case 0xc:
          local_78 = (char *)CONCAT44(local_78._4_4_,0xd);
          break;
        case 8:
          local_78 = (char *)CONCAT44(local_78._4_4_,8);
          break;
        case 0xd:
          local_78 = (char *)CONCAT44(local_78._4_4_,3);
          break;
        case 0xe:
          local_78 = (char *)CONCAT44(local_78._4_4_,5);
          break;
        case 0xf:
          local_78 = (char *)CONCAT44(local_78._4_4_,9);
          break;
        case 0x10:
          local_78 = (char *)CONCAT44(local_78._4_4_,0xc);
          break;
        case 0x11:
          local_78 = (char *)CONCAT44(local_78._4_4_,0x14);
          break;
        case 0x12:
          local_78 = (char *)CONCAT44(local_78._4_4_,7);
          break;
        case 0x13:
          local_78 = (char *)CONCAT44(local_78._4_4_,0x20);
          break;
        case 0x14:
          local_78 = (char *)CONCAT44(local_78._4_4_,0x11);
          break;
        case 0x15:
          local_78 = (char *)CONCAT44(local_78._4_4_,0x13);
          break;
        case 0x16:
          local_78 = (char *)CONCAT44(local_78._4_4_,0xb);
          break;
        case 0x17:
          local_78 = (char *)CONCAT44(local_78._4_4_,0x12);
          break;
        case 0x18:
          local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
          local_60 = CONCAT44(local_60._4_4_,0x11);
          String::parse_latin1((String *)local_d0,"Texture2D");
          break;
        case 0x19:
          local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
          local_60 = CONCAT44(local_60._4_4_,0x11);
          String::parse_latin1((String *)local_d0,"Texture2DArray,CompressedTexture2DArray");
          break;
        case 0x1a:
          local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
          local_60 = CONCAT44(local_60._4_4_,0x11);
          String::parse_latin1((String *)local_d0,"Texture3D");
          break;
        case 0x1b:
          local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
          local_60 = CONCAT44(local_60._4_4_,0x11);
          String::parse_latin1((String *)local_d0,"Cubemap,CompressedCubemap");
          break;
        case 0x1c:
          local_78 = (char *)CONCAT44(local_78._4_4_,0x18);
          local_60 = CONCAT44(local_60._4_4_,0x11);
          String::parse_latin1((String *)local_d0,"ExternalTexture");
        }
        if (*(long *)this == 0) {
          pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])this = pauVar8;
          *(undefined4 *)pauVar8[1] = 0;
          *pauVar8 = (undefined1  [16])0x0;
        }
        puVar6 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar6 + 8) = 0;
        *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
        *puVar6 = 0;
        puVar6[6] = 0;
        puVar6[10] = 6;
        *(undefined8 *)(puVar6 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar6 + 0xc) = (undefined1  [16])0x0;
        *puVar6 = local_78._0_4_;
        if (local_70 != (undefined1  [8])0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)local_70);
        }
        StringName::operator=((StringName *)(puVar6 + 4),(StringName *)(local_70 + 8));
        puVar6[6] = (int)local_60;
        if (*(long *)(puVar6 + 8) != local_58) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)local_d0);
        }
        puVar6[10] = local_50;
        plVar5 = *(long **)this;
        lVar11 = plVar5[1];
        *(long **)(puVar6 + 0x10) = plVar5;
        *(undefined8 *)(puVar6 + 0xc) = 0;
        *(long *)(puVar6 + 0xe) = lVar11;
        if (lVar11 != 0) {
          *(undefined4 **)(lVar11 + 0x30) = puVar6;
        }
        plVar5[1] = (long)puVar6;
        if (*plVar5 == 0) {
          *plVar5 = (long)puVar6;
        }
        *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
        CowData<char32_t>::_unref(local_d0);
        if ((StringName::configured != '\0') && (pcStack_68 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      }
    }
  }
  local_b0 = (CowData<StringName> *)&local_90;
  CowData<StringName>::_unref(local_b0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ShaderGlobalsEditor::_initialize_classv() */

void ShaderGlobalsEditor::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_0010f040 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_0010f030 !=
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
        if ((code *)PTR__bind_methods_0010f038 != Container::_bind_methods) {
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
    local_58 = "ShaderGlobalsEditor";
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



/* CowData<float>::_realloc(long) */

undefined8 __thiscall CowData<float>::_realloc(CowData<float> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x0010a4a8) */
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
      _err_print_error(&_LC50,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a7c0;
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
LAB_0010a7c0:
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
      goto LAB_0010abcf;
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
                    /* WARNING: Could not recover jumptable at 0x0010aa76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010abcf:
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
      goto LAB_0010ad8f;
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
                    /* WARNING: Could not recover jumptable at 0x0010ac36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010ad8f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ShaderGlobalsEditor::_check_new_variable_name(String const&) */

void ShaderGlobalsEditor::_GLOBAL__sub_I__check_new_variable_name(void)

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
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ShaderGlobalsEditorInterface::~ShaderGlobalsEditorInterface() */

void __thiscall
ShaderGlobalsEditorInterface::~ShaderGlobalsEditorInterface(ShaderGlobalsEditorInterface *this)

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
/* CallableCustomMethodPointer<ShaderGlobalsEditorInterface, void, StringName const&, Variant
   const&, Variant const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditorInterface,void,StringName_const&,Variant_const&,Variant_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderGlobalsEditorInterface,void,StringName_const&,Variant_const&,Variant_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ShaderGlobalsEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderGlobalsEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ShaderGlobalsEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ShaderGlobalsEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ShaderGlobalsEditor,void> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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


