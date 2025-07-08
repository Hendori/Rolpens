/* InputEventConfigurationDialog::_input_list_item_activated() */

void InputEventConfigurationDialog::_input_list_item_activated(void)

{
  bool bVar1;
  
  bVar1 = (bool)Tree::get_selected();
  TreeItem::is_collapsed();
  TreeItem::set_collapsed(bVar1);
  return;
}



/* void Ref<InputEventKey>::TEMPNAMEPLACEHOLDERVALUE(Ref<InputEvent> const&) [clone .isra.0] */

void __thiscall Ref<InputEventKey>::operator=(Ref<InputEventKey> *this,Ref *param_1)

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
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&InputEventKey::typeinfo,0);
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



/* Ref<InputEvent>::TEMPNAMEPLACEHOLDERVALUE(Ref<InputEvent> const&) [clone .isra.0] */

void __thiscall Ref<InputEvent>::operator=(Ref<InputEvent> *this,Ref *param_1)

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



/* void Ref<InputEvent>::TEMPNAMEPLACEHOLDERVALUE(Ref<InputEventJoypadMotion> const&) [clone
   .isra.0] */

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



/* void Ref<InputEvent>::TEMPNAMEPLACEHOLDERVALUE(Ref<InputEventMouseButton> const&) [clone .isra.0]
    */

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



/* void Ref<InputEvent>::TEMPNAMEPLACEHOLDERVALUE(Ref<InputEventJoypadButton> const&) [clone
   .isra.0] */

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



/* InputEventConfigurationDialog::_set_current_device(int) */

void InputEventConfigurationDialog::_set_current_device(int param_1)

{
  undefined4 in_register_0000003c;
  
  OptionButton::select((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xe28));
  return;
}



/* InputEventConfigurationDialog::_get_current_device() const */

int InputEventConfigurationDialog::_get_current_device(void)

{
  int iVar1;
  
  iVar1 = OptionButton::get_selected();
  return iVar1 + -1;
}



/* InputEventConfigurationDialog::get_event() const */

void InputEventConfigurationDialog::get_event(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0xdd8) != 0) {
    *in_RDI = *(long *)(in_RSI + 0xdd8);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* InputEventConfigurationDialog::set_allowed_input_types(int) */

void __thiscall
InputEventConfigurationDialog::set_allowed_input_types
          (InputEventConfigurationDialog *this,int param_1)

{
  *(int *)(this + 0xe00) = param_1;
  EventListenerLineEdit::set_allowed_input_types((int)*(undefined8 *)(this + 0xdf0));
  return;
}



/* InputEventConfigurationDialog::_device_selection_changed(int) */

void InputEventConfigurationDialog::_device_selection_changed(int param_1)

{
  String *pSVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  Ref aRStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  InputEvent::set_device((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xdd8));
  pSVar1 = *(String **)(CONCAT44(in_register_0000003c,param_1) + 0xdf8);
  EventListenerLineEdit::get_event_text(aRStack_28,(bool)((char)param_1 + -0x28));
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)aRStack_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InputEventConfigurationDialog::_update_input_list() */

void __thiscall
InputEventConfigurationDialog::_update_input_list(InputEventConfigurationDialog *this)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  Resource *this_00;
  Object *pOVar8;
  long *plVar9;
  long *plVar10;
  Object *pOVar11;
  bool bVar12;
  int iVar14;
  uint uVar15;
  Resource *pRVar16;
  Variant *this_01;
  long in_FS_OFFSET;
  long local_b0;
  Object *local_a8;
  Object *local_a0;
  long local_98;
  Object *local_90;
  int local_88 [2];
  long local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  Variant local_44 [4];
  long local_40;
  int iVar13;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::clear();
  iVar4 = Tree::create_item(*(TreeItem **)(this + 0xe08),0);
  LineEdit::get_text();
  LineEdit::get_text();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  uVar15 = *(uint *)(this + 0xe00);
  bVar12 = SUB81((CowData<char32_t> *)&local_90,0);
  iVar13 = (int)(CowData<char32_t> *)&local_b0;
  if ((uVar15 & 1) != 0) {
    plVar9 = (long *)Tree::create_item(*(TreeItem **)(this + 0xe08),iVar4);
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"");
    local_a0 = (Object *)0x0;
    String::parse_latin1((String *)&local_a0,"Keyboard Keys");
    TTR((String *)&local_90,(String *)&local_a0);
    TreeItem::set_text(plVar9,0,(CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    TreeItem::set_icon((int)plVar9,(Ref *)0x0);
    TreeItem::set_collapsed(SUB81(plVar9,0));
    pcVar1 = *(code **)(*plVar9 + 0xa8);
    Variant::Variant((Variant *)&local_68,1);
    StringName::StringName((StringName *)&local_90,"__type",false);
    (*pcVar1)(plVar9,(CowData<char32_t> *)&local_90,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
    }
    for (iVar14 = 0; iVar5 = keycode_get_count(), iVar14 < iVar5; iVar14 = iVar14 + 1) {
      pcVar6 = (char *)keycode_get_name_by_index(iVar14);
      local_98 = 0;
      String::parse_latin1((String *)&local_98,pcVar6);
      if (((local_b0 == 0) || (*(uint *)(local_b0 + -8) < 2)) ||
         (iVar5 = String::findn((String *)&local_98,iVar13), iVar5 != -1)) {
        plVar10 = (long *)Tree::create_item(*(TreeItem **)(this + 0xe08),(int)plVar9);
        local_90 = (Object *)0x0;
        if (local_98 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_98);
        }
        TreeItem::set_text(plVar10,0,(CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        pcVar1 = *(code **)(*plVar10 + 0xa8);
        iVar5 = keycode_get_value_by_index(iVar14);
        Variant::Variant((Variant *)&local_68,iVar5);
        StringName::StringName((StringName *)&local_90,"__keycode",false);
        (*pcVar1)(plVar10,(CowData<char32_t> *)&local_90,(Variant *)&local_68);
        if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_68] != '\0') {
          Variant::_clear_internal();
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    }
    uVar15 = *(uint *)(this + 0xe00);
  }
  if ((uVar15 & 2) != 0) {
    plVar9 = (long *)Tree::create_item(*(TreeItem **)(this + 0xe08),iVar4);
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"");
    local_a0 = (Object *)0x0;
    String::parse_latin1((String *)&local_a0,"Mouse Buttons");
    TTR((String *)&local_90,(String *)&local_a0);
    TreeItem::set_text(plVar9,0,(CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    TreeItem::set_icon((int)plVar9,(Ref *)0x0);
    TreeItem::set_collapsed(SUB81(plVar9,0));
    pcVar1 = *(code **)(*plVar9 + 0xa8);
    this_01 = (Variant *)&local_68;
    Variant::Variant(this_01,2);
    StringName::StringName((StringName *)&local_90,"__type",false);
    (*pcVar1)(plVar9,(CowData<char32_t> *)&local_90,this_01);
    if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
    }
    local_68 = _LC20;
    uStack_60 = _UNK_00110d98;
    local_48 = 9;
    local_58 = __LC38;
    uStack_50 = _UNK_00110da8;
    do {
      while( true ) {
        local_a8 = (Object *)0x0;
        Ref<InputEventMouseButton>::instantiate<>((Ref<InputEventMouseButton> *)&local_a8);
        pOVar8 = local_a8;
        iVar14 = *(int *)this_01;
        InputEventMouseButton::set_button_index(local_a8,iVar14);
        local_98 = 0;
        lVar7 = __dynamic_cast(pOVar8,&Object::typeinfo,&InputEvent::typeinfo,0);
        if (lVar7 != 0) {
          local_90 = (Object *)0x0;
          local_98 = lVar7;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_98 = 0;
          }
          Ref<InputEvent>::unref((Ref<InputEvent> *)&local_90);
        }
        EventListenerLineEdit::get_event_text((Ref *)&local_a0,SUB81((String *)&local_98,0));
        Ref<InputEvent>::unref((Ref<InputEvent> *)&local_98);
        if (((local_b0 != 0) && (1 < *(uint *)(local_b0 + -8))) &&
           (iVar5 = String::findn((String *)&local_a0,iVar13), iVar5 == -1)) break;
        plVar10 = (long *)Tree::create_item(*(TreeItem **)(this + 0xe08),(int)plVar9);
        local_90 = (Object *)0x0;
        if (local_a0 != (Object *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_a0);
        }
        TreeItem::set_text(plVar10,0,(CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        pcVar1 = *(code **)(*plVar10 + 0xa8);
        local_88[0] = 2;
        local_78 = 0;
        local_80 = (long)iVar14;
        StringName::StringName((StringName *)&local_90,"__index",false);
        (*pcVar1)(plVar10,(CowData<char32_t> *)&local_90,local_88);
        if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_88[0]] == '\0') {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        }
        else {
          Variant::_clear_internal();
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        }
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
        this_01 = this_01 + 4;
        if (this_01 == local_44) goto LAB_00100d61;
      }
      this_01 = this_01 + 4;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      Ref<InputEventMouseButton>::unref((Ref<InputEventMouseButton> *)&local_a8);
    } while (this_01 != local_44);
LAB_00100d61:
    uVar15 = *(uint *)(this + 0xe00);
  }
  if ((uVar15 & 4) != 0) {
    plVar9 = (long *)Tree::create_item(*(TreeItem **)(this + 0xe08),iVar4);
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"");
    local_a0 = (Object *)0x0;
    String::parse_latin1((String *)&local_a0,"Joypad Buttons");
    TTR((String *)&local_90,(String *)&local_a0);
    TreeItem::set_text(plVar9,0,(CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    TreeItem::set_icon((int)plVar9,(Ref *)0x0);
    TreeItem::set_collapsed(SUB81(plVar9,0));
    pcVar1 = *(code **)(*plVar9 + 0xa8);
    Variant::Variant((Variant *)&local_68,4);
    StringName::StringName((StringName *)&local_90,"__type",false);
    (*pcVar1)(plVar9,(CowData<char32_t> *)&local_90,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
    }
    iVar14 = 0;
LAB_00100fba:
    do {
      pRVar16 = (Resource *)0x0;
      this_00 = (Resource *)operator_new(0x250,"");
      Resource::Resource(this_00);
      *(undefined4 *)(this_00 + 0x240) = 0;
      *(undefined2 *)(this_00 + 0x244) = 0;
      *(code **)this_00 = InputEventJoypadMotion::set_axis;
      *(undefined8 *)(this_00 + 0x248) = 0;
      postinitialize_handler((Object *)this_00);
      cVar3 = RefCounted::init_ref();
      if (cVar3 != '\0') {
        cVar3 = RefCounted::reference();
        pRVar16 = (Resource *)0x0;
        if (cVar3 != '\0') {
          pRVar16 = this_00;
        }
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
        }
      }
      InputEventJoypadButton::set_button_index(pRVar16,iVar14);
      local_90 = (Object *)0x0;
      pOVar8 = (Object *)__dynamic_cast(pRVar16,&Object::typeinfo,&InputEvent::typeinfo,0);
      if ((pOVar8 != (Object *)0x0) &&
         (local_90 = pOVar8, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_90 = (Object *)0x0;
      }
      EventListenerLineEdit::get_event_text((Ref *)&local_98,bVar12);
      if (((local_90 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar8 = local_90, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_90), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
      if (((local_b0 == 0) || (*(uint *)(local_b0 + -8) < 2)) ||
         (iVar5 = String::findn((String *)&local_98,iVar13), iVar5 != -1)) {
        plVar10 = (long *)Tree::create_item(*(TreeItem **)(this + 0xe08),(int)plVar9);
        local_90 = (Object *)0x0;
        if (local_98 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_98);
        }
        TreeItem::set_text(plVar10,0,(CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        pcVar1 = *(code **)(*plVar10 + 0xa8);
        Variant::Variant((Variant *)&local_68,iVar14);
        StringName::StringName((StringName *)&local_90,"__index",false);
        (*pcVar1)(plVar10,(CowData<char32_t> *)&local_90,(Variant *)&local_68);
        if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_68] == '\0') goto LAB_00100f91;
        Variant::_clear_internal();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
      else {
LAB_00100f91:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 == '\0') || (cVar3 = predelete_handler((Object *)pRVar16), cVar3 == '\0')) {
        iVar14 = iVar14 + 1;
        if (iVar14 == 0x80) break;
        goto LAB_00100fba;
      }
      iVar14 = iVar14 + 1;
      (**(code **)(*(long *)pRVar16 + 0x140))(pRVar16);
      Memory::free_static(pRVar16,false);
    } while (iVar14 != 0x80);
    uVar15 = *(uint *)(this + 0xe00);
  }
  if ((uVar15 & 8) != 0) {
    plVar9 = (long *)Tree::create_item(*(TreeItem **)(this + 0xe08),iVar4);
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"");
    local_a0 = (Object *)0x0;
    String::parse_latin1((String *)&local_a0,"Joypad Axes");
    TTR((String *)&local_90,(String *)&local_a0);
    TreeItem::set_text(plVar9,0,(CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    TreeItem::set_icon((int)plVar9,(Ref *)0x0);
    TreeItem::set_collapsed(SUB81(plVar9,0));
    pcVar1 = *(code **)(*plVar9 + 0xa8);
    Variant::Variant((Variant *)&local_68,8);
    StringName::StringName((StringName *)&local_90,"__type",false);
    (*pcVar1)(plVar9,(CowData<char32_t> *)&local_90,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_68] != '\0') {
      Variant::_clear_internal();
    }
    uVar15 = 0;
    do {
      local_a0 = (Object *)0x0;
      uVar2 = uVar15 & 1;
      if ((uVar15 & 1) == 0) {
        uVar2 = 0xffffffff;
      }
      Ref<InputEventJoypadMotion>::instantiate<>((Ref<InputEventJoypadMotion> *)&local_a0);
      pOVar8 = local_a0;
      InputEventJoypadMotion::set_axis(local_a0,(int)uVar15 >> 1);
      InputEventJoypadMotion::set_axis_value((float)(int)uVar2);
      local_90 = (Object *)0x0;
      pOVar11 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&InputEvent::typeinfo,0);
      if ((pOVar11 != (Object *)0x0) &&
         (local_90 = pOVar11, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_90 = (Object *)0x0;
      }
      EventListenerLineEdit::get_event_text((Ref *)&local_98,bVar12);
      if (((local_90 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar11 = local_90, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_90), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
        Memory::free_static(pOVar11,false);
      }
      if (((local_b0 == 0) || (*(uint *)(local_b0 + -8) < 2)) ||
         (iVar4 = String::findn((String *)&local_98,iVar13), iVar4 != -1)) {
        plVar10 = (long *)Tree::create_item(*(TreeItem **)(this + 0xe08),(int)plVar9);
        local_90 = (Object *)0x0;
        if (local_98 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_98);
        }
        TreeItem::set_text(plVar10,0,(CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        pcVar1 = *(code **)(*plVar10 + 0xa8);
        Variant::Variant((Variant *)&local_68,(int)uVar15 >> 1);
        StringName::StringName((StringName *)&local_90,"__axis",false);
        (*pcVar1)(plVar10,(CowData<char32_t> *)&local_90,(Variant *)&local_68);
        if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_68] != '\0') {
          Variant::_clear_internal();
        }
        pcVar1 = *(code **)(*plVar10 + 0xa8);
        Variant::Variant((Variant *)&local_68,uVar2);
        StringName::StringName((StringName *)&local_90,"__value",false);
        (*pcVar1)(plVar10,(CowData<char32_t> *)&local_90,(Variant *)&local_68);
        if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_68] == '\0') {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        }
        else {
          Variant::_clear_internal();
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        }
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar8), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        Ref<InputEventJoypadMotion>::unref((Ref<InputEventJoypadMotion> *)&local_a0);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x14);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InputEventConfigurationDialog::_search_term_updated(String const&) */

void InputEventConfigurationDialog::_search_term_updated(String *param_1)

{
  _update_input_list((InputEventConfigurationDialog *)param_1);
  return;
}



/* InputEventConfigurationDialog::_notification(int) [clone .part.0] */

void InputEventConfigurationDialog::_notification(int param_1)

{
  Ref *pRVar1;
  undefined8 uVar2;
  Object *pOVar3;
  StringName *pSVar4;
  char cVar5;
  int iVar6;
  undefined4 in_register_0000003c;
  InputEventConfigurationDialog *this;
  Object *pOVar7;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  
  this = (InputEventConfigurationDialog *)CONCAT44(in_register_0000003c,param_1);
  pRVar1 = *(Ref **)(this + 0xe10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_48);
  LineEdit::set_right_icon(pRVar1);
  if (((local_48 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar3 = local_48, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  uVar2 = *(undefined8 *)(this + 0xea0);
  if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_48);
  OptionButton::set_item_icon((int)uVar2,(Ref *)0x0);
  if (((local_48 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar3 = local_48, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  uVar2 = *(undefined8 *)(this + 0xea0);
  if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_48);
  OptionButton::set_item_icon((int)uVar2,(Ref *)0x1);
  if (((local_48 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar3 = local_48, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  uVar2 = *(undefined8 *)(this + 0xea0);
  if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_48);
  OptionButton::set_item_icon((int)uVar2,(Ref *)0x2);
  if (((local_48 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar3 = local_48, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_48);
  pOVar3 = *(Object **)(this + 0xdb8);
  pOVar7 = pOVar3;
  if (local_48 == pOVar3) {
LAB_001018a1:
    if (((pOVar7 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar3 = local_48, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  else {
    *(Object **)(this + 0xdb8) = local_48;
    if (local_48 != (Object *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xdb8) = 0;
      }
      pOVar7 = local_48;
      if (pOVar3 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        goto joined_r0x00101af3;
      }
      goto LAB_001018a1;
    }
    if (pOVar3 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
joined_r0x00101af3:
      pOVar7 = local_48;
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar3), pOVar7 = local_48, cVar5 != '\0'))
      {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        pOVar7 = local_48;
      }
      goto LAB_001018a1;
    }
  }
  if ((_notification(int)::{lambda()#6}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_48);
  pOVar3 = *(Object **)(this + 0xdc0);
  pOVar7 = pOVar3;
  if (local_48 == pOVar3) {
LAB_00101927:
    if (((pOVar7 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar3 = local_48, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  else {
    *(Object **)(this + 0xdc0) = local_48;
    if (local_48 != (Object *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xdc0) = 0;
      }
      pOVar7 = local_48;
      if (pOVar3 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        goto joined_r0x0010191d;
      }
      goto LAB_00101927;
    }
    if (pOVar3 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
joined_r0x0010191d:
      pOVar7 = local_48;
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar3), pOVar7 = local_48, cVar5 != '\0'))
      {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        pOVar7 = local_48;
      }
      goto LAB_00101927;
    }
  }
  if ((_notification(int)::{lambda()#7}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_48);
  pOVar3 = *(Object **)(this + 0xdc8);
  pOVar7 = pOVar3;
  if (local_48 == pOVar3) {
LAB_001019ad:
    if (((pOVar7 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar3 = local_48, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  else {
    *(Object **)(this + 0xdc8) = local_48;
    if (local_48 != (Object *)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xdc8) = 0;
      }
      pOVar7 = local_48;
      if (pOVar3 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        goto joined_r0x001019a3;
      }
      goto LAB_001019ad;
    }
    if (pOVar3 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
joined_r0x001019a3:
      pOVar7 = local_48;
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar3), pOVar7 = local_48, cVar5 != '\0'))
      {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        pOVar7 = local_48;
      }
      goto LAB_001019ad;
    }
  }
  if ((_notification(int)::{lambda()#8}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_48);
  pOVar3 = *(Object **)(this + 0xdd0);
  pOVar7 = pOVar3;
  if (local_48 != pOVar3) {
    *(Object **)(this + 0xdd0) = local_48;
    if (local_48 == (Object *)0x0) {
      if (pOVar3 == (Object *)0x0) goto LAB_00101a48;
      cVar5 = RefCounted::unreference();
    }
    else {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xdd0) = 0;
      }
      pOVar7 = local_48;
      if (pOVar3 == (Object *)0x0) goto LAB_00101a33;
      cVar5 = RefCounted::unreference();
    }
    pOVar7 = local_48;
    if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar3), pOVar7 = local_48, cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      pOVar7 = local_48;
    }
  }
LAB_00101a33:
  if (((pOVar7 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar3 = local_48, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
LAB_00101a48:
  pSVar4 = *(StringName **)(this + 0xdf8);
  if ((_notification(int)::{lambda()#9}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname),
     iVar6 != 0)) {
    _scs_create((char *)&_notification(int)::{lambda()#9}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#9}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#9}::operator()()::sname);
  }
  Window::get_theme_font((StringName *)&local_48,(StringName *)this);
  Control::add_theme_font_override(pSVar4,(Ref *)(SceneStringNames::singleton + 0xa0));
  if (((local_48 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_48), cVar5 != '\0')) {
    (**(code **)(*(long *)local_48 + 0x140))(local_48);
    Memory::free_static(local_48,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_input_list(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InputEventConfigurationDialog::_notification(int) */

void __thiscall
InputEventConfigurationDialog::_notification(InputEventConfigurationDialog *this,int param_1)

{
  if (param_1 == 0x1e) {
    EventListenerLineEdit::grab_focus();
    return;
  }
  if (param_1 != 0x20) {
    return;
  }
  _notification((int)this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InputEventConfigurationDialog::InputEventConfigurationDialog() */

void __thiscall
InputEventConfigurationDialog::InputEventConfigurationDialog(InputEventConfigurationDialog *this)

{
  Vector2 *pVVar1;
  StringName *pSVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  String *pSVar6;
  BoxContainer *this_00;
  Label *pLVar7;
  EventListenerLineEdit *this_01;
  CallableCustom *pCVar8;
  HSeparator *this_02;
  BoxContainer *pBVar9;
  LineEdit *this_03;
  Tree *this_04;
  OptionButton *pOVar10;
  CheckBox *pCVar11;
  VSeparator *this_05;
  bool bVar12;
  int iVar13;
  String *pSVar14;
  int iVar15;
  long in_FS_OFFSET;
  float fVar16;
  undefined8 local_b0;
  long local_a8 [2];
  undefined *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  long local_78 [3];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  this[0xde8] = (InputEventConfigurationDialog)0x0;
  *(undefined ***)this = &PTR__initialize_classv_001104d8;
  *(undefined8 *)(this + 0xe38) = 0;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe28) = (undefined1  [16])0x0;
  String::parse_latin1((String *)(this + 0xe38),"Alt");
  *(undefined8 *)(this + 0xe40) = 0;
  String::parse_latin1((String *)(this + 0xe40),"Shift");
  *(undefined8 *)(this + 0xe48) = 0;
  String::parse_latin1((String *)(this + 0xe48),"Ctrl");
  *(undefined8 *)(this + 0xe50) = 0;
  String::parse_latin1((String *)(this + 0xe50),"Meta");
  *(undefined8 *)(this + 0xe58) = 0;
  String::parse_latin1((String *)(this + 0xe58),"Alt or Option key");
  *(undefined8 *)(this + 0xe60) = 0;
  String::parse_latin1((String *)(this + 0xe60),"Shift key");
  *(undefined8 *)(this + 0xe68) = 0;
  String::parse_latin1((String *)(this + 0xe68),"Control key");
  *(undefined8 *)(this + 0xe70) = 0;
  String::parse_latin1((String *)(this + 0xe70),"Meta/Windows or Command key");
  *(undefined4 *)(this + 0xe00) = 0xf;
  *(undefined1 (*) [16])(this + 0xe98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xea8) = (undefined1  [16])0x0;
  fVar16 = (float)EditorScale::get_scale();
  local_88[0] = (Variant *)0x320;
  local_78[0] = Vector2i::operator*((Vector2i *)local_88,(int)fVar16);
  Window::set_min_size((Vector2i *)this);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010fee8;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_98 = (undefined *)0x0;
  Label::Label(pLVar7,(String *)&local_98);
  postinitialize_handler((Object *)pLVar7);
  *(Label **)(this + 0xdf8) = pLVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  pVVar1 = *(Vector2 **)(this + 0xdf8);
  fVar16 = (float)EditorScale::get_scale();
  local_78[0] = CONCAT44(fVar16 * _LC61._4_4_,fVar16 * (float)_LC61);
  Control::set_custom_minimum_size(pVVar1);
  Label::set_autowrap_mode(*(undefined8 *)(this + 0xdf8),3);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xdf8),1);
  pSVar2 = *(StringName **)(this + 0xdf8);
  EditorScale::get_scale();
  Control::add_theme_font_size_override(pSVar2,(int)SceneStringNames::singleton + 0xa8);
  Node::add_child(this_00,*(undefined8 *)(this + 0xdf8),0,0);
  this_01 = (EventListenerLineEdit *)operator_new(0xbc0,"");
  EventListenerLineEdit::EventListenerLineEdit(this_01);
  postinitialize_handler((Object *)this_01);
  *(EventListenerLineEdit **)(this + 0xdf0) = this_01;
  Control::set_h_size_flags(this_01,3);
  Control::set_stretch_ratio(_LC63);
  plVar3 = *(long **)(this + 0xdf0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC7;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_00110750;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar5;
  *(code **)(pCVar8 + 0x38) = _on_listen_input_changed;
  *(InputEventConfigurationDialog **)(pCVar8 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "InputEventConfigurationDialog::_on_listen_input_changed";
  Callable::Callable((Callable *)&local_98,pCVar8);
  StringName::StringName((StringName *)local_a8,"event_changed",false);
  (*pcVar4)(plVar3,(StringName *)local_a8,(CowData<char32_t> *)&local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_98);
  plVar3 = *(long **)(this + 0xdf0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<AcceptDialog,bool>
            ((AcceptDialog *)&local_98,(char *)this,
             (_func_void_bool *)"&AcceptDialog::set_close_on_escape");
  bVar12 = SUB81((StringName *)local_a8,0);
  Callable::bind<bool>(bVar12);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0xd8,(StringName *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)&local_98);
  plVar3 = *(long **)(this + 0xdf0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<AcceptDialog,bool>
            ((AcceptDialog *)&local_98,(char *)this,
             (_func_void_bool *)"&AcceptDialog::set_close_on_escape");
  Callable::bind<bool>(bVar12);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0xe0,(StringName *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)&local_98);
  Node::add_child(this_00,*(undefined8 *)(this + 0xdf0),0,0);
  this_02 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(this_02);
  postinitialize_handler((Object *)this_02);
  Node::add_child(this_00,this_02,0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,true);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_0010fee8;
  postinitialize_handler((Object *)pBVar9);
  local_98 = (undefined *)0x0;
  String::parse_latin1((String *)&local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Manual Selection");
  TTR((String *)&local_b0,(String *)local_a8);
  Node::set_name((String *)pBVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Control::set_v_size_flags(pBVar9,3);
  Node::add_child(this_00,pBVar9,0,0);
  this_03 = (LineEdit *)operator_new(0xbb0,"");
  local_98 = (undefined *)0x0;
  LineEdit::LineEdit(this_03,(String *)&local_98);
  postinitialize_handler((Object *)this_03);
  *(LineEdit **)(this + 0xe10) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe10),3);
  uVar5 = *(undefined8 *)(this + 0xe10);
  local_98 = (undefined *)0x0;
  String::parse_latin1((String *)&local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Filter Inputs");
  TTR((String *)&local_b0,(String *)local_a8);
  LineEdit::set_placeholder(uVar5,(String *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xe10),0));
  plVar3 = *(long **)(this + 0xe10);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC7;
  *(InputEventConfigurationDialog **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_00110870;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar5;
  *(code **)(pCVar8 + 0x38) = _search_term_updated;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "InputEventConfigurationDialog::_search_term_updated";
  Callable::Callable((Callable *)&local_98,pCVar8);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x270,(CowData<char32_t> *)&local_98,0);
  Callable::~Callable((Callable *)&local_98);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xe10),0,0);
  this_04 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_04);
  postinitialize_handler((Object *)this_04);
  *(Tree **)(this + 0xe08) = this_04;
  Node::set_auto_translate_mode(this_04,2);
  pVVar1 = *(Vector2 **)(this + 0xe08);
  fVar16 = (float)EditorScale::get_scale();
  local_78[0] = (ulong)(uint)(fVar16 * __LC71) << 0x20;
  Control::set_custom_minimum_size(pVVar1);
  plVar3 = *(long **)(this + 0xe08);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<InputEventConfigurationDialog>
            ((InputEventConfigurationDialog *)&local_98,(char *)this,
             (_func_void *)"&InputEventConfigurationDialog::_input_list_item_activated");
  StringName::StringName((StringName *)local_a8,"item_activated",false);
  (*pcVar4)(plVar3,(StringName *)local_a8,(CowData<char32_t> *)&local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_98);
  plVar3 = *(long **)(this + 0xe08);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<InputEventConfigurationDialog>
            ((InputEventConfigurationDialog *)&local_98,(char *)this,
             (_func_void *)"&InputEventConfigurationDialog::_input_list_item_selected");
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)&local_98,0);
  Callable::~Callable((Callable *)&local_98);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xe08),3);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xe08),0,0);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xe08),0));
  Tree::set_columns((int)*(undefined8 *)(this + 0xe08));
  _update_input_list(this);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,true);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_0010fee8;
  postinitialize_handler((Object *)pBVar9);
  *(BoxContainer **)(this + 0xe18) = pBVar9;
  CanvasItem::hide();
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_98 = (undefined *)0x0;
  Label::Label(pLVar7,(String *)&local_98);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  StringName::StringName((StringName *)&local_98,"HeaderSmall",false);
  Control::set_theme_type_variation((StringName *)pLVar7);
  if ((StringName::configured != '\0') && (local_98 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_98 = (undefined *)0x0;
  String::parse_latin1((String *)&local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Additional Options");
  TTR((String *)&local_b0,(String *)local_a8);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Node::add_child(*(undefined8 *)(this + 0xe18),pLVar7,0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,false);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_0010fb70;
  postinitialize_handler((Object *)pBVar9);
  *(BoxContainer **)(this + 0xe20) = pBVar9;
  Control::set_h_size_flags(pBVar9,3);
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_98 = (undefined *)0x0;
  Label::Label(pLVar7,(String *)&local_98);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  StringName::StringName((StringName *)&local_98,"HeaderSmall",false);
  Control::set_theme_type_variation((StringName *)pLVar7);
  if ((StringName::configured != '\0') && (local_98 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_98 = (undefined *)0x0;
  String::parse_latin1((String *)&local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Device:");
  TTR((String *)&local_b0,(String *)local_a8);
  Label::set_text((String *)pLVar7);
  iVar15 = -1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Node::add_child(*(undefined8 *)(this + 0xe20),pLVar7,0,0);
  pOVar10 = (OptionButton *)operator_new(0xd00,"");
  local_98 = (undefined *)0x0;
  OptionButton::OptionButton(pOVar10,(String *)&local_98);
  postinitialize_handler((Object *)pOVar10);
  *(OptionButton **)(this + 0xe28) = pOVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe28),3);
  do {
    pSVar14 = *(String **)(this + 0xe28);
    iVar15 = iVar15 + 1;
    iVar13 = (int)(CowData<char32_t> *)&local_98;
    EventListenerLineEdit::get_device_string(iVar13);
    OptionButton::add_item(pSVar14,iVar13);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  } while (iVar15 != 8);
  plVar3 = *(long **)(this + 0xe28);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<InputEventConfigurationDialog,int>
            ((InputEventConfigurationDialog *)&local_98,(char *)this,
             (_func_void_int *)"&InputEventConfigurationDialog::_device_selection_changed");
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)&local_98,0);
  Callable::~Callable((Callable *)&local_98);
  OptionButton::select((int)*(undefined8 *)(this + 0xe28));
  Node::add_child(*(undefined8 *)(this + 0xe20),*(undefined8 *)(this + 0xe28),0,0);
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0xe18),*(undefined8 *)(this + 0xe20),0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,false);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_0010fb70;
  postinitialize_handler((Object *)pBVar9);
  *(BoxContainer **)(this + 0xe30) = pBVar9;
  iVar15 = 0;
  pSVar14 = (String *)(this + 0xe38);
  do {
    local_b0 = 0;
    if (*(long *)pSVar14 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)pSVar14);
    }
    pCVar11 = (CheckBox *)operator_new(0xc60,"");
    local_98 = (undefined *)0x0;
    CheckBox::CheckBox(pCVar11,(String *)&local_98);
    postinitialize_handler((Object *)pCVar11);
    *(CheckBox **)((CowData *)pSVar14 + 0x40) = pCVar11;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    plVar3 = *(long **)((CowData *)pSVar14 + 0x40);
    pcVar4 = *(code **)(*plVar3 + 0x108);
    pCVar8 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar8);
    *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
    *(undefined8 *)(pCVar8 + 0x40) = 0;
    uVar5 = *(undefined8 *)(this + 0x60);
    *(undefined ***)pCVar8 = &PTR_hash_00110a20;
    *(undefined8 *)(pCVar8 + 0x30) = uVar5;
    *(code **)(pCVar8 + 0x38) = _mod_toggled;
    *(undefined8 *)(pCVar8 + 0x10) = 0;
    *(undefined **)(pCVar8 + 0x20) = &_LC7;
    *(InputEventConfigurationDialog **)(pCVar8 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
    *(char **)(pCVar8 + 0x20) = "InputEventConfigurationDialog::_mod_toggled";
    Callable::Callable((Callable *)&local_98,pCVar8);
    Variant::Variant((Variant *)local_78,iVar15);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    Callable::bindp((Variant **)local_a8,iVar13);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    (*pcVar4)(plVar3,SceneStringNames::singleton + 0x248,(StringName *)local_a8,0);
    Callable::~Callable((Callable *)local_a8);
    Callable::~Callable((Callable *)&local_98);
    Button::set_text(*(String **)((CowData *)pSVar14 + 0x40));
    pSVar6 = *(String **)((CowData *)pSVar14 + 0x40);
    local_a8[0] = 0;
    local_98 = &_LC7;
    local_90 = 0;
    String::parse_latin1((StrRange *)local_a8);
    TTR((String *)&local_98,(String *)((CowData *)pSVar14 + 0x20));
    Control::set_tooltip_text(pSVar6);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    Node::add_child(*(undefined8 *)(this + 0xe30),*(undefined8 *)((CowData *)pSVar14 + 0x40),0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    iVar15 = iVar15 + 1;
    pSVar14 = (String *)((CowData *)pSVar14 + 8);
  } while (iVar15 != 4);
  uVar5 = *(undefined8 *)(this + 0xe30);
  this_05 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(this_05);
  postinitialize_handler((Object *)this_05);
  Node::add_child(uVar5,this_05,0,0);
  pCVar11 = (CheckBox *)operator_new(0xc60,"");
  local_98 = (undefined *)0x0;
  CheckBox::CheckBox(pCVar11,(String *)&local_98);
  postinitialize_handler((Object *)pCVar11);
  *(CheckBox **)(this + 0xe98) = pCVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  plVar3 = *(long **)(this + 0xe98);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC7;
  *(InputEventConfigurationDialog **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_00110ab0;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar5;
  *(code **)(pCVar8 + 0x38) = _autoremap_command_or_control_toggled;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "InputEventConfigurationDialog::_autoremap_command_or_control_toggled"
  ;
  Callable::Callable((Callable *)&local_98,pCVar8);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)&local_98,0);
  Callable::~Callable((Callable *)&local_98);
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xe98),0));
  pSVar14 = *(String **)(this + 0xe98);
  local_98 = (undefined *)0x0;
  String::parse_latin1((String *)&local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Command / Control (auto)");
  TTR((String *)&local_b0,(String *)local_a8);
  Button::set_text(pSVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  pSVar14 = *(String **)(this + 0xe98);
  local_98 = (undefined *)0x0;
  String::parse_latin1((String *)&local_98,"");
  local_a8[0] = 0;
  String::parse_latin1
            ((String *)local_a8,
             "Automatically remaps between \'Meta\' (\'Command\') and \'Control\' depending on current platform."
            );
  TTR((String *)&local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar14);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Node::add_child(*(undefined8 *)(this + 0xe30),*(undefined8 *)(this + 0xe98),0,0);
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0xe18),*(undefined8 *)(this + 0xe30),0,0);
  pOVar10 = (OptionButton *)operator_new(0xd00,"");
  local_98 = (undefined *)0x0;
  OptionButton::OptionButton(pOVar10,(String *)&local_98);
  postinitialize_handler((Object *)pOVar10);
  *(OptionButton **)(this + 0xea0) = pOVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  pSVar14 = *(String **)(this + 0xea0);
  local_98 = (undefined *)0x0;
  String::parse_latin1((String *)&local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Keycode (Latin Equivalent)");
  TTR((String *)&local_b0,(String *)local_a8);
  iVar15 = (int)(String *)&local_b0;
  OptionButton::add_item(pSVar14,iVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  pSVar14 = *(String **)(this + 0xea0);
  local_98 = (undefined *)0x0;
  String::parse_latin1((String *)&local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Physical Keycode (Position on US QWERTY Keyboard)");
  TTR((String *)&local_b0,(String *)local_a8);
  OptionButton::add_item(pSVar14,iVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  pSVar14 = *(String **)(this + 0xea0);
  local_98 = (undefined *)0x0;
  String::parse_latin1((String *)&local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Key Label (Unicode, Case-Insensitive)");
  TTR((String *)&local_b0,(String *)local_a8);
  OptionButton::add_item(pSVar14,iVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  plVar3 = *(long **)(this + 0xea0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<InputEventConfigurationDialog,int>
            ((InputEventConfigurationDialog *)&local_98,(char *)this,
             (_func_void_int *)"&InputEventConfigurationDialog::_key_mode_selected");
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)&local_98);
  Callable::~Callable((Callable *)&local_98);
  CanvasItem::hide();
  Node::add_child(*(undefined8 *)(this + 0xe18),*(undefined8 *)(this + 0xea0),0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,false);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_0010fb70;
  postinitialize_handler((Object *)pBVar9);
  *(BoxContainer **)(this + 0xea8) = pBVar9;
  CanvasItem::hide();
  pLVar7 = (Label *)operator_new(0xad8,"");
  local_98 = (undefined *)0x0;
  Label::Label(pLVar7,(String *)&local_98);
  postinitialize_handler((Object *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  local_98 = (undefined *)0x0;
  String::parse_latin1((String *)&local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Physical location");
  TTR((String *)&local_b0,(String *)local_a8);
  Label::set_text((String *)pLVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Node::add_child(*(undefined8 *)(this + 0xea8),pLVar7,0,0);
  pOVar10 = (OptionButton *)operator_new(0xd00,"");
  local_98 = (undefined *)0x0;
  OptionButton::OptionButton(pOVar10,(String *)&local_98);
  postinitialize_handler((Object *)pOVar10);
  *(OptionButton **)(this + 0xeb0) = pOVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xeb0),3);
  pSVar14 = *(String **)(this + 0xeb0);
  local_98 = (undefined *)0x0;
  String::parse_latin1((String *)&local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Any");
  TTR((String *)&local_b0,(String *)local_a8);
  OptionButton::add_item(pSVar14,iVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  pSVar14 = *(String **)(this + 0xeb0);
  local_98 = (undefined *)0x0;
  String::parse_latin1((String *)&local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Left");
  TTR((String *)&local_b0,(String *)local_a8);
  OptionButton::add_item(pSVar14,iVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  pSVar14 = *(String **)(this + 0xeb0);
  local_98 = (undefined *)0x0;
  String::parse_latin1((String *)&local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Right");
  TTR((String *)&local_b0,(String *)local_a8);
  OptionButton::add_item(pSVar14,iVar15);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  plVar3 = *(long **)(this + 0xeb0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<InputEventConfigurationDialog,int>
            ((InputEventConfigurationDialog *)&local_98,(char *)this,
             (_func_void_int *)"&InputEventConfigurationDialog::_key_location_selected");
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)&local_98,0);
  Callable::~Callable((Callable *)&local_98);
  Node::add_child(*(undefined8 *)(this + 0xea8),*(undefined8 *)(this + 0xeb0),0,0);
  Node::add_child(*(undefined8 *)(this + 0xe18),*(undefined8 *)(this + 0xea8),0,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this_00,*(undefined8 *)(this + 0xe18),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InputEventConfigurationDialog::_set_event(Ref<InputEvent> const&, Ref<InputEvent> const&, bool)
    */

void __thiscall
InputEventConfigurationDialog::_set_event
          (InputEventConfigurationDialog *this,Ref *param_1,Ref *param_2,bool param_3)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  String *pSVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long in_FS_OFFSET;
  float fVar20;
  float fVar21;
  Object *local_160;
  long *local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  Object *local_100;
  int local_f8 [2];
  long local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_b8;
  undefined1 local_b0 [16];
  int local_98 [2];
  long local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  pOVar2 = *(Object **)(this + 0xdd8);
  pOVar3 = *(Object **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar3 == (Object *)0x0) {
    if (pOVar2 != (Object *)0x0) {
      *(undefined8 *)(this + 0xdd8) = 0;
      local_100 = pOVar2;
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_100);
    }
    pOVar2 = *(Object **)(this + 0xde0);
    if (pOVar2 != (Object *)0x0) {
      *(undefined8 *)(this + 0xde0) = 0;
      local_100 = pOVar2;
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_100);
    }
    EventListenerLineEdit::clear_event();
    pSVar4 = *(String **)(this + 0xdf8);
    local_108 = 0;
    String::parse_latin1((String *)&local_108,"");
    local_110 = 0;
    String::parse_latin1((String *)&local_110,"No Event Configured");
    TTR((String *)&local_100,(String *)&local_110);
    Label::set_text(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CanvasItem::hide();
    Tree::deselect_all();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_input_list(this);
      return;
    }
    goto LAB_00104cac;
  }
  if (pOVar3 != pOVar2) {
    *(Object **)(this + 0xdd8) = pOVar3;
    cVar10 = RefCounted::reference();
    if (cVar10 == '\0') {
      *(undefined8 *)(this + 0xdd8) = 0;
    }
    if (((pOVar2 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
       (cVar10 = predelete_handler(pOVar2), cVar10 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
    }
  }
  pOVar2 = *(Object **)param_2;
  pOVar3 = *(Object **)(this + 0xde0);
  if (pOVar2 != pOVar3) {
    *(Object **)(this + 0xde0) = pOVar2;
    if ((pOVar2 != (Object *)0x0) && (cVar10 = RefCounted::reference(), cVar10 == '\0')) {
      *(undefined8 *)(this + 0xde0) = 0;
    }
    if (((pOVar3 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
       (cVar10 = predelete_handler(pOVar3), cVar10 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  EventListenerLineEdit::get_event();
  if ((local_138 != (long *)0x0) &&
     (cVar10 = (**(code **)(*local_138 + 0x1e8))(local_138,param_1,1), cVar10 == '\0')) {
    EventListenerLineEdit::clear_event();
  }
  pSVar4 = *(String **)(this + 0xdf8);
  EventListenerLineEdit::get_event_text
            ((Ref *)&local_100,SUB81((Ref<InputEvent> *)(this + 0xdd8),0));
  Label::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  local_130 = 0;
  Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_130,*(Ref **)param_1);
  lVar19 = *(long *)param_1;
  local_128 = 0;
  if (lVar19 == 0) {
    local_120 = 0;
    local_118 = 0;
LAB_00103a55:
    local_160 = (Object *)0x0;
  }
  else {
    lVar16 = __dynamic_cast(lVar19,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (lVar16 != 0) {
      local_100 = (Object *)0x0;
      local_128 = lVar16;
      cVar10 = RefCounted::reference();
      if (cVar10 == '\0') {
        local_128 = 0;
      }
      Ref<InputEventMouseButton>::unref((Ref<InputEventMouseButton> *)&local_100);
      lVar19 = *(long *)param_1;
      local_120 = 0;
      if (lVar19 == 0) {
        local_118 = 0;
        goto LAB_00103a55;
      }
    }
    local_120 = 0;
    lVar16 = __dynamic_cast(lVar19,&Object::typeinfo,&InputEventJoypadButton::typeinfo,0);
    if (lVar16 != 0) {
      local_100 = (Object *)0x0;
      local_120 = lVar16;
      cVar10 = RefCounted::reference();
      if (cVar10 == '\0') {
        local_120 = 0;
      }
      Ref<InputEventJoypadButton>::unref((Ref<InputEventJoypadButton> *)&local_100);
      lVar19 = *(long *)param_1;
      local_118 = 0;
      if (lVar19 == 0) goto LAB_00103a55;
    }
    local_118 = 0;
    lVar16 = __dynamic_cast(lVar19,&Object::typeinfo,&InputEventJoypadMotion::typeinfo,0);
    if (lVar16 != 0) {
      local_100 = (Object *)0x0;
      local_118 = lVar16;
      cVar10 = RefCounted::reference();
      if (cVar10 == '\0') {
        local_118 = 0;
      }
      Ref<InputEventJoypadMotion>::unref((Ref<InputEventJoypadMotion> *)&local_100);
      lVar19 = *(long *)param_1;
      if (lVar19 == 0) goto LAB_00103a55;
    }
    local_160 = (Object *)
                __dynamic_cast(lVar19,&Object::typeinfo,&InputEventWithModifiers::typeinfo,0);
    if ((local_160 == (Object *)0x0) || (cVar10 = RefCounted::reference(), cVar10 == '\0'))
    goto LAB_00103a55;
    uVar5 = *(undefined8 *)(this + 0xe78);
    InputEventWithModifiers::is_alt_pressed();
    BaseButton::set_pressed(SUB81(uVar5,0));
    uVar5 = *(undefined8 *)(this + 0xe80);
    InputEventWithModifiers::is_shift_pressed();
    BaseButton::set_pressed(SUB81(uVar5,0));
    uVar5 = *(undefined8 *)(this + 0xe88);
    InputEventWithModifiers::is_ctrl_pressed();
    BaseButton::set_pressed(SUB81(uVar5,0));
    uVar5 = *(undefined8 *)(this + 0xe90);
    InputEventWithModifiers::is_meta_pressed();
    BaseButton::set_pressed(SUB81(uVar5,0));
    uVar5 = *(undefined8 *)(this + 0xe98);
    InputEventWithModifiers::is_command_or_control_autoremap();
    BaseButton::set_pressed(SUB81(uVar5,0));
  }
  lVar19 = local_130;
  if (local_130 == 0) {
    if (((local_120 != 0) || (local_118 != 0)) || (local_128 != 0)) {
      InputEvent::get_device();
      OptionButton::select((int)*(undefined8 *)(this + 0xe28));
    }
LAB_00103beb:
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xe30),0));
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xe20),0));
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xea0),0));
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xea8),0));
    CanvasItem::show();
    local_110 = 0;
    Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_110,*(Ref **)param_2);
    lVar16 = local_110;
    if (local_110 != 0) {
      iVar13 = InputEventKey::get_keycode();
      if (iVar13 == 0) {
        iVar13 = InputEventKey::get_physical_keycode();
        if (iVar13 != 0) {
          InputEventKey::get_physical_keycode();
          InputEventKey::set_keycode(lVar16);
        }
        iVar13 = InputEventKey::get_key_label();
        if (iVar13 != 0) {
          uVar15 = InputEventKey::get_key_label();
          fix_keycode(uVar15,0);
          InputEventKey::set_keycode(lVar16);
        }
      }
      iVar13 = InputEventKey::get_physical_keycode();
      if (iVar13 == 0) {
        iVar13 = InputEventKey::get_keycode();
        if (iVar13 != 0) {
          InputEventKey::get_keycode();
          InputEventKey::set_physical_keycode(lVar16);
        }
        iVar13 = InputEventKey::get_key_label();
        if (iVar13 != 0) {
          uVar15 = InputEventKey::get_key_label();
          fix_keycode(uVar15,0);
          InputEventKey::set_physical_keycode(lVar16);
        }
      }
      iVar13 = InputEventKey::get_key_label();
      if (iVar13 == 0) {
        iVar13 = InputEventKey::get_keycode();
        if (iVar13 != 0) {
          uVar15 = InputEventKey::get_keycode();
          fix_key_label(uVar15,0);
          InputEventKey::set_key_label(lVar16);
        }
        iVar13 = InputEventKey::get_physical_keycode();
        if (iVar13 != 0) {
          uVar15 = InputEventKey::get_physical_keycode();
          fix_key_label(uVar15,0);
          InputEventKey::set_key_label(lVar16);
        }
      }
      uVar5 = *(undefined8 *)(this + 0xea0);
      InputEventKey::get_keycode();
      OptionButton::set_item_disabled((int)uVar5,false);
      uVar5 = *(undefined8 *)(this + 0xea0);
      InputEventKey::get_physical_keycode();
      OptionButton::set_item_disabled((int)uVar5,true);
      uVar5 = *(undefined8 *)(this + 0xea0);
      InputEventKey::get_key_label();
      OptionButton::set_item_disabled((int)uVar5,true);
    }
    if ((param_3) && (((lVar19 != 0 || (local_120 != 0)) || ((local_118 != 0 || (local_128 != 0)))))
       ) {
      this[0xde8] = (InputEventConfigurationDialog)0x1;
      Tree::get_root();
      lVar16 = TreeItem::get_first_child();
      while (lVar16 != 0) {
        plVar17 = (long *)TreeItem::get_first_child();
        if (plVar17 != (long *)0x0) {
          plVar18 = (long *)TreeItem::get_parent();
          pcVar6 = *(code **)(*plVar18 + 0xb8);
          Variant::Variant((Variant *)&local_78,0);
          StringName::StringName((StringName *)&local_100,"__type",false);
          (*pcVar6)((Variant *)local_58,plVar18,(Ref *)&local_100,(Variant *)&local_78);
          iVar13 = Variant::operator_cast_to_int((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          lVar9 = local_118;
          lVar8 = local_120;
          lVar7 = local_128;
          if (iVar13 == 0) {
LAB_001045f4:
            this[0xde8] = (InputEventConfigurationDialog)0x0;
            Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_110);
            goto LAB_00104608;
          }
          if (((((iVar13 == 1) && (lVar19 != 0)) || ((iVar13 == 4 && (local_120 != 0)))) ||
              ((iVar13 == 8 && (local_118 != 0)))) || ((local_128 != 0 && (iVar13 == 2)))) {
            do {
              if (lVar19 != 0) {
                pcVar6 = *(code **)(*plVar17 + 0xb8);
                local_d0 = (undefined1  [16])0x0;
                local_d8 = 0;
                StringName::StringName((StringName *)&local_108,"__keycode",false);
                (*pcVar6)((Variant *)&local_b8,plVar17,(StringName *)&local_108);
                iVar13 = InputEventKey::get_keycode();
                local_f8[0] = 2;
                local_e8 = 0;
                local_f0 = (long)iVar13;
                bVar11 = Variant::operator==((Variant *)local_f8,(Variant *)&local_b8);
                if (bVar11 == 0) {
                  pcVar6 = *(code **)(*plVar17 + 0xb8);
                  local_70 = (undefined1  [16])0x0;
                  local_78 = 0;
                  StringName::StringName((StringName *)&local_100,"__keycode",false);
                  (*pcVar6)((Variant *)local_58,plVar17,(Ref *)&local_100,(Variant *)&local_78);
                  iVar13 = InputEventKey::get_physical_keycode();
                  local_98[0] = 2;
                  local_88 = 0;
                  local_90 = (long)iVar13;
                  bVar11 = Variant::operator==((Variant *)local_98,(Variant *)local_58);
                  if (Variant::needs_deinit[local_98[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  if (Variant::needs_deinit[(int)local_78] == '\0') goto LAB_00103fc4;
                  Variant::_clear_internal();
                  if (Variant::needs_deinit[local_f8[0]] != '\0') goto LAB_00104580;
LAB_00103fd7:
                  cVar10 = Variant::needs_deinit[(int)local_b8];
                }
                else {
LAB_00103fc4:
                  if (Variant::needs_deinit[local_f8[0]] == '\0') goto LAB_00103fd7;
LAB_00104580:
                  Variant::_clear_internal();
                  cVar10 = Variant::needs_deinit[(int)local_b8];
                }
                if (cVar10 != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_108 != 0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[(int)local_d8] != '\0') {
                  Variant::_clear_internal();
                }
                bVar12 = bVar11;
                if (lVar8 != 0) goto LAB_00104025;
LAB_0010410c:
                if (lVar9 == 0) {
                  bVar12 = bVar11;
                  if (lVar7 != 0) {
LAB_00104360:
                    cVar10 = '\0';
                    goto LAB_00104229;
                  }
joined_r0x001045be:
                  if (bVar12 == 0) goto LAB_0010431c;
                }
                else {
LAB_00104118:
                  pcVar6 = *(code **)(*plVar17 + 0xb8);
                  local_b0 = (undefined1  [16])0x0;
                  local_b8 = 0;
                  StringName::StringName((StringName *)&local_108,"__axis",false);
                  (*pcVar6)((Variant *)local_98,plVar17,(StringName *)&local_108,&local_b8);
                  iVar13 = InputEventJoypadMotion::get_axis();
                  local_d8 = CONCAT44(local_d8._4_4_,2);
                  local_d0._8_8_ = 0;
                  local_d0._0_8_ = (long)iVar13;
                  cVar10 = Variant::operator==((Variant *)&local_d8,(Variant *)local_98);
                  if (cVar10 == '\0') {
LAB_001041c5:
                    if (Variant::needs_deinit[(int)local_d8] == '\0') goto LAB_001041d8;
LAB_00104450:
                    Variant::_clear_internal();
                    cVar1 = Variant::needs_deinit[local_98[0]];
                  }
                  else {
                    fVar20 = (float)InputEventJoypadMotion::get_axis_value();
                    pcVar6 = *(code **)(*plVar17 + 0xb8);
                    local_70 = (undefined1  [16])0x0;
                    local_78 = 0;
                    StringName::StringName((StringName *)&local_100,"__value",false);
                    (*pcVar6)((Variant *)local_58,plVar17,(Ref *)&local_100,(Variant *)&local_78);
                    fVar21 = Variant::operator_cast_to_float((Variant *)local_58);
                    cVar10 = fVar20 == fVar21;
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                      StringName::unref();
                    }
                    if (Variant::needs_deinit[(int)local_78] == '\0') goto LAB_001041c5;
                    Variant::_clear_internal();
                    if (Variant::needs_deinit[(int)local_d8] != '\0') goto LAB_00104450;
LAB_001041d8:
                    cVar1 = Variant::needs_deinit[local_98[0]];
                  }
                  if (cVar1 != '\0') {
                    Variant::_clear_internal();
                  }
                  if ((StringName::configured != '\0') && (local_108 != 0)) {
                    StringName::unref();
                  }
                  if (Variant::needs_deinit[(int)local_b8] != '\0') {
                    Variant::_clear_internal();
                  }
                  bVar12 = 0;
                  if (lVar7 != 0) {
LAB_00104229:
                    pcVar6 = *(code **)(*plVar17 + 0xb8);
                    local_70 = (undefined1  [16])0x0;
                    local_78 = 0;
                    StringName::StringName((StringName *)&local_100,"__index",false);
                    (*pcVar6)((Variant *)local_58,plVar17,(Ref *)&local_100,(Variant *)&local_78);
                    iVar13 = InputEventMouseButton::get_button_index();
                    local_98[0] = 2;
                    local_88 = 0;
                    local_90 = (long)iVar13;
                    bVar12 = Variant::operator==((Variant *)local_98,(Variant *)local_58);
                    if (Variant::needs_deinit[local_98[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                      StringName::unref();
                    }
                    if (Variant::needs_deinit[(int)local_78] != '\0') {
                      Variant::_clear_internal();
                    }
                  }
                  if ((bVar11 == 0) && (cVar10 == '\0')) goto joined_r0x001045be;
                }
                TreeItem::set_collapsed(SUB81(lVar16,0));
                TreeItem::select((int)plVar17);
                Tree::ensure_cursor_is_visible();
                goto LAB_001045f4;
              }
              bVar11 = 0;
              bVar12 = 0;
              if (lVar8 != 0) {
LAB_00104025:
                pcVar6 = *(code **)(*plVar17 + 0xb8);
                local_70 = (undefined1  [16])0x0;
                local_78 = 0;
                StringName::StringName((StringName *)&local_100,"__index",false);
                (*pcVar6)((Variant *)local_58,plVar17,(Ref *)&local_100,(Variant *)&local_78);
                iVar13 = InputEventJoypadButton::get_button_index();
                local_98[0] = 2;
                local_88 = 0;
                local_90 = (long)iVar13;
                bVar11 = Variant::operator==((Variant *)local_98,(Variant *)local_58);
                if (Variant::needs_deinit[local_98[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_100 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[(int)local_78] != '\0') {
                  Variant::_clear_internal();
                }
                bVar11 = bVar12 | bVar11;
                goto LAB_0010410c;
              }
              if (lVar9 != 0) goto LAB_00104118;
              if (lVar7 != 0) goto LAB_00104360;
LAB_0010431c:
              plVar17 = (long *)TreeItem::get_next();
            } while (plVar17 != (long *)0x0);
          }
        }
        TreeItem::set_collapsed(SUB81(lVar16,0));
        lVar16 = TreeItem::get_next();
      }
      this[0xde8] = (InputEventConfigurationDialog)0x0;
    }
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_110);
    if (local_160 != (Object *)0x0) {
      cVar10 = RefCounted::unreference();
joined_r0x00103ebd:
      if ((cVar10 != '\0') && (cVar10 = predelete_handler(local_160), cVar10 != '\0')) {
        (**(code **)(*(long *)local_160 + 0x140))(local_160);
        Memory::free_static(local_160,false);
      }
    }
  }
  else {
    iVar13 = InputEventKey::get_physical_keycode();
    iVar14 = InputEventKey::get_keycode();
    if (iVar14 == 0) {
      if (iVar13 == 0) {
        iVar13 = InputEventKey::get_key_label();
        if (iVar13 != 0) {
          OptionButton::select((int)*(undefined8 *)(this + 0xea0));
          goto LAB_00103beb;
        }
        iVar13 = InputEventKey::get_keycode();
        if (iVar13 == 0) goto LAB_00104995;
      }
      else {
        iVar14 = InputEventKey::get_keycode();
        if (iVar14 == 0) goto LAB_00103aac;
      }
LAB_00104a68:
      OptionButton::select((int)*(undefined8 *)(this + 0xea0));
      goto LAB_00103beb;
    }
    iVar14 = InputEventKey::get_keycode();
    if (iVar14 != 0) goto LAB_00104a68;
    if (iVar13 != 0) {
LAB_00103aac:
      OptionButton::select((int)*(undefined8 *)(this + 0xea0));
      if (iVar13 - 0x400015U < 4) {
        uVar5 = *(undefined8 *)(this + 0xeb0);
        InputEventKey::get_location();
        OptionButton::select((int)uVar5);
      }
      goto LAB_00103beb;
    }
LAB_00104995:
    Ref<InputEvent>::operator=((Ref<InputEvent> *)(this + 0xdd8),(Ref *)0x0);
    Ref<InputEvent>::operator=((Ref<InputEvent> *)(this + 0xde0),(Ref *)0x0);
    EventListenerLineEdit::clear_event();
    pSVar4 = *(String **)(this + 0xdf8);
    local_108 = 0;
    String::parse_latin1((String *)&local_108,"");
    local_110 = 0;
    String::parse_latin1((String *)&local_110,"No Event Configured");
    TTR((String *)&local_100,(String *)&local_110);
    Label::set_text(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CanvasItem::hide();
    Tree::deselect_all();
    _update_input_list(this);
LAB_00104608:
    if (local_160 != (Object *)0x0) {
      cVar10 = RefCounted::unreference();
      goto joined_r0x00103ebd;
    }
  }
  Ref<InputEventJoypadMotion>::unref((Ref<InputEventJoypadMotion> *)&local_118);
  Ref<InputEventJoypadButton>::unref((Ref<InputEventJoypadButton> *)&local_120);
  Ref<InputEventMouseButton>::unref((Ref<InputEventMouseButton> *)&local_128);
  Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_130);
  Ref<InputEvent>::unref((Ref<InputEvent> *)&local_138);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104cac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InputEventConfigurationDialog::_mod_toggled(bool, int) */

void __thiscall
InputEventConfigurationDialog::_mod_toggled
          (InputEventConfigurationDialog *this,bool param_1,int param_2)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  bool bVar4;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xdd8) != 0) {
    pOVar2 = (Object *)
             __dynamic_cast(*(long *)(this + 0xdd8),&Object::typeinfo,
                            &InputEventWithModifiers::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 != '\0') {
        bVar4 = SUB81(pOVar2,0);
        if (param_2 == 0) {
          InputEventWithModifiers::set_alt_pressed(bVar4);
        }
        else if (param_2 == 1) {
          InputEventWithModifiers::set_shift_pressed(bVar4);
        }
        else if (param_2 == 2) {
          cVar1 = BaseButton::is_pressed();
          if (cVar1 == '\0') {
            InputEventWithModifiers::set_ctrl_pressed(bVar4);
          }
        }
        else if (param_2 == 3) {
          cVar1 = BaseButton::is_pressed();
          if (cVar1 == '\0') {
            InputEventWithModifiers::set_meta_pressed(bVar4);
          }
        }
        local_38 = (Object *)0x0;
        pOVar3 = (Object *)__dynamic_cast(pOVar2,&Object::typeinfo,&InputEvent::typeinfo,0);
        if (pOVar3 != (Object *)0x0) {
          local_38 = pOVar3;
          cVar1 = RefCounted::reference();
          if (cVar1 == '\0') {
            local_38 = (Object *)0x0;
          }
        }
        _set_event(this,(Ref *)&local_38,(Ref *)(this + 0xde0),true);
        if (local_38 != (Object *)0x0) {
          cVar1 = RefCounted::unreference();
          pOVar3 = local_38;
          if (cVar1 != '\0') {
            cVar1 = predelete_handler(local_38);
            if (cVar1 != '\0') {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
          }
        }
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar2);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pOVar2,false);
              return;
            }
            goto LAB_00104edd;
          }
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104edd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InputEventConfigurationDialog::_autoremap_command_or_control_toggled(bool) */

void __thiscall
InputEventConfigurationDialog::_autoremap_command_or_control_toggled
          (InputEventConfigurationDialog *this,bool param_1)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xdd8) == 0) {
LAB_00104f4e:
    pOVar2 = (Object *)0x0;
  }
  else {
    pOVar2 = (Object *)
             __dynamic_cast(*(long *)(this + 0xdd8),&Object::typeinfo,
                            &InputEventWithModifiers::typeinfo,0);
    if (pOVar2 == (Object *)0x0) goto LAB_00104f4e;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') goto LAB_00104f4e;
    InputEventWithModifiers::set_command_or_control_autoremap(SUB81(pOVar2,0));
    local_40 = (Object *)0x0;
    pOVar3 = (Object *)__dynamic_cast(pOVar2,&Object::typeinfo,&InputEvent::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      local_38 = 0;
      local_40 = pOVar3;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_40 = (Object *)0x0;
      }
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_38);
    }
    _set_event(this,(Ref *)&local_40,(Ref *)(this + 0xde0),true);
    if (local_40 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      pOVar3 = local_40;
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_40);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
  }
  if (param_1) {
    CanvasItem::hide();
    CanvasItem::hide();
  }
  else {
    CanvasItem::show();
    CanvasItem::show();
  }
  if (pOVar2 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar2);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar2,false);
          return;
        }
        goto LAB_001050d2;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001050d2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InputEventConfigurationDialog::_key_mode_selected(int) */

void InputEventConfigurationDialog::_key_mode_selected(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Object *pOVar4;
  Object *pOVar5;
  long lVar6;
  undefined4 in_register_0000003c;
  InputEventConfigurationDialog *this;
  long in_FS_OFFSET;
  Object *local_50;
  Object *local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  
  this = (InputEventConfigurationDialog *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (Object *)0x0;
  if (*(long *)(this + 0xdd8) == 0) {
LAB_00105301:
    pOVar4 = (Object *)0x0;
  }
  else {
    pOVar4 = (Object *)
             __dynamic_cast(*(long *)(this + 0xdd8),&Object::typeinfo,&InputEventKey::typeinfo,0);
    if (pOVar4 == (Object *)0x0) goto LAB_00105301;
    local_50 = pOVar4;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      local_50 = (Object *)0x0;
      goto LAB_00105301;
    }
  }
  local_48 = (Object *)0x0;
  if (*(long *)(this + 0xde0) == 0) {
LAB_001052c1:
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_48);
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_50);
  }
  else {
    pOVar5 = (Object *)
             __dynamic_cast(*(long *)(this + 0xde0),&Object::typeinfo,&InputEventKey::typeinfo,0);
    if (pOVar5 == (Object *)0x0) goto LAB_001052c1;
    local_48 = pOVar5;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      local_48 = (Object *)0x0;
      goto LAB_001052c1;
    }
    if (pOVar4 == (Object *)0x0) goto LAB_001052c1;
    iVar2 = OptionButton::get_selected_id();
    if (iVar2 == 0) {
      uVar3 = InputEventKey::get_keycode();
      InputEventKey::set_keycode(pOVar4,uVar3);
      uVar3 = 0;
LAB_001051d3:
      InputEventKey::set_physical_keycode(pOVar4,uVar3);
      InputEventKey::set_key_label(pOVar4,0);
    }
    else {
      iVar2 = OptionButton::get_selected_id();
      if (iVar2 == 1) {
        InputEventKey::set_keycode(pOVar4,0);
        uVar3 = InputEventKey::get_physical_keycode();
        goto LAB_001051d3;
      }
      iVar2 = OptionButton::get_selected_id();
      if (iVar2 == 2) {
        InputEventKey::set_physical_keycode(pOVar4,0);
        InputEventKey::set_keycode(pOVar4,0);
        uVar3 = InputEventKey::get_key_label();
        InputEventKey::set_key_label(pOVar4,uVar3);
      }
    }
    local_40 = 0;
    lVar6 = __dynamic_cast(pOVar4,&Object::typeinfo,&InputEvent::typeinfo,0);
    if (lVar6 != 0) {
      local_38 = 0;
      local_40 = lVar6;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_40 = 0;
      }
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_38);
    }
    _set_event(this,(Ref *)&local_40,(Ref *)(this + 0xde0),true);
    Ref<InputEvent>::unref((Ref<InputEvent> *)&local_40);
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar5);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar4);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar4,false);
          return;
        }
        goto LAB_001053b1;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001053b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InputEventConfigurationDialog::_key_location_selected(int) */

void __thiscall
InputEventConfigurationDialog::_key_location_selected
          (InputEventConfigurationDialog *this,int param_1)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (Object *)0x0;
  if (*(long *)(this + 0xdd8) == 0) {
LAB_00105433:
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_40);
  }
  else {
    pOVar2 = (Object *)
             __dynamic_cast(*(long *)(this + 0xdd8),&Object::typeinfo,&InputEventKey::typeinfo,0);
    if (pOVar2 == (Object *)0x0) goto LAB_00105433;
    local_40 = pOVar2;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      local_40 = (Object *)0x0;
      goto LAB_00105433;
    }
    InputEventKey::set_location(pOVar2,param_1);
    local_38 = (Object *)0x0;
    pOVar3 = (Object *)__dynamic_cast(pOVar2,&Object::typeinfo,&InputEvent::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      local_38 = pOVar3;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_38 = (Object *)0x0;
      }
    }
    _set_event(this,(Ref *)&local_38,(Ref *)(this + 0xde0),true);
    if (local_38 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      pOVar3 = local_38;
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_38);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar2);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar2,false);
          return;
        }
        goto LAB_00105554;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105554:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InputEventConfigurationDialog::popup_and_configure(Ref<InputEvent> const&, String const&) */

void __thiscall
InputEventConfigurationDialog::popup_and_configure
          (InputEventConfigurationDialog *this,Ref *param_1,String *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  InputEventConfigurationDialog *pIVar6;
  long in_FS_OFFSET;
  float fVar7;
  Object *local_88;
  Object *local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  plVar1 = *(long **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 == (long *)0x0) {
    local_68 = (char *)0x0;
    local_70 = 0;
    pIVar6 = this + 0xe78;
    _set_event(this,(Ref *)&local_70,(Ref *)&local_68,true);
    Ref<InputEvent>::unref((Ref<InputEvent> *)&local_70);
    do {
      uVar2 = *(undefined8 *)pIVar6;
      pIVar6 = pIVar6 + 8;
      BaseButton::set_pressed(SUB81(uVar2,0));
    } while (pIVar6 != this + 0xe98);
    OptionButton::select((int)*(undefined8 *)(this + 0xea0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xe98),0));
    OptionButton::select((int)*(undefined8 *)(this + 0xe28));
    OptionButton::select((int)*(undefined8 *)(this + 0xeb0));
  }
  else {
    (**(code **)(*plVar1 + 0x198))(&local_80,plVar1,0);
    local_70 = 0;
    if ((local_80 != (Object *)0x0) &&
       (lVar5 = __dynamic_cast(local_80,&Object::typeinfo,&InputEvent::typeinfo,0), lVar5 != 0)) {
      local_68 = (char *)0x0;
      local_70 = lVar5;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_70 = 0;
      }
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_68);
    }
    (**(code **)(**(long **)param_1 + 0x198))(&local_88,*(long **)param_1,0);
    local_78 = 0;
    if ((local_88 != (Object *)0x0) &&
       (lVar5 = __dynamic_cast(local_88,&Object::typeinfo,&InputEvent::typeinfo,0), lVar5 != 0)) {
      local_68 = (char *)0x0;
      local_78 = lVar5;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_78 = 0;
      }
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_68);
    }
    _set_event(this,(Ref *)&local_78,(Ref *)&local_70,true);
    Ref<InputEvent>::unref((Ref<InputEvent> *)&local_78);
    if (((local_88 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar3 = local_88, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_88), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    Ref<InputEvent>::unref((Ref<InputEvent> *)&local_70);
    if (((local_80 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar3 = local_80, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_80), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  if ((*(long *)param_2 == 0) || (*(uint *)(*(long *)param_2 + -8) < 2)) {
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Event Configuration");
    TTR((String *)&local_68,(String *)&local_78);
    Window::set_title((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  else {
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)param_2);
    local_68 = "";
    local_80 = (Object *)0x0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "Event Configuration for \"%s\"";
    local_88 = (Object *)0x0;
    local_60 = 0x1c;
    String::parse_latin1((StrRange *)&local_88);
    TTR((String *)&local_78,(String *)&local_88);
    vformat<String>((String *)&local_68,(String *)&local_78,(String *)&local_70);
    Window::set_title((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  fVar7 = (float)EditorScale::get_scale();
  local_50 = CONCAT44(fVar7 * _LC98._4_4_,fVar7 * (float)_LC98);
  local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
  Window::popup_centered((Vector2i *)this);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* InputEventConfigurationDialog::_input_list_item_selected() */

void __thiscall
InputEventConfigurationDialog::_input_list_item_selected(InputEventConfigurationDialog *this)

{
  code *pcVar1;
  Resource *pRVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  Resource *this_00;
  Ref *pRVar8;
  bool bVar9;
  long in_FS_OFFSET;
  Resource *local_98;
  Ref *local_90;
  Resource *local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = (long *)Tree::get_selected();
  if (this[0xde8] != (InputEventConfigurationDialog)0x0) goto LAB_001059ca;
  pcVar1 = *(code **)(*plVar6 + 0xa0);
  StringName::StringName((StringName *)&local_80,"__type",false);
  cVar3 = (*pcVar1)(plVar6,(StringName *)&local_80);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (cVar3 != '\0') goto LAB_001059ca;
  plVar7 = (long *)TreeItem::get_parent();
  pcVar1 = *(code **)(*plVar7 + 0xb8);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  StringName::StringName((StringName *)&local_80,"__type",false);
  (*pcVar1)((Variant *)local_58,plVar7,(StringName *)&local_80,&local_78);
  iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if (iVar4 == 4) {
    pcVar1 = *(code **)(*plVar6 + 0xb8);
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    StringName::StringName((StringName *)&local_80,"__index",false);
    (*pcVar1)((Variant *)local_58,plVar6,(StringName *)&local_80);
    iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    InputEventJoypadButton::create_reference((Ref<InputEventJoypadButton> *)&local_90,iVar4);
    pRVar8 = local_90;
    OptionButton::get_selected();
    InputEvent::set_device((int)pRVar8);
    local_80 = 0;
    Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_80,local_90);
    local_88 = (Resource *)0x0;
    Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_88,local_90);
    _set_event(this,(Ref *)&local_88,(Ref *)&local_80,false);
    Ref<InputEvent>::unref((Ref<InputEvent> *)&local_88);
    Ref<InputEvent>::unref((Ref<InputEvent> *)&local_80);
    Ref<InputEventJoypadButton>::unref((Ref<InputEventJoypadButton> *)&local_90);
    goto LAB_001059ca;
  }
  if (4 < iVar4) {
    if (iVar4 == 8) {
      pcVar1 = *(code **)(*plVar6 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      StringName::StringName((StringName *)&local_80,"__axis",false);
      (*pcVar1)((Variant *)local_58,plVar6,(StringName *)&local_80,&local_78);
      iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      pcVar1 = *(code **)(*plVar6 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      StringName::StringName((StringName *)&local_80,"__value",false);
      (*pcVar1)((Variant *)local_58,plVar6,(StringName *)&local_80);
      iVar5 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      local_90 = (Ref *)0x0;
      Ref<InputEventJoypadMotion>::instantiate<>((Ref<InputEventJoypadMotion> *)&local_90);
      pRVar8 = local_90;
      InputEventJoypadMotion::set_axis(local_90,iVar4);
      InputEventJoypadMotion::set_axis_value((float)iVar5);
      OptionButton::get_selected();
      InputEvent::set_device((int)pRVar8);
      local_80 = 0;
      Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_80,pRVar8);
      local_88 = (Resource *)0x0;
      Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_88,pRVar8);
      _set_event(this,(Ref *)&local_88,(Ref *)&local_80,false);
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_88);
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_80);
      Ref<InputEventJoypadMotion>::unref((Ref<InputEventJoypadMotion> *)&local_90);
    }
    goto LAB_001059ca;
  }
  if (iVar4 != 1) {
    if (iVar4 == 2) {
      pcVar1 = *(code **)(*plVar6 + 0xb8);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      StringName::StringName((StringName *)&local_80,"__index",false);
      (*pcVar1)((Variant *)local_58,plVar6,(StringName *)&local_80);
      iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      local_90 = (Ref *)0x0;
      Ref<InputEventMouseButton>::instantiate<>((Ref<InputEventMouseButton> *)&local_90);
      pRVar8 = local_90;
      InputEventMouseButton::set_button_index(local_90,iVar4);
      BaseButton::is_pressed();
      bVar9 = SUB81(pRVar8,0);
      InputEventWithModifiers::set_alt_pressed(bVar9);
      BaseButton::is_pressed();
      InputEventWithModifiers::set_shift_pressed(bVar9);
      cVar3 = BaseButton::is_pressed();
      if (cVar3 == '\0') {
        BaseButton::is_pressed();
        InputEventWithModifiers::set_ctrl_pressed(bVar9);
        BaseButton::is_pressed();
        InputEventWithModifiers::set_meta_pressed(bVar9);
      }
      else {
        InputEventWithModifiers::set_command_or_control_autoremap(bVar9);
      }
      OptionButton::get_selected();
      InputEvent::set_device((int)pRVar8);
      local_80 = 0;
      Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_80,pRVar8);
      local_88 = (Resource *)0x0;
      Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_88,pRVar8);
      _set_event(this,(Ref *)&local_88,(Ref *)&local_80,false);
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_88);
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_80);
      Ref<InputEventMouseButton>::unref((Ref<InputEventMouseButton> *)&local_90);
    }
    goto LAB_001059ca;
  }
  pcVar1 = *(code **)(*plVar6 + 0xb8);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  StringName::StringName((StringName *)&local_80,"__keycode",false);
  (*pcVar1)((Variant *)local_58,plVar6,(StringName *)&local_80);
  iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  local_98 = (Resource *)0x0;
  this_00 = (Resource *)operator_new(0x270,"");
  Resource::Resource(this_00);
  this_00[0x254] = (Resource)0x0;
  *(undefined2 *)(this_00 + 0x244) = 0;
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x248) = 0;
  *(undefined4 *)(this_00 + 0x250) = 0;
  *(code **)this_00 = InputEventKey::set_pressed;
  *(undefined8 *)(this_00 + 600) = 0;
  *(undefined8 *)(this_00 + 0x260) = 0;
  *(undefined4 *)(this_00 + 0x268) = 0;
  this_00[0x26c] = (Resource)0x0;
  postinitialize_handler((Object *)this_00);
  local_80 = 0;
  local_88 = this_00;
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    local_88 = (Resource *)0x0;
    this_00 = (Resource *)0x0;
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_80);
  }
  else {
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_80);
    local_80 = 0;
    local_98 = this_00;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      local_98 = (Resource *)0x0;
      this_00 = (Resource *)0x0;
    }
    Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_80);
  }
  Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_88);
  InputEventKey::set_physical_keycode(this_00,iVar4);
  InputEventKey::set_keycode(this_00,iVar4);
  InputEventKey::set_key_label(this_00,iVar4);
  BaseButton::is_pressed();
  bVar9 = SUB81(this_00,0);
  InputEventWithModifiers::set_alt_pressed(bVar9);
  BaseButton::is_pressed();
  InputEventWithModifiers::set_shift_pressed(bVar9);
  cVar3 = BaseButton::is_pressed();
  if (cVar3 == '\0') {
    BaseButton::is_pressed();
    InputEventWithModifiers::set_ctrl_pressed(bVar9);
    BaseButton::is_pressed();
    InputEventWithModifiers::set_meta_pressed(bVar9);
  }
  else {
    InputEventWithModifiers::set_command_or_control_autoremap(bVar9);
  }
  pRVar8 = (Ref *)0x0;
  (**(code **)(*(long *)this_00 + 0x198))((Ref<InputEventKey> *)&local_88,this_00,0);
  local_90 = (Ref *)0x0;
  if (local_88 != (Resource *)0x0) {
    pRVar8 = (Ref *)__dynamic_cast(local_88,&Object::typeinfo,&InputEventKey::typeinfo);
    if (pRVar8 != (Ref *)0x0) {
      local_80 = 0;
      local_90 = pRVar8;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_90 = (Ref *)0x0;
        pRVar8 = (Ref *)0x0;
      }
      Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_80);
      if (local_88 == (Resource *)0x0) goto LAB_00106190;
    }
    cVar3 = RefCounted::unreference();
    pRVar2 = local_88;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler((Object *)local_88);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pRVar2 + 0x140))();
        Memory::free_static(pRVar2,false);
      }
    }
  }
LAB_00106190:
  iVar5 = OptionButton::get_selected_id();
  if (iVar5 == 2) {
    OptionButton::select((int)*(undefined8 *)(this + 0xea0));
  }
  iVar5 = OptionButton::get_selected_id();
  if (iVar5 == 0) {
    InputEventKey::set_physical_keycode(this_00,0);
LAB_001061c6:
    InputEventKey::set_keycode(this_00,iVar4);
    InputEventKey::set_key_label(this_00,0);
  }
  else {
    iVar5 = OptionButton::get_selected_id();
    if (iVar5 == 1) {
      InputEventKey::set_physical_keycode(this_00,iVar4);
      iVar4 = 0;
      goto LAB_001061c6;
    }
  }
  local_80 = 0;
  Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_80,pRVar8);
  local_88 = (Resource *)0x0;
  Ref<InputEvent>::operator=((Ref<InputEvent> *)&local_88,(Ref *)this_00);
  _set_event(this,(Ref *)&local_88,(Ref *)&local_80,false);
  Ref<InputEvent>::unref((Ref<InputEvent> *)&local_88);
  Ref<InputEvent>::unref((Ref<InputEvent> *)&local_80);
  Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_90);
  Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_98);
LAB_001059ca:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InputEventConfigurationDialog::_on_listen_input_changed(Ref<InputEvent> const&) */

void __thiscall
InputEventConfigurationDialog::_on_listen_input_changed
          (InputEventConfigurationDialog *this,Ref *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  Object *pOVar5;
  Ref *pRVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  Ref *local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  Object *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long **)param_1 == (long *)0x0) ||
      (cVar1 = (**(code **)(**(long **)param_1 + 0x1c8))(), cVar1 != '\0')) ||
     (cVar1 = InputEvent::is_pressed(), cVar1 == '\0')) goto LAB_0010645d;
  local_78 = *(Ref **)param_1;
  if ((local_78 == (Ref *)0x0) || (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
    local_78 = (Ref *)0x0;
  }
  (**(code **)(*(long *)local_78 + 0x198))((Ref<InputEventMouseButton> *)&local_50,local_78,0);
  local_70 = 0;
  if (local_50 != (Object *)0x0) {
    lVar4 = __dynamic_cast(local_50,&Object::typeinfo,&InputEvent::typeinfo,0);
    if (lVar4 != 0) {
      local_48 = 0;
      local_70 = lVar4;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_70 = 0;
      }
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_48);
      if (local_50 == (Object *)0x0) goto LAB_00106541;
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(local_50), cVar1 != '\0')) {
      (**(code **)(*(long *)local_50 + 0x140))(local_50);
      Memory::free_static(local_50,false);
    }
  }
LAB_00106541:
  local_68 = 0;
  Ref<InputEventKey>::operator=((Ref<InputEventKey> *)&local_68,local_78);
  pRVar6 = local_78;
  local_60 = 0;
  if (local_78 == (Ref *)0x0) {
LAB_00106949:
    local_58 = 0;
    local_50 = (Object *)0x0;
  }
  else {
    lVar4 = __dynamic_cast(local_78,&Object::typeinfo,&InputEventJoypadButton::typeinfo,0);
    if (lVar4 != 0) {
      local_48 = 0;
      local_60 = lVar4;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_60 = 0;
      }
      Ref<InputEventJoypadButton>::unref((Ref<InputEventJoypadButton> *)&local_48);
      pRVar6 = local_78;
      if (local_78 == (Ref *)0x0) goto LAB_00106949;
    }
    local_58 = 0;
    lVar4 = __dynamic_cast(pRVar6,&Object::typeinfo,&InputEventJoypadMotion::typeinfo,0);
    if (lVar4 != 0) {
      local_48 = 0;
      local_58 = lVar4;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_58 = 0;
      }
      Ref<InputEventJoypadMotion>::unref((Ref<InputEventJoypadMotion> *)&local_48);
      local_50 = (Object *)0x0;
      pRVar6 = local_78;
      if (local_78 == (Ref *)0x0) goto LAB_0010667a;
    }
    local_50 = (Object *)0x0;
    pOVar5 = (Object *)__dynamic_cast(pRVar6,&Object::typeinfo,&InputEventMouseButton::typeinfo,0);
    if (pOVar5 != (Object *)0x0) {
      local_48 = 0;
      local_50 = pOVar5;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_50 = (Object *)0x0;
      }
      Ref<InputEventMouseButton>::unref((Ref<InputEventMouseButton> *)&local_48);
    }
  }
LAB_0010667a:
  lVar4 = local_68;
  uVar2 = 1;
  if (((local_68 == 0) && (uVar2 = 4, local_60 == 0)) && (uVar2 = 8, local_58 == 0)) {
    if (local_50 != (Object *)0x0) {
      uVar2 = 2;
      goto LAB_0010668d;
    }
  }
  else {
LAB_0010668d:
    if ((uVar2 & *(uint *)(this + 0xe00)) != 0) {
      if (local_58 != 0) {
        fVar7 = (float)InputEventJoypadMotion::get_axis_value();
        fVar8 = _LC99;
        if (fVar7 <= 0.0) {
          fVar8 = (float)(_LC100 & -(uint)(fVar7 < 0.0));
        }
        InputEventJoypadMotion::set_axis_value(fVar8);
      }
      if (lVar4 != 0) {
        InputEventKey::set_pressed(SUB81(lVar4,0));
        iVar3 = OptionButton::get_selected_id();
        if (iVar3 == 0) {
          InputEventKey::set_physical_keycode(lVar4,0);
          InputEventKey::set_key_label(lVar4,0);
        }
        else {
          iVar3 = OptionButton::get_selected_id();
          if (iVar3 == 1) {
            InputEventKey::set_keycode(lVar4,0);
            InputEventKey::set_key_label(lVar4,0);
          }
          else {
            iVar3 = OptionButton::get_selected_id();
            if (iVar3 == 2) {
              InputEventKey::set_physical_keycode(lVar4,0);
              InputEventKey::set_keycode(lVar4,0);
            }
          }
        }
        iVar3 = OptionButton::get_selected_id();
        if (iVar3 == 0) {
          InputEventKey::set_location(lVar4,0);
        }
      }
      if (local_78 == (Ref *)0x0) {
        OptionButton::get_selected();
        iVar3 = 0;
LAB_00106784:
        InputEvent::set_device(iVar3);
        _set_event(this,(Ref *)&local_78,(Ref *)&local_70,true);
      }
      else {
        pOVar5 = (Object *)
                 __dynamic_cast(local_78,&Object::typeinfo,&InputEventWithModifiers::typeinfo,0);
        if ((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::reference(), cVar1 == '\0')) {
          pRVar6 = local_78;
          OptionButton::get_selected();
          iVar3 = (int)pRVar6;
          goto LAB_00106784;
        }
        InputEventFromWindow::set_window_id((long)pOVar5);
        pRVar6 = local_78;
        OptionButton::get_selected();
        InputEvent::set_device((int)pRVar6);
        _set_event(this,(Ref *)&local_78,(Ref *)&local_70,true);
        cVar1 = RefCounted::unreference();
        if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
      Ref<InputEventMouseButton>::unref((Ref<InputEventMouseButton> *)&local_50);
      Ref<InputEventJoypadMotion>::unref((Ref<InputEventJoypadMotion> *)&local_58);
      Ref<InputEventJoypadButton>::unref((Ref<InputEventJoypadButton> *)&local_60);
      Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_70);
      Ref<InputEvent>::unref((Ref<InputEvent> *)&local_78);
      goto LAB_0010645d;
    }
  }
  Ref<InputEventMouseButton>::unref((Ref<InputEventMouseButton> *)&local_50);
  Ref<InputEventJoypadMotion>::unref((Ref<InputEventJoypadMotion> *)&local_58);
  Ref<InputEventJoypadButton>::unref((Ref<InputEventJoypadButton> *)&local_60);
  Ref<InputEventKey>::unref((Ref<InputEventKey> *)&local_68);
  Ref<InputEvent>::unref((Ref<InputEvent> *)&local_70);
  Ref<InputEvent>::unref((Ref<InputEvent> *)&local_78);
LAB_0010645d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
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
  
  return (uint)CONCAT71(0x110c,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110c,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110c,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110c,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110c,in_RSI == &Node::get_class_ptr_static()::ptr) |
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



/* InputEventConfigurationDialog::_property_can_revertv(StringName const&) const */

undefined8 InputEventConfigurationDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* InputEventConfigurationDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8
InputEventConfigurationDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, bool,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<AcceptDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AcceptDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AcceptDialog,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,Ref<InputEvent>const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, bool>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool>::get_argument_count
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, bool,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool,int>::get_argument_count
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, int>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,int>::get_argument_count
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void>::get_argument_count
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AcceptDialog, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AcceptDialog,void,bool>::get_argument_count
          (CallableCustomMethodPointer<AcceptDialog,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,Ref<InputEvent>const&>::
get_argument_count(CallableCustomMethodPointer<InputEventConfigurationDialog,void,Ref<InputEvent>const&>
                   *this,bool *param_1)

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



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,Ref<InputEvent>const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AcceptDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AcceptDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AcceptDialog,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, bool,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110260;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110260;
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



/* InputEventConfigurationDialog::_getv(StringName const&, Variant&) const */

undefined8 InputEventConfigurationDialog::_getv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__set_00114008 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* InputEventConfigurationDialog::_setv(StringName const&, Variant const&) */

undefined8 InputEventConfigurationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00114008 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00114010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00114010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00114018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00114018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, Ref<InputEvent>
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,Ref<InputEvent>const&>
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
      goto LAB_001070ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001070ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001070ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,int>::get_object
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,int> *this)

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
      goto LAB_001071ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001071ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001071ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void>::get_object
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void> *this)

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
      goto LAB_001072ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001072ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001072ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AcceptDialog, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AcceptDialog,void,bool>::get_object
          (CallableCustomMethodPointer<AcceptDialog,void,bool> *this)

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
      goto LAB_001073ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001073ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001073ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, String const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,String_const&>::get_object
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,String_const&> *this)

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
      goto LAB_001074ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001074ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001074ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool>::get_object
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool> *this)

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
      goto LAB_001075ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001075ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001075ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, bool, int>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool,int>::get_object
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool,int> *this)

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
      goto LAB_001076ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001076ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001076ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* InputEventConfigurationDialog::_validate_propertyv(PropertyInfo&) const */

void InputEventConfigurationDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00114020 == Viewport::_validate_property) {
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
  if ((code *)PTR__validate_property_00114020 == Viewport::_validate_property) {
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
  if ((code *)PTR__validate_property_00114028 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00114028 == Control::_validate_property) {
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
    if ((code *)PTR__set_00114030 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00114030 != CanvasItem::_set) {
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
    if ((code *)PTR__notification_00114038 != Window::_notification) {
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
  if ((code *)PTR__notification_00114038 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00107b78) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00114040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107be8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00114040 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x110c,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110c,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110c,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110c,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x110c,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110c,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110c,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110c,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110c,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* InputEventConfigurationDialog::is_class_ptr(void*) const */

uint InputEventConfigurationDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x110c,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110c,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110c,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110c,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x110c,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = __cxa_guard_acquire;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107da0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107da0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = __cxa_guard_acquire;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107e00;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107e00:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = __cxa_guard_acquire;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107e60;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107e60:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = __cxa_guard_acquire;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107ed0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107ed0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
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
LAB_00107f33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107f33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00107f9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00107f9e:
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
LAB_00108023:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108023;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010808e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010808e:
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
LAB_00108113:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108113;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_0010817e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_0010817e:
  return &_get_class_namev()::_class_name_static;
}



/* InputEventConfigurationDialog::_get_class_namev() const */

undefined8 * InputEventConfigurationDialog::_get_class_namev(void)

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
LAB_00108213:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108213;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "InputEventConfigurationDialog");
      goto LAB_0010827e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"InputEventConfigurationDialog");
LAB_0010827e:
  return &_get_class_namev()::_class_name_static;
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



/* WARNING: Removing unreachable block (ram,0x00108470) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00114048 != Container::_notification) {
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
  if ((code *)PTR__notification_00114048 == Container::_notification) {
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



/* void Ref<InputEventMouseButton>::instantiate<>() */

void __thiscall Ref<InputEventMouseButton>::instantiate<>(Ref<InputEventMouseButton> *this)

{
  char cVar1;
  Resource *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (Resource *)operator_new(0x280,"");
  Resource::Resource(this_00);
  this_00[0x254] = (Resource)0x0;
  *(undefined2 *)(this_00 + 0x244) = 0;
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x248) = 0;
  *(undefined4 *)(this_00 + 0x250) = 0;
  *(code **)this_00 = RefCounted::init_ref;
  *(undefined8 *)(this_00 + 600) = 0;
  *(undefined8 *)(this_00 + 0x260) = 0;
  *(undefined8 *)(this_00 + 0x268) = 0;
  *(undefined8 *)(this_00 + 0x270) = 0x3f800000;
  this_00[0x278] = (Resource)0x0;
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
    this_00 = (Resource *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (Resource *)pOVar3) goto LAB_00108605;
    *(Resource **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00108605;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_00108605:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<InputEventJoypadMotion>::instantiate<>() */

void __thiscall Ref<InputEventJoypadMotion>::instantiate<>(Ref<InputEventJoypadMotion> *this)

{
  char cVar1;
  Resource *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (Resource *)operator_new(0x250,"");
  Resource::Resource(this_00);
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined2 *)(this_00 + 0x244) = 0;
  *(code **)this_00 = CallableCustomMethodPointerBase::_setup;
  *(undefined8 *)(this_00 + 0x248) = 0;
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
    this_00 = (Resource *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (Resource *)pOVar3) goto LAB_0010875d;
    *(Resource **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010875d;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_0010875d:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<AcceptDialog, bool>(AcceptDialog*, char const*,
   void (AcceptDialog::*)(bool)) */

AcceptDialog *
create_custom_callable_function_pointer<AcceptDialog,bool>
          (AcceptDialog *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC7;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001107e0;
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



/* Callable
   create_custom_callable_function_pointer<InputEventConfigurationDialog>(InputEventConfigurationDialog*,
   char const*, void (InputEventConfigurationDialog::*)()) */

InputEventConfigurationDialog *
create_custom_callable_function_pointer<InputEventConfigurationDialog>
          (InputEventConfigurationDialog *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC7;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00110900;
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



/* Callable create_custom_callable_function_pointer<InputEventConfigurationDialog,
   int>(InputEventConfigurationDialog*, char const*, void (InputEventConfigurationDialog::*)(int))
    */

InputEventConfigurationDialog *
create_custom_callable_function_pointer<InputEventConfigurationDialog,int>
          (InputEventConfigurationDialog *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC7;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00110990;
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



/* WARNING: Removing unreachable block (ram,0x00108ce8) */
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



/* InputEventConfigurationDialog::~InputEventConfigurationDialog() */

void __thiscall
InputEventConfigurationDialog::~InputEventConfigurationDialog(InputEventConfigurationDialog *this)

{
  Object *pOVar1;
  char cVar2;
  CowData<char32_t> *this_00;
  InputEventConfigurationDialog *this_01;
  InputEventConfigurationDialog *pIVar3;
  
  this_00 = (CowData<char32_t> *)(this + 0xe58);
  *(undefined ***)this = &PTR__initialize_classv_001104d8;
  this_01 = this + 0xe70;
  do {
    pIVar3 = (InputEventConfigurationDialog *)((CowData<char32_t> *)this_01 + -8);
    CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
    this_01 = pIVar3;
  } while (pIVar3 != this + 0xe50);
  do {
    this_00 = this_00 + -8;
    CowData<char32_t>::_unref(this_00);
  } while (this_00 != (CowData<char32_t> *)(this + 0xe38));
  if (*(long *)(this + 0xde0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xde0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xdd8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdd8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xdd0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdd0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xdc8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdc8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xdc0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdc0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xdb8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdb8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00110260;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
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



/* InputEventConfigurationDialog::get_class() const */

void InputEventConfigurationDialog::get_class(void)

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



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void>::call
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void> *this,Variant **param_1,
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
      goto LAB_0010961f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010961f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001095f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001096d0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010961f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC18,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001096d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AcceptDialog, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AcceptDialog,void,bool>::call
          (CallableCustomMethodPointer<AcceptDialog,void,bool> *this,Variant **param_1,int param_2,
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
      goto LAB_00109899;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00109899;
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
        uVar3 = _LC19;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0010994a;
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
LAB_00109899:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC18,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010994a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, bool>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool>::call
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_00109b09;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00109b09;
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
        uVar3 = _LC19;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_00109bba;
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
LAB_00109b09:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC18,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109bba:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, bool, int>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool,int>::call
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_00109dae;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00109dae;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC20;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC19;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8,iVar5);
          return;
        }
        goto LAB_00109e5f;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 2;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 2;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00109dae:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC18,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00109e5f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,int>::call
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010a028;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010a028;
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
        uVar3 = _LC21;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109fd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010a0d9;
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
LAB_0010a028:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC18,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010a0d9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,String_const&>::call
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,String_const&> *this,
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
            uVar3 = _LC22;
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
  String::operator+((String *)local_38,(String *)local_48);
  _err_print_error(&_LC18,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
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



/* InputEventConfigurationDialog::~InputEventConfigurationDialog() */

void __thiscall
InputEventConfigurationDialog::~InputEventConfigurationDialog(InputEventConfigurationDialog *this)

{
  Object *pOVar1;
  char cVar2;
  CowData<char32_t> *this_00;
  CowData<char32_t> *pCVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_001104d8;
  pCVar3 = (CowData<char32_t> *)(this + 0xe70);
  do {
    this_00 = pCVar3 + -8;
    CowData<char32_t>::_unref(pCVar3);
    pCVar3 = this_00;
  } while (this_00 != (CowData<char32_t> *)(this + 0xe50));
  do {
    pCVar3 = this_00 + -8;
    CowData<char32_t>::_unref(this_00);
    this_00 = pCVar3;
  } while (pCVar3 != (CowData<char32_t> *)(this + 0xe30));
  if (*(long *)(this + 0xde0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xde0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xdd8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdd8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xdd0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdd0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xdc8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdc8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xdc0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdc0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xdb8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdb8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00110260;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xeb8);
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
              if ((code *)PTR__bind_methods_00114060 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00114050 !=
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
      if ((code *)PTR__bind_methods_00114058 != Container::_bind_methods) {
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
            if ((code *)PTR__bind_methods_00114060 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_compatibility_methods_00114068 != Object::_bind_compatibility_methods) {
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
    if ((code *)PTR__bind_methods_00114070 != AcceptDialog::_bind_methods) {
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



/* InputEventConfigurationDialog::_initialize_classv() */

void InputEventConfigurationDialog::_initialize_classv(void)

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
              if ((code *)PTR__bind_methods_00114060 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_00114068 != Object::_bind_compatibility_methods)
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
      if ((code *)PTR__bind_methods_00114070 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "InputEventConfigurationDialog";
    local_70 = 0;
    local_50 = 0x1d;
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
              if ((code *)PTR__bind_methods_00114060 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00114050 !=
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
      if ((code *)PTR__bind_methods_00114058 != Container::_bind_methods) {
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
    if (cVar5 != '\0') goto LAB_0010bd8b;
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
      if (cVar5 != '\0') goto LAB_0010bd8b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010bd8b:
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
    if (cVar5 != '\0') goto LAB_0010bf8b;
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
      if (cVar5 != '\0') goto LAB_0010bf8b;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c08e;
    }
  }
LAB_0010bf8b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c08e:
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
    if (cVar5 != '\0') goto LAB_0010c19b;
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
      if (cVar5 != '\0') goto LAB_0010c19b;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c29e;
    }
  }
LAB_0010c19b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c29e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* InputEventConfigurationDialog::is_class(String const&) const */

undefined8 __thiscall
InputEventConfigurationDialog::is_class(InputEventConfigurationDialog *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010c3ab;
  }
  cVar4 = String::operator==(param_1,"InputEventConfigurationDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010c3ab:
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
    if (cVar5 != '\0') goto LAB_0010c4fb;
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
      if (cVar5 != '\0') goto LAB_0010c4fb;
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
        if (cVar5 != '\0') goto LAB_0010c4fb;
      }
      cVar5 = String::operator==(param_1,"CanvasItem");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Node::is_class((Node *)this,param_1);
          return uVar6;
        }
        goto LAB_0010c69e;
      }
    }
  }
LAB_0010c4fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c69e:
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
        if (pvVar3 == (void *)0x0) goto LAB_0010c79f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010c79f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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
    if (cVar5 != '\0') goto LAB_0010c8fb;
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
      if (cVar5 != '\0') goto LAB_0010c8fb;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010c9fe;
    }
  }
LAB_0010c8fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c9fe:
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
    if (cVar5 != '\0') goto LAB_0010cb0b;
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
      if (cVar5 != '\0') goto LAB_0010cb0b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0010cc0e;
    }
  }
LAB_0010cb0b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010cc0e:
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
  local_78 = &_LC24;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC24;
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
      goto LAB_0010cd7c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cd7c:
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
      goto LAB_0010cfe1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010cfe1:
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
  if ((code *)PTR__get_property_list_00114078 != Object::_get_property_list) {
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
      goto LAB_0010d541;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d541:
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
      goto LAB_0010d7f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010d7f1:
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



/* InputEventConfigurationDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
InputEventConfigurationDialog::_get_property_listv
          (InputEventConfigurationDialog *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  undefined8 local_98;
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
  local_78 = "InputEventConfigurationDialog";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "InputEventConfigurationDialog";
  local_98 = 0;
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
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
      goto LAB_0010daa1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010daa1:
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
  StringName::StringName((StringName *)&local_78,"InputEventConfigurationDialog",false);
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
  if ((code *)PTR__get_property_list_00114080 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_00114088 != CanvasItem::_get_property_list) {
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
  undefined8 local_98;
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
      goto LAB_0010e2b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e2b1:
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
      goto LAB_0010e561;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e561:
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
  undefined8 local_98;
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
      goto LAB_0010e811;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e811:
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
  undefined8 local_98;
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
      goto LAB_0010eac1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010eac1:
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



/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, Ref<InputEvent>
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,Ref<InputEvent>const&>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  ulong local_40;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = local_38 >> 8;
      local_38 = uVar3 << 8;
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_38 = uVar3 << 8;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar9 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (1 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010ed3e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010ed3e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar9 & 1) != 0) {
          pcVar9 = *(code **)(pcVar9 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        uVar4 = _LC32;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_40 = 0;
        uVar6 = Variant::get_validated_object();
        uVar3 = local_40;
        if (uVar6 != local_40) {
          if (uVar6 == 0) {
            if (local_40 != 0) {
              local_40 = 0;
              local_38 = uVar3;
              goto LAB_0010ee12;
            }
          }
          else {
            uVar6 = __dynamic_cast(uVar6,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (uVar3 != uVar6) {
              local_38 = uVar3;
              local_40 = uVar6;
              if ((uVar6 != 0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_40 = 0;
              }
LAB_0010ee12:
              Ref<InputEvent>::unref((Ref<InputEvent> *)&local_38);
            }
          }
        }
        (*pcVar9)((long *)(lVar1 + lVar2),(Ref<InputEvent> *)&local_40);
        Ref<InputEvent>::unref((Ref<InputEvent> *)&local_40);
        goto LAB_0010ed3e;
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
  _err_print_error(&_LC18,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Ref<InputEvent> *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010ed3e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Ref<InputEventKey>::unref() */

void __thiscall Ref<InputEventKey>::unref(Ref<InputEventKey> *this)

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



/* Ref<InputEventMouseButton>::unref() */

void __thiscall Ref<InputEventMouseButton>::unref(Ref<InputEventMouseButton> *this)

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



/* Ref<InputEventJoypadButton>::unref() */

void __thiscall Ref<InputEventJoypadButton>::unref(Ref<InputEventJoypadButton> *this)

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



/* Ref<InputEventJoypadMotion>::unref() */

void __thiscall Ref<InputEventJoypadMotion>::unref(Ref<InputEventJoypadMotion> *this)

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



/* InputEventConfigurationDialog::_notificationv(int, bool) */

void __thiscall
InputEventConfigurationDialog::_notificationv
          (InputEventConfigurationDialog *this,int param_1,bool param_2)

{
  if (param_2) {
    if (param_1 == 0x1e) {
      EventListenerLineEdit::grab_focus();
    }
    else if (param_1 == 0x20) {
      _notification((int)this);
    }
    ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,true);
    return;
  }
  ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,false);
  if (param_1 != 0x1e) {
    if (param_1 != 0x20) {
      return;
    }
    _notification((int)this);
    return;
  }
  EventListenerLineEdit::grab_focus();
  return;
}



/* InputEventConfigurationDialog::_set_event(Ref<InputEvent> const&, Ref<InputEvent> const&, bool)
    */

void InputEventConfigurationDialog::_GLOBAL__sub_I__set_event(void)

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
/* InputEventConfigurationDialog::~InputEventConfigurationDialog() */

void __thiscall
InputEventConfigurationDialog::~InputEventConfigurationDialog(InputEventConfigurationDialog *this)

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
/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,Ref<InputEvent>const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AcceptDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AcceptDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AcceptDialog,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<InputEventConfigurationDialog, void>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<InputEventConfigurationDialog, void,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<InputEventConfigurationDialog, void, bool,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<InputEventConfigurationDialog, void,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<InputEventConfigurationDialog,void,bool> *this)

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



