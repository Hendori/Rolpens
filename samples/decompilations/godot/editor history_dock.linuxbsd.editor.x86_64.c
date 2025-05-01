
/* HistoryDock::seek_history(int) */

void __thiscall HistoryDock::seek_history(HistoryDock *this,int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  cVar1 = BaseButton::is_pressed();
  cVar2 = BaseButton::is_pressed();
  if ((cVar1 != '\0') || (cVar2 != '\0')) {
    EditorData::get_current_edited_scene_history_id();
    iVar3 = *(int *)(this + 0xa34);
    if (iVar3 < param_1) {
      uVar4 = *(undefined8 *)(this + 0xa10);
      if (cVar1 == '\0') {
        while( true ) {
          EditorUndoRedoManager::undo_history((int)uVar4);
          iVar3 = *(int *)(this + 0xa34);
          if (param_1 <= iVar3) break;
          uVar4 = *(undefined8 *)(this + 0xa10);
        }
      }
      else if (cVar2 == '\0') {
LAB_001000f7:
        while( true ) {
          EditorUndoRedoManager::undo_history((int)uVar4);
          iVar3 = *(int *)(this + 0xa34);
          if (param_1 <= iVar3) break;
          uVar4 = *(undefined8 *)(this + 0xa10);
        }
      }
      else {
        EditorUndoRedoManager::undo();
        iVar3 = *(int *)(this + 0xa34);
        while (iVar3 < param_1) {
          uVar4 = *(undefined8 *)(this + 0xa10);
          if (cVar2 == '\0') goto LAB_001000f7;
          EditorUndoRedoManager::undo();
          iVar3 = *(int *)(this + 0xa34);
        }
      }
    }
    if (param_1 < iVar3) {
      uVar4 = *(undefined8 *)(this + 0xa10);
      if (cVar1 == '\0') {
        while (EditorUndoRedoManager::redo_history((int)uVar4), param_1 < *(int *)(this + 0xa34)) {
          uVar4 = *(undefined8 *)(this + 0xa10);
        }
        return;
      }
      if (cVar2 != '\0') {
        do {
          EditorUndoRedoManager::redo();
        } while (param_1 < *(int *)(this + 0xa34));
        return;
      }
      while (EditorUndoRedoManager::redo_history((int)uVar4), param_1 < *(int *)(this + 0xa34)) {
        uVar4 = *(undefined8 *)(this + 0xa10);
      }
      return;
    }
  }
  return;
}



/* HistoryDock::refresh_version() */

void __thiscall HistoryDock::refresh_version(HistoryDock *this)

{
  undefined8 uVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  double dVar9;
  double dVar10;
  
  cVar3 = BaseButton::is_pressed();
  cVar4 = BaseButton::is_pressed();
  if ((cVar3 == '\0') && (cVar4 == '\0')) {
    *(undefined4 *)(this + 0xa34) = 0;
    ItemList::set_current((int)*(undefined8 *)(this + 0xa18));
    return;
  }
  uVar1 = *(undefined8 *)(this + 0xa10);
  EditorData::get_current_edited_scene_history_id();
  lVar5 = EditorUndoRedoManager::get_or_create_history((int)uVar1);
  lVar6 = EditorUndoRedoManager::get_or_create_history((int)*(undefined8 *)(this + 0xa10));
  if (cVar3 == '\0') {
    plVar2 = *(long **)(lVar6 + 0x18);
    if (plVar2 == (long *)0x0) {
      plVar8 = (long *)0x0;
      dVar10 = 0.0;
    }
    else {
      plVar8 = (long *)(ulong)*(uint *)(plVar2 + 2);
      dVar10 = 0.0;
      if (*(uint *)(plVar2 + 2) != 0) {
        plVar8 = (long *)0x0;
        dVar10 = *(double *)(*plVar2 + 8);
        if (*(double *)(*plVar2 + 8) <= 0.0) {
          dVar10 = 0.0;
        }
      }
    }
  }
  else {
    plVar2 = *(long **)(lVar5 + 0x18);
    dVar9 = 0.0;
    if ((plVar2 == (long *)0x0) || ((int)plVar2[2] == 0)) {
      dVar10 = 0.0;
      if (cVar4 == '\0') goto LAB_00100261;
LAB_001002f0:
      plVar2 = *(long **)(lVar6 + 0x18);
      if ((plVar2 == (long *)0x0) || ((int)plVar2[2] == 0)) {
        plVar8 = *(long **)(lVar5 + 0x20);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)0x0;
          dVar10 = dVar9;
          goto LAB_0010029d;
        }
        goto LAB_0010026a;
      }
      plVar8 = *(long **)(lVar5 + 0x20);
      dVar10 = *(double *)(*plVar2 + 8);
      if (dVar9 < dVar10) {
        dVar9 = dVar10;
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)0x0;
          goto LAB_0010029d;
        }
        goto LAB_0010026a;
      }
      if (plVar8 != (long *)0x0) goto LAB_0010026a;
      plVar8 = (long *)0x0;
    }
    else {
      dVar9 = *(double *)(*plVar2 + 8);
      dVar10 = dVar9;
      if (cVar4 != '\0') goto LAB_001002f0;
LAB_00100261:
      plVar8 = *(long **)(lVar5 + 0x20);
      dVar9 = dVar10;
      if (plVar8 == (long *)0x0) goto LAB_001002d0;
LAB_0010026a:
      iVar7 = 0;
      for (lVar5 = *plVar8;
          (lVar5 != 0 && (*(double *)(lVar5 + 8) <= dVar9 && dVar9 != *(double *)(lVar5 + 8)));
          lVar5 = *(long *)(lVar5 + 0x20)) {
        iVar7 = iVar7 + 1;
      }
      plVar8 = (long *)(ulong)(uint)((int)plVar8[2] - iVar7);
    }
    dVar10 = dVar9;
    if (cVar4 == '\0') goto LAB_001002d0;
  }
LAB_0010029d:
  plVar2 = *(long **)(lVar6 + 0x20);
  if (plVar2 != (long *)0x0) {
    iVar7 = 0;
    for (lVar5 = *plVar2;
        (lVar5 != 0 && (*(double *)(lVar5 + 8) <= dVar10 && dVar10 != *(double *)(lVar5 + 8)));
        lVar5 = *(long *)(lVar5 + 0x20)) {
      iVar7 = iVar7 + 1;
    }
    plVar8 = (long *)(ulong)(uint)(((int)plVar8 + (int)plVar2[2]) - iVar7);
  }
LAB_001002d0:
  *(int *)(this + 0xa34) = (int)plVar8;
  ItemList::set_current((int)*(undefined8 *)(this + 0xa18));
  return;
}



/* HistoryDock::on_version_changed() */

void __thiscall HistoryDock::on_version_changed(HistoryDock *this)

{
  char cVar1;
  
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 == '\0') {
    this[0xa30] = (HistoryDock)0x1;
    return;
  }
  refresh_version(this);
  return;
}



/* HistoryDock::_save_layout_to_config(Ref<ConfigFile>, String const&) const */

void __thiscall
HistoryDock::_save_layout_to_config(undefined8 param_1,undefined8 *param_2,String *param_3)

{
  String *pSVar1;
  bool bVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pSVar1 = (String *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = (bool)BaseButton::is_pressed();
  Variant::Variant((Variant *)local_58,bVar2);
  local_68 = "dock_history_include_scene";
  local_70 = 0;
  local_60 = 0x1a;
  String::parse_latin1((StrRange *)&local_70);
  ConfigFile::set_value(pSVar1,param_3,(Variant *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar1 = (String *)*param_2;
  bVar2 = (bool)BaseButton::is_pressed();
  Variant::Variant((Variant *)local_58,bVar2);
  local_68 = "dock_history_include_global";
  local_70 = 0;
  local_60 = 0x1b;
  String::parse_latin1((StrRange *)&local_70);
  ConfigFile::set_value(pSVar1,param_3,(Variant *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HistoryDock::HistoryDock() */

void __thiscall HistoryDock::HistoryDock(HistoryDock *this)

{
  code *pcVar1;
  String *pSVar2;
  undefined8 uVar3;
  long *plVar4;
  BoxContainer *this_00;
  CheckBox *pCVar5;
  ItemList *this_01;
  CallableCustom *this_02;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68 [2];
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  this[0xa0c] = (HistoryDock)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00109cb0;
  *(undefined8 *)(this + 0xa28) = 0;
  this[0xa30] = (HistoryDock)0x1;
  *(undefined4 *)(this + 0xa34) = 0;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  local_58 = "History";
  local_68[0] = 0;
  local_50 = 7;
  String::parse_latin1((StrRange *)local_68);
  Node::set_name((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar4 = (long *)EditorUndoRedoManager::get_singleton();
  *(long **)(this + 0xa10) = plVar4;
  pcVar1 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<HistoryDock>
            ((HistoryDock *)&local_58,(char *)this,(_func_void *)"&HistoryDock::on_history_changed")
  ;
  StringName::StringName((StringName *)local_68,"history_changed",false);
  (*pcVar1)(plVar4,(StrRange *)local_68,(HistoryDock *)&local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  plVar4 = *(long **)(this + 0xa10);
  pcVar1 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<HistoryDock>
            ((HistoryDock *)&local_58,(char *)this,(_func_void *)"&HistoryDock::on_version_changed")
  ;
  StringName::StringName((StringName *)local_68,"version_changed",false);
  (*pcVar1)(plVar4,(StrRange *)local_68,(HistoryDock *)&local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00109938;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  pCVar5 = (CheckBox *)operator_new(0xc60,"");
  local_58 = (char *)0x0;
  CheckBox::CheckBox(pCVar5,(String *)&local_58);
  postinitialize_handler((Object *)pCVar5);
  *(CheckBox **)(this + 0xa20) = pCVar5;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa20),0,0);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa20),0));
  local_58 = "";
  local_68[0] = 0;
  pSVar2 = *(String **)(this + 0xa20);
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = "Scene";
  local_70 = 0;
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  Button::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa20),3);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xa20),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa20),0));
  plVar4 = *(long **)(this + 0xa20);
  pcVar1 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<HistoryDock>
            ((HistoryDock *)&local_58,(char *)this,(_func_void *)"&HistoryDock::refresh_history");
  iVar6 = (int)(StrRange *)local_68;
  Callable::unbind(iVar6);
  (*pcVar1)(plVar4,SceneStringNames::singleton + 0x248,(StrRange *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  pCVar5 = (CheckBox *)operator_new(0xc60,"");
  local_58 = (char *)0x0;
  CheckBox::CheckBox(pCVar5,(String *)&local_58);
  postinitialize_handler((Object *)pCVar5);
  *(CheckBox **)(this + 0xa28) = pCVar5;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa28),0,0);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa28),0));
  local_58 = "";
  local_68[0] = 0;
  pSVar2 = *(String **)(this + 0xa28);
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = "Global";
  local_70 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  Button::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa28),3);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xa28),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa28),0));
  plVar4 = *(long **)(this + 0xa28);
  pcVar1 = *(code **)(*plVar4 + 0x108);
  create_custom_callable_function_pointer<HistoryDock>
            ((HistoryDock *)&local_58,(char *)this,(_func_void *)"&HistoryDock::refresh_history");
  Callable::unbind(iVar6);
  (*pcVar1)(plVar4,SceneStringNames::singleton + 0x248,(StrRange *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  this_01 = (ItemList *)operator_new(0xb80,"");
  ItemList::ItemList(this_01);
  postinitialize_handler((Object *)this_01);
  *(ItemList **)(this + 0xa18) = this_01;
  Node::set_auto_translate_mode(this_01,2);
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa18),3);
  plVar4 = *(long **)(this + 0xa18);
  pcVar1 = *(code **)(*plVar4 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined **)(this_02 + 0x20) = &_LC6;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_02 = &PTR_hash_0010a0b8;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar3;
  *(undefined8 *)(this_02 + 0x38) = 0x100000;
  *(HistoryDock **)(this_02 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "HistoryDock::seek_history";
  Callable::Callable((Callable *)&local_58,this_02);
  (*pcVar1)(plVar4,SceneStringNames::singleton + 0x260,(HistoryDock *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
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



/* HistoryDock::_bind_methods() */

void HistoryDock::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_78 [2];
  long *local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_78,(char ***)"_save_layout_to_config",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<HistoryDock,Ref<ConfigFile>,String_const&>(_save_layout_to_config);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"_load_layout_from_config",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<HistoryDock,Ref<ConfigFile>,String_const&>(_load_layout_from_config);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
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
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<EditorUndoRedoManager::Action>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorUndoRedoManager::Action>::_copy_on_write(CowData<EditorUndoRedoManager::Action> *this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *(long *)(*(long *)this + -8);
  uVar8 = 0x10;
  if (lVar3 * 0x20 != 0) {
    uVar8 = lVar3 * 0x20 - 1;
    uVar8 = uVar8 | uVar8 >> 1;
    uVar8 = uVar8 | uVar8 >> 2;
    uVar8 = uVar8 | uVar8 >> 4;
    uVar8 = uVar8 | uVar8 >> 8;
    uVar8 = uVar8 | uVar8 >> 0x10;
    uVar8 = (uVar8 | uVar8 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar8,false);
  if (puVar6 != (undefined8 *)0x0) {
    lVar10 = 0;
    *puVar6 = 1;
    puVar6[1] = lVar3;
    puVar9 = puVar6 + 2;
    if (lVar3 != 0) {
      do {
        puVar7 = (undefined4 *)(lVar10 * 0x20 + *(long *)this);
        uVar2 = *puVar7;
        uVar1 = *(undefined8 *)(puVar7 + 2);
        puVar9[2] = 0;
        lVar4 = *(long *)(puVar7 + 4);
        *(undefined4 *)puVar9 = uVar2;
        puVar9[1] = uVar1;
        if (lVar4 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 2),(CowData *)(puVar7 + 4));
        }
        lVar10 = lVar10 + 1;
        *(undefined4 *)(puVar9 + 3) = puVar7[6];
        *(undefined1 *)((long)puVar9 + 0x1c) = *(undefined1 *)(puVar7 + 7);
        puVar9 = puVar9 + 4;
      } while (lVar3 != lVar10);
    }
    _unref();
    *(undefined8 **)this = puVar6 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* HistoryDock::refresh_history() */

void HistoryDock::refresh_history(void)

{
  int *piVar1;
  String *pSVar2;
  undefined8 uVar3;
  code *pcVar4;
  Object *pOVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  StringName *in_RDI;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  int *piVar18;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  Object *local_70;
  Object *local_68;
  int *local_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::clear();
  cVar6 = BaseButton::is_pressed();
  cVar7 = BaseButton::is_pressed();
  if ((cVar6 == '\0') && (cVar7 == '\0')) {
    pSVar2 = *(String **)(in_RDI + 0xa18);
    local_68 = (Object *)0x0;
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"");
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"The Beginning");
    TTR((String *)&local_70,(String *)&local_80);
    ItemList::add_item(pSVar2,(String *)&local_70,SUB81(&local_68,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((local_68 != (Object *)0x0) &&
       ((cVar6 = RefCounted::unreference(), pOVar5 = local_68, cVar6 != '\0' &&
        (cVar6 = predelete_handler(local_68), cVar6 != '\0')))) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    goto LAB_00101178;
  }
  uVar3 = *(undefined8 *)(in_RDI + 0xa10);
  EditorData::get_current_edited_scene_history_id();
  lVar9 = EditorUndoRedoManager::get_or_create_history((int)uVar3);
  lVar10 = EditorUndoRedoManager::get_or_create_history((int)*(undefined8 *)(in_RDI + 0xa10));
  local_60 = (int *)0x0;
  if (cVar6 == '\0') {
    iVar14 = 0;
LAB_001011f3:
    iVar8 = 0;
    if (*(long *)(lVar10 + 0x20) != 0) {
      iVar8 = *(int *)(*(long *)(lVar10 + 0x20) + 0x10);
    }
    if (*(long *)(lVar10 + 0x18) != 0) {
      iVar8 = iVar8 + *(int *)(*(long *)(lVar10 + 0x18) + 0x10);
    }
    lVar17 = (long)(iVar14 + iVar8);
    if (lVar17 < 0) {
LAB_001018c0:
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    }
    else if (lVar17 != 0) {
LAB_0010122b:
      CowData<EditorUndoRedoManager::Action>::_copy_on_write
                ((CowData<EditorUndoRedoManager::Action> *)&local_60);
      uVar15 = lVar17 * 0x20 - 1;
      uVar15 = uVar15 | uVar15 >> 1;
      uVar15 = uVar15 | uVar15 >> 2;
      uVar15 = uVar15 | uVar15 >> 4;
      uVar15 = uVar15 | uVar15 >> 8;
      uVar15 = uVar15 | uVar15 >> 0x10;
      puVar11 = (undefined8 *)Memory::alloc_static((uVar15 | uVar15 >> 0x20) + 0x11,false);
      if (puVar11 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      else {
        local_60 = (int *)(puVar11 + 2);
        *puVar11 = 1;
        piVar13 = local_60;
        do {
          *piVar13 = -99;
          piVar16 = piVar13 + 8;
          piVar13[2] = 0;
          piVar13[3] = 0;
          piVar13[4] = 0;
          piVar13[5] = 0;
          piVar13[6] = 0;
          *(undefined1 *)(piVar13 + 7) = 0;
          piVar13 = piVar16;
        } while (piVar16 != (int *)(puVar11 + lVar17 * 4 + 2));
        puVar11[1] = lVar17;
      }
    }
    iVar14 = 0;
    if (cVar6 != '\0') {
      puVar11 = *(undefined8 **)(lVar9 + 0x20);
      goto LAB_00101421;
    }
LAB_001012e9:
    if ((*(undefined8 **)(lVar10 + 0x20) != (undefined8 *)0x0) &&
       (piVar13 = (int *)**(undefined8 **)(lVar10 + 0x20), piVar13 != (int *)0x0)) {
      lVar9 = (long)iVar14;
      piVar16 = local_60;
      do {
        lVar12 = lVar9;
        if (piVar16 == (int *)0x0) goto LAB_0010138f;
        lVar17 = *(long *)(piVar16 + -2);
        if (lVar17 <= lVar12) goto LAB_001013b0;
        CowData<EditorUndoRedoManager::Action>::_copy_on_write
                  ((CowData<EditorUndoRedoManager::Action> *)&local_60);
        piVar16 = local_60;
        uVar3 = *(undefined8 *)(piVar13 + 2);
        piVar18 = local_60 + lVar12 * 8;
        *piVar18 = *piVar13;
        *(undefined8 *)(piVar18 + 2) = uVar3;
        CowData<char32_t>::_ref((CowData<char32_t> *)(piVar18 + 4),(CowData *)(piVar13 + 4));
        piVar18[6] = piVar13[6];
        piVar1 = piVar13 + 7;
        piVar13 = *(int **)(piVar13 + 8);
        *(char *)(piVar18 + 7) = (char)*piVar1;
        lVar9 = lVar12 + 1;
      } while (piVar13 != (int *)0x0);
      iVar14 = (int)lVar12 + 1;
    }
    if ((*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) &&
       (piVar13 = (int *)**(undefined8 **)(lVar10 + 0x18), piVar13 != (int *)0x0)) {
      lVar12 = (long)iVar14;
      piVar16 = local_60;
      do {
        if (piVar16 == (int *)0x0) {
          lVar17 = 0;
          goto LAB_001013b0;
        }
        lVar17 = *(long *)(piVar16 + -2);
        if (lVar17 <= lVar12) goto LAB_001013b0;
        CowData<EditorUndoRedoManager::Action>::_copy_on_write
                  ((CowData<EditorUndoRedoManager::Action> *)&local_60);
        piVar16 = local_60;
        uVar3 = *(undefined8 *)(piVar13 + 2);
        piVar18 = local_60 + lVar12 * 8;
        *piVar18 = *piVar13;
        *(undefined8 *)(piVar18 + 2) = uVar3;
        CowData<char32_t>::_ref((CowData<char32_t> *)(piVar18 + 4),(CowData *)(piVar13 + 4));
        piVar18[6] = piVar13[6];
        piVar1 = piVar13 + 7;
        piVar13 = *(int **)(piVar13 + 8);
        *(char *)(piVar18 + 7) = (char)*piVar1;
        lVar12 = lVar12 + 1;
      } while (piVar13 != (int *)0x0);
    }
  }
  else {
    puVar11 = *(undefined8 **)(lVar9 + 0x20);
    iVar14 = 0;
    if (puVar11 != (undefined8 *)0x0) {
      iVar14 = *(int *)(puVar11 + 2);
    }
    if (*(long *)(lVar9 + 0x18) != 0) {
      iVar14 = iVar14 + *(int *)(*(long *)(lVar9 + 0x18) + 0x10);
    }
    if (cVar7 != '\0') goto LAB_001011f3;
    lVar17 = (long)iVar14;
    if (lVar17 < 0) goto LAB_001018c0;
    if (lVar17 != 0) goto LAB_0010122b;
LAB_00101421:
    if ((puVar11 == (undefined8 *)0x0) || (piVar13 = (int *)*puVar11, piVar13 == (int *)0x0)) {
      iVar14 = 0;
    }
    else {
      lVar17 = 0;
      piVar16 = local_60;
      do {
        lVar12 = lVar17;
        if (piVar16 == (int *)0x0) goto LAB_0010138f;
        lVar17 = *(long *)(piVar16 + -2);
        if (lVar17 <= lVar12) goto LAB_001013b0;
        CowData<EditorUndoRedoManager::Action>::_copy_on_write
                  ((CowData<EditorUndoRedoManager::Action> *)&local_60);
        piVar16 = local_60;
        uVar3 = *(undefined8 *)(piVar13 + 2);
        piVar18 = local_60 + lVar12 * 8;
        *piVar18 = *piVar13;
        *(undefined8 *)(piVar18 + 2) = uVar3;
        CowData<char32_t>::_ref((CowData<char32_t> *)(piVar18 + 4),(CowData *)(piVar13 + 4));
        piVar18[6] = piVar13[6];
        piVar1 = piVar13 + 7;
        piVar13 = *(int **)(piVar13 + 8);
        *(char *)(piVar18 + 7) = (char)*piVar1;
        lVar17 = lVar12 + 1;
      } while (piVar13 != (int *)0x0);
      iVar14 = (int)lVar12 + 1;
    }
    if ((*(undefined8 **)(lVar9 + 0x18) != (undefined8 *)0x0) &&
       (piVar13 = (int *)**(undefined8 **)(lVar9 + 0x18), piVar13 != (int *)0x0)) {
      lVar9 = (long)iVar14;
      piVar16 = local_60;
      do {
        lVar12 = lVar9;
        if (piVar16 == (int *)0x0) goto LAB_0010138f;
        lVar17 = *(long *)(piVar16 + -2);
        if (lVar17 <= lVar12) goto LAB_001013b0;
        CowData<EditorUndoRedoManager::Action>::_copy_on_write
                  ((CowData<EditorUndoRedoManager::Action> *)&local_60);
        piVar16 = local_60;
        uVar3 = *(undefined8 *)(piVar13 + 2);
        piVar1 = local_60 + lVar12 * 8;
        *piVar1 = *piVar13;
        *(undefined8 *)(piVar1 + 2) = uVar3;
        CowData<char32_t>::_ref((CowData<char32_t> *)(piVar1 + 4),(CowData *)(piVar13 + 4));
        piVar1[6] = piVar13[6];
        piVar18 = piVar13 + 7;
        piVar13 = *(int **)(piVar13 + 8);
        *(char *)(piVar1 + 7) = (char)*piVar18;
        lVar9 = lVar12 + 1;
      } while (piVar13 != (int *)0x0);
      iVar14 = (int)lVar12 + 1;
    }
    if (cVar7 != '\0') goto LAB_001012e9;
  }
  Vector<EditorUndoRedoManager::Action>::sort_custom<SortActionsByTimestamp,true>
            ((Vector<EditorUndoRedoManager::Action> *)&local_68);
  CowData<EditorUndoRedoManager::Action>::_copy_on_write
            ((CowData<EditorUndoRedoManager::Action> *)&local_60);
  piVar13 = local_60;
  CowData<EditorUndoRedoManager::Action>::_copy_on_write
            ((CowData<EditorUndoRedoManager::Action> *)&local_60);
  piVar16 = local_60;
  if (local_60 != (int *)0x0) {
    piVar16 = local_60 + *(long *)(local_60 + -2) * 8;
  }
  for (; piVar13 != piVar16; piVar13 = piVar13 + 8) {
    while( true ) {
      local_70 = (Object *)0x0;
      ItemList::add_item(*(String **)(in_RDI + 0xa18),(Ref *)(piVar13 + 4),SUB81(&local_70,0));
      if (((local_70 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar5 = local_70, cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
      if (*piVar13 != 0) break;
      uVar3 = *(undefined8 *)(in_RDI + 0xa18);
      if ((refresh_history()::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar14 = __cxa_guard_acquire(&refresh_history()::{lambda()#1}::operator()()::sname),
         iVar14 != 0)) {
        _scs_create((char *)&refresh_history()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&refresh_history()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&refresh_history()::{lambda()#1}::operator()()::sname);
      }
      piVar13 = piVar13 + 8;
      local_58 = Control::get_theme_color
                           (in_RDI,(StringName *)
                                   &refresh_history()::{lambda()#1}::operator()()::sname);
      ItemList::set_item_custom_fg_color((int)uVar3,(Color *)0xffffffff);
      if (piVar16 == piVar13) goto LAB_00101681;
    }
  }
LAB_00101681:
  pSVar2 = *(String **)(in_RDI + 0xa18);
  local_70 = (Object *)0x0;
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"");
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"The Beginning");
  TTR((String *)&local_78,(String *)&local_88);
  ItemList::add_item(pSVar2,(String *)&local_78,SUB81(&local_70,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (((local_70 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar5 = local_70, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  refresh_version((HistoryDock *)in_RDI);
  CowData<EditorUndoRedoManager::Action>::_unref();
LAB_00101178:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010138f:
  lVar17 = 0;
LAB_001013b0:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar12,lVar17,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* HistoryDock::on_history_changed() */

void __thiscall HistoryDock::on_history_changed(HistoryDock *this)

{
  char cVar1;
  
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 == '\0') {
    this[0xa30] = (HistoryDock)0x1;
    return;
  }
  refresh_history();
  return;
}



/* HistoryDock::_load_layout_from_config(Ref<ConfigFile>, String const&) */

void __thiscall
HistoryDock::_load_layout_from_config(HistoryDock *this,undefined8 *param_2,Variant *param_3)

{
  String *pSVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  pSVar1 = (String *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined8 *)(this + 0xa20);
  Variant::Variant((Variant *)local_78,true);
  local_88 = "dock_history_include_scene";
  local_90 = 0;
  local_80 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  ConfigFile::get_value((String *)local_58,pSVar1,param_3);
  Variant::operator_cast_to_bool((Variant *)local_58);
  BaseButton::set_pressed_no_signal(SUB81(uVar2,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar2 = *(undefined8 *)(this + 0xa28);
  pSVar1 = (String *)*param_2;
  Variant::Variant((Variant *)local_78,true);
  local_88 = "dock_history_include_global";
  local_90 = 0;
  local_80 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  ConfigFile::get_value((String *)local_58,pSVar1,param_3);
  Variant::operator_cast_to_bool((Variant *)local_58);
  BaseButton::set_pressed_no_signal(SUB81(uVar2,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    refresh_history();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HistoryDock::_notification(int) */

void __thiscall HistoryDock::_notification(HistoryDock *this,int param_1)

{
  code *pcVar1;
  long *plVar2;
  char cVar3;
  long in_FS_OFFSET;
  long local_50;
  HistoryDock local_48 [24];
  long local_30;
  
  plVar2 = EditorNode::singleton;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0xd) {
    pcVar1 = *(code **)(*EditorNode::singleton + 0x108);
    create_custom_callable_function_pointer<HistoryDock>
              (local_48,(char *)this,(_func_void *)"&HistoryDock::on_history_changed");
    StringName::StringName((StringName *)&local_50,"scene_changed",false);
    (*pcVar1)(plVar2,(StringName *)&local_50,local_48,0);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_48);
  }
  else if (param_1 == 0x1f) {
    cVar3 = CanvasItem::is_visible_in_tree();
    if ((cVar3 != '\0') && (this[0xa30] != (HistoryDock)0x0)) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        refresh_history();
        return;
      }
      goto LAB_00101c9d;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101c9d:
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



/* CallableCustomMethodPointer<HistoryDock, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<HistoryDock,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<HistoryDock,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<HistoryDock, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<HistoryDock,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<HistoryDock,void> *this)

{
  return;
}



/* MethodBindT<Ref<ConfigFile>, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Ref<ConfigFile>,String_const&>::_gen_argument_type
          (MethodBindT<Ref<ConfigFile>,String_const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x14U) + 4;
  }
  return cVar1;
}



/* MethodBindT<Ref<ConfigFile>, String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<ConfigFile>,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTC<Ref<ConfigFile>, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTC<Ref<ConfigFile>,String_const&>::_gen_argument_type
          (MethodBindTC<Ref<ConfigFile>,String_const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 0x14U) + 4;
  }
  return cVar1;
}



/* MethodBindTC<Ref<ConfigFile>, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTC<Ref<ConfigFile>,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<HistoryDock, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<HistoryDock,void,int>::get_argument_count
          (CallableCustomMethodPointer<HistoryDock,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<HistoryDock, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<HistoryDock,void>::get_argument_count
          (CallableCustomMethodPointer<HistoryDock,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<HistoryDock, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<HistoryDock,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<HistoryDock,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<HistoryDock, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<HistoryDock,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<HistoryDock,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindTC<Ref<ConfigFile>, String const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<Ref<ConfigFile>,String_const&>::~MethodBindTC
          (MethodBindTC<Ref<ConfigFile>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a148;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTC<Ref<ConfigFile>, String const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<Ref<ConfigFile>,String_const&>::~MethodBindTC
          (MethodBindTC<Ref<ConfigFile>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a148;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<ConfigFile>, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<ConfigFile>,String_const&>::~MethodBindT
          (MethodBindT<Ref<ConfigFile>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a1a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<ConfigFile>, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<ConfigFile>,String_const&>::~MethodBindT
          (MethodBindT<Ref<ConfigFile>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a1a8;
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



/* HistoryDock::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HistoryDock::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_0010d008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HistoryDock::_property_can_revertv(StringName const&) const */

undefined8 HistoryDock::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010d008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<HistoryDock, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<HistoryDock,void,int>::get_object
          (CallableCustomMethodPointer<HistoryDock,void,int> *this)

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
      goto LAB_0010211d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010211d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010211d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<HistoryDock, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<HistoryDock,void>::get_object
          (CallableCustomMethodPointer<HistoryDock,void> *this)

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
      goto LAB_0010221d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010221d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010221d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HistoryDock::_validate_propertyv(PropertyInfo&) const */

void HistoryDock::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010d010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_0010d010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HistoryDock::_setv(StringName const&, Variant const&) */

undefined8 HistoryDock::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010d018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0010d018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001024e8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010d020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00102558) */
/* HistoryDock::_getv(StringName const&, Variant&) const */

undefined8 HistoryDock::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010d020 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x10a2,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10a2,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10a2,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10a2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10a2,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HistoryDock::is_class_ptr(void*) const */

ulong HistoryDock::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10a2,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10a2,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10a2,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10a2,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10a2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10a2,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* HistoryDock::~HistoryDock() */

void __thiscall HistoryDock::~HistoryDock(HistoryDock *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001026c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001026c0:
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
      if (StringName::configured == '\0') goto LAB_00102720;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00102720:
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
      if (StringName::configured == '\0') goto LAB_00102780;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00102780:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HistoryDock::~HistoryDock() */

void __thiscall HistoryDock::~HistoryDock(HistoryDock *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001027f0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001027f0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa38);
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
LAB_001028c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001028c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010292e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010292e:
  return &_get_class_namev()::_class_name_static;
}



/* HistoryDock::_get_class_namev() const */

undefined8 * HistoryDock::_get_class_namev(void)

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
LAB_001029a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001029a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HistoryDock");
      goto LAB_00102a0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HistoryDock");
LAB_00102a0e:
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



/* WARNING: Removing unreachable block (ram,0x00102b90) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010d028 != Container::_notification) {
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
  if ((code *)PTR__notification_0010d028 == Container::_notification) {
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



/* Callable create_custom_callable_function_pointer<HistoryDock>(HistoryDock*, char const*, void
   (HistoryDock::*)()) */

HistoryDock *
create_custom_callable_function_pointer<HistoryDock>
          (HistoryDock *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC6;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010a028;
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* HistoryDock::get_class() const */

void HistoryDock::get_class(void)

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



/* CallableCustomMethodPointer<HistoryDock, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<HistoryDock,void>::call
          (CallableCustomMethodPointer<HistoryDock,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001032df;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001032df;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001032b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00103390;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001032df:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC22,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00103390:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<HistoryDock, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<HistoryDock,void,int>::call
          (CallableCustomMethodPointer<HistoryDock,void,int> *this,Variant **param_1,int param_2,
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
      goto LAB_00103558;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00103558;
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
        uVar3 = _LC23;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00103609;
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
LAB_00103558:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC22,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00103609:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<EditorUndoRedoManager::Action, SortActionsByTimestamp, true>::adjust_heap(long, long,
   long, EditorUndoRedoManager::Action, EditorUndoRedoManager::Action*) const [clone .isra.0] */

void SortArray<EditorUndoRedoManager::Action,SortActionsByTimestamp,true>::adjust_heap
               (long param_1,long param_2,long param_3,undefined4 *param_4,long param_5)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long in_FS_OFFSET;
  double dVar13;
  long local_58;
  undefined4 local_50;
  undefined1 local_4c;
  long local_40;
  
  lVar10 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = param_2;
  if (lVar10 < param_3) {
    do {
      puVar7 = (undefined4 *)((param_1 + lVar10) * 0x20 + param_5);
      puVar12 = (undefined4 *)(param_5 + (lVar10 + -1 + param_1) * 0x20);
      dVar1 = *(double *)(puVar7 + 2);
      dVar13 = *(double *)(puVar12 + 2);
      lVar8 = lVar10 + -1;
      lVar11 = lVar10;
      if (dVar1 <= dVar13) {
        lVar11 = lVar10 + 1;
        lVar8 = lVar10;
        puVar12 = puVar7;
        dVar13 = dVar1;
      }
      lVar10 = *(long *)(puVar12 + 4);
      puVar7 = (undefined4 *)((lVar9 + param_1) * 0x20 + param_5);
      *puVar7 = *puVar12;
      *(double *)(puVar7 + 2) = dVar13;
      if (*(long *)(puVar7 + 4) != lVar10) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 4),(CowData *)(puVar12 + 4));
      }
      lVar10 = lVar11 * 2;
      puVar7[6] = puVar12[6];
      *(undefined1 *)(puVar7 + 7) = *(undefined1 *)(puVar12 + 7);
      lVar9 = lVar8;
    } while (lVar10 < param_3);
  }
  else {
    puVar12 = (undefined4 *)(param_5 + (param_2 + param_1) * 0x20);
    lVar8 = param_2;
  }
  puVar7 = puVar12;
  if (param_3 == lVar10) {
    lVar8 = param_3 + -1;
    puVar7 = (undefined4 *)((param_1 + lVar8) * 0x20 + param_5);
    uVar2 = *(undefined8 *)(puVar7 + 2);
    *puVar12 = *puVar7;
    *(undefined8 *)(puVar12 + 2) = uVar2;
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar12 + 4),(CowData *)(puVar7 + 4));
    puVar12[6] = puVar7[6];
    *(undefined1 *)(puVar12 + 7) = *(undefined1 *)(puVar7 + 7);
  }
  local_58 = 0;
  uVar4 = *param_4;
  dVar1 = *(double *)(param_4 + 2);
  lVar10 = *(long *)(param_4 + 4);
  if (*(long *)(param_4 + 4) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(param_4 + 4));
    lVar10 = local_58;
  }
  uVar5 = param_4[6];
  uVar3 = *(undefined1 *)(param_4 + 7);
  lVar9 = *(long *)(puVar7 + 4);
  local_50 = uVar5;
  local_4c = uVar3;
  while (param_2 < lVar8) {
    lVar11 = (lVar8 + -1) / 2;
    puVar12 = (undefined4 *)(param_5 + (param_1 + lVar11) * 0x20);
    puVar7 = (undefined4 *)(param_5 + (param_1 + lVar8) * 0x20);
    if (*(double *)(puVar12 + 2) <= dVar1) break;
    uVar6 = *puVar12;
    *(double *)(puVar7 + 2) = *(double *)(puVar12 + 2);
    *puVar7 = uVar6;
    if (*(long *)(puVar12 + 4) != lVar9) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 4),(CowData *)(puVar12 + 4));
      lVar9 = *(long *)(puVar12 + 4);
    }
    puVar7[6] = puVar12[6];
    *(undefined1 *)(puVar7 + 7) = *(undefined1 *)(puVar12 + 7);
    lVar8 = lVar11;
    puVar7 = puVar12;
  }
  *puVar7 = uVar4;
  *(double *)(puVar7 + 2) = dVar1;
  if (lVar10 != lVar9) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 4),(CowData *)&local_58);
  }
  puVar7[6] = uVar5;
  *(undefined1 *)(puVar7 + 7) = uVar3;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<EditorUndoRedoManager::Action, SortActionsByTimestamp, true>::introsort(long, long,
   EditorUndoRedoManager::Action*, long) const [clone .isra.0] */

void SortArray<EditorUndoRedoManager::Action,SortActionsByTimestamp,true>::introsort
               (long param_1,long param_2,Action_conflict *param_3,long param_4)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Action_conflict AVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  Action_conflict *pAVar12;
  long lVar13;
  Action_conflict *pAVar14;
  Action_conflict *pAVar15;
  long lVar16;
  long lVar17;
  Action_conflict *pAVar18;
  long in_FS_OFFSET;
  long local_a8;
  long local_a0;
  long local_78;
  undefined4 local_70;
  Action_conflict local_6c;
  undefined4 local_68 [2];
  double local_60;
  long local_58;
  undefined4 local_50;
  Action_conflict local_4c;
  long local_40;
  
  lVar16 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar16) {
    if (param_4 != 0) {
      pAVar12 = param_3 + param_1 * 0x20;
      local_a8 = param_2;
      local_a0 = param_4;
LAB_001039dc:
      local_a0 = local_a0 + -1;
      dVar2 = *(double *)(pAVar12 + 8);
      pAVar18 = param_3 + local_a8 * 0x20 + -0x20;
      dVar3 = *(double *)(pAVar18 + 8);
      pAVar14 = param_3 + ((lVar16 >> 1) + param_1) * 0x20;
      dVar4 = *(double *)(pAVar14 + 8);
      if (dVar2 <= dVar4) {
        pAVar15 = pAVar12;
        local_60 = dVar2;
        if ((dVar2 <= dVar3) && (pAVar15 = pAVar18, local_60 = dVar3, dVar4 <= dVar3)) {
          pAVar15 = pAVar14;
          local_60 = dVar4;
        }
      }
      else {
        pAVar15 = pAVar14;
        local_60 = dVar4;
        if ((dVar4 <= dVar3) && (pAVar15 = pAVar18, local_60 = dVar3, dVar2 <= dVar3)) {
          pAVar15 = pAVar12;
          local_60 = dVar2;
        }
      }
      local_68[0] = *(undefined4 *)pAVar15;
      local_58 = 0;
      if (*(long *)(pAVar15 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(pAVar15 + 0x10));
      }
      dVar2 = local_60;
      local_50 = *(undefined4 *)(pAVar15 + 0x18);
      local_4c = pAVar15[0x1c];
      lVar16 = local_a8;
      param_2 = param_1;
      pAVar18 = pAVar12;
      do {
        if (dVar2 < *(double *)(pAVar18 + 8)) {
          if (local_a8 + -1 == param_2) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_00103ab2;
          }
        }
        else {
LAB_00103ab2:
          lVar16 = lVar16 + -1;
          pAVar14 = param_3 + lVar16 * 0x20;
          if (*(double *)(pAVar14 + 8) <= dVar2 && dVar2 != *(double *)(pAVar14 + 8)) {
            pAVar15 = param_3 + lVar16 * 0x20 + -0x20;
            while (param_1 != lVar16) {
              lVar16 = lVar16 + -1;
              pAVar14 = pAVar15;
              if (dVar2 < *(double *)(pAVar15 + 8) || dVar2 == *(double *)(pAVar15 + 8))
              goto LAB_00103b2a;
              pAVar15 = pAVar15 + -0x20;
            }
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
          }
LAB_00103b2a:
          if (lVar16 <= param_2) goto LAB_00103ba0;
          uVar8 = *(undefined4 *)pAVar14;
          uVar9 = *(undefined4 *)pAVar18;
          lVar13 = *(long *)(pAVar18 + 0x10);
          uVar10 = *(undefined4 *)(pAVar18 + 0x18);
          *(undefined8 *)(pAVar18 + 0x10) = 0;
          uVar5 = *(undefined8 *)(pAVar14 + 8);
          uVar6 = *(undefined8 *)(pAVar18 + 8);
          *(undefined4 *)pAVar18 = uVar8;
          lVar17 = *(long *)(pAVar14 + 0x10);
          AVar7 = pAVar18[0x1c];
          *(undefined8 *)(pAVar18 + 8) = uVar5;
          if (lVar17 != 0) {
            *(long *)(pAVar18 + 0x10) = lVar17;
            *(undefined8 *)(pAVar14 + 0x10) = 0;
          }
          *(undefined4 *)(pAVar18 + 0x18) = *(undefined4 *)(pAVar14 + 0x18);
          pAVar18[0x1c] = pAVar14[0x1c];
          *(undefined4 *)pAVar14 = uVar9;
          *(undefined8 *)(pAVar14 + 8) = uVar6;
          if (lVar13 != 0) {
            *(long *)(pAVar14 + 0x10) = lVar13;
          }
          *(undefined4 *)(pAVar14 + 0x18) = uVar10;
          pAVar14[0x1c] = AVar7;
        }
        pAVar18 = pAVar18 + 0x20;
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_00103c8b:
    lVar13 = lVar16 + -2 >> 1;
    pAVar12 = param_3 + (param_1 + lVar13) * 0x20 + 0x10;
    while( true ) {
      local_68[0] = *(undefined4 *)((CowData *)pAVar12 + -0x10);
      local_60 = *(double *)((CowData *)pAVar12 + -8);
      local_58 = 0;
      if (*(long *)pAVar12 == 0) {
        local_50 = *(undefined4 *)((CowData *)pAVar12 + 8);
        local_4c = *(Action_conflict *)((CowData *)pAVar12 + 0xc);
        adjust_heap(param_1,lVar13,lVar16,local_68,param_3);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pAVar12);
        lVar17 = local_58;
        local_50 = *(undefined4 *)((CowData *)pAVar12 + 8);
        local_4c = *(Action_conflict *)((CowData *)pAVar12 + 0xc);
        adjust_heap(param_1,lVar13,lVar16,local_68,param_3);
        if (lVar17 != 0) {
          LOCK();
          plVar1 = (long *)(lVar17 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_58 + -0x10),false);
          }
        }
      }
      if (lVar13 == 0) break;
      pAVar12 = (Action_conflict *)((CowData *)pAVar12 + -0x20);
      lVar13 = lVar13 + -1;
    }
    pAVar12 = param_3 + param_1 * 0x20;
    pAVar18 = param_3 + (param_2 + -1) * 0x20 + 0x10;
    lVar16 = (param_2 + -1) - param_1;
    do {
      uVar8 = *(undefined4 *)((CowData<char32_t> *)pAVar18 + -0x10);
      dVar2 = *(double *)((CowData<char32_t> *)pAVar18 + -8);
      local_78 = 0;
      lVar13 = *(long *)pAVar18;
      lVar17 = lVar13;
      if (lVar13 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)pAVar18);
        lVar13 = *(long *)pAVar18;
        lVar17 = local_78;
      }
      uVar9 = *(undefined4 *)((CowData<char32_t> *)pAVar18 + 8);
      AVar7 = *(Action_conflict *)((CowData<char32_t> *)pAVar18 + 0xc);
      uVar5 = *(undefined8 *)(pAVar12 + 8);
      *(undefined4 *)((CowData<char32_t> *)pAVar18 + -0x10) = *(undefined4 *)pAVar12;
      *(undefined8 *)((CowData<char32_t> *)pAVar18 + -8) = uVar5;
      local_70 = uVar9;
      local_6c = AVar7;
      if (lVar13 != *(long *)(pAVar12 + 0x10)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pAVar18,(CowData *)(pAVar12 + 0x10));
      }
      local_58 = 0;
      *(undefined4 *)((CowData<char32_t> *)pAVar18 + 8) = *(undefined4 *)(pAVar12 + 0x18);
      *(Action_conflict *)((CowData<char32_t> *)pAVar18 + 0xc) = pAVar12[0x1c];
      local_60 = dVar2;
      local_68[0] = uVar8;
      if (lVar17 == 0) {
        local_50 = uVar9;
        local_4c = AVar7;
        adjust_heap(param_1,0,lVar16,local_68,param_3);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_78);
        lVar13 = local_58;
        local_50 = uVar9;
        local_4c = AVar7;
        adjust_heap(param_1,0,lVar16,local_68,param_3);
        if (lVar13 != 0) {
          LOCK();
          plVar1 = (long *)(lVar13 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_58 + -0x10),false);
          }
          lVar17 = local_78;
          if (local_78 == 0) goto LAB_00103e4b;
        }
        LOCK();
        plVar1 = (long *)(lVar17 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_78 + -0x10),false);
        }
      }
LAB_00103e4b:
      pAVar18 = (Action_conflict *)((CowData<char32_t> *)pAVar18 + -0x20);
      bVar11 = 1 < lVar16;
      lVar16 = lVar16 + -1;
    } while (bVar11);
  }
LAB_00103c3f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00103ba0:
  lVar16 = param_2 - param_1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  introsort(param_2,local_a8,param_3,local_a0);
  if (lVar16 < 0x11) goto LAB_00103c3f;
  local_a8 = param_2;
  if (local_a0 == 0) goto LAB_00103c8b;
  goto LAB_001039dc;
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
    if (cVar5 != '\0') goto LAB_0010406b;
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
      if (cVar5 != '\0') goto LAB_0010406b;
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
        if (cVar5 != '\0') goto LAB_0010406b;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_00104248;
    }
  }
LAB_0010406b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104248:
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
    if (cVar5 != '\0') goto LAB_0010435b;
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
      if (cVar5 != '\0') goto LAB_0010435b;
    }
    cVar5 = String::operator==(param_1,"Control");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar6;
      }
      goto LAB_0010445e;
    }
  }
LAB_0010435b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010445e:
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
    if (cVar4 != '\0') goto LAB_0010456b;
  }
  cVar4 = String::operator==(param_1,"BoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Container::is_class((Container *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010456b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HistoryDock::is_class(String const&) const */

undefined8 __thiscall HistoryDock::is_class(HistoryDock *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001046cb;
  }
  cVar5 = String::operator==(param_1,"HistoryDock");
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
      if (cVar5 != '\0') goto LAB_001046cb;
    }
    cVar5 = String::operator==(param_1,"VBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_001047ce;
    }
  }
LAB_001046cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001047ce:
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
              if ((code *)PTR__bind_methods_0010d040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0010d030 !=
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
      if ((code *)PTR__bind_methods_0010d038 != Container::_bind_methods) {
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
        if (pvVar3 == (void *)0x0) goto LAB_00104ecf;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00104ecf:
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
  local_78 = &_LC28;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC28;
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
      goto LAB_0010508c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010508c:
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
      goto LAB_001052f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001052f1:
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
  if ((code *)PTR__get_property_list_0010d048 != Object::_get_property_list) {
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
      goto LAB_001055c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001055c1:
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
  if ((code *)PTR__get_property_list_0010d050 != CanvasItem::_get_property_list) {
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
      goto LAB_00105891;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105891:
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
      goto LAB_00105b41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105b41:
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
      goto LAB_00105df1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105df1:
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



/* HistoryDock::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HistoryDock::_get_property_listv(HistoryDock *this,List *param_1,bool param_2)

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
  local_78 = "HistoryDock";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HistoryDock";
  local_98 = 0;
  local_70 = 0xb;
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
      goto LAB_001060a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001060a1:
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
  StringName::StringName((StringName *)&local_78,"HistoryDock",false);
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
      goto LAB_00106351;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00106351:
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
    if (cVar5 != '\0') goto LAB_0010658b;
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
      if (cVar5 != '\0') goto LAB_0010658b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010668e;
    }
  }
LAB_0010658b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010668e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<HistoryDock, Ref<ConfigFile>, String const&>(void
   (HistoryDock::*)(Ref<ConfigFile>, String const&) const) */

MethodBind *
create_method_bind<HistoryDock,Ref<ConfigFile>,String_const&>(_func_void_Ref_String_ptr *param_1)

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
  *(_func_void_Ref_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a148;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "HistoryDock";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<HistoryDock, Ref<ConfigFile>, String const&>(void
   (HistoryDock::*)(Ref<ConfigFile>, String const&)) */

MethodBind *
create_method_bind<HistoryDock,Ref<ConfigFile>,String_const&>(_func_void_Ref_String_ptr *param_1)

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
  *(_func_void_Ref_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a1a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "HistoryDock";
  local_30 = 0xb;
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



/* HistoryDock::_bind_methods() [clone .cold] */

void HistoryDock::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorUndoRedoManager::Action>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorUndoRedoManager::Action>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* HistoryDock::_initialize_classv() */

void HistoryDock::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_0010d040 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_0010d030 !=
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
        if ((code *)PTR__bind_methods_0010d038 != Container::_bind_methods) {
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
    local_58 = "HistoryDock";
    local_70 = 0;
    local_50 = 0xb;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CowData<EditorUndoRedoManager::Action>::_unref() */

void CowData<EditorUndoRedoManager::Action>::_unref(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long *in_RDI;
  
  if (*in_RDI == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*in_RDI + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *in_RDI;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *in_RDI = 0;
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
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x20;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *in_RDI = 0;
  return;
}



/* void Vector<EditorUndoRedoManager::Action>::sort_custom<SortActionsByTimestamp, true>() */

void __thiscall
Vector<EditorUndoRedoManager::Action>::sort_custom<SortActionsByTimestamp,true>
          (Vector<EditorUndoRedoManager::Action> *this)

{
  double dVar1;
  Action_conflict AVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  Action_conflict *pAVar6;
  CowData<char32_t> *pCVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  Action_conflict *pAVar11;
  CowData *pCVar12;
  long lVar13;
  long lVar14;
  Action_conflict *pAVar15;
  CowData *pCVar16;
  CowData *pCVar17;
  long in_FS_OFFSET;
  double dVar18;
  long local_c8;
  undefined8 local_78;
  undefined4 local_70;
  Action_conflict local_6c;
  undefined4 local_68;
  double local_60;
  long local_58;
  undefined4 local_50;
  Action_conflict local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (lVar5 = *(long *)(*(long *)(this + 8) + -8), lVar5 != 0)) {
    CowData<EditorUndoRedoManager::Action>::_copy_on_write
              ((CowData<EditorUndoRedoManager::Action> *)(this + 8));
    pAVar6 = *(Action_conflict **)(this + 8);
    if (lVar5 == 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        SortArray<EditorUndoRedoManager::Action,SortActionsByTimestamp,true>::introsort
                  (0,1,pAVar6,0);
        return;
      }
      goto LAB_001078a5;
    }
    lVar10 = 0;
    lVar14 = lVar5;
    do {
      lVar14 = lVar14 >> 1;
      lVar10 = lVar10 + 1;
    } while (lVar14 != 1);
    SortArray<EditorUndoRedoManager::Action,SortActionsByTimestamp,true>::introsort
              (0,lVar5,pAVar6,lVar10 * 2);
    pAVar15 = pAVar6 + 0x30;
    if (lVar5 < 0x11) {
      lVar14 = 1;
      do {
        local_68 = *(undefined4 *)((CowData *)pAVar15 + -0x10);
        local_60 = *(double *)((CowData *)pAVar15 + -8);
        local_58 = 0;
        if (*(long *)pAVar15 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pAVar15);
        }
        dVar18 = local_60;
        uVar8 = local_68;
        AVar2 = *(Action_conflict *)((CowData *)pAVar15 + 0xc);
        uVar3 = *(undefined4 *)((CowData *)pAVar15 + 8);
        lVar10 = lVar14;
        pCVar12 = (CowData *)pAVar15;
        local_50 = uVar3;
        local_4c = AVar2;
        if (local_60 < *(double *)(pAVar6 + 8) || local_60 == *(double *)(pAVar6 + 8)) {
          local_78 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_58);
          dVar1 = *(double *)((CowData *)pAVar15 + -0x28);
          pAVar11 = (Action_conflict *)((CowData *)pAVar15 + -0x10);
          local_70 = uVar3;
          local_6c = AVar2;
          pCVar7 = (CowData<char32_t> *)pAVar15;
          if (dVar1 < dVar18) {
            while (lVar10 = lVar10 + -1, lVar10 != 0) {
              pCVar16 = pCVar12 + -0x20;
              uVar4 = *(undefined4 *)(pCVar12 + -0x30);
              *(double *)(pCVar7 + -8) = dVar1;
              *(undefined4 *)(pCVar7 + -0x10) = uVar4;
              if (*(long *)pCVar7 != *(long *)pCVar16) {
                CowData<char32_t>::_ref(pCVar7,pCVar16);
              }
              dVar1 = *(double *)(pCVar7 + -0x48);
              *(undefined4 *)(pCVar7 + 8) = *(undefined4 *)(pCVar12 + -0x18);
              pCVar7[0xc] = *(CowData<char32_t> *)(pCVar12 + -0x14);
              if (dVar18 <= dVar1) {
                pAVar11 = pAVar6 + lVar10 * 0x20;
                goto LAB_001077ea;
              }
              pCVar7 = pCVar7 + -0x20;
              pCVar12 = pCVar16;
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pAVar11 = pAVar6 + 0x20;
          }
LAB_001077ea:
          *(double *)(pAVar11 + 8) = dVar18;
          *(undefined4 *)pAVar11 = uVar8;
          CowData<char32_t>::_ref((CowData<char32_t> *)(pAVar11 + 0x10),(CowData *)&local_78);
          *(undefined4 *)(pAVar11 + 0x18) = uVar3;
          pAVar11[0x1c] = AVar2;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        }
        else {
          do {
            *(undefined4 *)((CowData<char32_t> *)pCVar12 + -0x10) =
                 *(undefined4 *)((CowData<char32_t> *)pCVar12 + -0x30);
            *(undefined8 *)((CowData<char32_t> *)pCVar12 + -8) =
                 *(undefined8 *)((CowData<char32_t> *)pCVar12 + -0x28);
            if (*(long *)pCVar12 != *(long *)((CowData<char32_t> *)pCVar12 + -0x20)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar12,
                         (CowData *)((CowData<char32_t> *)pCVar12 + -0x20));
            }
            *(undefined4 *)((CowData<char32_t> *)pCVar12 + 8) =
                 *(undefined4 *)((CowData<char32_t> *)pCVar12 + -0x18);
            ((CowData<char32_t> *)pCVar12)[0xc] = ((CowData<char32_t> *)pCVar12)[-0x14];
            lVar10 = lVar10 + -1;
            pCVar12 = (CowData *)((CowData<char32_t> *)pCVar12 + -0x20);
          } while (lVar10 != 0);
          *(undefined4 *)pAVar6 = uVar8;
          *(double *)(pAVar6 + 8) = dVar18;
          CowData<char32_t>::_ref((CowData<char32_t> *)(pAVar6 + 0x10),(CowData *)&local_58);
          *(undefined4 *)(pAVar6 + 0x18) = uVar3;
          pAVar6[0x1c] = AVar2;
        }
        lVar14 = lVar14 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        pAVar15 = (Action_conflict *)((CowData *)pAVar15 + 0x20);
      } while (lVar5 != lVar14);
    }
    else {
      local_c8 = 0;
      do {
        local_68 = *(undefined4 *)((CowData *)pAVar15 + -0x10);
        local_58 = 0;
        local_60 = *(double *)((CowData *)pAVar15 + -8);
        lVar14 = local_c8 + 1;
        if (*(long *)pAVar15 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pAVar15);
        }
        dVar18 = local_60;
        uVar8 = local_68;
        AVar2 = *(Action_conflict *)((CowData *)pAVar15 + 0xc);
        uVar3 = *(undefined4 *)((CowData *)pAVar15 + 8);
        pCVar12 = (CowData *)pAVar15;
        local_50 = uVar3;
        local_4c = AVar2;
        if (local_60 < *(double *)(pAVar6 + 8) || local_60 == *(double *)(pAVar6 + 8)) {
          local_78 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_58);
          dVar1 = *(double *)((CowData *)pAVar15 + -0x28);
          pAVar11 = (Action_conflict *)((CowData *)pAVar15 + -0x10);
          local_70 = uVar3;
          local_6c = AVar2;
          pCVar7 = (CowData<char32_t> *)pAVar15;
          if (dVar1 < dVar18) {
            while (local_c8 != 0) {
              pCVar16 = pCVar12 + -0x20;
              uVar4 = *(undefined4 *)(pCVar12 + -0x30);
              *(double *)(pCVar7 + -8) = dVar1;
              *(undefined4 *)(pCVar7 + -0x10) = uVar4;
              if (*(long *)pCVar7 != *(long *)pCVar16) {
                CowData<char32_t>::_ref(pCVar7,pCVar16);
              }
              dVar1 = *(double *)(pCVar7 + -0x48);
              *(undefined4 *)(pCVar7 + 8) = *(undefined4 *)(pCVar12 + -0x18);
              pCVar7[0xc] = *(CowData<char32_t> *)(pCVar12 + -0x14);
              if (dVar18 <= dVar1) {
                pAVar11 = pAVar6 + local_c8 * 0x20;
                goto LAB_0010750b;
              }
              pCVar7 = pCVar7 + -0x20;
              pCVar12 = pCVar16;
              local_c8 = local_c8 + -1;
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pAVar11 = pAVar6 + 0x20;
          }
LAB_0010750b:
          *(double *)(pAVar11 + 8) = dVar18;
          *(undefined4 *)pAVar11 = uVar8;
          CowData<char32_t>::_ref((CowData<char32_t> *)(pAVar11 + 0x10),(CowData *)&local_78);
          *(undefined4 *)(pAVar11 + 0x18) = uVar3;
          pAVar11[0x1c] = AVar2;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        }
        else {
          do {
            pCVar16 = (CowData *)((CowData<char32_t> *)pCVar12 + -0x20);
            *(undefined4 *)((CowData<char32_t> *)pCVar12 + -0x10) =
                 *(undefined4 *)((CowData<char32_t> *)pCVar12 + -0x30);
            *(undefined8 *)((CowData<char32_t> *)pCVar12 + -8) =
                 *(undefined8 *)((CowData<char32_t> *)pCVar12 + -0x28);
            if (*(long *)pCVar12 != *(long *)((CowData<char32_t> *)pCVar12 + -0x20)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)pCVar12,pCVar16);
            }
            *(undefined4 *)((CowData<char32_t> *)pCVar12 + 8) =
                 *(undefined4 *)((CowData<char32_t> *)pCVar12 + -0x18);
            ((CowData<char32_t> *)pCVar12)[0xc] = ((CowData<char32_t> *)pCVar12)[-0x14];
            pCVar12 = pCVar16;
          } while (pCVar16 != (CowData *)(pAVar6 + 0x10));
          *(undefined4 *)pAVar6 = uVar8;
          *(double *)(pAVar6 + 8) = dVar18;
          CowData<char32_t>::_ref((CowData<char32_t> *)(pAVar6 + 0x10),(CowData *)&local_58);
          *(undefined4 *)(pAVar6 + 0x18) = uVar3;
          pAVar6[0x1c] = AVar2;
        }
        pAVar15 = (Action_conflict *)((CowData *)pAVar15 + 0x20);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        local_c8 = lVar14;
      } while (lVar14 != 0xf);
      pAVar15 = pAVar6 + 0x210;
      lVar14 = 0x10;
      do {
        local_68 = *(undefined4 *)((CowData *)pAVar15 + -0x10);
        local_60 = *(double *)((CowData *)pAVar15 + -8);
        local_58 = 0;
        lVar10 = *(long *)pAVar15;
        if (lVar10 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pAVar15);
          lVar10 = *(long *)pAVar15;
        }
        lVar9 = local_58;
        dVar1 = local_60;
        uVar8 = local_68;
        uVar3 = *(undefined4 *)((CowData *)pAVar15 + 8);
        dVar18 = *(double *)((CowData *)pAVar15 + -0x28);
        AVar2 = *(Action_conflict *)((CowData *)pAVar15 + 0xc);
        pAVar11 = (Action_conflict *)((CowData *)pAVar15 + -0x10);
        lVar13 = lVar14 + -1;
        pCVar16 = (CowData *)pAVar15;
        pCVar12 = (CowData *)pAVar15;
        local_50 = uVar3;
        local_4c = AVar2;
        if (dVar18 < local_60) {
          do {
            pCVar17 = pCVar12 + -0x20;
            uVar4 = *(undefined4 *)(pCVar12 + -0x30);
            *(double *)((CowData<char32_t> *)pCVar16 + -8) = dVar18;
            *(undefined4 *)((CowData<char32_t> *)pCVar16 + -0x10) = uVar4;
            if (*(long *)pCVar16 != *(long *)pCVar17) {
              CowData<char32_t>::_ref((CowData<char32_t> *)pCVar16,pCVar17);
            }
            dVar18 = *(double *)((CowData<char32_t> *)pCVar16 + -0x48);
            *(undefined4 *)((CowData<char32_t> *)pCVar16 + 8) = *(undefined4 *)(pCVar12 + -0x18);
            ((CowData<char32_t> *)pCVar16)[0xc] = *(CowData<char32_t> *)(pCVar12 + -0x14);
            lVar10 = lVar13 + -1;
            if (dVar1 <= dVar18) {
              pAVar11 = pAVar6 + lVar13 * 0x20;
              lVar10 = *(long *)(pAVar11 + 0x10);
              goto LAB_0010739a;
            }
            pCVar16 = (CowData *)((CowData<char32_t> *)pCVar16 + -0x20);
            lVar13 = lVar10;
            pCVar12 = pCVar17;
          } while (lVar10 != 0);
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          lVar10 = *(long *)(pAVar6 + 0x30);
          pAVar11 = pAVar6 + 0x20;
        }
LAB_0010739a:
        *(undefined4 *)pAVar11 = uVar8;
        *(double *)(pAVar11 + 8) = dVar1;
        if (lVar9 != lVar10) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pAVar11 + 0x10),(CowData *)&local_58);
        }
        lVar14 = lVar14 + 1;
        pAVar15 = (Action_conflict *)((CowData *)pAVar15 + 0x20);
        *(undefined4 *)(pAVar11 + 0x18) = uVar3;
        pAVar11[0x1c] = AVar2;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      } while (lVar5 != lVar14);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001078a5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<EditorUndoRedoManager::Action>::_realloc(long) */

undefined8 __thiscall
CowData<EditorUndoRedoManager::Action>::_realloc
          (CowData<EditorUndoRedoManager::Action> *this,long param_1)

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



/* HistoryDock::_notificationv(int, bool) */

void __thiscall HistoryDock::_notificationv(HistoryDock *this,int param_1,bool param_2)

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



/* void call_get_argument_type_info<Ref<ConfigFile>, String const&>(int, PropertyInfo&) */

void call_get_argument_type_info<Ref<ConfigFile>,String_const&>(int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_78 = 0;
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"ConfigFile");
    local_88 = 0;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x18);
    local_50 = 0x11;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if ((local_80 != 0) &&
       (CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80),
       local_50 != 0x11)) goto LAB_00107a5f;
LAB_00107b0a:
    local_40 = 6;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  else {
    if (param_1 != 1) goto LAB_001079be;
    local_78 = 0;
    local_68 = &_LC6;
    local_80 = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_88 = 0;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if ((local_80 != 0) &&
       (CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80),
       local_50 == 0x11)) goto LAB_00107b0a;
LAB_00107a5f:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar3;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
  }
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001079be:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTC<Ref<ConfigFile>, String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTC<Ref<ConfigFile>,String_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info<Ref<ConfigFile>,String_const&>(in_EDX,pPVar1);
  return pPVar1;
}



/* MethodBindT<Ref<ConfigFile>, String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Ref<ConfigFile>,String_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info<Ref<ConfigFile>,String_const&>(in_EDX,pPVar1);
  return pPVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107e98) */
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



/* MethodBindTC<Ref<ConfigFile>, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindTC<Ref<ConfigFile>,String_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
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
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x108018;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x1b4,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00108209;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar1) + -1);
  }
  lVar2 = *(long *)(param_3 + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_001081c4:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&ConfigFile::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_001081c4;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar1),(StringName *)&local_68,lVar2 + 8);
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00108209:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<ConfigFile>, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Ref<ConfigFile>,String_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
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
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x108018;
      local_70 = 0;
      local_60 = 0x35;
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
      goto LAB_00108549;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar1) + -1);
  }
  lVar2 = *(long *)(param_3 + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_00108504:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&ConfigFile::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_00108504;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar1),(StringName *)&local_68,lVar2 + 8);
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00108549:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<Ref<ConfigFile>, String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindTC<Ref<ConfigFile>,String_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
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
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x108018;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x1bf,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108823;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = *(undefined8 *)((long)param_3 + 8);
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_001087fc:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_001087fc;
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),(StringName *)&local_48,uVar2);
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
LAB_00108823:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<ConfigFile>, String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<ConfigFile>,String_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
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
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x108018;
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
      goto LAB_00108a73;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = *(undefined8 *)((long)param_3 + 8);
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00108a4c:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00108a4c;
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),(StringName *)&local_48,uVar2);
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
LAB_00108a73:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTC<Ref<ConfigFile>, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTC<Ref<ConfigFile>,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Object *pOVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  Variant *pVVar14;
  int iVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar10) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x108018;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC22,"./core/object/method_bind.h",0x1a8,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00108ea8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_00108e9d:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_00108ea8;
  }
  pVVar13 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar13 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_00108ee0;
    pVVar14 = *(Variant **)param_4;
LAB_00108efd:
    pVVar13 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar13 + -8);
    iVar15 = (int)lVar2;
    if (iVar15 < iVar7) {
LAB_00108ee0:
      uVar8 = 4;
      goto LAB_00108e9d;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar15 + -2);
      if (lVar2 <= lVar11) goto LAB_00109060;
      pVVar14 = pVVar13 + lVar11 * 0x18;
    }
    else {
      pVVar14 = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_00108efd;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar15 - iVar7));
    if (lVar2 <= lVar11) {
LAB_00109060:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar13 = pVVar13 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar16 & 1) != 0) {
    pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,4);
  uVar4 = _LC67;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  Variant::operator_cast_to_String((Variant *)&local_60);
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar14);
  uVar4 = _LC68;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_58 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar5 = local_58;
  if (pOVar9 != local_58) {
    if (pOVar9 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00108e53:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&ConfigFile::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_58 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00108e53;
      }
    }
  }
  (*(code *)pVVar16)((Variant *)((long)plVar12 + (long)pVVar1),&local_58,(Variant *)&local_60);
  if (local_58 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_58;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_58);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00108ea8:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<ConfigFile>, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<ConfigFile>,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Object *pOVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  Variant *pVVar14;
  int iVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar10) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x108018;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC22,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109378;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_0010936d:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_00109378;
  }
  pVVar13 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar13 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_001093b0;
    pVVar14 = *(Variant **)param_4;
LAB_001093cd:
    pVVar13 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar13 + -8);
    iVar15 = (int)lVar2;
    if (iVar15 < iVar7) {
LAB_001093b0:
      uVar8 = 4;
      goto LAB_0010936d;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar15 + -2);
      if (lVar2 <= lVar11) goto LAB_00109530;
      pVVar14 = pVVar13 + lVar11 * 0x18;
    }
    else {
      pVVar14 = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_001093cd;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar15 - iVar7));
    if (lVar2 <= lVar11) {
LAB_00109530:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar13 = pVVar13 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar16 & 1) != 0) {
    pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,4);
  uVar4 = _LC67;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  Variant::operator_cast_to_String((Variant *)&local_60);
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar14);
  uVar4 = _LC68;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_58 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar5 = local_58;
  if (pOVar9 != local_58) {
    if (pOVar9 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00109323:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&ConfigFile::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_58 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00109323;
      }
    }
  }
  (*(code *)pVVar16)((Variant *)((long)plVar12 + (long)pVVar1),&local_58,(Variant *)&local_60);
  if (local_58 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_58;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_58);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00109378:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HistoryDock::on_history_changed() */

void HistoryDock::_GLOBAL__sub_I_on_history_changed(void)

{
  if (ItemList::base_property_helper != '\0') {
    return;
  }
  ItemList::base_property_helper = 1;
  ItemList::base_property_helper._56_8_ = 2;
  ItemList::base_property_helper._64_8_ = 0;
  ItemList::base_property_helper._0_16_ = (undefined1  [16])0x0;
  ItemList::base_property_helper._24_16_ = (undefined1  [16])0x0;
  ItemList::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,ItemList::base_property_helper,&__dso_handle)
  ;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<ConfigFile>, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<ConfigFile>,String_const&>::~MethodBindT
          (MethodBindT<Ref<ConfigFile>,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTC<Ref<ConfigFile>, String const&>::~MethodBindTC() */

void __thiscall
MethodBindTC<Ref<ConfigFile>,String_const&>::~MethodBindTC
          (MethodBindTC<Ref<ConfigFile>,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<HistoryDock, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<HistoryDock,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<HistoryDock,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<HistoryDock, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<HistoryDock,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<HistoryDock,void,int> *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

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
/* HistoryDock::~HistoryDock() */

void __thiscall HistoryDock::~HistoryDock(HistoryDock *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


