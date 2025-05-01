
/* LocalVector<TreeItem*, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */

void LocalVector<TreeItem*,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorHelpSearch::_confirmed() */

void __thiscall EditorHelpSearch::_confirmed(EditorHelpSearch *this)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  Variant *local_98 [2];
  int local_88 [8];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = Tree::get_selected();
  if (lVar2 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    EditorMainScreen::select((int)*(undefined8 *)(EditorNode::singleton + 0x990));
    TreeItem::get_metadata((int)(Variant *)local_88);
    if (_confirmed()::{lambda()#1}::operator()()::sname == '\0') {
      iVar1 = __cxa_guard_acquire(&_confirmed()::{lambda()#1}::operator()()::sname);
      if (iVar1 != 0) {
        _scs_create((char *)&_confirmed()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_confirmed()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_confirmed()::{lambda()#1}::operator()()::sname);
      }
    }
    Variant::Variant((Variant *)local_68,(Variant *)local_88);
    local_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_98[0] = (Variant *)local_68;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_confirmed()::{lambda()#1}::operator()()::sname,local_98,1);
    if (Variant::needs_deinit[(int)local_50] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Window::hide();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::_search_box_gui_input(Ref<InputEvent> const&) */

void __thiscall EditorHelpSearch::_search_box_gui_input(EditorHelpSearch *this,Ref *param_1)

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
          goto LAB_001004c8;
        }
        else {
          cVar3 = StringName::configured;
          if (StringName::configured == '\0') goto LAB_001002d7;
LAB_001004c8:
          if ((local_50 == 0) || (StringName::unref(), StringName::configured != '\0'))
          goto LAB_0010039e;
        }
      }
      else {
        cVar3 = StringName::configured;
        if (StringName::configured == '\0') goto LAB_001002d7;
LAB_0010039e:
        if (local_58 != 0) {
          StringName::unref();
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
      }
      if (cVar3 != '\0') goto LAB_001002d7;
    }
    else {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
LAB_001002d7:
      plVar1 = *(long **)(this + 0xdd8);
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
      goto LAB_00100521;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100521:
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



/* EditorHelpSearch::_native_action_cb(String const&) */

void __thiscall EditorHelpSearch::_native_action_cb(EditorHelpSearch *this,String *param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)param_1);
  }
  if ((_native_action_cb(String_const&)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&_native_action_cb(String_const&)::{lambda()#1}::operator()()::
                                   sname), iVar4 != 0)) {
    _scs_create((char *)&_native_action_cb(String_const&)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_native_action_cb(String_const&)::{lambda()#1}::operator()()::sname,&__dso_handle)
    ;
    __cxa_guard_release(&_native_action_cb(String_const&)::{lambda()#1}::operator()()::sname);
  }
  Variant::Variant((Variant *)local_68,(String *)&local_80);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_native_action_cb(String_const&)::{lambda()#1}::operator()()::sname,local_78,1);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar2 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar2 != '\0') {
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorHelpSearch::_all_terms_in_name(Vector<String> const&, String const&) const */

undefined8 __thiscall
EditorHelpSearch::_all_terms_in_name(EditorHelpSearch *this,Vector *param_1,String *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return 1;
  }
  lVar3 = 0;
  while( true ) {
    if (*(long *)(lVar2 + -8) <= lVar3) {
      return 1;
    }
    iVar1 = String::findn(param_2,(int)lVar2 + (int)lVar3 * 8);
    if (iVar1 == -1) break;
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = lVar3 + 1;
    if (lVar2 == 0) {
      return 1;
    }
  }
  return 0;
}



/* EditorHelpSearch::TreeCache::clear() */

void __thiscall EditorHelpSearch::TreeCache::clear(TreeCache *this)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  Object *pOVar4;
  void *pvVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  
  for (puVar3 = *(undefined8 **)(this + 0x18); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)*puVar3) {
    pOVar4 = (Object *)puVar3[3];
    cVar7 = predelete_handler(pOVar4);
    if (cVar7 != '\0') {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar2 != 0) {
      lVar8 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar8) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar8) = 0;
          pvVar5 = *(void **)(*(long *)(this + 8) + lVar8 * 2);
          if (*(long *)((long)pvVar5 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar6 = *(long *)((long)pvVar5 + 0x10);
              *(undefined8 *)((long)pvVar5 + 0x10) = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          Memory::free_static(pvVar5,false);
          *(undefined8 *)(*(long *)(this + 8) + lVar8 * 2) = 0;
        }
        lVar8 = lVar8 + 4;
      } while ((ulong)uVar2 << 2 != lVar8);
    }
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  }
  return;
}



/* EditorHelpSearch::Runner::_is_class_disabled_by_feature_profile(StringName const&) */

undefined4 __thiscall
EditorHelpSearch::Runner::_is_class_disabled_by_feature_profile(Runner *this,StringName *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  StringName *local_38;
  long local_30;
  long local_28;
  long local_20;
  
  uVar2 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  EditorFeatureProfileManager::get_current_profile();
  if (local_38 != (StringName *)0x0) {
    StringName::StringName((StringName *)&local_30,param_1);
    if (local_30 != 0) {
LAB_00100a47:
      do {
        cVar1 = ClassDB::class_exists((StringName *)&local_30);
        if (cVar1 == '\0') break;
        uVar2 = EditorFeatureProfile::is_class_disabled(local_38);
        if ((char)uVar2 != '\0') goto LAB_00100a9e;
        ClassDB::get_parent_class((StringName *)&local_28);
        if (local_30 == local_28) {
          if (StringName::configured != '\0') {
            if (local_30 == 0) break;
            StringName::unref();
            if (local_30 == 0) break;
            goto LAB_00100a47;
          }
        }
        else {
          StringName::unref();
          local_30 = local_28;
        }
      } while (local_30 != 0);
      uVar2 = 0;
LAB_00100a9e:
      if ((StringName::configured != '\0') && (local_30 != 0)) {
        StringName::unref();
      }
    }
    if (local_38 != (StringName *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler((Object *)local_38);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)local_38 + 0x140))(local_38);
          Memory::free_static(local_38,false);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::_phase_member_items_init() */

undefined8 __thiscall EditorHelpSearch::Runner::_phase_member_items_init(Runner *this)

{
  *(undefined8 *)(this + 0x210) = *(undefined8 *)(this + 0x1f8);
  return 1;
}



/* EditorHelpSearch::Runner::_phase_select_match() */

undefined8 __thiscall EditorHelpSearch::Runner::_phase_select_match(Runner *this)

{
  if (*(long *)(this + 0x260) != 0) {
    TreeItem::select((int)*(long *)(this + 0x260));
    return 1;
  }
  return 1;
}



/* EditorHelpSearch::Runner::_all_terms_in_name(String const&) const */

undefined8 __thiscall EditorHelpSearch::Runner::_all_terms_in_name(Runner *this,String *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar1 = *(long *)(this + 0x1a8);
  if (lVar1 == 0) {
    return 1;
  }
  lVar2 = 0;
  while( true ) {
    if (*(long *)(lVar1 + -8) <= lVar2) {
      return 1;
    }
    iVar3 = (int)lVar1 + (int)lVar2 * 8;
    if (((byte)this[0x1b3] & 0x20) == 0) {
      iVar3 = String::findn(param_1,iVar3);
    }
    else {
      iVar3 = String::find(param_1,iVar3);
    }
    if (iVar3 == -1) break;
    lVar1 = *(long *)(this + 0x1a8);
    lVar2 = lVar2 + 1;
    if (lVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



/* EditorHelpSearch::Runner::_match_string(String const&, String const&) const */

bool __thiscall
EditorHelpSearch::Runner::_match_string(Runner *this,String *param_1,String *param_2)

{
  int iVar1;
  
  if (((byte)this[0x1b3] & 0x20) != 0) {
    iVar1 = String::find(param_2,(int)param_1);
    return iVar1 != -1;
  }
  iVar1 = String::findn(param_2,(int)param_1);
  return iVar1 != -1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorHelpSearch::Runner::_match_item(TreeItem*, String const&, bool) */

void __thiscall
EditorHelpSearch::Runner::_match_item(Runner *this,TreeItem *param_1,String *param_2,bool param_3)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (((*(long *)param_2 != 0) && (iVar2 = (int)*(undefined8 *)(*(long *)param_2 + -8), iVar2 != 0))
     && (iVar2 = iVar2 + -1, iVar2 != 0)) {
    fVar3 = _LC29 / (float)iVar2;
    iVar2 = String::findn(param_2,(int)this + 0x198);
    fVar5 = _LC27;
    if ((-1 < iVar2) && (fVar4 = (float)(iVar2 * 3) * fVar3, fVar5 = _LC26, fVar4 <= _LC29)) {
      fVar5 = _LC29 - fVar4 * _LC26;
    }
    lVar1 = *(long *)(this + 0x198);
    if (lVar1 == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = 0.0;
      iVar2 = (int)*(undefined8 *)(lVar1 + -8);
      if (iVar2 != 0) {
        fVar4 = (float)(iVar2 + -1);
      }
    }
    fVar5 = (fVar3 * fVar4 * __LC30 + _LC31) * fVar5;
    if (param_3) {
      fVar5 = fVar5 * _LC31;
    }
    fVar3 = *(float *)(this + 0x268);
    if (((fVar3 == 0.0) || (fVar3 < fVar5)) ||
       ((lVar1 != 0 && ((fVar3 == fVar5 && (*(int *)(lVar1 + -8) == 2)))))) {
      *(TreeItem **)(this + 0x260) = param_1;
      *(float *)(this + 0x268) = fVar5;
    }
    return;
  }
  return;
}



/* EditorHelpSearch::Runner::Runner(Control*, Tree*, EditorHelpSearch::TreeCache*, String const&,
   int) */

void __thiscall
EditorHelpSearch::Runner::Runner
          (Runner *this,Control *param_1,Tree *param_2,TreeCache *param_3,String *param_4,
          int param_5)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  undefined8 in_XMM1_Qa;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011ef78;
  *(Control **)(this + 0x180) = param_1;
  *(Tree **)(this + 0x188) = param_2;
  *(TreeCache **)(this + 400) = param_3;
  if ((param_5 & 0x20000000U) == 0) {
    String::to_lower();
    param_1 = *(Control **)(this + 0x180);
  }
  else {
    *(undefined8 *)(this + 0x198) = 0;
    if (*(long *)param_4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x198),(CowData *)param_4);
      param_1 = *(Control **)(this + 0x180);
    }
  }
  *(int *)(this + 0x1b0) = param_5;
  *(undefined8 *)(this + 0x1a8) = 0;
  if (Runner(Control*,Tree*,EditorHelpSearch::TreeCache*,String_const&,int)::{lambda()#1}::
      operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&Runner(Control*,Tree*,EditorHelpSearch::TreeCache*,String_const&,int)
                                 ::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&Runner(Control*,Tree*,EditorHelpSearch::TreeCache*,String_const&,int)::
                           {lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &Runner(Control*,Tree*,EditorHelpSearch::TreeCache*,String_const&,int)::
                    {lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&Runner(Control*,Tree*,EditorHelpSearch::TreeCache*,String_const&,int)::
                           {lambda()#1}::operator()()::sname);
    }
  }
  uVar4 = Control::get_theme_color
                    ((StringName *)param_1,
                     (StringName *)
                     &Runner(Control*,Tree*,EditorHelpSearch::TreeCache*,String_const&,int)::
                      {lambda()#1}::operator()()::sname);
  uVar2 = _LC33;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x208) = uVar2;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 600) = uVar2;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x1b4) = uVar4;
  *(undefined8 *)(this + 0x1bc) = in_XMM1_Qa;
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x220) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x238) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x248) = (undefined1  [16])0x0;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::EditorHelpSearch() */

void __thiscall EditorHelpSearch::EditorHelpSearch(EditorHelpSearch *this)

{
  Vector2 *pVVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  String *pSVar5;
  long lVar6;
  BoxContainer *this_00;
  BoxContainer *this_01;
  LineEdit *this_02;
  CallableCustom *pCVar7;
  Button *pBVar8;
  OptionButton *this_03;
  Tree *this_04;
  int iVar9;
  long in_FS_OFFSET;
  float fVar10;
  undefined8 local_b0;
  long local_a8 [2];
  char *local_98;
  undefined8 local_90;
  Variant *local_88;
  undefined8 local_78 [3];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined8 *)(this + 0xdd8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011ed00;
  this[0xde0] = (EditorHelpSearch)0x0;
  *(undefined8 *)(this + 0xde8) = 0;
  *(undefined4 *)(this + 0xdf0) = 0;
  *(undefined8 *)(this + 0xdf8) = 0;
  *(undefined8 *)(this + 0xe28) = 2;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe18) = (undefined1  [16])0x0;
  AcceptDialog::set_hide_on_ok(SUB81(this,0));
  Window::set_clamp_to_embedder(SUB81(this,0));
  local_98 = "";
  local_a8[0] = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Search Help";
  local_b0 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
  local_98 = "";
  local_a8[0] = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Open";
  local_b0 = 0;
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  AcceptDialog::set_ok_button_text(this,(String *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0011e710;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,false);
  this_01[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_0011e398;
  postinitialize_handler((Object *)this_01);
  Node::add_child(this_00,this_01,0,0);
  this_02 = (LineEdit *)operator_new(0xbb0,"");
  local_98 = (char *)0x0;
  LineEdit::LineEdit(this_02,(String *)&local_98);
  postinitialize_handler((Object *)this_02);
  *(LineEdit **)(this + 0xdb8) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  pVVar1 = *(Vector2 **)(this + 0xdb8);
  fVar10 = (float)EditorScale::get_scale();
  local_78[0] = CONCAT44(fVar10 * _LC44._4_4_,fVar10 * (float)_LC44);
  Control::set_custom_minimum_size(pVVar1);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdb8),3);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xdb8),0));
  plVar2 = *(long **)(this + 0xdb8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined **)(pCVar7 + 0x20) = &_LC35;
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar7 = &PTR_hash_0011f318;
  *(undefined8 *)(pCVar7 + 0x30) = uVar4;
  *(code **)(pCVar7 + 0x38) = _search_box_gui_input;
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  *(EditorHelpSearch **)(pCVar7 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "EditorHelpSearch::_search_box_gui_input";
  Callable::Callable((Callable *)&local_98,pCVar7);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x28,(String *)&local_98,0);
  Callable::~Callable((Callable *)&local_98);
  plVar2 = *(long **)(this + 0xdb8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorHelpSearch,String_const&>
            ((EditorHelpSearch *)&local_98,(char *)this,
             (_func_void_String_ptr *)"&EditorHelpSearch::_search_box_text_changed");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x270,(String *)&local_98,0);
  Callable::~Callable((Callable *)&local_98);
  AcceptDialog::register_text_enter((LineEdit *)this);
  Node::add_child(this_01,*(undefined8 *)(this + 0xdb8),0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_98 = (char *)0x0;
  Button::Button(pBVar8,(String *)&local_98);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xdc0) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Control::set_theme_type_variation(*(StringName **)(this + 0xdc0));
  local_98 = "";
  local_a8[0] = 0;
  pSVar5 = *(String **)(this + 0xdc0);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Case Sensitive";
  local_b0 = 0;
  local_90 = 0xe;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  Control::set_tooltip_text(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar2 = *(long **)(this + 0xdc0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorHelpSearch>
            ((EditorHelpSearch *)&local_98,(char *)this,
             (_func_void *)"&EditorHelpSearch::_update_results");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String *)&local_98,0);
  Callable::~Callable((Callable *)&local_98);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xdc0),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xdc0),0);
  Node::add_child(this_01,*(undefined8 *)(this + 0xdc0),0,0);
  pBVar8 = (Button *)operator_new(0xc10,"");
  local_98 = (char *)0x0;
  Button::Button(pBVar8,(String *)&local_98);
  postinitialize_handler((Object *)pBVar8);
  *(Button **)(this + 0xdc8) = pBVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Control::set_theme_type_variation(*(StringName **)(this + 0xdc8));
  local_98 = "";
  local_a8[0] = 0;
  pSVar5 = *(String **)(this + 0xdc8);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Show Hierarchy";
  local_b0 = 0;
  local_90 = 0xe;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  Control::set_tooltip_text(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar2 = *(long **)(this + 0xdc8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorHelpSearch>
            ((EditorHelpSearch *)&local_98,(char *)this,
             (_func_void *)"&EditorHelpSearch::_update_results");
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String *)&local_98,0);
  Callable::~Callable((Callable *)&local_98);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xdc8),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xdc8),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xdc8),0);
  Node::add_child(this_01,*(undefined8 *)(this + 0xdc8),0,0);
  this_03 = (OptionButton *)operator_new(0xd00,"");
  local_98 = (char *)0x0;
  OptionButton::OptionButton(this_03,(String *)&local_98);
  postinitialize_handler((Object *)this_03);
  *(OptionButton **)(this + 0xdd0) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  pVVar1 = *(Vector2 **)(this + 0xdd0);
  fVar10 = (float)EditorScale::get_scale();
  local_78[0] = CONCAT44(fVar10 * _LC44._4_4_,fVar10 * (float)_LC44);
  Control::set_custom_minimum_size(pVVar1);
  Control::set_stretch_ratio(0.0);
  local_98 = "";
  local_a8[0] = 0;
  pSVar5 = *(String **)(this + 0xdd0);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Display All";
  local_b0 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  iVar9 = (int)(String *)&local_98;
  OptionButton::add_item(pSVar5,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_98 = "";
  local_a8[0] = 0;
  pSVar5 = *(String **)(this + 0xdd0);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  OptionButton::add_separator(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_98 = "";
  local_a8[0] = 0;
  pSVar5 = *(String **)(this + 0xdd0);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Classes Only";
  local_b0 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  OptionButton::add_item(pSVar5,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_98 = "";
  local_a8[0] = 0;
  pSVar5 = *(String **)(this + 0xdd0);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Constructors Only";
  local_b0 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  OptionButton::add_item(pSVar5,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_98 = "";
  local_a8[0] = 0;
  pSVar5 = *(String **)(this + 0xdd0);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Methods Only";
  local_b0 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  OptionButton::add_item(pSVar5,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_98 = "";
  local_a8[0] = 0;
  pSVar5 = *(String **)(this + 0xdd0);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Operators Only";
  local_b0 = 0;
  local_90 = 0xe;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  OptionButton::add_item(pSVar5,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_98 = "";
  local_a8[0] = 0;
  pSVar5 = *(String **)(this + 0xdd0);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Signals Only";
  local_b0 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  OptionButton::add_item(pSVar5,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_98 = "";
  local_a8[0] = 0;
  pSVar5 = *(String **)(this + 0xdd0);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Annotations Only";
  local_b0 = 0;
  local_90 = 0x10;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  OptionButton::add_item(pSVar5,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_98 = "";
  local_a8[0] = 0;
  pSVar5 = *(String **)(this + 0xdd0);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Constants Only";
  local_b0 = 0;
  local_90 = 0xe;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  OptionButton::add_item(pSVar5,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_98 = "";
  local_a8[0] = 0;
  pSVar5 = *(String **)(this + 0xdd0);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Properties Only";
  local_b0 = 0;
  local_90 = 0xf;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  OptionButton::add_item(pSVar5,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  local_98 = "";
  local_a8[0] = 0;
  pSVar5 = *(String **)(this + 0xdd0);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Theme Properties Only";
  local_b0 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  OptionButton::add_item(pSVar5,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  plVar2 = *(long **)(this + 0xdd0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined **)(pCVar7 + 0x20) = &_LC35;
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(code **)(pCVar7 + 0x38) = _filter_combo_item_selected;
  *(undefined8 *)(pCVar7 + 0x30) = uVar4;
  *(undefined ***)pCVar7 = &PTR_hash_0011f3a8;
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  *(EditorHelpSearch **)(pCVar7 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "EditorHelpSearch::_filter_combo_item_selected";
  Callable::Callable((Callable *)&local_98,pCVar7);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x260,(String *)&local_98,0);
  Callable::~Callable((Callable *)&local_98);
  Node::add_child(this_01,*(undefined8 *)(this + 0xdd0),0,0);
  this_04 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_04);
  postinitialize_handler((Object *)this_04);
  *(Tree **)(this + 0xdd8) = this_04;
  Node::set_auto_translate_mode(this_04,2);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdd8),3);
  Tree::set_columns((int)*(undefined8 *)(this + 0xdd8));
  local_98 = "";
  local_a8[0] = 0;
  uVar4 = *(undefined8 *)(this + 0xdd8);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Name";
  local_b0 = 0;
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  Tree::set_column_title((int)uVar4,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xdd8),false);
  local_98 = "";
  local_a8[0] = 0;
  uVar4 = *(undefined8 *)(this + 0xdd8);
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Member Type";
  local_b0 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_b0);
  TTR((String *)&local_98,(String *)&local_b0);
  Tree::set_column_title((int)uVar4,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xdd8),true);
  uVar4 = *(undefined8 *)(this + 0xdd8);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar4,1);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xdd8),true);
  pVVar1 = *(Vector2 **)(this + 0xdd8);
  fVar10 = (float)EditorScale::get_scale();
  local_78[0] = CONCAT44(fVar10 * _LC64._4_4_,fVar10 * (float)_LC64);
  Control::set_custom_minimum_size(pVVar1);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xdd8),0));
  Tree::set_select_mode(*(undefined8 *)(this + 0xdd8),1);
  plVar2 = *(long **)(this + 0xdd8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  create_custom_callable_function_pointer<EditorHelpSearch>
            ((EditorHelpSearch *)&local_98,(char *)this,
             (_func_void *)"&EditorHelpSearch::_confirmed");
  StringName::StringName((StringName *)local_a8,"item_activated",false);
  (*pcVar3)(plVar2,(StrRange *)local_a8,(String *)&local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_98);
  plVar2 = *(long **)(this + 0xdd8);
  lVar6 = *(long *)(this + 0xd88);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar7 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar7);
  *(undefined **)(pCVar7 + 0x20) = &_LC35;
  *(undefined1 (*) [16])(pCVar7 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar7 = &PTR_hash_0011f438;
  *(undefined8 *)(pCVar7 + 0x40) = 0;
  uVar4 = *(undefined8 *)(lVar6 + 0x60);
  *(long *)(pCVar7 + 0x28) = lVar6;
  *(undefined8 *)(pCVar7 + 0x30) = uVar4;
  *(undefined8 *)(pCVar7 + 0x10) = 0;
  *(code **)(pCVar7 + 0x38) = BaseButton::set_disabled;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar7,(int)pCVar7 + 0x28);
  *(char **)(pCVar7 + 0x20) = "BaseButton::set_disabled";
  Callable::Callable((Callable *)&local_98,pCVar7);
  Variant::Variant((Variant *)local_78,false);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)local_78;
  Callable::bindp((Variant **)local_a8,iVar9);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x260,(StrRange *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)&local_98);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this_00,*(undefined8 *)(this + 0xdd8),1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::_match_method_name_and_push_back(String const&, Vector<String> const&,
   Vector<DocData::MethodDoc>&, String const&, String const&, String const&, Dictionary&) const */

void __thiscall
EditorHelpSearch::_match_method_name_and_push_back
          (EditorHelpSearch *this,String *param_1,Vector *param_2,Vector *param_3,String *param_4,
          String *param_5,String *param_6,Dictionary *param_7)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  Variant *pVVar8;
  CowData *pCVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  String local_90 [8];
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(param_3 + 8);
  if (lVar7 != 0) {
    lVar11 = 0;
    do {
      if (*(long *)(lVar7 + -8) <= lVar11) break;
      lVar10 = 0;
      String::to_lower();
      lVar7 = *(long *)(param_2 + 8);
      if (lVar7 != 0) {
        while (lVar10 < *(long *)(lVar7 + -8)) {
          iVar6 = String::findn((String *)&local_d8,(int)lVar7 + (int)lVar10 * 8);
          if (iVar6 == -1) {
            cVar3 = String::begins_with((char *)param_1);
            if (cVar3 != '\0') {
              String::substr((int)(CowData<char32_t> *)&local_a8,(int)param_1);
              cVar4 = String::begins_with((String *)&local_d8);
              if (cVar4 != '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                break;
              }
            }
            cVar4 = String::ends_with((char *)param_1);
            if (cVar4 == '\0') {
              cVar4 = String::begins_with((char *)param_1);
              if (cVar4 != '\0') {
                cVar5 = String::ends_with((char *)param_1);
                cVar4 = '\0';
                if (cVar5 != '\0') goto LAB_001028c9;
              }
              if (cVar3 != '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              }
              goto LAB_001025bb;
            }
            String::left((int)(CowData<char32_t> *)&local_a0);
            String::strip_edges(SUB81((CowData<char32_t> *)&local_98,0),
                                SUB81((CowData<char32_t> *)&local_a0,0));
            cVar4 = String::ends_with((String *)&local_d8);
            if (cVar4 == '\0') {
              cVar4 = String::begins_with((char *)param_1);
              if (cVar4 == '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                cVar5 = '\0';
                if (cVar3 == '\0') goto LAB_001025bb;
LAB_001027bc:
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              }
              else {
                cVar4 = String::ends_with((char *)param_1);
                if (cVar4 == '\0') {
                  cVar5 = '\0';
LAB_00102890:
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                }
                else {
LAB_001028c9:
                  String::substr((int)(CowData<char32_t> *)local_90,(int)param_1);
                  String::strip_edges(SUB81((CowData<char32_t> *)&local_88,0),
                                      SUB81((CowData<char32_t> *)local_90,0));
                  cVar5 = String::operator==((String *)&local_d8,(String *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
                  if (cVar4 != '\0') goto LAB_00102890;
                }
                if (cVar3 != '\0') goto LAB_001027bc;
              }
              if (cVar5 == '\0') goto LAB_001025bb;
            }
            else {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              if (cVar3 != '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                lVar7 = *(long *)(param_3 + 8);
                goto joined_r0x00102734;
              }
            }
            break;
          }
          lVar7 = *(long *)(param_2 + 8);
          lVar10 = lVar10 + 1;
          if (lVar7 == 0) break;
        }
      }
      lVar7 = *(long *)(param_3 + 8);
joined_r0x00102734:
      if (lVar7 == 0) {
LAB_00102740:
        lVar10 = 0;
LAB_00102743:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar10 = *(long *)(lVar7 + -8);
      if (lVar10 <= lVar11) goto LAB_00102743;
      pCVar9 = (CowData *)(lVar7 + lVar11 * 0x78);
      local_98 = 0;
      if (*(long *)pCVar9 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,pCVar9);
      }
      local_a0 = 0;
      if (*(long *)param_4 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)param_4);
      }
      local_a8 = 0;
      if (*(long *)param_6 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)param_6);
      }
      local_b0 = 0;
      local_88 = "%s > %s: %s";
      local_80 = 0xb;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<String,String,String>
                (local_90,(StrRange *)&local_b0,(CowData<char32_t> *)&local_a8,
                 (CowData<char32_t> *)&local_a0);
      Variant::Variant((Variant *)local_58,local_90);
      lVar7 = *(long *)(param_3 + 8);
      if (lVar7 == 0) goto LAB_00102740;
      lVar10 = *(long *)(lVar7 + -8);
      if (lVar10 <= lVar11) goto LAB_00102743;
      pCVar9 = (CowData *)(lVar7 + lVar11 * 0x78);
      local_b8 = 0;
      if (*(long *)pCVar9 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,pCVar9);
      }
      local_c0 = 0;
      if (*(long *)param_6 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)param_6);
      }
      local_c8 = 0;
      if (*(long *)param_5 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)param_5);
      }
      local_d0 = 0;
      local_88 = "class_%s:%s:%s";
      local_80 = 0xe;
      String::parse_latin1((StrRange *)&local_d0);
      vformat<String,String,String>
                ((CowData<char32_t> *)&local_88,(StrRange *)&local_d0,(CowData<char32_t> *)&local_c8
                 ,(CowData<char32_t> *)&local_c0);
      Variant::Variant((Variant *)local_78,(String *)&local_88);
      pVVar8 = (Variant *)Dictionary::operator[]((Variant *)param_7);
      if (pVVar8 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar8 = 0;
        *(int *)pVVar8 = local_58[0];
        local_58[0] = 0;
        *(undefined8 *)(pVVar8 + 8) = local_50;
        *(undefined8 *)(pVVar8 + 0x10) = uStack_48;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
LAB_001025bb:
      lVar7 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar11 = lVar11 + 1;
      lVar7 = *(long *)(param_3 + 8);
    } while (lVar7 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::_match_const_name_and_push_back(String const&, Vector<String> const&,
   Vector<DocData::ConstantDoc>&, String const&, String const&, String const&, Dictionary&) const */

void __thiscall
EditorHelpSearch::_match_const_name_and_push_back
          (EditorHelpSearch *this,String *param_1,Vector *param_2,Vector *param_3,String *param_4,
          String *param_5,String *param_6,Dictionary *param_7)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  Variant *pVVar8;
  CowData *pCVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  String local_90 [8];
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(param_3 + 8);
  if (lVar7 != 0) {
    lVar11 = 0;
    do {
      if (*(long *)(lVar7 + -8) <= lVar11) break;
      lVar10 = 0;
      String::to_lower();
      lVar7 = *(long *)(param_2 + 8);
      if (lVar7 != 0) {
        while (lVar10 < *(long *)(lVar7 + -8)) {
          iVar6 = String::findn((String *)&local_d8,(int)lVar7 + (int)lVar10 * 8);
          if (iVar6 == -1) {
            cVar3 = String::begins_with((char *)param_1);
            if (cVar3 != '\0') {
              String::substr((int)(CowData<char32_t> *)&local_a8,(int)param_1);
              cVar4 = String::begins_with((String *)&local_d8);
              if (cVar4 != '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                break;
              }
            }
            cVar4 = String::ends_with((char *)param_1);
            if (cVar4 == '\0') {
              cVar4 = String::begins_with((char *)param_1);
              if (cVar4 != '\0') {
                cVar5 = String::ends_with((char *)param_1);
                cVar4 = '\0';
                if (cVar5 != '\0') goto LAB_00103069;
              }
              if (cVar3 != '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              }
              goto LAB_00102d53;
            }
            String::left((int)(CowData<char32_t> *)&local_a0);
            String::strip_edges(SUB81((CowData<char32_t> *)&local_98,0),
                                SUB81((CowData<char32_t> *)&local_a0,0));
            cVar4 = String::ends_with((String *)&local_d8);
            if (cVar4 == '\0') {
              cVar4 = String::begins_with((char *)param_1);
              if (cVar4 == '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                cVar5 = '\0';
                if (cVar3 == '\0') goto LAB_00102d53;
LAB_00102f5c:
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              }
              else {
                cVar4 = String::ends_with((char *)param_1);
                if (cVar4 == '\0') {
                  cVar5 = '\0';
LAB_00103030:
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                }
                else {
LAB_00103069:
                  String::substr((int)(CowData<char32_t> *)local_90,(int)param_1);
                  String::strip_edges(SUB81((CowData<char32_t> *)&local_88,0),
                                      SUB81((CowData<char32_t> *)local_90,0));
                  cVar5 = String::operator==((String *)&local_d8,(String *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
                  if (cVar4 != '\0') goto LAB_00103030;
                }
                if (cVar3 != '\0') goto LAB_00102f5c;
              }
              if (cVar5 == '\0') goto LAB_00102d53;
            }
            else {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              if (cVar3 != '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                lVar7 = *(long *)(param_3 + 8);
                goto joined_r0x00102ed4;
              }
            }
            break;
          }
          lVar7 = *(long *)(param_2 + 8);
          lVar10 = lVar10 + 1;
          if (lVar7 == 0) break;
        }
      }
      lVar7 = *(long *)(param_3 + 8);
joined_r0x00102ed4:
      if (lVar7 == 0) {
LAB_00102ee0:
        lVar10 = 0;
LAB_00102ee3:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar10 = *(long *)(lVar7 + -8);
      if (lVar10 <= lVar11) goto LAB_00102ee3;
      pCVar9 = (CowData *)(lVar7 + lVar11 * 0x60);
      local_98 = 0;
      if (*(long *)pCVar9 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,pCVar9);
      }
      local_a0 = 0;
      if (*(long *)param_4 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)param_4);
      }
      local_a8 = 0;
      if (*(long *)param_6 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)param_6);
      }
      local_b0 = 0;
      local_88 = "%s > %s: %s";
      local_80 = 0xb;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<String,String,String>
                (local_90,(StrRange *)&local_b0,(CowData<char32_t> *)&local_a8,
                 (CowData<char32_t> *)&local_a0);
      Variant::Variant((Variant *)local_58,local_90);
      lVar7 = *(long *)(param_3 + 8);
      if (lVar7 == 0) goto LAB_00102ee0;
      lVar10 = *(long *)(lVar7 + -8);
      if (lVar10 <= lVar11) goto LAB_00102ee3;
      pCVar9 = (CowData *)(lVar7 + lVar11 * 0x60);
      local_b8 = 0;
      if (*(long *)pCVar9 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,pCVar9);
      }
      local_c0 = 0;
      if (*(long *)param_6 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)param_6);
      }
      local_c8 = 0;
      if (*(long *)param_5 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)param_5);
      }
      local_d0 = 0;
      local_88 = "class_%s:%s:%s";
      local_80 = 0xe;
      String::parse_latin1((StrRange *)&local_d0);
      vformat<String,String,String>
                ((CowData<char32_t> *)&local_88,(StrRange *)&local_d0,(CowData<char32_t> *)&local_c8
                 ,(CowData<char32_t> *)&local_c0);
      Variant::Variant((Variant *)local_78,(String *)&local_88);
      pVVar8 = (Variant *)Dictionary::operator[]((Variant *)param_7);
      if (pVVar8 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar8 = 0;
        *(int *)pVVar8 = local_58[0];
        local_58[0] = 0;
        *(undefined8 *)(pVVar8 + 8) = local_50;
        *(undefined8 *)(pVVar8 + 0x10) = uStack_48;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
LAB_00102d53:
      lVar7 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar11 = lVar11 + 1;
      lVar7 = *(long *)(param_3 + 8);
    } while (lVar7 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::_match_property_name_and_push_back(String const&, Vector<String> const&,
   Vector<DocData::PropertyDoc>&, String const&, String const&, String const&, Dictionary&) const */

void __thiscall
EditorHelpSearch::_match_property_name_and_push_back
          (EditorHelpSearch *this,String *param_1,Vector *param_2,Vector *param_3,String *param_4,
          String *param_5,String *param_6,Dictionary *param_7)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  Variant *pVVar8;
  CowData *pCVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  String local_90 [8];
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(param_3 + 8);
  if (lVar7 != 0) {
    lVar11 = 0;
    do {
      if (*(long *)(lVar7 + -8) <= lVar11) break;
      lVar10 = 0;
      String::to_lower();
      lVar7 = *(long *)(param_2 + 8);
      if (lVar7 != 0) {
        while (lVar10 < *(long *)(lVar7 + -8)) {
          iVar6 = String::findn((String *)&local_d8,(int)lVar7 + (int)lVar10 * 8);
          if (iVar6 == -1) {
            cVar3 = String::begins_with((char *)param_1);
            if (cVar3 != '\0') {
              String::substr((int)(CowData<char32_t> *)&local_a8,(int)param_1);
              cVar4 = String::begins_with((String *)&local_d8);
              if (cVar4 != '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                break;
              }
            }
            cVar4 = String::ends_with((char *)param_1);
            if (cVar4 == '\0') {
              cVar4 = String::begins_with((char *)param_1);
              if (cVar4 != '\0') {
                cVar5 = String::ends_with((char *)param_1);
                cVar4 = '\0';
                if (cVar5 != '\0') goto LAB_00103809;
              }
              if (cVar3 != '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              }
              goto LAB_001034fb;
            }
            String::left((int)(CowData<char32_t> *)&local_a0);
            String::strip_edges(SUB81((CowData<char32_t> *)&local_98,0),
                                SUB81((CowData<char32_t> *)&local_a0,0));
            cVar4 = String::ends_with((String *)&local_d8);
            if (cVar4 == '\0') {
              cVar4 = String::begins_with((char *)param_1);
              if (cVar4 == '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                cVar5 = '\0';
                if (cVar3 == '\0') goto LAB_001034fb;
LAB_001036fc:
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              }
              else {
                cVar4 = String::ends_with((char *)param_1);
                if (cVar4 == '\0') {
                  cVar5 = '\0';
LAB_001037d0:
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                }
                else {
LAB_00103809:
                  String::substr((int)(CowData<char32_t> *)local_90,(int)param_1);
                  String::strip_edges(SUB81((CowData<char32_t> *)&local_88,0),
                                      SUB81((CowData<char32_t> *)local_90,0));
                  cVar5 = String::operator==((String *)&local_d8,(String *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
                  if (cVar4 != '\0') goto LAB_001037d0;
                }
                if (cVar3 != '\0') goto LAB_001036fc;
              }
              if (cVar5 == '\0') goto LAB_001034fb;
            }
            else {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              if (cVar3 != '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                lVar7 = *(long *)(param_3 + 8);
                goto joined_r0x00103674;
              }
            }
            break;
          }
          lVar7 = *(long *)(param_2 + 8);
          lVar10 = lVar10 + 1;
          if (lVar7 == 0) break;
        }
      }
      lVar7 = *(long *)(param_3 + 8);
joined_r0x00103674:
      if (lVar7 == 0) {
LAB_00103680:
        lVar10 = 0;
LAB_00103683:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar10 = *(long *)(lVar7 + -8);
      if (lVar10 <= lVar11) goto LAB_00103683;
      pCVar9 = (CowData *)(lVar7 + lVar11 * 0x78);
      local_98 = 0;
      if (*(long *)pCVar9 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,pCVar9);
      }
      local_a0 = 0;
      if (*(long *)param_4 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)param_4);
      }
      local_a8 = 0;
      if (*(long *)param_6 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)param_6);
      }
      local_b0 = 0;
      local_88 = "%s > %s: %s";
      local_80 = 0xb;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<String,String,String>
                (local_90,(StrRange *)&local_b0,(CowData<char32_t> *)&local_a8,
                 (CowData<char32_t> *)&local_a0);
      Variant::Variant((Variant *)local_58,local_90);
      lVar7 = *(long *)(param_3 + 8);
      if (lVar7 == 0) goto LAB_00103680;
      lVar10 = *(long *)(lVar7 + -8);
      if (lVar10 <= lVar11) goto LAB_00103683;
      pCVar9 = (CowData *)(lVar7 + lVar11 * 0x78);
      local_b8 = 0;
      if (*(long *)pCVar9 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,pCVar9);
      }
      local_c0 = 0;
      if (*(long *)param_6 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)param_6);
      }
      local_c8 = 0;
      if (*(long *)param_5 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)param_5);
      }
      local_d0 = 0;
      local_88 = "class_%s:%s:%s";
      local_80 = 0xe;
      String::parse_latin1((StrRange *)&local_d0);
      vformat<String,String,String>
                ((CowData<char32_t> *)&local_88,(StrRange *)&local_d0,(CowData<char32_t> *)&local_c8
                 ,(CowData<char32_t> *)&local_c0);
      Variant::Variant((Variant *)local_78,(String *)&local_88);
      pVVar8 = (Variant *)Dictionary::operator[]((Variant *)param_7);
      if (pVVar8 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar8 = 0;
        *(int *)pVVar8 = local_58[0];
        local_58[0] = 0;
        *(undefined8 *)(pVVar8 + 8) = local_50;
        *(undefined8 *)(pVVar8 + 0x10) = uStack_48;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
LAB_001034fb:
      lVar7 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar11 = lVar11 + 1;
      lVar7 = *(long *)(param_3 + 8);
    } while (lVar7 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::_match_theme_property_name_and_push_back(String const&, Vector<String> const&,
   Vector<DocData::ThemeItemDoc>&, String const&, String const&, String const&, Dictionary&) const
    */

void __thiscall
EditorHelpSearch::_match_theme_property_name_and_push_back
          (EditorHelpSearch *this,String *param_1,Vector *param_2,Vector *param_3,String *param_4,
          String *param_5,String *param_6,Dictionary *param_7)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  Variant *pVVar8;
  CowData *pCVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  String local_90 [8];
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(param_3 + 8);
  if (lVar7 != 0) {
    lVar11 = 0;
    do {
      if (*(long *)(lVar7 + -8) <= lVar11) break;
      lVar10 = 0;
      String::to_lower();
      lVar7 = *(long *)(param_2 + 8);
      if (lVar7 != 0) {
        while (lVar10 < *(long *)(lVar7 + -8)) {
          iVar6 = String::findn((String *)&local_d8,(int)lVar7 + (int)lVar10 * 8);
          if (iVar6 == -1) {
            cVar3 = String::begins_with((char *)param_1);
            if (cVar3 != '\0') {
              String::substr((int)(CowData<char32_t> *)&local_a8,(int)param_1);
              cVar4 = String::begins_with((String *)&local_d8);
              if (cVar4 != '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                break;
              }
            }
            cVar4 = String::ends_with((char *)param_1);
            if (cVar4 == '\0') {
              cVar4 = String::begins_with((char *)param_1);
              if (cVar4 != '\0') {
                cVar5 = String::ends_with((char *)param_1);
                cVar4 = '\0';
                if (cVar5 != '\0') goto LAB_00103fa9;
              }
              if (cVar3 != '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              }
              goto LAB_00103c93;
            }
            String::left((int)(CowData<char32_t> *)&local_a0);
            String::strip_edges(SUB81((CowData<char32_t> *)&local_98,0),
                                SUB81((CowData<char32_t> *)&local_a0,0));
            cVar4 = String::ends_with((String *)&local_d8);
            if (cVar4 == '\0') {
              cVar4 = String::begins_with((char *)param_1);
              if (cVar4 == '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                cVar5 = '\0';
                if (cVar3 == '\0') goto LAB_00103c93;
LAB_00103e9c:
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              }
              else {
                cVar4 = String::ends_with((char *)param_1);
                if (cVar4 == '\0') {
                  cVar5 = '\0';
LAB_00103f70:
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                }
                else {
LAB_00103fa9:
                  String::substr((int)(CowData<char32_t> *)local_90,(int)param_1);
                  String::strip_edges(SUB81((CowData<char32_t> *)&local_88,0),
                                      SUB81((CowData<char32_t> *)local_90,0));
                  cVar5 = String::operator==((String *)&local_d8,(String *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
                  if (cVar4 != '\0') goto LAB_00103f70;
                }
                if (cVar3 != '\0') goto LAB_00103e9c;
              }
              if (cVar5 == '\0') goto LAB_00103c93;
            }
            else {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              if (cVar3 != '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                lVar7 = *(long *)(param_3 + 8);
                goto joined_r0x00103e14;
              }
            }
            break;
          }
          lVar7 = *(long *)(param_2 + 8);
          lVar10 = lVar10 + 1;
          if (lVar7 == 0) break;
        }
      }
      lVar7 = *(long *)(param_3 + 8);
joined_r0x00103e14:
      if (lVar7 == 0) {
LAB_00103e20:
        lVar10 = 0;
LAB_00103e23:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar10 = *(long *)(lVar7 + -8);
      if (lVar10 <= lVar11) goto LAB_00103e23;
      pCVar9 = (CowData *)(lVar7 + lVar11 * 0x50);
      local_98 = 0;
      if (*(long *)pCVar9 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,pCVar9);
      }
      local_a0 = 0;
      if (*(long *)param_4 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)param_4);
      }
      local_a8 = 0;
      if (*(long *)param_6 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)param_6);
      }
      local_b0 = 0;
      local_88 = "%s > %s: %s";
      local_80 = 0xb;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<String,String,String>
                (local_90,(StrRange *)&local_b0,(CowData<char32_t> *)&local_a8,
                 (CowData<char32_t> *)&local_a0);
      Variant::Variant((Variant *)local_58,local_90);
      lVar7 = *(long *)(param_3 + 8);
      if (lVar7 == 0) goto LAB_00103e20;
      lVar10 = *(long *)(lVar7 + -8);
      if (lVar10 <= lVar11) goto LAB_00103e23;
      pCVar9 = (CowData *)(lVar7 + lVar11 * 0x50);
      local_b8 = 0;
      if (*(long *)pCVar9 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,pCVar9);
      }
      local_c0 = 0;
      if (*(long *)param_6 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)param_6);
      }
      local_c8 = 0;
      if (*(long *)param_5 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)param_5);
      }
      local_d0 = 0;
      local_88 = "class_%s:%s:%s";
      local_80 = 0xe;
      String::parse_latin1((StrRange *)&local_d0);
      vformat<String,String,String>
                ((CowData<char32_t> *)&local_88,(StrRange *)&local_d0,(CowData<char32_t> *)&local_c8
                 ,(CowData<char32_t> *)&local_c0);
      Variant::Variant((Variant *)local_78,(String *)&local_88);
      pVVar8 = (Variant *)Dictionary::operator[]((Variant *)param_7);
      if (pVVar8 != (Variant *)local_58) {
        if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar8 = 0;
        *(int *)pVVar8 = local_58[0];
        local_58[0] = 0;
        *(undefined8 *)(pVVar8 + 8) = local_50;
        *(undefined8 *)(pVVar8 + 0x10) = uStack_48;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
LAB_00103c93:
      lVar7 = local_d8;
      if (local_d8 != 0) {
        LOCK();
        plVar1 = (long *)(local_d8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_d8 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar11 = lVar11 + 1;
      lVar7 = *(long *)(param_3 + 8);
    } while (lVar7 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::_update_results() */

void __thiscall EditorHelpSearch::_update_results(EditorHelpSearch *this)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  String::strip_edges(SUB81((String *)&local_50,0),SUB81((CowData<char32_t> *)&local_48,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  uVar2 = OptionButton::get_selected_id();
  if ((local_50 == 0) || (*(int *)(local_50 + -8) < 3)) {
    cVar1 = String::operator==((String *)&local_50,"@");
    if (cVar1 == '\0') {
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdc0),0));
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdc8),0));
      local_48 = 0;
      if (local_50 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_50);
      }
      Ref<EditorHelpSearch::Runner>::
      instantiate<Tree*,Tree*,EditorHelpSearch::TreeCache*,String,int>
                ((Ref<EditorHelpSearch::Runner> *)(this + 0xdf8),*(undefined8 *)(this + 0xdd8),
                 *(undefined8 *)(this + 0xdd8),this + 0xe00,(CowData<char32_t> *)&local_48,
                 uVar2 | 0x40000000);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      *(uint *)(this + 0xdf0) = uVar2;
      Node::set_process(SUB81(this,0));
      goto LAB_0010418a;
    }
  }
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdc0),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdc8),0));
  iVar3 = BaseButton::is_pressed();
  iVar4 = BaseButton::is_pressed();
  local_48 = 0;
  if (local_50 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_50);
  }
  Ref<EditorHelpSearch::Runner>::instantiate<Tree*,Tree*,EditorHelpSearch::TreeCache*,String,int>
            ((Ref<EditorHelpSearch::Runner> *)(this + 0xdf8),*(undefined8 *)(this + 0xdd8),
             *(undefined8 *)(this + 0xdd8),this + 0xe00,(CowData<char32_t> *)&local_48,
             iVar4 << 0x1e | iVar3 << 0x1d | uVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  *(undefined4 *)(this + 0xdf0) = 0;
  Node::set_process(SUB81(this,0));
LAB_0010418a:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::_search_box_text_changed(String const&) */

void EditorHelpSearch::_search_box_text_changed(String *param_1)

{
  _update_results((EditorHelpSearch *)param_1);
  return;
}



/* EditorHelpSearch::_filter_combo_item_selected(int) */

void EditorHelpSearch::_filter_combo_item_selected(int param_1)

{
  undefined4 in_register_0000003c;
  
  _update_results((EditorHelpSearch *)CONCAT44(in_register_0000003c,param_1));
  return;
}



/* EditorHelpSearch::popup_dialog(String const&) */

void EditorHelpSearch::popup_dialog(String *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  String *pSVar4;
  long lVar5;
  String *in_RSI;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78 [8];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar4 = (String *)EditorSettings::get_singleton();
  local_88 = 0;
  local_80 = 0;
  Variant::Variant((Variant *)local_78,(Rect2 *)&local_88);
  local_a8 = "search_help";
  local_b0 = 0;
  local_a0 = 0xb;
  String::parse_latin1((StrRange *)&local_b0);
  local_a8 = "dialog_bounds";
  local_b8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  EditorSettings::get_project_metadata((String *)local_58,pSVar4,(Variant *)&local_b8);
  local_98 = Variant::operator_cast_to_Rect2((Variant *)local_58);
  local_90 = in_XMM1_Qa;
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (((((float)local_98 == 0.0) && (local_98._4_4_ == 0.0)) && ((float)local_90 == 0.0)) &&
     (local_90._4_4_ == 0.0)) {
    Window::popup_centered_ratio(_LC26);
  }
  else {
    pcVar1 = *(code **)(*(long *)param_1 + 0x240);
    local_58 = Rect2::operator_cast_to_Rect2i((Rect2 *)&local_98);
    (*pcVar1)(param_1,(String *)local_58);
  }
  *(undefined4 *)(param_1 + 0xdf0) = 0;
  if ((*(long *)in_RSI == 0) || (*(uint *)(*(long *)in_RSI + -8) < 2)) {
    LineEdit::clear();
  }
  else {
    cVar3 = String::operator==(param_1 + 0xde8,in_RSI);
    if (cVar3 == '\0') {
      lVar5 = *(long *)in_RSI;
      if (*(long *)(param_1 + 0xde8) != lVar5) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(param_1 + 0xde8),(CowData *)in_RSI);
        lVar5 = *(long *)in_RSI;
      }
    }
    else {
      param_1[0xde0] = (String)0x1;
      lVar5 = *(long *)in_RSI;
    }
    local_a8 = (char *)0x0;
    uVar2 = *(undefined8 *)(param_1 + 0xdb8);
    if (lVar5 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)in_RSI);
    }
    LineEdit::set_text(uVar2,(CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    LineEdit::select_all();
  }
  Control::grab_focus();
  _update_results((EditorHelpSearch *)param_1);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorHelpSearch::popup_dialog() */

void __thiscall EditorHelpSearch::popup_dialog(EditorHelpSearch *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  popup_dialog((String *)this);
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_28 + -0x10),false);
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::_bind_methods() */

void EditorHelpSearch::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
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
  local_d0 = 0;
  local_b0 = 10;
  local_b8 = "go_to_help";
  String::parse_latin1((StrRange *)&local_d0);
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
  _local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_d8 = 0;
  local_c0 = 0x10;
  local_c8 = "EditorHelpSearch";
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
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
        lVar6 = 0;
        piVar5 = piVar4;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::ClassMatch::TEMPNAMEPLACEHOLDERVALUE(EditorHelpSearch::Runner::ClassMatch
   const&) [clone .isra.0] */

void __thiscall
EditorHelpSearch::Runner::ClassMatch::operator=(ClassMatch *this,ClassMatch *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  this[8] = param_1[8];
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  lVar8 = 0;
  LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>::
  resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
          *)(this + 0x18),*(uint *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar8 * 0x18);
      puVar5 = (undefined8 *)(lVar8 * 0x18 + *(long *)(this + 0x20));
      *puVar5 = *puVar4;
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
      if (puVar5[2] != puVar4[2]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar4 + 2));
      }
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(param_1 + 0x18));
  }
  lVar8 = 0;
  LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>::
  resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
          *)(this + 0x28),*(uint *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar8 * 0x18);
      puVar5 = (undefined8 *)(lVar8 * 0x18 + *(long *)(this + 0x30));
      *puVar5 = *puVar4;
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
      if (puVar5[2] != puVar4[2]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar4 + 2));
      }
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(param_1 + 0x28));
  }
  lVar8 = 0;
  LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>::
  resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
          *)(this + 0x38),*(uint *)(param_1 + 0x38));
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar8 * 0x18);
      puVar5 = (undefined8 *)(lVar8 * 0x18 + *(long *)(this + 0x40));
      *puVar5 = *puVar4;
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
      if (puVar5[2] != puVar4[2]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar4 + 2));
      }
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(param_1 + 0x38));
  }
  lVar8 = 0;
  LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>::
  resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
          *)(this + 0x48),*(uint *)(param_1 + 0x48));
  if (*(int *)(param_1 + 0x48) != 0) {
    do {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar8 * 0x18);
      puVar5 = (undefined8 *)(lVar8 * 0x18 + *(long *)(this + 0x50));
      *puVar5 = *puVar4;
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
      if (puVar5[2] != puVar4[2]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar4 + 2));
      }
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(param_1 + 0x48));
  }
  uVar9 = *(uint *)(param_1 + 0x58);
  uVar10 = *(uint *)(this + 0x58);
  if (uVar9 < uVar10) {
    lVar8 = (ulong)uVar9 * 0x18;
    uVar10 = uVar9;
    do {
      uVar10 = uVar10 + 1;
      lVar6 = *(long *)(this + 0x60) + lVar8;
      lVar8 = lVar8 + 0x18;
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar6 + 0x10));
    } while (uVar10 < *(uint *)(this + 0x58));
LAB_00104a3e:
    *(uint *)(this + 0x58) = uVar9;
    uVar9 = *(uint *)(param_1 + 0x58);
  }
  else if (uVar10 < uVar9) {
    uVar1 = uVar9 - 1;
    if (*(uint *)(this + 0x5c) < uVar9) {
      pvVar7 = *(void **)(this + 0x60);
      uVar10 = uVar1 >> 1 | uVar1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = (uVar10 | uVar10 >> 0x10) + 1;
      *(uint *)(this + 0x5c) = uVar10;
      lVar8 = Memory::realloc_static(pvVar7,(ulong)uVar10 * 0x18,false);
      *(long *)(this + 0x60) = lVar8;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        LocalVector<TreeItem*,unsigned_int,false,false>::resize((uint)pvVar7);
      }
      uVar10 = *(uint *)(this + 0x58);
      if (uVar9 <= uVar10) goto LAB_00104a3e;
    }
    lVar8 = *(long *)(this + 0x60);
    puVar4 = (undefined8 *)(lVar8 + (ulong)uVar10 * 0x18);
    do {
      *puVar4 = 0;
      puVar5 = puVar4 + 3;
      *(undefined1 *)(puVar4 + 1) = 0;
      puVar4[2] = 0;
      puVar4 = puVar5;
    } while ((undefined8 *)(lVar8 + 0x18 + ((ulong)(uVar1 - uVar10) + (ulong)uVar10) * 0x18) !=
             puVar5);
    goto LAB_00104a3e;
  }
  lVar8 = 0;
  if (uVar9 != 0) {
    do {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar8 * 0x18);
      puVar5 = (undefined8 *)(lVar8 * 0x18 + *(long *)(this + 0x60));
      *puVar5 = *puVar4;
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
      if (puVar5[2] != puVar4[2]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar4 + 2));
      }
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(param_1 + 0x58));
  }
  uVar9 = *(uint *)(param_1 + 0x68);
  uVar10 = *(uint *)(this + 0x68);
  if (uVar9 < uVar10) {
    lVar8 = (ulong)uVar9 * 0x18;
    uVar10 = uVar9;
    do {
      lVar6 = *(long *)(this + 0x70) + lVar8;
      if (*(long *)(lVar6 + 0x10) != 0) {
        LOCK();
        plVar2 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          lVar3 = *(long *)(lVar6 + 0x10);
          *(undefined8 *)(lVar6 + 0x10) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x18;
    } while (uVar10 < *(uint *)(this + 0x68));
LAB_00104aed:
    *(uint *)(this + 0x68) = uVar9;
    uVar9 = *(uint *)(param_1 + 0x68);
  }
  else if (uVar10 < uVar9) {
    uVar1 = uVar9 - 1;
    if (*(uint *)(this + 0x6c) < uVar9) {
      pvVar7 = *(void **)(this + 0x70);
      uVar10 = uVar1 >> 1 | uVar1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = (uVar10 | uVar10 >> 0x10) + 1;
      *(uint *)(this + 0x6c) = uVar10;
      lVar8 = Memory::realloc_static(pvVar7,(ulong)uVar10 * 0x18,false);
      *(long *)(this + 0x70) = lVar8;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        LocalVector<TreeItem*,unsigned_int,false,false>::resize((uint)pvVar7);
      }
      uVar10 = *(uint *)(this + 0x68);
      if (uVar9 <= uVar10) goto LAB_00104aed;
    }
    lVar8 = *(long *)(this + 0x70);
    puVar4 = (undefined8 *)(lVar8 + (ulong)uVar10 * 0x18);
    do {
      *puVar4 = 0;
      puVar5 = puVar4 + 3;
      *(undefined1 *)(puVar4 + 1) = 0;
      puVar4[2] = 0;
      puVar4 = puVar5;
    } while ((undefined8 *)(lVar8 + 0x18 + ((ulong)(uVar1 - uVar10) + (ulong)uVar10) * 0x18) !=
             puVar5);
    goto LAB_00104aed;
  }
  lVar8 = 0;
  if (uVar9 != 0) {
    do {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x70) + lVar8 * 0x18);
      puVar5 = (undefined8 *)(lVar8 * 0x18 + *(long *)(this + 0x70));
      *puVar5 = *puVar4;
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
      if (puVar5[2] != puVar4[2]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar4 + 2));
      }
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(param_1 + 0x68));
  }
  uVar9 = *(uint *)(param_1 + 0x78);
  uVar10 = *(uint *)(this + 0x78);
  if (uVar9 < uVar10) {
    lVar8 = (ulong)uVar9 * 0x18;
    uVar10 = uVar9;
    do {
      uVar10 = uVar10 + 1;
      lVar6 = *(long *)(this + 0x80) + lVar8;
      lVar8 = lVar8 + 0x18;
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar6 + 0x10));
    } while (uVar10 < *(uint *)(this + 0x78));
  }
  else {
    if (uVar9 <= uVar10) goto LAB_00104b89;
    uVar1 = uVar9 - 1;
    if (*(uint *)(this + 0x7c) < uVar9) {
      pvVar7 = *(void **)(this + 0x80);
      uVar10 = uVar1 >> 1 | uVar1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = (uVar10 | uVar10 >> 0x10) + 1;
      *(uint *)(this + 0x7c) = uVar10;
      lVar8 = Memory::realloc_static(pvVar7,(ulong)uVar10 * 0x18,false);
      *(long *)(this + 0x80) = lVar8;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        LocalVector<TreeItem*,unsigned_int,false,false>::resize((uint)pvVar7);
      }
      uVar10 = *(uint *)(this + 0x78);
      if (uVar9 <= uVar10) goto LAB_00104b81;
    }
    lVar8 = *(long *)(this + 0x80);
    puVar4 = (undefined8 *)(lVar8 + (ulong)uVar10 * 0x18);
    do {
      *puVar4 = 0;
      puVar5 = puVar4 + 3;
      *(undefined1 *)(puVar4 + 1) = 0;
      puVar4[2] = 0;
      puVar4 = puVar5;
    } while ((undefined8 *)(lVar8 + 0x18 + ((ulong)(uVar1 - uVar10) + (ulong)uVar10) * 0x18) !=
             puVar5);
  }
LAB_00104b81:
  *(uint *)(this + 0x78) = uVar9;
  uVar9 = *(uint *)(param_1 + 0x78);
LAB_00104b89:
  lVar8 = 0;
  if (uVar9 != 0) {
    do {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x80) + lVar8 * 0x18);
      puVar5 = (undefined8 *)(lVar8 * 0x18 + *(long *)(this + 0x80));
      *puVar5 = *puVar4;
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
      if (puVar5[2] != puVar4[2]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar4 + 2));
      }
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(param_1 + 0x78));
  }
  lVar8 = 0;
  LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>::
  resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
          *)(this + 0x88),*(uint *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x90) + lVar8 * 0x18);
      puVar5 = (undefined8 *)(lVar8 * 0x18 + *(long *)(this + 0x90));
      *puVar5 = *puVar4;
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar4 + 1);
      if (puVar5[2] != puVar4[2]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar4 + 2));
      }
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(param_1 + 0x88));
  }
  return;
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



/* EditorHelpSearch::Runner::_build_keywords_tooltip(String const&) const */

String * EditorHelpSearch::Runner::_build_keywords_tooltip(String *param_1)

{
  long *in_RDX;
  long lVar1;
  long in_FS_OFFSET;
  char *local_90;
  undefined8 local_88;
  undefined8 local_80;
  String local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (char *)0x0;
  if ((*in_RDX == 0) || (*(uint *)(*in_RDX + -8) < 2)) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_68 = 0;
    local_58 = ": ";
    local_50 = 2;
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "";
    local_80 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_80);
    local_58 = "Keywords";
    local_88 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_88);
    TTR(local_78,(String *)&local_88);
    operator+((char *)&local_70,(String *)&_LC101);
    String::operator+((String *)&local_58,(String *)&local_70);
    if (local_90 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      local_90 = local_58;
      local_58 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    String::split((char *)&local_68,SUB81(in_RDX,0),0x10f4f0);
    CowData<String>::_copy_on_write((CowData<String> *)&local_60);
    lVar1 = local_60;
    CowData<String>::_copy_on_write((CowData<String> *)&local_60);
    if (local_60 != 0) {
      local_60 = local_60 + *(long *)(local_60 + -8) * 8;
    }
    for (; lVar1 != local_60; lVar1 = lVar1 + 8) {
      local_70 = 0;
      local_58 = ", ";
      local_50 = 2;
      String::parse_latin1((StrRange *)&local_70);
      String::strip_edges(SUB81((StrRange *)&local_88,0),SUB81(lVar1,0));
      local_58 = "\"";
      local_80 = 0;
      local_50 = 1;
      String::parse_latin1((StrRange *)&local_80);
      String::quote(local_78);
      String::operator+((String *)&local_58,local_78);
      String::operator+=((String *)&local_90,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    CowData<String>::_unref((CowData<String> *)&local_60);
    String::left((int)param_1);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* EditorHelpSearch::Runner::_build_method_tooltip(DocData::ClassDoc const*, DocData::MethodDoc
   const*) const */

ClassDoc * EditorHelpSearch::Runner::_build_method_tooltip(ClassDoc *param_1,MethodDoc *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long in_RCX;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  String local_80 [8];
  String local_78 [8];
  undefined8 local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = &_LC70;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  local_70 = 0;
  local_58 = &_LC36;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = &_LC105;
  local_88 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_88);
  String::operator+(local_80,(String *)(in_RCX + 8));
  String::operator+(local_78,local_80);
  String::operator+((String *)&local_68,local_78);
  String::operator+((String *)&local_58,(String *)&local_68);
  String::operator+((String *)param_1,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  lVar5 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  lVar4 = *(long *)(in_RCX + 0x58);
  if ((lVar4 != 0) && (0 < *(long *)(lVar4 + -8))) {
    do {
      local_68 = 0;
      local_50 = 1;
      lVar4 = lVar4 + lVar5 * 0x28;
      local_58 = &_LC105;
      String::parse_latin1((StrRange *)&local_68);
      String::operator+((String *)&local_60,(String *)(lVar4 + 8));
      String::operator+((String *)&local_58,(String *)&local_60);
      String::operator+=((String *)param_1,(String *)&local_58);
      puVar3 = local_58;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar3 + -0x10,false);
        }
      }
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
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar4 = *(long *)(lVar4 + 0x20);
      if ((lVar4 != 0) && (1 < *(uint *)(lVar4 + -8))) {
        operator+((char *)&local_58,(String *)&_LC107);
        String::operator+=((String *)param_1,(String *)&local_58);
        puVar3 = local_58;
        if (local_58 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (undefined *)0x0;
            Memory::free_static(puVar3 + -0x10,false);
          }
        }
      }
      lVar4 = *(long *)(in_RCX + 0x58);
      if (lVar4 == 0) break;
      if (lVar5 < *(long *)(lVar4 + -8) + -1) {
        String::operator+=((String *)param_1,", ");
        lVar4 = *(long *)(in_RCX + 0x58);
        if (lVar4 == 0) break;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(long *)(lVar4 + -8));
  }
  String::operator+=((String *)param_1,")");
  _build_keywords_tooltip((String *)&local_58);
  String::operator+=((String *)param_1,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* EditorHelpSearch::Runner::_match_keywords(String const&, String const&) const */

String * EditorHelpSearch::Runner::_match_keywords(String *param_1,String *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  bool in_CL;
  int in_EDX;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,in_CL,0x10f4f0);
  CowData<String>::_copy_on_write((CowData<String> *)local_50);
  lVar4 = local_50[0];
  CowData<String>::_copy_on_write((CowData<String> *)local_50);
  lVar5 = local_50[0];
  if (local_50[0] != 0) {
    lVar5 = local_50[0] + *(long *)(local_50[0] + -8) * 8;
  }
  do {
    if (lVar4 == lVar5) {
      CowData<String>::_unref((CowData<String> *)local_50);
      *(undefined8 *)param_1 = 0;
LAB_001057b4:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return param_1;
    }
    String::strip_edges(SUB81((String *)&local_60,0),SUB81(lVar4,0));
    if (((byte)param_2[0x1b3] & 0x20) == 0) {
      iVar3 = String::findn((String *)&local_60,in_EDX);
      lVar2 = local_60;
    }
    else {
      iVar3 = String::find((String *)&local_60,in_EDX);
      lVar2 = local_60;
    }
    local_60 = lVar2;
    if (iVar3 != -1) {
      *(undefined8 *)param_1 = 0;
      if (lVar2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)param_1,(CowData *)&local_60);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<String>::_unref((CowData<String> *)local_50);
      goto LAB_001057b4;
    }
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar4 = lVar4 + 8;
  } while( true );
}



/* EditorHelpSearch::Runner::_match_keywords_in_all_terms(String const&) const */

Runner * __thiscall
EditorHelpSearch::Runner::_match_keywords_in_all_terms(Runner *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(param_1 + 0x1a8);
  lVar3 = lVar2;
  if (lVar2 != 0) {
    lVar4 = 0;
    lVar3 = 0;
    while (lVar4 < *(long *)(lVar2 + -8)) {
      _match_keywords((String *)&local_48,param_1);
      if (lVar3 == local_48) {
        if (lVar3 == 0) goto LAB_00105934;
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        lVar3 = local_48;
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
      }
      else {
        if (lVar3 != 0) {
          plVar1 = (long *)(lVar3 + -0x10);
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static(plVar1,false);
          }
        }
        lVar3 = local_48;
        if (local_48 == 0) {
LAB_00105934:
          *(undefined8 *)this = 0;
          goto LAB_00105893;
        }
      }
      if (*(uint *)(lVar3 + -8) < 2) {
        *(undefined8 *)this = 0;
        plVar1 = (long *)(lVar3 + -0x10);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(plVar1,false);
        }
        goto LAB_00105893;
      }
      lVar2 = *(long *)(param_1 + 0x1a8);
      lVar4 = lVar4 + 1;
      if (lVar2 == 0) break;
    }
  }
  *(long *)this = lVar3;
LAB_00105893:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::_match_method_name_and_push_back(Vector<DocData::MethodDoc>&,
   LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>, unsigned int, false,
   false>*) */

void __thiscall
EditorHelpSearch::Runner::_match_method_name_and_push_back
          (Runner *this,Vector *param_1,LocalVector *param_2)

{
  Runner *pRVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  long local_a8;
  long local_a0;
  CowData<char32_t> local_98 [8];
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  CowData<char32_t> local_80 [8];
  long local_78;
  char local_70;
  long local_68 [2];
  long local_58;
  char local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = *(long *)(param_1 + 8);
  if (lVar10 != 0) {
    lVar15 = 0;
    do {
      if (*(long *)(lVar10 + -8) <= lVar15) break;
      lVar13 = lVar15 * 0x78;
      if (((byte)this[0x1b3] & 0x20) == 0) {
        String::to_lower();
LAB_001059ea:
        lVar10 = *(long *)(param_1 + 8);
        if (((byte)this[0x1b3] & 0x20) != 0) goto LAB_00105d90;
        if (lVar10 != 0) {
          lVar14 = *(long *)(lVar10 + -8);
          if (lVar14 <= lVar15) goto LAB_00105dfb;
          String::to_lower();
          goto LAB_00105a29;
        }
LAB_00105df8:
        lVar14 = 0;
LAB_00105dfb:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar15,lVar14,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      local_a8 = 0;
      if (*(long *)(lVar10 + lVar13) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar10 + lVar13));
        goto LAB_001059ea;
      }
LAB_00105d90:
      if (lVar10 == 0) goto LAB_00105df8;
      lVar14 = *(long *)(lVar10 + -8);
      if (lVar14 <= lVar15) goto LAB_00105dfb;
      local_a0 = 0;
      if (*(long *)(lVar10 + lVar13 + 0x70) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)(lVar10 + lVar13 + 0x70));
      }
LAB_00105a29:
      local_78 = 0;
      local_68[0] = 0;
      cVar6 = _all_terms_in_name(this,(String *)&local_a8);
      local_70 = cVar6;
      _match_keywords_in_all_terms((Runner *)&local_58,(String *)this);
      lVar10 = local_58;
      if (local_58 != 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
        local_68[0] = lVar10;
        cVar6 = local_70;
      }
      if ((cVar6 == '\0') && ((local_68[0] == 0 || (*(uint *)(local_68[0] + -8) < 2)))) {
        pRVar1 = this + 0x198;
        cVar7 = String::begins_with((char *)pRVar1);
        if (cVar7 != '\0') {
          String::substr((int)local_98,(int)pRVar1);
          cVar8 = String::begins_with((String *)&local_a8);
          if (cVar8 != '\0') {
            CowData<char32_t>::_unref(local_98);
            goto LAB_00105b10;
          }
        }
        cVar8 = String::ends_with((char *)pRVar1);
        if (cVar8 != '\0') {
          String::left((int)local_90);
          String::strip_edges(SUB81(local_88,0),SUB81(local_90,0));
          cVar8 = String::ends_with((String *)&local_a8);
          if (cVar8 == '\0') {
            cVar9 = String::begins_with((char *)pRVar1);
            cVar8 = '\0';
            if ((cVar9 != '\0') && (cVar9 = String::ends_with((char *)pRVar1), cVar9 != '\0'))
            goto LAB_00105ef7;
LAB_00105d58:
            CowData<char32_t>::_unref(local_88);
            CowData<char32_t>::_unref(local_90);
            goto LAB_00105d68;
          }
          CowData<char32_t>::_unref(local_88);
          CowData<char32_t>::_unref(local_90);
          if (cVar7 != '\0') {
            CowData<char32_t>::_unref(local_98);
          }
          goto LAB_00105b10;
        }
        cVar8 = String::begins_with((char *)pRVar1);
        if ((cVar8 == '\0') || (cVar8 = String::ends_with((char *)pRVar1), cVar8 == '\0')) {
          lVar10 = local_68[0];
          if (cVar7 != '\0') {
            CowData<char32_t>::_unref(local_98);
            lVar10 = local_68[0];
          }
        }
        else {
          cVar9 = '\0';
LAB_00105ef7:
          String::substr((int)local_80,(int)pRVar1);
          String::strip_edges(SUB81((Runner *)&local_58,0),SUB81(local_80,0));
          cVar8 = String::operator==((String *)&local_a8,(String *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref(local_80);
          if (cVar9 != '\0') goto LAB_00105d58;
LAB_00105d68:
          if (cVar7 != '\0') {
            CowData<char32_t>::_unref(local_98);
          }
          lVar10 = local_68[0];
          if (cVar8 != '\0') goto LAB_00105b10;
        }
      }
      else {
LAB_00105b10:
        lVar10 = local_68[0];
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 == 0) goto LAB_00105df8;
        lVar14 = *(long *)(lVar4 + -8);
        if (lVar14 <= lVar15) goto LAB_00105dfb;
        local_78 = lVar4 + lVar13;
        local_48 = 0;
        local_58 = local_78;
        local_50 = cVar6;
        if (local_68[0] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)local_68);
        }
        uVar3 = *(uint *)param_2;
        pvVar12 = *(void **)(param_2 + 8);
        if (uVar3 == *(uint *)(param_2 + 4)) {
          uVar11 = (ulong)(uVar3 * 2);
          if (uVar3 * 2 == 0) {
            uVar11 = 1;
          }
          *(int *)(param_2 + 4) = (int)uVar11;
          pvVar12 = (void *)Memory::realloc_static(pvVar12,uVar11 * 0x18,false);
          *(void **)(param_2 + 8) = pvVar12;
          if (pvVar12 == (void *)0x0) {
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          uVar3 = *(uint *)param_2;
        }
        plVar2 = (long *)((long)pvVar12 + (ulong)uVar3 * 0x18);
        *(uint *)param_2 = uVar3 + 1;
        *plVar2 = local_58;
        plVar2[2] = 0;
        *(char *)(plVar2 + 1) = local_50;
        if (local_48 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(plVar2 + 2),(CowData *)&local_48);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      if (lVar10 != 0) {
        LOCK();
        plVar2 = (long *)(lVar10 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          Memory::free_static((void *)(local_68[0] + -0x10),false);
        }
      }
      lVar10 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar2 = (long *)(local_a0 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar2 = (long *)(local_a8 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar15 = lVar15 + 1;
      lVar10 = *(long *)(param_1 + 8);
    } while (lVar10 != 0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* EditorHelpSearch::_native_search_cb(String const&, int) */

String * EditorHelpSearch::_native_search_cb(String *param_1,int param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  Variant *pVVar6;
  int in_ECX;
  bool in_DL;
  undefined4 in_register_00000034;
  EditorHelpSearch *this;
  long in_FS_OFFSET;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  Vector<String> local_98 [8];
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  this = (EditorHelpSearch *)CONCAT44(in_register_00000034,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary((Dictionary *)param_1);
  String::strip_edges(SUB81((CowData<char32_t> *)&local_88,0),in_DL);
  String::to_lower();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  String::split_spaces();
  if (local_90 == 0) {
    local_88 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_b0);
    Vector<String>::push_back(local_98,(CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  lVar5 = EditorHelp::get_doc_data();
  for (puVar2 = *(undefined8 **)(lVar5 + 0x20); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    if ((puVar2[3] != 0) && (1 < *(uint *)(puVar2[3] + -8))) {
      pSVar1 = (String *)(puVar2 + 3);
      iVar4 = String::findn(pSVar1,(int)(CowData *)&local_b0);
      if (iVar4 != -1) {
        Variant::Variant((Variant *)local_58,pSVar1);
        local_a0 = 0;
        if (puVar2[3] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)pSVar1);
        }
        local_a8 = 0;
        local_88 = "class_name:%s";
        local_80 = 0xd;
        String::parse_latin1((StrRange *)&local_a8);
        vformat<String>((CowData<char32_t> *)&local_88,(StrRange *)&local_a8,
                        (CowData<char32_t> *)&local_a0);
        Variant::Variant((Variant *)local_78,(String *)&local_88);
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)param_1);
        if (pVVar6 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar6 = 0;
          *(int *)pVVar6 = local_58[0];
          local_58[0] = 0;
          *(undefined8 *)(pVVar6 + 8) = local_50;
          *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      if (((local_b0 != 0) && (2 < *(int *)(local_b0 + -8))) ||
         (cVar3 = String::operator==((String *)&local_b0,"@"), cVar3 != '\0')) {
        local_a0 = 0;
        local_80 = 6;
        local_88 = "method";
        String::parse_latin1((StrRange *)&local_a0);
        local_88 = "Constructor";
        local_a8 = 0;
        local_80 = 0xb;
        String::parse_latin1((StrRange *)&local_a8);
        _match_method_name_and_push_back
                  (this,(String *)&local_b0,(Vector *)local_98,(Vector *)(puVar2 + 10),
                   (String *)&local_a8,(String *)&local_a0,pSVar1,(Dictionary *)param_1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        local_88 = "method";
        local_a0 = 0;
        local_80 = 6;
        String::parse_latin1((StrRange *)&local_a0);
        local_88 = "Method";
        local_a8 = 0;
        local_80 = 6;
        String::parse_latin1((StrRange *)&local_a8);
        _match_method_name_and_push_back
                  (this,(String *)&local_b0,(Vector *)local_98,(Vector *)(puVar2 + 0xc),
                   (String *)&local_a8,(String *)&local_a0,pSVar1,(Dictionary *)param_1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        local_88 = "method";
        local_a0 = 0;
        local_80 = 6;
        String::parse_latin1((StrRange *)&local_a0);
        local_88 = "Operator";
        local_a8 = 0;
        local_80 = 8;
        String::parse_latin1((StrRange *)&local_a8);
        _match_method_name_and_push_back
                  (this,(String *)&local_b0,(Vector *)local_98,(Vector *)(puVar2 + 0xe),
                   (String *)&local_a8,(String *)&local_a0,pSVar1,(Dictionary *)param_1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        local_88 = "signal";
        local_a0 = 0;
        local_80 = 6;
        String::parse_latin1((StrRange *)&local_a0);
        local_88 = "Signal";
        local_a8 = 0;
        local_80 = 6;
        String::parse_latin1((StrRange *)&local_a8);
        _match_method_name_and_push_back
                  (this,(String *)&local_b0,(Vector *)local_98,(Vector *)(puVar2 + 0x10),
                   (String *)&local_a8,(String *)&local_a0,pSVar1,(Dictionary *)param_1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        local_88 = "constant";
        local_a0 = 0;
        local_80 = 8;
        String::parse_latin1((StrRange *)&local_a0);
        local_88 = "Constant";
        local_a8 = 0;
        local_80 = 8;
        String::parse_latin1((StrRange *)&local_a8);
        _match_const_name_and_push_back
                  (this,(String *)&local_b0,(Vector *)local_98,(Vector *)(puVar2 + 0x12),
                   (String *)&local_a8,(String *)&local_a0,pSVar1,(Dictionary *)param_1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        local_88 = "property";
        local_a0 = 0;
        local_80 = 8;
        String::parse_latin1((StrRange *)&local_a0);
        local_88 = "Property";
        local_a8 = 0;
        local_80 = 8;
        String::parse_latin1((StrRange *)&local_a8);
        _match_property_name_and_push_back
                  (this,(String *)&local_b0,(Vector *)local_98,(Vector *)(puVar2 + 0x1a),
                   (String *)&local_a8,(String *)&local_a0,pSVar1,(Dictionary *)param_1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        local_88 = "theme_item";
        local_a0 = 0;
        local_80 = 10;
        String::parse_latin1((StrRange *)&local_a0);
        local_88 = "Theme Property";
        local_a8 = 0;
        local_80 = 0xe;
        String::parse_latin1((StrRange *)&local_a8);
        _match_theme_property_name_and_push_back
                  (this,(String *)&local_b0,(Vector *)local_98,(Vector *)(puVar2 + 0x1e),
                   (String *)&local_a8,(String *)&local_a0,pSVar1,(Dictionary *)param_1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        local_88 = "annotation";
        local_a0 = 0;
        local_80 = 10;
        String::parse_latin1((StrRange *)&local_a0);
        local_88 = "Annotation";
        local_a8 = 0;
        local_80 = 10;
        String::parse_latin1((StrRange *)&local_a8);
        _match_method_name_and_push_back
                  (this,(String *)&local_b0,(Vector *)local_98,(Vector *)(puVar2 + 0x1c),
                   (String *)&local_a8,(String *)&local_a0,pSVar1,(Dictionary *)param_1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      }
      iVar4 = Dictionary::size();
      if (in_ECX < iVar4) break;
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<DocData::MethodDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::MethodDoc>::_copy_on_write(CowData<DocData::MethodDoc> *this)

{
  long *plVar1;
  CowData CVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  CowData *pCVar8;
  ulong uVar9;
  long lVar10;
  CowData<char32_t> *this_00;
  bool bVar11;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *(long *)(*(long *)this + -8);
  uVar9 = 0x10;
  if (lVar3 * 0x78 != 0) {
    uVar9 = lVar3 * 0x78 - 1;
    uVar9 = uVar9 | uVar9 >> 1;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = uVar9 | uVar9 >> 0x10;
    uVar9 = (uVar9 | uVar9 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar9,false);
  if (puVar6 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar10 = 0;
  *puVar6 = 1;
  puVar6[1] = lVar3;
  this_00 = (CowData<char32_t> *)(puVar6 + 2);
  if (lVar3 != 0) {
    do {
      pCVar8 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar6));
      *(undefined8 *)this_00 = 0;
      if (*(long *)pCVar8 != 0) {
        CowData<char32_t>::_ref(this_00,pCVar8);
      }
      *(undefined8 *)(this_00 + 8) = 0;
      if (*(long *)(pCVar8 + 8) != 0) {
        CowData<char32_t>::_ref(this_00 + 8,pCVar8 + 8);
      }
      *(undefined8 *)(this_00 + 0x10) = 0;
      if (*(long *)(pCVar8 + 0x10) != 0) {
        CowData<char32_t>::_ref(this_00 + 0x10,pCVar8 + 0x10);
      }
      CVar2 = pCVar8[0x18];
      *(undefined8 *)(this_00 + 0x20) = 0;
      lVar4 = *(long *)(pCVar8 + 0x20);
      *(CowData *)(this_00 + 0x18) = CVar2;
      if (lVar4 != 0) {
        CowData<char32_t>::_ref(this_00 + 0x20,pCVar8 + 0x20);
      }
      *(undefined8 *)(this_00 + 0x28) = 0;
      if (*(long *)(pCVar8 + 0x28) != 0) {
        CowData<char32_t>::_ref(this_00 + 0x28,pCVar8 + 0x28);
      }
      CVar2 = pCVar8[0x30];
      *(undefined8 *)(this_00 + 0x38) = 0;
      lVar4 = *(long *)(pCVar8 + 0x38);
      *(CowData *)(this_00 + 0x30) = CVar2;
      if (lVar4 != 0) {
        CowData<char32_t>::_ref(this_00 + 0x38,pCVar8 + 0x38);
      }
      CVar2 = pCVar8[0x40];
      *(undefined8 *)(this_00 + 0x48) = 0;
      lVar4 = *(long *)(pCVar8 + 0x48);
      *(CowData *)(this_00 + 0x40) = CVar2;
      if (lVar4 != 0) {
        CowData<char32_t>::_ref(this_00 + 0x48,pCVar8 + 0x48);
      }
      *(undefined8 *)(this_00 + 0x58) = 0;
      if (*(long *)(pCVar8 + 0x58) != 0) {
        CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(this_00 + 0x58));
        if (*(long *)(pCVar8 + 0x58) != 0) {
          plVar1 = (long *)(*(long *)(pCVar8 + 0x58) + -0x10);
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00106ab6;
            LOCK();
            lVar7 = *plVar1;
            bVar11 = lVar4 == lVar7;
            if (bVar11) {
              *plVar1 = lVar4 + 1;
              lVar7 = lVar4;
            }
            UNLOCK();
          } while (!bVar11);
          if (lVar7 != -1) {
            *(undefined8 *)(this_00 + 0x58) = *(undefined8 *)(pCVar8 + 0x58);
          }
        }
      }
LAB_00106ab6:
      *(undefined8 *)(this_00 + 0x68) = 0;
      plVar1 = (long *)(*(long *)(pCVar8 + 0x68) + -0x10);
      if (*(long *)(pCVar8 + 0x68) != 0) {
        do {
          lVar4 = *plVar1;
          if (lVar4 == 0) goto LAB_00106aec;
          LOCK();
          lVar7 = *plVar1;
          bVar11 = lVar4 == lVar7;
          if (bVar11) {
            *plVar1 = lVar4 + 1;
            lVar7 = lVar4;
          }
          UNLOCK();
        } while (!bVar11);
        if (lVar7 != -1) {
          *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(pCVar8 + 0x68);
        }
      }
LAB_00106aec:
      *(undefined8 *)(this_00 + 0x70) = 0;
      if (*(long *)(pCVar8 + 0x70) != 0) {
        CowData<char32_t>::_ref(this_00 + 0x70,pCVar8 + 0x70);
      }
      lVar10 = lVar10 + 1;
      this_00 = this_00 + 0x78;
    } while (lVar3 != lVar10);
  }
  _unref(this);
  *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar6 + 2);
  return;
}



/* CowData<DocData::ConstantDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::ConstantDoc>::_copy_on_write(CowData<DocData::ConstantDoc> *this)

{
  CowData CVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  CowData *pCVar6;
  ulong uVar7;
  long lVar8;
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
  if (lVar2 * 0x60 != 0) {
    uVar7 = lVar2 * 0x60 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        pCVar6 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar5));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar6 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar6);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar6 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar6 + 8);
        }
        CVar1 = pCVar6[0x10];
        *(undefined8 *)(this_00 + 0x18) = 0;
        lVar3 = *(long *)(pCVar6 + 0x18);
        *(CowData *)(this_00 + 0x10) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x18,pCVar6 + 0x18);
        }
        *(undefined8 *)(this_00 + 0x20) = 0;
        if (*(long *)(pCVar6 + 0x20) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x20,pCVar6 + 0x20);
        }
        CVar1 = pCVar6[0x28];
        *(undefined8 *)(this_00 + 0x30) = 0;
        lVar3 = *(long *)(pCVar6 + 0x30);
        *(CowData *)(this_00 + 0x28) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x30,pCVar6 + 0x30);
        }
        CVar1 = pCVar6[0x38];
        *(undefined8 *)(this_00 + 0x40) = 0;
        lVar3 = *(long *)(pCVar6 + 0x40);
        *(CowData *)(this_00 + 0x38) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x40,pCVar6 + 0x40);
        }
        CVar1 = pCVar6[0x48];
        *(undefined8 *)(this_00 + 0x50) = 0;
        lVar3 = *(long *)(pCVar6 + 0x50);
        *(CowData *)(this_00 + 0x48) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x50,pCVar6 + 0x50);
        }
        *(undefined8 *)(this_00 + 0x58) = 0;
        if (*(long *)(pCVar6 + 0x58) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x58,pCVar6 + 0x58);
        }
        lVar8 = lVar8 + 1;
        this_00 = this_00 + 0x60;
      } while (lVar2 != lVar8);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<DocData::PropertyDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::PropertyDoc>::_copy_on_write(CowData<DocData::PropertyDoc> *this)

{
  CowData CVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  CowData *pCVar6;
  ulong uVar7;
  long lVar8;
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
  if (lVar2 * 0x78 != 0) {
    uVar7 = lVar2 * 0x78 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        pCVar6 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar5));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar6 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar6);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar6 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar6 + 8);
        }
        *(undefined8 *)(this_00 + 0x10) = 0;
        if (*(long *)(pCVar6 + 0x10) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x10,pCVar6 + 0x10);
        }
        CVar1 = pCVar6[0x18];
        *(undefined8 *)(this_00 + 0x20) = 0;
        lVar3 = *(long *)(pCVar6 + 0x20);
        *(CowData *)(this_00 + 0x18) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x20,pCVar6 + 0x20);
        }
        *(undefined8 *)(this_00 + 0x28) = 0;
        if (*(long *)(pCVar6 + 0x28) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x28,pCVar6 + 0x28);
        }
        *(undefined8 *)(this_00 + 0x30) = 0;
        if (*(long *)(pCVar6 + 0x30) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x30,pCVar6 + 0x30);
        }
        *(undefined8 *)(this_00 + 0x38) = 0;
        if (*(long *)(pCVar6 + 0x38) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x38,pCVar6 + 0x38);
        }
        CVar1 = pCVar6[0x40];
        *(undefined8 *)(this_00 + 0x48) = 0;
        lVar3 = *(long *)(pCVar6 + 0x48);
        *(CowData *)(this_00 + 0x40) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x48,pCVar6 + 0x48);
        }
        CVar1 = pCVar6[0x50];
        *(undefined8 *)(this_00 + 0x58) = 0;
        lVar3 = *(long *)(pCVar6 + 0x58);
        *(CowData *)(this_00 + 0x50) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x58,pCVar6 + 0x58);
        }
        CVar1 = pCVar6[0x60];
        *(undefined8 *)(this_00 + 0x68) = 0;
        lVar3 = *(long *)(pCVar6 + 0x68);
        *(CowData *)(this_00 + 0x60) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x68,pCVar6 + 0x68);
        }
        *(undefined8 *)(this_00 + 0x70) = 0;
        if (*(long *)(pCVar6 + 0x70) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x70,pCVar6 + 0x70);
        }
        lVar8 = lVar8 + 1;
        this_00 = this_00 + 0x78;
      } while (lVar2 != lVar8);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<DocData::ThemeItemDoc>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<DocData::ThemeItemDoc>::_copy_on_write(CowData<DocData::ThemeItemDoc> *this)

{
  CowData CVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  CowData *pCVar6;
  ulong uVar7;
  long lVar8;
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
  if (lVar2 * 0x50 != 0) {
    uVar7 = lVar2 * 0x50 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        pCVar6 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar5));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar6 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar6);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar6 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar6 + 8);
        }
        *(undefined8 *)(this_00 + 0x10) = 0;
        if (*(long *)(pCVar6 + 0x10) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x10,pCVar6 + 0x10);
        }
        *(undefined8 *)(this_00 + 0x18) = 0;
        if (*(long *)(pCVar6 + 0x18) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x18,pCVar6 + 0x18);
        }
        CVar1 = pCVar6[0x20];
        *(undefined8 *)(this_00 + 0x28) = 0;
        lVar3 = *(long *)(pCVar6 + 0x28);
        *(CowData *)(this_00 + 0x20) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x28,pCVar6 + 0x28);
        }
        CVar1 = pCVar6[0x30];
        *(undefined8 *)(this_00 + 0x38) = 0;
        lVar3 = *(long *)(pCVar6 + 0x38);
        *(CowData *)(this_00 + 0x30) = CVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref(this_00 + 0x38,pCVar6 + 0x38);
        }
        *(undefined8 *)(this_00 + 0x40) = 0;
        if (*(long *)(pCVar6 + 0x40) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x40,pCVar6 + 0x40);
        }
        *(undefined8 *)(this_00 + 0x48) = 0;
        if (*(long *)(pCVar6 + 0x48) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x48,pCVar6 + 0x48);
        }
        lVar8 = lVar8 + 1;
        this_00 = this_00 + 0x50;
      } while (lVar2 != lVar8);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* EditorHelpSearch::Runner::_populate_cache() */

void __thiscall EditorHelpSearch::Runner::_populate_cache(Runner *this)

{
  long *plVar1;
  TreeItem **ppTVar2;
  code *pcVar3;
  long lVar4;
  void *pvVar5;
  TreeItem *pTVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  long local_68;
  String local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::deselect_all();
  lVar4 = Tree::get_root();
  *(long *)(this + 0x228) = lVar4;
  if (lVar4 == 0) {
    uVar7 = Tree::create_item(*(TreeItem **)(this + 0x188),0);
    *(undefined8 *)(this + 0x228) = uVar7;
  }
  else {
    lVar4 = TreeItem::get_first_child();
    if (lVar4 != 0) {
      pvVar5 = (void *)0x0;
      uVar9 = 0;
      uVar10 = 0;
      do {
        uVar8 = (uint)uVar10;
        if (uVar8 == uVar9) {
          uVar9 = uVar8 * 2;
          if (uVar9 == 0) {
            uVar9 = 1;
          }
          pvVar5 = (void *)Memory::realloc_static(pvVar5,(ulong)uVar9 << 3,false);
          if (pvVar5 == (void *)0x0) {
LAB_00107330:
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)((long)pvVar5 + uVar10 * 8) = lVar4;
        uVar8 = uVar8 + 1;
        lVar4 = TreeItem::get_next();
        if (lVar4 == 0) goto LAB_00107370;
        uVar10 = (ulong)uVar8;
      } while( true );
    }
  }
LAB_00107512:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107540:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00107370:
  if (uVar8 != 0) {
    do {
      uVar8 = uVar8 - 1;
      ppTVar2 = *(TreeItem ***)(this + 400);
      TreeItem::get_metadata((int)local_58);
      Variant::operator_cast_to_String((Variant *)&local_68);
      HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
      ::insert(local_60,ppTVar2,SUB81((Variant *)&local_68,0));
      lVar4 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar4 = TreeItem::get_first_child();
      while (lVar4 != 0) {
        uVar10 = (ulong)uVar8;
        if (uVar8 == uVar9) {
          uVar9 = uVar8 * 2;
          if (uVar9 == 0) {
            uVar9 = 1;
          }
          pvVar5 = (void *)Memory::realloc_static(pvVar5,(ulong)uVar9 << 3,false);
          if (pvVar5 == (void *)0x0) goto LAB_00107330;
        }
        uVar8 = uVar8 + 1;
        *(long *)((long)pvVar5 + uVar10 * 8) = lVar4;
        lVar4 = TreeItem::get_next();
      }
      pTVar6 = (TreeItem *)TreeItem::get_parent();
      TreeItem::remove_child(pTVar6);
    } while (uVar8 != 0);
  }
  if (pvVar5 != (void *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pvVar5,false);
      return;
    }
    goto LAB_00107540;
  }
  goto LAB_00107512;
}



/* EditorHelpSearch::Runner::_phase_fill_member_items_init() */

undefined8 __thiscall EditorHelpSearch::Runner::_phase_fill_member_items_init(Runner *this)

{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  if ((*(long *)(this + 0x238) != 0) && (*(int *)(this + 0x25c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 600) * 4);
    if (uVar2 != 0) {
      lVar5 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x240) + lVar5) != 0) {
          *(int *)(*(long *)(this + 0x240) + lVar5) = 0;
          pvVar3 = *(void **)(*(long *)(this + 0x238) + lVar5 * 2);
          if (*(long *)((long)pvVar3 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar3 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)((long)pvVar3 + 0x10);
              *(undefined8 *)((long)pvVar3 + 0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(this + 0x238) + lVar5 * 2) = 0;
        }
        lVar5 = lVar5 + 4;
      } while ((ulong)uVar2 << 2 != lVar5);
    }
    *(undefined4 *)(this + 0x25c) = 0;
    *(undefined1 (*) [16])(this + 0x248) = (undefined1  [16])0x0;
  }
  _populate_cache(this);
  return 1;
}



/* EditorHelpSearch::Runner::_phase_class_items_init() */

undefined8 __thiscall EditorHelpSearch::Runner::_phase_class_items_init(Runner *this)

{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  *(undefined8 *)(this + 0x210) = *(undefined8 *)(this + 0x1f8);
  _populate_cache(this);
  if ((*(long *)(this + 0x238) != 0) && (*(int *)(this + 0x25c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 600) * 4);
    if (uVar2 != 0) {
      lVar5 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x240) + lVar5) != 0) {
          *(int *)(*(long *)(this + 0x240) + lVar5) = 0;
          pvVar3 = *(void **)(*(long *)(this + 0x238) + lVar5 * 2);
          if (*(long *)((long)pvVar3 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar3 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)((long)pvVar3 + 0x10);
              *(undefined8 *)((long)pvVar3 + 0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(this + 0x238) + lVar5 * 2) = 0;
        }
        lVar5 = lVar5 + 4;
      } while ((ulong)uVar2 << 2 != lVar5);
    }
    *(undefined4 *)(this + 0x25c) = 0;
    *(undefined1 (*) [16])(this + 0x248) = (undefined1  [16])0x0;
  }
  return 1;
}



/* EditorHelpSearch::Runner::_find_or_create_item(TreeItem*, String const&, TreeItem*&) */

undefined8 __thiscall
EditorHelpSearch::Runner::_find_or_create_item
          (Runner *this,TreeItem *param_1,String *param_2,TreeItem **param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
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
  TreeItem *pTVar38;
  undefined8 *puVar39;
  uint uVar40;
  int iVar41;
  long lVar42;
  long lVar43;
  long *plVar44;
  ulong uVar45;
  long lVar46;
  uint *puVar47;
  uint uVar48;
  uint uVar49;
  
  lVar5 = *(long *)(this + 400);
  if ((*(long *)(lVar5 + 8) != 0) && (*(int *)(lVar5 + 0x2c) != 0)) {
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar5 + 0x28) * 4);
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar5 + 0x28) * 8);
    uVar37 = String::hash();
    uVar45 = CONCAT44(0,uVar4);
    uVar40 = 1;
    if (uVar37 != 0) {
      uVar40 = uVar37;
    }
    lVar46 = *(long *)(lVar5 + 0x10);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar40 * lVar6;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar45;
    lVar42 = SUB168(auVar8 * auVar22,8);
    uVar37 = *(uint *)(lVar46 + lVar42 * 4);
    iVar41 = SUB164(auVar8 * auVar22,8);
    if (uVar37 != 0) {
      uVar48 = 0;
      do {
        if (uVar40 == uVar37) {
          cVar36 = String::operator==((String *)
                                      (*(long *)(*(long *)(lVar5 + 8) + lVar42 * 8) + 0x10),param_2)
          ;
          if (cVar36 != '\0') {
            puVar39 = (undefined8 *)
                      HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                      ::operator[](*(HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                     **)(this + 400),param_2);
            lVar5 = *(long *)(this + 400);
            *param_3 = (TreeItem *)*puVar39;
            if ((*(long *)(lVar5 + 8) == 0) || (*(int *)(lVar5 + 0x2c) == 0)) goto LAB_00107b4b;
            uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar5 + 0x28) * 4);
            lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar5 + 0x28) * 8);
            uVar37 = String::hash();
            uVar45 = CONCAT44(0,uVar4);
            lVar46 = *(long *)(lVar5 + 0x10);
            uVar40 = 1;
            if (uVar37 != 0) {
              uVar40 = uVar37;
            }
            uVar49 = 0;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar40 * lVar6;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            lVar42 = SUB168(auVar12 * auVar26,8);
            uVar37 = *(uint *)(lVar46 + lVar42 * 4);
            uVar48 = SUB164(auVar12 * auVar26,8);
            if (uVar37 == 0) goto LAB_00107b4b;
            goto LAB_001079bf;
          }
          lVar46 = *(long *)(lVar5 + 0x10);
        }
        uVar48 = uVar48 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(iVar41 + 1) * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar45;
        lVar42 = SUB168(auVar9 * auVar23,8);
        uVar37 = *(uint *)(lVar46 + lVar42 * 4);
        iVar41 = SUB164(auVar9 * auVar23,8);
      } while ((uVar37 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar37 * lVar6, auVar24._8_8_ = 0,
              auVar24._0_8_ = uVar45, auVar11._8_8_ = 0,
              auVar11._0_8_ = (ulong)((uVar4 + iVar41) - SUB164(auVar10 * auVar24,8)) * lVar6,
              auVar25._8_8_ = 0, auVar25._0_8_ = uVar45, uVar48 <= SUB164(auVar11 * auVar25,8)));
    }
  }
  pTVar38 = (TreeItem *)Tree::create_item(*(TreeItem **)(this + 0x188),(int)param_1);
  *param_3 = pTVar38;
  return 1;
  while( true ) {
    uVar49 = uVar49 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(uVar48 + 1) * lVar6;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar45;
    lVar42 = SUB168(auVar13 * auVar27,8);
    uVar37 = *(uint *)(lVar46 + lVar42 * 4);
    uVar48 = SUB164(auVar13 * auVar27,8);
    if ((uVar37 == 0) ||
       (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar37 * lVar6, auVar28._8_8_ = 0,
       auVar28._0_8_ = uVar45, auVar15._8_8_ = 0,
       auVar15._0_8_ = (ulong)((uVar4 + uVar48) - SUB164(auVar14 * auVar28,8)) * lVar6,
       auVar29._8_8_ = 0, auVar29._0_8_ = uVar45, SUB164(auVar15 * auVar29,8) < uVar49)) break;
LAB_001079bf:
    if (uVar40 == uVar37) {
      cVar36 = String::operator==((String *)(*(long *)(*(long *)(lVar5 + 8) + lVar42 * 8) + 0x10),
                                  param_2);
      if (cVar36 != '\0') {
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar46 = *(long *)(lVar5 + 8);
        lVar42 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar5 + 0x28) * 8);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar5 + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar4);
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)(uVar48 + 1) * lVar42;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = uVar45;
        lVar43 = SUB168(auVar16 * auVar30,8);
        puVar47 = (uint *)(lVar6 + lVar43 * 4);
        uVar37 = SUB164(auVar16 * auVar30,8);
        uVar40 = *puVar47;
        if ((uVar40 == 0) ||
           (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar40 * lVar42, auVar31._8_8_ = 0,
           auVar31._0_8_ = uVar45, auVar18._8_8_ = 0,
           auVar18._0_8_ = (ulong)((uVar4 + uVar37) - SUB164(auVar17 * auVar31,8)) * lVar42,
           auVar32._8_8_ = 0, auVar32._0_8_ = uVar45, uVar49 = uVar48,
           SUB164(auVar18 * auVar32,8) == 0)) goto LAB_00107ad4;
        goto LAB_00107a8d;
      }
      lVar46 = *(long *)(lVar5 + 0x10);
    }
  }
  goto LAB_00107b4b;
  while (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar40 * lVar42, auVar33._8_8_ = 0,
        auVar33._0_8_ = uVar45, auVar20._8_8_ = 0,
        auVar20._0_8_ = (ulong)((uVar37 + uVar4) - SUB164(auVar19 * auVar33,8)) * lVar42,
        auVar34._8_8_ = 0, auVar34._0_8_ = uVar45, uVar49 = uVar48, SUB164(auVar20 * auVar34,8) != 0
        ) {
LAB_00107a8d:
    uVar48 = uVar37;
    puVar1 = (uint *)(lVar6 + (ulong)uVar49 * 4);
    *puVar47 = *puVar1;
    puVar39 = (undefined8 *)(lVar46 + lVar43 * 8);
    *puVar1 = uVar40;
    puVar2 = (undefined8 *)(lVar46 + (ulong)uVar49 * 8);
    uVar7 = *puVar39;
    *puVar39 = *puVar2;
    *puVar2 = uVar7;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)(uVar48 + 1) * lVar42;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar45;
    lVar43 = SUB168(auVar21 * auVar35,8);
    puVar47 = (uint *)(lVar6 + lVar43 * 4);
    uVar37 = SUB164(auVar21 * auVar35,8);
    uVar40 = *puVar47;
    if (uVar40 == 0) break;
  }
LAB_00107ad4:
  uVar45 = (ulong)uVar48;
  plVar3 = (long *)(lVar46 + uVar45 * 8);
  *(undefined4 *)(lVar6 + uVar45 * 4) = 0;
  plVar44 = (long *)*plVar3;
  if (*(long **)(lVar5 + 0x18) == plVar44) {
    *(long *)(lVar5 + 0x18) = *plVar44;
    plVar44 = (long *)*plVar3;
  }
  if (*(long **)(lVar5 + 0x20) == plVar44) {
    *(long *)(lVar5 + 0x20) = plVar44[1];
    plVar44 = (long *)*plVar3;
  }
  if ((long *)plVar44[1] != (long *)0x0) {
    *(long *)plVar44[1] = *plVar44;
    plVar44 = (long *)*plVar3;
  }
  if (*plVar44 != 0) {
    *(long *)(*plVar44 + 8) = plVar44[1];
    plVar44 = (long *)*plVar3;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(plVar44 + 2));
  Memory::free_static(plVar44,false);
  *(undefined8 *)(*(long *)(lVar5 + 8) + uVar45 * 8) = 0;
  *(int *)(lVar5 + 0x2c) = *(int *)(lVar5 + 0x2c) + -1;
LAB_00107b4b:
  TreeItem::add_child(param_1);
  return 0;
}



/* EditorHelpSearch::Runner::_create_category_item(TreeItem*, String const&, StringName const&,
   String const&, String const&) */

undefined8
EditorHelpSearch::Runner::_create_category_item
          (TreeItem *param_1,String *param_2,StringName *param_3,String *param_4,String *param_5)

{
  undefined8 uVar1;
  Object *pOVar2;
  char cVar3;
  long in_FS_OFFSET;
  String local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = (Object *)&_LC139;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_70);
  operator+((char *)local_78,(String *)"class_");
  String::operator+((String *)&local_68,(String *)local_78);
  String::operator+(local_80,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_70 = 0;
  cVar3 = _find_or_create_item
                    ((Runner *)param_1,(TreeItem *)param_2,local_80,(TreeItem **)&local_70);
  uVar1 = local_70;
  if (cVar3 != '\0') {
    Control::get_editor_theme_icon((StringName *)&local_68);
    TreeItem::set_icon((int)uVar1,(Ref *)0x0);
    if (local_68 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_68;
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(local_68);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    local_68 = (Object *)0x0;
    if (*(long *)param_5 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_5);
    }
    TreeItem::set_text(uVar1,0,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Variant::Variant((Variant *)local_58,local_80);
    TreeItem::set_metadata((int)uVar1,(Variant *)0x0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  TreeItem::set_collapsed(SUB81(uVar1,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::_create_class_item(TreeItem*, DocData::ClassDoc const*, bool, String
   const&) */

TreeItem * __thiscall
EditorHelpSearch::Runner::_create_class_item
          (Runner *this,TreeItem *param_1,ClassDoc *param_2,bool param_3,String *param_4)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  TreeItem *pTVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  String local_b8 [8];
  String local_b0 [8];
  TreeItem *local_a8;
  undefined8 local_a0;
  String local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  Object *local_80;
  undefined8 local_78;
  long local_70;
  Object *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = (Object *)&_LC35;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  String::strip_edges(SUB81((CowData<char32_t> *)&local_68,0),(bool)((char)param_2 + '\x10'));
  DTR(local_b8,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  _build_keywords_tooltip((String *)&local_68);
  String::operator+=(local_b8,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  operator+((char *)local_b0,(String *)"class_name:");
  local_a8 = (TreeItem *)0x0;
  cVar5 = _find_or_create_item(this,param_1,local_b0,&local_a8);
  pTVar7 = local_a8;
  pSVar2 = EditorNode::singleton;
  if (cVar5 != '\0') {
    local_68 = (Object *)&_LC35;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    EditorNode::get_class_icon((String *)&local_68,pSVar2);
    iVar8 = (int)pTVar7;
    TreeItem::set_icon(iVar8,(Ref *)0x0);
    if (((local_68 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar4 = local_68, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_68), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = (Object *)&_LC35;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_78 = 0;
    local_68 = (Object *)0x10f5cf;
    local_60 = 5;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    TreeItem::set_text(pTVar7,1,(CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    TreeItem::set_tooltip_text(iVar8,(String *)0x0);
    TreeItem::set_tooltip_text(iVar8,(String *)0x1);
    Variant::Variant((Variant *)local_58,local_b0);
    TreeItem::set_metadata(iVar8,(Variant *)0x0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (param_2[0xe8] == (ClassDoc)0x0) {
      if (param_2[0xf8] != (ClassDoc)0x0) {
        if ((_create_class_item(TreeItem*,DocData::ClassDoc_const*,bool,String_const&)::{lambda()#2}
             ::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&_create_class_item(TreeItem*,DocData::ClassDoc_const*,bool,String_const&)
                                         ::{lambda()#2}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&_create_class_item(TreeItem*,DocData::ClassDoc_const*,bool,String_const&)
                               ::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_create_class_item(TreeItem*,DocData::ClassDoc_const*,bool,String_const&)::
                        {lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_create_class_item(TreeItem*,DocData::ClassDoc_const*,bool,String_const&)
                               ::{lambda()#2}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_80);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"");
        local_78 = 0;
        String::parse_latin1((String *)&local_78,"This class is marked as experimental.");
        TTR((String *)&local_68,(String *)&local_78);
        TreeItem::add_button(iVar8,(Ref *)0x0,(int)(StringName *)&local_80,false,(String *)0x0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
        pTVar7 = local_a8;
      }
    }
    else {
      if ((_create_class_item(TreeItem*,DocData::ClassDoc_const*,bool,String_const&)::{lambda()#1}::
           operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_create_class_item(TreeItem*,DocData::ClassDoc_const*,bool,String_const&)
                                       ::{lambda()#1}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&_create_class_item(TreeItem*,DocData::ClassDoc_const*,bool,String_const&)
                             ::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_create_class_item(TreeItem*,DocData::ClassDoc_const*,bool,String_const&)::
                      {lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_create_class_item(TreeItem*,DocData::ClassDoc_const*,bool,String_const&)
                             ::{lambda()#1}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_80);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"This class is marked as deprecated.");
      TTR((String *)&local_68,(String *)&local_78);
      TreeItem::add_button(iVar8,(Ref *)0x0,(int)(StringName *)&local_80,false,(String *)0x0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      pTVar7 = local_a8;
      if (((local_80 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pTVar7 = local_a8, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_80), pTVar7 = local_a8, cVar5 != '\0')) {
        (**(code **)(*(long *)local_80 + 0x140))(local_80);
        Memory::free_static(local_80,false);
        pTVar7 = local_a8;
      }
    }
  }
  TreeItem::set_collapsed(SUB81(pTVar7,0));
  iVar8 = (int)pTVar7;
  if (param_3) {
    TreeItem::set_custom_color(iVar8,(Color *)0x0);
    TreeItem::set_custom_color(iVar8,(Color *)0x1);
  }
  else {
    TreeItem::clear_custom_color(iVar8);
    TreeItem::clear_custom_color(iVar8);
  }
  if ((*(long *)param_4 == 0) || (*(uint *)(*(long *)param_4 + -8) < 2)) {
    local_68 = (Object *)0x0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_2);
    }
    TreeItem::set_text(pTVar7,0,(CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    local_78 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)param_4);
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"");
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"Matches the \"%s\" keyword.");
    TTR((String *)&local_80,(String *)&local_90);
    vformat<String>((StrRange *)&local_70,(String *)&local_80,(CowData<char32_t> *)&local_78);
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"      - ");
    String::operator+(local_98,(String *)param_2);
    String::operator+((String *)&local_68,local_98);
    TreeItem::set_text(pTVar7,0,(CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  if ((*(long *)(this + 0x198) != 0) && (1 < *(uint *)(*(long *)(this + 0x198) + -8))) {
    _match_item(this,pTVar7,(String *)param_2,false);
  }
  String::split((char *)&local_68,(bool)((char)param_2 + ' '),0x10f4f0);
  CowData<String>::_copy_on_write((CowData<String> *)&local_60);
  lVar9 = local_60;
  CowData<String>::_copy_on_write((CowData<String> *)&local_60);
  lVar10 = local_60;
  if (local_60 != 0) {
    lVar10 = local_60 + *(long *)(local_60 + -8) * 8;
  }
  for (; lVar10 != lVar9; lVar9 = lVar9 + 8) {
    String::strip_edges(SUB81((StrRange *)&local_70,0),SUB81(lVar9,0));
    _match_item(this,pTVar7,(String *)&local_70,true);
    lVar3 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pTVar7;
}



/* EditorHelpSearch::Runner::_create_member_item(TreeItem*, String const&, StringName const&, String
   const&, String const&, String const&, String const&, String const&, String const&, bool, bool,
   String const&) */

TreeItem * __thiscall
EditorHelpSearch::Runner::_create_member_item
          (Runner *this,TreeItem *param_1,String *param_2,StringName *param_3,String *param_4,
          String *param_5,String *param_6,String *param_7,String *param_8,String *param_9,
          bool param_10,bool param_11,String *param_12)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  TreeItem *pTVar9;
  long lVar10;
  long in_FS_OFFSET;
  String *local_f0;
  String local_a8 [8];
  TreeItem *local_a0;
  Object *local_98;
  undefined8 local_90;
  undefined8 local_88;
  Object *local_80;
  undefined8 local_78;
  long local_70;
  Object *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (Object *)&_LC139;
  local_70 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)&_LC139;
  local_88 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_88);
  operator+((char *)&local_90,(String *)"class_");
  String::operator+((String *)&local_80,(String *)&local_90);
  String::operator+((String *)&local_78,(String *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_78);
  String::operator+(local_a8,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_a0 = (TreeItem *)0x0;
  cVar4 = _find_or_create_item(this,param_1,local_a8,&local_a0);
  pTVar9 = local_a0;
  if (cVar4 != '\0') {
    Control::get_editor_theme_icon((StringName *)&local_68);
    iVar7 = (int)pTVar9;
    TreeItem::set_icon(iVar7,(Ref *)0x0);
    if (((local_68 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar3 = local_68, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_68), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))();
      Memory::free_static(pOVar3,false);
    }
    local_70 = 0;
    local_68 = (Object *)&_LC35;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    TTR((String *)&local_68,param_6);
    TreeItem::set_text(pTVar9,1,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    TreeItem::set_tooltip_text(iVar7,(String *)0x0);
    TreeItem::set_tooltip_text(iVar7,(String *)0x1);
    Variant::Variant((Variant *)local_58,local_a8);
    TreeItem::set_metadata(iVar7,(Variant *)0x0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar6 = (int)(String *)&local_80;
    if (param_10) {
      if ((_create_member_item(TreeItem*,String_const&,StringName_const&,String_const&,String_const&,String_const&,String_const&,String_const&,String_const&,bool,bool,String_const&)
           ::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_create_member_item(TreeItem*,String_const&,StringName_const&,String_const&,String_const&,String_const&,String_const&,String_const&,String_const&,bool,bool,String_const&)
                                       ::{lambda()#1}::operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&_create_member_item(TreeItem*,String_const&,StringName_const&,String_const&,String_const&,String_const&,String_const&,String_const&,String_const&,bool,bool,String_const&)
                             ::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_create_member_item(TreeItem*,String_const&,StringName_const&,String_const&,String_const&,String_const&,String_const&,String_const&,String_const&,bool,bool,String_const&)
                      ::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_create_member_item(TreeItem*,String_const&,StringName_const&,String_const&,String_const&,String_const&,String_const&,String_const&,String_const&,bool,bool,String_const&)
                             ::{lambda()#1}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_80);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"This member is marked as deprecated.");
      TTR((String *)&local_68,(String *)&local_78);
      TreeItem::add_button(iVar7,(Ref *)0x0,iVar6,false,(String *)0x0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      pTVar9 = local_a0;
      if (((local_80 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pTVar9 = local_a0, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_80), pTVar9 = local_a0, cVar4 != '\0')) {
        (**(code **)(*(long *)local_80 + 0x140))(local_80);
        Memory::free_static(local_80,false);
        pTVar9 = local_a0;
      }
    }
    else if (param_11) {
      if ((_create_member_item(TreeItem*,String_const&,StringName_const&,String_const&,String_const&,String_const&,String_const&,String_const&,String_const&,bool,bool,String_const&)
           ::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar5 = __cxa_guard_acquire(&_create_member_item(TreeItem*,String_const&,StringName_const&,String_const&,String_const&,String_const&,String_const&,String_const&,String_const&,bool,bool,String_const&)
                                       ::{lambda()#2}::operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&_create_member_item(TreeItem*,String_const&,StringName_const&,String_const&,String_const&,String_const&,String_const&,String_const&,String_const&,bool,bool,String_const&)
                             ::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_create_member_item(TreeItem*,String_const&,StringName_const&,String_const&,String_const&,String_const&,String_const&,String_const&,String_const&,bool,bool,String_const&)
                      ::{lambda()#2}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_create_member_item(TreeItem*,String_const&,StringName_const&,String_const&,String_const&,String_const&,String_const&,String_const&,String_const&,bool,bool,String_const&)
                             ::{lambda()#2}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_80);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"This member is marked as experimental.");
      TTR((String *)&local_68,(String *)&local_78);
      TreeItem::add_button(iVar7,(Ref *)0x0,iVar6,false,(String *)0x0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_80);
      pTVar9 = local_a0;
    }
  }
  local_98 = (Object *)0x0;
  if (((byte)this[0x1b3] & 0x40) == 0) {
    local_78 = 0;
    local_68 = (Object *)&_LC36;
    local_60 = 1;
    String::parse_latin1((StrRange *)&local_78);
    String::operator+((String *)&local_70,param_2);
    String::operator+((String *)&local_68,(String *)&local_70);
    if (local_98 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      local_98 = local_68;
      local_68 = (Object *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  else if (*(long *)param_5 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)param_5);
  }
  local_f0 = (String *)&local_98;
  if ((*(long *)param_12 != 0) && (1 < *(uint *)(*(long *)param_12 + -8))) {
    local_78 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)param_12);
    local_68 = (Object *)&_LC35;
    local_88 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_68 = (Object *)0x10f5ed;
    local_90 = 0;
    local_60 = 0x19;
    String::parse_latin1((StrRange *)&local_90);
    TTR((String *)&local_80,(String *)&local_90);
    vformat<String>((StrRange *)&local_70,(String *)&local_80,(String *)&local_78);
    operator+((char *)&local_68,(String *)"      - ");
    String::operator+=(local_f0,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  local_68 = (Object *)0x0;
  if (local_98 != (Object *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_f0);
  }
  TreeItem::set_text(pTVar9,0,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (((*(long *)(this + 0x198) != 0) && (2 < *(int *)(*(long *)(this + 0x198) + -8))) ||
     (cVar4 = String::operator==((String *)(this + 0x198),"@"), cVar4 != '\0')) {
    _match_item(this,pTVar9,param_4,false);
  }
  String::split((char *)&local_68,SUB81(param_9,0),0x10f4f0);
  CowData<String>::_copy_on_write((CowData<String> *)&local_60);
  lVar8 = local_60;
  CowData<String>::_copy_on_write((CowData<String> *)&local_60);
  lVar10 = local_60;
  if (local_60 != 0) {
    lVar10 = local_60 + *(long *)(local_60 + -8) * 8;
  }
  for (; lVar10 != lVar8; lVar8 = lVar8 + 8) {
    String::strip_edges(SUB81((StrRange *)&local_70,0),SUB81(lVar8,0));
    _match_item(this,pTVar9,(String *)&local_70,true);
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pTVar9;
}



/* EditorHelpSearch::Runner::_create_constructor_item(TreeItem*, DocData::ClassDoc const*,
   EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc> const&) */

undefined8 __thiscall
EditorHelpSearch::Runner::_create_constructor_item
          (Runner *this,TreeItem *param_1,ClassDoc *param_2,MemberMatch *param_3)

{
  String *pSVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long in_FS_OFFSET;
  String local_80 [8];
  String local_78 [8];
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = "(";
  local_60 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::operator+(local_80,(String *)param_2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "(";
  local_60 = 0;
  lVar10 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::operator+(local_78,(String *)param_2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  lVar8 = *(long *)(*(long *)param_3 + 0x58);
  if ((lVar8 != 0) && (0 < *(long *)(lVar8 + -8))) {
    do {
      local_68 = 0;
      local_50 = 1;
      lVar8 = lVar8 + lVar10 * 0x28;
      local_58 = " ";
      pSVar1 = (String *)(lVar8 + 8);
      String::parse_latin1((StrRange *)&local_68);
      String::operator+((String *)&local_60,pSVar1);
      String::operator+((String *)&local_58,(String *)&local_60);
      String::operator+=(local_80,(String *)&local_58);
      pcVar6 = local_58;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar2 = (long *)(local_58 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar2 = (long *)(local_60 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar2 = (long *)(local_68 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      String::operator+=(local_78,pSVar1);
      lVar8 = *(long *)(lVar8 + 0x20);
      if ((lVar8 != 0) && (1 < *(uint *)(lVar8 + -8))) {
        operator+((char *)&local_58,(String *)&_LC107);
        String::operator+=(local_80,(String *)&local_58);
        pcVar6 = local_58;
        if (local_58 != (undefined *)0x0) {
          LOCK();
          plVar2 = (long *)(local_58 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_58 = (undefined *)0x0;
            Memory::free_static(pcVar6 + -0x10,false);
          }
        }
      }
      lVar8 = *(long *)(*(long *)param_3 + 0x58);
      if (lVar8 == 0) break;
      if (lVar10 < *(long *)(lVar8 + -8) + -1) {
        String::operator+=(local_80,", ");
        String::operator+=(local_78,", ");
        lVar8 = *(long *)(*(long *)param_3 + 0x58);
        if (lVar8 == 0) break;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(long *)(lVar8 + -8));
  }
  String::operator+=(local_80,")");
  _build_keywords_tooltip((String *)&local_58);
  String::operator+=(local_80,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  String::operator+=(local_78,")");
  if (param_3[8] == (MemberMatch)0x0) {
    local_70 = 0;
    if (*(long *)(param_3 + 0x10) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(param_3 + 0x10));
    }
  }
  else {
    local_70 = 0;
  }
  lVar8 = *(long *)param_3;
  bVar3 = *(bool *)(lVar8 + 0x40);
  bVar4 = *(bool *)(lVar8 + 0x30);
  local_60 = 0;
  local_58 = "method";
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Constructor";
  local_68 = 0;
  local_50 = 0xb;
  String::parse_latin1((StrRange *)&local_68);
  pSVar1 = *(String **)param_3;
  if ((_create_constructor_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
       ::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar7 = __cxa_guard_acquire(&_create_constructor_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                                   ::{lambda()#1}::operator()()::sname), iVar7 != 0)) {
    _scs_create((char *)&_create_constructor_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_create_constructor_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                  ::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_create_constructor_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                         ::{lambda()#1}::operator()()::sname);
  }
  uVar9 = _create_member_item(this,param_1,(String *)param_2,
                              (StringName *)
                              &_create_constructor_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                               ::{lambda()#1}::operator()()::sname,pSVar1,local_78,
                              (String *)&local_68,(String *)&local_60,local_80,
                              (String *)(lVar8 + 0x70),bVar4,bVar3,(String *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



/* EditorHelpSearch::Runner::_create_method_item(TreeItem*, DocData::ClassDoc const*,
   EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc> const&) */

undefined8 __thiscall
EditorHelpSearch::Runner::_create_method_item
          (Runner *this,TreeItem *param_1,ClassDoc *param_2,MemberMatch *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  String *pSVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  ClassDoc local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _build_method_tooltip(local_78,(MethodDoc *)this);
  local_70 = 0;
  if ((param_3[8] == (MemberMatch)0x0) && (*(long *)(param_3 + 0x10) != 0)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(param_3 + 0x10));
  }
  lVar3 = *(long *)param_3;
  local_60 = 0;
  bVar1 = *(bool *)(lVar3 + 0x40);
  bVar2 = *(bool *)(lVar3 + 0x30);
  local_50 = 6;
  local_58 = "method";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Method";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  pSVar4 = *(String **)param_3;
  if (_create_method_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
      ::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_create_method_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                                 ::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_create_method_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                           ::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_method_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                    ::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_method_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                           ::{lambda()#1}::operator()()::sname);
    }
  }
  uVar6 = _create_member_item(this,param_1,(String *)param_2,
                              (StringName *)
                              &_create_method_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                               ::{lambda()#1}::operator()()::sname,pSVar4,pSVar4,(String *)&local_68
                              ,(String *)&local_60,(String *)local_78,(String *)(lVar3 + 0x70),bVar2
                              ,bVar1,(String *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::_create_operator_item(TreeItem*, DocData::ClassDoc const*,
   EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc> const&) */

undefined8 __thiscall
EditorHelpSearch::Runner::_create_operator_item
          (Runner *this,TreeItem *param_1,ClassDoc *param_2,MemberMatch *param_3)

{
  bool bVar1;
  bool bVar2;
  String *pSVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  CowData *pCVar7;
  long lVar8;
  long in_FS_OFFSET;
  ClassDoc local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _build_method_tooltip(local_80,(MethodDoc *)this);
  pCVar7 = *(CowData **)param_3;
  local_78 = 0;
  if (*(long *)pCVar7 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,pCVar7);
    pCVar7 = *(CowData **)param_3;
  }
  if (*(long *)(pCVar7 + 0x58) == 0) {
LAB_00109787:
    local_70 = 0;
    if ((param_3[8] == (MemberMatch)0x0) && (*(long *)(param_3 + 0x10) != 0)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(param_3 + 0x10));
    }
    lVar8 = *(long *)param_3;
    bVar1 = *(bool *)(lVar8 + 0x40);
    bVar2 = *(bool *)(lVar8 + 0x30);
    local_58 = "method";
    local_60 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Operator";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    pSVar3 = *(String **)param_3;
    if ((_create_operator_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
         ::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&_create_operator_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                                     ::{lambda()#1}::operator()()::sname), iVar5 != 0)) {
      _scs_create((char *)&_create_operator_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                           ::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_operator_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                    ::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_operator_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                           ::{lambda()#1}::operator()()::sname);
    }
    uVar6 = _create_member_item(this,param_1,(String *)param_2,
                                (StringName *)
                                &_create_operator_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                                 ::{lambda()#1}::operator()()::sname,pSVar3,(String *)&local_78,
                                (String *)&local_68,(String *)&local_60,(String *)local_80,
                                (String *)(lVar8 + 0x70),bVar2,bVar1,(String *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar6;
  }
  local_60 = 0;
  local_50 = 1;
  local_58 = ")";
  String::parse_latin1((StrRange *)&local_60);
  if (*(long *)(*(long *)param_3 + 0x58) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)param_3 + 0x58) + -8);
    if (0 < lVar8) {
      operator+((char *)&local_68,(String *)&_LC70);
      String::operator+((String *)&local_58,(String *)&local_68);
      String::operator+=((String *)&local_78,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      goto LAB_00109787;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar8,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* EditorHelpSearch::Runner::_create_signal_item(TreeItem*, DocData::ClassDoc const*,
   EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc> const&) */

undefined8 __thiscall
EditorHelpSearch::Runner::_create_signal_item
          (Runner *this,TreeItem *param_1,ClassDoc *param_2,MemberMatch *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  String *pSVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  ClassDoc local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _build_method_tooltip(local_78,(MethodDoc *)this);
  local_70 = 0;
  if ((param_3[8] == (MemberMatch)0x0) && (*(long *)(param_3 + 0x10) != 0)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(param_3 + 0x10));
  }
  lVar3 = *(long *)param_3;
  local_60 = 0;
  bVar1 = *(bool *)(lVar3 + 0x40);
  bVar2 = *(bool *)(lVar3 + 0x30);
  local_50 = 6;
  local_58 = "signal";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Signal";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  pSVar4 = *(String **)param_3;
  if (_create_signal_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
      ::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_create_signal_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                                 ::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_create_signal_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                           ::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_signal_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                    ::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_signal_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                           ::{lambda()#1}::operator()()::sname);
    }
  }
  uVar6 = _create_member_item(this,param_1,(String *)param_2,
                              (StringName *)
                              &_create_signal_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                               ::{lambda()#1}::operator()()::sname,pSVar4,pSVar4,(String *)&local_68
                              ,(String *)&local_60,(String *)local_78,(String *)(lVar3 + 0x70),bVar2
                              ,bVar1,(String *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::_create_annotation_item(TreeItem*, DocData::ClassDoc const*,
   EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc> const&) */

undefined8 __thiscall
EditorHelpSearch::Runner::_create_annotation_item
          (Runner *this,TreeItem *param_1,ClassDoc *param_2,MemberMatch *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  String *pSVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  ClassDoc local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _build_method_tooltip(local_80,(MethodDoc *)this);
  String::substr((int)local_78,(int)*(undefined8 *)param_3);
  local_70 = 0;
  if ((param_3[8] == (MemberMatch)0x0) && (*(long *)(param_3 + 0x10) != 0)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(param_3 + 0x10));
  }
  lVar3 = *(long *)param_3;
  local_60 = 0;
  bVar1 = *(bool *)(lVar3 + 0x40);
  bVar2 = *(bool *)(lVar3 + 0x30);
  local_50 = 10;
  local_58 = "annotation";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Annotation";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  pSVar4 = *(String **)param_3;
  if (_create_annotation_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
      ::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_create_annotation_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                                 ::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_create_annotation_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                           ::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_annotation_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                    ::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_annotation_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                           ::{lambda()#1}::operator()()::sname);
    }
  }
  uVar6 = _create_member_item(this,param_1,(String *)param_2,
                              (StringName *)
                              &_create_annotation_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>const&)
                               ::{lambda()#1}::operator()()::sname,pSVar4,(String *)local_78,
                              (String *)&local_68,(String *)&local_60,(String *)local_80,
                              (String *)(lVar3 + 0x70),bVar2,bVar1,(String *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::_create_constant_item(TreeItem*, DocData::ClassDoc const*,
   EditorHelpSearch::Runner::MemberMatch<DocData::ConstantDoc> const&) */

undefined8 __thiscall
EditorHelpSearch::Runner::_create_constant_item
          (Runner *this,TreeItem *param_1,ClassDoc *param_2,MemberMatch *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  String *pSVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  String local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::operator+((String *)&local_58,(String *)param_2);
  String::operator+(local_78,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  _build_keywords_tooltip((String *)&local_58);
  String::operator+=(local_78,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_70 = 0;
  if ((param_3[8] == (MemberMatch)0x0) && (*(long *)(param_3 + 0x10) != 0)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(param_3 + 0x10));
  }
  lVar3 = *(long *)param_3;
  bVar1 = *(bool *)(lVar3 + 0x48);
  bVar2 = *(bool *)(lVar3 + 0x38);
  local_58 = "constant";
  local_60 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Constant";
  local_68 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_68);
  pSVar4 = *(String **)param_3;
  if (_create_constant_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::ConstantDoc>const&)
      ::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_create_constant_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::ConstantDoc>const&)
                                 ::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_create_constant_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::ConstantDoc>const&)
                           ::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_constant_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::ConstantDoc>const&)
                    ::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_constant_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::ConstantDoc>const&)
                           ::{lambda()#1}::operator()()::sname);
    }
  }
  uVar6 = _create_member_item(this,param_1,(String *)param_2,
                              (StringName *)
                              &_create_constant_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::ConstantDoc>const&)
                               ::{lambda()#1}::operator()()::sname,pSVar4,pSVar4,(String *)&local_68
                              ,(String *)&local_60,local_78,(String *)(lVar3 + 0x58),bVar2,bVar1,
                              (String *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::_create_property_item(TreeItem*, DocData::ClassDoc const*,
   EditorHelpSearch::Runner::MemberMatch<DocData::PropertyDoc> const&) */

undefined8 __thiscall
EditorHelpSearch::Runner::_create_property_item
          (Runner *this,TreeItem *param_1,ClassDoc *param_2,MemberMatch *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  String *pSVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  String local_88 [8];
  String local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = ".";
  local_60 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = " ";
  local_78 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_78);
  String::operator+((String *)&local_70,(String *)(*(long *)param_3 + 8));
  String::operator+((String *)&local_68,(String *)&local_70);
  String::operator+((String *)&local_58,(String *)&local_68);
  String::operator+(local_88,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "(value) setter";
  local_60 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_60);
  local_78 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_78);
  operator+((char *)local_80,(String *)"\n    ");
  String::operator+((String *)&local_70,local_80);
  String::operator+((String *)&local_68,(String *)&local_70);
  String::operator+((String *)&local_58,(String *)&local_68);
  String::operator+=(local_88,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "() getter";
  local_60 = 0;
  local_50 = 9;
  String::parse_latin1((StrRange *)&local_60);
  local_78 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_78);
  operator+((char *)local_80,(String *)"\n    ");
  String::operator+((String *)&local_70,local_80);
  String::operator+((String *)&local_68,(String *)&local_70);
  String::operator+((String *)&local_58,(String *)&local_68);
  String::operator+=(local_88,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_70 = 0;
  if ((param_3[8] == (MemberMatch)0x0) && (*(long *)(param_3 + 0x10) != 0)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(param_3 + 0x10));
  }
  lVar3 = *(long *)param_3;
  bVar1 = *(bool *)(lVar3 + 0x60);
  bVar2 = *(bool *)(lVar3 + 0x50);
  local_60 = 0;
  local_58 = "property";
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Property";
  local_68 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_68);
  pSVar4 = *(String **)param_3;
  if (_create_property_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::PropertyDoc>const&)
      ::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_create_property_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::PropertyDoc>const&)
                                 ::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_create_property_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::PropertyDoc>const&)
                           ::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_property_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::PropertyDoc>const&)
                    ::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_property_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::PropertyDoc>const&)
                           ::{lambda()#1}::operator()()::sname);
    }
  }
  uVar6 = _create_member_item(this,param_1,(String *)param_2,
                              (StringName *)
                              &_create_property_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::PropertyDoc>const&)
                               ::{lambda()#1}::operator()()::sname,pSVar4,pSVar4,(String *)&local_68
                              ,(String *)&local_60,local_88,(String *)(lVar3 + 0x70),bVar2,bVar1,
                              (String *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::_create_theme_property_item(TreeItem*, DocData::ClassDoc const*,
   EditorHelpSearch::Runner::MemberMatch<DocData::ThemeItemDoc> const&) */

undefined8 __thiscall
EditorHelpSearch::Runner::_create_theme_property_item
          (Runner *this,TreeItem *param_1,ClassDoc *param_2,MemberMatch *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  String *pSVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  String local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = " ";
  local_78 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_78);
  String::operator+((String *)&local_70,(String *)(*(long *)param_3 + 8));
  String::operator+((String *)&local_68,(String *)&local_70);
  String::operator+((String *)&local_58,(String *)&local_68);
  String::operator+(local_80,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  _build_keywords_tooltip((String *)&local_58);
  String::operator+=(local_80,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_70 = 0;
  if ((param_3[8] == (MemberMatch)0x0) && (*(long *)(param_3 + 0x10) != 0)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(param_3 + 0x10));
  }
  lVar3 = *(long *)param_3;
  bVar1 = *(bool *)(lVar3 + 0x20);
  bVar2 = *(bool *)(lVar3 + 0x30);
  local_60 = 0;
  local_58 = "theme_item";
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Theme Property";
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  pSVar4 = *(String **)param_3;
  if (_create_theme_property_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::ThemeItemDoc>const&)
      ::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_create_theme_property_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::ThemeItemDoc>const&)
                                 ::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_create_theme_property_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::ThemeItemDoc>const&)
                           ::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_create_theme_property_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::ThemeItemDoc>const&)
                    ::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_create_theme_property_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::ThemeItemDoc>const&)
                           ::{lambda()#1}::operator()()::sname);
    }
  }
  uVar6 = _create_member_item(this,param_1,(String *)param_2,
                              (StringName *)
                              &_create_theme_property_item(TreeItem*,DocData::ClassDoc_const*,EditorHelpSearch::Runner::MemberMatch<DocData::ThemeItemDoc>const&)
                               ::{lambda()#1}::operator()()::sname,pSVar4,pSVar4,(String *)&local_68
                              ,(String *)&local_60,(String *)(lVar3 + 0x48),local_80,bVar1,bVar2,
                              (String *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::_create_class_hierarchy(DocData::ClassDoc const*, String const&, bool)
    */

long __thiscall
EditorHelpSearch::Runner::_create_class_hierarchy
          (Runner *this,ClassDoc *param_1,String *param_2,bool param_3)

{
  String *pSVar1;
  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
  *this_00;
  uint uVar2;
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
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  long in_FS_OFFSET;
  TreeItem *local_90;
  ulong local_48;
  long local_40;
  
  lVar14 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar14 != 0) && (puVar16 = (undefined8 *)(lVar14 + -8), lVar14 = 0, 1 < (uint)*puVar16)) {
    this_00 = (HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
               *)(this + 0x230);
    local_48 = local_48 & 0xffffffff00000000;
    cVar12 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
             ::_lookup_pos(this_00,(String *)param_1,(uint *)&local_48);
    if (cVar12 == '\0') {
      local_90 = *(TreeItem **)(this + 0x228);
      if ((*(long *)(param_1 + 8) != 0) && (1 < *(uint *)(*(long *)(param_1 + 8) + -8))) {
        pSVar1 = (String *)(param_1 + 8);
        local_48 = local_48 & 0xffffffff00000000;
        cVar12 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                 ::_lookup_pos(this_00,pSVar1,(uint *)&local_48);
        if (cVar12 == '\0') {
          lVar14 = EditorHelp::get_doc_data();
          if ((*(long *)(lVar14 + 0x10) != 0) && (*(int *)(lVar14 + 0x34) != 0)) {
            uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar14 + 0x30) * 4);
            lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar14 + 0x30) * 8);
            uVar13 = String::hash();
            uVar21 = CONCAT44(0,uVar2);
            uVar17 = 1;
            if (uVar13 != 0) {
              uVar17 = uVar13;
            }
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar17 * lVar3;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar21;
            lVar19 = SUB168(auVar4 * auVar8,8);
            uVar18 = SUB164(auVar4 * auVar8,8);
            lVar22 = *(long *)(lVar14 + 0x18);
            uVar13 = *(uint *)(lVar22 + lVar19 * 4);
            if (uVar13 != 0) {
              uVar20 = 0;
              do {
                if (uVar17 == uVar13) {
                  cVar12 = String::operator==((String *)
                                              (*(long *)(*(long *)(lVar14 + 0x10) + lVar19 * 8) +
                                              0x10),pSVar1);
                  if (cVar12 != '\0') {
                    local_48 = 0;
                    local_90 = (TreeItem *)
                               _create_class_hierarchy
                                         (this,(ClassDoc *)
                                               (*(long *)(*(long *)(lVar14 + 0x10) +
                                                         (ulong)uVar18 * 8) + 0x18),
                                          (String *)&local_48,true);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
                    break;
                  }
                  lVar22 = *(long *)(lVar14 + 0x18);
                }
                uVar20 = uVar20 + 1;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = (ulong)(uVar18 + 1) * lVar3;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar21;
                lVar19 = SUB168(auVar5 * auVar9,8);
                uVar13 = *(uint *)(lVar22 + lVar19 * 4);
                uVar18 = SUB164(auVar5 * auVar9,8);
                if ((uVar13 == 0) ||
                   (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar13 * lVar3, auVar10._8_8_ = 0,
                   auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
                   auVar7._0_8_ = (ulong)((uVar2 + uVar18) - SUB164(auVar6 * auVar10,8)) * lVar3,
                   auVar11._8_8_ = 0, auVar11._0_8_ = uVar21, SUB164(auVar7 * auVar11,8) < uVar20))
                break;
              } while( true );
            }
          }
        }
        else {
          puVar16 = (undefined8 *)
                    HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                    ::operator[](this_00,pSVar1);
          local_90 = (TreeItem *)*puVar16;
        }
      }
      lVar14 = _create_class_item(this,local_90,param_1,param_3,param_2);
      plVar15 = (long *)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                        ::operator[](this_00,(String *)param_1);
      *plVar15 = lVar14;
    }
    else {
      lVar14 = *(long *)(*(long *)(*(long *)(this + 0x238) + (local_48 & 0xffffffff) * 8) + 0x18);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar14;
}



/* EditorHelpSearch::Runner::_phase_fill_member_items() */

ulong __thiscall EditorHelpSearch::Runner::_phase_fill_member_items(Runner *this)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  ClassDoc *pCVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  String *pSVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  long local_90;
  TreeItem *local_80;
  undefined8 local_70;
  ClassDoc *local_68;
  undefined8 local_60;
  long local_58;
  undefined1 local_50;
  undefined8 local_48;
  long local_40;
  
  uVar10 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x218) == 0) goto LAB_0010ab0f;
  local_60 = 0;
  puVar11 = (undefined8 *)((ulong)(*(int *)(this + 0x218) - 1) * 0x10 + *(long *)(this + 0x220));
  local_68 = (ClassDoc *)*puVar11;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(puVar11 + 1));
  pCVar4 = local_68;
  uVar13 = *(int *)(this + 0x218) - 1;
  if (*(int *)(this + 0x218) == 0) {
    uVar13 = 0;
    if (*(int *)(this + 0x21c) == -1) {
LAB_0010ab99:
      pauVar6 = (undefined1 (*) [16])((ulong)uVar13 * 0x10 + *(long *)(this + 0x220));
      pauVar2 = (undefined1 (*) [16])
                (*(long *)(this + 0x220) + 0x10 + ((ulong)(-uVar13 - 2) + (ulong)uVar13) * 0x10);
      if (((int)pauVar2 - (int)pauVar6 & 0x10U) != 0) {
        *pauVar6 = (undefined1  [16])0x0;
        pauVar6 = pauVar6 + 1;
        if (pauVar6 == pauVar2) goto LAB_0010abf0;
      }
      do {
        *pauVar6 = (undefined1  [16])0x0;
        pauVar7 = pauVar6 + 2;
        pauVar6[1] = (undefined1  [16])0x0;
        pauVar6 = pauVar7;
      } while (pauVar7 != pauVar2);
    }
    else {
      *(undefined4 *)(this + 0x21c) = 0;
      pvVar12 = *(void **)(this + 0x220);
      lVar14 = Memory::realloc_static(pvVar12,0,false);
      *(long *)(this + 0x220) = lVar14;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        LocalVector<TreeItem*,unsigned_int,false,false>::resize((uint)pvVar12);
      }
      uVar13 = *(uint *)(this + 0x218);
      if (uVar13 != 0xffffffff) goto LAB_0010ab99;
    }
LAB_0010abf0:
    uVar13 = 0xffffffff;
  }
  else {
    lVar14 = (ulong)uVar13 << 4;
    uVar9 = uVar13;
    do {
      lVar15 = *(long *)(this + 0x220) + lVar14;
      if (*(long *)(lVar15 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar15 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar3 = *(long *)(lVar15 + 8);
          *(undefined8 *)(lVar15 + 8) = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar14 = lVar14 + 0x10;
    } while (uVar9 < *(uint *)(this + 0x218));
  }
  *(uint *)(this + 0x218) = uVar13;
  if (pCVar4 != (ClassDoc *)0x0) {
    pSVar8 = (String *)
             _create_class_hierarchy
                       (this,pCVar4,(String *)&local_60,
                        (bool)(~(byte)*(undefined4 *)(this + 0x1b0) & 1));
    TreeItem::get_first_child();
    TreeItem::set_collapsed(SUB81(pSVar8,0));
    iVar5 = (int)pSVar8;
    if (((byte)this[0x1b0] & 1) == 0) {
      TreeItem::set_custom_color(iVar5,(Color *)0x0);
      TreeItem::set_custom_color(iVar5,(Color *)0x1);
    }
    else {
      TreeItem::clear_custom_color(iVar5);
      TreeItem::clear_custom_color(iVar5);
    }
    uVar13 = *(uint *)(this + 0x1b0);
    uVar9 = uVar13 & 0x1ff;
    if (((uVar13 & 2) != 0) && (*(long *)(pCVar4 + 0x40) != 0)) {
      local_80 = (TreeItem *)pSVar8;
      if (uVar9 == 0x1ff) {
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"constructors");
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Constructors");
        if ((_phase_fill_member_items()::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar5 = __cxa_guard_acquire(&_phase_fill_member_items()::{lambda()#1}::operator()()::
                                         sname), iVar5 != 0)) {
          _scs_create((char *)&_phase_fill_member_items()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_phase_fill_member_items()::{lambda()#1}::operator()()::sname,&__dso_handle)
          ;
          __cxa_guard_release(&_phase_fill_member_items()::{lambda()#1}::operator()()::sname);
        }
        local_80 = (TreeItem *)
                   _create_category_item
                             ((TreeItem *)this,pSVar8,(StringName *)pCVar4,
                              (String *)
                              &_phase_fill_member_items()::{lambda()#1}::operator()()::sname,
                              (String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(pCVar4 + 0x40));
      lVar14 = *(long *)(pCVar4 + 0x40);
      CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(pCVar4 + 0x40));
      local_90 = *(long *)(pCVar4 + 0x40);
      if (local_90 != 0) {
        local_90 = local_90 + *(long *)(local_90 + -8) * 0x78;
      }
      for (; lVar14 != local_90; lVar14 = lVar14 + 0x78) {
        local_50 = 0;
        local_48 = 0;
        local_58 = lVar14;
        _create_constructor_item(this,local_80,pCVar4,(MemberMatch *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      uVar13 = *(uint *)(this + 0x1b0);
    }
    if (((uVar13 & 4) != 0) && (*(long *)(pCVar4 + 0x50) != 0)) {
      local_80 = (TreeItem *)pSVar8;
      if (uVar9 == 0x1ff) {
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"methods");
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Methods");
        if ((_phase_fill_member_items()::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar5 = __cxa_guard_acquire(&_phase_fill_member_items()::{lambda()#2}::operator()()::
                                         sname), iVar5 != 0)) {
          _scs_create((char *)&_phase_fill_member_items()::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_phase_fill_member_items()::{lambda()#2}::operator()()::sname,&__dso_handle)
          ;
          __cxa_guard_release(&_phase_fill_member_items()::{lambda()#2}::operator()()::sname);
        }
        local_80 = (TreeItem *)
                   _create_category_item
                             ((TreeItem *)this,pSVar8,(StringName *)pCVar4,
                              (String *)
                              &_phase_fill_member_items()::{lambda()#2}::operator()()::sname,
                              (String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(pCVar4 + 0x50));
      lVar14 = *(long *)(pCVar4 + 0x50);
      CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(pCVar4 + 0x50));
      local_90 = *(long *)(pCVar4 + 0x50);
      if (local_90 != 0) {
        local_90 = local_90 + *(long *)(local_90 + -8) * 0x78;
      }
      for (; lVar14 != local_90; lVar14 = lVar14 + 0x78) {
        local_50 = 0;
        local_48 = 0;
        local_58 = lVar14;
        _create_method_item(this,local_80,pCVar4,(MemberMatch *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      uVar13 = *(uint *)(this + 0x1b0);
    }
    if (((uVar13 & 8) != 0) && (*(long *)(pCVar4 + 0x60) != 0)) {
      local_80 = (TreeItem *)pSVar8;
      if (uVar9 == 0x1ff) {
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"operators");
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Operators");
        if ((_phase_fill_member_items()::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar5 = __cxa_guard_acquire(&_phase_fill_member_items()::{lambda()#3}::operator()()::
                                         sname), iVar5 != 0)) {
          _scs_create((char *)&_phase_fill_member_items()::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_phase_fill_member_items()::{lambda()#3}::operator()()::sname,&__dso_handle)
          ;
          __cxa_guard_release(&_phase_fill_member_items()::{lambda()#3}::operator()()::sname);
        }
        local_80 = (TreeItem *)
                   _create_category_item
                             ((TreeItem *)this,pSVar8,(StringName *)pCVar4,
                              (String *)
                              &_phase_fill_member_items()::{lambda()#3}::operator()()::sname,
                              (String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(pCVar4 + 0x60));
      lVar14 = *(long *)(pCVar4 + 0x60);
      CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(pCVar4 + 0x60));
      local_90 = *(long *)(pCVar4 + 0x60);
      if (local_90 != 0) {
        local_90 = local_90 + *(long *)(local_90 + -8) * 0x78;
      }
      for (; lVar14 != local_90; lVar14 = lVar14 + 0x78) {
        local_50 = 0;
        local_48 = 0;
        local_58 = lVar14;
        _create_operator_item(this,local_80,pCVar4,(MemberMatch *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      uVar13 = *(uint *)(this + 0x1b0);
    }
    if (((uVar13 & 0x10) != 0) && (*(long *)(pCVar4 + 0x70) != 0)) {
      local_80 = (TreeItem *)pSVar8;
      if (uVar9 == 0x1ff) {
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"signals");
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Signals");
        if ((_phase_fill_member_items()::{lambda()#4}::operator()()::sname == '\0') &&
           (iVar5 = __cxa_guard_acquire(&_phase_fill_member_items()::{lambda()#4}::operator()()::
                                         sname), iVar5 != 0)) {
          _scs_create((char *)&_phase_fill_member_items()::{lambda()#4}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_phase_fill_member_items()::{lambda()#4}::operator()()::sname,&__dso_handle)
          ;
          __cxa_guard_release(&_phase_fill_member_items()::{lambda()#4}::operator()()::sname);
        }
        local_80 = (TreeItem *)
                   _create_category_item
                             ((TreeItem *)this,pSVar8,(StringName *)pCVar4,
                              (String *)
                              &_phase_fill_member_items()::{lambda()#4}::operator()()::sname,
                              (String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(pCVar4 + 0x70));
      lVar14 = *(long *)(pCVar4 + 0x70);
      CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(pCVar4 + 0x70));
      local_90 = *(long *)(pCVar4 + 0x70);
      if (local_90 != 0) {
        local_90 = local_90 + *(long *)(local_90 + -8) * 0x78;
      }
      for (; lVar14 != local_90; lVar14 = lVar14 + 0x78) {
        local_50 = 0;
        local_48 = 0;
        local_58 = lVar14;
        _create_signal_item(this,local_80,pCVar4,(MemberMatch *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      uVar13 = *(uint *)(this + 0x1b0);
    }
    if (((uVar13 & 0x20) != 0) && (*(long *)(pCVar4 + 0x80) != 0)) {
      local_80 = (TreeItem *)pSVar8;
      if (uVar9 == 0x1ff) {
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"constants");
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Constants");
        if ((_phase_fill_member_items()::{lambda()#5}::operator()()::sname == '\0') &&
           (iVar5 = __cxa_guard_acquire(&_phase_fill_member_items()::{lambda()#5}::operator()()::
                                         sname), iVar5 != 0)) {
          _scs_create((char *)&_phase_fill_member_items()::{lambda()#5}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_phase_fill_member_items()::{lambda()#5}::operator()()::sname,&__dso_handle)
          ;
          __cxa_guard_release(&_phase_fill_member_items()::{lambda()#5}::operator()()::sname);
        }
        local_80 = (TreeItem *)
                   _create_category_item
                             ((TreeItem *)this,pSVar8,(StringName *)pCVar4,
                              (String *)
                              &_phase_fill_member_items()::{lambda()#5}::operator()()::sname,
                              (String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      CowData<DocData::ConstantDoc>::_copy_on_write
                ((CowData<DocData::ConstantDoc> *)(pCVar4 + 0x80));
      lVar14 = *(long *)(pCVar4 + 0x80);
      CowData<DocData::ConstantDoc>::_copy_on_write
                ((CowData<DocData::ConstantDoc> *)(pCVar4 + 0x80));
      local_90 = *(long *)(pCVar4 + 0x80);
      if (local_90 != 0) {
        local_90 = local_90 + *(long *)(local_90 + -8) * 0x60;
      }
      for (; lVar14 != local_90; lVar14 = lVar14 + 0x60) {
        local_50 = 0;
        local_48 = 0;
        local_58 = lVar14;
        _create_constant_item(this,local_80,pCVar4,(MemberMatch *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      uVar13 = *(uint *)(this + 0x1b0);
    }
    if (((uVar13 & 0x40) != 0) && (*(long *)(pCVar4 + 0xc0) != 0)) {
      local_80 = (TreeItem *)pSVar8;
      if (uVar9 == 0x1ff) {
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"properties");
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Properties");
        if ((_phase_fill_member_items()::{lambda()#6}::operator()()::sname == '\0') &&
           (iVar5 = __cxa_guard_acquire(&_phase_fill_member_items()::{lambda()#6}::operator()()::
                                         sname), iVar5 != 0)) {
          _scs_create((char *)&_phase_fill_member_items()::{lambda()#6}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_phase_fill_member_items()::{lambda()#6}::operator()()::sname,&__dso_handle)
          ;
          __cxa_guard_release(&_phase_fill_member_items()::{lambda()#6}::operator()()::sname);
        }
        local_80 = (TreeItem *)
                   _create_category_item
                             ((TreeItem *)this,pSVar8,(StringName *)pCVar4,
                              (String *)
                              &_phase_fill_member_items()::{lambda()#6}::operator()()::sname,
                              (String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      CowData<DocData::PropertyDoc>::_copy_on_write
                ((CowData<DocData::PropertyDoc> *)(pCVar4 + 0xc0));
      lVar14 = *(long *)(pCVar4 + 0xc0);
      CowData<DocData::PropertyDoc>::_copy_on_write
                ((CowData<DocData::PropertyDoc> *)(pCVar4 + 0xc0));
      local_90 = *(long *)(pCVar4 + 0xc0);
      if (local_90 != 0) {
        local_90 = local_90 + *(long *)(local_90 + -8) * 0x78;
      }
      for (; lVar14 != local_90; lVar14 = lVar14 + 0x78) {
        local_50 = 0;
        local_48 = 0;
        local_58 = lVar14;
        _create_property_item(this,local_80,pCVar4,(MemberMatch *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      uVar13 = *(uint *)(this + 0x1b0);
    }
    if (((uVar13 & 0x80) != 0) && (*(long *)(pCVar4 + 0xe0) != 0)) {
      local_80 = (TreeItem *)pSVar8;
      if (uVar9 == 0x1ff) {
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"theme_items");
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Theme Properties");
        if ((_phase_fill_member_items()::{lambda()#7}::operator()()::sname == '\0') &&
           (iVar5 = __cxa_guard_acquire(&_phase_fill_member_items()::{lambda()#7}::operator()()::
                                         sname), iVar5 != 0)) {
          _scs_create((char *)&_phase_fill_member_items()::{lambda()#7}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_phase_fill_member_items()::{lambda()#7}::operator()()::sname,&__dso_handle)
          ;
          __cxa_guard_release(&_phase_fill_member_items()::{lambda()#7}::operator()()::sname);
        }
        local_80 = (TreeItem *)
                   _create_category_item
                             ((TreeItem *)this,pSVar8,(StringName *)pCVar4,
                              (String *)
                              &_phase_fill_member_items()::{lambda()#7}::operator()()::sname,
                              (String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      CowData<DocData::ThemeItemDoc>::_copy_on_write
                ((CowData<DocData::ThemeItemDoc> *)(pCVar4 + 0xe0));
      lVar14 = *(long *)(pCVar4 + 0xe0);
      CowData<DocData::ThemeItemDoc>::_copy_on_write
                ((CowData<DocData::ThemeItemDoc> *)(pCVar4 + 0xe0));
      local_90 = *(long *)(pCVar4 + 0xe0);
      if (local_90 != 0) {
        local_90 = local_90 + *(long *)(local_90 + -8) * 0x50;
      }
      for (; lVar14 != local_90; lVar14 = lVar14 + 0x50) {
        local_50 = 0;
        local_48 = 0;
        local_58 = lVar14;
        _create_theme_property_item(this,local_80,pCVar4,(MemberMatch *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      uVar13 = *(uint *)(this + 0x1b0);
    }
    if (((uVar13 & 0x100) != 0) && (*(long *)(pCVar4 + 0xd0) != 0)) {
      if (uVar9 == 0x1ff) {
        local_58 = 0;
        String::parse_latin1((String *)&local_58,"annotations");
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Annotations");
        if ((_phase_fill_member_items()::{lambda()#8}::operator()()::sname == '\0') &&
           (iVar5 = __cxa_guard_acquire(&_phase_fill_member_items()::{lambda()#8}::operator()()::
                                         sname), iVar5 != 0)) {
          _scs_create((char *)&_phase_fill_member_items()::{lambda()#8}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_phase_fill_member_items()::{lambda()#8}::operator()()::sname,&__dso_handle)
          ;
          __cxa_guard_release(&_phase_fill_member_items()::{lambda()#8}::operator()()::sname);
        }
        pSVar8 = (String *)
                 _create_category_item
                           ((TreeItem *)this,pSVar8,(StringName *)pCVar4,
                            (String *)&_phase_fill_member_items()::{lambda()#8}::operator()()::sname
                            ,(String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(pCVar4 + 0xd0));
      lVar14 = *(long *)(pCVar4 + 0xd0);
      CowData<DocData::MethodDoc>::_copy_on_write((CowData<DocData::MethodDoc> *)(pCVar4 + 0xd0));
      local_90 = *(long *)(pCVar4 + 0xd0);
      if (local_90 != 0) {
        local_90 = local_90 + *(long *)(local_90 + -8) * 0x78;
      }
      if (lVar14 != local_90) {
        do {
          lVar15 = lVar14 + 0x78;
          local_50 = 0;
          local_48 = 0;
          local_58 = lVar14;
          _create_annotation_item(this,(TreeItem *)pSVar8,pCVar4,(MemberMatch *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          lVar14 = lVar15;
        } while (local_90 != lVar15);
      }
    }
  }
  uVar10 = CONCAT71((int7)((ulong)pCVar4 >> 8),*(int *)(this + 0x218) == 0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010ab0f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10 & 0xffffffff;
}



/* EditorHelpSearch::Runner::_phase_member_items() */

undefined8 __thiscall EditorHelpSearch::Runner::_phase_member_items(Runner *this)

{
  MemberMatch *pMVar1;
  String *pSVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  TreeItem *pTVar5;
  MemberMatch *pMVar6;
  
  puVar3 = *(undefined8 **)(this + 0x210);
  if (puVar3 == (undefined8 *)0x0) {
    return 1;
  }
  pSVar2 = (String *)puVar3[3];
  if (((pSVar2 != (String *)0x0) && (*(long *)pSVar2 != 0)) && (1 < *(uint *)(*(long *)pSVar2 + -8))
     ) {
    if (((byte)this[0x1b3] & 0x40) == 0) {
      pTVar5 = *(TreeItem **)(this + 0x228);
    }
    else {
      puVar4 = (undefined8 *)
               HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
               ::operator[]((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                             *)(this + 0x230),pSVar2);
      pTVar5 = (TreeItem *)*puVar4;
    }
    pMVar6 = (MemberMatch *)puVar3[7];
    pMVar1 = pMVar6 + (ulong)*(uint *)(puVar3 + 6) * 0x18;
    for (; pMVar6 != pMVar1; pMVar6 = pMVar6 + 0x18) {
      _create_constructor_item(this,pTVar5,(ClassDoc *)puVar3[3],pMVar6);
    }
    pMVar6 = (MemberMatch *)puVar3[9];
    pMVar1 = pMVar6 + (ulong)*(uint *)(puVar3 + 8) * 0x18;
    for (; pMVar1 != pMVar6; pMVar6 = pMVar6 + 0x18) {
      _create_method_item(this,pTVar5,(ClassDoc *)puVar3[3],pMVar6);
    }
    pMVar6 = (MemberMatch *)puVar3[0xb];
    pMVar1 = pMVar6 + (ulong)*(uint *)(puVar3 + 10) * 0x18;
    for (; pMVar1 != pMVar6; pMVar6 = pMVar6 + 0x18) {
      _create_operator_item(this,pTVar5,(ClassDoc *)puVar3[3],pMVar6);
    }
    pMVar6 = (MemberMatch *)puVar3[0xd];
    pMVar1 = pMVar6 + (ulong)*(uint *)(puVar3 + 0xc) * 0x18;
    for (; pMVar1 != pMVar6; pMVar6 = pMVar6 + 0x18) {
      _create_signal_item(this,pTVar5,(ClassDoc *)puVar3[3],pMVar6);
    }
    pMVar6 = (MemberMatch *)puVar3[0xf];
    pMVar1 = pMVar6 + (ulong)*(uint *)(puVar3 + 0xe) * 0x18;
    for (; pMVar1 != pMVar6; pMVar6 = pMVar6 + 0x18) {
      _create_constant_item(this,pTVar5,(ClassDoc *)puVar3[3],pMVar6);
    }
    pMVar6 = (MemberMatch *)puVar3[0x11];
    pMVar1 = pMVar6 + (ulong)*(uint *)(puVar3 + 0x10) * 0x18;
    for (; pMVar1 != pMVar6; pMVar6 = pMVar6 + 0x18) {
      _create_property_item(this,pTVar5,(ClassDoc *)puVar3[3],pMVar6);
    }
    pMVar6 = (MemberMatch *)puVar3[0x13];
    pMVar1 = pMVar6 + (ulong)*(uint *)(puVar3 + 0x12) * 0x18;
    for (; pMVar1 != pMVar6; pMVar6 = pMVar6 + 0x18) {
      _create_theme_property_item(this,pTVar5,(ClassDoc *)puVar3[3],pMVar6);
    }
    pMVar6 = (MemberMatch *)puVar3[0x15];
    pMVar1 = pMVar6 + (ulong)*(uint *)(puVar3 + 0x14) * 0x18;
    for (; pMVar1 != pMVar6; pMVar6 = pMVar6 + 0x18) {
      _create_annotation_item(this,pTVar5,(ClassDoc *)puVar3[3],pMVar6);
    }
    puVar3 = *(undefined8 **)(this + 0x210);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar3;
      *(undefined8 **)(this + 0x210) = puVar3;
    }
    return CONCAT71((int7)((ulong)puVar3 >> 8),puVar3 == (undefined8 *)0x0);
  }
  *(undefined8 *)(this + 0x210) = *puVar3;
  return 0;
}



/* EditorHelpSearch::Runner::_create_class_hierarchy(EditorHelpSearch::Runner::ClassMatch const&) */

long __thiscall EditorHelpSearch::Runner::_create_class_hierarchy(Runner *this,ClassMatch *param_1)

{
  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
  *this_00;
  char cVar1;
  ClassMatch *pCVar2;
  TreeItem *pTVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)*(String **)param_1;
  if ((lVar4 == 0) || (puVar6 = (undefined8 *)(lVar4 + -8), lVar4 = 0, (uint)*puVar6 < 2))
  goto LAB_0010bd09;
  this_00 = (HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
             *)(this + 0x230);
  local_38 = local_38 & 0xffffffff00000000;
  cVar1 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
          ::_lookup_pos(this_00,*(String **)param_1,(uint *)&local_38);
  if (cVar1 != '\0') {
    plVar5 = (long *)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                     ::operator[](this_00,*(String **)param_1);
    lVar4 = *plVar5;
    goto LAB_0010bd09;
  }
  pTVar3 = *(TreeItem **)(this + 0x228);
  lVar4 = *(long *)(*(long *)param_1 + 8);
  if ((lVar4 != 0) && (1 < *(uint *)(lVar4 + -8))) {
    local_38 = local_38 & 0xffffffff00000000;
    cVar1 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
            ::_lookup_pos(this_00,(String *)(*(long *)param_1 + 8),(uint *)&local_38);
    if (cVar1 == '\0') {
      pCVar2 = (ClassMatch *)
               HashMap<String,EditorHelpSearch::Runner::ClassMatch,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorHelpSearch::Runner::ClassMatch>>>
               ::operator[]((HashMap<String,EditorHelpSearch::Runner::ClassMatch,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorHelpSearch::Runner::ClassMatch>>>
                             *)(this + 0x1e0),(String *)(*(long *)param_1 + 8));
      if (*(long *)pCVar2 != 0) {
        pTVar3 = (TreeItem *)_create_class_hierarchy(this,pCVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)
               HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
               ::operator[](this_00,(String *)(*(long *)param_1 + 8));
      pTVar3 = (TreeItem *)*puVar6;
    }
  }
  local_38 = 0;
  if (param_1[8] == (ClassMatch)0x0) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_0010be60:
      bVar7 = true;
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)(param_1 + 0x10));
      if (param_1[8] != (ClassMatch)0x0) goto LAB_0010be44;
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0010be60;
      bVar7 = *(uint *)(*(long *)(param_1 + 0x10) + -8) < 2;
    }
  }
  else {
LAB_0010be44:
    bVar7 = false;
  }
  lVar4 = _create_class_item(this,pTVar3,*(ClassDoc **)param_1,bVar7,(String *)&local_38);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  plVar5 = (long *)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                   ::operator[](this_00,*(String **)param_1);
  *plVar5 = lVar4;
LAB_0010bd09:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::_phase_class_items() */

bool __thiscall EditorHelpSearch::Runner::_phase_class_items(Runner *this)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_28;
  long local_20;
  
  puVar1 = *(undefined8 **)(this + 0x210);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (puVar1 == (undefined8 *)0x0) {
    bVar2 = true;
    goto LAB_0010bf6b;
  }
  if (((byte)this[0x1b3] & 0x40) == 0) {
    if (*(char *)(puVar1 + 4) == '\0') {
      if ((puVar1[5] == 0) || (*(uint *)(puVar1[5] + -8) < 2)) goto LAB_0010bf5b;
      local_28 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_28,(CowData *)(puVar1 + 5));
    }
    else {
      local_28 = 0;
    }
    _create_class_item(this,*(TreeItem **)(this + 0x228),(ClassDoc *)puVar1[3],false,
                       (String *)&local_28);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
LAB_0010bf4f:
    puVar1 = *(undefined8 **)(this + 0x210);
    if (puVar1 != (undefined8 *)0x0) goto LAB_0010bf5b;
  }
  else {
    if (((*(char *)(puVar1 + 4) != '\0') ||
        ((((puVar1[5] != 0 && (1 < *(uint *)(puVar1[5] + -8))) || (*(int *)(puVar1 + 6) != 0)) ||
         ((*(int *)(puVar1 + 8) != 0 || (*(int *)(puVar1 + 10) != 0)))))) ||
       ((*(int *)(puVar1 + 0xc) != 0 ||
        (((*(int *)(puVar1 + 0xe) != 0 || (*(int *)(puVar1 + 0x10) != 0)) ||
         ((*(int *)(puVar1 + 0x12) != 0 || (*(int *)(puVar1 + 0x14) != 0)))))))) {
      _create_class_hierarchy(this,(ClassMatch *)(puVar1 + 3));
      goto LAB_0010bf4f;
    }
LAB_0010bf5b:
    puVar1 = (undefined8 *)*puVar1;
    *(undefined8 **)(this + 0x210) = puVar1;
  }
  bVar2 = puVar1 == (undefined8 *)0x0;
LAB_0010bf6b:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



/* EditorHelpSearch::Runner::_phase_fill_classes_init() */

undefined8 __thiscall EditorHelpSearch::Runner::_phase_fill_classes_init(Runner *this)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x1d0) != 0) {
    *(undefined4 *)(this + 0x1d0) = 0;
  }
  if (*(int *)(this + 0x218) != 0) {
    lVar8 = 0;
    do {
      lVar4 = lVar8 * 0x10 + *(long *)(this + 0x220);
      if (*(long *)(lVar4 + 8) != 0) {
        LOCK();
        plVar5 = (long *)(*(long *)(lVar4 + 8) + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          lVar2 = *(long *)(lVar4 + 8);
          *(undefined8 *)(lVar4 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < *(uint *)(this + 0x218));
    *(undefined4 *)(this + 0x218) = 0;
  }
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined4 *)(this + 0x268) = 0;
  lVar8 = EditorHelp::get_doc_data();
  local_40 = 0;
  local_30 = 0;
  local_38 = &_LC35;
  String::parse_latin1((StrRange *)&local_40);
  plVar5 = (long *)HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                   ::operator[]((HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                                 *)(lVar8 + 0x38),(String *)&local_40);
  lVar8 = *plVar5;
  if (lVar8 != 0) {
    lVar4 = *(long *)(lVar8 + 0x10);
    if (*(long *)(lVar8 + 0x10) == plVar5[1]) {
      lVar8 = 0;
    }
    else {
      do {
        lVar8 = lVar4;
        lVar4 = *(long *)(lVar8 + 8);
      } while (plVar5[1] != *(long *)(lVar8 + 8));
    }
  }
  uVar1 = *(uint *)(this + 0x1d0);
  pvVar6 = *(void **)(this + 0x1d8);
  if (uVar1 == *(uint *)(this + 0x1d4)) {
    uVar7 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar7 = 1;
    }
    *(int *)(this + 0x1d4) = (int)uVar7;
    pvVar6 = (void *)Memory::realloc_static(pvVar6,uVar7 * 8,false);
    *(void **)(this + 0x1d8) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar1 = *(uint *)(this + 0x1d0);
  }
  *(uint *)(this + 0x1d0) = uVar1 + 1;
  *(long *)((long)pvVar6 + (ulong)uVar1 * 8) = lVar8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::_phase_fill_classes() [clone .part.0] */

undefined8 __thiscall EditorHelpSearch::Runner::_phase_fill_classes(Runner *this)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  void *pvVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  String *pSVar22;
  uint uVar23;
  undefined8 *puVar24;
  CowData<char32_t> *this_00;
  long lVar25;
  uint uVar26;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  String *local_68;
  undefined8 local_60;
  String *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar15 = EditorHelp::get_doc_data();
  uVar23 = *(int *)(this + 0x1d0) - 1;
  if (*(int *)(this + 0x1d0) == 0) {
LAB_0010c1e3:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,0xffffffff,0,"p_index","count",""
               ,false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  plVar16 = (long *)(*(long *)(this + 0x1d8) + (ulong)uVar23 * 8);
  lVar1 = *plVar16;
  if ((*(long *)(lVar15 + 0x10) == 0) || (*(int *)(lVar15 + 0x34) == 0)) {
    lVar15 = *(long *)(lVar1 + 0x28);
    *plVar16 = lVar15;
    if (lVar15 == 0) {
      LocalVector<RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::Element*,unsigned_int,false,false>
      ::resize((LocalVector<RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::Element*,unsigned_int,false,false>
                *)(this + 0x1d0),uVar23);
    }
  }
  else {
    uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar15 + 0x30) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar15 + 0x30) * 8);
    uVar13 = String::hash();
    uVar21 = CONCAT44(0,uVar23);
    lVar25 = *(long *)(lVar15 + 0x18);
    uVar18 = 1;
    if (uVar13 != 0) {
      uVar18 = uVar13;
    }
    uVar26 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar18 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar21;
    lVar20 = SUB168(auVar3 * auVar7,8);
    uVar13 = *(uint *)(lVar25 + lVar20 * 4);
    uVar19 = SUB164(auVar3 * auVar7,8);
    if (uVar13 != 0) {
      do {
        if (uVar18 == uVar13) {
          cVar12 = String::operator==((String *)
                                      (*(long *)(*(long *)(lVar15 + 0x10) + lVar20 * 8) + 0x10),
                                      (String *)(lVar1 + 0x30));
          if (cVar12 != '\0') {
            pSVar22 = (String *)(*(long *)(*(long *)(lVar15 + 0x10) + (ulong)uVar19 * 8) + 0x18);
            goto LAB_0010c37a;
          }
          lVar25 = *(long *)(lVar15 + 0x18);
        }
        uVar26 = uVar26 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar19 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar21;
        lVar20 = SUB168(auVar4 * auVar8,8);
        uVar13 = *(uint *)(lVar25 + lVar20 * 4);
        uVar19 = SUB164(auVar4 * auVar8,8);
      } while ((uVar13 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar13 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar21, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar23 + uVar19) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar21, uVar26 <= SUB164(auVar6 * auVar10,8)));
    }
    pSVar22 = (String *)0x0;
LAB_0010c37a:
    uVar23 = *(int *)(this + 0x1d0) - 1;
    if (*(int *)(this + 0x1d0) == 0) goto LAB_0010c1e3;
    plVar16 = (long *)(*(long *)(this + 0x1d8) + (ulong)uVar23 * 8);
    lVar15 = *(long *)(*plVar16 + 0x28);
    *plVar16 = lVar15;
    if (lVar15 == 0) {
      LocalVector<RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::Element*,unsigned_int,false,false>
      ::resize((LocalVector<RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::Element*,unsigned_int,false,false>
                *)(this + 0x1d0),uVar23);
    }
    if (((pSVar22 == (String *)0x0) || (*(long *)pSVar22 == 0)) ||
       (*(uint *)(*(long *)pSVar22 + -8) < 2)) goto LAB_0010c25c;
    uVar23 = *(uint *)(this + 0x1b0);
    if (((((((uVar23 & 1) != 0) || (((uVar23 & 2) != 0 && (*(long *)(pSVar22 + 0x40) != 0)))) ||
          (((uVar23 & 4) != 0 && (*(long *)(pSVar22 + 0x50) != 0)))) ||
         (((((uVar23 & 8) != 0 && (*(long *)(pSVar22 + 0x60) != 0)) ||
           (((uVar23 & 0x10) != 0 && (*(long *)(pSVar22 + 0x70) != 0)))) ||
          (((uVar23 & 0x20) != 0 && (*(long *)(pSVar22 + 0x80) != 0)))))) ||
        (((uVar23 & 0x40) != 0 && (*(long *)(pSVar22 + 0xc0) != 0)))) ||
       ((((uVar23 & 0x80) != 0 && (*(long *)(pSVar22 + 0xe0) != 0)) ||
        (((uVar23 & 0x100) != 0 && (*(long *)(pSVar22 + 0xd0) != 0)))))) {
      if (((*(long *)(this + 0x198) == 0) || (*(uint *)(*(long *)(this + 0x198) + -8) < 2)) ||
         (iVar14 = String::findn(pSVar22,(int)this + 0x198), iVar14 != -1)) {
        uVar23 = *(uint *)(this + 0x218);
        local_70 = 0;
        pvVar17 = *(void **)(this + 0x220);
        local_50[0] = 0;
        local_58 = pSVar22;
        if (uVar23 == *(uint *)(this + 0x21c)) {
          uVar23 = uVar23 * 2;
          if (uVar23 == 0) {
            uVar23 = 1;
          }
          *(uint *)(this + 0x21c) = uVar23;
          pvVar17 = (void *)Memory::realloc_static(pvVar17,(ulong)uVar23 << 4,false);
          *(void **)(this + 0x220) = pvVar17;
          if (pvVar17 == (void *)0x0) goto LAB_0010c70d;
          uVar23 = *(uint *)(this + 0x218);
        }
        puVar24 = (undefined8 *)((long)pvVar17 + (ulong)uVar23 * 0x10);
        *(uint *)(this + 0x218) = uVar23 + 1;
        *puVar24 = pSVar22;
        this_00 = (CowData<char32_t> *)(puVar24 + 1);
        *(undefined8 *)this_00 = 0;
        CowData<char32_t>::_ref(this_00,(CowData *)local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      }
      else {
        _match_keywords((String *)&local_78,(String *)this);
        if ((local_78 != 0) && (1 < *(uint *)(local_78 + -8))) {
          local_60 = 0;
          local_68 = pSVar22;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_78);
          uVar23 = *(uint *)(this + 0x218);
          if (uVar23 == *(uint *)(this + 0x21c)) {
            uVar21 = (ulong)(uVar23 * 2);
            if (uVar23 * 2 == 0) {
              uVar21 = 1;
            }
            *(int *)(this + 0x21c) = (int)uVar21;
            lVar15 = Memory::realloc_static(*(void **)(this + 0x220),uVar21 << 4,false);
            *(long *)(this + 0x220) = lVar15;
            if (lVar15 == 0) goto LAB_0010c70d;
            uVar23 = *(uint *)(this + 0x218);
          }
          puVar24 = (undefined8 *)((ulong)uVar23 * 0x10 + *(long *)(this + 0x220));
          *(uint *)(this + 0x218) = uVar23 + 1;
          puVar24[1] = 0;
          *puVar24 = local_68;
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar24 + 1),(CowData *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      }
    }
    lVar15 = EditorHelp::get_doc_data();
    local_58 = (String *)((ulong)local_58 & 0xffffffff00000000);
    cVar12 = HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
             ::_lookup_pos((HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                            *)(lVar15 + 0x38),pSVar22,(uint *)&local_58);
    if (cVar12 != '\0') {
      lVar15 = EditorHelp::get_doc_data();
      plVar16 = (long *)HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                        ::operator[]((HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                                      *)(lVar15 + 0x38),pSVar22);
      lVar15 = *plVar16;
      if (lVar15 != 0) {
        lVar1 = *(long *)(lVar15 + 0x10);
        if (*(long *)(lVar15 + 0x10) == plVar16[1]) {
          lVar15 = 0;
        }
        else {
          do {
            lVar15 = lVar1;
            lVar1 = *(long *)(lVar15 + 8);
          } while (plVar16[1] != *(long *)(lVar15 + 8));
        }
      }
      uVar23 = *(uint *)(this + 0x1d0);
      pvVar17 = *(void **)(this + 0x1d8);
      if (uVar23 == *(uint *)(this + 0x1d4)) {
        uVar21 = (ulong)(uVar23 * 2);
        if (uVar23 * 2 == 0) {
          uVar21 = 1;
        }
        *(int *)(this + 0x1d4) = (int)uVar21;
        pvVar17 = (void *)Memory::realloc_static(pvVar17,uVar21 * 8,false);
        *(void **)(this + 0x1d8) = pvVar17;
        if (pvVar17 == (void *)0x0) {
LAB_0010c70d:
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        uVar23 = *(uint *)(this + 0x1d0);
      }
      *(uint *)(this + 0x1d0) = uVar23 + 1;
      *(long *)((long)pvVar17 + (ulong)uVar23 * 8) = lVar15;
    }
  }
LAB_0010c25c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* EditorHelpSearch::Runner::_phase_fill_classes() */

ulong __thiscall EditorHelpSearch::Runner::_phase_fill_classes(Runner *this)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x1d0);
  if (iVar1 == 0) {
    return 1;
  }
  uVar3 = iVar1 - 1;
  if (*(long *)(*(long *)(this + 0x1d8) + (ulong)uVar3 * 8) != 0) {
    uVar2 = _phase_fill_classes(this);
    return uVar2;
  }
  *(uint *)(this + 0x1d0) = uVar3;
  return (ulong)CONCAT31((int3)((uint)iVar1 >> 8),uVar3 == 0);
}



/* EditorHelpSearch::Runner::_fill() */

undefined8 __thiscall EditorHelpSearch::Runner::_fill(Runner *this)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = *(int *)(this + 0x17c);
  switch(iVar4) {
  case 0:
    cVar3 = _phase_fill_classes_init(this);
    break;
  case 1:
    if (*(int *)(this + 0x1d0) == 0) goto switchD_0010c7fc_caseD_2;
    uVar1 = *(int *)(this + 0x1d0) - 1;
    if (*(long *)(*(long *)(this + 0x1d8) + (ulong)uVar1 * 8) != 0) {
      cVar3 = _phase_fill_classes(this);
      break;
    }
    LocalVector<RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::Element*,unsigned_int,false,false>
    ::resize((LocalVector<RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::Element*,unsigned_int,false,false>
              *)(this + 0x1d0),uVar1);
    if (*(int *)(this + 0x1d0) != 0) {
      return 0;
    }
    goto LAB_0010c809;
  case 2:
  case 3:
    goto switchD_0010c7fc_caseD_2;
  case 4:
    if ((*(long *)(this + 0x238) != 0) && (*(int *)(this + 0x25c) != 0)) {
      lVar5 = 0;
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 600) * 4);
      if (uVar1 != 0) {
        do {
          if (*(int *)(*(long *)(this + 0x240) + lVar5) != 0) {
            *(int *)(*(long *)(this + 0x240) + lVar5) = 0;
            pvVar2 = *(void **)(*(long *)(this + 0x238) + lVar5 * 2);
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
            Memory::free_static(pvVar2,false);
            *(undefined8 *)(*(long *)(this + 0x238) + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar1 << 2);
      }
      *(undefined4 *)(this + 0x25c) = 0;
      *(undefined1 (*) [16])(this + 0x248) = (undefined1  [16])0x0;
    }
    _populate_cache(this);
    *(int *)(this + 0x17c) = *(int *)(this + 0x17c) + 1;
    return 0;
  case 5:
    cVar3 = _phase_fill_member_items(this);
    break;
  case 6:
    if (*(long *)(this + 0x260) != 0) {
      TreeItem::select((int)*(long *)(this + 0x260));
      iVar4 = *(int *)(this + 0x17c);
    }
    goto switchD_0010c7fc_caseD_2;
  case 7:
    goto switchD_0010c7fc_caseD_7;
  default:
    _err_print_error("_fill","editor/editor_help_search.cpp",0x1bd,
                     "Invalid or unhandled phase in EditorHelpSearch::Runner, aborting search.",0,1)
    ;
    goto switchD_0010c7fc_caseD_7;
  }
  if (cVar3 == '\0') {
    return 0;
  }
LAB_0010c809:
  iVar4 = *(int *)(this + 0x17c);
switchD_0010c7fc_caseD_2:
  *(int *)(this + 0x17c) = iVar4 + 1;
  return 0;
switchD_0010c7fc_caseD_7:
  return 1;
}



/* EditorHelpSearch::Runner::_phase_match_classes_init() */

undefined8 __thiscall EditorHelpSearch::Runner::_phase_match_classes_init(Runner *this)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined *local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x1c8) = 0;
  if (*(int *)(this + 0x1d0) != 0) {
    *(undefined4 *)(this + 0x1d0) = 0;
  }
  if (((byte)this[0x1b3] & 0x40) == 0) {
    lVar4 = EditorHelp::get_doc_data();
    *(undefined8 *)(this + 0x1c8) = *(undefined8 *)(lVar4 + 0x20);
  }
  else {
    lVar4 = EditorHelp::get_doc_data();
    local_50 = 0;
    local_40[0] = 0;
    local_48 = &_LC35;
    String::parse_latin1((StrRange *)&local_50);
    plVar5 = (long *)HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                     ::operator[]((HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                                   *)(lVar4 + 0x38),(String *)&local_50);
    lVar4 = *plVar5;
    if (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x10);
      if (*(long *)(lVar4 + 0x10) == plVar5[1]) {
        lVar4 = 0;
      }
      else {
        do {
          lVar4 = lVar3;
          lVar3 = *(long *)(lVar4 + 0x10);
        } while (plVar5[1] != *(long *)(lVar4 + 0x10));
      }
    }
    uVar1 = *(uint *)(this + 0x1d0);
    pvVar6 = *(void **)(this + 0x1d8);
    if (*(uint *)(this + 0x1d4) == uVar1) {
      uVar7 = (ulong)(uVar1 * 2);
      if (uVar1 * 2 == 0) {
        uVar7 = 1;
      }
      *(int *)(this + 0x1d4) = (int)uVar7;
      pvVar6 = (void *)Memory::realloc_static(pvVar6,uVar7 * 8,false);
      *(void **)(this + 0x1d8) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar1 = *(uint *)(this + 0x1d0);
    }
    *(uint *)(this + 0x1d0) = uVar1 + 1;
    *(long *)((long)pvVar6 + (ulong)uVar1 * 8) = lVar4;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if ((*(long *)(this + 0x1e8) != 0) && (*(int *)(this + 0x20c) != 0)) {
    lVar4 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x208) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x1f0) + lVar4) != 0) {
          *(int *)(*(long *)(this + 0x1f0) + lVar4) = 0;
          pvVar6 = *(void **)(*(long *)(this + 0x1e8) + lVar4 * 2);
          ClassMatch::~ClassMatch((ClassMatch *)((long)pvVar6 + 0x18));
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x10));
          Memory::free_static(pvVar6,false);
          *(undefined8 *)(*(long *)(this + 0x1e8) + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0x20c) = 0;
    *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  }
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined4 *)(this + 0x268) = 0;
  if ((*(long *)(this + 0x198) != 0) && (1 < *(uint *)(*(long *)(this + 0x198) + -8))) {
    String::split_spaces();
    if (*(long *)(this + 0x1a8) != local_40[0]) {
      CowData<String>::_unref((CowData<String> *)(this + 0x1a8));
      lVar4 = local_40[0];
      local_40[0] = 0;
      *(long *)(this + 0x1a8) = lVar4;
    }
    CowData<String>::_unref((CowData<String> *)local_40);
    if (*(long *)(this + 0x1a8) == 0) {
      local_48 = (undefined *)0x0;
      if (*(long *)(this + 0x198) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(this + 0x198));
      }
      Vector<String>::push_back((Vector<String> *)(this + 0x1a0),(CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::_phase_match_classes() */

bool __thiscall EditorHelpSearch::Runner::_phase_match_classes(Runner *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  String *pSVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ClassMatch *this_00;
  ulong uVar17;
  long *plVar18;
  void *pvVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  String *pSVar26;
  uint uVar27;
  String *pSVar28;
  long in_FS_OFFSET;
  bool bVar29;
  undefined1 auVar30 [16];
  String *local_228;
  String **local_220;
  String *local_208 [2];
  String *local_1f8;
  char local_1f0;
  undefined8 local_1e8 [2];
  String *local_1d8;
  char local_1d0;
  String *local_1c8 [2];
  String *local_1b8;
  char local_1b0;
  undefined8 local_1a8 [2];
  String *local_198;
  char local_190;
  String *local_188 [2];
  String *local_178;
  char local_170;
  undefined8 local_168 [2];
  String *local_158;
  char local_150;
  String *local_148 [2];
  String *local_138;
  char local_130;
  undefined8 local_128 [2];
  String *local_118;
  char local_110;
  String *local_108 [2];
  String *local_f8;
  char local_f0;
  undefined8 local_e8 [2];
  String *local_d8;
  undefined1 local_d0;
  String *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar16 = *(long *)(this + 0x1c8);
  if (lVar16 != 0) {
LAB_0010cd0d:
    pSVar28 = (String *)(lVar16 + 0x18);
    if (((*(long *)pSVar28 == 0) ||
        (iVar21 = (int)*(undefined8 *)(*(long *)pSVar28 + -8), iVar21 == 0)) || (iVar21 == 1)) {
      plVar18 = *(long **)(this + 0x1c8);
      if (plVar18 == (long *)0x0) {
        iVar21 = *(int *)(this + 0x1d0);
        pSVar28 = (String *)0x0;
        if (iVar21 == 0) goto LAB_0010dc48;
        goto LAB_0010d15e;
      }
    }
    else {
      StringName::StringName((StringName *)&local_d8,pSVar28,false);
      cVar13 = _is_class_disabled_by_feature_profile(this,(StringName *)&local_d8);
      if (cVar13 == '\0') {
        if ((StringName::configured != '\0') && (local_d8 != (String *)0x0)) {
          StringName::unref();
        }
        uVar14 = *(uint *)(this + 0x1b0);
        local_d0 = 0;
        local_c8 = (String *)0x0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = (void *)0x0;
        local_80 = 0;
        local_78 = (void *)0x0;
        local_70 = 0;
        local_68 = (void *)0x0;
        local_60 = 0;
        local_58 = (void *)0x0;
        local_50 = 0;
        local_48 = (void *)0x0;
        local_d8 = pSVar28;
        if ((uVar14 & 1) != 0) {
          iVar21 = (int)this + 0x198;
          if ((uVar14 & 0x20000000) == 0) {
            iVar21 = String::findn(pSVar28,iVar21);
          }
          else {
            iVar21 = String::find(pSVar28,iVar21);
          }
          local_d0 = iVar21 != -1;
          _match_keywords((String *)&local_f8,(String *)this);
          if (local_f8 != (String *)0x0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            local_c8 = local_f8;
            local_f8 = (String *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          uVar14 = *(uint *)(this + 0x1b0);
        }
        if ((uVar14 & 2) != 0) {
          _match_method_name_and_push_back(this,(Vector *)(lVar16 + 0x50),(LocalVector *)&local_c0);
          uVar14 = *(uint *)(this + 0x1b0);
        }
        if ((uVar14 & 4) != 0) {
          _match_method_name_and_push_back(this,(Vector *)(lVar16 + 0x60),(LocalVector *)&local_b0);
          uVar14 = *(uint *)(this + 0x1b0);
        }
        if ((uVar14 & 8) != 0) {
          _match_method_name_and_push_back(this,(Vector *)(lVar16 + 0x70),(LocalVector *)&local_a0);
          uVar14 = *(uint *)(this + 0x1b0);
        }
        if ((uVar14 & 0x10) != 0) {
          CowData<DocData::MethodDoc>::_copy_on_write
                    ((CowData<DocData::MethodDoc> *)(lVar16 + 0x88));
          pSVar26 = *(String **)(lVar16 + 0x88);
          CowData<DocData::MethodDoc>::_copy_on_write
                    ((CowData<DocData::MethodDoc> *)(lVar16 + 0x88));
          local_228 = *(String **)(lVar16 + 0x88);
          if (local_228 != (String *)0x0) {
            local_228 = local_228 + *(long *)(local_228 + -8) * 0x78;
          }
          for (; pSVar26 != local_228; pSVar26 = pSVar26 + 0x78) {
            local_208[0] = (String *)0x0;
            cVar13 = _all_terms_in_name(this,pSVar26);
            _match_keywords_in_all_terms((Runner *)&local_f8,(String *)this);
            pSVar12 = local_f8;
            if (local_f8 != (String *)0x0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_208);
              local_f8 = (String *)0x0;
              local_208[0] = pSVar12;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            if ((cVar13 != '\0') ||
               ((local_208[0] != (String *)0x0 && (1 < *(uint *)(local_208[0] + -8))))) {
              local_1e8[0] = 0;
              local_1f8 = pSVar26;
              local_1f0 = cVar13;
              CowData<char32_t>::_ref((CowData<char32_t> *)local_1e8,(CowData *)local_208);
              uVar20 = local_90;
              iVar21 = (int)local_90;
              if ((int)local_90 == local_90._4_4_) {
                uVar17 = (ulong)(uint)((int)local_90 * 2);
                if ((int)local_90 * 2 == 0) {
                  uVar17 = 1;
                }
                local_90 = CONCAT44((int)uVar17,(int)local_90);
                local_88 = (void *)Memory::realloc_static(local_88,uVar17 * 0x18,false);
                if (local_88 == (void *)0x0) goto LAB_0010d2ae;
              }
              local_90 = CONCAT44(local_90._4_4_,iVar21 + 1);
              puVar1 = (undefined8 *)((long)local_88 + (uVar20 & 0xffffffff) * 0x18);
              puVar1[2] = 0;
              *puVar1 = local_1f8;
              *(char *)(puVar1 + 1) = local_1f0;
              CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 2),(CowData *)local_1e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_1e8);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_208);
          }
          uVar14 = *(uint *)(this + 0x1b0);
        }
        if ((uVar14 & 0x20) != 0) {
          CowData<DocData::ConstantDoc>::_copy_on_write
                    ((CowData<DocData::ConstantDoc> *)(lVar16 + 0x98));
          pSVar26 = *(String **)(lVar16 + 0x98);
          CowData<DocData::ConstantDoc>::_copy_on_write
                    ((CowData<DocData::ConstantDoc> *)(lVar16 + 0x98));
          local_228 = *(String **)(lVar16 + 0x98);
          if (local_228 != (String *)0x0) {
            local_228 = local_228 + *(long *)(local_228 + -8) * 0x60;
          }
          for (; pSVar26 != local_228; pSVar26 = pSVar26 + 0x60) {
            local_1d8 = (String *)0x0;
            local_1c8[0] = (String *)0x0;
            cVar13 = _all_terms_in_name(this,pSVar26);
            local_1d0 = cVar13;
            _match_keywords_in_all_terms((Runner *)&local_f8,(String *)this);
            pSVar12 = local_f8;
            if (local_f8 != (String *)0x0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
              local_f8 = (String *)0x0;
              local_1c8[0] = pSVar12;
              cVar13 = local_1d0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            if ((cVar13 != '\0') ||
               ((local_1c8[0] != (String *)0x0 && (1 < *(uint *)(local_1c8[0] + -8))))) {
              local_1a8[0] = 0;
              local_1d8 = pSVar26;
              local_1b8 = pSVar26;
              local_1b0 = cVar13;
              CowData<char32_t>::_ref((CowData<char32_t> *)local_1a8,(CowData *)local_1c8);
              uVar20 = local_80;
              iVar21 = (int)local_80;
              if ((int)local_80 == local_80._4_4_) {
                uVar17 = (ulong)(uint)((int)local_80 * 2);
                if ((int)local_80 * 2 == 0) {
                  uVar17 = 1;
                }
                local_80 = CONCAT44((int)uVar17,(int)local_80);
                local_78 = (void *)Memory::realloc_static(local_78,uVar17 * 0x18,false);
                if (local_78 == (void *)0x0) goto LAB_0010d2ae;
              }
              local_80 = CONCAT44(local_80._4_4_,iVar21 + 1);
              puVar1 = (undefined8 *)((long)local_78 + (uVar20 & 0xffffffff) * 0x18);
              puVar1[2] = 0;
              *puVar1 = local_1b8;
              *(char *)(puVar1 + 1) = local_1b0;
              CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 2),(CowData *)local_1a8);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_1a8);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_1c8);
          }
          uVar14 = *(uint *)(this + 0x1b0);
        }
        if ((uVar14 & 0x40) != 0) {
          CowData<DocData::PropertyDoc>::_copy_on_write
                    ((CowData<DocData::PropertyDoc> *)(lVar16 + 0xd8));
          pSVar26 = *(String **)(lVar16 + 0xd8);
          CowData<DocData::PropertyDoc>::_copy_on_write
                    ((CowData<DocData::PropertyDoc> *)(lVar16 + 0xd8));
          local_228 = *(String **)(lVar16 + 0xd8);
          if (local_228 != (String *)0x0) {
            local_228 = local_228 + *(long *)(local_228 + -8) * 0x78;
          }
          for (; pSVar26 != local_228; pSVar26 = pSVar26 + 0x78) {
            local_198 = (String *)0x0;
            local_188[0] = (String *)0x0;
            cVar13 = _all_terms_in_name(this,pSVar26);
            local_190 = cVar13;
            _match_keywords_in_all_terms((Runner *)&local_f8,(String *)this);
            pSVar12 = local_f8;
            if (local_f8 != (String *)0x0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_188);
              local_f8 = (String *)0x0;
              local_188[0] = pSVar12;
              cVar13 = local_190;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            if ((cVar13 != '\0') ||
               ((local_188[0] != (String *)0x0 && (1 < *(uint *)(local_188[0] + -8))))) {
              local_168[0] = 0;
              local_198 = pSVar26;
              local_178 = pSVar26;
              local_170 = cVar13;
              CowData<char32_t>::_ref((CowData<char32_t> *)local_168,(CowData *)local_188);
              uVar20 = local_70;
              iVar21 = (int)local_70;
              if ((int)local_70 == local_70._4_4_) {
                uVar17 = (ulong)(uint)((int)local_70 * 2);
                if ((int)local_70 * 2 == 0) {
                  uVar17 = 1;
                }
                local_70 = CONCAT44((int)uVar17,(int)local_70);
                local_68 = (void *)Memory::realloc_static(local_68,uVar17 * 0x18,false);
                if (local_68 == (void *)0x0) goto LAB_0010d2ae;
              }
              local_70 = CONCAT44(local_70._4_4_,iVar21 + 1);
              puVar1 = (undefined8 *)((long)local_68 + (uVar20 & 0xffffffff) * 0x18);
              puVar1[2] = 0;
              *puVar1 = local_178;
              *(char *)(puVar1 + 1) = local_170;
              CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 2),(CowData *)local_168);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_188);
          }
          uVar14 = *(uint *)(this + 0x1b0);
        }
        if ((uVar14 & 0x80) != 0) {
          CowData<DocData::ThemeItemDoc>::_copy_on_write
                    ((CowData<DocData::ThemeItemDoc> *)(lVar16 + 0xf8));
          pSVar26 = *(String **)(lVar16 + 0xf8);
          CowData<DocData::ThemeItemDoc>::_copy_on_write
                    ((CowData<DocData::ThemeItemDoc> *)(lVar16 + 0xf8));
          local_228 = *(String **)(lVar16 + 0xf8);
          if (local_228 != (String *)0x0) {
            local_228 = local_228 + *(long *)(local_228 + -8) * 0x50;
          }
          for (; pSVar26 != local_228; pSVar26 = pSVar26 + 0x50) {
            local_158 = (String *)0x0;
            local_148[0] = (String *)0x0;
            cVar13 = _all_terms_in_name(this,pSVar26);
            local_150 = cVar13;
            _match_keywords_in_all_terms((Runner *)&local_f8,(String *)this);
            pSVar12 = local_f8;
            if (local_f8 != (String *)0x0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
              local_f8 = (String *)0x0;
              local_148[0] = pSVar12;
              cVar13 = local_150;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            if ((cVar13 != '\0') ||
               ((local_148[0] != (String *)0x0 && (1 < *(uint *)(local_148[0] + -8))))) {
              local_128[0] = 0;
              local_158 = pSVar26;
              local_138 = pSVar26;
              local_130 = cVar13;
              CowData<char32_t>::_ref((CowData<char32_t> *)local_128,(CowData *)local_148);
              uVar20 = local_60;
              iVar21 = (int)local_60;
              if ((int)local_60 == local_60._4_4_) {
                uVar17 = (ulong)(uint)((int)local_60 * 2);
                if ((int)local_60 * 2 == 0) {
                  uVar17 = 1;
                }
                local_60 = CONCAT44((int)uVar17,(int)local_60);
                local_58 = (void *)Memory::realloc_static(local_58,uVar17 * 0x18,false);
                if (local_58 == (void *)0x0) goto LAB_0010d2ae;
              }
              local_60 = CONCAT44(local_60._4_4_,iVar21 + 1);
              puVar1 = (undefined8 *)((long)local_58 + (uVar20 & 0xffffffff) * 0x18);
              puVar1[2] = 0;
              *puVar1 = local_138;
              *(char *)(puVar1 + 1) = local_130;
              CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 2),(CowData *)local_128);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
          }
          uVar14 = *(uint *)(this + 0x1b0);
        }
        if ((uVar14 & 0x100) != 0) {
          CowData<DocData::MethodDoc>::_copy_on_write
                    ((CowData<DocData::MethodDoc> *)(lVar16 + 0xe8));
          pSVar26 = *(String **)(lVar16 + 0xe8);
          CowData<DocData::MethodDoc>::_copy_on_write
                    ((CowData<DocData::MethodDoc> *)(lVar16 + 0xe8));
          local_228 = *(String **)(lVar16 + 0xe8);
          if (local_228 != (String *)0x0) {
            local_228 = local_228 + *(long *)(local_228 + -8) * 0x78;
          }
          if (pSVar26 != local_228) {
            do {
              local_118 = (String *)0x0;
              local_108[0] = (String *)0x0;
              cVar13 = _all_terms_in_name(this,pSVar26);
              local_110 = cVar13;
              _match_keywords_in_all_terms((Runner *)&local_f8,(String *)this);
              pSVar12 = local_f8;
              if (local_f8 != (String *)0x0) {
                CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
                local_f8 = (String *)0x0;
                local_108[0] = pSVar12;
                cVar13 = local_110;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
              if ((cVar13 != '\0') ||
                 ((local_108[0] != (String *)0x0 && (1 < *(uint *)(local_108[0] + -8))))) {
                local_e8[0] = 0;
                local_118 = pSVar26;
                local_f8 = pSVar26;
                local_f0 = cVar13;
                CowData<char32_t>::_ref((CowData<char32_t> *)local_e8,(CowData *)local_108);
                uVar20 = local_50;
                iVar21 = (int)local_50;
                if ((int)local_50 == local_50._4_4_) {
                  uVar17 = (ulong)(uint)((int)local_50 * 2);
                  if ((int)local_50 * 2 == 0) {
                    uVar17 = 1;
                  }
                  local_50 = CONCAT44((int)uVar17,(int)local_50);
                  local_48 = (void *)Memory::realloc_static(local_48,uVar17 * 0x18,false);
                  if (local_48 == (void *)0x0) goto LAB_0010d2ae;
                }
                local_50 = CONCAT44(local_50._4_4_,iVar21 + 1);
                puVar1 = (undefined8 *)((long)local_48 + (uVar20 & 0xffffffff) * 0x18);
                puVar1[2] = 0;
                *puVar1 = local_f8;
                *(char *)(puVar1 + 1) = local_f0;
                CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 2),(CowData *)local_e8);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
              }
              pSVar26 = pSVar26 + 0x78;
              CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
            } while (local_228 != pSVar26);
          }
        }
        this_00 = (ClassMatch *)
                  HashMap<String,EditorHelpSearch::Runner::ClassMatch,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorHelpSearch::Runner::ClassMatch>>>
                  ::operator[]((HashMap<String,EditorHelpSearch::Runner::ClassMatch,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorHelpSearch::Runner::ClassMatch>>>
                                *)(this + 0x1e0),pSVar28);
        ClassMatch::operator=(this_00,(ClassMatch *)&local_d8);
        ClassMatch::~ClassMatch((ClassMatch *)&local_d8);
      }
      else if ((StringName::configured != '\0') && (local_d8 != (String *)0x0)) {
        StringName::unref();
      }
      plVar18 = *(long **)(this + 0x1c8);
      if (plVar18 == (long *)0x0) {
        iVar21 = *(int *)(this + 0x1d0);
        if (iVar21 != 0) goto LAB_0010d15e;
        goto LAB_0010d19d;
      }
    }
LAB_0010d088:
    bVar29 = *plVar18 == 0;
    *(long *)(this + 0x1c8) = *plVar18;
    goto LAB_0010d099;
  }
  iVar21 = *(int *)(this + 0x1d0);
  if (iVar21 == 0) {
    bVar29 = true;
    goto LAB_0010d099;
  }
  if (*(long *)(*(long *)(this + 0x1d8) + (ulong)(iVar21 - 1) * 8) != 0) {
    auVar30 = EditorHelp::get_doc_data();
    lVar16 = auVar30._0_8_;
    if (*(int *)(this + 0x1d0) == 0) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,0xffffffff,0,"p_index","count",
                 "",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
    lVar2 = *(long *)(*(long *)(this + 0x1d8) + (ulong)(*(int *)(this + 0x1d0) - 1) * 8);
    if ((*(long *)(lVar16 + 0x10) != 0) && (*(int *)(lVar16 + 0x34) != 0)) {
      uVar14 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar16 + 0x30) * 4);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar16 + 0x30) * 8);
      uVar15 = String::hash();
      uVar20 = CONCAT44(0,uVar14);
      lVar25 = *(long *)(lVar16 + 0x18);
      uVar22 = 1;
      if (uVar15 != 0) {
        uVar22 = uVar15;
      }
      uVar27 = 0;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = (ulong)uVar22 * lVar3;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar20;
      lVar24 = SUB168(auVar30 * auVar7,8);
      uVar15 = *(uint *)(lVar25 + lVar24 * 4);
      uVar23 = SUB164(auVar30 * auVar7,8);
      if (uVar15 != 0) {
        do {
          if (uVar15 == uVar22) {
            cVar13 = String::operator==((String *)
                                        (*(long *)(*(long *)(lVar16 + 0x10) + lVar24 * 8) + 0x10),
                                        (String *)(lVar2 + 0x30));
            if (cVar13 != '\0') {
              lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (ulong)uVar23 * 8);
              goto LAB_0010cd0d;
            }
            lVar25 = *(long *)(lVar16 + 0x18);
          }
          uVar27 = uVar27 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar23 + 1) * lVar3;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar20;
          lVar24 = SUB168(auVar4 * auVar8,8);
          uVar15 = *(uint *)(lVar25 + lVar24 * 4);
          uVar23 = SUB164(auVar4 * auVar8,8);
        } while ((uVar15 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar3, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar20, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar14 + uVar23) - SUB164(auVar5 * auVar9,8)) * lVar3,
                auVar10._8_8_ = 0, auVar10._0_8_ = uVar20, uVar27 <= SUB164(auVar6 * auVar10,8)));
      }
    }
    plVar18 = *(long **)(this + 0x1c8);
    if (plVar18 != (long *)0x0) goto LAB_0010d088;
    iVar21 = *(int *)(this + 0x1d0);
  }
  if (iVar21 == 0) {
LAB_0010dc48:
    iVar21 = 0;
  }
  else {
    pSVar28 = (String *)0x0;
LAB_0010d15e:
    plVar18 = (long *)(*(long *)(this + 0x1d8) + (ulong)(iVar21 - 1U) * 8);
    lVar16 = *plVar18;
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x20), *plVar18 = lVar16, lVar16 == 0)) {
      LocalVector<RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::Element*,unsigned_int,false,false>
      ::resize((LocalVector<RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::Element*,unsigned_int,false,false>
                *)(this + 0x1d0),iVar21 - 1U);
    }
    if (pSVar28 != (String *)0x0) {
LAB_0010d19d:
      local_220 = &local_d8;
      lVar16 = EditorHelp::get_doc_data();
      local_d8 = (String *)((ulong)local_d8 & 0xffffffff00000000);
      cVar13 = HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
               ::_lookup_pos((HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                              *)(lVar16 + 0x38),pSVar28,(uint *)local_220);
      if (cVar13 != '\0') {
        lVar16 = EditorHelp::get_doc_data();
        plVar18 = (long *)HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                          ::operator[]((HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
                                        *)(lVar16 + 0x38),pSVar28);
        lVar16 = *plVar18;
        if (lVar16 != 0) {
          lVar2 = *(long *)(lVar16 + 0x10);
          if (*(long *)(lVar16 + 0x10) == plVar18[1]) {
            lVar16 = 0;
          }
          else {
            do {
              lVar16 = lVar2;
              lVar2 = *(long *)(lVar16 + 0x10);
            } while (plVar18[1] != *(long *)(lVar16 + 0x10));
          }
        }
        uVar14 = *(uint *)(this + 0x1d0);
        pvVar19 = *(void **)(this + 0x1d8);
        if (uVar14 == *(uint *)(this + 0x1d4)) {
          uVar20 = (ulong)(uVar14 * 2);
          if (uVar14 * 2 == 0) {
            uVar20 = 1;
          }
          *(int *)(this + 0x1d4) = (int)uVar20;
          pvVar19 = (void *)Memory::realloc_static(pvVar19,uVar20 * 8,false);
          *(void **)(this + 0x1d8) = pvVar19;
          if (pvVar19 == (void *)0x0) {
LAB_0010d2ae:
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar11 = (code *)invalidInstructionException();
            (*pcVar11)();
          }
          uVar14 = *(uint *)(this + 0x1d0);
        }
        iVar21 = uVar14 + 1;
        *(int *)(this + 0x1d0) = iVar21;
        *(long *)((long)pvVar19 + (ulong)uVar14 * 8) = lVar16;
        goto LAB_0010d1cc;
      }
    }
    iVar21 = *(int *)(this + 0x1d0);
  }
LAB_0010d1cc:
  bVar29 = iVar21 == 0;
LAB_0010d099:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar29;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::Runner::_slice() */

undefined8 __thiscall EditorHelpSearch::Runner::_slice(Runner *this)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = *(int *)(this + 0x17c);
  switch(iVar4) {
  case 0:
    cVar3 = _phase_match_classes_init(this);
    break;
  case 1:
    cVar3 = _phase_match_classes(this);
    break;
  case 2:
    *(undefined8 *)(this + 0x210) = *(undefined8 *)(this + 0x1f8);
    _populate_cache(this);
    if ((*(long *)(this + 0x238) != 0) && (*(int *)(this + 0x25c) != 0)) {
      lVar5 = 0;
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 600) * 4);
      if (uVar1 != 0) {
        do {
          if (*(int *)(*(long *)(this + 0x240) + lVar5) != 0) {
            *(int *)(*(long *)(this + 0x240) + lVar5) = 0;
            pvVar2 = *(void **)(*(long *)(this + 0x238) + lVar5 * 2);
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
            Memory::free_static(pvVar2,false);
            *(undefined8 *)(*(long *)(this + 0x238) + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar1 << 2 != lVar5);
      }
      iVar4 = *(int *)(this + 0x17c);
      *(undefined4 *)(this + 0x25c) = 0;
      *(undefined1 (*) [16])(this + 0x248) = (undefined1  [16])0x0;
      goto LAB_0010de90;
    }
    goto LAB_0010dee9;
  case 3:
    cVar3 = _phase_class_items(this);
    break;
  case 4:
    *(undefined8 *)(this + 0x210) = *(undefined8 *)(this + 0x1f8);
    goto LAB_0010de90;
  case 5:
    cVar3 = _phase_member_items(this);
    break;
  case 6:
    if (*(long *)(this + 0x260) != 0) {
      TreeItem::select((int)*(long *)(this + 0x260));
      iVar4 = *(int *)(this + 0x17c);
    }
    goto LAB_0010de90;
  case 7:
    return 1;
  default:
    _err_print_error("_slice","editor/editor_help_search.cpp",0x2a6,
                     "Invalid or unhandled phase in EditorHelpSearch::Runner, aborting search.",0,1)
    ;
    return 1;
  }
  if (cVar3 != '\0') {
LAB_0010dee9:
    iVar4 = *(int *)(this + 0x17c);
LAB_0010de90:
    *(int *)(this + 0x17c) = iVar4 + 1;
  }
  return 0;
}



/* EditorHelpSearch::Runner::work(unsigned long) */

undefined8 __thiscall EditorHelpSearch::Runner::work(Runner *this,ulong param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  plVar2 = (long *)OS::get_singleton();
  lVar3 = (**(code **)(*plVar2 + 0x208))(plVar2);
  if ((*(long *)(this + 0x198) != 0) && (2 < *(int *)(*(long *)(this + 0x198) + -8)))
  goto LAB_0010e066;
  cVar1 = String::operator==((String *)(this + 0x198),"@");
  if (cVar1 == '\0') {
    while (cVar1 = _fill(this), cVar1 == '\0') {
      plVar2 = (long *)OS::get_singleton();
      uVar4 = (**(code **)(*plVar2 + 0x208))(plVar2);
      if (param_1 + lVar3 < uVar4) {
        return 0;
      }
    }
  }
  else {
    cVar1 = _slice(this);
    while (cVar1 == '\0') {
      plVar2 = (long *)OS::get_singleton();
      uVar4 = (**(code **)(*plVar2 + 0x208))(plVar2);
      if (param_1 + lVar3 < uVar4) {
        return 0;
      }
LAB_0010e066:
      cVar1 = _slice(this);
    }
  }
  return 1;
}



/* EditorHelpSearch::_notification(int) */

void __thiscall EditorHelpSearch::_notification(EditorHelpSearch *this,int param_1)

{
  code *pcVar1;
  StringName *pSVar2;
  Ref *pRVar3;
  Object *pOVar4;
  long lVar5;
  long *plVar6;
  char cVar7;
  int iVar8;
  CallableCustom *pCVar9;
  String *pSVar10;
  long in_FS_OFFSET;
  undefined8 uVar11;
  Object *local_98;
  undefined8 local_90;
  Object *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0x21) {
    if (9 < param_1) {
      switch(param_1) {
      case 10:
        cVar7 = (**(code **)(*DisplayServer::singleton + 0x150))(DisplayServer::singleton,0x17);
        plVar6 = DisplayServer::singleton;
        if (cVar7 != '\0') {
          pcVar1 = *(code **)(*DisplayServer::singleton + 0x160);
          create_custom_callable_function_pointer<EditorHelpSearch,String_const&>
                    ((EditorHelpSearch *)&local_88,(char *)this,
                     (_func_void_String_ptr *)"&EditorHelpSearch::_native_action_cb");
          pCVar9 = (CallableCustom *)operator_new(0x48,"");
          CallableCustom::CallableCustom(pCVar9);
          *(EditorHelpSearch **)(pCVar9 + 0x28) = this;
          *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
          *(undefined ***)pCVar9 = &PTR_hash_0011f0d8;
          *(undefined8 *)(pCVar9 + 0x40) = 0;
          uVar11 = *(undefined8 *)(this + 0x60);
          *(undefined8 *)(pCVar9 + 0x10) = 0;
          *(undefined8 *)(pCVar9 + 0x30) = uVar11;
          *(code **)(pCVar9 + 0x38) = _native_search_cb;
          *(undefined **)(pCVar9 + 0x20) = &_LC35;
          CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
          *(char **)(pCVar9 + 0x20) = "EditorHelpSearch::_native_search_cb";
          Callable::Callable((Callable *)&local_98,pCVar9);
          (*pcVar1)(plVar6,&local_98,(EditorHelpSearch *)&local_88);
          Callable::~Callable((Callable *)&local_98);
          Callable::~Callable((Callable *)&local_88);
        }
        break;
      case 0xb:
        cVar7 = (**(code **)(*DisplayServer::singleton + 0x150))(DisplayServer::singleton,0x17);
        if (cVar7 != '\0') {
          local_98 = (Object *)0x0;
          local_88 = (Object *)0x0;
          local_80 = 0;
          local_90 = 0;
          (**(code **)(*DisplayServer::singleton + 0x160))
                    (DisplayServer::singleton,&local_98,(Callable *)&local_88);
          Callable::~Callable((Callable *)&local_98);
          Callable::~Callable((Callable *)&local_88);
        }
        break;
      case 0xd:
        pcVar1 = *(code **)(*(long *)this + 0x108);
        create_custom_callable_function_pointer<EditorHelpSearch>
                  ((EditorHelpSearch *)&local_88,(char *)this,
                   (_func_void *)"&EditorHelpSearch::_confirmed");
        (*pcVar1)(this,SceneStringNames::singleton + 0x268,(EditorHelpSearch *)&local_88,0);
        Callable::~Callable((Callable *)&local_88);
        break;
      case 0x11:
        if (*(Runner **)(this + 0xdf8) != (Runner *)0x0) {
          cVar7 = Runner::work(*(Runner **)(this + 0xdf8),100000);
          if (cVar7 == '\0') break;
          if (this[0xde0] == (EditorHelpSearch)0x0) {
            Tree::ensure_cursor_is_visible();
          }
          else {
            this[0xde0] = (EditorHelpSearch)0x0;
          }
          uVar11 = *(undefined8 *)(this + 0xd88);
          Tree::get_selected();
          BaseButton::set_disabled(SUB81(uVar11,0));
          pOVar4 = *(Object **)(this + 0xdf8);
          if (pOVar4 != (Object *)0x0) {
            *(undefined8 *)(this + 0xdf8) = 0;
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar4), cVar7 != '\0')) {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Node::set_process(SUB81(this,0));
          return;
        }
        goto LAB_0010eae9;
      case 0x1e:
        cVar7 = Window::is_visible();
        if (cVar7 == '\0') {
          TreeCache::clear((TreeCache *)(this + 0xe00));
          Range::set_value(0.0);
          pOVar4 = *(Object **)(this + 0xdf8);
          if (pOVar4 != (Object *)0x0) {
            *(undefined8 *)(this + 0xdf8) = 0;
            cVar7 = RefCounted::unreference();
            if ((cVar7 != '\0') && (cVar7 = predelete_handler(pOVar4), cVar7 != '\0')) {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
          lVar5 = *(long *)(this + 0xdd8);
          pCVar9 = (CallableCustom *)operator_new(0x48,"");
          CallableCustom::CallableCustom(pCVar9);
          *(long *)(pCVar9 + 0x28) = lVar5;
          *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
          *(undefined ***)pCVar9 = &PTR_hash_0011f1f8;
          *(undefined8 *)(pCVar9 + 0x40) = 0;
          uVar11 = *(undefined8 *)(lVar5 + 0x60);
          *(undefined8 *)(pCVar9 + 0x10) = 0;
          *(undefined8 *)(pCVar9 + 0x30) = uVar11;
          *(undefined **)(pCVar9 + 0x20) = &_LC35;
          *(code **)(pCVar9 + 0x38) = Tree::clear;
          CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
          *(char **)(pCVar9 + 0x20) = "Tree::clear";
          Callable::Callable((Callable *)&local_88,pCVar9);
          Variant::Variant((Variant *)local_58,0);
          Callable::call_deferredp((Variant **)&local_88,0);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Callable::~Callable((Callable *)&local_88);
          BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
          pSVar10 = (String *)EditorSettings::get_singleton();
          local_70 = Window::get_size();
          uVar11 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_70);
          local_78 = Window::get_position();
          local_68 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_78);
          local_60 = uVar11;
          Variant::Variant((Variant *)local_58,(Rect2 *)&local_68);
          local_88 = (Object *)0x0;
          String::parse_latin1((String *)&local_88,"search_help");
          local_98 = (Object *)0x0;
          String::parse_latin1((String *)&local_98,"dialog_bounds");
          EditorSettings::set_project_metadata(pSVar10,(String *)&local_98,(Variant *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        break;
      case 0x20:
        goto switchD_0010e109_caseD_20;
      }
    }
  }
  else if ((param_1 == 10000) &&
          (cVar7 = EditorThemeManager::is_generated_theme_outdated(), cVar7 != '\0')) {
switchD_0010e109_caseD_20:
    if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Window::get_theme_constant
              ((StringName *)this,
               (StringName *)&_notification(int)::{lambda()#1}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xdd8);
    StringName::StringName((StringName *)&local_88,"icon_max_width",false);
    Control::add_theme_constant_override(pSVar2,(int)(StringName *)&local_88);
    if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
      StringName::unref();
    }
    pRVar3 = *(Ref **)(this + 0xdb8);
    if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_88);
    LineEdit::set_right_icon(pRVar3);
    if (((local_88 != (Object *)0x0) &&
        (cVar7 = RefCounted::unreference(), pOVar4 = local_88, cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_88), cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    pSVar2 = *(StringName **)(this + 0xdb8);
    if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_98);
    StringName::StringName((StringName *)&local_88,"right_icon",false);
    Control::add_theme_icon_override(pSVar2,(Ref *)&local_88);
    if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
      StringName::unref();
    }
    if (((local_98 != (Object *)0x0) &&
        (cVar7 = RefCounted::unreference(), pOVar4 = local_98, cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_98), cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    pRVar3 = *(Ref **)(this + 0xdc0);
    if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_88);
    Button::set_button_icon(pRVar3);
    if (((local_88 != (Object *)0x0) &&
        (cVar7 = RefCounted::unreference(), pOVar4 = local_88, cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_88), cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    pRVar3 = *(Ref **)(this + 0xdc8);
    if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
    }
    Window::get_editor_theme_icon((StringName *)&local_88);
    Button::set_button_icon(pRVar3);
    if (((local_88 != (Object *)0x0) &&
        (cVar7 = RefCounted::unreference(), pOVar4 = local_88, cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_88), cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    cVar7 = Window::is_visible();
    if (cVar7 != '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_results(this);
        return;
      }
      goto LAB_0010eae9;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010eae9:
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x11f8,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ConfirmationDialog::is_class_ptr(void*) const */

uint ConfirmationDialog::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x11f7,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f7,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f7,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f7,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11f8,in_RSI == &Node::get_class_ptr_static()::ptr) |
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



/* EditorHelpSearch::_property_can_revertv(StringName const&) const */

undefined8 EditorHelpSearch::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorHelpSearch::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorHelpSearch::_property_get_revertv(StringName *param_1,Variant *param_2)

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



/* CallableCustomMethodPointer<EditorHelpSearch, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Tree, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Tree,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Tree,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorHelpSearch, Dictionary, String const&,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,Dictionary,String_const&,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,Dictionary,String_const&,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<BaseButton, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BaseButton,void,bool>::get_argument_count
          (CallableCustomMethodPointer<BaseButton,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorHelpSearch,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<EditorHelpSearch,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void>::get_argument_count
          (CallableCustomMethodPointer<EditorHelpSearch,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Tree, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Tree,void>::get_argument_count
          (CallableCustomMethodPointer<Tree,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorHelpSearch,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorHelpSearch, Dictionary, String const&,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorHelpSearch,Dictionary,String_const&,int>::get_argument_count
          (CallableCustomMethodPointer<EditorHelpSearch,Dictionary,String_const&,int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011e238;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011e238;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorHelpSearch, Dictionary, String const&,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,Dictionary,String_const&,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,Dictionary,String_const&,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Tree, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Tree,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Tree,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,void,int> *this)

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



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011ea88;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011ea88;
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



/* EditorHelpSearch::_getv(StringName const&, Variant&) const */

undefined8 EditorHelpSearch::_getv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__set_00125008 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorHelpSearch::_setv(StringName const&, Variant const&) */

undefined8 EditorHelpSearch::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00125008 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00125010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00125010 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00125018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00125018 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
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
LAB_0010fa93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010fa93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010fafe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010fafe:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void>::get_object
          (CallableCustomMethodPointer<EditorHelpSearch,void> *this)

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
      goto LAB_0010fc2d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010fc2d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010fc2d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorHelpSearch, Dictionary, String const&, int>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorHelpSearch,Dictionary,String_const&,int>::get_object
          (CallableCustomMethodPointer<EditorHelpSearch,Dictionary,String_const&,int> *this)

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
      goto LAB_0010fd2d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010fd2d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010fd2d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,int>::get_object
          (CallableCustomMethodPointer<EditorHelpSearch,void,int> *this)

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
      goto LAB_0010fe2d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010fe2d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010fe2d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Tree, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Tree,void>::get_object(CallableCustomMethodPointer<Tree,void> *this)

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
      goto LAB_0010ff2d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ff2d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ff2d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, Ref<InputEvent> const&>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<EditorHelpSearch,void,Ref<InputEvent>const&> *this)

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
      goto LAB_0011002d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011002d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011002d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorHelpSearch,void,String_const&> *this)

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
      goto LAB_0011012d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011012d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011012d:
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
      goto LAB_0011022d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011022d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011022d:
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
  if ((code *)PTR__validate_property_00125020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* EditorHelpSearch::_validate_propertyv(PropertyInfo&) const */

void EditorHelpSearch::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00125020 == Viewport::_validate_property) {
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
  if ((code *)PTR__validate_property_00125028 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00125028 == Control::_validate_property) {
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
    if ((code *)PTR__set_00125030 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00125030 != CanvasItem::_set) {
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
    if ((code *)PTR__notification_00125038 != Window::_notification) {
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
  if ((code *)PTR__notification_00125038 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001106f8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00125040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00110768) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00125040 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x11f7,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11f7,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11f7,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11f8,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11f8,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x11f7,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11f7,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11f7,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11f8,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11f8,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorHelpSearch::is_class_ptr(void*) const */

uint EditorHelpSearch::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11f7,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11f7,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11f7,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11f7,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11f8,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
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
      if (StringName::configured == '\0') goto LAB_00110920;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00110920:
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
      if (StringName::configured == '\0') goto LAB_00110980;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00110980:
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
      if (StringName::configured == '\0') goto LAB_001109e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001109e0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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
      if (StringName::configured == '\0') goto LAB_00110a50;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00110a50:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* EditorHelpSearch::_get_class_namev() const */

undefined8 * EditorHelpSearch::_get_class_namev(void)

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
LAB_00110ab3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110ab3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorHelpSearch");
      goto LAB_00110b1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorHelpSearch");
LAB_00110b1e:
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
LAB_00110b93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110b93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00110bfe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00110bfe:
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
LAB_00110c83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110c83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_00110cee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_00110cee:
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
LAB_00110d73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00110d73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_00110dde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_00110dde:
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



/* EditorHelpSearch::get_class() const */

void EditorHelpSearch::get_class(void)

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
    if (cVar5 != '\0') goto LAB_001113ab;
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
      if (cVar5 != '\0') goto LAB_001113ab;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_001113ab:
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
    if (cVar5 != '\0') goto LAB_0011164b;
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
      if (cVar5 != '\0') goto LAB_0011164b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0011164b:
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
    if (cVar5 != '\0') goto LAB_0011188b;
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
      if (cVar5 != '\0') goto LAB_0011188b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_001119c8;
    }
  }
LAB_0011188b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001119c8:
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
    if (cVar5 != '\0') goto LAB_00111aeb;
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
      if (cVar5 != '\0') goto LAB_00111aeb;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_00111c28;
    }
  }
LAB_00111aeb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00111c28:
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
            if (lVar4 == 0) goto LAB_00111c9f;
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
LAB_00111c9f:
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
    if (cVar5 != '\0') goto LAB_00111d53;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00111d53:
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
            if (lVar4 == 0) goto LAB_00111e1f;
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
LAB_00111e1f:
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
    if (cVar5 != '\0') goto LAB_00111ed3;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00111ed3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00112010) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00125048 != Container::_notification) {
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
  if ((code *)PTR__notification_00125048 == Container::_notification) {
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
    if (cVar5 != '\0') goto LAB_0011219b;
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
      if (cVar5 != '\0') goto LAB_0011219b;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_001122d8;
    }
  }
LAB_0011219b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001122d8:
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
    if (cVar5 != '\0') goto LAB_001123eb;
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
      if (cVar5 != '\0') goto LAB_001123eb;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_00112528;
    }
  }
LAB_001123eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112528:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorHelpSearch::is_class(String const&) const */

undefined8 __thiscall EditorHelpSearch::is_class(EditorHelpSearch *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011259f;
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
LAB_0011259f:
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
    if (cVar5 != '\0') goto LAB_00112653;
  }
  cVar5 = String::operator==(param_1,"EditorHelpSearch");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00112653:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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



/* void Ref<EditorHelpSearch::Runner>::instantiate<Tree*, Tree*, EditorHelpSearch::TreeCache*,
   String, int>(Tree*, Tree*, EditorHelpSearch::TreeCache*, String, int) */

void __thiscall
Ref<EditorHelpSearch::Runner>::instantiate<Tree*,Tree*,EditorHelpSearch::TreeCache*,String,int>
          (Ref<EditorHelpSearch::Runner> *this,Control *param_1,Tree *param_2,TreeCache *param_3,
          String *param_5,int param_6)

{
  char cVar1;
  Runner *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (Runner *)operator_new(0x270,"");
  EditorHelpSearch::Runner::Runner(this_00,param_1,param_2,param_3,param_5,param_6);
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
    this_00 = (Runner *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (Runner *)pOVar3) goto LAB_001127a5;
    *(Runner **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_001127a5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (Runner *)0x0) {
    return;
  }
LAB_001127a5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<EditorHelpSearch, String
   const&>(EditorHelpSearch*, char const*, void (EditorHelpSearch::*)(String const&)) */

EditorHelpSearch *
create_custom_callable_function_pointer<EditorHelpSearch,String_const&>
          (EditorHelpSearch *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC35;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011f168;
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



/* Callable create_custom_callable_function_pointer<EditorHelpSearch>(EditorHelpSearch*, char
   const*, void (EditorHelpSearch::*)()) */

EditorHelpSearch *
create_custom_callable_function_pointer<EditorHelpSearch>
          (EditorHelpSearch *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC35;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011f288;
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



/* LocalVector<RBSet<String, NaturalNoCaseComparator, DefaultAllocator>::Element*, unsigned int,
   false, false>::resize(unsigned int) */

void __thiscall
LocalVector<RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::Element*,unsigned_int,false,false>
::resize(LocalVector<RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::Element*,unsigned_int,false,false>
         *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  
  if (*(uint *)this <= param_1) {
    if (param_1 <= *(uint *)this) {
      return;
    }
    if (*(uint *)(this + 4) < param_1) {
      uVar2 = param_1 - 1 | param_1 - 1 >> 1;
      uVar2 = uVar2 | uVar2 >> 2;
      uVar2 = uVar2 | uVar2 >> 4;
      uVar2 = uVar2 | uVar2 >> 8;
      uVar2 = (uVar2 | uVar2 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar2;
      lVar3 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar2 * 8,false);
      *(long *)(this + 8) = lVar3;
      if (lVar3 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
  *(uint *)this = param_1;
  return;
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



/* WARNING: Removing unreachable block (ram,0x00112ca0) */
/* String vformat<String, String, String>(String const&, String const, String const, String const)
    */

undefined8 *
vformat<String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,String *param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  local_f0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  pVVar2 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00112f58) */
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
        if (pvVar5 == (void *)0x0) goto LAB_00113284;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00113284:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* EditorHelpSearch::~EditorHelpSearch() */

void __thiscall EditorHelpSearch::~EditorHelpSearch(EditorHelpSearch *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  void *pvVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0011ed00;
  TreeCache::clear((TreeCache *)(this + 0xe00));
  pvVar7 = *(void **)(this + 0xe08);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0xe2c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe28) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xe2c) = 0;
        *(undefined1 (*) [16])(this + 0xe18) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe10) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0xe10) + lVar6) = 0;
            if (*(long *)((long)pvVar7 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar7 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar7 + 0x10);
                *(undefined8 *)((long)pvVar7 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0xe08);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xe2c) = 0;
        *(undefined1 (*) [16])(this + 0xe18) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_001133d2;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0xe10),false);
  }
LAB_001133d2:
  if (*(long *)(this + 0xdf8) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0xdf8);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xde8));
  *(undefined ***)this = &PTR__initialize_classv_0011ea88;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void>::call
          (CallableCustomMethodPointer<EditorHelpSearch,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011365f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011365f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00113638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00113721;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011365f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC84,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00113721:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Tree, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Tree,void>::call
          (CallableCustomMethodPointer<Tree,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011387f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011387f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00113858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00113941;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011387f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC84,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00113941:
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
      goto LAB_00113b09;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00113b09;
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
        uVar4 = _LC85;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00113ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_00113bcb;
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
LAB_00113b09:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC84,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00113bcb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,int>::call
          (CallableCustomMethodPointer<EditorHelpSearch,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_00113d88;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00113d88;
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
        uVar4 = _LC86;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00113d37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_00113e4a;
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
LAB_00113d88:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC84,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00113e4a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, Ref<InputEvent> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<EditorHelpSearch,void,Ref<InputEvent>const&> *this,
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
          goto LAB_00113f1e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_00113f1e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC87;
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
LAB_00113fed:
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
              if (pOVar5 != (Object *)0x0) goto LAB_00113fed;
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
        goto LAB_00113f1e;
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
  local_48 = (Object *)0x11346e;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC84,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00113f1e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorHelpSearch, Dictionary, String const&, int>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,Dictionary,String_const&,int>::call
          (CallableCustomMethodPointer<EditorHelpSearch,Dictionary,String_const&,int> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
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
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_68 = (char *)(uVar3 << 8);
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
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar9 & 1) != 0) {
              pcVar9 = *(code **)(pcVar9 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar4 = _LC88;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            iVar6 = Variant::operator_cast_to_int(param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC89;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_68);
            (*pcVar9)((Dictionary *)&local_70,(long *)(lVar1 + lVar2),(Variant *)&local_68,iVar6);
            Variant::Variant((Variant *)local_58,(Dictionary *)&local_70);
            if (Variant::needs_deinit[*(int *)param_3] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)param_3 = local_58[0];
            *(undefined8 *)(param_3 + 8) = local_50;
            *(undefined8 *)(param_3 + 0x10) = uStack_48;
            Dictionary::~Dictionary((Dictionary *)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 2;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
        }
        goto LAB_0011429c;
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
  _err_print_error(&_LC84,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0011429c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorHelpSearch, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,String_const&>::call
          (CallableCustomMethodPointer<EditorHelpSearch,void,String_const&> *this,Variant **param_1,
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
            uVar4 = _LC89;
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
        goto LAB_0011459e;
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
  _err_print_error(&_LC84,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011459e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RBSet<String, NaturalNoCaseComparator, DefaultAllocator>::_cleanup_tree(RBSet<String,
   NaturalNoCaseComparator, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_cleanup_tree
          (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
      Memory::free_static(pEVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar5 + 0x30));
        Memory::free_static(pEVar5,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
      Memory::free_static(pEVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
    Memory::free_static(pEVar1,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  Memory::free_static(param_1,false);
  return;
}



/* EditorHelpSearch::~EditorHelpSearch() */

void __thiscall EditorHelpSearch::~EditorHelpSearch(EditorHelpSearch *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  void *pvVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0011ed00;
  TreeCache::clear((TreeCache *)(this + 0xe00));
  pvVar7 = *(void **)(this + 0xe08);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0xe2c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe28) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xe2c) = 0;
        *(undefined1 (*) [16])(this + 0xe18) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe10) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0xe10) + lVar6) = 0;
            if (*(long *)((long)pvVar7 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar7 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar7 + 0x10);
                *(undefined8 *)((long)pvVar7 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0xe08);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xe2c) = 0;
        *(undefined1 (*) [16])(this + 0xe18) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_00115012;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0xe10),false);
  }
LAB_00115012:
  if (*(long *)(this + 0xdf8) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0xdf8);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xde8));
  *(undefined ***)this = &PTR__initialize_classv_0011ea88;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xe30);
  return;
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
    if ((code *)PTR__bind_methods_00125050 != Object::_bind_methods) {
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
            if ((code *)PTR__bind_methods_00125068 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_58 = "Node";
          local_68 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Viewport";
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
      if ((code *)PTR__bind_compatibility_methods_00125058 != Object::_bind_compatibility_methods) {
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
    if ((code *)PTR__bind_methods_00125060 != AcceptDialog::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00125068 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_68 = 0;
            String::parse_latin1((String *)&local_68,"Node");
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
            if ((code *)PTR__bind_compatibility_methods_00125070 !=
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
      if ((code *)PTR__bind_methods_00125078 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00125068 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00125070 !=
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
      if ((code *)PTR__bind_methods_00125078 != Container::_bind_methods) {
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
  local_78 = &_LC18;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC18;
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
LAB_0011672d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011672d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011674f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011674f:
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
      goto LAB_00116a81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116a81:
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
  if ((code *)PTR__get_property_list_00125080 != Object::_get_property_list) {
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



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

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
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
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
  if (local_90 == 0) {
LAB_00116d6d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00116d6d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00116d8f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00116d8f:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
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
LAB_001170ed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001170ed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011710f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011710f:
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



/* EditorHelpSearch::_bind_methods() [clone .cold] */

void EditorHelpSearch::_bind_methods(void)

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



/* CowData<DocData::MethodDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::MethodDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::ConstantDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::ConstantDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::PropertyDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::PropertyDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::ThemeItemDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::ThemeItemDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorHelpSearch::_initialize_classv() */

void EditorHelpSearch::_initialize_classv(void)

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
              if ((code *)PTR__bind_methods_00125068 != Node::_bind_methods) {
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
        if ((code *)PTR__bind_compatibility_methods_00125058 != Object::_bind_compatibility_methods)
        {
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
      if ((code *)PTR__bind_methods_00125060 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorHelpSearch";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
      goto LAB_00117b21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00117b21:
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
  if ((code *)PTR__get_property_list_00125088 != Object::_get_property_list) {
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
      goto LAB_00117df1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00117df1:
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
      goto LAB_001180a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001180a1:
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



/* EditorHelpSearch::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorHelpSearch::_get_property_listv(EditorHelpSearch *this,List *param_1,bool param_2)

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
  local_78 = "EditorHelpSearch";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorHelpSearch";
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
      goto LAB_00118351;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00118351:
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
  StringName::StringName((StringName *)&local_78,"EditorHelpSearch",false);
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
      goto LAB_00118601;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00118601:
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
  if ((code *)PTR__get_property_list_00125090 != CanvasItem::_get_property_list) {
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
      goto LAB_001188d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001188d1:
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
      goto LAB_00118b81;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00118b81:
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
      goto LAB_00118e31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00118e31:
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
      goto LAB_001190e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001190e1:
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



/* HashMap<String, RBSet<String, NaturalNoCaseComparator, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, RBSet<String,
   NaturalNoCaseComparator, DefaultAllocator> > > >::_lookup_pos(String const&, unsigned int&) const
    */

undefined8 __thiscall
HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
::_lookup_pos(HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
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



/* LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>, unsigned int, false,
   false>::resize(unsigned int) */

void __thiscall
LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>::
resize(LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
       *this,uint param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  
  uVar9 = *(uint *)this;
  if (param_1 < uVar9) {
    lVar7 = (ulong)param_1 * 0x18;
    uVar9 = param_1;
    do {
      lVar5 = *(long *)(this + 8) + lVar7;
      if (*(long *)(lVar5 + 0x10) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar5 + 0x10);
          *(undefined8 *)(lVar5 + 0x10) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x18;
    } while (uVar9 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar9) {
      return;
    }
    uVar6 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar9 = uVar6 >> 1 | uVar6;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar9;
      pvVar8 = *(void **)(this + 8);
      lVar7 = Memory::realloc_static(pvVar8,(ulong)uVar9 * 0x18,false);
      *(long *)(this + 8) = lVar7;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        LocalVector<TreeItem*,unsigned_int,false,false>::resize((uint)pvVar8);
      }
      uVar9 = *(uint *)this;
      if (param_1 <= uVar9) goto LAB_0011942d;
    }
    lVar7 = *(long *)(this + 8);
    puVar3 = (undefined8 *)(lVar7 + (ulong)uVar9 * 0x18);
    do {
      *puVar3 = 0;
      puVar4 = puVar3 + 3;
      *(undefined1 *)(puVar3 + 1) = 0;
      puVar3[2] = 0;
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)(lVar7 + 0x18 + ((ulong)(uVar6 - uVar9) + (ulong)uVar9) * 0x18)
            );
  }
LAB_0011942d:
  *(uint *)this = param_1;
  return;
}



/* EditorHelpSearch::Runner::ClassMatch::~ClassMatch() */

void __thiscall EditorHelpSearch::Runner::ClassMatch::~ClassMatch(ClassMatch *this)

{
  long lVar1;
  void *pvVar2;
  
  if (*(long *)(this + 0x90) != 0) {
    LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
    ::resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
              *)(this + 0x88),0);
    if (*(void **)(this + 0x90) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x90),false);
    }
  }
  pvVar2 = *(void **)(this + 0x80);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x78) != 0) {
      lVar1 = 0;
      while( true ) {
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + lVar1 * 0x18 + 0x10));
        if (*(uint *)(this + 0x78) <= (uint)(lVar1 + 1)) break;
        pvVar2 = *(void **)(this + 0x80);
        lVar1 = lVar1 + 1;
      }
      pvVar2 = *(void **)(this + 0x80);
      *(undefined4 *)(this + 0x78) = 0;
      if (pvVar2 == (void *)0x0) goto LAB_0011957e;
    }
    Memory::free_static(pvVar2,false);
  }
LAB_0011957e:
  pvVar2 = *(void **)(this + 0x70);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x68) != 0) {
      lVar1 = 0;
      while( true ) {
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + lVar1 * 0x18 + 0x10));
        if (*(uint *)(this + 0x68) <= (uint)(lVar1 + 1)) break;
        pvVar2 = *(void **)(this + 0x70);
        lVar1 = lVar1 + 1;
      }
      pvVar2 = *(void **)(this + 0x70);
      *(undefined4 *)(this + 0x68) = 0;
      if (pvVar2 == (void *)0x0) goto LAB_001195d0;
    }
    Memory::free_static(pvVar2,false);
  }
LAB_001195d0:
  pvVar2 = *(void **)(this + 0x60);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x58) != 0) {
      lVar1 = 0;
      while( true ) {
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + lVar1 * 0x18 + 0x10));
        if (*(uint *)(this + 0x58) <= (uint)(lVar1 + 1)) break;
        pvVar2 = *(void **)(this + 0x60);
        lVar1 = lVar1 + 1;
      }
      pvVar2 = *(void **)(this + 0x60);
      *(undefined4 *)(this + 0x58) = 0;
      if (pvVar2 == (void *)0x0) goto LAB_00119620;
    }
    Memory::free_static(pvVar2,false);
  }
LAB_00119620:
  if (*(long *)(this + 0x50) != 0) {
    LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
    ::resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
              *)(this + 0x48),0);
    if (*(void **)(this + 0x50) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x50),false);
    }
  }
  if (*(long *)(this + 0x40) != 0) {
    LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
    ::resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
              *)(this + 0x38),0);
    if (*(void **)(this + 0x40) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x40),false);
    }
  }
  if (*(long *)(this + 0x30) != 0) {
    LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
    ::resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
              *)(this + 0x28),0);
    if (*(void **)(this + 0x30) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x30),false);
    }
  }
  if (*(long *)(this + 0x20) != 0) {
    LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
    ::resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
              *)(this + 0x18),0);
    if (*(void **)(this + 0x20) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0x20),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  return;
}



/* HashMap<String, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TreeItem*> > >::_lookup_pos(String const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
::_lookup_pos(HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
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



/* EditorHelpSearch::Runner::~Runner() */

void __thiscall EditorHelpSearch::Runner::~Runner(Runner *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0011ef78;
  pvVar3 = *(void **)(this + 0x238);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x25c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 600) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x25c) = 0;
        *(undefined1 (*) [16])(this + 0x248) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x240) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x240) + lVar2) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x238);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x25c) = 0;
        *(undefined1 (*) [16])(this + 0x248) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00119995;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x240),false);
  }
LAB_00119995:
  pvVar3 = *(void **)(this + 0x220);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x218) != 0) {
      lVar2 = 0;
      while( true ) {
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + lVar2 * 0x10 + 8));
        if (*(uint *)(this + 0x218) <= (uint)(lVar2 + 1)) break;
        pvVar3 = *(void **)(this + 0x220);
        lVar2 = lVar2 + 1;
      }
      pvVar3 = *(void **)(this + 0x220);
      *(undefined4 *)(this + 0x218) = 0;
      if (pvVar3 == (void *)0x0) goto LAB_001199f6;
    }
    Memory::free_static(pvVar3,false);
  }
LAB_001199f6:
  pvVar3 = *(void **)(this + 0x1e8);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x20c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x208) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x20c) = 0;
        *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1f0) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x1f0) + lVar2) = 0;
            ClassMatch::~ClassMatch((ClassMatch *)((long)pvVar3 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x1e8);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x20c) = 0;
        *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00119aa9;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x1f0),false);
  }
LAB_00119aa9:
  if (*(void **)(this + 0x1d8) != (void *)0x0) {
    if (*(int *)(this + 0x1d0) != 0) {
      *(undefined4 *)(this + 0x1d0) = 0;
    }
    Memory::free_static(*(void **)(this + 0x1d8),false);
  }
  CowData<String>::_unref((CowData<String> *)(this + 0x1a8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x198));
  *(undefined ***)this = &PTR__initialize_classv_0011e238;
  Object::~Object((Object *)this);
  return;
}



/* EditorHelpSearch::Runner::~Runner() */

void __thiscall EditorHelpSearch::Runner::~Runner(Runner *this)

{
  ~Runner(this);
  operator_delete(this,0x270);
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
LAB_00119f20:
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
  if (lVar9 == 0) goto LAB_00119f20;
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
    goto LAB_00119f76;
  }
  if (lVar9 == lVar5) {
LAB_00119e9b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00119f76:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00119e0f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00119e9b;
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
LAB_00119e0f:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<DocData::ArgumentDoc>::_unref() */

void __thiscall CowData<DocData::ArgumentDoc>::_unref(CowData<DocData::ArgumentDoc> *this)

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
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 5;
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



/* CowData<DocData::MethodDoc>::_unref() */

void __thiscall CowData<DocData::MethodDoc>::_unref(CowData<DocData::MethodDoc> *this)

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
          if (plVar6[0xe] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xe] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xe];
              plVar6[0xe] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[0xd] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xd] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xd];
              plVar6[0xd] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<DocData::ArgumentDoc>::_unref((CowData<DocData::ArgumentDoc> *)(plVar6 + 0xb));
          if (plVar6[9] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[9] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[9];
              plVar6[9] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[7] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[7] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[7];
              plVar6[7] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[5] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[5] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[5];
              plVar6[5] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 0xf;
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



/* CowData<DocData::ConstantDoc>::_unref() */

void __thiscall CowData<DocData::ConstantDoc>::_unref(CowData<DocData::ConstantDoc> *this)

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
          if (plVar6[0xb] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xb] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xb];
              plVar6[0xb] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[10] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[10] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[10];
              plVar6[10] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[8] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[8] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[8];
              plVar6[8] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[6] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[6] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[6];
              plVar6[6] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[3] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[3] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[3];
              plVar6[3] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 0xc;
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



/* CowData<DocData::PropertyDoc>::_unref() */

void __thiscall CowData<DocData::PropertyDoc>::_unref(CowData<DocData::PropertyDoc> *this)

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
          if (plVar6[0xe] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xe] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xe];
              plVar6[0xe] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[0xd] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xd] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xd];
              plVar6[0xd] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[0xb] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xb] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xb];
              plVar6[0xb] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[9] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[9] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[9];
              plVar6[9] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[7] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[7] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[7];
              plVar6[7] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[6] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[6] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[6];
              plVar6[6] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[5] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[5] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[5];
              plVar6[5] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 0xf;
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



/* CowData<DocData::ThemeItemDoc>::_unref() */

void __thiscall CowData<DocData::ThemeItemDoc>::_unref(CowData<DocData::ThemeItemDoc> *this)

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
          if (plVar6[9] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[9] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[9];
              plVar6[9] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[8] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[8] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[8];
              plVar6[8] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[7] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[7] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[7];
              plVar6[7] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[5] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[5] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[5];
              plVar6[5] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[3] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[3] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[3];
              plVar6[3] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 10;
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



/* RBSet<String, NaturalNoCaseComparator, DefaultAllocator>::clear() */

void __thiscall
RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::clear
          (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  void *pvVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  
  pvVar4 = *(void **)this;
  if (pvVar4 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar4 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar7 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar7) {
            pEVar5 = *(Element **)(pEVar7 + 0x10);
            if (pEVar2 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (pEVar5 != *(Element **)(pEVar7 + 8)) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
            Memory::free_static(pEVar7,false);
            pEVar7 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          pEVar7 = *(Element **)(pEVar2 + 8);
          if (pEVar7 != pEVar6) {
            if (*(Element **)(pEVar7 + 0x10) != pEVar6) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 0x10));
              pEVar6 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar6) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
            Memory::free_static(pEVar7,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
          Memory::free_static(pEVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar3 != pEVar2) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar3 != pEVar6) {
          pEVar7 = *(Element **)(pEVar6 + 0x10);
          if (pEVar3 != pEVar7) {
            pEVar5 = *(Element **)(pEVar7 + 0x10);
            if (pEVar3 != pEVar5) {
              _cleanup_tree(this,pEVar5);
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar7 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar7 + 8));
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar7 + 0x30));
            Memory::free_static(pEVar7,false);
            pEVar7 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar7) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar6 + 0x30));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar6) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar3 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar3 + 0x30));
          Memory::free_static(pEVar3,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar2 + 0x30));
        Memory::free_static(pEVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(pEVar1 + 0x30));
      Memory::free_static(pEVar1,false);
      pvVar4 = *(void **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)((long)pvVar4 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x30));
    Memory::free_static(pvVar4,false);
    *(undefined8 *)this = 0;
  }
  return;
}



/* HashMap<String, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TreeItem*> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
::_resize_and_rehash
          (HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TreeItem*> > >::insert(String const&, TreeItem*
   const&, bool) */

String * HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
         ::insert(String *param_1,TreeItem **param_2,bool param_3)

{
  long lVar1;
  TreeItem *pTVar2;
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
  char cVar19;
  uint uVar20;
  uint uVar21;
  TreeItem *pTVar22;
  ulong uVar23;
  undefined8 *in_RCX;
  int iVar24;
  uint uVar25;
  undefined7 in_register_00000011;
  String *pSVar26;
  long lVar27;
  TreeItem *pTVar28;
  uint uVar29;
  char in_R8B;
  uint uVar30;
  ulong uVar31;
  undefined8 uVar32;
  TreeItem *pTVar33;
  TreeItem *pTVar34;
  uint uVar35;
  ulong uVar36;
  long in_FS_OFFSET;
  TreeItem *pTStack_a0;
  long local_58;
  undefined8 local_50;
  long local_40;
  
  pSVar26 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  if (param_2[1] == (TreeItem *)0x0) {
    uVar31 = (ulong)uVar21;
    uVar23 = uVar31 * 4;
    uVar36 = uVar31 * 8;
    pTVar22 = (TreeItem *)Memory::alloc_static(uVar23,false);
    param_2[2] = pTVar22;
    pTVar22 = (TreeItem *)Memory::alloc_static(uVar36,false);
    param_2[1] = pTVar22;
    if (uVar21 != 0) {
      pTVar28 = param_2[2];
      if ((pTVar28 < pTVar22 + uVar36) && (pTVar22 < pTVar28 + uVar23)) {
        uVar23 = 0;
        do {
          *(undefined4 *)(pTVar28 + uVar23 * 4) = 0;
          *(undefined8 *)(pTVar22 + uVar23 * 8) = 0;
          uVar23 = uVar23 + 1;
        } while (uVar31 != uVar23);
      }
      else {
        memset(pTVar28,0,uVar23);
        memset(pTVar22,0,uVar36);
      }
      goto LAB_0011ae9f;
    }
    iVar24 = *(int *)((long)param_2 + 0x2c);
    if (pTVar22 == (TreeItem *)0x0) goto LAB_0011aeaf;
    if (*(int *)((long)param_2 + 0x2c) != 0) goto LAB_0011b0f8;
LAB_0011aed1:
    if (*(int *)(param_2 + 5) == 0x1c) {
      pTStack_a0 = (TreeItem *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011b0a8;
    }
    _resize_and_rehash((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                        *)param_2,*(int *)(param_2 + 5) + 1);
  }
  else {
LAB_0011ae9f:
    iVar24 = *(int *)((long)param_2 + 0x2c);
    if (iVar24 != 0) {
LAB_0011b0f8:
      uVar20 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
      lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      uVar30 = String::hash();
      uVar23 = CONCAT44(0,uVar20);
      pTVar22 = param_2[2];
      uVar29 = 1;
      if (uVar30 != 0) {
        uVar29 = uVar30;
      }
      uVar35 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar29 * lVar1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar23;
      lVar27 = SUB168(auVar7 * auVar15,8);
      uVar30 = *(uint *)(pTVar22 + lVar27 * 4);
      uVar25 = SUB164(auVar7 * auVar15,8);
      if (uVar30 != 0) {
        do {
          if (uVar29 == uVar30) {
            cVar19 = String::operator==((String *)(*(long *)(param_2[1] + lVar27 * 8) + 0x10),
                                        pSVar26);
            if (cVar19 != '\0') {
              pTStack_a0 = *(TreeItem **)(param_2[1] + (ulong)uVar25 * 8);
              *(undefined8 *)(pTStack_a0 + 0x18) = *in_RCX;
              goto LAB_0011b0a8;
            }
            pTVar22 = param_2[2];
          }
          uVar35 = uVar35 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar25 + 1) * lVar1;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar23;
          lVar27 = SUB168(auVar8 * auVar16,8);
          uVar30 = *(uint *)(pTVar22 + lVar27 * 4);
          uVar25 = SUB164(auVar8 * auVar16,8);
        } while ((uVar30 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar30 * lVar1, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar23, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar20 + uVar25) - SUB164(auVar9 * auVar17,8)) * lVar1,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar23, uVar35 <= SUB164(auVar10 * auVar18,8)));
      }
      iVar24 = *(int *)((long)param_2 + 0x2c);
    }
LAB_0011aeaf:
    if ((float)uVar21 * __LC134 < (float)(iVar24 + 1)) goto LAB_0011aed1;
  }
  local_58 = 0;
  if (*(long *)pSVar26 == 0) {
    uVar32 = *in_RCX;
    local_50 = uVar32;
    pTStack_a0 = (TreeItem *)operator_new(0x20,"");
    *(undefined8 *)(pTStack_a0 + 0x10) = 0;
    *(undefined1 (*) [16])pTStack_a0 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar26);
    lVar1 = local_58;
    uVar32 = *in_RCX;
    local_50 = uVar32;
    pTStack_a0 = (TreeItem *)operator_new(0x20,"");
    *(undefined8 *)(pTStack_a0 + 0x10) = 0;
    *(undefined8 *)pTStack_a0 = 0;
    *(undefined8 *)(pTStack_a0 + 8) = 0;
    if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pTStack_a0 + 0x10),(CowData *)&local_58);
    }
  }
  *(undefined8 *)(pTStack_a0 + 0x18) = uVar32;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  pTVar22 = param_2[4];
  if (pTVar22 == (TreeItem *)0x0) {
    param_2[3] = pTStack_a0;
    param_2[4] = pTStack_a0;
  }
  else if (in_R8B == '\0') {
    *(TreeItem **)pTVar22 = pTStack_a0;
    *(TreeItem **)(pTStack_a0 + 8) = pTVar22;
    param_2[4] = pTStack_a0;
  }
  else {
    pTVar22 = param_2[3];
    *(TreeItem **)(pTVar22 + 8) = pTStack_a0;
    *(TreeItem **)pTStack_a0 = pTVar22;
    param_2[3] = pTStack_a0;
  }
  uVar20 = String::hash();
  pTVar22 = param_2[2];
  uVar21 = 1;
  if (uVar20 != 0) {
    uVar21 = uVar20;
  }
  uVar36 = (ulong)uVar21;
  uVar20 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar23 = CONCAT44(0,uVar20);
  lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar36 * lVar1;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar23;
  lVar27 = SUB168(auVar3 * auVar11,8);
  pTVar2 = param_2[1];
  pTVar28 = pTVar22 + lVar27 * 4;
  iVar24 = SUB164(auVar3 * auVar11,8);
  uVar29 = *(uint *)pTVar28;
  pTVar34 = pTStack_a0;
  if (uVar29 != 0) {
    uVar30 = 0;
    pTVar33 = pTStack_a0;
    do {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar29 * lVar1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar23;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)((uVar20 + iVar24) - SUB164(auVar4 * auVar12,8)) * lVar1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar23;
      uVar21 = SUB164(auVar5 * auVar13,8);
      pTVar34 = pTVar33;
      if (uVar21 < uVar30) {
        *(uint *)pTVar28 = (uint)uVar36;
        uVar36 = (ulong)uVar29;
        pTVar28 = pTVar2 + lVar27 * 8;
        pTVar34 = *(TreeItem **)pTVar28;
        *(TreeItem **)pTVar28 = pTVar33;
        uVar30 = uVar21;
      }
      uVar21 = (uint)uVar36;
      uVar30 = uVar30 + 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)(iVar24 + 1) * lVar1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar23;
      lVar27 = SUB168(auVar6 * auVar14,8);
      pTVar28 = pTVar22 + lVar27 * 4;
      iVar24 = SUB164(auVar6 * auVar14,8);
      uVar29 = *(uint *)pTVar28;
      pTVar33 = pTVar34;
    } while (uVar29 != 0);
  }
  *(TreeItem **)(pTVar2 + lVar27 * 8) = pTVar34;
  *(uint *)pTVar28 = uVar21;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_0011b0a8:
  *(TreeItem **)param_1 = pTStack_a0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
  long lVar2;
  void *__s;
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
  undefined8 uVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 (*pauVar24) [16];
  undefined8 uVar25;
  void *__s_00;
  ulong uVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  uint uVar34;
  uint *puVar35;
  undefined1 (*pauVar36) [16];
  undefined1 (*pauVar37) [16];
  long in_FS_OFFSET;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0011b730:
    uVar30 = (ulong)uVar22;
    uVar26 = uVar30 * 4;
    uVar33 = uVar30 * 8;
    uVar25 = Memory::alloc_static(uVar26,false);
    *(undefined8 *)(this + 0x10) = uVar25;
    __s_00 = (void *)Memory::alloc_static(uVar33,false);
    *(void **)(this + 8) = __s_00;
    if (uVar22 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar33)) && (__s_00 < (void *)((long)__s + uVar26))) {
        uVar26 = 0;
        do {
          *(undefined4 *)((long)__s + uVar26 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
          uVar26 = uVar26 + 1;
        } while (uVar30 != uVar26);
      }
      else {
        memset(__s,0,uVar26);
        memset(__s_00,0,uVar33);
      }
    }
  }
  else if (*(int *)(this + 0x2c) != 0) {
    uVar26 = CONCAT44(0,uVar22);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar23 = String::hash();
    lVar32 = *(long *)(this + 0x10);
    uVar21 = 1;
    if (uVar23 != 0) {
      uVar21 = uVar23;
    }
    uVar34 = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)uVar21 * lVar2;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar26;
    lVar29 = SUB168(auVar7 * auVar15,8);
    uVar23 = *(uint *)(lVar32 + lVar29 * 4);
    uVar31 = SUB164(auVar7 * auVar15,8);
    if (uVar23 != 0) {
      do {
        if (uVar21 == uVar23) {
          cVar20 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar29 * 8) + 0x10)
                                      ,param_1);
          if (cVar20 != '\0') {
            pauVar24 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar31 * 8);
            goto LAB_0011b5da;
          }
          lVar32 = *(long *)(this + 0x10);
        }
        uVar34 = uVar34 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)(uVar31 + 1) * lVar2;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar26;
        lVar29 = SUB168(auVar8 * auVar16,8);
        uVar23 = *(uint *)(lVar32 + lVar29 * 4);
        uVar31 = SUB164(auVar8 * auVar16,8);
      } while ((uVar23 != 0) &&
              (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar23 * lVar2, auVar17._8_8_ = 0,
              auVar17._0_8_ = uVar26, auVar10._8_8_ = 0,
              auVar10._0_8_ = (ulong)((uVar31 + uVar22) - SUB164(auVar9 * auVar17,8)) * lVar2,
              auVar18._8_8_ = 0, auVar18._0_8_ = uVar26, uVar34 <= SUB164(auVar10 * auVar18,8)));
    }
    uVar22 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) goto LAB_0011b730;
  }
  local_6c = 0;
  cVar20 = _lookup_pos(this,param_1,&local_6c);
  if (cVar20 == '\0') {
    if ((float)uVar22 * __LC134 < (float)(*(int *)(this + 0x2c) + 1)) {
      if (*(int *)(this + 0x28) == 0x1c) {
        pauVar24 = (undefined1 (*) [16])0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_0011b5da;
      }
      _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
    }
    local_58[0] = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(long *)param_1 == 0) {
      local_58[1] = 0;
      pauVar24 = (undefined1 (*) [16])operator_new(0x20,"");
      *(undefined8 *)pauVar24[1] = 0;
      *pauVar24 = (undefined1  [16])0x0;
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
      lVar2 = local_58[0];
      uVar25 = local_68._0_8_;
      uVar19 = local_68._8_8_;
      local_58[1] = 0;
      pauVar24 = (undefined1 (*) [16])operator_new(0x20,"");
      *(undefined8 *)pauVar24[1] = 0;
      *(undefined8 *)*pauVar24 = uVar25;
      *(undefined8 *)(*pauVar24 + 8) = uVar19;
      if (lVar2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar24 + 1),(CowData *)local_58);
      }
    }
    *(undefined8 *)(pauVar24[1] + 8) = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    puVar1 = *(undefined8 **)(this + 0x20);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar24;
    }
    else {
      *puVar1 = pauVar24;
      *(undefined8 **)(*pauVar24 + 8) = puVar1;
    }
    *(undefined1 (**) [16])(this + 0x20) = pauVar24;
    uVar21 = String::hash();
    lVar2 = *(long *)(this + 0x10);
    uVar22 = 1;
    if (uVar21 != 0) {
      uVar22 = uVar21;
    }
    uVar33 = (ulong)uVar22;
    uVar21 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar26 = CONCAT44(0,uVar21);
    lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar33 * lVar32;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar26;
    lVar28 = SUB168(auVar3 * auVar11,8);
    lVar29 = *(long *)(this + 8);
    puVar35 = (uint *)(lVar2 + lVar28 * 4);
    iVar27 = SUB164(auVar3 * auVar11,8);
    uVar23 = *puVar35;
    pauVar37 = pauVar24;
    if (uVar23 != 0) {
      uVar31 = 0;
      pauVar36 = pauVar24;
      do {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar23 * lVar32;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar26;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((uVar21 + iVar27) - SUB164(auVar4 * auVar12,8)) * lVar32;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar26;
        uVar22 = SUB164(auVar5 * auVar13,8);
        pauVar37 = pauVar36;
        if (uVar22 < uVar31) {
          *puVar35 = (uint)uVar33;
          uVar33 = (ulong)uVar23;
          puVar1 = (undefined8 *)(lVar29 + lVar28 * 8);
          pauVar37 = (undefined1 (*) [16])*puVar1;
          *puVar1 = pauVar36;
          uVar31 = uVar22;
        }
        uVar22 = (uint)uVar33;
        uVar31 = uVar31 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(iVar27 + 1) * lVar32;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar26;
        lVar28 = SUB168(auVar6 * auVar14,8);
        puVar35 = (uint *)(lVar2 + lVar28 * 4);
        iVar27 = SUB164(auVar6 * auVar14,8);
        uVar23 = *puVar35;
        pauVar36 = pauVar37;
      } while (uVar23 != 0);
    }
    *(undefined1 (**) [16])(lVar29 + lVar28 * 8) = pauVar37;
    *puVar35 = uVar22;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    pauVar24 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_6c * 8);
    *(undefined8 *)(pauVar24[1] + 8) = 0;
  }
LAB_0011b5da:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar24[1] + 8;
}



/* EditorHelpSearch::Runner::ClassMatch::ClassMatch(EditorHelpSearch::Runner::ClassMatch const&) */

void __thiscall
EditorHelpSearch::Runner::ClassMatch::ClassMatch(ClassMatch *this,ClassMatch *param_1)

{
  ClassMatch CVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  CVar1 = param_1[8];
  *(undefined8 *)(this + 0x10) = 0;
  lVar7 = *(long *)(param_1 + 0x10);
  this[8] = CVar1;
  if (lVar7 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  *(undefined8 *)(this + 0x18) = 0;
  uVar2 = *(uint *)(param_1 + 0x18);
  lVar7 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>::
  resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
          *)(this + 0x18),uVar2);
  if (*(int *)(param_1 + 0x18) != 0) {
    do {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar7 * 0x18);
      puVar6 = (undefined8 *)(lVar7 * 0x18 + *(long *)(this + 0x20));
      *puVar6 = *puVar5;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar5 + 1);
      if (puVar6[2] != puVar5[2]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)(puVar5 + 2));
      }
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(param_1 + 0x18));
  }
  *(undefined8 *)(this + 0x28) = 0;
  uVar2 = *(uint *)(param_1 + 0x28);
  lVar7 = 0;
  *(undefined8 *)(this + 0x30) = 0;
  LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>::
  resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
          *)(this + 0x28),uVar2);
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar7 * 0x18);
      puVar6 = (undefined8 *)(lVar7 * 0x18 + *(long *)(this + 0x30));
      *puVar6 = *puVar5;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar5 + 1);
      if (puVar6[2] != puVar5[2]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)(puVar5 + 2));
      }
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(param_1 + 0x28));
  }
  *(undefined8 *)(this + 0x38) = 0;
  uVar2 = *(uint *)(param_1 + 0x38);
  lVar7 = 0;
  *(undefined8 *)(this + 0x40) = 0;
  LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>::
  resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
          *)(this + 0x38),uVar2);
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar7 * 0x18);
      puVar6 = (undefined8 *)(lVar7 * 0x18 + *(long *)(this + 0x40));
      *puVar6 = *puVar5;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar5 + 1);
      if (puVar6[2] != puVar5[2]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)(puVar5 + 2));
      }
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(param_1 + 0x38));
  }
  *(undefined8 *)(this + 0x48) = 0;
  uVar2 = *(uint *)(param_1 + 0x48);
  lVar7 = 0;
  *(undefined8 *)(this + 0x50) = 0;
  LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>::
  resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
          *)(this + 0x48),uVar2);
  if (*(int *)(param_1 + 0x48) != 0) {
    do {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x50) + lVar7 * 0x18);
      puVar6 = (undefined8 *)(lVar7 * 0x18 + *(long *)(this + 0x50));
      *puVar6 = *puVar5;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar5 + 1);
      if (puVar6[2] != puVar5[2]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)(puVar5 + 2));
      }
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(param_1 + 0x48));
  }
  uVar2 = *(uint *)(param_1 + 0x58);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  if (uVar2 != 0) {
    uVar4 = uVar2 - 1;
    uVar9 = 0;
    uVar3 = uVar4 >> 1 | uVar4;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = (uVar3 | uVar3 >> 0x10) + 1;
    *(uint *)(this + 0x5c) = uVar3;
    lVar7 = Memory::realloc_static((void *)0x0,(ulong)uVar3 * 0x18,false);
    *(long *)(this + 0x60) = lVar7;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      LocalVector<TreeItem*,unsigned_int,false,false>::resize(uVar9);
    }
    uVar3 = *(uint *)(this + 0x58);
    if (uVar3 < uVar2) {
      puVar5 = (undefined8 *)(lVar7 + (ulong)uVar3 * 0x18);
      do {
        *puVar5 = 0;
        puVar6 = puVar5 + 3;
        *(undefined1 *)(puVar5 + 1) = 0;
        puVar5[2] = 0;
        puVar5 = puVar6;
      } while ((undefined8 *)(lVar7 + ((ulong)uVar3 + 1 + (ulong)(uVar4 - uVar3)) * 0x18) != puVar6)
      ;
    }
    *(uint *)(this + 0x58) = uVar2;
    if (*(int *)(param_1 + 0x58) != 0) {
      lVar8 = 0;
      while( true ) {
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar8 * 0x18);
        puVar6 = (undefined8 *)(lVar8 * 0x18 + lVar7);
        *puVar6 = *puVar5;
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar5 + 1);
        if (puVar6[2] != puVar5[2]) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)(puVar5 + 2));
        }
        lVar8 = lVar8 + 1;
        if (*(uint *)(param_1 + 0x58) <= (uint)lVar8) break;
        lVar7 = *(long *)(this + 0x60);
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x68);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  if (uVar2 != 0) {
    uVar4 = uVar2 - 1;
    uVar9 = 0;
    uVar3 = uVar4 >> 1 | uVar4;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = (uVar3 | uVar3 >> 0x10) + 1;
    *(uint *)(this + 0x6c) = uVar3;
    lVar7 = Memory::realloc_static((void *)0x0,(ulong)uVar3 * 0x18,false);
    *(long *)(this + 0x70) = lVar7;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      LocalVector<TreeItem*,unsigned_int,false,false>::resize(uVar9);
    }
    uVar3 = *(uint *)(this + 0x68);
    if (uVar3 < uVar2) {
      puVar5 = (undefined8 *)(lVar7 + (ulong)uVar3 * 0x18);
      do {
        *puVar5 = 0;
        puVar6 = puVar5 + 3;
        *(undefined1 *)(puVar5 + 1) = 0;
        puVar5[2] = 0;
        puVar5 = puVar6;
      } while ((undefined8 *)(lVar7 + ((ulong)uVar3 + 1 + (ulong)(uVar4 - uVar3)) * 0x18) != puVar6)
      ;
    }
    *(uint *)(this + 0x68) = uVar2;
    if (*(int *)(param_1 + 0x68) != 0) {
      lVar8 = 0;
      while( true ) {
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x70) + lVar8 * 0x18);
        puVar6 = (undefined8 *)(lVar8 * 0x18 + lVar7);
        *puVar6 = *puVar5;
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar5 + 1);
        if (puVar6[2] != puVar5[2]) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)(puVar5 + 2));
        }
        lVar8 = lVar8 + 1;
        if (*(uint *)(param_1 + 0x68) <= (uint)lVar8) break;
        lVar7 = *(long *)(this + 0x70);
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  if (uVar2 != 0) {
    uVar9 = uVar2 - 1;
    uVar3 = 0;
    uVar4 = uVar9 >> 1 | uVar9;
    uVar4 = uVar4 >> 2 | uVar4;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = (uVar4 | uVar4 >> 0x10) + 1;
    *(uint *)(this + 0x7c) = uVar4;
    lVar7 = Memory::realloc_static((void *)0x0,(ulong)uVar4 * 0x18,false);
    *(long *)(this + 0x80) = lVar7;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      LocalVector<TreeItem*,unsigned_int,false,false>::resize(uVar3);
    }
    uVar4 = *(uint *)(this + 0x78);
    if (uVar4 < uVar2) {
      puVar5 = (undefined8 *)(lVar7 + (ulong)uVar4 * 0x18);
      do {
        *puVar5 = 0;
        puVar6 = puVar5 + 3;
        *(undefined1 *)(puVar5 + 1) = 0;
        puVar5[2] = 0;
        puVar5 = puVar6;
      } while ((undefined8 *)(lVar7 + ((ulong)uVar4 + 1 + (ulong)(uVar9 - uVar4)) * 0x18) != puVar6)
      ;
    }
    *(uint *)(this + 0x78) = uVar2;
    if (*(int *)(param_1 + 0x78) != 0) {
      lVar8 = 0;
      while( true ) {
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x80) + lVar8 * 0x18);
        puVar6 = (undefined8 *)(lVar8 * 0x18 + lVar7);
        *puVar6 = *puVar5;
        *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar5 + 1);
        if (puVar6[2] != puVar5[2]) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)(puVar5 + 2));
        }
        lVar8 = lVar8 + 1;
        if (*(uint *)(param_1 + 0x78) <= (uint)lVar8) break;
        lVar7 = *(long *)(this + 0x80);
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x88);
  lVar7 = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>::
  resize((LocalVector<EditorHelpSearch::Runner::MemberMatch<DocData::MethodDoc>,unsigned_int,false,false>
          *)(this + 0x88),uVar2);
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x90) + lVar7 * 0x18);
      puVar6 = (undefined8 *)(lVar7 * 0x18 + *(long *)(this + 0x90));
      *puVar6 = *puVar5;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar5 + 1);
      if (puVar6[2] != puVar5[2]) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)(puVar5 + 2));
      }
      lVar7 = lVar7 + 1;
    } while ((uint)lVar7 < *(uint *)(param_1 + 0x88));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, EditorHelpSearch::Runner::ClassMatch, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorHelpSearch::Runner::ClassMatch> > >::operator[](String const&) */

ClassMatch * __thiscall
HashMap<String,EditorHelpSearch::Runner::ClassMatch,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorHelpSearch::Runner::ClassMatch>>>
::operator[](HashMap<String,EditorHelpSearch::Runner::ClassMatch,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorHelpSearch::Runner::ClassMatch>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  void *pvVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  long lVar51;
  ulong uVar52;
  long lVar53;
  undefined8 *puVar54;
  uint uVar55;
  long in_FS_OFFSET;
  ClassMatch *local_1c0;
  ClassMatch *local_1b8;
  ClassMatch local_198 [16];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_f8 [16];
  long local_e8;
  ClassMatch local_e0 [160];
  long local_40;
  
  lVar51 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if ((lVar51 != 0) && (*(int *)(this + 0x2c) != 0)) {
    lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar38 = String::hash();
    uVar40 = CONCAT44(0,uVar47);
    lVar45 = *(long *)(this + 0x10);
    uVar39 = 1;
    if (uVar38 != 0) {
      uVar39 = uVar38;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar39 * lVar53;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar40;
    lVar46 = SUB168(auVar8 * auVar24,8);
    uVar38 = *(uint *)(lVar45 + lVar46 * 4);
    uVar37 = SUB164(auVar8 * auVar24,8);
    if (uVar38 == 0) {
      lVar51 = *(long *)(this + 8);
    }
    else {
      lVar51 = *(long *)(this + 8);
      uVar50 = 0;
      do {
        if (uVar39 == uVar38) {
          cVar36 = String::operator==((String *)(*(long *)(lVar51 + lVar46 * 8) + 0x10),param_1);
          if (cVar36 != '\0') {
            local_1c0 = (ClassMatch *)(*(long *)(*(long *)(this + 8) + (ulong)uVar37 * 8) + 0x18);
            goto LAB_0011c130;
          }
          lVar51 = *(long *)(this + 8);
          lVar45 = *(long *)(this + 0x10);
        }
        uVar50 = uVar50 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(uVar37 + 1) * lVar53;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar40;
        lVar46 = SUB168(auVar9 * auVar25,8);
        uVar38 = *(uint *)(lVar45 + lVar46 * 4);
        uVar37 = SUB164(auVar9 * auVar25,8);
      } while ((uVar38 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar38 * lVar53, auVar26._8_8_ = 0,
              auVar26._0_8_ = uVar40, auVar11._8_8_ = 0,
              auVar11._0_8_ = (ulong)((uVar37 + uVar47) - SUB164(auVar10 * auVar26,8)) * lVar53,
              auVar27._8_8_ = 0, auVar27._0_8_ = uVar40, uVar50 <= SUB164(auVar11 * auVar27,8)));
    }
  }
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  uVar47 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_198[0] = (ClassMatch)0x0;
  local_198[1] = (ClassMatch)0x0;
  local_198[2] = (ClassMatch)0x0;
  local_198[3] = (ClassMatch)0x0;
  local_198[4] = (ClassMatch)0x0;
  local_198[5] = (ClassMatch)0x0;
  local_198[6] = (ClassMatch)0x0;
  local_198[7] = (ClassMatch)0x0;
  local_198[8] = (ClassMatch)0x0;
  local_198[9] = (ClassMatch)0x0;
  local_198[10] = (ClassMatch)0x0;
  local_198[0xb] = (ClassMatch)0x0;
  local_198[0xc] = (ClassMatch)0x0;
  local_198[0xd] = (ClassMatch)0x0;
  local_198[0xe] = (ClassMatch)0x0;
  local_198[0xf] = (ClassMatch)0x0;
  if (lVar51 == 0) {
    uVar48 = (ulong)uVar47;
    uVar40 = uVar48 * 4;
    uVar52 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar43 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar47 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar43 + uVar52)) && (pvVar43 < (void *)((long)pvVar3 + uVar40))
         ) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar48 != uVar40);
      }
      else {
        memset(pvVar3,0,uVar40);
        memset(pvVar43,0,uVar52);
      }
      goto LAB_0011bf47;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_0011c16f;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011bf56;
LAB_0011c195:
    uVar47 = *(uint *)(this + 0x28);
    if (uVar47 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_1c0 = (ClassMatch *)0x18;
      goto LAB_0011c53c;
    }
    uVar40 = (ulong)(uVar47 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar47 * 4);
    if (uVar47 + 1 < 2) {
      uVar40 = 2;
    }
    uVar47 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar47;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar43 = *(void **)(this + 8);
    uVar40 = uVar48 * 4;
    uVar52 = uVar48 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar47 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar52);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar47 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar47 != 0) {
          lVar51 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar38);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar47 * lVar53;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar52;
          lVar45 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar51 + lVar45 * 4);
          iVar44 = SUB164(auVar12 * auVar28,8);
          uVar37 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar43 + uVar40 * 8);
          while (uVar37 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar37 * lVar53;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar52;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar53;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar52;
            uVar55 = SUB164(auVar14 * auVar30,8);
            uVar49 = uVar41;
            if (uVar55 < uVar50) {
              *puVar1 = uVar47;
              puVar42 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar49 = *puVar42;
              *puVar42 = uVar41;
              uVar47 = uVar37;
              uVar50 = uVar55;
            }
            uVar50 = uVar50 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar53;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar52;
            lVar45 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar51 + lVar45 * 4);
            iVar44 = SUB164(auVar15 * auVar31,8);
            uVar41 = uVar49;
            uVar37 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar41;
          *puVar1 = uVar47;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
LAB_0011bf47:
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
LAB_0011bf56:
      uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar37 = String::hash();
      uVar40 = CONCAT44(0,uVar39);
      lVar53 = *(long *)(this + 0x10);
      uVar38 = 1;
      if (uVar37 != 0) {
        uVar38 = uVar37;
      }
      uVar55 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar38 * lVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar40;
      lVar45 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar53 + lVar45 * 4);
      uVar50 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        do {
          if (uVar38 == uVar37) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              EditorHelpSearch::Runner::ClassMatch::operator=
                        ((ClassMatch *)(*(long *)(*(long *)(this + 8) + (ulong)uVar50 * 8) + 0x18),
                         local_198);
              local_1c0 = (ClassMatch *)(*(long *)(*(long *)(this + 8) + (ulong)uVar50 * 8) + 0x18);
              goto LAB_0011c53c;
            }
            lVar53 = *(long *)(this + 0x10);
          }
          uVar55 = uVar55 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar50 + 1) * lVar51;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar40;
          lVar45 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar53 + lVar45 * 4);
          uVar50 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar37 * lVar51, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar40, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar39 + uVar50) - SUB164(auVar6 * auVar22,8)) * lVar51,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar40, uVar55 <= SUB164(auVar7 * auVar23,8)));
      }
      iVar44 = *(int *)(this + 0x2c);
    }
LAB_0011c16f:
    if ((float)uVar47 * __LC134 < (float)(iVar44 + 1)) goto LAB_0011c195;
  }
  local_e8 = 0;
  local_f8 = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)param_1);
  }
  EditorHelpSearch::Runner::ClassMatch::ClassMatch(local_e0,local_198);
  puVar42 = (undefined8 *)operator_new(0xb0,"");
  puVar42[2] = 0;
  *puVar42 = local_f8._0_8_;
  puVar42[1] = local_f8._8_8_;
  if (local_e8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar42 + 2),(CowData *)&local_e8);
  }
  local_1c0 = (ClassMatch *)(puVar42 + 3);
  EditorHelpSearch::Runner::ClassMatch::ClassMatch(local_1c0,local_e0);
  EditorHelpSearch::Runner::ClassMatch::~ClassMatch(local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  puVar54 = *(undefined8 **)(this + 0x20);
  if (puVar54 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar42;
  }
  else {
    *puVar54 = puVar42;
    puVar42[1] = puVar54;
  }
  *(undefined8 **)(this + 0x20) = puVar42;
  uVar39 = String::hash();
  lVar51 = *(long *)(this + 0x10);
  uVar47 = 1;
  if (uVar39 != 0) {
    uVar47 = uVar39;
  }
  uVar37 = 0;
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar39);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (ulong)uVar47 * lVar53;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar40;
  lVar46 = SUB168(auVar16 * auVar32,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar51 + lVar46 * 4);
  iVar44 = SUB164(auVar16 * auVar32,8);
  uVar38 = *puVar1;
  while (uVar38 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar38 * lVar53;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar40;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar17 * auVar33,8)) * lVar53;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar40;
    uVar50 = SUB164(auVar18 * auVar34,8);
    puVar54 = puVar42;
    if (uVar50 < uVar37) {
      *puVar1 = uVar47;
      puVar2 = (undefined8 *)(lVar45 + lVar46 * 8);
      puVar54 = (undefined8 *)*puVar2;
      *puVar2 = puVar42;
      uVar37 = uVar50;
      uVar47 = uVar38;
    }
    uVar37 = uVar37 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar44 + 1) * lVar53;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar40;
    lVar46 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar51 + lVar46 * 4);
    iVar44 = SUB164(auVar19 * auVar35,8);
    puVar42 = puVar54;
    uVar38 = *puVar1;
  }
  *(undefined8 **)(lVar45 + lVar46 * 8) = puVar42;
  *puVar1 = uVar47;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011c53c:
  local_1b8 = local_198;
  EditorHelpSearch::Runner::ClassMatch::~ClassMatch(local_1b8);
LAB_0011c130:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1c0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBSet<String, NaturalNoCaseComparator, DefaultAllocator>::_insert_rb_fix(RBSet<String,
   NaturalNoCaseComparator, DefaultAllocator>::Element*) */

void __thiscall
RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_insert_rb_fix
          (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *this,Element *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Element *pEVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  
  iVar1 = *(int *)*(Element **)(param_1 + 0x18);
  pEVar7 = *(Element **)(param_1 + 0x18);
  do {
    while( true ) {
      pEVar8 = pEVar7;
      if (iVar1 != 0) {
        **(undefined4 **)(*(long *)this + 0x10) = 1;
        return;
      }
      pEVar5 = *(Element **)(pEVar8 + 0x18);
      pEVar6 = *(Element **)(pEVar5 + 0x10);
      pEVar7 = pEVar8;
      if (pEVar6 == pEVar8) break;
      if (*(int *)pEVar6 == 0) goto LAB_0011c7fd;
      if (*(Element **)(pEVar8 + 0x10) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 8);
        *(long *)(pEVar8 + 0x10) = lVar3;
        pEVar7 = pEVar5;
        if (lVar2 != lVar3) {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
        }
        *(Element **)(param_1 + 0x18) = pEVar7;
        if (pEVar8 == *(Element **)(pEVar7 + 8)) {
          *(Element **)(pEVar7 + 8) = param_1;
        }
        else {
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        *(Element **)(param_1 + 8) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011c920;
LAB_0011c7a6:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011c7a6;
LAB_0011c920:
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 0x10);
      *(long *)(pEVar5 + 8) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 0x10)) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      else {
        *(long *)(lVar3 + 8) = lVar2;
      }
      *(Element **)(lVar2 + 0x10) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
LAB_0011c7e3:
      iVar1 = *(int *)pEVar7;
      param_1 = pEVar8;
    }
    pEVar6 = *(Element **)(pEVar5 + 8);
    if (*(int *)pEVar6 != 0) {
      if (*(Element **)(pEVar8 + 8) == param_1) {
        lVar2 = *(long *)(this + 8);
        lVar3 = *(long *)(param_1 + 0x10);
        *(long *)(pEVar8 + 8) = lVar3;
        if (lVar2 == lVar3) {
          *(Element **)(param_1 + 0x18) = pEVar5;
          pEVar7 = pEVar5;
LAB_0011ca12:
          *(Element **)(pEVar7 + 0x10) = param_1;
        }
        else {
          *(Element **)(lVar3 + 0x18) = pEVar8;
          pEVar7 = *(Element **)(pEVar8 + 0x18);
          *(Element **)(param_1 + 0x18) = pEVar7;
          if (pEVar8 == *(Element **)(pEVar7 + 0x10)) goto LAB_0011ca12;
          *(Element **)(pEVar7 + 8) = param_1;
        }
        *(Element **)(param_1 + 0x10) = pEVar8;
        *(Element **)(pEVar8 + 0x18) = param_1;
        pEVar6 = *(Element **)(this + 8);
        *(int *)param_1 = 1;
        pEVar7 = param_1;
        if (pEVar5 == pEVar6) goto LAB_0011c9e0;
LAB_0011c870:
        *(int *)pEVar5 = 0;
      }
      else {
        pEVar6 = *(Element **)(this + 8);
        *(int *)pEVar8 = 1;
        pEVar8 = param_1;
        if (pEVar5 != pEVar6) goto LAB_0011c870;
LAB_0011c9e0:
        _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                         "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
      }
      lVar2 = *(long *)(pEVar5 + 0x10);
      lVar3 = *(long *)(this + 8);
      lVar4 = *(long *)(lVar2 + 8);
      *(long *)(pEVar5 + 0x10) = lVar4;
      if (lVar3 != lVar4) {
        *(Element **)(lVar4 + 0x18) = pEVar5;
      }
      lVar3 = *(long *)(pEVar5 + 0x18);
      *(long *)(lVar2 + 0x18) = lVar3;
      if (pEVar5 == *(Element **)(lVar3 + 8)) {
        *(long *)(lVar3 + 8) = lVar2;
      }
      else {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      *(Element **)(lVar2 + 8) = pEVar5;
      *(long *)(pEVar5 + 0x18) = lVar2;
      goto LAB_0011c7e3;
    }
LAB_0011c7fd:
    pEVar7 = *(Element **)(this + 8);
    *(int *)pEVar8 = 1;
    *(int *)pEVar6 = 1;
    if (pEVar5 == pEVar7) {
      _err_print_error("_set_color","./core/templates/rb_set.h",0xd0,
                       "Condition \"p_node == _data._nil && p_color == RED\" is true.",0,0);
    }
    else {
      *(int *)pEVar5 = 0;
    }
    iVar1 = *(int *)*(Element **)(pEVar5 + 0x18);
    pEVar7 = *(Element **)(pEVar5 + 0x18);
    param_1 = pEVar5;
  } while( true );
}



/* RBSet<String, NaturalNoCaseComparator, DefaultAllocator>::_copy_from(RBSet<String,
   NaturalNoCaseComparator, DefaultAllocator> const&) */

void __thiscall
RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_copy_from
          (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *this,RBSet *param_1)

{
  String *pSVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  char cVar5;
  Element *pEVar6;
  Element *pEVar7;
  Element *pEVar8;
  undefined4 *puVar9;
  Element *pEVar10;
  long lVar11;
  bool bVar12;
  
  clear(this);
  if (*(long *)param_1 != 0) {
    lVar3 = *(long *)(*(long *)param_1 + 0x10);
    if (*(long *)(param_1 + 8) != lVar3) {
      do {
        lVar11 = lVar3;
        lVar3 = *(long *)(lVar11 + 0x10);
      } while (*(long *)(param_1 + 8) != *(long *)(lVar11 + 0x10));
      do {
        puVar9 = *(undefined4 **)this;
        pSVar1 = (String *)(lVar11 + 0x30);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)operator_new(0x38,DefaultAllocator::alloc);
          *(undefined1 (*) [16])(puVar9 + 8) = (undefined1  [16])0x0;
          uVar2 = *(undefined8 *)(this + 8);
          *(undefined8 *)(puVar9 + 0xc) = 0;
          *(undefined4 **)this = puVar9;
          *puVar9 = 1;
          *(undefined8 *)(puVar9 + 2) = uVar2;
          *(undefined8 *)(puVar9 + 4) = uVar2;
          *(undefined8 *)(puVar9 + 6) = uVar2;
        }
        else {
          puVar4 = *(undefined4 **)(puVar9 + 4);
          if (*(undefined4 **)(puVar9 + 4) != *(undefined4 **)(this + 8)) {
            do {
              while( true ) {
                puVar9 = puVar4;
                cVar5 = String::naturalnocasecmp_to(pSVar1);
                if (cVar5 < '\0') break;
                cVar5 = String::naturalnocasecmp_to((String *)(puVar9 + 0xc));
                if (-1 < cVar5) goto LAB_0011cbd5;
                puVar4 = *(undefined4 **)(puVar9 + 2);
                if (*(undefined4 **)(this + 8) == *(undefined4 **)(puVar9 + 2)) goto LAB_0011caf0;
              }
              puVar4 = *(undefined4 **)(puVar9 + 4);
            } while (*(undefined4 **)(this + 8) != *(undefined4 **)(puVar9 + 4));
          }
        }
LAB_0011caf0:
        pEVar6 = (Element *)operator_new(0x38,DefaultAllocator::alloc);
        *(undefined1 (*) [16])(pEVar6 + 0x20) = (undefined1  [16])0x0;
        uVar2 = *(undefined8 *)(this + 8);
        *(undefined8 *)(pEVar6 + 0x30) = 0;
        lVar3 = *(long *)(lVar11 + 0x30);
        *(undefined4 *)pEVar6 = 0;
        *(undefined4 **)(pEVar6 + 0x18) = puVar9;
        *(undefined8 *)(pEVar6 + 8) = uVar2;
        *(undefined8 *)(pEVar6 + 0x10) = uVar2;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pEVar6 + 0x30),(CowData *)pSVar1);
        }
        if ((*(undefined4 **)this == puVar9) ||
           (cVar5 = String::naturalnocasecmp_to(pSVar1), cVar5 < '\0')) {
          *(Element **)(puVar9 + 4) = pEVar6;
        }
        else {
          *(Element **)(puVar9 + 2) = pEVar6;
        }
        pEVar8 = pEVar6;
        pEVar10 = *(Element **)(pEVar6 + 8);
        if (*(Element **)(this + 8) == *(Element **)(pEVar6 + 8)) {
          do {
            pEVar7 = *(Element **)(pEVar8 + 0x18);
            bVar12 = pEVar8 == *(Element **)(pEVar7 + 8);
            pEVar8 = pEVar7;
          } while (bVar12);
          if (*(Element **)this == pEVar7) {
            pEVar7 = (Element *)0x0;
          }
        }
        else {
          do {
            pEVar8 = pEVar10 + 0x10;
            pEVar7 = pEVar10;
            pEVar10 = *(Element **)pEVar8;
          } while (*(Element **)(this + 8) != *(Element **)pEVar8);
        }
        *(Element **)(pEVar6 + 0x20) = pEVar7;
        pEVar10 = *(Element **)(pEVar6 + 0x10);
        pEVar8 = pEVar6;
        if (*(Element **)(this + 8) == *(Element **)(pEVar6 + 0x10)) {
          do {
            pEVar10 = pEVar8;
            pEVar8 = *(Element **)(pEVar10 + 0x18);
          } while (pEVar10 == *(Element **)(pEVar8 + 0x10));
          if (*(Element **)this != pEVar10) goto LAB_0011cbac;
          *(undefined8 *)(pEVar6 + 0x28) = 0;
          if (pEVar7 != (Element *)0x0) goto LAB_0011cbb5;
        }
        else {
          do {
            pEVar8 = pEVar10;
            pEVar10 = *(Element **)(pEVar8 + 8);
          } while (*(Element **)(this + 8) != *(Element **)(pEVar8 + 8));
LAB_0011cbac:
          *(Element **)(pEVar6 + 0x28) = pEVar8;
          if (pEVar7 != (Element *)0x0) {
LAB_0011cbb5:
            *(Element **)(pEVar7 + 0x28) = pEVar6;
            pEVar8 = *(Element **)(pEVar6 + 0x28);
            if (pEVar8 == (Element *)0x0) goto LAB_0011cbc6;
          }
          *(Element **)(pEVar8 + 0x20) = pEVar6;
        }
LAB_0011cbc6:
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
        _insert_rb_fix(this,pEVar6);
LAB_0011cbd5:
        lVar11 = *(long *)(lVar11 + 0x20);
      } while (lVar11 != 0);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, RBSet<String, NaturalNoCaseComparator, DefaultAllocator>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, RBSet<String,
   NaturalNoCaseComparator, DefaultAllocator> > > >::operator[](String const&) */

RBSet<String,NaturalNoCaseComparator,DefaultAllocator> * __thiscall
HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
::operator[](HashMap<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,RBSet<String,NaturalNoCaseComparator,DefaultAllocator>>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
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
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined8 *puVar43;
  void *pvVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 *puVar49;
  undefined8 uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  long in_FS_OFFSET;
  RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *local_c8;
  RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *local_c0;
  void *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined1 local_78 [16];
  long local_68;
  void *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0011d400:
    local_88 = 0;
    local_90 = &_GlobalNilClass::_nil;
    local_98 = (void *)0x0;
    uVar48 = (ulong)uVar55;
    uVar41 = uVar48 * 4;
    uVar52 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    pvVar44 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar44;
    if (uVar55 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar44 + uVar52)) && (pvVar44 < (void *)((long)pvVar4 + uVar41))
         ) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar41 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar48 != uVar41);
      }
      else {
        memset(pvVar4,0,uVar41);
        memset(pvVar44,0,uVar52);
      }
      goto LAB_0011cd44;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0011cf2f;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0011cd53;
LAB_0011cf55:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c0 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)0x18;
      goto LAB_0011d351;
    }
    uVar41 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar40 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar41 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    uVar48 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar44 = *(void **)(this + 8);
    uVar41 = uVar48 * 4;
    uVar52 = uVar48 * 8;
    pvVar4 = *(void **)(this + 0x10);
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar48);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar52);
      }
    }
    if (uVar40 != 0) {
      uVar41 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar4 + uVar41 * 4);
        if (uVar55 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar51 = 0;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar39);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar55 * lVar53;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar52;
          lVar46 = SUB168(auVar13 * auVar29,8);
          puVar1 = (uint *)(lVar3 + lVar46 * 4);
          iVar45 = SUB164(auVar13 * auVar29,8);
          uVar38 = *puVar1;
          uVar42 = *(undefined8 *)((long)pvVar44 + uVar41 * 8);
          while (uVar38 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar38 * lVar53;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar52;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((uVar39 + iVar45) - SUB164(auVar14 * auVar30,8)) * lVar53;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar52;
            uVar54 = SUB164(auVar15 * auVar31,8);
            uVar50 = uVar42;
            if (uVar54 < uVar51) {
              *puVar1 = uVar55;
              puVar43 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar50 = *puVar43;
              *puVar43 = uVar42;
              uVar55 = uVar38;
              uVar51 = uVar54;
            }
            uVar51 = uVar51 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar52;
            lVar46 = SUB168(auVar16 * auVar32,8);
            puVar1 = (uint *)(lVar3 + lVar46 * 4);
            iVar45 = SUB164(auVar16 * auVar32,8);
            uVar42 = uVar50;
            uVar38 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar42;
          *puVar1 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar40 != uVar41);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) == 0) {
      local_98 = (void *)0x0;
      local_90 = &_GlobalNilClass::_nil;
      local_88 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    }
    else {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar41 = CONCAT44(0,uVar55);
      uVar39 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar40 = 1;
      if (uVar39 != 0) {
        uVar40 = uVar39;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar40 * lVar3;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar41;
      lVar46 = SUB168(auVar9 * auVar25,8);
      uVar39 = *(uint *)(lVar53 + lVar46 * 4);
      uVar38 = SUB164(auVar9 * auVar25,8);
      if (uVar39 == 0) {
        lVar47 = *(long *)(this + 8);
      }
      else {
        lVar47 = *(long *)(this + 8);
        uVar51 = 0;
        do {
          if (uVar40 == uVar39) {
            cVar37 = String::operator==((String *)(*(long *)(lVar47 + lVar46 * 8) + 0x10),param_1);
            if (cVar37 != '\0') {
              local_c0 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
                         (*(long *)(*(long *)(this + 8) + (ulong)uVar38 * 8) + 0x18);
              goto LAB_0011d37d;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar47 = *(long *)(this + 8);
          }
          uVar51 = uVar51 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar38 + 1) * lVar3;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar41;
          lVar46 = SUB168(auVar10 * auVar26,8);
          uVar39 = *(uint *)(lVar53 + lVar46 * 4);
          uVar38 = SUB164(auVar10 * auVar26,8);
        } while ((uVar39 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar39 * lVar3, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar41, auVar12._8_8_ = 0,
                auVar12._0_8_ = (ulong)((uVar38 + uVar55) - SUB164(auVar11 * auVar27,8)) * lVar3,
                auVar28._8_8_ = 0, auVar28._0_8_ = uVar41, uVar51 <= SUB164(auVar12 * auVar28,8)));
      }
      local_98 = (void *)0x0;
      local_90 = &_GlobalNilClass::_nil;
      local_88 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar47 == 0) goto LAB_0011d400;
    }
LAB_0011cd44:
    iVar45 = *(int *)(this + 0x2c);
    uVar48 = (ulong)uVar55;
    if (iVar45 != 0) {
LAB_0011cd53:
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      uVar41 = CONCAT44(0,uVar40);
      lVar53 = *(long *)(this + 0x10);
      uVar39 = 1;
      if (uVar38 != 0) {
        uVar39 = uVar38;
      }
      uVar54 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar3;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar41;
      lVar46 = SUB168(auVar5 * auVar21,8);
      uVar38 = *(uint *)(lVar53 + lVar46 * 4);
      uVar51 = SUB164(auVar5 * auVar21,8);
      if (uVar38 != 0) {
        do {
          if (uVar39 == uVar38) {
            cVar37 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),param_1
                                       );
            if (cVar37 != '\0') {
              RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_copy_from
                        ((RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
                         (*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18),
                         (RBSet *)&local_98);
              local_c0 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)
                         (*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18);
              goto LAB_0011d351;
            }
            lVar53 = *(long *)(this + 0x10);
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar51 + 1) * lVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar41;
          lVar46 = SUB168(auVar6 * auVar22,8);
          uVar38 = *(uint *)(lVar53 + lVar46 * 4);
          uVar51 = SUB164(auVar6 * auVar22,8);
        } while ((uVar38 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar38 * lVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar41, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar40 + uVar51) - SUB164(auVar7 * auVar23,8)) * lVar3,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar41, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      iVar45 = *(int *)(this + 0x2c);
      uVar48 = (ulong)uVar55;
    }
LAB_0011cf2f:
    if ((float)uVar48 * __LC134 < (float)(iVar45 + 1)) goto LAB_0011cf55;
  }
  local_68 = 0;
  local_78 = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)param_1);
  }
  local_60 = (void *)0x0;
  local_58 = &_GlobalNilClass::_nil;
  local_50 = 0;
  RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_copy_from
            ((RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)&local_60,(RBSet *)&local_98)
  ;
  puVar43 = (undefined8 *)operator_new(0x30,"");
  puVar43[2] = 0;
  *puVar43 = local_78._0_8_;
  puVar43[1] = local_78._8_8_;
  if (local_68 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar43 + 2),(CowData *)&local_68);
  }
  puVar43[3] = 0;
  *(undefined4 *)(puVar43 + 5) = 0;
  puVar43[4] = &_GlobalNilClass::_nil;
  local_c0 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)(puVar43 + 3);
  RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::_copy_from(local_c0,(RBSet *)&local_60);
  RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::clear
            ((RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)&local_60);
  pvVar44 = local_60;
  if (local_60 != (void *)0x0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)((long)local_60 + 0x30));
    Memory::free_static(pvVar44,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  puVar49 = *(undefined8 **)(this + 0x20);
  if (puVar49 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar43;
  }
  else {
    *puVar49 = puVar43;
    puVar43[1] = puVar49;
  }
  *(undefined8 **)(this + 0x20) = puVar43;
  uVar40 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar40 != 0) {
    uVar55 = uVar40;
  }
  uVar38 = 0;
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar40);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = (ulong)uVar55 * lVar53;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar41;
  lVar47 = SUB168(auVar17 * auVar33,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar3 + lVar47 * 4);
  iVar45 = SUB164(auVar17 * auVar33,8);
  uVar39 = *puVar1;
  while (uVar39 != 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)uVar39 * lVar53;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar41;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)((uVar40 + iVar45) - SUB164(auVar18 * auVar34,8)) * lVar53;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar41;
    uVar51 = SUB164(auVar19 * auVar35,8);
    puVar49 = puVar43;
    if (uVar51 < uVar38) {
      *puVar1 = uVar55;
      puVar2 = (undefined8 *)(lVar46 + lVar47 * 8);
      puVar49 = (undefined8 *)*puVar2;
      *puVar2 = puVar43;
      uVar38 = uVar51;
      uVar55 = uVar39;
    }
    uVar38 = uVar38 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(iVar45 + 1) * lVar53;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar41;
    lVar47 = SUB168(auVar20 * auVar36,8);
    puVar1 = (uint *)(lVar3 + lVar47 * 4);
    iVar45 = SUB164(auVar20 * auVar36,8);
    puVar43 = puVar49;
    uVar39 = *puVar1;
  }
  *(undefined8 **)(lVar46 + lVar47 * 8) = puVar43;
  *puVar1 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011d351:
  local_c8 = (RBSet<String,NaturalNoCaseComparator,DefaultAllocator> *)&local_98;
  RBSet<String,NaturalNoCaseComparator,DefaultAllocator>::clear(local_c8);
  pvVar44 = local_98;
  if (local_98 != (void *)0x0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)((long)local_98 + 0x30));
    Memory::free_static(pvVar44,false);
  }
LAB_0011d37d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_c0;
}



/* EditorHelpSearch::_notificationv(int, bool) */

void __thiscall EditorHelpSearch::_notificationv(EditorHelpSearch *this,int param_1,bool param_2)

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



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(param_1 + 0x58);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = plVar1[-1];
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 5;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
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
                if (pvVar5 == (void *)0x0) goto LAB_0011d9d9;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_0011d9d9:
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



/* EditorHelpSearch::_all_terms_in_name(Vector<String> const&, String const&) const */

void EditorHelpSearch::_GLOBAL__sub_I__all_terms_in_name(void)

{
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
  if (EditorHelpBit::doc_class_cache == '\0') {
    EditorHelpBit::doc_class_cache = '\x01';
    EditorHelpBit::doc_class_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
                 ::~HashMap,EditorHelpBit::doc_class_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_enum_cache == '\0') {
    EditorHelpBit::doc_enum_cache = '\x01';
    EditorHelpBit::doc_enum_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_enum_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_constant_cache == '\0') {
    EditorHelpBit::doc_constant_cache = '\x01';
    EditorHelpBit::doc_constant_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_constant_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_property_cache == '\0') {
    EditorHelpBit::doc_property_cache = '\x01';
    EditorHelpBit::doc_property_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_property_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_theme_item_cache == '\0') {
    EditorHelpBit::doc_theme_item_cache = '\x01';
    EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_theme_item_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_method_cache == '\0') {
    EditorHelpBit::doc_method_cache = '\x01';
    EditorHelpBit::doc_method_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_method_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_signal_cache == '\0') {
    EditorHelpBit::doc_signal_cache = '\x01';
    EditorHelpBit::doc_signal_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_signal_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_annotation_cache != '\0') {
    return;
  }
  EditorHelpBit::doc_annotation_cache = 1;
  EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
  EditorHelpBit::doc_annotation_cache._40_8_ = 2;
  EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
               ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
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
/* EditorHelpSearch::Runner::ClassMatch::ClassMatch(EditorHelpSearch::Runner::ClassMatch const&) */

void __thiscall
EditorHelpSearch::Runner::ClassMatch::ClassMatch(ClassMatch *this,ClassMatch *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorHelpSearch::Runner::~Runner() */

void __thiscall EditorHelpSearch::Runner::~Runner(Runner *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorHelpSearch::Runner::ClassMatch::~ClassMatch() */

void __thiscall EditorHelpSearch::Runner::ClassMatch::~ClassMatch(ClassMatch *this)

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
/* EditorHelpSearch::~EditorHelpSearch() */

void __thiscall EditorHelpSearch::~EditorHelpSearch(EditorHelpSearch *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorHelpSearch, Dictionary, String const&,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,Dictionary,String_const&,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,Dictionary,String_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorHelpSearch, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Tree, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Tree,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Tree,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorHelpSearch, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorHelpSearch, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorHelpSearch, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorHelpSearch,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorHelpSearch,void,int> *this)

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


