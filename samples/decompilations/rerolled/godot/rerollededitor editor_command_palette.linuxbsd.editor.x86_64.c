/* Ref<Shortcut>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shortcut> const&) [clone .isra.0] */

void __thiscall Ref<Shortcut>::operator=(Ref<Shortcut> *this,Ref *param_1)

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



/* EditorCommandPalette::_sbox_input(Ref<InputEvent> const&) */

void __thiscall EditorCommandPalette::_sbox_input(EditorCommandPalette *this,Ref *param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  StringName *pSVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)param_1 != 0) &&
      (pSVar4 = (StringName *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0),
      pSVar4 != (StringName *)0x0)) && (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
    StringName::StringName((StringName *)&local_60,"ui_up",false);
    cVar3 = InputEvent::is_action(pSVar4,SUB81((StringName *)&local_60,0));
    if (cVar3 == '\0') {
      StringName::StringName((StringName *)&local_58,"ui_down",false);
      cVar3 = InputEvent::is_action(pSVar4,SUB81((StringName *)&local_58,0));
      if (cVar3 == '\0') {
        StringName::StringName((StringName *)&local_50,"ui_page_up",false);
        cVar3 = InputEvent::is_action(pSVar4,SUB81((StringName *)&local_50,0));
        if (cVar3 == '\0') {
          StringName::StringName((StringName *)&local_48,"ui_page_down",false);
          cVar3 = InputEvent::is_action(pSVar4,SUB81((StringName *)&local_48,0));
          if ((StringName::configured != '\0') &&
             ((local_48 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0'))))
          goto LAB_00100338;
        }
        else {
          cVar3 = StringName::configured;
          if (StringName::configured == '\0') goto LAB_00100147;
LAB_00100338:
          if ((local_50 == 0) || (StringName::unref(), StringName::configured != '\0'))
          goto LAB_0010020e;
        }
      }
      else {
        cVar3 = StringName::configured;
        if (StringName::configured == '\0') goto LAB_00100147;
LAB_0010020e:
        if (local_58 != 0) {
          StringName::unref();
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
      }
      if (cVar3 != '\0') goto LAB_00100147;
    }
    else {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
LAB_00100147:
      plVar1 = *(long **)(this + 0xdc0);
      pcVar2 = *(code **)(*plVar1 + 0x308);
      local_48 = (Object *)0x0;
      pOVar5 = (Object *)__dynamic_cast(pSVar4,&Object::typeinfo,&InputEvent::typeinfo,0);
      if ((pOVar5 != (Object *)0x0) &&
         (local_48 = pOVar5, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_48 = (Object *)0x0;
      }
      (*pcVar2)(plVar1);
      if (((local_48 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar5 = local_48, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_48), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
      Control::accept_event();
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)pSVar4), cVar3 != '\0')) {
      (**(code **)(*(long *)pSVar4 + 0x140))(pSVar4);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pSVar4,false);
        return;
      }
      goto LAB_00100391;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100391:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorCommandPalette::_score_path(String const&, String const&) */

float __thiscall
EditorCommandPalette::_score_path(EditorCommandPalette *this,String *param_1,String *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (*(long *)param_1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 0.0;
    iVar1 = (int)*(undefined8 *)(*(long *)param_1 + -8);
    if (iVar1 != 0) {
      fVar3 = (float)(iVar1 + -1);
    }
  }
  if (*(long *)param_2 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 0.0;
    iVar1 = (int)*(undefined8 *)(*(long *)param_2 + -8);
    if (iVar1 != 0) {
      fVar4 = (float)(iVar1 + -1);
    }
  }
  fVar3 = (fVar3 / fVar4) * __LC11 + __LC12;
  iVar1 = String::findn(param_2,(int)param_1);
  if (iVar1 == -1) {
    iVar1 = String::rfindn(param_2,(int)param_1);
    fVar4 = __LC15;
    if (iVar1 != -1) {
      if ((*(long *)param_2 == 0) ||
         (iVar2 = (int)*(undefined8 *)(*(long *)param_2 + -8), iVar2 == 0)) {
        iVar2 = -iVar1;
        fVar4 = 0.0;
      }
      else {
        iVar2 = iVar2 + -1;
        fVar4 = (float)iVar2;
        iVar2 = iVar2 - iVar1;
      }
      return fVar3 * (_LC14 - ((float)iVar2 / fVar4) * __LC11);
    }
  }
  else {
    if (*(long *)param_2 == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = 0.0;
      iVar2 = (int)*(undefined8 *)(*(long *)param_2 + -8);
      if (iVar2 != 0) {
        fVar4 = (float)(iVar2 + -1);
      }
    }
    fVar4 = _LC13 - ((float)iVar1 / fVar4) * __LC11;
  }
  return fVar3 * fVar4;
}



/* EditorCommandPalette::_save_history() const */

void __thiscall EditorCommandPalette::_save_history(EditorCommandPalette *this)

{
  undefined8 *puVar1;
  Variant *pVVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  Dictionary local_a0 [8];
  undefined8 local_98;
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
  puVar1 = *(undefined8 **)(this + 0xde0);
  do {
    while( true ) {
      if (puVar1 == (undefined8 *)0x0) {
        pSVar3 = (String *)EditorSettings::get_singleton();
        Variant::Variant((Variant *)local_58,local_a0);
        local_88 = "command_history";
        local_90 = 0;
        local_80 = 0xf;
        String::parse_latin1((StrRange *)&local_90);
        local_88 = "command_palette";
        local_98 = 0;
        local_80 = 0xf;
        String::parse_latin1((StrRange *)&local_98);
        EditorSettings::set_project_metadata(pSVar3,(String *)&local_98,(Variant *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary(local_a0);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (0 < *(int *)(puVar1 + 8)) break;
LAB_001005c0:
      puVar1 = (undefined8 *)*puVar1;
    }
    Variant::Variant((Variant *)local_58,*(int *)(puVar1 + 8));
    Variant::Variant((Variant *)local_78,(String *)(puVar1 + 2));
    pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_a0);
    if (pVVar2 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar2 = 0;
      *(int *)pVVar2 = local_58[0];
      *(undefined8 *)(pVVar2 + 8) = local_50;
      *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_001005c0;
    Variant::_clear_internal();
    puVar1 = (undefined8 *)*puVar1;
  } while( true );
}



/* EditorCommandPalette::EditorCommandPalette() */

void __thiscall EditorCommandPalette::EditorCommandPalette(EditorCommandPalette *this)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  BoxContainer *this_00;
  LineEdit *this_01;
  CallableCustom *this_02;
  MarginContainer *this_03;
  Tree *this_04;
  bool bVar5;
  long in_FS_OFFSET;
  long local_70;
  long local_68 [2];
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_00112df8;
  uVar1 = _LC25;
  *(undefined1 (*) [16])(this + 0xdd0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xdf0) = uVar1;
  *(undefined8 *)(this + 0xe20) = uVar1;
  *(undefined1 (*) [16])(this + 0xde0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe10) = (undefined1  [16])0x0;
  AcceptDialog::set_hide_on_ok(SUB81(this,0));
  create_custom_callable_function_pointer<EditorCommandPalette>
            ((EditorCommandPalette *)&local_58,(char *)this,
             (_func_void *)"&EditorCommandPalette::_confirmed");
  Node::connect((StringName *)this,(Callable *)(SceneStringNames::singleton + 0x268),
                (uint)(EditorCommandPalette *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00112808;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  this_01 = (LineEdit *)operator_new(0xbb0,"");
  local_58 = (char *)0x0;
  LineEdit::LineEdit(this_01,(String *)&local_58);
  postinitialize_handler((Object *)this_01);
  *(LineEdit **)(this + 0xdb8) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  local_68[0] = 0;
  uVar1 = *(undefined8 *)(this + 0xdb8);
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = "Filter Commands";
  local_70 = 0;
  local_50 = 0xf;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  LineEdit::set_placeholder(uVar1,(EditorCommandPalette *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar2 = *(long **)(this + 0xdb8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined ***)this_02 = &PTR_hash_00113220;
  *(undefined **)(this_02 + 0x20) = &_LC16;
  *(undefined8 *)(this_02 + 0x30) = uVar1;
  *(code **)(this_02 + 0x38) = _sbox_input;
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(EditorCommandPalette **)(this_02 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "EditorCommandPalette::_sbox_input";
  Callable::Callable((Callable *)&local_58,this_02);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x28,(EditorCommandPalette *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xdb8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorCommandPalette,String_const&>
            ((EditorCommandPalette *)&local_58,(char *)this,
             (_func_void_String_ptr *)"&EditorCommandPalette::_update_command_search");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x270,(EditorCommandPalette *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdb8),3);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xdb8),0));
  this_03 = (MarginContainer *)operator_new(0xa10,"");
  MarginContainer::MarginContainer(this_03);
  postinitialize_handler((Object *)this_03);
  Node::add_child(this_03,*(undefined8 *)(this + 0xdb8),0,0);
  Node::add_child(this_00,this_03,0,0);
  AcceptDialog::register_text_enter((LineEdit *)this);
  this_04 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_04);
  postinitialize_handler((Object *)this_04);
  lVar4 = *(long *)this_04;
  *(Tree **)(this + 0xdc0) = this_04;
  pcVar3 = *(code **)(lVar4 + 0x108);
  create_custom_callable_function_pointer<EditorCommandPalette>
            ((EditorCommandPalette *)&local_58,(char *)this,
             (_func_void *)"&EditorCommandPalette::_confirmed");
  StringName::StringName((StringName *)local_68,"item_activated",false);
  (*pcVar3)(this_04,(StrRange *)local_68,(EditorCommandPalette *)&local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xdc0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<BaseButton,bool>
            ((BaseButton *)&local_58,*(char **)(this + 0xd88),
             (_func_void_bool *)"&BaseButton::set_disabled");
  bVar5 = SUB81((StrRange *)local_68,0);
  Callable::bind<bool>(bVar5);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x260,(StrRange *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  plVar2 = *(long **)(this + 0xdc0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<BaseButton,bool>
            ((BaseButton *)&local_58,*(char **)(this + 0xd88),
             (_func_void_bool *)"&BaseButton::set_disabled");
  Callable::bind<bool>(bVar5);
  StringName::StringName((StringName *)&local_70,"nothing_selected",false);
  (*pcVar3)(plVar2,(StrRange *)&local_70,(StrRange *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  Tree::create_item(*(TreeItem **)(this + 0xdc0),0);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xdc0),0));
  Tree::set_columns((int)*(undefined8 *)(this + 0xdc0));
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdc0),3);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdc0));
  uVar1 = *(undefined8 *)(this + 0xdc0);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar1,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this_00,*(undefined8 *)(this + 0xdc0),1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorCommandPalette::get_singleton() */

EditorCommandPalette * EditorCommandPalette::get_singleton(void)

{
  EditorCommandPalette *this;
  
  if (singleton != (EditorCommandPalette *)0x0) {
    return singleton;
  }
  this = (EditorCommandPalette *)operator_new(0xe28,"");
  EditorCommandPalette(this);
  postinitialize_handler((Object *)this);
  singleton = this;
  return this;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] [clone .constprop.0] */

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



/* EditorCommandPalette::_confirmed() */

void __thiscall EditorCommandPalette::_confirmed(EditorCommandPalette *this)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_a8;
  undefined8 local_a0;
  EditorCommandPalette local_98 [16];
  Variant *local_88 [2];
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = Tree::get_selected();
  if (lVar1 == 0) {
    Variant::Variant((Variant *)local_78,"");
  }
  else {
    TreeItem::get_metadata((int)local_78);
  }
  Variant::operator_cast_to_String((Variant *)&local_a8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((local_a8 != 0) && (1 < *(uint *)(local_a8 + -8))) {
    Window::hide();
    create_custom_callable_function_pointer<EditorCommandPalette,String_const&>
              (local_98,(char *)this,
               (_func_void_String_ptr *)"&EditorCommandPalette::execute_command");
    local_a0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_a8);
    Variant::Variant((Variant *)local_78,(String *)&local_a0);
    Variant::Variant((Variant *)local_60,0);
    local_88[0] = (Variant *)local_78;
    Callable::call_deferredp((Variant **)local_98,(int)local_88);
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    Callable::~Callable((Callable *)local_98);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorCommandPalette::get_actions_list(List<String, DefaultAllocator>*) const */

void __thiscall EditorCommandPalette::get_actions_list(EditorCommandPalette *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  CowData<char32_t> *this_00;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0xde0);
  if (plVar4 != (long *)0x0) {
    if (*(long *)param_1 == 0) {
      pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_1 = pauVar3;
      *(undefined4 *)pauVar3[1] = 0;
      *pauVar3 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
        if (plVar4[2] != 0) {
          CowData<char32_t>::_ref(this_00,(CowData *)(plVar4 + 2));
        }
        plVar1 = *(long **)param_1;
        lVar2 = plVar1[1];
        *(undefined8 *)(this_00 + 8) = 0;
        *(long **)(this_00 + 0x18) = plVar1;
        *(long *)(this_00 + 0x10) = lVar2;
        if (lVar2 != 0) {
          *(CowData<char32_t> **)(lVar2 + 8) = this_00;
        }
        plVar1[1] = (long)this_00;
        if (*plVar1 == 0) break;
        plVar4 = (long *)*plVar4;
        *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
        if (plVar4 == (long *)0x0) {
          return;
        }
      }
      plVar4 = (long *)*plVar4;
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      *plVar1 = (long)this_00;
    } while (plVar4 != (long *)0x0);
  }
  return;
}



/* EditorCommandPalette::CommandEntry::TEMPNAMEPLACEHOLDERVALUE(EditorCommandPalette::CommandEntry
   const&) [clone .isra.0] */

void __thiscall
EditorCommandPalette::CommandEntry::operator=(CommandEntry *this,CommandEntry *param_1)

{
  undefined4 uVar1;
  
  if (*(long *)this != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = uVar1;
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



/* EditorCommandPalette::_notification(int) */

void __thiscall EditorCommandPalette::_notification(EditorCommandPalette *this,int param_1)

{
  undefined8 *puVar1;
  Ref *pRVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  String *pSVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x20) {
    pRVar2 = *(Ref **)(this + 0xdb8);
    if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
       iVar5 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_38);
    LineEdit::set_right_icon(pRVar2);
    if (((local_38 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar3 = local_38, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_38), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  else if (param_1 == 10000) {
    pSVar6 = (String *)EditorSettings::get_singleton();
    local_38 = (Object *)0x0;
    String::parse_latin1((String *)&local_38,"shortcuts");
    cVar4 = EditorSettings::check_changed_settings_in_group(pSVar6);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    if (cVar4 != '\0') {
      for (puVar1 = *(undefined8 **)(this + 0xde0); puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)*puVar1) {
        if (puVar1[6] != 0) {
          Shortcut::get_as_text();
          if ((Object *)puVar1[7] != local_38) {
            CowData<char32_t>::_unref((CowData<char32_t> *)(puVar1 + 7));
            puVar1[7] = local_38;
            local_38 = (Object *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
        }
      }
    }
  }
  else if ((param_1 == 0x1e) && (cVar4 = Window::is_visible(), cVar4 == '\0')) {
    uVar7 = Window::get_size();
    prev_rect._0_8_ = Window::get_position();
    was_showed = 1;
    prev_rect._8_8_ = uVar7;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<EditorCommandPalette::CommandEntry, EditorCommandPalette::CommandEntryComparator,
   true>::adjust_heap(long, long, long, EditorCommandPalette::CommandEntry,
   EditorCommandPalette::CommandEntry*) const [clone .isra.0] */

void SortArray<EditorCommandPalette::CommandEntry,EditorCommandPalette::CommandEntryComparator,true>
     ::adjust_heap(long param_1,long param_2,long param_3,CowData *param_4,long param_5)

{
  CowData *pCVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CowData *pCVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  CommandEntry *this;
  CowData<char32_t> *pCVar10;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  float local_4c;
  long local_40;
  
  lVar8 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = param_2;
  if (lVar8 < param_3) {
    do {
      pCVar5 = (CowData *)((param_1 + lVar8) * 0x20 + param_5);
      this = (CommandEntry *)(param_5 + (lVar8 + -1 + param_1) * 0x20);
      fVar2 = *(float *)(pCVar5 + 0x1c);
      pCVar1 = (CowData *)this + 0x1c;
      lVar6 = lVar8 + -1;
      lVar7 = lVar8;
      if (fVar2 < *(float *)pCVar1 || fVar2 == *(float *)pCVar1) {
        lVar7 = lVar8 + 1;
        lVar6 = lVar8;
        this = (CommandEntry *)pCVar5;
      }
      pCVar10 = (CowData<char32_t> *)((lVar9 + param_1) * 0x20 + param_5);
      if (*(long *)pCVar10 != *(long *)this) {
        CowData<char32_t>::_ref(pCVar10,(CowData *)this);
      }
      if (*(long *)(pCVar10 + 8) != *(long *)((CowData *)this + 8)) {
        CowData<char32_t>::_ref(pCVar10 + 8,(CowData *)this + 8);
      }
      if (*(long *)(pCVar10 + 0x10) != *(long *)((CowData *)this + 0x10)) {
        CowData<char32_t>::_ref(pCVar10 + 0x10,(CowData *)this + 0x10);
      }
      uVar3 = *(undefined4 *)((CowData *)this + 0x1c);
      lVar8 = lVar7 * 2;
      *(undefined4 *)(pCVar10 + 0x18) = *(undefined4 *)((CowData *)this + 0x18);
      *(undefined4 *)(pCVar10 + 0x1c) = uVar3;
      lVar9 = lVar6;
    } while (lVar8 < param_3);
  }
  else {
    this = (CommandEntry *)(param_5 + (param_2 + param_1) * 0x20);
    lVar6 = param_2;
  }
  pCVar10 = (CowData<char32_t> *)this;
  if (param_3 == lVar8) {
    lVar6 = param_3 + -1;
    pCVar10 = (CowData<char32_t> *)((param_1 + lVar6) * 0x20 + param_5);
    EditorCommandPalette::CommandEntry::operator=(this,(CommandEntry *)pCVar10);
  }
  local_68 = 0;
  if (*(long *)param_4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,param_4);
  }
  local_60 = 0;
  if (*(long *)(param_4 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,param_4 + 8);
  }
  local_58 = 0;
  if (*(long *)(param_4 + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,param_4 + 0x10);
  }
  fVar2 = *(float *)(param_4 + 0x1c);
  uVar3 = *(undefined4 *)(param_4 + 0x18);
  lVar8 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
  local_4c = fVar2;
  local_50 = uVar3;
  while (param_2 < lVar6) {
    lVar9 = lVar8 >> 1;
    pCVar1 = (CowData *)(param_5 + (param_1 + lVar9) * 0x20);
    pCVar10 = (CowData<char32_t> *)(param_5 + (param_1 + lVar6) * 0x20);
    if (*(float *)(pCVar1 + 0x1c) <= fVar2) break;
    if (*(long *)pCVar10 != *(long *)pCVar1) {
      CowData<char32_t>::_ref(pCVar10,pCVar1);
    }
    if (*(long *)(pCVar10 + 8) != *(long *)(pCVar1 + 8)) {
      CowData<char32_t>::_ref(pCVar10 + 8,pCVar1 + 8);
    }
    if (*(long *)(pCVar10 + 0x10) != *(long *)(pCVar1 + 0x10)) {
      CowData<char32_t>::_ref(pCVar10 + 0x10,pCVar1 + 0x10);
    }
    uVar4 = *(undefined4 *)(pCVar1 + 0x1c);
    *(undefined4 *)(pCVar10 + 0x18) = *(undefined4 *)(pCVar1 + 0x18);
    *(undefined4 *)(pCVar10 + 0x1c) = uVar4;
    lVar8 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
    lVar6 = lVar9;
    pCVar10 = (CowData<char32_t> *)pCVar1;
  }
  CowData<char32_t>::_ref(pCVar10,(CowData *)&local_68);
  CowData<char32_t>::_ref(pCVar10 + 8,(CowData *)&local_60);
  CowData<char32_t>::_ref(pCVar10 + 0x10,(CowData *)&local_58);
  *(undefined4 *)(pCVar10 + 0x18) = uVar3;
  *(float *)(pCVar10 + 0x1c) = fVar2;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<EditorCommandPalette::CommandEntry, EditorCommandPalette::CommandHistoryComparator,
   true>::adjust_heap(long, long, long, EditorCommandPalette::CommandEntry,
   EditorCommandPalette::CommandEntry*) const [clone .isra.0] */

void SortArray<EditorCommandPalette::CommandEntry,EditorCommandPalette::CommandHistoryComparator,true>
     ::adjust_heap(long param_1,long param_2,long param_3,CowData *param_4,long param_5)

{
  CowData *pCVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  CowData<char32_t> *this;
  long lVar5;
  int iVar6;
  CowData *this_00;
  CowData<char32_t> *pCVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  lVar8 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = param_2;
  if (lVar8 < param_3) {
    do {
      lVar5 = lVar8 + -1;
      pCVar1 = (CowData *)(param_5 + (param_1 + lVar8) * 0x20);
      this_00 = (CowData *)(param_5 + (lVar5 + param_1) * 0x20);
      if (*(int *)(pCVar1 + 0x18) == *(int *)(this_00 + 0x18)) {
        cVar3 = String::operator<((String *)(pCVar1 + 8),(String *)(this_00 + 8));
        if (cVar3 == '\0') {
          lVar5 = lVar8;
          this_00 = pCVar1;
          lVar8 = lVar8 + 1;
        }
      }
      else if (*(int *)(pCVar1 + 0x18) <= *(int *)(this_00 + 0x18)) {
        lVar5 = lVar8;
        this_00 = pCVar1;
        lVar8 = lVar8 + 1;
      }
      pCVar7 = (CowData<char32_t> *)(param_5 + (lVar4 + param_1) * 0x20);
      if (*(long *)pCVar7 != *(long *)this_00) {
        CowData<char32_t>::_ref(pCVar7,this_00);
      }
      if (*(long *)(pCVar7 + 8) != *(long *)(this_00 + 8)) {
        CowData<char32_t>::_ref(pCVar7 + 8,this_00 + 8);
      }
      if (*(long *)(pCVar7 + 0x10) != *(long *)(this_00 + 0x10)) {
        CowData<char32_t>::_ref(pCVar7 + 0x10,this_00 + 0x10);
      }
      uVar2 = *(undefined4 *)(this_00 + 0x1c);
      lVar8 = lVar8 * 2;
      *(undefined4 *)(pCVar7 + 0x18) = *(undefined4 *)(this_00 + 0x18);
      *(undefined4 *)(pCVar7 + 0x1c) = uVar2;
      lVar4 = lVar5;
    } while (lVar8 < param_3);
  }
  else {
    this_00 = (CowData *)(param_5 + (param_2 + param_1) * 0x20);
    lVar5 = param_2;
  }
  pCVar7 = (CowData<char32_t> *)this_00;
  if (param_3 == lVar8) {
    lVar5 = param_3 + -1;
    pCVar7 = (CowData<char32_t> *)((param_1 + lVar5) * 0x20 + param_5);
    EditorCommandPalette::CommandEntry::operator=((CommandEntry *)this_00,(CommandEntry *)pCVar7);
  }
  local_68 = 0;
  if (*(long *)param_4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,param_4);
  }
  local_60 = 0;
  if (*(long *)(param_4 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,param_4 + 8);
  }
  local_58 = 0;
  if (*(long *)(param_4 + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,param_4 + 0x10);
  }
  local_50 = *(undefined8 *)(param_4 + 0x18);
  iVar6 = *(int *)(param_4 + 0x18);
  if (param_2 < lVar5) {
    do {
      lVar8 = (lVar5 + -1) / 2;
      pCVar7 = (CowData<char32_t> *)(param_5 + (param_1 + lVar8) * 0x20);
      if (*(int *)((CowData *)pCVar7 + 0x18) == iVar6) {
        cVar3 = String::operator<((String *)((CowData *)pCVar7 + 8),(String *)&local_60);
        if (cVar3 == '\0') {
          pCVar7 = (CowData<char32_t> *)(param_5 + (param_1 + lVar5) * 0x20);
          break;
        }
      }
      else if (*(int *)((CowData *)pCVar7 + 0x18) <= iVar6) {
        pCVar7 = (CowData<char32_t> *)(param_5 + (param_1 + lVar5) * 0x20);
        break;
      }
      this = (CowData<char32_t> *)((lVar5 + param_1) * 0x20 + param_5);
      if (*(long *)this != *(long *)pCVar7) {
        CowData<char32_t>::_ref(this,(CowData *)pCVar7);
      }
      if (*(long *)(this + 8) != *(long *)((CowData *)pCVar7 + 8)) {
        CowData<char32_t>::_ref(this + 8,(CowData *)pCVar7 + 8);
      }
      if (*(long *)(this + 0x10) != *(long *)((CowData *)pCVar7 + 0x10)) {
        CowData<char32_t>::_ref(this + 0x10,(CowData *)pCVar7 + 0x10);
      }
      uVar2 = *(undefined4 *)((CowData *)pCVar7 + 0x1c);
      *(undefined4 *)(this + 0x18) = *(undefined4 *)((CowData *)pCVar7 + 0x18);
      *(undefined4 *)(this + 0x1c) = uVar2;
      if (lVar8 <= param_2) break;
      lVar5 = lVar8;
      iVar6 = (int)local_50;
    } while( true );
  }
  CowData<char32_t>::_ref(pCVar7,(CowData *)&local_68);
  CowData<char32_t>::_ref(pCVar7 + 8,(CowData *)&local_60);
  CowData<char32_t>::_ref(pCVar7 + 0x10,(CowData *)&local_58);
  *(undefined8 *)(pCVar7 + 0x18) = local_50;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<EditorCommandPalette::CommandEntry, EditorCommandPalette::CommandEntryComparator,
   true>::introsort(long, long, EditorCommandPalette::CommandEntry*, long) const [clone .isra.0] */

void SortArray<EditorCommandPalette::CommandEntry,EditorCommandPalette::CommandEntryComparator,true>
     ::introsort(long param_1,long param_2,CommandEntry *param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  CommandEntry *pCVar8;
  long lVar9;
  CommandEntry *pCVar10;
  CowData *pCVar11;
  CommandEntry *pCVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  CowData<char32_t> *pCVar16;
  CommandEntry *pCVar17;
  long lVar18;
  CowData *pCVar19;
  long in_FS_OFFSET;
  long local_128;
  long local_108;
  CowData<char32_t> *local_100;
  CowData<char32_t> *local_f8;
  CowData<char32_t> *local_f0;
  long local_e8;
  long local_a8;
  long local_a0;
  long local_98;
  undefined4 local_90;
  float local_8c;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  long lStack_60;
  long local_58;
  undefined4 local_50;
  float local_4c;
  long local_40;
  
  lVar13 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar13) {
    if (param_4 != 0) {
      pCVar12 = param_3 + param_1 * 0x20;
      local_108 = param_2;
      local_e8 = param_4;
LAB_00101b6c:
      local_e8 = local_e8 + -1;
      pCVar8 = param_3 + ((lVar13 >> 1) + param_1) * 0x20;
      pCVar17 = param_3 + local_108 * 0x20 + -0x20;
      fVar1 = *(float *)(pCVar8 + 0x1c);
      fVar2 = *(float *)(pCVar17 + 0x1c);
      fVar3 = *(float *)(pCVar12 + 0x1c);
      if (fVar3 <= fVar1) {
        pCVar10 = pCVar12;
        if ((fVar3 <= fVar2) && (pCVar10 = pCVar17, fVar1 <= fVar2)) {
          pCVar10 = pCVar8;
        }
      }
      else {
        pCVar10 = pCVar8;
        if ((fVar1 <= fVar2) && (pCVar10 = pCVar17, fVar3 <= fVar2)) {
          pCVar10 = pCVar12;
        }
      }
      local_88 = 0;
      if (*(long *)pCVar10 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)pCVar10);
      }
      local_80 = 0;
      if (*(long *)((CowData *)pCVar10 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)pCVar10 + 8);
      }
      local_78 = 0;
      if (*(long *)((CowData *)pCVar10 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)pCVar10 + 0x10);
      }
      local_70 = *(undefined8 *)((CowData *)pCVar10 + 0x18);
      fVar1 = *(float *)((CowData *)pCVar10 + 0x1c);
      param_2 = param_1;
      pCVar17 = pCVar12;
      lVar13 = local_108;
      do {
        if (fVar1 < *(float *)((CowData<char32_t> *)pCVar17 + 0x1c)) {
          if (local_108 + -1 == param_2) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_00101c79;
          }
        }
        else {
LAB_00101c79:
          lVar13 = lVar13 + -1;
          pCVar8 = param_3 + lVar13 * 0x20;
          if (*(float *)(pCVar8 + 0x1c) <= fVar1 && fVar1 != *(float *)(pCVar8 + 0x1c)) {
            if (param_1 != lVar13) {
              pCVar10 = param_3 + lVar13 * 0x20 + -0x20;
              do {
                pCVar8 = pCVar10;
                lVar13 = lVar13 + -1;
                if (fVar1 < *(float *)(pCVar8 + 0x1c) || fVar1 == *(float *)(pCVar8 + 0x1c))
                goto LAB_00101cf0;
                pCVar10 = pCVar8 + -0x20;
              } while (param_1 != lVar13);
            }
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
          }
LAB_00101cf0:
          if (lVar13 <= param_2) goto LAB_00101ea0;
          lVar9 = *(long *)pCVar17;
          lVar14 = *(long *)((CowData<char32_t> *)pCVar17 + 8);
          local_68 = *(long *)pCVar17;
          lStack_60 = *(long *)((CowData<char32_t> *)pCVar17 + 8);
          lVar15 = *(long *)((CowData<char32_t> *)pCVar17 + 0x10);
          *(undefined1 (*) [16])pCVar17 = (undefined1  [16])0x0;
          fVar2 = *(float *)((CowData<char32_t> *)pCVar17 + 0x1c);
          *(undefined8 *)((CowData<char32_t> *)pCVar17 + 0x10) = 0;
          uVar5 = *(undefined4 *)((CowData<char32_t> *)pCVar17 + 0x18);
          lVar18 = *(long *)pCVar8;
          local_58 = lVar15;
          local_50 = uVar5;
          local_4c = fVar2;
          if (lVar18 != 0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pCVar17);
            *(undefined8 *)pCVar17 = *(undefined8 *)pCVar8;
            *(undefined8 *)pCVar8 = 0;
            lVar18 = *(long *)((CowData<char32_t> *)pCVar17 + 8);
          }
          if (lVar18 != *(long *)((CowData<char32_t> *)pCVar8 + 8)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pCVar17 + 8);
            *(undefined8 *)((CowData<char32_t> *)pCVar17 + 8) =
                 *(undefined8 *)((CowData<char32_t> *)pCVar8 + 8);
            *(undefined8 *)((CowData<char32_t> *)pCVar8 + 8) = 0;
          }
          if (*(long *)((CowData<char32_t> *)pCVar17 + 0x10) !=
              *(long *)((CowData<char32_t> *)pCVar8 + 0x10)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pCVar17 + 0x10);
            *(undefined8 *)((CowData<char32_t> *)pCVar17 + 0x10) =
                 *(undefined8 *)((CowData<char32_t> *)pCVar8 + 0x10);
            *(undefined8 *)((CowData<char32_t> *)pCVar8 + 0x10) = 0;
          }
          uVar4 = *(undefined4 *)((CowData<char32_t> *)pCVar8 + 0x1c);
          *(undefined4 *)((CowData<char32_t> *)pCVar17 + 0x18) =
               *(undefined4 *)((CowData<char32_t> *)pCVar8 + 0x18);
          *(undefined4 *)((CowData<char32_t> *)pCVar17 + 0x1c) = uVar4;
          if (*(long *)pCVar8 != lVar9) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pCVar8);
            local_68 = 0;
            *(long *)pCVar8 = lVar9;
          }
          if (*(long *)((CowData<char32_t> *)pCVar8 + 8) != lVar14) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pCVar8 + 8);
            lStack_60 = 0;
            *(long *)((CowData<char32_t> *)pCVar8 + 8) = lVar14;
          }
          if (lVar15 != *(long *)((CowData<char32_t> *)pCVar8 + 0x10)) {
            CowData<char32_t>::_unref((CowData<char32_t> *)pCVar8 + 0x10);
            *(long *)((CowData<char32_t> *)pCVar8 + 0x10) = lVar15;
            local_58 = 0;
          }
          *(undefined4 *)((CowData<char32_t> *)pCVar8 + 0x18) = uVar5;
          *(float *)((CowData<char32_t> *)pCVar8 + 0x1c) = fVar2;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
        pCVar17 = (CommandEntry *)((CowData<char32_t> *)pCVar17 + 0x20);
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_00101f4a:
    local_f0 = (CowData<char32_t> *)&local_78;
    local_f8 = (CowData<char32_t> *)&local_80;
    local_100 = (CowData<char32_t> *)&local_88;
    lVar14 = lVar13 + -2 >> 1;
    pCVar11 = (CowData *)(param_3 + (lVar14 + param_1) * 0x20);
    while( true ) {
      local_68 = 0;
      if (*(long *)pCVar11 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar11);
      }
      lStack_60 = 0;
      if (*(long *)(pCVar11 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_60,pCVar11 + 8);
      }
      local_58 = 0;
      if (*(long *)(pCVar11 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,pCVar11 + 0x10);
      }
      local_50 = *(undefined4 *)(pCVar11 + 0x18);
      local_4c = *(float *)(pCVar11 + 0x1c);
      pCVar11 = pCVar11 + -0x20;
      adjust_heap(param_1,lVar14,lVar13,(CowData<char32_t> *)&local_68,param_3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
    }
    pCVar11 = (CowData *)(param_3 + param_1 * 0x20);
    pCVar12 = param_3 + param_2 * 0x20 + -0x20;
    lVar13 = (param_2 + -1) - param_1;
    do {
      local_a8 = 0;
      if (*(long *)pCVar12 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)pCVar12);
      }
      local_a0 = 0;
      if (*(long *)((CowData<char32_t> *)pCVar12 + 8) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_a0,(CowData *)((CowData<char32_t> *)pCVar12 + 8));
      }
      local_98 = 0;
      local_128 = *(long *)((CowData<char32_t> *)pCVar12 + 0x10);
      if (local_128 != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_98,(CowData *)((CowData<char32_t> *)pCVar12 + 0x10));
        local_128 = local_98;
      }
      uVar5 = *(undefined4 *)((CowData<char32_t> *)pCVar12 + 0x18);
      fVar1 = *(float *)((CowData<char32_t> *)pCVar12 + 0x1c);
      uVar7 = *(undefined8 *)((CowData<char32_t> *)pCVar12 + 0x18);
      local_90 = uVar5;
      local_8c = fVar1;
      if (*(long *)pCVar12 != *(long *)pCVar11) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pCVar12,pCVar11);
      }
      if (*(long *)((CowData<char32_t> *)pCVar12 + 8) != *(long *)(pCVar11 + 8)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pCVar12 + 8,pCVar11 + 8);
      }
      if (*(long *)((CowData<char32_t> *)pCVar12 + 0x10) != *(long *)(pCVar11 + 0x10)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pCVar12 + 0x10,pCVar11 + 0x10);
      }
      local_88 = 0;
      uVar4 = *(undefined4 *)(pCVar11 + 0x1c);
      *(undefined4 *)((CowData<char32_t> *)pCVar12 + 0x18) = *(undefined4 *)(pCVar11 + 0x18);
      *(undefined4 *)((CowData<char32_t> *)pCVar12 + 0x1c) = uVar4;
      if (local_a8 != 0) {
        CowData<char32_t>::_ref(local_100,(CowData *)&local_a8);
      }
      local_80 = 0;
      if (local_a0 != 0) {
        CowData<char32_t>::_ref(local_f8,(CowData *)&local_a0);
      }
      local_78 = 0;
      if (local_128 != 0) {
        CowData<char32_t>::_ref(local_f0,(CowData *)&local_98);
        local_128 = local_78;
      }
      local_70 = uVar7;
      if (lVar13 < 3) {
        lVar9 = 0;
        lVar14 = 2;
        pCVar17 = (CommandEntry *)pCVar11;
      }
      else {
        lVar14 = 2;
        lVar15 = 0;
        do {
          pCVar17 = param_3 + (param_1 + lVar14 + -1) * 0x20;
          fVar2 = *(float *)(param_3 + (param_1 + lVar14) * 0x20 + 0x1c);
          lVar9 = lVar14 + -1;
          lVar18 = lVar14;
          if (fVar2 < *(float *)(pCVar17 + 0x1c) || fVar2 == *(float *)(pCVar17 + 0x1c)) {
            lVar18 = lVar14 + 1;
            lVar9 = lVar14;
            pCVar17 = param_3 + (param_1 + lVar14) * 0x20;
          }
          pCVar16 = (CowData<char32_t> *)(param_3 + (lVar15 + param_1) * 0x20);
          if (*(long *)pCVar16 != *(long *)pCVar17) {
            CowData<char32_t>::_ref(pCVar16,(CowData *)pCVar17);
          }
          if (*(long *)(pCVar16 + 8) != *(long *)((CowData *)pCVar17 + 8)) {
            CowData<char32_t>::_ref(pCVar16 + 8,(CowData *)pCVar17 + 8);
          }
          if (*(long *)(pCVar16 + 0x10) != *(long *)((CowData *)pCVar17 + 0x10)) {
            CowData<char32_t>::_ref(pCVar16 + 0x10,(CowData *)pCVar17 + 0x10);
          }
          uVar4 = *(undefined4 *)((CowData *)pCVar17 + 0x1c);
          lVar14 = lVar18 * 2;
          *(undefined4 *)(pCVar16 + 0x18) = *(undefined4 *)((CowData *)pCVar17 + 0x18);
          *(undefined4 *)(pCVar16 + 0x1c) = uVar4;
          lVar15 = lVar9;
        } while (lVar14 < lVar13);
      }
      lVar15 = lVar13 + -1;
      pCVar16 = (CowData<char32_t> *)pCVar17;
      if (lVar14 == lVar13) {
        pCVar16 = (CowData<char32_t> *)(param_3 + (param_1 + lVar15) * 0x20);
        CowData<char32_t>::_ref((CowData<char32_t> *)pCVar17,(CowData *)pCVar16);
        CowData<char32_t>::_ref((CowData<char32_t> *)pCVar17 + 8,(CowData *)pCVar16 + 8);
        CowData<char32_t>::_ref((CowData<char32_t> *)pCVar17 + 0x10,(CowData *)pCVar16 + 0x10);
        uVar4 = *(undefined4 *)((CowData *)pCVar16 + 0x1c);
        *(undefined4 *)((CowData<char32_t> *)pCVar17 + 0x18) =
             *(undefined4 *)((CowData *)pCVar16 + 0x18);
        *(undefined4 *)((CowData<char32_t> *)pCVar17 + 0x1c) = uVar4;
        lVar9 = lVar15;
      }
      local_68 = 0;
      if (local_88 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_100);
      }
      lStack_60 = 0;
      if (local_80 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&lStack_60,(CowData *)local_f8);
      }
      local_58 = 0;
      if (local_128 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)local_f0);
        local_128 = local_58;
      }
      lVar14 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
      local_50 = uVar5;
      local_4c = fVar1;
      while (lVar9 != 0) {
        lVar18 = lVar14 >> 1;
        pCVar19 = (CowData *)(param_3 + (param_1 + lVar18) * 0x20);
        pCVar16 = (CowData<char32_t> *)(param_3 + (lVar9 + param_1) * 0x20);
        if (*(float *)(pCVar19 + 0x1c) <= fVar1) break;
        if (*(long *)pCVar16 != *(long *)pCVar19) {
          CowData<char32_t>::_ref(pCVar16,pCVar19);
        }
        if (*(long *)(pCVar16 + 8) != *(long *)(pCVar19 + 8)) {
          CowData<char32_t>::_ref(pCVar16 + 8,pCVar19 + 8);
        }
        if (*(long *)(pCVar16 + 0x10) != *(long *)(pCVar19 + 0x10)) {
          CowData<char32_t>::_ref(pCVar16 + 0x10,pCVar19 + 0x10);
        }
        uVar4 = *(undefined4 *)(pCVar19 + 0x1c);
        *(undefined4 *)(pCVar16 + 0x18) = *(undefined4 *)(pCVar19 + 0x18);
        *(undefined4 *)(pCVar16 + 0x1c) = uVar4;
        lVar14 = (lVar18 + -1) - (lVar18 + -1 >> 0x3f);
        lVar9 = lVar18;
        pCVar16 = (CowData<char32_t> *)pCVar19;
      }
      if (*(long *)pCVar16 != local_68) {
        CowData<char32_t>::_ref(pCVar16,(CowData *)&local_68);
      }
      if (*(long *)(pCVar16 + 8) != lStack_60) {
        CowData<char32_t>::_ref(pCVar16 + 8,(CowData *)&lStack_60);
      }
      if (local_128 != *(long *)(pCVar16 + 0x10)) {
        CowData<char32_t>::_ref(pCVar16 + 0x10,(CowData *)&local_58);
      }
      pCVar12 = (CommandEntry *)((CowData<char32_t> *)pCVar12 + -0x20);
      *(undefined4 *)(pCVar16 + 0x18) = uVar5;
      *(float *)(pCVar16 + 0x1c) = fVar1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&lStack_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref(local_f0);
      CowData<char32_t>::_unref(local_f8);
      CowData<char32_t>::_unref(local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      bVar6 = 1 < lVar13;
      lVar13 = lVar15;
    } while (bVar6);
  }
LAB_0010258b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00101ea0:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  introsort(param_2,local_108,param_3,local_e8);
  lVar13 = param_2 - param_1;
  if (lVar13 < 0x11) goto LAB_0010258b;
  local_108 = param_2;
  if (local_e8 == 0) goto LAB_00101f4a;
  goto LAB_00101b6c;
}



/* SortArray<EditorCommandPalette::CommandEntry, EditorCommandPalette::CommandHistoryComparator,
   true>::introsort(long, long, EditorCommandPalette::CommandEntry*, long) const [clone .isra.0] */

void SortArray<EditorCommandPalette::CommandEntry,EditorCommandPalette::CommandHistoryComparator,true>
     ::introsort(long param_1,long param_2,CommandEntry *param_3,long param_4)

{
  String *this;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  CommandEntry *pCVar11;
  CommandEntry *pCVar12;
  long lVar13;
  CommandEntry *pCVar14;
  CowData *pCVar15;
  CowData<char32_t> *pCVar16;
  String *this_00;
  long lVar17;
  CommandEntry *pCVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  CowData<char32_t> *local_f0;
  long local_e8;
  long local_c0;
  CowData<char32_t> *local_b8;
  CowData<char32_t> *local_b0;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_40;
  
  lVar13 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar13) {
    local_e8 = param_2;
    if (param_4 != 0) {
      pCVar18 = param_3 + param_1 * 0x20;
      this = (String *)(pCVar18 + 8);
      local_c0 = param_2;
LAB_00102704:
      param_4 = param_4 + -1;
      pCVar14 = param_3 + local_c0 * 0x20 + -0x20;
      pCVar11 = param_3 + ((lVar13 >> 1) + param_1) * 0x20;
      iVar3 = *(int *)(pCVar11 + 0x18);
      iVar9 = *(int *)(pCVar18 + 0x18);
      pCVar12 = pCVar18;
      if (iVar9 == iVar3) {
        cVar8 = String::operator<(this,(String *)(pCVar11 + 8));
        if (cVar8 == '\0') {
          iVar9 = *(int *)(pCVar18 + 0x18);
          goto LAB_00102b01;
        }
        iVar9 = *(int *)(pCVar14 + 0x18);
        bVar20 = SBORROW4(*(int *)(pCVar11 + 0x18),iVar9);
        iVar7 = *(int *)(pCVar11 + 0x18) - iVar9;
        bVar19 = iVar7 == 0;
        if (bVar19) goto LAB_00102b45;
LAB_0010274d:
        pCVar12 = pCVar11;
        if (!bVar19 && bVar20 == iVar7 < 0) goto LAB_00102766;
        iVar7 = *(int *)(pCVar18 + 0x18);
        bVar19 = SBORROW4(iVar9,iVar7);
        iVar3 = iVar9 - iVar7;
        if (iVar9 != iVar7) goto LAB_0010275d;
LAB_00102b6b:
        cVar8 = String::operator<(this,(String *)(pCVar14 + 8));
        pCVar11 = pCVar18;
joined_r0x00102f19:
        pCVar12 = pCVar11;
        if (cVar8 == '\0') goto LAB_00102766;
      }
      else {
        if (iVar9 <= iVar3) {
LAB_00102b01:
          iVar3 = *(int *)(pCVar14 + 0x18);
          if (iVar9 == iVar3) {
            cVar8 = String::operator<(this,(String *)(pCVar14 + 8));
            if (cVar8 != '\0') goto LAB_00102766;
            bVar20 = SBORROW4(*(int *)(pCVar11 + 0x18),*(int *)(pCVar14 + 0x18));
            iVar9 = *(int *)(pCVar11 + 0x18) - *(int *)(pCVar14 + 0x18);
            bVar19 = iVar9 == 0;
            if (bVar19) goto LAB_00102f0a;
          }
          else {
            if (iVar3 < iVar9) goto LAB_00102766;
            iVar7 = *(int *)(pCVar11 + 0x18);
            bVar20 = SBORROW4(iVar7,iVar3);
            iVar9 = iVar7 - iVar3;
            bVar19 = iVar7 == iVar3;
            if (bVar19) {
LAB_00102f0a:
              cVar8 = String::operator<((String *)(pCVar11 + 8),(String *)(pCVar14 + 8));
              goto joined_r0x00102f19;
            }
          }
          pCVar12 = pCVar11;
          if (!bVar19 && bVar20 == iVar9 < 0) {
            pCVar12 = pCVar14;
          }
          goto LAB_00102766;
        }
        iVar9 = *(int *)(pCVar14 + 0x18);
        bVar20 = SBORROW4(iVar3,iVar9);
        iVar7 = iVar3 - iVar9;
        bVar19 = iVar3 == iVar9;
        if (!bVar19) goto LAB_0010274d;
LAB_00102b45:
        cVar8 = String::operator<((String *)(pCVar11 + 8),(String *)(pCVar14 + 8));
        pCVar12 = pCVar11;
        if (cVar8 != '\0') goto LAB_00102766;
        bVar19 = SBORROW4(*(int *)(pCVar14 + 0x18),*(int *)(pCVar18 + 0x18));
        iVar3 = *(int *)(pCVar14 + 0x18) - *(int *)(pCVar18 + 0x18);
        if (iVar3 == 0) goto LAB_00102b6b;
LAB_0010275d:
        pCVar12 = pCVar18;
        if (bVar19 == iVar3 < 0) goto LAB_00102766;
      }
      pCVar12 = pCVar14;
LAB_00102766:
      local_88 = 0;
      if (*(long *)pCVar12 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)pCVar12);
      }
      local_80 = 0;
      if (*(long *)((CowData *)pCVar12 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)pCVar12 + 8);
      }
      local_78 = 0;
      if (*(long *)((CowData *)pCVar12 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)pCVar12 + 0x10);
      }
      local_70 = *(undefined8 *)((CowData *)pCVar12 + 0x18);
      iVar9 = *(int *)((CowData *)pCVar12 + 0x18);
      iVar3 = *(int *)(pCVar18 + 0x18);
      bVar19 = SBORROW4(iVar9,iVar3);
      iVar7 = iVar9 - iVar3;
      this_00 = this;
      lVar13 = local_c0;
      local_e8 = param_1;
      if (iVar9 == iVar3) goto LAB_00102a07;
LAB_00102800:
      if (bVar19 != iVar7 < 0) goto LAB_00102a28;
LAB_00102806:
      lVar13 = lVar13 + -1;
      pCVar14 = param_3 + lVar13 * 0x20;
      do {
        if (iVar9 == *(int *)((CowData<char32_t> *)pCVar14 + 0x18)) {
          cVar8 = String::operator<((String *)&local_80,(String *)((CowData<char32_t> *)pCVar14 + 8)
                                   );
          if (cVar8 == '\0') {
LAB_00102857:
            if (local_e8 < lVar13) goto LAB_00102860;
            goto LAB_00102a9e;
          }
        }
        else if (iVar9 <= *(int *)((CowData<char32_t> *)pCVar14 + 0x18)) goto LAB_00102857;
        if (param_1 == lVar13) goto LAB_00102a70;
        lVar13 = lVar13 + -1;
        pCVar14 = (CommandEntry *)((CowData<char32_t> *)pCVar14 + -0x20);
        iVar9 = (int)local_70;
      } while( true );
    }
LAB_00102bb6:
    local_b0 = (CowData<char32_t> *)&local_78;
    local_b8 = (CowData<char32_t> *)&local_88;
    local_f0 = (CowData<char32_t> *)&local_80;
    lVar17 = lVar13 + -2 >> 1;
    pCVar15 = (CowData *)(param_3 + (lVar17 + param_1) * 0x20);
    while( true ) {
      local_68 = 0;
      if (*(long *)pCVar15 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar15);
      }
      uStack_60 = 0;
      if (*(long *)(pCVar15 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&uStack_60,pCVar15 + 8);
      }
      local_58 = 0;
      if (*(long *)(pCVar15 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,pCVar15 + 0x10);
      }
      local_50 = *(undefined4 *)(pCVar15 + 0x18);
      local_4c = *(undefined4 *)(pCVar15 + 0x1c);
      pCVar15 = pCVar15 + -0x20;
      adjust_heap(param_1,lVar17,lVar13,(CowData<char32_t> *)&local_68,param_3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (lVar17 == 0) break;
      lVar17 = lVar17 + -1;
    }
    pCVar15 = (CowData *)(param_3 + param_1 * 0x20);
    pCVar18 = param_3 + local_e8 * 0x20 + -0x20;
    lVar13 = (local_e8 + -1) - param_1;
    do {
      local_88 = 0;
      if (*(long *)pCVar18 != 0) {
        CowData<char32_t>::_ref(local_b8,(CowData *)pCVar18);
      }
      local_80 = 0;
      if (*(long *)((CowData<char32_t> *)pCVar18 + 8) != 0) {
        CowData<char32_t>::_ref(local_f0,(CowData *)((CowData<char32_t> *)pCVar18 + 8));
      }
      local_78 = 0;
      lVar17 = *(long *)((CowData<char32_t> *)pCVar18 + 0x10);
      if (*(long *)((CowData<char32_t> *)pCVar18 + 0x10) != 0) {
        CowData<char32_t>::_ref(local_b0,(CowData *)((CowData<char32_t> *)pCVar18 + 0x10));
        lVar17 = local_78;
      }
      uVar1 = *(undefined4 *)((CowData<char32_t> *)pCVar18 + 0x1c);
      uVar4 = *(undefined4 *)((CowData<char32_t> *)pCVar18 + 0x18);
      local_70 = *(undefined8 *)((CowData<char32_t> *)pCVar18 + 0x18);
      if (*(long *)pCVar18 != *(long *)pCVar15) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pCVar18,pCVar15);
      }
      if (*(long *)((CowData<char32_t> *)pCVar18 + 8) != *(long *)(pCVar15 + 8)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pCVar18 + 8,pCVar15 + 8);
      }
      if (*(long *)((CowData<char32_t> *)pCVar18 + 0x10) != *(long *)(pCVar15 + 0x10)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pCVar18 + 0x10,pCVar15 + 0x10);
      }
      uVar2 = *(undefined4 *)(pCVar15 + 0x1c);
      local_68 = 0;
      *(undefined4 *)((CowData<char32_t> *)pCVar18 + 0x18) = *(undefined4 *)(pCVar15 + 0x18);
      *(undefined4 *)((CowData<char32_t> *)pCVar18 + 0x1c) = uVar2;
      if (local_88 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_b8);
      }
      uStack_60 = 0;
      if (local_80 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&uStack_60,(CowData *)local_f0);
      }
      local_58 = 0;
      if (lVar17 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)local_b0);
      }
      pCVar18 = (CommandEntry *)((CowData<char32_t> *)pCVar18 + -0x20);
      local_50 = uVar4;
      local_4c = uVar1;
      adjust_heap(param_1,0,lVar13,(CowData<char32_t> *)&local_68,param_3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref(local_b0);
      CowData<char32_t>::_unref(local_f0);
      CowData<char32_t>::_unref(local_b8);
      bVar19 = 1 < lVar13;
      lVar13 = lVar13 + -1;
    } while (bVar19);
  }
LAB_00102ec3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102a70:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
  if (lVar13 <= local_e8) {
LAB_00102a9e:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    introsort(local_e8,local_c0,param_3,param_4);
    lVar13 = local_e8 - param_1;
    if (lVar13 < 0x11) goto LAB_00102ec3;
    local_c0 = local_e8;
    if (param_4 == 0) goto LAB_00102bb6;
    goto LAB_00102704;
  }
LAB_00102860:
  lVar5 = *(long *)((CowData<char32_t> *)this_00 + -8);
  lVar17 = *(long *)this_00;
  local_68 = *(undefined8 *)((CowData<char32_t> *)this_00 + -8);
  uStack_60 = *(undefined8 *)this_00;
  lVar6 = *(long *)((CowData<char32_t> *)this_00 + 8);
  *(undefined1 (*) [16])((CowData<char32_t> *)this_00 + -8) = (undefined1  [16])0x0;
  uVar1 = *(undefined4 *)((CowData<char32_t> *)this_00 + 0x14);
  *(undefined8 *)((CowData<char32_t> *)this_00 + 8) = 0;
  uVar4 = *(undefined4 *)((CowData<char32_t> *)this_00 + 0x10);
  lVar10 = *(long *)pCVar14;
  local_58 = lVar6;
  local_50 = uVar4;
  local_4c = uVar1;
  if (lVar10 != 0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this_00 + -8);
    *(undefined8 *)((CowData<char32_t> *)this_00 + -8) = *(undefined8 *)pCVar14;
    *(undefined8 *)pCVar14 = 0;
    lVar10 = *(long *)this_00;
  }
  if (lVar10 != *(long *)((CowData<char32_t> *)pCVar14 + 8)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
    *(undefined8 *)this_00 = *(undefined8 *)((CowData<char32_t> *)pCVar14 + 8);
    *(undefined8 *)((CowData<char32_t> *)pCVar14 + 8) = 0;
  }
  if (*(long *)((CowData<char32_t> *)this_00 + 8) != *(long *)((CowData<char32_t> *)pCVar14 + 0x10))
  {
    CowData<char32_t>::_unref((CowData<char32_t> *)this_00 + 8);
    *(undefined8 *)((CowData<char32_t> *)this_00 + 8) =
         *(undefined8 *)((CowData<char32_t> *)pCVar14 + 0x10);
    *(undefined8 *)((CowData<char32_t> *)pCVar14 + 0x10) = 0;
  }
  uVar2 = *(undefined4 *)((CowData<char32_t> *)pCVar14 + 0x1c);
  *(undefined4 *)((CowData<char32_t> *)this_00 + 0x10) =
       *(undefined4 *)((CowData<char32_t> *)pCVar14 + 0x18);
  *(undefined4 *)((CowData<char32_t> *)this_00 + 0x14) = uVar2;
  if (*(long *)pCVar14 != lVar5) {
    CowData<char32_t>::_unref((CowData<char32_t> *)pCVar14);
    local_68 = 0;
    *(long *)pCVar14 = lVar5;
  }
  if (*(long *)((CowData<char32_t> *)pCVar14 + 8) != lVar17) {
    CowData<char32_t>::_unref((CowData<char32_t> *)pCVar14 + 8);
    uStack_60 = 0;
    *(long *)((CowData<char32_t> *)pCVar14 + 8) = lVar17;
  }
  if (lVar6 != *(long *)((CowData<char32_t> *)pCVar14 + 0x10)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)pCVar14 + 0x10);
    *(long *)((CowData<char32_t> *)pCVar14 + 0x10) = lVar6;
    local_58 = 0;
  }
  *(undefined4 *)((CowData<char32_t> *)pCVar14 + 0x18) = uVar4;
  *(undefined4 *)((CowData<char32_t> *)pCVar14 + 0x1c) = uVar1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  pCVar16 = (CowData<char32_t> *)this_00;
  do {
    local_e8 = local_e8 + 1;
    this_00 = (String *)pCVar16 + 0x20;
    bVar19 = SBORROW4((int)local_70,*(int *)((String *)pCVar16 + 0x30));
    iVar7 = (int)local_70 - *(int *)((String *)pCVar16 + 0x30);
    iVar9 = (int)local_70;
    if (iVar7 != 0) goto LAB_00102800;
LAB_00102a07:
    cVar8 = String::operator<(this_00,(String *)&local_80);
    if (cVar8 == '\0') {
      iVar9 = (int)local_70;
      goto LAB_00102806;
    }
LAB_00102a28:
    pCVar16 = (CowData<char32_t> *)this_00;
  } while (local_c0 + -1 != local_e8);
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                   "bad comparison function; sorting will be broken",0,0);
  iVar9 = (int)local_70;
  goto LAB_00102806;
}



/* EditorCommandPalette::_bind_methods() */

void EditorCommandPalette::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_c8 [2];
  long *local_b8;
  Variant *local_a8;
  undefined *puStack_a0;
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  char **ppcStack_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_a8 = (Variant *)0x1088b3;
  puStack_a0 = PTR__LC66_00113718;
  local_98 = "binded_callable";
  pcStack_90 = "shortcut_text";
  ppcStack_60 = &pcStack_90;
  auStack_70._8_8_ = &local_98;
  auStack_70._0_8_ = &puStack_a0;
  uVar5 = (uint)(Variant *)&local_78;
  local_78 = &local_a8;
  D_METHODP((char *)local_c8,(char ***)"add_command",uVar5);
  Variant::Variant((Variant *)&local_78,"None");
  local_58 = (undefined1  [16])0x0;
  ppcStack_60 = (char **)0x0;
  local_a8 = (Variant *)&local_78;
  pMVar4 = create_method_bind<EditorCommandPalette,String,String,Callable,String>(_add_command);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_c8,&local_a8,1);
  if (Variant::needs_deinit[(int)ppcStack_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
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
  local_a8 = (Variant *)0x1088c0;
  puStack_a0 = (undefined *)0x0;
  local_78 = &local_a8;
  D_METHODP((char *)local_c8,(char ***)"remove_command",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<EditorCommandPalette,String>(remove_command);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorCommandPalette::add_command(String, String, Callable, Vector<Variant>, Ref<Shortcut>
   const&) */

void __thiscall
EditorCommandPalette::add_command
          (EditorCommandPalette *this,CowData *param_2,String *param_3,undefined8 param_4,
          long param_5,long *param_6)

{
  long lVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  long lVar5;
  CowData *pCVar6;
  undefined8 uVar7;
  char cVar8;
  CowData *pCVar9;
  Callable *this_00;
  ulong uVar10;
  long lVar11;
  CowData *pCVar12;
  CowData *pCVar13;
  CowData *pCVar14;
  CowData *pCVar15;
  long in_FS_OFFSET;
  CowData aCStack_b8 [8];
  undefined8 local_b0;
  HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
  *local_a8;
  CowData *local_a0;
  undefined8 local_98;
  CowData<char32_t> local_90 [8];
  long local_88 [2];
  ulong local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pCVar12 = aCStack_b8;
  pCVar9 = aCStack_b8;
  pCVar13 = aCStack_b8;
  pCVar15 = aCStack_b8;
  pCVar14 = aCStack_b8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = (HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
              *)(this + 0xdc8);
  local_78 = local_78 & 0xffffffff00000000;
  local_b0 = param_4;
  local_a0 = param_2;
  cVar8 = HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
          ::_lookup_pos(local_a8,param_3,(uint *)&local_78);
  pCVar6 = local_a0;
  if (cVar8 == '\0') {
    lVar11 = *(long *)(param_5 + 8);
    if (lVar11 == 0) {
      lVar11 = *(long *)local_a0;
    }
    else {
      lVar2 = *(long *)(lVar11 + -8);
      lVar1 = lVar2 * 8;
      uVar10 = lVar1 + 0x17;
      pCVar13 = aCStack_b8;
      while (pCVar12 != aCStack_b8 + -(uVar10 & 0xfffffffffffff000)) {
        pCVar9 = pCVar13 + -0x1000;
        *(undefined8 *)(pCVar13 + -8) = *(undefined8 *)(pCVar13 + -8);
        pCVar12 = pCVar13 + -0x1000;
        pCVar13 = pCVar13 + -0x1000;
      }
      uVar10 = (ulong)((uint)uVar10 & 0xff0);
      lVar5 = -uVar10;
      pCVar13 = pCVar9 + lVar5;
      pCVar14 = pCVar9 + lVar5;
      if (uVar10 != 0) {
        *(undefined8 *)(pCVar9 + -8) = *(undefined8 *)(pCVar9 + -8);
      }
      pCVar15 = (CowData *)((ulong)(pCVar9 + lVar5 + 0xf) & 0xfffffffffffffff0);
      if (0 < lVar2) {
        pCVar9 = pCVar15;
        do {
          *(long *)pCVar9 = lVar11;
          pCVar9 = pCVar9 + 8;
          lVar11 = lVar11 + 0x18;
        } while (pCVar15 + lVar1 != pCVar9);
      }
      lVar11 = *(long *)local_a0;
    }
    local_68 = (undefined1  [16])0x0;
    local_50 = 0;
    local_58 = 0;
    local_70 = 0;
    local_78 = 0;
    if (lVar11 != 0) {
      local_50 = 0;
      local_58 = 0;
      local_68 = (undefined1  [16])0x0;
      local_70 = 0;
      local_78 = 0;
      *(undefined8 *)(pCVar13 + -8) = 0x1033b7;
      local_a0 = pCVar15;
      CowData<char32_t>::_ref((CowData<char32_t> *)local_68,pCVar6);
      pCVar14 = pCVar13;
    }
    *(undefined8 *)(pCVar14 + -8) = 0x1033e4;
    Callable::bindp((Variant **)local_88,(int)local_b0);
    *(undefined8 *)(pCVar14 + -8) = 0x1033ef;
    Callable::operator=((Callable *)&local_78,(Callable *)local_88);
    *(undefined8 *)(pCVar14 + -8) = 0x1033f7;
    Callable::~Callable((Callable *)local_88);
    pCVar9 = (CowData *)*param_6;
    if (pCVar9 == (CowData *)0x0) {
      *(undefined8 *)(pCVar14 + -8) = 0x10356b;
      String::parse_latin1((String *)&local_58,"None");
    }
    else {
      if (pCVar9 != (CowData *)local_68._8_8_) {
        local_a0 = (CowData *)local_68._8_8_;
        local_68._8_8_ = pCVar9;
        *(undefined8 *)(pCVar14 + -8) = 0x10341c;
        cVar8 = RefCounted::reference();
        if (cVar8 == '\0') {
          local_68._8_8_ = 0;
        }
        if (local_a0 != (CowData *)0x0) {
          *(undefined8 *)(pCVar14 + -8) = 0x103443;
          cVar8 = RefCounted::unreference();
          if (cVar8 != '\0') {
            *(undefined8 *)(pCVar14 + -8) = 0x10359f;
            cVar8 = predelete_handler((Object *)local_a0);
            if (cVar8 != '\0') {
              pcVar4 = *(code **)(*(long *)local_a0 + 0x140);
              *(undefined8 *)(pCVar14 + -8) = 0x1035c1;
              (*pcVar4)(local_a0);
              *(undefined8 *)(pCVar14 + -8) = 0x1035cf;
              Memory::free_static(local_a0,false);
            }
          }
        }
      }
      *(undefined8 *)(pCVar14 + -8) = 0x103464;
      Shortcut::get_as_text();
      if (local_58 != local_88[0]) {
        *(undefined8 *)(pCVar14 + -8) = 0x103476;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        local_58 = local_88[0];
        local_88[0] = 0;
      }
      *(undefined8 *)(pCVar14 + -8) = 0x10348e;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    }
    *(undefined8 *)(pCVar14 + -8) = 0x10349d;
    this_00 = (Callable *)
              HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
              ::operator[](local_a8,param_3);
    *(undefined8 *)(pCVar14 + -8) = 0x1034ab;
    Callable::operator=(this_00,(Callable *)&local_78);
    *(undefined8 *)(pCVar14 + -8) = 0x1034b7;
    CowData<char32_t>::_ref((CowData<char32_t> *)(this_00 + 0x10),(CowData *)local_68);
    pOVar3 = *(Object **)(this_00 + 0x18);
    if ((Object *)local_68._8_8_ != pOVar3) {
      *(undefined8 *)(this_00 + 0x18) = local_68._8_8_;
      if ((Object *)local_68._8_8_ != (Object *)0x0) {
        *(undefined8 *)(pCVar14 + -8) = 0x1034d2;
        cVar8 = RefCounted::reference();
        if (cVar8 == '\0') {
          *(undefined8 *)(this_00 + 0x18) = 0;
        }
      }
      if (pOVar3 != (Object *)0x0) {
        *(undefined8 *)(pCVar14 + -8) = 0x1034e7;
        cVar8 = RefCounted::unreference();
        if (cVar8 != '\0') {
          *(undefined8 *)(pCVar14 + -8) = 0x103618;
          cVar8 = predelete_handler(pOVar3);
          if (cVar8 != '\0') {
            pcVar4 = *(code **)(*(long *)pOVar3 + 0x140);
            *(undefined8 *)(pCVar14 + -8) = 0x10362d;
            (*pcVar4)(pOVar3);
            *(undefined8 *)(pCVar14 + -8) = 0x103637;
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    *(undefined8 *)(pCVar14 + -8) = 0x1034fb;
    CowData<char32_t>::_ref((CowData<char32_t> *)(this_00 + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this_00 + 0x28) = local_50;
    *(undefined8 *)(pCVar14 + -8) = 0x103509;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if (local_68._8_8_ != 0) {
      *(undefined8 *)(pCVar14 + -8) = 0x103517;
      cVar8 = RefCounted::unreference();
      if (cVar8 != '\0') {
        uVar7 = local_68._8_8_;
        *(undefined8 *)(pCVar14 + -8) = 0x1035e4;
        cVar8 = predelete_handler((Object *)local_68._8_8_);
        if (cVar8 != '\0') {
          pcVar4 = *(code **)(*(long *)uVar7 + 0x140);
          *(undefined8 *)(pCVar14 + -8) = 0x1035f8;
          (*pcVar4)(uVar7);
          *(undefined8 *)(pCVar14 + -8) = 0x103602;
          Memory::free_static((void *)uVar7,false);
        }
      }
    }
    *(undefined8 *)(pCVar14 + -8) = 0x103527;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    *(undefined8 *)(pCVar14 + -8) = 0x10352f;
    Callable::~Callable((Callable *)&local_78);
  }
  else {
    local_88[0] = 0;
    String::parse_latin1((String *)local_88,"\' already exists. Unable to add it.");
    local_98 = 0;
    if (*(long *)local_a0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,local_a0);
    }
    operator+((char *)local_90,(String *)"The Command \'");
    String::operator+((String *)&local_78,(String *)local_90);
    _err_print_error("add_command","editor/editor_command_palette.cpp",0xe9,
                     "Condition \"commands.has(p_key_name)\" is true.",(Callable *)&local_78,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref(local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    pCVar14 = aCStack_b8;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(pCVar14 + -8) = &UNK_00103749;
    __stack_chk_fail();
  }
  return;
}



/* EditorCommandPalette::_add_command(String, String, Callable, String) */

void __thiscall
EditorCommandPalette::_add_command
          (EditorCommandPalette *this,CowData *param_2,String *param_3,Callable *param_4,
          CowData *param_5)

{
  Object *pOVar1;
  char cVar2;
  String *pSVar3;
  Callable *this_00;
  Variant *this_01;
  long in_FS_OFFSET;
  Dictionary local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  ulong local_a8 [2];
  CowData<char32_t> local_98 [8];
  Object *pOStack_90;
  long local_88;
  int local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8[0] = local_a8[0] & 0xffffffff00000000;
  cVar2 = HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
          ::_lookup_pos((HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
                         *)(this + 0xdc8),param_3,(uint *)local_a8);
  if (cVar2 == '\0') {
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_88 = 0;
    local_80 = 0;
    _local_98 = (undefined1  [16])0x0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref(local_98,param_2);
    }
    Callable::operator=((Callable *)local_a8,param_4);
    if (local_88 != *(long *)param_5) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,param_5);
    }
    pSVar3 = (String *)EditorSettings::get_singleton();
    Dictionary::Dictionary(local_d0);
    Variant::Variant((Variant *)local_78,local_d0);
    local_c0 = 0;
    local_b8 = "command_history";
    local_b0 = 0xf;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "command_palette";
    local_c8 = 0;
    local_b0 = 0xf;
    String::parse_latin1((StrRange *)&local_c8);
    EditorSettings::get_project_metadata((String *)local_58,pSVar3,(Variant *)&local_c8);
    Variant::operator_cast_to_Dictionary((Variant *)&local_b8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary(local_d0);
    Variant::Variant((Variant *)local_58,param_3);
    cVar2 = Dictionary::has((Variant *)&local_b8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar2 != '\0') {
      Variant::Variant((Variant *)local_58,param_3);
      this_01 = (Variant *)Dictionary::operator[]((Variant *)&local_b8);
      local_80 = Variant::operator_cast_to_int(this_01);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    this_00 = (Callable *)
              HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
              ::operator[]((HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
                            *)(this + 0xdc8),param_3);
    Callable::operator=(this_00,(Callable *)local_a8);
    CowData<char32_t>::_ref((CowData<char32_t> *)(this_00 + 0x10),(CowData *)local_98);
    pOVar1 = *(Object **)(this_00 + 0x18);
    if (pOStack_90 != pOVar1) {
      *(Object **)(this_00 + 0x18) = pOStack_90;
      if (pOStack_90 != (Object *)0x0) {
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *(undefined8 *)(this_00 + 0x18) = 0;
        }
      }
      if (pOVar1 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar1);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
    }
    CowData<char32_t>::_ref((CowData<char32_t> *)(this_00 + 0x20),(CowData *)&local_88);
    *(int *)(this_00 + 0x28) = local_80;
    Dictionary::~Dictionary((Dictionary *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (pOStack_90 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        pOVar1 = pOStack_90;
        cVar2 = predelete_handler(pOStack_90);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
    }
    CowData<char32_t>::_unref(local_98);
    Callable::~Callable((Callable *)local_a8);
  }
  else {
    local_b8 = (char *)0x0;
    String::parse_latin1((String *)&local_b8,"\' already exists. Unable to add it.");
    local_c8 = 0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,param_2);
    }
    operator+((char *)&local_c0,(String *)"The Command \'");
    String::operator+((String *)local_a8,(String *)&local_c0);
    _err_print_error("_add_command","editor/editor_command_palette.cpp",0xfd,
                     "Condition \"commands.has(p_key_name)\" is true.",(Callable *)local_a8,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorCommandPalette::execute_command(String const&) */

void __thiscall EditorCommandPalette::execute_command(EditorCommandPalette *this,String *param_1)

{
  HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
  *this_00;
  char cVar1;
  long *plVar2;
  long lVar3;
  Variant **ppVVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  double dVar6;
  undefined8 local_a8;
  undefined8 local_a0;
  String local_98 [8];
  Callable local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  int local_78 [4];
  char *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  this_00 = (HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
             *)(this + 0xdc8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (char *)((ulong)local_68 & 0xffffffff00000000);
  cVar1 = HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
          ::_lookup_pos(this_00,param_1,(uint *)&local_68);
  if (cVar1 == '\0') {
    local_78[0] = 0;
    local_78[1] = 0;
    String::parse_latin1((String *)local_78," not found.");
    String::operator+((String *)&local_68,param_1);
    _err_print_error("execute_command","editor/editor_command_palette.cpp",0x10e,
                     "Condition \"!commands.has(p_command_key)\" is true.",
                     (CowData<char32_t> *)&local_68,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  }
  else {
    plVar2 = (long *)OS::get_singleton();
    dVar6 = (double)(**(code **)(*plVar2 + 0x1f0))(plVar2);
    lVar3 = HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
            ::operator[](this_00,param_1);
    *(int *)(lVar3 + 0x28) = (int)dVar6;
    _save_history(this);
    local_50 = (undefined1  [16])0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    ppVVar4 = (Variant **)
              HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
              ::operator[](this_00,param_1);
    Callable::callp(ppVVar4,0,(Variant *)0x0,(CallError *)local_58);
    if (local_78[0] != 0) {
      uVar5 = EditorToaster::get_singleton();
      local_80 = 0;
      Variant::get_callable_error_text(local_90,ppVVar4,0,(CallError *)0x0);
      local_88 = 0;
      if (*(long *)param_1 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)param_1);
      }
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"");
      local_68 = "Failed to execute command \"%s\":\n%s.";
      local_a8 = 0;
      local_60 = 0x23;
      String::parse_latin1((StrRange *)&local_a8);
      TTR(local_98,(String *)&local_a8);
      vformat<String,String>
                ((CowData<char32_t> *)&local_68,local_98,(CowData<char32_t> *)&local_88,local_90);
      EditorToaster::popup_str
                (uVar5,(CowData<char32_t> *)&local_68,2,(CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorCommandPalette::remove_command(String) */

void __thiscall EditorCommandPalette::remove_command(EditorCommandPalette *this,String *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  Object *pOVar11;
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
  uint uVar24;
  char cVar25;
  uint uVar26;
  long lVar27;
  ulong uVar28;
  long *plVar29;
  uint uVar30;
  uint uVar31;
  uint *puVar32;
  long in_FS_OFFSET;
  String local_60 [8];
  undefined8 local_58;
  CowData<char32_t> local_50 [8];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = local_48 & 0xffffffff00000000;
  cVar25 = HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
           ::_lookup_pos((HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
                          *)(this + 0xdc8),param_2,(uint *)&local_48);
  if (cVar25 == '\0') {
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"\' doesn\'t exists. Unable to remove it.");
    local_48 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)param_2);
    operator+((char *)local_50,(String *)"The Command \'");
    String::operator+(local_60,(String *)local_50);
    _err_print_error("remove_command","editor/editor_command_palette.cpp",0xe3,
                     "Condition \"!commands.has(p_key_name)\" is true.",local_60,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    goto LAB_001040e0;
  }
  local_48 = local_48 & 0xffffffff00000000;
  cVar25 = HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
           ::_lookup_pos((HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
                          *)(this + 0xdc8),param_2,(uint *)&local_48);
  if (cVar25 == '\0') goto LAB_001040e0;
  lVar6 = *(long *)(this + 0xdd8);
  lVar7 = *(long *)(this + 0xdd0);
  uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xdf0) * 4);
  uVar28 = CONCAT44(0,uVar5);
  lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xdf0) * 8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (ulong)((uint)local_48 + 1) * lVar8;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar28;
  lVar27 = SUB168(auVar12 * auVar18,8);
  puVar32 = (uint *)(lVar6 + lVar27 * 4);
  uVar26 = SUB164(auVar12 * auVar18,8);
  uVar30 = *puVar32;
  uVar31 = (uint)local_48;
  if ((uVar30 != 0) &&
     (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar30 * lVar8, auVar19._8_8_ = 0,
     auVar19._0_8_ = uVar28, auVar14._8_8_ = 0,
     auVar14._0_8_ = (ulong)((uVar5 + uVar26) - SUB164(auVar13 * auVar19,8)) * lVar8,
     auVar20._8_8_ = 0, auVar20._0_8_ = uVar28, uVar24 = (uint)local_48,
     SUB164(auVar14 * auVar20,8) != 0)) {
    do {
      uVar31 = uVar26;
      puVar1 = (uint *)(lVar6 + (ulong)uVar24 * 4);
      *puVar32 = *puVar1;
      puVar2 = (undefined8 *)(lVar7 + lVar27 * 8);
      *puVar1 = uVar30;
      puVar3 = (undefined8 *)(lVar7 + (ulong)uVar24 * 8);
      uVar9 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar9;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)(uVar31 + 1) * lVar8;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar28;
      lVar27 = SUB168(auVar17 * auVar23,8);
      puVar32 = (uint *)(lVar6 + lVar27 * 4);
      uVar26 = SUB164(auVar17 * auVar23,8);
      uVar30 = *puVar32;
      if (uVar30 == 0) break;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar30 * lVar8;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar28;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)((uVar26 + uVar5) - SUB164(auVar15 * auVar21,8)) * lVar8;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar28;
      uVar24 = uVar31;
    } while (SUB164(auVar16 * auVar22,8) != 0);
    local_48 = CONCAT44(local_48._4_4_,uVar31);
  }
  uVar28 = (ulong)uVar31;
  plVar4 = (long *)(lVar7 + uVar28 * 8);
  *(undefined4 *)(lVar6 + uVar28 * 4) = 0;
  plVar29 = (long *)*plVar4;
  if (*(long **)(this + 0xde0) == plVar29) {
    *(long *)(this + 0xde0) = *plVar29;
    plVar29 = (long *)*plVar4;
    if (*(long **)(this + 0xde8) == plVar29) goto LAB_00104108;
LAB_00104060:
    plVar10 = (long *)plVar29[1];
  }
  else {
    if (*(long **)(this + 0xde8) != plVar29) goto LAB_00104060;
LAB_00104108:
    *(long *)(this + 0xde8) = plVar29[1];
    plVar29 = (long *)*plVar4;
    plVar10 = (long *)plVar29[1];
  }
  if (plVar10 != (long *)0x0) {
    *plVar10 = *plVar29;
    plVar29 = (long *)*plVar4;
  }
  if (*plVar29 != 0) {
    *(long *)(*plVar29 + 8) = plVar29[1];
    plVar29 = (long *)*plVar4;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar29 + 7));
  if ((plVar29[6] != 0) && (cVar25 = RefCounted::unreference(), cVar25 != '\0')) {
    pOVar11 = (Object *)plVar29[6];
    cVar25 = predelete_handler(pOVar11);
    if (cVar25 != '\0') {
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar29 + 5));
  Callable::~Callable((Callable *)(plVar29 + 3));
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar29 + 2));
  Memory::free_static(plVar29,false);
  *(undefined8 *)(*(long *)(this + 0xdd0) + uVar28 * 8) = 0;
  *(int *)(this + 0xdf4) = *(int *)(this + 0xdf4) + -1;
LAB_001040e0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Variant>::_copy_on_write(CowData<Variant> *this)

{
  Variant *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  Variant *pVVar5;
  ulong uVar6;
  long lVar7;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar6 = lVar1 * 0x18 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar4 = 0;
  lVar7 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      this_00 = (Variant *)((long)(puVar3 + 2) + lVar4);
      lVar7 = lVar7 + 1;
      pVVar5 = (Variant *)(*(long *)this + lVar4);
      lVar4 = lVar4 + 0x18;
      Variant::Variant(this_00,pVVar5);
    } while (lVar1 != lVar7);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector<Variant> varray<Ref<InputEventShortcut>, bool>(Ref<InputEventShortcut>, bool) [clone
   .isra.0] */

long varray<Ref<InputEventShortcut>,bool>(long param_1,Object *param_2,bool param_3)

{
  CowData<Variant> *this;
  Variant *pVVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  this = (CowData<Variant> *)(param_1 + 8);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  Variant::Variant(local_88,param_2);
  Variant::Variant(local_70,param_3);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  if (*(long *)(param_1 + 8) == 0) {
    CowData<Variant>::_copy_on_write(this);
LAB_001045f8:
    puVar6 = (undefined8 *)Memory::alloc_static(0x50,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      goto LAB_001044b0;
    }
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)(param_1 + 8) = puVar6 + 2;
    *(undefined4 *)(puVar6 + 2) = 0;
    *(undefined1 (*) [16])(puVar6 + 3) = (undefined1  [16])0x0;
    lVar5 = 1;
LAB_0010446c:
    lVar8 = lVar5 * 0x18;
    do {
      lVar5 = lVar5 + 1;
      puVar7 = (undefined4 *)(*(long *)(param_1 + 8) + lVar8);
      lVar8 = lVar8 + 0x18;
      *puVar7 = 0;
      *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    } while (lVar5 != 2);
LAB_0010449b:
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 == 0) {
      _DAT_00000000 = 0;
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 8) + -8);
    if (lVar5 == 2) goto LAB_001044b0;
    CowData<Variant>::_copy_on_write(this);
    if (lVar5 * 0x18 == 0) {
      lVar8 = 0;
      if (1 < lVar5) goto LAB_0010452a;
LAB_001045d0:
      if (lVar5 == 0) goto LAB_001045f8;
      iVar3 = CowData<Variant>::_realloc(this,0x40);
      if (iVar3 != 0) goto LAB_001044b0;
    }
    else {
      uVar4 = lVar5 * 0x18 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar8 = (uVar4 | uVar4 >> 0x20) + 1;
      if (1 < lVar5) {
LAB_0010452a:
        lVar5 = *(long *)(param_1 + 8);
        uVar4 = 2;
        while( true ) {
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (*(ulong *)(lVar5 + -8) <= uVar4) break;
          if (Variant::needs_deinit[*(int *)(lVar5 + uVar4 * 0x18)] != '\0') {
            Variant::_clear_internal();
            lVar5 = *(long *)(param_1 + 8);
          }
          uVar4 = uVar4 + 1;
        }
        if (lVar8 != 0x40) {
          iVar3 = CowData<Variant>::_realloc(this,0x40);
          if (iVar3 != 0) goto LAB_001044b0;
          lVar5 = *(long *)(param_1 + 8);
          if (lVar5 == 0) {
            lVar5 = varray<Ref<InputEventShortcut>,bool>();
            return lVar5;
          }
        }
        *(undefined8 *)(lVar5 + -8) = 2;
        goto LAB_001044b0;
      }
      if (lVar8 != 0x40) goto LAB_001045d0;
    }
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar8 = *(long *)(lVar5 + -8);
    if (lVar8 < 2) {
      puVar7 = (undefined4 *)(lVar5 + lVar8 * 0x18);
      *puVar7 = 0;
      *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
      lVar5 = lVar8 + 1;
      if (lVar8 != 1) goto LAB_0010446c;
      goto LAB_0010449b;
    }
  }
  *(undefined8 *)(lVar5 + -8) = 2;
LAB_001044b0:
  CowData<Variant>::_copy_on_write(this);
  pVVar1 = *(Variant **)(param_1 + 8);
  Variant::operator=(pVVar1,local_88);
  pVVar9 = (Variant *)local_40;
  Variant::operator=(pVVar1 + 0x18,local_70);
  do {
    pVVar1 = pVVar9 + -0x18;
    pVVar9 = pVVar9 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar9 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* EditorCommandPalette::add_shortcut_command(String const&, String const&, Ref<Shortcut>) */

long * EditorCommandPalette::add_shortcut_command
                 (long *param_1,EditorCommandPalette *param_2,CowData *param_3,CowData *param_4,
                 long *param_5)

{
  Object *pOVar1;
  Ref *pRVar2;
  char cVar3;
  CowData<char32_t> *this;
  Object *pOVar4;
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  Object *local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  Ref *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((byte)param_2[0x2fa] & 0x40) == 0) {
    local_78 = 0;
    if (*(long *)param_4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,param_4);
    }
    local_70 = 0;
    if (*(long *)param_3 == 0) {
      local_68[0] = 0;
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,param_3);
      local_68[0] = 0;
      if (local_70 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_68,(CowData *)&local_70);
      }
    }
    local_b0 = (CowData<char32_t> *)&local_70;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)local_68);
    local_50[0] = (Ref *)0x0;
    Ref<Shortcut>::operator=((Ref<Shortcut> *)local_50,(Ref *)*param_5);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    this = (CowData<char32_t> *)
           HashMap<String,Pair<String,Ref<Shortcut>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Pair<String,Ref<Shortcut>>>>>
           ::operator[]((HashMap<String,Pair<String,Ref<Shortcut>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Pair<String,Ref<Shortcut>>>>>
                         *)(param_2 + 0xdf8),(String *)&local_78);
    CowData<char32_t>::_ref(this,(CowData *)&local_58);
    pRVar2 = local_50[0];
    Ref<Shortcut>::operator=((Ref<Shortcut> *)(this + 8),local_50[0]);
    if (pRVar2 != (Ref *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)pRVar2);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
          Memory::free_static(pRVar2,false);
        }
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  else {
    local_80 = (Object *)0x0;
    Ref<InputEventShortcut>::instantiate<>((Ref<InputEventShortcut> *)&local_80);
    pOVar1 = local_80;
    local_58 = 0;
    Ref<Shortcut>::operator=((Ref<Shortcut> *)&local_58,(Ref *)*param_5);
    InputEventShortcut::set_shortcut(pOVar1,(Ref<Shortcut> *)&local_58);
    Ref<Shortcut>::unref((Ref<Shortcut> *)&local_58);
    cVar3 = RefCounted::reference();
    pOVar4 = (Object *)0x0;
    if (cVar3 != '\0') {
      pOVar4 = pOVar1;
    }
    varray<Ref<InputEventShortcut>,bool>((Ref<Shortcut> *)&local_58,pOVar4,0);
    create_custom_callable_function_pointer<Viewport,Ref<InputEvent>const&,bool>
              ((Viewport *)local_68,*(char **)(EditorNode::singleton + 600),
               (_func_void_Ref_ptr_bool *)"&Viewport::push_input");
    local_70 = 0;
    if (*(long *)param_4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,param_4);
    }
    local_78 = 0;
    if (*(long *)param_3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,param_3);
    }
    add_command(param_2,(CowData<char32_t> *)&local_78,(CowData<char32_t> *)&local_70,
                (Viewport *)local_68,(Ref<Shortcut> *)&local_58,param_5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    Callable::~Callable((Callable *)local_68);
    CowData<Variant>::_unref((CowData<Variant> *)local_50);
    if (pOVar4 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar4);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar1);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *param_1 = 0;
  if (*param_5 != 0) {
    *param_1 = *param_5;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *param_1 = 0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ED_SHORTCUT_AND_COMMAND(String const&, String const&, Key, String) */

long * ED_SHORTCUT_AND_COMMAND
                 (long *param_1,undefined8 param_2,CowData *param_3,undefined4 param_4,
                 CowData<char32_t> *param_5)

{
  long lVar1;
  char cVar2;
  EditorCommandPalette *pEVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)param_5;
  if (((lVar1 == 0) || (*(uint *)(lVar1 + -8) < 2)) && (lVar1 != *(long *)param_3)) {
    CowData<char32_t>::_ref(param_5,param_3);
  }
  ED_SHORTCUT(param_1,param_2,param_3,param_4,0);
  if (EditorCommandPalette::singleton == (EditorCommandPalette *)0x0) {
    pEVar3 = (EditorCommandPalette *)operator_new(0xe28,"");
    EditorCommandPalette::EditorCommandPalette(pEVar3);
    postinitialize_handler((Object *)pEVar3);
    EditorCommandPalette::singleton = pEVar3;
  }
  pEVar3 = EditorCommandPalette::singleton;
  pOVar4 = (Object *)*param_1;
  if ((pOVar4 == (Object *)0x0) ||
     (local_40 = pOVar4, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    local_40 = (Object *)0x0;
    pOVar4 = (Object *)0x0;
  }
  EditorCommandPalette::add_shortcut_command(&local_38,pEVar3,param_5,param_2,&local_40);
  if (((local_38 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
    (**(code **)(*(long *)local_38 + 0x140))(local_38);
    Memory::free_static(local_38,false);
  }
  if (((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* ED_SHORTCUT_ARRAY_AND_COMMAND(String const&, String const&, Vector<int> const&, String) */

String * ED_SHORTCUT_ARRAY_AND_COMMAND
                   (String *param_1,String *param_2,CowData *param_3,bool param_4,
                   CowData<char32_t> *param_5)

{
  long lVar1;
  char cVar2;
  EditorCommandPalette *pEVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)param_5;
  if (((lVar1 == 0) || (*(uint *)(lVar1 + -8) < 2)) && (lVar1 != *(long *)param_3)) {
    CowData<char32_t>::_ref(param_5,param_3);
  }
  ED_SHORTCUT_ARRAY(param_1,param_2,param_3,param_4);
  if (EditorCommandPalette::singleton == (EditorCommandPalette *)0x0) {
    pEVar3 = (EditorCommandPalette *)operator_new(0xe28,"");
    EditorCommandPalette::EditorCommandPalette(pEVar3);
    postinitialize_handler((Object *)pEVar3);
    EditorCommandPalette::singleton = pEVar3;
  }
  pEVar3 = EditorCommandPalette::singleton;
  pOVar4 = *(Object **)param_1;
  if ((pOVar4 == (Object *)0x0) ||
     (local_40 = pOVar4, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    local_40 = (Object *)0x0;
    pOVar4 = (Object *)0x0;
  }
  EditorCommandPalette::add_shortcut_command(&local_38,pEVar3,param_5,param_2,&local_40);
  if (((local_38 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
    (**(code **)(*(long *)local_38 + 0x140))(local_38);
    Memory::free_static(local_38,false);
  }
  if (((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* EditorCommandPalette::register_shortcuts_as_command() */

void __thiscall EditorCommandPalette::register_shortcuts_as_command(EditorCommandPalette *this)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  InputEventShortcut *this_00;
  String *pSVar5;
  Variant *this_01;
  Object *pOVar6;
  long lVar7;
  int iVar8;
  Object *pOVar9;
  Object *pOVar10;
  long *plVar11;
  long in_FS_OFFSET;
  Dictionary *local_f0;
  Variant *local_e0;
  long local_b8;
  Object *local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 local_98 [2];
  Object *local_88;
  CowData<Variant> local_80 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  plVar11 = *(long **)(this + 0xe10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar11 != (long *)0x0) {
    do {
      local_b8 = 0;
      lVar7 = plVar11[3];
      if (plVar11[3] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)(plVar11 + 3));
        lVar7 = local_b8;
      }
      pOVar6 = (Object *)plVar11[4];
      if ((pOVar6 == (Object *)0x0) ||
         (local_b0 = pOVar6, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_b0 = (Object *)0x0;
        pOVar6 = (Object *)0x0;
        this_00 = (InputEventShortcut *)operator_new(0x250,"");
        InputEventShortcut::InputEventShortcut(this_00);
        postinitialize_handler((Object *)this_00);
        cVar3 = RefCounted::init_ref();
        if (cVar3 != '\0') goto LAB_00104e4f;
        pOVar10 = (Object *)0x0;
LAB_00105063:
        local_88 = (Object *)0x0;
        pOVar6 = (Object *)0x0;
      }
      else {
        pOVar10 = (Object *)0x0;
        this_00 = (InputEventShortcut *)operator_new(0x250,"");
        InputEventShortcut::InputEventShortcut(this_00);
        postinitialize_handler((Object *)this_00);
        cVar3 = RefCounted::init_ref();
        if (cVar3 != '\0') {
LAB_00104e4f:
          cVar3 = RefCounted::reference();
          pOVar10 = (Object *)0x0;
          if (cVar3 != '\0') {
            pOVar10 = (Object *)this_00;
          }
          cVar3 = RefCounted::unreference();
          if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
            Memory::free_static(this_00,false);
          }
          if (pOVar6 == (Object *)0x0) goto LAB_00105063;
        }
        local_88 = pOVar6;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_88 = (Object *)0x0;
        }
      }
      InputEventShortcut::set_shortcut(pOVar10);
      if (((local_88 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar9 = local_88, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_88), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      cVar3 = RefCounted::reference();
      pOVar9 = (Object *)0x0;
      if (cVar3 != '\0') {
        pOVar9 = pOVar10;
      }
      varray<Ref<InputEventShortcut>,bool>(&local_88,pOVar9,0);
      create_custom_callable_function_pointer<Viewport,Ref<InputEvent>const&,bool>
                ((Viewport *)local_98,*(char **)(EditorNode::singleton + 600),
                 (_func_void_Ref_ptr_bool *)"&Viewport::push_input");
      local_a0 = 0;
      if (plVar11[2] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(plVar11 + 2));
      }
      local_a8 = 0;
      if (lVar7 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_b8);
      }
      add_command(this,(CowData<char32_t> *)&local_a8,(CowData<char32_t> *)&local_a0,
                  (Viewport *)local_98,&local_88,&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      Callable::~Callable((Callable *)local_98);
      CowData<Variant>::_unref(local_80);
      if (((pOVar9 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar10), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      if (((pOVar6 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  local_e0 = (Variant *)&local_a8;
  local_f0 = (Dictionary *)&local_a0;
  if ((*(long *)(this + 0xe00) != 0) && (*(int *)(this + 0xe24) != 0)) {
    lVar7 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe20) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0xe08) + lVar7) != 0) {
          *(int *)(*(long *)(this + 0xe08) + lVar7) = 0;
          pvVar2 = *(void **)(*(long *)(this + 0xe00) + lVar7 * 2);
          if ((*(long *)((long)pvVar2 + 0x20) != 0) &&
             (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
            pOVar6 = *(Object **)((long)pvVar2 + 0x20);
            cVar3 = predelete_handler(pOVar6);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x18));
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(*(long *)(this + 0xe00) + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0xe24) = 0;
    *(undefined1 (*) [16])(this + 0xe10) = (undefined1  [16])0x0;
  }
  pSVar5 = (String *)EditorSettings::get_singleton();
  Dictionary::Dictionary(local_f0);
  Variant::Variant((Variant *)local_78,local_f0);
  local_88 = (Object *)0x0;
  String::parse_latin1((String *)&local_88,"command_history");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"command_palette");
  EditorSettings::get_project_metadata((String *)local_58,pSVar5,(Variant *)local_98);
  Variant::operator_cast_to_Dictionary(local_e0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary(local_f0);
  Dictionary::keys();
  for (iVar8 = 0; iVar4 = Array::size(), iVar8 < iVar4; iVar8 = iVar8 + 1) {
    Array::operator[]((int)(String *)local_98);
    Variant::operator_cast_to_String((Variant *)&local_88);
    local_a0 = local_a0 & 0xffffffff00000000;
    cVar3 = HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
            ::_lookup_pos((HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
                           *)(this + 0xdc8),(String *)&local_88,(uint *)local_f0);
    if (cVar3 != '\0') {
      Variant::Variant((Variant *)local_58,(String *)&local_88);
      this_01 = (Variant *)Dictionary::operator[](local_e0);
      iVar4 = Variant::operator_cast_to_int(this_01);
      lVar7 = HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
              ::operator[]((HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
                            *)(this + 0xdc8),(String *)&local_88);
      *(int *)(lVar7 + 0x28) = iVar4;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  Array::~Array((Array *)local_98);
  Dictionary::~Dictionary((Dictionary *)local_e0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<EditorCommandPalette::CommandEntry>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorCommandPalette::CommandEntry>::_copy_on_write
          (CowData<EditorCommandPalette::CommandEntry> *this)

{
  undefined4 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  CowData *pCVar5;
  ulong uVar6;
  long lVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 0x20 != 0) {
    uVar6 = lVar2 * 0x20 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        pCVar5 = (CowData *)(lVar7 * 0x20 + *(long *)this);
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar5 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar5);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar5 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar5 + 8);
        }
        *(undefined8 *)(this_00 + 0x10) = 0;
        if (*(long *)(pCVar5 + 0x10) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x10,pCVar5 + 0x10);
        }
        uVar1 = *(undefined4 *)(pCVar5 + 0x1c);
        lVar7 = lVar7 + 1;
        *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)(pCVar5 + 0x18);
        *(undefined4 *)(this_00 + 0x1c) = uVar1;
        this_00 = this_00 + 0x20;
      } while (lVar2 != lVar7);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorCommandPalette::_update_command_search(String const&) */

void __thiscall
EditorCommandPalette::_update_command_search(EditorCommandPalette *this,String *param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  char cVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  long *plVar24;
  undefined8 uVar25;
  long lVar26;
  uint uVar27;
  CowData<char32_t> *pCVar28;
  CowData *pCVar29;
  int *piVar30;
  CowData<char32_t> *pCVar31;
  CowData *pCVar32;
  CowData *pCVar33;
  undefined8 *puVar34;
  long lVar35;
  long lVar36;
  CowData<char32_t> *pCVar37;
  ulong uVar38;
  CowData *pCVar39;
  uint uVar40;
  CowData *pCVar41;
  long in_FS_OFFSET;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  CowData *local_190;
  CowData<char32_t> *local_188;
  CowData<char32_t> *local_178;
  CowData<EditorCommandPalette::CommandEntry> *local_160;
  long local_150;
  String local_100 [16];
  CowData<char32_t> *local_f0;
  undefined1 local_e8 [16];
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  float local_ac;
  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
  local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0xdf4) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_update_command_search","editor/editor_command_palette.cpp",0x43,
                       "Condition \"commands.is_empty()\" is true.",0,0);
      return;
    }
    goto LAB_001074f4;
  }
  local_80 = 2;
  local_f0 = (CowData<char32_t> *)0x0;
  plVar24 = *(long **)(this + 0xde0);
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  if (plVar24 == (long *)0x0) {
    Tree::get_root();
    TreeItem::clear_children();
LAB_00107346:
    local_160 = (CowData<EditorCommandPalette::CommandEntry> *)&local_f0;
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
    CowData<EditorCommandPalette::CommandEntry>::_unref(local_160);
  }
  else {
    pCVar31 = (CowData<char32_t> *)0x0;
    pCVar28 = (CowData<char32_t> *)(local_e8 + 8);
    do {
      local_d8 = 0;
      local_d0 = 0;
      local_e8 = (undefined1  [16])0x0;
      lVar35 = plVar24[2];
      if (plVar24[2] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_e8,(CowData *)(plVar24 + 2));
        lVar35 = local_e8._8_8_;
      }
      if (plVar24[5] != lVar35) {
        CowData<char32_t>::_ref(pCVar28,(CowData *)(plVar24 + 5));
      }
      if (local_d8 != plVar24[7]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)(plVar24 + 7));
      }
      local_d0 = CONCAT44(local_d0._4_4_,(int)plVar24[8]);
      cVar18 = String::is_subsequence_ofn(param_1);
      cVar19 = String::is_subsequence_ofn(param_1);
      if ((cVar18 != '\0') || (cVar19 != '\0')) {
        if ((*(long *)param_1 != 0) && (1 < *(uint *)(*(long *)param_1 + -8))) {
          fVar43 = 0.0;
          if (cVar18 == '\0') {
LAB_00105819:
            String::to_lower();
            fVar42 = (float)_score_path(this,param_1,(String *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          }
          else {
            String::to_lower();
            fVar43 = (float)_score_path(this,param_1,(String *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            fVar42 = 0.0;
            if (cVar19 != '\0') goto LAB_00105819;
          }
          if (fVar43 <= fVar42) {
            fVar43 = fVar42;
          }
          local_d0 = CONCAT44(fVar43,(int)local_d0);
        }
        local_188 = (CowData<char32_t> *)&local_c8;
        local_c8 = 0;
        if (local_e8._0_8_ != 0) {
          CowData<char32_t>::_ref(local_188,(CowData *)local_e8);
        }
        local_c0 = 0;
        if (local_e8._8_8_ != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)pCVar28);
        }
        local_b8 = 0;
        if (local_d8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d8);
        }
        fVar43 = local_d0._4_4_;
        iVar21 = (int)local_d0;
        local_b0 = (int)local_d0;
        local_ac = local_d0._4_4_;
        if (pCVar31 == (CowData<char32_t> *)0x0) {
          lVar35 = 1;
        }
        else {
          lVar35 = *(long *)(pCVar31 + -8) + 1;
        }
        iVar20 = CowData<EditorCommandPalette::CommandEntry>::resize<false>
                           ((CowData<EditorCommandPalette::CommandEntry> *)&local_f0,lVar35);
        pCVar31 = local_f0;
        if (iVar20 == 0) {
          if (local_f0 == (CowData<char32_t> *)0x0) {
            lVar36 = -1;
            lVar35 = 0;
          }
          else {
            lVar35 = *(long *)(local_f0 + -8);
            lVar36 = lVar35 + -1;
            if (-1 < lVar36) {
              CowData<EditorCommandPalette::CommandEntry>::_copy_on_write
                        ((CowData<EditorCommandPalette::CommandEntry> *)&local_f0);
              pCVar31 = local_f0;
              pCVar37 = local_f0 + lVar36 * 0x20;
              CowData<char32_t>::_ref(pCVar37,(CowData *)local_188);
              CowData<char32_t>::_ref(pCVar37 + 8,(CowData *)&local_c0);
              CowData<char32_t>::_ref(pCVar37 + 0x10,(CowData *)&local_b8);
              *(int *)(pCVar37 + 0x18) = iVar21;
              *(float *)(pCVar37 + 0x1c) = fVar43;
              goto LAB_001059b3;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar36,lVar35,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
          pCVar31 = local_f0;
        }
LAB_001059b3:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref(local_188);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref(pCVar28);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
      plVar24 = (long *)*plVar24;
    } while (plVar24 != (long *)0x0);
    iVar21 = Tree::get_root();
    TreeItem::clear_children();
    if (pCVar31 == (CowData<char32_t> *)0x0) goto LAB_00107346;
    lVar35 = *(long *)(pCVar31 + -8);
    if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
      CowData<EditorCommandPalette::CommandEntry>::_copy_on_write
                ((CowData<EditorCommandPalette::CommandEntry> *)&local_f0);
      pCVar31 = local_f0;
      local_178 = local_f0;
      if (lVar35 != 0) {
        lVar26 = 0;
        lVar36 = lVar35;
        if (lVar35 != 1) {
          do {
            lVar36 = lVar36 >> 1;
            lVar26 = lVar26 + 1;
          } while (lVar36 != 1);
          SortArray<EditorCommandPalette::CommandEntry,EditorCommandPalette::CommandHistoryComparator,true>
          ::introsort(0,lVar35,(CommandEntry *)local_f0,lVar26 * 2);
          if (lVar35 < 0x11) {
            lVar36 = 1;
            pCVar33 = (CowData *)pCVar31;
            do {
              pCVar32 = pCVar33 + 0x20;
              local_c8 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,pCVar32);
              local_c0 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,pCVar33 + 0x28);
              local_b8 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,pCVar33 + 0x30);
              local_b0 = *(int *)(pCVar33 + 0x38);
              local_ac = *(float *)(pCVar33 + 0x3c);
              lVar26 = lVar36;
              pCVar29 = pCVar32;
              if (*(int *)(pCVar31 + 0x18) == local_b0) {
                cVar18 = String::operator<((String *)&local_c0,(String *)(pCVar31 + 8));
                if (cVar18 != '\0') goto LAB_00106b98;
LAB_00106ccf:
                CommandEntry::CommandEntry((CommandEntry *)local_e8,(CommandEntry *)&local_c8);
                pCVar33 = pCVar33 + 8;
                while( true ) {
                  if ((int)local_d0 == *(int *)(pCVar33 + 0x10)) {
                    cVar18 = String::operator<((String *)pCVar28,(String *)pCVar33);
                    if (cVar18 == '\0') goto LAB_00106d80;
                  }
                  else if ((int)local_d0 <= *(int *)(pCVar33 + 0x10)) goto LAB_00106d80;
                  if (lVar26 == 1) break;
                  if (*(long *)(pCVar33 + 0x18) != *(long *)(pCVar33 + -8)) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar33 + 0x18),pCVar33 + -8);
                  }
                  if (*(long *)(pCVar33 + 0x20) != *(long *)pCVar33) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar33 + 0x20),pCVar33);
                  }
                  if (*(long *)(pCVar33 + 0x28) != *(long *)(pCVar33 + 8)) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar33 + 0x28),pCVar33 + 8);
                  }
                  lVar26 = lVar26 + -1;
                  *(undefined4 *)(pCVar33 + 0x30) = *(undefined4 *)(pCVar33 + 0x10);
                  *(undefined4 *)(pCVar33 + 0x34) = *(undefined4 *)(pCVar33 + 0x14);
                  pCVar33 = pCVar33 + -0x20;
                }
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
LAB_00106d80:
                pCVar37 = pCVar31 + lVar26 * 0x20;
                if (*(long *)pCVar37 != local_e8._0_8_) {
                  CowData<char32_t>::_ref(pCVar37,(CowData *)local_e8);
                }
                if (*(long *)(pCVar37 + 8) != local_e8._8_8_) {
                  CowData<char32_t>::_ref(pCVar37 + 8,(CowData *)pCVar28);
                }
                if (*(long *)(pCVar37 + 0x10) != local_d8) {
                  CowData<char32_t>::_ref(pCVar37 + 0x10,(CowData *)&local_d8);
                }
                *(int *)(pCVar37 + 0x18) = (int)local_d0;
                *(float *)(pCVar37 + 0x1c) = local_d0._4_4_;
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                CowData<char32_t>::_unref(pCVar28);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
              }
              else {
                if (local_b0 <= *(int *)(pCVar31 + 0x18)) goto LAB_00106ccf;
LAB_00106b98:
                do {
                  if (*(long *)pCVar29 != *(long *)((CowData<char32_t> *)pCVar29 + -0x20)) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)pCVar29,
                               (CowData *)((CowData<char32_t> *)pCVar29 + -0x20));
                  }
                  if (*(long *)((CowData<char32_t> *)pCVar29 + 8) !=
                      *(long *)((CowData<char32_t> *)pCVar29 + -0x18)) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)pCVar29 + 8,
                               (CowData *)((CowData<char32_t> *)pCVar29 + -0x18));
                  }
                  if (*(long *)((CowData<char32_t> *)pCVar29 + 0x10) !=
                      *(long *)((CowData<char32_t> *)pCVar29 + -0x10)) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)pCVar29 + 0x10,
                               (CowData *)((CowData<char32_t> *)pCVar29 + -0x10));
                  }
                  *(undefined4 *)((CowData<char32_t> *)pCVar29 + 0x18) =
                       *(undefined4 *)((CowData<char32_t> *)pCVar29 + -8);
                  *(undefined4 *)((CowData<char32_t> *)pCVar29 + 0x1c) =
                       *(undefined4 *)((CowData<char32_t> *)pCVar29 + -4);
                  lVar26 = lVar26 + -1;
                  pCVar29 = (CowData *)((CowData<char32_t> *)pCVar29 + -0x20);
                } while (lVar26 != 0);
                CowData<char32_t>::_ref(pCVar31,(CowData *)&local_c8);
                CowData<char32_t>::_ref(pCVar31 + 8,(CowData *)&local_c0);
                CowData<char32_t>::_ref(pCVar31 + 0x10,(CowData *)&local_b8);
                *(int *)(pCVar31 + 0x18) = local_b0;
                *(float *)(pCVar31 + 0x1c) = local_ac;
              }
              lVar36 = lVar36 + 1;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              pCVar33 = pCVar32;
            } while (lVar35 != lVar36);
          }
          else {
            lVar36 = 1;
            pCVar33 = (CowData *)pCVar31;
            do {
              pCVar32 = pCVar33 + 0x20;
              local_c8 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,pCVar32);
              local_c0 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,pCVar33 + 0x28);
              local_b8 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,pCVar33 + 0x30);
              local_b0 = *(int *)(pCVar33 + 0x38);
              local_ac = *(float *)(pCVar33 + 0x3c);
              pCVar29 = pCVar32;
              if (*(int *)(pCVar31 + 0x18) == local_b0) {
                cVar18 = String::operator<((String *)&local_c0,(String *)(pCVar31 + 8));
                if (cVar18 != '\0') goto LAB_00105b40;
LAB_00107115:
                CommandEntry::CommandEntry((CommandEntry *)local_e8,(CommandEntry *)&local_c8);
                lVar26 = lVar36;
                pCVar33 = pCVar33 + 8;
                while( true ) {
                  if ((int)local_d0 == *(int *)(pCVar33 + 0x10)) {
                    cVar18 = String::operator<((String *)pCVar28,(String *)pCVar33);
                    if (cVar18 == '\0') goto LAB_001071c8;
                  }
                  else if ((int)local_d0 <= *(int *)(pCVar33 + 0x10)) goto LAB_001071c8;
                  if (lVar26 == 1) break;
                  if (*(long *)(pCVar33 + 0x18) != *(long *)(pCVar33 + -8)) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar33 + 0x18),pCVar33 + -8);
                  }
                  if (*(long *)(pCVar33 + 0x20) != *(long *)pCVar33) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar33 + 0x20),pCVar33);
                  }
                  if (*(long *)(pCVar33 + 0x28) != *(long *)(pCVar33 + 8)) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar33 + 0x28),pCVar33 + 8);
                  }
                  lVar26 = lVar26 + -1;
                  *(undefined4 *)(pCVar33 + 0x30) = *(undefined4 *)(pCVar33 + 0x10);
                  *(undefined4 *)(pCVar33 + 0x34) = *(undefined4 *)(pCVar33 + 0x14);
                  pCVar33 = pCVar33 + -0x20;
                }
                _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                 "bad comparison function; sorting will be broken",0,0);
LAB_001071c8:
                pCVar37 = pCVar31 + lVar26 * 0x20;
                if (*(long *)pCVar37 != local_e8._0_8_) {
                  CowData<char32_t>::_ref(pCVar37,(CowData *)local_e8);
                }
                if (*(long *)(pCVar37 + 8) != local_e8._8_8_) {
                  CowData<char32_t>::_ref(pCVar37 + 8,(CowData *)pCVar28);
                }
                if (*(long *)(pCVar37 + 0x10) != local_d8) {
                  CowData<char32_t>::_ref(pCVar37 + 0x10,(CowData *)&local_d8);
                }
                *(int *)(pCVar37 + 0x18) = (int)local_d0;
                *(float *)(pCVar37 + 0x1c) = local_d0._4_4_;
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                CowData<char32_t>::_unref(pCVar28);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
              }
              else {
                if (local_b0 <= *(int *)(pCVar31 + 0x18)) goto LAB_00107115;
LAB_00105b40:
                do {
                  pCVar33 = (CowData *)((CowData<char32_t> *)pCVar29 + -0x20);
                  if (*(long *)pCVar29 != *(long *)((CowData<char32_t> *)pCVar29 + -0x20)) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)pCVar29,pCVar33);
                  }
                  if (*(long *)((CowData<char32_t> *)pCVar29 + 8) !=
                      *(long *)((CowData<char32_t> *)pCVar29 + -0x18)) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)pCVar29 + 8,
                               (CowData *)((CowData<char32_t> *)pCVar29 + -0x18));
                  }
                  if (*(long *)((CowData<char32_t> *)pCVar29 + 0x10) !=
                      *(long *)((CowData<char32_t> *)pCVar29 + -0x10)) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)pCVar29 + 0x10,
                               (CowData *)((CowData<char32_t> *)pCVar29 + -0x10));
                  }
                  *(undefined4 *)((CowData<char32_t> *)pCVar29 + 0x18) =
                       *(undefined4 *)((CowData<char32_t> *)pCVar29 + -8);
                  *(undefined4 *)((CowData<char32_t> *)pCVar29 + 0x1c) =
                       *(undefined4 *)((CowData<char32_t> *)pCVar29 + -4);
                  pCVar29 = pCVar33;
                } while (pCVar33 != (CowData *)pCVar31);
                CowData<char32_t>::_ref(pCVar31,(CowData *)&local_c8);
                CowData<char32_t>::_ref(pCVar31 + 8,(CowData *)&local_c0);
                CowData<char32_t>::_ref(pCVar31 + 0x10,(CowData *)&local_b8);
                *(int *)(pCVar31 + 0x18) = local_b0;
                *(float *)(pCVar31 + 0x1c) = local_ac;
              }
              lVar36 = lVar36 + 1;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              pCVar33 = pCVar32;
            } while (lVar36 != 0x10);
            pCVar33 = (CowData *)(pCVar31 + 0x200);
            lVar36 = 0x10;
            do {
              local_c8 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,pCVar33);
              local_c0 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,pCVar33 + 8);
              local_b8 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,pCVar33 + 0x10);
              local_b0 = *(int *)(pCVar33 + 0x18);
              local_ac = *(float *)(pCVar33 + 0x1c);
              lVar26 = lVar36;
              pCVar29 = pCVar33 + -0x18;
              while( true ) {
                if (*(int *)(pCVar29 + 0x10) == local_b0) {
                  cVar18 = String::operator<((String *)&local_c0,(String *)pCVar29);
                  if (cVar18 == '\0') goto LAB_00105d30;
                }
                else if (local_b0 <= *(int *)(pCVar29 + 0x10)) goto LAB_00105d30;
                if (lVar26 == 1) break;
                if (*(long *)(pCVar29 + 0x18) != *(long *)(pCVar29 + -8)) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar29 + 0x18),pCVar29 + -8);
                }
                if (*(long *)(pCVar29 + 0x20) != *(long *)pCVar29) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar29 + 0x20),pCVar29);
                }
                if (*(long *)(pCVar29 + 0x28) != *(long *)(pCVar29 + 8)) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar29 + 0x28),pCVar29 + 8);
                }
                lVar26 = lVar26 + -1;
                *(undefined4 *)(pCVar29 + 0x30) = *(undefined4 *)(pCVar29 + 0x10);
                *(undefined4 *)(pCVar29 + 0x34) = *(undefined4 *)(pCVar29 + 0x14);
                pCVar29 = pCVar29 + -0x20;
              }
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
LAB_00105d30:
              lVar36 = lVar36 + 1;
              pCVar33 = pCVar33 + 0x20;
              pCVar28 = pCVar31 + lVar26 * 0x20;
              CowData<char32_t>::_ref(pCVar28,(CowData *)&local_c8);
              CowData<char32_t>::_ref(pCVar28 + 8,(CowData *)&local_c0);
              CowData<char32_t>::_ref(pCVar28 + 0x10,(CowData *)&local_b8);
              *(int *)(pCVar28 + 0x18) = local_b0;
              *(float *)(pCVar28 + 0x1c) = local_ac;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            } while (lVar36 != lVar35);
          }
          goto LAB_0010620c;
        }
        SortArray<EditorCommandPalette::CommandEntry,EditorCommandPalette::CommandHistoryComparator,true>
        ::introsort(0,1,(CommandEntry *)local_f0,0);
      }
LAB_00106200:
      if (local_178 != (CowData<char32_t> *)0x0) goto LAB_0010620c;
    }
    else {
      CowData<EditorCommandPalette::CommandEntry>::_copy_on_write
                ((CowData<EditorCommandPalette::CommandEntry> *)&local_f0);
      pCVar31 = local_f0;
      local_178 = local_f0;
      if (lVar35 == 0) goto LAB_00106200;
      lVar26 = 0;
      lVar36 = lVar35;
      if (lVar35 == 1) {
        SortArray<EditorCommandPalette::CommandEntry,EditorCommandPalette::CommandEntryComparator,true>
        ::introsort(0,1,(CommandEntry *)local_f0,0);
        goto LAB_00106200;
      }
      do {
        lVar36 = lVar36 >> 1;
        lVar26 = lVar26 + 1;
      } while (lVar36 != 1);
      SortArray<EditorCommandPalette::CommandEntry,EditorCommandPalette::CommandEntryComparator,true>
      ::introsort(0,lVar35,(CommandEntry *)local_f0,lVar26 * 2);
      if (lVar35 < 0x11) {
        lVar36 = 1;
        pCVar33 = (CowData *)(pCVar31 + 0x20);
        do {
          local_c8 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,pCVar33);
          local_c0 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,pCVar33 + 8);
          local_b8 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,pCVar33 + 0x10);
          fVar43 = *(float *)(pCVar33 + 0x1c);
          iVar20 = *(int *)(pCVar33 + 0x18);
          pCVar29 = pCVar33;
          lVar26 = lVar36;
          local_b0 = iVar20;
          local_ac = fVar43;
          if (fVar43 < *(float *)(pCVar31 + 0x1c) || fVar43 == *(float *)(pCVar31 + 0x1c)) {
            CommandEntry::CommandEntry((CommandEntry *)local_e8,(CommandEntry *)&local_c8);
            fVar43 = local_d0._4_4_;
            pCVar37 = (CowData<char32_t> *)pCVar33;
            if (*(float *)(pCVar33 + -4) <= local_d0._4_4_ &&
                local_d0._4_4_ != *(float *)(pCVar33 + -4)) {
              while (lVar26 = lVar26 + -1, lVar26 != 0) {
                pCVar32 = pCVar29 + -0x20;
                if (*(long *)pCVar37 != *(long *)pCVar32) {
                  CowData<char32_t>::_ref(pCVar37,pCVar32);
                }
                if (*(long *)(pCVar37 + 8) != *(long *)(pCVar29 + -0x18)) {
                  CowData<char32_t>::_ref(pCVar37 + 8,pCVar29 + -0x18);
                }
                if (*(long *)(pCVar37 + 0x10) != *(long *)(pCVar29 + -0x10)) {
                  CowData<char32_t>::_ref(pCVar37 + 0x10,pCVar29 + -0x10);
                }
                uVar3 = *(undefined4 *)(pCVar29 + -4);
                *(undefined4 *)(pCVar37 + 0x18) = *(undefined4 *)(pCVar29 + -8);
                *(undefined4 *)(pCVar37 + 0x1c) = uVar3;
                if (fVar43 < *(float *)(pCVar37 + -0x24) || fVar43 == *(float *)(pCVar37 + -0x24)) {
                  pCVar37 = pCVar31 + lVar26 * 0x20;
                  goto LAB_00106ef6;
                }
                pCVar37 = pCVar37 + -0x20;
                pCVar29 = pCVar32;
              }
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              pCVar37 = pCVar31 + 0x20;
            }
LAB_00106ef6:
            if (*(long *)pCVar37 != local_e8._0_8_) {
              CowData<char32_t>::_ref(pCVar37,(CowData *)local_e8);
            }
            if (*(long *)(pCVar37 + 8) != local_e8._8_8_) {
              CowData<char32_t>::_ref(pCVar37 + 8,(CowData *)pCVar28);
            }
            if (*(long *)(pCVar37 + 0x10) != local_d8) {
              CowData<char32_t>::_ref(pCVar37 + 0x10,(CowData *)&local_d8);
            }
            *(float *)(pCVar37 + 0x1c) = fVar43;
            *(int *)(pCVar37 + 0x18) = (int)local_d0;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref(pCVar28);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
          }
          else {
            do {
              if (*(long *)pCVar29 != *(long *)((CowData<char32_t> *)pCVar29 + -0x20)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar29,
                           (CowData *)((CowData<char32_t> *)pCVar29 + -0x20));
              }
              if (*(long *)((CowData<char32_t> *)pCVar29 + 8) !=
                  *(long *)((CowData<char32_t> *)pCVar29 + -0x18)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar29 + 8,
                           (CowData *)((CowData<char32_t> *)pCVar29 + -0x18));
              }
              if (*(long *)((CowData<char32_t> *)pCVar29 + 0x10) !=
                  *(long *)((CowData<char32_t> *)pCVar29 + -0x10)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar29 + 0x10,
                           (CowData *)((CowData<char32_t> *)pCVar29 + -0x10));
              }
              *(undefined4 *)((CowData<char32_t> *)pCVar29 + 0x18) =
                   *(undefined4 *)((CowData<char32_t> *)pCVar29 + -8);
              *(undefined4 *)((CowData<char32_t> *)pCVar29 + 0x1c) =
                   *(undefined4 *)((CowData<char32_t> *)pCVar29 + -4);
              lVar26 = lVar26 + -1;
              pCVar29 = (CowData *)((CowData<char32_t> *)pCVar29 + -0x20);
            } while (lVar26 != 0);
            CowData<char32_t>::_ref(pCVar31,(CowData *)&local_c8);
            CowData<char32_t>::_ref(pCVar31 + 8,(CowData *)&local_c0);
            CowData<char32_t>::_ref(pCVar31 + 0x10,(CowData *)&local_b8);
            *(int *)(pCVar31 + 0x18) = iVar20;
            *(float *)(pCVar31 + 0x1c) = fVar43;
          }
          lVar36 = lVar36 + 1;
          pCVar33 = pCVar33 + 0x20;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        } while (lVar36 != lVar35);
      }
      else {
        pCVar33 = (CowData *)(pCVar31 + 0x20);
        pCVar29 = pCVar33;
        lVar36 = 0;
        do {
          lVar26 = lVar36 + 1;
          local_c8 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,pCVar29);
          local_c0 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,pCVar29 + 8);
          local_b8 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,pCVar29 + 0x10);
          fVar43 = *(float *)(pCVar29 + 0x1c);
          iVar20 = *(int *)(pCVar29 + 0x18);
          pCVar32 = pCVar29;
          local_b0 = iVar20;
          local_ac = fVar43;
          if (fVar43 < *(float *)(pCVar31 + 0x1c) || fVar43 == *(float *)(pCVar31 + 0x1c)) {
            CommandEntry::CommandEntry((CommandEntry *)local_e8,(CommandEntry *)&local_c8);
            fVar43 = local_d0._4_4_;
            pCVar37 = (CowData<char32_t> *)pCVar29;
            if (*(float *)(pCVar29 + -4) <= local_d0._4_4_ &&
                local_d0._4_4_ != *(float *)(pCVar29 + -4)) {
              while (lVar36 != 0) {
                pCVar41 = pCVar32 + -0x20;
                if (*(long *)pCVar37 != *(long *)pCVar41) {
                  CowData<char32_t>::_ref(pCVar37,pCVar41);
                }
                if (*(long *)(pCVar37 + 8) != *(long *)(pCVar32 + -0x18)) {
                  CowData<char32_t>::_ref(pCVar37 + 8,pCVar32 + -0x18);
                }
                if (*(long *)(pCVar37 + 0x10) != *(long *)(pCVar32 + -0x10)) {
                  CowData<char32_t>::_ref(pCVar37 + 0x10,pCVar32 + -0x10);
                }
                uVar3 = *(undefined4 *)(pCVar32 + -4);
                *(undefined4 *)(pCVar37 + 0x18) = *(undefined4 *)(pCVar32 + -8);
                *(undefined4 *)(pCVar37 + 0x1c) = uVar3;
                if (fVar43 < *(float *)(pCVar37 + -0x24) || fVar43 == *(float *)(pCVar37 + -0x24)) {
                  pCVar37 = pCVar31 + lVar36 * 0x20;
                  goto LAB_00107065;
                }
                pCVar37 = pCVar37 + -0x20;
                pCVar32 = pCVar41;
                lVar36 = lVar36 + -1;
              }
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              pCVar37 = (CowData<char32_t> *)pCVar33;
            }
LAB_00107065:
            if (*(long *)pCVar37 != local_e8._0_8_) {
              CowData<char32_t>::_ref(pCVar37,(CowData *)local_e8);
            }
            if (*(long *)(pCVar37 + 8) != local_e8._8_8_) {
              CowData<char32_t>::_ref(pCVar37 + 8,(CowData *)pCVar28);
            }
            if (*(long *)(pCVar37 + 0x10) != local_d8) {
              CowData<char32_t>::_ref(pCVar37 + 0x10,(CowData *)&local_d8);
            }
            *(int *)(pCVar37 + 0x18) = (int)local_d0;
            *(float *)(pCVar37 + 0x1c) = fVar43;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref(pCVar28);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
          }
          else {
            do {
              pCVar41 = (CowData *)((CowData<char32_t> *)pCVar32 + -0x20);
              if (*(long *)pCVar32 != *(long *)((CowData<char32_t> *)pCVar32 + -0x20)) {
                CowData<char32_t>::_ref((CowData<char32_t> *)pCVar32,pCVar41);
              }
              if (*(long *)((CowData<char32_t> *)pCVar32 + 8) !=
                  *(long *)((CowData<char32_t> *)pCVar32 + -0x18)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar32 + 8,
                           (CowData *)((CowData<char32_t> *)pCVar32 + -0x18));
              }
              if (*(long *)((CowData<char32_t> *)pCVar32 + 0x10) !=
                  *(long *)((CowData<char32_t> *)pCVar32 + -0x10)) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)pCVar32 + 0x10,
                           (CowData *)((CowData<char32_t> *)pCVar32 + -0x10));
              }
              *(undefined4 *)((CowData<char32_t> *)pCVar32 + 0x18) =
                   *(undefined4 *)((CowData<char32_t> *)pCVar32 + -8);
              *(undefined4 *)((CowData<char32_t> *)pCVar32 + 0x1c) =
                   *(undefined4 *)((CowData<char32_t> *)pCVar32 + -4);
              pCVar32 = pCVar41;
            } while (pCVar41 != (CowData *)pCVar31);
            CowData<char32_t>::_ref(pCVar31,(CowData *)&local_c8);
            CowData<char32_t>::_ref(pCVar31 + 8,(CowData *)&local_c0);
            CowData<char32_t>::_ref(pCVar31 + 0x10,(CowData *)&local_b8);
            *(int *)(pCVar31 + 0x18) = iVar20;
            *(float *)(pCVar31 + 0x1c) = fVar43;
          }
          pCVar29 = pCVar29 + 0x20;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          lVar36 = lVar26;
        } while (lVar26 != 0xf);
        lVar36 = 0x10;
        pCVar29 = (CowData *)(pCVar31 + 0x200);
        do {
          local_c8 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,pCVar29);
          local_c0 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,pCVar29 + 8);
          local_b8 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,pCVar29 + 0x10);
          fVar43 = *(float *)(pCVar29 + 0x1c);
          iVar20 = *(int *)(pCVar29 + 0x18);
          lVar26 = lVar36 + -1;
          pCVar32 = pCVar29;
          pCVar41 = pCVar29;
          local_b0 = iVar20;
          local_ac = fVar43;
          if (*(float *)(pCVar29 + -4) <= fVar43 && fVar43 != *(float *)(pCVar29 + -4)) {
            do {
              pCVar39 = pCVar32 + -0x20;
              if (*(long *)pCVar41 != *(long *)pCVar39) {
                CowData<char32_t>::_ref((CowData<char32_t> *)pCVar41,pCVar39);
              }
              if (*(long *)((CowData<char32_t> *)pCVar41 + 8) != *(long *)(pCVar32 + -0x18)) {
                CowData<char32_t>::_ref((CowData<char32_t> *)pCVar41 + 8,pCVar32 + -0x18);
              }
              if (*(long *)((CowData<char32_t> *)pCVar41 + 0x10) != *(long *)(pCVar32 + -0x10)) {
                CowData<char32_t>::_ref((CowData<char32_t> *)pCVar41 + 0x10,pCVar32 + -0x10);
              }
              uVar3 = *(undefined4 *)(pCVar32 + -4);
              *(undefined4 *)((CowData<char32_t> *)pCVar41 + 0x18) = *(undefined4 *)(pCVar32 + -8);
              lVar1 = lVar26 + -1;
              *(undefined4 *)((CowData<char32_t> *)pCVar41 + 0x1c) = uVar3;
              if (fVar43 < *(float *)((CowData<char32_t> *)pCVar41 + -0x24) ||
                  fVar43 == *(float *)((CowData<char32_t> *)pCVar41 + -0x24)) {
                pCVar32 = (CowData *)(pCVar31 + lVar26 * 0x20);
                goto LAB_00106174;
              }
              pCVar41 = (CowData *)((CowData<char32_t> *)pCVar41 + -0x20);
              lVar26 = lVar1;
              pCVar32 = pCVar39;
            } while (lVar1 != 0);
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pCVar32 = pCVar33;
          }
LAB_00106174:
          lVar36 = lVar36 + 1;
          pCVar29 = pCVar29 + 0x20;
          CowData<char32_t>::_ref((CowData<char32_t> *)pCVar32,(CowData *)&local_c8);
          CowData<char32_t>::_ref((CowData<char32_t> *)pCVar32 + 8,(CowData *)&local_c0);
          CowData<char32_t>::_ref((CowData<char32_t> *)pCVar32 + 0x10,(CowData *)&local_b8);
          *(int *)((CowData<char32_t> *)pCVar32 + 0x18) = iVar20;
          *(float *)((CowData<char32_t> *)pCVar32 + 0x1c) = fVar43;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        } while (lVar36 != lVar35);
      }
LAB_0010620c:
      lVar35 = *(long *)(local_178 + -8);
      lVar36 = 300;
      if (lVar35 < 0x12d) {
        lVar36 = lVar35;
      }
      if (0 < (int)lVar36) {
        local_190 = (CowData *)(local_178 + 8);
        local_150 = 0;
        uVar38 = 0;
        while ((long)uVar38 < lVar35) {
          String::get_slice((char *)local_100,(int)(String *)(local_190 + -8));
          uVar25 = local_a0._0_8_;
          if ((local_a0._0_8_ != 0) && (local_80._4_4_ != 0)) {
            uVar4 = *(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4);
            lVar35 = *(long *)(hash_table_size_primes_inv + (local_80 & 0xffffffff) * 8);
            uVar22 = String::hash();
            uVar14 = CONCAT44(0,uVar4);
            uVar17 = local_a0._8_8_;
            uVar27 = 1;
            if (uVar22 != 0) {
              uVar27 = uVar22;
            }
            auVar44._8_8_ = 0;
            auVar44._0_8_ = (ulong)uVar27 * lVar35;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar14;
            lVar26 = SUB168(auVar44 * auVar9,8);
            uVar22 = *(uint *)(local_a0._8_8_ + lVar26 * 4);
            iVar20 = SUB164(auVar44 * auVar9,8);
            if (uVar22 != 0) {
              uVar40 = 0;
              do {
                if (uVar22 == uVar27) {
                  cVar18 = String::operator==((String *)(*(long *)(uVar25 + lVar26 * 8) + 0x10),
                                              local_100);
                  if (cVar18 != '\0') {
                    plVar24 = (long *)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                      ::operator[](local_a8,local_100);
                    lVar35 = *plVar24;
                    goto LAB_00106527;
                  }
                }
                uVar40 = uVar40 + 1;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (ulong)(iVar20 + 1) * lVar35;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = uVar14;
                lVar26 = SUB168(auVar6 * auVar10,8);
                uVar22 = *(uint *)(uVar17 + lVar26 * 4);
                iVar20 = SUB164(auVar6 * auVar10,8);
              } while ((uVar22 != 0) &&
                      (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar22 * lVar35, auVar11._8_8_ = 0,
                      auVar11._0_8_ = uVar14, auVar8._8_8_ = 0,
                      auVar8._0_8_ = (ulong)((uVar4 + iVar20) - SUB164(auVar7 * auVar11,8)) * lVar35
                      , auVar12._8_8_ = 0, auVar12._0_8_ = uVar14,
                      uVar40 <= SUB164(auVar8 * auVar12,8)));
            }
          }
          lVar35 = Tree::create_item(*(TreeItem **)(this + 0xdc0),iVar21);
          if (local_150 == 0) {
            local_150 = lVar35;
          }
          String::capitalize();
          local_c8 = 0;
          if (local_e8._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_e8);
          }
          TreeItem::set_text(lVar35,0,(CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          iVar20 = (int)lVar35;
          TreeItem::set_selectable(iVar20,false);
          TreeItem::set_selectable(iVar20,true);
          if (_update_command_search(String_const&)::{lambda()#1}::operator()()::sname == '\0') {
            iVar23 = __cxa_guard_acquire(&_update_command_search(String_const&)::{lambda()#1}::
                                          operator()()::sname);
            if (iVar23 != 0) {
              _scs_create((char *)&_update_command_search(String_const&)::{lambda()#1}::operator()()
                                   ::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_update_command_search(String_const&)::{lambda()#1}::operator()()::sname
                           ,&__dso_handle);
              __cxa_guard_release(&_update_command_search(String_const&)::{lambda()#1}::operator()()
                                   ::sname);
            }
          }
          local_58 = Window::get_theme_color
                               ((StringName *)this,
                                (StringName *)
                                &_update_command_search(String_const&)::{lambda()#1}::operator()()::
                                 sname);
          TreeItem::set_custom_bg_color(iVar20,(Color *)0x0,SUB81(local_58,0));
          if (_update_command_search(String_const&)::{lambda()#2}::operator()()::sname == '\0') {
            iVar23 = __cxa_guard_acquire(&_update_command_search(String_const&)::{lambda()#2}::
                                          operator()()::sname);
            if (iVar23 != 0) {
              _scs_create((char *)&_update_command_search(String_const&)::{lambda()#2}::operator()()
                                   ::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_update_command_search(String_const&)::{lambda()#2}::operator()()::sname
                           ,&__dso_handle);
              __cxa_guard_release(&_update_command_search(String_const&)::{lambda()#2}::operator()()
                                   ::sname);
            }
          }
          auVar44 = Window::get_theme_color
                              ((StringName *)this,
                               (StringName *)
                               &_update_command_search(String_const&)::{lambda()#2}::operator()()::
                                sname);
          local_58 = auVar44;
          TreeItem::set_custom_bg_color(iVar20,(Color *)0x1,SUB81(local_58,0));
          plVar24 = (long *)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                            ::operator[](local_a8,local_100);
          *plVar24 = lVar35;
          CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
LAB_00106527:
          uVar25 = Tree::create_item(*(TreeItem **)(this + 0xdc0),(int)lVar35);
          lVar35 = *(long *)(local_178 + -8);
          if (lVar35 <= (long)uVar38) break;
          cVar18 = String::operator==((String *)(local_190 + 8),"None");
          if (cVar18 == '\0') {
            lVar35 = *(long *)(local_178 + -8);
            if (lVar35 <= (long)uVar38) break;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = local_e8._8_8_;
            local_e8 = auVar15 << 0x40;
            if (*(long *)(local_190 + 8) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_e8,local_190 + 8);
              goto LAB_001065ac;
            }
          }
          else {
            auVar16._8_8_ = 0;
            auVar16._0_8_ = local_e8._8_8_;
            local_e8 = auVar16 << 0x40;
            String::parse_latin1((String *)local_e8,"");
LAB_001065ac:
            lVar35 = *(long *)(local_178 + -8);
            if (lVar35 <= (long)uVar38) break;
          }
          local_c8 = 0;
          if (*(long *)local_190 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,local_190);
          }
          TreeItem::set_text(uVar25,0,(CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          lVar35 = *(long *)(local_178 + -8);
          if (lVar35 <= (long)uVar38) break;
          Variant::Variant((Variant *)local_58,(String *)(local_190 + -8));
          TreeItem::set_metadata((int)uVar25,(Variant *)0x0);
          if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
            Variant::_clear_internal();
          }
          TreeItem::set_text_alignment(uVar25,1,2);
          local_c8 = 0;
          if (local_e8._0_8_ != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_e8);
          }
          TreeItem::set_text(uVar25,1,(CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          local_58._0_8_ = __LC13;
          local_58._8_8_ = _UNK_00113728;
          auVar44 = Window::get_theme_color
                              ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xb0)
                              );
          local_68 = auVar44;
          auVar44 = Color::operator*((Color *)local_68,(Color *)local_58);
          local_78 = auVar44;
          TreeItem::set_custom_color((int)uVar25,(Color *)0x1);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
          local_190 = local_190 + 0x20;
          if (uVar38 == (int)lVar36 - 1) {
            uVar25 = local_a0._0_8_;
            iVar21 = TreeItem::get_first_child();
            TreeItem::select(iVar21);
            TreeItem::set_as_cursor(iVar21);
            Tree::ensure_cursor_is_visible();
            CowData<EditorCommandPalette::CommandEntry>::_unref
                      ((CowData<EditorCommandPalette::CommandEntry> *)&local_f0);
            if ((undefined8 *)uVar25 != (undefined8 *)0x0) {
              uVar17 = local_a0._8_8_;
              if ((local_80._4_4_ != 0) &&
                 (*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) != 0)) {
                piVar2 = (int *)(local_a0._8_8_ +
                                (ulong)*(uint *)(hash_table_size_primes +
                                                (local_80 & 0xffffffff) * 4) * 4);
                piVar30 = (int *)local_a0._8_8_;
                puVar34 = (undefined8 *)uVar25;
                do {
                  if (*piVar30 != 0) {
                    pvVar5 = (void *)*puVar34;
                    *piVar30 = 0;
                    CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
                    Memory::free_static(pvVar5,false);
                    *puVar34 = 0;
                  }
                  piVar30 = piVar30 + 1;
                  puVar34 = puVar34 + 1;
                } while (piVar2 != piVar30);
              }
              Memory::free_static((void *)uVar25,false);
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                Memory::free_static((void *)uVar17,false);
                return;
              }
              goto LAB_001074f4;
            }
            goto LAB_00107366;
          }
          uVar38 = uVar38 + 1;
          lVar35 = *(long *)(local_178 + -8);
        }
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar38,lVar35,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
    }
    iVar21 = TreeItem::get_first_child();
    TreeItem::select(iVar21);
    TreeItem::set_as_cursor(iVar21);
    Tree::ensure_cursor_is_visible();
    CowData<EditorCommandPalette::CommandEntry>::_unref
              ((CowData<EditorCommandPalette::CommandEntry> *)&local_f0);
  }
LAB_00107366:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001074f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorCommandPalette::open_popup() */

void __thiscall EditorCommandPalette::open_popup(EditorCommandPalette *this)

{
  TreeItem *pTVar1;
  bool bVar2;
  long in_FS_OFFSET;
  float fVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (was_showed == '\0') {
    local_38 = 0;
    _update_command_search(this,(String *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    fVar3 = (float)EditorScale::get_scale();
    local_30 = CONCAT44(fVar3 * _LC109._4_4_,fVar3 * (float)_LC109);
    local_28 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_30);
    Window::popup_centered_clamped(this,_LC14);
  }
  else {
    (**(code **)(*(long *)this + 0x240))(this,prev_rect);
  }
  LineEdit::clear();
  Control::grab_focus();
  pTVar1 = *(TreeItem **)(this + 0xdc0);
  bVar2 = (bool)Tree::get_root();
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Tree::scroll_to_item(pTVar1,bVar2);
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
  
  return (uint)CONCAT71(0x1134,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1134,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1134,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1134,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1134,in_RSI == &Node::get_class_ptr_static()::ptr) |
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



/* EditorCommandPalette::_property_can_revertv(StringName const&) const */

undefined8 EditorCommandPalette::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorCommandPalette::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorCommandPalette::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BaseButton,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorCommandPalette, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorCommandPalette,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorCommandPalette, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorCommandPalette,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Viewport, void, Ref<InputEvent> const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Viewport,void,Ref<InputEvent>const&,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Viewport,void,Ref<InputEvent>const&,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorCommandPalette, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorCommandPalette,void,String_const&> *this)

{
  return;
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



/* MethodBindT<String, String, Callable, String>::get_argument_meta(int) const */

undefined8 MethodBindT<String,String,Callable,String>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::get_argument_count
          (CallableCustomMethodPointer<BaseButton,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorCommandPalette, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<EditorCommandPalette,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorCommandPalette, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void>::get_argument_count
          (CallableCustomMethodPointer<EditorCommandPalette,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Viewport, void, Ref<InputEvent> const&,
   bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Viewport,void,Ref<InputEvent>const&,bool>::get_argument_count
          (CallableCustomMethodPointer<Viewport,void,Ref<InputEvent>const&,bool> *this,bool *param_1
          )

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorCommandPalette, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorCommandPalette,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorCommandPalette, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorCommandPalette,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Viewport, void, Ref<InputEvent> const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Viewport,void,Ref<InputEvent>const&,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Viewport,void,Ref<InputEvent>const&,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorCommandPalette, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorCommandPalette,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorCommandPalette, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorCommandPalette,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BaseButton,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<String, String, Callable, String>::~MethodBindT() */

void __thiscall
MethodBindT<String,String,Callable,String>::~MethodBindT
          (MethodBindT<String,String,Callable,String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113340;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String, String, Callable, String>::~MethodBindT() */

void __thiscall
MethodBindT<String,String,Callable,String>::~MethodBindT
          (MethodBindT<String,String,Callable,String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00113340;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String>::~MethodBindT() */

void __thiscall MethodBindT<String>::~MethodBindT(MethodBindT<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001133a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String>::~MethodBindT() */

void __thiscall MethodBindT<String>::~MethodBindT(MethodBindT<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001133a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
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



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00112b80;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00112b80;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorCommandPalette::_getv(StringName const&, Variant&) const */

undefined8 EditorCommandPalette::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00117008 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorCommandPalette::_setv(StringName const&, Variant const&) */

undefined8 EditorCommandPalette::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00117008 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00117010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00117018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<String, String, Callable, String>::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindT<String,String,Callable,String>::_gen_argument_type
          (MethodBindT<String,String,Callable,String> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((uint)param_1 < 4) && (uVar1 = 4, param_1 == 2)) {
    uVar1 = 0x19;
  }
  return uVar1;
}



/* CallableCustomMethodPointer<Viewport, void, Ref<InputEvent> const&, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Viewport,void,Ref<InputEvent>const&,bool>::get_object
          (CallableCustomMethodPointer<Viewport,void,Ref<InputEvent>const&,bool> *this)

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
      goto LAB_00107ccd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107ccd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107ccd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorCommandPalette, void, Ref<InputEvent> const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<EditorCommandPalette,void,Ref<InputEvent>const&> *this)

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
      goto LAB_00107dcd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107dcd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107dcd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorCommandPalette, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorCommandPalette,void,String_const&> *this)

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
      goto LAB_00107ecd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107ecd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107ecd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::get_object
          (CallableCustomMethodPointer<BaseButton,void,bool> *this)

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
      goto LAB_00107fcd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00107fcd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00107fcd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorCommandPalette, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void>::get_object
          (CallableCustomMethodPointer<EditorCommandPalette,void> *this)

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
      goto LAB_001080cd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001080cd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001080cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorCommandPalette::_validate_propertyv(PropertyInfo&) const */

void EditorCommandPalette::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00117020 == Viewport::_validate_property) {
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
  if ((code *)PTR__validate_property_00117020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00117028 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00117030 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108398) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00117038 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x1134,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
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
    if ((code *)PTR__notification_00117040 != Window::_notification) {
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
  if ((code *)PTR__notification_00117040 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* EditorCommandPalette::is_class_ptr(void*) const */

uint EditorCommandPalette::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1134,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1134,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00117048 != Container::_notification) {
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
  if ((code *)PTR__notification_00117048 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108700;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108700:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108760;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108760:
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
LAB_00108a73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108a73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_00108ade;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_00108ade:
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
LAB_00108b63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108b63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00108bce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00108bce:
  return &_get_class_namev()::_class_name_static;
}



/* EditorCommandPalette::_get_class_namev() const */

undefined8 * EditorCommandPalette::_get_class_namev(void)

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
LAB_00108c53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108c53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorCommandPalette");
      goto LAB_00108cbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorCommandPalette");
LAB_00108cbe:
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



/* Callable create_custom_callable_function_pointer<EditorCommandPalette, String
   const&>(EditorCommandPalette*, char const*, void (EditorCommandPalette::*)(String const&)) */

EditorCommandPalette *
create_custom_callable_function_pointer<EditorCommandPalette,String_const&>
          (EditorCommandPalette *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC16;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00113070;
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



/* void Ref<InputEventShortcut>::instantiate<>() */

void __thiscall Ref<InputEventShortcut>::instantiate<>(Ref<InputEventShortcut> *this)

{
  char cVar1;
  InputEventShortcut *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (InputEventShortcut *)operator_new(0x250,"");
  InputEventShortcut::InputEventShortcut(this_00);
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
    this_00 = (InputEventShortcut *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (InputEventShortcut *)pOVar3) goto LAB_00108ec5;
    *(InputEventShortcut **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00108ec5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (InputEventShortcut *)0x0) {
    return;
  }
LAB_00108ec5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<Viewport, Ref<InputEvent> const&,
   bool>(Viewport*, char const*, void (Viewport::*)(Ref<InputEvent> const&, bool)) */

Viewport *
create_custom_callable_function_pointer<Viewport,Ref<InputEvent>const&,bool>
          (Viewport *param_1,char *param_2,_func_void_Ref_ptr_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC16;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00113100;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Ref_ptr_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<EditorCommandPalette>(EditorCommandPalette*,
   char const*, void (EditorCommandPalette::*)()) */

EditorCommandPalette *
create_custom_callable_function_pointer<EditorCommandPalette>
          (EditorCommandPalette *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC16;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00113190;
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



/* Callable create_custom_callable_function_pointer<BaseButton, bool>(BaseButton*, char const*, void
   (BaseButton::*)(bool)) */

BaseButton *
create_custom_callable_function_pointer<BaseButton,bool>
          (BaseButton *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC16;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001132b0;
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



/* Callable Callable::bind<bool>(bool) const */

Variant ** Callable::bind<bool>(bool param_1)

{
  char cVar1;
  bool in_DL;
  int in_ESI;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_DL);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)CONCAT71(in_register_00000039,param_1),in_ESI);
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
    return (Variant **)CONCAT71(in_register_00000039,param_1);
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



/* WARNING: Removing unreachable block (ram,0x00109480) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

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



/* CallableCustomMethodPointer<EditorCommandPalette, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void>::call
          (CallableCustomMethodPointer<EditorCommandPalette,void> *this,Variant **param_1,
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
      goto LAB_00109a1f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00109a1f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001099f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00109ad0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00109a1f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC40,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109ad0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::call
          (CallableCustomMethodPointer<BaseButton,void,bool> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_00109c99;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00109c99;
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
        uVar3 = _LC41;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_00109d4a;
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
LAB_00109c99:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC40,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109d4a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Viewport, void, Ref<InputEvent> const&, bool>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Viewport,void,Ref<InputEvent>const&,bool>::call
          (CallableCustomMethodPointer<Viewport,void,Ref<InputEvent>const&,bool> *this,
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
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_00109e15;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_00109e15;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
        uVar4 = _LC42;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar11 = Variant::operator_cast_to_bool(param_1[1]);
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC43;
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
LAB_00109f44:
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
              if (pOVar5 != (Object *)0x0) goto LAB_00109f44;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2),(String *)&local_48,bVar11);
        if (((local_48 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_48, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_00109e15;
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
  _err_print_error(&_LC40,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00109e15:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorCommandPalette, void, Ref<InputEvent> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<EditorCommandPalette,void,Ref<InputEvent>const&> *this,
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
          goto LAB_0010a1ae;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010a1ae;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC43;
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
LAB_0010a27d:
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
              if (pOVar5 != (Object *)0x0) goto LAB_0010a27d;
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
        goto LAB_0010a1ae;
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
  _err_print_error(&_LC40,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010a1ae:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TreeItem*> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
::operator[](HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined8 uVar48;
  uint *puVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0010aba8:
    uVar39 = (ulong)uVar54;
    uVar43 = uVar39 * 4;
    uVar47 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = pvVar42;
    if (uVar54 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar42 + uVar47)) && (pvVar42 < (void *)((long)pvVar2 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
        goto LAB_0010aa2a;
      }
      memset(pvVar2,0,uVar43);
      memset(pvVar42,0,uVar47);
      iVar44 = *(int *)(this + 0x2c);
LAB_0010aa2e:
      if (iVar44 != 0) {
LAB_0010aa36:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar52 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar51 != 0) {
          uVar38 = uVar51;
        }
        uVar53 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar45 = SUB168(auVar16 * auVar32,8);
        uVar51 = *(uint *)(lVar52 + lVar45 * 4);
        uVar50 = SUB164(auVar16 * auVar32,8);
        if (uVar51 != 0) {
          do {
            if (uVar38 == uVar51) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                *(undefined8 *)(pauVar41[1] + 8) = 0;
                goto LAB_0010a90b;
              }
              lVar52 = *(long *)(this + 0x10);
            }
            uVar53 = uVar53 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar50 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar45 = SUB168(auVar17 * auVar33,8);
            uVar51 = *(uint *)(lVar52 + lVar45 * 4);
            uVar50 = SUB164(auVar17 * auVar33,8);
          } while ((uVar51 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar51 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar50) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar53 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar54;
      goto LAB_0010a554;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_0010a554;
    if (iVar44 != 0) goto LAB_0010aa36;
LAB_0010a57a:
    uVar54 = *(uint *)(this + 0x28);
    if (uVar54 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010a90b;
    }
    uVar39 = (ulong)(uVar54 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar54 * 4);
    if (uVar54 + 1 < 2) {
      uVar39 = 2;
    }
    uVar54 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar47 = (ulong)uVar54;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar54 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar47);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar54 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar54 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar38);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar54 * lVar52;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar45 = SUB168(auVar4 * auVar20,8);
          puVar49 = (uint *)(lVar3 + lVar45 * 4);
          iVar44 = SUB164(auVar4 * auVar20,8);
          uVar51 = *puVar49;
          uVar40 = *(undefined8 *)((long)pvVar42 + uVar39 * 8);
          while (uVar51 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar51 * lVar52;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar43;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar5 * auVar21,8)) * lVar52;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            uVar53 = SUB164(auVar6 * auVar22,8);
            uVar48 = uVar40;
            if (uVar53 < uVar50) {
              *puVar49 = uVar54;
              puVar1 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar1;
              *puVar1 = uVar40;
              uVar54 = uVar51;
              uVar50 = uVar53;
            }
            uVar50 = uVar50 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar44 + 1) * lVar52;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            lVar45 = SUB168(auVar7 * auVar23,8);
            puVar49 = (uint *)(lVar3 + lVar45 * 4);
            iVar44 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar48;
            uVar51 = *puVar49;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar49 = uVar54;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar54);
    if (iVar44 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar52 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar50 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar45 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar52 + lVar45 * 4);
      uVar51 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_0010a90b;
            }
            lVar52 = *(long *)(this + 0x10);
          }
          uVar50 = uVar50 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar51 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar45 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar52 + lVar45 * 4);
          uVar51 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar51 + uVar54) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar50 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_0010aba8;
LAB_0010aa2a:
      iVar44 = *(int *)(this + 0x2c);
      goto LAB_0010aa2e;
    }
LAB_0010a554:
    if ((float)uVar39 * __LC44 < (float)(iVar44 + 1)) goto LAB_0010a57a;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_58);
    }
  }
  *(undefined8 *)(pauVar41[1] + 8) = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    *puVar1 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar1;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar54 = 1;
  if (uVar37 != 0) {
    uVar54 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar54 * lVar52;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar46 = SUB168(auVar8 * auVar24,8);
  lVar45 = *(long *)(this + 8);
  puVar49 = (uint *)(lVar3 + lVar46 * 4);
  iVar44 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar49;
  pauVar56 = pauVar41;
  if (uVar38 != 0) {
    uVar51 = 0;
    pauVar55 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar52;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar52;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar50 = SUB164(auVar10 * auVar26,8);
      pauVar56 = pauVar55;
      if (uVar50 < uVar51) {
        *puVar49 = uVar54;
        puVar1 = (undefined8 *)(lVar45 + lVar46 * 8);
        pauVar56 = (undefined1 (*) [16])*puVar1;
        *puVar1 = pauVar55;
        uVar51 = uVar50;
        uVar54 = uVar38;
      }
      uVar51 = uVar51 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar52;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar46 = SUB168(auVar11 * auVar27,8);
      puVar49 = (uint *)(lVar3 + lVar46 * 4);
      iVar44 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar49;
      pauVar55 = pauVar56;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar45 + lVar46 * 8) = pauVar56;
  *puVar49 = uVar54;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010a90b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
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



/* EditorCommandPalette::get_class() const */

void EditorCommandPalette::get_class(void)

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



/* EditorCommandPalette::CommandEntry::CommandEntry(EditorCommandPalette::CommandEntry const&) */

void __thiscall
EditorCommandPalette::CommandEntry::CommandEntry(CommandEntry *this,CommandEntry *param_1)

{
  *(undefined8 *)this = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
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



/* CallableCustomMethodPointer<EditorCommandPalette, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void,String_const&>::call
          (CallableCustomMethodPointer<EditorCommandPalette,void,String_const&> *this,
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
            uVar3 = _LC50;
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
        goto LAB_0010b1be;
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
  _err_print_error(&_LC40,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010b1be:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorCommandPalette::_notificationv(int, bool) */

void __thiscall
EditorCommandPalette::_notificationv(EditorCommandPalette *this,int param_1,bool param_2)

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



/* EditorCommandPalette::~EditorCommandPalette() */

void __thiscall EditorCommandPalette::~EditorCommandPalette(EditorCommandPalette *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_00112df8;
  pvVar5 = *(void **)(this + 0xe00);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xe24) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe20) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xe24) = 0;
        *(undefined1 (*) [16])(this + 0xe10) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe08) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xe08) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                pOVar2 = *(Object **)((long)pvVar5 + 0x20);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0xe00);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0xe24) = 0;
        *(undefined1 (*) [16])(this + 0xe10) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010b48a;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xe08),false);
  }
LAB_0010b48a:
  pvVar5 = *(void **)(this + 0xdd0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xdf4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xdf0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xdf4) = 0;
        *(undefined1 (*) [16])(this + 0xde0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xdd8) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xdd8) + lVar4) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
            if (*(long *)((long)pvVar5 + 0x30) != 0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                pOVar2 = *(Object **)((long)pvVar5 + 0x30);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x28));
            Callable::~Callable((Callable *)((long)pvVar5 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0xdd0);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xdf4) = 0;
        *(undefined1 (*) [16])(this + 0xde0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010b56a;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xdd8),false);
  }
LAB_0010b56a:
  *(undefined ***)this = &PTR__initialize_classv_00112b80;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* EditorCommandPalette::~EditorCommandPalette() */

void __thiscall EditorCommandPalette::~EditorCommandPalette(EditorCommandPalette *this)

{
  ~EditorCommandPalette(this);
  operator_delete(this,0xe28);
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
            if ((code *)PTR__bind_methods_00117060 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_compatibility_methods_00117050 != Object::_bind_compatibility_methods) {
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
    if ((code *)PTR__bind_methods_00117058 != AcceptDialog::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00117060 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00117068 !=
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
      if ((code *)PTR__bind_methods_00117070 != Container::_bind_methods) {
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
        if (pvVar3 == (void *)0x0) goto LAB_0010c2bf;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010c2bf:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
    if (cVar5 != '\0') goto LAB_0010c41b;
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
      if (cVar5 != '\0') goto LAB_0010c41b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010c41b:
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
    if (cVar5 != '\0') goto LAB_0010c61b;
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
      if (cVar5 != '\0') goto LAB_0010c61b;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c71e;
    }
  }
LAB_0010c61b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c71e:
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
    if (cVar5 != '\0') goto LAB_0010c82b;
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
      if (cVar5 != '\0') goto LAB_0010c82b;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c92e;
    }
  }
LAB_0010c82b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c92e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorCommandPalette::is_class(String const&) const */

undefined8 __thiscall EditorCommandPalette::is_class(EditorCommandPalette *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010ca3b;
  }
  cVar4 = String::operator==(param_1,"EditorCommandPalette");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010ca3b:
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
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
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
    if (cVar5 != '\0') goto LAB_0010cb83;
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
      if (cVar5 != '\0') goto LAB_0010cb83;
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
        if (cVar5 != '\0') goto LAB_0010cb83;
      }
      cVar5 = String::operator==(param_1,"CanvasItem");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Node::is_class((Node *)this,param_1);
          return uVar6;
        }
        goto LAB_0010cd1e;
      }
    }
  }
LAB_0010cb83:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010cd1e:
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
    if (cVar5 != '\0') goto LAB_0010ce2b;
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
      if (cVar5 != '\0') goto LAB_0010ce2b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010cf2e;
    }
  }
LAB_0010ce2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010cf2e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_98;
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
  local_78 = &_LC54;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC54;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
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
      goto LAB_0010d094;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d094:
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00117078 != Object::_get_property_list) {
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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



/* EditorCommandPalette::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorCommandPalette::_get_property_listv(EditorCommandPalette *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  local_78 = "EditorCommandPalette";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorCommandPalette";
  local_98 = 0;
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"EditorCommandPalette",false);
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00117080 != Object::_get_property_list) {
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00117088 != CanvasItem::_get_property_list) {
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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



/* Ref<Shortcut>::unref() */

void __thiscall Ref<Shortcut>::unref(Ref<Shortcut> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Pair<String, Ref<Shortcut> >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Pair<String,
   Ref<Shortcut> > > > >::operator[](String const&) */

CowData<char32_t> * __thiscall
HashMap<String,Pair<String,Ref<Shortcut>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Pair<String,Ref<Shortcut>>>>>
::operator[](HashMap<String,Pair<String,Ref<Shortcut>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Pair<String,Ref<Shortcut>>>>>
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
  undefined8 *puVar42;
  void *pvVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined8 *puVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  long in_FS_OFFSET;
  CowData<char32_t> *local_a0;
  CowData<char32_t> local_78 [16];
  undefined1 local_68 [16];
  long local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0010f2ad:
    local_78[0] = (CowData<char32_t>)0x0;
    local_78[1] = (CowData<char32_t>)0x0;
    local_78[2] = (CowData<char32_t>)0x0;
    local_78[3] = (CowData<char32_t>)0x0;
    local_78[4] = (CowData<char32_t>)0x0;
    local_78[5] = (CowData<char32_t>)0x0;
    local_78[6] = (CowData<char32_t>)0x0;
    local_78[7] = (CowData<char32_t>)0x0;
    local_78[8] = (CowData<char32_t>)0x0;
    local_78[9] = (CowData<char32_t>)0x0;
    local_78[10] = (CowData<char32_t>)0x0;
    local_78[0xb] = (CowData<char32_t>)0x0;
    local_78[0xc] = (CowData<char32_t>)0x0;
    local_78[0xd] = (CowData<char32_t>)0x0;
    local_78[0xe] = (CowData<char32_t>)0x0;
    local_78[0xf] = (CowData<char32_t>)0x0;
    uVar47 = (ulong)uVar55;
    uVar40 = uVar47 * 4;
    uVar52 = uVar47 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar43 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar55 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar43 + uVar52)) && (pvVar43 < (void *)((long)pvVar3 + uVar40))
         ) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar47 != uVar40);
      }
      else {
        memset(pvVar3,0,uVar40);
        memset(pvVar43,0,uVar52);
      }
LAB_0010f1a4:
      iVar44 = *(int *)(this + 0x2c);
      if (iVar44 != 0) {
LAB_0010f1b0:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar40 = CONCAT44(0,uVar38);
        lVar53 = *(long *)(this + 0x10);
        uVar39 = 1;
        if (uVar51 != 0) {
          uVar39 = uVar51;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar4;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar40;
        lVar45 = SUB168(auVar17 * auVar33,8);
        uVar51 = *(uint *)(lVar53 + lVar45 * 4);
        uVar50 = SUB164(auVar17 * auVar33,8);
        if (uVar51 != 0) {
          do {
            if (uVar51 == uVar39) {
              cVar37 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),
                                          param_1);
              if (cVar37 != '\0') {
                lVar4 = *(long *)(*(long *)(this + 8) + (ulong)uVar50 * 8);
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar4 + 0x18),(CowData *)local_78);
                Ref<Shortcut>::operator=((Ref<Shortcut> *)(lVar4 + 0x20),(Ref *)0x0);
                local_a0 = (CowData<char32_t> *)
                           (*(long *)(*(long *)(this + 8) + (ulong)uVar50 * 8) + 0x18);
                goto LAB_0010f05e;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar50 + 1) * lVar4;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar40;
            lVar45 = SUB168(auVar18 * auVar34,8);
            uVar51 = *(uint *)(lVar53 + lVar45 * 4);
            uVar50 = SUB164(auVar18 * auVar34,8);
          } while ((uVar51 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar51 * lVar4, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar40, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar50) - SUB164(auVar19 * auVar35,8)) * lVar4,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar40, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      uVar47 = (ulong)uVar55;
      goto LAB_0010ec60;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_0010ec60;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010f1b0;
LAB_0010ec86:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a0 = (CowData<char32_t> *)0x18;
      goto LAB_0010f05e;
    }
    uVar40 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar40 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar47 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar43 = *(void **)(this + 8);
    uVar40 = uVar47 * 4;
    uVar52 = uVar47 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar47);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar52);
      }
    }
    if (uVar38 != 0) {
      uVar40 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar55 != 0) {
          lVar4 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar39);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar55 * lVar53;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar52;
          lVar45 = SUB168(auVar5 * auVar21,8);
          puVar1 = (uint *)(lVar4 + lVar45 * 4);
          iVar44 = SUB164(auVar5 * auVar21,8);
          uVar51 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar43 + uVar40 * 8);
          while (uVar51 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar51 * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar52;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar6 * auVar22,8)) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar52;
            uVar54 = SUB164(auVar7 * auVar23,8);
            uVar49 = uVar41;
            if (uVar54 < uVar50) {
              *puVar1 = uVar55;
              puVar42 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar49 = *puVar42;
              *puVar42 = uVar41;
              uVar55 = uVar51;
              uVar50 = uVar54;
            }
            uVar50 = uVar50 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar44 + 1) * lVar53;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar52;
            lVar45 = SUB168(auVar8 * auVar24,8);
            puVar1 = (uint *)(lVar4 + lVar45 * 4);
            iVar44 = SUB164(auVar8 * auVar24,8);
            uVar41 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar41;
          *puVar1 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar38 != uVar40);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar40 = CONCAT44(0,uVar55);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar38 = 1;
      if (uVar39 != 0) {
        uVar38 = uVar39;
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      lVar45 = SUB168(auVar13 * auVar29,8);
      uVar39 = *(uint *)(lVar53 + lVar45 * 4);
      uVar51 = SUB164(auVar13 * auVar29,8);
      if (uVar39 == 0) {
        lVar46 = *(long *)(this + 8);
      }
      else {
        lVar46 = *(long *)(this + 8);
        uVar50 = 0;
        do {
          if (uVar38 == uVar39) {
            cVar37 = String::operator==((String *)(*(long *)(lVar46 + lVar45 * 8) + 0x10),param_1);
            if (cVar37 != '\0') {
              local_a0 = (CowData<char32_t> *)
                         (*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18);
              goto LAB_0010f06b;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar46 = *(long *)(this + 8);
          }
          uVar50 = uVar50 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar51 + 1) * lVar4;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar40;
          lVar45 = SUB168(auVar14 * auVar30,8);
          uVar39 = *(uint *)(lVar53 + lVar45 * 4);
          uVar51 = SUB164(auVar14 * auVar30,8);
        } while ((uVar39 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar39 * lVar4, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar40, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar51 + uVar55) - SUB164(auVar15 * auVar31,8)) * lVar4,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar40, uVar50 <= SUB164(auVar16 * auVar32,8)));
      }
      local_78[0] = (CowData<char32_t>)0x0;
      local_78[1] = (CowData<char32_t>)0x0;
      local_78[2] = (CowData<char32_t>)0x0;
      local_78[3] = (CowData<char32_t>)0x0;
      local_78[4] = (CowData<char32_t>)0x0;
      local_78[5] = (CowData<char32_t>)0x0;
      local_78[6] = (CowData<char32_t>)0x0;
      local_78[7] = (CowData<char32_t>)0x0;
      local_78[8] = (CowData<char32_t>)0x0;
      local_78[9] = (CowData<char32_t>)0x0;
      local_78[10] = (CowData<char32_t>)0x0;
      local_78[0xb] = (CowData<char32_t>)0x0;
      local_78[0xc] = (CowData<char32_t>)0x0;
      local_78[0xd] = (CowData<char32_t>)0x0;
      local_78[0xe] = (CowData<char32_t>)0x0;
      local_78[0xf] = (CowData<char32_t>)0x0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar46 == 0) goto LAB_0010f2ad;
      goto LAB_0010f1a4;
    }
    uVar47 = (ulong)uVar55;
    local_78[0] = (CowData<char32_t>)0x0;
    local_78[1] = (CowData<char32_t>)0x0;
    local_78[2] = (CowData<char32_t>)0x0;
    local_78[3] = (CowData<char32_t>)0x0;
    local_78[4] = (CowData<char32_t>)0x0;
    local_78[5] = (CowData<char32_t>)0x0;
    local_78[6] = (CowData<char32_t>)0x0;
    local_78[7] = (CowData<char32_t>)0x0;
    local_78[8] = (CowData<char32_t>)0x0;
    local_78[9] = (CowData<char32_t>)0x0;
    local_78[10] = (CowData<char32_t>)0x0;
    local_78[0xb] = (CowData<char32_t>)0x0;
    local_78[0xc] = (CowData<char32_t>)0x0;
    local_78[0xd] = (CowData<char32_t>)0x0;
    local_78[0xe] = (CowData<char32_t>)0x0;
    local_78[0xf] = (CowData<char32_t>)0x0;
    iVar44 = 0;
LAB_0010ec60:
    if ((float)uVar47 * __LC44 < (float)(iVar44 + 1)) goto LAB_0010ec86;
  }
  local_58 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
  }
  local_50 = (undefined1  [16])0x0;
  Ref<Shortcut>::operator=((Ref<Shortcut> *)(local_50 + 8),(Ref *)0x0);
  puVar42 = (undefined8 *)operator_new(0x28,"");
  puVar42[2] = 0;
  *puVar42 = local_68._0_8_;
  puVar42[1] = local_68._8_8_;
  if (local_58 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar42 + 2),(CowData *)&local_58);
  }
  local_a0 = (CowData<char32_t> *)(puVar42 + 3);
  puVar42[3] = 0;
  if (local_50._0_8_ != 0) {
    CowData<char32_t>::_ref(local_a0,(CowData *)local_50);
  }
  puVar42[4] = 0;
  Ref<Shortcut>::operator=((Ref<Shortcut> *)(puVar42 + 4),(Ref *)local_50._8_8_);
  Ref<Shortcut>::unref((Ref<Shortcut> *)(local_50 + 8));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  puVar48 = *(undefined8 **)(this + 0x20);
  if (puVar48 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar42;
  }
  else {
    *puVar48 = puVar42;
    puVar42[1] = puVar48;
  }
  *(undefined8 **)(this + 0x20) = puVar42;
  uVar38 = String::hash();
  lVar4 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar38 != 0) {
    uVar55 = uVar38;
  }
  uVar51 = 0;
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar55 * lVar53;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar46 = SUB168(auVar9 * auVar25,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar4 + lVar46 * 4);
  iVar44 = SUB164(auVar9 * auVar25,8);
  uVar39 = *puVar1;
  while (uVar39 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar39 * lVar53;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar40;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar10 * auVar26,8)) * lVar53;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar40;
    uVar50 = SUB164(auVar11 * auVar27,8);
    puVar48 = puVar42;
    if (uVar50 < uVar51) {
      *puVar1 = uVar55;
      puVar2 = (undefined8 *)(lVar45 + lVar46 * 8);
      puVar48 = (undefined8 *)*puVar2;
      *puVar2 = puVar42;
      uVar51 = uVar50;
      uVar55 = uVar39;
    }
    uVar51 = uVar51 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar44 + 1) * lVar53;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    lVar46 = SUB168(auVar12 * auVar28,8);
    puVar1 = (uint *)(lVar4 + lVar46 * 4);
    iVar44 = SUB164(auVar12 * auVar28,8);
    puVar42 = puVar48;
    uVar39 = *puVar1;
  }
  *(undefined8 **)(lVar45 + lVar46 * 8) = puVar42;
  *puVar1 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010f05e:
  CowData<char32_t>::_unref(local_78);
LAB_0010f06b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorCommandPalette, String, String, Callable, String>(void
   (EditorCommandPalette::*)(String, String, Callable, String)) */

MethodBind *
create_method_bind<EditorCommandPalette,String,String,Callable,String>
          (_func_void_String_String_Callable_String *param_1)

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
  *(_func_void_String_String_Callable_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113340;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "EditorCommandPalette";
  local_30 = 0x14;
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



/* MethodBind* create_method_bind<EditorCommandPalette, String>(void
   (EditorCommandPalette::*)(String)) */

MethodBind * create_method_bind<EditorCommandPalette,String>(_func_void_String *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001133a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorCommandPalette";
  local_30 = 0x14;
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



/* EditorCommandPalette::_bind_methods() [clone .cold] */

void EditorCommandPalette::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Variant>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Vector<Variant> varray<Ref<InputEventShortcut>, bool>(Ref<InputEventShortcut>, bool) [clone
   .isra.0] [clone .cold] */

void varray<Ref<InputEventShortcut>,bool>(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorCommandPalette::CommandEntry>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorCommandPalette::CommandEntry>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorCommandPalette::_initialize_classv() */

void EditorCommandPalette::_initialize_classv(void)

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
              if ((code *)PTR__bind_methods_00117060 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_00117050 != Object::_bind_compatibility_methods)
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
      if ((code *)PTR__bind_methods_00117058 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorCommandPalette";
    local_70 = 0;
    local_50 = 0x14;
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



/* HashMap<String, EditorCommandPalette::Command, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorCommandPalette::Command> > >::_lookup_pos(String const&, unsigned int&) const */

undefined8 __thiscall
HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
::_lookup_pos(HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
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
/* HashMap<String, EditorCommandPalette::Command, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorCommandPalette::Command> > >::operator[](String const&) */

Callable * __thiscall
HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
::operator[](HashMap<String,EditorCommandPalette::Command,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorCommandPalette::Command>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
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
  char cVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 uVar27;
  void *__s_00;
  undefined8 *puVar28;
  void *pvVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 *puVar39;
  long in_FS_OFFSET;
  CowData<char32_t> *local_f8;
  Callable *local_e8;
  Callable *local_d8;
  CowData<char32_t> *local_d0;
  uint local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  long local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  long local_78;
  Callable local_70 [16];
  long local_60;
  Ref *local_58;
  long local_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  cVar23 = _lookup_pos(this,param_1,&local_c0);
  if (cVar23 != '\0') {
    local_e8 = (Callable *)(*(long *)(*(long *)(this + 8) + (ulong)local_c0 * 8) + 0x18);
    goto LAB_0011037a;
  }
  local_90 = 0;
  local_b8 = 0;
  uVar33 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_b0 = 0;
  local_98 = 0;
  local_a8 = (undefined1  [16])0x0;
  if (*(long *)(this + 8) == 0) {
    uVar34 = (ulong)uVar33;
    uVar26 = uVar34 * 4;
    uVar38 = uVar34 * 8;
    uVar27 = Memory::alloc_static(uVar26,false);
    *(undefined8 *)(this + 0x10) = uVar27;
    pvVar29 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = pvVar29;
    if (uVar33 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar29 + uVar38)) && (pvVar29 < (void *)((long)pvVar4 + uVar26))
         ) {
        uVar26 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar26 * 4) = 0;
          *(undefined8 *)((long)pvVar29 + uVar26 * 8) = 0;
          uVar26 = uVar26 + 1;
        } while (uVar34 != uVar26);
      }
      else {
        memset(pvVar4,0,uVar26);
        memset(pvVar29,0,uVar38);
      }
    }
  }
  local_bc = 0;
  cVar23 = _lookup_pos(this,param_1,&local_bc);
  if (cVar23 == '\0') {
    if ((float)uVar33 * __LC44 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar33 = *(uint *)(this + 0x28);
      if (uVar33 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_e8 = (Callable *)0x18;
        goto LAB_00110340;
      }
      uVar26 = (ulong)(uVar33 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar25 = *(uint *)(hash_table_size_primes + (ulong)uVar33 * 4);
      if (uVar33 + 1 < 2) {
        uVar26 = 2;
      }
      uVar33 = *(uint *)(hash_table_size_primes + uVar26 * 4);
      uVar34 = (ulong)uVar33;
      *(int *)(this + 0x28) = (int)uVar26;
      pvVar29 = *(void **)(this + 8);
      uVar26 = uVar34 * 4;
      uVar38 = uVar34 * 8;
      pvVar4 = *(void **)(this + 0x10);
      uVar27 = Memory::alloc_static(uVar26,false);
      *(undefined8 *)(this + 0x10) = uVar27;
      __s_00 = (void *)Memory::alloc_static(uVar38,false);
      *(void **)(this + 8) = __s_00;
      if (uVar33 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar26))) {
          uVar26 = 0;
          do {
            *(undefined4 *)((long)__s + uVar26 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
            uVar26 = uVar26 + 1;
          } while (uVar26 != uVar34);
        }
        else {
          memset(__s,0,uVar26);
          memset(__s_00,0,uVar38);
        }
      }
      if (uVar25 != 0) {
        uVar26 = 0;
        do {
          uVar33 = *(uint *)((long)pvVar4 + uVar26 * 4);
          if (uVar33 != 0) {
            lVar5 = *(long *)(this + 0x10);
            uVar36 = 0;
            uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar38 = CONCAT44(0,uVar3);
            lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar33 * lVar6;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar38;
            lVar31 = SUB168(auVar7 * auVar15,8);
            puVar1 = (uint *)(lVar5 + lVar31 * 4);
            iVar30 = SUB164(auVar7 * auVar15,8);
            uVar37 = *puVar1;
            uVar27 = *(undefined8 *)((long)pvVar29 + uVar26 * 8);
            while (uVar37 != 0) {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar37 * lVar6;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar38;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)((uVar3 + iVar30) - SUB164(auVar8 * auVar16,8)) * lVar6;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar38;
              uVar24 = SUB164(auVar9 * auVar17,8);
              uVar35 = uVar27;
              if (uVar24 < uVar36) {
                *puVar1 = uVar33;
                puVar28 = (undefined8 *)((long)__s_00 + lVar31 * 8);
                uVar35 = *puVar28;
                *puVar28 = uVar27;
                uVar33 = uVar37;
                uVar36 = uVar24;
              }
              uVar36 = uVar36 + 1;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)(iVar30 + 1) * lVar6;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar38;
              lVar31 = SUB168(auVar10 * auVar18,8);
              puVar1 = (uint *)(lVar5 + lVar31 * 4);
              iVar30 = SUB164(auVar10 * auVar18,8);
              uVar27 = uVar35;
              uVar37 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar31 * 8) = uVar27;
            *puVar1 = uVar33;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar26 = uVar26 + 1;
        } while (uVar25 != uVar26);
        Memory::free_static(pvVar29,false);
        Memory::free_static(pvVar4,false);
      }
    }
    local_78 = 0;
    local_88 = (undefined1  [16])0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)param_1);
    }
    Callable::Callable(local_70,(Callable *)&local_b8);
    local_60 = 0;
    if (local_a8._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)local_a8);
    }
    local_58 = (Ref *)0x0;
    Ref<Shortcut>::operator=((Ref<Shortcut> *)&local_58,(Ref *)local_a8._8_8_);
    local_50 = 0;
    if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)&local_98);
    }
    local_48 = local_90;
    puVar28 = (undefined8 *)operator_new(0x48,"");
    puVar28[2] = 0;
    *puVar28 = local_88._0_8_;
    puVar28[1] = local_88._8_8_;
    if (local_78 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar28 + 2),(CowData *)&local_78);
    }
    local_e8 = (Callable *)(puVar28 + 3);
    Callable::Callable(local_e8,local_70);
    puVar28[5] = 0;
    if (local_60 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar28 + 5),(CowData *)&local_60);
    }
    puVar28[6] = 0;
    Ref<Shortcut>::operator=((Ref<Shortcut> *)(puVar28 + 6),local_58);
    puVar28[7] = 0;
    if (local_50 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar28 + 7),(CowData *)&local_50);
    }
    *(undefined4 *)(puVar28 + 8) = local_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    Ref<Shortcut>::unref((Ref<Shortcut> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    Callable::~Callable(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    puVar39 = *(undefined8 **)(this + 0x20);
    if (puVar39 == (undefined8 *)0x0) {
      *(undefined8 **)(this + 0x18) = puVar28;
    }
    else {
      *puVar39 = puVar28;
      puVar28[1] = puVar39;
    }
    *(undefined8 **)(this + 0x20) = puVar28;
    uVar25 = String::hash();
    lVar5 = *(long *)(this + 0x10);
    uVar33 = 1;
    if (uVar25 != 0) {
      uVar33 = uVar25;
    }
    uVar37 = 0;
    uVar25 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar26 = CONCAT44(0,uVar25);
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar33 * lVar6;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar26;
    lVar32 = SUB168(auVar11 * auVar19,8);
    lVar31 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar5 + lVar32 * 4);
    iVar30 = SUB164(auVar11 * auVar19,8);
    uVar3 = *puVar1;
    while (uVar3 != 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar3 * lVar6;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar26;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((iVar30 + uVar25) - SUB164(auVar12 * auVar20,8)) * lVar6;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar26;
      uVar36 = SUB164(auVar13 * auVar21,8);
      puVar39 = puVar28;
      if (uVar36 < uVar37) {
        *puVar1 = uVar33;
        puVar2 = (undefined8 *)(lVar31 + lVar32 * 8);
        puVar39 = (undefined8 *)*puVar2;
        *puVar2 = puVar28;
        uVar37 = uVar36;
        uVar33 = uVar3;
      }
      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar30 + 1) * lVar6;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar26;
      lVar32 = SUB168(auVar14 * auVar22,8);
      puVar1 = (uint *)(lVar5 + lVar32 * 4);
      iVar30 = SUB164(auVar14 * auVar22,8);
      puVar28 = puVar39;
      uVar3 = *puVar1;
    }
    *(undefined8 **)(lVar31 + lVar32 * 8) = puVar28;
    *puVar1 = uVar33;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar26 = (ulong)local_bc;
    lVar5 = *(long *)(*(long *)(this + 8) + uVar26 * 8);
    Callable::operator=((Callable *)(lVar5 + 0x18),(Callable *)&local_b8);
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar5 + 0x28),(CowData *)local_a8);
    Ref<Shortcut>::operator=((Ref<Shortcut> *)(lVar5 + 0x30),(Ref *)local_a8._8_8_);
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar5 + 0x38),(CowData *)&local_98);
    *(undefined4 *)(lVar5 + 0x40) = local_90;
    local_e8 = (Callable *)(*(long *)(*(long *)(this + 8) + uVar26 * 8) + 0x18);
  }
LAB_00110340:
  local_d0 = (CowData<char32_t> *)local_a8;
  local_d8 = (Callable *)&local_b8;
  local_f8 = (CowData<char32_t> *)&local_98;
  CowData<char32_t>::_unref(local_f8);
  if ((local_a8._8_8_ != 0) && (cVar23 = RefCounted::unreference(), cVar23 != '\0')) {
    uVar27 = local_a8._8_8_;
    cVar23 = predelete_handler((Object *)local_a8._8_8_);
    if (cVar23 != '\0') {
      (**(code **)(*(long *)uVar27 + 0x140))(uVar27);
      Memory::free_static((void *)uVar27,false);
    }
  }
  CowData<char32_t>::_unref(local_d0);
  Callable::~Callable(local_d8);
LAB_0011037a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_e8;
}



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<Variant>::_realloc(long) */

undefined8 __thiscall CowData<Variant>::_realloc(CowData<Variant> *this,long param_1)

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



/* CowData<EditorCommandPalette::CommandEntry>::_unref() */

void __thiscall
CowData<EditorCommandPalette::CommandEntry>::_unref
          (CowData<EditorCommandPalette::CommandEntry> *this)

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
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 2));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 1));
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
          plVar6 = plVar6 + 4;
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



/* CowData<EditorCommandPalette::CommandEntry>::_realloc(long) */

undefined8 __thiscall
CowData<EditorCommandPalette::CommandEntry>::_realloc
          (CowData<EditorCommandPalette::CommandEntry> *this,long param_1)

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
/* Error CowData<EditorCommandPalette::CommandEntry>::resize<false>(long) */

undefined8 __thiscall
CowData<EditorCommandPalette::CommandEntry>::resize<false>
          (CowData<EditorCommandPalette::CommandEntry> *this,long param_1)

{
  CowData<char32_t> *this_00;
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
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
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar6 * 0x20;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_00110b50:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x20 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar10 = uVar9 + 1;
  if (lVar10 == 0) goto LAB_00110b50;
  uVar11 = param_1;
  if (param_1 <= lVar6) {
    while (lVar6 = *(long *)this, lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar11) {
        if (lVar10 != lVar8) {
          uVar5 = _realloc(this,lVar10);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      this_00 = (CowData<char32_t> *)(lVar6 + uVar11 * 0x20);
      CowData<char32_t>::_unref(this_00 + 0x10);
      CowData<char32_t>::_unref(this_00 + 8);
      CowData<char32_t>::_unref(this_00);
      uVar11 = uVar11 + 1;
    }
    goto LAB_00110ba6;
  }
  if (lVar10 == lVar8) {
LAB_00110ac3:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00110ba6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar6 = puVar7[-1];
    if (param_1 <= lVar6) goto LAB_00110a1b;
  }
  else {
    if (lVar6 != 0) {
      uVar5 = _realloc(this,lVar10);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00110ac3;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar6 = 0;
  }
  pauVar3 = (undefined1 (*) [16])(puVar7 + lVar6 * 4);
  do {
    *(undefined8 *)pauVar3[1] = 0;
    pauVar4 = pauVar3 + 2;
    *pauVar3 = (undefined1  [16])0x0;
    *(undefined4 *)(pauVar3[1] + 8) = 0;
    *(undefined4 *)(pauVar3[1] + 0xc) = 0;
    pauVar3 = pauVar4;
  } while (pauVar4 != (undefined1 (*) [16])(puVar7 + param_1 * 4));
LAB_00110a1b:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00110cd8) */
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
      goto LAB_00110fb4;
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
LAB_00110fb4:
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
      goto LAB_001111b0;
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
LAB_001111b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String, String, Callable, String>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<String,String,Callable,String>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_58 == *(char **)pVVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((Callable *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Callable *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00111430;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  local_70 = 0;
  if (*(long *)(*(long *)(param_3 + 0x18) + 8) != 0) {
    CowData<char32_t>::_ref
              ((CowData<char32_t> *)&local_70,(CowData *)(*(long *)(param_3 + 0x18) + 8));
  }
  Callable::Callable((Callable *)&local_58,(Callable *)(*(long *)(param_3 + 0x10) + 8));
  local_68 = 0;
  if (*(long *)(*(long *)(param_3 + 8) + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(*(long *)(param_3 + 8) + 8));
  }
  local_60 = 0;
  if (*(long *)(*(long *)param_3 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(*(long *)param_3 + 8));
  }
  (*pcVar3)((long *)((long)param_2 + lVar1),(CowData<char32_t> *)&local_60,
            (CowData<char32_t> *)&local_68,(Callable *)&local_58,(CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Callable::~Callable((Callable *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00111430:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String, String, Callable, String>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String,String,Callable,String>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((Callable *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Callable *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011168f;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  local_70 = 0;
  if (*(long *)*(CowData **)((long)param_3 + 0x18) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,*(CowData **)((long)param_3 + 0x18));
  }
  Callable::Callable((Callable *)&local_58,*(Callable **)((long)param_3 + 0x10));
  local_68 = 0;
  if (*(long *)*(CowData **)((long)param_3 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,*(CowData **)((long)param_3 + 8));
  }
  local_60 = 0;
                    /* WARNING: Load size is inaccurate */
  if (*(long *)*param_3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,*param_3);
  }
  (*pcVar3)((long *)((long)param_2 + lVar1),(CowData<char32_t> *)&local_60,
            (CowData<char32_t> *)&local_68,(Callable *)&local_58,(CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Callable::~Callable((Callable *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0011168f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001119a0;
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
      if (in_R8D != 1) goto LAB_001119f0;
LAB_001119e0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001119f0:
        uVar6 = 4;
        goto LAB_00111995;
      }
      if (in_R8D == 1) goto LAB_001119e0;
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
    uVar4 = _LC50;
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
LAB_00111995:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001119a0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String, String, Callable, String>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<String,String,Callable,String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  long lVar13;
  uint in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  Variant *local_a8;
  Variant local_90 [8];
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined4 *local_68 [5];
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_78 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC40,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00111dd0;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_a8 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar10 = 0;
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(pVVar2 + -8);
      iVar10 = (int)lVar13;
    }
    if ((int)(4 - in_R8D) <= iVar10) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar12 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar9 = iVar10 + -4 + (int)lVar7;
          if (lVar13 <= (int)uVar9) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar9,lVar13,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar12 = pVVar2 + (ulong)uVar9 * 0x18;
        }
        local_68[lVar7] = (undefined4 *)pVVar12;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 4);
      *in_R9 = 0;
      if (((ulong)local_a8 & 1) != 0) {
        local_a8 = *(Variant **)(local_a8 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*local_68[3],4);
      uVar4 = _LC117;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String(local_90);
      cVar5 = Variant::can_convert_strict(*local_68[2],0x19);
      uVar4 = _LC118;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_Callable((Variant *)&local_78);
      cVar5 = Variant::can_convert_strict(*local_68[1],4);
      uVar4 = _LC119;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_88);
      cVar5 = Variant::can_convert_strict(*local_68[0],4);
      uVar4 = _LC50;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_80);
      (*(code *)local_a8)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_80,
                          (Variant *)&local_88,(Variant *)&local_78,local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      Callable::~Callable((Callable *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      goto LAB_00111dd0;
    }
    uVar6 = 4;
  }
  else {
    uVar6 = 3;
  }
  *in_R9 = uVar6;
  in_R9[2] = 4;
LAB_00111dd0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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
    local_78 = &_LC16;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* void call_get_argument_type_info<String, String, Callable, String>(int, PropertyInfo&) */

void call_get_argument_type_info<String,String,Callable,String>(int param_1,PropertyInfo *param_2)

{
  int iVar1;
  long lVar2;
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
  call_get_argument_type_info_helper<String>(param_1,&local_94,param_2);
  call_get_argument_type_info_helper<String>(param_1,&local_94,param_2);
  iVar1 = local_94;
  if (param_1 == local_94) {
    local_80 = 0;
    local_78 = &_LC16;
    local_88 = 0;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x19,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88
               ,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  local_94 = iVar1 + 1;
  call_get_argument_type_info_helper<String>(param_1,&local_94,param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String, String, Callable, String>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String,String,Callable,String>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info<String,String,Callable,String>(in_EDX,pPVar1);
  return pPVar1;
}



/* EditorCommandPalette::singleton */

void EditorCommandPalette::_GLOBAL__sub_I_singleton(void)

{
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    PopupMenu::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  prev_rect._0_8_ = 0;
  prev_rect._8_8_ = 0;
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
/* EditorCommandPalette::~EditorCommandPalette() */

void __thiscall EditorCommandPalette::~EditorCommandPalette(EditorCommandPalette *this)

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
/* EditorCommandPalette::CommandEntry::CommandEntry(EditorCommandPalette::CommandEntry const&) */

void __thiscall
EditorCommandPalette::CommandEntry::CommandEntry(CommandEntry *this,CommandEntry *param_1)

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
/* MethodBindT<String>::~MethodBindT() */

void __thiscall MethodBindT<String>::~MethodBindT(MethodBindT<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String, String, Callable, String>::~MethodBindT() */

void __thiscall
MethodBindT<String,String,Callable,String>::~MethodBindT
          (MethodBindT<String,String,Callable,String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorCommandPalette, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorCommandPalette,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Viewport, void, Ref<InputEvent> const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Viewport,void,Ref<InputEvent>const&,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Viewport,void,Ref<InputEvent>const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorCommandPalette, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorCommandPalette,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorCommandPalette, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorCommandPalette,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorCommandPalette,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BaseButton, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BaseButton,void,bool> *this)

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



