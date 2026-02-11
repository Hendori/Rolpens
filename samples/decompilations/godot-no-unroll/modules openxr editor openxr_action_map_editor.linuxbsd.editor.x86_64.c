
/* OpenXRActionMapEditor::_on_tabs_tab_changed(int) */

void OpenXRActionMapEditor::_on_tabs_tab_changed(int param_1)

{
  return;
}



/* OpenXRActionMapEditor::_set_focus_on_action_set(OpenXRActionSetEditor*) */

void OpenXRActionMapEditor::_set_focus_on_action_set(OpenXRActionSetEditor *param_1)

{
  ScrollContainer::ensure_control_visible(*(Control **)(param_1 + 0xa68));
  OpenXRActionSetEditor::set_focus_on_entry();
  return;
}



/* OpenXRActionMapEditor::_notification(int) [clone .part.0] */

void OpenXRActionMapEditor::_notification(int param_1)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  StringName *pSVar5;
  int iVar6;
  undefined4 in_register_0000003c;
  StringName *pSVar7;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  pSVar7 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (iVar6 = 0; iVar3 = Node::get_child_count(SUB81(*(undefined8 *)(pSVar7 + 0xa60),0)),
      iVar6 < iVar3; iVar6 = iVar6 + 1) {
    lVar4 = Node::get_child((int)*(undefined8 *)(pSVar7 + 0xa60),SUB41(iVar6,0));
    if ((lVar4 != 0) &&
       (pSVar5 = (StringName *)__dynamic_cast(lVar4,&Object::typeinfo,&Control::typeinfo,0),
       pSVar5 != (StringName *)0x0)) {
      if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
         iVar3 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
      Control::get_theme_stylebox((StringName *)&local_48,pSVar7);
      Control::add_theme_style_override(pSVar5,(Ref *)(SceneStringNames::singleton + 600));
      if (((local_48 != (Object *)0x0) &&
          (cVar2 = RefCounted::unreference(), pOVar1 = local_48, cVar2 != '\0')) &&
         (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OpenXRActionMapEditor::_on_action_removed(Ref<OpenXRAction>) */

void OpenXRActionMapEditor::_on_action_removed
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  Object **ppOVar6;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ppOVar6 = &local_48;
  for (iVar5 = 0; iVar3 = TabContainer::get_tab_count(), iVar5 < iVar3; iVar5 = iVar5 + 1) {
    lVar4 = TabContainer::get_tab_control((int)*(undefined8 *)(param_1 + 0xa60));
    if ((lVar4 != 0) &&
       (lVar4 = __dynamic_cast(lVar4,&Object::typeinfo,&OpenXRInteractionProfileEditorBase::typeinfo
                               ,0,param_5,param_6,ppOVar6), lVar4 != 0)) {
      local_48 = (Object *)0x0;
      if (((Object *)*param_2 != (Object *)0x0) &&
         (local_48 = (Object *)*param_2, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
        local_48 = (Object *)0x0;
      }
      OpenXRInteractionProfileEditorBase::remove_all_for_action(lVar4);
      if (((local_48 != (Object *)0x0) &&
          (cVar2 = RefCounted::unreference(), pOVar1 = local_48, cVar2 != '\0')) &&
         (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))();
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OpenXRActionMapEditor::_add_action_set_editor(Ref<OpenXRActionSet>) */

Object * __thiscall
OpenXRActionMapEditor::_add_action_set_editor(OpenXRActionMapEditor *this,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  CallableCustom *pCVar6;
  long in_FS_OFFSET;
  Object *local_60;
  Object *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    _err_print_error("_add_action_set_editor","modules/openxr/editor/openxr_action_map_editor.cpp",
                     0x4d,"Condition \"p_action_set.is_null()\" is true. Returning: nullptr",0,0);
    pOVar5 = (Object *)0x0;
  }
  else {
    pOVar5 = (Object *)operator_new(0xa80,"");
    local_58[0] = (Object *)0x0;
    if (((Object *)*param_2 != (Object *)0x0) &&
       (local_58[0] = (Object *)*param_2, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      local_58[0] = (Object *)0x0;
    }
    local_60 = (Object *)0x0;
    if ((*(Object **)(this + 0xa20) != (Object *)0x0) &&
       (local_60 = *(Object **)(this + 0xa20), cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      local_60 = (Object *)0x0;
    }
    OpenXRActionSetEditor::OpenXRActionSetEditor
              ((OpenXRActionSetEditor *)pOVar5,(StringName *)&local_60,(Callable *)local_58);
    postinitialize_handler(pOVar5);
    if (((local_60 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar3 = local_60, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_60), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    if (((local_58[0] != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar3 = local_58[0], cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_58[0]), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    pcVar1 = *(code **)(*(long *)pOVar5 + 0x108);
    pCVar6 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar6);
    *(undefined **)(pCVar6 + 0x20) = &_LC10;
    *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar6 = &PTR_hash_001145e0;
    *(undefined8 *)(pCVar6 + 0x40) = 0;
    uVar2 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar6 + 0x10) = 0;
    *(undefined8 *)(pCVar6 + 0x30) = uVar2;
    *(code **)(pCVar6 + 0x38) = _on_remove_action_set;
    *(OpenXRActionMapEditor **)(pCVar6 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
    *(char **)(pCVar6 + 0x20) = "OpenXRActionMapEditor::_on_remove_action_set";
    Callable::Callable((Callable *)local_58,pCVar6);
    StringName::StringName((StringName *)&local_60,"remove",false);
    (*pcVar1)(pOVar5,(StringName *)&local_60,(Callable *)local_58,0);
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    pcVar1 = *(code **)(*(long *)pOVar5 + 0x108);
    pCVar6 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar6);
    *(undefined **)(pCVar6 + 0x20) = &_LC10;
    *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar6 = &PTR_hash_00114670;
    *(undefined8 *)(pCVar6 + 0x40) = 0;
    uVar2 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar6 + 0x10) = 0;
    *(undefined8 *)(pCVar6 + 0x30) = uVar2;
    *(code **)(pCVar6 + 0x38) = _on_action_removed;
    *(OpenXRActionMapEditor **)(pCVar6 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
    *(char **)(pCVar6 + 0x20) = "OpenXRActionMapEditor::_on_action_removed";
    Callable::Callable((Callable *)local_58,pCVar6);
    StringName::StringName((StringName *)&local_60,"action_removed",false);
    (*pcVar1)(pOVar5,(StringName *)&local_60,(Callable *)local_58,0);
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_58);
    Node::add_child(*(undefined8 *)(this + 0xa70),pOVar5,0,0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pOVar5;
}



/* OpenXRActionMapEditor::_create_action_sets() */

void __thiscall OpenXRActionMapEditor::_create_action_sets(OpenXRActionMapEditor *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Object *pOVar4;
  int iVar5;
  long in_FS_OFFSET;
  Array local_50 [8];
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) != 0) {
    iVar5 = 0;
    OpenXRActionMap::get_action_sets();
    while( true ) {
      iVar2 = Array::size();
      if (iVar2 <= iVar5) break;
      Array::operator[]((int)local_50);
      lVar3 = Variant::get_validated_object();
      if (lVar3 == 0) {
LAB_00100708:
        local_48 = (Object *)0x0;
        _add_action_set_editor(this,&local_48);
      }
      else {
        pOVar4 = (Object *)__dynamic_cast(lVar3,&Object::typeinfo,&OpenXRActionSet::typeinfo,0);
        if (pOVar4 == (Object *)0x0) goto LAB_00100708;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') goto LAB_00100708;
        local_48 = pOVar4;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          local_48 = (Object *)0x0;
          _add_action_set_editor(this);
        }
        else {
          _add_action_set_editor(this);
          cVar1 = RefCounted::unreference();
          if (cVar1 != '\0') {
            cVar1 = predelete_handler(pOVar4);
            if (cVar1 != '\0') {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
        }
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar4);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      iVar5 = iVar5 + 1;
    }
    Array::~Array(local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::_clear_action_map() */

void __thiscall OpenXRActionMapEditor::_clear_action_map(OpenXRActionMapEditor *this)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  while (iVar1 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xa70),0)), 0 < iVar1) {
    Node::get_child((int)*(undefined8 *)(this + 0xa70),false);
    Node::remove_child(*(Node **)(this + 0xa70));
    Node::queue_free();
  }
  iVar1 = TabContainer::get_tab_count();
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      lVar2 = TabContainer::get_tab_control((int)*(undefined8 *)(this + 0xa60));
      if ((lVar2 != 0) &&
         (lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,
                                 &OpenXRInteractionProfileEditorBase::typeinfo,0), lVar2 != 0)) {
        Node::remove_child(*(Node **)(this + 0xa60));
        Node::queue_free();
      }
      bVar3 = iVar1 != 0;
      iVar1 = iVar1 + -1;
    } while (bVar3);
  }
  return;
}



/* OpenXRActionMapEditor::_on_tab_button_pressed(int) */

void OpenXRActionMapEditor::_on_tab_button_pressed(int param_1)

{
  undefined8 uVar1;
  Object *pOVar2;
  long lVar3;
  Object *pOVar4;
  undefined4 in_register_0000003c;
  StringName *pSVar5;
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
  
  pSVar5 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = TabContainer::get_tab_control((int)*(undefined8 *)(pSVar5 + 0xa60));
  if (lVar3 != 0) {
    pOVar4 = (Object *)
             __dynamic_cast(lVar3,&Object::typeinfo,&OpenXRInteractionProfileEditorBase::typeinfo,0)
    ;
    if (pOVar4 != (Object *)0x0) {
      uVar1 = *(undefined8 *)(pSVar5 + 0xa10);
      local_a0 = 0;
      local_98 = "";
      local_90 = 0;
      String::parse_latin1((StrRange *)&local_a0);
      local_98 = "Remove interaction profile";
      local_a8 = 0;
      local_90 = 0x1a;
      String::parse_latin1((StrRange *)&local_a8);
      TTR((CowData<char32_t> *)&local_98,(StrRange *)&local_a8);
      EditorUndoRedoManager::create_action(uVar1,(CowData<char32_t> *)&local_98,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      pOVar2 = *(Object **)(pSVar5 + 0xa10);
      StringName::StringName((StringName *)&local_98,"_do_remove_interaction_profile_editor",false);
      Variant::Variant((Variant *)local_78,pOVar4);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_do_methodp(pOVar2,pSVar5,(Variant **)&local_98,(int)local_88);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      pOVar2 = *(Object **)(pSVar5 + 0xa10);
      StringName::StringName((StringName *)&local_98,"_do_add_interaction_profile_editor",false);
      Variant::Variant((Variant *)local_78,pOVar4);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_undo_methodp(pOVar2,pSVar5,(Variant **)&local_98,(int)local_88);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(*(undefined8 *)(pSVar5 + 0xa10),0));
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Object::set_edited(SUB81(*(undefined8 *)(pSVar5 + 0xa20),0));
        return;
      }
      goto LAB_00100c0d;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("_on_tab_button_pressed","modules/openxr/editor/openxr_action_map_editor.cpp",
                     0x155,"Parameter \"interaction_profile_editor\" is null.",0,0);
    return;
  }
LAB_00100c0d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::~OpenXRActionMapEditor() */

void __thiscall OpenXRActionMapEditor::~OpenXRActionMapEditor(OpenXRActionMapEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00114268;
  if (*(long *)(this + 0xa20) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa20);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa18));
  bVar3 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100ca0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00100ca0:
  Control::~Control((Control *)this);
  return;
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



/* OpenXRActionMapEditor::_load_action_map(String, bool) */

void __thiscall
OpenXRActionMapEditor::_load_action_map(OpenXRActionMapEditor *this,CowData *param_2,char param_3)

{
  code *pcVar1;
  String *pSVar2;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  CowData<char32_t> *local_d8;
  String *local_d0;
  String *local_c8;
  int local_8c;
  Object *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  String local_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  DirAccess::create(&local_88,0);
  pOVar5 = local_88;
  pcVar1 = *(code **)(*(long *)local_88 + 0x1d0);
  local_48 = (Object *)0x0;
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,param_2);
  }
  cVar4 = (*pcVar1)(pOVar5,(CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (cVar4 == '\0') {
    if (param_3 != '\0') {
      Ref<OpenXRActionMap>::instantiate<>((Ref<OpenXRActionMap> *)(this + 0xa20));
      OpenXRActionMap::create_default_action_sets();
      (**(code **)(**(long **)(this + 0xa20) + 0x188))(*(long **)(this + 0xa20),param_2,0);
      local_48 = (Object *)0x0;
      if (((*(long *)(this + 0xa20) != 0) &&
          (pOVar5 = (Object *)
                    __dynamic_cast(*(long *)(this + 0xa20),&Object::typeinfo,&Resource::typeinfo,0),
          pOVar5 != (Object *)0x0)) &&
         (local_48 = pOVar5, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        local_48 = (Object *)0x0;
      }
      local_8c = ResourceSaver::save((CowData<char32_t> *)&local_48,(String *)param_2,0);
      if (((local_48 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar5 = local_48, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
      pSVar2 = EditorNode::singleton;
      if (local_8c != 0) {
        local_48 = (Object *)0x0;
        String::parse_latin1((String *)&local_48,"");
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Warning!");
        TTR((CowData<char32_t> *)local_58,(String *)&local_50);
        uVar3 = *(undefined8 *)(&error_names + (long)local_8c * 8);
        local_68 = 0;
        if (*(long *)(this + 0xa18) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(this + 0xa18));
        }
        local_d8 = (CowData<char32_t> *)&local_68;
        local_78 = 0;
        String::parse_latin1((String *)&local_78,"");
        local_80 = 0;
        String::parse_latin1((String *)&local_80,"Error saving file %s: %s");
        TTR((CowData<char32_t> *)&local_70,(String *)&local_80);
        vformat<String,char_const*>
                  ((CowData<char32_t> *)&local_60,(CowData<char32_t> *)&local_70,local_d8,uVar3);
        EditorNode::show_warning(pSVar2,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref(local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
    }
  }
  else {
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    ResourceLoader::load((CowData<char32_t> *)&local_48,param_2,(String *)&local_50,1,&local_8c);
    if (local_48 == (Object *)0x0) {
      pOVar5 = *(Object **)(this + 0xa20);
      if (pOVar5 != (Object *)0x0) {
        *(undefined8 *)(this + 0xa20) = 0;
        goto LAB_001015eb;
      }
    }
    else {
      pOVar6 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&OpenXRActionMap::typeinfo,0);
      pOVar5 = *(Object **)(this + 0xa20);
      if (pOVar5 != pOVar6) {
        *(Object **)(this + 0xa20) = pOVar6;
        if (pOVar6 == (Object *)0x0) {
          if (pOVar5 != (Object *)0x0) goto LAB_001015eb;
        }
        else {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *(undefined8 *)(this + 0xa20) = 0;
          }
          if (pOVar5 != (Object *)0x0) {
LAB_001015eb:
            cVar4 = RefCounted::unreference();
            if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
          if (local_48 == (Object *)0x0) goto LAB_0010137d;
        }
      }
      cVar4 = RefCounted::unreference();
      pOVar5 = local_48;
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
LAB_0010137d:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    pSVar2 = EditorNode::singleton;
    if (local_8c != 0) {
      local_48 = (Object *)0x0;
      String::parse_latin1((String *)&local_48,"");
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Warning!");
      TTR((CowData<char32_t> *)local_58,(String *)&local_50);
      uVar3 = *(undefined8 *)(&error_names + (long)local_8c * 8);
      local_68 = 0;
      if (*(long *)(this + 0xa18) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(this + 0xa18));
      }
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"");
      local_80 = 0;
      String::parse_latin1((String *)&local_80,"Error loading %s: %s.");
      TTR((CowData<char32_t> *)&local_70,(String *)&local_80);
      vformat<String,char_const*>
                ((CowData<char32_t> *)&local_60,(CowData<char32_t> *)&local_70,
                 (CowData<char32_t> *)&local_68,uVar3);
      EditorNode::show_warning(pSVar2,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      String::parse_latin1((String *)(this + 0xa18),"");
      pSVar2 = *(String **)(this + 0xa30);
      local_48 = (Object *)0x0;
      String::parse_latin1((String *)&local_48,"");
      Label::set_text(pSVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      goto joined_r0x0010153f;
    }
  }
  local_c8 = local_58;
  local_d0 = (String *)&local_70;
  local_d8 = (CowData<char32_t> *)&local_68;
  if (*(long *)(this + 0xa18) != *(long *)param_2) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa18),param_2);
  }
  pSVar2 = *(String **)(this + 0xa30);
  String::get_file();
  local_60 = 0;
  String::parse_latin1((String *)&local_60," ");
  local_70 = 0;
  String::parse_latin1(local_d0,"");
  local_78 = 0;
  String::parse_latin1((String *)&local_78,"OpenXR Action map:");
  TTR(local_d8,(String *)&local_78);
  String::operator+(local_c8,local_d8);
  String::operator+((String *)&local_48,local_c8);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
joined_r0x0010153f:
  if (((local_88 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_88), cVar4 != '\0')) {
    (**(code **)(*(long *)local_88 + 0x140))(local_88);
    Memory::free_static(local_88,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::OpenXRActionMapEditor() */

void __thiscall OpenXRActionMapEditor::OpenXRActionMapEditor(OpenXRActionMapEditor *this)

{
  String *pSVar1;
  long *plVar2;
  code *pcVar3;
  StringName *pSVar4;
  long lVar5;
  undefined8 uVar6;
  BoxContainer *pBVar7;
  Label *this_00;
  Button *pBVar8;
  VSeparator *this_01;
  TabContainer *this_02;
  ScrollContainer *this_03;
  OpenXRSelectInteractionProfileDialog *this_04;
  CallableCustom *this_05;
  long in_FS_OFFSET;
  CowData<char32_t> local_78 [8];
  long local_70;
  long local_68 [2];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (OpenXRActionMapEditor)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00114268;
  *(undefined8 *)(this + 0xa78) = 0;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  uVar6 = EditorUndoRedoManager::get_singleton();
  *(undefined8 *)(this + 0xa10) = uVar6;
  local_58[0] = _LC32;
  Control::set_custom_minimum_size((Vector2 *)this);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00113b78;
  postinitialize_handler((Object *)pBVar7);
  *(BoxContainer **)(this + 0xa28) = pBVar7;
  Node::add_child(this,pBVar7,0,0);
  this_00 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(this_00,(String *)local_68);
  postinitialize_handler((Object *)this_00);
  *(Label **)(this + 0xa30) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xa30);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Action Map");
  TTR(local_78,(String *)&local_70);
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Label::set_clip_text(SUB81(*(undefined8 *)(this + 0xa30),0));
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa30),3);
  Node::add_child(*(undefined8 *)(this + 0xa28),*(undefined8 *)(this + 0xa30),0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar8,(String *)local_68);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa38) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xa38);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Add Action Set");
  TTR(local_78,(String *)&local_70);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xa38);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Add an action set.");
  TTR(local_78,(String *)&local_70);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xa38);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<OpenXRActionMapEditor>
            ((OpenXRActionMapEditor *)local_68,(char *)this,
             (_func_void *)"&OpenXRActionMapEditor::_on_add_action_set");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(*(undefined8 *)(this + 0xa28),*(undefined8 *)(this + 0xa38),0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar8,(String *)local_68);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa40) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xa40);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Add profile");
  TTR(local_78,(String *)&local_70);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xa40);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Add an interaction profile.");
  TTR(local_78,(String *)&local_70);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xa40);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<OpenXRActionMapEditor>
            ((OpenXRActionMapEditor *)local_68,(char *)this,
             (_func_void *)"&OpenXRActionMapEditor::_on_add_interaction_profile");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_68);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(*(undefined8 *)(this + 0xa28),*(undefined8 *)(this + 0xa40),0,0);
  this_01 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(this_01);
  postinitialize_handler((Object *)this_01);
  Node::add_child(*(undefined8 *)(this + 0xa28),this_01,0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar8,(String *)local_68);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa50) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xa50);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Save");
  TTR(local_78,(String *)&local_70);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xa50);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Save this OpenXR action map.");
  TTR(local_78,(String *)&local_70);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xa50);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<OpenXRActionMapEditor>
            ((OpenXRActionMapEditor *)local_68,(char *)this,
             (_func_void *)"&OpenXRActionMapEditor::_on_save_action_map");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_68);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(*(undefined8 *)(this + 0xa28),*(undefined8 *)(this + 0xa50),0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar8,(String *)local_68);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xa58) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xa58);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Reset to Default");
  TTR(local_78,(String *)&local_70);
  Button::set_text(pSVar1);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pSVar1 = *(String **)(this + 0xa58);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Reset to default OpenXR action map.");
  TTR(local_78,(String *)&local_70);
  Control::set_tooltip_text(pSVar1);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xa58);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<OpenXRActionMapEditor>
            ((OpenXRActionMapEditor *)local_68,(char *)this,
             (_func_void *)"&OpenXRActionMapEditor::_on_reset_to_default_layout");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_68);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(*(undefined8 *)(this + 0xa28),*(undefined8 *)(this + 0xa58),0,0);
  this_02 = (TabContainer *)operator_new(0xb40,"");
  TabContainer::TabContainer(this_02);
  postinitialize_handler((Object *)this_02);
  *(TabContainer **)(this + 0xa60) = this_02;
  Control::set_h_size_flags(this_02,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa60),3);
  pSVar4 = *(StringName **)(this + 0xa60);
  StringName::StringName((StringName *)local_68,"TabContainerOdd",false);
  Control::set_theme_type_variation(pSVar4);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  plVar2 = *(long **)(this + 0xa60);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<OpenXRActionMapEditor,int>
            ((OpenXRActionMapEditor *)local_68,(char *)this,
             (_func_void_int *)"&OpenXRActionMapEditor::_on_tabs_tab_changed");
  StringName::StringName((StringName *)&local_70,"tab_changed",false);
  (*pcVar3)(plVar2,(String *)&local_70,(CowData<char32_t> *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  plVar2 = *(long **)(this + 0xa60);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<OpenXRActionMapEditor,int>
            ((OpenXRActionMapEditor *)local_68,(char *)this,
             (_func_void_int *)"&OpenXRActionMapEditor::_on_tab_button_pressed");
  StringName::StringName((StringName *)&local_70,"tab_button_pressed",false);
  (*pcVar3)(plVar2,(String *)&local_70,(CowData<char32_t> *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Node::add_child(this,*(undefined8 *)(this + 0xa60),0,0);
  this_03 = (ScrollContainer *)operator_new(0xa68,"");
  ScrollContainer::ScrollContainer(this_03);
  postinitialize_handler((Object *)this_03);
  *(ScrollContainer **)(this + 0xa68) = this_03;
  Control::set_h_size_flags(this_03,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa68),3);
  ScrollContainer::set_horizontal_scroll_mode(*(undefined8 *)(this + 0xa68),0);
  Node::add_child(*(undefined8 *)(this + 0xa60),*(undefined8 *)(this + 0xa68),0,0);
  pSVar1 = *(String **)(this + 0xa68);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Action Sets");
  TTR(local_78,(String *)&local_70);
  Node::set_name(pSVar1);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00113ef0;
  postinitialize_handler((Object *)pBVar7);
  *(BoxContainer **)(this + 0xa70) = pBVar7;
  Control::set_h_size_flags(pBVar7,3);
  Node::add_child(*(undefined8 *)(this + 0xa68),*(undefined8 *)(this + 0xa70),0,0);
  this_04 = (OpenXRSelectInteractionProfileDialog *)operator_new(0xde0,"");
  OpenXRSelectInteractionProfileDialog::OpenXRSelectInteractionProfileDialog(this_04);
  postinitialize_handler((Object *)this_04);
  lVar5 = *(long *)this_04;
  *(OpenXRSelectInteractionProfileDialog **)(this + 0xa78) = this_04;
  pcVar3 = *(code **)(lVar5 + 0x108);
  this_05 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_05);
  *(undefined **)(this_05 + 0x20) = &_LC10;
  *(OpenXRActionMapEditor **)(this_05 + 0x28) = this;
  *(undefined1 (*) [16])(this_05 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_05 = &PTR_hash_001148b0;
  *(undefined8 *)(this_05 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_05 + 0x10) = 0;
  *(undefined8 *)(this_05 + 0x30) = uVar6;
  *(code **)(this_05 + 0x38) = _on_interaction_profile_selected;
  CallableCustomMethodPointerBase::_setup((uint *)this_05,(int)this_05 + 0x28);
  *(char **)(this_05 + 0x20) = "OpenXRActionMapEditor::_on_interaction_profile_selected";
  Callable::Callable((Callable *)local_68,this_05);
  StringName::StringName((StringName *)&local_70,"interaction_profile_selected",false);
  (*pcVar3)(this_04,(String *)&local_70,(CowData<char32_t> *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Node::add_child(this,*(undefined8 *)(this + 0xa78),0,0);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)local_68,"xr/openxr/default_action_map",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_70);
  _load_action_map(this,(String *)&local_70,1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::~OpenXRActionMapEditor() */

void __thiscall OpenXRActionMapEditor::~OpenXRActionMapEditor(OpenXRActionMapEditor *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00114268;
  if (*(long *)(this + 0xa20) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa20);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa18));
  bVar3 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102340;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00102340:
  Control::~Control((Control *)this);
  operator_delete(this,0xa80);
  return;
}



/* OpenXRActionMapEditor::_on_remove_action_set(Object*) */

void __thiscall
OpenXRActionMapEditor::_on_remove_action_set(OpenXRActionMapEditor *this,Object *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  int iVar9;
  long in_FS_OFFSET;
  Object *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  Object *local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0xcd;
      pcVar7 = "Condition \"action_map.is_null()\" is true.";
LAB_00102786:
      _err_print_error("_on_remove_action_set","modules/openxr/editor/openxr_action_map_editor.cpp",
                       uVar8,pcVar7,0,0);
      return;
    }
  }
  else if ((param_1 == (Object *)0x0) ||
          (pOVar5 = (Object *)
                    __dynamic_cast(param_1,&Object::typeinfo,&OpenXRActionSetEditor::typeinfo,0),
          pOVar5 == (Object *)0x0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0xd0;
      pcVar7 = "Parameter \"action_set_editor\" is null.";
      goto LAB_00102786;
    }
  }
  else {
    lVar6 = Node::get_parent();
    if (*(long *)(this + 0xa70) == lVar6) {
      pOVar1 = *(Object **)(pOVar5 + 0xa20);
      if ((pOVar1 == (Object *)0x0) ||
         (local_a8 = pOVar1, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_a8 = (Object *)0x0;
        _err_print_error("_on_remove_action_set",
                         "modules/openxr/editor/openxr_action_map_editor.cpp",0xd3,
                         "Condition \"action_set.is_null()\" is true.",0,0);
        Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_a8);
      }
      else {
        OpenXRActionSetEditor::remove_all_actions();
        for (iVar9 = 0; iVar4 = TabContainer::get_tab_count(), iVar9 < iVar4; iVar9 = iVar9 + 1) {
          lVar6 = TabContainer::get_tab_control((int)*(undefined8 *)(this + 0xa60));
          if ((lVar6 != 0) &&
             (lVar6 = __dynamic_cast(lVar6,&Object::typeinfo,
                                     &OpenXRInteractionProfileEditorBase::typeinfo,0), lVar6 != 0))
          {
            local_90 = pOVar1;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
              local_90 = (Object *)0x0;
            }
            OpenXRInteractionProfileEditorBase::remove_all_for_action_set(lVar6);
            if (((local_90 != (Object *)0x0) &&
                (cVar3 = RefCounted::unreference(), pOVar2 = local_90, cVar3 != '\0')) &&
               (cVar3 = predelete_handler(local_90), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar2 + 0x140))();
              Memory::free_static(pOVar2,false);
            }
          }
        }
        uVar8 = *(undefined8 *)(this + 0xa10);
        local_98 = 0;
        String::parse_latin1((String *)&local_98,"");
        local_a0 = 0;
        String::parse_latin1((String *)&local_a0,"Remove action set");
        TTR((CowData<char32_t> *)&local_90,(String *)&local_a0);
        EditorUndoRedoManager::create_action(uVar8,(CowData<char32_t> *)&local_90,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        pOVar1 = *(Object **)(this + 0xa10);
        StringName::StringName((StringName *)&local_90,"_do_remove_action_set_editor",false);
        Variant::Variant((Variant *)local_78,pOVar5);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar1,(StringName *)this,(Variant **)&local_90,(int)local_88);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
          StringName::unref();
        }
        pOVar1 = *(Object **)(this + 0xa10);
        StringName::StringName((StringName *)&local_90,"_do_add_action_set_editor",false);
        Variant::Variant((Variant *)local_78,pOVar5);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar1,(StringName *)this,(Variant **)&local_90,(int)local_88);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
          StringName::unref();
        }
        EditorUndoRedoManager::commit_action(SUB81(*(undefined8 *)(this + 0xa10),0));
        Object::set_edited(SUB81(*(undefined8 *)(this + 0xa20),0));
        Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_a8);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = 0xd1;
      pcVar7 = "Condition \"action_set_editor->get_parent() != actionsets_vb\" is true.";
      goto LAB_00102786;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::_remove_action_set(String) */

void __thiscall
OpenXRActionMapEditor::_remove_action_set(OpenXRActionMapEditor *this,CowData *param_2)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Object *pOVar5;
  int iVar6;
  long in_FS_OFFSET;
  Object *local_50;
  undefined8 local_48;
  long local_40;
  
  lVar4 = *(long *)(this + 0xa20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_remove_action_set","modules/openxr/editor/openxr_action_map_editor.cpp",
                       0xa7,"Condition \"action_map.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    local_48 = 0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,param_2);
    }
    OpenXRActionMap::find_action_set
              ((Ref<OpenXRActionSet> *)&local_50,lVar4,(CowData<char32_t> *)&local_48);
    iVar6 = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (local_50 == (Object *)0x0) {
      _err_print_error("_remove_action_set","modules/openxr/editor/openxr_action_map_editor.cpp",
                       0xa9,"Condition \"action_set.is_null()\" is true.",0,0);
      Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_50);
    }
    else {
      for (; iVar3 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xa70),0)), iVar6 < iVar3;
          iVar6 = iVar6 + 1) {
        lVar4 = Node::get_child((int)*(undefined8 *)(this + 0xa70),SUB41(iVar6,0));
        if ((lVar4 != 0) &&
           (pOVar5 = (Object *)
                     __dynamic_cast(lVar4,&Object::typeinfo,&OpenXRActionSetEditor::typeinfo,0),
           pOVar5 != (Object *)0x0)) {
          pOVar1 = *(Object **)(pOVar5 + 0xa20);
          if ((pOVar1 == (Object *)0x0) || (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
            if (local_50 == (Object *)0x0) goto LAB_00102968;
          }
          else if (local_50 == pOVar1) {
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
LAB_00102968:
            _on_remove_action_set(this,pOVar5);
          }
          else {
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
        }
      }
      if (((local_50 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(local_50), cVar2 != '\0')) {
        (**(code **)(*(long *)local_50 + 0x140))(local_50);
        Memory::free_static(local_50,false);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::_do_add_action_set_editor(OpenXRActionSetEditor*) */

void __thiscall
OpenXRActionMapEditor::_do_add_action_set_editor
          (OpenXRActionMapEditor *this,OpenXRActionSetEditor *param_1)

{
  Object *pOVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  pOVar1 = *(Object **)(param_1 + 0xa20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 == (Object *)0x0) ||
     (local_40 = pOVar1, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    local_40 = (Object *)0x0;
    _err_print_error("_do_add_action_set_editor",
                     "modules/openxr/editor/openxr_action_map_editor.cpp",0x161,
                     "Condition \"action_set.is_null()\" is true.",0,0);
    Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_40);
  }
  else {
    uVar2 = *(undefined8 *)(this + 0xa20);
    local_38 = pOVar1;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      local_38 = (Object *)0x0;
    }
    OpenXRActionMap::add_action_set(uVar2);
    if (((local_38 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar3 = local_38, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_38), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    Node::add_child(*(undefined8 *)(this + 0xa70),param_1,0,0);
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar1), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_00102c44;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102c44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::_do_remove_action_set_editor(OpenXRActionSetEditor*) */

void __thiscall
OpenXRActionMapEditor::_do_remove_action_set_editor
          (OpenXRActionMapEditor *this,OpenXRActionSetEditor *param_1)

{
  Object *pOVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long in_FS_OFFSET;
  Object *local_30;
  Object *local_28;
  long local_20;
  
  pOVar1 = *(Object **)(param_1 + 0xa20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 == (Object *)0x0) ||
     (local_30 = pOVar1, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    local_30 = (Object *)0x0;
    _err_print_error("_do_remove_action_set_editor",
                     "modules/openxr/editor/openxr_action_map_editor.cpp",0x169,
                     "Condition \"action_set.is_null()\" is true.",0,0);
    Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_30);
  }
  else {
    Node::remove_child(*(Node **)(this + 0xa70));
    uVar2 = *(undefined8 *)(this + 0xa20);
    local_28 = pOVar1;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      local_28 = (Object *)0x0;
    }
    OpenXRActionMap::remove_action_set(uVar2);
    if (((local_28 == (Object *)0x0) ||
        (cVar4 = RefCounted::unreference(), pOVar3 = local_28, cVar4 == '\0')) ||
       (cVar4 = predelete_handler(local_28), cVar4 == '\0')) {
      cVar4 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      cVar4 = RefCounted::unreference();
    }
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar1), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_00102dc2;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102dc2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::_add_action_set(String) */

Object * __thiscall
OpenXRActionMapEditor::_add_action_set(OpenXRActionMapEditor *this,CowData *param_2)

{
  undefined8 uVar1;
  Object *pOVar2;
  char cVar3;
  Resource *this_00;
  Object *pOVar4;
  long lVar5;
  Resource *pRVar6;
  long in_FS_OFFSET;
  byte bVar7;
  Resource *local_b0;
  undefined8 local_a8;
  Resource *local_a0;
  String *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  bVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) == 0) {
    _err_print_error("_add_action_set","modules/openxr/editor/openxr_action_map_editor.cpp",0x91,
                     "Condition \"action_map.is_null()\" is true. Returning: nullptr",0,0);
    pOVar4 = (Object *)0x0;
  }
  else {
    local_b0 = (Resource *)0x0;
    this_00 = (Resource *)operator_new(600,"");
    pRVar6 = this_00;
    for (lVar5 = 0x4b; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined8 *)pRVar6 = 0;
      pRVar6 = pRVar6 + (ulong)bVar7 * -0x10 + 8;
    }
    Resource::Resource(this_00);
    *(undefined8 *)(this_00 + 0x240) = 0;
    *(code **)this_00 = OpenXRActionSet::set_localized_name;
    *(undefined4 *)(this_00 + 0x248) = 0;
    Array::Array((Array *)(this_00 + 0x250));
    postinitialize_handler((Object *)this_00);
    local_98 = (String *)0x0;
    local_a0 = this_00;
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') {
      local_a0 = (Resource *)0x0;
      this_00 = (Resource *)0x0;
      Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_98);
    }
    else {
      Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_98);
      local_98 = (String *)0x0;
      local_b0 = this_00;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_b0 = (Resource *)0x0;
        this_00 = (Resource *)0x0;
      }
      Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_98);
    }
    Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_a0);
    Resource::set_name((String *)this_00);
    local_98 = (String *)0x0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,param_2);
    }
    OpenXRActionSet::set_localized_name(this_00,(CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    uVar1 = *(undefined8 *)(this + 0xa20);
    local_98 = (String *)this_00;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      local_98 = (String *)0x0;
    }
    OpenXRActionMap::add_action_set(uVar1,(CowData<char32_t> *)&local_98);
    Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_98);
    Object::set_edited(SUB81(*(undefined8 *)(this + 0xa20),0));
    local_98 = (String *)this_00;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      local_98 = (String *)0x0;
    }
    pOVar4 = (Object *)_add_action_set_editor(this,(CowData<char32_t> *)&local_98);
    Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_98);
    local_98 = (String *)&_LC10;
    uVar1 = *(undefined8 *)(this + 0xa10);
    local_a0 = (Resource *)0x0;
    local_90 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = (String *)0x106e4c;
    local_a8 = 0;
    local_90 = 0xe;
    String::parse_latin1((StrRange *)&local_a8);
    TTR((CowData<char32_t> *)&local_98,(StrRange *)&local_a8);
    EditorUndoRedoManager::create_action(uVar1,(CowData<char32_t> *)&local_98,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    pOVar2 = *(Object **)(this + 0xa10);
    StringName::StringName((StringName *)&local_98,"_do_add_action_set_editor",false);
    Variant::Variant((Variant *)local_78,pOVar4);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp
              (pOVar2,(StringName *)this,(Variant **)&local_98,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (String *)0x0)) {
      StringName::unref();
    }
    pOVar2 = *(Object **)(this + 0xa10);
    StringName::StringName((StringName *)&local_98,"_do_remove_action_set_editor",false);
    Variant::Variant((Variant *)local_78,pOVar4);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar2,(StringName *)this,(Variant **)&local_98,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (String *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(*(undefined8 *)(this + 0xa10),0));
    Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_b0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pOVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::_on_add_action_set() */

void __thiscall OpenXRActionMapEditor::_on_add_action_set(OpenXRActionMapEditor *this)

{
  undefined8 uVar1;
  char cVar2;
  Object *pOVar3;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  Object *local_a8;
  undefined8 local_a0;
  Object *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_on_add_action_set","modules/openxr/editor/openxr_action_map_editor.cpp",
                       0xb4,"Condition \"action_map.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    local_a8 = (Object *)0x0;
    local_98 = (Object *)&_LC93;
    local_90 = 3;
    String::parse_latin1((StrRange *)&local_a8);
    while( true ) {
      uVar1 = *(undefined8 *)(this + 0xa20);
      local_a0 = 0;
      if (local_a8 != (Object *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_a8);
      }
      OpenXRActionMap::find_action_set
                ((CowData<char32_t> *)&local_98,uVar1,(CowData<char32_t> *)&local_a0);
      if (local_98 == (Object *)0x0) break;
      cVar2 = RefCounted::unreference();
      pOVar3 = local_98;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_98);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))();
          Memory::free_static(pOVar3,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      itos((long)&local_a0);
      operator+((char *)&local_98,(String *)((long)&_LC93 + 4));
      if (local_a8 != local_98) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        local_a8 = local_98;
        local_98 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    local_98 = (Object *)0x0;
    if (local_a8 != (Object *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_a8);
    }
    pOVar3 = (Object *)_add_action_set(this,(CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    TabContainer::set_current_tab((int)*(undefined8 *)(this + 0xa60));
    this_00 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_00);
    *(OpenXRActionMapEditor **)(this_00 + 0x28) = this;
    *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_00 = &PTR_hash_00114700;
    *(undefined8 *)(this_00 + 0x40) = 0;
    uVar1 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x30) = uVar1;
    *(code **)(this_00 + 0x38) = _set_focus_on_action_set;
    *(undefined **)(this_00 + 0x20) = &_LC10;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "OpenXRActionMapEditor::_set_focus_on_action_set";
    Callable::Callable((Callable *)&local_98,this_00);
    Variant::Variant((Variant *)local_78,pOVar3);
    Variant::Variant((Variant *)local_60,0);
    local_88[0] = (Variant *)local_78;
    Callable::call_deferredp((Variant **)&local_98,(int)local_88);
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::_do_add_interaction_profile_editor(OpenXRInteractionProfileEditorBase*) */

void __thiscall
OpenXRActionMapEditor::_do_add_interaction_profile_editor
          (OpenXRActionMapEditor *this,OpenXRInteractionProfileEditorBase *param_1)

{
  Object *pOVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  Object *local_50;
  Object *local_48;
  long local_40;
  
  pOVar1 = *(Object **)(param_1 + 0xa30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 == (Object *)0x0) ||
     (local_50 = pOVar1, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    local_50 = (Object *)0x0;
    _err_print_error("_do_add_interaction_profile_editor",
                     "modules/openxr/editor/openxr_action_map_editor.cpp",0x171,
                     "Condition \"interaction_profile.is_null()\" is true.",0,0);
    Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile> *)&local_50);
  }
  else {
    uVar2 = *(undefined8 *)(this + 0xa20);
    local_48 = pOVar1;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      local_48 = (Object *)0x0;
    }
    OpenXRActionMap::add_interaction_profile(uVar2);
    if (((local_48 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar1 = local_48, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_48), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    Node::add_child(*(undefined8 *)(this + 0xa60),param_1,0,0);
    uVar2 = *(undefined8 *)(this + 0xa60);
    if ((_do_add_interaction_profile_editor(OpenXRInteractionProfileEditorBase*)::{lambda()#2}::
         operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&_do_add_interaction_profile_editor(OpenXRInteractionProfileEditorBase*)
                                     ::{lambda()#2}::operator()()::sname), iVar4 != 0)) {
      _scs_create((char *)&_do_add_interaction_profile_editor(OpenXRInteractionProfileEditorBase*)::
                           {lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_do_add_interaction_profile_editor(OpenXRInteractionProfileEditorBase*)::
                    {lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_do_add_interaction_profile_editor(OpenXRInteractionProfileEditorBase*)::
                           {lambda()#2}::operator()()::sname);
    }
    if ((_do_add_interaction_profile_editor(OpenXRInteractionProfileEditorBase*)::{lambda()#1}::
         operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&_do_add_interaction_profile_editor(OpenXRInteractionProfileEditorBase*)
                                     ::{lambda()#1}::operator()()::sname), iVar4 != 0)) {
      _scs_create((char *)&_do_add_interaction_profile_editor(OpenXRInteractionProfileEditorBase*)::
                           {lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_do_add_interaction_profile_editor(OpenXRInteractionProfileEditorBase*)::
                    {lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_do_add_interaction_profile_editor(OpenXRInteractionProfileEditorBase*)::
                           {lambda()#1}::operator()()::sname);
    }
    Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
    iVar4 = TabContainer::get_tab_count();
    TabContainer::set_tab_button_icon((int)uVar2,(Ref *)(ulong)(iVar4 - 1));
    if (((local_48 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar1 = local_48, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_48), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    uVar2 = *(undefined8 *)(this + 0xa60);
    TabContainer::get_tab_count();
    TabContainer::set_current_tab((int)uVar2);
    pOVar1 = local_50;
    if (((local_50 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_001038a9;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001038a9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::_do_remove_interaction_profile_editor(OpenXRInteractionProfileEditorBase*)
    */

void __thiscall
OpenXRActionMapEditor::_do_remove_interaction_profile_editor
          (OpenXRActionMapEditor *this,OpenXRInteractionProfileEditorBase *param_1)

{
  Object *pOVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long in_FS_OFFSET;
  Object *local_30;
  Object *local_28;
  long local_20;
  
  pOVar1 = *(Object **)(param_1 + 0xa30);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 == (Object *)0x0) ||
     (local_30 = pOVar1, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    local_30 = (Object *)0x0;
    _err_print_error("_do_remove_interaction_profile_editor",
                     "modules/openxr/editor/openxr_action_map_editor.cpp",0x17c,
                     "Condition \"interaction_profile.is_null()\" is true.",0,0);
    Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile> *)&local_30);
  }
  else {
    Node::remove_child(*(Node **)(this + 0xa60));
    uVar2 = *(undefined8 *)(this + 0xa20);
    local_28 = pOVar1;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      local_28 = (Object *)0x0;
    }
    OpenXRActionMap::remove_interaction_profile(uVar2);
    if (((local_28 == (Object *)0x0) ||
        (cVar4 = RefCounted::unreference(), pOVar3 = local_28, cVar4 == '\0')) ||
       (cVar4 = predelete_handler(local_28), cVar4 == '\0')) {
      cVar4 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      cVar4 = RefCounted::unreference();
    }
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar1), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar1,false);
        return;
      }
      goto LAB_00103a22;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103a22:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::_bind_methods() */

void OpenXRActionMapEditor::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_d0;
  long local_c8 [2];
  long *local_b8;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (char **)0x0;
  auStack_50 = (undefined1  [16])0x0;
  pMVar4 = create_method_bind<OpenXRActionMapEditor,OpenXRActionSetEditor*,Ref<OpenXRActionSet>>
                     (_add_action_set_editor);
  StringName::StringName((StringName *)local_c8,"_add_action_set_editor",false);
  local_b8 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_c8,(Variant **)0x0,0);
  plVar3 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar6 = local_b8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_b8[-1];
      local_b8 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar6 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = (char **)0x0;
  auStack_50 = (undefined1  [16])0x0;
  pMVar4 = create_method_bind<OpenXRActionMapEditor,OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>>
                     (_add_interaction_profile_editor);
  StringName::StringName((StringName *)local_c8,"_add_interaction_profile_editor",false);
  local_b8 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_c8,(Variant **)0x0,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_c8);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_a0 = 0;
  local_a8 = "name";
  uVar5 = (uint)&local_58;
  local_58 = &local_a8;
  D_METHODP((char *)local_c8,(char ***)"_add_action_set",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRActionMapEditor,OpenXRActionSetEditor*,String>(_add_action_set);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_c8);
  local_a8 = "name";
  local_a0 = 0;
  local_58 = &local_a8;
  D_METHODP((char *)local_c8,(char ***)"_remove_action_set",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRActionMapEditor,String>(_remove_action_set);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar6 = local_b8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_b8[-1];
      local_b8 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar6 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8[0] != 0)) {
    StringName::unref();
  }
  local_a0 = 0;
  local_a8 = "action_set_editor";
  local_58 = &local_a8;
  D_METHODP((char *)local_c8,(char ***)"_do_add_action_set_editor",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRActionMapEditor,OpenXRActionSetEditor*>
                     (_do_add_action_set_editor);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_c8);
  local_a8 = "action_set_editor";
  local_a0 = 0;
  local_58 = &local_a8;
  D_METHODP((char *)local_c8,(char ***)"_do_remove_action_set_editor",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRActionMapEditor,OpenXRActionSetEditor*>
                     (_do_remove_action_set_editor);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)local_c8);
  local_a0 = 0;
  local_a8 = "interaction_profile_editor";
  local_58 = &local_a8;
  D_METHODP((char *)local_c8,(char ***)"_do_add_interaction_profile_editor",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRActionMapEditor,OpenXRInteractionProfileEditorBase*>
                     (_do_add_interaction_profile_editor);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar6 = local_b8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_b8[-1];
      local_b8 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar6 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8[0] != 0)) {
    StringName::unref();
  }
  local_a8 = "interaction_profile_editor";
  local_a0 = 0;
  local_58 = &local_a8;
  D_METHODP((char *)local_c8,(char ***)"_do_remove_interaction_profile_editor",uVar5);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<OpenXRActionMapEditor,OpenXRInteractionProfileEditorBase*>
                     (_do_remove_interaction_profile_editor);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar6 = local_b8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_b8[-1];
      local_b8 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar6 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8[0] != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_98 = "interaction_profile_path";
  pcStack_90 = "editor_class";
  auStack_50._0_8_ = &pcStack_90;
  local_58 = &local_98;
  D_METHODP((char *)local_c8,(char ***)"register_interaction_profile_editor",uVar5);
  StringName::StringName((StringName *)&local_d0,"OpenXRActionMapEditor",false);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00114b80;
  *(code **)(pMVar4 + 0x58) = register_interaction_profile_editor;
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 2;
  MethodBind::_set_static(SUB81(pMVar4,0));
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_d0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  plVar3 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar6 = local_b8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_b8[-1];
      local_b8 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar6 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8[0] != 0)) {
    StringName::unref();
  }
  local_68 = 0;
  auStack_50._0_8_ = &pcStack_70;
  local_78 = "binding_modifier_class";
  pcStack_70 = "editor_class";
  local_58 = &local_78;
  D_METHODP((char *)local_c8,(char ***)"register_binding_modifier_editor",uVar5);
  StringName::StringName((StringName *)&local_d0,"OpenXRActionMapEditor",false);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00114b80;
  *(code **)(pMVar4 + 0x58) = register_binding_modifier_editor;
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 2;
  MethodBind::_set_static(SUB81(pMVar4,0));
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_d0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  plVar3 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar6 = local_b8 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_b8[-1];
      local_b8 = (long *)0x0;
      if (lVar1 != 0) {
        lVar7 = 0;
        plVar6 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar7);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::register_interaction_profile_editor(String const&, String const&) */

void OpenXRActionMapEditor::register_interaction_profile_editor(String *param_1,String *param_2)

{
  CowData<char32_t> *this;
  
  this = (CowData<char32_t> *)
         HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
         ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                       *)interaction_profile_editors,param_1);
  if (*(long *)this != *(long *)param_2) {
    CowData<char32_t>::_ref(this,(CowData *)param_2);
    return;
  }
  return;
}



/* OpenXRActionMapEditor::register_binding_modifier_editor(String const&, String const&) */

void OpenXRActionMapEditor::register_binding_modifier_editor(String *param_1,String *param_2)

{
  CowData<char32_t> *this;
  
  this = (CowData<char32_t> *)
         HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
         ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                       *)binding_modifier_editors,param_1);
  if (*(long *)this != *(long *)param_2) {
    CowData<char32_t>::_ref(this,(CowData *)param_2);
    return;
  }
  return;
}



/* OpenXRActionMapEditor::get_binding_modifier_editor_class(String const&) */

OpenXRActionMapEditor * __thiscall
OpenXRActionMapEditor::get_binding_modifier_editor_class
          (OpenXRActionMapEditor *this,String *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  uint uVar13;
  CowData *pCVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((binding_modifier_editors._8_8_ != 0) && (binding_modifier_editors._44_4_ != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)binding_modifier_editors._40_4_ * 4);
    uVar18 = CONCAT44(0,uVar1);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)(uint)binding_modifier_editors._40_4_ * 8)
    ;
    uVar13 = String::hash();
    uVar15 = 1;
    if (uVar13 != 0) {
      uVar15 = uVar13;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar15 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar18;
    lVar17 = SUB168(auVar4 * auVar8,8);
    uVar13 = *(uint *)(binding_modifier_editors._16_8_ + lVar17 * 4);
    iVar16 = SUB164(auVar4 * auVar8,8);
    if (uVar13 != 0) {
      uVar20 = 0;
      lVar19 = binding_modifier_editors._16_8_;
      do {
        if ((uVar15 == uVar13) &&
           (cVar12 = String::operator==((String *)
                                        (*(long *)(binding_modifier_editors._8_8_ + lVar17 * 8) +
                                        0x10),(String *)param_1),
           lVar19 = binding_modifier_editors._16_8_, cVar12 != '\0')) {
          pCVar14 = (CowData *)
                    HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                    ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                  *)binding_modifier_editors,param_1);
          *(undefined8 *)this = 0;
          if (*(long *)pCVar14 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)this,pCVar14);
          }
          goto LAB_00104657;
        }
        uVar20 = uVar20 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar16 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar18;
        lVar17 = SUB168(auVar5 * auVar9,8);
        uVar13 = *(uint *)(lVar19 + lVar17 * 4);
        iVar16 = SUB164(auVar5 * auVar9,8);
      } while ((uVar13 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar13 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar18, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar1 + iVar16) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar18, uVar20 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
LAB_00104657:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* OpenXRActionMapEditor::_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>) */

StringName * __thiscall
OpenXRActionMapEditor::_add_interaction_profile_editor(OpenXRActionMapEditor *this,ulong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  String *pSVar6;
  void *pvVar7;
  StringName *this_00;
  long in_FS_OFFSET;
  CowData<char32_t> local_58 [8];
  Object *local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    _err_print_error("_add_interaction_profile_editor",
                     "modules/openxr/editor/openxr_action_map_editor.cpp",99,
                     "Condition \"p_interaction_profile.is_null()\" is true. Returning: nullptr",0,0
                    );
    this_00 = (StringName *)0x0;
    goto LAB_00104a78;
  }
  OpenXRInteractionProfile::get_interaction_profile_path();
  local_48 = (Object *)((ulong)local_48 & 0xffffffff00000000);
  cVar4 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
          ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                         *)interaction_profile_editors,local_58,(uint *)&local_48);
  if (cVar4 == '\0') {
LAB_001048c0:
    this_00 = (StringName *)operator_new(0xa78,"");
    OpenXRInteractionProfileEditor::OpenXRInteractionProfileEditor
              ((OpenXRInteractionProfileEditor *)this_00);
    postinitialize_handler((Object *)this_00);
  }
  else {
    pSVar6 = (String *)
             HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                           *)interaction_profile_editors,local_58);
    StringName::StringName((StringName *)&local_48,pSVar6,false);
    pvVar7 = (void *)ClassDB::instantiate((StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
    if (pvVar7 == (void *)0x0) goto LAB_001048c0;
    this_00 = (StringName *)
              __dynamic_cast(pvVar7,&Object::typeinfo,&OpenXRInteractionProfileEditorBase::typeinfo,
                             0);
    if (this_00 == (StringName *)0x0) {
      operator+((char *)&local_48,(String *)"Interaction profile editor type mismatch for ");
      _err_print_error("_add_interaction_profile_editor",
                       "modules/openxr/editor/openxr_action_map_editor.cpp",0x6e,
                       (StringName *)&local_48,0,1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      Memory::free_static(pvVar7,false);
      goto LAB_001048c0;
    }
  }
  pcVar1 = *(code **)(*(long *)this_00 + 0x378);
  local_48 = (Object *)0x0;
  if (((Object *)*param_2 != (Object *)0x0) &&
     (local_48 = (Object *)*param_2, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    local_48 = (Object *)0x0;
  }
  local_50 = (Object *)0x0;
  if ((*(Object **)(this + 0xa20) != (Object *)0x0) &&
     (local_50 = *(Object **)(this + 0xa20), cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    local_50 = (Object *)0x0;
  }
  (*pcVar1)(this_00,&local_50,(StringName *)&local_48);
  if (((local_50 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar3 = local_50, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_50), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  if (((local_48 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar3 = local_48, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  Node::add_child(*(undefined8 *)(this + 0xa60),this_00,0,0);
  if ((_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::{lambda()#1}::operator()()::
       sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::
                                   {lambda()#1}::operator()()::sname), iVar5 != 0)) {
    _scs_create((char *)&_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::
                         {lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::{lambda()#1}::
                  operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::
                         {lambda()#1}::operator()()::sname);
  }
  Control::get_theme_stylebox((StringName *)&local_48,(StringName *)this);
  Control::add_theme_style_override(this_00,(Ref *)(SceneStringNames::singleton + 600));
  if (((local_48 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar3 = local_48, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  uVar2 = *(undefined8 *)(this + 0xa60);
  if ((_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::{lambda()#3}::operator()()::
       sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::
                                   {lambda()#3}::operator()()::sname), iVar5 != 0)) {
    _scs_create((char *)&_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::
                         {lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::{lambda()#3}::
                  operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::
                         {lambda()#3}::operator()()::sname);
  }
  if ((_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::{lambda()#2}::operator()()::
       sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::
                                   {lambda()#2}::operator()()::sname), iVar5 != 0)) {
    _scs_create((char *)&_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::
                         {lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::{lambda()#2}::
                  operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_add_interaction_profile_editor(Ref<OpenXRInteractionProfile>)::
                         {lambda()#2}::operator()()::sname);
  }
  Control::get_theme_icon((StringName *)&local_48,(StringName *)this);
  iVar5 = TabContainer::get_tab_count();
  TabContainer::set_tab_button_icon((int)uVar2,(Ref *)(ulong)(iVar5 - 1));
  if (((local_48 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar3 = local_48, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  if ((*(long *)(this_00 + 0xa58) != 0) && (1 < *(uint *)(*(long *)(this_00 + 0xa58) + -8))) {
    uVar2 = *(undefined8 *)(this + 0xa60);
    iVar5 = TabContainer::get_tab_count();
    TabContainer::set_tab_tooltip((int)uVar2,(String *)(ulong)(iVar5 - 1));
  }
  CowData<char32_t>::_unref(local_58);
LAB_00104a78:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}



/* OpenXRActionMapEditor::_create_interaction_profiles() */

void __thiscall OpenXRActionMapEditor::_create_interaction_profiles(OpenXRActionMapEditor *this)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Object *pOVar4;
  int iVar5;
  long in_FS_OFFSET;
  Array local_50 [8];
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) != 0) {
    iVar5 = 0;
    OpenXRActionMap::get_interaction_profiles();
    while( true ) {
      iVar2 = Array::size();
      if (iVar2 <= iVar5) break;
      Array::operator[]((int)local_50);
      lVar3 = Variant::get_validated_object();
      if (lVar3 == 0) {
LAB_00104d88:
        local_48 = (Object *)0x0;
        _add_interaction_profile_editor(this,&local_48);
      }
      else {
        pOVar4 = (Object *)
                 __dynamic_cast(lVar3,&Object::typeinfo,&OpenXRInteractionProfile::typeinfo,0);
        if (pOVar4 == (Object *)0x0) goto LAB_00104d88;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') goto LAB_00104d88;
        local_48 = pOVar4;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          local_48 = (Object *)0x0;
          _add_interaction_profile_editor(this);
        }
        else {
          _add_interaction_profile_editor(this);
          cVar1 = RefCounted::unreference();
          if (cVar1 != '\0') {
            cVar1 = predelete_handler(pOVar4);
            if (cVar1 != '\0') {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
        }
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar4);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      iVar5 = iVar5 + 1;
    }
    Array::~Array(local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::_notification(int) */

void __thiscall OpenXRActionMapEditor::_notification(OpenXRActionMapEditor *this,int param_1)

{
  if (param_1 == 0xd) {
    _create_action_sets(this);
    _create_interaction_profiles(this);
    return;
  }
  if ((param_1 != 0x2d) && (param_1 != 10)) {
    return;
  }
  _notification((int)this);
  return;
}



/* OpenXRActionMapEditor::_on_save_action_map() */

void __thiscall OpenXRActionMapEditor::_on_save_action_map(OpenXRActionMapEditor *this)

{
  undefined8 uVar1;
  String *pSVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (Object *)0x0;
  if (*(long *)(this + 0xa20) != 0) {
    pOVar5 = (Object *)
             __dynamic_cast(*(long *)(this + 0xa20),&Object::typeinfo,&Resource::typeinfo,0);
    if (pOVar5 != (Object *)0x0) {
      local_48 = pOVar5;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_48 = (Object *)0x0;
      }
    }
  }
  iVar4 = ResourceSaver::save((String *)&local_48,(String *)(this + 0xa18),0);
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  pSVar2 = EditorNode::singleton;
  if (iVar4 == 0) {
    _clear_action_map(this);
    _create_action_sets(this);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _create_interaction_profiles(this);
      return;
    }
  }
  else {
    local_48 = (Object *)0x0;
    String::parse_latin1((String *)&local_48,"");
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"Warning!");
    TTR(local_58,(String *)&local_50);
    uVar1 = *(undefined8 *)(&error_names + (long)iVar4 * 8);
    local_68 = 0;
    if (*(long *)(this + 0xa18) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(this + 0xa18));
    }
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"");
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"Error saving file %s: %s");
    TTR(local_70,(String *)&local_80);
    vformat<String,char_const*>(local_60,local_70,(CowData<char32_t> *)&local_68,uVar1);
    EditorNode::show_warning(pSVar2,(String *)local_60);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::open_action_map(String) */

void __thiscall OpenXRActionMapEditor::open_action_map(OpenXRActionMapEditor *this,CowData *param_2)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  EditorBottomPanel::make_item_visible
            (*(Control **)(EditorNode::singleton + 0xa40),SUB81(this,0),true);
  _clear_action_map(this);
  local_28 = 0;
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_28,param_2);
  }
  _load_action_map(this,&local_28,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
  _create_action_sets(this);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _create_interaction_profiles(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::_on_reset_to_default_layout() */

void __thiscall OpenXRActionMapEditor::_on_reset_to_default_layout(OpenXRActionMapEditor *this)

{
  Object *pOVar1;
  char cVar2;
  
  _clear_action_map(this);
  if (*(long *)(this + 0xa20) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa20);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined8 *)(this + 0xa20) = 0;
  Ref<OpenXRActionMap>::instantiate<>((Ref<OpenXRActionMap> *)(this + 0xa20));
  OpenXRActionMap::create_default_action_sets();
  Object::set_edited(SUB81(*(undefined8 *)(this + 0xa20),0));
  _create_action_sets(this);
  _create_interaction_profiles(this);
  return;
}



/* OpenXRActionMapEditor::_on_interaction_profile_selected(String) */

void __thiscall
OpenXRActionMapEditor::_on_interaction_profile_selected
          (OpenXRActionMapEditor *this,CowData *param_2)

{
  undefined8 uVar1;
  Object *pOVar2;
  char cVar3;
  Resource *this_00;
  long lVar4;
  Resource *pRVar5;
  Resource *pRVar6;
  long in_FS_OFFSET;
  byte bVar7;
  Object *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  Object *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  bVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_on_interaction_profile_selected",
                       "modules/openxr/editor/openxr_action_map_editor.cpp",0x101,
                       "Condition \"action_map.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_0010585d;
  }
  pRVar6 = (Resource *)0x0;
  this_00 = (Resource *)operator_new(0x268,"");
  pRVar5 = this_00;
  for (lVar4 = 0x4d; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)pRVar5 = 0;
    pRVar5 = pRVar5 + (ulong)bVar7 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined8 *)(this_00 + 0x240) = 0;
  *(code **)this_00 = Memory::realloc_static;
  Array::Array((Array *)(this_00 + 0x248));
  *(undefined1 (*) [16])(this_00 + 600) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  local_98 = (Object *)0x0;
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile> *)&local_98);
  }
  else {
    Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile> *)&local_98);
    local_98 = (Object *)0x0;
    cVar3 = RefCounted::reference();
    if (cVar3 != '\0') {
      pRVar6 = this_00;
    }
    Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile> *)&local_98);
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler((Object *)this_00);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
    }
  }
  local_98 = (Object *)0x0;
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,param_2);
  }
  OpenXRInteractionProfile::set_interaction_profile_path
            (pRVar6,(Ref<OpenXRInteractionProfile> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  uVar1 = *(undefined8 *)(this + 0xa20);
  local_98 = (Object *)pRVar6;
  cVar3 = RefCounted::reference();
  if (cVar3 == '\0') {
    local_98 = (Object *)0x0;
  }
  OpenXRActionMap::add_interaction_profile(uVar1);
  if (local_98 == (Object *)0x0) {
LAB_00105425:
    Object::set_edited(SUB81(*(undefined8 *)(this + 0xa20),0));
  }
  else {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_98;
    if (cVar3 == '\0') goto LAB_00105425;
    cVar3 = predelete_handler(local_98);
    if (cVar3 == '\0') goto LAB_00105425;
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    Object::set_edited(SUB81(*(undefined8 *)(this + 0xa20),0));
  }
  local_98 = (Object *)pRVar6;
  cVar3 = RefCounted::reference();
  if (cVar3 == '\0') {
    local_98 = (Object *)0x0;
    local_b8 = (Object *)
               _add_interaction_profile_editor(this,(Ref<OpenXRInteractionProfile> *)&local_98);
  }
  else {
    local_b8 = (Object *)_add_interaction_profile_editor(this);
    if (pRVar6 != (Resource *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar6);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar6 + 0x140))(pRVar6);
          Memory::free_static(pRVar6,false);
        }
      }
    }
  }
  uVar1 = *(undefined8 *)(this + 0xa10);
  local_a0 = 0;
  String::parse_latin1((String *)&local_a0,"");
  local_98 = (Object *)0x106f0f;
  local_a8 = 0;
  local_90 = 0x17;
  String::parse_latin1((StrRange *)&local_a8);
  TTR((Ref<OpenXRInteractionProfile> *)&local_98,(StrRange *)&local_a8);
  EditorUndoRedoManager::create_action(uVar1,(Ref<OpenXRInteractionProfile> *)&local_98,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  pOVar2 = *(Object **)(this + 0xa10);
  StringName::StringName((StringName *)&local_98,"_do_add_interaction_profile_editor",false);
  Variant::Variant((Variant *)local_78,local_b8);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp
            (pOVar2,(StringName *)this,(Variant **)&local_98,(int)local_88);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (Object *)0x0)) {
    StringName::unref();
  }
  pOVar2 = *(Object **)(this + 0xa10);
  StringName::StringName((StringName *)&local_98,"_do_remove_interaction_profile_editor",false);
  Variant::Variant((Variant *)local_78,local_b8);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar2,(StringName *)this,(Variant **)&local_98,(int)local_88);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (Object *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(*(undefined8 *)(this + 0xa10),0));
  uVar1 = *(undefined8 *)(this + 0xa60);
  TabContainer::get_tab_count();
  TabContainer::set_current_tab((int)uVar1);
  if (pRVar6 != (Resource *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler((Object *)pRVar6);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pRVar6 + 0x140))(pRVar6);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pRVar6,false);
          return;
        }
        goto LAB_0010585d;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010585d:
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



/* OpenXRActionMapEditor::_on_add_interaction_profile() */

void __thiscall OpenXRActionMapEditor::_on_add_interaction_profile(OpenXRActionMapEditor *this)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  Object *local_70 [2];
  long local_60;
  long local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_on_add_interaction_profile",
                       "modules/openxr/editor/openxr_action_map_editor.cpp",0xf5,
                       "Condition \"action_map.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    lVar8 = 0;
    local_60 = 0;
    for (iVar7 = 0; iVar5 = OpenXRActionMap::get_interaction_profile_count(), iVar7 < iVar5;
        iVar7 = iVar7 + 1) {
      OpenXRActionMap::get_interaction_profile((int)local_70);
      OpenXRInteractionProfile::get_interaction_profile_path();
      if (lVar8 == 0) {
        lVar8 = 1;
      }
      else {
        lVar8 = *(long *)(lVar8 + -8) + 1;
      }
      iVar5 = CowData<String>::resize<false>((CowData<String> *)&local_60,lVar8);
      lVar8 = local_60;
      if (iVar5 == 0) {
        if (local_60 == 0) {
          lVar9 = -1;
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(local_60 + -8);
          lVar9 = lVar6 + -1;
          if (-1 < lVar9) {
            CowData<String>::_copy_on_write((CowData<String> *)&local_60);
            lVar8 = local_60;
            this_00 = (CowData<char32_t> *)(local_60 + lVar9 * 8);
            if (*(long *)this_00 != local_58) {
              CowData<char32_t>::_ref(this_00,(CowData *)&local_58);
            }
            goto LAB_00105a89;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar6,"p_index","size()","",false,
                   false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
        lVar8 = local_60;
      }
LAB_00105a89:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (((local_70[0] != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar3 = local_70[0], cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_70[0]), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))();
        Memory::free_static(pOVar3,false);
      }
    }
    local_50[0] = 0;
    uVar2 = *(undefined8 *)(this + 0xa78);
    plVar1 = (long *)(lVar8 + -0x10);
    if (lVar8 != 0) {
      do {
        lVar8 = *plVar1;
        if (lVar8 == 0) goto LAB_00105b24;
        LOCK();
        lVar6 = *plVar1;
        bVar10 = lVar8 == lVar6;
        if (bVar10) {
          *plVar1 = lVar8 + 1;
          lVar6 = lVar8;
        }
        UNLOCK();
      } while (!bVar10);
      if (lVar6 != -1) {
        local_50[0] = local_60;
      }
    }
LAB_00105b24:
    OpenXRSelectInteractionProfileDialog::open(uVar2,(CowData<char32_t> *)&local_58);
    CowData<String>::_unref((CowData<String> *)local_50);
    CowData<String>::_unref((CowData<String> *)&local_60);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
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



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, String>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,String> *this)

{
  return;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void,
   OpenXRActionSetEditor*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,OpenXRActionSetEditor*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,OpenXRActionSetEditor*> *this)

{
  return;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, Ref<OpenXRAction>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,Ref<OpenXRAction>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,Ref<OpenXRAction>> *this)

{
  return;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, Object*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,Object*> *this)

{
  return;
}



/* MethodBindTS<String const&, String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindTS<String_const&,String_const&>::_gen_argument_type
          (MethodBindTS<String_const&,String_const&> *this,int param_1)

{
  return (ulong)((uint)param_1 < 2) << 2;
}



/* MethodBindTS<String const&, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTS<String_const&,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTS<String const&, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindTS<String_const&,String_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00105ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))(*(long *)param_3 + 8,*(long *)(param_3 + 8) + 8);
  return;
}



/* MethodBindTS<String const&, String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindTS<String_const&,String_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00105f0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))(*param_3,*(undefined8 *)((long)param_3 + 8));
  return;
}



/* MethodBindT<OpenXRInteractionProfileEditorBase*>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<OpenXRInteractionProfileEditorBase*>::_gen_argument_type
          (MethodBindT<OpenXRInteractionProfileEditorBase*> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<OpenXRInteractionProfileEditorBase*>::get_argument_meta(int) const */

undefined8 MethodBindT<OpenXRInteractionProfileEditorBase*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<OpenXRActionSetEditor*>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<OpenXRActionSetEditor*>::_gen_argument_type
          (MethodBindT<OpenXRActionSetEditor*> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<OpenXRActionSetEditor*>::get_argument_meta(int) const */

undefined8 MethodBindT<OpenXRActionSetEditor*>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String>::_gen_argument_type(int) const */

long __thiscall MethodBindT<String>::_gen_argument_type(MethodBindT<String> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String>::get_argument_meta(int) const */

undefined8 MethodBindT<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<OpenXRActionSetEditor*, String>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<OpenXRActionSetEditor*,String>::_gen_argument_type
          (MethodBindTR<OpenXRActionSetEditor*,String> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffec) + 0x18;
}



/* MethodBindTR<OpenXRActionSetEditor*, String>::get_argument_meta(int) const */

undefined8 MethodBindTR<OpenXRActionSetEditor*,String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<OpenXRInteractionProfileEditorBase*, Ref<OpenXRInteractionProfile>
   >::_gen_argument_type(int) const */

undefined8
MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>>::_gen_argument_type
          (int param_1)

{
  return 0x18;
}



/* MethodBindTR<OpenXRInteractionProfileEditorBase*, Ref<OpenXRInteractionProfile>
   >::get_argument_meta(int) const */

undefined8
MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>>::get_argument_meta
          (int param_1)

{
  return 0;
}



/* MethodBindTR<OpenXRActionSetEditor*, Ref<OpenXRActionSet> >::_gen_argument_type(int) const */

undefined8
MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<OpenXRActionSetEditor*, Ref<OpenXRActionSet> >::get_argument_meta(int) const */

undefined8 MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, String>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,String>::get_argument_count
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,String> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void>::get_argument_count
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void,
   OpenXRActionSetEditor*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,OpenXRActionSetEditor*>::get_argument_count
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,OpenXRActionSetEditor*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, Ref<OpenXRAction>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,Ref<OpenXRAction>>::get_argument_count
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,Ref<OpenXRAction>> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, Object*>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,Object*>::get_argument_count
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,Object*> *this,bool *param_1)

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



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, Object*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,Object*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, Ref<OpenXRAction>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,Ref<OpenXRAction>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,Ref<OpenXRAction>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void,
   OpenXRActionSetEditor*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,OpenXRActionSetEditor*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,OpenXRActionSetEditor*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, String>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,String> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindTR<OpenXRActionSetEditor*, Ref<OpenXRActionSet> >::~MethodBindTR() */

void __thiscall
MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>>::~MethodBindTR
          (MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114940;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<OpenXRActionSetEditor*, Ref<OpenXRActionSet> >::~MethodBindTR() */

void __thiscall
MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>>::~MethodBindTR
          (MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114940;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<OpenXRInteractionProfileEditorBase*, Ref<OpenXRInteractionProfile>
   >::~MethodBindTR() */

void __thiscall
MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>>::~MethodBindTR
          (MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001149a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<OpenXRInteractionProfileEditorBase*, Ref<OpenXRInteractionProfile>
   >::~MethodBindTR() */

void __thiscall
MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>>::~MethodBindTR
          (MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001149a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<OpenXRActionSetEditor*, String>::~MethodBindTR() */

void __thiscall
MethodBindTR<OpenXRActionSetEditor*,String>::~MethodBindTR
          (MethodBindTR<OpenXRActionSetEditor*,String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114a00;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<OpenXRActionSetEditor*, String>::~MethodBindTR() */

void __thiscall
MethodBindTR<OpenXRActionSetEditor*,String>::~MethodBindTR
          (MethodBindTR<OpenXRActionSetEditor*,String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114a00;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String>::~MethodBindT() */

void __thiscall MethodBindT<String>::~MethodBindT(MethodBindT<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114a60;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String>::~MethodBindT() */

void __thiscall MethodBindT<String>::~MethodBindT(MethodBindT<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114a60;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<OpenXRActionSetEditor*>::~MethodBindT() */

void __thiscall
MethodBindT<OpenXRActionSetEditor*>::~MethodBindT(MethodBindT<OpenXRActionSetEditor*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114ac0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<OpenXRActionSetEditor*>::~MethodBindT() */

void __thiscall
MethodBindT<OpenXRActionSetEditor*>::~MethodBindT(MethodBindT<OpenXRActionSetEditor*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114ac0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<OpenXRInteractionProfileEditorBase*>::~MethodBindT() */

void __thiscall
MethodBindT<OpenXRInteractionProfileEditorBase*>::~MethodBindT
          (MethodBindT<OpenXRInteractionProfileEditorBase*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114b20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<OpenXRInteractionProfileEditorBase*>::~MethodBindT() */

void __thiscall
MethodBindT<OpenXRInteractionProfileEditorBase*>::~MethodBindT
          (MethodBindT<OpenXRInteractionProfileEditorBase*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114b20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTS<String const&, String const&>::~MethodBindTS() */

void __thiscall
MethodBindTS<String_const&,String_const&>::~MethodBindTS
          (MethodBindTS<String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114b80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTS<String const&, String const&>::~MethodBindTS() */

void __thiscall
MethodBindTS<String_const&,String_const&>::~MethodBindTS
          (MethodBindTS<String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114b80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
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



/* OpenXRActionMapEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 OpenXRActionMapEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* OpenXRActionMapEditor::_property_can_revertv(StringName const&) const */

undefined8 OpenXRActionMapEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, String>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,String>::get_object
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,String> *this)

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
      goto LAB_001064fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001064fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001064fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, Object*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,Object*>::get_object
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,Object*> *this)

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
      goto LAB_001065fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001065fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001065fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void>::get_object
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void> *this)

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
      goto LAB_001066fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001066fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001066fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, OpenXRActionSetEditor*>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,OpenXRActionSetEditor*>::get_object
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,OpenXRActionSetEditor*> *this)

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
      goto LAB_001067fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001067fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001067fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, Ref<OpenXRAction> >::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,Ref<OpenXRAction>>::get_object
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,Ref<OpenXRAction>> *this)

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
      goto LAB_001068fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001068fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001068fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,int>::get_object
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,int> *this)

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
      goto LAB_001069fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001069fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001069fd:
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
  if ((code *)PTR__validate_property_0011a010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* OpenXRActionMapEditor::_validate_propertyv(PropertyInfo&) const */

void OpenXRActionMapEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0011a010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* OpenXRActionMapEditor::_setv(StringName const&, Variant const&) */

undefined8 OpenXRActionMapEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011a018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011a018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011a018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107148) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001071b8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107228) */
/* OpenXRActionMapEditor::_getv(StringName const&, Variant&) const */

undefined8 OpenXRActionMapEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a020 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x114f,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114f,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114f,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114f,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114f,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x114f,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114f,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114f,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114f,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114f,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* OpenXRActionMapEditor::is_class_ptr(void*) const */

ulong OpenXRActionMapEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x114f,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x114f,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x114f,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x114f,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x114f,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x114f,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
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
      if (StringName::configured == '\0') goto LAB_00107400;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107400:
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
      if (StringName::configured == '\0') goto LAB_00107460;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107460:
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
      if (StringName::configured == '\0') goto LAB_001074c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001074c0:
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
      if (StringName::configured == '\0') goto LAB_00107530;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107530:
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



/* OpenXRActionMapEditor::_get_class_namev() const */

undefined8 * OpenXRActionMapEditor::_get_class_namev(void)

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
LAB_00107603:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107603;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRActionMapEditor");
      goto LAB_0010766e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRActionMapEditor");
LAB_0010766e:
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
LAB_001076f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001076f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010775e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010775e:
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
LAB_001077e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001077e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010784e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010784e:
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



/* WARNING: Removing unreachable block (ram,0x00107f80) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011a028 != Container::_notification) {
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
  if ((code *)PTR__notification_0011a028 == Container::_notification) {
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



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
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
    }
  }
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* void Ref<OpenXRActionMap>::instantiate<>() */

void __thiscall Ref<OpenXRActionMap>::instantiate<>(Ref<OpenXRActionMap> *this)

{
  char cVar1;
  Resource *this_00;
  long lVar2;
  Resource *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (Resource *)operator_new(0x250,"");
  pRVar3 = this_00;
  for (lVar2 = 0x4a; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(code **)this_00 = RefCounted::init_ref;
  Array::Array((Array *)(this_00 + 0x240));
  Array::Array((Array *)(this_00 + 0x248));
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
    this_00 = (Resource *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (Resource *)pOVar5) goto LAB_00108185;
    *(Resource **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_00108185;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_00108185:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<OpenXRActionMapEditor>(OpenXRActionMapEditor*,
   char const*, void (OpenXRActionMapEditor::*)()) */

OpenXRActionMapEditor *
create_custom_callable_function_pointer<OpenXRActionMapEditor>
          (OpenXRActionMapEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00114790;
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



/* Callable create_custom_callable_function_pointer<OpenXRActionMapEditor,
   int>(OpenXRActionMapEditor*, char const*, void (OpenXRActionMapEditor::*)(int)) */

OpenXRActionMapEditor *
create_custom_callable_function_pointer<OpenXRActionMapEditor,int>
          (OpenXRActionMapEditor *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00114820;
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



/* WARNING: Removing unreachable block (ram,0x001085e0) */
/* String vformat<String, char const*>(String const&, String const, char const* const) */

undefined8 *
vformat<String,char_const*>(undefined8 *param_1,bool *param_2,String *param_3,char *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d0 [8];
  undefined8 local_c8 [8];
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
  Array::Array(local_d0);
  iVar3 = (int)local_d0;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_c8,param_2);
  *param_1 = local_c8[0];
  local_c8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d0);
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* OpenXRActionMapEditor::get_class() const */

void OpenXRActionMapEditor::get_class(void)

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
        uVar5 = String::operator==((String *)param_1,"Object");
        return uVar5;
      }
LAB_00108af7:
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
    uVar4 = String::operator==((String *)param_1,(String *)&local_50);
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
      goto LAB_00108af7;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
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



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void>::call
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void> *this,Variant **param_1,
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
      goto LAB_00108e1f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00108e1f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00108ed0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00108e1f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,local_48);
    _err_print_error(&_LC61,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00108ed0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::~HashMap() */

void __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::~HashMap(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x18));
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
          Memory::free_static(pvVar3,false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, OpenXRActionSetEditor*>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,OpenXRActionSetEditor*>::call
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,OpenXRActionSetEditor*> *this,
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
      goto LAB_00109205;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00109205;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00109110:
          uVar3 = _LC62;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&OpenXRActionSetEditor::typeinfo,0),
              lVar7 == 0)) && (pOVar5 != (Object *)0x0)) goto LAB_00109110;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)
                   __dynamic_cast(pOVar5,&Object::typeinfo,&OpenXRActionSetEditor::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_001092b6;
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
LAB_00109205:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,local_58);
    _err_print_error(&_LC61,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001092b6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,int>::call
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,int> *this,Variant **param_1,
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
      goto LAB_00109478;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00109478;
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
        uVar3 = _LC63;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00109529;
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
LAB_00109478:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,local_48);
    _err_print_error(&_LC61,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109529:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, Ref<OpenXRAction> >::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,Ref<OpenXRAction>>::call
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,Ref<OpenXRAction>> *this,
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
          goto LAB_001095fe;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_001095fe;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC62;
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
LAB_001096cd:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&OpenXRAction::typeinfo,0);
            if (pOVar5 != pOVar7) {
              local_38 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_38 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_001096cd;
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
        goto LAB_001095fe;
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
  String::operator+((String *)&local_38,local_48);
  _err_print_error(&_LC61,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_001095fe:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, Object*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,Object*>::call
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,Object*> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00109a89;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00109a89;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_001099e0:
          uVar3 = _LC62;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar6 == (Object *)0x0) && (pOVar5 != (Object *)0x0)) goto LAB_001099e0;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109a27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_00109b3a;
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
LAB_00109a89:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,local_58);
    _err_print_error(&_LC61,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109b3a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, String>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,String>::call
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,String> *this,Variant **param_1,
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
            uVar3 = _LC64;
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
        goto LAB_00109c0e;
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
  String::operator+((String *)local_38,local_48);
  _err_print_error(&_LC61,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_00109c0e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTS<String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTS<String_const&,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  uint in_R8D;
  undefined4 *in_R9;
  int iVar9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  Variant local_50 [8];
  Variant local_48 [8];
  long local_40;
  
  pVVar1 = param_2[0xb];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_R8D < 3) {
    pVVar11 = param_2[5];
    iVar8 = 2 - in_R8D;
    if (pVVar11 == (Variant *)0x0) {
      if (iVar8 != 0) goto LAB_00109f08;
      pVVar10 = *(Variant **)param_4;
LAB_00109f6d:
      pVVar11 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      iVar9 = (int)lVar2;
      if (iVar9 < iVar8) {
LAB_00109f08:
        uVar6 = 4;
        goto LAB_00109f0d;
      }
      if (in_R8D == 0) {
        lVar7 = (long)(iVar9 + -2);
        if (lVar2 <= lVar7) goto LAB_00109f88;
        pVVar10 = pVVar11 + lVar7 * 0x18;
      }
      else {
        pVVar10 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_00109f6d;
      }
      lVar7 = (long)(int)((iVar9 - iVar8) + (in_R8D ^ 1));
      if (lVar2 <= lVar7) {
LAB_00109f88:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar7 * 0x18;
    }
    *in_R9 = 0;
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC69;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String(local_50);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC64;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String(local_48);
    (*(code *)pVVar1)(local_48,local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    uVar6 = 3;
LAB_00109f0d:
    *in_R9 = uVar6;
    in_R9[2] = 2;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
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
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010a0db;
  }
  cVar5 = String::operator==((String *)param_1,"CanvasItem");
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
      cVar5 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010a0db;
    }
    cVar5 = String::operator==((String *)param_1,"Node");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Object::is_class((Object *)this,param_1);
        return uVar6;
      }
      goto LAB_0010a1de;
    }
  }
LAB_0010a0db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a1de:
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
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010a2fb;
  }
  cVar5 = String::operator==((String *)param_1,"Container");
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
      cVar5 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010a2fb;
    }
    cVar5 = String::operator==((String *)param_1,"Control");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar6;
      }
      goto LAB_0010a3fe;
    }
  }
LAB_0010a2fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a3fe:
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
    cVar4 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010a50b;
  }
  cVar4 = String::operator==((String *)param_1,"BoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Container::is_class((Container *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010a50b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_0011a040 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0011a030 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0011a038 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_0011a040 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0011a030 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0011a038 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"VBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<OpenXRActionSetEditor*, Ref<OpenXRActionSet> >::_gen_argument_type_info(int) const
    */

undefined4 *
MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>>::_gen_argument_type_info(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"OpenXRActionSet");
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_b0,0x11,
               (String *)&local_a8,6,&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    lVar3 = local_78;
    uVar2 = local_90._8_8_;
    uVar1 = local_90._0_8_;
    local_90 = (undefined1  [16])0x0;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar1;
    *(undefined8 *)(puVar4 + 4) = uVar2;
    puVar4[6] = (undefined4)local_80;
    local_78 = 0;
    *(long *)(puVar4 + 8) = lVar3;
    puVar4[10] = local_70;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  }
  else {
    local_60 = 0x15;
    local_68 = "OpenXRActionSetEditor";
    String::parse_latin1((StrRange *)&local_98);
    StringName::StringName((StringName *)&local_68,(String *)&local_98,false);
    *puVar4 = 0x18;
    *(undefined8 *)(puVar4 + 2) = 0;
    StringName::StringName((StringName *)(puVar4 + 4),(StringName *)&local_68);
    bVar5 = StringName::configured != '\0';
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 6;
    if ((bVar5) && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<OpenXRActionSetEditor*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<OpenXRActionSetEditor*>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  char *local_68;
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
    local_78 = 0;
    local_68 = "OpenXRActionSetEditor";
    local_60 = 0x15;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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



/* MethodBindT<OpenXRInteractionProfileEditorBase*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<OpenXRInteractionProfileEditorBase*>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  char *local_68;
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
    local_78 = 0;
    local_68 = "OpenXRInteractionProfileEditorBase";
    local_60 = 0x22;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
    local_60 = 0;
    StringName::StringName((StringName *)&local_58,(StringName *)&local_70);
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
        if (pvVar3 == (void *)0x0) goto LAB_0010b80f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010b80f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* OpenXRActionMapEditor::is_class(String const&) const */

undefined8 __thiscall OpenXRActionMapEditor::is_class(OpenXRActionMapEditor *this,String *param_1)

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
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010b96b;
  }
  cVar5 = String::operator==((String *)param_1,"OpenXRActionMapEditor");
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
      cVar5 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010b96b;
    }
    cVar5 = String::operator==((String *)param_1,"VBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_0010ba6e;
    }
  }
LAB_0010b96b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ba6e:
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
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010bb7b;
  }
  cVar5 = String::operator==((String *)param_1,"VBoxContainer");
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
      cVar5 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010bb7b;
    }
    cVar5 = String::operator==((String *)param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010bc7e;
    }
  }
LAB_0010bb7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010bc7e:
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
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010bd8b;
  }
  cVar5 = String::operator==((String *)param_1,"HBoxContainer");
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
      cVar5 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010bd8b;
    }
    cVar5 = String::operator==((String *)param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010be8e;
    }
  }
LAB_0010bd8b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010be8e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<OpenXRInteractionProfileEditorBase*, Ref<OpenXRInteractionProfile>
   >::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>>::
_gen_argument_type_info(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"OpenXRInteractionProfile");
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_b0,0x11,
               (String *)&local_a8,6,&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    lVar3 = local_78;
    uVar2 = local_90._8_8_;
    uVar1 = local_90._0_8_;
    local_90 = (undefined1  [16])0x0;
    *puVar4 = (undefined4)local_98;
    *(undefined8 *)(puVar4 + 2) = uVar1;
    *(undefined8 *)(puVar4 + 4) = uVar2;
    puVar4[6] = (undefined4)local_80;
    local_78 = 0;
    *(long *)(puVar4 + 8) = lVar3;
    puVar4[10] = local_70;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  }
  else {
    local_60 = 0x22;
    local_68 = "OpenXRInteractionProfileEditorBase";
    String::parse_latin1((StrRange *)&local_98);
    StringName::StringName((StringName *)&local_68,(String *)&local_98,false);
    *puVar4 = 0x18;
    *(undefined8 *)(puVar4 + 2) = 0;
    StringName::StringName((StringName *)(puVar4 + 4),(StringName *)&local_68);
    bVar5 = StringName::configured != '\0';
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 6;
    if ((bVar5) && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
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
  local_78 = &_LC72;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC72;
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
      goto LAB_0010c29c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c29c:
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
  long *local_b0;
  CowData<char32_t> *local_a8;
  CowData<char32_t> *local_a0;
  long local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    local_90 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_80 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_80);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_80,0,(StrRange *)&local_88,0x80,
               &local_90);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_a0 = (CowData<char32_t> *)&local_70;
  local_a8 = local_58;
  local_b0 = &local_80;
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
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,local_b0
            );
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_a8);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a0);
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
  if ((code *)PTR__get_property_list_0011a048 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_0011a050 != CanvasItem::_get_property_list) {
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
      goto LAB_0010ca41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ca41:
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
      goto LAB_0010ccf1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ccf1:
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
      goto LAB_0010cfa1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cfa1:
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



/* OpenXRActionMapEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
OpenXRActionMapEditor::_get_property_listv(OpenXRActionMapEditor *this,List *param_1,bool param_2)

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
  local_78 = "OpenXRActionMapEditor";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OpenXRActionMapEditor";
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
      goto LAB_0010d251;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d251:
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
  StringName::StringName((StringName *)&local_78,"OpenXRActionMapEditor",false);
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
      goto LAB_0010d501;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d501:
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



/* Ref<OpenXRActionSet>::unref() */

void __thiscall Ref<OpenXRActionSet>::unref(Ref<OpenXRActionSet> *this)

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



/* Ref<OpenXRInteractionProfile>::unref() */

void __thiscall Ref<OpenXRInteractionProfile>::unref(Ref<OpenXRInteractionProfile> *this)

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



/* MethodBind* create_method_bind<OpenXRActionMapEditor, OpenXRActionSetEditor*,
   Ref<OpenXRActionSet> >(OpenXRActionSetEditor* (OpenXRActionMapEditor::*)(Ref<OpenXRActionSet>))
    */

MethodBind *
create_method_bind<OpenXRActionMapEditor,OpenXRActionSetEditor*,Ref<OpenXRActionSet>>
          (_func_OpenXRActionSetEditor_ptr_Ref *param_1)

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
  *(_func_OpenXRActionSetEditor_ptr_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114940;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRActionMapEditor";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<OpenXRActionMapEditor, OpenXRInteractionProfileEditorBase*,
   Ref<OpenXRInteractionProfile> >(OpenXRInteractionProfileEditorBase*
   (OpenXRActionMapEditor::*)(Ref<OpenXRInteractionProfile>)) */

MethodBind *
create_method_bind<OpenXRActionMapEditor,OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>>
          (_func_OpenXRInteractionProfileEditorBase_ptr_Ref *param_1)

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
  *(_func_OpenXRInteractionProfileEditorBase_ptr_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001149a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRActionMapEditor";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<OpenXRActionMapEditor, OpenXRActionSetEditor*,
   String>(OpenXRActionSetEditor* (OpenXRActionMapEditor::*)(String)) */

MethodBind *
create_method_bind<OpenXRActionMapEditor,OpenXRActionSetEditor*,String>
          (_func_OpenXRActionSetEditor_ptr_String *param_1)

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
  *(_func_OpenXRActionSetEditor_ptr_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114a00;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRActionMapEditor";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<OpenXRActionMapEditor, String>(void
   (OpenXRActionMapEditor::*)(String)) */

MethodBind * create_method_bind<OpenXRActionMapEditor,String>(_func_void_String *param_1)

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
  *(_func_void_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114a60;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRActionMapEditor";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<OpenXRActionMapEditor, OpenXRActionSetEditor*>(void
   (OpenXRActionMapEditor::*)(OpenXRActionSetEditor*)) */

MethodBind *
create_method_bind<OpenXRActionMapEditor,OpenXRActionSetEditor*>
          (_func_void_OpenXRActionSetEditor_ptr *param_1)

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
  *(_func_void_OpenXRActionSetEditor_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114ac0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRActionMapEditor";
  local_30 = 0x15;
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



/* MethodBind* create_method_bind<OpenXRActionMapEditor, OpenXRInteractionProfileEditorBase*>(void
   (OpenXRActionMapEditor::*)(OpenXRInteractionProfileEditorBase*)) */

MethodBind *
create_method_bind<OpenXRActionMapEditor,OpenXRInteractionProfileEditorBase*>
          (_func_void_OpenXRInteractionProfileEditorBase_ptr *param_1)

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
  *(_func_void_OpenXRInteractionProfileEditorBase_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114b20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "OpenXRActionMapEditor";
  local_30 = 0x15;
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



/* OpenXRActionMapEditor::_bind_methods() [clone .cold] */

void OpenXRActionMapEditor::_bind_methods(void)

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



/* OpenXRActionMapEditor::_initialize_classv() */

void OpenXRActionMapEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
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
                local_50 = 0;
                String::parse_latin1((String *)&local_50,"Object");
                StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
                local_60 = 0;
                String::parse_latin1((String *)&local_60,"Node");
                StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
                ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
                if ((StringName::configured != '\0') && (local_58 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                if ((StringName::configured != '\0') && (local_48 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
                if ((code *)PTR__bind_methods_0011a040 != Node::_bind_methods) {
                  Node::_bind_methods();
                }
                Node::initialize_class()::initialized = '\x01';
              }
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Node");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"CanvasItem");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              CanvasItem::_bind_methods();
              if ((code *)PTR__bind_compatibility_methods_0011a030 !=
                  Object::_bind_compatibility_methods) {
                CanvasItem::_bind_compatibility_methods();
              }
              CanvasItem::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"CanvasItem");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Control");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            Control::_bind_methods();
            Control::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Control");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Container");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Container::_bind_methods();
          Container::initialize_class()::initialized = '\x01';
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
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_0011a038 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"BoxContainer");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"VBoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"VBoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"OpenXRActionMapEditor");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Ref<OpenXRActionSet>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<OpenXRActionSet>::operator=(Ref<OpenXRActionSet> *this,Variant *param_1)

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
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&OpenXRActionSet::typeinfo,0);
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



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::_lookup_pos(String const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::_lookup_pos(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
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
                                      ,(String *)param_1);
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
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
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
  char cVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 uVar25;
  void *__s_00;
  undefined1 (*pauVar26) [16];
  void *pvVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  uint *puVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  cVar21 = _lookup_pos(this,param_1,&local_78);
  if (cVar21 != '\0') {
    pauVar26 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_78 * 8);
    goto LAB_0010eaf8;
  }
  local_70 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
    uVar32 = (ulong)uVar31;
    uVar24 = uVar32 * 4;
    uVar38 = uVar32 * 8;
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(this + 0x10) = uVar25;
    pvVar27 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = pvVar27;
    if (uVar31 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar27 + uVar38)) && (pvVar27 < (void *)((long)pvVar2 + uVar24))
         ) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar24 * 4) = 0;
          *(undefined8 *)((long)pvVar27 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar32 != uVar24);
      }
      else {
        memset(pvVar2,0,uVar24);
        memset(pvVar27,0,uVar38);
      }
    }
  }
  local_74 = 0;
  cVar21 = _lookup_pos(this,param_1,&local_74);
  if (cVar21 == '\0') {
    if ((float)uVar31 * __LC109 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar31 = *(uint *)(this + 0x28);
      if (uVar31 == 0x1c) {
        pauVar26 = (undefined1 (*) [16])0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_0010eaec;
      }
      uVar24 = (ulong)(uVar31 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar23 = *(uint *)(hash_table_size_primes + (ulong)uVar31 * 4);
      if (uVar31 + 1 < 2) {
        uVar24 = 2;
      }
      uVar31 = *(uint *)(hash_table_size_primes + uVar24 * 4);
      uVar32 = (ulong)uVar31;
      *(int *)(this + 0x28) = (int)uVar24;
      pvVar27 = *(void **)(this + 8);
      uVar24 = uVar32 * 4;
      uVar38 = uVar32 * 8;
      pvVar2 = *(void **)(this + 0x10);
      uVar25 = Memory::alloc_static(uVar24,false);
      *(undefined8 *)(this + 0x10) = uVar25;
      __s_00 = (void *)Memory::alloc_static(uVar38,false);
      *(void **)(this + 8) = __s_00;
      if (uVar31 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar24))) {
          uVar24 = 0;
          do {
            *(undefined4 *)((long)__s + uVar24 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
            uVar24 = uVar24 + 1;
          } while (uVar32 != uVar24);
        }
        else {
          memset(__s,0,uVar24);
          memset(__s_00,0,uVar38);
        }
      }
      if (uVar23 != 0) {
        uVar24 = 0;
        do {
          uVar31 = *(uint *)((long)pvVar2 + uVar24 * 4);
          if (uVar31 != 0) {
            lVar3 = *(long *)(this + 0x10);
            uVar36 = 0;
            uVar35 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar38 = CONCAT44(0,uVar35);
            lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar31 * lVar4;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar38;
            lVar29 = SUB168(auVar5 * auVar13,8);
            puVar34 = (uint *)(lVar3 + lVar29 * 4);
            iVar28 = SUB164(auVar5 * auVar13,8);
            uVar37 = *puVar34;
            uVar25 = *(undefined8 *)((long)pvVar27 + uVar24 * 8);
            while (uVar37 != 0) {
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)uVar37 * lVar4;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = uVar38;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)((uVar35 + iVar28) - SUB164(auVar6 * auVar14,8)) * lVar4;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar38;
              uVar22 = SUB164(auVar7 * auVar15,8);
              uVar33 = uVar25;
              if (uVar22 < uVar36) {
                *puVar34 = uVar31;
                puVar1 = (undefined8 *)((long)__s_00 + lVar29 * 8);
                uVar33 = *puVar1;
                *puVar1 = uVar25;
                uVar31 = uVar37;
                uVar36 = uVar22;
              }
              uVar36 = uVar36 + 1;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)(iVar28 + 1) * lVar4;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar38;
              lVar29 = SUB168(auVar8 * auVar16,8);
              puVar34 = (uint *)(lVar3 + lVar29 * 4);
              iVar28 = SUB164(auVar8 * auVar16,8);
              uVar25 = uVar33;
              uVar37 = *puVar34;
            }
            *(undefined8 *)((long)__s_00 + lVar29 * 8) = uVar25;
            *puVar34 = uVar31;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar24 = uVar24 + 1;
        } while (uVar23 != uVar24);
        Memory::free_static(pvVar27,false);
        Memory::free_static(pvVar2,false);
      }
    }
    local_58 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(long *)param_1 == 0) {
      local_50[0] = 0;
      pauVar26 = (undefined1 (*) [16])operator_new(0x20,"");
      *(undefined8 *)pauVar26[1] = 0;
      *pauVar26 = (undefined1  [16])0x0;
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
      lVar3 = local_58;
      uVar25 = local_68._0_8_;
      uVar33 = local_68._8_8_;
      local_50[0] = 0;
      pauVar26 = (undefined1 (*) [16])operator_new(0x20,"");
      *(undefined8 *)pauVar26[1] = 0;
      *(undefined8 *)*pauVar26 = uVar25;
      *(undefined8 *)(*pauVar26 + 8) = uVar33;
      if (lVar3 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar26 + 1),(CowData *)&local_58);
      }
    }
    *(undefined8 *)(pauVar26[1] + 8) = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    puVar1 = *(undefined8 **)(this + 0x20);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar26;
    }
    else {
      *puVar1 = pauVar26;
      *(undefined8 **)(*pauVar26 + 8) = puVar1;
    }
    *(undefined1 (**) [16])(this + 0x20) = pauVar26;
    uVar23 = String::hash();
    lVar3 = *(long *)(this + 0x10);
    uVar31 = 1;
    if (uVar23 != 0) {
      uVar31 = uVar23;
    }
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar24 = CONCAT44(0,uVar23);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar31 * lVar4;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar24;
    lVar30 = SUB168(auVar9 * auVar17,8);
    lVar29 = *(long *)(this + 8);
    puVar34 = (uint *)(lVar3 + lVar30 * 4);
    iVar28 = SUB164(auVar9 * auVar17,8);
    uVar35 = *puVar34;
    pauVar40 = pauVar26;
    if (uVar35 != 0) {
      uVar37 = 0;
      pauVar39 = pauVar26;
      do {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar35 * lVar4;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar24;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)((uVar23 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar4;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar24;
        uVar36 = SUB164(auVar11 * auVar19,8);
        pauVar40 = pauVar39;
        if (uVar36 < uVar37) {
          *puVar34 = uVar31;
          puVar1 = (undefined8 *)(lVar29 + lVar30 * 8);
          pauVar40 = (undefined1 (*) [16])*puVar1;
          *puVar1 = pauVar39;
          uVar37 = uVar36;
          uVar31 = uVar35;
        }
        uVar37 = uVar37 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar4;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar24;
        lVar30 = SUB168(auVar12 * auVar20,8);
        puVar34 = (uint *)(lVar3 + lVar30 * 4);
        iVar28 = SUB164(auVar12 * auVar20,8);
        uVar35 = *puVar34;
        pauVar39 = pauVar40;
      } while (uVar35 != 0);
    }
    *(undefined1 (**) [16])(lVar29 + lVar30 * 8) = pauVar40;
    *puVar34 = uVar31;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar24 = (ulong)local_74;
    pauVar26 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar24 * 8);
    if (*(long *)(pauVar26[1] + 8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar26[1] + 8),(CowData *)&local_70);
      pauVar26 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar24 * 8);
    }
  }
LAB_0010eaec:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010eaf8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar26[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionMapEditor::_notificationv(int, bool) */

void __thiscall
OpenXRActionMapEditor::_notificationv(OpenXRActionMapEditor *this,int param_1,bool param_2)

{
  if (param_2) {
    if (param_1 == 0xd) {
      _create_action_sets(this);
      _create_interaction_profiles(this);
    }
    else if ((param_1 == 0x2d) || (param_1 == 10)) {
      _notification((int)this);
    }
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  if (param_1 != 0xd) {
    if ((param_1 != 0x2d) && (param_1 != 10)) {
      return;
    }
    _notification((int)this);
    return;
  }
  _create_action_sets(this);
  _create_interaction_profiles(this);
  return;
}



/* Ref<OpenXRInteractionProfile>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall
Ref<OpenXRInteractionProfile>::operator=(Ref<OpenXRInteractionProfile> *this,Variant *param_1)

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
    pOVar3 = (Object *)
             __dynamic_cast(pOVar3,&Object::typeinfo,&OpenXRInteractionProfile::typeinfo,0);
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
LAB_0010f270:
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
  if (lVar9 == 0) goto LAB_0010f270;
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
    goto LAB_0010f2c6;
  }
  if (lVar9 == lVar5) {
LAB_0010f1eb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010f2c6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010f15f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010f1eb;
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
LAB_0010f15f:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0010f3f8) */
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



/* MethodBindT<String>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  code *pcVar3;
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
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_48 == (char *)*(long *)pVVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f6d4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  local_48 = (char *)0x0;
  if (*(long *)(*(long *)param_3 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(*(long *)param_3 + 8));
  }
  (*pcVar3)((long *)((long)param_2 + lVar1),(CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010f6d4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
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
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f8d0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  local_48 = (char *)0x0;
  if (*(long *)*param_3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,*param_3);
  }
  (*pcVar3)((long *)((long)param_2 + lVar1),(CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010f8d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<OpenXRInteractionProfileEditorBase*>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<OpenXRInteractionProfileEditorBase*>::validated_call
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
      goto LAB_0010fc21;
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
                    /* WARNING: Could not recover jumptable at 0x0010faad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10));
    return;
  }
LAB_0010fc21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<OpenXRInteractionProfileEditorBase*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<OpenXRInteractionProfileEditorBase*>::ptrcall
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
      goto LAB_0010fe09;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  plVar1 = *param_3;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fc91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1);
    return;
  }
LAB_0010fe09:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<OpenXRActionSetEditor*>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<OpenXRActionSetEditor*>::validated_call
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
      goto LAB_0010ffe1;
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
                    /* WARNING: Could not recover jumptable at 0x0010fe6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10));
    return;
  }
LAB_0010ffe1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<OpenXRActionSetEditor*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<OpenXRActionSetEditor*>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001101c9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  plVar1 = *param_3;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1);
    return;
  }
LAB_001101c9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<OpenXRActionSetEditor*, String>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<OpenXRActionSetEditor*,String>::validated_call
          (MethodBindTR<OpenXRActionSetEditor*,String> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00110255;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + lVar1) + -1);
  }
  local_48 = (char *)0x0;
  if (*(long *)(*param_2 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(*param_2 + 8));
  }
  (*pcVar3)(param_1 + lVar1,(CowData<char32_t> *)&local_48);
  Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00110255:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<OpenXRActionSetEditor*, String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<OpenXRActionSetEditor*,String>::ptrcall
          (MethodBindTR<OpenXRActionSetEditor*,String> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00110457;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + lVar1) + -1);
  }
  local_48 = (char *)0x0;
  if (*(long *)*param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)*param_2);
  }
  uVar2 = (*pcVar4)(param_1 + lVar1,(CowData<char32_t> *)&local_48);
  *(undefined8 *)param_3 = uVar2;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_00110457:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<OpenXRInteractionProfileEditorBase*, Ref<OpenXRInteractionProfile>
   >::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>>::validated_call
          (MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_70;
  undefined8 local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_60,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_60 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = 0;
      String::parse_latin1
                ((String *)&local_68,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_60,(String *)&local_68,&local_70);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_60,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      goto LAB_001106ed;
    }
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(*param_2 + 0x10));
  local_60 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_60;
  if (pOVar4 != local_60) {
    if (pOVar4 == (Object *)0x0) {
      if (local_60 != (Object *)0x0) {
        local_60 = (Object *)0x0;
LAB_0011069f:
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
      pOVar4 = (Object *)
               __dynamic_cast(pOVar4,&Object::typeinfo,&OpenXRInteractionProfile::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_60 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_60 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0011069f;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)(param_1 + lVar1,(StringName *)&local_60);
  Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
  if (local_60 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_60;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_60);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_001106ed:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<OpenXRInteractionProfileEditorBase*, Ref<OpenXRInteractionProfile>
   >::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>>::ptrcall
          (MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>> *this,
          Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_48;
  undefined8 local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_38 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_38 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_40 = 0;
      String::parse_latin1
                ((String *)&local_40,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_38,(String *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      goto LAB_001109a3;
    }
    if ((StringName::configured != '\0') && (local_38 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  if (((long *)*param_2 == (long *)0x0) || (local_38 = **param_2, local_38 == (Object *)0x0)) {
LAB_0011097b:
    local_38 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0011097b;
  }
  uVar4 = (*pcVar6)(param_1 + lVar1);
  *(undefined8 *)param_3 = uVar4;
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
LAB_001109a3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<OpenXRActionSetEditor*, Ref<OpenXRActionSet> >::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>>::validated_call
          (MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_60;
  Object *local_58;
  Object *local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_50,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_50 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_50 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x0;
      String::parse_latin1
                ((String *)&local_58,"Cannot call method bind \'%s\' on placeholder instance.");
      vformat<StringName>((StringName *)&local_50,(String *)&local_58,&local_60);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_50,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      goto LAB_00110c57;
    }
    if ((StringName::configured != '\0') && (local_50 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*param_2 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
        local_50 = pOVar2;
        goto LAB_00110c0d;
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&OpenXRActionSet::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_50 = pOVar2;
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
LAB_00110c0d:
        Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_50);
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)(param_1 + lVar1,&local_58);
  Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
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
LAB_00110c57:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<OpenXRActionSetEditor*, Ref<OpenXRActionSet> >::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>>::ptrcall
          (MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = 0x35;
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
      goto LAB_00110ef3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar1) + -1);
  }
  if ((long *)*param_2 == (long *)0x0) {
    local_50 = (Object *)0x0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    pOVar2 = **param_2;
    local_50 = (Object *)0x0;
    if (pOVar2 != (Object *)0x0) {
      local_48 = (char *)0x0;
      local_50 = pOVar2;
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') {
        local_50 = (Object *)0x0;
      }
      Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_48);
    }
  }
  uVar4 = (*pcVar6)(param_1 + lVar1);
  *(undefined8 *)param_3 = uVar4;
  if (local_50 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_50;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_50);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00110ef3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<OpenXRActionSetEditor*, String>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<OpenXRActionSetEditor*,String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  Object *pOVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001112a0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001112f0;
LAB_001112e0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001112f0:
        uVar6 = 4;
        goto LAB_00111295;
      }
      if (in_R8D == 1) goto LAB_001112e0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC64;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    pOVar7 = (Object *)
             (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,pOVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_00111295:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001112a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001116a0;
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
      if (in_R8D != 1) goto LAB_001116f0;
LAB_001116e0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001116f0:
        uVar6 = 4;
        goto LAB_00111695;
      }
      if (in_R8D == 1) goto LAB_001116e0;
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
    uVar4 = _LC64;
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
LAB_00111695:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001116a0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<OpenXRInteractionProfileEditorBase*>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<OpenXRInteractionProfileEditorBase*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  Object *pOVar6;
  long *plVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar7 = (long *)plVar11[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar7 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001119e0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar5 = 3;
LAB_001119d5:
    *in_R9 = uVar5;
    in_R9[2] = 1;
    goto LAB_001119e0;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00111a30;
LAB_00111a20:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar9 = *(long *)(pVVar12 + -8);
    if ((int)lVar9 < (int)(in_R8D ^ 1)) {
LAB_00111a30:
      uVar5 = 4;
      goto LAB_001119d5;
    }
    if (in_R8D == 1) goto LAB_00111a20;
    lVar10 = (long)((int)lVar9 + -1);
    if (lVar9 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  if (cVar4 == '\0') {
LAB_00111986:
    uVar3 = _LC62;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
    pOVar8 = Variant::operator_cast_to_Object_(pVVar12);
    if (((pOVar8 == (Object *)0x0) ||
        (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,
                                &OpenXRInteractionProfileEditorBase::typeinfo,0), lVar9 == 0)) &&
       (pOVar6 != (Object *)0x0)) goto LAB_00111986;
  }
  pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
  if (pOVar6 != (Object *)0x0) {
    pOVar6 = (Object *)
             __dynamic_cast(pOVar6,&Object::typeinfo,&OpenXRInteractionProfileEditorBase::typeinfo,0
                           );
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),pOVar6);
LAB_001119e0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<OpenXRActionSetEditor*>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<OpenXRActionSetEditor*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  Object *pOVar6;
  long *plVar7;
  Object *pOVar8;
  long lVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar7 = (long *)plVar11[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar7 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111d90;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar5 = 3;
LAB_00111d85:
    *in_R9 = uVar5;
    in_R9[2] = 1;
    goto LAB_00111d90;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00111de0;
LAB_00111dd0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar9 = *(long *)(pVVar12 + -8);
    if ((int)lVar9 < (int)(in_R8D ^ 1)) {
LAB_00111de0:
      uVar5 = 4;
      goto LAB_00111d85;
    }
    if (in_R8D == 1) goto LAB_00111dd0;
    lVar10 = (long)((int)lVar9 + -1);
    if (lVar9 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x18);
  if (cVar4 == '\0') {
LAB_00111d36:
    uVar3 = _LC62;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar3;
  }
  else {
    pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
    pOVar8 = Variant::operator_cast_to_Object_(pVVar12);
    if (((pOVar8 == (Object *)0x0) ||
        (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,&OpenXRActionSetEditor::typeinfo,0),
        lVar9 == 0)) && (pOVar6 != (Object *)0x0)) goto LAB_00111d36;
  }
  pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
  if (pOVar6 != (Object *)0x0) {
    pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&OpenXRActionSetEditor::typeinfo,0);
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),pOVar6);
LAB_00111d90:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<OpenXRInteractionProfileEditorBase*, Ref<OpenXRInteractionProfile> >::call(Object*,
   Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  Object *pOVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00112168;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001121b0;
LAB_001121a0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001121b0:
        uVar6 = 4;
        goto LAB_0011215d;
      }
      if (in_R8D == 1) goto LAB_001121a0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x18);
    uVar4 = _LC62;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_68 = (char *)0x0;
    Ref<OpenXRInteractionProfile>::operator=((Ref<OpenXRInteractionProfile> *)&local_68,pVVar11);
    pOVar7 = (Object *)
             (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),
                                (Ref<OpenXRInteractionProfile> *)&local_68);
    Variant::Variant((Variant *)local_58,pOVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Ref<OpenXRInteractionProfile>::unref((Ref<OpenXRInteractionProfile> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_0011215d:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00112168:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<OpenXRActionSetEditor*, Ref<OpenXRActionSet> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  Object *pOVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC61,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00112508;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00112550;
LAB_00112540:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00112550:
        uVar6 = 4;
        goto LAB_001124fd;
      }
      if (in_R8D == 1) goto LAB_00112540;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x18);
    uVar4 = _LC62;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    local_68 = (char *)0x0;
    Ref<OpenXRActionSet>::operator=((Ref<OpenXRActionSet> *)&local_68,pVVar11);
    pOVar7 = (Object *)
             (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),
                                (Ref<OpenXRActionSet> *)&local_68);
    Variant::Variant((Variant *)local_58,pOVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Ref<OpenXRActionSet>::unref((Ref<OpenXRActionSet> *)&local_68);
  }
  else {
    uVar6 = 3;
LAB_001124fd:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00112508:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

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
    local_78 = &_LC10;
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



/* MethodBindTS<String const&, String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTS<String_const&,String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String>(int param_1,int *param_2,PropertyInfo *param_3)

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
    local_78 = &_LC10;
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



/* MethodBindTR<OpenXRActionSetEditor*, String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<OpenXRActionSetEditor*,String>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  ulong local_60;
  char *local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_58 = (char *)0x0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 6;
    local_60 = local_60 & 0xffffffff00000000;
    local_50 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String>(0,(int *)&local_60,(PropertyInfo *)&local_58);
    uVar2 = local_50._0_8_;
    uVar3 = local_50._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_50._8_8_;
    local_50 = auVar1 << 0x40;
    *puVar4 = local_58._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_40;
    *(undefined8 *)(puVar4 + 8) = local_38;
    puVar4[10] = local_30;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    local_60 = 0;
    local_50._8_8_ = local_50._0_8_;
    local_50._0_8_ = 0x15;
    local_58 = "OpenXRActionSetEditor";
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    *puVar4 = 0x18;
    *(undefined8 *)(puVar4 + 2) = 0;
    StringName::StringName((StringName *)(puVar4 + 4),(StringName *)&local_58);
    bVar5 = StringName::configured != '\0';
    puVar4[6] = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    puVar4[10] = 6;
    if ((bVar5) && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<String>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  CowData<char32_t> *this;
  long lVar5;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pCVar2 = *(CowData<char32_t> **)(param_1 + 0x58);
      if (pCVar2 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this + 0x20);
          CowData<char32_t>::_unref(this + 0x10);
          CowData<char32_t>::_unref(this + 8);
          CowData<char32_t>::_unref(this);
          this = this + 0x28;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                    (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          pvVar5 = *(void **)((long)pvVar6 + 0x20);
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x44) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x40) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar4 = 0;
                do {
                  piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar4);
                  if (*piVar3 != 0) {
                    *piVar3 = 0;
                    memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                              (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_00112fd9;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_00112fd9:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* OpenXRActionMapEditor::interaction_profile_editors */

void OpenXRActionMapEditor::_GLOBAL__sub_I_interaction_profile_editors(void)

{
  undefined8 uVar1;
  
  uVar1 = _LC138;
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper._56_8_ = _LC138;
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper = '\x01';
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  if (OptionButton::base_property_helper == '\0') {
    OptionButton::base_property_helper._56_8_ = uVar1;
    OptionButton::base_property_helper._64_8_ = 0;
    OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper = '\x01';
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
                 &__dso_handle);
  }
  if (EditorHelpBit::doc_class_cache == '\0') {
    EditorHelpBit::doc_class_cache._40_8_ = uVar1;
    EditorHelpBit::doc_class_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache = '\x01';
    __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
                 ::~HashMap,EditorHelpBit::doc_class_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_enum_cache == '\0') {
    EditorHelpBit::doc_enum_cache._40_8_ = uVar1;
    EditorHelpBit::doc_enum_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache = '\x01';
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_enum_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_constant_cache == '\0') {
    EditorHelpBit::doc_constant_cache._40_8_ = uVar1;
    EditorHelpBit::doc_constant_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache = '\x01';
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_constant_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_property_cache == '\0') {
    EditorHelpBit::doc_property_cache._40_8_ = uVar1;
    EditorHelpBit::doc_property_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache = '\x01';
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_property_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_theme_item_cache == '\0') {
    EditorHelpBit::doc_theme_item_cache._40_8_ = uVar1;
    EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache = '\x01';
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_theme_item_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_method_cache == '\0') {
    EditorHelpBit::doc_method_cache._40_8_ = uVar1;
    EditorHelpBit::doc_method_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache = '\x01';
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_method_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_signal_cache == '\0') {
    EditorHelpBit::doc_signal_cache._40_8_ = uVar1;
    EditorHelpBit::doc_signal_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache = '\x01';
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_signal_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_annotation_cache == '\0') {
    EditorHelpBit::doc_annotation_cache._40_8_ = uVar1;
    EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache = '\x01';
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
  }
  if (ItemList::base_property_helper == '\0') {
    ItemList::base_property_helper._56_8_ = uVar1;
    ItemList::base_property_helper._64_8_ = 0;
    ItemList::base_property_helper._0_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._24_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._40_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper = '\x01';
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,ItemList::base_property_helper,
                 &__dso_handle);
  }
  if (TabBar::base_property_helper == '\0') {
    TabBar::base_property_helper._56_8_ = uVar1;
    TabBar::base_property_helper._64_8_ = 0;
    TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper = '\x01';
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle)
    ;
  }
  if (EditorFileDialog::base_property_helper == '\0') {
    EditorFileDialog::base_property_helper._56_8_ = uVar1;
    EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper = '\x01';
    EditorFileDialog::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
                 &__dso_handle);
  }
  interaction_profile_editors._40_8_ = uVar1;
  interaction_profile_editors._8_16_ = (undefined1  [16])0x0;
  interaction_profile_editors._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
               ::~HashMap,interaction_profile_editors,&__dso_handle);
  binding_modifier_editors._40_8_ = uVar1;
  binding_modifier_editors._8_16_ = (undefined1  [16])0x0;
  binding_modifier_editors._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
               ::~HashMap,binding_modifier_editors,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

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
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::~HashMap() */

void __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::~HashMap(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           *this)

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
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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
/* MethodBindTS<String const&, String const&>::~MethodBindTS() */

void __thiscall
MethodBindTS<String_const&,String_const&>::~MethodBindTS
          (MethodBindTS<String_const&,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<OpenXRInteractionProfileEditorBase*>::~MethodBindT() */

void __thiscall
MethodBindT<OpenXRInteractionProfileEditorBase*>::~MethodBindT
          (MethodBindT<OpenXRInteractionProfileEditorBase*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<OpenXRActionSetEditor*>::~MethodBindT() */

void __thiscall
MethodBindT<OpenXRActionSetEditor*>::~MethodBindT(MethodBindT<OpenXRActionSetEditor*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String>::~MethodBindT() */

void __thiscall MethodBindT<String>::~MethodBindT(MethodBindT<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<OpenXRActionSetEditor*, String>::~MethodBindTR() */

void __thiscall
MethodBindTR<OpenXRActionSetEditor*,String>::~MethodBindTR
          (MethodBindTR<OpenXRActionSetEditor*,String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<OpenXRInteractionProfileEditorBase*, Ref<OpenXRInteractionProfile>
   >::~MethodBindTR() */

void __thiscall
MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>>::~MethodBindTR
          (MethodBindTR<OpenXRInteractionProfileEditorBase*,Ref<OpenXRInteractionProfile>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<OpenXRActionSetEditor*, Ref<OpenXRActionSet> >::~MethodBindTR() */

void __thiscall
MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>>::~MethodBindTR
          (MethodBindTR<OpenXRActionSetEditor*,Ref<OpenXRActionSet>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, Object*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, Ref<OpenXRAction>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,Ref<OpenXRAction>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,Ref<OpenXRAction>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OpenXRActionMapEditor, void,
   OpenXRActionSetEditor*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,OpenXRActionSetEditor*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,OpenXRActionSetEditor*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OpenXRActionMapEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OpenXRActionMapEditor, void, String>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<OpenXRActionMapEditor,void,String>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OpenXRActionMapEditor,void,String> *this)

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


// This is taking way too long.