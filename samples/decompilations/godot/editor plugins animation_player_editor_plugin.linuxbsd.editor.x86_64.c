
/* AnimationPlayerEditor::_animation_update_key_frame() */

void __thiscall AnimationPlayerEditor::_animation_update_key_frame(AnimationPlayerEditor *this)

{
  if (*(long **)(this + 0xa20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010001e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xa20) + 0x228))(0);
    return;
  }
  return;
}



/* AnimationPlayerEditor::_animation_key_editor_anim_len_changed(float) */

void AnimationPlayerEditor::_animation_key_editor_anim_len_changed(float param_1)

{
  Range::set_max((double)param_1);
  return;
}



/* AnimationPlayerEditor::_scale_changed(String const&) */

void AnimationPlayerEditor::_scale_changed(String *param_1)

{
  double dVar1;
  
  dVar1 = (double)String::to_float();
  AnimationPlayer::set_speed_scale((float)dVar1);
  return;
}



/* AnimationPlayerEditor::_pin_pressed() */

void AnimationPlayerEditor::_pin_pressed(void)

{
  SceneTreeEditor::_update_tree(SUB81(*(undefined8 *)(SceneTreeDock::singleton + 0xac0),0));
  return;
}



/* AnimationPlayerEditorPlugin::_property_keyed(String const&, Variant const&, bool) */

void AnimationPlayerEditorPlugin::_property_keyed(String *param_1,Variant *param_2,bool param_3)

{
  String *pSVar1;
  char cVar2;
  
  pSVar1 = *(String **)(*(long *)(param_1 + 0x660) + 0xb30);
  if (pSVar1 != (String *)0x0) {
    cVar2 = AnimationTrackEditor::has_keying();
    if (cVar2 != '\0') {
      AnimationTrackEditor::_clear_selection(SUB81(pSVar1,0));
      AnimationTrackEditor::insert_value_key(pSVar1,SUB81(param_2,0));
      return;
    }
  }
  return;
}



/* AnimationPlayerEditorPlugin::_update_keying() */

void AnimationPlayerEditorPlugin::_update_keying(void)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(InspectorDock::singleton + 0xa18);
  AnimationTrackEditor::has_keying();
  EditorInspector::set_keying(SUB81(uVar1,0));
  return;
}



/* AnimationPlayerEditorPlugin::_transform_key_request(Object*, String const&, Transform3D const&)
    */

void __thiscall
AnimationPlayerEditorPlugin::_transform_key_request
          (AnimationPlayerEditorPlugin *this,Object *param_1,String *param_2,Transform3D *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [12];
  char cVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_68 [12];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = AnimationTrackEditor::has_keying();
  auVar2._8_4_ = local_68._8_4_;
  auVar2._0_8_ = local_68._0_8_;
  if ((param_1 != (Object *)0x0) && (local_68 = auVar2, cVar3 != '\0')) {
    lVar4 = __dynamic_cast(param_1,&Object::typeinfo,&Node3D::typeinfo,0);
    if (lVar4 != 0) {
      uVar1 = *(undefined8 *)(*(long *)(this + 0x660) + 0xb30);
      ::Variant::Variant((Variant *)local_58,(Vector3 *)(param_3 + 0x24));
      AnimationTrackEditor::insert_transform_key(uVar1,lVar4,param_2,1,(Variant *)local_58);
      if (::Variant::needs_deinit[local_58[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      uVar1 = *(undefined8 *)(*(long *)(this + 0x660) + 0xb30);
      Basis::get_rotation_quaternion();
      ::Variant::Variant((Variant *)local_58,(Quaternion *)local_68);
      AnimationTrackEditor::insert_transform_key(uVar1,lVar4,param_2,2,(Variant *)local_58);
      if (::Variant::needs_deinit[local_58[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      uVar1 = *(undefined8 *)(*(long *)(this + 0x660) + 0xb30);
      local_68 = Basis::get_scale();
      ::Variant::Variant((Variant *)local_58,(Vector3 *)local_68);
      AnimationTrackEditor::insert_transform_key(uVar1,lVar4,param_2,3,(Variant *)local_58);
      if (::Variant::needs_deinit[local_58[0]] != '\0') {
        ::Variant::_clear_internal();
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationPlayerEditor::forward_force_draw_over_viewport(Control*) [clone .part.0] */

void __thiscall
AnimationPlayerEditor::forward_force_draw_over_viewport
          (AnimationPlayerEditor *this,Control *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined4 local_78;
  float fStack_74;
  undefined4 local_70;
  float fStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  float fStack_4c;
  long local_40;
  
  uVar1 = *(undefined8 *)(param_1 + 0x428);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar12 = Control::get_global_rect();
  fStack_74 = auVar12._4_4_;
  fStack_6c = auVar12._12_4_;
  fStack_74 = fStack_74 + fStack_6c;
  _local_70 = CONCAT44((uint)fStack_6c ^ __LC3,auVar12._8_4_);
  _local_78 = CONCAT44(*(float *)(this + 0xb58) - fStack_74,auVar12._0_4_);
  local_60 = Control::get_size();
  local_68 = 0;
  fVar11 = (float)(_LC4 / (double)(*(int *)(this + 0xb3c) + 1));
  if (this[0xb39] == (AnimationPlayerEditor)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    fVar10 = 0.0;
    do {
      uVar8 = (ulong)*(uint *)(this + 0xb70);
      fVar10 = fVar10 + fVar11;
      uVar6 = (uint)uVar7;
      if (*(uint *)(this + 0xb70) <= uVar6) goto LAB_001004b0;
      if (*(char *)(*(long *)(this + 0xb78) + uVar7) != '\0') {
        plVar3 = (long *)RenderingServer::get_singleton();
        pcVar2 = *(code **)(*plVar3 + 0xf28);
        _local_50 = CONCAT44(fVar10,0x3f800000);
        local_58 = _LC10;
        plVar4 = (long *)RenderingServer::get_singleton();
        uVar8 = (ulong)*(uint *)(this + 0xb60);
        if (*(uint *)(this + 0xb60) <= uVar6) goto LAB_001004b0;
        uVar5 = (**(code **)(*plVar4 + 0xa18))
                          (plVar4,*(undefined8 *)(*(long *)(this + 0xb68) + uVar7 * 8));
        (*pcVar2)(plVar3,uVar1,&local_68,uVar5,&local_78,&local_58,0,0);
      }
      uVar7 = uVar7 + 1;
    } while ((uint)uVar7 < *(uint *)(this + 0xb3c));
    uVar7 = (ulong)(uVar6 + 1);
  }
  if (this[0xb3a] != (AnimationPlayerEditor)0x0) {
    iVar9 = (int)uVar7;
    fVar10 = _LC2;
    do {
      uVar8 = (ulong)*(uint *)(this + 0xb70);
      fVar10 = fVar10 - fVar11;
      uVar6 = (uint)uVar7;
      if (*(uint *)(this + 0xb70) <= uVar6) {
LAB_001004b0:
        uVar7 = uVar7 & 0xffffffff;
LAB_001004cd:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,uVar8,"p_index","count"
                   ,"",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (*(char *)(*(long *)(this + 0xb78) + uVar7) != '\0') {
        plVar3 = (long *)RenderingServer::get_singleton();
        pcVar2 = *(code **)(*plVar3 + 0xf28);
        _local_50 = CONCAT44(fVar10,0x3f800000);
        local_58 = _LC10;
        plVar4 = (long *)RenderingServer::get_singleton();
        uVar8 = (ulong)*(uint *)(this + 0xb60);
        if (*(uint *)(this + 0xb60) <= uVar6) goto LAB_001004cd;
        uVar5 = (**(code **)(*plVar4 + 0xa18))
                          (plVar4,*(undefined8 *)(*(long *)(this + 0xb68) + uVar7 * 8));
        (*pcVar2)(plVar3,uVar1,&local_68,uVar5,&local_78,&local_58,0);
      }
      uVar7 = (ulong)(uVar6 + 1);
    } while (uVar6 + 1 < (uint)(*(int *)(this + 0xb3c) + iVar9));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* LocalVector<RID, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */

void LocalVector<RID,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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



/* AnimationPlayerEditorPlugin::_notification(int) [clone .part.0] */

void AnimationPlayerEditorPlugin::_notification(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  CallableCustom *pCVar5;
  undefined4 in_register_0000003c;
  long lVar6;
  long in_FS_OFFSET;
  Callable local_58 [24];
  long local_40;
  
  plVar3 = Node3DEditor::singleton;
  lVar6 = CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(*Node3DEditor::singleton + 0x108);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC8;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_0012d560;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar2 = *(undefined8 *)(lVar6 + 0x60);
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined8 *)(pCVar5 + 0x30) = uVar2;
  *(code **)(pCVar5 + 0x38) = _transform_key_request;
  *(long *)(pCVar5 + 0x28) = lVar6;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "AnimationPlayerEditorPlugin::_transform_key_request";
  Callable::Callable(local_58,pCVar5);
  if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
  }
  (*pcVar1)(plVar3,&_notification(int)::{lambda()#1}::operator()()::sname,local_58,0);
  Callable::~Callable(local_58);
  plVar3 = *(long **)(InspectorDock::singleton + 0xa18);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC8;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_0012d5f0;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar2 = *(undefined8 *)(lVar6 + 0x60);
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined8 *)(pCVar5 + 0x30) = uVar2;
  *(code **)(pCVar5 + 0x38) = _property_keyed;
  *(long *)(pCVar5 + 0x28) = lVar6;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "AnimationPlayerEditorPlugin::_property_keyed";
  Callable::Callable(local_58,pCVar5);
  if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
  }
  (*pcVar1)(plVar3,&_notification(int)::{lambda()#2}::operator()()::sname,local_58,0);
  Callable::~Callable(local_58);
  plVar3 = *(long **)(*(long *)(lVar6 + 0x660) + 0xb30);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC8;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_0012d680;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar2 = *(undefined8 *)(lVar6 + 0x60);
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(undefined8 *)(pCVar5 + 0x30) = uVar2;
  *(code **)(pCVar5 + 0x38) = _update_keying;
  *(long *)(pCVar5 + 0x28) = lVar6;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "AnimationPlayerEditorPlugin::_update_keying";
  Callable::Callable(local_58,pCVar5);
  if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
  }
  (*pcVar1)(plVar3,&_notification(int)::{lambda()#3}::operator()()::sname,local_58,0);
  Callable::~Callable(local_58);
  plVar3 = *(long **)(InspectorDock::singleton + 0xa18);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  lVar6 = *(long *)(*(long *)(lVar6 + 0x660) + 0xb30);
  pCVar5 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar5);
  *(undefined **)(pCVar5 + 0x20) = &_LC8;
  *(undefined1 (*) [16])(pCVar5 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar5 = &PTR_hash_0012d710;
  *(undefined8 *)(pCVar5 + 0x40) = 0;
  uVar2 = *(undefined8 *)(lVar6 + 0x60);
  *(long *)(pCVar5 + 0x28) = lVar6;
  *(undefined8 *)(pCVar5 + 0x30) = uVar2;
  *(undefined8 *)(pCVar5 + 0x10) = 0;
  *(code **)(pCVar5 + 0x38) = AnimationTrackEditor::update_keying;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar5,(int)pCVar5 + 0x28);
  *(char **)(pCVar5 + 0x20) = "AnimationTrackEditor::update_keying";
  Callable::Callable(local_58,pCVar5);
  if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
    iVar4 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
  }
  (*pcVar1)(plVar3,&_notification(int)::{lambda()#4}::operator()()::sname,local_58,0);
  Callable::~Callable(local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorPlugin::set_force_draw_over_forwarding_enabled();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginAnimationTrackKeyEdit::can_handle(Object*) */

bool __thiscall
EditorInspectorPluginAnimationTrackKeyEdit::can_handle
          (EditorInspectorPluginAnimationTrackKeyEdit *this,Object *param_1)

{
  long lVar1;
  
  if (param_1 != (Object *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&AnimationTrackKeyEdit::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* EditorInspectorPluginAnimationMarkerKeyEdit::can_handle(Object*) */

bool __thiscall
EditorInspectorPluginAnimationMarkerKeyEdit::can_handle
          (EditorInspectorPluginAnimationMarkerKeyEdit *this,Object *param_1)

{
  long lVar1;
  
  if (param_1 != (Object *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&AnimationMarkerKeyEdit::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* void Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Ref<Animation> const&) [clone .isra.0] */

void __thiscall Ref<Resource>::operator=(Ref<Resource> *this,Ref *param_1)

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
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Resource::typeinfo,0);
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



/* Ref<AnimationLibrary>::TEMPNAMEPLACEHOLDERVALUE(Ref<AnimationLibrary> const&) [clone .isra.0] */

void __thiscall Ref<AnimationLibrary>::operator=(Ref<AnimationLibrary> *this,Ref *param_1)

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



/* Ref<Animation>::TEMPNAMEPLACEHOLDERVALUE(Ref<Animation> const&) [clone .isra.0] */

void __thiscall Ref<Animation>::operator=(Ref<Animation> *this,Ref *param_1)

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



/* EditorInspectorPluginAnimationMarkerKeyEdit::parse_begin(Object*) */

void __thiscall
EditorInspectorPluginAnimationMarkerKeyEdit::parse_begin
          (EditorInspectorPluginAnimationMarkerKeyEdit *this,Object *param_1)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (Object *)0x0) ||
     (lVar3 = __dynamic_cast(param_1,&Object::typeinfo,&AnimationMarkerKeyEdit::typeinfo,0),
     lVar3 == 0)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("parse_begin","editor/plugins/animation_player_editor_plugin.cpp",0x988,
                       "Parameter \"amk\" is null.",0,0);
      return;
    }
  }
  else {
    pOVar4 = (Object *)operator_new(0xb78,"");
    local_38 = (Object *)0x0;
    uVar1 = *(undefined1 *)(lVar3 + 0x188);
    if ((*(Object **)(lVar3 + 0x178) != (Object *)0x0) &&
       (local_38 = *(Object **)(lVar3 + 0x178), cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_38 = (Object *)0x0;
    }
    AnimationMarkerKeyEditEditor::AnimationMarkerKeyEditEditor
              ((AnimationMarkerKeyEditEditor *)pOVar4,&local_38,lVar3 + 0x180,uVar1);
    postinitialize_handler(pOVar4);
    *(Object **)(this + 0x218) = pOVar4;
    if (((local_38 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar4 = local_38, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspectorPlugin::add_custom_control((Control *)this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginAnimationTrackKeyEdit::parse_begin(Object*) */

void __thiscall
EditorInspectorPluginAnimationTrackKeyEdit::parse_begin
          (EditorInspectorPluginAnimationTrackKeyEdit *this,Object *param_1)

{
  AnimationTrackKeyEditEditor *pAVar6;
  undefined1 uVar1;
  undefined4 uVar2;
  char cVar3;
  long lVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (Object *)0x0) ||
     (lVar4 = __dynamic_cast(param_1,&Object::typeinfo,&AnimationTrackKeyEdit::typeinfo,0),
     lVar4 == 0)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("parse_begin","editor/plugins/animation_player_editor_plugin.cpp",0x973,
                       "Parameter \"atk\" is null.",0,0);
      return;
    }
  }
  else {
    pOVar5 = (Object *)operator_new(0xb98,"");
    local_38 = (Object *)0x0;
    uVar1 = *(undefined1 *)(lVar4 + 0x1c8);
                    /* WARNING: Load size is inaccurate */
    pAVar6._0_4_ = *(AnimationTrackKeyEditEditor **)(lVar4 + 0x184);
    uVar2 = *(undefined4 *)(lVar4 + 0x180);
    if ((*(Object **)(lVar4 + 0x178) != (Object *)0x0) &&
       (local_38 = *(Object **)(lVar4 + 0x178), cVar3 = RefCounted::reference(), cVar3 == '\0')) {
      local_38 = (Object *)0x0;
    }
    AnimationTrackKeyEditEditor::AnimationTrackKeyEditEditor
              (pAVar6._0_4_,pOVar5,&local_38,uVar2,uVar1);
    postinitialize_handler(pOVar5);
    *(Object **)(this + 0x218) = pOVar5;
    if (((local_38 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar5 = local_38, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_38), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspectorPlugin::add_custom_control((Control *)this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_set_controls_disabled(bool) */

void AnimationPlayerEditor::_set_controls_disabled(bool param_1)

{
  undefined7 in_register_00000039;
  long lVar1;
  
  lVar1 = CONCAT71(in_register_00000039,param_1);
  SpinBox::set_editable(SUB81(*(undefined8 *)(lVar1 + 0xa90),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar1 + 0xa40),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar1 + 0xa48),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar1 + 0xa58),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar1 + 0xa60),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar1 + 0xa50),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar1 + 0xa38),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar1 + 0xa68),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar1 + 0xa78),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(lVar1 + 0xa80),0));
  return;
}



/* AnimationPlayerEditor::_are_onion_layers_valid() */

undefined4 __thiscall AnimationPlayerEditor::_are_onion_layers_valid(AnimationPlayerEditor *this)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xb39] == (AnimationPlayerEditor)0x0) && (this[0xb3a] == (AnimationPlayerEditor)0x0)) {
    _err_print_error("_are_onion_layers_valid","editor/plugins/animation_player_editor_plugin.cpp",
                     0x66c,"Condition \"!onion.past && !onion.future\" is true. Returning: false",0,
                     0);
  }
  else {
    local_18 = (**(code **)(*DisplayServer::singleton + 0x588))(DisplayServer::singleton,0);
    uVar4 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_18);
    iVar1 = *(int *)(this + 0xb3c);
    if ((this[0xb39] != (AnimationPlayerEditor)0x0) && (this[0xb3a] != (AnimationPlayerEditor)0x0))
    {
      iVar1 = iVar1 * 2;
    }
    if ((*(int *)(this + 0xb60) == (uint)(byte)this[0xb40] + iVar1) &&
       ((float)uVar4 == *(float *)(this + 0xb54))) {
      fVar3 = (float)((ulong)uVar4 >> 0x20);
      uVar2 = CONCAT31((int3)((uint)(byte)this[0xb40] + iVar1 >> 8),
                       !NAN(fVar3) && !NAN(*(float *)(this + 0xb58)));
      if (fVar3 != *(float *)(this + 0xb58)) {
        uVar2 = 0;
      }
      goto LAB_00101399;
    }
  }
  uVar2 = 0;
LAB_00101399:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::forward_force_draw_over_viewport(Control*) */

void __thiscall
AnimationPlayerEditor::forward_force_draw_over_viewport
          (AnimationPlayerEditor *this,Control *param_1)

{
  char cVar1;
  
  if (*(int *)(this + 0xb50) == 0) {
    return;
  }
  cVar1 = _are_onion_layers_valid(this);
  if (cVar1 != '\0') {
    forward_force_draw_over_viewport(this,param_1);
    return;
  }
  return;
}



/* AnimationPlayerEditor::_free_onion_layers() */

void __thiscall AnimationPlayerEditor::_free_onion_layers(AnimationPlayerEditor *this)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(int *)(this + 0xb60) != 0) {
    uVar5 = 0;
    do {
      while (lVar1 = uVar5 * 8, *(long *)(*(long *)(this + 0xb68) + uVar5 * 8) != 0) {
        plVar4 = (long *)RenderingServer::get_singleton();
        if (*(uint *)(this + 0xb60) <= (uint)uVar5) {
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,uVar5 & 0xffffffff,
                     (ulong)*(uint *)(this + 0xb60),"p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uVar5 = uVar5 + 1;
        (**(code **)(*plVar4 + 0x11b0))(plVar4,*(undefined8 *)(*(long *)(this + 0xb68) + lVar1));
        uVar3 = *(uint *)(this + 0xb60);
        if (uVar3 <= (uint)uVar5) goto LAB_001014fd;
      }
      uVar3 = *(uint *)(this + 0xb60);
      uVar5 = uVar5 + 1;
    } while ((uint)uVar5 < uVar3);
LAB_001014fd:
    if (uVar3 != 0) {
      *(undefined4 *)(this + 0xb60) = 0;
    }
  }
  if (*(int *)(this + 0xb70) != 0) {
    *(undefined4 *)(this + 0xb70) = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationPlayerEditor::_allocate_onion_layers() */

void AnimationPlayerEditor::_allocate_onion_layers(void)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long in_RCX;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  AnimationPlayerEditor *in_RDI;
  void *pvVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  AnimationPlayerEditor AVar14;
  undefined8 uVar15;
  Object *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  float fVar16;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _free_onion_layers(in_RDI);
  iVar4 = *(int *)(in_RDI + 0xb3c);
  uVar11 = (uint)(byte)in_RDI[0xb40];
  if ((in_RDI[0xb39] != (AnimationPlayerEditor)0x0) && (in_RDI[0xb3a] != (AnimationPlayerEditor)0x0)
     ) goto LAB_00101950;
  do {
    uVar11 = uVar11 + iVar4;
    local_58 = (**(code **)(*DisplayServer::singleton + 0x588))();
    uVar15 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
    fVar16 = (float)((ulong)uVar15 >> 0x20);
    uVar9 = *(uint *)(in_RDI + 0xb60);
    if (uVar11 < uVar9) {
LAB_00101644:
      *(uint *)(in_RDI + 0xb60) = uVar11;
    }
    else if (uVar9 < uVar11) {
      uVar1 = uVar11 - 1;
      if (*(uint *)(in_RDI + 0xb64) < uVar11) {
        pvVar12 = *(void **)(in_RDI + 0xb68);
        uVar9 = uVar1 >> 1 | uVar1;
        uVar9 = uVar9 | uVar9 >> 2;
        uVar9 = uVar9 | uVar9 >> 4;
        uVar9 = uVar9 | uVar9 >> 8;
        uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
        *(uint *)(in_RDI + 0xb64) = uVar9;
        lVar7 = Memory::realloc_static(pvVar12,(ulong)uVar9 * 8,false);
        *(long *)(in_RDI + 0xb68) = lVar7;
        if (lVar7 == 0) {
          LocalVector<RID,unsigned_int,false,false>::resize((uint)pvVar12);
          goto LAB_001019fd;
        }
        uVar9 = *(uint *)(in_RDI + 0xb60);
        if (uVar11 <= uVar9) goto LAB_00101644;
      }
      in_RCX = *(long *)(in_RDI + 0xb68);
      memset((void *)(in_RCX + (ulong)uVar9 * 8),0,(ulong)(uVar1 - uVar9) * 8 + 8);
      goto LAB_00101644;
    }
    if (uVar11 < *(uint *)(in_RDI + 0xb70)) break;
    if (uVar11 <= *(uint *)(in_RDI + 0xb70)) goto LAB_00101661;
    if (uVar11 <= *(uint *)(in_RDI + 0xb74)) break;
    pvVar12 = *(void **)(in_RDI + 0xb78);
    uVar9 = uVar11 - 1 | uVar11 - 1 >> 1;
    uVar9 = uVar9 >> 2 | uVar9;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
    *(uint *)(in_RDI + 0xb74) = uVar9;
    lVar7 = Memory::realloc_static(pvVar12,(ulong)uVar9,false);
    *(long *)(in_RDI + 0xb78) = lVar7;
    if (lVar7 != 0) break;
    iVar4 = LocalVector<RID,unsigned_int,false,false>::resize((uint)pvVar12);
LAB_00101950:
    iVar4 = iVar4 * 2;
  } while( true );
  *(uint *)(in_RDI + 0xb70) = uVar11;
LAB_00101661:
  if (0 < (int)uVar11) {
    uVar10 = 0;
    do {
      uVar8 = (undefined4)((ulong)in_RCX >> 0x20);
      AVar14 = in_RDI[0xb40];
      uVar9 = (uint)uVar10;
      if (AVar14 != (AnimationPlayerEditor)0x0) {
        AVar14 = (AnimationPlayerEditor)(uVar11 - 1 == uVar9);
      }
      plVar5 = (long *)RenderingServer::get_singleton();
      uVar6 = (**(code **)(*plVar5 + 0x990))(plVar5);
      uVar13 = (ulong)*(uint *)(in_RDI + 0xb60);
      if (*(uint *)(in_RDI + 0xb60) <= uVar9) {
LAB_001018a0:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar10,uVar13,"p_index",
                   "count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar7 = uVar10 * 8;
      *(undefined8 *)(*(long *)(in_RDI + 0xb68) + uVar10 * 8) = uVar6;
      plVar5 = (long *)RenderingServer::get_singleton();
      uVar13 = (ulong)*(uint *)(in_RDI + 0xb60);
      if (*(uint *)(in_RDI + 0xb60) <= uVar9) goto LAB_001018a0;
      (**(code **)(*plVar5 + 0x9a0))
                (plVar5,*(undefined8 *)(*(long *)(in_RDI + 0xb68) + uVar10 * 8),(int)(float)uVar15,
                 CONCAT44(uVar8,(int)fVar16));
      plVar5 = (long *)RenderingServer::get_singleton();
      uVar13 = (ulong)*(uint *)(in_RDI + 0xb60);
      if (*(uint *)(in_RDI + 0xb60) <= uVar9) goto LAB_001018a0;
      (**(code **)(*plVar5 + 0x9f8))(plVar5,*(undefined8 *)(*(long *)(in_RDI + 0xb68) + lVar7),4);
      plVar5 = (long *)RenderingServer::get_singleton();
      uVar13 = (ulong)*(uint *)(in_RDI + 0xb60);
      if (*(uint *)(in_RDI + 0xb60) <= uVar9) goto LAB_001018a0;
      (**(code **)(*plVar5 + 0xa60))
                (plVar5,*(undefined8 *)(*(long *)(in_RDI + 0xb68) + lVar7),(byte)AVar14 ^ 1);
      plVar5 = (long *)RenderingServer::get_singleton();
      uVar13 = (ulong)*(uint *)(in_RDI + 0xb60);
      if (*(uint *)(in_RDI + 0xb60) <= uVar9) goto LAB_001018a0;
      in_RCX = *(long *)(in_RDI + 0xb68);
      uVar10 = uVar10 + 1;
      (**(code **)(*plVar5 + 0xa48))
                (plVar5,*(undefined8 *)(in_RCX + lVar7),*(undefined8 *)(in_RDI + 0xb80));
    } while (uVar11 != uVar10);
  }
  plVar5 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar5 + 0xfb8))(plVar5,*(undefined8 *)(in_RDI + 0xb88));
  plVar5 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar5 + 0xf20);
  local_58 = CONCAT44(_LC2,_LC2);
  uStack_50 = _LC2;
  uStack_4c = _LC2;
  if (*(long *)(in_RDI + 0x240) == 0) {
    _allocate_onion_layers();
    return;
  }
  Viewport::get_texture();
  uVar6 = (**(code **)(*(long *)local_70 + 0x1c0))();
  local_68 = 0;
  local_60 = CONCAT44((uint)fVar16 ^ __LC3,(float)uVar15);
  (*pcVar2)(plVar5,*(undefined8 *)(in_RDI + 0xb88),&local_68,uVar6,0,(Vector2i *)&local_58,0);
  if (((local_70 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_70), cVar3 != '\0')) {
    (**(code **)(*(long *)local_70 + 0x140))(local_70);
    Memory::free_static(local_70,false);
  }
  *(undefined8 *)(in_RDI + 0xb54) = uVar15;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001019fd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_prepare_onion_layers_2_epilog() */

void __thiscall AnimationPlayerEditor::_prepare_onion_layers_2_epilog(AnimationPlayerEditor *this)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (*(long *)(this + 0x240) != 0) {
    uVar3 = Viewport::get_viewport_rid();
    plVar4 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar4 + 0x9b0))(plVar4,uVar3,0);
    plVar4 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar4 + 0x9c0))(plVar4,uVar3,this + 0xbb0,0);
    plVar4 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar4 + 0x9f8))(plVar4,uVar3,2);
    AnimationPlayer::seek_internal
              (*(double *)(this + 0xba0),SUB81(*(undefined8 *)(this + 0xa20),0),true,true);
    AnimationMixer::restore(*(Ref **)(this + 0xa20));
    cVar2 = CanvasItem::is_visible();
    if (cVar2 == '\0') {
      CanvasItemEditor::set_state(CanvasItemEditor::singleton);
    }
    else {
      Node3DEditor::set_state(Node3DEditor::singleton);
    }
    *(undefined4 *)(this + 0xb50) = 1;
    EditorPlugin::update_overlays();
    return;
  }
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AnimationPlayerEditor::get_cached_root_node() const */

undefined8 __thiscall AnimationPlayerEditor::get_cached_root_node(AnimationPlayerEditor *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (uint)*(ulong *)(this + 0xa28) & 0xffffff;
  if (uVar4 < (uint)ObjectDB::slot_max) {
    while( true ) {
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
    puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0xa28) >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
      uVar2 = puVar5[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (uVar2 != 0) {
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = __dynamic_cast(uVar2,&Object::typeinfo,&Node::typeinfo,0);
          return uVar3;
        }
        goto LAB_00101c37;
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
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00101c37:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::get_player() const */

undefined8 __thiscall AnimationPlayerEditor::get_player(AnimationPlayerEditor *this)

{
  return *(undefined8 *)(this + 0xa20);
}



/* AnimationPlayerEditor::get_editing_node() const */

undefined8 __thiscall AnimationPlayerEditor::get_editing_node(AnimationPlayerEditor *this)

{
  return *(undefined8 *)(this + 0xa18);
}



/* AnimationPlayerEditorPlugin::_notification(int) */

void __thiscall
AnimationPlayerEditorPlugin::_notification(AnimationPlayerEditorPlugin *this,int param_1)

{
  if (param_1 != 10) {
    return;
  }
  _notification((int)this);
  return;
}



/* AnimationPlayerEditorPlugin::_clear_dummy_player() */

void __thiscall AnimationPlayerEditorPlugin::_clear_dummy_player(AnimationPlayerEditorPlugin *this)

{
  undefined8 uVar1;
  long lVar2;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  Callable aCStack_88 [16];
  Variant *local_78 [2];
  int local_68 [6];
  int local_50 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x670) != 0) {
    lVar2 = Node::get_parent();
    if (lVar2 != 0) {
      this_00 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this_00);
      *(undefined **)(this_00 + 0x20) = &_LC8;
      *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)this_00 = &PTR_hash_0012d830;
      *(undefined8 *)(this_00 + 0x40) = 0;
      uVar1 = *(undefined8 *)(lVar2 + 0x60);
      *(long *)(this_00 + 0x28) = lVar2;
      *(undefined8 *)(this_00 + 0x30) = uVar1;
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(code **)(this_00 + 0x38) = Node::remove_child;
      CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
      *(char **)(this_00 + 0x20) = "Node::remove_child";
      Callable::Callable(aCStack_88,this_00);
      ::Variant::Variant((Variant *)local_68,*(Object **)(this + 0x670));
      ::Variant::Variant((Variant *)local_50,0);
      local_78[0] = (Variant *)local_68;
      Callable::call_deferredp((Variant **)aCStack_88,(int)local_78);
      if (::Variant::needs_deinit[local_50[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[local_68[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      Callable::~Callable(aCStack_88);
    }
    Node::queue_free();
    *(undefined8 *)(this + 0x670) = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackKeyEditEditorPlugin::AnimationTrackKeyEditEditorPlugin() */

void __thiscall
AnimationTrackKeyEditEditorPlugin::AnimationTrackKeyEditEditorPlugin
          (AnimationTrackKeyEditEditorPlugin *this)

{
  char cVar1;
  RefCounted *pRVar2;
  long in_FS_OFFSET;
  RefCounted *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  EditorPlugin::EditorPlugin((EditorPlugin *)this);
  *(undefined8 *)(this + 0x660) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0012c970;
  pRVar2 = (RefCounted *)operator_new(0x220,"");
  RefCounted::RefCounted(pRVar2);
  *(undefined8 *)(pRVar2 + 0x180) = 0;
  *(code **)pRVar2 = EditorInspector::add_inspector_plugin;
  StringName::StringName((StringName *)(pRVar2 + 0x188),"_can_handle",false);
  pRVar2[400] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x198) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x1a0),"_parse_begin",false);
  pRVar2[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x1b0) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x1b8),"_parse_category",false);
  pRVar2[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x1c8) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x1d0),"_parse_group",false);
  pRVar2[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x1e0) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x1e8),"_parse_property",false);
  pRVar2[0x1f0] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x1f8) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x200),"_parse_end",false);
  pRVar2[0x208] = (RefCounted)0x0;
  *(undefined ***)pRVar2 = &PTR__initialize_classv_0012c7e0;
  *(undefined1 (*) [16])(pRVar2 + 0x210) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)pRVar2);
  *(RefCounted **)(this + 0x660) = pRVar2;
  local_28 = pRVar2;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    local_28 = (RefCounted *)0x0;
  }
  EditorInspector::add_inspector_plugin((Ref *)&local_28);
  if (local_28 != (RefCounted *)0x0) {
    cVar1 = RefCounted::unreference();
    pRVar2 = local_28;
    if (cVar1 != '\0') {
      cVar1 = predelete_handler((Object *)local_28);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
        Memory::free_static(pRVar2,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationMarkerKeyEditEditorPlugin::AnimationMarkerKeyEditEditorPlugin() */

void __thiscall
AnimationMarkerKeyEditEditorPlugin::AnimationMarkerKeyEditEditorPlugin
          (AnimationMarkerKeyEditEditorPlugin *this)

{
  char cVar1;
  RefCounted *pRVar2;
  long in_FS_OFFSET;
  RefCounted *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  EditorPlugin::EditorPlugin((EditorPlugin *)this);
  *(undefined8 *)(this + 0x660) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0012cda8;
  pRVar2 = (RefCounted *)operator_new(0x220,"");
  RefCounted::RefCounted(pRVar2);
  *(undefined8 *)(pRVar2 + 0x180) = 0;
  *(code **)pRVar2 = EditorInspector::add_inspector_plugin;
  StringName::StringName((StringName *)(pRVar2 + 0x188),"_can_handle",false);
  pRVar2[400] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x198) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x1a0),"_parse_begin",false);
  pRVar2[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x1b0) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x1b8),"_parse_category",false);
  pRVar2[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x1c8) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x1d0),"_parse_group",false);
  pRVar2[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x1e0) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x1e8),"_parse_property",false);
  pRVar2[0x1f0] = (RefCounted)0x0;
  *(undefined8 *)(pRVar2 + 0x1f8) = 0;
  StringName::StringName((StringName *)(pRVar2 + 0x200),"_parse_end",false);
  pRVar2[0x208] = (RefCounted)0x0;
  *(undefined ***)pRVar2 = &PTR__initialize_classv_0012cc18;
  *(undefined1 (*) [16])(pRVar2 + 0x210) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)pRVar2);
  *(RefCounted **)(this + 0x660) = pRVar2;
  local_28 = pRVar2;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    local_28 = (RefCounted *)0x0;
  }
  EditorInspector::add_inspector_plugin((Ref *)&local_28);
  if (local_28 != (RefCounted *)0x0) {
    cVar1 = RefCounted::unreference();
    pRVar2 = local_28;
    if (cVar1 != '\0') {
      cVar1 = predelete_handler((Object *)local_28);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
        Memory::free_static(pRVar2,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_start_onion_skinning() */

void __thiscall AnimationPlayerEditor::_start_onion_skinning(AnimationPlayerEditor *this)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  AnimationPlayerEditor local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(StringName **)(this + 0xa20) != (StringName *)0x0) {
    cVar3 = AnimationMixer::has_animation(*(StringName **)(this + 0xa20));
    if (cVar3 == '\0') {
      this[0xb38] = (AnimationPlayerEditor)0x0;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        BaseButton::set_pressed_no_signal(SUB81(*(undefined8 *)(this + 0xa78),0));
        return;
      }
      goto LAB_00102425;
    }
  }
  plVar1 = *(long **)(this + 0x240);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x118);
    create_custom_callable_function_pointer<AnimationPlayerEditor>
              (local_58,(char *)this,(_func_void *)"&AnimationPlayerEditor::_prepare_onion_layers_1"
              );
    if (_start_onion_skinning()::{lambda()#1}::operator()()::sname == '\0') {
      iVar4 = __cxa_guard_acquire(&_start_onion_skinning()::{lambda()#1}::operator()()::sname);
      if (iVar4 != 0) {
        _scs_create((char *)&_start_onion_skinning()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_start_onion_skinning()::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_start_onion_skinning()::{lambda()#1}::operator()()::sname);
      }
    }
    cVar3 = (*pcVar2)(plVar1,&_start_onion_skinning()::{lambda()#1}::operator()()::sname,local_58);
    Callable::~Callable((Callable *)local_58);
    if (cVar3 == '\0') {
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) goto AnimationPlayerEditor__start_onion_skinning;
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<AnimationPlayerEditor>
                (local_58,(char *)this,
                 (_func_void *)"&AnimationPlayerEditor::_prepare_onion_layers_1");
      if (_start_onion_skinning()::{lambda()#2}::operator()()::sname == '\0') {
        iVar4 = __cxa_guard_acquire(&_start_onion_skinning()::{lambda()#2}::operator()()::sname);
        if (iVar4 != 0) {
          _scs_create((char *)&_start_onion_skinning()::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_start_onion_skinning()::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_start_onion_skinning()::{lambda()#2}::operator()()::sname);
        }
      }
      (*pcVar2)(plVar1,&_start_onion_skinning()::{lambda()#2}::operator()()::sname,local_58,0);
      Callable::~Callable((Callable *)local_58);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
LAB_00102425:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
AnimationPlayerEditor__start_onion_skinning:
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AnimationPlayerEditor::_editor_visibility_changed() */

void __thiscall AnimationPlayerEditor::_editor_visibility_changed(AnimationPlayerEditor *this)

{
  char cVar1;
  
  cVar1 = CanvasItem::is_visible();
  if (cVar1 != '\0') {
    cVar1 = OptionButton::has_selectable_items();
    if (cVar1 != '\0') {
      _start_onion_skinning(this);
      return;
    }
  }
  return;
}



/* AnimationPlayerEditor::get_state() const */

void AnimationPlayerEditor::get_state(void)

{
  bool bVar1;
  char cVar2;
  Variant *pVVar3;
  long lVar4;
  long in_RSI;
  Dictionary *in_RDI;
  long in_FS_OFFSET;
  Node local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(in_RDI);
  if (*(char *)(in_RSI + 0xa30) == '\0') {
    bVar1 = (bool)CanvasItem::is_visible_in_tree();
    ::Variant::Variant((Variant *)local_58,bVar1);
    ::Variant::Variant((Variant *)local_78,"visible");
    pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
    if (pVVar3 != (Variant *)local_58) {
      if (::Variant::needs_deinit[*(int *)pVVar3] != '\0') {
        ::Variant::_clear_internal();
      }
      *(undefined4 *)pVVar3 = 0;
      *(int *)pVVar3 = local_58[0];
      *(undefined8 *)(pVVar3 + 8) = local_50;
      *(undefined8 *)(pVVar3 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[local_58[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    lVar4 = EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
    if (lVar4 != 0) {
      cVar2 = CanvasItem::is_visible_in_tree();
      if ((cVar2 != '\0') && (*(long *)(in_RSI + 0xa20) != 0)) {
        bVar1 = (bool)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
        Node::get_path_to(local_80,bVar1);
        ::Variant::Variant((Variant *)local_58,(NodePath *)local_80);
        ::Variant::Variant((Variant *)local_78,"player");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
        ::Variant::operator=(pVVar3,(Variant *)local_58);
        if (::Variant::needs_deinit[local_78[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if (::Variant::needs_deinit[local_58[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        NodePath::~NodePath((NodePath *)local_80);
        AnimationPlayer::get_assigned_animation();
        ::Variant::Variant((Variant *)local_58,(String *)local_80);
        ::Variant::Variant((Variant *)local_78,"animation");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
        ::Variant::operator=(pVVar3,(Variant *)local_58);
        if (::Variant::needs_deinit[local_78[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if (::Variant::needs_deinit[local_58[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        AnimationTrackEditor::get_state();
        ::Variant::Variant((Variant *)local_58,(Dictionary *)local_80);
        ::Variant::Variant((Variant *)local_78,"track_editor_state");
        pVVar3 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
        ::Variant::operator=(pVVar3,(Variant *)local_58);
        if (::Variant::needs_deinit[local_78[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if (::Variant::needs_deinit[local_58[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        Dictionary::~Dictionary((Dictionary *)local_80);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_update_animation() */

void __thiscall AnimationPlayerEditor::_update_animation(AnimationPlayerEditor *this)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long in_FS_OFFSET;
  float fVar8;
  CowData<char32_t> local_40 [8];
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xb2c] = (AnimationPlayerEditor)0x1;
  cVar4 = AnimationPlayer::is_playing();
  if (cVar4 == '\0') {
    Button::set_button_icon(*(Ref **)(this + 0xa40));
  }
  else {
    Button::set_button_icon(*(Ref **)(this + 0xa40));
  }
  uVar2 = *(undefined8 *)(this + 0xa98);
  fVar8 = (float)AnimationPlayer::get_speed_scale();
  iVar7 = (int)(CowData<char32_t> *)&local_38;
  String::num((double)fVar8,iVar7);
  LineEdit::set_text(uVar2,(CowData<char32_t> *)&local_38);
  iVar6 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  AnimationPlayer::get_assigned_animation();
  do {
    iVar5 = OptionButton::get_item_count();
    if (iVar5 <= iVar6) {
LAB_00102893:
      this[0xb2c] = (AnimationPlayerEditor)0x0;
      CowData<char32_t>::_unref(local_40);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    OptionButton::get_item_text(iVar7);
    cVar4 = String::operator==((String *)&local_38,(String *)local_40);
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
    if (cVar4 != '\0') {
      OptionButton::select((int)*(undefined8 *)(this + 0xa38));
      goto LAB_00102893;
    }
    iVar6 = iVar6 + 1;
  } while( true );
}



/* AnimationPlayerEditorPlugin::handles(Object*) const */

undefined4 __thiscall
AnimationPlayerEditorPlugin::handles(AnimationPlayerEditorPlugin *this,Object *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  pcVar1 = *(code **)(*(long *)param_1 + 0x58);
  local_50 = 0xf;
  local_58 = "AnimationPlayer";
  String::parse_latin1((StrRange *)&local_70);
  uVar2 = (*pcVar1)(param_1,(StrRange *)&local_70);
  if ((char)uVar2 == '\0') {
    local_68 = 0;
    pcVar1 = *(code **)(*(long *)param_1 + 0x58);
    local_50 = 0xd;
    local_58 = "AnimationTree";
    String::parse_latin1((StrRange *)&local_68);
    uVar2 = (*pcVar1)(param_1,(StrRange *)&local_68);
    if ((char)uVar2 == '\0') {
      local_60 = 0;
      pcVar1 = *(code **)(*(long *)param_1 + 0x58);
      local_50 = 0xe;
      local_58 = "AnimationMixer";
      String::parse_latin1((StrRange *)&local_60);
      uVar2 = (*pcVar1)(param_1,(StrRange *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditorPlugin::~AnimationPlayerEditorPlugin() */

void __thiscall
AnimationPlayerEditorPlugin::~AnimationPlayerEditorPlugin(AnimationPlayerEditorPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)(this + 0x670);
  *(undefined ***)this = &PTR__initialize_classv_0012c538;
  if (pOVar1 != (Object *)0x0) {
    cVar2 = predelete_handler(pOVar1);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* AnimationPlayerEditorPlugin::~AnimationPlayerEditorPlugin() */

void __thiscall
AnimationPlayerEditorPlugin::~AnimationPlayerEditorPlugin(AnimationPlayerEditorPlugin *this)

{
  ~AnimationPlayerEditorPlugin(this);
  operator_delete(this,0x680);
  return;
}



/* AnimationTrackKeyEditEditorPlugin::handles(Object*) const */

undefined4 __thiscall
AnimationTrackKeyEditEditorPlugin::handles(AnimationTrackKeyEditEditorPlugin *this,Object *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x15;
  pcVar1 = *(code **)(*(long *)param_1 + 0x58);
  local_38 = "AnimationTrackKeyEdit";
  String::parse_latin1((StrRange *)&local_40);
  uVar2 = (*pcVar1)(param_1,(StrRange *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationMarkerKeyEditEditorPlugin::handles(Object*) const */

undefined4 __thiscall
AnimationMarkerKeyEditEditorPlugin::handles
          (AnimationMarkerKeyEditEditorPlugin *this,Object *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x16;
  pcVar1 = *(code **)(*(long *)param_1 + 0x58);
  local_38 = "AnimationMarkerKeyEdit";
  String::parse_latin1((StrRange *)&local_40);
  uVar2 = (*pcVar1)(param_1,(StrRange *)&local_40);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::fetch_mixer_for_library() const */

long * __thiscall AnimationPlayerEditor::fetch_mixer_for_library(AnimationPlayerEditor *this)

{
  code *pcVar1;
  char cVar2;
  NodePath *pNVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar5 = *(long **)(this + 0xa18);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_50 = 0;
    pcVar1 = *(code **)(*plVar5 + 0x58);
    local_40 = 0xd;
    local_48 = "AnimationTree";
    String::parse_latin1((StrRange *)&local_50);
    cVar2 = (*pcVar1)(plVar5,(StrRange *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if (cVar2 != '\0') {
      pNVar3 = *(NodePath **)(this + 0xa18);
      if (pNVar3 != (NodePath *)0x0) {
        pNVar3 = (NodePath *)__dynamic_cast(pNVar3,&Object::typeinfo,&AnimationTree::typeinfo,0);
      }
      AnimationTree::get_animation_player();
      lVar4 = Node::get_node_or_null(pNVar3);
      NodePath::~NodePath((NodePath *)&local_48);
      if (lVar4 != 0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          plVar5 = (long *)__dynamic_cast(lVar4,&Object::typeinfo,&AnimationMixer::typeinfo,0);
          return plVar5;
        }
        goto LAB_00102d21;
      }
    }
    plVar5 = *(long **)(this + 0xa18);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar5;
  }
LAB_00102d21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_ensure_dummy_player() */

void __thiscall AnimationPlayerEditor::_ensure_dummy_player(AnimationPlayerEditor *this)

{
  long lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((this[0xa30] != (AnimationPlayerEditor)0x0) && (*(long *)(this + 0xa20) != 0)) &&
     (*(long *)(this + 0xa18) != 0)) {
    cVar2 = CanvasItem::is_visible();
    if (cVar2 == '\0') {
      AnimationMixer::set_active(SUB81(*(undefined8 *)(this + 0xa20),0));
      AnimationMixer::set_editing(SUB81(*(undefined8 *)(this + 0xa18),0));
    }
    else {
      AnimationMixer::set_active(SUB81(*(undefined8 *)(this + 0xa20),0));
      AnimationMixer::set_editing(SUB81(*(undefined8 *)(this + 0xa18),0));
    }
  }
  iVar3 = OptionButton::get_selected();
  bVar4 = SUB81(*(undefined8 *)(this + 0xa68),0);
  if (iVar3 == -1) {
    BaseButton::set_disabled(bVar4);
    lVar1 = *(long *)(this + 0xb30);
  }
  else {
    OptionButton::get_item_text((int)&local_38);
    if (((local_38 == 0) || (iVar3 = (int)*(undefined8 *)(local_38 + -8), iVar3 == 0)) ||
       (iVar3 == 1)) {
      BaseButton::set_disabled(bVar4);
    }
    else {
      BaseButton::set_disabled(bVar4);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    lVar1 = *(long *)(this + 0xb30);
  }
  if (lVar1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    AnimationTrackEditor::show_dummy_player_warning(SUB81(lVar1,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationPlayerEditor::_get_editor_step() const */

float AnimationPlayerEditor::_get_editor_step(void)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  float fVar3;
  CowData<char32_t> aCStack_48 [8];
  Object *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  AnimationPlayer::get_assigned_animation();
  StringName::StringName((StringName *)&local_38,(String *)aCStack_48,false);
  AnimationMixer::get_animation((StringName *)&local_40);
  if ((StringName::configured != '\0') && (local_38 != 0)) {
    StringName::unref();
  }
  if (local_40 == (Object *)0x0) {
    fVar3 = 0.0;
    _err_print_error("_get_editor_step","editor/plugins/animation_player_editor_plugin.cpp",0x243,
                     "Condition \"anim.is_null()\" is true. Returning: 0.0",0,0);
  }
  else {
    fVar3 = (float)AnimationTrackEditor::get_snap_unit();
    uVar2 = Input::get_singleton();
    cVar1 = Input::is_key_pressed(uVar2);
    if (cVar1 != '\0') {
      fVar3 = fVar3 * __LC110;
    }
  }
  if (local_40 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_40);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_40 + 0x140))(local_40);
        Memory::free_static(local_40,false);
      }
    }
  }
  CowData<char32_t>::_unref(aCStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_prepare_onion_layers_2_step_prepare(int, unsigned int) */

void __thiscall
AnimationPlayerEditor::_prepare_onion_layers_2_step_prepare
          (AnimationPlayerEditor *this,int param_1,uint param_2)

{
  Variant *pVVar1;
  uint uVar2;
  StringName *pSVar3;
  undefined8 uVar4;
  code *pcVar5;
  Object *pOVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  CallableCustom *this_00;
  Variant *pVVar11;
  long in_FS_OFFSET;
  float fVar12;
  double dVar13;
  Object *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  Variant local_70 [24];
  Variant local_58 [24];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (param_1 == 0) {
      if (this[0xb41] == (AnimationPlayerEditor)0x0) {
        pSVar3 = *(StringName **)(this + 0xb90);
        local_b8 = "editors/animation/onion_layers_future_color";
        local_c0 = 0;
        local_b0 = 0x2b;
        String::parse_latin1((StrRange *)&local_c0);
        _EDITOR_GET((String *)local_88);
        StringName::StringName((StringName *)&local_b8,"dir_color",false);
        ShaderMaterial::set_shader_parameter(pSVar3,(Variant *)&local_b8);
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
        if (::Variant::needs_deinit[local_88[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      }
      if (this[0xb3a] == (AnimationPlayerEditor)0x0) {
LAB_00103086:
        if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
          _prepare_onion_layers_2_epilog(this);
          return;
        }
LAB_001034fb:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
LAB_001031c3:
      iVar8 = *(int *)(this + 0xb3c);
    }
    else {
      AnimationPlayer::get_assigned_animation();
      StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
      AnimationMixer::get_animation((StringName *)&local_c8);
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      dVar13 = *(double *)(this + 0xba0);
      fVar12 = (float)Animation::get_step();
      dVar13 = (double)((float)param_1 * fVar12) + dVar13;
      cVar7 = Animation::get_loop_mode();
      if (cVar7 != '\0') {
        uVar2 = *(uint *)(this + 0xb70);
        uVar9 = (ulong)uVar2;
joined_r0x00103292:
        if (uVar2 <= param_2) goto LAB_00103460;
        uVar4 = *(undefined8 *)(this + 0xa20);
        *(undefined1 *)(*(long *)(this + 0xb78) + (ulong)param_2) = 1;
        AnimationPlayer::seek_internal(dVar13,SUB81(uVar4,0),true,true);
        plVar10 = (long *)OS::get_singleton();
        plVar10 = (long *)(**(code **)(*plVar10 + 0x1d0))(plVar10);
        (**(code **)(*plVar10 + 0x170))(0,plVar10);
        this_00 = (CallableCustom *)operator_new(0x48,"");
        CallableCustom::CallableCustom(this_00);
        *(AnimationPlayerEditor **)(this_00 + 0x28) = this;
        *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
        *(undefined ***)this_00 = &PTR_hash_0012d290;
        *(undefined8 *)(this_00 + 0x40) = 0;
        uVar4 = *(undefined8 *)(this + 0x60);
        *(undefined **)(this_00 + 0x20) = &_LC8;
        *(undefined8 *)(this_00 + 0x30) = uVar4;
        *(code **)(this_00 + 0x38) = _prepare_onion_layers_2_step_capture;
        *(undefined8 *)(this_00 + 0x10) = 0;
        CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
        *(char **)(this_00 + 0x20) = "AnimationPlayerEditor::_prepare_onion_layers_2_step_capture";
        Callable::Callable((Callable *)&local_b8,this_00);
        ::Variant::Variant((Variant *)local_88,param_1);
        ::Variant::Variant(local_70,param_2);
        ::Variant::Variant(local_58,0);
        pVVar11 = (Variant *)local_40;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = local_70;
        Callable::call_deferredp((Variant **)&local_b8,(int)&local_a8);
        do {
          pVVar1 = pVVar11 + -0x18;
          pVVar11 = pVVar11 + -0x18;
          if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            ::Variant::_clear_internal();
          }
        } while (pVVar11 != (Variant *)local_88);
        Callable::~Callable((Callable *)&local_b8);
        Ref<Animation>::unref((Ref<Animation> *)&local_c8);
        if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_001034fb;
      }
      if (0.0 <= dVar13) {
        fVar12 = (float)Animation::get_length();
        uVar2 = *(uint *)(this + 0xb70);
        uVar9 = (ulong)uVar2;
        if (dVar13 <= (double)fVar12) goto joined_r0x00103292;
      }
      else {
        uVar9 = (ulong)*(uint *)(this + 0xb70);
      }
      if ((uint)uVar9 <= param_2) {
LAB_00103460:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)param_2,uVar9,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar9 = (ulong)param_2;
      param_2 = param_2 + 1;
      *(undefined1 *)(*(long *)(this + 0xb78) + uVar9) = 0;
      if (((local_c8 != (Object *)0x0) &&
          (cVar7 = RefCounted::unreference(), pOVar6 = local_c8, cVar7 != '\0')) &&
         (cVar7 = predelete_handler(local_c8), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
      iVar8 = 0;
      if (this[0xb3a] != (AnimationPlayerEditor)0x0) goto LAB_001031c3;
    }
    if (iVar8 <= param_1) goto LAB_00103086;
    param_1 = param_1 + 1;
  } while( true );
}



/* AnimationPlayerEditor::_prepare_onion_layers_2_step_capture(int, unsigned int) */

void __thiscall
AnimationPlayerEditor::_prepare_onion_layers_2_step_capture
          (AnimationPlayerEditor *this,int param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  
  if (*(long *)(this + 0x240) == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uVar4 = Viewport::get_viewport_rid();
  plVar5 = (long *)RenderingServer::get_singleton();
  uVar1 = *(uint *)(this + 0xb60);
  if (param_2 < uVar1) {
    uVar6 = (ulong)param_2;
    (**(code **)(*plVar5 + 0x9a8))(plVar5,*(undefined8 *)(*(long *)(this + 0xb68) + uVar6 * 8),1);
    plVar5 = (long *)RenderingServer::get_singleton();
    uVar1 = *(uint *)(this + 0xb60);
    if (param_2 < uVar1) {
      (**(code **)(*plVar5 + 0x9b0))
                (plVar5,uVar4,*(undefined8 *)(*(long *)(this + 0xb68) + uVar6 * 8));
      plVar5 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar5 + 0x11c8))(0,plVar5,0);
      plVar5 = (long *)RenderingServer::get_singleton();
      uVar1 = *(uint *)(this + 0xb60);
      if (param_2 < uVar1) {
        (**(code **)(*plVar5 + 0x9a8))
                  (plVar5,*(undefined8 *)(*(long *)(this + 0xb68) + uVar6 * 8),0);
        iVar3 = 0;
        if (this[0xb3a] != (AnimationPlayerEditor)0x0) {
          iVar3 = *(int *)(this + 0xb3c);
        }
        if (iVar3 <= param_1) {
          _prepare_onion_layers_2_epilog(this);
          return;
        }
        _prepare_onion_layers_2_step_prepare(this,param_1 + 1,param_2 + 1);
        return;
      }
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)param_2,(ulong)uVar1,
             "p_index","count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* AnimationPlayerEditor::_update_animation_list_icons() */

void __thiscall AnimationPlayerEditor::_update_animation_list_icons(AnimationPlayerEditor *this)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  uint uVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  String aSStack_48 [8];
  Object *local_40;
  CowData<char32_t> local_38 [8];
  long local_30;
  
  uVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = OptionButton::get_item_count();
  if (0 < iVar2) {
    do {
      OptionButton::get_item_text((int)aSStack_48);
      cVar1 = OptionButton::is_item_disabled((int)*(undefined8 *)(this + 0xa38));
      if ((cVar1 == '\0') &&
         (cVar1 = OptionButton::is_item_separator((int)*(undefined8 *)(this + 0xa38)), cVar1 == '\0'
         )) {
        local_40 = (Object *)0x0;
        AnimationPlayer::get_autoplay();
        cVar1 = String::operator==(aSStack_48,(String *)local_38);
        CowData<char32_t>::_unref(local_38);
        if (cVar1 == '\0') {
          cVar1 = operator==(aSStack_48,(StringName *)(SceneStringNames::singleton + 0x118));
          if ((cVar1 != '\0') &&
             (pOVar3 = *(Object **)(this + 0xad0), pOVar5 = local_40,
             *(Object **)(this + 0xad0) != local_40)) {
joined_r0x0010386a:
            local_40 = pOVar3;
            if (local_40 != (Object *)0x0) {
              cVar1 = RefCounted::reference();
joined_r0x00103877:
              if (cVar1 == '\0') {
                local_40 = (Object *)0x0;
              }
            }
LAB_001037b0:
            if (pOVar5 != (Object *)0x0) {
LAB_001037b5:
              cVar1 = RefCounted::unreference();
              if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          cVar1 = operator==(aSStack_48,(StringName *)(SceneStringNames::singleton + 0x118));
          pOVar5 = local_40;
          if (cVar1 == '\0') {
            pOVar3 = *(Object **)(this + 0xac8);
            if (*(Object **)(this + 0xac8) != local_40) goto joined_r0x0010386a;
          }
          else if (*(long *)(this + 0xad8) == 0) {
            if (local_40 != (Object *)0x0) {
              local_40 = (Object *)0x0;
              goto LAB_001037b5;
            }
          }
          else {
            pOVar3 = (Object *)
                     __dynamic_cast(*(long *)(this + 0xad8),&Object::typeinfo,&Texture2D::typeinfo,0
                                   );
            if (pOVar3 != pOVar5) {
              local_40 = pOVar3;
              if (pOVar3 != (Object *)0x0) {
                cVar1 = RefCounted::reference();
                goto joined_r0x00103877;
              }
              goto LAB_001037b0;
            }
          }
        }
        OptionButton::set_item_icon((int)*(undefined8 *)(this + 0xa38),(Ref *)(ulong)uVar4);
        if (((local_40 != (Object *)0x0) &&
            (cVar1 = RefCounted::unreference(), pOVar5 = local_40, cVar1 != '\0')) &&
           (cVar1 = predelete_handler(local_40), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
      uVar4 = uVar4 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_48);
      iVar2 = OptionButton::get_item_count();
    } while ((int)uVar4 < iVar2);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationPlayerEditor::_seek_value_changed(float, bool) */

void __thiscall
AnimationPlayerEditor::_seek_value_changed(AnimationPlayerEditor *this,float param_1,bool param_2)

{
  StringName *pSVar1;
  char cVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((this[0xb2c] != (AnimationPlayerEditor)0x0) || (*(long *)(this + 0xa20) == 0)) ||
     (cVar2 = AnimationPlayer::is_playing(), cVar2 != '\0')) goto LAB_00103b70;
  this[0xb2c] = (AnimationPlayerEditor)0x1;
  AnimationPlayer::get_assigned_animation();
  if ((local_60 != 0) && (1 < *(uint *)(local_60 + -8))) {
    pSVar1 = *(StringName **)(this + 0xa20);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    cVar2 = AnimationMixer::has_animation(pSVar1);
    if (cVar2 != '\0') {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      local_58 = 0;
      StringName::StringName((StringName *)&local_50,(String *)&local_60,false);
      AnimationMixer::get_animation((StringName *)&local_48);
      if (local_48 != 0) {
        local_58 = local_48;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_58 = 0;
        }
      }
      Ref<Animation>::unref((Ref<Animation> *)&local_48);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      fVar3 = (float)Animation::get_length();
      fVar4 = (float)Animation::get_length();
      dVar5 = (double)Range::get_max();
      dVar5 = ((double)param_1 / dVar5) * (double)fVar4;
      if (dVar5 < 0.0) {
        dVar5 = 0.0;
LAB_00103be4:
        dVar6 = dVar5;
        cVar2 = AnimationTrackEditor::is_snap_timeline_enabled();
        if (cVar2 != '\0') {
LAB_00103ce4:
          fVar3 = (float)_get_editor_step();
          dVar6 = (double)Math::snapped(dVar6,(double)fVar3);
          goto LAB_00103b15;
        }
        fVar3 = (float)Animation::get_length();
        dVar5 = (double)fVar3 - __LC117;
LAB_00103c20:
        if (dVar6 <= dVar5) {
          dVar5 = dVar6;
        }
      }
      else {
        dVar6 = (double)fVar3;
        if (dVar5 <= dVar6) goto LAB_00103be4;
        cVar2 = AnimationTrackEditor::is_snap_timeline_enabled();
        if (cVar2 != '\0') goto LAB_00103ce4;
LAB_00103b15:
        fVar3 = (float)Animation::get_length();
        if (0.0 <= dVar6) {
          dVar5 = (double)fVar3 - __LC117;
          goto LAB_00103c20;
        }
        dVar5 = 0.0;
      }
      if (!param_2) {
        cVar2 = AnimationPlayer::is_valid();
        if (cVar2 == '\0') {
LAB_00103cb2:
          AnimationPlayer::seek_internal(dVar5,SUB81(*(undefined8 *)(this + 0xa20),0),true,true);
        }
        else {
          dVar6 = (double)AnimationPlayer::get_current_animation_position();
          if (dVar6 != dVar5) {
            dVar7 = _LC116;
            if (_LC116 <= ABS(dVar5) * _LC116) {
              dVar7 = ABS(dVar5) * _LC116;
            }
            if (dVar7 <= ABS(dVar5 - dVar6)) goto LAB_00103cb2;
          }
        }
      }
      AnimationTrackEditor::set_anim_pos((float)dVar5);
      Ref<Animation>::unref((Ref<Animation> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      goto LAB_00103b70;
    }
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
  this[0xb2c] = (AnimationPlayerEditor)0x0;
  String::parse_latin1((String *)&local_60,"");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00103b70:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_animation_key_editor_seek(float, bool, bool) */

void __thiscall
AnimationPlayerEditor::_animation_key_editor_seek
          (AnimationPlayerEditor *this,float param_1,bool param_2,bool param_3)

{
  StringName *pSVar1;
  char cVar2;
  long in_FS_OFFSET;
  float fVar3;
  double dVar4;
  CowData<char32_t> local_50 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0xae4) = param_1;
  cVar2 = CanvasItem::is_visible_in_tree();
  if (((cVar2 != '\0') && (!param_3)) && (*(long *)(this + 0xa20) != 0)) {
    cVar2 = AnimationPlayer::is_playing();
    if (cVar2 == '\0') {
      pSVar1 = *(StringName **)(this + 0xa20);
      AnimationPlayer::get_assigned_animation();
      StringName::StringName((StringName *)&local_48,(String *)local_50,false);
      cVar2 = AnimationMixer::has_animation(pSVar1);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref(local_50);
      if (cVar2 != '\0') {
        this[0xb2c] = (AnimationPlayerEditor)0x1;
        cVar2 = AnimationTrackEditor::is_snap_timeline_enabled();
        if (cVar2 == '\0') {
          dVar4 = (double)param_1;
        }
        else {
          fVar3 = (float)_get_editor_step();
          dVar4 = (double)Math::snapped((double)param_1,(double)fVar3);
        }
        Range::set_value(dVar4);
        this[0xb2c] = (AnimationPlayerEditor)0x0;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _seek_value_changed(this,param_1,param_2);
          return;
        }
        goto LAB_00103ea8;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103ea8:
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



/* AnimationPlayerEditor::_autoplay_pressed() */

void __thiscall AnimationPlayerEditor::_autoplay_pressed(AnimationPlayerEditor *this)

{
  StringName *pSVar1;
  AnimationPlayer *pAVar2;
  Object *pOVar3;
  char cVar4;
  Object *this_00;
  long in_FS_OFFSET;
  Variant **local_d8;
  String local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xb2c] == (AnimationPlayerEditor)0x0) {
    cVar4 = OptionButton::has_selectable_items();
    if (cVar4 != '\0') {
      this_00 = (Object *)EditorUndoRedoManager::get_singleton();
      OptionButton::get_selected();
      OptionButton::get_item_text((int)local_b0);
      AnimationPlayer::get_autoplay();
      cVar4 = String::operator==((String *)&local_98,local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      if (cVar4 == '\0') {
        local_a0 = 0;
        String::parse_latin1((String *)&local_a0,"");
        local_98 = (char *)0x0;
        String::parse_latin1((String *)&local_98,"Toggle Autoplay");
        TTR((String *)&local_a8,(String *)&local_98);
        EditorUndoRedoManager::create_action(this_00,(String *)&local_a8,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        local_a0 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_b0);
        StringName::StringName((StringName *)&local_98,"set_autoplay",false);
        pSVar1 = *(StringName **)(this + 0xa20);
        ::Variant::Variant((Variant *)local_78,(String *)&local_a0);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_do_methodp(this_00,pSVar1,(Variant **)&local_98,(int)local_88);
        if (::Variant::needs_deinit[(int)local_60] != '\0') {
          ::Variant::_clear_internal();
        }
        if (::Variant::needs_deinit[local_78[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      }
      else {
        local_a8 = 0;
        String::parse_latin1((String *)&local_a8,"");
        local_98 = "Toggle Autoplay";
        local_a0 = 0;
        local_90 = 0xf;
        String::parse_latin1((StrRange *)&local_a0);
        TTR((String *)&local_98,(String *)&local_a0);
        EditorUndoRedoManager::create_action(this_00,(String *)&local_98,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        StringName::StringName((StringName *)&local_98,"set_autoplay",false);
        pSVar1 = *(StringName **)(this + 0xa20);
        ::Variant::Variant((Variant *)local_78,"");
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_do_methodp(this_00,pSVar1,(Variant **)&local_98,(int)local_88);
        if (::Variant::needs_deinit[(int)local_60] != '\0') {
          ::Variant::_clear_internal();
        }
        if (::Variant::needs_deinit[local_78[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
      }
      local_d8 = local_88;
      AnimationPlayer::get_autoplay();
      StringName::StringName((StringName *)&local_98,"set_autoplay",false);
      pSVar1 = *(StringName **)(this + 0xa20);
      ::Variant::Variant((Variant *)local_78,(String *)&local_a0);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_undo_methodp(this_00,pSVar1,(Variant **)&local_98,(int)local_d8);
      if (::Variant::needs_deinit[(int)local_60] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[local_78[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      pAVar2 = *(AnimationPlayer **)(this + 0xa20);
      StringName::StringName((StringName *)&local_98,"_animation_player_changed",false);
      EditorUndoRedoManager::add_do_method<AnimationPlayer*>
                ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_98,pAVar2);
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      pOVar3 = *(Object **)(this + 0xa20);
      StringName::StringName((StringName *)&local_98,"_animation_player_changed",false);
      ::Variant::Variant((Variant *)local_78,pOVar3);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88[0] = (Variant *)local_78;
      EditorUndoRedoManager::add_undo_methodp
                (this_00,(StringName *)this,(Variant **)&local_98,(int)local_d8);
      if (::Variant::needs_deinit[(int)local_60] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[local_78[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(this_00,0));
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationPlayerEditor::_validate_tracks(Ref<Animation>) */

undefined8 __thiscall AnimationPlayerEditor::_validate_tracks(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  Quaternion *pQVar9;
  int iVar10;
  long in_FS_OFFSET;
  CowData<char32_t> *local_178;
  CowData<char32_t> *local_170;
  CowData<char32_t> *local_168;
  CowData<char32_t> *local_160;
  CowData<char32_t> *local_158;
  CowData<char32_t> *local_150;
  CowData<char32_t> *local_140;
  NodePath *local_138;
  CowData<char32_t> *local_128;
  long local_118;
  undefined8 local_110;
  CowData<char32_t> local_108 [8];
  undefined8 local_100;
  String local_f8 [8];
  CowData<char32_t> local_f0 [8];
  String local_e8 [8];
  undefined8 local_e0;
  String local_d8 [8];
  NodePath local_d0 [8];
  NodePath local_c8 [8];
  String local_c0 [8];
  undefined8 local_b8;
  String local_b0 [8];
  int local_a8 [12];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_2 == 0) || (iVar2 = Animation::get_track_count(), iVar2 < 1)) {
    local_140 = (CowData<char32_t> *)0x1;
  }
  else {
    iVar10 = 0;
    local_140 = (CowData<char32_t> *)0x1;
    do {
      cVar1 = Animation::track_get_type((int)*param_2);
      if (cVar1 == '\x02') {
        uVar4 = Animation::track_get_key_count((int)*param_2);
        if (0 < (int)uVar4) {
          pQVar9 = (Quaternion *)0x0;
          do {
            local_78 = __LC121;
            uStack_70 = _UNK_0012dfc8;
            Animation::rotation_track_get_key((int)*param_2,iVar10,pQVar9);
            cVar1 = Quaternion::is_normalized();
            if (cVar1 == '\0') {
              local_b8 = 0;
              String::parse_latin1((String *)&local_b8,"\' contains unnormalized Quaternion key.");
              Animation::track_get_path((int)local_d0);
              NodePath::operator_cast_to_String(local_c8);
              local_e0 = 0;
              String::parse_latin1((String *)&local_e0,"\', 3D Rotation Track:  \'");
              AnimationPlayer::get_current_animation();
              local_100 = 0;
              String::parse_latin1((String *)&local_100,"\', Animation: \'");
              Node::get_name();
              if (local_118 == 0) {
                local_110 = 0;
              }
              else {
                local_110 = 0;
                if (*(char **)(local_118 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_110,(CowData *)(local_118 + 0x10));
                }
                else {
                  String::parse_latin1((String *)&local_110,*(char **)(local_118 + 8));
                }
              }
              local_150 = (CowData<char32_t> *)&local_110;
              operator+((char *)local_108,(String *)"AnimationPlayer: \'");
              String::operator+(local_f8,(String *)local_108);
              String::operator+(local_e8,local_f8);
              String::operator+(local_d8,local_e8);
              String::operator+(local_c0,local_d8);
              String::operator+(local_b0,local_c0);
              _err_print_error("_validate_tracks",
                               "editor/plugins/animation_player_editor_plugin.cpp",0x799,
                               "Condition \"!q.is_normalized()\" is true. Breaking.",local_b0,1,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
              CowData<char32_t>::_unref(local_108);
              CowData<char32_t>::_unref(local_150);
              if ((StringName::configured != '\0') && (local_118 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
              CowData<char32_t>::_unref(local_f0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
              NodePath::~NodePath(local_d0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              break;
            }
            uVar8 = (int)pQVar9 + 1;
            pQVar9 = (Quaternion *)(ulong)uVar8;
          } while (uVar4 != uVar8);
        }
      }
      else if ((cVar1 == '\0') &&
              (iVar3 = Animation::track_get_key_count((int)*param_2), iVar3 != 0)) {
        iVar6 = (int)(Variant *)&local_78;
        Animation::track_get_key_value(iVar6,(int)*param_2);
        iVar7 = (int)local_78;
        if (::Variant::needs_deinit[(int)local_78] != '\0') {
          ::Variant::_clear_internal();
        }
        if (iVar7 == 0xf) {
          if (0 < iVar3) {
            iVar7 = 0;
            do {
              Animation::track_get_key_value(iVar6,(int)*param_2);
              ::Variant::operator_cast_to_Quaternion((Variant *)local_a8);
              if (::Variant::needs_deinit[(int)local_78] == '\0') {
                cVar1 = Quaternion::is_normalized();
              }
              else {
                ::Variant::_clear_internal();
                cVar1 = Quaternion::is_normalized();
              }
              if (cVar1 == '\0') {
                local_b8 = 0;
                String::parse_latin1((String *)&local_b8,"\' contains unnormalized Quaternion key.")
                ;
                Animation::track_get_path((int)local_d0);
                NodePath::operator_cast_to_String(local_c8);
                local_e0 = 0;
                String::parse_latin1((String *)&local_e0,"\', Value Track:  \'");
                AnimationPlayer::get_current_animation();
                local_100 = 0;
                String::parse_latin1((String *)&local_100,"\', Animation: \'");
                Node::get_name();
                if (local_118 == 0) {
                  local_110 = 0;
                }
                else {
                  local_110 = 0;
                  if (*(char **)(local_118 + 8) == (char *)0x0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_110,(CowData *)(local_118 + 0x10));
                  }
                  else {
                    String::parse_latin1((String *)&local_110,*(char **)(local_118 + 8));
                  }
                }
                operator+((char *)local_108,(String *)"AnimationPlayer: \'");
                String::operator+(local_f8,(String *)local_108);
                String::operator+(local_e8,local_f8);
                String::operator+(local_d8,local_e8);
                String::operator+(local_c0,local_d8);
                String::operator+(local_b0,local_c0);
                uVar5 = 0x7a6;
                goto LAB_00104b61;
              }
              iVar7 = iVar7 + 1;
            } while (iVar3 != iVar7);
          }
        }
        else if (iVar7 == 0x12) {
          iVar7 = 0;
          if (0 < iVar3) {
LAB_001045a8:
            Animation::track_get_key_value((int)local_a8,(int)*param_2);
            ::Variant::operator_cast_to_Transform3D((Variant *)&local_78);
            if (::Variant::needs_deinit[local_a8[0]] != '\0') {
              ::Variant::_clear_internal();
            }
            Basis::orthonormalized();
            cVar1 = Basis::is_rotation();
            if (cVar1 != '\0') goto code_r0x0010459b;
            local_b8 = 0;
            String::parse_latin1
                      ((String *)&local_b8,
                       "\' contains corrupted basis (some axes are too close other axis or scaled by zero) Transform3D key."
                      );
            Animation::track_get_path((int)local_d0);
            NodePath::operator_cast_to_String(local_c8);
            local_e0 = 0;
            String::parse_latin1((String *)&local_e0,"\', Value Track:  \'");
            AnimationPlayer::get_current_animation();
            local_100 = 0;
            String::parse_latin1((String *)&local_100,"\', Animation: \'");
            Node::get_name();
            if (local_118 == 0) {
              local_110 = 0;
            }
            else {
              local_110 = 0;
              if (*(char **)(local_118 + 8) == (char *)0x0) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)&local_110,(CowData *)(local_118 + 0x10));
              }
              else {
                String::parse_latin1((String *)&local_110,*(char **)(local_118 + 8));
              }
            }
            operator+((char *)local_108,(String *)"AnimationPlayer: \'");
            String::operator+(local_f8,(String *)local_108);
            String::operator+(local_e8,local_f8);
            String::operator+(local_d8,local_e8);
            String::operator+(local_c0,local_d8);
            String::operator+(local_b0,local_c0);
            uVar5 = 0x7af;
LAB_00104b61:
            local_138 = local_d0;
            local_150 = (CowData<char32_t> *)&local_110;
            local_158 = (CowData<char32_t> *)local_c8;
            local_160 = (CowData<char32_t> *)&local_e0;
            local_168 = local_f0;
            local_170 = (CowData<char32_t> *)&local_100;
            local_178 = (CowData<char32_t> *)&local_b8;
            local_128 = (CowData<char32_t> *)local_e8;
            local_140 = (CowData<char32_t> *)local_f8;
            _err_print_error("_validate_tracks","editor/plugins/animation_player_editor_plugin.cpp",
                             uVar5,"Condition \"true\" is true. Breaking.",
                             (CowData<char32_t> *)local_b0,1,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
            CowData<char32_t>::_unref(local_128);
            CowData<char32_t>::_unref(local_140);
            CowData<char32_t>::_unref(local_108);
            CowData<char32_t>::_unref(local_150);
            if ((StringName::configured != '\0') && (local_118 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref(local_170);
            CowData<char32_t>::_unref(local_168);
            CowData<char32_t>::_unref(local_160);
            CowData<char32_t>::_unref(local_158);
            NodePath::~NodePath(local_138);
            CowData<char32_t>::_unref(local_178);
            local_140 = (CowData<char32_t> *)0x0;
          }
        }
      }
LAB_001044f0:
      iVar10 = iVar10 + 1;
    } while (iVar2 != iVar10);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_140;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010459b:
  iVar7 = iVar7 + 1;
  if (iVar3 == iVar7) goto LAB_001044f0;
  goto LAB_001045a8;
}



/* AnimationPlayerEditor::_blend_editor_next_changed(int) */

void AnimationPlayerEditor::_blend_editor_next_changed(int param_1)

{
  Variant *pVVar1;
  StringName *pSVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  Variant *pVVar7;
  int iVar8;
  undefined4 in_register_0000003c;
  StringName *pSVar9;
  long in_FS_OFFSET;
  CowData local_d8 [8];
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  pSVar9 = (StringName *)CONCAT44(in_register_0000003c,param_1);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = OptionButton::has_selectable_items();
  if (cVar4 == '\0') goto LAB_00104eee;
  OptionButton::get_selected();
  OptionButton::get_item_text((int)local_d8);
  pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
  local_c8 = 0;
  local_b0 = 0;
  local_b8 = "";
  String::parse_latin1((StrRange *)&local_c8);
  local_b8 = "Blend Next Changed";
  local_c0 = 0;
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  TTR((String *)&local_b8,(String *)&local_c0);
  EditorUndoRedoManager::create_action(pOVar5,(String *)&local_b8,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  OptionButton::get_item_text((int)(StrRange *)&local_c8);
  local_c0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,local_d8);
  StringName::StringName((StringName *)&local_b8,"animation_set_next",false);
  pSVar2 = *(StringName **)(pSVar9 + 0xa20);
  ::Variant::Variant((Variant *)local_88,(String *)&local_c0);
  ::Variant::Variant((Variant *)local_70,(String *)&local_c8);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  iVar8 = (int)&local_a8;
  local_a8 = (Variant *)local_88;
  pVStack_a0 = (Variant *)local_70;
  EditorUndoRedoManager::add_do_methodp(pOVar5,pSVar2,(Variant **)&local_b8,iVar8);
  pVVar7 = (Variant *)local_40;
  pVVar6 = pVVar7;
  do {
    pVVar1 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar6 != (Variant *)local_88);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  StringName::StringName((StringName *)&local_c8,(String *)local_d8,false);
  AnimationPlayer::animation_get_next((StringName *)&local_d0);
  local_c0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,local_d8);
  StringName::StringName((StringName *)&local_b8,"animation_set_next",false);
  pSVar2 = *(StringName **)(pSVar9 + 0xa20);
  ::Variant::Variant((Variant *)local_88,(String *)&local_c0);
  ::Variant::Variant((Variant *)local_70,(StringName *)&local_d0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = (Variant *)local_88;
  pVStack_a0 = (Variant *)local_70;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,pSVar2,(Variant **)&local_b8,iVar8);
  do {
    pVVar6 = pVVar7 + -0x18;
    pVVar7 = pVVar7 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar7 != (Variant *)local_88);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (StringName::configured != '\0') {
    if (local_d0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105230;
    }
    if (local_c8 != 0) {
      StringName::unref();
    }
  }
LAB_00105230:
  pOVar3 = *(Object **)(pSVar9 + 0xa20);
  StringName::StringName((StringName *)&local_b8,"_animation_player_changed",false);
  ::Variant::Variant((Variant *)local_88,pOVar3);
  local_70[0] = 0;
  local_70[1] = 0;
  local_68 = (undefined1  [16])0x0;
  local_a8 = (Variant *)local_88;
  EditorUndoRedoManager::add_do_methodp(pOVar5,pSVar9,(Variant **)&local_b8,iVar8);
  if (::Variant::needs_deinit[local_70[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if (::Variant::needs_deinit[local_88[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  pOVar3 = *(Object **)(pSVar9 + 0xa20);
  StringName::StringName((StringName *)&local_b8,"_animation_player_changed",false);
  ::Variant::Variant((Variant *)local_88,pOVar3);
  local_70[0] = 0;
  local_70[1] = 0;
  local_68 = (undefined1  [16])0x0;
  local_a8 = (Variant *)local_88;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,pSVar9,(Variant **)&local_b8,iVar8);
  if (::Variant::needs_deinit[local_70[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if (::Variant::needs_deinit[local_88[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
LAB_00104eee:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_blend_edited() */

void __thiscall AnimationPlayerEditor::_blend_edited(AnimationPlayerEditor *this)

{
  Variant *pVVar1;
  StringName *pSVar2;
  AnimationPlayer *pAVar3;
  char cVar4;
  long lVar5;
  Object *this_00;
  Variant *pVVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  double dVar8;
  double dVar9;
  String local_f0 [8];
  String local_e8 [8];
  long local_e0;
  long local_d8;
  long local_d0;
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
  if (this[0xb2d] != (AnimationPlayerEditor)0x0) goto LAB_00105441;
  cVar4 = OptionButton::has_selectable_items();
  if (cVar4 == '\0') goto LAB_00105441;
  lVar5 = Tree::get_edited();
  if (lVar5 == 0) goto LAB_00105441;
  OptionButton::get_selected();
  OptionButton::get_item_text((int)local_f0);
  this[0xb2d] = (AnimationPlayerEditor)0x1;
  TreeItem::get_text((int)local_e8);
  dVar8 = (double)TreeItem::get_range((int)lVar5);
  pSVar2 = *(StringName **)(this + 0xa20);
  StringName::StringName((StringName *)&local_d0,local_e8,false);
  StringName::StringName((StringName *)&local_d8,local_f0,false);
  dVar9 = (double)AnimationPlayer::get_blend_time(pSVar2,(StringName *)&local_d8);
  if (StringName::configured != '\0') {
    if (local_d8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010556f;
    }
    if (local_d0 != 0) {
      StringName::unref();
    }
  }
LAB_0010556f:
  this_00 = (Object *)EditorUndoRedoManager::get_singleton();
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"");
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"Change Blend Time");
  TTR((String *)&local_d0,(String *)&local_e0);
  EditorUndoRedoManager::create_action(this_00,(StringName *)&local_d0,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  local_d0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)local_e8);
  local_d8 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)local_f0);
  StringName::StringName((StringName *)&local_e0,"set_blend_time",false);
  pSVar2 = *(StringName **)(this + 0xa20);
  ::Variant::Variant(local_a8,(String *)&local_d8);
  ::Variant::Variant(local_90,(String *)&local_d0);
  ::Variant::Variant(local_78,(float)dVar8);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_c8 = local_a8;
  pVStack_c0 = local_90;
  local_b8 = local_78;
  EditorUndoRedoManager::add_do_methodp(this_00,pSVar2,(Variant **)&local_e0,(int)&local_c8);
  pVVar7 = local_48;
  pVVar6 = pVVar7;
  do {
    pVVar1 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar6 != local_a8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  local_d0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)local_e8);
  local_d8 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)local_f0);
  StringName::StringName((StringName *)&local_e0,"set_blend_time",false);
  pSVar2 = *(StringName **)(this + 0xa20);
  ::Variant::Variant(local_a8,(String *)&local_d8);
  ::Variant::Variant(local_90,(String *)&local_d0);
  ::Variant::Variant(local_78,(float)dVar9);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_c8 = local_a8;
  pVStack_c0 = local_90;
  local_b8 = local_78;
  EditorUndoRedoManager::add_undo_methodp(this_00,pSVar2,(Variant **)&local_e0,(int)&local_c8);
  do {
    pVVar6 = pVVar7 + -0x18;
    pVVar7 = pVVar7 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar6] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar7 != local_a8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  pAVar3 = *(AnimationPlayer **)(this + 0xa20);
  StringName::StringName((StringName *)&local_d0,"_animation_player_changed",false);
  EditorUndoRedoManager::add_do_method<AnimationPlayer*>
            ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_d0,pAVar3);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  pAVar3 = *(AnimationPlayer **)(this + 0xa20);
  StringName::StringName((StringName *)&local_d0,"_animation_player_changed",false);
  EditorUndoRedoManager::add_undo_method<AnimationPlayer*>
            ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_d0,pAVar3);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(this_00,0));
  this[0xb2d] = (AnimationPlayerEditor)0x0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
LAB_00105441:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* AnimationPlayerEditor::_animation_remove() */

void __thiscall AnimationPlayerEditor::_animation_remove(AnimationPlayerEditor *this)

{
  undefined8 uVar1;
  char cVar2;
  long in_FS_OFFSET;
  long local_80;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = OptionButton::has_selectable_items();
  if (cVar2 != '\0') {
    OptionButton::get_selected();
    OptionButton::get_item_text((int)(CowData *)&local_80);
    uVar1 = *(undefined8 *)(this + 0xaf0);
    local_70 = 0;
    if (local_80 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_80);
    }
    local_68 = 0;
    local_50 = 0;
    local_58 = "";
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "Delete Animation \'%s\'?";
    local_60 = 0;
    local_50 = 0x16;
    String::parse_latin1((StrRange *)&local_60);
    TTR((String *)&local_58,(String *)&local_60);
    vformat<String>(local_78,(String *)&local_58,(CowData<char32_t> *)&local_70);
    AcceptDialog::set_text(uVar1,local_78);
    CowData<char32_t>::_unref(local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_48 = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xaf0));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_update_animation_blend() [clone .part.0] */

void __thiscall AnimationPlayerEditor::_update_animation_blend(AnimationPlayerEditor *this)

{
  String *pSVar1;
  StringName *pSVar2;
  char *pcVar3;
  long lVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long in_FS_OFFSET;
  double dVar12;
  String local_78 [8];
  undefined8 *local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::clear();
  OptionButton::get_selected();
  OptionButton::get_item_text((int)local_78);
  local_70 = (undefined8 *)0x0;
  AnimationMixer::get_animation_list(*(List **)(this + 0xa20));
  iVar7 = Tree::create_item(*(TreeItem **)(this + 0xb08),0);
  this[0xb2d] = (AnimationPlayerEditor)0x1;
  OptionButton::clear();
  pSVar1 = *(String **)(this + 0xb10);
  local_60 = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  iVar9 = (int)(StrRange *)&local_60;
  OptionButton::add_item(pSVar1,iVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((local_70 != (undefined8 *)0x0) && (plVar11 = (long *)*local_70, plVar11 != (long *)0x0)) {
    bVar5 = false;
LAB_00105ea9:
    do {
      uVar8 = Tree::create_item(*(TreeItem **)(this + 0xb08),iVar7);
      iVar10 = (int)uVar8;
      TreeItem::set_editable(iVar10,false);
      TreeItem::set_editable(iVar10,true);
      lVar4 = *plVar11;
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
      TreeItem::set_text(uVar8,0,(StrRange *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      TreeItem::set_cell_mode(uVar8,1,2);
      TreeItem::set_range_config(iVar10,0.0,_LC139,_LC138,true);
      pSVar2 = *(StringName **)(this + 0xa20);
      StringName::StringName((StringName *)&local_58,local_78,false);
      dVar12 = (double)AnimationPlayer::get_blend_time(pSVar2,(StringName *)&local_58);
      TreeItem::set_range(iVar10,dVar12);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      lVar4 = *plVar11;
      pSVar1 = *(String **)(this + 0xb10);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        if (pcVar3 == (char *)0x0) {
          local_60 = 0;
          if (*(long *)(lVar4 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
          }
        }
        else {
          local_60 = 0;
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      OptionButton::add_item(pSVar1,iVar9);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      StringName::StringName((StringName *)&local_60,local_78,false);
      AnimationPlayer::animation_get_next((StringName *)&local_58);
      pcVar6 = local_58;
      pcVar3 = (char *)*plVar11;
      if (local_58 == (char *)0x0) {
LAB_00105e7c:
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
      }
      else if (StringName::configured != '\0') {
        StringName::unref();
        goto LAB_00105e7c;
      }
      if (pcVar3 == pcVar6) {
        OptionButton::select((int)*(undefined8 *)(this + 0xb10));
        plVar11 = (long *)plVar11[1];
        bVar5 = true;
        if (plVar11 == (long *)0x0) break;
        goto LAB_00105ea9;
      }
      plVar11 = (long *)plVar11[1];
    } while (plVar11 != (long *)0x0);
    if (bVar5) goto LAB_00105f8f;
  }
  OptionButton::select((int)*(undefined8 *)(this + 0xb10));
  pSVar2 = *(StringName **)(this + 0xa20);
  OptionButton::get_item_text(iVar9);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  StringName::StringName((StringName *)&local_68,local_78,false);
  AnimationPlayer::animation_set_next(pSVar2,(StringName *)&local_68);
  if ((StringName::configured != '\0') &&
     (((local_68 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_58 != (char *)0x0)))) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00105f8f:
  this[0xb2d] = (AnimationPlayerEditor)0x0;
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationPlayerEditor::_update_animation_blend() */

void __thiscall AnimationPlayerEditor::_update_animation_blend(AnimationPlayerEditor *this)

{
  char cVar1;
  
  if (this[0xb2d] != (AnimationPlayerEditor)0x0) {
    return;
  }
  cVar1 = OptionButton::has_selectable_items();
  if (cVar1 != '\0') {
    _update_animation_blend(this);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationPlayerEditor::_edit_animation_blend() */

void __thiscall AnimationPlayerEditor::_edit_animation_blend(AnimationPlayerEditor *this)

{
  Vector2i *pVVar1;
  char cVar2;
  long in_FS_OFFSET;
  float fVar3;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xb2d] == (AnimationPlayerEditor)0x0) {
    cVar2 = OptionButton::has_selectable_items();
    if (cVar2 != '\0') {
      pVVar1 = *(Vector2i **)(this + 0xb00);
      fVar3 = (float)EditorScale::get_scale();
      local_30 = CONCAT44(fVar3 * __LC140,fVar3 * __LC140);
      local_28 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_30);
      Window::popup_centered(pVVar1);
      if (this[0xb2d] == (AnimationPlayerEditor)0x0) {
        cVar2 = OptionButton::has_selectable_items();
        if (cVar2 != '\0') {
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            _update_animation_blend(this);
            return;
          }
          goto LAB_00106177;
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106177:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_update_name_dialog_library_dropdown() */

void __thiscall
AnimationPlayerEditor::_update_name_dialog_library_dropdown(AnimationPlayerEditor *this)

{
  uint uVar1;
  long lVar2;
  String *pSVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  Object *pOVar8;
  undefined1 uVar9;
  StringName *pSVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_90;
  long *local_88;
  long local_80;
  undefined8 local_78;
  Object *local_70;
  Object *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  cVar5 = OptionButton::has_selectable_items();
  if (cVar5 != '\0') {
    OptionButton::get_selected();
    OptionButton::get_item_text((int)(CowData<char32_t> *)&local_78);
    StringName::StringName((StringName *)&local_68,(String *)&local_78,false);
    AnimationMixer::get_animation((StringName *)&local_70);
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
    if (local_70 != (Object *)0x0) {
      AnimationMixer::find_animation_library((Ref *)&local_68);
      if ((Object *)local_90 == local_68) {
        if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_90 = (long)local_68;
      }
    }
    Ref<Animation>::unref((Ref<Animation> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  local_88 = (long *)0x0;
  AnimationMixer::get_animation_library_list(*(List **)(this + 0xa20));
  OptionButton::clear();
  local_68 = (Object *)0x0;
  cVar5 = AnimationMixer::has_animation_library(*(StringName **)(this + 0xa20));
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
  if (cVar5 == '\0') {
    pSVar3 = *(String **)(this + 0xaa8);
    local_70 = (Object *)0x0;
    String::parse_latin1((String *)&local_70,"");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"[Global] (create)");
    TTR((String *)&local_68,(String *)&local_78);
    OptionButton::add_item(pSVar3,(int)(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    uVar4 = *(undefined8 *)(this + 0xaa8);
    ::Variant::Variant((Variant *)local_58,"");
    OptionButton::set_item_metadata((int)uVar4,(Variant *)0x0);
    if (::Variant::needs_deinit[local_58[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (local_88 != (long *)0x0) {
      uVar1 = 1;
      goto LAB_00106251;
    }
    if (local_90 != 0) goto LAB_001069f8;
LAB_001069b0:
    bVar11 = false;
  }
  else if (local_88 == (long *)0x0) {
LAB_001069f8:
    bVar11 = false;
  }
  else {
    uVar1 = 0;
LAB_00106251:
    pSVar10 = (StringName *)*local_88;
    if (pSVar10 == (StringName *)0x0) {
      bVar11 = local_90 == 0 && uVar1 != 0;
      if (local_90 == 0 && uVar1 != 0) goto LAB_0010661e;
    }
    else {
      do {
        uVar4 = EditorNode::singleton;
        AnimationMixer::get_animation_library((StringName *)&local_70);
        local_68 = (Object *)0x0;
        if (((local_70 != (Object *)0x0) &&
            (pOVar8 = (Object *)__dynamic_cast(local_70,&Object::typeinfo,&Resource::typeinfo,0),
            pOVar8 != (Object *)0x0)) &&
           (local_68 = pOVar8, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
          local_68 = (Object *)0x0;
        }
        cVar5 = EditorNode::is_resource_read_only(uVar4,(String *)&local_68,0);
        if (((local_68 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar8 = local_68, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_68), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
        if (((local_70 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar8 = local_70, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
        if (cVar5 == '\0') {
          local_80 = 0;
          lVar2 = *(long *)pSVar10;
          pSVar3 = *(String **)(this + 0xaa8);
          iVar7 = (int)(StrRange *)&local_70;
          if (lVar2 == 0) {
            local_68 = (Object *)0x0;
            String::parse_latin1((String *)&local_68,"");
            local_78 = 0;
            String::parse_latin1((String *)&local_78,"[Global]");
            TTR((String *)&local_70,(String *)&local_78);
            OptionButton::add_item(pSVar3,iVar7);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          }
          else {
            pOVar8 = *(Object **)(lVar2 + 8);
            local_70 = (Object *)0x0;
            if (pOVar8 == (Object *)0x0) {
              if (*(long *)(lVar2 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar2 + 0x10));
              }
            }
            else {
              local_60 = strlen((char *)pOVar8);
              local_68 = pOVar8;
              String::parse_latin1((StrRange *)&local_70);
            }
            OptionButton::add_item(pSVar3,iVar7);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          }
          if ((StringName::configured != '\0') && (local_80 != 0)) {
            StringName::unref();
          }
          lVar2 = *(long *)pSVar10;
          uVar4 = *(undefined8 *)(this + 0xaa8);
          if (lVar2 == 0) {
            local_70 = (Object *)0x0;
          }
          else {
            pOVar8 = *(Object **)(lVar2 + 8);
            local_70 = (Object *)0x0;
            if (pOVar8 == (Object *)0x0) {
              if (*(long *)(lVar2 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar2 + 0x10));
              }
            }
            else {
              local_60 = strlen((char *)pOVar8);
              local_68 = pOVar8;
              String::parse_latin1((StrRange *)&local_70);
            }
          }
          ::Variant::Variant((Variant *)local_58,(String *)&local_70);
          OptionButton::set_item_metadata((int)uVar4,(Variant *)(ulong)uVar1);
          if (::Variant::needs_deinit[local_58[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if (*(long *)pSVar10 == local_90) {
            StringName::operator=((StringName *)&local_90,pSVar10);
          }
          uVar1 = uVar1 + 1;
        }
        pSVar10 = *(StringName **)(pSVar10 + 8);
      } while (pSVar10 != (StringName *)0x0);
      bVar11 = local_90 == 0 && 0 < (int)uVar1;
      if (bVar11) {
        if (local_88 == (long *)0x0) goto LAB_001069b0;
LAB_0010661e:
        pSVar10 = (StringName *)*local_88;
        if (pSVar10 != (StringName *)0x0) {
          do {
            uVar4 = EditorNode::singleton;
            AnimationMixer::get_animation_library((StringName *)&local_70);
            local_68 = (Object *)0x0;
            if (((local_70 != (Object *)0x0) &&
                (pOVar8 = (Object *)__dynamic_cast(local_70,&Object::typeinfo,&Resource::typeinfo,0)
                , pOVar8 != (Object *)0x0)) &&
               (local_68 = pOVar8, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
              local_68 = (Object *)0x0;
            }
            cVar5 = EditorNode::is_resource_read_only(uVar4,(String *)&local_68,0);
            if (((local_68 != (Object *)0x0) &&
                (cVar6 = RefCounted::unreference(), pOVar8 = local_68, cVar6 != '\0')) &&
               (cVar6 = predelete_handler(local_68), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar8 + 0x140))();
              Memory::free_static(pOVar8,false);
            }
            if (((local_70 != (Object *)0x0) &&
                (cVar6 = RefCounted::unreference(), pOVar8 = local_70, cVar6 != '\0')) &&
               (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar8 + 0x140))();
              Memory::free_static(pOVar8,false);
            }
            if (cVar5 == '\0') {
              StringName::operator=((StringName *)&local_90,pSVar10);
              bVar11 = *(long *)pSVar10 != 0;
              iVar7 = OptionButton::get_item_count();
              goto joined_r0x0010679a;
            }
            pSVar10 = *(StringName **)(pSVar10 + 8);
          } while (pSVar10 != (StringName *)0x0);
        }
        goto LAB_001069b0;
      }
    }
  }
  iVar7 = OptionButton::get_item_count();
joined_r0x0010679a:
  if (iVar7 < 1) goto LAB_001065a0;
  OptionButton::select((int)*(undefined8 *)(this + 0xaa8));
  iVar7 = OptionButton::get_item_count();
  if (iVar7 < 2) {
    if (!bVar11) {
      CanvasItem::hide();
      goto LAB_001065a0;
    }
    CanvasItem::show();
    uVar9 = (undefined1)*(undefined8 *)(this + 0xaa8);
LAB_001067e3:
    OptionButton::get_item_count();
  }
  else {
    CanvasItem::show();
    uVar9 = (undefined1)*(undefined8 *)(this + 0xaa8);
    if (bVar11) goto LAB_001067e3;
  }
  BaseButton::set_disabled((bool)uVar9);
LAB_001065a0:
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_88);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_get_current() const */

void AnimationPlayerEditor::_get_current(void)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long in_RSI;
  CowData<char32_t> *in_RDI;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  iVar4 = OptionButton::get_selected();
  if (-1 < iVar4) {
    iVar4 = OptionButton::get_selected();
    iVar5 = OptionButton::get_item_count();
    if (iVar4 < iVar5) {
      uVar1 = *(undefined8 *)(in_RSI + 0xa38);
      OptionButton::get_selected();
      cVar3 = OptionButton::is_item_separator((int)uVar1);
      if (cVar3 == '\0') {
        OptionButton::get_selected();
        OptionButton::get_item_text((int)&local_28);
        if (*(long *)in_RDI != local_28) {
          CowData<char32_t>::_unref(in_RDI);
          lVar2 = local_28;
          local_28 = 0;
          *(long *)in_RDI = lVar2;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_stop_pressed() */

void __thiscall AnimationPlayerEditor::_stop_pressed(AnimationPlayerEditor *this)

{
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    cVar1 = AnimationPlayer::is_playing();
    if (cVar1 == '\0') {
      _get_current();
      AnimationPlayer::stop(SUB81(*(undefined8 *)(this + 0xa20),0));
      AnimationPlayer::set_assigned_animation(*(String **)(this + 0xa20));
      Range::set_value(0.0);
      AnimationTrackEditor::set_anim_pos(0.0);
      CowData<char32_t>::_unref(aCStack_28);
    }
    else {
      AnimationPlayer::pause();
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      Button::set_button_icon(*(Ref **)(this + 0xa40));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_animation_resource_edit() */

void AnimationPlayerEditor::_animation_resource_edit(void)

{
  Ref *pRVar1;
  char cVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  String aSStack_48 [8];
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _get_current();
  local_38 = (Object *)0x0;
  cVar2 = String::operator!=(aSStack_48,(String *)&local_38);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  if (cVar2 != '\0') {
    StringName::StringName((StringName *)&local_38,aSStack_48,false);
    AnimationMixer::get_animation((StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (Object *)0x0)) {
      StringName::unref();
    }
    pRVar1 = EditorNode::singleton;
    local_38 = (Object *)0x0;
    if (local_40 != (Object *)0x0) {
      pOVar3 = (Object *)__dynamic_cast(local_40,&Object::typeinfo,&Resource::typeinfo,0);
      if (pOVar3 != (Object *)0x0) {
        local_38 = pOVar3;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_38 = (Object *)0x0;
        }
      }
    }
    EditorNode::edit_resource(pRVar1);
    if (local_38 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar3 = local_38;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_38);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    if (local_40 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_40);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_40 + 0x140))(local_40);
          Memory::free_static(local_40,false);
        }
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_animation_edit() */

void __thiscall AnimationPlayerEditor::_animation_edit(AnimationPlayerEditor *this)

{
  Ref *pRVar1;
  NodePath *pNVar2;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  long lVar6;
  long in_FS_OFFSET;
  String aSStack_58 [8];
  Object *local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_current();
  local_48 = (Object *)0x0;
  cVar4 = String::operator!=(aSStack_58,(String *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (cVar4 == '\0') {
    local_48 = (Object *)0x0;
    AnimationTrackEditor::set_animation
              (*(Ref **)(this + 0xb30),SUB81((CowData<char32_t> *)&local_48,0));
    if (((local_48 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar5 = local_48, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    AnimationTrackEditor::set_root(*(Node **)(this + 0xb30));
  }
  else {
    StringName::StringName((StringName *)&local_48,aSStack_58,false);
    AnimationMixer::get_animation((StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
    uVar3 = EditorNode::singleton;
    pRVar1 = *(Ref **)(this + 0xb30);
    local_48 = (Object *)0x0;
    if (((local_50 != (Object *)0x0) &&
        (pOVar5 = (Object *)__dynamic_cast(local_50,&Object::typeinfo,&Resource::typeinfo,0),
        pOVar5 != (Object *)0x0)) &&
       (local_48 = pOVar5, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      local_48 = (Object *)0x0;
    }
    EditorNode::is_resource_read_only(uVar3,(CowData<char32_t> *)&local_48,0);
    AnimationTrackEditor::set_animation(pRVar1,SUB81((StringName *)&local_50,0));
    if (((local_48 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar5 = local_48, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    pNVar2 = *(NodePath **)(this + 0xa20);
    AnimationMixer::get_root_node();
    lVar6 = Node::get_node_or_null(pNVar2);
    NodePath::~NodePath((NodePath *)&local_48);
    if (lVar6 != 0) {
      AnimationTrackEditor::set_root(*(Node **)(this + 0xb30));
    }
    if (((local_50 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_50), cVar4 != '\0')) {
      (**(code **)(*(long *)local_50 + 0x140))(local_50);
      Memory::free_static(local_50,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationPlayerEditor::ensure_visibility() */

void __thiscall AnimationPlayerEditor::ensure_visibility(AnimationPlayerEditor *this)

{
  if (*(long *)(this + 0xa20) != 0) {
    return;
  }
  _animation_edit(this);
  return;
}



/* AnimationPlayerEditorPlugin::make_visible(bool) */

void __thiscall
AnimationPlayerEditorPlugin::make_visible(AnimationPlayerEditorPlugin *this,bool param_1)

{
  if (!param_1) {
    return;
  }
  EditorBottomPanel::make_item_visible
            (*(Control **)(EditorNode::singleton + 0xa40),SUB81(*(undefined8 *)(this + 0x660),0),
             true);
  Node::set_process(SUB81(*(undefined8 *)(this + 0x660),0));
  if (*(long *)(*(AnimationPlayerEditor **)(this + 0x660) + 0xa20) != 0) {
    return;
  }
  AnimationPlayerEditor::_animation_edit(*(AnimationPlayerEditor **)(this + 0x660));
  return;
}



/* AnimationPlayerEditor::_animation_new() */

void __thiscall AnimationPlayerEditor::_animation_new(AnimationPlayerEditor *this)

{
  StringName *pSVar1;
  String *pSVar2;
  Vector2i *pVVar3;
  undefined8 uVar4;
  char cVar5;
  long in_FS_OFFSET;
  long local_90;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  local_68 = "new_animation";
  local_60 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = (undefined *)0x0;
  local_68 = "";
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_88);
  cVar5 = OptionButton::has_selectable_items();
  if (cVar5 == '\0') goto LAB_001071c6;
  OptionButton::get_selected();
  OptionButton::get_item_text((int)(CowData<char32_t> *)&local_80);
  StringName::StringName((StringName *)&local_68,(String *)&local_80,false);
  AnimationMixer::get_animation((StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_78 != 0) {
    AnimationMixer::find_animation_library((Ref *)&local_70);
    if (local_70 == 0) {
LAB_00107699:
      local_68 = (undefined *)0x0;
    }
    else {
      local_68 = (undefined *)0x0;
      if (*(char **)(local_70 + 8) == (char *)0x0) {
        if (*(long *)(local_70 + 0x10) == 0) goto LAB_00107699;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(local_70 + 0x10));
      }
      else {
        String::parse_latin1((String *)&local_68,*(char **)(local_70 + 8));
      }
    }
    if (local_68 != local_88) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = local_68;
      local_68 = (undefined *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
  }
  Ref<Animation>::unref((Ref<Animation> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_001071c6:
  cVar5 = String::operator==((String *)&local_88,"");
  if (cVar5 == '\0') {
    local_70 = 0;
    local_68 = "/";
    local_60 = 1;
    String::parse_latin1((StrRange *)&local_70);
    String::operator+((String *)&local_80,(String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  else {
    local_68 = "";
    local_80 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_80);
  }
  local_78 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_90);
  }
  while( true ) {
    pSVar1 = *(StringName **)(this + 0xa20);
    String::operator+((String *)&local_70,(String *)&local_80);
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    cVar5 = AnimationMixer::has_animation(pSVar1);
    if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (cVar5 == '\0') break;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_78 = 0;
    if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_90);
    }
    local_70 = 0;
    local_68 = "_%d";
    local_60 = 3;
    String::parse_latin1((StrRange *)&local_70);
    vformat<int>((String *)&local_68,(int)(String *)&local_70);
    String::operator+=((String *)&local_78,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  if (local_90 != local_78) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  _update_name_dialog_library_dropdown(this);
  local_68 = "";
  *(undefined4 *)(this + 0xb28) = 0;
  pSVar2 = *(String **)(this + 0xb18);
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Create New Animation";
  local_78 = 0;
  local_60 = 0x14;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Window::set_title(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  pVVar3 = *(Vector2i **)(this + 0xb18);
  local_50 = _LC162;
  local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
  Window::popup_centered(pVVar3);
  local_68 = "";
  pSVar2 = *(String **)(this + 0xab0);
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "New Animation Name:";
  local_78 = 0;
  local_60 = 0x13;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = (char *)0x0;
  uVar4 = *(undefined8 *)(this + 0xaa0);
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_90);
  }
  LineEdit::set_text(uVar4,(StringName *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  LineEdit::select_all();
  Control::grab_focus();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationPlayerEditor::_animation_rename() [clone .part.0] */

void __thiscall AnimationPlayerEditor::_animation_rename(AnimationPlayerEditor *this)

{
  String *pSVar1;
  undefined8 uVar2;
  Vector2i *pVVar3;
  int iVar4;
  wchar32 wVar5;
  long in_FS_OFFSET;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OptionButton::get_selected();
  wVar5 = (wchar32)(CowData<char32_t> *)&local_80;
  OptionButton::get_item_text(wVar5);
  iVar4 = String::find_char(wVar5,0x2f);
  if (iVar4 != -1) {
    String::get_slice((char *)&local_68,wVar5);
    if ((char *)local_80 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_80 = (long)local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  pSVar1 = *(String **)(this + 0xb18);
  local_70 = 0;
  local_68 = "";
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Rename Animation";
  local_78 = 0;
  local_60 = 0x10;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Window::set_title(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "";
  pSVar1 = *(String **)(this + 0xab0);
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Change Animation Name:";
  local_78 = 0;
  local_60 = 0x16;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = (char *)0x0;
  uVar2 = *(undefined8 *)(this + 0xaa0);
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_80);
  }
  LineEdit::set_text(uVar2,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  pVVar3 = *(Vector2i **)(this + 0xb18);
  *(undefined4 *)(this + 0xb28) = 3;
  local_50 = _LC162;
  local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
  Window::popup_centered(pVVar3);
  LineEdit::select_all();
  Control::grab_focus();
  CanvasItem::hide();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_animation_rename() */

void __thiscall AnimationPlayerEditor::_animation_rename(AnimationPlayerEditor *this)

{
  char cVar1;
  
  cVar1 = OptionButton::has_selectable_items();
  if (cVar1 == '\0') {
    return;
  }
  _animation_rename(this);
  return;
}



/* EditorPlugin::initialize_class() [clone .part.0] */

void EditorPlugin::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (Node::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Node";
    local_70 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((code *)PTR__bind_methods_00136010 != Node::_bind_methods) {
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
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Node::_bind_methods) {
    ::EditorPlugin::_bind_methods();
  }
  if ((code *)PTR__bind_compatibility_methods_00136008 != Object::_bind_compatibility_methods) {
    ::EditorPlugin::_bind_compatibility_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationPlayerEditor::_animation_clone(Ref<Animation>) */

undefined8 *
AnimationPlayerEditor::_animation_clone(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  StringName *pSVar1;
  bool *pbVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  Animation *this;
  long lVar6;
  long in_FS_OFFSET;
  long *local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this = (Animation *)operator_new(0x310,"");
  Animation::Animation(this);
  postinitialize_handler((Object *)this);
  *param_1 = this;
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    *param_1 = 0;
  }
  local_78 = (long *)0x0;
  Object::get_property_list
            ((List *)*param_3,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_78,0));
  if (local_78 == (long *)0x0) {
LAB_00107d60:
    plVar3 = (long *)*param_1;
    pcVar4 = *(code **)(*plVar3 + 0x188);
    local_70 = 0;
    local_68 = &_LC8;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    (*pcVar4)(plVar3,(StrRange *)&local_70,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_78);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar6 = *local_78;
joined_r0x00107c7f:
  if (lVar6 != 0) {
    do {
      if ((*(byte *)(lVar6 + 0x28) & 2) != 0) {
        pSVar1 = (StringName *)*param_1;
        pbVar2 = (bool *)*param_3;
        StringName::StringName((StringName *)&local_70,(String *)(lVar6 + 8),false);
        Object::get((StringName *)local_58,pbVar2);
        StringName::StringName((StringName *)&local_68,(String *)(lVar6 + 8),false);
        Object::set(pSVar1,(Variant *)&local_68,(bool *)local_58);
        if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
          StringName::unref();
        }
        if (::Variant::needs_deinit[local_58[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_70 != 0)) goto code_r0x00107d49;
      }
      lVar6 = *(long *)(lVar6 + 0x30);
      if (lVar6 == 0) break;
    } while( true );
  }
  goto LAB_00107d60;
code_r0x00107d49:
  StringName::unref();
  lVar6 = *(long *)(lVar6 + 0x30);
  goto joined_r0x00107c7f;
}



/* AnimationPlayerEditor::_animation_selected(int) */

void AnimationPlayerEditor::_animation_selected(int param_1)

{
  NodePath *pNVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined4 in_register_0000003c;
  AnimationPlayerEditor *this;
  long in_FS_OFFSET;
  float fVar10;
  long local_a0;
  Ref *local_98;
  long local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  this = (AnimationPlayerEditor *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xb2c] != (AnimationPlayerEditor)0x0) goto LAB_00107e3e;
  iVar6 = MenuButton::get_popup();
  iVar7 = MenuButton::get_popup();
  bVar4 = (bool)PopupMenu::get_item_index(iVar7);
  PopupMenu::set_item_disabled(iVar6,bVar4);
  iVar6 = MenuButton::get_popup();
  iVar7 = MenuButton::get_popup();
  bVar4 = (bool)PopupMenu::get_item_index(iVar7);
  PopupMenu::set_item_disabled(iVar6,bVar4);
  iVar6 = MenuButton::get_popup();
  iVar7 = MenuButton::get_popup();
  bVar4 = (bool)PopupMenu::get_item_index(iVar7);
  PopupMenu::set_item_disabled(iVar6,bVar4);
  iVar6 = MenuButton::get_popup();
  iVar7 = MenuButton::get_popup();
  bVar4 = (bool)PopupMenu::get_item_index(iVar7);
  PopupMenu::set_item_disabled(iVar6,bVar4);
  iVar6 = MenuButton::get_popup();
  iVar7 = MenuButton::get_popup();
  bVar4 = (bool)PopupMenu::get_item_index(iVar7);
  PopupMenu::set_item_disabled(iVar6,bVar4);
  _get_current();
  if ((local_a0 == 0) || (*(uint *)(local_a0 + -8) < 2)) {
    local_90 = 0;
    AnimationTrackEditor::set_animation
              (*(Ref **)(this + 0xb30),SUB81((Ref<Animation> *)&local_90,0));
    Ref<Animation>::unref((Ref<Animation> *)&local_90);
    AnimationTrackEditor::set_root(*(Node **)(this + 0xb30));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa68),0));
  }
  else {
    AnimationPlayer::set_assigned_animation(*(String **)(this + 0xa20));
    StringName::StringName((StringName *)&local_90,(String *)&local_a0,false);
    AnimationMixer::get_animation((StringName *)&local_98);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    uVar3 = EditorNode::singleton;
    if (local_98 == (Ref *)0x0) {
      _err_print_error("_animation_selected","editor/plugins/animation_player_editor_plugin.cpp",
                       0x1aa,"Condition \"anim.is_null()\" is true.",0,0);
      Ref<Animation>::unref((Ref<Animation> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      goto LAB_00107e3e;
    }
    local_90 = 0;
    Ref<Resource>::operator=((Ref<Resource> *)&local_90,local_98);
    EditorNode::is_resource_read_only(uVar3,(StringName *)&local_90,0);
    Ref<Resource>::unref((Ref<Resource> *)&local_90);
    AnimationTrackEditor::set_animation(*(Ref **)(this + 0xb30),SUB81((StringName *)&local_98,0));
    pNVar1 = *(NodePath **)(this + 0xa20);
    AnimationMixer::get_root_node();
    lVar8 = Node::get_node_or_null(pNVar1);
    NodePath::~NodePath((NodePath *)&local_90);
    if (lVar8 == 0) {
LAB_001082a0:
      uVar3 = *(undefined8 *)(this + 0xa20);
      get_cached_root_node(this);
      Node::get_path_to((Node *)&local_90,SUB81(uVar3,0));
      lVar8 = Node::get_node_or_null(*(NodePath **)(this + 0xa20));
      if (lVar8 == 0) {
        AnimationMixer::set_root_node(*(NodePath **)(this + 0xa20));
      }
      else {
        AnimationMixer::set_root_node(*(NodePath **)(this + 0xa20));
      }
      NodePath::~NodePath((NodePath *)&local_90);
    }
    else {
      lVar2 = *(long *)(this + 0xa20);
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      lVar9 = SceneTree::get_edited_scene_root();
      if (lVar2 == lVar9) {
        pNVar1 = (NodePath *)(SceneStringNames::singleton + 0x1f0);
        AnimationMixer::get_root_node();
        cVar5 = NodePath::operator==((NodePath *)&local_90,pNVar1);
        NodePath::~NodePath((NodePath *)&local_90);
        if (cVar5 != '\0') goto LAB_001082a0;
      }
      *(undefined8 *)(this + 0xa28) = *(undefined8 *)(lVar8 + 0x60);
      AnimationTrackEditor::set_root(*(Node **)(this + 0xb30));
    }
    fVar10 = (float)Animation::get_length();
    Range::set_max((double)fVar10);
    uVar3 = *(undefined8 *)(this + 0xa68);
    AnimationPlayer::get_autoplay();
    String::operator==((String *)&local_a0,(String *)&local_90);
    BaseButton::set_pressed(SUB81(uVar3,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    AnimationPlayer::stop(SUB81(*(undefined8 *)(this + 0xa20),0));
    Ref<Animation>::unref((Ref<Animation> *)&local_98);
  }
  AnimationTrackEditor::update_keying();
  _animation_key_editor_seek(this,*(float *)(this + 0xae4),false,false);
  local_90 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_a0);
  StringName::StringName((StringName *)&local_98,"animation_selected",false);
  ::Variant::Variant((Variant *)local_78,(String *)&local_90);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  (**(code **)(*(long *)this + 0xd0))(this,(StringName *)&local_98,local_88,1);
  if (::Variant::needs_deinit[(int)local_60] != '\0') {
    ::Variant::_clear_internal();
  }
  if (::Variant::needs_deinit[local_78[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (Ref *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_00107e3e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_select_anim_by_name(String const&) */

void __thiscall
AnimationPlayerEditor::_select_anim_by_name(AnimationPlayerEditor *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  iVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar4 = OptionButton::get_item_count();
    if (iVar4 <= iVar5) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_select_anim_by_name","editor/plugins/animation_player_editor_plugin.cpp",
                         0x239,"Condition \"idx == -1\" is true.",0,0);
        return;
      }
LAB_001084bd:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    OptionButton::get_item_text((int)&local_38);
    cVar3 = String::operator==((String *)&local_38,param_1);
    lVar2 = local_38;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (cVar3 != '\0') {
      OptionButton::select((int)*(undefined8 *)(this + 0xa38));
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _animation_selected((int)this);
        return;
      }
      goto LAB_001084bd;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/* AnimationPlayerEditor::_update_player() */

void __thiscall AnimationPlayerEditor::_update_player(AnimationPlayerEditor *this)

{
  long *plVar1;
  Object *pOVar2;
  String *pSVar3;
  undefined8 uVar4;
  NodePath *pNVar5;
  bool bVar6;
  List *pLVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  Object *pOVar14;
  long lVar15;
  int iVar16;
  long *plVar17;
  StringName *this_00;
  long in_FS_OFFSET;
  int local_98;
  long *local_80;
  List *local_78;
  long *local_70;
  long local_68;
  long local_60;
  Object *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xb2c] = (AnimationPlayerEditor)0x1;
  OptionButton::clear();
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa70),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa88),0));
  _set_controls_disabled(SUB81(this,0));
  if (*(List **)(this + 0xa20) == (List *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AnimationTrackEditor::update_keying();
      return;
    }
    goto LAB_00108dd9;
  }
  local_80 = (long *)0x0;
  AnimationMixer::get_animation_library_list(*(List **)(this + 0xa20));
  iVar16 = (int)this;
  if (local_80 == (long *)0x0) {
    iVar12 = MenuButton::get_popup();
LAB_00108c82:
    iVar13 = MenuButton::get_popup();
    uVar11 = PopupMenu::get_item_index(iVar13);
LAB_00108c9c:
    PopupMenu::set_item_disabled(iVar12,(bool)uVar11);
    _update_animation_list_icons(this);
    this[0xb2c] = (AnimationPlayerEditor)0x0;
    bVar6 = true;
LAB_00108cb7:
    cVar8 = OptionButton::has_selectable_items();
    if (cVar8 == '\0') {
      _animation_selected(iVar16);
    }
    else {
      OptionButton::get_selectable_item(SUB81(*(undefined8 *)(this + 0xa38),0));
      OptionButton::select((int)*(undefined8 *)(this + 0xa38));
      uVar4 = *(undefined8 *)(this + 0xa68);
      AnimationPlayer::get_autoplay();
      OptionButton::get_item_text((int)(String *)&local_60);
      String::operator==((String *)&local_60,(String *)&local_58);
      BaseButton::set_pressed(SUB81(uVar4,0));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      _animation_selected(iVar16);
    }
  }
  else {
    lVar15 = local_80[2];
    this_00 = (StringName *)*local_80;
    if (this_00 == (StringName *)0x0) {
      iVar12 = MenuButton::get_popup();
      if ((int)lVar15 < 1) goto LAB_00108c82;
      iVar13 = MenuButton::get_popup();
      uVar11 = PopupMenu::get_item_index(iVar13);
      goto LAB_00108c9c;
    }
    bVar6 = true;
    local_98 = -1;
    do {
      lVar15 = *(long *)this_00;
      if (lVar15 != 0) {
        pOVar14 = *(Object **)(lVar15 + 8);
        pSVar3 = *(String **)(this + 0xa38);
        local_60 = 0;
        if (pOVar14 == (Object *)0x0) {
          if (*(long *)(lVar15 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar15 + 0x10));
          }
        }
        else {
          local_50 = strlen((char *)pOVar14);
          local_58 = pOVar14;
          String::parse_latin1((StrRange *)&local_60);
        }
        OptionButton::add_separator(pSVar3);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      }
      AnimationMixer::get_animation_library((StringName *)&local_78);
      uVar4 = EditorNode::singleton;
      local_58 = (Object *)0x0;
      if (((local_78 != (List *)0x0) &&
          (pOVar14 = (Object *)__dynamic_cast(local_78,&Object::typeinfo,&Resource::typeinfo,0),
          pOVar14 != (Object *)0x0)) &&
         (local_58 = pOVar14, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
        local_58 = (Object *)0x0;
      }
      cVar8 = EditorNode::is_resource_read_only(uVar4,(String *)&local_58,0);
      if (((local_58 != (Object *)0x0) &&
          (cVar9 = RefCounted::unreference(), pOVar14 = local_58, cVar9 != '\0')) &&
         (cVar9 = predelete_handler(local_58), cVar9 != '\0')) {
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
      }
      if (cVar8 != '\0') {
        StringName::operator==(this_00,"");
      }
      local_70 = (long *)0x0;
      AnimationLibrary::get_animation_list(local_78);
      if ((local_70 != (long *)0x0) && (plVar17 = (long *)*local_70, plVar17 != (long *)0x0)) {
        do {
          lVar15 = *(long *)this_00;
          if (lVar15 == 0) {
            local_68 = 0;
          }
          else {
            pOVar14 = *(Object **)(lVar15 + 8);
            local_68 = 0;
            if (pOVar14 == (Object *)0x0) {
              if (*(long *)(lVar15 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar15 + 0x10));
              }
            }
            else {
              local_50 = strlen((char *)pOVar14);
              local_58 = pOVar14;
              String::parse_latin1((StrRange *)&local_68);
            }
          }
          cVar8 = String::operator!=((String *)&local_68,"");
          if (cVar8 == '\0') {
            lVar15 = *plVar17;
            if (lVar15 == 0) goto LAB_001088cc;
LAB_001087b2:
            pOVar14 = *(Object **)(lVar15 + 8);
            local_60 = 0;
            if (pOVar14 == (Object *)0x0) {
              if (*(long *)(lVar15 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar15 + 0x10));
              }
            }
            else {
              local_50 = strlen((char *)pOVar14);
              local_58 = pOVar14;
              String::parse_latin1((StrRange *)&local_60);
            }
          }
          else {
            String::operator+=((String *)&local_68,"/");
            lVar15 = *plVar17;
            if (lVar15 != 0) goto LAB_001087b2;
LAB_001088cc:
            local_60 = 0;
          }
          String::operator+=((String *)&local_68,(String *)&local_60);
          lVar15 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar15 + -0x10),false);
            }
          }
          OptionButton::add_item(*(String **)(this + 0xa38),(int)(StrRange *)&local_68);
          AnimationPlayer::get_assigned_animation();
          cVar8 = String::operator==((String *)&local_58,(String *)&local_68);
          pOVar14 = local_58;
          if (local_58 != (Object *)0x0) {
            LOCK();
            pOVar2 = local_58 + -0x10;
            *(long *)pOVar2 = *(long *)pOVar2 + -1;
            UNLOCK();
            if (*(long *)pOVar2 == 0) {
              local_58 = (Object *)0x0;
              Memory::free_static(pOVar14 + -0x10,false);
            }
          }
          if (cVar8 != '\0') {
            local_98 = OptionButton::get_selectable_item(SUB81(*(undefined8 *)(this + 0xa38),0));
          }
          lVar15 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar15 + -0x10),false);
            }
          }
          plVar17 = (long *)plVar17[1];
        } while (plVar17 != (long *)0x0);
        bVar6 = false;
      }
      List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_70);
      if (((local_78 != (List *)0x0) &&
          (cVar8 = RefCounted::unreference(), pLVar7 = local_78, cVar8 != '\0')) &&
         (cVar8 = predelete_handler((Object *)local_78), cVar8 != '\0')) {
        (**(code **)(*(long *)pLVar7 + 0x140))(pLVar7);
        Memory::free_static(pLVar7,false);
      }
      this_00 = *(StringName **)(this_00 + 8);
    } while (this_00 != (StringName *)0x0);
    iVar12 = MenuButton::get_popup();
    iVar13 = MenuButton::get_popup();
    bVar10 = (bool)PopupMenu::get_item_index(iVar13);
    PopupMenu::set_item_disabled(iVar12,bVar10);
    _update_animation_list_icons(this);
    this[0xb2c] = (AnimationPlayerEditor)0x0;
    if (local_98 == -1) goto LAB_00108cb7;
    OptionButton::select((int)*(undefined8 *)(this + 0xa38));
    uVar4 = *(undefined8 *)(this + 0xa68);
    AnimationPlayer::get_autoplay();
    OptionButton::get_item_text((int)(String *)&local_60);
    String::operator==((String *)&local_60,(String *)&local_58);
    BaseButton::set_pressed(SUB81(uVar4,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _animation_selected(iVar16);
  }
  if (bVar6) {
    _set_controls_disabled(SUB81(this,0));
  }
  else {
    OptionButton::get_selected();
    OptionButton::get_item_text((int)(CowData<char32_t> *)&local_68);
    StringName::StringName((StringName *)&local_58,(String *)&local_68,false);
    AnimationMixer::get_animation((StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
    uVar4 = EditorNode::singleton;
    local_58 = (Object *)0x0;
    if (((local_60 != 0) &&
        (pOVar14 = (Object *)__dynamic_cast(local_60,&Object::typeinfo,&Resource::typeinfo,0),
        pOVar14 != (Object *)0x0)) &&
       (local_58 = pOVar14, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
      local_58 = (Object *)0x0;
    }
    EditorNode::is_resource_read_only(uVar4,(StringName *)&local_58,0);
    Ref<Resource>::unref((Ref<Resource> *)&local_58);
    AnimationTrackEditor::set_animation(*(Ref **)(this + 0xb30),SUB81((StringName *)&local_60,0));
    pNVar5 = *(NodePath **)(this + 0xa20);
    AnimationMixer::get_root_node();
    lVar15 = Node::get_node_or_null(pNVar5);
    NodePath::~NodePath((NodePath *)&local_58);
    if (lVar15 != 0) {
      AnimationTrackEditor::set_root(*(Node **)(this + 0xb30));
    }
    Ref<Animation>::unref((Ref<Animation> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  _update_animation(this);
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108dd9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00108e77) */
/* WARNING: Removing unreachable block (ram,0x00108ef0) */
/* WARNING: Removing unreachable block (ram,0x00108f00) */
/* AnimationPlayerEditor::_node_removed(Node*) */

void __thiscall AnimationPlayerEditor::_node_removed(AnimationPlayerEditor *this,Node *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xa20) == 0) || (*(Node **)(this + 0xa18) != param_1)) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (this[0xa30] != (AnimationPlayerEditor)0x0) {
      AnimationPlayerEditorPlugin::_clear_dummy_player
                (*(AnimationPlayerEditorPlugin **)(this + 0xa10));
    }
    *(undefined8 *)(this + 0xa20) = 0;
    Node::set_process(SUB81(this,0));
    AnimationTrackEditor::set_animation(*(Ref **)(this + 0xb30),true);
    AnimationTrackEditor::set_root(*(Node **)(this + 0xb30));
    AnimationTrackEditor::show_select_node_warning(SUB81(*(undefined8 *)(this + 0xb30),0));
    _update_player(this);
    _ensure_dummy_player(this);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa88),0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::set_state(Dictionary const&) */

void __thiscall AnimationPlayerEditor::set_state(AnimationPlayerEditor *this,Dictionary *param_1)

{
  Dictionary *pDVar1;
  code *pcVar2;
  StringName *pSVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  Variant *this_00;
  long lVar7;
  NodePath *pNVar8;
  long lVar9;
  long *plVar10;
  long in_FS_OFFSET;
  long local_90;
  long local_88 [2];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ::Variant::Variant((Variant *)local_78,"visible");
  cVar4 = Dictionary::has((Variant *)param_1);
  if (cVar4 == '\0') {
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
  }
  else {
    ::Variant::Variant((Variant *)local_58,"visible");
    this_00 = (Variant *)Dictionary::operator[]((Variant *)param_1);
    bVar5 = ::Variant::operator_cast_to_bool(this_00);
    if (::Variant::needs_deinit[local_58[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (bVar5) {
      lVar7 = EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
      if (lVar7 != 0) {
        ::Variant::Variant((Variant *)local_58,"player");
        cVar4 = Dictionary::has((Variant *)param_1);
        if (::Variant::needs_deinit[local_58[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if (cVar4 != '\0') {
          pNVar8 = (NodePath *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430)
          ;
          ::Variant::Variant((Variant *)local_58,"player");
          Dictionary::operator[]((Variant *)param_1);
          ::Variant::operator_cast_to_NodePath((Variant *)local_88);
          lVar7 = Node::get_node(pNVar8);
          NodePath::~NodePath((NodePath *)local_88);
          if (::Variant::needs_deinit[local_58[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          if (lVar7 != 0) {
            lVar9 = __dynamic_cast(lVar7,&Object::typeinfo,&AnimationPlayer::typeinfo,0);
            if (lVar9 != 0) {
              cVar4 = EditorSelection::is_selected(*(Node **)(EditorNode::singleton + 0x608));
              if (cVar4 != '\0') {
                plVar10 = *(long **)(this + 0xa20);
                if (plVar10 != (long *)0x0) {
                  pcVar2 = *(code **)(*plVar10 + 0x118);
                  create_custom_callable_function_pointer<AnimationPlayerEditor>
                            ((AnimationPlayerEditor *)local_88,(char *)this,
                             (_func_void *)"&AnimationPlayerEditor::_animation_libraries_updated");
                  if (set_state(Dictionary_const&)::{lambda()#1}::operator()()::sname == '\0') {
                    iVar6 = __cxa_guard_acquire(&set_state(Dictionary_const&)::{lambda()#1}::
                                                 operator()()::sname);
                    if (iVar6 != 0) {
                      _scs_create((char *)&set_state(Dictionary_const&)::{lambda()#1}::operator()()
                                           ::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &set_state(Dictionary_const&)::{lambda()#1}::operator()()::sname,
                                   &__dso_handle);
                      __cxa_guard_release(&set_state(Dictionary_const&)::{lambda()#1}::operator()()
                                           ::sname);
                    }
                  }
                  cVar4 = (*pcVar2)(plVar10,&set_state(Dictionary_const&)::{lambda()#1}::
                                             operator()()::sname,(Variant *)local_88);
                  Callable::~Callable((Callable *)local_88);
                  if (cVar4 != '\0') {
                    plVar10 = *(long **)(this + 0xa20);
                    pcVar2 = *(code **)(*plVar10 + 0x110);
                    create_custom_callable_function_pointer<AnimationPlayerEditor>
                              ((AnimationPlayerEditor *)local_88,(char *)this,
                               (_func_void *)"&AnimationPlayerEditor::_animation_libraries_updated")
                    ;
                    if (set_state(Dictionary_const&)::{lambda()#2}::operator()()::sname == '\0') {
                      iVar6 = __cxa_guard_acquire(&set_state(Dictionary_const&)::{lambda()#2}::
                                                   operator()()::sname);
                      if (iVar6 != 0) {
                        _scs_create((char *)&set_state(Dictionary_const&)::{lambda()#2}::
                                             operator()()::sname,true);
                        __cxa_atexit(StringName::~StringName,
                                     &set_state(Dictionary_const&)::{lambda()#2}::operator()()::
                                      sname,&__dso_handle);
                        __cxa_guard_release(&set_state(Dictionary_const&)::{lambda()#2}::
                                             operator()()::sname);
                      }
                    }
                    (*pcVar2)(plVar10,&set_state(Dictionary_const&)::{lambda()#2}::operator()()::
                                       sname,(Variant *)local_88);
                    Callable::~Callable((Callable *)local_88);
                  }
                  plVar10 = *(long **)(this + 0xa20);
                  pcVar2 = *(code **)(*plVar10 + 0x118);
                  create_custom_callable_function_pointer<AnimationPlayerEditor,String_const&>
                            ((AnimationPlayerEditor *)local_88,(char *)this,
                             (_func_void_String_ptr *)
                             "&AnimationPlayerEditor::_current_animation_changed");
                  if (set_state(Dictionary_const&)::{lambda()#3}::operator()()::sname == '\0') {
                    iVar6 = __cxa_guard_acquire(&set_state(Dictionary_const&)::{lambda()#3}::
                                                 operator()()::sname);
                    if (iVar6 != 0) {
                      _scs_create((char *)&set_state(Dictionary_const&)::{lambda()#3}::operator()()
                                           ::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &set_state(Dictionary_const&)::{lambda()#3}::operator()()::sname,
                                   &__dso_handle);
                      __cxa_guard_release(&set_state(Dictionary_const&)::{lambda()#3}::operator()()
                                           ::sname);
                    }
                  }
                  cVar4 = (*pcVar2)(plVar10,&set_state(Dictionary_const&)::{lambda()#3}::
                                             operator()()::sname,(Variant *)local_88);
                  Callable::~Callable((Callable *)local_88);
                  if (cVar4 != '\0') {
                    plVar10 = *(long **)(this + 0xa20);
                    pcVar2 = *(code **)(*plVar10 + 0x110);
                    create_custom_callable_function_pointer<AnimationPlayerEditor,String_const&>
                              ((AnimationPlayerEditor *)local_88,(char *)this,
                               (_func_void_String_ptr *)
                               "&AnimationPlayerEditor::_current_animation_changed");
                    if (set_state(Dictionary_const&)::{lambda()#4}::operator()()::sname == '\0') {
                      iVar6 = __cxa_guard_acquire(&set_state(Dictionary_const&)::{lambda()#4}::
                                                   operator()()::sname);
                      if (iVar6 != 0) {
                        _scs_create((char *)&set_state(Dictionary_const&)::{lambda()#4}::
                                             operator()()::sname,true);
                        __cxa_atexit(StringName::~StringName,
                                     &set_state(Dictionary_const&)::{lambda()#4}::operator()()::
                                      sname,&__dso_handle);
                        __cxa_guard_release(&set_state(Dictionary_const&)::{lambda()#4}::
                                             operator()()::sname);
                      }
                    }
                    (*pcVar2)(plVar10,&set_state(Dictionary_const&)::{lambda()#4}::operator()()::
                                       sname,(Variant *)local_88);
                    Callable::~Callable((Callable *)local_88);
                  }
                }
                plVar10 = (long *)__dynamic_cast(lVar7,&Object::typeinfo,&AnimationPlayer::typeinfo,
                                                 0);
                *(long **)(this + 0xa20) = plVar10;
                if (plVar10 != (long *)0x0) {
                  pcVar2 = *(code **)(*plVar10 + 0x118);
                  create_custom_callable_function_pointer<AnimationPlayerEditor>
                            ((AnimationPlayerEditor *)local_88,(char *)this,
                             (_func_void *)"&AnimationPlayerEditor::_animation_libraries_updated");
                  if (set_state(Dictionary_const&)::{lambda()#5}::operator()()::sname == '\0') {
                    iVar6 = __cxa_guard_acquire(&set_state(Dictionary_const&)::{lambda()#5}::
                                                 operator()()::sname);
                    if (iVar6 != 0) {
                      _scs_create((char *)&set_state(Dictionary_const&)::{lambda()#5}::operator()()
                                           ::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &set_state(Dictionary_const&)::{lambda()#5}::operator()()::sname,
                                   &__dso_handle);
                      __cxa_guard_release(&set_state(Dictionary_const&)::{lambda()#5}::operator()()
                                           ::sname);
                    }
                  }
                  cVar4 = (*pcVar2)(plVar10,&set_state(Dictionary_const&)::{lambda()#5}::
                                             operator()()::sname,(Variant *)local_88);
                  Callable::~Callable((Callable *)local_88);
                  if (cVar4 == '\0') {
                    plVar10 = *(long **)(this + 0xa20);
                    pcVar2 = *(code **)(*plVar10 + 0x108);
                    create_custom_callable_function_pointer<AnimationPlayerEditor>
                              ((AnimationPlayerEditor *)local_88,(char *)this,
                               (_func_void *)"&AnimationPlayerEditor::_animation_libraries_updated")
                    ;
                    if (set_state(Dictionary_const&)::{lambda()#6}::operator()()::sname == '\0') {
                      iVar6 = __cxa_guard_acquire(&set_state(Dictionary_const&)::{lambda()#6}::
                                                   operator()()::sname);
                      if (iVar6 != 0) {
                        _scs_create((char *)&set_state(Dictionary_const&)::{lambda()#6}::
                                             operator()()::sname,true);
                        __cxa_atexit(StringName::~StringName,
                                     &set_state(Dictionary_const&)::{lambda()#6}::operator()()::
                                      sname,&__dso_handle);
                        __cxa_guard_release(&set_state(Dictionary_const&)::{lambda()#6}::
                                             operator()()::sname);
                      }
                    }
                    (*pcVar2)(plVar10,&set_state(Dictionary_const&)::{lambda()#6}::operator()()::
                                       sname,(Variant *)local_88,1);
                    Callable::~Callable((Callable *)local_88);
                  }
                  plVar10 = *(long **)(this + 0xa20);
                  pcVar2 = *(code **)(*plVar10 + 0x118);
                  create_custom_callable_function_pointer<AnimationPlayerEditor,String_const&>
                            ((AnimationPlayerEditor *)local_88,(char *)this,
                             (_func_void_String_ptr *)
                             "&AnimationPlayerEditor::_current_animation_changed");
                  if (set_state(Dictionary_const&)::{lambda()#7}::operator()()::sname == '\0') {
                    iVar6 = __cxa_guard_acquire(&set_state(Dictionary_const&)::{lambda()#7}::
                                                 operator()()::sname);
                    if (iVar6 != 0) {
                      _scs_create((char *)&set_state(Dictionary_const&)::{lambda()#7}::operator()()
                                           ::sname,true);
                      __cxa_atexit(StringName::~StringName,
                                   &set_state(Dictionary_const&)::{lambda()#7}::operator()()::sname,
                                   &__dso_handle);
                      __cxa_guard_release(&set_state(Dictionary_const&)::{lambda()#7}::operator()()
                                           ::sname);
                    }
                  }
                  cVar4 = (*pcVar2)(plVar10,&set_state(Dictionary_const&)::{lambda()#7}::
                                             operator()()::sname,(Variant *)local_88);
                  Callable::~Callable((Callable *)local_88);
                  if (cVar4 == '\0') {
                    plVar10 = *(long **)(this + 0xa20);
                    pcVar2 = *(code **)(*plVar10 + 0x108);
                    create_custom_callable_function_pointer<AnimationPlayerEditor,String_const&>
                              ((AnimationPlayerEditor *)local_88,(char *)this,
                               (_func_void_String_ptr *)
                               "&AnimationPlayerEditor::_current_animation_changed");
                    if (set_state(Dictionary_const&)::{lambda()#8}::operator()()::sname == '\0') {
                      iVar6 = __cxa_guard_acquire(&set_state(Dictionary_const&)::{lambda()#8}::
                                                   operator()()::sname);
                      if (iVar6 != 0) {
                        _scs_create((char *)&set_state(Dictionary_const&)::{lambda()#8}::
                                             operator()()::sname,true);
                        __cxa_atexit(StringName::~StringName,
                                     &set_state(Dictionary_const&)::{lambda()#8}::operator()()::
                                      sname,&__dso_handle);
                        __cxa_guard_release(&set_state(Dictionary_const&)::{lambda()#8}::
                                             operator()()::sname);
                      }
                    }
                    (*pcVar2)(plVar10,&set_state(Dictionary_const&)::{lambda()#8}::operator()()::
                                       sname,(Variant *)local_88,0);
                    Callable::~Callable((Callable *)local_88);
                  }
                }
                _update_player(this);
                EditorBottomPanel::make_item_visible
                          (*(Control **)(EditorNode::singleton + 0xa40),SUB81(this,0),true);
                Node::set_process(SUB81(this,0));
                if (*(long *)(this + 0xa20) == 0) {
                  _animation_edit(this);
                }
                ::Variant::Variant((Variant *)local_58,"animation");
                cVar4 = Dictionary::has((Variant *)param_1);
                if (::Variant::needs_deinit[local_58[0]] != '\0') {
                  ::Variant::_clear_internal();
                }
                if (cVar4 != '\0') {
                  ::Variant::Variant((Variant *)local_58,"animation");
                  Dictionary::operator[]((Variant *)param_1);
                  ::Variant::operator_cast_to_String((Variant *)&local_90);
                  if (::Variant::needs_deinit[local_58[0]] != '\0') {
                    ::Variant::_clear_internal();
                  }
                  if ((local_90 != 0) && (1 < *(uint *)(local_90 + -8))) {
                    pSVar3 = *(StringName **)(this + 0xa20);
                    StringName::StringName((StringName *)local_88,(String *)&local_90,false);
                    cVar4 = AnimationMixer::has_animation(pSVar3);
                    if ((StringName::configured != '\0') && (local_88[0] != 0)) {
                      StringName::unref();
                    }
                    if (cVar4 != '\0') {
                      _select_anim_by_name(this,(String *)&local_90);
                      _animation_edit(this);
                    }
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                }
              }
            }
          }
        }
        ::Variant::Variant((Variant *)local_58,"track_editor_state");
        cVar4 = Dictionary::has((Variant *)param_1);
        if (::Variant::needs_deinit[local_58[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if (cVar4 != '\0') {
          pDVar1 = *(Dictionary **)(this + 0xb30);
          ::Variant::Variant((Variant *)local_58,"track_editor_state");
          Dictionary::operator[]((Variant *)param_1);
          ::Variant::operator_cast_to_Dictionary((Variant *)local_88);
          AnimationTrackEditor::set_state(pDVar1);
          Dictionary::~Dictionary((Dictionary *)local_88);
          if (::Variant::needs_deinit[local_58[0]] != '\0') {
            ::Variant::_clear_internal();
          }
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



/* AnimationPlayerEditor::_animation_player_changed(Object*) */

void AnimationPlayerEditor::_animation_player_changed(Object *param_1)

{
  char cVar1;
  
  _update_player((AnimationPlayerEditor *)param_1);
  cVar1 = Window::is_visible();
  if ((cVar1 != '\0') && (param_1[0xb2d] == (Object)0x0)) {
    cVar1 = OptionButton::has_selectable_items();
    if (cVar1 != '\0') {
      _update_animation_blend((AnimationPlayerEditor *)param_1);
    }
  }
  cVar1 = Window::is_visible();
  if (cVar1 == '\0') {
    return;
  }
  AnimationLibraryEditor::update_tree();
  return;
}



/* AnimationPlayerEditor::_animation_libraries_updated() */

void __thiscall AnimationPlayerEditor::_animation_libraries_updated(AnimationPlayerEditor *this)

{
  _animation_player_changed((Object *)this);
  return;
}



/* AnimationPlayerEditor::_list_changed() */

void __thiscall AnimationPlayerEditor::_list_changed(AnimationPlayerEditor *this)

{
  char cVar1;
  
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 == '\0') {
    return;
  }
  _update_player(this);
  return;
}



/* AnimationPlayerEditorPlugin::_update_dummy_player(AnimationMixer*) */

void __thiscall
AnimationPlayerEditorPlugin::_update_dummy_player
          (AnimationPlayerEditorPlugin *this,AnimationMixer *param_1)

{
  String *this_00;
  StringName *pSVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  AnimationMixer *this_01;
  long lVar5;
  AnimationPlayer *this_02;
  long in_FS_OFFSET;
  long *local_78;
  long local_70;
  long local_68 [2];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x678) == *(long *)(param_1 + 0x60)) {
LAB_00109bc7:
    lVar5 = *(long *)(this + 0x670);
    if (lVar5 == 0) {
      lVar5 = Node::get_parent();
      if (lVar5 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _err_print_error("_update_dummy_player",
                           "editor/plugins/animation_player_editor_plugin.cpp",0x93a,
                           "Parameter \"parent\" is null.",0,0);
          return;
        }
        goto LAB_0010a001;
      }
      this_02 = (AnimationPlayer *)operator_new(0x6b0,"");
      AnimationPlayer::AnimationPlayer(this_02);
      postinitialize_handler((Object *)this_02);
      *(AnimationPlayer **)(this + 0x670) = this_02;
      AnimationMixer::set_active(SUB81(this_02,0));
      Node::add_child(lVar5,*(undefined8 *)(this + 0x670),0,0);
      lVar5 = *(long *)(this + 0x670);
    }
    *(long *)(this + 0x668) = lVar5;
    this_01 = (AnimationMixer *)operator_new(0x5d0,"");
    AnimationMixer::AnimationMixer(this_01);
    postinitialize_handler((Object *)this_01);
    local_78 = (long *)0x0;
    Object::get_property_list
              ((List *)this_01,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_78,0));
    if (local_78 != (long *)0x0) {
      for (lVar5 = *local_78; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x30)) {
        if ((*(byte *)(lVar5 + 0x28) & 2) != 0) {
          this_00 = (String *)(lVar5 + 8);
          cVar3 = String::operator!=(this_00,"script");
          if ((((cVar3 != '\0') && (cVar3 = String::operator!=(this_00,"active"), cVar3 != '\0')) &&
              (cVar3 = String::operator!=(this_00,"deterministic"), cVar3 != '\0')) &&
             (cVar3 = String::operator!=(this_00,"root_motion_track"), cVar3 != '\0')) {
            pSVar1 = *(StringName **)(this + 0x670);
            StringName::StringName((StringName *)&local_70,this_00,false);
            Object::get((StringName *)local_58,(bool *)param_1);
            StringName::StringName((StringName *)local_68,this_00,false);
            Object::set(pSVar1,(Variant *)local_68,(bool *)local_58);
            if ((StringName::configured != '\0') && (local_68[0] != 0)) {
              StringName::unref();
            }
            if (::Variant::needs_deinit[local_58[0]] != '\0') {
              ::Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_70 != 0)) {
              StringName::unref();
            }
          }
        }
      }
    }
    cVar3 = predelete_handler((Object *)this_01);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)this_01 + 0x140))(this_01);
      Memory::free_static(this_01,false);
    }
    if (*(AnimationPlayerEditor **)(this + 0x660) != (AnimationPlayerEditor *)0x0) {
      AnimationPlayerEditor::_update_player(*(AnimationPlayerEditor **)(this + 0x660));
    }
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_78);
  }
  else {
    pcVar2 = *(code **)(*(long *)param_1 + 0x118);
    create_custom_callable_function_pointer<AnimationPlayerEditorPlugin,AnimationMixer*>
              ((AnimationPlayerEditorPlugin *)local_68,(char *)this,
               (_func_void_AnimationMixer_ptr *)"&AnimationPlayerEditorPlugin::_update_dummy_player"
              );
    if ((_update_dummy_player(AnimationMixer*)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&_update_dummy_player(AnimationMixer*)::{lambda()#1}::
                                     operator()()::sname), iVar4 != 0)) {
      _scs_create((char *)&_update_dummy_player(AnimationMixer*)::{lambda()#1}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &_update_dummy_player(AnimationMixer*)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_dummy_player(AnimationMixer*)::{lambda()#1}::operator()()::sname)
      ;
    }
    cVar3 = (*pcVar2)(param_1,&_update_dummy_player(AnimationMixer*)::{lambda()#1}::operator()()::
                               sname,(AnimationPlayerEditorPlugin *)local_68);
    if (cVar3 == '\0') {
      Callable::~Callable((Callable *)local_68);
      goto LAB_00109bc7;
    }
    Callable::~Callable((Callable *)local_68);
    pcVar2 = *(code **)(*(long *)param_1 + 0x110);
    create_custom_callable_function_pointer<AnimationPlayerEditorPlugin,AnimationMixer*>
              ((AnimationPlayerEditorPlugin *)local_68,(char *)this,
               (_func_void_AnimationMixer_ptr *)"&AnimationPlayerEditorPlugin::_update_dummy_player"
              );
    if ((_update_dummy_player(AnimationMixer*)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&_update_dummy_player(AnimationMixer*)::{lambda()#2}::
                                     operator()()::sname), iVar4 != 0)) {
      _scs_create((char *)&_update_dummy_player(AnimationMixer*)::{lambda()#2}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &_update_dummy_player(AnimationMixer*)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_dummy_player(AnimationMixer*)::{lambda()#2}::operator()()::sname)
      ;
    }
    (*pcVar2)(param_1,&_update_dummy_player(AnimationMixer*)::{lambda()#2}::operator()()::sname,
              (AnimationPlayerEditorPlugin *)local_68);
    Callable::~Callable((Callable *)local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a001:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_current_animation_changed(String const&) */

void __thiscall
AnimationPlayerEditor::_current_animation_changed(AnimationPlayerEditor *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  Object *pOVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long in_FS_OFFSET;
  Ref *local_88;
  long *local_80;
  Object *local_78;
  long *local_70;
  undefined8 local_68;
  long local_60;
  Object *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = CanvasItem::is_visible_in_tree();
  if (cVar3 != '\0') {
    if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
      Range::set_value(0.0);
      AnimationTrackEditor::set_anim_pos(0.0);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_animation(this);
        return;
      }
      goto LAB_0010a68c;
    }
    StringName::StringName((StringName *)&local_58,param_1,false);
    AnimationMixer::get_animation((StringName *)&local_88);
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
    if (local_88 != (Ref *)0x0) {
      local_80 = (long *)0x0;
      AnimationMixer::get_animation_library_list(*(List **)(this + 0xa20));
      if ((local_80 != (long *)0x0) && (plVar10 = (long *)*local_80, plVar10 != (long *)0x0)) {
        do {
          AnimationMixer::get_animation_library((StringName *)&local_78);
          uVar2 = EditorNode::singleton;
          local_58 = (Object *)0x0;
          if (((local_78 != (Object *)0x0) &&
              (pOVar7 = (Object *)__dynamic_cast(local_78,&Object::typeinfo,&Resource::typeinfo,0),
              pOVar7 != (Object *)0x0)) &&
             (local_58 = pOVar7, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
            local_58 = (Object *)0x0;
          }
          EditorNode::is_resource_read_only(uVar2,(StringName *)&local_58,0);
          if (((local_58 != (Object *)0x0) &&
              (cVar3 = RefCounted::unreference(), pOVar7 = local_58, cVar3 != '\0')) &&
             (cVar3 = predelete_handler(local_58), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
          local_70 = (long *)0x0;
          AnimationLibrary::get_animation_list((List *)local_78);
          if ((local_70 != (long *)0x0) && (plVar8 = (long *)*local_70, plVar8 != (long *)0x0)) {
            do {
              lVar9 = *plVar10;
              if (lVar9 == 0) {
                local_68 = 0;
              }
              else {
                pOVar7 = *(Object **)(lVar9 + 8);
                local_68 = 0;
                if (pOVar7 == (Object *)0x0) {
                  if (*(long *)(lVar9 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_68,(CowData *)(lVar9 + 0x10));
                  }
                }
                else {
                  local_50 = strlen((char *)pOVar7);
                  local_58 = pOVar7;
                  String::parse_latin1((StrRange *)&local_68);
                }
              }
              cVar3 = String::operator!=((String *)&local_68,"");
              if (cVar3 == '\0') {
                lVar9 = *plVar8;
                if (lVar9 != 0) goto LAB_0010a4ad;
LAB_0010a5ad:
                local_60 = 0;
              }
              else {
                String::operator+=((String *)&local_68,"/");
                lVar9 = *plVar8;
                if (lVar9 == 0) goto LAB_0010a5ad;
LAB_0010a4ad:
                pOVar7 = *(Object **)(lVar9 + 8);
                local_60 = 0;
                if (pOVar7 == (Object *)0x0) {
                  if (*(long *)(lVar9 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_60,(CowData *)(lVar9 + 0x10));
                  }
                }
                else {
                  local_50 = strlen((char *)pOVar7);
                  local_58 = pOVar7;
                  String::parse_latin1((StrRange *)&local_60);
                }
              }
              String::operator+=((String *)&local_68,(String *)&local_60);
              lVar9 = local_60;
              if (local_60 != 0) {
                LOCK();
                plVar1 = (long *)(local_60 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void *)(lVar9 + -0x10),false);
                }
              }
              cVar3 = String::operator==(param_1,(String *)&local_68);
              if (cVar3 != '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                break;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              plVar8 = (long *)plVar8[1];
            } while (plVar8 != (long *)0x0);
          }
          List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_70);
          if (((local_78 != (Object *)0x0) &&
              (cVar3 = RefCounted::unreference(), pOVar7 = local_78, cVar3 != '\0')) &&
             (cVar3 = predelete_handler(local_78), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
          plVar10 = (long *)plVar10[1];
        } while (plVar10 != (long *)0x0);
      }
      AnimationMixer::find_animation_library((Ref *)&local_60);
      uVar2 = EditorNode::singleton;
      local_58 = (Object *)0x0;
      Ref<Resource>::operator=((Ref<Resource> *)&local_58,local_88);
      EditorNode::is_resource_read_only(uVar2,(StringName *)&local_58,0);
      Ref<Resource>::unref((Ref<Resource> *)&local_58);
      AnimationTrackEditor::set_animation(*(Ref **)(this + 0xb30),SUB81((StringName *)&local_88,0));
      _update_animation(this);
      iVar5 = MenuButton::get_popup();
      iVar6 = MenuButton::get_popup();
      bVar4 = (bool)PopupMenu::get_item_index(iVar6);
      PopupMenu::set_item_disabled(iVar5,bVar4);
      iVar5 = MenuButton::get_popup();
      iVar6 = MenuButton::get_popup();
      bVar4 = (bool)PopupMenu::get_item_index(iVar6);
      PopupMenu::set_item_disabled(iVar5,bVar4);
      iVar5 = MenuButton::get_popup();
      iVar6 = MenuButton::get_popup();
      bVar4 = (bool)PopupMenu::get_item_index(iVar6);
      PopupMenu::set_item_disabled(iVar5,bVar4);
      iVar5 = MenuButton::get_popup();
      iVar6 = MenuButton::get_popup();
      bVar4 = (bool)PopupMenu::get_item_index(iVar6);
      PopupMenu::set_item_disabled(iVar5,bVar4);
      iVar5 = MenuButton::get_popup();
      iVar6 = MenuButton::get_popup();
      bVar4 = (bool)PopupMenu::get_item_index(iVar6);
      PopupMenu::set_item_disabled(iVar5,bVar4);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_80);
    }
    Ref<Animation>::unref((Ref<Animation> *)&local_88);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010a68c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::AnimationPlayerEditor(AnimationPlayerEditorPlugin*) */

void __thiscall
AnimationPlayerEditor::AnimationPlayerEditor
          (AnimationPlayerEditor *this,AnimationPlayerEditorPlugin *param_1)

{
  Vector2 *pVVar1;
  code *pcVar2;
  StringName *pSVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  BoxContainer *pBVar8;
  BoxContainer *pBVar9;
  Button *pBVar10;
  SpinBox *this_00;
  VSeparator *pVVar11;
  LineEdit *pLVar12;
  ConfirmationDialog *pCVar13;
  MenuButton *pMVar14;
  Ref *pRVar15;
  String *pSVar16;
  OptionButton *pOVar17;
  AnimationTrackEditor *this_01;
  undefined8 uVar18;
  EditorFileDialog *this_02;
  Label *this_03;
  AcceptDialog *pAVar19;
  Tree *this_04;
  CallableCustom *pCVar20;
  AnimationLibraryEditor *this_05;
  long *plVar21;
  ShaderMaterial *this_06;
  Object *pOVar22;
  undefined8 uVar23;
  int iVar24;
  long in_FS_OFFSET;
  float fVar25;
  String local_b0 [8];
  undefined8 local_a8 [2];
  long local_98 [2];
  Variant *local_88;
  undefined8 local_78 [3];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_0012c1c0;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xab8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xae8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb18) = (undefined1  [16])0x0;
  *(undefined2 *)(this + 0xb38) = 0x100;
  *(undefined2 *)(this + 0xb40) = 0;
  *(undefined2 *)(this + 0xb2c) = 0;
  this[0xa0c] = (AnimationPlayerEditor)0x1;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined8 *)(this + 0xa28) = 0;
  this[0xa30] = (AnimationPlayerEditor)0x0;
  *(undefined8 *)(this + 0xad8) = 0;
  this[0xae0] = (AnimationPlayerEditor)0x0;
  *(undefined4 *)(this + 0xae4) = 0;
  *(undefined4 *)(this + 0xb28) = 0;
  *(undefined8 *)(this + 0xb30) = 0;
  this[0xb3a] = (AnimationPlayerEditor)0x0;
  *(undefined4 *)(this + 0xb3c) = 1;
  this[0xb42] = (AnimationPlayerEditor)0x0;
  *(undefined8 *)(this + 0xb48) = 0;
  *(undefined4 *)(this + 0xb50) = 0;
  *(undefined8 *)(this + 0xb54) = 0;
  *(undefined8 *)(this + 0xb60) = 0;
  *(undefined8 *)(this + 0xb68) = 0;
  *(undefined8 *)(this + 0xb70) = 0;
  *(undefined8 *)(this + 0xb78) = 0;
  *(undefined8 *)(this + 0xba0) = 0;
  *(undefined8 *)(this + 0xba8) = 0;
  *(undefined8 *)(this + 0xbb0) = 0;
  *(undefined8 *)(this + 3000) = 0;
  *(undefined1 (*) [16])(this + 0xb80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb90) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this + 0xbc0));
  Dictionary::Dictionary((Dictionary *)(this + 0xbc8));
  *(AnimationPlayerEditorPlugin **)(this + 0xa10) = param_1;
  singleton = this;
  Control::set_focus_mode(this,2);
  Node::set_process_shortcut_input(SUB81(this,0));
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,false);
  *(undefined ***)pBVar8 = &PTR__initialize_classv_0012b970;
  pBVar8[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(this,pBVar8,0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,false);
  *(undefined ***)pBVar9 = &PTR__initialize_classv_0012b970;
  pBVar9[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar9);
  Control::set_layout_direction(pBVar9,2);
  Node::add_child(pBVar8,pBVar9,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar10,(String *)local_98);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa60) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa60));
  pSVar16 = *(String **)(this + 0xa60);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Play Animation Backwards");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xa60),0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar10,(String *)local_98);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa58) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa58));
  pSVar16 = *(String **)(this + 0xa58);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Play Animation Backwards from End");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xa58),0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar10,(String *)local_98);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa40) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa40));
  pSVar16 = *(String **)(this + 0xa40);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Pause/Stop Animation");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xa40),0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar10,(String *)local_98);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa48) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa48));
  pSVar16 = *(String **)(this + 0xa48);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Play Animation from Start");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xa48),0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar10,(String *)local_98);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa50) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa50));
  pSVar16 = *(String **)(this + 0xa50);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Play Animation");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xa50),0,0);
  this_00 = (SpinBox *)operator_new(0xba8,"");
  SpinBox::SpinBox(this_00);
  postinitialize_handler((Object *)this_00);
  *(SpinBox **)(this + 0xa90) = this_00;
  Node::add_child(pBVar8,this_00,0,0);
  pVVar1 = *(Vector2 **)(this + 0xa90);
  fVar25 = (float)EditorScale::get_scale();
  local_78[0] = CONCAT44(fVar25 * _LC193._4_4_,fVar25 * (float)_LC193);
  Control::set_custom_minimum_size(pVVar1);
  Control::set_stretch_ratio(_LC194);
  Range::set_step(_LC195);
  pSVar16 = *(String **)(this + 0xa90);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Animation position (in seconds).");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pVVar11 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar11);
  postinitialize_handler((Object *)pVVar11);
  Node::add_child(pBVar8,pVVar11,0,0);
  pLVar12 = (LineEdit *)operator_new(0xbb0,"");
  local_98[0] = 0;
  LineEdit::LineEdit(pLVar12,(String *)local_98);
  postinitialize_handler((Object *)pLVar12);
  *(LineEdit **)(this + 0xa98) = pLVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa98),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa98),3);
  Control::set_stretch_ratio(_LC2);
  pSVar16 = *(String **)(this + 0xa98);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Scale animation playback globally for the node.");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CanvasItem::hide();
  pCVar13 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar13);
  postinitialize_handler((Object *)pCVar13);
  *(ConfirmationDialog **)(this + 0xaf0) = pCVar13;
  Node::add_child(this,pCVar13,0,0);
  plVar21 = *(long **)(this + 0xaf0);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void *)"&AnimationPlayerEditor::_animation_remove_confirmed");
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)local_98);
  Callable::~Callable((Callable *)local_98);
  pMVar14 = (MenuButton *)operator_new(0xc68,"");
  local_98[0] = 0;
  MenuButton::MenuButton(pMVar14,(String *)local_98);
  postinitialize_handler((Object *)pMVar14);
  *(MenuButton **)(this + 0xa70) = pMVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Control::set_shortcut_context(*(Node **)(this + 0xa70));
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa70),0));
  pSVar16 = *(String **)(this + 0xa70);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Animation Tools");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar16 = *(String **)(this + 0xa70);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Animation");
  TTR(local_b0,(String *)local_a8);
  Button::set_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pRVar15 = (Ref *)MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"New...");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_player_editor/new_animation");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0,0);
  iVar7 = (int)local_b0;
  PopupMenu::add_shortcut(pRVar15,iVar7,false,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar16 = (String *)MenuButton::get_popup();
  local_98[0] = 0;
  iVar24 = (int)(CowData<char32_t> *)local_98;
  PopupMenu::add_separator(pSVar16,iVar24);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pRVar15 = (Ref *)MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Manage Animations...");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_player_editor/animation_libraries");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0,0);
  PopupMenu::add_shortcut(pRVar15,iVar7,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar16 = (String *)MenuButton::get_popup();
  local_98[0] = 0;
  PopupMenu::add_separator(pSVar16,iVar24);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pRVar15 = (Ref *)MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Duplicate...");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_player_editor/duplicate_animation");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0,0);
  PopupMenu::add_shortcut(pRVar15,iVar7,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar16 = (String *)MenuButton::get_popup();
  local_98[0] = 0;
  PopupMenu::add_separator(pSVar16,iVar24);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pRVar15 = (Ref *)MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Rename...");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_player_editor/rename_animation");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0,0);
  PopupMenu::add_shortcut(pRVar15,iVar7,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pRVar15 = (Ref *)MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Edit Transitions...");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_player_editor/edit_transitions");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0,0);
  PopupMenu::add_shortcut(pRVar15,iVar7,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pRVar15 = (Ref *)MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Open in Inspector");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_player_editor/open_animation_in_inspector");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0,0);
  PopupMenu::add_shortcut(pRVar15,iVar7,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar16 = (String *)MenuButton::get_popup();
  local_98[0] = 0;
  PopupMenu::add_separator(pSVar16,iVar24);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pRVar15 = (Ref *)MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Remove");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_player_editor/remove_animation");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0,0);
  PopupMenu::add_shortcut(pRVar15,iVar7,true,false);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa70),0));
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa70),0,0);
  pOVar17 = (OptionButton *)operator_new(0xd00,"");
  local_98[0] = 0;
  OptionButton::OptionButton(pOVar17,(String *)local_98);
  postinitialize_handler((Object *)pOVar17);
  *(OptionButton **)(this + 0xa38) = pOVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa38),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa38),3);
  pSVar16 = *(String **)(this + 0xa38);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Display list of animations in player.");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xa38),0));
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xa38),2);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar10,(String *)local_98);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa68) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa68));
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa68),0,0);
  pSVar16 = *(String **)(this + 0xa68);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Autoplay on Load");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pVVar11 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar11);
  postinitialize_handler((Object *)pVVar11);
  Node::add_child(pBVar8,pVVar11,0,0);
  this_01 = (AnimationTrackEditor *)operator_new(0xd08,"");
  AnimationTrackEditor::AnimationTrackEditor(this_01);
  postinitialize_handler((Object *)this_01);
  *(AnimationTrackEditor **)(this + 0xb30) = this_01;
  uVar18 = AnimationTrackEditor::get_edit_menu();
  Node::add_child(pBVar8,uVar18,0,0);
  pVVar11 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar11);
  postinitialize_handler((Object *)pVVar11);
  Node::add_child(pBVar8,pVVar11,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar10,(String *)local_98);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa78) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa78));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa78),0));
  pSVar16 = *(String **)(this + 0xa78);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Enable Onion Skinning");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar21 = *(long **)(this + 0xa78);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor,int>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void_int *)"&AnimationPlayerEditor::_onion_skinning_menu");
  ::Variant::Variant((Variant *)local_78,0);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)local_78;
  Callable::bindp((Variant **)local_a8,iVar24);
  if (::Variant::needs_deinit[(int)local_60] != '\0') {
    ::Variant::_clear_internal();
  }
  if (::Variant::needs_deinit[(int)local_78[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x238,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)local_98);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa78),0,0);
  pMVar14 = (MenuButton *)operator_new(0xc68,"");
  local_98[0] = 0;
  MenuButton::MenuButton(pMVar14,(String *)local_98);
  postinitialize_handler((Object *)pMVar14);
  *(MenuButton **)(this + 0xa80) = pMVar14;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa80),0));
  pSVar3 = *(StringName **)(this + 0xa80);
  StringName::StringName((StringName *)local_98,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  pSVar16 = *(String **)(this + 0xa80);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Onion Skinning Options");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar16 = (String *)MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Directions");
  TTR(local_b0,(String *)local_a8);
  PopupMenu::add_separator(pSVar16,iVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  uVar18 = MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Past");
  TTR(local_b0,(String *)local_a8);
  PopupMenu::add_check_item(uVar18,local_b0,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  iVar6 = MenuButton::get_popup();
  PopupMenu::set_item_checked(iVar6,true);
  uVar18 = MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Future");
  TTR(local_b0,(String *)local_a8);
  PopupMenu::add_check_item(uVar18,local_b0,2,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar16 = (String *)MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Depth");
  TTR(local_b0,(String *)local_a8);
  PopupMenu::add_separator(pSVar16,iVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  uVar18 = MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"1 step");
  TTR(local_b0,(String *)local_a8);
  PopupMenu::add_radio_check_item(uVar18,local_b0,3,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  iVar7 = MenuButton::get_popup();
  PopupMenu::set_item_checked(iVar7,true);
  uVar18 = MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"2 steps");
  TTR(local_b0,(String *)local_a8);
  PopupMenu::add_radio_check_item(uVar18,local_b0,4,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  uVar18 = MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"3 steps");
  TTR(local_b0,(String *)local_a8);
  PopupMenu::add_radio_check_item(uVar18,local_b0,5,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar16 = (String *)MenuButton::get_popup();
  local_98[0] = 0;
  PopupMenu::add_separator(pSVar16,iVar24);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  uVar18 = MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Differences Only");
  TTR(local_b0,(String *)local_a8);
  PopupMenu::add_check_item(uVar18,local_b0,6,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  uVar18 = MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Force White Modulate");
  TTR(local_b0,(String *)local_a8);
  PopupMenu::add_check_item(uVar18,local_b0,7);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  uVar18 = MenuButton::get_popup();
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Include Gizmos (3D)");
  TTR(local_b0,(String *)local_a8);
  PopupMenu::add_check_item(uVar18,local_b0,8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa80),0,0);
  pVVar11 = (VSeparator *)operator_new(0x9e0,"");
  VSeparator::VSeparator(pVVar11);
  postinitialize_handler((Object *)pVVar11);
  Node::add_child(pBVar8,pVVar11,0,0);
  pBVar10 = (Button *)operator_new(0xc10,"");
  local_98[0] = 0;
  Button::Button(pBVar10,(String *)local_98);
  postinitialize_handler((Object *)pBVar10);
  *(Button **)(this + 0xa88) = pBVar10;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa88));
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa88),0));
  pSVar16 = *(String **)(this + 0xa88);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Pin AnimationPlayer");
  TTR(local_b0,(String *)local_a8);
  Control::set_tooltip_text(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xa88),0,0);
  plVar21 = *(long **)(this + 0xa88);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void *)"&AnimationPlayerEditor::_pin_pressed");
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_98);
  Callable::~Callable((Callable *)local_98);
  this_02 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_02);
  postinitialize_handler((Object *)this_02);
  *(EditorFileDialog **)(this + 0xae8) = this_02;
  Node::add_child(this,this_02,0,0);
  pCVar13 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(pCVar13);
  postinitialize_handler((Object *)pCVar13);
  *(ConfirmationDialog **)(this + 0xb18) = pCVar13;
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Create New Animation");
  TTR(local_b0,(String *)local_a8);
  Window::set_title((String *)pCVar13);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  AcceptDialog::set_hide_on_ok(SUB81(*(undefined8 *)(this + 0xb18),0));
  Node::add_child(this,*(undefined8 *)(this + 0xb18),0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_0012bce8;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(*(undefined8 *)(this + 0xb18),pBVar8,0,0);
  this_03 = (Label *)operator_new(0xad8,"");
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Animation Name:");
  TTR(local_b0,(String *)local_a8);
  Label::Label(this_03,local_b0);
  postinitialize_handler((Object *)this_03);
  *(Label **)(this + 0xab0) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar8,*(undefined8 *)(this + 0xab0),0,0);
  pBVar9 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar9,false);
  pBVar9[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar9 = &PTR__initialize_classv_0012b970;
  postinitialize_handler((Object *)pBVar9);
  pLVar12 = (LineEdit *)operator_new(0xbb0,"");
  local_98[0] = 0;
  LineEdit::LineEdit(pLVar12,(String *)local_98);
  postinitialize_handler((Object *)pLVar12);
  *(LineEdit **)(this + 0xaa0) = pLVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xaa0),0,0);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xaa0),3);
  pOVar17 = (OptionButton *)operator_new(0xd00,"");
  local_98[0] = 0;
  OptionButton::OptionButton(pOVar17,(String *)local_98);
  postinitialize_handler((Object *)pOVar17);
  *(OptionButton **)(this + 0xaa8) = pOVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(pBVar9,*(undefined8 *)(this + 0xaa8),0,0);
  CanvasItem::hide();
  Node::add_child(pBVar8,pBVar9,0,0);
  AcceptDialog::register_text_enter(*(LineEdit **)(this + 0xb18));
  pAVar19 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar19);
  postinitialize_handler((Object *)pAVar19);
  *(AcceptDialog **)(this + 0xb20) = pAVar19;
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Close");
  TTR(local_b0,(String *)local_a8);
  AcceptDialog::set_ok_button_text(pAVar19,local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  pSVar16 = *(String **)(this + 0xb20);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Error!");
  TTR(local_b0,(String *)local_a8);
  Window::set_title(pSVar16);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::add_child(*(undefined8 *)(this + 0xb18),*(undefined8 *)(this + 0xb20),0,0);
  plVar21 = *(long **)(this + 0xb18);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void *)"&AnimationPlayerEditor::_animation_name_edited");
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x268,(CowData<char32_t> *)local_98);
  Callable::~Callable((Callable *)local_98);
  pAVar19 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar19);
  postinitialize_handler((Object *)pAVar19);
  *(AcceptDialog **)(this + 0xb00) = pAVar19;
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Cross-Animation Blend Times");
  TTR(local_b0,(String *)local_a8);
  Window::set_title((String *)pAVar19);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  uVar18 = *(undefined8 *)(this + 0xb00);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Close");
  TTR(local_b0,(String *)local_a8);
  AcceptDialog::set_ok_button_text(uVar18,local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  AcceptDialog::set_hide_on_ok(SUB81(*(undefined8 *)(this + 0xb00),0));
  Node::add_child(this,*(undefined8 *)(this + 0xb00),0,0);
  pBVar8 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar8,true);
  pBVar8[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar8 = &PTR__initialize_classv_0012bce8;
  postinitialize_handler((Object *)pBVar8);
  Node::add_child(*(undefined8 *)(this + 0xb00),pBVar8,0,0);
  this_04 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_04);
  postinitialize_handler((Object *)this_04);
  *(Tree **)(this + 0xb08) = this_04;
  Node::set_auto_translate_mode(this_04,2);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xb08),0));
  Tree::set_columns((int)*(undefined8 *)(this + 0xb08));
  Tree::set_column_expand_ratio((int)*(undefined8 *)(this + 0xb08),0);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xb08),false);
  Tree::set_column_expand_ratio((int)*(undefined8 *)(this + 0xb08),1);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xb08),true);
  uVar18 = *(undefined8 *)(this + 0xb08);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Blend Times:");
  TTR(local_b0,(String *)local_a8);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_b0,SUB81(uVar18,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar21 = *(long **)(this + 0xb08);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void *)"&AnimationPlayerEditor::_blend_edited");
  if ((AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#1}::operator()()::sname ==
       '\0') &&
     (iVar7 = __cxa_guard_acquire(&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#1}
                                   ::operator()()::sname), iVar7 != 0)) {
    _scs_create((char *)&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#1}::
                         operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#1}::operator()()::
                  sname,&__dso_handle);
    __cxa_guard_release(&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#1}::
                         operator()()::sname);
  }
  (*pcVar2)(plVar21,&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#1}::operator()()
                     ::sname,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  pOVar17 = (OptionButton *)operator_new(0xd00,"");
  local_98[0] = 0;
  OptionButton::OptionButton(pOVar17,(String *)local_98);
  postinitialize_handler((Object *)pOVar17);
  *(OptionButton **)(this + 0xb10) = pOVar17;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  Node::set_auto_translate_mode(*(undefined8 *)(this + 0xb10),2);
  uVar18 = *(undefined8 *)(this + 0xb10);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"Next (Auto Queue):");
  TTR(local_b0,(String *)local_a8);
  VBoxContainer::add_margin_child((String *)pBVar8,(Control *)local_b0,SUB81(uVar18,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar21 = *(long **)(this + 0xa68);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void *)"&AnimationPlayerEditor::_autoplay_pressed");
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xa68),0));
  plVar21 = *(long **)(this + 0xa48);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void *)"&AnimationPlayerEditor::_play_pressed");
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  plVar21 = *(long **)(this + 0xa50);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void *)"&AnimationPlayerEditor::_play_from_pressed");
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  plVar21 = *(long **)(this + 0xa58);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void *)"&AnimationPlayerEditor::_play_bw_pressed");
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  plVar21 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void *)"&AnimationPlayerEditor::_play_bw_from_pressed");
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  plVar21 = *(long **)(this + 0xa40);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void *)"&AnimationPlayerEditor::_stop_pressed");
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  plVar21 = *(long **)(this + 0xa38);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor,int>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void_int *)"&AnimationPlayerEditor::_animation_selected");
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x260,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  plVar21 = *(long **)(this + 0xa90);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  pCVar20 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar20);
  *(AnimationPlayerEditor **)(pCVar20 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar20 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar20 + 0x20) = &_LC8;
  *(undefined ***)pCVar20 = &PTR_hash_0012d320;
  *(undefined8 *)(pCVar20 + 0x40) = 0;
  uVar18 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar20 + 0x10) = 0;
  *(undefined8 *)(pCVar20 + 0x30) = uVar18;
  *(code **)(pCVar20 + 0x38) = _seek_value_changed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar20,(int)pCVar20 + 0x28);
  *(char **)(pCVar20 + 0x20) = "AnimationPlayerEditor::_seek_value_changed";
  Callable::Callable((Callable *)local_98,pCVar20);
  ::Variant::Variant((Variant *)local_78,false);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)local_78;
  Callable::bindp((Variant **)local_a8,iVar24);
  if (::Variant::needs_deinit[(int)local_60] != '\0') {
    ::Variant::_clear_internal();
  }
  if (::Variant::needs_deinit[(int)local_78[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x280,(String *)local_a8,0);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)local_98);
  plVar21 = *(long **)(this + 0xa98);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor,String_const&>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void_String_ptr *)"&AnimationPlayerEditor::_scale_changed");
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x278,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  Node::add_child(this,*(undefined8 *)(this + 0xb30),0,0);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xb30),3);
  plVar21 = *(long **)(this + 0xb30);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  pCVar20 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar20);
  *(AnimationPlayerEditor **)(pCVar20 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar20 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar20 + 0x20) = &_LC8;
  *(undefined ***)pCVar20 = &PTR_hash_0012d3b0;
  *(undefined8 *)(pCVar20 + 0x40) = 0;
  uVar18 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar20 + 0x10) = 0;
  *(undefined8 *)(pCVar20 + 0x30) = uVar18;
  *(code **)(pCVar20 + 0x38) = _animation_key_editor_seek;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar20,(int)pCVar20 + 0x28);
  *(char **)(pCVar20 + 0x20) = "AnimationPlayerEditor::_animation_key_editor_seek";
  Callable::Callable((Callable *)local_98,pCVar20);
  if ((AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#2}::operator()()::sname ==
       '\0') &&
     (iVar7 = __cxa_guard_acquire(&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#2}
                                   ::operator()()::sname), iVar7 != 0)) {
    _scs_create((char *)&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#2}::
                         operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#2}::operator()()::
                  sname,&__dso_handle);
    __cxa_guard_release(&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#2}::
                         operator()()::sname);
  }
  (*pcVar2)(plVar21,&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#2}::operator()()
                     ::sname,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  plVar21 = *(long **)(this + 0xb30);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  pCVar20 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar20);
  *(AnimationPlayerEditor **)(pCVar20 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar20 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar20 + 0x20) = &_LC8;
  *(undefined ***)pCVar20 = &PTR_hash_0012d440;
  *(undefined8 *)(pCVar20 + 0x40) = 0;
  uVar18 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar20 + 0x10) = 0;
  *(undefined8 *)(pCVar20 + 0x30) = uVar18;
  *(code **)(pCVar20 + 0x38) = _animation_key_editor_anim_len_changed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar20,(int)pCVar20 + 0x28);
  *(char **)(pCVar20 + 0x20) = "AnimationPlayerEditor::_animation_key_editor_anim_len_changed";
  Callable::Callable((Callable *)local_98,pCVar20);
  if ((AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#3}::operator()()::sname ==
       '\0') &&
     (iVar7 = __cxa_guard_acquire(&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#3}
                                   ::operator()()::sname), iVar7 != 0)) {
    _scs_create((char *)&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#3}::
                         operator()()::sname,false);
    __cxa_atexit(StringName::~StringName,
                 &AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#3}::operator()()::
                  sname,&__dso_handle);
    __cxa_guard_release(&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#3}::
                         operator()()::sname);
  }
  (*pcVar2)(plVar21,&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#3}::operator()()
                     ::sname,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  _update_player(this);
  this_05 = (AnimationLibraryEditor *)operator_new(0xe30,"");
  AnimationLibraryEditor::AnimationLibraryEditor(this_05);
  postinitialize_handler((Object *)this_05);
  *(AnimationLibraryEditor **)(this + 0xaf8) = this_05;
  Node::add_child(this,this_05,0,0);
  plVar21 = *(long **)(this + 0xaf8);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  pCVar20 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar20);
  *(AnimationPlayerEditor **)(pCVar20 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar20 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar20 + 0x20) = &_LC8;
  *(undefined ***)pCVar20 = &PTR_hash_0012d4d0;
  *(undefined8 *)(pCVar20 + 0x40) = 0;
  uVar18 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar20 + 0x10) = 0;
  *(undefined8 *)(pCVar20 + 0x30) = uVar18;
  *(code **)(pCVar20 + 0x38) = _animation_player_changed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar20,(int)pCVar20 + 0x28);
  *(char **)(pCVar20 + 0x20) = "AnimationPlayerEditor::_animation_player_changed";
  Callable::Callable((Callable *)local_98,pCVar20);
  if ((AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#4}::operator()()::sname ==
       '\0') &&
     (iVar7 = __cxa_guard_acquire(&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#4}
                                   ::operator()()::sname), iVar7 != 0)) {
    _scs_create((char *)&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#4}::
                         operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#4}::operator()()::
                  sname,&__dso_handle);
    __cxa_guard_release(&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#4}::
                         operator()()::sname);
  }
  (*pcVar2)(plVar21,&AnimationPlayerEditor(AnimationPlayerEditorPlugin*)::{lambda()#4}::operator()()
                     ::sname,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  plVar21 = *(long **)(this + 0xb30);
  pcVar2 = *(code **)(*plVar21 + 0x108);
  create_custom_callable_function_pointer<AnimationPlayerEditor>
            ((AnimationPlayerEditor *)local_98,(char *)this,
             (_func_void *)"&AnimationPlayerEditor::_editor_visibility_changed");
  (*pcVar2)(plVar21,SceneStringNames::singleton + 0x18,(CowData<char32_t> *)local_98,0);
  Callable::~Callable((Callable *)local_98);
  plVar21 = (long *)RenderingServer::get_singleton();
  uVar18 = (**(code **)(*plVar21 + 0xe20))(plVar21);
  *(undefined8 *)(this + 0xb80) = uVar18;
  plVar21 = (long *)RenderingServer::get_singleton();
  uVar18 = (**(code **)(*plVar21 + 0xe78))(plVar21);
  *(undefined8 *)(this + 0xb88) = uVar18;
  plVar21 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar21 + 0xe80))
            (plVar21,*(undefined8 *)(this + 0xb88),*(undefined8 *)(this + 0xb80));
  this_06 = (ShaderMaterial *)operator_new(0x348,"");
  ShaderMaterial::ShaderMaterial(this_06);
  postinitialize_handler((Object *)this_06);
  cVar5 = RefCounted::init_ref();
  pOVar22 = *(Object **)(this + 0xb90);
  if (cVar5 == '\0') {
    if (pOVar22 != (Object *)0x0) {
      *(undefined8 *)(this + 0xb90) = 0;
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        this_06 = (ShaderMaterial *)0x0;
        cVar5 = predelete_handler(pOVar22);
        if (cVar5 != '\0') {
LAB_0010d6f3:
          (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
          Memory::free_static(pOVar22,false);
          if (this_06 != (ShaderMaterial *)0x0) goto LAB_0010d4d8;
        }
      }
    }
  }
  else {
    if (pOVar22 != (Object *)this_06) {
      *(ShaderMaterial **)(this + 0xb90) = this_06;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xb90) = 0;
        if (pOVar22 != (Object *)0x0) {
          cVar5 = RefCounted::unreference();
joined_r0x0010d6cb:
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar22), cVar5 != '\0'))
          goto LAB_0010d6f3;
        }
      }
      else if (pOVar22 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        goto joined_r0x0010d6cb;
      }
    }
LAB_0010d4d8:
    cVar5 = RefCounted::unreference();
    if ((cVar5 != '\0') && (cVar5 = predelete_handler((Object *)this_06), cVar5 != '\0')) {
      (**(code **)(*(long *)this_06 + 0x140))(this_06);
      Memory::free_static(this_06,false);
    }
  }
  pOVar22 = (Object *)operator_new(0x2e8,"");
  Shader::Shader((Shader *)pOVar22);
  postinitialize_handler(pOVar22);
  cVar5 = RefCounted::init_ref();
  if (cVar5 == '\0') {
    pOVar22 = *(Object **)(this + 0xb98);
    if (pOVar22 == (Object *)0x0) goto LAB_0010d0e7;
    *(undefined8 *)(this + 0xb98) = 0;
    cVar5 = RefCounted::unreference();
  }
  else {
    pOVar4 = *(Object **)(this + 0xb98);
    if (pOVar4 != pOVar22) {
      *(Object **)(this + 0xb98) = pOVar22;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        *(undefined8 *)(this + 0xb98) = 0;
      }
      if (((pOVar4 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(pOVar4), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    cVar5 = RefCounted::unreference();
  }
  if ((cVar5 == '\0') || (cVar5 = predelete_handler(pOVar22), cVar5 == '\0')) {
    pOVar22 = *(Object **)(this + 0xb98);
  }
  else {
    (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
    Memory::free_static(pOVar22,false);
    pOVar22 = *(Object **)(this + 0xb98);
  }
LAB_0010d0e7:
  local_98[0] = 0;
  String::parse_latin1
            ((String *)local_98,
             "\n// Animation editor onion skinning shader.\n\nshader_type canvas_item;\n\nuniform vec4 bkg_color;\nuniform vec4 dir_color;\nuniform bool differences_only;\nuniform sampler2D present;\n\nfloat zero_if_equal(vec4 a, vec4 b) {\n\treturn smoothstep(0.0, 0.005, length(a.rgb - b.rgb) / sqrt(3.0));\n}\n\nvoid fragment() {\n\tvec4 capture_samp = texture(TEXTURE, UV);\n\tfloat bkg_mask = zero_if_equal(capture_samp, bkg_color);\n\tfloat diff_mask = 1.0;\n\tif (differences_only) {\n\t\t// FIXME: If Y-flips across render target, canvas item, etc. was handled correctly,\n\t\t//        this would not be as convoluted in the shader.\n\t\tvec4 capture_samp2 = texture(TEXTURE, vec2(UV.x, 1.0 - UV.y));\n\t\tvec4 present_samp = texture(present, vec2(UV.x, 1.0 - UV.y));\n\t\tdiff_mask = 1.0 - zero_if_equal(present_samp, bkg_color);\n\t}\n\tCOLOR = vec4(capture_samp.rgb * dir_color.rgb, bkg_mask * diff_mask);\n}\n"
            );
  Shader::set_code((String *)pOVar22);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  plVar21 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar21 + 0x2a0);
  uVar18 = (**(code **)(**(long **)(this + 0xb98) + 0x1c0))();
  uVar23 = (**(code **)(**(long **)(this + 0xb90) + 0x1c0))();
  (*pcVar2)(plVar21,uVar23,uVar18);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Pause/Stop Animation");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_editor/stop_animation");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0x53,0);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Play Animation");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_editor/play_animation");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0x44,0);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Play Animation Backwards");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_editor/play_animation_backwards");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0x41,0);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Play Animation from Start");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_editor/play_animation_from_start");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0x2000044,0);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Play Animation Backwards from End");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_editor/play_animation_from_end");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0x2000041,0);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Go to Next Keyframe");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_editor/go_to_next_keyframe");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0x6000044,0);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  local_98[0] = 0;
  String::parse_latin1((String *)local_98,"Go to Previous Keyframe");
  local_a8[0] = 0;
  String::parse_latin1((String *)local_a8,"animation_editor/go_to_previous_keyframe");
  ED_SHORTCUT(local_b0,(String *)local_a8,(CowData<char32_t> *)local_98,0x6000041,0);
  Ref<Shortcut>::unref((Ref<Shortcut> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationPlayerEditorPlugin::AnimationPlayerEditorPlugin() */

void __thiscall
AnimationPlayerEditorPlugin::AnimationPlayerEditorPlugin(AnimationPlayerEditorPlugin *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  AnimationPlayerEditor *this_00;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorPlugin::EditorPlugin((EditorPlugin *)this);
  *(undefined8 *)(this + 0x670) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0012c538;
  *(undefined8 *)(this + 0x678) = 0;
  *(undefined1 (*) [16])(this + 0x660) = (undefined1  [16])0x0;
  this_00 = (AnimationPlayerEditor *)operator_new(0xbd0,"");
  AnimationPlayerEditor::AnimationPlayerEditor(this_00,this);
  postinitialize_handler((Object *)this_00);
  lVar3 = EditorNode::singleton;
  *(AnimationPlayerEditor **)(this + 0x660) = this_00;
  local_60 = 0;
  uVar1 = *(undefined8 *)(lVar3 + 0xa40);
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Toggle Animation Bottom Panel";
  local_68 = 0;
  local_50 = 0x1d;
  String::parse_latin1((StrRange *)&local_68);
  local_58 = "bottom_panels/toggle_animation_bottom_panel";
  local_70 = 0;
  local_50 = 0x2b;
  String::parse_latin1((StrRange *)&local_70);
  ED_SHORTCUT_AND_COMMAND
            (&local_78,(StrRange *)&local_70,(StrRange *)&local_68,0x400004e,(StrRange *)&local_60);
  uVar2 = *(undefined8 *)(this + 0x660);
  local_58 = "";
  local_80 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_58 = "Animation";
  local_50 = 9;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_58,(String *)&local_88);
  EditorBottomPanel::add_item(uVar1,(String *)&local_58,uVar2,&local_78,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_78 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_78);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_78 + 0x140))(local_78);
        Memory::free_static(local_78,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_animation_remove_confirmed() */

void __thiscall AnimationPlayerEditor::_animation_remove_confirmed(AnimationPlayerEditor *this)

{
  Variant *pVVar1;
  AnimationPlayer *pAVar2;
  Object *pOVar3;
  StringName *pSVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  Object *this_00;
  wchar32 wVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  Variant *local_150;
  Variant **local_110;
  Object *local_100;
  Object *local_f8;
  StringName *local_f0;
  long local_e8;
  long local_e0;
  Object *local_d8;
  undefined8 local_d0;
  Variant *local_c8 [2];
  Variant *local_b8;
  Variant *pVStack_b0;
  undefined8 local_a0;
  undefined1 local_98 [16];
  int local_88 [2];
  undefined1 local_80 [16];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  OptionButton::get_selected();
  wVar8 = (wchar32)(CowData<char32_t> *)&local_100;
  OptionButton::get_item_text(wVar8);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  AnimationMixer::get_animation((StringName *)&local_f8);
  if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
    StringName::unref();
  }
  AnimationMixer::find_animation_library((Ref *)&local_d8);
  AnimationMixer::get_animation_library((StringName *)&local_f0);
  if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
    StringName::unref();
  }
  if (local_f0 == (StringName *)0x0) {
    _err_print_error("_animation_remove_confirmed",
                     "editor/plugins/animation_player_editor_plugin.cpp",0x217,
                     "Condition \"al.is_null()\" is true.",0,0);
    Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_f0);
    Ref<Animation>::unref((Ref<Animation> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    goto LAB_0010df54;
  }
  iVar6 = String::find_char(wVar8,0x2f);
  if (iVar6 != -1) {
    String::get_slice((char *)&local_d8,wVar8);
    if (local_100 != local_d8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      local_100 = local_d8;
      local_d8 = (Object *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  }
  this_00 = (Object *)EditorUndoRedoManager::get_singleton();
  local_e0 = 0;
  local_d8 = (Object *)&_LC8;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_e0);
  local_e8 = 0;
  local_d8 = (Object *)0x118f8a;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_e8);
  TTR((String *)&local_d8,(String *)&local_e8);
  EditorUndoRedoManager::create_action(this_00,(StringName *)&local_d8,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  AnimationPlayer::get_autoplay();
  cVar5 = String::operator==((String *)&local_d8,(String *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (cVar5 != '\0') {
    StringName::StringName((StringName *)&local_d8,"set_autoplay",false);
    pSVar4 = *(StringName **)(this + 0xa20);
    ::Variant::Variant((Variant *)&local_b8,"");
    local_a0 = 0;
    local_98 = (undefined1  [16])0x0;
    local_c8[0] = (Variant *)&local_b8;
    EditorUndoRedoManager::add_do_methodp(this_00,pSVar4,(Variant **)&local_d8,(int)local_c8);
    if (::Variant::needs_deinit[(int)local_a0] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_b8] != '\0') {
      ::Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
      StringName::unref();
    }
    local_d8 = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_100);
    StringName::StringName((StringName *)&local_e0,"set_autoplay",false);
    EditorUndoRedoManager::add_undo_method<String>
              ((EditorUndoRedoManager *)this_00,*(undefined8 *)(this + 0xa20),(StrRange *)&local_e0,
               (StringName *)&local_d8);
    if ((StringName::configured != '\0') && (local_e0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    pAVar2 = *(AnimationPlayer **)(this + 0xa20);
    StringName::StringName((StringName *)&local_d8,"_animation_player_changed",false);
    EditorUndoRedoManager::add_do_method<AnimationPlayer*>
              ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_d8,pAVar2);
    if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  local_110 = local_c8;
  local_150 = (Variant *)&local_b8;
  local_d8 = (Object *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_100);
  StringName::StringName((StringName *)&local_e0,"remove_animation",false);
  pSVar4 = local_f0;
  ::Variant::Variant(local_150,(String *)&local_d8);
  local_a0 = 0;
  local_c8[0] = local_150;
  local_98 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(this_00,pSVar4,(Variant **)&local_e0,(int)local_110);
  if (::Variant::needs_deinit[(int)local_a0] != '\0') {
    ::Variant::_clear_internal();
  }
  if (::Variant::needs_deinit[(int)local_b8] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (local_f8 == (Object *)0x0) {
LAB_0010e29c:
    local_d8 = (Object *)0x0;
    local_f8 = (Object *)0x0;
  }
  else {
    local_d8 = local_f8;
    cVar5 = RefCounted::reference();
    if (cVar5 == '\0') goto LAB_0010e29c;
  }
  local_e0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_100);
  StringName::StringName((StringName *)&local_e8,"add_animation",false);
  pSVar4 = local_f0;
  ::Variant::Variant((Variant *)local_88,(String *)&local_e0);
  pVVar9 = (Variant *)local_40;
  ::Variant::Variant((Variant *)local_70,local_f8);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  local_b8 = (Variant *)local_88;
  pVStack_b0 = (Variant *)local_70;
  EditorUndoRedoManager::add_undo_methodp(this_00,pSVar4,(Variant **)&local_e8,(int)local_150);
  do {
    pVVar1 = pVVar9 + -0x18;
    pVVar9 = pVVar9 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar9 != (Variant *)local_88);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  Ref<Animation>::unref((Ref<Animation> *)&local_d8);
  pAVar2 = *(AnimationPlayer **)(this + 0xa20);
  StringName::StringName((StringName *)&local_d8,"_animation_player_changed",false);
  EditorUndoRedoManager::add_do_method<AnimationPlayer*>
            ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_d8,pAVar2);
  if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
    StringName::unref();
  }
  pOVar3 = *(Object **)(this + 0xa20);
  StringName::StringName((StringName *)&local_d8,"_animation_player_changed",false);
  ::Variant::Variant((Variant *)local_88,pOVar3);
  local_70[0] = 0;
  local_70[1] = 0;
  local_68 = (undefined1  [16])0x0;
  local_b8 = (Variant *)local_88;
  EditorUndoRedoManager::add_undo_methodp
            (this_00,(StringName *)this,(Variant **)&local_d8,(int)local_150);
  if (::Variant::needs_deinit[local_70[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if (::Variant::needs_deinit[local_88[0]] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
    StringName::unref();
  }
  cVar5 = OptionButton::has_selectable_items();
  if (cVar5 != '\0') {
    iVar6 = OptionButton::get_selectable_item(SUB81(*(undefined8 *)(this + 0xa38),0));
    iVar7 = OptionButton::get_selectable_item(SUB81(*(undefined8 *)(this + 0xa38),0));
    if (iVar6 == iVar7) {
      StringName::StringName((StringName *)&local_d8,"_stop_onion_skinning",false);
      local_80 = (undefined1  [16])0x0;
      local_88[0] = 0;
      local_88[1] = 0;
      EditorUndoRedoManager::add_do_methodp(this_00,(StringName *)this,(Variant **)&local_d8,0);
      if (::Variant::needs_deinit[local_88[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_d8,"_start_onion_skinning",false);
      local_80 = (undefined1  [16])0x0;
      local_88[0] = 0;
      local_88[1] = 0;
      EditorUndoRedoManager::add_undo_methodp(this_00,(StringName *)this,(Variant **)&local_d8,0);
      if (::Variant::needs_deinit[local_88[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
        StringName::unref();
      }
    }
  }
  EditorUndoRedoManager::commit_action(SUB81(this_00,0));
  if (((local_f0 != (StringName *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler((Object *)local_f0), cVar5 != '\0')) {
    (**(code **)(*(long *)local_f0 + 0x140))(local_f0);
    Memory::free_static(local_f0,false);
  }
  Ref<Animation>::unref((Ref<Animation> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
LAB_0010df54:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationPlayerEditor::_animation_name_edited() */

void __thiscall AnimationPlayerEditor::_animation_name_edited(AnimationPlayerEditor *this)

{
  Variant *pVVar1;
  StringName *pSVar2;
  AnimationPlayer *pAVar3;
  Animation *pAVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  EditorUndoRedoManager *this_00;
  Object *pOVar8;
  undefined8 uVar9;
  char *pcVar10;
  bool bVar11;
  wchar32 wVar12;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  float fVar15;
  Variant *local_150;
  String *local_140;
  StringName *local_130;
  Ref<AnimationLibrary> *local_128;
  String *local_120;
  StringName *local_118;
  long local_f8;
  StringName *local_f0;
  String local_e8 [8];
  StringName *local_e0;
  Animation *local_d8;
  StringName *local_d0;
  StringName *local_c8;
  long local_c0;
  long local_b8;
  StringName *local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [2];
  undefined1 local_80 [16];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  cVar5 = AnimationPlayer::is_playing();
  if (cVar5 != '\0') {
    AnimationPlayer::stop(SUB81(*(undefined8 *)(this + 0xa20),0));
  }
  LineEdit::get_text();
  cVar5 = AnimationLibrary::is_valid_animation_name((String *)&local_f8);
  if (cVar5 == '\0') {
    uVar9 = *(undefined8 *)(this + 0xb20);
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"");
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"Invalid animation name!");
    TTR((String *)&local_b0,(String *)&local_c0);
    AcceptDialog::set_text(uVar9,(String *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    local_88[0] = 0;
    local_88[1] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xb20));
  }
  else {
    if (*(int *)(this + 0xb28) == 3) {
      cVar6 = OptionButton::has_selectable_items();
      if (cVar6 != '\0') {
        OptionButton::get_selected();
        OptionButton::get_item_text((int)(String *)&local_b0);
        cVar6 = String::operator==((String *)&local_b0,(String *)&local_f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if (cVar6 != '\0') {
          Window::hide();
          goto LAB_0010eace;
        }
      }
    }
    local_f0 = (StringName *)0x0;
    String::parse_latin1((String *)&local_f0,"");
    cVar6 = CanvasItem::is_visible();
    if ((cVar6 != '\0') && (iVar7 = OptionButton::get_selected_id(), iVar7 != -1)) {
      OptionButton::get_selected_id();
      OptionButton::get_item_metadata((int)local_88);
      ::Variant::operator_cast_to_String((Variant *)&local_b0);
      if (local_f0 != local_b0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        local_f0 = local_b0;
        local_b0 = (StringName *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (::Variant::needs_deinit[local_88[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      cVar6 = String::operator!=((String *)&local_f0,"");
      pcVar10 = "";
      if (cVar6 != '\0') {
        pcVar10 = "/";
      }
      String::operator+=((String *)&local_f0,pcVar10);
    }
    pSVar2 = *(StringName **)(this + 0xa20);
    String::operator+((String *)&local_b8,(String *)&local_f0);
    StringName::StringName((StringName *)&local_b0,(String *)&local_b8,false);
    cVar6 = AnimationMixer::has_animation(pSVar2);
    if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (cVar6 == '\0') {
      this_00 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
      iVar7 = *(int *)(this + 0xb28);
      bVar11 = SUB81(this_00,0);
      if (iVar7 == 2) {
        OptionButton::get_selected();
        OptionButton::get_item_text((int)local_e8);
        StringName::StringName((StringName *)&local_b0,local_e8,false);
        AnimationMixer::get_animation((StringName *)&local_e0);
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
        local_b0 = (StringName *)0x0;
        Ref<Animation>::operator=((Ref<Animation> *)&local_b0,(Ref *)local_e0);
        _animation_clone((Ref<Animation> *)&local_d8,this,(StringName *)&local_b0);
        Ref<Animation>::unref((Ref<Animation> *)&local_b0);
        pAVar4 = local_d8;
        Resource::set_name((String *)local_d8);
        local_d0 = (StringName *)0x0;
        local_c8 = (StringName *)0x0;
        cVar6 = CanvasItem::is_visible();
        if (cVar6 == '\0') {
          pSVar2 = *(StringName **)(this + 0xa20);
          StringName::StringName((StringName *)&local_b0,"",false);
          cVar6 = AnimationMixer::has_animation_library(pSVar2);
          if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
            StringName::unref();
          }
          if (cVar6 == '\0') goto LAB_0010f661;
          StringName::StringName((StringName *)&local_b8,"",false);
          AnimationMixer::get_animation_library((StringName *)&local_b0);
          Ref<AnimationLibrary>::operator=((Ref<AnimationLibrary> *)&local_c8,(Ref *)local_b0);
          Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_b0);
          if ((StringName::configured != '\0') && (local_b8 != 0)) {
            StringName::unref();
          }
          String::parse_latin1((String *)&local_d0,"");
          local_118 = local_c8;
        }
        else {
          OptionButton::get_selected();
          OptionButton::get_item_metadata((int)local_88);
          ::Variant::operator_cast_to_String((Variant *)&local_b0);
          if (local_d0 != local_b0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            local_d0 = local_b0;
            local_b0 = (StringName *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          if (::Variant::needs_deinit[local_88[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          local_140 = (String *)&local_d0;
          pSVar2 = *(StringName **)(this + 0xa20);
          StringName::StringName((StringName *)&local_b0,local_140,false);
          cVar6 = AnimationMixer::has_animation_library(pSVar2);
          if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
            StringName::unref();
          }
          if (cVar6 == '\0') {
LAB_0010f661:
            local_118 = (StringName *)0x0;
          }
          else {
            StringName::StringName((StringName *)&local_b8,local_140,false);
            AnimationMixer::get_animation_library((StringName *)&local_b0);
            Ref<AnimationLibrary>::operator=((Ref<AnimationLibrary> *)&local_c8,(Ref *)local_b0);
            Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_b0);
            if ((StringName::configured != '\0') && (local_b8 != 0)) {
              StringName::unref();
            }
            local_118 = local_c8;
          }
        }
        local_128 = (Ref<AnimationLibrary> *)&local_c8;
        local_140 = (String *)&local_d0;
        local_150 = (Variant *)local_88;
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"");
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"Duplicate Animation");
        TTR((String *)&local_b0,(String *)&local_c0);
        EditorUndoRedoManager::create_action(this_00,(StringName *)&local_b0,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        cVar6 = '\0';
        if (local_118 == (StringName *)0x0) {
          Ref<AnimationLibrary>::instantiate<>(local_128);
          local_b0 = (StringName *)0x0;
          local_118 = local_c8;
          Ref<AnimationLibrary>::operator=((Ref<AnimationLibrary> *)&local_b0,(Ref *)local_c8);
          StringName::StringName((StringName *)&local_b8,"add_animation_library",false);
          EditorUndoRedoManager::add_do_method<char_const*,Ref<AnimationLibrary>>
                    (this_00,*(undefined8 *)(this + 0xa20),(String *)&local_b8,&_LC8,
                     (StringName *)&local_b0);
          if ((StringName::configured != '\0') && (local_b8 != 0)) {
            StringName::unref();
          }
          Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_b0);
          String::parse_latin1(local_140,"");
          cVar6 = cVar5;
        }
        local_b0 = (StringName *)0x0;
        Ref<Animation>::operator=((Ref<Animation> *)&local_b0,(Ref *)pAVar4);
        local_b8 = 0;
        if (local_f8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f8);
        }
        StringName::StringName((StringName *)&local_c0,"add_animation",false);
        ::Variant::Variant(local_150,(String *)&local_b8);
        ::Variant::Variant((Variant *)local_70,(Object *)local_b0);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        pVVar13 = (Variant *)local_40;
        local_a8 = local_150;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_do_methodp
                  ((Object *)this_00,local_118,(Variant **)&local_c0,(int)&local_a8);
        do {
          pVVar14 = pVVar13 + -0x18;
          pVVar13 = pVVar13 + -0x18;
          if (::Variant::needs_deinit[*(int *)pVVar14] != '\0') {
            ::Variant::_clear_internal();
          }
        } while (pVVar13 != local_150);
        if ((StringName::configured != '\0') && (local_c0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        Ref<Animation>::unref((Ref<Animation> *)&local_b0);
        local_b0 = (StringName *)0x0;
        if (local_f8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_f8);
        }
        StringName::StringName((StringName *)&local_b8,"remove_animation",false);
        EditorUndoRedoManager::add_undo_method<String>
                  (this_00,local_118,(String *)&local_b8,(StringName *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        pAVar3 = *(AnimationPlayer **)(this + 0xa20);
        StringName::StringName((StringName *)&local_b0,"_animation_player_changed",false);
        EditorUndoRedoManager::add_do_method<AnimationPlayer*>
                  (this_00,(Object *)this,(StringName *)&local_b0,pAVar3);
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
        pAVar3 = *(AnimationPlayer **)(this + 0xa20);
        StringName::StringName((StringName *)&local_b0,"_animation_player_changed",false);
        EditorUndoRedoManager::add_undo_method<AnimationPlayer*>
                  (this_00,(Object *)this,(StringName *)&local_b0,pAVar3);
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
        if (cVar6 != '\0') {
          StringName::StringName((StringName *)&local_b0,"remove_animation_library",false);
          EditorUndoRedoManager::add_undo_method<char_const*>
                    (this_00,*(Object **)(this + 0xa20),(StringName *)&local_b0,"");
          if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
            StringName::unref();
          }
        }
        EditorUndoRedoManager::commit_action(bVar11);
        cVar5 = String::operator!=(local_140,"");
        if (cVar5 != '\0') {
          local_b8 = 0;
          String::parse_latin1((String *)&local_b8,"/");
          String::operator+((String *)&local_b0,local_140);
          if (local_d0 != local_b0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
            local_d0 = local_b0;
            local_b0 = (StringName *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        }
        if (this[0xa30] != (AnimationPlayerEditor)0x0) {
          AnimationPlayerEditorPlugin::_update_dummy_player
                    (*(AnimationPlayerEditorPlugin **)(this + 0xa10),
                     *(AnimationMixer **)(this + 0xa18));
        }
        String::operator+((String *)&local_b0,local_140);
        _select_anim_by_name(this,(String *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        Ref<AnimationLibrary>::unref(local_128);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
        Ref<Animation>::unref((Ref<Animation> *)&local_d8);
        Ref<Animation>::unref((Ref<Animation> *)&local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
      }
      else if (iVar7 == 3) {
        OptionButton::get_selected();
        wVar12 = (wchar32)(String *)&local_e0;
        OptionButton::get_item_text(wVar12);
        StringName::StringName((StringName *)&local_b0,(String *)&local_e0,false);
        AnimationMixer::get_animation((StringName *)&local_d8);
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
        AnimationMixer::find_animation_library((Ref *)&local_b0);
        AnimationMixer::get_animation_library((StringName *)&local_d0);
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
        if (local_d0 == (StringName *)0x0) {
          _err_print_error("_animation_name_edited",
                           "editor/plugins/animation_player_editor_plugin.cpp",0x26f,
                           "Condition \"al.is_null()\" is true.",0,0);
          Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_d0);
          Ref<Animation>::unref((Ref<Animation> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          goto LAB_0010ebe4;
        }
        local_c8 = (StringName *)0x0;
        String::parse_latin1((String *)&local_c8,"");
        iVar7 = String::find_char(wVar12,0x2f);
        if (iVar7 != -1) {
          local_b8 = 0;
          String::parse_latin1((String *)&local_b8,"/");
          String::get_slice((char *)&local_c0,wVar12);
          String::operator+((String *)&local_b0,(String *)&local_c0);
          if (local_c8 != local_b0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            local_c8 = local_b0;
            local_b0 = (StringName *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          String::get_slice((char *)&local_b0,wVar12);
          if (local_e0 != local_b0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            local_e0 = local_b0;
            local_b0 = (StringName *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        }
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"");
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"Rename Animation");
        TTR((String *)&local_b0,(String *)&local_c0);
        EditorUndoRedoManager::create_action(this_00,(StringName *)&local_b0,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        local_b0 = (StringName *)0x0;
        if (local_f8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_f8);
        }
        local_b8 = 0;
        if (local_e0 != (StringName *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_e0);
        }
        StringName::StringName((StringName *)&local_c0,"rename_animation",false);
        pSVar2 = local_d0;
        ::Variant::Variant((Variant *)local_88,(String *)&local_b8);
        ::Variant::Variant((Variant *)local_70,(String *)&local_b0);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        iVar7 = (int)&local_a8;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_do_methodp((Object *)this_00,pSVar2,(Variant **)&local_c0,iVar7);
        pVVar13 = (Variant *)local_40;
        pVVar14 = pVVar13;
        do {
          pVVar1 = pVVar14 + -0x18;
          pVVar14 = pVVar14 + -0x18;
          if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            ::Variant::_clear_internal();
          }
        } while (pVVar14 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_c0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        local_b0 = (StringName *)0x0;
        if (local_f8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_f8);
        }
        StringName::StringName((StringName *)&local_b8,"set_name",false);
        pAVar4 = local_d8;
        ::Variant::Variant((Variant *)local_88,(String *)&local_b0);
        local_70[0] = 0;
        local_70[1] = 0;
        local_68 = (undefined1  [16])0x0;
        local_a8 = (Variant *)local_88;
        EditorUndoRedoManager::add_do_methodp
                  ((Object *)this_00,(StringName *)pAVar4,(Variant **)&local_b8,iVar7);
        if (::Variant::needs_deinit[local_70[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if (::Variant::needs_deinit[local_88[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        local_b0 = (StringName *)0x0;
        if (local_e0 != (StringName *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_e0);
        }
        local_b8 = 0;
        if (local_f8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f8);
        }
        StringName::StringName((StringName *)&local_c0,"rename_animation",false);
        pSVar2 = local_d0;
        ::Variant::Variant((Variant *)local_88,(String *)&local_b8);
        ::Variant::Variant((Variant *)local_70,(String *)&local_b0);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_undo_methodp
                  ((Object *)this_00,pSVar2,(Variant **)&local_c0,iVar7);
        do {
          pVVar14 = pVVar13 + -0x18;
          pVVar13 = pVVar13 + -0x18;
          if (::Variant::needs_deinit[*(int *)pVVar14] != '\0') {
            ::Variant::_clear_internal();
          }
        } while (pVVar13 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_c0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        local_b0 = (StringName *)0x0;
        if (local_e0 != (StringName *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_e0);
        }
        StringName::StringName((StringName *)&local_b8,"set_name",false);
        EditorUndoRedoManager::add_undo_method<String>
                  (this_00,local_d8,(String *)&local_b8,(StringName *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        pAVar3 = *(AnimationPlayer **)(this + 0xa20);
        StringName::StringName((StringName *)&local_b0,"_animation_player_changed",false);
        EditorUndoRedoManager::add_do_method<AnimationPlayer*>
                  (this_00,(Object *)this,(StringName *)&local_b0,pAVar3);
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
        pAVar3 = *(AnimationPlayer **)(this + 0xa20);
        StringName::StringName((StringName *)&local_b0,"_animation_player_changed",false);
        EditorUndoRedoManager::add_undo_method<AnimationPlayer*>
                  (this_00,(Object *)this,(StringName *)&local_b0,pAVar3);
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
        EditorUndoRedoManager::commit_action(bVar11);
        if (this[0xa30] != (AnimationPlayerEditor)0x0) {
          AnimationPlayerEditorPlugin::_update_dummy_player
                    (*(AnimationPlayerEditorPlugin **)(this + 0xa10),
                     *(AnimationMixer **)(this + 0xa18));
        }
        String::operator+((String *)&local_b0,(String *)&local_c8);
        _select_anim_by_name(this,(String *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_d0);
        Ref<Animation>::unref((Ref<Animation> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      }
      else if (iVar7 == 0) {
        local_120 = (String *)operator_new(0x310,"");
        Animation::Animation((Animation *)local_120);
        postinitialize_handler((Object *)local_120);
        local_b0 = (StringName *)0x0;
        local_d8 = (Animation *)local_120;
        cVar6 = RefCounted::init_ref();
        if (cVar6 == '\0') {
          local_d8 = (Animation *)0x0;
          local_120 = (String *)0x0;
        }
        Ref<Animation>::unref((Ref<Animation> *)&local_b0);
        Resource::set_name(local_120);
        iVar7 = OptionButton::get_item_count();
        if (0 < iVar7) {
          OptionButton::get_selected();
          OptionButton::get_item_text((int)(String *)&local_c0);
          StringName::StringName((StringName *)&local_b0,(String *)&local_c0,false);
          AnimationMixer::get_animation((StringName *)&local_b8);
          if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
            StringName::unref();
          }
          if (local_b8 != 0) {
            fVar15 = (float)Animation::get_step();
            Animation::set_step(fVar15);
          }
          Ref<Animation>::unref((Ref<Animation> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        }
        local_d0 = (StringName *)0x0;
        local_c8 = (StringName *)0x0;
        OptionButton::get_selected();
        OptionButton::get_item_metadata((int)(Variant *)local_88);
        ::Variant::operator_cast_to_String((Variant *)&local_b0);
        if (local_d0 != local_b0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          local_d0 = local_b0;
          local_b0 = (StringName *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if (::Variant::needs_deinit[local_88[0]] != '\0') {
          ::Variant::_clear_internal();
        }
        pSVar2 = *(StringName **)(this + 0xa20);
        StringName::StringName((StringName *)&local_b0,(String *)&local_d0,false);
        cVar6 = AnimationMixer::has_animation_library(pSVar2);
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
        local_130 = (StringName *)0x0;
        if (cVar6 != '\0') {
          StringName::StringName((StringName *)&local_b8,(String *)&local_d0,false);
          AnimationMixer::get_animation_library((StringName *)&local_b0);
          Ref<AnimationLibrary>::operator=((Ref<AnimationLibrary> *)&local_c8,(Ref *)local_b0);
          Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_b0);
          if ((StringName::configured != '\0') && (local_b8 != 0)) {
            StringName::unref();
          }
          local_130 = local_c8;
        }
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"");
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"Add Animation");
        TTR((String *)&local_b0,(String *)&local_c0);
        EditorUndoRedoManager::create_action(this_00,(StringName *)&local_b0,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        cVar6 = '\0';
        if (local_130 == (StringName *)0x0) {
          Ref<AnimationLibrary>::instantiate<>((Ref<AnimationLibrary> *)&local_c8);
          local_b0 = (StringName *)0x0;
          local_130 = local_c8;
          Ref<AnimationLibrary>::operator=((Ref<AnimationLibrary> *)&local_b0,(Ref *)local_c8);
          StringName::StringName((StringName *)&local_b8,"add_animation_library",false);
          uVar9 = fetch_mixer_for_library(this);
          EditorUndoRedoManager::add_do_method<char_const*,Ref<AnimationLibrary>>
                    (this_00,uVar9,(String *)&local_b8,&_LC8,(StringName *)&local_b0);
          if ((StringName::configured != '\0') && (local_b8 != 0)) {
            StringName::unref();
          }
          Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_b0);
          String::parse_latin1((String *)&local_d0,"");
          cVar6 = cVar5;
        }
        local_b0 = (StringName *)0x0;
        Ref<Animation>::operator=((Ref<Animation> *)&local_b0,(Ref *)local_120);
        local_b8 = 0;
        if (local_f8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f8);
        }
        StringName::StringName((StringName *)&local_c0,"add_animation",false);
        ::Variant::Variant((Variant *)local_88,(String *)&local_b8);
        ::Variant::Variant((Variant *)local_70,(Object *)local_b0);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        pVVar13 = (Variant *)local_40;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_do_methodp
                  ((Object *)this_00,local_130,(Variant **)&local_c0,(int)&local_a8);
        do {
          pVVar14 = pVVar13 + -0x18;
          pVVar13 = pVVar13 + -0x18;
          if (::Variant::needs_deinit[*(int *)pVVar14] != '\0') {
            ::Variant::_clear_internal();
          }
        } while (pVVar13 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_c0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        Ref<Animation>::unref((Ref<Animation> *)&local_b0);
        local_b0 = (StringName *)0x0;
        if (local_f8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_f8);
        }
        StringName::StringName((StringName *)&local_b8,"remove_animation",false);
        EditorUndoRedoManager::add_undo_method<String>
                  (this_00,local_130,(String *)&local_b8,(StringName *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        pAVar3 = *(AnimationPlayer **)(this + 0xa20);
        StringName::StringName((StringName *)&local_b0,"_animation_player_changed",false);
        EditorUndoRedoManager::add_do_method<AnimationPlayer*>
                  (this_00,(Object *)this,(StringName *)&local_b0,pAVar3);
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
        pAVar3 = *(AnimationPlayer **)(this + 0xa20);
        StringName::StringName((StringName *)&local_b0,"_animation_player_changed",false);
        EditorUndoRedoManager::add_undo_method<AnimationPlayer*>
                  (this_00,(Object *)this,(StringName *)&local_b0,pAVar3);
        if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
          StringName::unref();
        }
        cVar5 = OptionButton::has_selectable_items();
        if (cVar5 == '\0') {
          StringName::StringName((StringName *)&local_b0,"_start_onion_skinning",false);
          local_88[0] = 0;
          local_88[1] = 0;
          local_80 = (undefined1  [16])0x0;
          EditorUndoRedoManager::add_do_methodp
                    ((Object *)this_00,(StringName *)this,(Variant **)&local_b0,0);
          if (::Variant::needs_deinit[local_88[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
            StringName::unref();
          }
          StringName::StringName((StringName *)&local_b0,"_stop_onion_skinning",false);
          local_88[0] = 0;
          local_88[1] = 0;
          local_80 = (undefined1  [16])0x0;
          EditorUndoRedoManager::add_undo_methodp
                    ((Object *)this_00,(StringName *)this,(Variant **)&local_b0,0);
          if (::Variant::needs_deinit[local_88[0]] != '\0') {
            ::Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
            StringName::unref();
          }
        }
        if (cVar6 != '\0') {
          StringName::StringName((StringName *)&local_b0,"remove_animation_library",false);
          pOVar8 = (Object *)fetch_mixer_for_library(this);
          EditorUndoRedoManager::add_undo_method<char_const*>
                    (this_00,pOVar8,(StringName *)&local_b0,"");
          if ((StringName::configured != '\0') && (local_b0 != (StringName *)0x0)) {
            StringName::unref();
          }
        }
        EditorUndoRedoManager::commit_action(bVar11);
        cVar5 = String::operator!=((String *)&local_d0,"");
        if (cVar5 != '\0') {
          local_b8 = 0;
          String::parse_latin1((String *)&local_b8,"/");
          String::operator+((String *)&local_b0,(String *)&local_d0);
          if (local_d0 != local_b0) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            local_d0 = local_b0;
            local_b0 = (StringName *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        }
        if (this[0xa30] != (AnimationPlayerEditor)0x0) {
          AnimationPlayerEditorPlugin::_update_dummy_player
                    (*(AnimationPlayerEditorPlugin **)(this + 0xa10),
                     *(AnimationMixer **)(this + 0xa18));
        }
        String::operator+((String *)&local_b0,(String *)&local_d0);
        _select_anim_by_name(this,(String *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        Ref<AnimationLibrary>::unref((Ref<AnimationLibrary> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        Ref<Animation>::unref((Ref<Animation> *)&local_d8);
      }
      Window::hide();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      goto LAB_0010ead6;
    }
    uVar9 = *(undefined8 *)(this + 0xb20);
    String::operator+((String *)&local_b8,(String *)&local_f0);
    local_c8 = (StringName *)0x0;
    String::parse_latin1((String *)&local_c8,"");
    local_d0 = (StringName *)0x0;
    String::parse_latin1((String *)&local_d0,"Animation \'%s\' already exists!");
    TTR((String *)&local_c0,(String *)&local_d0);
    vformat<String>((StringName *)&local_b0,(String *)&local_c0,(String *)&local_b8);
    AcceptDialog::set_text(uVar9,(StringName *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    local_88[0] = 0;
    local_88[1] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xb20));
LAB_0010ebe4:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  }
LAB_0010eace:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
LAB_0010ead6:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationPlayerEditor::_play_pressed() */

void __thiscall AnimationPlayerEditor::_play_pressed(AnimationPlayerEditor *this)

{
  StringName *pSVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  Object *local_58;
  String *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_current();
  if ((local_78 != 0) && (1 < *(uint *)(local_78 + -8))) {
    AnimationPlayer::get_assigned_animation();
    cVar3 = String::operator==((String *)&local_78,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if (cVar3 != '\0') {
      AnimationPlayer::stop(SUB81(*(undefined8 *)(this + 0xa20),0));
    }
    StringName::StringName((StringName *)&local_60,(String *)&local_78,false);
    AnimationMixer::get_animation((StringName *)&local_58);
    cVar3 = _validate_tracks(this);
    if (local_58 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_58);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_58 + 0x140))(local_58);
          Memory::free_static(local_58,false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    if (cVar3 == '\0') {
      _err_print_error("_play_pressed","editor/plugins/animation_player_editor_plugin.cpp",0x128,
                       "Condition \"!_validate_tracks(player->get_animation(current))\" is true.",
                       "Animation tracks may have any invalid key, abort playing.",1,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      goto LAB_0011028d;
    }
    AnimationTrackEditor::get_selected_section();
    if ((local_50[0] == (String *)0x0) || (*(long *)(local_50[0] + -8) != 2)) {
      pSVar1 = *(StringName **)(this + 0xa20);
      StringName::StringName((StringName *)&local_60,(String *)&local_78,false);
      AnimationPlayer::play(pSVar1,_LC291,_LC2,SUB81((StringName *)&local_60,0));
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      goto LAB_001103bf;
    }
    StringName::StringName((StringName *)&local_70,local_50[0],false);
    if (local_50[0] == (String *)0x0) {
      lVar5 = 0;
LAB_00110541:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,1,lVar5,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar5 = *(long *)(local_50[0] + -8);
    if (lVar5 < 2) goto LAB_00110541;
    StringName::StringName((StringName *)&local_68,local_50[0] + 8,false);
    pSVar1 = *(StringName **)(this + 0xa20);
    StringName::StringName((StringName *)&local_60,(String *)&local_78,false);
    AnimationPlayer::play_section_with_markers
              (pSVar1,(StringName *)&local_60,(StringName *)&local_70,_LC291,_LC2,
               SUB81((StringName *)&local_68,0));
    if (StringName::configured != '\0') {
      if (local_60 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_001103bf;
      }
      if (local_68 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_001103bf;
      }
      if (local_70 != 0) {
        StringName::unref();
      }
    }
LAB_001103bf:
    CowData<String>::_unref((CowData<String> *)local_50);
  }
  Button::set_button_icon(*(Ref **)(this + 0xa40));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_0011028d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_play_from_pressed() */

void __thiscall AnimationPlayerEditor::_play_from_pressed(AnimationPlayerEditor *this)

{
  StringName *pSVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long in_FS_OFFSET;
  double dVar6;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  Object *local_58;
  String *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_current();
  if ((local_78 != 0) && (1 < *(uint *)(local_78 + -8))) {
    dVar6 = (double)AnimationPlayer::get_current_animation_position();
    AnimationPlayer::get_assigned_animation();
    cVar3 = String::operator==((String *)&local_78,(String *)&local_58);
    if (cVar3 == '\0') {
LAB_00110651:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    else {
      cVar3 = AnimationPlayer::is_playing();
      if (cVar3 == '\0') goto LAB_00110651;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      (**(code **)(**(long **)(this + 0xa20) + 0x230))();
    }
    StringName::StringName((StringName *)&local_60,(String *)&local_78,false);
    AnimationMixer::get_animation((StringName *)&local_58);
    cVar3 = _validate_tracks(this);
    if (local_58 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_58);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_58 + 0x140))(local_58);
          Memory::free_static(local_58,false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    if (cVar3 == '\0') {
      _err_print_error("_play_from_pressed","editor/plugins/animation_player_editor_plugin.cpp",
                       0x13f,
                       "Condition \"!_validate_tracks(player->get_animation(current))\" is true.",
                       "Animation tracks may have any invalid key, abort playing.",1,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      goto LAB_001105f0;
    }
    AnimationPlayer::seek_internal(dVar6,SUB81(*(undefined8 *)(this + 0xa20),0),true,true);
    AnimationTrackEditor::get_selected_section();
    if ((local_50[0] == (String *)0x0) || (*(long *)(local_50[0] + -8) != 2)) {
      pSVar1 = *(StringName **)(this + 0xa20);
      StringName::StringName((StringName *)&local_60,(String *)&local_78,false);
      AnimationPlayer::play(pSVar1,_LC291,_LC2,SUB81((StringName *)&local_60,0));
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      goto LAB_00110756;
    }
    StringName::StringName((StringName *)&local_70,local_50[0],false);
    if (local_50[0] == (String *)0x0) {
      lVar5 = 0;
LAB_001108f4:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,1,lVar5,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar5 = *(long *)(local_50[0] + -8);
    if (lVar5 < 2) goto LAB_001108f4;
    StringName::StringName((StringName *)&local_68,local_50[0] + 8,false);
    pSVar1 = *(StringName **)(this + 0xa20);
    StringName::StringName((StringName *)&local_60,(String *)&local_78,false);
    AnimationPlayer::play_section_with_markers
              (pSVar1,(StringName *)&local_60,(StringName *)&local_70,_LC291,_LC2,
               SUB81((StringName *)&local_68,0));
    if (StringName::configured != '\0') {
      if (local_60 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00110756;
      }
      if (local_68 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00110756;
      }
      if (local_70 != 0) {
        StringName::unref();
      }
    }
LAB_00110756:
    CowData<String>::_unref((CowData<String> *)local_50);
  }
  Button::set_button_icon(*(Ref **)(this + 0xa40));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_001105f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_play_bw_pressed() */

void __thiscall AnimationPlayerEditor::_play_bw_pressed(AnimationPlayerEditor *this)

{
  StringName *pSVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  Object *local_58;
  String *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_current();
  if ((local_78 != 0) && (1 < *(uint *)(local_78 + -8))) {
    AnimationPlayer::get_assigned_animation();
    cVar3 = String::operator==((String *)&local_78,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if (cVar3 != '\0') {
      AnimationPlayer::stop(SUB81(*(undefined8 *)(this + 0xa20),0));
    }
    StringName::StringName((StringName *)&local_60,(String *)&local_78,false);
    AnimationMixer::get_animation((StringName *)&local_58);
    cVar3 = _validate_tracks(this);
    if (local_58 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_58);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_58 + 0x140))(local_58);
          Memory::free_static(local_58,false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    if (cVar3 == '\0') {
      _err_print_error("_play_bw_pressed","editor/plugins/animation_player_editor_plugin.cpp",0x15c,
                       "Condition \"!_validate_tracks(player->get_animation(current))\" is true.",
                       "Animation tracks may have any invalid key, abort playing.",1,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      goto LAB_0011099d;
    }
    AnimationTrackEditor::get_selected_section();
    if ((local_50[0] == (String *)0x0) || (*(long *)(local_50[0] + -8) != 2)) {
      pSVar1 = *(StringName **)(this + 0xa20);
      StringName::StringName((StringName *)&local_60,(String *)&local_78,false);
      AnimationPlayer::play_backwards(pSVar1,_LC291);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      goto LAB_00110ac5;
    }
    StringName::StringName((StringName *)&local_70,local_50[0],false);
    if (local_50[0] == (String *)0x0) {
      lVar5 = 0;
LAB_00110c36:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,1,lVar5,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar5 = *(long *)(local_50[0] + -8);
    if (lVar5 < 2) goto LAB_00110c36;
    StringName::StringName((StringName *)&local_68,local_50[0] + 8,false);
    pSVar1 = *(StringName **)(this + 0xa20);
    StringName::StringName((StringName *)&local_60,(String *)&local_78,false);
    AnimationPlayer::play_section_with_markers_backwards
              (pSVar1,(StringName *)&local_60,(StringName *)&local_70,_LC291);
    if (StringName::configured != '\0') {
      if (local_60 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00110ac5;
      }
      if (local_68 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00110ac5;
      }
      if (local_70 != 0) {
        StringName::unref();
      }
    }
LAB_00110ac5:
    CowData<String>::_unref((CowData<String> *)local_50);
  }
  Button::set_button_icon(*(Ref **)(this + 0xa40));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_0011099d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_play_bw_from_pressed() */

void __thiscall AnimationPlayerEditor::_play_bw_from_pressed(AnimationPlayerEditor *this)

{
  StringName *pSVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long in_FS_OFFSET;
  double dVar6;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  Object *local_58;
  String *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_current();
  if ((local_78 != 0) && (1 < *(uint *)(local_78 + -8))) {
    dVar6 = (double)AnimationPlayer::get_current_animation_position();
    AnimationPlayer::get_assigned_animation();
    cVar3 = String::operator==((String *)&local_78,(String *)&local_58);
    if (cVar3 == '\0') {
LAB_00110d41:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    else {
      cVar3 = AnimationPlayer::is_playing();
      if (cVar3 == '\0') goto LAB_00110d41;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      (**(code **)(**(long **)(this + 0xa20) + 0x230))();
    }
    StringName::StringName((StringName *)&local_60,(String *)&local_78,false);
    AnimationMixer::get_animation((StringName *)&local_58);
    cVar3 = _validate_tracks(this);
    if (local_58 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_58);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_58 + 0x140))(local_58);
          Memory::free_static(local_58,false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    if (cVar3 == '\0') {
      _err_print_error("_play_bw_from_pressed","editor/plugins/animation_player_editor_plugin.cpp",
                       0x173,
                       "Condition \"!_validate_tracks(player->get_animation(current))\" is true.",
                       "Animation tracks may have any invalid key, abort playing.",1,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      goto LAB_00110ce0;
    }
    AnimationPlayer::seek_internal(dVar6,SUB81(*(undefined8 *)(this + 0xa20),0),true,true);
    AnimationTrackEditor::get_selected_section();
    if ((local_50[0] == (String *)0x0) || (*(long *)(local_50[0] + -8) != 2)) {
      pSVar1 = *(StringName **)(this + 0xa20);
      StringName::StringName((StringName *)&local_60,(String *)&local_78,false);
      AnimationPlayer::play_backwards(pSVar1,_LC291);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      goto LAB_00110e3c;
    }
    StringName::StringName((StringName *)&local_70,local_50[0],false);
    if (local_50[0] == (String *)0x0) {
      lVar5 = 0;
LAB_00110fd4:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,1,lVar5,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar5 = *(long *)(local_50[0] + -8);
    if (lVar5 < 2) goto LAB_00110fd4;
    StringName::StringName((StringName *)&local_68,local_50[0] + 8,false);
    pSVar1 = *(StringName **)(this + 0xa20);
    StringName::StringName((StringName *)&local_60,(String *)&local_78,false);
    AnimationPlayer::play_section_with_markers_backwards
              (pSVar1,(StringName *)&local_60,(StringName *)&local_70,_LC291);
    if (StringName::configured != '\0') {
      if (local_60 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00110e3c;
      }
      if (local_68 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00110e3c;
      }
      if (local_70 != 0) {
        StringName::unref();
      }
    }
LAB_00110e3c:
    CowData<String>::_unref((CowData<String> *)local_50);
  }
  Button::set_button_icon(*(Ref **)(this + 0xa40));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_00110ce0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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



/* AnimationPlayerEditor::_bind_methods() */

void AnimationPlayerEditor::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  MethodBind *pMVar3;
  long in_FS_OFFSET;
  CowData<char32_t> *local_140;
  undefined8 local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined *local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined8 local_c0;
  CowData<StringName> local_b8 [8];
  long lStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_c8,(char ***)"_animation_player_changed",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar3 = create_method_bind<AnimationPlayerEditor,Object*>(_animation_player_changed);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"_animation_update_key_frame",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar3 = create_method_bind<AnimationPlayerEditor>(_animation_update_key_frame);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"_start_onion_skinning",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar3 = create_method_bind<AnimationPlayerEditor>(_start_onion_skinning);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"_stop_onion_skinning",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar3 = create_method_bind<AnimationPlayerEditor>(_stop_onion_skinning);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  local_118 = 0;
  local_c8 = "";
  local_120 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_120);
  local_c8 = "name";
  local_128 = 0;
  local_c0 = 4;
  String::parse_latin1((StrRange *)&local_128);
  local_f8[0] = 4;
  local_f0 = 0;
  if (local_128 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_128);
  }
  local_e8 = (undefined *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
    local_d0 = 6;
    if (local_e0 == 0x11) {
      StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
      if (local_e8 == local_c8) {
        if ((StringName::configured != '\0') && (local_c8 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_e8 = local_c8;
      }
      goto LAB_001114f7;
    }
  }
  local_d0 = 6;
  StringName::operator=((StringName *)&local_e8,(StringName *)&local_118);
LAB_001114f7:
  local_140 = (CowData<char32_t> *)&local_d8;
  local_110 = 0;
  local_c8 = "animation_selected";
  local_c0 = 0x12;
  String::parse_latin1((StrRange *)&local_110);
  _local_b8 = (undefined1  [16])0x0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)local_f8);
  local_108 = "AnimationPlayerEditor";
  local_130 = 0;
  local_100 = 0x15;
  String::parse_latin1((StrRange *)&local_130);
  StringName::StringName((StringName *)&local_108,(String *)&local_130,false);
  ClassDB::add_signal((StringName *)&local_108,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
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
  CowData<Variant>::_unref((CowData<Variant> *)&local_78);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (lStack_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref(local_140);
  if ((StringName::configured != '\0') && (local_e8 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationPlayerEditor::_animation_duplicate() */

void __thiscall AnimationPlayerEditor::_animation_duplicate(AnimationPlayerEditor *this)

{
  ulong uVar1;
  StringName *pSVar2;
  String *pSVar3;
  Vector2i *pVVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  wchar32 wVar17;
  CowData<char32_t> *this_00;
  long in_FS_OFFSET;
  CowData<String> *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  undefined8 *local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar6 = OptionButton::has_selectable_items();
  if (cVar6 == '\0') goto LAB_0011182b;
  OptionButton::get_selected();
  OptionButton::get_item_text((int)(CowData<char32_t> *)&local_98);
  StringName::StringName((StringName *)&local_68,(String *)&local_98,false);
  AnimationMixer::get_animation((StringName *)&local_90);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (local_90 != 0) {
    local_88 = 0;
    if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_98);
    }
    String::split((char *)&local_68,SUB81((CowData<char32_t> *)&local_88,0),0x1190f3);
    if (local_60[0] != (undefined8 *)0x0) {
      lVar8 = local_60[0][-1];
      uVar10 = (int)lVar8 - 1;
      if (0 < (int)uVar10) {
        uVar15 = (ulong)uVar10;
        if (lVar8 <= (long)uVar15) goto LAB_00111f63;
        cVar6 = String::is_valid_int();
        if (cVar6 == '\0') goto LAB_0011196a;
        if (local_60[0] == (undefined8 *)0x0) {
LAB_00111f60:
          lVar8 = 0;
LAB_00111f63:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar15,lVar8,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar8 = local_60[0][-1];
        if (lVar8 <= (long)uVar15) goto LAB_00111f63;
        lVar8 = String::to_int();
        if (lVar8 < 0) goto LAB_0011196a;
        if (local_60[0] == (undefined8 *)0x0) goto LAB_00111f60;
        lVar8 = local_60[0][-1];
        if (lVar8 <= (long)uVar15) goto LAB_00111f63;
        String::to_int();
        if (local_60[0] == (undefined8 *)0x0) {
          lVar8 = 0;
LAB_00111f0d:
          _err_print_index_error
                    ("remove_at","./core/templates/cowdata.h",0xe4,uVar15,lVar8,"p_index","size()",
                     "",false,false);
        }
        else {
          lVar8 = local_60[0][-1];
          if (lVar8 <= (long)uVar15) goto LAB_00111f0d;
          CowData<String>::_copy_on_write((CowData<String> *)local_60);
          if (local_60[0] == (undefined8 *)0x0) {
LAB_00112049:
            uVar14 = 0x157;
            pcVar12 = "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER";
LAB_0011205b:
            _err_print_error("resize","./core/templates/cowdata.h",uVar14,pcVar12,0,0);
          }
          else {
            uVar13 = local_60[0][-1];
            uVar1 = uVar13 - 1;
            if ((long)uVar1 <= (long)uVar15) {
              if (-1 < (long)uVar1) {
                if (uVar1 != 0) goto LAB_00111cf2;
                CowData<String>::_unref((CowData<String> *)local_60);
                goto LAB_00111e38;
              }
              goto LAB_00112049;
            }
            this_00 = (CowData<char32_t> *)(local_60[0] + uVar15);
            do {
              if (*(long *)this_00 != *(long *)(this_00 + 8)) {
                CowData<char32_t>::_unref(this_00);
                uVar14 = *(undefined8 *)(this_00 + 8);
                *(undefined8 *)(this_00 + 8) = 0;
                *(undefined8 *)this_00 = uVar14;
              }
              uVar15 = uVar15 + 1;
              this_00 = this_00 + 8;
            } while (uVar1 != uVar15);
            if (local_60[0] == (undefined8 *)0x0) {
              lVar8 = 0;
              CowData<String>::_copy_on_write((CowData<String> *)local_60);
              uVar13 = 0;
            }
            else {
              uVar13 = local_60[0][-1];
              if (uVar13 == uVar1) goto LAB_00111e38;
LAB_00111cf2:
              CowData<String>::_copy_on_write((CowData<String> *)local_60);
              lVar8 = uVar13 * 8;
              if (lVar8 != 0) {
                uVar15 = lVar8 - 1U | lVar8 - 1U >> 1;
                uVar15 = uVar15 | uVar15 >> 2;
                uVar15 = uVar15 | uVar15 >> 4;
                uVar15 = uVar15 | uVar15 >> 8;
                uVar15 = uVar15 | uVar15 >> 0x10;
                lVar8 = (uVar15 | uVar15 >> 0x20) + 1;
              }
            }
            if (uVar1 * 8 == 0) {
LAB_00112092:
              uVar14 = 0x16a;
              pcVar12 = 
              "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
              ;
              goto LAB_0011205b;
            }
            uVar15 = uVar1 * 8 - 1;
            uVar15 = uVar15 | uVar15 >> 1;
            uVar15 = uVar15 | uVar15 >> 2;
            uVar15 = uVar15 | uVar15 >> 4;
            uVar15 = uVar15 | uVar15 >> 8;
            uVar15 = uVar15 | uVar15 >> 0x10;
            uVar15 = uVar15 | uVar15 >> 0x20;
            lVar11 = uVar15 + 1;
            if (lVar11 == 0) goto LAB_00112092;
            uVar16 = uVar1;
            if ((long)uVar13 < (long)uVar1) {
              if (lVar11 == lVar8) {
LAB_00112025:
                if (local_60[0] == (undefined8 *)0x0) {
                  FUN_0011a636();
                  return;
                }
                lVar8 = local_60[0][-1];
                puVar9 = local_60[0];
                if (lVar8 < (long)uVar1) {
LAB_00111e05:
                  puVar9 = local_60[0];
                  memset(local_60[0] + lVar8,0,(uVar1 - lVar8) * 8);
                }
                puVar9[-1] = uVar1;
                goto LAB_00111e38;
              }
              if (uVar13 != 0) {
                iVar7 = CowData<String>::_realloc((CowData<String> *)local_60,lVar11);
                if (iVar7 != 0) goto LAB_00111e38;
                goto LAB_00112025;
              }
              puVar9 = (undefined8 *)Memory::alloc_static(uVar15 + 0x11,false);
              if (puVar9 != (undefined8 *)0x0) {
                local_60[0] = puVar9 + 2;
                *puVar9 = 1;
                puVar9[1] = 0;
                lVar8 = 0;
                goto LAB_00111e05;
              }
              uVar14 = 0x171;
              pcVar12 = "Parameter \"mem_new\" is null.";
              goto LAB_0011205b;
            }
            while( true ) {
              if (local_60[0] == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              if ((ulong)local_60[0][-1] <= uVar16) break;
              CowData<char32_t>::_unref((CowData<char32_t> *)(local_60[0] + uVar16));
              uVar16 = uVar16 + 1;
            }
            if (lVar11 == lVar8) {
LAB_00111ffa:
              local_60[0][-1] = uVar1;
            }
            else {
              iVar7 = CowData<String>::_realloc((CowData<String> *)local_60,lVar11);
              if (iVar7 == 0) {
                if (local_60[0] == (undefined8 *)0x0) {
                  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                goto LAB_00111ffa;
              }
            }
          }
        }
LAB_00111e38:
        local_78 = 0;
        String::parse_latin1((String *)&local_78,"_");
        String::join((Vector *)&local_70);
        if (local_88 != local_70) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          local_88 = local_70;
          local_70 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      }
    }
LAB_0011196a:
    local_a8 = (CowData<String> *)local_60;
    while( true ) {
      local_80 = 0;
      if (local_88 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_88);
      }
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"_%d");
      vformat<int>((String *)&local_70,(int)(String *)&local_78);
      String::operator+=((String *)&local_80,(String *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      pSVar2 = *(StringName **)(this + 0xa20);
      StringName::StringName((StringName *)&local_70,(String *)&local_80,false);
      cVar6 = AnimationMixer::has_animation(pSVar2);
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
      if (cVar6 == '\0') break;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    }
    if (local_88 != local_80) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_80);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    wVar17 = (wchar32)(CowData<char32_t> *)&local_88;
    iVar7 = String::find_char(wVar17,0x2f);
    if (iVar7 != -1) {
      String::get_slice((char *)&local_70,wVar17);
      if (local_88 != local_70) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        local_88 = local_70;
        local_70 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    _update_name_dialog_library_dropdown(this);
    pSVar3 = *(String **)(this + 0xb18);
    *(undefined4 *)(this + 0xb28) = 2;
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"");
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"Duplicate Animation");
    TTR((String *)&local_70,(String *)&local_80);
    Window::set_title(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    pSVar3 = *(String **)(this + 0xab0);
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"");
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"Duplicated Animation Name:");
    TTR((String *)&local_70,(String *)&local_80);
    Label::set_text(pSVar3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_70 = 0;
    uVar14 = *(undefined8 *)(this + 0xaa0);
    if (local_88 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_88);
    }
    LineEdit::set_text(uVar14,(String *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    pVVar4 = *(Vector2i **)(this + 0xb18);
    local_50 = _LC162;
    local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
    Window::popup_centered(pVVar4);
    LineEdit::select_all();
    Control::grab_focus();
    CowData<String>::_unref(local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  Ref<Animation>::unref((Ref<Animation> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
LAB_0011182b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationPlayerEditor::_animation_tool_menu(int) */

void __thiscall AnimationPlayerEditor::_animation_tool_menu(AnimationPlayerEditor *this,int param_1)

{
  Object *pOVar1;
  Ref *pRVar2;
  char cVar3;
  Ref *pRVar4;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  Ref *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_current();
  if ((local_60 == 0) || (*(uint *)(local_60 + -8) < 2)) {
    switch(param_1) {
    case 0:
      _animation_new(this);
      break;
    case 1:
      pRVar4 = (Ref *)0x0;
      goto switchD_0011226c_caseD_1;
    case 2:
      _animation_duplicate(this);
      break;
    case 3:
      cVar3 = OptionButton::has_selectable_items();
      if (cVar3 != '\0') {
        _animation_rename(this);
      }
      break;
    case 4:
      _edit_animation_blend(this);
      break;
    case 5:
      _animation_remove(this);
    }
    goto switchD_0011215e_caseD_6;
  }
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  AnimationMixer::get_animation((StringName *)&local_50);
  pRVar4 = local_50;
  if (local_50 != (Ref *)0x0) {
    local_48 = 0;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pRVar4 = (Ref *)0x0;
    }
    Ref<Animation>::unref((Ref<Animation> *)&local_48);
  }
  Ref<Animation>::unref((Ref<Animation> *)&local_50);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  pRVar2 = EditorNode::singleton;
  switch(param_1) {
  case 0:
    _animation_new(this);
    break;
  case 1:
switchD_0011226c_caseD_1:
    pOVar1 = *(Object **)(this + 0xaf8);
    fetch_mixer_for_library(this);
    AnimationLibraryEditor::set_animation_mixer(pOVar1);
    AnimationLibraryEditor::show_dialog();
    break;
  case 2:
    _animation_duplicate(this);
    break;
  case 3:
    cVar3 = OptionButton::has_selectable_items();
    if (cVar3 != '\0') {
      _animation_rename(this);
    }
    break;
  case 4:
    _edit_animation_blend(this);
    break;
  case 5:
    _animation_remove(this);
    break;
  case 6:
    if (pRVar4 == (Ref *)0x0) goto switchD_0011215e_caseD_6;
    local_48 = 0;
    Ref<Resource>::operator=((Ref<Resource> *)&local_48,pRVar4);
    EditorNode::edit_resource(pRVar2);
    Ref<Resource>::unref((Ref<Resource> *)&local_48);
    goto LAB_00112196;
  }
  if (pRVar4 != (Ref *)0x0) {
LAB_00112196:
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)pRVar4), cVar3 != '\0')) {
      (**(code **)(*(long *)pRVar4 + 0x140))(pRVar4);
      Memory::free_static(pRVar4,false);
    }
  }
switchD_0011215e_caseD_6:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_go_to_nearest_keyframe(bool) */

void __thiscall
AnimationPlayerEditor::_go_to_nearest_keyframe(AnimationPlayerEditor *this,bool param_1)

{
  long *plVar1;
  Node *pNVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  NodePath *pNVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  long in_FS_OFFSET;
  bool bVar14;
  double dVar15;
  double dVar16;
  double local_98;
  double local_90;
  float local_78;
  Object *local_68;
  long local_60;
  long local_58;
  int *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _get_current();
  if ((local_58 == 0) || (iVar5 = (int)*(undefined8 *)(local_58 + -8), iVar5 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    goto LAB_00112755;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (iVar5 == 1) goto LAB_00112755;
  AnimationPlayer::get_assigned_animation();
  StringName::StringName((StringName *)&local_60,(String *)&local_58,false);
  AnimationMixer::get_animation((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_90 = (double)AnimationPlayer::get_current_animation_position();
  dVar16 = _LC116 * local_90 + _LC116 * local_90;
  dVar15 = _LC307;
  if (_LC307 <= dVar16) {
    dVar15 = dVar16;
  }
  if (param_1) {
    local_90 = local_90 - dVar15;
    local_78 = 0.0;
  }
  else {
    local_90 = local_90 + dVar15;
    local_78 = (float)Animation::get_length();
  }
  iVar5 = Animation::get_track_count();
  cVar3 = AnimationTrackEditor::is_bezier_editor_active();
  if (*(long *)(this + 0x240) == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
  }
  pNVar8 = (NodePath *)SceneTree::get_edited_scene_root();
  pNVar2 = *(Node **)(EditorNode::singleton + 0x608);
  local_50[0] = (int *)0x0;
  if (0 < iVar5) {
    piVar13 = (int *)0x0;
    iVar7 = 0;
    do {
      Animation::track_get_path((int)(StringName *)&local_60);
      Node::get_node_or_null(pNVar8);
      cVar4 = EditorSelection::is_selected(pNVar2);
      NodePath::~NodePath((NodePath *)&local_60);
      if (cVar4 != '\0') {
        if (piVar13 == (int *)0x0) {
          lVar11 = 1;
        }
        else {
          lVar11 = *(long *)(piVar13 + -2) + 1;
        }
        iVar6 = CowData<int>::resize<false>((CowData<int> *)local_50,lVar11);
        piVar13 = local_50[0];
        if (iVar6 == 0) {
          if (local_50[0] == (int *)0x0) {
            lVar9 = -1;
            lVar11 = 0;
          }
          else {
            lVar11 = *(long *)(local_50[0] + -2);
            lVar9 = lVar11 + -1;
            if (-1 < lVar9) {
              CowData<int>::_copy_on_write((CowData<int> *)local_50);
              local_50[0][lVar9] = iVar7;
              piVar13 = local_50[0];
              goto joined_r0x0011253e;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar11,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
          piVar13 = local_50[0];
        }
      }
joined_r0x0011253e:
      if (iVar5 == iVar7 + 1) goto LAB_001125e6;
      iVar7 = iVar7 + 1;
    } while( true );
  }
LAB_00112998:
  AnimationPlayer::seek_internal((double)local_78,SUB81(*(undefined8 *)(this + 0xa20),0),true,true);
  Range::set_value((double)local_78);
  AnimationTrackEditor::set_anim_pos(local_78);
  goto LAB_0011270c;
LAB_001125e6:
  iVar5 = 0;
  if ((piVar13 == (int *)0x0) || (*(long *)(piVar13 + -2) < 1)) {
    local_98 = (double)local_78;
    do {
      while( true ) {
        iVar6 = iVar5;
        if (cVar3 != '\0') {
          while (cVar4 = Animation::track_get_type((int)local_68), cVar4 != '\x06') {
            bVar14 = iVar7 == iVar6;
            iVar6 = iVar6 + 1;
            if (bVar14) goto LAB_001126b5;
          }
        }
        iVar5 = Animation::track_find_key(local_90,local_68,iVar6,0,0,!param_1);
        if (iVar5 != -1) break;
LAB_0011264a:
        iVar5 = iVar6 + 1;
        if (iVar7 == iVar6) goto LAB_001126b5;
      }
      dVar15 = (double)Animation::track_get_key_time((int)local_68,iVar6);
      if (param_1) {
        if (local_98 < dVar15) goto LAB_0011262f;
        goto LAB_0011264a;
      }
      if (dVar15 < local_98) {
LAB_0011262f:
        local_78 = (float)dVar15;
        local_98 = (double)local_78;
        goto LAB_0011264a;
      }
      iVar5 = iVar6 + 1;
    } while (iVar7 != iVar6);
LAB_001126b5:
    AnimationPlayer::seek_internal(local_98,SUB81(*(undefined8 *)(this + 0xa20),0),true,true);
    Range::set_value(local_98);
    AnimationTrackEditor::set_anim_pos(local_78);
    if (piVar13 == (int *)0x0) goto LAB_0011270c;
  }
  else {
    CowData<int>::_copy_on_write((CowData<int> *)local_50);
    piVar12 = local_50[0];
    CowData<int>::_copy_on_write((CowData<int> *)local_50);
    piVar13 = local_50[0];
    if (local_50[0] == (int *)0x0) {
      piVar10 = (int *)0x0;
      if (piVar12 == (int *)0x0) goto LAB_00112998;
LAB_00112809:
      local_98 = (double)local_78;
LAB_0011286b:
      do {
        iVar5 = *piVar12;
        if (((cVar3 == '\0') || (cVar4 = Animation::track_get_type((int)local_68), cVar4 == '\x06'))
           && (iVar7 = Animation::track_find_key(local_90,local_68,iVar5,0,0,!param_1), iVar7 != -1)
           ) {
          dVar15 = (double)Animation::track_get_key_time((int)local_68,iVar5);
          if (param_1) {
            if (dVar15 <= local_98) goto LAB_00112862;
          }
          else if (local_98 <= dVar15) {
            piVar12 = piVar12 + 1;
            if (piVar10 == piVar12) break;
            goto LAB_0011286b;
          }
          local_78 = (float)dVar15;
          local_98 = (double)local_78;
        }
LAB_00112862:
        piVar12 = piVar12 + 1;
      } while (piVar10 != piVar12);
      goto LAB_001126b5;
    }
    piVar10 = local_50[0] + *(long *)(local_50[0] + -2);
    if (piVar12 != piVar10) goto LAB_00112809;
    AnimationPlayer::seek_internal
              ((double)local_78,SUB81(*(undefined8 *)(this + 0xa20),0),true,true);
    Range::set_value((double)local_78);
    AnimationTrackEditor::set_anim_pos(local_78);
  }
  LOCK();
  plVar1 = (long *)(piVar13 + -4);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    Memory::free_static(local_50[0] + -4,false);
  }
LAB_0011270c:
  if (((local_68 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
    (**(code **)(*(long *)local_68 + 0x140))(local_68);
    Memory::free_static(local_68,false);
  }
LAB_00112755:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::shortcut_input(Ref<InputEvent> const&) */

void __thiscall AnimationPlayerEditor::shortcut_input(AnimationPlayerEditor *this,Ref *param_1)

{
  char cVar1;
  Object *pOVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("shortcut_input","editor/plugins/animation_player_editor_plugin.cpp",0x648,
                       "Condition \"p_ev.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    pOVar2 = (Object *)__dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0)
    ;
    if (pOVar2 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 != '\0') {
        cVar1 = CanvasItem::is_visible_in_tree();
        if (cVar1 != '\0') {
          cVar1 = InputEvent::is_pressed();
          if (cVar1 != '\0') {
            cVar1 = (**(code **)(*(long *)pOVar2 + 0x1c8))(pOVar2);
            if (cVar1 == '\0') {
              pSVar3 = (String *)EditorSettings::get_singleton();
              local_38 = 0;
              String::parse_latin1((String *)&local_38,"animation_editor/stop_animation");
              cVar1 = EditorSettings::is_shortcut(pSVar3,(Ref *)&local_38);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
              if (cVar1 == '\0') {
                pSVar3 = (String *)EditorSettings::get_singleton();
                local_38 = 0;
                String::parse_latin1((String *)&local_38,"animation_editor/play_animation");
                cVar1 = EditorSettings::is_shortcut(pSVar3,(Ref *)&local_38);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
                if (cVar1 == '\0') {
                  pSVar3 = (String *)EditorSettings::get_singleton();
                  local_38 = 0;
                  String::parse_latin1
                            ((String *)&local_38,"animation_editor/play_animation_backwards");
                  cVar1 = EditorSettings::is_shortcut(pSVar3,(Ref *)&local_38);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
                  if (cVar1 == '\0') {
                    pSVar3 = (String *)EditorSettings::get_singleton();
                    local_38 = 0;
                    String::parse_latin1
                              ((String *)&local_38,"animation_editor/play_animation_from_start");
                    cVar1 = EditorSettings::is_shortcut(pSVar3,(Ref *)&local_38);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
                    if (cVar1 == '\0') {
                      pSVar3 = (String *)EditorSettings::get_singleton();
                      local_38 = 0;
                      String::parse_latin1
                                ((String *)&local_38,"animation_editor/play_animation_from_end");
                      cVar1 = EditorSettings::is_shortcut(pSVar3,(Ref *)&local_38);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
                      if (cVar1 == '\0') {
                        pSVar3 = (String *)EditorSettings::get_singleton();
                        local_38 = 0;
                        String::parse_latin1
                                  ((String *)&local_38,"animation_editor/go_to_next_keyframe");
                        cVar1 = EditorSettings::is_shortcut(pSVar3,(Ref *)&local_38);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
                        if (cVar1 == '\0') {
                          pSVar3 = (String *)EditorSettings::get_singleton();
                          local_38 = 0;
                          String::parse_latin1
                                    ((String *)&local_38,"animation_editor/go_to_previous_keyframe")
                          ;
                          cVar1 = EditorSettings::is_shortcut(pSVar3,(Ref *)&local_38);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
                          if (cVar1 != '\0') {
                            _go_to_nearest_keyframe(this,true);
                            Control::accept_event();
                          }
                        }
                        else {
                          _go_to_nearest_keyframe(this,false);
                          Control::accept_event();
                        }
                      }
                      else {
                        _play_bw_pressed(this);
                        Control::accept_event();
                      }
                    }
                    else {
                      _play_pressed(this);
                      Control::accept_event();
                    }
                  }
                  else {
                    _play_bw_from_pressed(this);
                    Control::accept_event();
                  }
                }
                else {
                  _play_from_pressed(this);
                  Control::accept_event();
                }
              }
              else {
                _stop_pressed(this);
                Control::accept_event();
              }
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
            goto LAB_00112e4c;
          }
        }
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_00112e4c;
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::is_visible_in_tree();
      return;
    }
  }
LAB_00112e4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_notification(int) */

void __thiscall AnimationPlayerEditor::_notification(AnimationPlayerEditor *this,int param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  Ref *pRVar3;
  AnimationPlayerEditor AVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  StringName *pSVar10;
  long *plVar11;
  CallableCustom *this_00;
  Object *pOVar12;
  undefined4 uVar13;
  Object *pOVar14;
  long in_FS_OFFSET;
  float fVar15;
  double dVar16;
  Image *local_90;
  Image *local_88;
  Ref *local_80;
  Object *local_78 [2];
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0x32) {
    if (9 < param_1) {
      switch(param_1) {
      case 10:
        plVar11 = (long *)MenuButton::get_popup();
        pcVar2 = *(code **)(*plVar11 + 0x108);
        create_custom_callable_function_pointer<AnimationPlayerEditor,int>
                  ((AnimationPlayerEditor *)local_78,(char *)this,
                   (_func_void_int *)"&AnimationPlayerEditor::_animation_tool_menu");
        (*pcVar2)(plVar11,SceneStringNames::singleton + 0x240,(AnimationPlayerEditor *)local_78,0);
        Callable::~Callable((Callable *)local_78);
        plVar11 = (long *)MenuButton::get_popup();
        pcVar2 = *(code **)(*plVar11 + 0x108);
        create_custom_callable_function_pointer<AnimationPlayerEditor,int>
                  ((AnimationPlayerEditor *)local_78,(char *)this,
                   (_func_void_int *)"&AnimationPlayerEditor::_onion_skinning_menu");
        (*pcVar2)(plVar11,SceneStringNames::singleton + 0x240,(AnimationPlayerEditor *)local_78,0);
        Callable::~Callable((Callable *)local_78);
        plVar11 = *(long **)(this + 0xb10);
        pcVar2 = *(code **)(*plVar11 + 0x108);
        create_custom_callable_function_pointer<AnimationPlayerEditor,int>
                  ((AnimationPlayerEditor *)local_78,(char *)this,
                   (_func_void_int *)"&AnimationPlayerEditor::_blend_editor_next_changed");
        (*pcVar2)(plVar11,SceneStringNames::singleton + 0x260,(AnimationPlayerEditor *)local_78,0);
        Callable::~Callable((Callable *)local_78);
        plVar11 = *(long **)(this + 0x240);
        if (plVar11 == (long *)0x0) {
          _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null."
                           ,0,0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pcVar2 = *(code **)(*plVar11 + 0x108);
        this_00 = (CallableCustom *)operator_new(0x48,"");
        CallableCustom::CallableCustom(this_00);
        *(undefined **)(this_00 + 0x20) = &_LC8;
        *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
        *(undefined ***)this_00 = &PTR_hash_0012d0e0;
        *(undefined8 *)(this_00 + 0x40) = 0;
        uVar1 = *(undefined8 *)(this + 0x60);
        *(undefined8 *)(this_00 + 0x10) = 0;
        *(undefined8 *)(this_00 + 0x30) = uVar1;
        *(code **)(this_00 + 0x38) = _node_removed;
        *(AnimationPlayerEditor **)(this_00 + 0x28) = this;
        CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
        *(char **)(this_00 + 0x20) = "AnimationPlayerEditor::_node_removed";
        Callable::Callable((Callable *)local_78,this_00);
        if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
           iVar9 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
        }
        (*pcVar2)(plVar11,&_notification(int)::{lambda()#1}::operator()()::sname,
                  (AnimationPlayerEditor *)local_78,0);
        Callable::~Callable((Callable *)local_78);
        pOVar12 = *(Object **)(EditorNode::singleton + 0x838);
        if (pOVar12 == (Object *)0x0) {
AnimationPlayerEditor__notification:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          pOVar12 = (Object *)0x0;
        }
        pcVar2 = *(code **)(*(long *)pOVar12 + 0x1d0);
        if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
           iVar9 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
        }
        (*pcVar2)((AnimationPlayerEditor *)local_78,pOVar12,SceneStringNames::singleton + 600,
                  &_notification(int)::{lambda()#2}::operator()()::sname);
        Control::add_theme_style_override
                  ((StringName *)this,(Ref *)(SceneStringNames::singleton + 600));
        if (((local_78[0] != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0'))
           && (cVar5 = predelete_handler(local_78[0]), cVar5 != '\0')) {
          (**(code **)(*(long *)local_78[0] + 0x140))(local_78[0]);
          Memory::free_static(local_78[0],false);
        }
        cVar5 = RefCounted::unreference();
        if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001130fa:
            Memory::free_static(pOVar12,false);
            return;
          }
          goto LAB_001147b1;
        }
        break;
      case 0x11:
        uVar1 = *(undefined8 *)(this + 0xb30);
        if ((*(long *)(this + 0xa20) == 0) || (this[0xa30] != (AnimationPlayerEditor)0x0)) {
          AnimationTrackEditor::show_inactive_player_warning(SUB81(uVar1,0));
        }
        else {
          AnimationMixer::is_active();
          AnimationTrackEditor::show_inactive_player_warning(SUB81(uVar1,0));
        }
        if (*(long *)(this + 0xa20) != 0) {
          this[0xb2c] = (AnimationPlayerEditor)0x1;
          cVar5 = AnimationPlayer::is_playing();
          if (cVar5 == '\0') {
            cVar5 = AnimationPlayer::is_valid();
            if (cVar5 == '\0') {
              Range::set_value(0.0);
            }
            else if (this[0xae0] != (AnimationPlayerEditor)0x0) {
              dVar16 = (double)AnimationPlayer::get_current_animation_position();
              Range::set_value(dVar16);
              dVar16 = (double)AnimationPlayer::get_current_animation_position();
              AnimationTrackEditor::set_anim_pos((float)dVar16);
              Button::set_button_icon(*(Ref **)(this + 0xa40));
            }
          }
          else {
            AnimationPlayer::get_assigned_animation();
            pSVar10 = *(StringName **)(this + 0xa20);
            StringName::StringName((StringName *)local_78,(String *)&local_88,false);
            cVar5 = AnimationMixer::has_animation(pSVar10);
            if ((StringName::configured != '\0') && (local_78[0] != (Object *)0x0)) {
              StringName::unref();
            }
            if (cVar5 != '\0') {
              StringName::StringName((StringName *)local_78,(String *)&local_88,false);
              AnimationMixer::get_animation((StringName *)&local_80);
              if ((StringName::configured != '\0') && (local_78[0] != (Object *)0x0)) {
                StringName::unref();
              }
              if (local_80 != (Ref *)0x0) {
                fVar15 = (float)Animation::get_length();
                Range::set_max((double)fVar15);
              }
              Ref<Animation>::unref((Ref<Animation> *)&local_80);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            dVar16 = (double)AnimationPlayer::get_current_animation_position();
            Range::set_value(dVar16);
            dVar16 = (double)AnimationPlayer::get_current_animation_position();
            AnimationTrackEditor::set_anim_pos((float)dVar16);
          }
          AVar4 = (AnimationPlayerEditor)AnimationPlayer::is_playing();
          this[0xb2c] = (AnimationPlayerEditor)0x0;
          this[0xae0] = AVar4;
        }
        break;
      case 0x1f:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _ensure_dummy_player(this);
          return;
        }
        goto LAB_001147b1;
      case 0x2d:
      case 0x31:
        goto switchD_00112eb4_caseD_2d;
      }
    }
  }
  else {
    if (param_1 == 0x7da) {
switchD_00112eb4_caseD_2d:
      if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      Ref<Texture2D>::operator=((Ref<Texture2D> *)(this + 0xab8),(Ref *)local_78[0]);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      Ref<Texture2D>::operator=((Ref<Texture2D> *)(this + 0xac0),(Ref *)local_78[0]);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      if ((*(long *)(this + 0xa20) == 0) || (cVar5 = AnimationPlayer::is_playing(), cVar5 == '\0'))
      {
        Button::set_button_icon(*(Ref **)(this + 0xa40));
      }
      else {
        Button::set_button_icon(*(Ref **)(this + 0xa40));
      }
      pRVar3 = *(Ref **)(this + 0xa68);
      if ((_notification(int)::{lambda()#6}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      Button::set_button_icon(pRVar3);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      pRVar3 = *(Ref **)(this + 0xa48);
      if ((_notification(int)::{lambda()#7}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      Button::set_button_icon(pRVar3);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      pRVar3 = *(Ref **)(this + 0xa50);
      if ((_notification(int)::{lambda()#8}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      Button::set_button_icon(pRVar3);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      pRVar3 = *(Ref **)(this + 0xa58);
      if ((_notification(int)::{lambda()#9}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#9}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#9}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      Button::set_button_icon(pRVar3);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      pRVar3 = *(Ref **)(this + 0xa60);
      if ((_notification(int)::{lambda()#10}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#10}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#10}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#10}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#10}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      Button::set_button_icon(pRVar3);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      if ((_notification(int)::{lambda()#11}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#11}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#11}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#11}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#11}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      Ref<Texture2D>::operator=((Ref<Texture2D> *)(this + 0xac8),(Ref *)local_78[0]);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      if ((_notification(int)::{lambda()#12}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#12}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#12}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#12}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#12}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      Ref<Texture2D>::operator=((Ref<Texture2D> *)(this + 0xad0),(Ref *)local_78[0]);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      (**(code **)(**(long **)(this + 0xac8) + 0x210))((Rect2i *)&local_90);
      plVar11 = *(long **)(this + 0xad0);
      (**(code **)(*plVar11 + 0x210))((Rect2i *)&local_88);
      uVar13 = (undefined4)((ulong)plVar11 >> 0x20);
      local_58 = Image::get_size();
      local_68 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
      uVar6 = Image::get_format();
      Image::create_empty(&local_80,CONCAT44(uVar13,(int)((float)local_68 + (float)local_68)),
                          (int)local_68._4_4_,0,uVar6);
      pRVar3 = local_80;
      local_60 = 0;
      local_50 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_68);
      local_58 = 0;
      Image::blit_rect(pRVar3,(Rect2i *)&local_90,(Vector2i *)&local_58);
      pRVar3 = local_80;
      local_60 = (ulong)(uint)(int)(float)local_68;
      local_50 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_68);
      local_58 = 0;
      Image::blit_rect(pRVar3,(Rect2i *)&local_88,(Vector2i *)&local_58);
      ImageTexture::create_from_image((Ref *)local_78);
      pOVar12 = *(Object **)(this + 0xad8);
      pOVar14 = pOVar12;
      if (local_78[0] == pOVar12) {
LAB_001134d8:
        if (((pOVar14 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar12 = local_78[0], cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_78[0]), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
          Memory::free_static(pOVar12,false);
        }
      }
      else {
        *(Object **)(this + 0xad8) = local_78[0];
        if (local_78[0] != (Object *)0x0) {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            *(undefined8 *)(this + 0xad8) = 0;
          }
          pOVar14 = local_78[0];
          if (pOVar12 != (Object *)0x0) goto LAB_001134c3;
          goto LAB_001134d8;
        }
        if (pOVar12 != (Object *)0x0) {
LAB_001134c3:
          cVar5 = RefCounted::unreference();
          pOVar14 = local_78[0];
          if ((cVar5 != '\0') &&
             (cVar5 = predelete_handler(pOVar12), pOVar14 = local_78[0], cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
            pOVar14 = local_78[0];
          }
          goto LAB_001134d8;
        }
      }
      if ((local_80 != (Ref *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
        memdelete<Image>((Image *)local_80);
      }
      if ((local_88 != (Image *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
        memdelete<Image>(local_88);
      }
      if ((local_90 != (Image *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
        memdelete<Image>(local_90);
      }
      pRVar3 = *(Ref **)(this + 0xa78);
      if ((_notification(int)::{lambda()#13}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#13}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#13}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#13}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#13}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      Button::set_button_icon(pRVar3);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      pRVar3 = *(Ref **)(this + 0xa80);
      if ((_notification(int)::{lambda()#14}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#14}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#14}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#14}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#14}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      Button::set_button_icon(pRVar3);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      pRVar3 = *(Ref **)(this + 0xa88);
      if ((_notification(int)::{lambda()#15}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#15}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#15}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#15}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#15}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      Button::set_button_icon(pRVar3);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      pSVar10 = *(StringName **)(this + 0xa70);
      if ((_notification(int)::{lambda()#16}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#16}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#16}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#16}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#16}::operator()()::sname);
      }
      Control::get_theme_stylebox((StringName *)local_78,(StringName *)this);
      Control::add_theme_style_override(pSVar10,(Ref *)(CoreStringNames::singleton + 0xb8));
      if (((local_78[0] != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar12 = local_78[0], cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_78[0]), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
      pSVar10 = (StringName *)AnimationTrackEditor::get_edit_menu();
      if ((_notification(int)::{lambda()#17}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#17}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#17}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#17}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#17}::operator()()::sname);
      }
      Control::get_theme_stylebox((StringName *)local_78,(StringName *)this);
      Control::add_theme_style_override(pSVar10,(Ref *)(CoreStringNames::singleton + 0xb8));
      if (((local_78[0] != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_78[0]), cVar5 != '\0')) {
        (**(code **)(*(long *)local_78[0] + 0x140))(local_78[0]);
        Memory::free_static(local_78[0],false);
      }
      iVar9 = MenuButton::get_popup();
      if ((_notification(int)::{lambda()#18}::operator()()::sname == '\0') &&
         (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#18}::operator()()::sname),
         iVar7 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#18}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#18}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#18}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      iVar7 = MenuButton::get_popup();
      uVar8 = PopupMenu::get_item_index(iVar7);
      PopupMenu::set_item_icon(iVar9,(Ref *)(ulong)uVar8);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      iVar9 = MenuButton::get_popup();
      if ((_notification(int)::{lambda()#19}::operator()()::sname == '\0') &&
         (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#19}::operator()()::sname),
         iVar7 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#19}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#19}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#19}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      iVar7 = MenuButton::get_popup();
      uVar8 = PopupMenu::get_item_index(iVar7);
      PopupMenu::set_item_icon(iVar9,(Ref *)(ulong)uVar8);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      iVar9 = MenuButton::get_popup();
      if ((_notification(int)::{lambda()#20}::operator()()::sname == '\0') &&
         (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#20}::operator()()::sname),
         iVar7 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#20}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#20}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#20}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      iVar7 = MenuButton::get_popup();
      uVar8 = PopupMenu::get_item_index(iVar7);
      PopupMenu::set_item_icon(iVar9,(Ref *)(ulong)uVar8);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      iVar9 = MenuButton::get_popup();
      if ((_notification(int)::{lambda()#21}::operator()()::sname == '\0') &&
         (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#21}::operator()()::sname),
         iVar7 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#21}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#21}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#21}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      iVar7 = MenuButton::get_popup();
      uVar8 = PopupMenu::get_item_index(iVar7);
      PopupMenu::set_item_icon(iVar9,(Ref *)(ulong)uVar8);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      iVar9 = MenuButton::get_popup();
      if ((_notification(int)::{lambda()#22}::operator()()::sname == '\0') &&
         (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#22}::operator()()::sname),
         iVar7 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#22}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#22}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#22}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      iVar7 = MenuButton::get_popup();
      uVar8 = PopupMenu::get_item_index(iVar7);
      PopupMenu::set_item_icon(iVar9,(Ref *)(ulong)uVar8);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      iVar9 = MenuButton::get_popup();
      if ((_notification(int)::{lambda()#23}::operator()()::sname == '\0') &&
         (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#23}::operator()()::sname),
         iVar7 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#23}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#23}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#23}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      iVar7 = MenuButton::get_popup();
      uVar8 = PopupMenu::get_item_index(iVar7);
      PopupMenu::set_item_icon(iVar9,(Ref *)(ulong)uVar8);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      iVar9 = MenuButton::get_popup();
      if ((_notification(int)::{lambda()#24}::operator()()::sname == '\0') &&
         (iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#24}::operator()()::sname),
         iVar7 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#24}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#24}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#24}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)local_78);
      iVar7 = MenuButton::get_popup();
      uVar8 = PopupMenu::get_item_index(iVar7);
      PopupMenu::set_item_icon(iVar9,(Ref *)(ulong)uVar8);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_animation_list_icons(this);
        return;
      }
      goto LAB_001147b1;
    }
    if ((param_1 == 10000) &&
       (cVar5 = EditorThemeManager::is_generated_theme_outdated(), cVar5 != '\0')) {
      pOVar12 = *(Object **)(EditorNode::singleton + 0x838);
      if (pOVar12 == (Object *)0x0) goto AnimationPlayerEditor__notification;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        pOVar12 = (Object *)0x0;
      }
      pcVar2 = *(code **)(*(long *)pOVar12 + 0x1d0);
      if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
      (*pcVar2)(local_78,pOVar12,SceneStringNames::singleton + 600,
                &_notification(int)::{lambda()#3}::operator()()::sname);
      Control::add_theme_style_override
                ((StringName *)this,(Ref *)(SceneStringNames::singleton + 600));
      if (((local_78[0] != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_78[0]), cVar5 != '\0')) {
        (**(code **)(*(long *)local_78[0] + 0x140))(local_78[0]);
        Memory::free_static(local_78[0],false);
      }
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001130fa;
        goto LAB_001147b1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001147b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_prepare_onion_layers_2_prolog() */

void AnimationPlayerEditor::_prepare_onion_layers_2_prolog(void)

{
  AnimationPlayerEditor AVar1;
  Object *this;
  StringName *pSVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  Variant *pVVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  AnimationPlayerEditor *in_RDI;
  Object *pOVar10;
  int iVar11;
  long in_FS_OFFSET;
  undefined8 uVar12;
  undefined8 in_XMM1_Qa;
  undefined8 local_f8;
  long local_c8;
  Variant local_c0 [8];
  Variant local_b8 [8];
  Array local_b0 [8];
  long local_a8;
  Object *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_78 [8];
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  AnimationPlayer::get_assigned_animation();
  StringName::StringName((StringName *)&local_a0,(String *)&local_a8,false);
  AnimationMixer::get_animation((StringName *)&local_c8);
  if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if (local_c8 == 0) goto LAB_00115122;
  cVar4 = _are_onion_layers_valid(in_RDI);
  if (cVar4 == '\0') {
    _allocate_onion_layers();
  }
  cVar4 = CanvasItem::is_visible();
  if (cVar4 == '\0') {
    CanvasItemEditor::get_state();
    Dictionary::operator=((Dictionary *)(in_RDI + 0xbc0),(Dictionary *)&local_a0);
    Dictionary::~Dictionary((Dictionary *)&local_a0);
    Dictionary::duplicate(SUB81((StringName *)&local_a0,0));
    ::Variant::Variant((Variant *)&local_58,false);
    ::Variant::Variant((Variant *)local_78,"show_origin");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
    ::Variant::operator=(pVVar6,(Variant *)&local_58);
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant *)&local_58,false);
    ::Variant::Variant((Variant *)local_78,"show_grid");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
    ::Variant::operator=(pVVar6,(Variant *)&local_58);
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant *)&local_58,false);
    ::Variant::Variant((Variant *)local_78,"show_rulers");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
    ::Variant::operator=(pVVar6,(Variant *)&local_58);
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant *)&local_58,false);
    ::Variant::Variant((Variant *)local_78,"show_guides");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
    ::Variant::operator=(pVVar6,(Variant *)&local_58);
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant *)&local_58,false);
    ::Variant::Variant((Variant *)local_78,"show_helpers");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
    ::Variant::operator=(pVVar6,(Variant *)&local_58);
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant *)&local_58,false);
    ::Variant::Variant((Variant *)local_78,"show_zoom_control");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
    ::Variant::operator=(pVVar6,(Variant *)&local_58);
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant *)&local_58,false);
    ::Variant::Variant((Variant *)local_78,"show_edit_locks");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
    ::Variant::operator=(pVVar6,(Variant *)&local_58);
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant *)&local_58,2);
    ::Variant::Variant((Variant *)local_78,"grid_visibility");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
    ::Variant::operator=(pVVar6,(Variant *)&local_58);
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    AVar1 = in_RDI[0xb42];
    if (AVar1 == (AnimationPlayerEditor)0x0) {
      ::Variant::Variant((Variant *)&local_58,false);
    }
    else {
      ::Variant::Variant((Variant *)local_78,"gizmos");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
      ::Variant::Variant((Variant *)&local_58,pVVar6);
    }
    ::Variant::Variant((Variant *)&local_98,"show_transformation_gizmos");
    pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
    ::Variant::operator=(pVVar6,(Variant *)&local_58);
    if (::Variant::needs_deinit[(int)local_98] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    if ((AVar1 != (AnimationPlayerEditor)0x0) && (::Variant::needs_deinit[local_78[0]] != '\0')) {
      ::Variant::_clear_internal();
    }
    CanvasItemEditor::set_state(CanvasItemEditor::singleton);
    Dictionary::~Dictionary((Dictionary *)&local_a0);
  }
  else {
    Node3DEditor::get_state();
    Dictionary::operator=((Dictionary *)(in_RDI + 0xbc8),(Dictionary *)&local_a0);
    Dictionary::~Dictionary((Dictionary *)&local_a0);
    Dictionary::duplicate(SUB81(local_c0,0));
    ::Variant::Variant((Variant *)&local_58,false);
    ::Variant::Variant((Variant *)local_78,"show_grid");
    pVVar6 = (Variant *)Dictionary::operator[](local_c0);
    ::Variant::operator=(pVVar6,(Variant *)&local_58);
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant *)&local_58,false);
    ::Variant::Variant((Variant *)local_78,"show_origin");
    pVVar6 = (Variant *)Dictionary::operator[](local_c0);
    ::Variant::operator=(pVVar6,(Variant *)&local_58);
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    ::Variant::Variant((Variant *)&local_58,"viewports");
    Dictionary::operator[]((Variant *)(in_RDI + 0xbc8));
    ::Variant::operator_cast_to_Array(local_b8);
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    Array::Array(local_b0);
    iVar9 = (int)local_b0;
    Array::resize(iVar9);
    for (iVar11 = 0; iVar5 = Array::size(), iVar11 < iVar5; iVar11 = iVar11 + 1) {
      Array::operator[]((int)local_b8);
      ::Variant::operator_cast_to_Dictionary((Variant *)&local_a0);
      Dictionary::duplicate(SUB81((CowData<char32_t> *)&local_a8,0));
      Dictionary::~Dictionary((Dictionary *)&local_a0);
      ::Variant::Variant((Variant *)&local_58,false);
      ::Variant::Variant((Variant *)local_78,"use_environment");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a8);
      if (pVVar6 != (Variant *)&local_58) {
        if (::Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)pVVar6 = 0;
        *(int *)pVVar6 = (int)local_58;
        *(undefined8 *)(pVVar6 + 8) = local_50;
        *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (::Variant::needs_deinit[local_78[0]] == '\0') {
        cVar4 = ::Variant::needs_deinit[(int)local_58];
      }
      else {
        ::Variant::_clear_internal();
        cVar4 = ::Variant::needs_deinit[(int)local_58];
      }
      if (cVar4 != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)&local_58,false);
      ::Variant::Variant((Variant *)local_78,"doppler");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a8);
      if (pVVar6 != (Variant *)&local_58) {
        if (::Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)pVVar6 = 0;
        *(int *)pVVar6 = (int)local_58;
        *(undefined8 *)(pVVar6 + 8) = local_50;
        *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (::Variant::needs_deinit[local_78[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[(int)local_58] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)&local_58,false);
      ::Variant::Variant((Variant *)local_78,"listener");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a8);
      if (pVVar6 != (Variant *)&local_58) {
        if (::Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)pVVar6 = 0;
        *(int *)pVVar6 = (int)local_58;
        *(undefined8 *)(pVVar6 + 8) = local_50;
        *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (::Variant::needs_deinit[local_78[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[(int)local_58] != '\0') {
        ::Variant::_clear_internal();
      }
      AVar1 = in_RDI[0xb42];
      if (AVar1 == (AnimationPlayerEditor)0x0) {
        ::Variant::Variant((Variant *)&local_58,false);
      }
      else {
        ::Variant::Variant((Variant *)local_78,"gizmos");
        pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a8);
        ::Variant::Variant((Variant *)&local_58,pVVar6);
      }
      ::Variant::Variant((Variant *)&local_98,"gizmos");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a8);
      if (pVVar6 != (Variant *)&local_58) {
        if (::Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)pVVar6 = 0;
        *(int *)pVVar6 = (int)local_58;
        *(undefined8 *)(pVVar6 + 8) = local_50;
        *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (::Variant::needs_deinit[(int)local_98] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[(int)local_58] != '\0') {
        ::Variant::_clear_internal();
      }
      if ((AVar1 != (AnimationPlayerEditor)0x0) && (::Variant::needs_deinit[local_78[0]] != '\0')) {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)&local_58,false);
      ::Variant::Variant((Variant *)local_78,"information");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_a8);
      if (pVVar6 != (Variant *)&local_58) {
        if (::Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)pVVar6 = 0;
        *(int *)pVVar6 = (int)local_58;
        *(undefined8 *)(pVVar6 + 8) = local_50;
        *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (::Variant::needs_deinit[local_78[0]] != '\0') {
        ::Variant::_clear_internal();
      }
      if (::Variant::needs_deinit[(int)local_58] != '\0') {
        ::Variant::_clear_internal();
      }
      ::Variant::Variant((Variant *)&local_58,(Dictionary *)&local_a8);
      pVVar6 = (Variant *)Array::operator[](iVar9);
      if (pVVar6 == (Variant *)&local_58) {
        if (::Variant::needs_deinit[(int)local_58] != '\0') {
          ::Variant::_clear_internal();
        }
      }
      else {
        if (::Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          ::Variant::_clear_internal();
        }
        *(undefined4 *)pVVar6 = 0;
        *(int *)pVVar6 = (int)local_58;
        *(undefined8 *)(pVVar6 + 8) = local_50;
        *(undefined8 *)(pVVar6 + 0x10) = uStack_48;
      }
      Dictionary::~Dictionary((Dictionary *)&local_a8);
    }
    ::Variant::Variant((Variant *)&local_58,local_b0);
    ::Variant::Variant((Variant *)local_78,"viewports");
    pVVar6 = (Variant *)Dictionary::operator[](local_c0);
    ::Variant::operator=(pVVar6,(Variant *)&local_58);
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    if (::Variant::needs_deinit[(int)local_58] != '\0') {
      ::Variant::_clear_internal();
    }
    Node3DEditor::set_state(Node3DEditor::singleton);
    Array::~Array(local_b0);
    Array::~Array((Array *)local_b8);
    Dictionary::~Dictionary((Dictionary *)local_c0);
  }
  if (*(long *)(in_RDI + 0x240) == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar7 = Viewport::get_viewport_rid();
  local_58 = (**(code **)(*DisplayServer::singleton + 0x588))(DisplayServer::singleton,0);
  uVar12 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
  *(undefined8 *)(in_RDI + 0xbb0) = 0;
  *(undefined8 *)(in_RDI + 3000) = uVar12;
  plVar8 = (long *)RenderingServer::get_singleton();
  local_58 = 0;
  local_50 = 0;
  (**(code **)(*plVar8 + 0x9c0))(plVar8,uVar7,(StringName *)&local_58,0xffffffff);
  plVar8 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar8 + 0x9f8))(plVar8,uVar7,4);
  local_f8 = 0;
  if (in_RDI[0xb40] != (AnimationPlayerEditor)0x0) {
    plVar8 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar8 + 0xfc8))(plVar8,*(undefined8 *)(in_RDI + 0xb88),0);
    if (*(int *)(in_RDI + 0xb60) == 0) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,0xffffffff,0,"p_index","count",
                 "",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    local_f8 = *(undefined8 *)
                (*(long *)(in_RDI + 0xb68) + (ulong)(*(int *)(in_RDI + 0xb60) - 1) * 8);
    plVar8 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar8 + 0x9a8))(plVar8,local_f8,1);
    plVar8 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar8 + 0x9b0))(plVar8,uVar7,local_f8);
    plVar8 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar8 + 0x11c8))(0,plVar8,0);
    plVar8 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar8 + 0x9a8))(plVar8,local_f8,0);
  }
  AnimationMixer::make_backup();
  this = *(Object **)(in_RDI + 0xba8);
  pOVar10 = this;
  if (local_a0 == this) {
LAB_00114e7f:
    if ((pOVar10 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
      memdelete<AnimatedValuesBackup>((AnimatedValuesBackup *)local_a0);
    }
  }
  else {
    *(Object **)(in_RDI + 0xba8) = local_a0;
    if (local_a0 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(in_RDI + 0xba8) = 0;
      }
      pOVar10 = local_a0;
      if (this != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        goto joined_r0x00115833;
      }
      goto LAB_00114e7f;
    }
    if (this != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
joined_r0x00115833:
      pOVar10 = local_a0;
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(this), pOVar10 = local_a0, cVar4 != '\0')) {
        if (*(code **)(*(long *)this + 0x140) == AnimatedValuesBackup::~AnimatedValuesBackup) {
          *(undefined ***)this = &PTR__initialize_classv_0012c060;
          AnimatedValuesBackup::clear_data();
          if (*(void **)(this + 0x180) != (void *)0x0) {
            Memory::free_static(*(void **)(this + 0x180),false);
            Memory::free_static(*(void **)(this + 0x188),false);
          }
          *(undefined ***)this = &PTR__initialize_classv_0012b810;
          Object::~Object(this);
        }
        else {
          (**(code **)(*(long *)this + 0x140))(this);
        }
        Memory::free_static(this,false);
        pOVar10 = local_a0;
      }
      goto LAB_00114e7f;
    }
  }
  uVar7 = AnimationPlayer::get_current_animation_position();
  *(undefined8 *)(in_RDI + 0xba0) = uVar7;
  plVar8 = (long *)RenderingServer::get_singleton();
  pcVar3 = *(code **)(*plVar8 + 0xfc8);
  uVar7 = (**(code **)(**(long **)(in_RDI + 0xb90) + 0x1c0))();
  (*pcVar3)(plVar8,*(undefined8 *)(in_RDI + 0xb88),uVar7);
  pSVar2 = *(StringName **)(in_RDI + 0xb90);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_a8,"rendering/environment/defaults/default_clear_color",false);
  ProjectSettings::get_setting_with_override((StringName *)&local_58);
  StringName::StringName((StringName *)&local_a0,"bkg_color",false);
  ShaderMaterial::set_shader_parameter(pSVar2,(Variant *)&local_a0);
  if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
    StringName::unref();
  }
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  pSVar2 = *(StringName **)(in_RDI + 0xb90);
  ::Variant::Variant((Variant *)&local_58,(bool)in_RDI[0xb40]);
  StringName::StringName((StringName *)&local_a0,"differences_only",false);
  ShaderMaterial::set_shader_parameter(pSVar2,(Variant *)&local_a0);
  if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
    StringName::unref();
  }
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  pSVar2 = *(StringName **)(in_RDI + 0xb90);
  if (in_RDI[0xb40] == (AnimationPlayerEditor)0x0) {
    local_a8 = 0;
  }
  else {
    plVar8 = (long *)RenderingServer::get_singleton();
    local_a8 = (**(code **)(*plVar8 + 0xa18))(plVar8,local_f8);
  }
  ::Variant::Variant((Variant *)&local_58,(RID *)&local_a8);
  StringName::StringName((StringName *)&local_a0,"present",false);
  ShaderMaterial::set_shader_parameter(pSVar2,(Variant *)&local_a0);
  if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
    StringName::unref();
  }
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  pSVar2 = *(StringName **)(in_RDI + 0xb90);
  AVar1 = in_RDI[0xb41];
  if (AVar1 == (AnimationPlayerEditor)0x0) {
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"editors/animation/onion_layers_past_color");
    _EDITOR_GET((String *)local_78);
    local_98 = ::Variant::operator_cast_to_Color((Variant *)local_78);
    uStack_90 = in_XMM1_Qa;
  }
  else {
    local_98 = CONCAT44(_LC2,_LC2);
    uStack_90 = CONCAT44(_LC2,_LC2);
  }
  ::Variant::Variant((Variant *)&local_58,(Color *)&local_98);
  StringName::StringName((StringName *)&local_a0,"dir_color",false);
  ShaderMaterial::set_shader_parameter(pSVar2,(Variant *)&local_a0);
  if ((StringName::configured != '\0') && (local_a0 != (Object *)0x0)) {
    StringName::unref();
  }
  if (::Variant::needs_deinit[(int)local_58] != '\0') {
    ::Variant::_clear_internal();
  }
  if (AVar1 == (AnimationPlayerEditor)0x0) {
    if (::Variant::needs_deinit[local_78[0]] != '\0') {
      ::Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  }
  iVar9 = 0;
  if (in_RDI[0xb39] != (AnimationPlayerEditor)0x0) {
    iVar9 = -*(int *)(in_RDI + 0xb3c);
  }
  _prepare_onion_layers_2_step_prepare(in_RDI,iVar9,0);
LAB_00115122:
  Ref<Animation>::unref((Ref<Animation> *)&local_c8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AnimationPlayerEditor::~AnimationPlayerEditor() */

void __thiscall AnimationPlayerEditor::~AnimationPlayerEditor(AnimationPlayerEditor *this)

{
  Object *pOVar1;
  char cVar2;
  long *plVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0012c1c0;
  _free_onion_layers(this);
  plVar3 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0xb80));
  plVar3 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar3 + 0x11b0))(plVar3);
  pOVar1 = *(Object **)(this + 0xb90);
  *(undefined1 (*) [16])(this + 0xb80) = (undefined1  [16])0x0;
  if (pOVar1 != (Object *)0x0) {
    *(undefined8 *)(this + 0xb90) = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  pOVar1 = *(Object **)(this + 0xb98);
  if (pOVar1 != (Object *)0x0) {
    *(undefined8 *)(this + 0xb98) = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Dictionary::~Dictionary((Dictionary *)(this + 0xbc8));
  Dictionary::~Dictionary((Dictionary *)(this + 0xbc0));
  if (*(long *)(this + 0xba8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      memdelete<AnimatedValuesBackup>(*(AnimatedValuesBackup **)(this + 0xba8));
    }
  }
  if (*(long *)(this + 0xb98) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xb98);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xb90) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xb90);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(void **)(this + 0xb78) != (void *)0x0) {
    if (*(int *)(this + 0xb70) != 0) {
      *(undefined4 *)(this + 0xb70) = 0;
    }
    Memory::free_static(*(void **)(this + 0xb78),false);
  }
  if (*(void **)(this + 0xb68) != (void *)0x0) {
    if (*(int *)(this + 0xb60) != 0) {
      *(undefined4 *)(this + 0xb60) = 0;
    }
    Memory::free_static(*(void **)(this + 0xb68),false);
  }
  if (*(long *)(this + 0xad8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xad8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xad0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xad0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xac8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xac8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xac0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xac0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xab8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xab8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar4 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar4) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00115d7f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00115d7f:
  Control::~Control((Control *)this);
  return;
}



/* AnimationPlayerEditor::~AnimationPlayerEditor() */

void __thiscall AnimationPlayerEditor::~AnimationPlayerEditor(AnimationPlayerEditor *this)

{
  ~AnimationPlayerEditor(this);
  operator_delete(this,0xbd0);
  return;
}



/* AnimationPlayerEditor::_stop_onion_skinning() */

void __thiscall AnimationPlayerEditor::_stop_onion_skinning(AnimationPlayerEditor *this)

{
  long *plVar1;
  code *pcVar2;
  AnimatedValuesBackup *pAVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  AnimationPlayerEditor local_88 [16];
  undefined8 local_78;
  AnimatedValuesBackup *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  Dictionary local_58 [8];
  Dictionary local_50 [16];
  long local_40;
  
  plVar1 = *(long **)(this + 0x240);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 == (long *)0x0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pcVar2 = *(code **)(*plVar1 + 0x118);
  create_custom_callable_function_pointer<AnimationPlayerEditor>
            (local_88,(char *)this,(_func_void *)"&AnimationPlayerEditor::_prepare_onion_layers_1");
  if (_stop_onion_skinning()::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_stop_onion_skinning()::{lambda()#1}::operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&_stop_onion_skinning()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_stop_onion_skinning()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_stop_onion_skinning()::{lambda()#1}::operator()()::sname);
    }
  }
  cVar4 = (*pcVar2)(plVar1,&_stop_onion_skinning()::{lambda()#1}::operator()()::sname,local_88);
  Callable::~Callable((Callable *)local_88);
  if (cVar4 != '\0') {
    plVar1 = *(long **)(this + 0x240);
    if (plVar1 == (long *)0x0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pcVar2 = *(code **)(*plVar1 + 0x110);
    create_custom_callable_function_pointer<AnimationPlayerEditor>
              (local_88,(char *)this,(_func_void *)"&AnimationPlayerEditor::_prepare_onion_layers_1"
              );
    if (_stop_onion_skinning()::{lambda()#2}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_stop_onion_skinning()::{lambda()#2}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_stop_onion_skinning()::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_stop_onion_skinning()::{lambda()#2}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_stop_onion_skinning()::{lambda()#2}::operator()()::sname);
      }
    }
    (*pcVar2)(plVar1,&_stop_onion_skinning()::{lambda()#2}::operator()()::sname,local_88);
    Callable::~Callable((Callable *)local_88);
    _free_onion_layers(this);
    *(undefined4 *)(this + 0xb50) = 0;
    EditorPlugin::update_overlays();
    local_78 = 0;
    local_70 = (AnimatedValuesBackup *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    Dictionary::Dictionary(local_58);
    Dictionary::Dictionary(local_50);
    pAVar3 = *(AnimatedValuesBackup **)(this + 0xba8);
    *(undefined8 *)(this + 0xba0) = local_78;
    if (local_70 != pAVar3) {
      *(AnimatedValuesBackup **)(this + 0xba8) = local_70;
      if (local_70 != (AnimatedValuesBackup *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)(this + 0xba8) = 0;
        }
      }
      if (pAVar3 != (AnimatedValuesBackup *)0x0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          memdelete<AnimatedValuesBackup>(pAVar3);
        }
      }
    }
    *(undefined8 *)(this + 0xbb0) = local_68;
    *(undefined8 *)(this + 3000) = uStack_60;
    Dictionary::operator=((Dictionary *)(this + 0xbc0),local_58);
    Dictionary::operator=((Dictionary *)(this + 0xbc8),local_50);
    Dictionary::~Dictionary(local_50);
    Dictionary::~Dictionary(local_58);
    if (local_70 != (AnimatedValuesBackup *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        memdelete<AnimatedValuesBackup>(local_70);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_onion_skinning_menu(int) */

void __thiscall AnimationPlayerEditor::_onion_skinning_menu(AnimationPlayerEditor *this,int param_1)

{
  AnimationPlayerEditor *pAVar1;
  long lVar2;
  String *pSVar3;
  bool bVar4;
  char cVar5;
  AnimationPlayerEditor AVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  String local_60 [8];
  String local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = MenuButton::get_popup();
  bVar4 = (bool)PopupMenu::get_item_index(iVar7);
  switch(param_1) {
  case 0:
    pAVar1 = this + 0xb38;
    *pAVar1 = (AnimationPlayerEditor)((byte)*pAVar1 ^ 1);
    if (*pAVar1 == (AnimationPlayerEditor)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _stop_onion_skinning(this);
        return;
      }
    }
    else {
      if ((*(StringName **)(this + 0xa20) != (StringName *)0x0) &&
         (cVar5 = AnimationMixer::has_animation(*(StringName **)(this + 0xa20)),
         pSVar3 = EditorNode::singleton, cVar5 == '\0')) {
        local_48 = 0;
        String::parse_latin1((String *)&local_48,"");
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Warning!");
        TTR(local_58,(String *)&local_50);
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"");
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Onion skinning requires a RESET animation.");
        TTR(local_60,(String *)&local_70);
        EditorNode::show_warning(pSVar3,local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _start_onion_skinning(this);
        return;
      }
    }
    goto LAB_00116402;
  case 1:
    AVar6 = (AnimationPlayerEditor)0x1;
    if (this[0xb3a] != (AnimationPlayerEditor)0x0) {
      AVar6 = (AnimationPlayerEditor)((byte)this[0xb39] ^ 1);
    }
    this[0xb39] = AVar6;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00116402;
    goto LAB_001163c5;
  case 2:
    if (this[0xb39] == (AnimationPlayerEditor)0x0) {
      AVar6 = (AnimationPlayerEditor)0x1;
    }
    else {
      AVar6 = (AnimationPlayerEditor)((byte)this[0xb3a] ^ 1);
    }
    this[0xb3a] = AVar6;
    lVar2 = *(long *)(in_FS_OFFSET + 0x28);
    break;
  case 3:
  case 4:
  case 5:
    *(int *)(this + 0xb3c) = param_1 + -2;
    cVar5 = PopupMenu::get_item_index(iVar7);
    iVar8 = 0;
    do {
      iVar9 = iVar8 + 1;
      PopupMenu::set_item_checked(iVar7,(bool)((char)iVar8 + cVar5));
      iVar8 = iVar9;
    } while (iVar9 != 3);
  default:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00116402;
  case 6:
    this[0xb40] = (AnimationPlayerEditor)((byte)this[0xb40] ^ 1);
    lVar2 = *(long *)(in_FS_OFFSET + 0x28);
    break;
  case 7:
    this[0xb41] = (AnimationPlayerEditor)((byte)this[0xb41] ^ 1);
    lVar2 = *(long *)(in_FS_OFFSET + 0x28);
    break;
  case 8:
    this[0xb42] = (AnimationPlayerEditor)((byte)this[0xb42] ^ 1);
    lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  }
  if (local_40 == lVar2) {
LAB_001163c5:
    PopupMenu::set_item_checked(iVar7,bVar4);
    return;
  }
LAB_00116402:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::_prepare_onion_layers_1() */

void __thiscall AnimationPlayerEditor::_prepare_onion_layers_1(AnimationPlayerEditor *this)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  AnimationPlayerEditor aAStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x240) == 0) {
    _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
  }
  lVar2 = SceneTree::get_frame();
  if (*(long *)(this + 0xb48) == lVar2) {
LAB_00116780:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (this[0xb38] != (AnimationPlayerEditor)0x0) {
      cVar1 = CanvasItem::is_visible();
      if ((cVar1 != '\0') && (*(StringName **)(this + 0xa20) != (StringName *)0x0)) {
        cVar1 = AnimationMixer::has_animation(*(StringName **)(this + 0xa20));
        if (cVar1 != '\0') {
          *(long *)(this + 0xb48) = lVar2;
          *(undefined4 *)(this + 0xb50) = 0;
          EditorPlugin::update_overlays();
          cVar1 = AnimationPlayer::is_playing();
          if (cVar1 == '\0') {
            create_custom_callable_function_pointer<AnimationPlayerEditor>
                      (aAStack_48,(char *)this,
                       (_func_void *)"&AnimationPlayerEditor::_prepare_onion_layers_2_prolog");
            ::Variant::Variant((Variant *)local_38,0);
            Callable::call_deferredp((Variant **)aAStack_48,0);
            if (::Variant::needs_deinit[local_38[0]] != '\0') {
              ::Variant::_clear_internal();
            }
            Callable::~Callable((Callable *)aAStack_48);
          }
          goto LAB_00116780;
        }
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _stop_onion_skinning(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::edit(AnimationMixer*, AnimationPlayer*, bool) */

void __thiscall
AnimationPlayerEditor::edit
          (AnimationPlayerEditor *this,AnimationMixer *param_1,AnimationPlayer *param_2,bool param_3
          )

{
  code *pcVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long in_FS_OFFSET;
  AnimationPlayerEditor local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa20) == 0) goto LAB_00116948;
  cVar4 = BaseButton::is_pressed();
  if (cVar4 != '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_001173bd;
  }
  plVar6 = *(long **)(this + 0xa20);
  if (plVar6 == (long *)0x0) {
LAB_00116948:
    if (param_1 != (AnimationMixer *)0x0) goto LAB_00116951;
LAB_00116c88:
    *(undefined8 *)(this + 0xa18) = 0;
    *(AnimationPlayer **)(this + 0xa20) = param_2;
    this[0xa30] = (AnimationPlayerEditor)param_3;
LAB_00116a58:
    if (param_2 != (AnimationPlayer *)0x0) goto LAB_00116a61;
LAB_00116bc6:
    if (this[0xb38] != (AnimationPlayerEditor)0x0) {
      _stop_onion_skinning(this);
    }
    AnimationTrackEditor::show_select_node_warning(SUB81(*(undefined8 *)(this + 0xb30),0));
  }
  else {
    pcVar1 = *(code **)(*plVar6 + 0x118);
    create_custom_callable_function_pointer<AnimationPlayerEditor>
              (local_58,(char *)this,
               (_func_void *)"&AnimationPlayerEditor::_animation_libraries_updated");
    if (edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#1}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#1}::
                                   operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#1}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#1}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#1}::operator()()
                             ::sname);
      }
    }
    cVar4 = (*pcVar1)(plVar6,&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#1}::
                              operator()()::sname,local_58);
    Callable::~Callable((Callable *)local_58);
    if (cVar4 != '\0') {
      plVar6 = *(long **)(this + 0xa20);
      pcVar1 = *(code **)(*plVar6 + 0x110);
      create_custom_callable_function_pointer<AnimationPlayerEditor>
                (local_58,(char *)this,
                 (_func_void *)"&AnimationPlayerEditor::_animation_libraries_updated");
      if (edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#2}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#2}::
                                     operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#2}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#2}::operator()()::
                        sname,&__dso_handle);
          __cxa_guard_release(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#2}::
                               operator()()::sname);
        }
      }
      (*pcVar1)(plVar6,&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#2}::operator()()::
                        sname,local_58);
      Callable::~Callable((Callable *)local_58);
    }
    plVar6 = *(long **)(this + 0xa20);
    pcVar1 = *(code **)(*plVar6 + 0x118);
    create_custom_callable_function_pointer<AnimationPlayerEditor,String_const&>
              (local_58,(char *)this,
               (_func_void_String_ptr *)"&AnimationPlayerEditor::_current_animation_changed");
    if (edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#3}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#3}::
                                   operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#3}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#3}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#3}::operator()()
                             ::sname);
      }
    }
    cVar4 = (*pcVar1)(plVar6,&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#3}::
                              operator()()::sname,local_58);
    Callable::~Callable((Callable *)local_58);
    if (cVar4 == '\0') goto LAB_00116948;
    plVar6 = *(long **)(this + 0xa20);
    pcVar1 = *(code **)(*plVar6 + 0x110);
    create_custom_callable_function_pointer<AnimationPlayerEditor,String_const&>
              (local_58,(char *)this,
               (_func_void_String_ptr *)"&AnimationPlayerEditor::_current_animation_changed");
    if (edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#4}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#4}::
                                   operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#4}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#4}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#4}::operator()()
                             ::sname);
      }
    }
    (*pcVar1)(plVar6,&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#4}::operator()()::sname
              ,local_58);
    Callable::~Callable((Callable *)local_58);
    if (param_1 == (AnimationMixer *)0x0) goto LAB_00116c88;
LAB_00116951:
    plVar6 = (long *)__dynamic_cast(param_1,&Object::typeinfo,&AnimationTree::typeinfo,0);
    if (plVar6 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar6 + 0x118);
      create_custom_callable_function_pointer<AnimationPlayerEditor>
                (local_58,(char *)this,(_func_void *)"&AnimationPlayerEditor::unpin");
      if (edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#5}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#5}::
                                     operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#5}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#5}::operator()()::
                        sname,&__dso_handle);
          __cxa_guard_release(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#5}::
                               operator()()::sname);
        }
      }
      cVar4 = (*pcVar1)(plVar6,&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#5}::
                                operator()()::sname,local_58);
      Callable::~Callable((Callable *)local_58);
      if (cVar4 != '\0') {
        pcVar1 = *(code **)(*plVar6 + 0x110);
        create_custom_callable_function_pointer<AnimationPlayerEditor>
                  (local_58,(char *)this,(_func_void *)"&AnimationPlayerEditor::unpin");
        if (edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#6}::operator()()::sname == '\0')
        {
          iVar5 = __cxa_guard_acquire(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#6}::
                                       operator()()::sname);
          if (iVar5 != 0) {
            _scs_create((char *)&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#6}::
                                 operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#6}::operator()()::
                          sname,&__dso_handle);
            __cxa_guard_release(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#6}::
                                 operator()()::sname);
          }
        }
        (*pcVar1)(plVar6,&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#6}::operator()()::
                          sname,local_58);
        Callable::~Callable((Callable *)local_58);
      }
      *(AnimationPlayer **)(this + 0xa20) = param_2;
      lVar2 = *plVar6;
      this[0xa30] = (AnimationPlayerEditor)param_3;
      *(AnimationMixer **)(this + 0xa18) = param_1;
      pcVar1 = *(code **)(lVar2 + 0x118);
      create_custom_callable_function_pointer<AnimationPlayerEditor>
                (local_58,(char *)this,(_func_void *)"&AnimationPlayerEditor::unpin");
      if (edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#7}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#7}::
                                     operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#7}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#7}::operator()()::
                        sname,&__dso_handle);
          __cxa_guard_release(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#7}::
                               operator()()::sname);
        }
      }
      cVar4 = (*pcVar1)(plVar6,&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#7}::
                                operator()()::sname,local_58);
      Callable::~Callable((Callable *)local_58);
      if (cVar4 == '\0') {
        pcVar1 = *(code **)(*plVar6 + 0x108);
        create_custom_callable_function_pointer<AnimationPlayerEditor>
                  (local_58,(char *)this,(_func_void *)"&AnimationPlayerEditor::unpin");
        if (edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#8}::operator()()::sname == '\0')
        {
          iVar5 = __cxa_guard_acquire(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#8}::
                                       operator()()::sname);
          if (iVar5 != 0) {
            _scs_create((char *)&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#8}::
                                 operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#8}::operator()()::
                          sname,&__dso_handle);
            __cxa_guard_release(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#8}::
                                 operator()()::sname);
          }
        }
        (*pcVar1)(plVar6,&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#8}::operator()()::
                          sname,local_58,0);
        Callable::~Callable((Callable *)local_58);
      }
      param_2 = *(AnimationPlayer **)(this + 0xa20);
      goto LAB_00116a58;
    }
    *(AnimationMixer **)(this + 0xa18) = param_1;
    *(AnimationPlayer **)(this + 0xa20) = param_2;
    this[0xa30] = (AnimationPlayerEditor)param_3;
    if (param_2 == (AnimationPlayer *)0x0) goto LAB_00116bc6;
LAB_00116a61:
    pcVar1 = *(code **)(*(long *)param_2 + 0x118);
    create_custom_callable_function_pointer<AnimationPlayerEditor>
              (local_58,(char *)this,
               (_func_void *)"&AnimationPlayerEditor::_animation_libraries_updated");
    if (edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#9}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#9}::
                                   operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#9}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#9}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#9}::operator()()
                             ::sname);
      }
    }
    cVar4 = (*pcVar1)(param_2,&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#9}::
                               operator()()::sname,local_58);
    Callable::~Callable((Callable *)local_58);
    if (cVar4 == '\0') {
      plVar6 = *(long **)(this + 0xa20);
      pcVar1 = *(code **)(*plVar6 + 0x108);
      create_custom_callable_function_pointer<AnimationPlayerEditor>
                (local_58,(char *)this,
                 (_func_void *)"&AnimationPlayerEditor::_animation_libraries_updated");
      if (edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#10}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#10}::
                                     operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#10}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#10}::operator()()::
                        sname,&__dso_handle);
          __cxa_guard_release(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#10}::
                               operator()()::sname);
        }
      }
      (*pcVar1)(plVar6,&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#10}::operator()()::
                        sname,local_58,1);
      Callable::~Callable((Callable *)local_58);
    }
    plVar6 = *(long **)(this + 0xa20);
    pcVar1 = *(code **)(*plVar6 + 0x118);
    create_custom_callable_function_pointer<AnimationPlayerEditor,String_const&>
              (local_58,(char *)this,
               (_func_void_String_ptr *)"&AnimationPlayerEditor::_current_animation_changed");
    if (edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#11}::operator()()::sname == '\0') {
      iVar5 = __cxa_guard_acquire(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#11}::
                                   operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#11}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#11}::operator()()::
                      sname,&__dso_handle);
        __cxa_guard_release(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#11}::
                             operator()()::sname);
      }
    }
    cVar4 = (*pcVar1)(plVar6,&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#11}::
                              operator()()::sname,local_58);
    Callable::~Callable((Callable *)local_58);
    if (cVar4 == '\0') {
      plVar6 = *(long **)(this + 0xa20);
      pcVar1 = *(code **)(*plVar6 + 0x108);
      create_custom_callable_function_pointer<AnimationPlayerEditor,String_const&>
                (local_58,(char *)this,
                 (_func_void_String_ptr *)"&AnimationPlayerEditor::_current_animation_changed");
      if (edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#12}::operator()()::sname == '\0') {
        iVar5 = __cxa_guard_acquire(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#12}::
                                     operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#12}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#12}::operator()()::
                        sname,&__dso_handle);
          __cxa_guard_release(&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#12}::
                               operator()()::sname);
        }
      }
      (*pcVar1)(plVar6,&edit(AnimationMixer*,AnimationPlayer*,bool)::{lambda()#12}::operator()()::
                        sname,local_58,0);
      Callable::~Callable((Callable *)local_58);
    }
    _update_player(this);
    if (this[0xb38] != (AnimationPlayerEditor)0x0) {
      cVar4 = OptionButton::has_selectable_items();
      if (cVar4 == '\0') {
        _stop_onion_skinning(this);
      }
      else {
        _start_onion_skinning(this);
      }
    }
    AnimationTrackEditor::show_select_node_warning(SUB81(*(undefined8 *)(this + 0xb30),0));
  }
  pOVar3 = *(Object **)(this + 0xaf8);
  fetch_mixer_for_library(this);
  AnimationLibraryEditor::set_animation_mixer(pOVar3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _ensure_dummy_player(this);
    return;
  }
LAB_001173bd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditorPlugin::edit(Object*) */

void __thiscall AnimationPlayerEditorPlugin::edit(AnimationPlayerEditorPlugin *this,Object *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  AnimationMixer *pAVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  bool bVar7;
  long in_FS_OFFSET;
  undefined8 local_68 [2];
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x668) == 0) || (*(long *)(this + 0x660) == 0)) {
LAB_00117422:
    *(undefined8 *)(this + 0x668) = 0;
    if (param_1 != (Object *)0x0) {
      *(undefined8 *)(this + 0x678) = *(undefined8 *)(param_1 + 0x60);
      pAVar4 = (AnimationMixer *)
               __dynamic_cast(param_1,&Object::typeinfo,&AnimationMixer::typeinfo,0);
      pcVar1 = *(code **)(*(long *)param_1 + 0x58);
      local_68[0] = 0;
      local_50 = 0xf;
      local_58 = "AnimationPlayer";
      String::parse_latin1((StrRange *)local_68);
      cVar2 = (*pcVar1)(param_1,(StrRange *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      if (cVar2 == '\0') {
        _update_dummy_player(this,pAVar4);
        pcVar1 = *(code **)(*(long *)pAVar4 + 0x118);
        create_custom_callable_function_pointer<AnimationPlayerEditorPlugin,AnimationMixer*>
                  ((AnimationPlayerEditorPlugin *)&local_58,(char *)this,
                   (_func_void_AnimationMixer_ptr *)
                   "&AnimationPlayerEditorPlugin::_update_dummy_player");
        if (edit(Object*)::{lambda()#1}::operator()()::sname == '\0') {
          iVar3 = __cxa_guard_acquire(&edit(Object*)::{lambda()#1}::operator()()::sname);
          if (iVar3 != 0) {
            _scs_create((char *)&edit(Object*)::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&edit(Object*)::{lambda()#1}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&edit(Object*)::{lambda()#1}::operator()()::sname);
          }
        }
        cVar2 = (*pcVar1)(pAVar4,&edit(Object*)::{lambda()#1}::operator()()::sname,
                          (AnimationPlayerEditorPlugin *)&local_58);
        Callable::~Callable((Callable *)&local_58);
        if (cVar2 == '\0') {
          pcVar1 = *(code **)(*(long *)pAVar4 + 0x108);
          create_custom_callable_function_pointer<AnimationPlayerEditorPlugin,AnimationMixer*>
                    ((AnimationPlayerEditorPlugin *)local_68,(char *)this,
                     (_func_void_AnimationMixer_ptr *)
                     "&AnimationPlayerEditorPlugin::_update_dummy_player");
          Callable::bind<AnimationMixer*>((AnimationMixer *)&local_58);
          if (edit(Object*)::{lambda()#2}::operator()()::sname == '\0') {
            iVar3 = __cxa_guard_acquire(&edit(Object*)::{lambda()#2}::operator()()::sname);
            if (iVar3 != 0) {
              _scs_create((char *)&edit(Object*)::{lambda()#2}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,&edit(Object*)::{lambda()#2}::operator()()::sname
                           ,&__dso_handle);
              __cxa_guard_release(&edit(Object*)::{lambda()#2}::operator()()::sname);
            }
          }
          (*pcVar1)(pAVar4,&edit(Object*)::{lambda()#2}::operator()()::sname,
                    (AnimationPlayerEditorPlugin *)&local_58,1);
          Callable::~Callable((Callable *)&local_58);
          Callable::~Callable((Callable *)local_68);
        }
        pcVar1 = *(code **)(*(long *)pAVar4 + 0x118);
        create_custom_callable_function_pointer<AnimationPlayerEditorPlugin,AnimationMixer*>
                  ((AnimationPlayerEditorPlugin *)&local_58,(char *)this,
                   (_func_void_AnimationMixer_ptr *)
                   "&AnimationPlayerEditorPlugin::_update_dummy_player");
        if (edit(Object*)::{lambda()#3}::operator()()::sname == '\0') {
          iVar3 = __cxa_guard_acquire(&edit(Object*)::{lambda()#3}::operator()()::sname);
          if (iVar3 != 0) {
            _scs_create((char *)&edit(Object*)::{lambda()#3}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&edit(Object*)::{lambda()#3}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&edit(Object*)::{lambda()#3}::operator()()::sname);
          }
        }
        cVar2 = (*pcVar1)(pAVar4,&edit(Object*)::{lambda()#3}::operator()()::sname,
                          (AnimationPlayerEditorPlugin *)&local_58);
        Callable::~Callable((Callable *)&local_58);
        if (cVar2 == '\0') {
          pcVar1 = *(code **)(*(long *)pAVar4 + 0x108);
          create_custom_callable_function_pointer<AnimationPlayerEditorPlugin,AnimationMixer*>
                    ((AnimationPlayerEditorPlugin *)local_68,(char *)this,
                     (_func_void_AnimationMixer_ptr *)
                     "&AnimationPlayerEditorPlugin::_update_dummy_player");
          Callable::bind<AnimationMixer*>((AnimationMixer *)&local_58);
          if (edit(Object*)::{lambda()#4}::operator()()::sname == '\0') {
            iVar3 = __cxa_guard_acquire(&edit(Object*)::{lambda()#4}::operator()()::sname);
            if (iVar3 != 0) {
              _scs_create((char *)&edit(Object*)::{lambda()#4}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,&edit(Object*)::{lambda()#4}::operator()()::sname
                           ,&__dso_handle);
              __cxa_guard_release(&edit(Object*)::{lambda()#4}::operator()()::sname);
            }
          }
          (*pcVar1)(pAVar4,&edit(Object*)::{lambda()#4}::operator()()::sname,
                    (AnimationPlayerEditorPlugin *)&local_58,1);
          Callable::~Callable((Callable *)&local_58);
          Callable::~Callable((Callable *)local_68);
        }
        uVar6 = (undefined1)*(undefined8 *)(this + 0x668);
        bVar7 = true;
      }
      else {
        bVar7 = false;
        _clear_dummy_player(this);
        uVar5 = __dynamic_cast(param_1,&Object::typeinfo,&AnimationPlayer::typeinfo,0);
        *(undefined8 *)(this + 0x668) = uVar5;
        uVar6 = (undefined1)uVar5;
      }
      AnimationMixer::set_dummy((bool)uVar6);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        AnimationPlayerEditor::edit
                  (*(AnimationPlayerEditor **)(this + 0x660),pAVar4,
                   *(AnimationPlayer **)(this + 0x668),bVar7);
        return;
      }
      goto LAB_001178ba;
    }
  }
  else {
    cVar2 = BaseButton::is_pressed();
    if (cVar2 == '\0') goto LAB_00117422;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001178ba:
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* AnimatedValuesBackup::is_class_ptr(void*) const */

uint __thiscall AnimatedValuesBackup::is_class_ptr(AnimatedValuesBackup *this,void *param_1)

{
  return (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12dc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AnimatedValuesBackup::_getv(StringName const&, Variant&) const */

undefined8 AnimatedValuesBackup::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimatedValuesBackup::_setv(StringName const&, Variant const&) */

undefined8 AnimatedValuesBackup::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimatedValuesBackup::_validate_propertyv(PropertyInfo&) const */

void AnimatedValuesBackup::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* AnimatedValuesBackup::_property_can_revertv(StringName const&) const */

undefined8 AnimatedValuesBackup::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AnimatedValuesBackup::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AnimatedValuesBackup::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimatedValuesBackup::_notificationv(int, bool) */

void AnimatedValuesBackup::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AnimationPlayerEditorPlugin::is_class_ptr(void*) const */

uint __thiscall
AnimationPlayerEditorPlugin::is_class_ptr(AnimationPlayerEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x12dd,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x12dc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AnimationPlayerEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 AnimationPlayerEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationPlayerEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 AnimationPlayerEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationPlayerEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 AnimationPlayerEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AnimationPlayerEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AnimationPlayerEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationPlayerEditorPlugin::has_main_screen() const */

undefined8 AnimationPlayerEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* EditorInspectorPluginAnimationTrackKeyEdit::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginAnimationTrackKeyEdit::is_class_ptr
          (EditorInspectorPluginAnimationTrackKeyEdit *this,void *param_1)

{
  return (uint)CONCAT71(0x12dd,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12dc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginAnimationTrackKeyEdit::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginAnimationTrackKeyEdit::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginAnimationTrackKeyEdit::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginAnimationTrackKeyEdit::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginAnimationTrackKeyEdit::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginAnimationTrackKeyEdit::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginAnimationTrackKeyEdit::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginAnimationTrackKeyEdit::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginAnimationTrackKeyEdit::_property_get_revertv(StringName const&, Variant&)
   const */

undefined8
EditorInspectorPluginAnimationTrackKeyEdit::_property_get_revertv
          (StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginAnimationTrackKeyEdit::_notificationv(int, bool) */

void EditorInspectorPluginAnimationTrackKeyEdit::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AnimationTrackKeyEditEditorPlugin::is_class_ptr(void*) const */

uint __thiscall
AnimationTrackKeyEditEditorPlugin::is_class_ptr
          (AnimationTrackKeyEditEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x12dd,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x12dc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AnimationTrackKeyEditEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 AnimationTrackKeyEditEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationTrackKeyEditEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 AnimationTrackKeyEditEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationTrackKeyEditEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 AnimationTrackKeyEditEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AnimationTrackKeyEditEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
AnimationTrackKeyEditEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationTrackKeyEditEditorPlugin::has_main_screen() const */

undefined8 AnimationTrackKeyEditEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* EditorInspectorPluginAnimationMarkerKeyEdit::is_class_ptr(void*) const */

uint __thiscall
EditorInspectorPluginAnimationMarkerKeyEdit::is_class_ptr
          (EditorInspectorPluginAnimationMarkerKeyEdit *this,void *param_1)

{
  return (uint)CONCAT71(0x12dd,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12dc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorInspectorPluginAnimationMarkerKeyEdit::_getv(StringName const&, Variant&) const */

undefined8 EditorInspectorPluginAnimationMarkerKeyEdit::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginAnimationMarkerKeyEdit::_setv(StringName const&, Variant const&) */

undefined8 EditorInspectorPluginAnimationMarkerKeyEdit::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginAnimationMarkerKeyEdit::_validate_propertyv(PropertyInfo&) const */

void EditorInspectorPluginAnimationMarkerKeyEdit::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorInspectorPluginAnimationMarkerKeyEdit::_property_can_revertv(StringName const&) const */

undefined8 EditorInspectorPluginAnimationMarkerKeyEdit::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorInspectorPluginAnimationMarkerKeyEdit::_property_get_revertv(StringName const&, Variant&)
   const */

undefined8
EditorInspectorPluginAnimationMarkerKeyEdit::_property_get_revertv
          (StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorInspectorPluginAnimationMarkerKeyEdit::_notificationv(int, bool) */

void EditorInspectorPluginAnimationMarkerKeyEdit::_notificationv(int param_1,bool param_2)

{
  return;
}



/* AnimationMarkerKeyEditEditorPlugin::is_class_ptr(void*) const */

uint __thiscall
AnimationMarkerKeyEditEditorPlugin::is_class_ptr
          (AnimationMarkerKeyEditEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x12dd,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x12dc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AnimationMarkerKeyEditEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 AnimationMarkerKeyEditEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationMarkerKeyEditEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 AnimationMarkerKeyEditEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationMarkerKeyEditEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 AnimationMarkerKeyEditEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AnimationMarkerKeyEditEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
AnimationMarkerKeyEditEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AnimationMarkerKeyEditEditorPlugin::has_main_screen() const */

undefined8 AnimationMarkerKeyEditEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* CallableCustomMethodPointer<Node, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void,
   AnimationMixer*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,AnimationMixer*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,AnimationMixer*> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationTrackEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationTrackEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationTrackEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, String const&, Variant const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,String_const&,Variant_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,String_const&,Variant_const&,bool>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, Object*, String const&,
   Transform3D const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,Object*,String_const&,Transform3D_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,Object*,String_const&,Transform3D_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, Object*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,Object*> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float, bool,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, int, unsigned
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,int,unsigned_int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,int,unsigned_int> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, Node*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,Node*> *this)

{
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,int> *this)

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



/* MethodBindT<Object*>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Object*>::_gen_argument_type(MethodBindT<Object*> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Object*>::get_argument_meta(int) const */

undefined8 MethodBindT<Object*>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<Node, void, Node*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Node,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<Node,void,Node*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void,
   AnimationMixer*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,AnimationMixer*>::get_argument_count
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,AnimationMixer*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationTrackEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationTrackEditor,void>::get_argument_count
          (CallableCustomMethodPointer<AnimationTrackEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void>::get_argument_count
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, String const&, Variant const&,
   bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,String_const&,Variant_const&,bool>::
get_argument_count(CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,String_const&,Variant_const&,bool>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, Object*, String const&,
   Transform3D const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,Object*,String_const&,Transform3D_const&>
::get_argument_count
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,Object*,String_const&,Transform3D_const&>
           *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, Object*>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,Object*>::get_argument_count
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,Object*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float>::get_argument_count
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float, bool,
   bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool,bool>::get_argument_count
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool,bool> *this,
          bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float, bool>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool>::get_argument_count
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, int, unsigned
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,int,unsigned_int>::get_argument_count
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,int,unsigned_int> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,String_const&> *this,bool *param_1
          )

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void>::get_argument_count
          (CallableCustomMethodPointer<AnimationPlayerEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, Node*>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,Node*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, Node*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, int, unsigned
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,int,unsigned_int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,int,unsigned_int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float, bool,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, Object*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,Object*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, Object*, String const&,
   Transform3D const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,Object*,String_const&,Transform3D_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,Object*,String_const&,Transform3D_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, String const&, Variant const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,String_const&,Variant_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,String_const&,Variant_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationTrackEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationTrackEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationTrackEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void,
   AnimationMixer*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,AnimationMixer*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,AnimationMixer*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Node, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*> *this)

{
  operator_delete(this,0x48);
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



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012b810;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012b810;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* AnimatedValuesBackup::~AnimatedValuesBackup() */

void __thiscall AnimatedValuesBackup::~AnimatedValuesBackup(AnimatedValuesBackup *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012c060;
  AnimatedValuesBackup::clear_data();
  if (*(void **)(this + 0x180) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x180),false);
    Memory::free_static(*(void **)(this + 0x188),false);
  }
  *(undefined ***)this = &PTR__initialize_classv_0012b810;
  Object::~Object((Object *)this);
  return;
}



/* AnimationPlayerEditor::unpin() */

void __thiscall AnimationPlayerEditor::unpin(AnimationPlayerEditor *this)

{
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa88),0));
  SceneTreeEditor::_update_tree(SUB81(*(undefined8 *)(SceneTreeDock::singleton + 0xac0),0));
  return;
}



/* MethodBindT<Object*>::~MethodBindT() */

void __thiscall MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d8c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Object*>::~MethodBindT() */

void __thiscall MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d8c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d920;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012d920;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00136018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00136018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* AnimationPlayerEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AnimationPlayerEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00136018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00136020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00136020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* AnimationPlayerEditor::_property_can_revertv(StringName const&) const */

undefined8 AnimationPlayerEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00136020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* AnimationPlayerEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void AnimationPlayerEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00136028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* AnimationTrackKeyEditEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void AnimationTrackKeyEditEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00136028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* AnimationMarkerKeyEditEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void AnimationMarkerKeyEditEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00136028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = memcpy;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AnimationPlayerEditor::_allocate_onion_layers() [clone .cold] */

void AnimationPlayerEditor::_allocate_onion_layers(void)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AnimationPlayerEditor::_prepare_onion_layers_2_epilog() [clone .cold] */

void AnimationPlayerEditor::_prepare_onion_layers_2_epilog(void)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AnimationPlayerEditor::_start_onion_skinning() [clone .cold] */

void AnimationPlayerEditor::_start_onion_skinning(void)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AnimationPlayerEditor::_prepare_onion_layers_2_step_capture(int, unsigned int) [clone .cold] */

void AnimationPlayerEditor::_prepare_onion_layers_2_step_capture(int param_1,uint param_2)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimationPlayerEditor::_animation_duplicate() [clone .cold] */

void AnimationPlayerEditor::_animation_duplicate(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void FUN_0011a636(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AnimationPlayerEditor::_notification(int) [clone .cold] */

void AnimationPlayerEditor::_notification(int param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AnimationPlayerEditor::_prepare_onion_layers_2_prolog() [clone .cold] */

void AnimationPlayerEditor::_prepare_onion_layers_2_prolog(void)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AnimationPlayerEditor::_stop_onion_skinning() [clone .cold] */

void AnimationPlayerEditor::_stop_onion_skinning(void)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float, bool, bool>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool,bool>::get_object
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool,bool> *this)

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
      goto LAB_0011a7fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011a7fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011a7fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,Node*>::get_object
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,Node*> *this)

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
      goto LAB_0011a8fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011a8fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011a8fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, String const&, Variant const&,
   bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,String_const&,Variant_const&,bool>::
get_object(CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,String_const&,Variant_const&,bool>
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
      goto LAB_0011a9fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011a9fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011a9fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, Object*, String const&,
   Transform3D const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,Object*,String_const&,Transform3D_const&>
::get_object(CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,Object*,String_const&,Transform3D_const&>
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
      goto LAB_0011aafd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011aafd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011aafd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,String_const&> *this)

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
      goto LAB_0011abfd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011abfd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011abfd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Node, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Node,void,Node*>::get_object
          (CallableCustomMethodPointer<Node,void,Node*> *this)

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
      goto LAB_0011acfd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011acfd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011acfd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, Object*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,Object*>::get_object
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,Object*> *this)

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
      goto LAB_0011adfd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011adfd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011adfd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,int>::get_object
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,int> *this)

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
      goto LAB_0011aefd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011aefd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011aefd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void>::get_object
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void> *this)

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
      goto LAB_0011affd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011affd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011affd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, AnimationMixer*>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,AnimationMixer*>::get_object
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,AnimationMixer*> *this)

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
      goto LAB_0011b0fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011b0fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011b0fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void>::get_object
          (CallableCustomMethodPointer<AnimationPlayerEditor,void> *this)

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
      goto LAB_0011b1fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011b1fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011b1fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, int, unsigned int>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,int,unsigned_int>::get_object
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,int,unsigned_int> *this)

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
      goto LAB_0011b2fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011b2fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011b2fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationTrackEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationTrackEditor,void>::get_object
          (CallableCustomMethodPointer<AnimationTrackEditor,void> *this)

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
      goto LAB_0011b3fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011b3fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011b3fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float>::get_object
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float> *this)

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
      goto LAB_0011b4fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011b4fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011b4fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool>::get_object
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool> *this)

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
      goto LAB_0011b5fd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011b5fd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011b5fd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00136030 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00136030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* AnimationPlayerEditor::_validate_propertyv(PropertyInfo&) const */

void AnimationPlayerEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00136030 == Control::_validate_property) {
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
    if ((code *)PTR__set_00136038 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00136038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* AnimationPlayerEditor::_setv(StringName const&, Variant const&) */

undefined8 AnimationPlayerEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00136038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011b9c8) */
/* AnimationPlayerEditor::_getv(StringName const&, Variant&) const */

undefined8 AnimationPlayerEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00136040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011ba38) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00136040 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011baa8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00136040 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x12de,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12de,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12de,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12de,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12de,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x12de,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12de,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12de,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12de,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12de,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* AnimatedValuesBackup::~AnimatedValuesBackup() */

void __thiscall AnimatedValuesBackup::~AnimatedValuesBackup(AnimatedValuesBackup *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012c060;
  AnimatedValuesBackup::clear_data();
  if (*(void **)(this + 0x180) != (void *)0x0) {
    Memory::free_static(*(void **)(this + 0x180),false);
    Memory::free_static(*(void **)(this + 0x188),false);
  }
  *(undefined ***)this = &PTR__initialize_classv_0012b810;
  Object::~Object((Object *)this);
  operator_delete(this,0x198);
  return;
}



/* AnimationPlayerEditor::is_class_ptr(void*) const */

ulong AnimationPlayerEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x12de,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x12de,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x12de,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x12de,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x12de,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x12de,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* AnimationMarkerKeyEditEditorPlugin::_notificationv(int, bool) */

void __thiscall
AnimationMarkerKeyEditEditorPlugin::_notificationv
          (AnimationMarkerKeyEditEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00136048 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00136048 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* AnimationTrackKeyEditEditorPlugin::_notificationv(int, bool) */

void __thiscall
AnimationTrackKeyEditEditorPlugin::_notificationv
          (AnimationTrackKeyEditEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00136048 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00136048 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* AnimationPlayerEditorPlugin::_notificationv(int, bool) */

void __thiscall
AnimationPlayerEditorPlugin::_notificationv
          (AnimationPlayerEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 10) {
      _notification(iVar1);
    }
    if ((code *)PTR__notification_00136048 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00136048 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  if (param_1 != 10) {
    return;
  }
  _notification(iVar1);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011be70;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011be70:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011bed0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011bed0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011bf30;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011bf30:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011bfa0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011bfa0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* AnimationTrackKeyEditEditorPlugin::get_plugin_name() const */

AnimationTrackKeyEditEditorPlugin * __thiscall
AnimationTrackKeyEditEditorPlugin::get_plugin_name(AnimationTrackKeyEditEditorPlugin *this)

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



/* AnimationMarkerKeyEditEditorPlugin::get_plugin_name() const */

AnimationMarkerKeyEditEditorPlugin * __thiscall
AnimationMarkerKeyEditEditorPlugin::get_plugin_name(AnimationMarkerKeyEditEditorPlugin *this)

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



/* AnimationPlayerEditorPlugin::get_plugin_name() const */

AnimationPlayerEditorPlugin * __thiscall
AnimationPlayerEditorPlugin::get_plugin_name(AnimationPlayerEditorPlugin *this)

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



/* AnimatedValuesBackup::_get_class_namev() const */

undefined8 * AnimatedValuesBackup::_get_class_namev(void)

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
LAB_0011c1d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011c1d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AnimatedValuesBackup");
      goto LAB_0011c23e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AnimatedValuesBackup");
LAB_0011c23e:
  return &_get_class_namev()::_class_name_static;
}



/* AnimationMarkerKeyEditEditorPlugin::_get_class_namev() const */

undefined8 * AnimationMarkerKeyEditEditorPlugin::_get_class_namev(void)

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
LAB_0011c2d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011c2d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AnimationMarkerKeyEditEditorPlugin");
      goto LAB_0011c33e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "AnimationMarkerKeyEditEditorPlugin");
LAB_0011c33e:
  return &_get_class_namev()::_class_name_static;
}



/* AnimationPlayerEditor::_get_class_namev() const */

undefined8 * AnimationPlayerEditor::_get_class_namev(void)

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
LAB_0011c3c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011c3c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AnimationPlayerEditor");
      goto LAB_0011c42e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AnimationPlayerEditor");
LAB_0011c42e:
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
LAB_0011c4a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011c4a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0011c50e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0011c50e:
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
LAB_0011c593:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011c593;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0011c5fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0011c5fe:
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
LAB_0011c683:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011c683;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0011c6ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0011c6ee:
  return &_get_class_namev()::_class_name_static;
}



/* AnimationPlayerEditorPlugin::_get_class_namev() const */

undefined8 * AnimationPlayerEditorPlugin::_get_class_namev(void)

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
LAB_0011c773:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011c773;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AnimationPlayerEditorPlugin"
                );
      goto LAB_0011c7de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AnimationPlayerEditorPlugin");
LAB_0011c7de:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorPluginAnimationTrackKeyEdit::_get_class_namev() const */

undefined8 * EditorInspectorPluginAnimationTrackKeyEdit::_get_class_namev(void)

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
LAB_0011c883:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011c883;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorPluginAnimationTrackKeyEdit");
      goto LAB_0011c8ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "EditorInspectorPluginAnimationTrackKeyEdit");
LAB_0011c8ee:
  return &_get_class_namev()::_class_name_static;
}



/* AnimationTrackKeyEditEditorPlugin::_get_class_namev() const */

undefined8 * AnimationTrackKeyEditEditorPlugin::_get_class_namev(void)

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
LAB_0011c983:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011c983;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "AnimationTrackKeyEditEditorPlugin");
      goto LAB_0011c9ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "AnimationTrackKeyEditEditorPlugin");
LAB_0011c9ee:
  return &_get_class_namev()::_class_name_static;
}



/* EditorInspectorPluginAnimationMarkerKeyEdit::_get_class_namev() const */

undefined8 * EditorInspectorPluginAnimationMarkerKeyEdit::_get_class_namev(void)

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
LAB_0011ca93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011ca93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorInspectorPluginAnimationMarkerKeyEdit");
      goto LAB_0011cafe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "EditorInspectorPluginAnimationMarkerKeyEdit");
LAB_0011cafe:
  return &_get_class_namev()::_class_name_static;
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      ::Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = memcpy;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0011cd80) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00136050 != Container::_notification) {
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
  if ((code *)PTR__notification_00136050 == Container::_notification) {
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



/* EditorPlugin::EditorPlugin() */

void __thiscall EditorPlugin::EditorPlugin(EditorPlugin *this)

{
  Node::Node((Node *)this);
  *(code **)this = BaseButton::set_disabled;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (EditorPlugin)0x0;
  *(undefined8 *)(this + 0x658) = 0;
  return;
}



/* AnimationPlayerEditorPlugin::forward_3d_force_draw_over_viewport(Control*) */

void __thiscall
AnimationPlayerEditorPlugin::forward_3d_force_draw_over_viewport
          (AnimationPlayerEditorPlugin *this,Control *param_1)

{
  AnimationPlayerEditor *this_00;
  char cVar1;
  
  this_00 = *(AnimationPlayerEditor **)(this + 0x660);
  if (*(int *)(this_00 + 0xb50) != 0) {
    cVar1 = AnimationPlayerEditor::_are_onion_layers_valid(this_00);
    if (cVar1 != '\0') {
      AnimationPlayerEditor::forward_force_draw_over_viewport(this_00,param_1);
      return;
    }
  }
  return;
}



/* AnimationPlayerEditorPlugin::forward_canvas_force_draw_over_viewport(Control*) */

void __thiscall
AnimationPlayerEditorPlugin::forward_canvas_force_draw_over_viewport
          (AnimationPlayerEditorPlugin *this,Control *param_1)

{
  AnimationPlayerEditor *this_00;
  char cVar1;
  
  this_00 = *(AnimationPlayerEditor **)(this + 0x660);
  if (*(int *)(this_00 + 0xb50) != 0) {
    cVar1 = AnimationPlayerEditor::_are_onion_layers_valid(this_00);
    if (cVar1 != '\0') {
      AnimationPlayerEditor::forward_force_draw_over_viewport(this_00,param_1);
      return;
    }
  }
  return;
}



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
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



/* Ref<Animation>::unref() */

void __thiscall Ref<Animation>::unref(Ref<Animation> *this)

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



/* Callable create_custom_callable_function_pointer<AnimationPlayerEditor,
   int>(AnimationPlayerEditor*, char const*, void (AnimationPlayerEditor::*)(int)) */

AnimationPlayerEditor *
create_custom_callable_function_pointer<AnimationPlayerEditor,int>
          (AnimationPlayerEditor *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC8;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012d050;
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



/* void EditorUndoRedoManager::add_undo_method<String>(Object*, StringName const&, String) */

void __thiscall
EditorUndoRedoManager::add_undo_method<String>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,String *param_4)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ::Variant::Variant((Variant *)local_68,param_4);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_undo_methodp((Object *)this,param_1,param_2,(int)local_78);
  if (::Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = ::Variant::needs_deinit[local_68[0]];
  }
  else {
    ::Variant::_clear_internal();
    cVar1 = ::Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    ::Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void EditorUndoRedoManager::add_do_method<AnimationPlayer*>(Object*, StringName const&,
   AnimationPlayer*) */

void __thiscall
EditorUndoRedoManager::add_do_method<AnimationPlayer*>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,AnimationPlayer *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ::Variant::Variant((Variant *)local_68,(Object *)param_3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_do_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,(int)local_78);
  if (::Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = ::Variant::needs_deinit[local_68[0]];
  }
  else {
    ::Variant::_clear_internal();
    cVar1 = ::Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    ::Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void EditorUndoRedoManager::add_undo_method<AnimationPlayer*>(Object*, StringName const&,
   AnimationPlayer*) */

void __thiscall
EditorUndoRedoManager::add_undo_method<AnimationPlayer*>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,AnimationPlayer *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ::Variant::Variant((Variant *)local_68,(Object *)param_3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_undo_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,(int)local_78);
  if (::Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = ::Variant::needs_deinit[local_68[0]];
  }
  else {
    ::Variant::_clear_internal();
    cVar1 = ::Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    ::Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void Ref<AnimationLibrary>::instantiate<>() */

void __thiscall Ref<AnimationLibrary>::instantiate<>(Ref<AnimationLibrary> *this)

{
  char cVar1;
  AnimationLibrary *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (AnimationLibrary *)operator_new(0x270,"");
  AnimationLibrary::AnimationLibrary(this_00);
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
    this_00 = (AnimationLibrary *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (AnimationLibrary *)pOVar3) goto LAB_0011da25;
    *(AnimationLibrary **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0011da25;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (AnimationLibrary *)0x0) {
    return;
  }
LAB_0011da25:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void EditorUndoRedoManager::add_do_method<char const*, Ref<AnimationLibrary> >(Object*,
   StringName const&, char const*, Ref<AnimationLibrary>) */

void __thiscall
EditorUndoRedoManager::add_do_method<char_const*,Ref<AnimationLibrary>>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,char *param_3,
          undefined8 *param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  ::Variant::Variant(local_88,param_3);
  ::Variant::Variant(local_70,(Object *)*param_5);
  pVVar2 = (Variant *)local_40;
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  EditorUndoRedoManager::add_do_methodp((Object *)this,param_1,param_2,(int)&local_a8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (::Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      ::Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_undo_method<char const*>(Object*, StringName const&, char const*)
    */

void __thiscall
EditorUndoRedoManager::add_undo_method<char_const*>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,char *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ::Variant::Variant((Variant *)local_68,param_3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_undo_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,(int)local_78);
  if (::Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = ::Variant::needs_deinit[local_68[0]];
  }
  else {
    ::Variant::_clear_internal();
    cVar1 = ::Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    ::Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Callable create_custom_callable_function_pointer<AnimationPlayerEditor>(AnimationPlayerEditor*,
   char const*, void (AnimationPlayerEditor::*)()) */

AnimationPlayerEditor *
create_custom_callable_function_pointer<AnimationPlayerEditor>
          (AnimationPlayerEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC8;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012d170;
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



/* Callable create_custom_callable_function_pointer<AnimationPlayerEditor, String
   const&>(AnimationPlayerEditor*, char const*, void (AnimationPlayerEditor::*)(String const&)) */

AnimationPlayerEditor *
create_custom_callable_function_pointer<AnimationPlayerEditor,String_const&>
          (AnimationPlayerEditor *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC8;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012d200;
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



/* Callable create_custom_callable_function_pointer<AnimationPlayerEditorPlugin,
   AnimationMixer*>(AnimationPlayerEditorPlugin*, char const*, void
   (AnimationPlayerEditorPlugin::*)(AnimationMixer*)) */

AnimationPlayerEditorPlugin *
create_custom_callable_function_pointer<AnimationPlayerEditorPlugin,AnimationMixer*>
          (AnimationPlayerEditorPlugin *param_1,char *param_2,_func_void_AnimationMixer_ptr *param_3
          )

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC8;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012d7a0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_AnimationMixer_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<AnimationMixer*>(AnimationMixer*) const */

AnimationMixer * Callable::bind<AnimationMixer*>(AnimationMixer *param_1)

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
  ::Variant::Variant((Variant *)local_58,in_RDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)param_1,in_ESI);
  if (::Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = ::Variant::needs_deinit[local_58[0]];
  }
  else {
    ::Variant::_clear_internal();
    cVar1 = ::Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    ::Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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



/* AnimationPlayerEditorPlugin::get_state() const */

AnimationPlayerEditorPlugin * __thiscall
AnimationPlayerEditorPlugin::get_state(AnimationPlayerEditorPlugin *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  AnimationPlayerEditor::get_state();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = BaseButton::set_disabled;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e35a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0011e35a:
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



/* AnimationMarkerKeyEditEditorPlugin::~AnimationMarkerKeyEditEditorPlugin() */

void __thiscall
AnimationMarkerKeyEditEditorPlugin::~AnimationMarkerKeyEditEditorPlugin
          (AnimationMarkerKeyEditEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012cda8;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* AnimationMarkerKeyEditEditorPlugin::~AnimationMarkerKeyEditEditorPlugin() */

void __thiscall
AnimationMarkerKeyEditEditorPlugin::~AnimationMarkerKeyEditEditorPlugin
          (AnimationMarkerKeyEditEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012cda8;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x668);
  return;
}



/* AnimationTrackKeyEditEditorPlugin::~AnimationTrackKeyEditEditorPlugin() */

void __thiscall
AnimationTrackKeyEditEditorPlugin::~AnimationTrackKeyEditEditorPlugin
          (AnimationTrackKeyEditEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012c970;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* AnimationTrackKeyEditEditorPlugin::~AnimationTrackKeyEditEditorPlugin() */

void __thiscall
AnimationTrackKeyEditEditorPlugin::~AnimationTrackKeyEditEditorPlugin
          (AnimationTrackKeyEditEditorPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012c970;
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  operator_delete(this,0x668);
  return;
}



/* EditorInspectorPluginAnimationMarkerKeyEdit::_initialize_classv() */

void EditorInspectorPluginAnimationMarkerKeyEdit::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00136010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00136058 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00136060 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorInspectorPlugin";
    local_68 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspectorPluginAnimationMarkerKeyEdit";
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



/* WARNING: Removing unreachable block (ram,0x0011e928) */
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



/* WARNING: Removing unreachable block (ram,0x0011ebd8) */
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* AnimationMarkerKeyEditEditorPlugin::get_class() const */

void AnimationMarkerKeyEditEditorPlugin::get_class(void)

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



/* AnimationTrackKeyEditEditorPlugin::get_class() const */

void AnimationTrackKeyEditEditorPlugin::get_class(void)

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



/* AnimationPlayerEditorPlugin::get_class() const */

void AnimationPlayerEditorPlugin::get_class(void)

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



/* AnimationPlayerEditor::get_class() const */

void AnimationPlayerEditor::get_class(void)

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



/* EditorInspectorPluginAnimationMarkerKeyEdit::get_class() const */

void EditorInspectorPluginAnimationMarkerKeyEdit::get_class(void)

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



/* EditorInspectorPluginAnimationTrackKeyEdit::get_class() const */

void EditorInspectorPluginAnimationTrackKeyEdit::get_class(void)

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



/* AnimatedValuesBackup::get_class() const */

void AnimatedValuesBackup::get_class(void)

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
        uVar5 = String::operator==(param_1,"Object");
        return uVar5;
      }
LAB_0011f6d7:
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
    uVar4 = String::operator==(param_1,(String *)&local_50);
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
      goto LAB_0011f6d7;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011f7db;
  }
  cVar4 = String::operator==(param_1,"RefCounted");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011f7db:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimatedValuesBackup::is_class(String const&) const */

undefined8 __thiscall AnimatedValuesBackup::is_class(AnimatedValuesBackup *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011f92b;
  }
  cVar4 = String::operator==(param_1,"AnimatedValuesBackup");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011f92b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011fa8b;
  }
  cVar4 = String::operator==(param_1,"Node");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011fa8b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPlugin::is_class(String const&) const */

undefined8 __thiscall EditorPlugin::is_class(EditorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011fbeb;
  }
  cVar4 = String::operator==(param_1,"EditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Node::is_class((Node *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011fbeb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationMarkerKeyEditEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
AnimationMarkerKeyEditEditorPlugin::is_class
          (AnimationMarkerKeyEditEditorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011fd3b;
  }
  cVar4 = String::operator==(param_1,"AnimationMarkerKeyEditEditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorPlugin::is_class((EditorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011fd3b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackKeyEditEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
AnimationTrackKeyEditEditorPlugin::is_class(AnimationTrackKeyEditEditorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011fe8b;
  }
  cVar4 = String::operator==(param_1,"AnimationTrackKeyEditEditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorPlugin::is_class((EditorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011fe8b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditorPlugin::is_class(String const&) const */

undefined8 __thiscall
AnimationPlayerEditorPlugin::is_class(AnimationPlayerEditorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011ffdb;
  }
  cVar4 = String::operator==(param_1,"AnimationPlayerEditorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorPlugin::is_class((EditorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011ffdb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginAnimationTrackKeyEdit::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginAnimationTrackKeyEdit::is_class
          (EditorInspectorPluginAnimationTrackKeyEdit *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0012012b;
  }
  cVar5 = String::operator==(param_1,"EditorInspectorPluginAnimationTrackKeyEdit");
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
      if (cVar5 != '\0') goto LAB_0012012b;
    }
    cVar5 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_00120268;
    }
  }
LAB_0012012b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00120268:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPluginAnimationMarkerKeyEdit::is_class(String const&) const */

undefined8 __thiscall
EditorInspectorPluginAnimationMarkerKeyEdit::is_class
          (EditorInspectorPluginAnimationMarkerKeyEdit *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0012036b;
  }
  cVar5 = String::operator==(param_1,"EditorInspectorPluginAnimationMarkerKeyEdit");
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
      if (cVar5 != '\0') goto LAB_0012036b;
    }
    cVar5 = String::operator==(param_1,"EditorInspectorPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_001204a8;
    }
  }
LAB_0012036b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001204a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationTrackEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationTrackEditor,void>::call
          (CallableCustomMethodPointer<AnimationTrackEditor,void> *this,Variant **param_1,
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
      goto LAB_0012069f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0012069f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00120750;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0012069f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00120750:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void>::call
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void> *this,Variant **param_1,
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
      goto LAB_001208af;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001208af;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00120960;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001208af:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00120960:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void>::call
          (CallableCustomMethodPointer<AnimationPlayerEditor,void> *this,Variant **param_1,
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
      goto LAB_00120abf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00120abf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00120b70;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00120abf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00120b70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, Object*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,Object*>::call
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,Object*> *this,Variant **param_1,
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
      goto LAB_00120d69;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00120d69;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00120cc0:
          uVar3 = _LC148;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = ::Variant::operator_cast_to_Object_(this_00);
          pOVar6 = ::Variant::operator_cast_to_Object_(this_00);
          if ((pOVar6 == (Object *)0x0) && (pOVar5 != (Object *)0x0)) goto LAB_00120cc0;
        }
        pOVar5 = ::Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120d07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_00120e1a;
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
LAB_00120d69:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00120e1a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, Node*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,Node*>::call
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,Node*> *this,Variant **param_1,
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
      goto LAB_00121055;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00121055;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00120f60:
          uVar3 = _LC148;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = ::Variant::operator_cast_to_Object_(this_00);
          pOVar6 = ::Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0), lVar7 == 0)) &&
             (pOVar5 != (Object *)0x0)) goto LAB_00120f60;
        }
        pOVar5 = ::Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120fc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_00121106;
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
LAB_00121055:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00121106:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Node, void, Node*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*>::call
          (CallableCustomMethodPointer<Node,void,Node*> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_00121345;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00121345;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00121250:
          uVar3 = _LC148;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = ::Variant::operator_cast_to_Object_(this_00);
          pOVar6 = ::Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0), lVar7 == 0)) &&
             (pOVar5 != (Object *)0x0)) goto LAB_00121250;
        }
        pOVar5 = ::Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001212b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_001213f6;
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
LAB_00121345:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001213f6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, AnimationMixer*>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,AnimationMixer*>::call
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,AnimationMixer*> *this,
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
      goto LAB_00121635;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00121635;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00121540:
          uVar3 = _LC148;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = ::Variant::operator_cast_to_Object_(this_00);
          pOVar6 = ::Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&AnimationMixer::typeinfo,0),
              lVar7 == 0)) && (pOVar5 != (Object *)0x0)) goto LAB_00121540;
        }
        pOVar5 = ::Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&AnimationMixer::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001215a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_001216e6;
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
LAB_00121635:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001216e6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float, bool>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool>::call
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool> *this,
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
      goto LAB_001218dc;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_001218dc;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
        uVar3 = _LC149;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = ::Variant::operator_cast_to_bool(param_1[1]);
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,3);
        uVar3 = _LC150;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        ::Variant::operator_cast_to_float(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001218b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0012198d;
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
LAB_001218dc:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0012198d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float, bool, bool>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool,bool>::call
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool,bool> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
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
      goto LAB_00121bc7;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00121bc7;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 4) {
      if (param_2 == 3) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)param_1[2],1);
        uVar3 = _LC151;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar8 = ::Variant::operator_cast_to_bool(param_1[2]);
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
        uVar3 = _LC149;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar5 = ::Variant::operator_cast_to_bool(param_1[1]);
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,3);
        uVar3 = _LC150;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        ::Variant::operator_cast_to_float(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00121ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar5,bVar8);
          return;
        }
        goto LAB_00121c78;
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
LAB_00121bc7:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00121c78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float>::call
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float> *this,Variant **param_1,
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
      goto LAB_00121e36;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_00121e36;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,3);
        uVar3 = _LC150;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        ::Variant::operator_cast_to_float(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00121de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2));
          return;
        }
        goto LAB_00121ee7;
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
LAB_00121e36:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00121ee7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,int>::call
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,int> *this,Variant **param_1,
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
      goto LAB_001220a8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_001220a8;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar3 = _LC152;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = ::Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00122057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00122159;
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
LAB_001220a8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00122159:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, int, unsigned int>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,int,unsigned_int>::call
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,int,unsigned_int> *this,
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
      goto LAB_0012234d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0012234d;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC153;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar6 = ::Variant::operator_cast_to_unsigned_int(param_1[1]);
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar3 = _LC152;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = ::Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00122326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5,uVar6);
          return;
        }
        goto LAB_001223fe;
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
LAB_0012234d:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001223fe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AnimationPlayerEditor, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,String_const&>::call
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,String_const&> *this,
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
            uVar3 = _LC154;
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
        goto LAB_001224de;
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
  _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_001224de:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, Object*, String const&,
   Transform3D const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,Object*,String_const&,Transform3D_const&>
::call(CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,Object*,String_const&,Transform3D_const&>
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
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_98 [8];
  CowData<char32_t> local_90 [8];
  undefined8 local_88;
  Variant local_80 [8];
  Variant local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_80[0] = (Variant)0x0;
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
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar9 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00122735;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00122735;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar9 & 1) != 0) {
          pcVar9 = *(code **)(pcVar9 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)param_1[2],0x12);
        uVar3 = _LC155;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        ::Variant::operator_cast_to_Transform3D(local_78);
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
        uVar3 = _LC156;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        ::Variant::operator_cast_to_String(local_80);
        cVar4 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0012282d:
          uVar3 = _LC148;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = ::Variant::operator_cast_to_Object_(this_00);
          pOVar6 = ::Variant::operator_cast_to_Object_(this_00);
          if ((pOVar6 == (Object *)0x0) && (pOVar5 != (Object *)0x0)) goto LAB_0012282d;
        }
        pOVar5 = ::Variant::operator_cast_to_Object_(*param_1);
        (*pcVar9)((long *)(lVar1 + lVar2),pOVar5,local_80,local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        goto LAB_00122735;
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
  local_88 = 0;
  String::parse_latin1((String *)&local_88,"\', can\'t call method.");
  uitos((ulong)local_98);
  operator+((char *)local_90,(String *)"Invalid Object id \'");
  String::operator+((String *)local_80,(String *)local_90);
  _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_80,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref(local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
LAB_00122735:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, String const&, Variant const&,
   bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,String_const&,Variant_const&,bool>::
call(CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,String_const&,Variant_const&,bool>
     *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_60[0] = (Variant)0x0;
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
        if ((uint)param_2 < 4) {
          if (param_2 == 3) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = ::Variant::can_convert_strict(*(undefined4 *)param_1[2],1);
            uVar3 = _LC151;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            bVar8 = ::Variant::operator_cast_to_bool(param_1[2]);
            cVar4 = ::Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 1;
            }
            ::Variant::Variant((Variant *)local_58,param_1[1]);
            cVar4 = ::Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC154;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            ::Variant::operator_cast_to_String(local_60);
            (*pcVar7)((long *)(lVar1 + lVar2),local_60,(Variant *)local_58,bVar8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
            if (::Variant::needs_deinit[local_58[0]] != '\0') {
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
        goto LAB_00122a44;
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
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"\', can\'t call method.");
  uitos((ulong)local_78);
  operator+((char *)local_70,(String *)"Invalid Object id \'");
  String::operator+((String *)local_60,(String *)local_70);
  _err_print_error(&_LC147,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_60,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00122a44:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
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
    if (cVar5 != '\0') goto LAB_00122d7b;
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
      if (cVar5 != '\0') goto LAB_00122d7b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_00122e7e;
    }
  }
LAB_00122d7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00122e7e:
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
    if (cVar4 != '\0') goto LAB_00122f8b;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00122f8b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
    if ((code *)PTR__bind_methods_00136068 != Object::_bind_methods) {
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



/* MethodBindT<Object*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Object*>::_gen_argument_type_info(int param_1)

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
    local_68 = "Object";
    local_60 = 6;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditorPlugin::_initialize_classv() */

void AnimationPlayerEditorPlugin::_initialize_classv(void)

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
    if (EditorPlugin::initialize_class()::initialized == '\0') {
      EditorPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xc;
    local_48 = "EditorPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AnimationPlayerEditorPlugin";
    local_60 = 0;
    local_40 = 0x1b;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationTrackKeyEditEditorPlugin::_initialize_classv() */

void AnimationTrackKeyEditEditorPlugin::_initialize_classv(void)

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
    if (EditorPlugin::initialize_class()::initialized == '\0') {
      EditorPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xc;
    local_48 = "EditorPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AnimationTrackKeyEditEditorPlugin";
    local_60 = 0;
    local_40 = 0x21;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationMarkerKeyEditEditorPlugin::_initialize_classv() */

void AnimationMarkerKeyEditEditorPlugin::_initialize_classv(void)

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
    if (EditorPlugin::initialize_class()::initialized == '\0') {
      EditorPlugin::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xc;
    local_48 = "EditorPlugin";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AnimationMarkerKeyEditEditorPlugin";
    local_60 = 0;
    local_40 = 0x22;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimatedValuesBackup::_initialize_classv() */

void AnimatedValuesBackup::_initialize_classv(void)

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
    if (RefCounted::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_00136068 != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "AnimatedValuesBackup";
    local_60 = 0;
    local_40 = 0x14;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorInspectorPluginAnimationTrackKeyEdit::_initialize_classv() */

void EditorInspectorPluginAnimationTrackKeyEdit::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00136010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00136058 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00136060 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorInspectorPlugin";
    local_68 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorInspectorPluginAnimationTrackKeyEdit";
    local_70 = 0;
    local_50 = 0x2a;
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
              if ((code *)PTR__bind_methods_00136010 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00136070 !=
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
      if ((code *)PTR__bind_methods_00136078 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00136010 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00136070 !=
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
      if ((code *)PTR__bind_methods_00136078 != Container::_bind_methods) {
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
            if (::Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              ::Variant::_clear_internal();
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
        if (pvVar3 == (void *)0x0) goto LAB_001248ef;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001248ef:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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
    if (cVar5 != '\0') goto LAB_00124a4b;
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
      if (cVar5 != '\0') goto LAB_00124a4b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00124b4e;
    }
  }
LAB_00124a4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00124b4e:
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
    if (cVar5 != '\0') goto LAB_00124c5b;
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
      if (cVar5 != '\0') goto LAB_00124c5b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00124d5e;
    }
  }
LAB_00124c5b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00124d5e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AnimationPlayerEditor::is_class(String const&) const */

undefined8 __thiscall AnimationPlayerEditor::is_class(AnimationPlayerEditor *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00124e6b;
  }
  cVar4 = String::operator==(param_1,"AnimationPlayerEditor");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = VBoxContainer::is_class((VBoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00124e6b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
  local_78 = &_LC135;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC135;
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
      goto LAB_0012501c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0012501c:
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
      goto LAB_0012526c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0012526c:
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
      goto LAB_001254d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001254d1:
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



/* AnimationMarkerKeyEditEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
AnimationMarkerKeyEditEditorPlugin::_get_property_listv
          (AnimationMarkerKeyEditEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "AnimationMarkerKeyEditEditorPlugin";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationMarkerKeyEditEditorPlugin";
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
      goto LAB_00125781;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00125781:
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
  StringName::StringName((StringName *)&local_78,"AnimationMarkerKeyEditEditorPlugin",false);
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



/* AnimatedValuesBackup::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AnimatedValuesBackup::_get_property_listv(AnimatedValuesBackup *this,List *param_1,bool param_2)

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
  local_78 = "AnimatedValuesBackup";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimatedValuesBackup";
  local_98 = 0;
  local_70 = 0x14;
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
      goto LAB_00125a31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00125a31:
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
  StringName::StringName((StringName *)&local_78,"AnimatedValuesBackup",false);
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
      goto LAB_00125ce1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00125ce1:
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



/* EditorInspectorPluginAnimationTrackKeyEdit::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorPluginAnimationTrackKeyEdit::_get_property_listv
          (EditorInspectorPluginAnimationTrackKeyEdit *this,List *param_1,bool param_2)

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
  local_78 = "EditorInspectorPluginAnimationTrackKeyEdit";
  local_70 = 0x2a;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPluginAnimationTrackKeyEdit";
  local_98 = 0;
  local_70 = 0x2a;
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
      goto LAB_00125f91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00125f91:
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
  StringName::StringName((StringName *)&local_78,"EditorInspectorPluginAnimationTrackKeyEdit",false)
  ;
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



/* AnimationTrackKeyEditEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
AnimationTrackKeyEditEditorPlugin::_get_property_listv
          (AnimationTrackKeyEditEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "AnimationTrackKeyEditEditorPlugin";
  local_70 = 0x21;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationTrackKeyEditEditorPlugin";
  local_98 = 0;
  local_70 = 0x21;
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
      goto LAB_00126241;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00126241:
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
  StringName::StringName((StringName *)&local_78,"AnimationTrackKeyEditEditorPlugin",false);
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



/* EditorInspectorPluginAnimationMarkerKeyEdit::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorPluginAnimationMarkerKeyEdit::_get_property_listv
          (EditorInspectorPluginAnimationMarkerKeyEdit *this,List *param_1,bool param_2)

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
  local_78 = "EditorInspectorPluginAnimationMarkerKeyEdit";
  local_70 = 0x2b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorInspectorPluginAnimationMarkerKeyEdit";
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
      goto LAB_001264f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001264f1:
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
            ((StringName *)&local_78,"EditorInspectorPluginAnimationMarkerKeyEdit",false);
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



/* AnimationPlayerEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AnimationPlayerEditorPlugin::_get_property_listv
          (AnimationPlayerEditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "AnimationPlayerEditorPlugin";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationPlayerEditorPlugin";
  local_98 = 0;
  local_70 = 0x1b;
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
      goto LAB_001267a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001267a1:
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
  StringName::StringName((StringName *)&local_78,"AnimationPlayerEditorPlugin",false);
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
      goto LAB_00126a51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00126a51:
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
  if ((code *)PTR__get_property_list_00136080 != Object::_get_property_list) {
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
      goto LAB_00126d21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00126d21:
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
  if ((code *)PTR__get_property_list_00136088 != CanvasItem::_get_property_list) {
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
      goto LAB_00126ff1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00126ff1:
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
      goto LAB_001272a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001272a1:
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
      goto LAB_00127551;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00127551:
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



/* AnimationPlayerEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AnimationPlayerEditor::_get_property_listv(AnimationPlayerEditor *this,List *param_1,bool param_2)

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
  local_78 = "AnimationPlayerEditor";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AnimationPlayerEditor";
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
      goto LAB_00127801;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00127801:
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
  StringName::StringName((StringName *)&local_78,"AnimationPlayerEditor",false);
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
      goto LAB_00127ab1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00127ab1:
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



/* AnimationPlayerEditorPlugin::set_state(Dictionary const&) */

void __thiscall
AnimationPlayerEditorPlugin::set_state(AnimationPlayerEditorPlugin *this,Dictionary *param_1)

{
  AnimationPlayerEditor::set_state(*(AnimationPlayerEditor **)(this + 0x660),param_1);
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



/* Ref<AnimationLibrary>::unref() */

void __thiscall Ref<AnimationLibrary>::unref(Ref<AnimationLibrary> *this)

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



/* MethodBind* create_method_bind<AnimationPlayerEditor, Object*>(void
   (AnimationPlayerEditor::*)(Object*)) */

MethodBind * create_method_bind<AnimationPlayerEditor,Object*>(_func_void_Object_ptr *param_1)

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
  *(_func_void_Object_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012d8c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "AnimationPlayerEditor";
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



/* MethodBind* create_method_bind<AnimationPlayerEditor>(void (AnimationPlayerEditor::*)()) */

MethodBind * create_method_bind<AnimationPlayerEditor>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012d920;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "AnimationPlayerEditor";
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
          if (::Variant::needs_deinit[*piVar5] != '\0') {
            ::Variant::_clear_internal();
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



/* List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::~List() */

void __thiscall
List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
          (List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *this)

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
    if (*(long **)((long)pvVar1 + 0x38) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x28);
      lVar2 = *(long *)((long)pvVar1 + 0x30);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x28) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x28);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x18));
      CowData<String>::_unref((CowData<String> *)((long)pvVar1 + 0x10));
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



/* EditorInspectorPluginAnimationTrackKeyEdit::~EditorInspectorPluginAnimationTrackKeyEdit() */

void __thiscall
EditorInspectorPluginAnimationTrackKeyEdit::~EditorInspectorPluginAnimationTrackKeyEdit
          (EditorInspectorPluginAnimationTrackKeyEdit *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorInspector::add_inspector_plugin;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001283f4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001283f4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001283f4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001283f4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001283f4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_001283f4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0012b810;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorPluginAnimationMarkerKeyEdit::~EditorInspectorPluginAnimationMarkerKeyEdit() */

void __thiscall
EditorInspectorPluginAnimationMarkerKeyEdit::~EditorInspectorPluginAnimationMarkerKeyEdit
          (EditorInspectorPluginAnimationMarkerKeyEdit *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorInspector::add_inspector_plugin;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001284f4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001284f4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001284f4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001284f4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001284f4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_001284f4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0012b810;
  Object::~Object((Object *)this);
  return;
}



/* EditorInspectorPluginAnimationTrackKeyEdit::~EditorInspectorPluginAnimationTrackKeyEdit() */

void __thiscall
EditorInspectorPluginAnimationTrackKeyEdit::~EditorInspectorPluginAnimationTrackKeyEdit
          (EditorInspectorPluginAnimationTrackKeyEdit *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorInspector::add_inspector_plugin;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001285f4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001285f4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001285f4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001285f4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001285f4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_001285f4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0012b810;
  Object::~Object((Object *)this);
  operator_delete(this,0x220);
  return;
}



/* EditorInspectorPluginAnimationMarkerKeyEdit::~EditorInspectorPluginAnimationMarkerKeyEdit() */

void __thiscall
EditorInspectorPluginAnimationMarkerKeyEdit::~EditorInspectorPluginAnimationMarkerKeyEdit
          (EditorInspectorPluginAnimationMarkerKeyEdit *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorInspector::add_inspector_plugin;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001286f4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001286f4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001286f4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001286f4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001286f4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_001286f4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_0012b810;
  Object::~Object((Object *)this);
  operator_delete(this,0x220);
  return;
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



/* AnimationPlayerEditor::_initialize_classv() */

void AnimationPlayerEditor::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_00136010 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_00136070 !=
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
        if ((code *)PTR__bind_methods_00136078 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"VBoxContainer");
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
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "VBoxContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AnimationPlayerEditor";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

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
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_00129260:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00129260;
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
        goto LAB_00129171;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00129171:
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



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(code **)param_1 = memcpy;
    if (*(long *)(param_1 + 0x250) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x250) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x250);
        *(undefined8 *)(param_1 + 0x250) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* AnimationPlayerEditor::_notificationv(int, bool) */

void __thiscall
AnimationPlayerEditor::_notificationv(AnimationPlayerEditor *this,int param_1,bool param_2)

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



/* void memdelete<AnimatedValuesBackup>(AnimatedValuesBackup*) */

void memdelete<AnimatedValuesBackup>(AnimatedValuesBackup *param_1)

{
  char cVar1;
  
  cVar1 = predelete_handler((Object *)param_1);
  if (cVar1 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == AnimatedValuesBackup::~AnimatedValuesBackup) {
    *(undefined ***)param_1 = &PTR__initialize_classv_0012c060;
    AnimatedValuesBackup::clear_data();
    if (*(void **)(param_1 + 0x180) != (void *)0x0) {
      Memory::free_static(*(void **)(param_1 + 0x180),false);
      Memory::free_static(*(void **)(param_1 + 0x188),false);
    }
    *(undefined ***)param_1 = &PTR__initialize_classv_0012b810;
    Object::~Object((Object *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00129578) */
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
      _err_print_error(&_LC147,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00129860;
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
LAB_00129860:
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
      goto LAB_00129c6f;
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
                    /* WARNING: Could not recover jumptable at 0x00129b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00129c6f:
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
      goto LAB_00129e2f;
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
                    /* WARNING: Could not recover jumptable at 0x00129cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00129e2f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Object*>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0012a011;
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
                    /* WARNING: Could not recover jumptable at 0x00129e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 0x10));
    return;
  }
LAB_0012a011:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Object*>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0012a1f9;
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
                    /* WARNING: Could not recover jumptable at 0x0012a081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),plVar1);
    return;
  }
LAB_0012a1f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Object*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Object*>::call
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
  Object *pOVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC147,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012a300;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar6 = 3;
LAB_0012a2f5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
    goto LAB_0012a300;
  }
  pVVar13 = param_2[5];
  if (pVVar13 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0012a350;
LAB_0012a340:
    pVVar13 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar13 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0012a350:
      uVar6 = 4;
      goto LAB_0012a2f5;
    }
    if (in_R8D == 1) goto LAB_0012a340;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar13 = pVVar13 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar12 & 1) != 0) {
    pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar5 = ::Variant::can_convert_strict(*(undefined4 *)pVVar13,0x18);
  if (cVar5 == '\0') {
LAB_0012a2c6:
    uVar4 = _LC148;
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  else {
    pOVar7 = ::Variant::operator_cast_to_Object_(pVVar13);
    pOVar9 = ::Variant::operator_cast_to_Object_(pVVar13);
    if ((pOVar9 == (Object *)0x0) && (pOVar7 != (Object *)0x0)) goto LAB_0012a2c6;
  }
  pOVar7 = ::Variant::operator_cast_to_Object_(pVVar13);
  (*(code *)pVVar12)((Variant *)((long)plVar11 + (long)pVVar1),pOVar7);
LAB_0012a300:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  CowData<char32_t> *this;
  long lVar6;
  
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
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        this = pCVar2;
        do {
          if (*(long *)(this + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this + 0x20);
              *(undefined8 *)(this + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(this + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this + 0x10);
              *(undefined8 *)(this + 0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          CowData<char32_t>::_unref(this + 8);
          CowData<char32_t>::_unref(this);
          this = this + 0x28;
        } while (lVar3 != lVar6);
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
                if (pvVar5 == (void *)0x0) goto LAB_0012a859;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_0012a859:
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



/* AnimationPlayerEditor::_node_removed(Node*) */

void AnimationPlayerEditor::_GLOBAL__sub_I__node_removed(void)

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
  if (MenuButton::base_property_helper == '\0') {
    MenuButton::base_property_helper = '\x01';
    MenuButton::base_property_helper._64_8_ = 0;
    MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
                 &__dso_handle);
  }
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper == '\0') {
    AudioStreamRandomizer::base_property_helper = '\x01';
    AudioStreamRandomizer::base_property_helper._64_8_ = 0;
    AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper
                 ,&__dso_handle);
  }
  if (EditorFileDialog::base_property_helper == '\0') {
    EditorFileDialog::base_property_helper = '\x01';
    EditorFileDialog::base_property_helper._64_8_ = 0;
    EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
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
  if (EditorHelpBit::doc_annotation_cache == '\0') {
    EditorHelpBit::doc_annotation_cache = '\x01';
    EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
  }
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
/* EditorInspectorPluginAnimationMarkerKeyEdit::~EditorInspectorPluginAnimationMarkerKeyEdit() */

void __thiscall
EditorInspectorPluginAnimationMarkerKeyEdit::~EditorInspectorPluginAnimationMarkerKeyEdit
          (EditorInspectorPluginAnimationMarkerKeyEdit *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorInspectorPluginAnimationTrackKeyEdit::~EditorInspectorPluginAnimationTrackKeyEdit() */

void __thiscall
EditorInspectorPluginAnimationTrackKeyEdit::~EditorInspectorPluginAnimationTrackKeyEdit
          (EditorInspectorPluginAnimationTrackKeyEdit *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::~List() */

void __thiscall
List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
          (List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *this)

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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationTrackKeyEditEditorPlugin::~AnimationTrackKeyEditEditorPlugin() */

void __thiscall
AnimationTrackKeyEditEditorPlugin::~AnimationTrackKeyEditEditorPlugin
          (AnimationTrackKeyEditEditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimationMarkerKeyEditEditorPlugin::~AnimationMarkerKeyEditEditorPlugin() */

void __thiscall
AnimationMarkerKeyEditEditorPlugin::~AnimationMarkerKeyEditEditorPlugin
          (AnimationMarkerKeyEditEditorPlugin *this)

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
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPlugin::EditorPlugin() */

void __thiscall EditorPlugin::EditorPlugin(EditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

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
/* MethodBindT<Object*>::~MethodBindT() */

void __thiscall MethodBindT<Object*>::~MethodBindT(MethodBindT<Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* AnimatedValuesBackup::~AnimatedValuesBackup() */

void __thiscall AnimatedValuesBackup::~AnimatedValuesBackup(AnimatedValuesBackup *this)

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
/* CallableCustomMethodPointer<AnimationPlayerEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationPlayerEditor, void, Node*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationPlayerEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationPlayerEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationPlayerEditor, void, int, unsigned
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,int,unsigned_int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,int,unsigned_int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float, bool,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float,bool,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationPlayerEditor, void, float>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,float>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationPlayerEditor, void, Object*>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditor,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditor,void,Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, Object*, String const&,
   Transform3D const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,Object*,String_const&,Transform3D_const&>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,Object*,String_const&,Transform3D_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void, String const&, Variant const&,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,String_const&,Variant_const&,bool>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,String_const&,Variant_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationTrackEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationTrackEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationTrackEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AnimationPlayerEditorPlugin, void,
   AnimationMixer*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,AnimationMixer*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AnimationPlayerEditorPlugin,void,AnimationMixer*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Node, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Node,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Node,void,Node*> *this)

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


