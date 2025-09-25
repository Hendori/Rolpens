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



/* CowData<TreeItem*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<TreeItem*>::_copy_on_write(CowData<TreeItem*> *this)

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



/* EditorInspectorPluginAudioStreamInteractive::can_handle(Object*) */

bool __thiscall
EditorInspectorPluginAudioStreamInteractive::can_handle
          (EditorInspectorPluginAudioStreamInteractive *this,Object *param_1)

{
  long lVar1;
  
  if (param_1 != (Object *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&AudioStreamInteractive::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* void Ref<Texture>::TEMPNAMEPLACEHOLDERVALUE(Ref<Texture2D> const&) [clone .isra.0] */

void __thiscall Ref<Texture>::operator=(Ref<Texture> *this,Ref *param_1)

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
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Texture::typeinfo,0);
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



/* AudioStreamInteractiveTransitionEditor::AudioStreamInteractiveTransitionEditor() */

void __thiscall
AudioStreamInteractiveTransitionEditor::AudioStreamInteractiveTransitionEditor
          (AudioStreamInteractiveTransitionEditor *this)

{
  StringName *pSVar1;
  Vector2 *pVVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  String *pSVar6;
  SplitContainer *this_00;
  Tree *this_01;
  CallableCustom *this_02;
  BoxContainer *this_03;
  CheckBox *pCVar7;
  OptionButton *pOVar8;
  SpinBox *this_04;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  float fVar11;
  String local_70 [8];
  long local_68 [2];
  long local_58 [2];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  AcceptDialog::AcceptDialog((AcceptDialog *)this);
  *(undefined8 *)(this + 0xdc0) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001114c8;
  this[0xe10] = (AudioStreamInteractiveTransitionEditor)0x0;
  *(undefined4 *)(this + 0xe14) = 0;
  *(undefined8 *)(this + 0xe40) = 2;
  *(undefined8 *)(this + 0xe50) = 0;
  this[0xe58] = (AudioStreamInteractiveTransitionEditor)0x0;
  *(undefined1 (*) [16])(this + 0xdb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe30) = (undefined1  [16])0x0;
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"AudioStreamInteractive Transition Editor");
  TTR(local_70,(String *)local_68);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  this_00 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(this_00,false);
  this_00[0xa68] = (SplitContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_001119e8;
  postinitialize_handler((Object *)this_00);
  *(SplitContainer **)(this + 0xdb8) = this_00;
  Node::add_child(this,this_00,0,0);
  this_01 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_01);
  postinitialize_handler((Object *)this_01);
  *(Tree **)(this + 0xdc0) = this_01;
  Node::set_auto_translate_mode(this_01,2);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xdc0),0));
  pSVar1 = *(StringName **)(this + 0xdc0);
  StringName::StringName((StringName *)local_58,"draw_guides",false);
  Control::add_theme_constant_override(pSVar1,(int)(String *)local_58);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  Tree::set_select_mode(*(undefined8 *)(this + 0xdc0),2);
  pVVar2 = *(Vector2 **)(this + 0xdc0);
  fVar11 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar11 * _LC25._4_4_,fVar11 * (float)_LC25);
  Control::set_custom_minimum_size(pVVar2);
  Node::add_child(*(undefined8 *)(this + 0xdb8),*(undefined8 *)(this + 0xdc0),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdc0),3);
  plVar3 = *(long **)(this + 0xdc0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined **)(this_02 + 0x20) = &_LC15;
  *(AudioStreamInteractiveTransitionEditor **)(this_02 + 0x28) = this;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_02 = &PTR_hash_00111f80;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar5;
  *(code **)(this_02 + 0x38) = _cell_selected;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "AudioStreamInteractiveTransitionEditor::_cell_selected";
  Callable::Callable((Callable *)local_58,this_02);
  StringName::StringName((StringName *)local_68,"multi_selected",false);
  (*pcVar4)(plVar3,(String *)local_68,(String *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  this_03 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_03,true);
  this_03[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_03 = &PTR__initialize_classv_00111150;
  postinitialize_handler((Object *)this_03);
  Node::add_child(*(undefined8 *)(this + 0xdb8),this_03,0,0);
  pCVar7 = (CheckBox *)operator_new(0xc60,"");
  local_58[0] = 0;
  CheckBox::CheckBox(pCVar7,(String *)local_58);
  postinitialize_handler((Object *)pCVar7);
  *(CheckBox **)(this + 0xdd8) = pCVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String **)(this + 0xdd8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Enabled");
  TTR(local_70,(String *)local_68);
  Button::set_text(pSVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0xdd8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Use Transition:");
  TTR(local_70,(String *)local_68);
  VBoxContainer::add_margin_child((String *)this_03,(Control *)local_70,SUB81(uVar5,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar3 = *(long **)(this + 0xdd8);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<AudioStreamInteractiveTransitionEditor>
            ((AudioStreamInteractiveTransitionEditor *)local_58,(char *)this,
             (_func_void *)"&AudioStreamInteractiveTransitionEditor::_edited");
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x238,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  pOVar8 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(pOVar8,(String *)local_58);
  postinitialize_handler((Object *)pOVar8);
  *(OptionButton **)(this + 0xde0) = pOVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0xde0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Transition From:");
  TTR(local_70,(String *)local_68);
  VBoxContainer::add_margin_child((String *)this_03,(Control *)local_70,SUB81(uVar5,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String **)(this + 0xde0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Immediate");
  TTR(local_70,(String *)local_68);
  iVar9 = (int)local_70;
  OptionButton::add_item(pSVar6,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String **)(this + 0xde0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Next Beat");
  TTR(local_70,(String *)local_68);
  OptionButton::add_item(pSVar6,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String **)(this + 0xde0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Next Bar");
  TTR(local_70,(String *)local_68);
  OptionButton::add_item(pSVar6,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String **)(this + 0xde0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Clip End");
  TTR(local_70,(String *)local_68);
  OptionButton::add_item(pSVar6,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar3 = *(long **)(this + 0xde0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<AudioStreamInteractiveTransitionEditor>
            ((AudioStreamInteractiveTransitionEditor *)local_58,(char *)this,
             (_func_void *)"&AudioStreamInteractiveTransitionEditor::_edited");
  iVar10 = (int)(String *)local_68;
  Callable::unbind(iVar10);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x260,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  pOVar8 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(pOVar8,(String *)local_58);
  postinitialize_handler((Object *)pOVar8);
  *(OptionButton **)(this + 0xde8) = pOVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0xde8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Transition To:");
  TTR(local_70,(String *)local_68);
  VBoxContainer::add_margin_child((String *)this_03,(Control *)local_70,SUB81(uVar5,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String **)(this + 0xde8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Same Position");
  TTR(local_70,(String *)local_68);
  OptionButton::add_item(pSVar6,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String **)(this + 0xde8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Clip Start");
  TTR(local_70,(String *)local_68);
  OptionButton::add_item(pSVar6,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String **)(this + 0xde8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Prev Position");
  TTR(local_70,(String *)local_68);
  OptionButton::add_item(pSVar6,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar3 = *(long **)(this + 0xde8);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<AudioStreamInteractiveTransitionEditor>
            ((AudioStreamInteractiveTransitionEditor *)local_58,(char *)this,
             (_func_void *)"&AudioStreamInteractiveTransitionEditor::_edited");
  Callable::unbind(iVar10);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x260,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  pOVar8 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(pOVar8,(String *)local_58);
  postinitialize_handler((Object *)pOVar8);
  *(OptionButton **)(this + 0xdf0) = pOVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0xdf0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Fade Mode:");
  TTR(local_70,(String *)local_68);
  VBoxContainer::add_margin_child((String *)this_03,(Control *)local_70,SUB81(uVar5,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar3 = *(long **)(this + 0xdf0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<AudioStreamInteractiveTransitionEditor>
            ((AudioStreamInteractiveTransitionEditor *)local_58,(char *)this,
             (_func_void *)"&AudioStreamInteractiveTransitionEditor::_edited");
  Callable::unbind(iVar10);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x260,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  this_04 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(this_04);
  postinitialize_handler((Object *)this_04);
  *(SpinBox **)(this + 0xdf8) = this_04;
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Fade Beats:");
  TTR(local_70,(String *)local_68);
  VBoxContainer::add_margin_child((String *)this_03,(Control *)local_70,SUB81(this_04,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Range::set_max(_LC42);
  Range::set_step(_LC43);
  plVar3 = *(long **)(this + 0xdf8);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<AudioStreamInteractiveTransitionEditor>
            ((AudioStreamInteractiveTransitionEditor *)local_58,(char *)this,
             (_func_void *)"&AudioStreamInteractiveTransitionEditor::_edited");
  Callable::unbind(iVar10);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x280,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  pOVar8 = (OptionButton *)operator_new(0xd00,"");
  local_58[0] = 0;
  OptionButton::OptionButton(pOVar8,(String *)local_58);
  postinitialize_handler((Object *)pOVar8);
  *(OptionButton **)(this + 0xe00) = pOVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  uVar5 = *(undefined8 *)(this + 0xe00);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Filler Clip:");
  TTR(local_70,(String *)local_68);
  VBoxContainer::add_margin_child((String *)this_03,(Control *)local_70,SUB81(uVar5,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xe00),2);
  plVar3 = *(long **)(this + 0xe00);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<AudioStreamInteractiveTransitionEditor>
            ((AudioStreamInteractiveTransitionEditor *)local_58,(char *)this,
             (_func_void *)"&AudioStreamInteractiveTransitionEditor::_edited");
  Callable::unbind(iVar10);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x260,(String *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  pCVar7 = (CheckBox *)operator_new(0xc60,"");
  local_58[0] = 0;
  CheckBox::CheckBox(pCVar7,(String *)local_58);
  postinitialize_handler((Object *)pCVar7);
  *(CheckBox **)(this + 0xe08) = pCVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pSVar6 = *(String **)(this + 0xe08);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Enabled");
  TTR(local_70,(String *)local_68);
  Button::set_text(pSVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar3 = *(long **)(this + 0xe08);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<AudioStreamInteractiveTransitionEditor>
            ((AudioStreamInteractiveTransitionEditor *)local_58,(char *)this,
             (_func_void *)"&AudioStreamInteractiveTransitionEditor::_edited");
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x238,(String *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  uVar5 = *(undefined8 *)(this + 0xe08);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Hold Previous:");
  TTR(local_70,(String *)local_68);
  VBoxContainer::add_margin_child((String *)this_03,(Control *)local_70,SUB81(uVar5,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Window::set_exclusive(SUB81(this,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginAudioStreamInteractive::EditorInspectorPluginAudioStreamInteractive() */

void __thiscall
EditorInspectorPluginAudioStreamInteractive::EditorInspectorPluginAudioStreamInteractive
          (EditorInspectorPluginAudioStreamInteractive *this)

{
  long lVar1;
  AudioStreamInteractiveTransitionEditor *this_00;
  
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x180) = 0;
  *(code **)this = Node::Node;
  StringName::StringName((StringName *)(this + 0x188),"_can_handle",false);
  this[400] = (EditorInspectorPluginAudioStreamInteractive)0x0;
  *(undefined8 *)(this + 0x198) = 0;
  StringName::StringName((StringName *)(this + 0x1a0),"_parse_begin",false);
  this[0x1a8] = (EditorInspectorPluginAudioStreamInteractive)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  StringName::StringName((StringName *)(this + 0x1b8),"_parse_category",false);
  this[0x1c0] = (EditorInspectorPluginAudioStreamInteractive)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  StringName::StringName((StringName *)(this + 0x1d0),"_parse_group",false);
  this[0x1d8] = (EditorInspectorPluginAudioStreamInteractive)0x0;
  *(undefined8 *)(this + 0x1e0) = 0;
  StringName::StringName((StringName *)(this + 0x1e8),"_parse_property",false);
  this[0x1f0] = (EditorInspectorPluginAudioStreamInteractive)0x0;
  *(undefined8 *)(this + 0x1f8) = 0;
  StringName::StringName((StringName *)(this + 0x200),"_parse_end",false);
  this[0x208] = (EditorInspectorPluginAudioStreamInteractive)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00111d60;
  *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
  this_00 = (AudioStreamInteractiveTransitionEditor *)operator_new(0xe60,"");
  AudioStreamInteractiveTransitionEditor::AudioStreamInteractiveTransitionEditor(this_00);
  postinitialize_handler((Object *)this_00);
  lVar1 = EditorNode::singleton;
  *(AudioStreamInteractiveTransitionEditor **)(this + 0x218) = this_00;
  Node::add_child(*(undefined8 *)(lVar1 + 0x6c8),this_00,0,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001017a0) */
/* WARNING: Removing unreachable block (ram,0x00101930) */
/* WARNING: Removing unreachable block (ram,0x00101943) */
/* AudioStreamInteractiveEditorPlugin::AudioStreamInteractiveEditorPlugin() */

void __thiscall
AudioStreamInteractiveEditorPlugin::AudioStreamInteractiveEditorPlugin
          (AudioStreamInteractiveEditorPlugin *this)

{
  long lVar1;
  char cVar2;
  EditorInspectorPluginAudioStreamInteractive *this_00;
  Object *pOVar3;
  EditorInspectorPluginAudioStreamInteractive *pEVar4;
  long in_FS_OFFSET;
  Object *local_28;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = Variant::Variant;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (AudioStreamInteractiveEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00111740;
  *(undefined8 *)(this + 0x658) = 0;
  this_00 = (EditorInspectorPluginAudioStreamInteractive *)operator_new(0x220,"");
  EditorInspectorPluginAudioStreamInteractive::EditorInspectorPluginAudioStreamInteractive(this_00);
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
LAB_0010178c:
    EditorPlugin::add_inspector_plugin((Ref *)this);
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler((Object *)this_00);
        pEVar4 = (EditorInspectorPluginAudioStreamInteractive *)0x0;
        if (cVar2 != '\0') goto LAB_001018c8;
      }
      goto LAB_0010178c;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') &&
       (cVar2 = predelete_handler((Object *)this_00), pEVar4 = this_00, cVar2 != '\0')) {
LAB_001018c8:
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
      this_00 = pEVar4;
      if (pEVar4 == (EditorInspectorPluginAudioStreamInteractive *)0x0) goto LAB_0010178c;
    }
    local_28 = (Object *)0x0;
    pOVar3 = (Object *)__dynamic_cast(this_00,&Object::typeinfo,&EditorInspectorPlugin::typeinfo,0);
    if ((pOVar3 != (Object *)0x0) &&
       (cVar2 = RefCounted::reference(), local_28 = pOVar3, cVar2 == '\0')) {
      local_28 = (Object *)0x0;
    }
    EditorPlugin::add_inspector_plugin((Ref *)this);
    if (((local_28 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0')) ||
       (cVar2 = predelete_handler(local_28), cVar2 == '\0')) {
LAB_00101851:
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)this_00), cVar2 != '\0')) {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(this_00,false);
          return;
        }
        goto LAB_00101948;
      }
    }
    else {
      (**(code **)(*(long *)local_28 + 0x140))(local_28);
      Memory::free_static(local_28,false);
      if (this_00 != (EditorInspectorPluginAudioStreamInteractive *)0x0) goto LAB_00101851;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101948:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractiveTransitionEditor::_notification(int) [clone .part.0] */

void AudioStreamInteractiveTransitionEditor::_notification(int param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 in_register_0000003c;
  long lVar6;
  long in_FS_OFFSET;
  Object *local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  lVar6 = CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OptionButton::clear();
  pRVar1 = *(Ref **)(lVar6 + 0xdf0);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Disabled";
  local_68 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_70);
  iVar5 = (int)(String *)&local_58;
  OptionButton::add_icon_item(pRVar1,(String *)&local_70,iVar5);
  if (local_70 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_70;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_70);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))();
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  pRVar1 = *(Ref **)(lVar6 + 0xdf0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Fade-In";
  local_68 = 0;
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_70);
  OptionButton::add_icon_item(pRVar1,(String *)&local_70,iVar5);
  if (local_70 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_70;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_70);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))();
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  pRVar1 = *(Ref **)(lVar6 + 0xdf0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Fade-Out";
  local_68 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_70);
  OptionButton::add_icon_item(pRVar1,(String *)&local_70,iVar5);
  if (local_70 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_70;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_70);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))();
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  pRVar1 = *(Ref **)(lVar6 + 0xdf0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Cross-Fade";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_70);
  OptionButton::add_icon_item(pRVar1,(String *)&local_70,iVar5);
  if (local_70 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_70;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_70);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))();
        Memory::free_static(pOVar2,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  pRVar1 = *(Ref **)(lVar6 + 0xdf0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Automatic";
  local_68 = 0;
  local_50 = 9;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
    }
  }
  Window::get_editor_theme_icon((StringName *)&local_70);
  OptionButton::add_icon_item(pRVar1,(String *)&local_70,iVar5);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractiveTransitionEditor::_notification(int) */

void __thiscall
AudioStreamInteractiveTransitionEditor::_notification
          (AudioStreamInteractiveTransitionEditor *this,int param_1)

{
  if ((param_1 != 0xd) && (param_1 != 0x20)) {
    return;
  }
  _notification((int)this);
  return;
}



/* EditorInspectorPluginAudioStreamInteractive::parse_end(Object*) */

void __thiscall
EditorInspectorPluginAudioStreamInteractive::parse_end
          (EditorInspectorPluginAudioStreamInteractive *this,Object *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  Ref *pRVar7;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  Object *local_98;
  undefined8 local_90;
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    lVar6 = __dynamic_cast(param_1,&Object::typeinfo,&AudioStreamInteractive::typeinfo,0);
    if (lVar6 != 0) {
      local_b0 = 0;
      local_90 = 0;
      local_98 = (Object *)&_LC15;
      String::parse_latin1((StrRange *)&local_b0);
      local_98 = (Object *)0x105eef;
      local_a8[0] = 0;
      local_90 = 0x10;
      String::parse_latin1((StrRange *)local_a8);
      TTR((String *)&local_98,(String *)local_a8);
      pRVar7 = (Ref *)EditorInspector::create_inspector_action_button((String *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (parse_end(Object*)::{lambda()#1}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&parse_end(Object*)::{lambda()#1}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&parse_end(Object*)::{lambda()#1}::operator()()::sname,false);
          __cxa_atexit(StringName::~StringName,
                       &parse_end(Object*)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&parse_end(Object*)::{lambda()#1}::operator()()::sname);
        }
      }
      Window::get_editor_theme_icon((StringName *)&local_98);
      Button::set_button_icon(pRVar7);
      if (local_98 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        pOVar3 = local_98;
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_98);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))();
            Memory::free_static(pOVar3,false);
          }
        }
      }
      pcVar1 = *(code **)(*(long *)pRVar7 + 0x108);
      this_00 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this_00);
      *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
      *(undefined8 *)(this_00 + 0x40) = 0;
      uVar2 = *(undefined8 *)(this + 0x60);
      *(undefined ***)this_00 = &PTR_hash_00112010;
      *(undefined **)(this_00 + 0x20) = &_LC15;
      *(undefined8 *)(this_00 + 0x30) = uVar2;
      *(code **)(this_00 + 0x38) = _edit;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(EditorInspectorPluginAudioStreamInteractive **)(this_00 + 0x28) = this;
      CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
      *(char **)(this_00 + 0x20) = "EditorInspectorPluginAudioStreamInteractive::_edit";
      Callable::Callable((Callable *)&local_98,this_00);
      Variant::Variant((Variant *)local_78,param_1);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88 = (Variant *)local_78;
      Callable::bindp((Variant **)local_a8,(int)(String *)&local_98);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      (*pcVar1)(pRVar7,SceneStringNames::singleton + 0x238,(StrRange *)local_a8,0);
      Callable::~Callable((Callable *)local_a8);
      Callable::~Callable((Callable *)&local_98);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        EditorInspectorPlugin::add_custom_control((Control *)this);
        return;
      }
      goto LAB_001024ad;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001024ad:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractiveTransitionEditor::_edited() [clone .part.0] */

void __thiscall
AudioStreamInteractiveTransitionEditor::_edited(AudioStreamInteractiveTransitionEditor *this)

{
  Variant *pVVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  StringName *pSVar5;
  bool *pbVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  Object *pOVar16;
  Variant *pVVar17;
  int *piVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  long in_FS_OFFSET;
  double dVar22;
  int local_238;
  undefined8 local_1f8;
  long local_1f0;
  char *local_1e8;
  undefined8 local_1e0;
  Variant local_1d8 [24];
  Variant local_1c0 [24];
  undefined8 local_1a8;
  undefined1 local_1a0 [16];
  undefined8 local_188 [10];
  Variant *local_138;
  undefined1 auStack_130 [16];
  Variant local_120 [24];
  Variant local_108 [24];
  Variant local_f0 [24];
  Variant local_d8 [24];
  Variant local_c0 [24];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar8 = BaseButton::is_pressed();
  iVar11 = OptionButton::get_selected();
  iVar12 = OptionButton::get_selected();
  iVar13 = OptionButton::get_selected();
  dVar22 = (double)Range::get_value();
  iVar14 = OptionButton::get_selected();
  local_238 = 0;
  if (0 < iVar14) {
    local_238 = OptionButton::get_selected();
    local_238 = local_238 + -1;
  }
  bVar9 = (bool)BaseButton::is_pressed();
  uVar15 = EditorUndoRedoManager::get_singleton();
  local_1f0 = 0;
  local_1e8 = "";
  local_1e0 = 0;
  String::parse_latin1((StrRange *)&local_1f0);
  local_1e8 = "Edit Transitions";
  local_1f8 = 0;
  local_1e0 = 0x10;
  String::parse_latin1((StrRange *)&local_1f8);
  TTR((String *)&local_1e8,(String *)&local_1f8);
  EditorUndoRedoManager::create_action(uVar15,(String *)&local_1e8,0,0);
  lVar21 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  lVar4 = *(long *)(this + 0xe50);
  do {
    while( true ) {
      if ((lVar4 == 0) || (*(long *)(lVar4 + -8) <= lVar21)) {
        pOVar16 = (Object *)EditorUndoRedoManager::get_singleton();
        pbVar6 = *(bool **)(this + 0xdb0);
        StringName::StringName((StringName *)&local_1e8,"_transitions",false);
        Object::get((StringName *)&local_138,pbVar6);
        StringName::StringName((StringName *)&local_1f0,"_transitions",false);
        EditorUndoRedoManager::add_undo_property
                  (pOVar16,*(StringName **)(this + 0xdb0),(Variant *)&local_1f0);
        if ((StringName::configured != '\0') && (local_1f0 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_138] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_1e8 != (char *)0x0)) {
          StringName::unref();
        }
        pOVar16 = (Object *)EditorUndoRedoManager::get_singleton();
        StringName::StringName((StringName *)&local_1e8,"_update_transitions",false);
        local_138 = (Variant *)0x0;
        auStack_130 = (undefined1  [16])0x0;
        EditorUndoRedoManager::add_do_methodp(pOVar16,(StringName *)this,(Variant **)&local_1e8,0);
        if (Variant::needs_deinit[(int)local_138] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_1e8 != (char *)0x0)) {
          StringName::unref();
        }
        pOVar16 = (Object *)EditorUndoRedoManager::get_singleton();
        StringName::StringName((StringName *)&local_1e8,"_update_transitions",false);
        local_138 = (Variant *)0x0;
        auStack_130 = (undefined1  [16])0x0;
        EditorUndoRedoManager::add_undo_methodp(pOVar16,(StringName *)this,(Variant **)&local_1e8,0)
        ;
        if (Variant::needs_deinit[(int)local_138] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_1e8 != (char *)0x0)) {
          StringName::unref();
        }
        bVar9 = (bool)EditorUndoRedoManager::get_singleton();
        EditorUndoRedoManager::commit_action(bVar9);
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      if (cVar8 != '\0') break;
      cVar10 = AudioStreamInteractive::has_transition
                         ((int)*(undefined8 *)(this + 0xdb0),*(int *)(lVar4 + lVar21 * 8));
      if (cVar10 != '\0') {
        pOVar16 = (Object *)EditorUndoRedoManager::get_singleton();
        lVar4 = *(long *)(this + 0xe50);
        if (lVar4 == 0) goto LAB_00102b40;
        lVar20 = *(long *)(lVar4 + -8);
        if (lVar20 <= lVar21) goto LAB_00102b43;
        piVar18 = (int *)(lVar4 + lVar21 * 8);
        iVar2 = piVar18[1];
        iVar3 = *piVar18;
        StringName::StringName((StringName *)&local_1e8,"erase_transition",false);
        pSVar5 = *(StringName **)(this + 0xdb0);
        Variant::Variant(local_1d8,iVar3);
        pVVar17 = (Variant *)&local_1a8;
        Variant::Variant(local_1c0,iVar2);
        local_1a8 = 0;
        local_1a0 = (undefined1  [16])0x0;
        auStack_130._0_8_ = local_1c0;
        local_138 = local_1d8;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar16,pSVar5,(Variant **)&local_1e8,(int)(Variant *)&local_138);
        cVar10 = Variant::needs_deinit[(int)local_1a8];
        while( true ) {
          if (cVar10 != '\0') {
            Variant::_clear_internal();
          }
          if (pVVar17 == local_1d8) break;
          pVVar1 = pVVar17 + -0x18;
          pVVar17 = pVVar17 + -0x18;
          cVar10 = Variant::needs_deinit[*(int *)pVVar1];
        }
        goto LAB_00102840;
      }
LAB_001026a4:
      lVar4 = *(long *)(this + 0xe50);
      lVar21 = lVar21 + 1;
    }
    pOVar16 = (Object *)EditorUndoRedoManager::get_singleton();
    lVar4 = *(long *)(this + 0xe50);
    if (lVar4 == 0) {
LAB_00102b40:
      lVar20 = 0;
LAB_00102b43:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar21,lVar20,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    lVar20 = *(long *)(lVar4 + -8);
    if (lVar20 <= lVar21) goto LAB_00102b43;
    piVar18 = (int *)(lVar4 + lVar21 * 8);
    iVar2 = piVar18[1];
    iVar3 = *piVar18;
    StringName::StringName((StringName *)&local_1e8,"add_transition",false);
    pSVar5 = *(StringName **)(this + 0xdb0);
    Variant::Variant((Variant *)&local_138,iVar3);
    Variant::Variant(local_120,iVar2);
    Variant::Variant(local_108,iVar11);
    Variant::Variant(local_f0,iVar12);
    Variant::Variant(local_d8,iVar13);
    Variant::Variant(local_c0,(float)dVar22);
    Variant::Variant(local_a8,0 < iVar14);
    Variant::Variant(local_90,local_238);
    Variant::Variant(local_78,bVar9);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    pVVar17 = (Variant *)&local_138;
    puVar19 = local_188;
    do {
      *puVar19 = pVVar17;
      pVVar17 = pVVar17 + 0x18;
      puVar19 = puVar19 + 1;
    } while ((Variant *)&local_60 != pVVar17);
    pVVar17 = local_48;
    EditorUndoRedoManager::add_do_methodp(pOVar16,pSVar5,(Variant **)&local_1e8,(int)local_188);
    do {
      while (pVVar1 = pVVar17 + -0x18, pVVar17 = pVVar17 + -0x18,
            Variant::needs_deinit[*(int *)pVVar1] == '\0') {
        if (pVVar17 == (Variant *)&local_138) goto LAB_00102840;
      }
      Variant::_clear_internal();
    } while (pVVar17 != (Variant *)&local_138);
LAB_00102840:
    if ((StringName::configured == '\0') || (local_1e8 == (char *)0x0)) goto LAB_001026a4;
    lVar21 = lVar21 + 1;
    StringName::unref();
    lVar4 = *(long *)(this + 0xe50);
  } while( true );
}



/* AudioStreamInteractiveTransitionEditor::_edited() */

void __thiscall
AudioStreamInteractiveTransitionEditor::_edited(AudioStreamInteractiveTransitionEditor *this)

{
  if (this[0xe58] != (AudioStreamInteractiveTransitionEditor)0x0) {
    return;
  }
  _edited(this);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioStreamInteractiveTransitionEditor::_update_transitions() */

void AudioStreamInteractiveTransitionEditor::_update_transitions(void)

{
  StringName *pSVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  Ref *pRVar14;
  undefined *puVar15;
  uint uVar16;
  Ref<Texture> *pRVar17;
  Object *pOVar18;
  char *pcVar19;
  long in_RDI;
  long lVar20;
  uint uVar21;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  Ref *local_d8;
  Ref *local_d0;
  Ref *local_c8;
  Ref *local_c0;
  long local_b8;
  Ref *local_b0;
  Ref *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  cVar7 = Window::is_visible();
  if (cVar7 != '\0') {
    uVar9 = AudioStreamInteractive::get_clip_count();
    pSVar1 = *(StringName **)(in_RDI + 0xdc0);
    StringName::StringName((StringName *)&local_a8,"Tree",false);
    local_98 = Control::get_theme_color(pSVar1,(StringName *)(SceneStringNames::singleton + 0xb0));
    uStack_90 = in_XMM1_Qa;
    if ((StringName::configured != '\0') && (local_a8 != (Ref *)0x0)) {
      StringName::unref();
    }
    local_88 = local_98;
    fStack_7c = (float)((ulong)uStack_90 >> 0x20);
    _uStack_80 = CONCAT44(_LC126 * fStack_7c,(int)uStack_90);
    if ((_update_transitions()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar11 = __cxa_guard_acquire(&_update_transitions()::{lambda()#1}::operator()()::sname),
       iVar11 != 0)) {
      _scs_create((char *)&_update_transitions()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_transitions()::{lambda()#1}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&_update_transitions()::{lambda()#1}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_c8);
    local_68 = 0;
    Ref<Texture>::operator=((Ref<Texture> *)&local_68,local_c8);
    if ((_update_transitions()::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar11 = __cxa_guard_acquire(&_update_transitions()::{lambda()#2}::operator()()::sname),
       iVar11 != 0)) {
      _scs_create((char *)&_update_transitions()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_transitions()::{lambda()#2}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&_update_transitions()::{lambda()#2}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_c0);
    local_60 = 0;
    Ref<Texture>::operator=((Ref<Texture> *)&local_60,local_c0);
    if ((_update_transitions()::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar11 = __cxa_guard_acquire(&_update_transitions()::{lambda()#3}::operator()()::sname),
       iVar11 != 0)) {
      _scs_create((char *)&_update_transitions()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_transitions()::{lambda()#3}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&_update_transitions()::{lambda()#3}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_b8);
    local_58 = 0;
    if (((local_b8 != 0) &&
        (lVar13 = __dynamic_cast(local_b8,&Object::typeinfo,&Texture::typeinfo), lVar13 != 0)) &&
       (local_58 = lVar13, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
      local_58 = 0;
    }
    if ((_update_transitions()::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar11 = __cxa_guard_acquire(&_update_transitions()::{lambda()#4}::operator()()::sname),
       iVar11 != 0)) {
      _scs_create((char *)&_update_transitions()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_transitions()::{lambda()#4}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&_update_transitions()::{lambda()#4}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_b0);
    local_50 = 0;
    Ref<Texture>::operator=((Ref<Texture> *)&local_50,local_b0);
    if ((_update_transitions()::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar11 = __cxa_guard_acquire(&_update_transitions()::{lambda()#5}::operator()()::sname),
       iVar11 != 0)) {
      _scs_create((char *)&_update_transitions()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_transitions()::{lambda()#5}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&_update_transitions()::{lambda()#5}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_a8);
    local_48 = 0;
    Ref<Texture>::operator=((Ref<Texture> *)&local_48,local_a8);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a8);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b0);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c0);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
    if (-1 < (int)uVar9) {
      uVar16 = 0;
      do {
        uVar10 = 0xffffffff;
        if (uVar9 != uVar16) {
          uVar10 = uVar16;
        }
        lVar13 = 0;
        do {
          cVar7 = AudioStreamInteractive::has_transition
                            ((int)*(undefined8 *)(in_RDI + 0xdb0),uVar10);
          local_d8 = (Ref *)0x0;
          uVar21 = uVar10;
          if (cVar7 == '\0') {
            cVar8 = AudioStreamInteractive::has_transition((int)*(undefined8 *)(in_RDI + 0xdb0),-1);
            iVar11 = (int)(StringName *)&local_b0;
            if (cVar8 == '\0') {
              cVar8 = AudioStreamInteractive::has_transition
                                ((int)*(undefined8 *)(in_RDI + 0xdb0),uVar10);
              if (cVar8 == '\0') {
                cVar8 = AudioStreamInteractive::has_transition
                                  ((int)*(undefined8 *)(in_RDI + 0xdb0),-1);
                local_b0 = (Ref *)0x0;
                if (cVar8 != '\0') {
                  String::parse_latin1((String *)&local_b0,"");
                  local_b8 = 0;
                  String::parse_latin1((String *)&local_b8,"Using All Clips -> Any Clip.");
                  TTR((String *)&local_a8,(String *)&local_b8);
                  if (local_d8 != local_a8) {
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                    local_d8 = local_a8;
                    local_a8 = (Ref *)0x0;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                  goto LAB_00103686;
                }
                String::parse_latin1((String *)&local_b0,"");
                local_b8 = 0;
                String::parse_latin1((String *)&local_b8,"No transition available.");
                TTR((String *)&local_a8,(String *)&local_b8);
                if (local_d8 != local_a8) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                  local_d8 = local_a8;
                  local_a8 = (Ref *)0x0;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
              }
              else {
                AudioStreamInteractive::get_clip_name(iVar11);
                local_c0 = (Ref *)0x0;
                String::parse_latin1((String *)&local_c0,"");
                local_c8 = (Ref *)0x0;
                String::parse_latin1((String *)&local_c8,"Using %s -> Any Clip.");
                TTR((String *)&local_b8,(String *)&local_c8);
                vformat<StringName>((StringName *)&local_a8,(StringName *)&local_b8,
                                    (StringName *)&local_b0);
                pRVar14 = local_a8;
                if (local_d8 != local_a8) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                  local_d8 = pRVar14;
                  local_a8 = (Ref *)0x0;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                if ((StringName::configured != '\0') && (local_b0 != (Ref *)0x0)) {
                  StringName::unref();
                }
              }
            }
            else {
              AudioStreamInteractive::get_clip_name(iVar11);
              local_c0 = (Ref *)0x0;
              String::parse_latin1((String *)&local_c0,"");
              local_c8 = (Ref *)0x0;
              String::parse_latin1((String *)&local_c8,"Using Any Clip -> %s.");
              TTR((String *)&local_b8,(String *)&local_c8);
              vformat<StringName>((StringName *)&local_a8,(StringName *)&local_b8,
                                  (StringName *)&local_b0);
              pRVar14 = local_a8;
              if (local_d8 != local_a8) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                local_d8 = pRVar14;
                local_a8 = (Ref *)0x0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              if ((StringName::configured != '\0') && (local_b0 != (Ref *)0x0)) {
                StringName::unref();
              }
LAB_00103686:
              uVar21 = 0xffffffff;
            }
          }
          pOVar18 = (Object *)0x0;
          local_d0 = (Ref *)0x0;
          local_c8 = (Ref *)0x0;
          cVar8 = AudioStreamInteractive::has_transition
                            ((int)*(undefined8 *)(in_RDI + 0xdb0),uVar21);
          if (cVar8 != '\0') {
            iVar11 = AudioStreamInteractive::get_transition_fade_mode
                               ((int)*(undefined8 *)(in_RDI + 0xdb0),uVar21);
            pOVar18 = (Object *)(&local_68)[iVar11];
            if ((pOVar18 != (Object *)0x0) && (cVar8 = RefCounted::reference(), cVar8 == '\0')) {
              pOVar18 = (Object *)0x0;
            }
            uVar12 = AudioStreamInteractive::get_transition_from_time
                               ((int)*(undefined8 *)(in_RDI + 0xdb0),uVar21);
            if (uVar12 == 2) {
              local_b0 = (Ref *)0x0;
              String::parse_latin1((String *)&local_b0,"");
              pcVar19 = "Next Bar";
LAB_00103465:
              local_b8 = 0;
              String::parse_latin1((String *)&local_b8,pcVar19);
              TTR((String *)&local_a8,(String *)&local_b8);
              if (local_a8 != (Ref *)0x0) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                local_d0 = local_a8;
                local_a8 = (Ref *)0x0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            }
            else {
              if (uVar12 < 3) {
                if (uVar12 == 0) {
                  local_b0 = (Ref *)0x0;
                  String::parse_latin1((String *)&local_b0,"");
                  pcVar19 = "Immediate";
                }
                else {
                  local_b0 = (Ref *)0x0;
                  String::parse_latin1((String *)&local_b0,"");
                  pcVar19 = "Next Beat";
                }
                goto LAB_00103465;
              }
              if (uVar12 == 3) {
                local_b0 = (Ref *)0x0;
                String::parse_latin1((String *)&local_b0,"");
                pcVar19 = "Clip End";
                goto LAB_00103465;
              }
            }
            iVar11 = AudioStreamInteractive::get_transition_to_time
                               ((int)*(undefined8 *)(in_RDI + 0xdb0),uVar21);
            if (iVar11 == 1) {
              local_b0 = (Ref *)0x0;
              String::parse_latin1((String *)&local_b0,"Transition Time Position");
              pcVar19 = "Start";
            }
            else if (iVar11 == 2) {
              local_b0 = (Ref *)0x0;
              String::parse_latin1((String *)&local_b0,"Transition Time Position");
              pcVar19 = "Prev";
            }
            else {
              if (iVar11 != 0) goto LAB_001030a6;
              local_b0 = (Ref *)0x0;
              String::parse_latin1((String *)&local_b0,"Transition Time Position");
              pcVar19 = "Same";
            }
            local_b8 = 0;
            String::parse_latin1((String *)&local_b8,pcVar19);
            TTR((String *)&local_a8,(String *)&local_b8);
            if (local_a8 != (Ref *)0x0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              local_c8 = local_a8;
              local_a8 = (Ref *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          }
LAB_001030a6:
          lVar2 = *(long *)(in_RDI + 0xdd0);
          if (lVar2 == 0) goto LAB_00103390;
          lVar20 = *(long *)(lVar2 + -8);
          if (lVar20 <= lVar13) goto LAB_00103396;
          uVar3 = *(undefined8 *)(lVar2 + lVar13 * 8);
          lVar2 = lVar13 * 8;
          local_b0 = (Ref *)0x0;
          if ((pOVar18 != (Object *)0x0) &&
             (pRVar14 = (Ref *)__dynamic_cast(pOVar18,&Object::typeinfo,&Texture2D::typeinfo,0),
             pRVar14 != (Ref *)0x0)) {
            local_a8 = (Ref *)0x0;
            local_b0 = pRVar14;
            cVar8 = RefCounted::reference();
            if (cVar8 == '\0') {
              local_b0 = (Ref *)0x0;
            }
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a8);
          }
          TreeItem::set_icon((int)uVar3,(Ref *)(ulong)uVar16);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b0);
          pRVar14 = local_d0;
          lVar4 = *(long *)(in_RDI + 0xdd0);
          if (lVar4 == 0) goto LAB_00103390;
          lVar20 = *(long *)(lVar4 + -8);
          if (lVar20 <= lVar13) goto LAB_00103396;
          uVar3 = *(undefined8 *)(lVar4 + lVar2);
          if ((local_c8 == (Ref *)0x0) || (*(uint *)(local_c8 + -8) < 2)) {
            local_a8 = (Ref *)0x0;
            if (local_d0 != (Ref *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_d0);
            }
            TreeItem::set_text(uVar3,uVar16,(StringName *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          }
          else {
            local_b0 = (Ref *)0x0;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_c8);
            local_b8 = 0;
            if (pRVar14 != (Ref *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
            }
            local_c0 = (Ref *)0x0;
            puVar6 = &_LC124;
            do {
              puVar15 = puVar6;
              puVar6 = puVar15 + 4;
            } while (*(int *)(puVar15 + 4) != 0);
            local_a8 = (Ref *)&_LC124;
            local_a0 = (long)(puVar15 + -0x10f2a4) >> 2;
            String::parse_utf32((StrRange *)&local_c0);
            vformat<String,String>
                      ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8);
            TreeItem::set_text(uVar3,uVar16,(StringName *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          }
          lVar4 = *(long *)(in_RDI + 0xdd0);
          if (lVar4 == 0) goto LAB_00103390;
          lVar20 = *(long *)(lVar4 + -8);
          if (lVar20 <= lVar13) goto LAB_00103396;
          TreeItem::set_tooltip_text((int)*(undefined8 *)(lVar4 + lVar2),(String *)(ulong)uVar16);
          lVar4 = *(long *)(in_RDI + 0xdd0);
          if (cVar7 == '\0') {
            if (lVar4 != 0) {
              lVar20 = *(long *)(lVar4 + -8);
              if (lVar20 <= lVar13) goto LAB_00103396;
              TreeItem::set_custom_color((int)*(undefined8 *)(lVar4 + lVar2),(Color *)(ulong)uVar16)
              ;
              lVar4 = *(long *)(in_RDI + 0xdd0);
              if (lVar4 != 0) {
                lVar20 = *(long *)(lVar4 + -8);
                if (lVar20 <= lVar13) goto LAB_00103396;
                local_78 = CONCAT44(_UNK_00112504,_LC137);
                uStack_70 = CONCAT44(_LC126,_UNK_00112508);
                TreeItem::set_icon_modulate
                          ((int)*(undefined8 *)(lVar4 + lVar2),(Color *)(ulong)uVar16);
                goto LAB_00103267;
              }
            }
LAB_00103390:
            lVar20 = 0;
LAB_00103396:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar13,lVar20,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          if (lVar4 == 0) goto LAB_00103390;
          lVar20 = *(long *)(lVar4 + -8);
          if (lVar20 <= lVar13) goto LAB_00103396;
          TreeItem::set_custom_color((int)*(undefined8 *)(lVar4 + lVar2),(Color *)(ulong)uVar16);
          lVar4 = *(long *)(in_RDI + 0xdd0);
          if (lVar4 == 0) goto LAB_00103390;
          lVar20 = *(long *)(lVar4 + -8);
          if (lVar20 <= lVar13) goto LAB_00103396;
          local_78 = CONCAT44(_LC137,_LC137);
          uStack_70 = CONCAT44(_LC137,_LC137);
          TreeItem::set_icon_modulate((int)*(undefined8 *)(lVar4 + lVar2),(Color *)(ulong)uVar16);
LAB_00103267:
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          if (((pOVar18 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
             (cVar7 = predelete_handler(pOVar18), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
            Memory::free_static(pOVar18,false);
          }
          lVar13 = lVar13 + 1;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        } while ((int)lVar13 <= (int)uVar9);
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 <= (int)uVar9);
    }
    pRVar17 = (Ref<Texture> *)local_40;
    do {
      pOVar18 = *(Object **)(pRVar17 + -8);
      pRVar17 = pRVar17 + -8;
      if (((pOVar18 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
         (cVar7 = predelete_handler(pOVar18), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
        Memory::free_static(pOVar18,false);
      }
    } while (pRVar17 != (Ref<Texture> *)&local_68);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractiveTransitionEditor::_bind_methods() */

void AudioStreamInteractiveTransitionEditor::_bind_methods(void)

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
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar4 = create_method_bind<AudioStreamInteractiveTransitionEditor>(_update_transitions);
  StringName::StringName((StringName *)local_68,"_update_transitions",false);
  local_58 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
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
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractiveTransitionEditor::_cell_selected(TreeItem*, int, bool) */

void __thiscall
AudioStreamInteractiveTransitionEditor::_cell_selected
          (AudioStreamInteractiveTransitionEditor *this,TreeItem *param_1,int param_2,bool param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  Callable *pCVar5;
  long in_FS_OFFSET;
  long local_88 [2];
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  pcVar1 = *(code **)(*(long *)param_1 + 0xb8);
  StringName::StringName((StringName *)local_88,"to",false);
  (*pcVar1)((Variant *)local_58,param_1,(StringName *)local_88,&local_78);
  iVar2 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  iVar3 = AudioStreamInteractive::get_clip_count();
  if (iVar3 == param_2) {
    param_2 = -1;
  }
  if (param_3) {
    iVar3 = *(int *)(this + 0xe14);
    *(int *)(this + 0xe14) = iVar3 + 1;
    local_58[1] = iVar2;
    local_58[0] = param_2;
    piVar4 = (int *)HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
                    ::operator[]((HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
                                  *)(this + 0xe18),(Vector2i *)local_58);
    *piVar4 = iVar3;
  }
  if (this[0xe10] == (AudioStreamInteractiveTransitionEditor)0x0) {
    MessageQueue::thread_singleton();
    pCVar5 = MessageQueue::main_singleton;
    if (*(long *)(in_FS_OFFSET + lRam0000000000103f31) != 0) {
      MessageQueue::thread_singleton();
      pCVar5 = *(Callable **)(in_FS_OFFSET + lRam0000000000103f4b);
    }
    create_custom_callable_function_pointer<AudioStreamInteractiveTransitionEditor>
              ((AudioStreamInteractiveTransitionEditor *)local_88,(char *)this,
               (_func_void *)"&AudioStreamInteractiveTransitionEditor::_update_selection");
    local_50 = (undefined1  [16])0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    CallQueue::push_callablep(pCVar5,(Variant **)local_88,0,false);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)local_88);
    this[0xe10] = (AudioStreamInteractiveTransitionEditor)0x1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractiveTransitionEditor::_update_selection() */

void __thiscall
AudioStreamInteractiveTransitionEditor::_update_selection
          (AudioStreamInteractiveTransitionEditor *this)

{
  CowData<Vector2i> *this_00;
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  int iVar25;
  long in_FS_OFFSET;
  float fVar26;
  int local_6c;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  this_00 = (CowData<Vector2i> *)(this + 0xe50);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xe10] = (AudioStreamInteractiveTransitionEditor)0x0;
  iVar14 = AudioStreamInteractive::get_clip_count();
  CowData<Vector2i>::resize<false>(this_00,0);
  local_6c = 0;
  lVar24 = 0;
  if (-1 < iVar14) {
    do {
      iVar25 = 0;
LAB_001040f0:
      do {
        lVar22 = *(long *)(this + 0xdd0);
        if (lVar22 == 0) {
LAB_00104510:
          lVar19 = 0;
LAB_00104513:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar24,lVar19,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        lVar19 = *(long *)(lVar22 + -8);
        if (lVar19 <= lVar24) goto LAB_00104513;
        cVar13 = TreeItem::is_selected((int)*(undefined8 *)(lVar22 + lVar24 * 8));
        if (cVar13 == '\0') {
LAB_00104362:
          iVar25 = iVar25 + 1;
          if (iVar14 < iVar25) break;
          goto LAB_001040f0;
        }
        if (*(long *)(this + 0xdd0) == 0) goto LAB_00104510;
        lVar19 = *(long *)(*(long *)(this + 0xdd0) + -8);
        if (lVar19 <= lVar24) goto LAB_00104513;
        TreeItem::get_metadata((int)(Variant *)local_58);
        local_60 = Variant::operator_cast_to_Vector2i((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((*(long *)(this + 0xe20) != 0) && (*(int *)(this + 0xe44) != 0)) {
          uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xe40) * 8);
          uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe40) * 4);
          uVar15 = ((int)local_60 * 0x16a88000 | (uint)((int)local_60 * -0x3361d2af) >> 0x11) *
                   0x1b873593 ^ 0x7f07c65;
          uVar15 = (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64 ^
                   (local_60._4_4_ * 0x16a88000 | (uint)(local_60._4_4_ * -0x3361d2af) >> 0x11) *
                   0x1b873593;
          uVar15 = (uVar15 << 0xd | uVar15 >> 0x13) * 5 + 0xe6546b64;
          uVar15 = (uVar15 >> 0x10 ^ uVar15) * -0x7a143595;
          uVar15 = (uVar15 ^ uVar15 >> 0xd) * -0x3d4d51cb;
          uVar23 = uVar15 ^ uVar15 >> 0x10;
          if (uVar15 == uVar15 >> 0x10) {
            uVar23 = 1;
            uVar18 = uVar2;
          }
          else {
            uVar18 = uVar23 * uVar2;
          }
          uVar21 = CONCAT44(0,uVar1);
          lVar22 = *(long *)(this + 0xe28);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar21;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar18;
          lVar19 = SUB168(auVar4 * auVar8,8);
          uVar15 = *(uint *)(lVar22 + lVar19 * 4);
          iVar16 = SUB164(auVar4 * auVar8,8);
          if (uVar15 != 0) {
            uVar20 = 0;
            do {
              if (uVar15 == uVar23) {
                cVar13 = Vector2i::operator==
                                   ((Vector2i *)
                                    (*(long *)(*(long *)(this + 0xe20) + lVar19 * 8) + 0x10),
                                    (Vector2i *)&local_60);
                if (cVar13 != '\0') {
                  piVar17 = (int *)HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
                                   ::operator[]((HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
                                                 *)(this + 0xe18),(Vector2i *)&local_60);
                  if (-1 < *piVar17) {
                    local_6c = (int)local_60;
                  }
                  break;
                }
                lVar22 = *(long *)(this + 0xe28);
              }
              uVar20 = uVar20 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (iVar16 + 1) * uVar2;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar21;
              lVar19 = SUB168(auVar5 * auVar9,8);
              uVar15 = *(uint *)(lVar22 + lVar19 * 4);
              iVar16 = SUB164(auVar5 * auVar9,8);
              if ((uVar15 == 0) ||
                 (auVar6._8_8_ = 0, auVar6._0_8_ = uVar15 * uVar2, auVar10._8_8_ = 0,
                 auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
                 auVar7._0_8_ = ((uVar1 + iVar16) - SUB164(auVar6 * auVar10,8)) * uVar2,
                 auVar11._8_8_ = 0, auVar11._0_8_ = uVar21, SUB164(auVar7 * auVar11,8) < uVar20))
              break;
            } while( true );
          }
        }
        uVar3 = local_60;
        if (*(long *)(this + 0xe50) == 0) {
          lVar22 = 1;
        }
        else {
          lVar22 = *(long *)(*(long *)(this + 0xe50) + -8) + 1;
        }
        iVar16 = CowData<Vector2i>::resize<false>(this_00,lVar22);
        if (iVar16 == 0) {
          if (*(long *)(this + 0xe50) == 0) {
            lVar19 = -1;
            lVar22 = 0;
          }
          else {
            lVar22 = *(long *)(*(long *)(this + 0xe50) + -8);
            lVar19 = lVar22 + -1;
            if (-1 < lVar19) {
              CowData<Vector2i>::_copy_on_write(this_00);
              *(undefined8 *)(*(long *)(this + 0xe50) + lVar19 * 8) = uVar3;
              goto LAB_00104362;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar19,lVar22,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
        iVar25 = iVar25 + 1;
      } while (iVar25 <= iVar14);
      lVar24 = lVar24 + 1;
    } while ((int)lVar24 <= iVar14);
  }
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdd8),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xde0),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xde8),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdf0),0));
  SpinBox::set_editable(SUB81(*(undefined8 *)(this + 0xdf8),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe00),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe08),0));
  if ((*(long *)(this + 0xe50) != 0) && (*(long *)(*(long *)(this + 0xe50) + -8) != 0)) {
    this[0xe58] = (AudioStreamInteractiveTransitionEditor)0x1;
    cVar13 = AudioStreamInteractive::has_transition((int)*(undefined8 *)(this + 0xdb0),local_6c);
    if (cVar13 == '\0') {
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdd8),0));
      OptionButton::select((int)*(undefined8 *)(this + 0xde0));
      OptionButton::select((int)*(undefined8 *)(this + 0xde8));
      OptionButton::select((int)*(undefined8 *)(this + 0xdf0));
      Range::set_value(_LC154);
      OptionButton::select((int)*(undefined8 *)(this + 0xe00));
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xe08),0));
    }
    else {
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdd8),0));
      uVar3 = *(undefined8 *)(this + 0xde0);
      AudioStreamInteractive::get_transition_from_time((int)*(undefined8 *)(this + 0xdb0),local_6c);
      OptionButton::select((int)uVar3);
      uVar3 = *(undefined8 *)(this + 0xde8);
      AudioStreamInteractive::get_transition_to_time((int)*(undefined8 *)(this + 0xdb0),local_6c);
      OptionButton::select((int)uVar3);
      uVar3 = *(undefined8 *)(this + 0xdf0);
      AudioStreamInteractive::get_transition_fade_mode((int)*(undefined8 *)(this + 0xdb0),local_6c);
      OptionButton::select((int)uVar3);
      fVar26 = (float)AudioStreamInteractive::get_transition_fade_beats
                                ((int)*(undefined8 *)(this + 0xdb0),local_6c);
      Range::set_value((double)fVar26);
      cVar13 = AudioStreamInteractive::is_transition_using_filler_clip
                         ((int)*(undefined8 *)(this + 0xdb0),local_6c);
      if (cVar13 == '\0') {
        OptionButton::select((int)*(undefined8 *)(this + 0xe00));
      }
      else {
        uVar3 = *(undefined8 *)(this + 0xe00);
        AudioStreamInteractive::get_transition_filler_clip
                  ((int)*(undefined8 *)(this + 0xdb0),local_6c);
        OptionButton::select((int)uVar3);
      }
      uVar3 = *(undefined8 *)(this + 0xe08);
      AudioStreamInteractive::is_transition_holding_previous
                ((int)*(undefined8 *)(this + 0xdb0),local_6c);
      BaseButton::set_pressed(SUB81(uVar3,0));
    }
    this[0xe58] = (AudioStreamInteractiveTransitionEditor)0x0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractiveTransitionEditor::edit(Object*) [clone .part.0] */

void AudioStreamInteractiveTransitionEditor::edit(Object *param_1)

{
  CowData<TreeItem*> *this;
  String *pSVar1;
  char *__s;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long in_FS_OFFSET;
  float fVar18;
  uint local_f0;
  int local_ec;
  Vector2 *local_b8;
  Object *local_a8;
  char *local_a0;
  long local_98;
  char *local_90;
  char *local_88;
  size_t local_80;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_88,"bold",false);
  Window::get_theme_font((StringName *)&local_a8,(StringName *)param_1);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_88,"bold_size",false);
  Window::get_theme_font_size((StringName *)param_1,(StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  Tree::clear();
  this = (CowData<TreeItem*> *)(param_1 + 0xdd0);
  CowData<TreeItem*>::resize<false>(this,0);
  if ((*(long *)(param_1 + 0xe20) != 0) && (*(int *)(param_1 + 0xe44) != 0)) {
    lVar13 = 0;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xe40) * 4);
    if (uVar5 != 0) {
      do {
        if (*(int *)(*(long *)(param_1 + 0xe28) + lVar13) != 0) {
          *(int *)(*(long *)(param_1 + 0xe28) + lVar13) = 0;
          Memory::free_static(*(void **)(*(long *)(param_1 + 0xe20) + lVar13 * 2),false);
          *(undefined8 *)(*(long *)(param_1 + 0xe20) + lVar13 * 2) = 0;
        }
        lVar13 = lVar13 + 4;
      } while ((ulong)uVar5 << 2 != lVar13);
    }
    *(undefined4 *)(param_1 + 0xe44) = 0;
    *(undefined1 (*) [16])(param_1 + 0xe30) = (undefined1  [16])0x0;
  }
  CowData<Vector2i>::resize<false>((CowData<Vector2i> *)(param_1 + 0xe50),0);
  uVar5 = AudioStreamInteractive::get_clip_count();
  Tree::set_columns((int)*(undefined8 *)(param_1 + 0xdc0));
  uVar12 = uVar5 + 1;
  iVar6 = Tree::create_item(*(TreeItem **)(param_1 + 0xdc0),0);
  uVar9 = Tree::create_item(*(TreeItem **)(param_1 + 0xdc0),iVar6);
  local_88 = "";
  local_90 = (char *)0x0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_88 = "From / To";
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_98);
  TTR((String *)&local_88,(String *)&local_98);
  TreeItem::set_text(uVar9,uVar12,(StringName *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  iVar14 = (int)uVar9;
  TreeItem::set_selectable(iVar14,SUB41(uVar12,0));
  OptionButton::clear();
  local_88 = "";
  pSVar1 = *(String **)(param_1 + 0xe00);
  local_90 = (char *)0x0;
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "Disabled";
  local_98 = 0;
  local_80 = 8;
  String::parse_latin1((StrRange *)&local_98);
  TTR((String *)&local_88,(String *)&local_98);
  OptionButton::add_item(pSVar1,(int)(StringName *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((edit(Object*)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&edit(Object*)::{lambda()#1}::operator()()::sname), iVar8 != 0)) {
    _scs_create((char *)&edit(Object*)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&edit(Object*)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&edit(Object*)::{lambda()#1}::operator()()::sname);
  }
  local_68 = Window::get_theme_color
                       ((StringName *)param_1,
                        (StringName *)&edit(Object*)::{lambda()#1}::operator()()::sname);
  param_1[0xe58] = (Object)0x1;
  if (-1 < (int)uVar5) {
    local_f0 = 0;
    local_ec = 0;
    do {
      bVar11 = SUB81(local_68,0);
      if (uVar5 == local_f0) {
        TreeItem::set_selectable(iVar14,SUB41(uVar5,0));
        TreeItem::set_custom_font(iVar14,(Ref *)(ulong)uVar5);
        TreeItem::set_custom_font_size(iVar14,uVar5);
        TreeItem::set_custom_bg_color(iVar14,(Color *)(ulong)uVar5,bVar11);
        local_88 = "";
        local_a0 = (char *)0x0;
        local_90 = (char *)0x0;
        local_80 = 0;
        String::parse_latin1((StrRange *)&local_90);
        local_88 = "Any Clip";
        local_98 = 0;
        local_80 = 8;
        String::parse_latin1((StrRange *)&local_98);
        TTR((String *)&local_88,(String *)&local_98);
        if (local_a0 != local_88) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          local_a0 = local_88;
          local_88 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        uVar16 = 0xffffffff;
      }
      else {
        TreeItem::set_selectable(iVar14,SUB41(local_f0,0));
        TreeItem::set_custom_font(iVar14,(Ref *)(ulong)local_f0);
        TreeItem::set_custom_font_size(iVar14,local_f0);
        TreeItem::set_custom_bg_color(iVar14,(Color *)(ulong)local_f0,bVar11);
        local_a0 = (char *)0x0;
        AudioStreamInteractive::get_clip_name((int)(StrRange *)&local_98);
        if (local_98 == 0) {
LAB_0010512c:
          local_90 = (char *)0x0;
        }
        else {
          __s = *(char **)(local_98 + 8);
          local_90 = (char *)0x0;
          if (__s == (char *)0x0) {
            if (*(long *)(local_98 + 0x10) == 0) goto LAB_0010512c;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(local_98 + 0x10));
          }
          else {
            local_80 = strlen(__s);
            local_88 = __s;
            String::parse_latin1((StrRange *)&local_90);
          }
        }
        if (local_a0 != local_90) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          local_a0 = local_90;
          local_90 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        uVar16 = local_f0;
        if ((StringName::configured != '\0') && (local_98 != 0)) {
          StringName::unref();
        }
      }
      pOVar3 = local_a8;
      pcVar2 = *(code **)(*(long *)local_a8 + 0x288);
      local_90 = (char *)0x0;
      local_88 = "XX";
      local_80 = 2;
      String::parse_latin1((StrRange *)&local_90);
      String::operator+((String *)&local_88,(String *)&local_a0);
      fVar18 = (float)(*pcVar2)(pOVar3,(StringName *)&local_88,0,0x10,3,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      Tree::set_column_custom_minimum_width((int)*(undefined8 *)(param_1 + 0xdc0),local_f0);
      local_88 = (char *)0x0;
      iVar8 = (int)fVar18;
      if ((int)fVar18 <= local_ec) {
        iVar8 = local_ec;
      }
      if (local_a0 != (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_a0);
      }
      TreeItem::set_text(uVar9,local_f0,(StringName *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      plVar10 = (long *)Tree::create_item(*(TreeItem **)(param_1 + 0xdc0),iVar6);
      local_88 = (char *)0x0;
      if (local_a0 != (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_a0);
      }
      TreeItem::set_text(plVar10,uVar12,(StringName *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      iVar7 = (int)plVar10;
      TreeItem::set_selectable(iVar7,SUB41(uVar12,0));
      TreeItem::set_custom_font(iVar7,(Ref *)(ulong)uVar12);
      TreeItem::set_custom_font_size(iVar7,uVar12);
      TreeItem::set_custom_bg_color(iVar7,(Color *)(ulong)uVar12,bVar11);
      pcVar2 = *(code **)(*plVar10 + 0xa8);
      Variant::Variant((Variant *)local_58,uVar16);
      StringName::StringName((StringName *)&local_88,"to",false);
      (*pcVar2)(plVar10,(StringName *)&local_88,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      uVar15 = 0;
      do {
        if (uVar5 == uVar15) {
          local_70 = CONCAT44(uVar16,0xffffffff);
          Variant::Variant((Variant *)local_58,(Vector2i *)&local_70);
          TreeItem::set_metadata(iVar7,(Variant *)(ulong)uVar5);
          if (Variant::needs_deinit[(int)local_58[0]] == '\0') break;
LAB_00104f2c:
          Variant::_clear_internal();
        }
        else {
          local_70 = CONCAT44(uVar16,uVar15);
          Variant::Variant((Variant *)local_58,(Vector2i *)&local_70);
          TreeItem::set_metadata(iVar7,(Variant *)(ulong)uVar15);
          if (Variant::needs_deinit[(int)local_58[0]] != '\0') goto LAB_00104f2c;
        }
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 <= (int)uVar5);
      if (*(long *)(param_1 + 0xdd0) == 0) {
        lVar13 = 1;
      }
      else {
        lVar13 = *(long *)(*(long *)(param_1 + 0xdd0) + -8) + 1;
      }
      iVar7 = CowData<TreeItem*>::resize<false>(this,lVar13);
      if (iVar7 == 0) {
        if (*(long *)(param_1 + 0xdd0) == 0) {
          lVar17 = -1;
          lVar13 = 0;
        }
        else {
          lVar13 = *(long *)(*(long *)(param_1 + 0xdd0) + -8);
          lVar17 = lVar13 + -1;
          if (-1 < lVar17) {
            CowData<TreeItem*>::_copy_on_write(this);
            *(long **)(*(long *)(param_1 + 0xdd0) + lVar17 * 8) = plVar10;
            goto LAB_00104fa5;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar17,lVar13,"p_index","size()","",false
                   ,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0);
      }
LAB_00104fa5:
      if ((int)local_f0 < (int)uVar5) {
        OptionButton::add_item(*(String **)(param_1 + 0xe00),(int)(CowData<char32_t> *)&local_a0);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      local_f0 = local_f0 + 1;
      local_ec = iVar8;
    } while ((int)local_f0 <= (int)uVar5);
  }
  local_b8 = (Vector2 *)&local_70;
  Tree::set_column_custom_minimum_width((int)*(undefined8 *)(param_1 + 0xdc0),uVar12);
  if ((*(long *)(param_1 + 0xe20) != 0) && (*(int *)(param_1 + 0xe44) != 0)) {
    lVar13 = 0;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xe40) * 4);
    if (uVar5 != 0) {
      do {
        if (*(int *)(*(long *)(param_1 + 0xe28) + lVar13) != 0) {
          *(int *)(*(long *)(param_1 + 0xe28) + lVar13) = 0;
          Memory::free_static(*(void **)(*(long *)(param_1 + 0xe20) + lVar13 * 2),false);
          *(undefined8 *)(*(long *)(param_1 + 0xe20) + lVar13 * 2) = 0;
        }
        lVar13 = lVar13 + 4;
      } while (lVar13 != (ulong)uVar5 << 2);
    }
    *(undefined4 *)(param_1 + 0xe44) = 0;
    *(undefined1 (*) [16])(param_1 + 0xe30) = (undefined1  [16])0x0;
  }
  _update_selection((AudioStreamInteractiveTransitionEditor *)param_1);
  fVar18 = (float)EditorScale::get_scale();
  local_70 = CONCAT44(fVar18 * _LC161._4_4_,fVar18 * (float)_LC161);
  local_58[0] = Vector2::operator_cast_to_Vector2i(local_b8);
  Window::popup_centered_clamped((Vector2i *)param_1,_LC139);
  param_1[0xe58] = (Object)0x0;
  _update_transitions();
  if (local_a8 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_a8);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_a8 + 0x140))(local_a8);
        Memory::free_static(local_a8,false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AudioStreamInteractiveTransitionEditor::edit(Object*) */

void __thiscall
AudioStreamInteractiveTransitionEditor::edit
          (AudioStreamInteractiveTransitionEditor *this,Object *param_1)

{
  long lVar1;
  
  if (param_1 == (Object *)0x0) {
    *(undefined8 *)(this + 0xdb0) = 0;
  }
  else {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&AudioStreamInteractive::typeinfo,0);
    *(long *)(this + 0xdb0) = lVar1;
    if (lVar1 != 0) {
      edit((Object *)this);
      return;
    }
  }
  return;
}



/* EditorInspectorPluginAudioStreamInteractive::_edit(Object*) */

void __thiscall
EditorInspectorPluginAudioStreamInteractive::_edit
          (EditorInspectorPluginAudioStreamInteractive *this,Object *param_1)

{
  Object *pOVar1;
  long lVar2;
  
  pOVar1 = *(Object **)(this + 0x218);
  if (param_1 == (Object *)0x0) {
    *(undefined8 *)(pOVar1 + 0xdb0) = 0;
  }
  else {
    lVar2 = __dynamic_cast(param_1,&Object::typeinfo,&AudioStreamInteractive::typeinfo,0);
    *(long *)(pOVar1 + 0xdb0) = lVar2;
    if (lVar2 != 0) {
      AudioStreamInteractiveTransitionEditor::edit(pOVar1);
      return;
    }
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* AudioStreamInteractiveTransitionEditor::is_class_ptr(void*) const */

uint AudioStreamInteractiveTransitionEditor::is_class_ptr(void *param_1)

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



/* AudioStreamInteractiveTransitionEditor::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamInteractiveTransitionEditor::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamInteractiveTransitionEditor::_property_get_revertv(StringName const&, Variant&) const
    */

undefined8
AudioStreamInteractiveTransitionEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginAudioStreamInteractive::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginAudioStreamInteractive::is_class_ptr
          (EditorInspectorPluginAudioStreamInteractive *this,void *param_1)

{
  return (uint)CONCAT71(0x1121,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1121,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginAudioStreamInteractive::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginAudioStreamInteractive::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginAudioStreamInteractive::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginAudioStreamInteractive::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginAudioStreamInteractive::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginAudioStreamInteractive::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginAudioStreamInteractive::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginAudioStreamInteractive::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginAudioStreamInteractive::_property_get_revertv(StringName const&, Variant&)
   const */

undefined8
EditorInspectorPluginAudioStreamInteractive::_property_get_revertv
          (StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginAudioStreamInteractive::_notificationv(int, bool) */

void EditorInspectorPluginAudioStreamInteractive::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AudioStreamInteractiveEditorPlugin::is_class_ptr(void*) const */

uint __thiscall
AudioStreamInteractiveEditorPlugin::is_class_ptr
          (AudioStreamInteractiveEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1121,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1121,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioStreamInteractiveEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamInteractiveEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamInteractiveEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamInteractiveEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioStreamInteractiveEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 AudioStreamInteractiveEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioStreamInteractiveEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
AudioStreamInteractiveEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive,void,Object*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive,void,Object*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor, void, TreeItem*, int,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void,TreeItem*,int,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void,TreeItem*,int,bool>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void> *this)

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



/* CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive, void,
   Object*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive,void,Object*>::
get_argument_count(CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive,void,Object*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor, void, TreeItem*, int,
   bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void,TreeItem*,int,bool>::
get_argument_count(CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void,TreeItem*,int,bool>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,
   void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void>::get_argument_count
          (CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void> *this,
          bool *param_1)

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



/* CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor, void, TreeItem*, int,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void,TreeItem*,int,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void,TreeItem*,int,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive,void,Object*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive,void,Object*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001120a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001120a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* AudioStreamInteractiveEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void AudioStreamInteractiveEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* AudioStreamInteractiveTransitionEditor::_getv(StringName const&, Variant&) const */

undefined8 AudioStreamInteractiveTransitionEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00116008 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* AudioStreamInteractiveTransitionEditor::_setv(StringName const&, Variant const&) */

undefined8 AudioStreamInteractiveTransitionEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00116010 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00116018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00116018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00116020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 HSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00116020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110ff0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110ff0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<Vector2i>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2i>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<TreeItem*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<TreeItem*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AudioStreamInteractiveTransitionEditor::_bind_methods() [clone .cold] */

void AudioStreamInteractiveTransitionEditor::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive, void,
   Object*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive,void,Object*>::get_object
          (CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive,void,Object*>
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
      goto LAB_0010615d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010615d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010615d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void>::get_object
          (CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void> *this)

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
      goto LAB_0010625d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010625d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010625d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor, void, TreeItem*, int,
   bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void,TreeItem*,int,bool>::
get_object(CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void,TreeItem*,int,bool>
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
      goto LAB_0010635d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010635d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010635d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* AudioStreamInteractiveTransitionEditor::_validate_propertyv(PropertyInfo&) const */

void AudioStreamInteractiveTransitionEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00116028 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */

void HSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00116030 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00116038 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::is_class_ptr(void*) const */

uint HSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1122,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1121,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x1122,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* AudioStreamInteractiveEditorPlugin::_notificationv(int, bool) */

void __thiscall
AudioStreamInteractiveEditorPlugin::_notificationv
          (AudioStreamInteractiveEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00116040 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00116040 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* HSplitContainer::_setv(StringName const&, Variant const&) */

undefined8 HSplitContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00116048 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00116048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001067f8) */
/* HSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00116050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00106868) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00116050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = AcceptDialog::~AcceptDialog;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001068d0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001068d0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = AcceptDialog::~AcceptDialog;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106930;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00106930:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* AudioStreamInteractiveTransitionEditor::~AudioStreamInteractiveTransitionEditor() */

void __thiscall
AudioStreamInteractiveTransitionEditor::~AudioStreamInteractiveTransitionEditor
          (AudioStreamInteractiveTransitionEditor *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001114c8;
  if (*(long *)(this + 0xe50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0xe50);
      *(undefined8 *)(this + 0xe50) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  pvVar4 = *(void **)(this + 0xe20);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0xe44) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe40) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xe44) = 0;
        *(undefined1 (*) [16])(this + 0xe30) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe28) + lVar3) != 0) {
            *(int *)(*(long *)(this + 0xe28) + lVar3) = 0;
            Memory::free_static(*(void **)((long)pvVar4 + lVar3 * 2),false);
            pvVar4 = *(void **)(this + 0xe20);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xe44) = 0;
        *(undefined1 (*) [16])(this + 0xe30) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_00106a13;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0xe28),false);
  }
LAB_00106a13:
  if (*(long *)(this + 0xdd0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xdd0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0xdd0);
      *(undefined8 *)(this + 0xdd0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      AcceptDialog::~AcceptDialog((AcceptDialog *)this);
      return;
    }
  }
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* AudioStreamInteractiveTransitionEditor::~AudioStreamInteractiveTransitionEditor() */

void __thiscall
AudioStreamInteractiveTransitionEditor::~AudioStreamInteractiveTransitionEditor
          (AudioStreamInteractiveTransitionEditor *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_001114c8;
  if (*(long *)(this + 0xe50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0xe50);
      *(undefined8 *)(this + 0xe50) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  pvVar4 = *(void **)(this + 0xe20);
  if (pvVar4 != (void *)0x0) {
    if (*(int *)(this + 0xe44) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe40) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xe44) = 0;
        *(undefined1 (*) [16])(this + 0xe30) = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe28) + lVar3) != 0) {
            *(int *)(*(long *)(this + 0xe28) + lVar3) = 0;
            Memory::free_static(*(void **)((long)pvVar4 + lVar3 * 2),false);
            pvVar4 = *(void **)(this + 0xe20);
            *(undefined8 *)((long)pvVar4 + lVar3 * 2) = 0;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xe44) = 0;
        *(undefined1 (*) [16])(this + 0xe30) = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_00106b93;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(*(void **)(this + 0xe28),false);
  }
LAB_00106b93:
  if (*(long *)(this + 0xdd0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xdd0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0xdd0);
      *(undefined8 *)(this + 0xdd0) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xe60);
  return;
}



/* AudioStreamInteractiveEditorPlugin::get_plugin_name() const */

AudioStreamInteractiveEditorPlugin * __thiscall
AudioStreamInteractiveEditorPlugin::get_plugin_name(AudioStreamInteractiveEditorPlugin *this)

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



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00116058 != Container::_notification) {
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
  if ((code *)PTR__notification_00116058 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HSplitContainer::_notificationv(int, bool) */

void __thiscall HSplitContainer::_notificationv(HSplitContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00116060 != Container::_notification) {
      SplitContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_00116060 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
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



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined **)this = &__dso_handle;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = AcceptDialog::~AcceptDialog;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010702f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010702f:
  Control::~Control((Control *)this);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined **)this = &__dso_handle;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = AcceptDialog::~AcceptDialog;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001071df;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001071df:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
  return;
}



/* AudioStreamInteractiveTransitionEditor::_get_class_namev() const */

undefined8 * AudioStreamInteractiveTransitionEditor::_get_class_namev(void)

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
LAB_00107333:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107333;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AudioStreamInteractiveTransitionEditor");
      goto LAB_0010739e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "AudioStreamInteractiveTransitionEditor");
LAB_0010739e:
  return &_get_class_namev()::_class_name_static;
}



/* AudioStreamInteractiveEditorPlugin::_get_class_namev() const */

undefined8 * AudioStreamInteractiveEditorPlugin::_get_class_namev(void)

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
LAB_00107433:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107433;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AudioStreamInteractiveEditorPlugin");
      goto LAB_0010749e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "AudioStreamInteractiveEditorPlugin");
LAB_0010749e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorPluginAudioStreamInteractive::_get_class_namev() const */

undefined8 * EditorInspectorPluginAudioStreamInteractive::_get_class_namev(void)

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
LAB_00107543:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107543;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorPluginAudioStreamInteractive");
      goto LAB_001075ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "EditorInspectorPluginAudioStreamInteractive");
LAB_001075ae:
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
LAB_00107633:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107633;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010769e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010769e:
  return &_get_class_namev()::_class_name_static;
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
LAB_00107713:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107713;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010777e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010777e:
  return &_get_class_namev()::_class_name_static;
}



/* HSplitContainer::_get_class_namev() const */

undefined8 * HSplitContainer::_get_class_namev(void)

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
LAB_00107803:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107803;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
      goto LAB_0010786e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
LAB_0010786e:
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



/* Callable
   create_custom_callable_function_pointer<AudioStreamInteractiveTransitionEditor>(AudioStreamInteractiveTransitionEditor*,
   char const*, void (AudioStreamInteractiveTransitionEditor::*)()) */

AudioStreamInteractiveTransitionEditor *
create_custom_callable_function_pointer<AudioStreamInteractiveTransitionEditor>
          (AudioStreamInteractiveTransitionEditor *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_00111ef0;
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Variant::Variant;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107d5a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_00107d5a:
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



/* AudioStreamInteractiveEditorPlugin::~AudioStreamInteractiveEditorPlugin() */

void __thiscall
AudioStreamInteractiveEditorPlugin::~AudioStreamInteractiveEditorPlugin
          (AudioStreamInteractiveEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111740;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* AudioStreamInteractiveEditorPlugin::~AudioStreamInteractiveEditorPlugin() */

void __thiscall
AudioStreamInteractiveEditorPlugin::~AudioStreamInteractiveEditorPlugin
          (AudioStreamInteractiveEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111740;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x660);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00107f88) */
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



/* WARNING: Removing unreachable block (ram,0x00108270) */
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



/* AudioStreamInteractiveTransitionEditor::_notificationv(int, bool) */

void __thiscall
AudioStreamInteractiveTransitionEditor::_notificationv
          (AudioStreamInteractiveTransitionEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (!param_2) {
    Node::_notification(iVar1);
    Viewport::_notification(iVar1);
    Window::_notification(iVar1);
    if ((code *)PTR__notification_00116068 != Window::_notification) {
      AcceptDialog::_notification(iVar1);
    }
    if (param_1 == 0x20 || param_1 == 0xd) {
      _notification(iVar1);
      return;
    }
    return;
  }
  if (param_1 == 0x20 || param_1 == 0xd) {
    _notification(iVar1);
    if ((code *)PTR__notification_00116068 == Window::_notification) goto LAB_001085e8;
  }
  else if ((code *)PTR__notification_00116068 == Window::_notification) goto LAB_001085e8;
  AcceptDialog::_notification(iVar1);
LAB_001085e8:
  Window::_notification(iVar1);
  Viewport::_notification(iVar1);
  Node::_notification(iVar1);
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



/* AudioStreamInteractiveEditorPlugin::get_class() const */

void AudioStreamInteractiveEditorPlugin::get_class(void)

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



/* AudioStreamInteractiveTransitionEditor::get_class() const */

void AudioStreamInteractiveTransitionEditor::get_class(void)

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



/* HSplitContainer::get_class() const */

void HSplitContainer::get_class(void)

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



/* EditorInspectorPluginAudioStreamInteractive::get_class() const */

void EditorInspectorPluginAudioStreamInteractive::get_class(void)

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
      _err_print_error(&_LC101,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108d50;
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
LAB_00108d50:
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
      goto LAB_0010915f;
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
                    /* WARNING: Could not recover jumptable at 0x00109006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010915f:
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
      goto LAB_0010931f;
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
                    /* WARNING: Could not recover jumptable at 0x001091c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010931f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor, void>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void>::call
          (CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010950f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010950f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001094e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001095c0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010950f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC101,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001095c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive, void,
   Object*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive,void,Object*>::call
          (CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive,void,Object*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_001097b9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_001097b9;
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
LAB_00109710:
          uVar3 = _LC109;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar6 == (Object *)0x0) && (pOVar5 != (Object *)0x0)) goto LAB_00109710;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_0010986a;
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
LAB_001097b9:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC101,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010986a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor, void, TreeItem*, int,
   bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void,TreeItem*,int,bool>::call
          (CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void,TreeItem*,int,bool>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
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
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00109ab2;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_00109ab2;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 4) {
      if (param_2 == 3) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],1);
        uVar3 = _LC110;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar11 = Variant::operator_cast_to_bool(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC111;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00109a20:
          uVar3 = _LC109;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&TreeItem::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_00109a20;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&TreeItem::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109a8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6,iVar5,bVar11);
          return;
        }
        goto LAB_00109bb4;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 3;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 3;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00109ab2:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC101,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109bb4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if ((code *)PTR__bind_methods_00116070 != Object::_bind_methods) {
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



/* EditorInspectorPluginAudioStreamInteractive::_initialize_classv() */

void EditorInspectorPluginAudioStreamInteractive::_initialize_classv(void)

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
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Object");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"RefCounted");
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
        if ((code *)PTR__bind_methods_00116088 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorInspectorPlugin";
      local_70 = 0;
      local_50 = 0x15;
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
      if ((code *)PTR__bind_methods_00116078 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00116080 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorInspectorPlugin";
    local_68 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspectorPluginAudioStreamInteractive";
    local_70 = 0;
    local_50 = 0x2b;
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



/* AudioStreamInteractiveEditorPlugin::_initialize_classv() */

void AudioStreamInteractiveEditorPlugin::_initialize_classv(void)

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
    if (EditorPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00116088 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00116090 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00116098 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AudioStreamInteractiveEditorPlugin";
    local_70 = 0;
    local_50 = 0x22;
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
              if ((code *)PTR__bind_methods_00116088 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_001160a0 !=
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
      if ((code *)PTR__bind_methods_001160a8 != Container::_bind_methods) {
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



/* HSplitContainer::_initialize_classv() */

void HSplitContainer::_initialize_classv(void)

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
    if (SplitContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00116088 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_001160a0 !=
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
      local_58 = "SplitContainer";
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
      if ((code *)PTR__bind_methods_001160b0 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "SplitContainer";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HSplitContainer";
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
        if (pvVar3 == (void *)0x0) goto LAB_0010b0bf;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010b0bf:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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
    if (cVar5 != '\0') goto LAB_0010b21b;
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
      if (cVar5 != '\0') goto LAB_0010b21b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010b21b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginAudioStreamInteractive::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginAudioStreamInteractive::is_class
          (EditorInspectorPluginAudioStreamInteractive *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010b41b;
  }
  cVar5 = String::operator==(param_1,"EditorInspectorPluginAudioStreamInteractive");
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
      if (cVar5 != '\0') goto LAB_0010b41b;
    }
    cVar5 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0010b51e;
    }
  }
LAB_0010b41b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b51e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar5 != '\0') goto LAB_0010b62b;
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
      if (cVar5 != '\0') goto LAB_0010b62b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010b62b:
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
    if (cVar5 != '\0') goto LAB_0010b82b;
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
      if (cVar5 != '\0') goto LAB_0010b82b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010b92e;
    }
  }
LAB_0010b82b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b92e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010ba3b;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010ba3b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::is_class(String const&) const */

undefined8 __thiscall HSplitContainer::is_class(HSplitContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010bb8b;
  }
  cVar5 = String::operator==(param_1,"HSplitContainer");
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
      if (cVar5 != '\0') goto LAB_0010bb8b;
    }
    cVar5 = String::operator==(param_1,"SplitContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010bc8e;
    }
  }
LAB_0010bb8b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010bc8e:
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
    if (cVar5 != '\0') goto LAB_0010bd9b;
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
      if (cVar5 != '\0') goto LAB_0010bd9b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010be9e;
    }
  }
LAB_0010bd9b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010be9e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractiveEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
AudioStreamInteractiveEditorPlugin::is_class
          (AudioStreamInteractiveEditorPlugin *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010bfab;
  }
  cVar5 = String::operator==(param_1,"AudioStreamInteractiveEditorPlugin");
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
      if (cVar5 != '\0') goto LAB_0010bfab;
    }
    cVar5 = String::operator==(param_1,"EditorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c0ae;
    }
  }
LAB_0010bfab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c0ae:
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
    if (cVar5 != '\0') goto LAB_0010c1cb;
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
      if (cVar5 != '\0') goto LAB_0010c1cb;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c2ce;
    }
  }
LAB_0010c1cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c2ce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamInteractiveTransitionEditor::is_class(String const&) const */

undefined8 __thiscall
AudioStreamInteractiveTransitionEditor::is_class
          (AudioStreamInteractiveTransitionEditor *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010c3db;
  }
  cVar5 = String::operator==(param_1,"AudioStreamInteractiveTransitionEditor");
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
      if (cVar5 != '\0') goto LAB_0010c3db;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c4de;
    }
  }
LAB_0010c3db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c4de:
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
  local_78 = &_LC114;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC114;
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
      goto LAB_0010c64c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c64c:
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
      goto LAB_0010c89c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c89c:
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
      goto LAB_0010cb01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cb01:
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



/* EditorInspectorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorPlugin::_get_property_listv(EditorInspectorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorInspectorPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPlugin";
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
      goto LAB_0010cdb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cdb1:
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
  StringName::StringName((StringName *)&local_78,"EditorInspectorPlugin",false);
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



/* EditorInspectorPluginAudioStreamInteractive::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorPluginAudioStreamInteractive::_get_property_listv
          (EditorInspectorPluginAudioStreamInteractive *this,List *param_1,bool param_2)

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
    EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorInspectorPluginAudioStreamInteractive";
  local_70 = 0x2b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPluginAudioStreamInteractive";
  local_98 = 0;
  local_70 = 0x2b;
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
      goto LAB_0010d061;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d061:
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
  StringName::StringName
            ((StringName *)&local_78,"EditorInspectorPluginAudioStreamInteractive",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
      goto LAB_0010d311;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d311:
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
      goto LAB_0010d5c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d5c1:
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
  if ((code *)PTR__get_property_list_001160b8 != Object::_get_property_list) {
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
      goto LAB_0010d891;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d891:
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



/* AudioStreamInteractiveTransitionEditor::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
AudioStreamInteractiveTransitionEditor::_get_property_listv
          (AudioStreamInteractiveTransitionEditor *this,List *param_1,bool param_2)

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
  local_78 = "AudioStreamInteractiveTransitionEditor";
  local_70 = 0x26;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamInteractiveTransitionEditor";
  local_98 = 0;
  local_70 = 0x26;
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
      goto LAB_0010db41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010db41:
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
  StringName::StringName((StringName *)&local_78,"AudioStreamInteractiveTransitionEditor",false);
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



/* AudioStreamInteractiveEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
AudioStreamInteractiveEditorPlugin::_get_property_listv
          (AudioStreamInteractiveEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "AudioStreamInteractiveEditorPlugin";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamInteractiveEditorPlugin";
  local_98 = 0;
  local_70 = 0x22;
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
      goto LAB_0010ddf1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ddf1:
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
  StringName::StringName((StringName *)&local_78,"AudioStreamInteractiveEditorPlugin",false);
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
      goto LAB_0010e0a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e0a1:
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
  if ((code *)PTR__get_property_list_001160c0 != Object::_get_property_list) {
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
      goto LAB_0010e371;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e371:
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
  if ((code *)PTR__get_property_list_001160c8 != CanvasItem::_get_property_list) {
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
      goto LAB_0010e641;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e641:
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



/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall SplitContainer::_get_property_listv(SplitContainer *this,List *param_1,bool param_2)

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
  local_78 = "SplitContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SplitContainer";
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
      goto LAB_0010e8f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e8f1:
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
  StringName::StringName((StringName *)&local_78,"SplitContainer",false);
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



/* HSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
HSplitContainer::_get_property_listv(HSplitContainer *this,List *param_1,bool param_2)

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
    SplitContainer::_get_property_listv((SplitContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HSplitContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HSplitContainer";
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
      goto LAB_0010eba1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010eba1:
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
  StringName::StringName((StringName *)&local_78,"HSplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SplitContainer::_get_property_listv((SplitContainer *)this,param_1,true);
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
      goto LAB_0010ee51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ee51:
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
      goto LAB_0010f101;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f101:
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



/* MethodBind* create_method_bind<AudioStreamInteractiveTransitionEditor>(void
   (AudioStreamInteractiveTransitionEditor::*)()) */

MethodBind * create_method_bind<AudioStreamInteractiveTransitionEditor>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001120a0;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AudioStreamInteractiveTransitionEditor";
  local_30 = 0x26;
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



/* AudioStreamInteractiveTransitionEditor::_initialize_classv() */

void AudioStreamInteractiveTransitionEditor::_initialize_classv(void)

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
            if ((code *)PTR__bind_methods_00116088 != Node::_bind_methods) {
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
      local_58 = "Window";
      local_68 = 0;
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
      if ((code *)PTR__bind_methods_001160d0 != Window::_bind_methods) {
        AcceptDialog::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_001160d8 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "AcceptDialog";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AudioStreamInteractiveTransitionEditor";
    local_70 = 0;
    local_50 = 0x26;
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



/* HashMap<Vector2i, int, HashMapHasherDefault, HashMapComparatorDefault<Vector2i>,
   DefaultTypedAllocator<HashMapElement<Vector2i, int> > >::_lookup_pos(Vector2i const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
::_lookup_pos(HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
              *this,Vector2i *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
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
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = (*(int *)param_1 * 0x16a88000 | (uint)(*(int *)param_1 * -0x3361d2af) >> 0x11) *
             0x1b873593 ^ 0x7f07c65;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64 ^
             (*(int *)(param_1 + 4) * 0x16a88000 |
             (uint)(*(int *)(param_1 + 4) * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64;
    uVar11 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
    uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
    uVar17 = uVar11 ^ uVar11 >> 0x10;
    if (uVar11 == uVar11 >> 0x10) {
      uVar17 = 1;
      uVar14 = uVar2;
    }
    else {
      uVar14 = uVar17 * uVar2;
    }
    uVar16 = CONCAT44(0,uVar1);
    lVar18 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar16;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar18 + lVar15 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar19 = 0;
      do {
        if (uVar17 == uVar11) {
          uVar12 = Vector2i::operator==
                             ((Vector2i *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10),
                              param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar13;
            return uVar12;
          }
          lVar18 = *(long *)(this + 0x10);
        }
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (uVar13 + 1) * uVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar18 + lVar15 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar11 * uVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = ((uVar1 + uVar13) - SUB164(auVar5 * auVar9,8)) * uVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar19 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* HashMap<Vector2i, int, HashMapHasherDefault, HashMapComparatorDefault<Vector2i>,
   DefaultTypedAllocator<HashMapElement<Vector2i, int> > >::operator[](Vector2i const&) */

undefined1 * __thiscall
HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
::operator[](HashMap<Vector2i,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,int>>>
             *this,Vector2i *param_1)

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
  undefined1 (*pauVar23) [16];
  char cVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  void *__s_00;
  undefined1 (*pauVar29) [16];
  void *pvVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  long in_FS_OFFSET;
  uint local_c8;
  uint local_70;
  uint local_6c [5];
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar24 = _lookup_pos(this,param_1,&local_70);
  if (cVar24 == '\0') {
    uVar25 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar34 = (ulong)uVar25;
      uVar27 = uVar34 * 4;
      uVar38 = uVar34 * 8;
      uVar28 = Memory::alloc_static(uVar27,false);
      *(undefined8 *)(this + 0x10) = uVar28;
      pvVar30 = (void *)Memory::alloc_static(uVar38,false);
      *(void **)(this + 8) = pvVar30;
      if (uVar25 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar30 + uVar38)) &&
           (pvVar30 < (void *)((long)pvVar4 + uVar27))) {
          uVar27 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar27 * 4) = 0;
            *(undefined8 *)((long)pvVar30 + uVar27 * 8) = 0;
            uVar27 = uVar27 + 1;
          } while (uVar34 != uVar27);
        }
        else {
          memset(pvVar4,0,uVar27);
          memset(pvVar30,0,uVar38);
        }
      }
    }
    local_6c[0] = 0;
    cVar24 = _lookup_pos(this,param_1,local_6c);
    if (cVar24 == '\0') {
      if ((float)uVar25 * _LC139 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar25 = *(uint *)(this + 0x28);
        if (uVar25 == 0x1c) {
          pauVar29 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_0010ff87;
        }
        uVar27 = (ulong)(uVar25 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar26 = *(uint *)(hash_table_size_primes + (ulong)uVar25 * 4);
        if (uVar25 + 1 < 2) {
          uVar27 = 2;
        }
        uVar25 = *(uint *)(hash_table_size_primes + uVar27 * 4);
        uVar34 = (ulong)uVar25;
        *(int *)(this + 0x28) = (int)uVar27;
        pvVar30 = *(void **)(this + 8);
        uVar27 = uVar34 * 4;
        uVar38 = uVar34 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar28 = Memory::alloc_static(uVar27,false);
        *(undefined8 *)(this + 0x10) = uVar28;
        __s_00 = (void *)Memory::alloc_static(uVar38,false);
        *(void **)(this + 8) = __s_00;
        if (uVar25 != 0) {
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
        if (uVar26 != 0) {
          uVar27 = 0;
          do {
            uVar25 = *(uint *)((long)pvVar4 + uVar27 * 4);
            if (uVar25 != 0) {
              lVar5 = *(long *)(this + 0x10);
              uVar36 = 0;
              uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar38 = CONCAT44(0,uVar3);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)uVar25 * lVar6;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar38;
              lVar32 = SUB168(auVar7 * auVar15,8);
              puVar1 = (uint *)(lVar5 + lVar32 * 4);
              iVar31 = SUB164(auVar7 * auVar15,8);
              uVar37 = *puVar1;
              uVar28 = *(undefined8 *)((long)pvVar30 + uVar27 * 8);
              while (uVar37 != 0) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)uVar37 * lVar6;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar38;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)((uVar3 + iVar31) - SUB164(auVar8 * auVar16,8)) * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar38;
                local_c8 = SUB164(auVar9 * auVar17,8);
                uVar35 = uVar28;
                if (local_c8 < uVar36) {
                  *puVar1 = uVar25;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar32 * 8);
                  uVar35 = *puVar2;
                  *puVar2 = uVar28;
                  uVar25 = uVar37;
                  uVar36 = local_c8;
                }
                uVar36 = uVar36 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(iVar31 + 1) * lVar6;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar38;
                lVar32 = SUB168(auVar10 * auVar18,8);
                puVar1 = (uint *)(lVar5 + lVar32 * 4);
                iVar31 = SUB164(auVar10 * auVar18,8);
                uVar28 = uVar35;
                uVar37 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar32 * 8) = uVar28;
              *puVar1 = uVar25;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar27 = uVar27 + 1;
          } while (uVar27 != uVar26);
          Memory::free_static(pvVar30,false);
          Memory::free_static(pvVar4,false);
        }
      }
      local_58 = *(undefined8 *)param_1;
      pauVar29 = (undefined1 (*) [16])operator_new(0x20,"");
      *pauVar29 = (undefined1  [16])0x0;
      *(undefined4 *)(pauVar29[1] + 8) = 0;
      *(undefined8 *)pauVar29[1] = local_58;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar29;
      }
      else {
        *puVar2 = pauVar29;
        *(undefined8 **)(*pauVar29 + 8) = puVar2;
      }
      iVar31 = *(int *)param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar29;
      uVar25 = (iVar31 * 0x16a88000 | (uint)(iVar31 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
      ;
      uVar25 = (uVar25 << 0xd | uVar25 >> 0x13) * 5 + 0xe6546b64 ^
               (*(int *)(param_1 + 4) * 0x16a88000 |
               (uint)(*(int *)(param_1 + 4) * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar25 = (uVar25 << 0xd | uVar25 >> 0x13) * 5 + 0xe6546b64;
      uVar25 = (uVar25 >> 0x10 ^ uVar25) * -0x7a143595;
      uVar26 = (uVar25 ^ uVar25 >> 0xd) * -0x3d4d51cb;
      uVar25 = uVar26 ^ uVar26 >> 0x10;
      if (uVar26 == uVar26 >> 0x10) {
        uVar27 = 1;
        uVar25 = 1;
      }
      else {
        uVar27 = (ulong)uVar25;
      }
      uVar37 = 0;
      lVar5 = *(long *)(this + 0x10);
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar38 = CONCAT44(0,uVar26);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar27 * lVar6;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar38;
      lVar33 = SUB168(auVar11 * auVar19,8);
      lVar32 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar5 + lVar33 * 4);
      iVar31 = SUB164(auVar11 * auVar19,8);
      uVar3 = *puVar1;
      pauVar23 = pauVar29;
      while (uVar3 != 0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar3 * lVar6;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar38;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)((uVar26 + iVar31) - SUB164(auVar12 * auVar20,8)) * lVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar38;
        local_c8 = SUB164(auVar13 * auVar21,8);
        pauVar39 = pauVar23;
        if (local_c8 < uVar37) {
          *puVar1 = uVar25;
          puVar2 = (undefined8 *)(lVar32 + lVar33 * 8);
          pauVar39 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar23;
          uVar25 = uVar3;
          uVar37 = local_c8;
        }
        uVar37 = uVar37 + 1;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)(iVar31 + 1) * lVar6;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar38;
        lVar33 = SUB168(auVar14 * auVar22,8);
        puVar1 = (uint *)(lVar5 + lVar33 * 4);
        iVar31 = SUB164(auVar14 * auVar22,8);
        pauVar23 = pauVar39;
        uVar3 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar32 + lVar33 * 8) = pauVar23;
      *puVar1 = uVar25;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar29 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_6c[0] * 8);
      *(undefined4 *)(pauVar29[1] + 8) = 0;
    }
  }
  else {
    pauVar29 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_70 * 8);
  }
LAB_0010ff87:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar29[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<TreeItem*>::_realloc(long) */

undefined8 __thiscall CowData<TreeItem*>::_realloc(CowData<TreeItem*> *this,long param_1)

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
/* Error CowData<TreeItem*>::resize<false>(long) */

undefined8 __thiscall CowData<TreeItem*>::resize<false>(CowData<TreeItem*> *this,long param_1)

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
LAB_00110430:
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
  if (lVar8 == 0) goto LAB_00110430;
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
        goto LAB_00110341;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00110341:
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



/* CowData<Vector2i>::_realloc(long) */

undefined8 __thiscall CowData<Vector2i>::_realloc(CowData<Vector2i> *this,long param_1)

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
/* Error CowData<Vector2i>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2i>::resize<false>(CowData<Vector2i> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
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
    lVar3 = lVar8 * 8;
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
LAB_00110740:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00110740;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_001106ac:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00110641;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001106ac;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00110641:
  puVar9[-1] = param_1;
  return 0;
}



/* void memdelete_allocator<List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::Element,
   DefaultAllocator>(List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::Element*) */

void memdelete_allocator<List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::Element,DefaultAllocator>
               (Element *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(param_1 + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = plVar1[-1];
      *(undefined8 *)(param_1 + 0x10) = 0;
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
    }
  }
  Memory::free_static(param_1,false);
  return;
}



/* EditorInspectorPlugin::~EditorInspectorPlugin() */

void __thiscall EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this)

{
  Element *pEVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  bVar5 = StringName::configured != '\0';
  *(code **)this = Node::Node;
  if (bVar5) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001109c9;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001109c9;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001109c9;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001109c9;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001109c9;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_001109c9:
  plVar4 = *(long **)(this + 0x180);
  if (plVar4 != (long *)0x0) {
    do {
      pEVar1 = (Element *)*plVar4;
      if (pEVar1 == (Element *)0x0) {
        if ((int)plVar4[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00110a35;
        }
        break;
      }
      if (*(long **)(pEVar1 + 0x38) == plVar4) {
        lVar3 = *(long *)(pEVar1 + 0x28);
        lVar2 = *(long *)(pEVar1 + 0x30);
        *plVar4 = lVar3;
        if (pEVar1 == (Element *)plVar4[1]) {
          plVar4[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x28) = lVar3;
          lVar3 = *(long *)(pEVar1 + 0x28);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x30) = lVar2;
        }
        memdelete_allocator<List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar1);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar4 = *(long **)(this + 0x180);
    } while ((int)plVar4[2] != 0);
    Memory::free_static(plVar4,false);
  }
LAB_00110a35:
  *(undefined ***)this = &PTR__initialize_classv_00110ff0;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorPlugin::~EditorInspectorPlugin() */

void __thiscall EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this)

{
  ~EditorInspectorPlugin(this);
  operator_delete(this,0x218);
  return;
}



/* EditorInspectorPluginAudioStreamInteractive::~EditorInspectorPluginAudioStreamInteractive() */

void __thiscall
EditorInspectorPluginAudioStreamInteractive::~EditorInspectorPluginAudioStreamInteractive
          (EditorInspectorPluginAudioStreamInteractive *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111d60;
  EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin *)this);
  return;
}



/* EditorInspectorPluginAudioStreamInteractive::~EditorInspectorPluginAudioStreamInteractive() */

void __thiscall
EditorInspectorPluginAudioStreamInteractive::~EditorInspectorPluginAudioStreamInteractive
          (EditorInspectorPluginAudioStreamInteractive *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111d60;
  EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin *)this);
  operator_delete(this,0x220);
  return;
}



/* AudioStreamInteractiveTransitionEditor::_notification(int) */

void AudioStreamInteractiveTransitionEditor::_GLOBAL__sub_I__notification(void)

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
  if (AudioStreamRandomizer::base_property_helper != '\0') {
    return;
  }
  AudioStreamRandomizer::base_property_helper = 1;
  AudioStreamRandomizer::base_property_helper._64_8_ = 0;
  AudioStreamRandomizer::base_property_helper._56_8_ = 2;
  AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper,
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
/* AudioStreamInteractiveEditorPlugin::~AudioStreamInteractiveEditorPlugin() */

void __thiscall
AudioStreamInteractiveEditorPlugin::~AudioStreamInteractiveEditorPlugin
          (AudioStreamInteractiveEditorPlugin *this)

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
/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AudioStreamInteractiveTransitionEditor::~AudioStreamInteractiveTransitionEditor() */

void __thiscall
AudioStreamInteractiveTransitionEditor::~AudioStreamInteractiveTransitionEditor
          (AudioStreamInteractiveTransitionEditor *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

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
/* CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor, void, TreeItem*, int,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void,TreeItem*,int,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AudioStreamInteractiveTransitionEditor,void,TreeItem*,int,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive,void,Object*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorInspectorPluginAudioStreamInteractive,void,Object*>
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
/* EditorInspectorPluginAudioStreamInteractive::~EditorInspectorPluginAudioStreamInteractive() */

void __thiscall
EditorInspectorPluginAudioStreamInteractive::~EditorInspectorPluginAudioStreamInteractive
          (EditorInspectorPluginAudioStreamInteractive *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorInspectorPlugin::~EditorInspectorPlugin() */

void __thiscall EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



