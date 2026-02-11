
/* CompositorEffect::get_enabled() const */

CompositorEffect __thiscall CompositorEffect::get_enabled(CompositorEffect *this)

{
  return this[0x248];
}



/* CompositorEffect::get_effect_callback_type() const */

undefined4 __thiscall CompositorEffect::get_effect_callback_type(CompositorEffect *this)

{
  return *(undefined4 *)(this + 0x24c);
}



/* CompositorEffect::get_access_resolved_color() const */

CompositorEffect __thiscall CompositorEffect::get_access_resolved_color(CompositorEffect *this)

{
  return this[0x250];
}



/* CompositorEffect::get_access_resolved_depth() const */

CompositorEffect __thiscall CompositorEffect::get_access_resolved_depth(CompositorEffect *this)

{
  return this[0x251];
}



/* CompositorEffect::get_needs_motion_vectors() const */

CompositorEffect __thiscall CompositorEffect::get_needs_motion_vectors(CompositorEffect *this)

{
  return this[0x252];
}



/* CompositorEffect::get_needs_normal_roughness() const */

CompositorEffect __thiscall CompositorEffect::get_needs_normal_roughness(CompositorEffect *this)

{
  return this[0x253];
}



/* CompositorEffect::get_needs_separate_specular() const */

CompositorEffect __thiscall CompositorEffect::get_needs_separate_specular(CompositorEffect *this)

{
  return this[0x254];
}



/* CompositorEffect::~CompositorEffect() */

void __thiscall CompositorEffect::~CompositorEffect(CompositorEffect *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_0010d3c0;
  plVar1 = (long *)RenderingServer::get_singleton();
  if ((plVar1 != (long *)0x0) && (*(long *)(this + 0x240) != 0)) {
    (**(code **)(*plVar1 + 0x11b0))(plVar1,*(undefined8 *)(this + 0x240));
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 600) != 0)) {
    StringName::unref();
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* CompositorEffect::~CompositorEffect() */

void __thiscall CompositorEffect::~CompositorEffect(CompositorEffect *this)

{
  ~CompositorEffect(this);
  operator_delete(this,0x270);
  return;
}



/* CompositorEffect::set_enabled(bool) */

void __thiscall CompositorEffect::set_enabled(CompositorEffect *this,bool param_1)

{
  long *plVar1;
  
  this[0x248] = (CompositorEffect)param_1;
  if (*(long *)(this + 0x240) == 0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010014a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb88))(plVar1,*(undefined8 *)(this + 0x240),this[0x248]);
    return;
  }
  _err_print_error("set_enabled","scene/resources/compositor.cpp",0x60,"Parameter \"rs\" is null.",0
                   ,0);
  return;
}



/* CompositorEffect::set_access_resolved_color(bool) */

void __thiscall CompositorEffect::set_access_resolved_color(CompositorEffect *this,bool param_1)

{
  long *plVar1;
  
  this[0x250] = (CompositorEffect)param_1;
  if (*(long *)(this + 0x240) == 0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001001cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb98))(plVar1,*(undefined8 *)(this + 0x240),1,this[0x250]);
    return;
  }
  _err_print_error("set_access_resolved_color","scene/resources/compositor.cpp",0x7c,
                   "Parameter \"rs\" is null.",0,0);
  return;
}



/* CompositorEffect::set_access_resolved_depth(bool) */

void __thiscall CompositorEffect::set_access_resolved_depth(CompositorEffect *this,bool param_1)

{
  long *plVar1;
  
  this[0x251] = (CompositorEffect)param_1;
  if (*(long *)(this + 0x240) == 0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010024f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb98))(plVar1,*(undefined8 *)(this + 0x240),2,this[0x251]);
    return;
  }
  _err_print_error("set_access_resolved_depth","scene/resources/compositor.cpp",0x89,
                   "Parameter \"rs\" is null.",0,0);
  return;
}



/* CompositorEffect::set_needs_motion_vectors(bool) */

void __thiscall CompositorEffect::set_needs_motion_vectors(CompositorEffect *this,bool param_1)

{
  long *plVar1;
  
  this[0x252] = (CompositorEffect)param_1;
  if (*(long *)(this + 0x240) == 0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001002cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb98))(plVar1,*(undefined8 *)(this + 0x240),4,this[0x252]);
    return;
  }
  _err_print_error("set_needs_motion_vectors","scene/resources/compositor.cpp",0x96,
                   "Parameter \"rs\" is null.",0,0);
  return;
}



/* CompositorEffect::set_needs_normal_roughness(bool) */

void __thiscall CompositorEffect::set_needs_normal_roughness(CompositorEffect *this,bool param_1)

{
  long *plVar1;
  
  this[0x253] = (CompositorEffect)param_1;
  if (*(long *)(this + 0x240) == 0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010034f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb98))(plVar1,*(undefined8 *)(this + 0x240),8,this[0x253]);
    return;
  }
  _err_print_error("set_needs_normal_roughness","scene/resources/compositor.cpp",0xa3,
                   "Parameter \"rs\" is null.",0,0);
  return;
}



/* CompositorEffect::set_needs_separate_specular(bool) */

void __thiscall CompositorEffect::set_needs_separate_specular(CompositorEffect *this,bool param_1)

{
  long *plVar1;
  
  this[0x254] = (CompositorEffect)param_1;
  if (*(long *)(this + 0x240) == 0) {
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001003cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb98))(plVar1,*(undefined8 *)(this + 0x240),0x10,this[0x254]);
    return;
  }
  _err_print_error("set_needs_separate_specular","scene/resources/compositor.cpp",0xb0,
                   "Parameter \"rs\" is null.",0,0);
  return;
}



/* CompositorEffect::set_effect_callback_type(CompositorEffect::EffectCallbackType) */

void __thiscall
CompositorEffect::set_effect_callback_type(CompositorEffect *this,undefined4 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  Callable aCStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x24c) = param_2;
  Object::notify_property_list_changed();
  if (*(long *)(this + 0x240) != 0) {
    plVar3 = (long *)RenderingServer::get_singleton();
    if (plVar3 == (long *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("set_effect_callback_type","scene/resources/compositor.cpp",0x6f,
                         "Parameter \"rs\" is null.",0,0);
        return;
      }
      goto LAB_00100569;
    }
    pcVar1 = *(code **)(*plVar3 + 0xb90);
    this_00 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_00);
    *(undefined **)(this_00 + 0x20) = &_LC9;
    *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined ***)this_00 = &PTR_hash_0010d770;
    uVar2 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x30) = uVar2;
    *(code **)(this_00 + 0x38) = _call_render_callback;
    *(CompositorEffect **)(this_00 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "CompositorEffect::_call_render_callback";
    Callable::Callable(aCStack_48,this_00);
    (*pcVar1)(plVar3,*(undefined8 *)(this + 0x240),*(undefined4 *)(this + 0x24c),aCStack_48);
    Callable::~Callable(aCStack_48);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100569:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Compositor::set_compositor_effects(TypedArray<CompositorEffect> const&) */

void __thiscall Compositor::set_compositor_effects(Compositor *this,TypedArray *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  ulong uVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  Object *pOVar12;
  long in_FS_OFFSET;
  Array local_70 [8];
  Array local_68 [8];
  long local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(local_70);
  if (*(int *)(this + 0x248) != 0) {
    lVar10 = 0;
    do {
      while ((plVar9 = (long *)(*(long *)(this + 0x250) + lVar10 * 8), *plVar9 == 0 ||
             (cVar4 = RefCounted::unreference(), cVar4 == '\0'))) {
LAB_001006e0:
        lVar10 = lVar10 + 1;
        if (*(uint *)(this + 0x248) <= (uint)lVar10) goto LAB_00100740;
      }
      pOVar6 = (Object *)*plVar9;
      cVar4 = predelete_handler(pOVar6);
      if (cVar4 == '\0') goto LAB_001006e0;
      lVar10 = lVar10 + 1;
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    } while ((uint)lVar10 < *(uint *)(this + 0x248));
LAB_00100740:
    *(undefined4 *)(this + 0x248) = 0;
  }
  for (iVar11 = 0; iVar5 = Array::size(), iVar11 < iVar5; iVar11 = iVar11 + 1) {
    Array::operator[]((int)param_1);
    lVar10 = Variant::get_validated_object();
    if (((lVar10 == 0) ||
        (pOVar6 = (Object *)__dynamic_cast(lVar10,&Object::typeinfo,&CompositorEffect::typeinfo,0),
        pOVar6 == (Object *)0x0)) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      pOVar6 = (Object *)0x0;
      pOVar12 = (Object *)0x0;
    }
    else {
      cVar4 = RefCounted::reference();
      pOVar12 = (Object *)0x0;
      if (cVar4 != '\0') {
        pOVar12 = pOVar6;
      }
    }
    uVar2 = *(uint *)(this + 0x248);
    pvVar8 = *(void **)(this + 0x250);
    if (*(uint *)(this + 0x24c) == uVar2) {
      uVar7 = (ulong)(uVar2 * 2);
      if (uVar2 * 2 == 0) {
        uVar7 = 1;
      }
      *(int *)(this + 0x24c) = (int)uVar7;
      pvVar8 = (void *)Memory::realloc_static(pvVar8,uVar7 * 8,false);
      *(void **)(this + 0x250) = pvVar8;
      if (pvVar8 == (void *)0x0) {
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar2 = *(uint *)(this + 0x248);
    }
    puVar1 = (undefined8 *)((long)pvVar8 + (ulong)uVar2 * 8);
    *(uint *)(this + 0x248) = uVar2 + 1;
    if (pOVar12 == (Object *)0x0) {
      *puVar1 = 0;
    }
    else {
      *puVar1 = pOVar12;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *puVar1 = 0;
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar12), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
        Memory::free_static(pOVar12,false);
      }
    }
    if (pOVar6 != (Object *)0x0) {
      if (*(code **)(*(long *)pOVar6 + 0x1c0) == CompositorEffect::get_rid) {
        local_60 = *(long *)(pOVar6 + 0x240);
      }
      else {
        local_60 = (**(code **)(*(long *)pOVar6 + 0x1c0))(pOVar6);
      }
      Variant::Variant((Variant *)local_58,(RID *)&local_60);
      Array::push_back((Variant *)local_70);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
  plVar9 = (long *)RenderingServer::get_singleton();
  pcVar3 = *(code **)(*plVar9 + 0xba8);
  Array::Array(local_68);
  local_58[0] = 0;
  local_58[1] = 0;
  local_60 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)local_68,(StringName *)0x17,(Variant *)&local_60);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar4 = Array::is_same_typed(local_68);
  if (cVar4 == '\0') {
    Array::assign(local_68);
  }
  else {
    Array::_ref(local_68);
  }
  (*pcVar3)(plVar9,*(undefined8 *)(this + 0x240),local_68);
  Array::~Array(local_68);
  Array::~Array(local_70);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Compositor::~Compositor() */

void __thiscall Compositor::~Compositor(Compositor *this)

{
  Object *pOVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010d598;
  plVar3 = (long *)RenderingServer::get_singleton();
  if ((plVar3 != (long *)0x0) && (*(long *)(this + 0x240) != 0)) {
    (**(code **)(*plVar3 + 0x11b0))(plVar3);
  }
  pvVar5 = *(void **)(this + 0x250);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x248) != 0) {
      lVar4 = 0;
      do {
        plVar3 = (long *)((long)pvVar5 + lVar4 * 8);
        if (*plVar3 != 0) {
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            pOVar1 = (Object *)*plVar3;
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
          pvVar5 = *(void **)(this + 0x250);
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(this + 0x248));
      *(undefined4 *)(this + 0x248) = 0;
      if (pvVar5 == (void *)0x0) goto LAB_00100b87;
    }
    Memory::free_static(pvVar5,false);
  }
LAB_00100b87:
  Resource::~Resource((Resource *)this);
  return;
}



/* Compositor::~Compositor() */

void __thiscall Compositor::~Compositor(Compositor *this)

{
  ~Compositor(this);
  operator_delete(this,600);
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



/* Compositor::get_compositor_effects() const */

void Compositor::get_compositor_effects(void)

{
  long *plVar1;
  long lVar2;
  long in_RSI;
  Array *in_RDI;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [2];
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(in_RDI);
  local_40 = (undefined1  [16])0x0;
  local_58 = "CompositorEffect";
  local_48[0] = 0;
  local_48[1] = 0;
  local_60 = 0;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(StrRange *)&local_60,false);
  Array::set_typed((uint)in_RDI,(StringName *)0x18,(Variant *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
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
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (*(int *)(in_RSI + 0x248) != 0) {
    lVar2 = 0;
    do {
      Variant::Variant((Variant *)local_48,*(Object **)(*(long *)(in_RSI + 0x250) + lVar2 * 8));
      Array::push_back((Variant *)in_RDI);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < *(uint *)(in_RSI + 0x248));
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompositorEffect::_validate_property(PropertyInfo&) const */

void __thiscall CompositorEffect::_validate_property(CompositorEffect *this,PropertyInfo *param_1)

{
  String *this_00;
  char cVar1;
  
  this_00 = (String *)(param_1 + 8);
  cVar1 = String::operator==(this_00,"access_resolved_color");
  if ((cVar1 != '\0') && (*(int *)(this + 0x24c) == 4)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  cVar1 = String::operator==(this_00,"access_resolved_depth");
  if ((cVar1 != '\0') && (*(int *)(this + 0x24c) == 4)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  cVar1 = String::operator==(this_00,"needs_separate_specular");
  if ((cVar1 != '\0') && (*(int *)(this + 0x24c) != 2)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* CompositorEffect::CompositorEffect() */

void __thiscall CompositorEffect::CompositorEffect(CompositorEffect *this)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_50;
  Callable local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Resource::Resource((Resource *)this);
  this[0x248] = (CompositorEffect)0x1;
  *(undefined ***)this = &PTR__initialize_classv_0010d3c0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x24c) = 4;
  this[0x254] = (CompositorEffect)0x0;
  StringName::StringName((StringName *)(this + 600),"_render_callback",false);
  this[0x260] = (CompositorEffect)0x0;
  *(undefined8 *)(this + 0x268) = 0;
  plVar2 = (long *)RenderingServer::get_singleton();
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0xb80))(plVar2);
    *(undefined8 *)(this + 0x240) = uVar3;
    pcVar1 = *(code **)(*plVar2 + 0xb90);
    StringName::StringName((StringName *)&local_50,"_render_callback",false);
    Callable::Callable(local_48,(Object *)this,(StringName *)&local_50);
    (*pcVar1)(plVar2,*(undefined8 *)(this + 0x240),*(undefined4 *)(this + 0x24c),local_48);
    Callable::~Callable(local_48);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Compositor::Compositor() */

void __thiscall Compositor::Compositor(Compositor *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  Resource::Resource((Resource *)this);
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010d598;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  plVar1 = (long *)RenderingServer::get_singleton();
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0xba0))(plVar1);
    *(undefined8 *)(this + 0x240) = uVar2;
  }
  return;
}



/* Compositor::_bind_methods() */

void Compositor::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  CowData<char32_t> *local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &local_68;
  local_60 = 0;
  local_68 = "compositor_effects";
  D_METHODP((char *)&local_98,(char ***)"set_compositor_effects",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Compositor,TypedArray<CompositorEffect>const&>(set_compositor_effects)
  ;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
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
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_compositor_effects",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<Compositor,TypedArray<CompositorEffect>>(get_compositor_effects);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar3;
      if (lVar1 != 0) {
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
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "%s/%s:%s";
  local_c0 = 0;
  local_d8 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_d8);
  vformat<Variant::Type,PropertyHint,char_const*>
            ((CowData *)&local_d0,(StrRange *)&local_d8,0x18,0x11,"CompositorEffect");
  local_98 = "compositor_effects";
  local_c8 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = (char *)CONCAT44(local_98._4_4_,0x1c);
  local_90 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_c8);
  }
  local_88 = (long *)0x0;
  local_80 = 0x1f;
  local_78 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d0);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(CowData<char32_t> *)&local_78,false);
      if (local_88 == (long *)local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = (long *)local_a8;
      }
      goto LAB_0010154f;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_0010154f:
  local_f0 = (CowData<char32_t> *)&local_78;
  local_e0 = 0;
  local_a8 = "Compositor";
  local_a0 = 10;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_a8,(StrRange *)&local_e0,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref(local_f0);
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
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



/* CompositorEffect::_bind_methods() */

void CompositorEffect::_bind_methods(void)

{
  long lVar1;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  int *piVar20;
  MethodBind *pMVar21;
  uint uVar22;
  long *plVar23;
  int *piVar24;
  long lVar25;
  long in_FS_OFFSET;
  StringName *local_170;
  undefined8 local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  char *local_108;
  undefined1 local_100 [16];
  int local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  int *local_88;
  undefined8 local_80;
  Vector<int> local_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "enabled";
  uVar22 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_enabled",uVar22);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,bool>(set_enabled);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar25 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_c8._8_8_;
      local_c8 = auVar3 << 0x40;
      plVar23 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar25 = lVar25 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar25);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_enabled",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,bool>(get_enabled);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar25 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_c8._8_8_;
      local_c8 = auVar4 << 0x40;
      plVar23 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar25 = lVar25 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar25);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_128 = 0;
  local_d8 = "";
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_d8 = "enabled";
  local_138 = 0;
  local_d0 = 7;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_138);
  }
  local_c8._0_12_ = ZEXT812(0);
  local_b8 = 0;
  if (local_130 == 0) {
    local_b0 = CONCAT44(local_b0._4_4_,6);
LAB_00101e1b:
    StringName::operator=((StringName *)local_c8,(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_130);
    local_b0 = CONCAT44(local_b0._4_4_,6);
    if (local_c8._8_4_ != 0x11) goto LAB_00101e1b;
    StringName::StringName((StringName *)&local_108,(CowData<char32_t> *)&local_b8,false);
    if ((char *)local_c8._0_8_ == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_c8._0_8_ = local_108;
    }
  }
  local_140 = 0;
  local_108 = "CompositorEffect";
  local_100._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != 0)) {
    StringName::unref();
  }
  local_68 = "effect_callback_type";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_effect_callback_type",uVar22);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,CompositorEffect::EffectCallbackType>
                      (set_effect_callback_type);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_effect_callback_type",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,CompositorEffect::EffectCallbackType>
                      (get_effect_callback_type);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar25 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_c8._8_8_;
      local_c8 = auVar5 << 0x40;
      plVar23 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar25 = lVar25 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar25);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_d8 = "Pre Opaque,Post Opaque,Post Sky,Pre Transparent,Post Transparent";
  local_128 = 0;
  local_130 = 0;
  local_d0 = 0x40;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  local_d8 = "effect_callback_type";
  local_d0 = 0x14;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,2);
  local_d0 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_138);
  }
  local_c8._0_12_ = ZEXT412(2) << 0x40;
  local_b8 = 0;
  if (local_130 == 0) {
    local_b0 = CONCAT44(local_b0._4_4_,6);
LAB_0010224b:
    StringName::operator=((StringName *)local_c8,(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_130);
    local_b0 = CONCAT44(local_b0._4_4_,6);
    if (local_c8._8_4_ != 0x11) goto LAB_0010224b;
    StringName::StringName((StringName *)&local_108,(CowData<char32_t> *)&local_b8,false);
    if ((char *)local_c8._0_8_ == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_c8._0_8_ = local_108;
    }
  }
  local_140 = 0;
  local_108 = "CompositorEffect";
  local_100._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != 0)) {
    StringName::unref();
  }
  local_68 = "enable";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_access_resolved_color",uVar22);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,bool>(set_access_resolved_color);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_access_resolved_color",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,bool>(get_access_resolved_color);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_d8 = "";
  local_128 = 0;
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  local_d8 = "access_resolved_color";
  local_d0 = 0x15;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_138);
  }
  local_c8._0_12_ = ZEXT812(0);
  local_b8 = 0;
  if (local_130 == 0) {
    local_b0 = CONCAT44(local_b0._4_4_,6);
LAB_001025bb:
    StringName::operator=((StringName *)local_c8,(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_130);
    local_b0 = CONCAT44(local_b0._4_4_,6);
    if (local_c8._8_4_ != 0x11) goto LAB_001025bb;
    StringName::StringName((StringName *)&local_108,(CowData<char32_t> *)&local_b8,false);
    if ((char *)local_c8._0_8_ == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_c8._0_8_ = local_108;
    }
  }
  local_140 = 0;
  local_108 = "CompositorEffect";
  local_100._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != 0)) {
    StringName::unref();
  }
  local_68 = "enable";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_access_resolved_depth",uVar22);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,bool>(set_access_resolved_depth);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar25 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_c8._8_8_;
      local_c8 = auVar6 << 0x40;
      plVar23 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar25 = lVar25 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar25);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_access_resolved_depth",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,bool>(get_access_resolved_depth);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_d8 = "";
  local_128 = 0;
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  local_d8 = "access_resolved_depth";
  local_d0 = 0x15;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_138);
  }
  local_c8._0_12_ = ZEXT812(0);
  local_b8 = 0;
  if (local_130 == 0) {
    local_b0 = CONCAT44(local_b0._4_4_,6);
LAB_001029db:
    StringName::operator=((StringName *)local_c8,(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_130);
    local_b0 = CONCAT44(local_b0._4_4_,6);
    if (local_c8._8_4_ != 0x11) goto LAB_001029db;
    StringName::StringName((StringName *)&local_108,(CowData<char32_t> *)&local_b8,false);
    if ((char *)local_c8._0_8_ == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_c8._0_8_ = local_108;
    }
  }
  local_140 = 0;
  local_108 = "CompositorEffect";
  local_100._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if (((StringName::configured != '\0') &&
      ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_118 != 0)
      ))) {
    StringName::unref();
  }
  local_68 = "enable";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_needs_motion_vectors",uVar22);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,bool>(set_needs_motion_vectors);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar25 = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_c8._8_8_;
      local_c8 = auVar7 << 0x40;
      plVar23 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar25 = lVar25 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar25);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_needs_motion_vectors",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,bool>(get_needs_motion_vectors);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_d8 = "";
  local_128 = 0;
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  local_d8 = "needs_motion_vectors";
  local_d0 = 0x14;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_138);
  }
  local_c8._0_12_ = ZEXT812(0);
  local_b8 = 0;
  if (local_130 == 0) {
    local_b0 = CONCAT44(local_b0._4_4_,6);
LAB_00102dfb:
    StringName::operator=((StringName *)local_c8,(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_130);
    local_b0 = CONCAT44(local_b0._4_4_,6);
    if (local_c8._8_4_ != 0x11) goto LAB_00102dfb;
    StringName::StringName((StringName *)&local_108,(CowData<char32_t> *)&local_b8,false);
    if ((char *)local_c8._0_8_ == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_c8._0_8_ = local_108;
    }
  }
  local_140 = 0;
  local_108 = "CompositorEffect";
  local_100._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != 0)) {
    StringName::unref();
  }
  local_68 = "enable";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_needs_normal_roughness",uVar22);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,bool>(set_needs_normal_roughness);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_d8);
  D_METHODP((char *)&local_d8,(char ***)"get_needs_normal_roughness",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,bool>(get_needs_normal_roughness);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar25 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_c8._8_8_;
      local_c8 = auVar8 << 0x40;
      plVar23 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar25 = lVar25 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar25);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_d8 = "";
  local_128 = 0;
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  local_d8 = "needs_normal_roughness";
  local_d0 = 0x16;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_138);
  }
  local_c8._0_12_ = ZEXT812(0);
  local_b8 = 0;
  if (local_130 == 0) {
    local_b0 = CONCAT44(local_b0._4_4_,6);
LAB_0010321b:
    StringName::operator=((StringName *)local_c8,(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_130);
    local_b0 = CONCAT44(local_b0._4_4_,6);
    if (local_c8._8_4_ != 0x11) goto LAB_0010321b;
    StringName::StringName((StringName *)&local_108,(CowData<char32_t> *)&local_b8,false);
    if ((char *)local_c8._0_8_ == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_c8._0_8_ = local_108;
    }
  }
  local_140 = 0;
  local_108 = "CompositorEffect";
  local_100._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != 0)) {
    StringName::unref();
  }
  local_68 = "enable";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_d8,(char ***)"set_needs_separate_specular",uVar22);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,bool>(set_needs_separate_specular);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar25 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_c8._8_8_;
      local_c8 = auVar9 << 0x40;
      plVar23 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar25 = lVar25 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar25);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_needs_separate_specular",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar21 = create_method_bind<CompositorEffect,bool>(get_needs_separate_specular);
  ClassDB::bind_methodfi(1,pMVar21,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar19 = local_c8._0_8_;
  if ((long *)local_c8._0_8_ != (long *)0x0) {
    LOCK();
    plVar23 = (long *)(local_c8._0_8_ + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if ((long *)local_c8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_c8._0_8_ + -8);
      lVar25 = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_c8._8_8_;
      local_c8 = auVar10 << 0x40;
      plVar23 = (long *)uVar19;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar23 != 0)) {
            StringName::unref();
          }
          lVar25 = lVar25 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar1 != lVar25);
      }
      Memory::free_static((long *)(uVar19 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_118,true);
  _scs_create((char *)&local_120,true);
  local_d8 = "";
  local_128 = 0;
  local_130 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_130);
  local_138 = 0;
  local_d8 = "needs_separate_specular";
  local_d0 = 0x17;
  String::parse_latin1((StrRange *)&local_138);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  if (local_138 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_138);
  }
  local_c8._0_12_ = ZEXT812(0);
  local_b8 = 0;
  if (local_130 == 0) {
    local_b0 = CONCAT44(local_b0._4_4_,6);
LAB_001036f3:
    StringName::operator=((StringName *)local_c8,(StringName *)&local_128);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_130);
    local_b0 = CONCAT44(local_b0._4_4_,6);
    if (local_c8._8_4_ != 0x11) goto LAB_001036f3;
    StringName::StringName((StringName *)&local_108,(CowData<char32_t> *)&local_b8,false);
    if ((char *)local_c8._0_8_ == local_108) {
      if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_c8._0_8_ = local_108;
    }
  }
  local_140 = 0;
  local_108 = "CompositorEffect";
  local_100._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_140);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_140,false);
  ClassDB::add_property
            ((StringName *)&local_108,(PropertyInfo *)&local_d8,(StringName *)&local_120,
             (StringName *)&local_118,-1);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((((StringName::configured != '\0') &&
       ((local_128 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_120 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_118 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"EFFECT_CALLBACK_TYPE_PRE_OPAQUE",false);
  local_120 = 0;
  local_d8 = "EFFECT_CALLBACK_TYPE_PRE_OPAQUE";
  local_d0 = 0x1f;
  String::parse_latin1((StrRange *)&local_120);
  GetTypeInfo<CompositorEffect::EffectCallbackType,void>::get_class_info
            ((GetTypeInfo<CompositorEffect::EffectCallbackType,void> *)&local_d8);
  local_118 = local_c8._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_c8._8_8_;
  local_c8 = auVar11 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_d8 = "CompositorEffect";
  local_128 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_d8,(StrRange *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_118,(StringName *)&local_108,0,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"EFFECT_CALLBACK_TYPE_POST_OPAQUE",false);
  local_120 = 0;
  local_d8 = "EFFECT_CALLBACK_TYPE_POST_OPAQUE";
  local_d0 = 0x20;
  String::parse_latin1((StrRange *)&local_120);
  GetTypeInfo<CompositorEffect::EffectCallbackType,void>::get_class_info
            ((GetTypeInfo<CompositorEffect::EffectCallbackType,void> *)&local_d8);
  local_118 = local_c8._0_8_;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = local_c8._8_8_;
  local_c8 = auVar12 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_d8 = "CompositorEffect";
  local_128 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_d8,(StrRange *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_118,(StringName *)&local_108,1,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"EFFECT_CALLBACK_TYPE_POST_SKY",false);
  local_120 = 0;
  local_d8 = "EFFECT_CALLBACK_TYPE_POST_SKY";
  local_d0 = 0x1d;
  String::parse_latin1((StrRange *)&local_120);
  GetTypeInfo<CompositorEffect::EffectCallbackType,void>::get_class_info
            ((GetTypeInfo<CompositorEffect::EffectCallbackType,void> *)&local_d8);
  local_118 = local_c8._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = local_c8._8_8_;
  local_c8 = auVar13 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_d8 = "CompositorEffect";
  local_128 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_d8,(StrRange *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_118,(StringName *)&local_108,2,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"EFFECT_CALLBACK_TYPE_PRE_TRANSPARENT",false);
  local_120 = 0;
  local_d8 = "EFFECT_CALLBACK_TYPE_PRE_TRANSPARENT";
  local_d0 = 0x24;
  String::parse_latin1((StrRange *)&local_120);
  GetTypeInfo<CompositorEffect::EffectCallbackType,void>::get_class_info
            ((GetTypeInfo<CompositorEffect::EffectCallbackType,void> *)&local_d8);
  local_118 = local_c8._0_8_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_c8._8_8_;
  local_c8 = auVar14 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_d8 = "CompositorEffect";
  local_128 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_d8,(StrRange *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_118,(StringName *)&local_108,3,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"EFFECT_CALLBACK_TYPE_POST_TRANSPARENT",false);
  local_120 = 0;
  local_d8 = "EFFECT_CALLBACK_TYPE_POST_TRANSPARENT";
  local_d0 = 0x25;
  String::parse_latin1((StrRange *)&local_120);
  GetTypeInfo<CompositorEffect::EffectCallbackType,void>::get_class_info
            ((GetTypeInfo<CompositorEffect::EffectCallbackType,void> *)&local_d8);
  local_118 = local_c8._0_8_;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = local_c8._8_8_;
  local_c8 = auVar15 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_d8 = "CompositorEffect";
  local_128 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_d8,(StrRange *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_118,(StringName *)&local_108,4,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_108,"EFFECT_CALLBACK_TYPE_MAX",false);
  local_120 = 0;
  local_d8 = "EFFECT_CALLBACK_TYPE_MAX";
  local_d0 = 0x18;
  String::parse_latin1((StrRange *)&local_120);
  GetTypeInfo<CompositorEffect::EffectCallbackType,void>::get_class_info
            ((GetTypeInfo<CompositorEffect::EffectCallbackType,void> *)&local_d8);
  local_118 = local_c8._0_8_;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = local_c8._8_8_;
  local_c8 = auVar16 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_d8 = "CompositorEffect";
  local_128 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_d8,(StrRange *)&local_128,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_118,(StringName *)&local_108,5,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  local_110 = 0;
  local_108 = (char *)0x0;
  local_d8 = "effect_callback_type";
  local_d0 = 0x14;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = (char *)0x0;
  if (local_108 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_108);
  }
  Vector<String>::push_back((Vector<String> *)&local_118,(MethodDefinition *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  local_120 = 0;
  local_d8 = "render_data";
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)&local_120);
  local_d8 = (char *)0x0;
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
  }
  Vector<String>::push_back((Vector<String> *)&local_118,(MethodDefinition *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  local_c8 = (undefined1  [16])0x0;
  local_108 = "_render_callback";
  local_d8 = (char *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 6;
  local_a0 = 1;
  local_98[0] = 0;
  local_88 = (int *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_100._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_d8);
  local_a0 = CONCAT44(local_a0._4_4_,8);
  local_138 = 0;
  local_130 = 0;
  local_108 = "";
  auVar17._8_8_ = 0;
  auVar17._0_8_ = local_100._8_8_;
  local_100 = auVar17 << 0x40;
  String::parse_latin1((StrRange *)&local_130);
  local_128 = 0;
  local_108 = (char *)CONCAT44(local_108._4_4_,2);
  local_f0 = 0;
  local_e8 = 0;
  local_100 = (undefined1  [16])0x0;
  if (local_130 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_130);
    local_e0 = 6;
    if (local_f0 == 0x11) {
      StringName::StringName((StringName *)&local_120,(CowData<char32_t> *)&local_e8,false);
      if (local_100._8_8_ == local_120) {
        if ((StringName::configured != '\0') && (local_120 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_100._8_8_ = local_120;
      }
      goto LAB_00104125;
    }
  }
  local_e0 = 6;
  StringName::operator=((StringName *)(local_100 + 8),(StringName *)&local_138);
LAB_00104125:
  local_170 = (StringName *)(local_100 + 8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
  if ((StringName::configured != '\0') && (local_138 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)&local_108);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  Vector<int>::push_back(local_78,3);
  local_108 = "RenderData";
  local_128 = 0;
  local_100._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_128);
  StringName::StringName((StringName *)&local_120,(StrRange *)&local_128,false);
  local_108 = (char *)CONCAT44(local_108._4_4_,0x18);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = local_100._8_8_;
  local_100 = auVar18 << 0x40;
  StringName::StringName(local_170,(StringName *)&local_120);
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 6;
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_98,(PropertyInfo *)&local_108);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_108);
  Vector<int>::push_back(local_78,0);
  local_108 = "CompositorEffect";
  local_120 = 0;
  local_100._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_108,(StrRange *)&local_120,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_108,(MethodInfo *)&local_d8,true,(Vector *)&local_118,false);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  lVar1 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar23 = (long *)(local_70 + -0x10);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar20 = local_88;
  if (local_88 != (int *)0x0) {
    LOCK();
    plVar23 = (long *)(local_88 + -4);
    *plVar23 = *plVar23 + -1;
    UNLOCK();
    if (*plVar23 == 0) {
      if (local_88 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_88 + -2);
      lVar25 = 0;
      local_88 = (int *)0x0;
      piVar24 = piVar20;
      if (lVar1 != 0) {
        do {
          if (Variant::needs_deinit[*piVar24] != '\0') {
            Variant::_clear_internal();
          }
          lVar25 = lVar25 + 1;
          piVar24 = piVar24 + 6;
        } while (lVar1 != lVar25);
      }
      Memory::free_static(piVar20 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<String>::_unref((CowData<String> *)&local_110);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CompositorEffect::_call_render_callback(int, RenderData const*) */

void __thiscall
CompositorEffect::_call_render_callback(CompositorEffect *this,int param_1,RenderData *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  int *piVar6;
  long lVar7;
  long in_FS_OFFSET;
  Variant *this_00;
  StrRange *this_01;
  StringName *this_02;
  undefined8 local_158;
  long local_150;
  char *local_148;
  long local_140;
  StringName local_138 [8];
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  CowData<char32_t> local_108 [8];
  long lStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [2];
  int *local_c8;
  undefined8 local_c0;
  Vector<int> local_b8 [8];
  long local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_98 [8];
  char **local_78;
  undefined8 *puStack_70;
  int local_60 [8];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_118._0_4_ = 0;
    local_118._4_4_ = 0;
    uStack_110 = 0;
    Variant::Variant((Variant *)&local_78,param_1);
    this_00 = (Variant *)local_60;
    Variant::Variant(this_00,(Object *)param_2);
    local_a8 = (Variant *)&local_78;
    pVStack_a0 = this_00;
    (**(code **)(*plVar4 + 0x60))
              (local_98,plVar4,this + 600,&local_a8,2,&local_118,this_00,local_98);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((int)local_118 == 0) {
      if (Variant::needs_deinit[local_60[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00104795;
    }
    if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x260] == (CompositorEffect)0x0)) {
    local_118._0_4_ = 0;
    local_118._4_4_ = 0;
    local_148 = "_render_callback";
    this_01 = (StrRange *)&local_118;
    _local_108 = (undefined1  [16])0x0;
    uStack_110 = 0;
    uStack_10c = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 6;
    local_e0 = 1;
    local_d8[0] = 0;
    local_c8 = (int *)0x0;
    local_c0 = 0;
    local_b0 = 0;
    local_140 = 0x10;
    String::parse_latin1(this_01);
    local_e0 = CONCAT44(local_e0._4_4_,8);
    GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_148);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,3);
    local_148 = "RenderData";
    local_158 = 0;
    local_140 = 10;
    String::parse_latin1((StrRange *)&local_158);
    this_02 = (StringName *)&local_150;
    StringName::StringName(this_02,(StrRange *)&local_158,false);
    local_148 = (char *)CONCAT44(local_148._4_4_,0x18);
    local_140 = 0;
    StringName::StringName(local_138,this_02);
    local_130 = 0;
    local_128 = 0;
    local_120 = 6;
    if ((StringName::configured != '\0') && (local_150 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_d8,(PropertyInfo *)&local_148);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
    Vector<int>::push_back(local_b8,0);
    MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x268) = 0;
    lVar3 = *(long *)(this + 8);
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_148 = "CompositorEffect";
      local_158 = 0;
      local_140 = 0x10;
      String::parse_latin1((StrRange *)&local_158);
      StringName::StringName(this_02,(StrRange *)&local_158,false);
      ClassDB::get_virtual_method_compatibility_hashes((StringName *)&local_148,this_02);
      lVar3 = local_140;
      if (local_140 == 0) {
        lVar7 = 0;
        if (StringName::configured != '\0') goto LAB_00104c00;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
LAB_00104c1f:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00104a28;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0));
        *(undefined8 *)(this + 0x268) = uVar2;
      }
      else {
        lVar7 = *(long *)(local_140 + -8);
        LOCK();
        plVar4 = (long *)(local_140 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_140 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
        if (StringName::configured != '\0') {
LAB_00104c00:
          if (local_150 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
        if (lVar7 == 0) goto LAB_00104c1f;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0));
      *(undefined8 *)(this + 0x268) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00104a28:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x268);
      plVar4[1] = (long)(this + 0x260);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    lVar3 = local_b0;
    this[0x260] = (CompositorEffect)0x1;
    if (local_b0 != 0) {
      LOCK();
      plVar4 = (long *)(local_b0 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    piVar1 = local_c8;
    if (local_c8 != (int *)0x0) {
      LOCK();
      plVar4 = (long *)(local_c8 + -4);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        if (local_c8 == (int *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar3 = *(long *)(local_c8 + -2);
        lVar7 = 0;
        local_c8 = (int *)0x0;
        piVar6 = piVar1;
        if (lVar3 != 0) {
          do {
            if (Variant::needs_deinit[*piVar6] != '\0') {
              Variant::_clear_internal();
            }
            lVar7 = lVar7 + 1;
            piVar6 = piVar6 + 6;
          } while (lVar3 != lVar7);
        }
        Memory::free_static(piVar1 + -4,false);
      }
    }
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    if ((StringName::configured != '\0') && (lStack_100 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
  }
  pcVar5 = *(code **)(this + 0x268);
  if (pcVar5 != (code *)0x0) {
    puStack_70 = &local_118;
    local_78 = &local_148;
    local_148 = (char *)(long)param_1;
    local_118 = param_2;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),&local_78,0);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 600,pcVar5,&local_78,0);
    }
  }
LAB_00104795:
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



/* CompositorEffect::is_class_ptr(void*) const */

uint __thiscall CompositorEffect::is_class_ptr(CompositorEffect *this,void *param_1)

{
  return (uint)CONCAT71(0x10da,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10da,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10da,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10da,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* CompositorEffect::_getv(StringName const&, Variant&) const */

undefined8 CompositorEffect::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompositorEffect::_setv(StringName const&, Variant const&) */

undefined8 CompositorEffect::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompositorEffect::_property_can_revertv(StringName const&) const */

undefined8 CompositorEffect::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CompositorEffect::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CompositorEffect::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CompositorEffect::_notificationv(int, bool) */

void CompositorEffect::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CompositorEffect::get_rid() const */

undefined8 __thiscall CompositorEffect::get_rid(CompositorEffect *this)

{
  return *(undefined8 *)(this + 0x240);
}



/* Compositor::is_class_ptr(void*) const */

uint __thiscall Compositor::is_class_ptr(Compositor *this,void *param_1)

{
  return (uint)CONCAT71(0x10da,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10da,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10da,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10da,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Compositor::_getv(StringName const&, Variant&) const */

undefined8 Compositor::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Compositor::_setv(StringName const&, Variant const&) */

undefined8 Compositor::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Compositor::_validate_propertyv(PropertyInfo&) const */

void Compositor::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Compositor::_property_can_revertv(StringName const&) const */

undefined8 Compositor::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Compositor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Compositor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Compositor::_notificationv(int, bool) */

void Compositor::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Compositor::get_rid() const */

undefined8 __thiscall Compositor::get_rid(Compositor *this)

{
  return *(undefined8 *)(this + 0x240);
}



/* CallableCustomMethodPointer<CompositorEffect, void, int, RenderData
   const*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CompositorEffect,void,int,RenderData_const*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CompositorEffect,void,int,RenderData_const*> *this)

{
  return;
}



/* MethodBindTRC<TypedArray<CompositorEffect>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TypedArray<CompositorEffect>>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<TypedArray<CompositorEffect>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TypedArray<CompositorEffect>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TypedArray<CompositorEffect> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<TypedArray<CompositorEffect>const&>::_gen_argument_type
          (MethodBindT<TypedArray<CompositorEffect>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1c;
}



/* MethodBindT<TypedArray<CompositorEffect> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<TypedArray<CompositorEffect>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<CompositorEffect::EffectCallbackType>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<CompositorEffect::EffectCallbackType>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<CompositorEffect::EffectCallbackType>::get_argument_meta(int) const */

undefined8 MethodBindTRC<CompositorEffect::EffectCallbackType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<CompositorEffect::EffectCallbackType>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<CompositorEffect::EffectCallbackType>::_gen_argument_type
          (MethodBindT<CompositorEffect::EffectCallbackType> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<CompositorEffect::EffectCallbackType>::get_argument_meta(int) const */

undefined8 MethodBindT<CompositorEffect::EffectCallbackType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<CompositorEffect, void, int, RenderData
   const*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CompositorEffect,void,int,RenderData_const*>::get_argument_count
          (CallableCustomMethodPointer<CompositorEffect,void,int,RenderData_const*> *this,
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



/* CallableCustomMethodPointer<CompositorEffect, void, int, RenderData
   const*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CompositorEffect,void,int,RenderData_const*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CompositorEffect,void,int,RenderData_const*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<CompositorEffect::EffectCallbackType>::~MethodBindT() */

void __thiscall
MethodBindT<CompositorEffect::EffectCallbackType>::~MethodBindT
          (MethodBindT<CompositorEffect::EffectCallbackType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d8c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<CompositorEffect::EffectCallbackType>::~MethodBindT() */

void __thiscall
MethodBindT<CompositorEffect::EffectCallbackType>::~MethodBindT
          (MethodBindT<CompositorEffect::EffectCallbackType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d8c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<CompositorEffect::EffectCallbackType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<CompositorEffect::EffectCallbackType>::~MethodBindTRC
          (MethodBindTRC<CompositorEffect::EffectCallbackType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d920;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<CompositorEffect::EffectCallbackType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<CompositorEffect::EffectCallbackType>::~MethodBindTRC
          (MethodBindTRC<CompositorEffect::EffectCallbackType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d920;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d800;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d800;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d860;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d860;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TypedArray<CompositorEffect> const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<CompositorEffect>const&>::~MethodBindT
          (MethodBindT<TypedArray<CompositorEffect>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d980;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TypedArray<CompositorEffect> const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<CompositorEffect>const&>::~MethodBindT
          (MethodBindT<TypedArray<CompositorEffect>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d980;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<CompositorEffect>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<CompositorEffect>>::~MethodBindTRC
          (MethodBindTRC<TypedArray<CompositorEffect>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d9e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<CompositorEffect>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<CompositorEffect>>::~MethodBindTRC
          (MethodBindTRC<TypedArray<CompositorEffect>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010d9e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
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



/* Compositor::_bind_methods() [clone .cold] */

void Compositor::_bind_methods(void)

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



/* CompositorEffect::_bind_methods() [clone .cold] */

void CompositorEffect::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CompositorEffect::_call_render_callback(int, RenderData const*) [clone .cold] */

void CompositorEffect::_call_render_callback(int param_1,RenderData *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<CompositorEffect, void, int, RenderData const*>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<CompositorEffect,void,int,RenderData_const*>::get_object
          (CallableCustomMethodPointer<CompositorEffect,void,int,RenderData_const*> *this)

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
      goto LAB_0010585d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010585d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010585d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
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



/* Compositor::_get_class_namev() const */

undefined8 * Compositor::_get_class_namev(void)

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
LAB_001059f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001059f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Compositor");
      goto LAB_00105a5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Compositor");
LAB_00105a5e:
  return &_get_class_namev()::_class_name_static;
}



/* CompositorEffect::_get_class_namev() const */

undefined8 * CompositorEffect::_get_class_namev(void)

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
LAB_00105ae3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105ae3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CompositorEffect");
      goto LAB_00105b4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CompositorEffect");
LAB_00105b4e:
  return &_get_class_namev()::_class_name_static;
}



/* CompositorEffect::get_class() const */

void CompositorEffect::get_class(void)

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



/* Compositor::get_class() const */

void Compositor::get_class(void)

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



/* MethodBindTRC<TypedArray<CompositorEffect>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TypedArray<CompositorEffect>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "CompositorEffect";
  local_40 = 0x10;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1c;
  puVar3[6] = 0x1f;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
      if (*(char **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(char **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00105e6c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00105e6c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC9;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00105fec;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00105fec:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* GetTypeInfo<int, void>::get_class_info() */

GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC9;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(CowData<char32_t> *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001061ec;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001061ec:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CompositorEffect::_validate_propertyv(PropertyInfo&) const */

void __thiscall CompositorEffect::_validate_propertyv(CompositorEffect *this,PropertyInfo *param_1)

{
  _validate_property(this,param_1);
  return;
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
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



/* WARNING: Removing unreachable block (ram,0x00106710) */
/* WARNING: Removing unreachable block (ram,0x001068a5) */
/* WARNING: Removing unreachable block (ram,0x001068b1) */
/* String vformat<Variant::Type, PropertyHint, char const*>(String const&, Variant::Type const,
   PropertyHint const, char const* const) */

undefined8 *
vformat<Variant::Type,PropertyHint,char_const*>
          (undefined8 *param_1,bool *param_2,int param_3,int param_4,char *param_5)

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



/* CallableCustomMethodPointer<CompositorEffect, void, int, RenderData const*>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CompositorEffect,void,int,RenderData_const*>::call
          (CallableCustomMethodPointer<CompositorEffect,void,int,RenderData_const*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  Object *pOVar7;
  Object *pOVar8;
  long lVar9;
  uint uVar10;
  ulong *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00106ba3;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_00106ba3;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar5 == '\0') {
LAB_00106adf:
          uVar4 = _LC45;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[1];
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar8 == (Object *)0x0) ||
              (lVar9 = __dynamic_cast(pOVar8,&Object::typeinfo,&RenderData::typeinfo,0), lVar9 == 0)
              ) && (pOVar7 != (Object *)0x0)) goto LAB_00106adf;
        }
        pOVar7 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar7 != (Object *)0x0) {
          pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&RenderData::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC46;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6,pOVar7);
          return;
        }
        goto LAB_00106cb1;
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
LAB_00106ba3:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC44,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106cb1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00106d4f;
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
LAB_00106d4f:
    cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00106e03;
  }
  cVar6 = String::operator==((String *)param_1,"Resource");
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
              if (lVar5 == 0) goto LAB_00106edb;
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
LAB_00106edb:
      cVar6 = String::operator==((String *)param_1,(String *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00106e03;
    }
    cVar6 = String::operator==((String *)param_1,"RefCounted");
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
                if (lVar5 == 0) goto LAB_00106fb7;
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
LAB_00106fb7:
        cVar6 = String::operator==((String *)param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_00106e03;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==((String *)param_1,"Object");
        return uVar7;
      }
      goto LAB_00107031;
    }
  }
LAB_00106e03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00107031:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Compositor::is_class(String const&) const */

undefined8 __thiscall Compositor::is_class(Compositor *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001070af;
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
LAB_001070af:
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00107163;
  }
  cVar5 = String::operator==((String *)param_1,"Compositor");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00107163:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CompositorEffect::is_class(String const&) const */

undefined8 __thiscall CompositorEffect::is_class(CompositorEffect *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010722f;
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
LAB_0010722f:
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_001072e3;
  }
  cVar5 = String::operator==((String *)param_1,"CompositorEffect");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001072e3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
LAB_001074cd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001074cd;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x001074ef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x001074ef:
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
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
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
LAB_0010787d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010787d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010789f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010789f:
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* Compositor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Compositor::_get_property_listv(Compositor *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Compositor";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Compositor";
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
LAB_00107c5d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107c5d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107c7f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107c7f:
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
  StringName::StringName((StringName *)&local_78,"Compositor",false);
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



/* CompositorEffect::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CompositorEffect::_get_property_listv(CompositorEffect *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CompositorEffect";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CompositorEffect";
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
  if (local_90 == 0) {
LAB_0010803d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010803d;
    StringName::StringName((StringName *)&local_80,(CowData<char32_t> *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010805f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010805f:
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
  StringName::StringName((StringName *)&local_78,"CompositorEffect",false);
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



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
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
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_001082c9;
  local_78 = 0;
  local_68 = &_LC9;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001083c5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001083c5;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001082c9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<TypedArray<CompositorEffect> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TypedArray<CompositorEffect>const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00108539;
  local_78 = 0;
  local_68 = "CompositorEffect";
  local_80 = 0;
  local_60._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x1c);
  local_50 = 0x1f;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00108635:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00108635;
    StringName::StringName((StringName *)&local_70,(CowData<char32_t> *)&local_48,false);
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
  *puVar4 = local_68._0_4_;
  if (*(long *)(puVar4 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(puVar4 + 2) = uVar2;
  }
  if (*(long *)(puVar4 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar4 + 4) = uVar2;
  }
  puVar4[6] = local_50;
  if (*(long *)(puVar4 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00108539:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBind* create_method_bind<CompositorEffect, bool>(void (CompositorEffect::*)(bool)) */

MethodBind * create_method_bind<CompositorEffect,bool>(_func_void_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d800;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CompositorEffect";
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<CompositorEffect, bool>(bool (CompositorEffect::*)() const) */

MethodBind * create_method_bind<CompositorEffect,bool>(_func_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d860;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "CompositorEffect";
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<CompositorEffect, CompositorEffect::EffectCallbackType>(void
   (CompositorEffect::*)(CompositorEffect::EffectCallbackType)) */

MethodBind *
create_method_bind<CompositorEffect,CompositorEffect::EffectCallbackType>
          (_func_void_EffectCallbackType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_EffectCallbackType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d8c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "CompositorEffect";
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<CompositorEffect,
   CompositorEffect::EffectCallbackType>(CompositorEffect::EffectCallbackType
   (CompositorEffect::*)() const) */

MethodBind *
create_method_bind<CompositorEffect,CompositorEffect::EffectCallbackType>
          (_func_EffectCallbackType *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_EffectCallbackType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d920;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "CompositorEffect";
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Compositor, TypedArray<CompositorEffect> const&>(void
   (Compositor::*)(TypedArray<CompositorEffect> const&)) */

MethodBind *
create_method_bind<Compositor,TypedArray<CompositorEffect>const&>
          (_func_void_TypedArray_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_TypedArray_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d980;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Compositor";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Compositor,
   TypedArray<CompositorEffect>>(TypedArray<CompositorEffect> (Compositor::*)() const) */

MethodBind * create_method_bind<Compositor,TypedArray<CompositorEffect>>(_func_TypedArray *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_TypedArray **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010d9e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Compositor";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(StrRange *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Compositor::_initialize_classv() */

void Compositor::_initialize_classv(void)

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
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "Compositor";
    local_70 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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



/* GetTypeInfo<CompositorEffect::EffectCallbackType, void>::get_class_info() */

GetTypeInfo<CompositorEffect::EffectCallbackType,void> * __thiscall
GetTypeInfo<CompositorEffect::EffectCallbackType,void>::get_class_info
          (GetTypeInfo<CompositorEffect::EffectCallbackType,void> *this)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "CompositorEffect::EffectCallbackType";
  local_50 = 0x24;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x109265);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar3 = -2;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(local_60 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar3 * 8));
        String::operator+((String *)&local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_00109355;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join((Vector *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00109355:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_68 = 0;
  local_70 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<CompositorEffect::EffectCallbackType>::_gen_argument_type_info(int) const */

undefined8 MethodBindTRC<CompositorEffect::EffectCallbackType>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  GetTypeInfo<CompositorEffect::EffectCallbackType,void>::get_class_info
            ((GetTypeInfo<CompositorEffect::EffectCallbackType,void> *)
             CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<CompositorEffect::EffectCallbackType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<CompositorEffect::EffectCallbackType>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<CompositorEffect::EffectCallbackType,void>::get_class_info
              ((GetTypeInfo<CompositorEffect::EffectCallbackType,void> *)local_48);
    *puVar2 = local_48[0];
    if (*(long *)(puVar2 + 2) != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_40;
      local_40 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_38) {
      StringName::unref();
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_30;
    if (*(long *)(puVar2 + 8) != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_28;
      local_28 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
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
    lVar7 = 0;
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
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00109a30:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00109a30;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00109909:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00109909;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_00109a86;
  }
  if (lVar10 == lVar7) {
LAB_001099af:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00109a86:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010999a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001099af;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_0010999a:
  puVar9[-1] = param_1;
  return 0;
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
LAB_00109d10:
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
  if (lVar8 == 0) goto LAB_00109d10;
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
        goto LAB_00109c21;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00109c21:
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



/* CompositorEffect::_initialize_classv() */

void CompositorEffect::_initialize_classv(void)

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
        StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(StrRange *)&local_68,false);
    local_58 = "CompositorEffect";
    local_70 = 0;
    local_50 = 0x10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(StrRange *)&local_70,false);
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



/* WARNING: Removing unreachable block (ram,0x0010a1c8) */
/* WARNING: Removing unreachable block (ram,0x0010a35d) */
/* WARNING: Removing unreachable block (ram,0x0010a369) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<TypedArray<CompositorEffect>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<TypedArray<CompositorEffect>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a570;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      (*(code *)pVVar2)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
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
LAB_0010a570:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<CompositorEffect::EffectCallbackType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<CompositorEffect::EffectCallbackType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a800;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010a800:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<CompositorEffect::EffectCallbackType>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<CompositorEffect::EffectCallbackType>::validated_call
          (MethodBindTRC<CompositorEffect::EffectCallbackType> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010aaa4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010aaa4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<CompositorEffect::EffectCallbackType>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRC<CompositorEffect::EffectCallbackType>::ptrcall
          (MethodBindTRC<CompositorEffect::EffectCallbackType> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ac63;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010ac63:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<CompositorEffect::EffectCallbackType>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<CompositorEffect::EffectCallbackType>::validated_call
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
      goto LAB_0010afa1;
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
                    /* WARNING: Could not recover jumptable at 0x0010ae2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010afa1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<CompositorEffect::EffectCallbackType>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<CompositorEffect::EffectCallbackType>::ptrcall
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
      goto LAB_0010b181;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010b00b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010b181:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b250;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010b250:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b462;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0010b462:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b611;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_0010b611:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010b951;
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
                    /* WARNING: Could not recover jumptable at 0x0010b7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010b951:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010bb39;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010b9c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0010bb39:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<CompositorEffect>>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<TypedArray<CompositorEffect>>::validated_call
          (MethodBindTRC<TypedArray<CompositorEffect>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
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
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10a3b8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bb99;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010bb99:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<CompositorEffect>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TypedArray<CompositorEffect>>::ptrcall
          (MethodBindTRC<TypedArray<CompositorEffect>> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
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
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10a3b8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bd6a;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010bd6a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<CompositorEffect> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TypedArray<CompositorEffect>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_68 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c006;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_78);
  local_50 = (undefined1  [16])0x0;
  local_68 = "CompositorEffect";
  local_58 = 0;
  local_70 = 0;
  local_60 = 0x10;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(StrRange *)&local_70,false);
  Array::set_typed((uint)(Array *)&local_78,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_78);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_78);
  }
  else {
    Array::_ref((Array *)&local_78);
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),(Array *)&local_78);
  Array::~Array((Array *)&local_78);
LAB_0010c006:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<CompositorEffect> const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<TypedArray<CompositorEffect>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char cVar2;
  Variant *pVVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_68 == (char *)*(long *)pVVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
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
      goto LAB_0010c2ea;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_78);
  local_50 = (undefined1  [16])0x0;
  local_68 = "CompositorEffect";
  local_58 = 0;
  local_70 = 0;
  local_60 = 0x10;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(StrRange *)&local_70,false);
  Array::set_typed((uint)(Array *)&local_78,(StringName *)0x18,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_78);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_78);
  }
  else {
    Array::_ref((Array *)&local_78);
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),(Array *)&local_78);
  Array::~Array((Array *)&local_78);
LAB_0010c2ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<CompositorEffect> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<TypedArray<CompositorEffect>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
  Array local_80 [8];
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c730;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010c780;
LAB_0010c770:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010c780:
        uVar6 = 4;
        goto LAB_0010c725;
      }
      if (in_R8D == 1) goto LAB_0010c770;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1c);
    uVar4 = _LC98;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Array((Variant *)&local_70);
    Array::Array(local_80);
    local_50 = (undefined1  [16])0x0;
    local_68 = "CompositorEffect";
    local_58 = 0;
    local_78 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_68,(StrRange *)&local_78,false);
    Array::set_typed((uint)local_80,(StringName *)0x18,(Variant *)&local_68);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar7 = (long *)(local_78 + -0x10);
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    cVar5 = Array::is_same_typed(local_80);
    if (cVar5 == '\0') {
      Array::assign(local_80);
    }
    else {
      Array::_ref(local_80);
    }
    Array::~Array((Array *)&local_70);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),local_80);
    Array::~Array(local_80);
  }
  else {
    uVar6 = 3;
LAB_0010c725:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010c730:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   CompositorEffect::EffectCallbackType>(__UnexistingClass*, void
   (__UnexistingClass::*)(CompositorEffect::EffectCallbackType), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,CompositorEffect::EffectCallbackType>
               (__UnexistingClass *param_1,_func_void_EffectCallbackType *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0010cabd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010cb20;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010cb20:
      uVar6 = 4;
LAB_0010cabd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0010ca3b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010ca3b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_EffectCallbackType **)(param_2 + *(long *)(param_1 + (long)param_3) + -1)
    ;
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC46;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0010ca96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<CompositorEffect::EffectCallbackType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<CompositorEffect::EffectCallbackType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010cb86;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,CompositorEffect::EffectCallbackType>
            (p_Var2,(_func_void_EffectCallbackType *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010cb86:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0010ce4d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010ceb0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010ceb0:
      uVar6 = 4;
LAB_0010ce4d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0010cdcb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010cdcb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC100;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0010ce27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010cf16;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010cf16:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TypedArray<CompositorEffect>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<CompositorEffect>>::~MethodBindTRC
          (MethodBindTRC<TypedArray<CompositorEffect>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TypedArray<CompositorEffect> const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<CompositorEffect>const&>::~MethodBindT
          (MethodBindT<TypedArray<CompositorEffect>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<CompositorEffect::EffectCallbackType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<CompositorEffect::EffectCallbackType>::~MethodBindTRC
          (MethodBindTRC<CompositorEffect::EffectCallbackType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<CompositorEffect::EffectCallbackType>::~MethodBindT() */

void __thiscall
MethodBindT<CompositorEffect::EffectCallbackType>::~MethodBindT
          (MethodBindT<CompositorEffect::EffectCallbackType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CompositorEffect, void, int, RenderData
   const*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CompositorEffect,void,int,RenderData_const*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CompositorEffect,void,int,RenderData_const*> *this)

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
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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


