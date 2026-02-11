
/* EditorToaster::_update_vbox_position() */

void __thiscall EditorToaster::_update_vbox_position(EditorToaster *this)

{
  long lVar1;
  Vector2 *pVVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Control::set_size(*(Vector2 **)(this + 0xa78),true);
  pVVar2 = *(Vector2 **)(this + 0xa78);
  EditorScale::get_scale();
  Control::get_size();
  Control::get_size();
  Control::get_global_position();
  Control::set_position(pVVar2,true);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<Control*, EditorToaster::Toast, HashMapHasherDefault, HashMapComparatorDefault<Control*>,
   DefaultTypedAllocator<HashMapElement<Control*, EditorToaster::Toast> > >::_lookup_pos(Control*
   const&, unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
::_lookup_pos(HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
              *this,Control **param_1,uint *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar13 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
    uVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if (((uint)uVar13 == uVar14) &&
           (*(Control ***)(*(long *)(*(long *)(this + 8) + lVar12 * 8) + 0x10) == param_1)) {
          *param_2 = uVar11;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar12 * 4);
        uVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar14 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar14 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4
                                         ) + uVar11) - SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar15;
      } while (uVar16 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorToaster::_draw_button() */

void __thiscall EditorToaster::_draw_button(EditorToaster *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  StringName *pSVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  float fVar8;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  plVar3 = *(long **)(this + 0xaa0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar3 == (long *)0x0) goto LAB_00100321;
  iVar2 = 0;
  cVar6 = '\0';
  do {
    cVar1 = CanvasItem::is_visible();
    if ((cVar1 != '\0') && (cVar6 = cVar1, iVar2 < (int)plVar3[3])) {
      iVar2 = (int)plVar3[3];
    }
    plVar3 = (long *)*plVar3;
  } while (plVar3 != (long *)0x0);
  if (cVar6 == '\0') goto LAB_00100321;
  local_48 = __LC1;
  uStack_40 = _UNK_0010e678;
  fVar8 = (float)Control::get_size();
  fVar8 = fVar8 * __LC2;
  if (iVar2 == 1) {
    pSVar4 = (StringName *)&_draw_button()::{lambda()#2}::operator()()::sname;
    if (_draw_button()::{lambda()#2}::operator()()::sname == '\0') {
      puVar7 = &_draw_button()::{lambda()#2}::operator()()::sname;
      pSVar4 = (StringName *)&_draw_button()::{lambda()#2}::operator()()::sname;
      iVar2 = __cxa_guard_acquire(&_draw_button()::{lambda()#2}::operator()()::sname);
      uVar5 = 0xb5;
joined_r0x001003e5:
      if (iVar2 != 0) {
LAB_001003eb:
        _scs_create((char *)pSVar4,(bool)uVar5);
        __cxa_atexit(StringName::~StringName,pSVar4,&__dso_handle);
        __cxa_guard_release(puVar7);
      }
    }
LAB_001002c1:
    local_48 = Control::get_theme_color((StringName *)this,pSVar4);
    uStack_40 = CONCAT44(in_XMM1_Db,in_XMM1_Da);
  }
  else {
    if (iVar2 == 2) {
      pSVar4 = (StringName *)&_draw_button()::{lambda()#3}::operator()()::sname;
      if (_draw_button()::{lambda()#3}::operator()()::sname == '\0') {
        puVar7 = &_draw_button()::{lambda()#3}::operator()()::sname;
        pSVar4 = (StringName *)&_draw_button()::{lambda()#3}::operator()()::sname;
        iVar2 = __cxa_guard_acquire(&_draw_button()::{lambda()#3}::operator()()::sname);
        if (iVar2 != 0) {
          uVar5 = 0xc3;
          goto LAB_001003eb;
        }
      }
      goto LAB_001002c1;
    }
    if (iVar2 == 0) {
      pSVar4 = (StringName *)&_draw_button()::{lambda()#1}::operator()()::sname;
      if (_draw_button()::{lambda()#1}::operator()()::sname == '\0') {
        puVar7 = &_draw_button()::{lambda()#1}::operator()()::sname;
        pSVar4 = (StringName *)&_draw_button()::{lambda()#1}::operator()()::sname;
        iVar2 = __cxa_guard_acquire(&_draw_button()::{lambda()#1}::operator()()::sname);
        uVar5 = 0xa8;
        goto joined_r0x001003e5;
      }
      goto LAB_001002c1;
    }
  }
  local_50 = CONCAT44(fVar8 + fVar8,fVar8 + fVar8);
  CanvasItem::draw_circle
            (*(Vector2 **)(this + 0xa60),fVar8,(Color *)&local_50,SUB81(&local_48,0),(float)_LC6,
             true);
LAB_00100321:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<StyleBoxFlat>::TEMPNAMEPLACEHOLDERVALUE(Ref<StyleBoxFlat> const&) [clone .isra.0] */

void __thiscall Ref<StyleBoxFlat>::operator=(Ref<StyleBoxFlat> *this,Ref *param_1)

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



/* EditorToaster::get_singleton() */

undefined8 EditorToaster::get_singleton(void)

{
  return singleton;
}



/* EditorToaster::_error_handler(void*, char const*, char const*, int, char const*, char const*,
   bool, ErrorHandlerType) */

void EditorToaster::_error_handler
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
               int param_6,bool param_7,int param_8)

{
  CallableCustom *this;
  Variant *pVVar1;
  long in_FS_OFFSET;
  bool bVar2;
  CowData<char32_t> local_150 [8];
  String local_148 [8];
  CowData<char32_t> local_140 [8];
  Callable local_138 [16];
  Variant *local_128;
  Variant *pVStack_120;
  Variant *local_118;
  Variant *pVStack_110;
  Variant *local_108;
  Variant *pVStack_100;
  Variant local_e8 [24];
  Variant local_d0 [24];
  Variant local_b8 [24];
  Variant local_a0 [24];
  Variant local_88 [24];
  Variant local_70 [24];
  Variant local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this = (CallableCustom *)operator_new(0x30,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC13;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_hash_0010e0e8;
  *(code **)(this + 0x28) = _error_handler_impl;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(char **)(this + 0x20) = "EditorToaster::_error_handler_impl";
  Callable::Callable(local_138,this);
  String::utf8((char *)local_140,param_6);
  String::utf8((char *)local_148,param_5);
  String::utf8((char *)local_150,param_3);
  Variant::Variant(local_e8,(String *)local_150);
  Variant::Variant(local_d0,param_4);
  Variant::Variant(local_b8,local_148);
  Variant::Variant(local_a0,(String *)local_140);
  Variant::Variant(local_88,param_7);
  Variant::Variant(local_70,param_8);
  Variant::Variant(local_58,0);
  local_128 = local_e8;
  pVStack_120 = local_d0;
  local_118 = local_b8;
  pVStack_110 = local_a0;
  local_108 = local_88;
  pVStack_100 = local_70;
  Callable::call_deferredp((Variant **)local_138,(int)&local_128);
  pVVar1 = local_58;
  do {
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    bVar2 = local_e8 != pVVar1;
    pVVar1 = pVVar1 + -0x18;
  } while (bVar2);
  CowData<char32_t>::_unref(local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref(local_140);
  Callable::~Callable(local_138);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* EditorToaster::_update_disable_notifications_button() */

void __thiscall EditorToaster::_update_disable_notifications_button(EditorToaster *this)

{
  long *plVar1;
  Vector2 *pVVar2;
  char cVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  float extraout_XMM0_Db;
  undefined8 uVar8;
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  long lStack_30;
  undefined8 local_28;
  long local_20;
  
  plVar4 = *(long **)(this + 0xaa0);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    do {
      local_50 = 0;
      if (plVar4[7] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(plVar4 + 7));
      }
      local_48 = 0;
      if (plVar4[8] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(plVar4 + 8));
      }
      local_40 = (undefined4)plVar4[9];
      local_38 = plVar4[10];
      lStack_30 = plVar4[0xb];
      cVar3 = CanvasItem::is_visible();
      if (cVar3 != '\0') {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        cVar3 = CanvasItem::is_visible();
        if (cVar3 != '\0') {
          CanvasItem::show();
          pVVar2 = *(Vector2 **)(this + 0xa68);
          fVar5 = (float)EditorScale::get_scale();
          fVar5 = _LC0 * fVar5;
          fVar6 = (float)Control::get_size();
          (**(code **)(**(long **)(this + 0xa68) + 0x2f8))();
          fVar7 = (float)EditorScale::get_scale();
          fVar7 = _LC26 * fVar7;
          uVar8 = Control::get_global_position();
          local_28 = CONCAT44(((float)((ulong)uVar8 >> 0x20) - extraout_XMM0_Db) + fVar5,
                              fVar7 + (float)uVar8 + fVar6);
          Control::set_position(pVVar2,SUB81(&local_28,0));
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
          goto LAB_00100a0f;
        }
        break;
      }
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
      }
      if (local_50 != 0) {
        LOCK();
        plVar1 = (long *)(local_50 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_50 + -0x10),false);
        }
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::hide();
    return;
  }
LAB_00100a0f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorToaster::_set_notifications_enabled(bool) */

void __thiscall EditorToaster::_set_notifications_enabled(EditorToaster *this,bool param_1)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa78),0));
  pRVar1 = *(Ref **)(this + 0xa60);
  if (param_1) {
    if (_set_notifications_enabled(bool)::{lambda()#1}::operator()()::sname != '\0')
    goto LAB_00100a75;
    puVar4 = &_set_notifications_enabled(bool)::{lambda()#1}::operator()()::sname;
    pcVar6 = (char *)&_set_notifications_enabled(bool)::{lambda()#1}::operator()()::sname;
    iVar3 = __cxa_guard_acquire(&_set_notifications_enabled(bool)::{lambda()#1}::operator()()::sname
                               );
    uVar5 = 0xcf;
    if (iVar3 == 0) goto LAB_00100a75;
  }
  else {
    if (_set_notifications_enabled(bool)::{lambda()#2}::operator()()::sname != '\0')
    goto LAB_00100a75;
    puVar4 = &_set_notifications_enabled(bool)::{lambda()#2}::operator()()::sname;
    pcVar6 = (char *)&_set_notifications_enabled(bool)::{lambda()#2}::operator()()::sname;
    iVar3 = __cxa_guard_acquire(&_set_notifications_enabled(bool)::{lambda()#2}::operator()()::sname
                               );
    if (iVar3 == 0) goto LAB_00100a75;
    uVar5 = 0xdc;
  }
  _scs_create(pcVar6,(bool)uVar5);
  __cxa_atexit(StringName::~StringName,pcVar6,&__dso_handle);
  __cxa_guard_release(puVar4);
LAB_00100a75:
  Control::get_editor_theme_icon((StringName *)&local_38);
  Button::set_button_icon(pRVar1);
  if (((local_38 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
    (**(code **)(*(long *)local_38 + 0x140))(local_38);
    Memory::free_static(local_38,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  _update_disable_notifications_button(this);
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



/* EditorToaster::popup_str(String const&, EditorToaster::Severity, String const&) [clone .part.0]
    */

void __thiscall
EditorToaster::popup_str(EditorToaster *this,CowData *param_1,int param_3,CowData *param_4)

{
  Variant *pVVar1;
  undefined8 uVar2;
  long lVar3;
  Callable *pCVar4;
  CallableCustom *this_00;
  Variant *pVVar5;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 local_e0;
  Callable local_d8 [16];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)param_4;
  this[0xab8] = (EditorToaster)0x1;
  pCVar4 = MessageQueue::main_singleton;
  local_e0 = 0;
  if (lVar3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,param_4);
  }
  local_e8 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,param_1);
  }
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(undefined **)(this_00 + 0x20) = &_LC13;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined ***)this_00 = &PTR_hash_0010e208;
  *(undefined8 *)(this_00 + 0x30) = uVar2;
  *(code **)(this_00 + 0x38) = _popup_str;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(EditorToaster **)(this_00 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "EditorToaster::_popup_str";
  Callable::Callable(local_d8,this_00);
  Variant::Variant(local_a8,(String *)&local_e8);
  Variant::Variant(local_90,param_3);
  Variant::Variant(local_78,(String *)&local_e0);
  pVVar5 = local_48;
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_c8 = local_a8;
  pVStack_c0 = local_90;
  local_b8 = local_78;
  CallQueue::push_callablep(pCVar4,(Variant **)local_d8,(int)&local_c8,true);
  do {
    pVVar1 = pVVar5 + -0x18;
    pVVar5 = pVVar5 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar5 != local_a8);
  Callable::~Callable(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  this[0xab8] = (EditorToaster)0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorToaster::popup_str(String const&, EditorToaster::Severity, String const&) */

void EditorToaster::popup_str(long param_1)

{
  if (*(char *)(param_1 + 0xab8) != '\0') {
    return;
  }
  popup_str();
  return;
}



/* EditorToaster::_draw_progress(Control*) */

void __thiscall EditorToaster::_draw_progress(EditorToaster *this,Control *param_1)

{
  HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
  *this_00;
  int iVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  Object *pOVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  float fVar7;
  undefined8 uVar8;
  float local_78;
  Control *local_70;
  Object *local_68;
  Object *local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  undefined4 uVar9;
  
  this_00 = (HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
             *)(this + 0xa88);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_1;
  cVar2 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
          ::_lookup_pos(this_00,(Control **)param_1,(uint *)&local_60);
  if (cVar2 == '\0') goto LAB_00100f48;
  lVar3 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
          ::operator[](this_00,&local_70);
  if ((*(float *)(lVar3 + 8) <= 0.0) ||
     (lVar3 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
              ::operator[](this_00,&local_70), *(float *)(lVar3 + 4) <= 0.0)) goto LAB_00100f48;
  uVar8 = Control::get_size();
  uVar9 = (undefined4)((ulong)uVar8 >> 0x20);
  local_78 = (float)uVar8;
  lVar3 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
          ::operator[](this_00,&local_70);
  fVar7 = *(float *)(lVar3 + 4);
  lVar3 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
          ::operator[](this_00,&local_70);
  fVar7 = *(float *)(lVar3 + 8) / fVar7;
  fVar7 = fVar7 + fVar7 + 0.0;
  if (fVar7 <= _LC39) {
    local_78 = fVar7 * local_78;
  }
  local_68 = (Object *)0x0;
  piVar4 = (int *)HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                  ::operator[](this_00,&local_70);
  iVar1 = *piVar4;
  if (iVar1 == 1) {
    Ref<StyleBoxFlat>::operator=((Ref<StyleBoxFlat> *)&local_68,*(Ref **)(this + 0xa50));
LAB_00101126:
    pOVar6 = local_68;
    local_58 = 0;
    local_60 = (Object *)0x0;
    local_50 = CONCAT44(uVar9,local_78);
    if (local_68 == (Object *)0x0) goto LAB_0010105e;
    pOVar5 = (Object *)__dynamic_cast(local_68,&Object::typeinfo,&StyleBox::typeinfo,0);
    if ((pOVar5 != (Object *)0x0) &&
       (local_60 = pOVar5, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_60 = (Object *)0x0;
    }
    CanvasItem::draw_style_box((Ref *)param_1,(Rect2 *)&local_60);
    if (((local_60 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar5 = local_60, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_60), cVar2 != '\0')) goto LAB_001010a0;
  }
  else {
    if (iVar1 == 2) {
      Ref<StyleBoxFlat>::operator=((Ref<StyleBoxFlat> *)&local_68,*(Ref **)(this + 0xa58));
      goto LAB_00101126;
    }
    if (iVar1 == 0) {
      Ref<StyleBoxFlat>::operator=((Ref<StyleBoxFlat> *)&local_68,*(Ref **)(this + 0xa48));
      goto LAB_00101126;
    }
LAB_0010105e:
    local_50 = CONCAT44(uVar9,local_78);
    local_58 = 0;
    local_60 = (Object *)0x0;
    CanvasItem::draw_style_box((Ref *)param_1,(Rect2 *)&local_60);
    if ((local_60 == (Object *)0x0) ||
       (cVar2 = RefCounted::unreference(), pOVar5 = local_60, cVar2 == '\0')) goto LAB_00100f48;
    pOVar6 = (Object *)0x0;
    cVar2 = predelete_handler(local_60);
    if (cVar2 == '\0') goto LAB_00100f48;
LAB_001010a0:
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
    if (pOVar6 == (Object *)0x0) goto LAB_00100f48;
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
LAB_00100f48:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorToaster::_repop_old() */

void __thiscall EditorToaster::_repop_old(EditorToaster *this)

{
  HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
  *this_00;
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  Control *pCVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  bool bVar8;
  Control *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xa78),0));
  bVar2 = false;
  iVar7 = iVar4 + -1;
  if (-1 < iVar7) {
    this_00 = (HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
               *)(this + 0xa88);
    do {
      pCVar5 = (Control *)Node::get_child((int)*(undefined8 *)(this + 0xa78),SUB41(iVar7,0));
      if (pCVar5 != (Control *)0x0) {
        pCVar5 = (Control *)__dynamic_cast(pCVar5,&Object::typeinfo,&Control::typeinfo,0);
      }
      local_48 = pCVar5;
      cVar3 = CanvasItem::is_visible();
      if (cVar3 == '\0') {
        CanvasItem::show();
        lVar6 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                ::operator[](this_00,&local_48);
        uVar1 = *(undefined4 *)(lVar6 + 4);
        lVar6 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                ::operator[](this_00,&local_48);
        *(undefined4 *)(lVar6 + 8) = uVar1;
        lVar6 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                ::operator[](this_00,&local_48);
        bVar2 = true;
        *(undefined1 *)(lVar6 + 0xc) = 1;
        if (*(int *)(this + 0xa80) <= iVar4 - iVar7) break;
      }
      else if (*(int *)(this + 0xa80) <= iVar4 - iVar7) break;
      bVar8 = iVar7 != 0;
      iVar7 = iVar7 + -1;
    } while (bVar8);
    if (bVar2) {
      _update_vbox_position(this);
      _update_disable_notifications_button(this);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        CanvasItem::queue_redraw();
        return;
      }
      goto LAB_001013aa;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001013aa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorToaster::_toast_theme_changed(Control*) */

void __thiscall EditorToaster::_toast_theme_changed(EditorToaster *this,Control *param_1)

{
  Ref *pRVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  Control *local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_1;
  cVar3 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
          ::_lookup_pos((HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                         *)(this + 0xa88),(Control **)param_1,(uint *)&local_48);
  if (cVar3 == '\0') {
    _err_print_error("_toast_theme_changed","editor/gui/editor_toaster.cpp",0x1f0,
                     "Condition \"!toasts.has(p_control)\" is true.",0,0);
  }
  else {
    lVar5 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
            ::operator[]((HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                          *)(this + 0xa88),&local_50);
    pRVar1 = *(Ref **)(lVar5 + 0x18);
    if (pRVar1 != (Ref *)0x0) {
      if ((_toast_theme_changed(Control*)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&_toast_theme_changed(Control*)::{lambda()#1}::operator()()::
                                       sname), iVar4 != 0)) {
        _scs_create((char *)&_toast_theme_changed(Control*)::{lambda()#1}::operator()()::sname,true)
        ;
        __cxa_atexit(StringName::~StringName,
                     &_toast_theme_changed(Control*)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_toast_theme_changed(Control*)::{lambda()#1}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_48);
      Button::set_button_icon(pRVar1);
      if (((local_48 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar2 = local_48, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_48), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    pRVar1 = *(Ref **)(lVar5 + 0x10);
    if (pRVar1 != (Ref *)0x0) {
      if ((_toast_theme_changed(Control*)::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&_toast_theme_changed(Control*)::{lambda()#2}::operator()()::
                                       sname), iVar4 != 0)) {
        _scs_create((char *)&_toast_theme_changed(Control*)::{lambda()#2}::operator()()::sname,true)
        ;
        __cxa_atexit(StringName::~StringName,
                     &_toast_theme_changed(Control*)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_toast_theme_changed(Control*)::{lambda()#2}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_48);
      Button::set_button_icon(pRVar1);
      if (((local_48 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_48), cVar3 != '\0')) {
        (**(code **)(*(long *)local_48 + 0x140))(local_48);
        Memory::free_static(local_48,false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorToaster::close(Control*) */

void __thiscall EditorToaster::close(EditorToaster *this,Control *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  Control *local_40 [2];
  
  local_40[0] = param_1;
  if ((*(long *)(this + 0xa90) != 0) && (*(int *)(this + 0xab4) != 0)) {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xab0) * 4));
    lVar10 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xab0) * 8);
    uVar9 = (long)param_1 * 0x3ffff - 1;
    uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
    uVar9 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
    uVar9 = uVar9 >> 0x16 ^ uVar9;
    uVar13 = uVar9 & 0xffffffff;
    if ((int)uVar9 == 0) {
      uVar13 = 1;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar13 * lVar10;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar15;
    lVar12 = SUB168(auVar1 * auVar5,8);
    uVar14 = *(uint *)(*(long *)(this + 0xa98) + lVar12 * 4);
    iVar11 = SUB164(auVar1 * auVar5,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if (((uint)uVar13 == uVar14) &&
           (param_1 == *(Control **)(*(long *)(*(long *)(this + 0xa90) + lVar12 * 8) + 0x10))) {
          lVar10 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                   ::operator[]((HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                                 *)(this + 0xa88),local_40);
          *(undefined4 *)(lVar10 + 8) = 0xbf800000;
          lVar10 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                   ::operator[]((HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                                 *)(this + 0xa88),local_40);
          *(undefined1 *)(lVar10 + 0xc) = 0;
          return;
        }
        uVar16 = uVar16 + 1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (ulong)(iVar11 + 1) * lVar10;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar15;
        lVar12 = SUB168(auVar2 * auVar6,8);
        uVar14 = *(uint *)(*(long *)(this + 0xa98) + lVar12 * 4);
        iVar11 = SUB164(auVar2 * auVar6,8);
      } while ((uVar14 != 0) &&
              (auVar3._8_8_ = 0, auVar3._0_8_ = (ulong)uVar14 * lVar10, auVar7._8_8_ = 0,
              auVar7._0_8_ = uVar15, auVar4._8_8_ = 0,
              auVar4._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0xab0) * 4) + iVar11) -
                                    SUB164(auVar3 * auVar7,8)) * lVar10, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar15, uVar16 <= SUB164(auVar4 * auVar8,8)));
    }
  }
  _err_print_error("close","editor/gui/editor_toaster.cpp",0x1fc,
                   "Condition \"!toasts.has(p_control)\" is true.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorToaster::instant_close(Control*) */

void __thiscall EditorToaster::instant_close(EditorToaster *this,Control *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  close(this,param_1);
  CanvasItem::set_modulate((Color *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorToaster::copy(Control*) */

void __thiscall EditorToaster::copy(EditorToaster *this,Control *param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long *plVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  Control *local_40 [2];
  
  plVar10 = DisplayServer::singleton;
  local_40[0] = param_1;
  if ((*(long *)(this + 0xa90) != 0) && (*(int *)(this + 0xab4) != 0)) {
    uVar17 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xab0) * 4));
    lVar12 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xab0) * 8);
    uVar11 = (long)param_1 * 0x3ffff - 1;
    uVar11 = (uVar11 ^ uVar11 >> 0x1f) * 0x15;
    uVar11 = (uVar11 ^ uVar11 >> 0xb) * 0x41;
    uVar11 = uVar11 >> 0x16 ^ uVar11;
    uVar15 = uVar11 & 0xffffffff;
    if ((int)uVar11 == 0) {
      uVar15 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar15 * lVar12;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar17;
    lVar14 = SUB168(auVar2 * auVar6,8);
    uVar16 = *(uint *)(*(long *)(this + 0xa98) + lVar14 * 4);
    iVar13 = SUB164(auVar2 * auVar6,8);
    if (uVar16 != 0) {
      uVar18 = 0;
      do {
        if (((uint)uVar15 == uVar16) &&
           (param_1 == *(Control **)(*(long *)(*(long *)(this + 0xa90) + lVar14 * 8) + 0x10))) {
          pcVar1 = *(code **)(*DisplayServer::singleton + 0x3b0);
          lVar12 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                   ::operator[]((HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                                 *)(this + 0xa88),local_40);
          (*pcVar1)(plVar10,lVar12 + 0x20);
          return;
        }
        uVar18 = uVar18 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar13 + 1) * lVar12;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar17;
        lVar14 = SUB168(auVar3 * auVar7,8);
        uVar16 = *(uint *)(*(long *)(this + 0xa98) + lVar14 * 4);
        iVar13 = SUB164(auVar3 * auVar7,8);
      } while ((uVar16 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar16 * lVar12, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar17, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0xab0) * 4) + iVar13) -
                                    SUB164(auVar4 * auVar8,8)) * lVar12, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, uVar18 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  _err_print_error(&_LC47,"editor/gui/editor_toaster.cpp",0x207,
                   "Condition \"!toasts.has(p_control)\" is true.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorToaster::_auto_hide_or_free_toasts() */

void __thiscall EditorToaster::_auto_hide_or_free_toasts(EditorToaster *this)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  Control **ppCVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  String *pSVar9;
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
  code *pcVar22;
  uint uVar23;
  char cVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  Control *pCVar29;
  long lVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  long *plVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  uint *puVar39;
  long in_FS_OFFSET;
  bool bVar40;
  undefined8 *local_b0;
  String *local_a8;
  undefined8 *local_90;
  undefined8 local_78;
  undefined8 local_70;
  Control *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar25 = Node::get_child_count(SUB81(*(undefined8 *)(this + 0xa78),0));
  iVar25 = iVar25 + -1;
  if (iVar25 < 0) {
    local_90 = (undefined8 *)0x0;
  }
  else {
    iVar38 = 0;
    iVar35 = 0;
    local_90 = (undefined8 *)0x0;
    uVar28 = 0;
    uVar27 = 0;
    do {
      pCVar29 = (Control *)Node::get_child((int)*(undefined8 *)(this + 0xa78),SUB41(iVar25,0));
      if (pCVar29 != (Control *)0x0) {
        pCVar29 = (Control *)__dynamic_cast(pCVar29,&Object::typeinfo,&Control::typeinfo,0);
      }
      local_68 = pCVar29;
      lVar30 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
               ::operator[]((HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                             *)(this + 0xa88),&local_68);
      if (0.0 < *(float *)(lVar30 + 4)) {
        iVar38 = iVar38 + 1;
        cVar24 = CanvasItem::is_visible();
        iVar26 = *(int *)(this + 0xa80);
        iVar35 = (iVar35 + 1) - (uint)(cVar24 == '\0');
        if (iVar26 < iVar35) {
          close(this,pCVar29);
          iVar26 = *(int *)(this + 0xa80);
        }
        if (iVar26 * 2 < iVar38) {
          if (uVar27 == uVar28) {
            uVar28 = 1;
            if (uVar27 * 2 != 0) {
              uVar28 = uVar27 * 2;
            }
            local_90 = (undefined8 *)Memory::realloc_static(local_90,(ulong)uVar28 << 3,false);
            if (local_90 == (undefined8 *)0x0) {
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar22 = (code *)invalidInstructionException();
              (*pcVar22)();
            }
          }
          local_90[uVar27] = pCVar29;
          uVar27 = uVar27 + 1;
        }
      }
      bVar40 = iVar25 != 0;
      iVar25 = iVar25 + -1;
    } while (bVar40);
    if (local_90 != local_90 + uVar27) {
      local_b0 = local_90;
      do {
        ppCVar5 = (Control **)*local_b0;
        Node::remove_child(*(Node **)(this + 0xa78));
        Node::queue_free();
        local_68 = (Control *)((ulong)local_68 & 0xffffffff00000000);
        cVar24 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                 ::_lookup_pos((HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                                *)(this + 0xa88),ppCVar5,(uint *)&local_68);
        if (cVar24 != '\0') {
          lVar30 = *(long *)(this + 0xa98);
          lVar6 = *(long *)(this + 0xa90);
          lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xab0) * 8);
          uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xab0) * 4);
          uVar33 = CONCAT44(0,uVar28);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)((uint)local_68 + 1) * lVar7;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar33;
          lVar32 = SUB168(auVar10 * auVar16,8);
          puVar39 = (uint *)(lVar30 + lVar32 * 4);
          uVar31 = SUB164(auVar10 * auVar16,8);
          uVar36 = *puVar39;
          uVar37 = (uint)local_68;
          if ((uVar36 != 0) &&
             (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar36 * lVar7, auVar17._8_8_ = 0,
             auVar17._0_8_ = uVar33, auVar12._8_8_ = 0,
             auVar12._0_8_ = (ulong)((uVar28 + uVar31) - SUB164(auVar11 * auVar17,8)) * lVar7,
             auVar18._8_8_ = 0, auVar18._0_8_ = uVar33, uVar23 = (uint)local_68,
             SUB164(auVar12 * auVar18,8) != 0)) {
            do {
              uVar37 = uVar31;
              puVar1 = (uint *)(lVar30 + (ulong)uVar23 * 4);
              *puVar39 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + lVar32 * 8);
              *puVar1 = uVar36;
              puVar3 = (undefined8 *)(lVar6 + (ulong)uVar23 * 8);
              uVar8 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar8;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = (ulong)(uVar37 + 1) * lVar7;
              auVar21._8_8_ = 0;
              auVar21._0_8_ = uVar33;
              lVar32 = SUB168(auVar15 * auVar21,8);
              puVar39 = (uint *)(lVar30 + lVar32 * 4);
              uVar31 = SUB164(auVar15 * auVar21,8);
              uVar36 = *puVar39;
              if (uVar36 == 0) break;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = (ulong)uVar36 * lVar7;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar33;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = (ulong)((uVar31 + uVar28) - SUB164(auVar13 * auVar19,8)) * lVar7;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = uVar33;
              uVar23 = uVar37;
            } while (SUB164(auVar14 * auVar20,8) != 0);
            local_68 = (Control *)CONCAT44(local_68._4_4_,uVar37);
          }
          uVar33 = (ulong)uVar37;
          plVar4 = (long *)(lVar6 + uVar33 * 8);
          *(undefined4 *)(lVar30 + uVar33 * 4) = 0;
          plVar34 = (long *)*plVar4;
          if (*(long **)(this + 0xaa0) == plVar34) {
            *(long *)(this + 0xaa0) = *plVar34;
            plVar34 = (long *)*plVar4;
          }
          if (*(long **)(this + 0xaa8) == plVar34) {
            *(long *)(this + 0xaa8) = plVar34[1];
            plVar34 = (long *)*plVar4;
          }
          if ((long *)plVar34[1] != (long *)0x0) {
            *(long *)plVar34[1] = *plVar34;
            plVar34 = (long *)*plVar4;
          }
          if (*plVar34 != 0) {
            *(long *)(*plVar34 + 8) = plVar34[1];
            plVar34 = (long *)*plVar4;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar34 + 8));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar34 + 7));
          Memory::free_static(plVar34,false);
          *(undefined8 *)(*(long *)(this + 0xa90) + uVar33 * 8) = 0;
          *(int *)(this + 0xab4) = *(int *)(this + 0xab4) + -1;
        }
        local_b0 = local_b0 + 1;
      } while (local_90 + uVar27 != local_b0);
    }
  }
  local_a8 = (String *)&local_68;
  local_70 = 0;
  local_60 = 0;
  pSVar9 = *(String **)(this + 0xa60);
  local_68 = (Control *)&_LC13;
  if (*(int *)(this + 0xab4) == 0) {
    String::parse_latin1((StrRange *)&local_70);
    local_68 = (Control *)0x105673;
    local_78 = 0;
    local_60 = 0x11;
    String::parse_latin1((StrRange *)&local_78);
    TTR(local_a8,(String *)&local_78);
    Control::set_tooltip_text(pSVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_58 = __LC64;
    uStack_50 = _UNK_0010e698;
    CanvasItem::set_modulate(*(Color **)(this + 0xa60));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa60),0));
    Node::set_process_internal(SUB81(this,0));
  }
  else {
    String::parse_latin1((StrRange *)&local_70);
    local_68 = (Control *)0x105685;
    local_78 = 0;
    local_60 = 0x13;
    String::parse_latin1((StrRange *)&local_78);
    TTR(local_a8,(String *)&local_78);
    Control::set_tooltip_text(pSVar9);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_58 = CONCAT44(_LC39,_LC39);
    uStack_50 = CONCAT44(_LC39,_LC39);
    CanvasItem::set_modulate(*(Color **)(this + 0xa60));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa60),0));
  }
  if (local_90 == (undefined8 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Memory::free_static(local_90,false);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorToaster::popup(Control*, EditorToaster::Severity, double, String const&) */

PanelContainer *
EditorToaster::popup(double param_1_00,EditorToaster *param_1,undefined8 param_3,int param_4)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  PanelContainer *this;
  Object *pOVar4;
  int *piVar5;
  BoxContainer *this_00;
  Button *this_01;
  Button *this_02;
  long in_FS_OFFSET;
  EditorToaster local_78 [16];
  Object *local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(this);
  postinitialize_handler((Object *)this);
  Control::set_tooltip_text((String *)this);
  if (param_4 == 1) {
    lVar1 = *(long *)(param_1 + 0xa38);
  }
  else if (param_4 == 2) {
    lVar1 = *(long *)(param_1 + 0xa40);
  }
  else {
    if (param_4 != 0) goto LAB_001020c4;
    lVar1 = *(long *)(param_1 + 0xa30);
  }
  local_68[0] = (Object *)0x0;
  if (lVar1 != 0) {
    local_68[0] = (Object *)0x0;
    pOVar4 = (Object *)__dynamic_cast(lVar1,&Object::typeinfo,&StyleBox::typeinfo,0);
    if ((pOVar4 != (Object *)0x0) &&
       (local_68[0] = pOVar4, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
      local_68[0] = (Object *)0x0;
    }
  }
  Control::add_theme_style_override((StringName *)this,(Ref *)(SceneStringNames::singleton + 600));
  if (((local_68[0] != (Object *)0x0) &&
      (cVar3 = RefCounted::unreference(), pOVar4 = local_68[0], cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_68[0]), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
LAB_001020c4:
  local_58 = _LC104;
  uStack_50 = _UNK_0010e688;
  CanvasItem::set_modulate((Color *)this);
  pcVar2 = *(code **)(*(long *)this + 0x108);
  create_custom_callable_function_pointer<EditorToaster,Control*>
            (local_78,(char *)param_1,(_func_void_Control_ptr *)"&EditorToaster::_draw_progress");
  Callable::bind<PanelContainer*>((PanelContainer *)local_68);
  (*pcVar2)(this,SceneStringNames::singleton + 8,(PanelContainer *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_78);
  pcVar2 = *(code **)(*(long *)this + 0x108);
  create_custom_callable_function_pointer<EditorToaster,Control*>
            (local_78,(char *)param_1,
             (_func_void_Control_ptr *)"&EditorToaster::_toast_theme_changed");
  Callable::bind<PanelContainer*>((PanelContainer *)local_68);
  (*pcVar2)(this,SceneStringNames::singleton + 0x210,(PanelContainer *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_78);
  local_68[0] = (Object *)this;
  piVar5 = (int *)HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                  ::operator[]((HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                                *)(param_1 + 0xa88),(Control **)local_68);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010d680;
  postinitialize_handler((Object *)this_00);
  Control::set_h_size_flags(this_00,3);
  Node::add_child(this,this_00,0,0);
  Control::set_h_size_flags(param_3,3);
  Node::add_child(this_00,param_3,0,0);
  if (0.0 < param_1_00) {
    this_01 = (Button *)operator_new(0xc10,"");
    local_68[0] = (Object *)0x0;
    Button::Button(this_01,(String *)local_68);
    postinitialize_handler((Object *)this_01);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    Button::set_flat(SUB81(this_01,0));
    pcVar2 = *(code **)(*(long *)this_01 + 0x108);
    create_custom_callable_function_pointer<EditorToaster,Control*>
              (local_78,(char *)param_1,(_func_void_Control_ptr *)"&EditorToaster::copy");
    Callable::bind<PanelContainer*>((PanelContainer *)local_68);
    (*pcVar2)(this_01,SceneStringNames::singleton + 0x238,(PanelContainer *)local_68,0);
    Callable::~Callable((Callable *)local_68);
    Callable::~Callable((Callable *)local_78);
    Node::add_child(this_00,this_01,0,0);
    this_02 = (Button *)operator_new(0xc10,"");
    local_68[0] = (Object *)0x0;
    Button::Button(this_02,(String *)local_68);
    postinitialize_handler((Object *)this_02);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    Button::set_flat(SUB81(this_02,0));
    pcVar2 = *(code **)(*(long *)this_02 + 0x108);
    create_custom_callable_function_pointer<EditorToaster,Control*>
              (local_78,(char *)param_1,(_func_void_Control_ptr *)"&EditorToaster::instant_close");
    Callable::bind<PanelContainer*>((PanelContainer *)local_68);
    (*pcVar2)(this_02,SceneStringNames::singleton + 0x238,(PanelContainer *)local_68,0);
    Callable::~Callable((Callable *)local_68);
    Callable::~Callable((Callable *)local_78);
    Node::add_child(this_00,this_02,0,0);
    *(Button **)(piVar5 + 4) = this_01;
    *(Button **)(piVar5 + 6) = this_02;
    *piVar5 = param_4;
    *(ulong *)(piVar5 + 1) = CONCAT44((float)param_1_00,(float)param_1_00);
  }
  else {
    piVar5[1] = -0x40800000;
    *piVar5 = param_4;
  }
  *(undefined1 *)(piVar5 + 3) = 1;
  Node::add_child(*(undefined8 *)(param_1 + 0xa78),this,0,0);
  _auto_hide_or_free_toasts(param_1);
  _update_vbox_position(param_1);
  _update_disable_notifications_button(param_1);
  CanvasItem::queue_redraw();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorToaster::_popup_str(String const&, EditorToaster::Severity, String const&) */

void EditorToaster::_popup_str
               (undefined8 param_1_00,float param_2,EditorToaster *param_1,String *param_4,
               int param_5,String *param_6)

{
  long *plVar1;
  Node *pNVar2;
  String *pSVar3;
  char cVar4;
  int iVar5;
  BoxContainer *this;
  Label *this_00;
  Label *this_01;
  long lVar6;
  HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
  *this_02;
  long *plVar7;
  Control *pCVar8;
  long in_FS_OFFSET;
  Control *local_a8;
  undefined8 local_a0;
  Control *local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 local_84;
  long local_80;
  long lStack_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  long lStack_50;
  ulong local_48;
  long local_40;
  
  plVar7 = *(long **)(param_1 + 0xaa0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  param_1[0xab8] = (EditorToaster)0x1;
  local_a8 = (Control *)0x0;
  if (plVar7 != (long *)0x0) {
    do {
      local_98 = (Control *)plVar7[2];
      local_90 = (int)plVar7[3];
      uStack_8c = (undefined4)*(undefined8 *)((long)plVar7 + 0x1c);
      uStack_88 = (undefined4)((ulong)*(undefined8 *)((long)plVar7 + 0x1c) >> 0x20);
      local_84 = *(undefined1 *)((long)plVar7 + 0x24);
      local_80 = plVar7[5];
      lStack_78 = plVar7[6];
      local_70 = 0;
      if (plVar7[7] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(plVar7 + 7));
      }
      local_68 = 0;
      if (plVar7[8] != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(plVar7 + 8));
      }
      local_60 = (undefined4)plVar7[9];
      local_58 = plVar7[10];
      lStack_50 = plVar7[0xb];
      cVar4 = String::operator==((String *)&local_70,param_4);
      if (((cVar4 != '\0') && (local_90 == param_5)) &&
         (cVar4 = String::operator==((String *)&local_68,param_6), pCVar8 = local_98, cVar4 != '\0')
         ) {
        local_a8 = local_98;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if (pCVar8 == (Control *)0x0) goto LAB_00102678;
        goto LAB_0010280e;
      }
      lVar6 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
    pCVar8 = local_a8;
    if (local_a8 != (Control *)0x0) {
LAB_0010280e:
      lVar6 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
              ::operator[]((HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                            *)(param_1 + 0xa88),&local_a8);
      iVar5 = 1;
      if (*(char *)(lVar6 + 0xc) != '\0') {
        iVar5 = *(int *)(lVar6 + 0x30) + 1;
      }
      *(int *)(lVar6 + 0x30) = iVar5;
      *(undefined1 *)(lVar6 + 0xc) = 1;
      *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(lVar6 + 4);
      CanvasItem::show();
      pNVar2 = *(Node **)(param_1 + 0xa78);
      Node::get_child_count(SUB81(pNVar2,0));
      Node::move_child(pNVar2,(int)pCVar8);
      _auto_hide_or_free_toasts(param_1);
      _update_vbox_position(param_1);
      _update_disable_notifications_button(param_1);
      CanvasItem::queue_redraw();
      goto LAB_00102892;
    }
  }
LAB_00102678:
  this = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this,false);
  this[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this = &PTR__initialize_classv_0010d680;
  postinitialize_handler((Object *)this);
  StringName::StringName((StringName *)&local_98,"separation",false);
  Control::add_theme_constant_override((StringName *)this,(int)(StringName *)&local_98);
  if ((StringName::configured != '\0') && (local_98 != (Control *)0x0)) {
    StringName::unref();
  }
  this_00 = (Label *)operator_new(0xad8,"");
  local_98 = (Control *)0x0;
  Label::Label(this_00,(String *)&local_98);
  postinitialize_handler((Object *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Node::add_child(this,this_00,0,0);
  this_01 = (Label *)operator_new(0xad8,"");
  local_98 = (Control *)0x0;
  Label::Label(this_01,(String *)&local_98);
  postinitialize_handler((Object *)this_01);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Node::add_child(this,this_01,0,0);
  local_a8 = (Control *)popup(*(undefined8 *)(param_1 + 0xac0),param_1,this,param_5,param_6);
  lVar6 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
          ::operator[]((HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                        *)(param_1 + 0xa88),&local_a8);
  if (*(long *)(lVar6 + 0x20) != *(long *)param_4) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar6 + 0x20),(CowData *)param_4);
  }
  if (*(long *)(lVar6 + 0x28) != *(long *)param_6) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar6 + 0x28),(CowData *)param_6);
  }
  *(undefined4 *)(lVar6 + 0x30) = 1;
  *(Label **)(lVar6 + 0x40) = this_01;
  *(Label **)(lVar6 + 0x38) = this_00;
LAB_00102892:
  this_02 = (HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
             *)(param_1 + 0xa88);
  lVar6 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
          ::operator[](this_02,&local_a8);
  pSVar3 = *(String **)(lVar6 + 0x38);
  if (pSVar3 == (String *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_popup_str","editor/gui/editor_toaster.cpp",0x1d4,
                       "Parameter \"message_label\" is null.",0,0);
      return;
    }
  }
  else {
    Label::set_text(pSVar3);
    Label::set_text_overrun_behavior(pSVar3,0);
    local_48 = 0;
    Control::set_custom_minimum_size((Vector2 *)pSVar3);
    local_48 = (**(code **)(*(long *)pSVar3 + 0x300))(pSVar3);
    iVar5 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_48);
    CanvasItem::get_viewport_rect();
    param_2 = param_2 * __LC64;
    if ((int)param_2 < iVar5) {
      Label::set_text_overrun_behavior(pSVar3,3);
      local_48 = (ulong)(uint)(float)(int)param_2;
      Control::set_custom_minimum_size((Vector2 *)pSVar3);
    }
    lVar6 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
            ::operator[](this_02,&local_a8);
    pSVar3 = *(String **)(lVar6 + 0x40);
    lVar6 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
            ::operator[](this_02,&local_a8);
    if (*(int *)(lVar6 + 0x30) == 1) {
      CanvasItem::hide();
    }
    else {
      HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
      ::operator[](this_02,&local_a8);
      local_a0 = 0;
      local_90 = 4;
      uStack_8c = 0;
      local_98 = (Control *)&_LC65;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<int>((String *)&local_98,(int)(StrRange *)&local_a0);
      Label::set_text(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CanvasItem::show();
    }
    Control::reset_size();
    param_1[0xab8] = (EditorToaster)0x0;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::set_process_internal(SUB81(param_1,0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorToaster::EditorToaster() */

void __thiscall EditorToaster::EditorToaster(EditorToaster *this)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  String *pSVar4;
  StringName *pSVar5;
  char cVar6;
  BoxContainer *this_00;
  Button *pBVar7;
  PanelContainer *this_01;
  Object *pOVar8;
  long *plVar9;
  bool bVar10;
  long *plVar11;
  long in_FS_OFFSET;
  float fVar12;
  undefined8 local_90;
  undefined8 local_88 [2];
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,false);
  *(undefined ***)this = &PTR__initialize_classv_0010dd70;
  uVar3 = _LC67;
  this[0xa0c] = (EditorToaster)0x1;
  *(undefined8 *)(this + 0xac0) = uVar3;
  *(undefined8 *)(this + 0xa10) = 0;
  *(undefined4 *)(this + 0xa28) = 3;
  *(undefined4 *)(this + 0xa80) = 5;
  *(undefined8 *)(this + 0xab0) = 2;
  this[0xab8] = (EditorToaster)0x0;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
  CanvasItem::set_notify_transform(SUB81(this,0));
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010d9f8;
  postinitialize_handler((Object *)this_00);
  *(BoxContainer **)(this + 0xa78) = this_00;
  CanvasItem::set_as_top_level(SUB81(this_00,0));
  plVar9 = *(long **)(this + 0xa78);
  pcVar2 = *(code **)(*plVar9 + 0x108);
  create_custom_callable_function_pointer<EditorToaster>
            ((EditorToaster *)&local_78,(char *)this,
             (_func_void *)"&EditorToaster::_update_vbox_position");
  (*pcVar2)(plVar9,SceneStringNames::singleton,(EditorToaster *)&local_78,0);
  Callable::~Callable((Callable *)&local_78);
  Node::add_child(this,*(undefined8 *)(this + 0xa78),0,0);
  Ref<StyleBoxFlat>::instantiate<>((Ref<StyleBoxFlat> *)(this + 0xa30));
  uVar3 = *(undefined8 *)(this + 0xa30);
  EditorScale::get_scale();
  StyleBoxFlat::set_corner_radius_all((int)uVar3);
  Ref<StyleBoxFlat>::instantiate<>((Ref<StyleBoxFlat> *)(this + 0xa38));
  uVar3 = *(undefined8 *)(this + 0xa38);
  iVar1 = *(int *)(this + 0xa28);
  fVar12 = (float)EditorScale::get_scale();
  StyleBoxFlat::set_border_width(uVar3,0,(int)(fVar12 * (float)iVar1));
  uVar3 = *(undefined8 *)(this + 0xa38);
  EditorScale::get_scale();
  StyleBoxFlat::set_corner_radius_all((int)uVar3);
  Ref<StyleBoxFlat>::instantiate<>((Ref<StyleBoxFlat> *)(this + 0xa40));
  uVar3 = *(undefined8 *)(this + 0xa40);
  iVar1 = *(int *)(this + 0xa28);
  fVar12 = (float)EditorScale::get_scale();
  StyleBoxFlat::set_border_width(uVar3,0,(int)(fVar12 * (float)iVar1));
  uVar3 = *(undefined8 *)(this + 0xa40);
  EditorScale::get_scale();
  StyleBoxFlat::set_corner_radius_all((int)uVar3);
  local_58 = 0;
  if (*(long *)(this + 0xa30) != 0) {
    local_58 = *(long *)(this + 0xa30);
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      local_58 = 0;
    }
  }
  local_50 = 0;
  if (*(long *)(this + 0xa38) != 0) {
    local_50 = *(long *)(this + 0xa38);
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      local_50 = 0;
    }
  }
  local_48 = 0;
  if (*(long *)(this + 0xa40) != 0) {
    local_48 = *(long *)(this + 0xa40);
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      local_48 = 0;
    }
  }
  plVar9 = local_40;
  plVar11 = &local_58;
  do {
    plVar11 = plVar11 + 1;
    StyleBox::set_content_margin_individual
              ((float)(int)((double)*(int *)(this + 0xa28) * __LC69),_LC70,
               (float)(int)((double)*(int *)(this + 0xa28) * __LC69),_LC70);
  } while (plVar9 != plVar11);
  Ref<StyleBoxFlat>::instantiate<>((Ref<StyleBoxFlat> *)(this + 0xa48));
  uVar3 = *(undefined8 *)(this + 0xa48);
  EditorScale::get_scale();
  StyleBoxFlat::set_corner_radius_all((int)uVar3);
  Ref<StyleBoxFlat>::instantiate<>((Ref<StyleBoxFlat> *)(this + 0xa50));
  uVar3 = *(undefined8 *)(this + 0xa50);
  iVar1 = *(int *)(this + 0xa28);
  fVar12 = (float)EditorScale::get_scale();
  StyleBoxFlat::set_border_width(uVar3,0,(int)(fVar12 * (float)iVar1));
  uVar3 = *(undefined8 *)(this + 0xa50);
  EditorScale::get_scale();
  StyleBoxFlat::set_corner_radius_all((int)uVar3);
  Ref<StyleBoxFlat>::instantiate<>((Ref<StyleBoxFlat> *)(this + 0xa58));
  uVar3 = *(undefined8 *)(this + 0xa58);
  iVar1 = *(int *)(this + 0xa28);
  fVar12 = (float)EditorScale::get_scale();
  StyleBoxFlat::set_border_width(uVar3,0,(int)(fVar12 * (float)iVar1));
  uVar3 = *(undefined8 *)(this + 0xa58);
  EditorScale::get_scale();
  StyleBoxFlat::set_corner_radius_all((int)uVar3);
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_78 = (Object *)0x0;
  Button::Button(pBVar7,(String *)&local_78);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa60) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  local_78 = (Object *)&_LC13;
  local_88[0] = 0;
  pSVar4 = *(String **)(this + 0xa60);
  local_70 = 0;
  String::parse_latin1((StrRange *)local_88);
  local_78 = (Object *)0x105673;
  local_90 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  TTR((String *)&local_78,(String *)&local_90);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  local_68 = __LC64;
  uStack_60 = _UNK_0010e698;
  CanvasItem::set_modulate(*(Color **)(this + 0xa60));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa60),0));
  pSVar5 = *(StringName **)(this + 0xa60);
  StringName::StringName((StringName *)&local_78,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar5);
  if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
    StringName::unref();
  }
  plVar11 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<EditorToaster,bool>
            ((EditorToaster *)&local_78,(char *)this,
             (_func_void_bool *)"&EditorToaster::_set_notifications_enabled");
  bVar10 = SUB81((StrRange *)local_88,0);
  Callable::bind<bool>(bVar10);
  (*pcVar2)(plVar11,SceneStringNames::singleton + 0x238,(StrRange *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)&local_78);
  plVar11 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<EditorToaster>
            ((EditorToaster *)&local_78,(char *)this,(_func_void *)"&EditorToaster::_repop_old");
  (*pcVar2)(plVar11,SceneStringNames::singleton + 0x238,(EditorToaster *)&local_78,0);
  Callable::~Callable((Callable *)&local_78);
  plVar11 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<EditorToaster>
            ((EditorToaster *)&local_78,(char *)this,(_func_void *)"&EditorToaster::_draw_button");
  (*pcVar2)(plVar11,SceneStringNames::singleton + 8,(EditorToaster *)&local_78,0);
  Callable::~Callable((Callable *)&local_78);
  Node::add_child(this,*(undefined8 *)(this + 0xa60),0,0);
  this_01 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(this_01);
  postinitialize_handler((Object *)this_01);
  *(PanelContainer **)(this + 0xa68) = this_01;
  CanvasItem::set_as_top_level(SUB81(this_01,0));
  local_78 = (Object *)0x0;
  pSVar5 = *(StringName **)(this + 0xa68);
  if (*(long *)(this + 0xa30) != 0) {
    pOVar8 = (Object *)
             __dynamic_cast(*(long *)(this + 0xa30),&Object::typeinfo,&StyleBox::typeinfo,0);
    if (pOVar8 != (Object *)0x0) {
      local_78 = pOVar8;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_78 = (Object *)0x0;
      }
    }
  }
  Control::add_theme_style_override(pSVar5,(Ref *)(SceneStringNames::singleton + 600));
  if (local_78 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar8 = local_78;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_78);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
  }
  Node::add_child(this,*(undefined8 *)(this + 0xa68),0,0);
  pBVar7 = (Button *)operator_new(0xc10,"");
  local_78 = (Object *)0x0;
  Button::Button(pBVar7,(String *)&local_78);
  postinitialize_handler((Object *)pBVar7);
  *(Button **)(this + 0xa70) = pBVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  local_78 = (Object *)&_LC13;
  local_88[0] = 0;
  pSVar4 = *(String **)(this + 0xa70);
  local_70 = 0;
  String::parse_latin1((StrRange *)local_88);
  local_78 = (Object *)0x10572e;
  local_90 = 0;
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  TTR((String *)&local_78,(String *)&local_90);
  Control::set_tooltip_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa70),0));
  plVar11 = *(long **)(this + 0xa70);
  pcVar2 = *(code **)(*plVar11 + 0x108);
  create_custom_callable_function_pointer<EditorToaster,bool>
            ((EditorToaster *)&local_78,(char *)this,
             (_func_void_bool *)"&EditorToaster::_set_notifications_enabled");
  Callable::bind<bool>(bVar10);
  (*pcVar2)(plVar11,SceneStringNames::singleton + 0x238,(StrRange *)local_88,0);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable((Callable *)&local_78);
  Node::add_child(*(undefined8 *)(this + 0xa68),*(undefined8 *)(this + 0xa70),0,0);
  singleton = this;
  *(code **)(this + 0xa10) = _error_handler;
  add_error_handler((ErrorHandlerList *)(this + 0xa10));
  do {
    pOVar8 = (Object *)plVar9[-1];
    plVar9 = plVar9 + -1;
    if (pOVar8 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(pOVar8);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
      }
    }
  } while (plVar9 != &local_58);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorToaster::~EditorToaster() */

void __thiscall EditorToaster::~EditorToaster(EditorToaster *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_0010dd70;
  singleton = 0;
  remove_error_handler((ErrorHandlerList *)(this + 0xa10));
  pvVar5 = *(void **)(this + 0xa90);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0xab4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xab0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xab4) = 0;
        *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa98) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xa98) + lVar4) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x40));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0xa90);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xab4) = 0;
        *(undefined1 (*) [16])(this + 0xaa0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00103586;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0xa98),false);
  }
LAB_00103586:
  if (*(long *)(this + 0xa58) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xa58);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xa50);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xa48);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xa40);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0xa38) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xa38);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (*(long *)(this + 0xa30) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      pOVar2 = *(Object **)(this + 0xa30);
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  bVar6 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar6) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103664;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00103664:
  Control::~Control((Control *)this);
  return;
}



/* EditorToaster::~EditorToaster() */

void __thiscall EditorToaster::~EditorToaster(EditorToaster *this)

{
  ~EditorToaster(this);
  operator_delete(this,0xac8);
  return;
}



/* EditorToaster::_error_handler_impl(String const&, int, String const&, String const&, bool, int)
    */

void EditorToaster::_error_handler_impl
               (String *param_1,int param_2,String *param_3,String *param_4,bool param_5,int param_6
               )

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char *local_88;
  String local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((singleton == (EditorToaster *)0x0) || (((byte)singleton[0x2fa] & 0x40) == 0))
  goto LAB_0010386e;
  local_68 = "interface/editor/show_internal_errors_in_toast_notifications";
  local_70 = 0;
  local_60 = 0x3c;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((iVar1 != 1) && (!param_5)) goto LAB_0010386e;
  if (((*(long *)param_4 != 0) && (1 < *(uint *)(*(long *)param_4 + -8))) ||
     (local_88 = (char *)0x0, param_4 = param_3, *(long *)param_3 != 0)) {
    local_88 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)param_4);
  }
  itos((long)local_78);
  local_68 = ":";
  local_70 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::operator+((String *)&local_68,param_1);
  String::operator+(local_80,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref(local_78);
  if (param_5) {
    if (param_6 != 1) goto LAB_00103a2e;
LAB_00103a8e:
    uVar2 = 1;
  }
  else {
    if (param_6 == 1) {
      operator+((char *)&local_68,(String *)"INTERNAL WARNING: ");
      if (local_88 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        local_88 = local_68;
        local_68 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      goto LAB_00103a8e;
    }
    operator+((char *)&local_68,(String *)"INTERNAL ERROR: ");
    if (local_88 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00103a2e:
    uVar2 = 2;
  }
  if (singleton[0xab8] == (EditorToaster)0x0) {
    popup_str(singleton,(CowData<char32_t> *)&local_88,uVar2,local_80);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
LAB_0010386e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorToaster::_notification(int) */

void __thiscall EditorToaster::_notification(EditorToaster *this,int param_1)

{
  Ref *pRVar1;
  Color *pCVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  float fVar6;
  int iVar7;
  long lVar8;
  float fVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  char *pcVar13;
  long in_FS_OFFSET;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  Object *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x2d) {
    cVar5 = CanvasItem::is_visible();
    pRVar1 = *(Ref **)(this + 0xa60);
    if (cVar5 == '\0') {
      if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
        puVar11 = &_notification(int)::{lambda()#2}::operator()()::sname;
        pcVar13 = (char *)&_notification(int)::{lambda()#2}::operator()()::sname;
        iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
        if (iVar7 != 0) {
          uVar12 = 0xdc;
LAB_00104380:
          _scs_create(pcVar13,(bool)uVar12);
          __cxa_atexit(StringName::~StringName,pcVar13,&__dso_handle);
          __cxa_guard_release(puVar11);
        }
      }
    }
    else if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      puVar11 = &_notification(int)::{lambda()#1}::operator()()::sname;
      pcVar13 = (char *)&_notification(int)::{lambda()#1}::operator()()::sname;
      iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      uVar12 = 0xcf;
      if (iVar7 != 0) goto LAB_00104380;
    }
    Control::get_editor_theme_icon((StringName *)&local_60);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
    pRVar1 = *(Ref **)(this + 0xa70);
    if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
       iVar7 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_60);
    Button::set_button_icon(pRVar1);
    if (((local_60 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_60), cVar5 != '\0')) {
      (**(code **)(*(long *)local_60 + 0x140))(local_60);
      Memory::free_static(local_60,false);
    }
    pCVar2 = *(Color **)(this + 0xa30);
    if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
       iVar7 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
    local_58._0_16_ =
         Control::get_theme_color
                   ((StringName *)this,
                    (StringName *)&_notification(int)::{lambda()#4}::operator()()::sname);
    StyleBoxFlat::set_bg_color(pCVar2);
    pCVar2 = *(Color **)(this + 0xa38);
    if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
      }
    }
    auVar18 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_notification(int)::{lambda()#5}::operator()()::sname);
    local_58._0_16_ = auVar18;
    StyleBoxFlat::set_bg_color(pCVar2);
    pCVar2 = *(Color **)(this + 0xa38);
    if (_notification(int)::{lambda()#6}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
      }
    }
    auVar18 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_notification(int)::{lambda()#6}::operator()()::sname);
    local_58._0_16_ = auVar18;
    StyleBoxFlat::set_border_color(pCVar2);
    pCVar2 = *(Color **)(this + 0xa40);
    if (_notification(int)::{lambda()#7}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
      }
    }
    auVar18 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_notification(int)::{lambda()#7}::operator()()::sname);
    local_58._0_16_ = auVar18;
    StyleBoxFlat::set_bg_color(pCVar2);
    pCVar2 = *(Color **)(this + 0xa40);
    if (_notification(int)::{lambda()#8}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
      }
    }
    auVar18 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_notification(int)::{lambda()#8}::operator()()::sname);
    local_58._0_16_ = auVar18;
    StyleBoxFlat::set_border_color(pCVar2);
    pCVar2 = *(Color **)(this + 0xa48);
    if (_notification(int)::{lambda()#9}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#9}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#9}::operator()()::sname);
      }
    }
    auVar18 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_notification(int)::{lambda()#9}::operator()()::sname);
    local_58._0_8_ =
         CONCAT44((_LC104._4_4_ - auVar18._4_4_) * _LC106._4_4_ + auVar18._4_4_,
                  ((float)_LC104 - auVar18._0_4_) * (float)_LC106 + auVar18._0_4_);
    local_58._8_8_ =
         auVar18._8_8_ & 0xffffffff00000000 |
         (ulong)(uint)((_LC39 - auVar18._8_4_) * (float)_LC106 + auVar18._8_4_);
    StyleBoxFlat::set_bg_color(pCVar2);
    pCVar2 = *(Color **)(this + 0xa50);
    if ((_notification(int)::{lambda()#10}::operator()()::sname == '\0') &&
       (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#10}::operator()()::sname),
       iVar7 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#10}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#10}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#10}::operator()()::sname);
    }
    auVar18 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_notification(int)::{lambda()#10}::operator()()::sname);
    local_58._0_8_ =
         CONCAT44((_LC104._4_4_ - auVar18._4_4_) * _LC106._4_4_ + auVar18._4_4_,
                  ((float)_LC104 - auVar18._0_4_) * (float)_LC106 + auVar18._0_4_);
    local_58._8_8_ =
         auVar18._8_8_ & 0xffffffff00000000 |
         (ulong)(uint)((_LC39 - auVar18._8_4_) * (float)_LC106 + auVar18._8_4_);
    StyleBoxFlat::set_bg_color(pCVar2);
    pCVar2 = *(Color **)(this + 0xa50);
    if ((_notification(int)::{lambda()#11}::operator()()::sname == '\0') &&
       (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#11}::operator()()::sname),
       iVar7 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#11}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#11}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#11}::operator()()::sname);
    }
    local_58._0_16_ =
         Control::get_theme_color
                   ((StringName *)this,
                    (StringName *)&_notification(int)::{lambda()#11}::operator()()::sname);
    StyleBoxFlat::set_border_color(pCVar2);
    pCVar2 = *(Color **)(this + 0xa58);
    if (_notification(int)::{lambda()#12}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#12}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#12}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#12}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#12}::operator()()::sname);
      }
    }
    auVar18 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_notification(int)::{lambda()#12}::operator()()::sname);
    local_58._0_8_ =
         CONCAT44((_LC104._4_4_ - auVar18._4_4_) * _LC106._4_4_ + auVar18._4_4_,
                  ((float)_LC104 - auVar18._0_4_) * (float)_LC106 + auVar18._0_4_);
    local_58._8_8_ =
         auVar18._8_8_ & 0xffffffff00000000 |
         (ulong)(uint)((_LC39 - auVar18._8_4_) * (float)_LC106 + auVar18._8_4_);
    StyleBoxFlat::set_bg_color(pCVar2);
    pCVar2 = *(Color **)(this + 0xa58);
    if ((_notification(int)::{lambda()#13}::operator()()::sname == '\0') &&
       (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#13}::operator()()::sname),
       iVar7 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#13}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#13}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#13}::operator()()::sname);
    }
    local_58._0_16_ =
         Control::get_theme_color
                   ((StringName *)this,
                    (StringName *)&_notification(int)::{lambda()#13}::operator()()::sname);
    StyleBoxFlat::set_border_color(pCVar2);
  }
  else {
    if (param_1 == 2000) {
      _update_vbox_position(this);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_disable_notifications_button(this);
        return;
      }
      goto LAB_0010483f;
    }
    if (param_1 == 0x19) {
      dVar14 = (double)Node::get_process_delta_time();
      plVar10 = *(long **)(this + 0xaa0);
      if (plVar10 != (long *)0x0) {
        while( true ) {
          uVar15 = Control::get_size();
          fVar6 = (float)((ulong)uVar15 >> 0x20);
          uVar16 = CanvasItem::get_local_mouse_position();
          if (((float)uVar15 < 0.0) || (fVar6 < 0.0)) {
            _err_print_error("has_point","./core/math/rect2.h",0xb9,
                             "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                             ,0,0);
          }
          auVar18._8_8_ = local_58._8_8_;
          auVar18._0_8_ = local_58._0_8_;
          if ((((0.0 <= (float)uVar16) && (fVar9 = (float)((ulong)uVar16 >> 0x20), 0.0 <= fVar9)) &&
              ((float)uVar16 < (float)uVar15 + 0.0)) && (fVar9 < fVar6 + 0.0)) break;
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto code_r0x00103d7c;
        }
        plVar10 = *(long **)(this + 0xaa0);
        local_58._0_16_ = auVar18;
        if (plVar10 == (long *)0x0) goto LAB_00103d10;
        do {
          if ((*(char *)((long)plVar10 + 0x24) != '\0') &&
             (fVar6 = *(float *)((long)plVar10 + 0x1c), 0.0 < fVar6)) {
            lVar8 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                    ::operator[]((HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                                  *)(this + 0xa88),(Control **)(plVar10 + 2));
            *(float *)(lVar8 + 8) = fVar6;
            CanvasItem::queue_redraw();
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
        goto LAB_00103c55;
      }
    }
  }
  goto LAB_00103d10;
code_r0x00103d7c:
  plVar10 = *(long **)(this + 0xaa0);
  if (plVar10 != (long *)0x0) {
    do {
      if ((*(char *)((long)plVar10 + 0x24) != '\0') && (0.0 < *(float *)((long)plVar10 + 0x1c))) {
        lVar8 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                ::operator[]((HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                              *)(this + 0xa88),(Control **)(plVar10 + 2));
        *(float *)(lVar8 + 8) = (float)((double)*(float *)(lVar8 + 8) - dVar14);
        lVar8 = HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                ::operator[]((HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
                              *)(this + 0xa88),(Control **)(plVar10 + 2));
        if (*(float *)(lVar8 + 8) <= 0.0 && *(float *)(lVar8 + 8) != 0.0) {
          close(this,(Control *)plVar10[2]);
        }
        CanvasItem::queue_redraw();
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
LAB_00103c55:
    plVar10 = *(long **)(this + 0xaa0);
    if (plVar10 != (long *)0x0) {
      bVar4 = false;
      auVar17 = local_58._0_16_;
      do {
        while( true ) {
          bVar3 = bVar4;
          local_58._0_16_ = auVar17;
          auVar17 = CanvasItem::get_modulate();
          local_58._0_8_ = auVar17._0_8_;
          local_58._12_4_ = auVar17._12_4_;
          local_58._8_4_ = auVar17._8_4_;
          if (*(char *)((long)plVar10 + 0x24) != '\0') break;
          if (0.0 < (float)local_58._12_4_) {
            local_58._12_4_ = (float)((double)(float)local_58._12_4_ - (dVar14 + dVar14));
            CanvasItem::set_modulate((Color *)plVar10[2]);
            goto LAB_00103e2e;
          }
          if ((float)local_58._12_4_ <= 0.0) goto LAB_00103e41;
LAB_00103c90:
          plVar10 = (long *)*plVar10;
          bVar4 = bVar3;
          local_58._0_16_ = auVar17;
          if (plVar10 == (long *)0x0) goto LAB_00103d00;
        }
        if (_LC39 <= (float)local_58._12_4_) {
LAB_00103cca:
          if (0.0 < (float)local_58._12_4_) {
            local_58._0_16_ = auVar17;
            cVar5 = CanvasItem::is_visible();
            auVar17 = local_58._0_16_;
            if (cVar5 == '\0') {
              CanvasItem::show();
              goto LAB_00103ce9;
            }
          }
          goto LAB_00103c90;
        }
        local_58._12_4_ = (float)(_LC102 * dVar14 + (double)(float)local_58._12_4_);
        CanvasItem::set_modulate((Color *)plVar10[2]);
LAB_00103e2e:
        auVar17._8_8_ = local_58._8_8_;
        auVar17._0_8_ = local_58._0_8_;
        if (0.0 < (float)local_58._12_4_) goto LAB_00103cca;
LAB_00103e41:
        local_58._0_16_ = auVar17;
        cVar5 = CanvasItem::is_visible();
        if (cVar5 == '\0') {
          auVar17 = local_58._0_16_;
          goto LAB_00103cca;
        }
        CanvasItem::hide();
LAB_00103ce9:
        plVar10 = (long *)*plVar10;
        bVar3 = true;
        bVar4 = true;
        auVar17 = local_58._0_16_;
      } while (plVar10 != (long *)0x0);
LAB_00103d00:
      if (bVar3) {
        _update_vbox_position(this);
        _update_disable_notifications_button(this);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          CanvasItem::queue_redraw();
          return;
        }
        goto LAB_0010483f;
      }
    }
  }
LAB_00103d10:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010483f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorToaster::_bind_methods() */

void EditorToaster::_bind_methods(void)

{
  Variant *pVVar1;
  CowData<StringName> *this;
  MethodBind *pMVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  undefined8 local_130;
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  char *local_c8;
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
  local_100 = 0;
  local_b0 = 0;
  local_b8 = "tooltip";
  local_a8 = (Variant *)&local_c8;
  local_c8 = "message";
  pcStack_c0 = "severity";
  pVStack_a0 = (Variant *)&pcStack_c0;
  local_98 = &local_b8;
  D_METHODP((char *)&local_f8,(char ***)"push_toast",(uint)&local_a8);
  Variant::Variant(local_88,0);
  pVVar3 = (Variant *)local_40;
  Variant::Variant(local_70,(String *)&local_100);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  pMVar2 = create_method_bind<EditorToaster,String_const&,EditorToaster::Severity,String_const&>
                     (_popup_str);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_f8,&local_a8,2);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_88);
  this = (CowData<StringName> *)(local_f0 + 8);
  CowData<StringName>::_unref(this);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  StringName::StringName((StringName *)&local_128,"SEVERITY_INFO",false);
  local_f8 = "SEVERITY_INFO";
  local_130 = 0;
  local_f0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = "EditorToaster::Severity";
  local_110 = 0;
  local_f0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_110);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_108,(String *)&local_110)
  ;
  StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
  local_f0 = (undefined1  [16])0x0;
  local_118 = 0;
  local_120 = 0;
  local_f8 = (char *)0x2;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0x10006;
  StringName::operator=((StringName *)this,(StringName *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  local_100 = local_f0._8_8_;
  local_f0._8_8_ = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  local_f8 = "EditorToaster";
  local_108 = 0;
  local_f0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_f8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_f8,(StringName *)&local_100,(StringName *)&local_128,0,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"SEVERITY_WARNING",false);
  local_f8 = "SEVERITY_WARNING";
  local_130 = 0;
  local_f0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = "EditorToaster::Severity";
  local_110 = 0;
  local_f0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_110);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_108,(String *)&local_110)
  ;
  StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
  local_f0 = (undefined1  [16])0x0;
  local_118 = 0;
  local_120 = 0;
  local_f8 = (char *)0x2;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0x10006;
  StringName::operator=((StringName *)this,(StringName *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  local_100 = local_f0._8_8_;
  local_f0._8_8_ = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  local_f8 = "EditorToaster";
  local_108 = 0;
  local_f0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_f8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_f8,(StringName *)&local_100,(StringName *)&local_128,1,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_128,"SEVERITY_ERROR",false);
  local_f8 = "SEVERITY_ERROR";
  local_130 = 0;
  local_f0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_130);
  local_f8 = "EditorToaster::Severity";
  local_110 = 0;
  local_f0._0_8_ = 0x17;
  String::parse_latin1((StrRange *)&local_110);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_108,(String *)&local_110)
  ;
  StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
  local_f0 = (undefined1  [16])0x0;
  local_118 = 0;
  local_120 = 0;
  local_f8 = (char *)0x2;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0x10006;
  StringName::operator=((StringName *)this,(StringName *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  local_100 = local_f0._8_8_;
  local_f0._8_8_ = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  local_f8 = "EditorToaster";
  local_108 = 0;
  local_f0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_f8,(String *)&local_108,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_f8,(StringName *)&local_100,(StringName *)&local_128,2,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* CallableCustomMethodPointer<EditorToaster, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorToaster,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorToaster, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorToaster,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorToaster, void, String const&, EditorToaster::Severity, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void,String_const&,EditorToaster::Severity,String_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorToaster,void,String_const&,EditorToaster::Severity,String_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorToaster, void, Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void,Control*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorToaster,void,Control*> *this)

{
  return;
}



/* CallableCustomStaticMethodPointer<void, String const&, int, String const&, String const&, bool,
   int>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&,int,String_const&,String_const&,bool,int>::
~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,String_const&,int,String_const&,String_const&,bool,int>
           *this)

{
  return;
}



/* MethodBindT<String const&, EditorToaster::Severity, String const&>::get_argument_meta(int) const
    */

undefined8
MethodBindT<String_const&,EditorToaster::Severity,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorToaster, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorToaster,void,bool>::get_argument_count
          (CallableCustomMethodPointer<EditorToaster,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorToaster, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorToaster,void>::get_argument_count
          (CallableCustomMethodPointer<EditorToaster,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorToaster, void, String const&, EditorToaster::Severity, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorToaster,void,String_const&,EditorToaster::Severity,String_const&>
::get_argument_count
          (CallableCustomMethodPointer<EditorToaster,void,String_const&,EditorToaster::Severity,String_const&>
           *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<EditorToaster, void, Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorToaster,void,Control*>::get_argument_count
          (CallableCustomMethodPointer<EditorToaster,void,Control*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomStaticMethodPointer<void, String const&, int, String const&, String const&, bool,
   int>::is_valid() const */

undefined8
CallableCustomStaticMethodPointer<void,String_const&,int,String_const&,String_const&,bool,int>::
is_valid(void)

{
  return 1;
}



/* CallableCustomStaticMethodPointer<void, String const&, int, String const&, String const&, bool,
   int>::get_object() const */

undefined8
CallableCustomStaticMethodPointer<void,String_const&,int,String_const&,String_const&,bool,int>::
get_object(void)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<void, String const&, int, String const&, String const&, bool,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomStaticMethodPointer<void,String_const&,int,String_const&,String_const&,bool,int>::
get_argument_count(CallableCustomStaticMethodPointer<void,String_const&,int,String_const&,String_const&,bool,int>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 6;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomStaticMethodPointer<void, String const&, int, String const&, String const&, bool,
   int>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&,int,String_const&,String_const&,bool,int>::
~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,String_const&,int,String_const&,String_const&,bool,int>
           *this)

{
  operator_delete(this,0x30);
  return;
}



/* CallableCustomMethodPointer<EditorToaster, void, Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void,Control*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorToaster,void,Control*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorToaster, void, String const&, EditorToaster::Severity, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void,String_const&,EditorToaster::Severity,String_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorToaster,void,String_const&,EditorToaster::Severity,String_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorToaster, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorToaster,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorToaster, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorToaster,void,bool> *this)

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



/* EditorToaster::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorToaster::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00112008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00112008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorToaster::_property_can_revertv(StringName const&) const */

undefined8 EditorToaster::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00112008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<String const&, EditorToaster::Severity, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,EditorToaster::Severity,String_const&>::~MethodBindT
          (MethodBindT<String_const&,EditorToaster::Severity,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e3b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, EditorToaster::Severity, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,EditorToaster::Severity,String_const&>::~MethodBindT
          (MethodBindT<String_const&,EditorToaster::Severity,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e3b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, EditorToaster::Severity, String const&>::_gen_argument_type(int) const
    */

char __thiscall
MethodBindT<String_const&,EditorToaster::Severity,String_const&>::_gen_argument_type
          (MethodBindT<String_const&,EditorToaster::Severity,String_const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 3) {
    cVar1 = (param_1 != 1) * '\x02' + '\x02';
  }
  return cVar1;
}



/* CallableCustomMethodPointer<EditorToaster, void, Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorToaster,void,Control*>::get_object
          (CallableCustomMethodPointer<EditorToaster,void,Control*> *this)

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
      goto LAB_001058fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001058fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001058fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorToaster, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorToaster,void,bool>::get_object
          (CallableCustomMethodPointer<EditorToaster,void,bool> *this)

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
      goto LAB_001059fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001059fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001059fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorToaster, void, String const&, EditorToaster::Severity, String
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorToaster,void,String_const&,EditorToaster::Severity,String_const&>
::get_object(CallableCustomMethodPointer<EditorToaster,void,String_const&,EditorToaster::Severity,String_const&>
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
      goto LAB_00105afd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00105afd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00105afd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorToaster, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorToaster,void>::get_object
          (CallableCustomMethodPointer<EditorToaster,void> *this)

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
      goto LAB_00105bfd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00105bfd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00105bfd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorToaster::_validate_propertyv(PropertyInfo&) const */

void EditorToaster::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00112010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00112010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00112010 == Control::_validate_property) {
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
    if ((code *)PTR__set_00112018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00112018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorToaster::_setv(StringName const&, Variant const&) */

undefined8 EditorToaster::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00112018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105fc8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00112020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00106038) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00112020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001060a8) */
/* EditorToaster::_getv(StringName const&, Variant&) const */

undefined8 EditorToaster::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00112020 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x10e4,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10e4,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10e4,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10e4,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10e4,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x10e4,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10e4,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10e4,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10e4,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10e4,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorToaster::is_class_ptr(void*) const */

ulong EditorToaster::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10e4,in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10e4,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10e4,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10e4,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10e4,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10e4,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
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
      if (StringName::configured == '\0') goto LAB_00106280;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00106280:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001062e0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001062e0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = RefCounted::reference;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106340;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00106340:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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
      if (StringName::configured == '\0') goto LAB_001063b0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001063b0:
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



/* EditorToaster::_get_class_namev() const */

undefined8 * EditorToaster::_get_class_namev(void)

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
LAB_00106483:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106483;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorToaster");
      goto LAB_001064ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorToaster");
LAB_001064ee:
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
LAB_00106573:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106573;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_001065de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_001065de:
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
LAB_00106663:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106663;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_001066ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_001066ce:
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



/* WARNING: Removing unreachable block (ram,0x00106850) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00112028 != Container::_notification) {
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
  if ((code *)PTR__notification_00112028 == Container::_notification) {
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



/* Callable create_custom_callable_function_pointer<EditorToaster, Control*>(EditorToaster*, char
   const*, void (EditorToaster::*)(Control*)) */

EditorToaster *
create_custom_callable_function_pointer<EditorToaster,Control*>
          (EditorToaster *param_1,char *param_2,_func_void_Control_ptr *param_3)

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
  *(undefined ***)this = &PTR_hash_0010e178;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Control_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<PanelContainer*>(PanelContainer*) const */

PanelContainer * Callable::bind<PanelContainer*>(PanelContainer *param_1)

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



/* Callable create_custom_callable_function_pointer<EditorToaster>(EditorToaster*, char const*, void
   (EditorToaster::*)()) */

EditorToaster *
create_custom_callable_function_pointer<EditorToaster>
          (EditorToaster *param_1,char *param_2,_func_void *param_3)

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
  *(undefined ***)this = &PTR_hash_0010e298;
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



/* void Ref<StyleBoxFlat>::instantiate<>() */

void __thiscall Ref<StyleBoxFlat>::instantiate<>(Ref<StyleBoxFlat> *this)

{
  char cVar1;
  StyleBoxFlat *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (StyleBoxFlat *)operator_new(0x338,"");
  StyleBoxFlat::StyleBoxFlat(this_00);
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
    this_00 = (StyleBoxFlat *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (StyleBoxFlat *)pOVar3) goto LAB_00106bc5;
    *(StyleBoxFlat **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00106bc5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (StyleBoxFlat *)0x0) {
    return;
  }
LAB_00106bc5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<EditorToaster, bool>(EditorToaster*, char
   const*, void (EditorToaster::*)(bool)) */

EditorToaster *
create_custom_callable_function_pointer<EditorToaster,bool>
          (EditorToaster *param_1,char *param_2,_func_void_bool *param_3)

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
  *(undefined ***)this = &PTR_hash_0010e328;
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



/* WARNING: Removing unreachable block (ram,0x00106fc8) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_b8[0];
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  code *pcVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  CowData<char32_t> *pCVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  CowData<char32_t> *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x107354);
  if ((local_50 != (CowData<char32_t> *)0x0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC14;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (CowData<char32_t> *)0x0) {
      lVar5 = 0;
      lVar3 = -2;
    }
    else {
      lVar5 = *(long *)(local_50 + -8);
      lVar3 = lVar5 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0010742a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_60 = 0;
  local_48 = &_LC14;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010742a:
  pCVar2 = local_50;
  if (local_50 != (CowData<char32_t> *)0x0) {
    LOCK();
    pCVar4 = local_50 + -0x10;
    *(long *)pCVar4 = *(long *)pCVar4 + -1;
    UNLOCK();
    if (*(long *)pCVar4 == 0) {
      if (local_50 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar5 = *(long *)(local_50 + -8);
      local_50 = (CowData<char32_t> *)0x0;
      if (lVar5 != 0) {
        lVar3 = 0;
        pCVar4 = pCVar2;
        do {
          lVar3 = lVar3 + 1;
          CowData<char32_t>::_unref(pCVar4);
          pCVar4 = pCVar4 + 8;
        } while (lVar5 != lVar3);
      }
      Memory::free_static(pCVar2 + -0x10,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
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



/* EditorToaster::get_class() const */

void EditorToaster::get_class(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Control*, EditorToaster::Toast, HashMapHasherDefault, HashMapComparatorDefault<Control*>,
   DefaultTypedAllocator<HashMapElement<Control*, EditorToaster::Toast> > >::operator[](Control*
   const&) */

undefined8 * __thiscall
HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
::operator[](HashMap<Control*,EditorToaster::Toast,HashMapHasherDefault,HashMapComparatorDefault<Control*>,DefaultTypedAllocator<HashMapElement<Control*,EditorToaster::Toast>>>
             *this,Control **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
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
  char cVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  void *__s_00;
  undefined8 *puVar29;
  void *pvVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
  Control *pCVar36;
  undefined8 uVar37;
  ulong uVar38;
  uint uVar39;
  uint uVar40;
  undefined8 *puVar41;
  long in_FS_OFFSET;
  CowData<char32_t> *local_138;
  CowData<char32_t> *local_130;
  uint local_100;
  uint local_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  CowData local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_a8 [16];
  Control *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  pCVar36 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = 0;
  cVar24 = _lookup_pos(this,(Control **)pCVar36,&local_100);
  if (cVar24 != '\0') {
    puVar29 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_100 * 8);
    goto LAB_00107e5f;
  }
  local_b8 = 0;
  uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_f8 = ZEXT816(0xbf80000000000000);
  local_e8 = (undefined1  [16])0x0;
  local_d8[0] = (CowData)0x0;
  local_d8[1] = (CowData)0x0;
  local_d8[2] = (CowData)0x0;
  local_d8[3] = (CowData)0x0;
  local_d8[4] = (CowData)0x0;
  local_d8[5] = (CowData)0x0;
  local_d8[6] = (CowData)0x0;
  local_d8[7] = (CowData)0x0;
  local_d8[8] = (CowData)0x0;
  local_d8[9] = (CowData)0x0;
  local_d8[10] = (CowData)0x0;
  local_d8[0xb] = (CowData)0x0;
  local_d8[0xc] = (CowData)0x0;
  local_d8[0xd] = (CowData)0x0;
  local_d8[0xe] = (CowData)0x0;
  local_d8[0xf] = (CowData)0x0;
  local_c8 = (undefined1  [16])0x0;
  if (*(long *)(this + 8) == 0) {
    uVar35 = (ulong)uVar34;
    uVar27 = uVar35 * 4;
    uVar38 = uVar35 * 8;
    uVar28 = Memory::alloc_static(uVar27,false);
    *(undefined8 *)(this + 0x10) = uVar28;
    pvVar30 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = pvVar30;
    if (uVar34 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar30 + uVar38)) && (pvVar30 < (void *)((long)pvVar4 + uVar27))
         ) {
        uVar27 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar27 * 4) = 0;
          *(undefined8 *)((long)pvVar30 + uVar27 * 8) = 0;
          uVar27 = uVar27 + 1;
        } while (uVar35 != uVar27);
      }
      else {
        memset(pvVar4,0,uVar27);
        memset(pvVar30,0,uVar38);
      }
    }
    pCVar36 = *param_1;
  }
  local_fc = 0;
  cVar24 = _lookup_pos(this,(Control **)pCVar36,&local_fc);
  uVar28 = _LC6;
  if (cVar24 == '\0') {
    if ((float)uVar34 * __LC31 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar34 = *(uint *)(this + 0x28);
      if (uVar34 == 0x1c) {
        puVar29 = (undefined8 *)0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_00107e47;
      }
      uVar27 = (ulong)(uVar34 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar34 * 4);
      if (uVar34 + 1 < 2) {
        uVar27 = 2;
      }
      uVar34 = *(uint *)(hash_table_size_primes + uVar27 * 4);
      uVar35 = (ulong)uVar34;
      *(int *)(this + 0x28) = (int)uVar27;
      pvVar30 = *(void **)(this + 8);
      uVar27 = uVar35 * 4;
      uVar38 = uVar35 * 8;
      pvVar4 = *(void **)(this + 0x10);
      uVar28 = Memory::alloc_static(uVar27,false);
      *(undefined8 *)(this + 0x10) = uVar28;
      __s_00 = (void *)Memory::alloc_static(uVar38,false);
      *(void **)(this + 8) = __s_00;
      if (uVar34 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar27))) {
          uVar27 = 0;
          do {
            *(undefined4 *)((long)__s + uVar27 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar27 * 8) = 0;
            uVar27 = uVar27 + 1;
          } while (uVar27 != uVar35);
        }
        else {
          memset(__s,0,uVar27);
          memset(__s_00,0,uVar38);
        }
      }
      if (uVar3 == 0) {
        pCVar36 = *param_1;
      }
      else {
        uVar27 = 0;
        do {
          uVar34 = *(uint *)((long)pvVar4 + uVar27 * 4);
          if (uVar34 != 0) {
            lVar5 = *(long *)(this + 0x10);
            uVar39 = 0;
            uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar38 = CONCAT44(0,uVar26);
            lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar34 * lVar6;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar38;
            lVar32 = SUB168(auVar8 * auVar16,8);
            puVar1 = (uint *)(lVar5 + lVar32 * 4);
            iVar31 = SUB164(auVar8 * auVar16,8);
            uVar40 = *puVar1;
            uVar28 = *(undefined8 *)((long)pvVar30 + uVar27 * 8);
            while (uVar40 != 0) {
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)uVar40 * lVar6;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar38;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)((iVar31 + uVar26) - SUB164(auVar9 * auVar17,8)) * lVar6;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar38;
              uVar25 = SUB164(auVar10 * auVar18,8);
              uVar37 = uVar28;
              if (uVar25 < uVar39) {
                *puVar1 = uVar34;
                puVar29 = (undefined8 *)((long)__s_00 + lVar32 * 8);
                uVar37 = *puVar29;
                *puVar29 = uVar28;
                uVar34 = uVar40;
                uVar39 = uVar25;
              }
              uVar39 = uVar39 + 1;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = (ulong)(iVar31 + 1) * lVar6;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = uVar38;
              lVar32 = SUB168(auVar11 * auVar19,8);
              puVar1 = (uint *)(lVar5 + lVar32 * 4);
              iVar31 = SUB164(auVar11 * auVar19,8);
              uVar28 = uVar37;
              uVar40 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar32 * 8) = uVar28;
            *puVar1 = uVar34;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 != uVar3);
        Memory::free_static(pvVar30,false);
        Memory::free_static(pvVar4,false);
        pCVar36 = *param_1;
      }
    }
    local_90 = 0;
    uStack_8c = 0xbf800000;
    local_a8 = (undefined1  [16])0x0;
    local_80 = (undefined1  [16])0x0;
    local_88 = 0;
    uStack_84 = 0;
    local_70 = 0;
    local_98 = pCVar36;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,local_d8);
    local_68 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,local_d8 + 8);
    local_58 = (undefined1  [16])0x0;
    local_60 = 0;
    puVar29 = (undefined8 *)operator_new(0x60,"");
    *puVar29 = local_a8._0_8_;
    puVar29[1] = local_a8._8_8_;
    puVar29[7] = 0;
    puVar29[2] = local_98;
    puVar29[5] = local_80._0_8_;
    puVar29[6] = local_80._8_8_;
    *(undefined4 *)(puVar29 + 3) = local_90;
    *(ulong *)((long)puVar29 + 0x1c) = CONCAT44(local_88,uStack_8c);
    *(undefined1 *)((long)puVar29 + 0x24) = (undefined1)uStack_84;
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar29 + 7),(CowData *)&local_70);
    puVar29[8] = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar29 + 8),(CowData *)&local_68);
    *(undefined4 *)(puVar29 + 9) = 0;
    *(undefined1 (*) [16])(puVar29 + 10) = (undefined1  [16])0x0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    puVar7 = *(undefined8 **)(this + 0x20);
    if (puVar7 == (undefined8 *)0x0) {
      *(undefined8 **)(this + 0x18) = puVar29;
    }
    else {
      *puVar7 = puVar29;
      puVar29[1] = puVar7;
    }
    pCVar36 = *param_1;
    *(undefined8 **)(this + 0x20) = puVar29;
    lVar5 = *(long *)(this + 0x10);
    uVar27 = (long)pCVar36 * 0x3ffff - 1;
    uVar27 = (uVar27 ^ uVar27 >> 0x1f) * 0x15;
    uVar27 = (uVar27 ^ uVar27 >> 0xb) * 0x41;
    uVar27 = uVar27 >> 0x16 ^ uVar27;
    uVar38 = uVar27 & 0xffffffff;
    if ((int)uVar27 == 0) {
      uVar38 = 1;
    }
    uVar40 = 0;
    lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar26 = (uint)uVar38;
    uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar27 = CONCAT44(0,uVar34);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar38 * lVar6;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar27;
    lVar33 = SUB168(auVar12 * auVar20,8);
    lVar32 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar5 + lVar33 * 4);
    iVar31 = SUB164(auVar12 * auVar20,8);
    uVar3 = *puVar1;
    puVar7 = puVar29;
    while (uVar3 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar3 * lVar6;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar27;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)((iVar31 + uVar34) - SUB164(auVar13 * auVar21,8)) * lVar6;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar27;
      uVar26 = SUB164(auVar14 * auVar22,8);
      puVar41 = puVar7;
      if (uVar26 < uVar40) {
        *puVar1 = (uint)uVar38;
        uVar38 = (ulong)uVar3;
        puVar2 = (undefined8 *)(lVar32 + lVar33 * 8);
        puVar41 = (undefined8 *)*puVar2;
        *puVar2 = puVar7;
        uVar40 = uVar26;
      }
      uVar26 = (uint)uVar38;
      uVar40 = uVar40 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)(iVar31 + 1) * lVar6;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar27;
      lVar33 = SUB168(auVar15 * auVar23,8);
      puVar1 = (uint *)(lVar5 + lVar33 * 4);
      iVar31 = SUB164(auVar15 * auVar23,8);
      puVar7 = puVar41;
      uVar3 = *puVar1;
    }
    *(undefined8 **)(lVar32 + lVar33 * 8) = puVar7;
    *puVar1 = uVar26;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar27 = (ulong)local_fc;
    lVar5 = *(long *)(*(long *)(this + 8) + uVar27 * 8);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(undefined8 *)(lVar5 + 0x1c) = uVar28;
    *(undefined1 *)(lVar5 + 0x24) = 0;
    *(undefined1 (*) [16])(lVar5 + 0x28) = (undefined1  [16])0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar5 + 0x38),local_d8);
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar5 + 0x40),local_d8 + 8);
    lVar6 = *(long *)(this + 8);
    *(undefined4 *)(lVar5 + 0x48) = 0;
    *(undefined1 (*) [16])(lVar5 + 0x50) = (undefined1  [16])0x0;
    puVar29 = *(undefined8 **)(lVar6 + uVar27 * 8);
  }
LAB_00107e47:
  local_130 = (CowData<char32_t> *)(local_d8 + 8);
  local_138 = (CowData<char32_t> *)local_d8;
  CowData<char32_t>::_unref(local_130);
  CowData<char32_t>::_unref(local_138);
LAB_00107e5f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar29 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorToaster, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void>::call
          (CallableCustomMethodPointer<EditorToaster,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010824f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010824f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00108300;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010824f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC80,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00108300:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorToaster, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void,bool>::call
          (CallableCustomMethodPointer<EditorToaster,void,bool> *this,Variant **param_1,int param_2,
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
      goto LAB_001084c9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_001084c9;
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
        uVar3 = _LC81;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0010857a;
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
LAB_001084c9:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC80,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010857a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorToaster, void, Control*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void,Control*>::call
          (CallableCustomMethodPointer<EditorToaster,void,Control*> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_001087b5;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_001087b5;
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
LAB_001086c0:
          uVar3 = _LC82;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_001086c0;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_00108866;
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
LAB_001087b5:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC80,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00108866:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomStaticMethodPointer<void, String const&, int, String const&, String const&, bool,
   int>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&,int,String_const&,String_const&,bool,int>::call
          (CallableCustomStaticMethodPointer<void,String_const&,int,String_const&,String_const&,bool,int>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  code *pcVar1;
  Variant *pVVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long in_FS_OFFSET;
  Variant local_58 [8];
  Variant local_50 [8];
  Variant local_48 [8];
  long local_40;
  
  pcVar1 = *(code **)(this + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_2 < 7) {
    if (param_2 == 6) {
      pVVar2 = param_1[5];
      *(undefined4 *)param_4 = 0;
      cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar2,2);
      uVar3 = _LC83;
      if (cVar4 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar3;
      }
      iVar6 = Variant::operator_cast_to_int(param_1[5]);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[4],1);
      uVar3 = _LC84;
      if (cVar4 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar3;
      }
      bVar5 = Variant::operator_cast_to_bool(param_1[4]);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[3],4);
      uVar3 = _LC85;
      if (cVar4 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar3;
      }
      Variant::operator_cast_to_String(local_58);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
      uVar3 = _LC86;
      if (cVar4 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar3;
      }
      Variant::operator_cast_to_String(local_50);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
      uVar3 = _LC87;
      if (cVar4 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar3;
      }
      iVar7 = Variant::operator_cast_to_int(param_1[1]);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
      uVar3 = _LC88;
      if (cVar4 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar3;
      }
      Variant::operator_cast_to_String(local_48);
      (*pcVar1)(local_48,iVar7,local_50,local_58,bVar5,iVar6);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    }
    else {
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 6;
    }
  }
  else {
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 6;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorToaster, void, String const&, EditorToaster::Severity, String
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void,String_const&,EditorToaster::Severity,String_const&>
::call(CallableCustomMethodPointer<EditorToaster,void,String_const&,EditorToaster::Severity,String_const&>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (Variant)0x0;
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
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar3 = _LC86;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String((Variant *)&local_50);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar3 = _LC87;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            uVar5 = Variant::operator_cast_to_long(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC88;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),local_48,uVar5 & 0xffffffff,(Variant *)&local_50);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
        goto LAB_00108b54;
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
  String::operator+((String *)local_48,(String *)local_58);
  _err_print_error(&_LC80,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00108b54:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
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
    if (cVar5 != '\0') goto LAB_00108e7b;
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
      if (cVar5 != '\0') goto LAB_00108e7b;
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
        if (cVar5 != '\0') goto LAB_00108e7b;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_00109058;
    }
  }
LAB_00108e7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00109058:
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
    if (cVar5 != '\0') goto LAB_0010917b;
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
      if (cVar5 != '\0') goto LAB_0010917b;
    }
    cVar5 = String::operator==(param_1,"Container");
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
        if (cVar5 != '\0') goto LAB_0010917b;
      }
      cVar5 = String::operator==(param_1,"Control");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
          return uVar6;
        }
        goto LAB_0010931e;
      }
    }
  }
LAB_0010917b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010931e:
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
    if (cVar4 != '\0') goto LAB_0010942b;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010942b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
    if (cVar4 != '\0') goto LAB_0010957b;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010957b:
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
              if ((code *)PTR__bind_methods_00112040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00112030 !=
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
      if ((code *)PTR__bind_methods_00112038 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00112040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00112030 !=
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
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"Container");
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
      if ((code *)PTR__bind_methods_00112038 != Container::_bind_methods) {
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
  local_78 = &_LC94;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC94;
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
      goto LAB_0010a31c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a31c:
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
      goto LAB_0010a581;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a581:
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
  if ((code *)PTR__get_property_list_00112048 != Object::_get_property_list) {
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
      goto LAB_0010a851;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a851:
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
  if ((code *)PTR__get_property_list_00112050 != CanvasItem::_get_property_list) {
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
      goto LAB_0010ab21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ab21:
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
      goto LAB_0010add1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010add1:
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
      goto LAB_0010b081;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b081:
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



/* EditorToaster::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorToaster::_get_property_listv(EditorToaster *this,List *param_1,bool param_2)

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
  local_78 = "EditorToaster";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorToaster";
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
      goto LAB_0010b331;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b331:
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
  StringName::StringName((StringName *)&local_78,"EditorToaster",false);
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
      goto LAB_0010b5e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b5e1:
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



/* EditorToaster::is_class(String const&) const */

undefined8 __thiscall EditorToaster::is_class(EditorToaster *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010b81b;
  }
  cVar5 = String::operator==(param_1,"EditorToaster");
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
      if (cVar5 != '\0') goto LAB_0010b81b;
    }
    cVar5 = String::operator==(param_1,"HBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_0010b91e;
    }
  }
LAB_0010b81b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b91e:
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



/* EditorToaster::_notificationv(int, bool) */

void __thiscall EditorToaster::_notificationv(EditorToaster *this,int param_1,bool param_2)

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



/* MethodBind* create_method_bind<EditorToaster, String const&, EditorToaster::Severity, String
   const&>(void (EditorToaster::*)(String const&, EditorToaster::Severity, String const&)) */

MethodBind *
create_method_bind<EditorToaster,String_const&,EditorToaster::Severity,String_const&>
          (_func_void_String_ptr_Severity_String_ptr *param_1)

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
  *(_func_void_String_ptr_Severity_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e3b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "EditorToaster";
  local_30 = 0xd;
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



/* EditorToaster::_initialize_classv() */

void EditorToaster::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_00112040 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_00112030 !=
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
        if ((code *)PTR__bind_methods_00112038 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"HBoxContainer");
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
      HBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "HBoxContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorToaster";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010c368) */
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



/* MethodBindT<String const&, EditorToaster::Severity, String const&>::validated_call(Object*,
   Variant const**, Variant*) const */

void MethodBindT<String_const&,EditorToaster::Severity,String_const&>::validated_call
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
      goto LAB_0010c7b1;
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
                    /* WARNING: Could not recover jumptable at 0x0010c63d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined4 *)(*(long *)(param_3 + 8) + 8),*(long *)(param_3 + 0x10) + 8);
    return;
  }
LAB_0010c7b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, EditorToaster::Severity, String const&>::ptrcall(Object*, void
   const**, void*) const */

void MethodBindT<String_const&,EditorToaster::Severity,String_const&>::ptrcall
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
      goto LAB_0010c9a1;
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
                    /* WARNING: Could not recover jumptable at 0x0010c824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(undefined4 **)((long)param_3 + 8),*(undefined8 *)((long)param_3 + 0x10));
    return;
  }
LAB_0010c9a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, EditorToaster::Severity, String const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&,EditorToaster::Severity,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar9 = (long *)plVar12[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar9 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC80,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cbd2;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar6 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar11 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar11 = (int)lVar14;
    }
    if ((int)(3 - in_R8D) <= iVar11) {
      lVar7 = 0;
      do {
        if ((int)lVar7 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar7 * 8);
        }
        else {
          uVar10 = iVar11 + -3 + (int)lVar7;
          if (lVar14 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar10 * 0x18;
        }
        local_58[lVar7] = pVVar13;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[2],4);
      uVar4 = _LC86;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_70);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[1],2);
      uVar4 = _LC87;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      uVar8 = Variant::operator_cast_to_long(local_58[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_58[0],4);
      uVar4 = _LC88;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_68);
      (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),(Variant *)&local_68,
                         uVar8 & 0xffffffff,(Variant *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      goto LAB_0010cbd2;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_0010cbd2:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
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
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0010ce17;
  local_78 = 0;
  local_68 = &_LC13;
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
  if (local_80 == 0) {
LAB_0010cf15:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010cf15;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_0010ce17:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&, EditorToaster::Severity, String const&>::_gen_argument_type_info(int)
   const */

PropertyInfo *
MethodBindT<String_const&,EditorToaster::Severity,String_const&>::_gen_argument_type_info
          (int param_1)

{
  int iVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar3;
  long in_FS_OFFSET;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  details local_90 [8];
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pPVar3 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar3 = 0;
  *(undefined4 *)(pPVar3 + 0x18) = 0;
  *(undefined8 *)(pPVar3 + 0x20) = 0;
  *(undefined4 *)(pPVar3 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar3 + 8) = (undefined1  [16])0x0;
  local_ac = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_ac,pPVar3);
  iVar1 = local_ac;
  if (in_EDX == local_ac) {
    local_98 = 0;
    local_78 = "EditorToaster::Severity";
    local_70 = 0x17;
    String::parse_latin1((StrRange *)&local_98);
    godot::details::enum_qualified_name_to_class_info_name(local_90,(String *)&local_98);
    StringName::StringName((StringName *)&local_88,(String *)local_90,false);
    local_a0 = 0;
    local_a8 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,2);
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_a8);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_a0);
    local_50 = 0x10006;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    *(undefined4 *)pPVar3 = local_78._0_4_;
    if (*(long *)(pPVar3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar3 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(pPVar3 + 8) = lVar2;
    }
    if (*(long *)(pPVar3 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(pPVar3 + 0x10) = lVar2;
    }
    *(int *)(pPVar3 + 0x18) = local_60;
    if (*(long *)(pPVar3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar3 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(pPVar3 + 0x20) = lVar2;
    }
    *(undefined4 *)(pPVar3 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  local_ac = iVar1 + 1;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_ac,pPVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* MethodBindT<String const&, EditorToaster::Severity, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,EditorToaster::Severity,String_const&>::~MethodBindT
          (MethodBindT<String_const&,EditorToaster::Severity,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomStaticMethodPointer<void, String const&, int, String const&, String const&, bool,
   int>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&,int,String_const&,String_const&,bool,int>::
~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,String_const&,int,String_const&,String_const&,bool,int>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorToaster, void, Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void,Control*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorToaster,void,Control*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorToaster, void, String const&, EditorToaster::Severity, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void,String_const&,EditorToaster::Severity,String_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorToaster,void,String_const&,EditorToaster::Severity,String_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorToaster, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorToaster,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorToaster, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorToaster,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorToaster,void,bool> *this)

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


