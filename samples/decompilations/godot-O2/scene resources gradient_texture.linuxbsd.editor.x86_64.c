
/* GradientTexture1D::get_width() const */

undefined4 __thiscall GradientTexture1D::get_width(GradientTexture1D *this)

{
  return *(undefined4 *)(this + 0x300);
}



/* GradientTexture1D::is_using_hdr() const */

GradientTexture1D __thiscall GradientTexture1D::is_using_hdr(GradientTexture1D *this)

{
  return this[0x304];
}



/* GradientTexture2D::get_width() const */

undefined4 __thiscall GradientTexture2D::get_width(GradientTexture2D *this)

{
  return *(undefined4 *)(this + 0x2f8);
}



/* GradientTexture2D::get_height() const */

undefined4 __thiscall GradientTexture2D::get_height(GradientTexture2D *this)

{
  return *(undefined4 *)(this + 0x2fc);
}



/* GradientTexture2D::is_using_hdr() const */

GradientTexture2D __thiscall GradientTexture2D::is_using_hdr(GradientTexture2D *this)

{
  return this[0x300];
}



/* GradientTexture2D::get_fill_from() const */

undefined8 __thiscall GradientTexture2D::get_fill_from(GradientTexture2D *this)

{
  return *(undefined8 *)(this + 0x304);
}



/* GradientTexture2D::get_fill_to() const */

undefined8 __thiscall GradientTexture2D::get_fill_to(GradientTexture2D *this)

{
  return *(undefined8 *)(this + 0x30c);
}



/* GradientTexture2D::get_fill() const */

undefined4 __thiscall GradientTexture2D::get_fill(GradientTexture2D *this)

{
  return *(undefined4 *)(this + 0x314);
}



/* GradientTexture2D::get_repeat() const */

undefined4 __thiscall GradientTexture2D::get_repeat(GradientTexture2D *this)

{
  return *(undefined4 *)(this + 0x318);
}



/* GradientTexture1D::get_rid() const */

undefined8 __thiscall GradientTexture1D::get_rid(GradientTexture1D *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0x2f8) != 0) {
    return *(undefined8 *)(this + 0x2f8);
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1);
  *(undefined8 *)(this + 0x2f8) = uVar2;
  return *(undefined8 *)(this + 0x2f8);
}



/* GradientTexture2D::get_rid() const */

undefined8 __thiscall GradientTexture2D::get_rid(GradientTexture2D *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 0x2f0) != 0) {
    return *(undefined8 *)(this + 0x2f0);
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1);
  *(undefined8 *)(this + 0x2f0) = uVar2;
  return *(undefined8 *)(this + 0x2f0);
}



/* GradientTexture1D::_queue_update() [clone .part.0] */

void __thiscall GradientTexture1D::_queue_update(GradientTexture1D *this)

{
  undefined8 uVar1;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  Callable aCStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x2f0] = (GradientTexture1D)0x1;
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(GradientTexture1D **)(this_00 + 0x28) = this;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_00 = &PTR_hash_0011bda0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar1;
  *(code **)(this_00 + 0x38) = update_now;
  *(undefined **)(this_00 + 0x20) = &_LC0;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "GradientTexture1D::update_now";
  Callable::Callable(aCStack_48,this_00);
  Variant::Variant((Variant *)local_38,0);
  Callable::call_deferredp((Variant **)aCStack_48,0);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable(aCStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientTexture1D::_queue_update() */

void __thiscall GradientTexture1D::_queue_update(GradientTexture1D *this)

{
  if (this[0x2f0] != (GradientTexture1D)0x0) {
    return;
  }
  _queue_update(this);
  return;
}



/* GradientTexture1D::set_use_hdr(bool) */

void __thiscall GradientTexture1D::set_use_hdr(GradientTexture1D *this,bool param_1)

{
  if (this[0x304] == (GradientTexture1D)param_1) {
    return;
  }
  this[0x304] = (GradientTexture1D)param_1;
  if (this[0x2f0] != (GradientTexture1D)0x0) {
    Resource::emit_changed();
    return;
  }
  _queue_update(this);
  Resource::emit_changed();
  return;
}



/* GradientTexture1D::set_width(int) */

undefined8 __thiscall GradientTexture1D::set_width(GradientTexture1D *this,int param_1)

{
  undefined8 uVar1;
  
  if (0x3fff < param_1 - 1U) {
    _err_print_error("set_width","scene/resources/gradient_texture.cpp",0x8f,
                     "Condition \"p_width <= 0 || p_width > 16384\" is true.",
                     "Texture dimensions have to be within 1 to 16384 range.",0);
    return 0;
  }
  *(int *)(this + 0x300) = param_1;
  if (this[0x2f0] != (GradientTexture1D)0x0) {
    uVar1 = Resource::emit_changed();
    return uVar1;
  }
  _queue_update(this);
  uVar1 = Resource::emit_changed();
  return uVar1;
}



/* GradientTexture2D::_queue_update() [clone .part.0] */

void __thiscall GradientTexture2D::_queue_update(GradientTexture2D *this)

{
  undefined8 uVar1;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  Callable aCStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x31c] = (GradientTexture2D)0x1;
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(GradientTexture2D **)(this_00 + 0x28) = this;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_00 = &PTR_hash_0011bec0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar1;
  *(code **)(this_00 + 0x38) = update_now;
  *(undefined **)(this_00 + 0x20) = &_LC0;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "GradientTexture2D::update_now";
  Callable::Callable(aCStack_48,this_00);
  Variant::Variant((Variant *)local_38,0);
  Callable::call_deferredp((Variant **)aCStack_48,0);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable(aCStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientTexture2D::_queue_update() */

void __thiscall GradientTexture2D::_queue_update(GradientTexture2D *this)

{
  if (this[0x31c] != (GradientTexture2D)0x0) {
    return;
  }
  _queue_update(this);
  return;
}



/* GradientTexture2D::set_width(int) */

undefined8 __thiscall GradientTexture2D::set_width(GradientTexture2D *this,int param_1)

{
  undefined8 uVar1;
  
  if (0x3fff < param_1 - 1U) {
    _err_print_error("set_width","scene/resources/gradient_texture.cpp",0x146,
                     "Condition \"p_width <= 0 || p_width > 16384\" is true.",
                     "Texture dimensions have to be within 1 to 16384 range.",0);
    return 0;
  }
  *(int *)(this + 0x2f8) = param_1;
  if (this[0x31c] != (GradientTexture2D)0x0) {
    uVar1 = Resource::emit_changed();
    return uVar1;
  }
  _queue_update(this);
  uVar1 = Resource::emit_changed();
  return uVar1;
}



/* GradientTexture2D::set_height(int) */

undefined8 __thiscall GradientTexture2D::set_height(GradientTexture2D *this,int param_1)

{
  undefined8 uVar1;
  
  if (0x3fff < param_1 - 1U) {
    _err_print_error("set_height","scene/resources/gradient_texture.cpp",0x151,
                     "Condition \"p_height <= 0 || p_height > 16384\" is true.",
                     "Texture dimensions have to be within 1 to 16384 range.",0);
    return 0;
  }
  *(int *)(this + 0x2fc) = param_1;
  if (this[0x31c] != (GradientTexture2D)0x0) {
    uVar1 = Resource::emit_changed();
    return uVar1;
  }
  _queue_update(this);
  uVar1 = Resource::emit_changed();
  return uVar1;
}



/* GradientTexture2D::set_use_hdr(bool) */

void __thiscall GradientTexture2D::set_use_hdr(GradientTexture2D *this,bool param_1)

{
  if (this[0x300] == (GradientTexture2D)param_1) {
    return;
  }
  this[0x300] = (GradientTexture2D)param_1;
  if (this[0x31c] != (GradientTexture2D)0x0) {
    Resource::emit_changed();
    return;
  }
  _queue_update(this);
  Resource::emit_changed();
  return;
}



/* GradientTexture2D::set_fill_from(Vector2) */

void __thiscall GradientTexture2D::set_fill_from(undefined8 param_1,GradientTexture2D *this)

{
  *(undefined8 *)(this + 0x304) = param_1;
  if (this[0x31c] == (GradientTexture2D)0x0) {
    _queue_update(this);
  }
  Resource::emit_changed();
  return;
}



/* GradientTexture2D::set_fill_to(Vector2) */

void __thiscall GradientTexture2D::set_fill_to(undefined8 param_1,GradientTexture2D *this)

{
  *(undefined8 *)(this + 0x30c) = param_1;
  if (this[0x31c] == (GradientTexture2D)0x0) {
    _queue_update(this);
  }
  Resource::emit_changed();
  return;
}



/* GradientTexture2D::set_fill(GradientTexture2D::Fill) */

void __thiscall GradientTexture2D::set_fill(GradientTexture2D *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x314) = param_2;
  if (this[0x31c] == (GradientTexture2D)0x0) {
    _queue_update(this);
  }
  Resource::emit_changed();
  return;
}



/* GradientTexture2D::set_repeat(GradientTexture2D::Repeat) */

void __thiscall GradientTexture2D::set_repeat(GradientTexture2D *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x318) = param_2;
  if (this[0x31c] == (GradientTexture2D)0x0) {
    _queue_update(this);
  }
  Resource::emit_changed();
  return;
}



/* GradientTexture2D::get_gradient() const */

void GradientTexture2D::get_gradient(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x2e8) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x2e8);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* GradientTexture1D::get_gradient() const */

void GradientTexture1D::get_gradient(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x2e8) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x2e8);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
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
    puVar4[1] = __n;
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



/* GradientTexture1D::~GradientTexture1D() */

void __thiscall GradientTexture1D::~GradientTexture1D(GradientTexture1D *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0011b8b0;
  if (*(long *)(this + 0x2f8) != 0) {
    lVar3 = RenderingServer::get_singleton();
    if (lVar3 == 0) {
      _err_print_error("~GradientTexture1D","scene/resources/gradient_texture.cpp",0x29,
                       "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
      if (*(long *)(this + 0x2e8) != 0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          pOVar1 = *(Object **)(this + 0x2e8);
          cVar2 = predelete_handler(pOVar1);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
      Texture2D::~Texture2D((Texture2D *)this);
      return;
    }
    plVar4 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar4 + 0x11b0))(plVar4);
  }
  if (*(long *)(this + 0x2e8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x2e8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = predelete_handler;
  if (bVar5) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001009bf;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001009bf;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001009bf;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001009bf;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001009bf;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001009bf;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_001009bf:
  *(undefined ***)this = &PTR__initialize_classv_0011b6d8;
  Resource::~Resource((Resource *)this);
  return;
}



/* GradientTexture1D::~GradientTexture1D() */

void __thiscall GradientTexture1D::~GradientTexture1D(GradientTexture1D *this)

{
  ~GradientTexture1D(this);
  operator_delete(this,0x308);
  return;
}



/* GradientTexture2D::~GradientTexture2D() */

void __thiscall GradientTexture2D::~GradientTexture2D(GradientTexture2D *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0011bae0;
  if (*(long *)(this + 0x2f0) != 0) {
    lVar3 = RenderingServer::get_singleton();
    if (lVar3 == 0) {
      _err_print_error("~GradientTexture2D","scene/resources/gradient_texture.cpp",0xc4,
                       "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
      if (*(long *)(this + 0x2e8) != 0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          pOVar1 = *(Object **)(this + 0x2e8);
          cVar2 = predelete_handler(pOVar1);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
      Texture2D::~Texture2D((Texture2D *)this);
      return;
    }
    plVar4 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar4 + 0x11b0))(plVar4);
  }
  if (*(long *)(this + 0x2e8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x2e8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = predelete_handler;
  if (bVar5) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bff;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bff;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bff;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bff;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bff;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100bff;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00100bff:
  *(undefined ***)this = &PTR__initialize_classv_0011b6d8;
  Resource::~Resource((Resource *)this);
  return;
}



/* GradientTexture2D::~GradientTexture2D() */

void __thiscall GradientTexture2D::~GradientTexture2D(GradientTexture2D *this)

{
  ~GradientTexture2D(this);
  operator_delete(this,800);
  return;
}



/* GradientTexture1D::GradientTexture1D() */

void __thiscall GradientTexture1D::GradientTexture1D(GradientTexture1D *this)

{
  Texture2D::Texture2D((Texture2D *)this);
  this[0x2f0] = (GradientTexture1D)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0011b8b0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x300) = 0x100;
  this[0x304] = (GradientTexture1D)0x0;
  _queue_update(this);
  return;
}



/* GradientTexture2D::GradientTexture2D() */

void __thiscall GradientTexture2D::GradientTexture2D(GradientTexture2D *this)

{
  undefined8 uVar1;
  
  Texture2D::Texture2D((Texture2D *)this);
  this[0x300] = (GradientTexture2D)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0011bae0;
  uVar1 = _LC58;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x2f8) = uVar1;
  *(undefined8 *)(this + 0x304) = 0;
  *(undefined8 *)(this + 0x30c) = 0x3f800000;
  *(undefined8 *)(this + 0x314) = 0;
  this[0x31c] = (GradientTexture2D)0x0;
  _queue_update(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GradientTexture2D::_get_gradient_offset_at(int, int) const */

void __thiscall
GradientTexture2D::_get_gradient_offset_at(GradientTexture2D *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_48;
  float fStack_44;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  fVar5 = *(float *)(this + 0x30c);
  local_48 = *(float *)(this + 0x304);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((fVar5 != local_48) || (*(float *)(this + 0x308) != *(float *)(this + 0x310))) {
    fVar4 = 0.0;
    if (1 < *(int *)(this + 0x2f8)) {
      fVar4 = (float)param_1 / (float)(*(int *)(this + 0x2f8) + -1);
    }
    fVar6 = 0.0;
    if (1 < *(int *)(this + 0x2fc)) {
      fVar6 = (float)param_2 / (float)(*(int *)(this + 0x2fc) + -1);
    }
    iVar1 = *(int *)(this + 0x314);
    if (iVar1 == 0) {
      fStack_44 = *(float *)(this + 0x308);
      local_28._0_4_ = fVar5 - local_48;
      local_28._4_4_ = *(float *)(this + 0x310) - fStack_44;
      local_30 = CONCAT44(fVar6 - fStack_44,fVar4 - local_48);
      fVar5 = (float)Vector2::length_squared();
      if (_LC62 <= fVar5) {
        fVar4 = (float)Vector2::dot((Vector2 *)&local_28);
        local_48 = local_48 + (fVar4 / fVar5) * (float)local_28;
        fStack_44 = fStack_44 + (fVar4 / fVar5) * local_28._4_4_;
      }
      local_30 = CONCAT44(fStack_44 - (float)((ulong)*(undefined8 *)(this + 0x304) >> 0x20),
                          local_48 - (float)*(undefined8 *)(this + 0x304));
      fVar6 = (float)Vector2::length();
      local_28 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x30c) >> 0x20) -
                          (float)((ulong)*(undefined8 *)(this + 0x304) >> 0x20),
                          (float)*(undefined8 *)(this + 0x30c) -
                          (float)*(undefined8 *)(this + 0x304));
      fVar5 = (float)Vector2::length();
      fVar6 = fVar6 / fVar5;
      fVar5 = (float)*(undefined8 *)(this + 0x304);
      fVar4 = (float)((ulong)*(undefined8 *)(this + 0x304) >> 0x20);
      local_30 = CONCAT44(fStack_44 - fVar4,local_48 - fVar5);
      local_28 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x30c) >> 0x20) - fVar4,
                          (float)*(undefined8 *)(this + 0x30c) - fVar5);
      fVar5 = (float)Vector2::dot((Vector2 *)&local_30);
      if (fVar5 < 0.0) {
        fVar6 = (float)((uint)fVar6 ^ __LC63);
      }
      iVar2 = *(int *)(this + 0x318);
    }
    else if (iVar1 == 1) {
      local_30 = CONCAT44(fVar6 - *(float *)(this + 0x308),fVar4 - local_48);
      fVar6 = (float)Vector2::length();
      local_28 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x30c) >> 0x20) -
                          (float)((ulong)*(undefined8 *)(this + 0x304) >> 0x20),
                          (float)*(undefined8 *)(this + 0x30c) -
                          (float)*(undefined8 *)(this + 0x304));
      fVar5 = (float)Vector2::length();
      iVar2 = *(int *)(this + 0x318);
      fVar6 = fVar6 / fVar5;
    }
    else {
      iVar2 = *(int *)(this + 0x318);
      if (iVar1 != 2) goto LAB_00100e0d;
      fVar3 = ABS(fVar6 - *(float *)(this + 0x308));
      fVar6 = ABS(fVar4 - local_48);
      if (ABS(fVar4 - local_48) <= fVar3) {
        fVar6 = fVar3;
      }
      fVar3 = ABS(*(float *)(this + 0x310) - *(float *)(this + 0x308));
      fVar4 = ABS(fVar5 - local_48);
      if (ABS(fVar5 - local_48) <= fVar3) {
        fVar4 = fVar3;
      }
      fVar6 = fVar6 / fVar4;
    }
    if (iVar2 != 0) {
      fVar5 = fVar6;
      if (iVar2 == 1) {
        do {
          fVar5 = fVar5 - (fVar5 / 1.0) * 1.0;
        } while ((in_FPUStatusWord & 0x400) != 0);
        if (NAN(fVar5)) {
          fmodf(fVar6,_LC61);
        }
      }
      else if (iVar2 == 2) {
        fVar5 = ABS(fVar6);
        do {
          fVar5 = fVar5 - (fVar5 / _LC65) * _LC65;
        } while ((in_FPUStatusWord & 0x400) != 0);
        if (NAN(fVar5)) {
          fmodf(ABS(fVar6),_LC65);
        }
      }
    }
  }
LAB_00100e0d:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GradientTexture1D::set_gradient(Ref<Gradient>) */

void __thiscall GradientTexture1D::set_gradient(GradientTexture1D *this,long *param_2)

{
  Callable *pCVar1;
  Callable *pCVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  GradientTexture1D aGStack_48 [24];
  long local_30;
  
  pCVar1 = (Callable *)*param_2;
  pCVar2 = *(Callable **)(this + 0x2e8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar2 == pCVar1) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010138b;
  }
  if (pCVar2 == (Callable *)0x0) {
    *(Callable **)(this + 0x2e8) = pCVar1;
    if (pCVar1 != (Callable *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 != '\0') goto LAB_001012a8;
      *(undefined8 *)(this + 0x2e8) = 0;
    }
  }
  else {
    create_custom_callable_function_pointer<GradientTexture1D>
              (aGStack_48,(char *)this,(_func_void *)"&GradientTexture1D::_queue_update");
    Resource::disconnect_changed(pCVar2);
    Callable::~Callable((Callable *)aGStack_48);
    pOVar3 = (Object *)*param_2;
    pOVar5 = *(Object **)(this + 0x2e8);
    if (pOVar3 != pOVar5) {
      *(Object **)(this + 0x2e8) = pOVar3;
      if (pOVar3 == (Object *)0x0) {
LAB_0010135b:
        if (pOVar5 == (Object *)0x0) goto LAB_001012e8;
      }
      else {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)(this + 0x2e8) = 0;
          goto LAB_0010135b;
        }
        if (pOVar5 == (Object *)0x0) goto LAB_001012a8;
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
LAB_001012a8:
      pOVar5 = *(Object **)(this + 0x2e8);
    }
    if (pOVar5 != (Object *)0x0) {
      create_custom_callable_function_pointer<GradientTexture1D>
                (aGStack_48,(char *)this,(_func_void *)"&GradientTexture1D::_queue_update");
      Resource::connect_changed((Callable *)pOVar5,(uint)aGStack_48);
      Callable::~Callable((Callable *)aGStack_48);
    }
  }
LAB_001012e8:
  if (this[0x2f0] == (GradientTexture1D)0x0) {
    _queue_update(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Resource::emit_changed();
    return;
  }
LAB_0010138b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientTexture2D::set_gradient(Ref<Gradient>) */

void __thiscall GradientTexture2D::set_gradient(GradientTexture2D *this,long *param_2)

{
  Callable *pCVar1;
  Callable *pCVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  GradientTexture2D aGStack_48 [24];
  long local_30;
  
  pCVar1 = *(Callable **)(this + 0x2e8);
  pCVar2 = (Callable *)*param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar2 == pCVar1) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010154b;
  }
  if (pCVar1 == (Callable *)0x0) {
    *(Callable **)(this + 0x2e8) = pCVar2;
    if (pCVar2 != (Callable *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 != '\0') goto LAB_00101468;
      *(undefined8 *)(this + 0x2e8) = 0;
    }
  }
  else {
    create_custom_callable_function_pointer<GradientTexture2D>
              (aGStack_48,(char *)this,(_func_void *)"&GradientTexture2D::_queue_update");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)aGStack_48);
    pOVar3 = (Object *)*param_2;
    pOVar5 = *(Object **)(this + 0x2e8);
    if (pOVar3 != pOVar5) {
      *(Object **)(this + 0x2e8) = pOVar3;
      if (pOVar3 == (Object *)0x0) {
LAB_0010151b:
        if (pOVar5 == (Object *)0x0) goto LAB_001014a8;
      }
      else {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)(this + 0x2e8) = 0;
          goto LAB_0010151b;
        }
        if (pOVar5 == (Object *)0x0) goto LAB_00101468;
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
LAB_00101468:
      pOVar5 = *(Object **)(this + 0x2e8);
    }
    if (pOVar5 != (Object *)0x0) {
      create_custom_callable_function_pointer<GradientTexture2D>
                (aGStack_48,(char *)this,(_func_void *)"&GradientTexture2D::_queue_update");
      Resource::connect_changed((Callable *)pOVar5,(uint)aGStack_48);
      Callable::~Callable((Callable *)aGStack_48);
    }
  }
LAB_001014a8:
  if (this[0x31c] == (GradientTexture2D)0x0) {
    _queue_update(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Resource::emit_changed();
    return;
  }
LAB_0010154b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientTexture1D::_bind_methods() */

void GradientTexture1D::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  MethodBind *pMVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long in_FS_OFFSET;
  CowData<char32_t> *local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  long local_90;
  long *local_88;
  int local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "gradient";
  uVar5 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_gradient",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture1D,Ref<Gradient>>(set_gradient);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_gradient",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture1D,Ref<Gradient>>(get_gradient);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "width";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_width",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture1D,int>(set_width);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "enabled";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_use_hdr",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture1D,bool>(set_use_hdr);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"is_using_hdr",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture1D,bool>(is_using_hdr);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "Gradient";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "gradient";
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,0x18);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (long *)0x0;
  local_80 = 0x11;
  local_78 = 0;
  if (local_c8 == 0) {
LAB_001022b2:
    local_e0 = (CowData<char32_t> *)&local_78;
    local_70 = 0x4000006;
    StringName::StringName((StringName *)&local_a8,(String *)local_e0,false);
    if (local_88 == (long *)local_a8) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = (long *)local_a8;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 0x4000006;
    if (local_80 == 0x11) goto LAB_001022b2;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
  }
  local_e0 = (CowData<char32_t> *)&local_78;
  local_d8 = 0;
  local_a8 = "GradientTexture1D";
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "1,16384,suffix:px";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "width";
  local_90 = 5;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,2);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (long *)0x0;
  local_80 = 1;
  local_78 = 0;
  if (local_c8 == 0) {
LAB_00101e48:
    local_70 = 6;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
  }
  else {
    CowData<char32_t>::_ref(local_e0,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 != 0x11) goto LAB_00101e48;
    StringName::StringName((StringName *)&local_a8,(String *)local_e0,false);
    if (local_88 == (long *)local_a8) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = (long *)local_a8;
    }
  }
  local_d8 = 0;
  local_a8 = "GradientTexture1D";
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "use_hdr";
  local_90 = 7;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,1);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (long *)0x0;
  local_80 = 0;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref(local_e0,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)local_e0,false);
      if (local_88 == (long *)local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = (long *)local_a8;
      }
      goto LAB_0010209f;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_0010209f:
  local_d8 = 0;
  local_a8 = "GradientTexture1D";
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
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



/* GradientTexture2D::_bind_methods() */

void GradientTexture2D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  char *local_b0;
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
  local_60 = 0;
  local_68 = "gradient";
  uVar5 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_gradient",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture2D,Ref<Gradient>>(set_gradient);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_gradient",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_0011bfb0;
  *(code **)(pMVar4 + 0x58) = get_gradient;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_set_const(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 0;
  local_a8 = "GradientTexture2D";
  local_b0 = (char *)0x0;
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "width";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_width",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture2D,int>(set_width);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "height";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_height",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture2D,int>(set_height);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "enabled";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_use_hdr",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture2D,bool>(set_use_hdr);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"is_using_hdr",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_0011c0d0;
  *(code **)(pMVar4 + 0x58) = is_using_hdr;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_set_const(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 0;
  local_a8 = "GradientTexture2D";
  local_b0 = (char *)0x0;
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "fill";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_fill",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture2D,GradientTexture2D::Fill>(set_fill);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_fill",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture2D,GradientTexture2D::Fill>(get_fill);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "fill_from";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_fill_from",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture2D,Vector2>(set_fill_from);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_fill_from",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture2D,Vector2>(get_fill_from);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "fill_to";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_fill_to",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture2D,Vector2>(set_fill_to);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_fill_to",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture2D,Vector2>(get_fill_to);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "repeat";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_repeat",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture2D,GradientTexture2D::Repeat>(set_repeat);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_repeat",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<GradientTexture2D,GradientTexture2D::Repeat>(get_repeat);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
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
  local_c0 = 0;
  local_98 = "Gradient";
  local_c8 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "gradient";
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,0x18,(StrRange *)&local_d0,0x11,(StrRange *)&local_c8,
             0x4000006,(StrRange *)&local_c0);
  local_a8 = "GradientTexture2D";
  local_d8 = 0;
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "1,2048,or_greater,suffix:px";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x1b;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "width";
  local_90 = 5;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,2);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (long *)0x0;
  local_80 = 1;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
      if (local_88 == (long *)local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = (long *)local_a8;
      }
      goto LAB_00103878;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_00103878:
  local_d8 = 0;
  local_a8 = "GradientTexture2D";
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (((StringName::configured != '\0') &&
      ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_b0 != (char *)0x0)))) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "1,2048,or_greater,suffix:px";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x1b;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "height";
  local_d0 = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "GradientTexture2D";
  local_d8 = 0;
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "use_hdr";
  local_d0 = 0;
  local_90 = 7;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,1,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "GradientTexture2D";
  local_d8 = 0;
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (((StringName::configured != '\0') &&
      ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_b0 != (char *)0x0)))) {
    StringName::unref();
  }
  local_a8 = (char *)0x0;
  local_98 = "fill_";
  local_90 = 5;
  String::parse_latin1((StrRange *)&local_a8);
  local_98 = "Fill";
  local_b0 = (char *)0x0;
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_b0);
  local_98 = "GradientTexture2D";
  local_b8 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_b8);
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  ClassDB::add_property_group((StringName *)&local_98,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "Linear,Radial,Square";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x14;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "fill";
  local_d0 = 0;
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,2,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "GradientTexture2D";
  local_d8 = 0;
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "fill_from";
  local_d0 = 0;
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,5,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "GradientTexture2D";
  local_d8 = 0;
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "fill_to";
  local_d0 = 0;
  local_90 = 7;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,5,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "GradientTexture2D";
  local_d8 = 0;
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = (char *)0x0;
  local_98 = "repeat_";
  local_90 = 7;
  String::parse_latin1((StrRange *)&local_a8);
  local_98 = "Repeat";
  local_b0 = (char *)0x0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_b0);
  local_98 = "GradientTexture2D";
  local_b8 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_b8);
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  ClassDB::add_property_group((StringName *)&local_98,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "No Repeat,Repeat,Mirror Repeat";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x1e;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "repeat";
  local_d0 = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,2,(StrRange *)&local_c8,6,
             (StrRange *)&local_c0);
  local_a8 = "GradientTexture2D";
  local_d8 = 0;
  local_a0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (((StringName::configured != '\0') &&
      ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_b0 != (char *)0x0)))) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"FILL_LINEAR",false);
  local_98 = "FILL_LINEAR";
  local_b8 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<GradientTexture2D::Fill,void>::get_class_info
            ((GetTypeInfo<GradientTexture2D::Fill,void> *)&local_98);
  local_b0 = (char *)local_88;
  local_88 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "GradientTexture2D";
  local_c0 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,0,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"FILL_RADIAL",false);
  local_98 = "FILL_RADIAL";
  local_b8 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<GradientTexture2D::Fill,void>::get_class_info
            ((GetTypeInfo<GradientTexture2D::Fill,void> *)&local_98);
  local_b0 = (char *)local_88;
  local_88 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "GradientTexture2D";
  local_c0 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,1,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"FILL_SQUARE",false);
  local_98 = "FILL_SQUARE";
  local_b8 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<GradientTexture2D::Fill,void>::get_class_info
            ((GetTypeInfo<GradientTexture2D::Fill,void> *)&local_98);
  local_b0 = (char *)local_88;
  local_88 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "GradientTexture2D";
  local_c0 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,2,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"REPEAT_NONE",false);
  local_98 = "REPEAT_NONE";
  local_b8 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<GradientTexture2D::Repeat,void>::get_class_info
            ((GetTypeInfo<GradientTexture2D::Repeat,void> *)&local_98);
  local_b0 = (char *)local_88;
  local_88 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "GradientTexture2D";
  local_c0 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,0,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"REPEAT",false);
  local_98 = "REPEAT";
  local_b8 = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<GradientTexture2D::Repeat,void>::get_class_info
            ((GetTypeInfo<GradientTexture2D::Repeat,void> *)&local_98);
  local_b0 = (char *)local_88;
  local_88 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "GradientTexture2D";
  local_c0 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,1,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"REPEAT_MIRROR",false);
  local_98 = "REPEAT_MIRROR";
  local_b8 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<GradientTexture2D::Repeat,void>::get_class_info
            ((GetTypeInfo<GradientTexture2D::Repeat,void> *)&local_98);
  local_b0 = (char *)local_88;
  local_88 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "GradientTexture2D";
  local_c0 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,2,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00104cc6:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_00104cc6;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_0010e7d8();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_00104c1c;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_00104c1c:
  puVar8[-1] = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GradientTexture2D::_update() const [clone .part.0] [clone .constprop.0] */

void __thiscall GradientTexture2D::_update(GradientTexture2D *this)

{
  float *pfVar1;
  code *pcVar2;
  undefined1 auVar3 [12];
  Image *pIVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  Resource *this_00;
  long *plVar8;
  undefined8 uVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  Resource *pRVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  Image *pIVar27;
  long in_FS_OFFSET;
  byte bVar28;
  float fVar29;
  float fVar31;
  float fVar33;
  float fVar30;
  double dVar32;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  double dVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined4 uVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [12];
  undefined1 auVar51 [12];
  undefined1 auVar52 [12];
  float local_100;
  float local_f8;
  float local_f4;
  float local_e8;
  float *local_e0;
  float *local_d8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a0;
  Image *local_90;
  undefined8 local_88;
  float local_80;
  undefined1 local_78 [8];
  float local_70;
  undefined8 local_68;
  long local_60;
  undefined1 local_58 [16];
  long local_40;
  
  bVar28 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (Image *)0x0;
  this_00 = (Resource *)operator_new(0x268,"");
  pRVar22 = this_00;
  for (lVar15 = 0x4d; lVar15 != 0; lVar15 = lVar15 + -1) {
    *(undefined8 *)pRVar22 = 0;
    pRVar22 = pRVar22 + (ulong)bVar28 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  this_00[0x260] = (Resource)0x0;
  *(code **)this_00 = strlen;
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  postinitialize_handler((Object *)this_00);
  cVar5 = RefCounted::init_ref();
  pIVar4 = local_90;
  if (cVar5 == '\0') {
    if (local_90 != (Image *)0x0) {
      local_90 = (Image *)0x0;
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        memdelete<Image>(pIVar4);
      }
    }
    goto LAB_00104df2;
  }
  pIVar27 = local_90;
  if (this_00 != (Resource *)local_90) {
    local_90 = (Image *)this_00;
    cVar5 = RefCounted::reference();
    pIVar27 = (Image *)this_00;
    if (cVar5 == '\0') {
      local_90 = (Image *)0x0;
      if (pIVar4 != (Image *)0x0) {
        cVar5 = RefCounted::unreference();
joined_r0x00105363:
        if (cVar5 != '\0') {
          memdelete<Image>(pIVar4);
        }
      }
    }
    else if (pIVar4 != (Image *)0x0) {
      cVar5 = RefCounted::unreference();
      goto joined_r0x00105363;
    }
  }
  cVar5 = RefCounted::unreference();
  if (cVar5 != '\0') {
    memdelete<Image>(pIVar27);
  }
LAB_00104df2:
  iVar6 = Gradient::get_point_count();
  if (iVar6 < 2) {
    Image::initialize_data
              (local_90,*(undefined4 *)(this + 0x2f8),*(undefined4 *)(this + 0x2fc),0,
               (-(uint)(this[0x300] == (GradientTexture2D)0x0) & 0xfffffffa) + 0xb);
    pIVar4 = local_90;
    iVar6 = Gradient::get_point_count();
    if (iVar6 == 1) {
      local_58 = Gradient::get_color((int)*(undefined8 *)(this + 0x2e8));
    }
    else {
      local_58._12_4_ = _LC61;
      local_58._8_4_ = _UNK_0011c538;
      local_58._0_8_ = __LC128;
    }
    Image::fill((Color *)pIVar4);
  }
  else if (this[0x300] == (GradientTexture2D)0x0) {
    local_60 = 0;
    CowData<unsigned_char>::resize<false>
              ((CowData<unsigned_char> *)&local_60,
               (long)(*(int *)(this + 0x2f8) * *(int *)(this + 0x2fc) * 4));
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
    lVar12 = local_60;
    iVar6 = *(int *)(this + 0x2fc);
    lVar15 = *(long *)(this + 0x2e8);
    iVar17 = *(int *)(this + 0x2f8);
    if (0 < iVar6) {
      iVar18 = 0;
      do {
        if (0 < iVar17) {
          iVar6 = 0;
          do {
            fVar29 = (float)_get_gradient_offset_at(this,iVar6,iVar18);
            dVar34 = _LC126;
            uVar14 = *(uint *)(lVar15 + 0x240);
            uVar25 = (ulong)uVar14;
            if (uVar14 == 0) {
              uVar42 = SUB84(_LC126,0);
              uVar44 = (undefined4)((ulong)_LC126 >> 0x20);
              dVar32 = 0.0;
              dVar38 = 0.0;
              *(undefined1 *)(lVar12 + (*(int *)(this + 0x2f8) * iVar18 + iVar6) * 4) = 0;
LAB_0010501b:
              uVar13 = (undefined1)(int)dVar38;
            }
            else {
              if (*(char *)(lVar15 + 0x250) == '\0') {
                LocalVector<Gradient::Point,unsigned_int,false,false>::
                sort_custom<_DefaultComparator<Gradient::Point>>
                          ((LocalVector<Gradient::Point,unsigned_int,false,false> *)(lVar15 + 0x240)
                          );
                uVar25 = (ulong)*(uint *)(lVar15 + 0x240);
                iVar17 = 0;
                *(undefined1 *)(lVar15 + 0x250) = 1;
                iVar19 = *(uint *)(lVar15 + 0x240) - 1;
                if (iVar19 < 0) goto LAB_00105688;
LAB_001051db:
                do {
                  uVar14 = (iVar19 + iVar17) / 2;
                  uVar16 = (ulong)uVar14;
                  uVar23 = (ulong)uVar14;
                  if ((uint)uVar25 <= uVar14) goto LAB_00105115;
                  lVar11 = *(long *)(lVar15 + 0x248);
                  pfVar10 = (float *)(lVar11 + (long)(int)uVar14 * 0x14);
                  if (fVar29 < *pfVar10) {
                    iVar19 = uVar14 - 1;
                  }
                  else {
                    if (fVar29 <= *pfVar10) {
                      auVar41 = ZEXT416((uint)pfVar10[1]);
                      auVar39 = ZEXT416((uint)pfVar10[2]);
                      local_f4 = pfVar10[3];
                      fVar29 = pfVar10[4];
                      goto LAB_00105910;
                    }
                    iVar17 = uVar14 + 1;
                  }
                } while (iVar17 <= iVar19);
              }
              else {
                iVar17 = 0;
                iVar19 = uVar14 - 1;
                if (-1 < iVar19) goto LAB_001051db;
LAB_00105688:
                _err_print_error("get_color_at_offset","./scene/resources/gradient.h",0xa6,
                                 "low > high, this may be a bug",0,0);
                uVar25 = (ulong)*(uint *)(lVar15 + 0x240);
                if (*(uint *)(lVar15 + 0x240) == 0) goto LAB_001056c6;
                lVar11 = *(long *)(lVar15 + 0x248);
                uVar23 = 0;
                uVar14 = 0;
              }
              fVar33 = _LC135;
              uVar26 = (uint)uVar25;
              if (fVar29 < *(float *)(lVar11 + uVar23 * 0x14)) {
                if ((int)uVar14 < (int)uVar26) {
                  uVar21 = uVar14 - 1;
                  if (uVar14 == 0) {
                    auVar41 = ZEXT416(*(uint *)(lVar11 + 4));
                    auVar39 = ZEXT416(*(uint *)(lVar11 + 8));
                    local_f4 = *(float *)(lVar11 + 0xc);
                    fVar29 = *(float *)(lVar11 + 0x10);
                    goto LAB_00105910;
                  }
                  if (uVar21 < uVar26) goto LAB_00105713;
                  goto LAB_001050f9;
                }
LAB_00105a68:
                lVar11 = lVar11 + (ulong)(uVar26 - 1) * 0x14;
                auVar41 = ZEXT416(*(uint *)(lVar11 + 4));
                auVar39 = ZEXT416(*(uint *)(lVar11 + 8));
                local_f4 = *(float *)(lVar11 + 0xc);
                fVar29 = *(float *)(lVar11 + 0x10);
              }
              else {
                uVar7 = uVar14 + 1;
                uVar21 = uVar14;
                uVar14 = uVar7;
                if ((int)uVar26 <= (int)uVar7) goto LAB_00105a68;
LAB_00105713:
                pfVar10 = (float *)(lVar11 + (long)(int)uVar21 * 0x14);
                if (uVar26 <= uVar14) goto LAB_00106291;
                pfVar1 = (float *)(lVar11 + (long)(int)uVar14 * 0x14);
                if (*(int *)(lVar15 + 0x254) == 1) {
                  auVar41 = ZEXT416((uint)pfVar10[1]);
                  auVar39 = ZEXT416((uint)pfVar10[2]);
                  local_f4 = pfVar10[3];
                  fVar29 = pfVar10[4];
                  goto LAB_00105910;
                }
                fVar31 = (fVar29 - *pfVar10) / (*pfVar1 - *pfVar10);
                if (*(int *)(lVar15 + 0x254) == 2) {
                  uVar7 = uVar21 - 1;
                  if ((int)(uVar21 + 2) < (int)uVar26) {
                    uVar14 = uVar21 + 2;
                    if (uVar7 == 0xffffffff) {
                      uVar14 = 2;
                      lVar20 = lVar11;
                    }
                    else {
LAB_00105ac7:
                      if (uVar26 <= uVar7) {
                        uVar16 = (ulong)(int)uVar7;
                        goto LAB_00105115;
                      }
                      lVar20 = lVar11 + -0x14 + (long)(int)uVar21 * 0x14;
                      if (uVar26 <= uVar14) {
                        uVar16 = (ulong)(int)uVar14;
                        goto LAB_00105115;
                      }
                    }
                    local_d8 = (float *)(lVar11 + (long)(int)uVar14 * 0x14);
                    lVar11 = lVar20;
                  }
                  else {
                    local_d8 = pfVar1;
                    if (uVar7 != 0xffffffff) goto LAB_00105ac7;
                  }
                  fVar29 = *(float *)(lVar11 + 4);
                  iVar17 = *(int *)(lVar15 + 600);
                  fVar46 = *(float *)(lVar11 + 8);
                  local_f4 = *(float *)(lVar11 + 0xc);
                  fVar45 = *(float *)(lVar11 + 0x10);
                  if (iVar17 == 1) {
                    if (_LC135 <= local_f4) {
                      local_f4 = powf((float)(((double)local_f4 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      local_f4 = local_f4 * _LC136;
                    }
                    if (fVar33 <= fVar46) {
                      fVar46 = powf((float)(((double)fVar46 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar46 = fVar46 * _LC136;
                    }
                    if (fVar33 <= fVar29) {
                      fVar29 = powf((float)(((double)fVar29 + __LC137) * __LC138),_LC139);
                      local_b0 = pfVar10[4];
                      local_bc = pfVar10[1];
                      local_b8 = pfVar10[2];
                      local_b4 = pfVar10[3];
                    }
                    else {
                      fVar29 = fVar29 * _LC136;
                      local_bc = pfVar10[1];
                      local_b8 = pfVar10[2];
                      local_b4 = pfVar10[3];
                      local_b0 = pfVar10[4];
                    }
                    if (fVar33 <= local_b4) {
                      local_b4 = powf((float)(((double)local_b4 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      local_b4 = local_b4 * _LC136;
                    }
                    if (fVar33 <= local_b8) {
                      local_b8 = powf((float)(((double)local_b8 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      local_b8 = local_b8 * _LC136;
                    }
                    if (fVar33 <= local_bc) {
                      local_bc = powf((float)(((double)local_bc + __LC137) * __LC138),_LC139);
                      local_c0 = pfVar1[4];
                      fVar30 = pfVar1[1];
                      fVar35 = pfVar1[2];
                      fVar48 = pfVar1[3];
                    }
                    else {
                      local_bc = local_bc * _LC136;
                      local_c0 = pfVar1[4];
                      fVar35 = pfVar1[2];
                      fVar48 = pfVar1[3];
                      fVar30 = pfVar1[1];
                    }
                    if (fVar33 <= fVar48) {
                      fVar48 = powf((float)(((double)fVar48 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar48 = fVar48 * _LC136;
                    }
                    if (fVar33 <= fVar35) {
                      fVar35 = powf((float)(((double)fVar35 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar35 = fVar35 * _LC136;
                    }
                    if (fVar33 <= fVar30) {
                      fVar30 = powf((float)(((double)fVar30 + __LC137) * __LC138),_LC139);
                      fVar49 = local_d8[4];
                      fVar36 = local_d8[1];
                      fVar43 = local_d8[2];
                      fVar37 = local_d8[3];
                    }
                    else {
                      fVar30 = fVar30 * _LC136;
                      fVar49 = local_d8[4];
                      fVar43 = local_d8[2];
                      fVar37 = local_d8[3];
                      fVar36 = local_d8[1];
                    }
                    if (fVar33 <= fVar37) {
                      fVar37 = powf((float)(((double)fVar37 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar37 = fVar37 * _LC136;
                    }
                    if (fVar33 <= fVar43) {
                      fVar43 = powf((float)(((double)fVar43 + __LC137) * __LC138),_LC139);
                      uVar25 = CONCAT44(extraout_XMM0_Db_02,fVar43);
                    }
                    else {
                      uVar25 = (ulong)(uint)(fVar43 * _LC136);
                    }
                    auVar50._8_4_ = fVar37;
                    auVar50._0_8_ = local_78;
                    if (fVar33 <= fVar36) {
                      fVar36 = powf((float)(((double)fVar36 + __LC137) * __LC138),_LC139);
                      auVar50._0_8_ = local_78;
                      uVar25 = uVar25 & 0xffffffff;
                      fVar33 = extraout_XMM0_Db_01;
                    }
                    else {
                      fVar36 = fVar36 * _LC136;
                      fVar33 = 0.0;
                    }
                  }
                  else if (iVar17 == 2) {
                    if (_LC135 <= local_f4) {
                      local_f4 = powf((float)(((double)local_f4 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      local_f4 = local_f4 * _LC136;
                    }
                    if (fVar33 <= fVar46) {
                      fVar46 = powf((float)(((double)fVar46 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar46 = fVar46 * _LC136;
                    }
                    if (fVar33 <= fVar29) {
                      fVar29 = powf((float)(((double)fVar29 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar29 = fVar29 * _LC136;
                    }
                    local_88 = CONCAT44(fVar46,fVar29);
                    local_80 = local_f4;
                    auVar50 = ok_color::linear_srgb_to_oklab();
                    local_f4 = auVar50._8_4_;
                    local_78._0_4_ = auVar50._0_4_;
                    fVar29 = (float)local_78._0_4_;
                    fVar30 = pfVar10[3];
                    local_b0 = pfVar10[4];
                    fVar35 = pfVar10[2];
                    local_78._4_4_ = auVar50._4_4_;
                    fVar46 = (float)local_78._4_4_;
                    fVar48 = pfVar10[1];
                    _local_78 = auVar50;
                    if (fVar33 <= fVar30) {
                      fVar30 = powf((float)(((double)fVar30 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar30 = fVar30 * _LC136;
                    }
                    if (fVar33 <= fVar35) {
                      fVar35 = powf((float)(((double)fVar35 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar35 = fVar35 * _LC136;
                    }
                    if (fVar33 <= fVar48) {
                      fVar48 = powf((float)(((double)fVar48 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar48 = fVar48 * _LC136;
                    }
                    local_88 = CONCAT44(fVar35,fVar48);
                    local_80 = fVar30;
                    auVar50 = ok_color::linear_srgb_to_oklab();
                    local_b4 = auVar50._8_4_;
                    local_78._0_4_ = auVar50._0_4_;
                    fVar30 = pfVar1[1];
                    local_e0._0_4_ = pfVar1[3];
                    local_bc = (float)local_78._0_4_;
                    fVar35 = pfVar1[2];
                    local_78._4_4_ = auVar50._4_4_;
                    local_b8 = (float)local_78._4_4_;
                    local_c0 = pfVar1[4];
                    _local_78 = auVar50;
                    if (fVar33 <= local_e0._0_4_) {
                      local_e0._0_4_ =
                           powf((float)(((double)local_e0._0_4_ + __LC137) * __LC138),_LC139);
                    }
                    else {
                      local_e0._0_4_ = local_e0._0_4_ * _LC136;
                    }
                    if (fVar33 <= fVar35) {
                      fVar35 = powf((float)(((double)fVar35 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar35 = fVar35 * _LC136;
                    }
                    if (fVar33 <= fVar30) {
                      fVar30 = powf((float)(((double)fVar30 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar30 = fVar30 * _LC136;
                    }
                    local_88 = CONCAT44(fVar35,fVar30);
                    local_80 = local_e0._0_4_;
                    auVar50 = ok_color::linear_srgb_to_oklab();
                    fVar48 = auVar50._8_4_;
                    local_78._0_4_ = auVar50._0_4_;
                    fVar30 = (float)local_78._0_4_;
                    fVar37 = local_d8[1];
                    local_a0 = local_d8[3];
                    fVar43 = local_d8[2];
                    local_78._4_4_ = auVar50._4_4_;
                    fVar35 = (float)local_78._4_4_;
                    fVar49 = local_d8[4];
                    _local_78 = auVar50;
                    if (fVar33 <= local_a0) {
                      local_a0 = powf((float)(((double)local_a0 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      local_a0 = local_a0 * _LC136;
                    }
                    if (fVar33 <= fVar43) {
                      fVar43 = powf((float)(((double)fVar43 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar43 = fVar43 * _LC136;
                    }
                    if (fVar33 <= fVar37) {
                      fVar37 = powf((float)(((double)fVar37 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar37 = fVar37 * _LC136;
                    }
                    local_88 = CONCAT44(fVar43,fVar37);
                    local_80 = local_a0;
                    auVar50 = ok_color::linear_srgb_to_oklab();
                    local_70 = auVar50._8_4_;
                    local_78._0_4_ = auVar50._0_4_;
                    fVar33 = 0.0;
                    uVar25 = auVar50._0_8_ >> 0x20;
                    fVar36 = (float)local_78._0_4_;
                  }
                  else {
                    local_bc = pfVar10[1];
                    local_b8 = pfVar10[2];
                    local_b4 = pfVar10[3];
                    local_b0 = pfVar10[4];
                    fVar33 = 0.0;
                    fVar30 = pfVar1[1];
                    uVar25 = (ulong)(uint)local_d8[2];
                    fVar35 = pfVar1[2];
                    auVar50._8_4_ = local_d8[3];
                    auVar50._0_8_ = local_78;
                    fVar48 = pfVar1[3];
                    local_c0 = pfVar1[4];
                    fVar49 = local_d8[4];
                    fVar36 = local_d8[1];
                  }
                  local_78 = auVar50._0_8_;
                  fVar43 = (float)(uVar25 >> 0x20);
                  fVar37 = fVar31 * fVar31;
                  fVar47 = fVar31 * fVar37;
                  fVar30 = (((((fVar29 + fVar29) - _LC148 * local_bc) + _LC149 * fVar30) - fVar36) *
                            fVar37 + (fVar30 - fVar29) * fVar31 + local_bc + local_bc +
                           (((local_bc * _LC150 - fVar29) - fVar30 * _LC150) + fVar36) * fVar47) *
                           _LC151;
                  fVar46 = (((((fVar46 + fVar46) - _UNK_0011c4dc * local_b8) +
                             _UNK_0011c4e4 * fVar35) - (float)uVar25) * fVar37 +
                            (fVar35 - fVar46) * fVar31 + local_b8 + local_b8 +
                           (((local_b8 * _UNK_0011c4ec - fVar46) - fVar35 * _UNK_0011c4ec) +
                           (float)uVar25) * fVar47) * _UNK_0011c4f4;
                  fVar29 = ((0.0 - fVar33) * 0.0 + 0.0 + (fVar33 + 0.0) * 0.0) * 0.0;
                  fVar33 = ((0.0 - fVar43) * 0.0 + 0.0 + (fVar43 + 0.0) * 0.0) * 0.0;
                  auVar39._4_4_ = fVar46;
                  auVar39._0_4_ = fVar46;
                  auVar39._8_4_ = fVar29;
                  auVar39._12_4_ = fVar33;
                  auVar41._4_4_ = fVar46;
                  auVar41._0_4_ = fVar30;
                  auVar41._8_4_ = fVar29;
                  auVar41._12_4_ = fVar33;
                  local_f4 = (((((local_f4 + local_f4) - local_b4 * _LC148) + fVar48 * _LC149) -
                              auVar50._8_4_) * fVar37 +
                              (fVar48 - local_f4) * fVar31 + local_b4 + local_b4 +
                             (((local_b4 * _LC150 - local_f4) - fVar48 * _LC150) + auVar50._8_4_) *
                             fVar47) * _LC151;
                  fVar29 = _LC151 * (((((fVar45 + fVar45) - _LC148 * local_b0) + _LC149 * local_c0)
                                     - fVar49) * fVar37 +
                                     (local_c0 - fVar45) * fVar31 + local_b0 + local_b0 +
                                    (((local_b0 * _LC150 - fVar45) - local_c0 * _LC150) + fVar49) *
                                    fVar47);
                  if (iVar17 == 1) goto LAB_00106299;
                  if (iVar17 == 2) {
                    local_88 = CONCAT44(fVar46,fVar30);
                    local_80 = local_f4;
                    _local_78 = ok_color::oklab_to_linear_srgb((ok_color *)CONCAT44(fVar46,fVar30));
                    fVar33 = _LC140;
                    local_f4 = SUB124(_local_78,8);
                    uVar42 = local_78._0_4_;
                    uVar44 = local_78._4_4_;
                    local_f8 = (float)local_78._0_4_;
                    if (_LC140 <= local_f4) {
                      fVar31 = powf(local_f4,_LC142);
                      local_f4 = (float)((double)fVar31 * __LC143 - __LC137);
                    }
                    else {
                      local_f4 = _LC141 * local_f4;
                    }
                    if (fVar33 <= (float)uVar44) {
                      fVar31 = powf((float)uVar44,_LC142);
                      fVar31 = (float)((double)fVar31 * __LC143 - __LC137);
                    }
                    else {
                      fVar31 = (float)uVar44 * _LC141;
                    }
                    if ((float)uVar42 < fVar33) goto LAB_001058fc;
                    fVar33 = powf((float)uVar42,_LC142);
                    auVar39 = ZEXT416((uint)fVar31);
                    auVar41 = ZEXT416((uint)(float)((double)fVar33 * __LC143 - __LC137));
                  }
                }
                else {
                  fVar46 = pfVar10[1];
                  iVar17 = *(int *)(lVar15 + 600);
                  fVar45 = pfVar10[2];
                  local_f4 = pfVar10[3];
                  fVar29 = pfVar10[4];
                  if (iVar17 == 1) {
                    if (_LC135 <= local_f4) {
                      local_f4 = powf((float)(((double)local_f4 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      local_f4 = local_f4 * _LC136;
                    }
                    if (fVar33 <= fVar45) {
                      fVar45 = powf((float)(((double)fVar45 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar45 = fVar45 * _LC136;
                    }
                    if (fVar33 <= fVar46) {
                      fVar46 = powf((float)(((double)fVar46 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar46 = fVar46 * _LC136;
                    }
                    fVar30 = pfVar1[4];
                    fVar35 = pfVar1[3];
                    fVar48 = pfVar1[1];
                    fVar49 = pfVar1[2];
                    if (fVar33 <= fVar35) {
                      fVar35 = powf((float)(((double)fVar35 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar35 = fVar35 * _LC136;
                    }
                    if (fVar33 <= fVar49) {
                      fVar49 = powf((float)(((double)fVar49 + __LC137) * __LC138),_LC139);
                      uVar25 = CONCAT44(extraout_XMM0_Db_00,fVar49);
                    }
                    else {
                      uVar25 = (ulong)(uint)(fVar49 * _LC136);
                    }
                    fVar49 = 0.0;
                    if (fVar33 <= fVar48) {
                      fVar48 = powf((float)(((double)fVar48 + __LC137) * __LC138),_LC139);
                      uVar25 = uVar25 & 0xffffffff;
                      fVar49 = extraout_XMM0_Db;
                    }
                    else {
                      fVar48 = fVar48 * _LC136;
                    }
                  }
                  else if (iVar17 == 2) {
                    if (_LC135 <= local_f4) {
                      local_f4 = powf((float)(((double)local_f4 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      local_f4 = local_f4 * _LC136;
                    }
                    if (fVar33 <= fVar45) {
                      fVar45 = powf((float)(((double)fVar45 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar45 = fVar45 * _LC136;
                    }
                    if (fVar33 <= fVar46) {
                      fVar46 = powf((float)(((double)fVar46 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar46 = fVar46 * _LC136;
                    }
                    local_88 = CONCAT44(fVar45,fVar46);
                    local_80 = local_f4;
                    auVar50 = ok_color::linear_srgb_to_oklab();
                    local_f4 = auVar50._8_4_;
                    local_78._0_4_ = auVar50._0_4_;
                    fVar46 = (float)local_78._0_4_;
                    fVar35 = pfVar1[3];
                    fVar48 = pfVar1[2];
                    local_78._4_4_ = auVar50._4_4_;
                    fVar45 = (float)local_78._4_4_;
                    fVar49 = pfVar1[1];
                    fVar30 = pfVar1[4];
                    _local_78 = auVar50;
                    if (fVar33 <= fVar35) {
                      fVar35 = powf((float)(((double)fVar35 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar35 = fVar35 * _LC136;
                    }
                    if (fVar33 <= fVar48) {
                      fVar48 = powf((float)(((double)fVar48 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar48 = fVar48 * _LC136;
                    }
                    if (fVar33 <= fVar49) {
                      fVar49 = powf((float)(((double)fVar49 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar49 = fVar49 * _LC136;
                    }
                    local_88 = CONCAT44(fVar48,fVar49);
                    local_80 = fVar35;
                    auVar50 = ok_color::linear_srgb_to_oklab();
                    fVar35 = auVar50._8_4_;
                    local_78._0_4_ = auVar50._0_4_;
                    fVar49 = 0.0;
                    uVar25 = auVar50._0_8_ >> 0x20;
                    fVar48 = (float)local_78._0_4_;
                    _local_78 = auVar50;
                  }
                  else {
                    fVar30 = pfVar1[4];
                    fVar49 = 0.0;
                    uVar25 = (ulong)(uint)pfVar1[2];
                    fVar35 = pfVar1[3];
                    fVar48 = pfVar1[1];
                  }
                  fVar46 = (fVar48 - fVar46) * fVar31 + fVar46;
                  fVar45 = ((float)uVar25 - fVar45) * fVar31 + fVar45;
                  fVar33 = fVar49 * 0.0 + 0.0;
                  fVar48 = (float)(uVar25 >> 0x20) * 0.0 + 0.0;
                  auVar41._4_4_ = fVar45;
                  auVar41._0_4_ = fVar46;
                  auVar41._8_4_ = fVar33;
                  auVar41._12_4_ = fVar48;
                  auVar39._4_4_ = fVar45;
                  auVar39._0_4_ = fVar45;
                  auVar39._8_4_ = fVar33;
                  auVar39._12_4_ = fVar48;
                  local_f4 = (fVar35 - local_f4) * fVar31 + local_f4;
                  fVar29 = fVar29 + (fVar30 - fVar29) * fVar31;
                  if (iVar17 == 1) {
LAB_00106299:
                    fVar33 = _LC140;
                    if (_LC140 <= local_f4) {
                      fVar31 = powf(local_f4,_LC142);
                      auVar39 = ZEXT416(auVar39._0_4_);
                      auVar41 = ZEXT416(auVar41._0_4_);
                      local_f4 = (float)((double)fVar31 * __LC143 - __LC137);
                    }
                    else {
                      local_f4 = local_f4 * _LC141;
                    }
                    fVar31 = auVar39._0_4_;
                    if (fVar33 <= fVar31) {
                      fVar31 = powf(fVar31,_LC142);
                      auVar41 = ZEXT416(auVar41._0_4_);
                      auVar39 = ZEXT416((uint)(float)((double)fVar31 * __LC143 - __LC137));
                    }
                    else {
                      auVar39._0_4_ = fVar31 * _LC141;
                    }
                    fVar31 = auVar41._0_4_;
                    if (fVar33 <= fVar31) {
                      fVar33 = powf(fVar31,_LC142);
                      auVar39 = ZEXT416(auVar39._0_4_);
                      auVar41 = ZEXT416((uint)(float)((double)fVar33 * __LC143 - __LC137));
                    }
                    else {
                      auVar41._0_4_ = fVar31 * _LC141;
                    }
                  }
                  else if (iVar17 == 2) {
                    local_88 = CONCAT44(fVar45,fVar46);
                    local_80 = local_f4;
                    auVar50 = ok_color::oklab_to_linear_srgb((ok_color *)CONCAT44(fVar45,fVar46));
                    fVar33 = _LC140;
                    local_f4 = auVar50._8_4_;
                    local_78._0_4_ = auVar50._0_4_;
                    uVar42 = local_78._0_4_;
                    local_78._4_4_ = auVar50._4_4_;
                    uVar44 = local_78._4_4_;
                    local_f8 = (float)local_78._0_4_;
                    _local_78 = auVar50;
                    if (_LC140 <= local_f4) {
                      fVar31 = powf(local_f4,_LC142);
                      local_f4 = (float)((double)fVar31 * __LC143 - __LC137);
                    }
                    else {
                      local_f4 = _LC141 * local_f4;
                    }
                    if (fVar33 <= (float)uVar44) {
                      fVar31 = powf((float)uVar44,_LC142);
                      fVar31 = (float)((double)fVar31 * __LC143 - __LC137);
                    }
                    else {
                      fVar31 = (float)uVar44 * _LC141;
                    }
                    if (fVar33 <= (float)uVar42) {
                      fVar33 = powf((float)uVar42,_LC142);
                      auVar39 = ZEXT416((uint)fVar31);
                      auVar41 = ZEXT416((uint)(float)((double)fVar33 * __LC143 - __LC137));
                    }
                    else {
LAB_001058fc:
                      auVar39 = ZEXT416((uint)fVar31);
                      auVar41 = ZEXT416((uint)(local_f8 * _LC141));
                    }
                  }
                }
              }
LAB_00105910:
              uVar13 = 0;
              uVar42 = SUB84(_LC126,0);
              uVar44 = (undefined4)((ulong)_LC126 >> 0x20);
              dVar40 = (double)auVar41._0_4_ * _LC126;
              dVar38 = (double)auVar39._0_4_ * _LC126;
              dVar32 = (double)local_f4 * _LC126;
              dVar34 = (double)fVar29 * _LC126;
              if (0.0 <= dVar40) {
                if (dVar40 <= _LC126) {
                  uVar13 = (undefined1)(int)dVar40;
                }
                else {
                  uVar13 = 0xff;
                }
              }
              *(undefined1 *)(lVar12 + (*(int *)(this + 0x2f8) * iVar18 + iVar6) * 4) = uVar13;
              uVar13 = 0;
              if (0.0 <= dVar38) {
                if (dVar38 <= _LC126) goto LAB_0010501b;
                uVar13 = 0xff;
              }
            }
            *(undefined1 *)(lVar12 + 1 + (long)((*(int *)(this + 0x2f8) * iVar18 + iVar6) * 4)) =
                 uVar13;
            uVar13 = 0;
            if ((0.0 <= dVar32) &&
               (uVar13 = 0xff,
               dVar32 < (double)CONCAT44(uVar44,uVar42) || dVar32 == (double)CONCAT44(uVar44,uVar42)
               )) {
              uVar13 = (undefined1)(int)dVar32;
            }
            *(undefined1 *)(lVar12 + 2 + (long)((*(int *)(this + 0x2f8) * iVar18 + iVar6) * 4)) =
                 uVar13;
            uVar13 = 0;
            if ((0.0 <= dVar34) &&
               (uVar13 = 0xff,
               dVar34 < (double)CONCAT44(uVar44,uVar42) || dVar34 == (double)CONCAT44(uVar44,uVar42)
               )) {
              uVar13 = (undefined1)(int)dVar34;
            }
            iVar17 = *(int *)(this + 0x2f8) * iVar18 + iVar6;
            iVar6 = iVar6 + 1;
            *(undefined1 *)(lVar12 + 3 + (long)(iVar17 * 4)) = uVar13;
            iVar17 = *(int *)(this + 0x2f8);
          } while (iVar6 < iVar17);
          iVar6 = *(int *)(this + 0x2fc);
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar6);
    }
    Image::set_data(local_90,iVar17,iVar6,0,5,&local_68);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
  }
  else {
    Image::initialize_data(local_90,*(int *)(this + 0x2f8),*(int *)(this + 0x2fc),0,0xb);
    lVar15 = *(long *)(this + 0x2e8);
    if (0 < *(int *)(this + 0x2fc)) {
      uVar26 = 0;
      do {
        if (0 < *(int *)(this + 0x2f8)) {
          iVar6 = 0;
LAB_00104e61:
          fVar29 = (float)_get_gradient_offset_at(this,iVar6,uVar26);
          pIVar4 = local_90;
          uVar14 = *(uint *)(lVar15 + 0x240);
          uVar25 = (ulong)uVar14;
          if (uVar14 == 0) {
            local_100 = 0.0;
            fVar33 = 0.0;
            local_f8 = 0.0;
            fVar29 = _LC61;
LAB_00105152:
            local_58._8_8_ = CONCAT44(fVar29,local_100);
            local_58._0_8_ = CONCAT44(fVar33,local_f8);
            iVar17 = iVar6 + 1;
            Image::set_pixel((int)pIVar4,iVar6,(Color *)(ulong)uVar26);
            iVar6 = iVar17;
            if (*(int *)(this + 0x2f8) <= iVar17) goto LAB_00105188;
            goto LAB_00104e61;
          }
          if (*(char *)(lVar15 + 0x250) == '\0') {
            LocalVector<Gradient::Point,unsigned_int,false,false>::
            sort_custom<_DefaultComparator<Gradient::Point>>
                      ((LocalVector<Gradient::Point,unsigned_int,false,false> *)(lVar15 + 0x240));
            uVar25 = (ulong)*(uint *)(lVar15 + 0x240);
            iVar18 = 0;
            *(undefined1 *)(lVar15 + 0x250) = 1;
            iVar17 = *(uint *)(lVar15 + 0x240) - 1;
            if (iVar17 < 0) goto LAB_001053f5;
LAB_00104eb4:
            do {
              uVar7 = (iVar17 + iVar18) / 2;
              uVar16 = (ulong)uVar7;
              uVar23 = (ulong)uVar7;
              if ((uint)uVar25 <= uVar7) goto LAB_00105115;
              lVar12 = *(long *)(lVar15 + 0x248);
              pfVar10 = (float *)(lVar12 + (long)(int)uVar7 * 0x14);
              if (fVar29 < *pfVar10) {
                iVar17 = uVar7 - 1;
              }
              else {
                if (fVar29 <= *pfVar10) goto LAB_0010599c;
                iVar18 = uVar7 + 1;
              }
            } while (iVar18 <= iVar17);
          }
          else {
            iVar18 = 0;
            iVar17 = uVar14 - 1;
            if (-1 < iVar17) goto LAB_00104eb4;
LAB_001053f5:
            _err_print_error("get_color_at_offset","./scene/resources/gradient.h",0xa6,
                             "low > high, this may be a bug",0);
            uVar25 = (ulong)*(uint *)(lVar15 + 0x240);
            if (*(uint *)(lVar15 + 0x240) == 0) goto LAB_001056c6;
            lVar12 = *(long *)(lVar15 + 0x248);
            uVar23 = 0;
            uVar7 = 0;
          }
          fVar31 = _LC135;
          auVar3._8_4_ = local_70;
          auVar3._0_8_ = local_78;
          uVar24 = (uint)uVar25;
          if (*(float *)(lVar12 + uVar23 * 0x14) <= fVar29) {
            uVar14 = uVar7 + 1;
            uVar21 = uVar7;
            if ((int)uVar24 <= (int)(uVar7 + 1)) goto LAB_00105990;
LAB_00105461:
            pfVar10 = (float *)(lVar12 + (long)(int)uVar21 * 0x14);
            if (uVar24 <= uVar14) goto LAB_00106291;
            pfVar1 = (float *)(lVar12 + (long)(int)uVar14 * 0x14);
            if (*(int *)(lVar15 + 0x254) == 1) {
              local_f8 = pfVar10[1];
              fVar33 = pfVar10[2];
              local_100 = pfVar10[3];
              fVar29 = pfVar10[4];
              goto LAB_00105152;
            }
            fVar46 = (fVar29 - *pfVar10) / (*pfVar1 - *pfVar10);
            if (*(int *)(lVar15 + 0x254) == 2) {
              uVar7 = uVar21 - 1;
              if ((int)(uVar21 + 2) < (int)uVar24) {
                uVar14 = uVar21 + 2;
                if (uVar7 == 0xffffffff) {
                  uVar14 = 2;
                  lVar11 = lVar12;
                }
                else {
LAB_00105f24:
                  if (uVar24 <= uVar7) {
                    uVar16 = (ulong)(int)uVar7;
                    goto LAB_00105115;
                  }
                  lVar11 = lVar12 + -0x14 + (long)(int)uVar21 * 0x14;
                  if (uVar24 <= uVar14) {
                    uVar16 = (ulong)(int)uVar14;
                    _local_78 = auVar3;
                    goto LAB_00105115;
                  }
                }
                local_e0 = (float *)(lVar12 + (long)(int)uVar14 * 0x14);
                lVar12 = lVar11;
              }
              else {
                local_e0 = pfVar1;
                if (uVar7 != 0xffffffff) goto LAB_00105f24;
              }
              local_f8 = *(float *)(lVar12 + 4);
              fVar29 = *(float *)(lVar12 + 8);
              local_100 = *(float *)(lVar12 + 0xc);
              fVar45 = *(float *)(lVar12 + 0x10);
              iVar17 = *(int *)(lVar15 + 600);
              if (iVar17 == 1) {
                if (_LC135 <= local_100) {
                  local_100 = powf((float)(((double)local_100 + __LC137) * __LC138),_LC139);
                }
                else {
                  local_100 = local_100 * _LC136;
                }
                if (fVar31 <= fVar29) {
                  fVar29 = powf((float)(((double)fVar29 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar29 = fVar29 * _LC136;
                }
                if (fVar31 <= local_f8) {
                  local_f8 = powf((float)(((double)local_f8 + __LC137) * __LC138),_LC139);
                  local_b4 = pfVar10[4];
                  local_c0 = pfVar10[1];
                  local_bc = pfVar10[2];
                  local_b8 = pfVar10[3];
                }
                else {
                  local_f8 = local_f8 * _LC136;
                  local_c0 = pfVar10[1];
                  local_bc = pfVar10[2];
                  local_b8 = pfVar10[3];
                  local_b4 = pfVar10[4];
                }
                if (fVar31 <= local_b8) {
                  local_b8 = powf((float)(((double)local_b8 + __LC137) * __LC138),_LC139);
                }
                else {
                  local_b8 = local_b8 * _LC136;
                }
                if (fVar31 <= local_bc) {
                  local_bc = powf((float)(((double)local_bc + __LC137) * __LC138),_LC139);
                }
                else {
                  local_bc = local_bc * _LC136;
                }
                if (fVar31 <= local_c0) {
                  local_c0 = powf((float)(((double)local_c0 + __LC137) * __LC138),_LC139);
                  fVar48 = pfVar1[4];
                  fVar33 = pfVar1[1];
                  fVar30 = pfVar1[2];
                  fVar35 = pfVar1[3];
                }
                else {
                  local_c0 = local_c0 * _LC136;
                  fVar48 = pfVar1[4];
                  fVar30 = pfVar1[2];
                  fVar35 = pfVar1[3];
                  fVar33 = pfVar1[1];
                }
                if (fVar31 <= fVar35) {
                  fVar35 = powf((float)(((double)fVar35 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar35 = fVar35 * _LC136;
                }
                if (fVar31 <= fVar30) {
                  fVar30 = powf((float)(((double)fVar30 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar30 = fVar30 * _LC136;
                }
                if (fVar31 <= fVar33) {
                  fVar33 = powf((float)(((double)fVar33 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar33 = fVar33 * _LC136;
                }
                fVar37 = local_e0[4];
                fVar43 = local_e0[3];
                fVar36 = local_e0[1];
                fVar49 = local_e0[2];
                if (fVar31 <= fVar43) {
                  fVar43 = powf((float)(((double)fVar43 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar43 = fVar43 * _LC136;
                }
                if (fVar31 <= fVar49) {
                  fVar49 = powf((float)(((double)fVar49 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar49 = fVar49 * _LC136;
                }
                auVar52._8_4_ = fVar43;
                auVar52._0_8_ = local_68;
                if (fVar31 <= fVar36) {
                  fVar36 = powf((float)(((double)fVar36 + __LC137) * __LC138),_LC139);
                  auVar52._0_8_ = local_68;
                }
                else {
                  fVar36 = fVar36 * _LC136;
                }
              }
              else if (iVar17 == 2) {
                if (_LC135 <= local_100) {
                  local_100 = powf((float)(((double)local_100 + __LC137) * __LC138),_LC139);
                }
                else {
                  local_100 = local_100 * _LC136;
                }
                if (fVar31 <= fVar29) {
                  fVar29 = powf((float)(((double)fVar29 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar29 = fVar29 * _LC136;
                }
                if (fVar31 <= local_f8) {
                  local_f8 = powf((float)(((double)local_f8 + __LC137) * __LC138),_LC139);
                }
                else {
                  local_f8 = local_f8 * _LC136;
                }
                local_78 = (undefined1  [8])CONCAT44(fVar29,local_f8);
                local_70 = local_100;
                auVar50 = ok_color::linear_srgb_to_oklab();
                local_100 = auVar50._8_4_;
                local_68._0_4_ = auVar50._0_4_;
                fVar33 = pfVar10[3];
                local_b4 = pfVar10[4];
                local_60 = CONCAT44(local_60._4_4_,local_100);
                local_f8 = (float)local_68;
                fVar30 = pfVar10[2];
                local_68._4_4_ = auVar50._4_4_;
                fVar29 = local_68._4_4_;
                fVar35 = pfVar10[1];
                local_68 = auVar50._0_8_;
                if (fVar31 <= fVar33) {
                  fVar33 = powf((float)(((double)fVar33 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar33 = fVar33 * _LC136;
                }
                if (fVar31 <= fVar30) {
                  fVar30 = powf((float)(((double)fVar30 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar30 = fVar30 * _LC136;
                }
                if (fVar31 <= fVar35) {
                  fVar35 = powf((float)(((double)fVar35 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar35 = fVar35 * _LC136;
                }
                local_78 = (undefined1  [8])CONCAT44(fVar30,fVar35);
                local_70 = fVar33;
                auVar50 = ok_color::linear_srgb_to_oklab();
                local_b8 = auVar50._8_4_;
                local_68._0_4_ = auVar50._0_4_;
                fVar33 = pfVar1[1];
                local_e8 = pfVar1[3];
                local_60 = CONCAT44(local_60._4_4_,local_b8);
                local_c0 = (float)local_68;
                fVar30 = pfVar1[2];
                local_68._4_4_ = auVar50._4_4_;
                local_bc = local_68._4_4_;
                fVar48 = pfVar1[4];
                local_68 = auVar50._0_8_;
                if (fVar31 <= local_e8) {
                  local_e8 = powf((float)(((double)local_e8 + __LC137) * __LC138),_LC139);
                }
                else {
                  local_e8 = local_e8 * _LC136;
                }
                if (fVar31 <= fVar30) {
                  fVar30 = powf((float)(((double)fVar30 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar30 = fVar30 * _LC136;
                }
                if (fVar31 <= fVar33) {
                  fVar33 = powf((float)(((double)fVar33 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar33 = fVar33 * _LC136;
                }
                local_78 = (undefined1  [8])CONCAT44(fVar30,fVar33);
                local_70 = local_e8;
                auVar50 = ok_color::linear_srgb_to_oklab();
                fVar35 = auVar50._8_4_;
                local_68._0_4_ = auVar50._0_4_;
                fVar33 = (float)local_68;
                fVar49 = local_e0[1];
                local_a8 = local_e0[3];
                local_60 = CONCAT44(local_60._4_4_,fVar35);
                fVar43 = local_e0[2];
                local_68._4_4_ = auVar50._4_4_;
                fVar30 = local_68._4_4_;
                fVar37 = local_e0[4];
                local_68 = auVar50._0_8_;
                if (fVar31 <= local_a8) {
                  local_a8 = powf((float)(((double)local_a8 + __LC137) * __LC138),_LC139);
                }
                else {
                  local_a8 = local_a8 * _LC136;
                }
                if (fVar31 <= fVar43) {
                  fVar43 = powf((float)(((double)fVar43 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar43 = fVar43 * _LC136;
                }
                if (fVar31 <= fVar49) {
                  fVar49 = powf((float)(((double)fVar49 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar49 = fVar49 * _LC136;
                }
                local_78 = (undefined1  [8])CONCAT44(fVar43,fVar49);
                local_70 = local_a8;
                auVar52 = ok_color::linear_srgb_to_oklab();
                local_68._0_4_ = auVar52._0_4_;
                fVar49 = auVar52._4_4_;
                local_60 = CONCAT44(local_60._4_4_,auVar52._8_4_);
                fVar36 = (float)local_68;
              }
              else {
                local_c0 = pfVar10[1];
                local_bc = pfVar10[2];
                local_b8 = pfVar10[3];
                local_b4 = pfVar10[4];
                fVar33 = pfVar1[1];
                fVar49 = local_e0[2];
                fVar30 = pfVar1[2];
                fVar35 = pfVar1[3];
                fVar48 = pfVar1[4];
                fVar37 = local_e0[4];
                auVar52._8_4_ = local_e0[3];
                auVar52._0_8_ = local_68;
                fVar36 = local_e0[1];
              }
              local_68 = auVar52._0_8_;
              fVar31 = fVar46 * fVar46;
              fVar43 = fVar46 * fVar31;
              local_f8 = (((((local_f8 + local_f8) - _LC148 * local_c0) + _LC149 * fVar33) - fVar36)
                          * fVar31 + (fVar33 - local_f8) * fVar46 + local_c0 + local_c0 +
                         (((local_c0 * _LC150 - local_f8) - fVar33 * _LC150) + fVar36) * fVar43) *
                         _LC151;
              fVar33 = (((((fVar29 + fVar29) - _UNK_0011c4dc * local_bc) + _UNK_0011c4e4 * fVar30) -
                        fVar49) * fVar31 + (fVar30 - fVar29) * fVar46 + local_bc + local_bc +
                       (((local_bc * _UNK_0011c4ec - fVar29) - fVar30 * _UNK_0011c4ec) + fVar49) *
                       fVar43) * _UNK_0011c4f4;
              local_100 = (((fVar35 * _LC149 + ((local_100 + local_100) - local_b8 * _LC148)) -
                           auVar52._8_4_) * fVar31 +
                           (fVar35 - local_100) * fVar46 + local_b8 + local_b8 +
                          (((local_b8 * _LC150 - local_100) - fVar35 * _LC150) + auVar52._8_4_) *
                          fVar43) * _LC151;
              fVar29 = (fVar31 * ((((fVar45 + fVar45) - _LC148 * local_b4) + _LC149 * fVar48) -
                                 fVar37) + (fVar48 - fVar45) * fVar46 + local_b4 + local_b4 +
                       (((local_b4 * _LC150 - fVar45) - _LC150 * fVar48) + fVar37) * fVar43) *
                       _LC151;
              fVar31 = _LC140;
            }
            else {
              local_f8 = pfVar10[1];
              iVar17 = *(int *)(lVar15 + 600);
              fVar33 = pfVar10[2];
              local_100 = pfVar10[3];
              fVar29 = pfVar10[4];
              if (iVar17 == 1) {
                if (_LC135 <= local_100) {
                  local_100 = powf((float)(((double)local_100 + __LC137) * __LC138),_LC139);
                }
                else {
                  local_100 = local_100 * _LC136;
                }
                if (fVar31 <= fVar33) {
                  fVar33 = powf((float)(((double)fVar33 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar33 = fVar33 * _LC136;
                }
                if (fVar31 <= local_f8) {
                  local_f8 = powf((float)(((double)local_f8 + __LC137) * __LC138),_LC139);
                }
                else {
                  local_f8 = local_f8 * _LC136;
                }
                fVar45 = pfVar1[4];
                fVar35 = pfVar1[3];
                fVar48 = pfVar1[1];
                fVar30 = pfVar1[2];
                if (fVar31 <= fVar35) {
                  fVar35 = powf((float)(((double)fVar35 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar35 = fVar35 * _LC136;
                }
                if (fVar31 <= fVar30) {
                  fVar30 = powf((float)(((double)fVar30 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar30 = fVar30 * _LC136;
                }
                auVar51._8_4_ = fVar35;
                auVar51._0_8_ = local_68;
                if (fVar31 <= fVar48) {
                  fVar48 = powf((float)(((double)fVar48 + __LC137) * __LC138),_LC139);
                  auVar51._0_8_ = local_68;
                }
                else {
                  fVar48 = fVar48 * _LC136;
                }
              }
              else if (iVar17 == 2) {
                if (_LC135 <= local_100) {
                  local_100 = powf((float)(((double)local_100 + __LC137) * __LC138),_LC139);
                }
                else {
                  local_100 = local_100 * _LC136;
                }
                if (fVar31 <= fVar33) {
                  fVar33 = powf((float)(((double)fVar33 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar33 = fVar33 * _LC136;
                }
                if (fVar31 <= local_f8) {
                  local_f8 = powf((float)(((double)local_f8 + __LC137) * __LC138),_LC139);
                }
                else {
                  local_f8 = local_f8 * _LC136;
                }
                local_78 = (undefined1  [8])CONCAT44(fVar33,local_f8);
                local_70 = local_100;
                auVar50 = ok_color::linear_srgb_to_oklab();
                local_100 = auVar50._8_4_;
                local_68._0_4_ = auVar50._0_4_;
                fVar30 = pfVar1[3];
                fVar45 = pfVar1[4];
                local_60 = CONCAT44(local_60._4_4_,local_100);
                local_f8 = (float)local_68;
                fVar35 = pfVar1[2];
                local_68._4_4_ = auVar50._4_4_;
                fVar33 = local_68._4_4_;
                fVar48 = pfVar1[1];
                local_68 = auVar50._0_8_;
                if (fVar31 <= fVar30) {
                  fVar30 = powf((float)(((double)fVar30 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar30 = fVar30 * _LC136;
                }
                if (fVar31 <= fVar35) {
                  fVar35 = powf((float)(((double)fVar35 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar35 = fVar35 * _LC136;
                }
                if (fVar31 <= fVar48) {
                  fVar48 = powf((float)(((double)fVar48 + __LC137) * __LC138),_LC139);
                }
                else {
                  fVar48 = fVar48 * _LC136;
                }
                local_78 = (undefined1  [8])CONCAT44(fVar35,fVar48);
                local_70 = fVar30;
                auVar51 = ok_color::linear_srgb_to_oklab();
                local_68._0_4_ = auVar51._0_4_;
                fVar30 = auVar51._4_4_;
                local_60 = CONCAT44(local_60._4_4_,auVar51._8_4_);
                fVar48 = (float)local_68;
              }
              else {
                fVar45 = pfVar1[4];
                fVar30 = pfVar1[2];
                auVar51._8_4_ = pfVar1[3];
                auVar51._0_8_ = local_68;
                fVar48 = pfVar1[1];
              }
              local_68 = auVar51._0_8_;
              local_f8 = (fVar48 - local_f8) * fVar46 + local_f8;
              fVar33 = (fVar30 - fVar33) * fVar46 + fVar33;
              local_100 = (auVar51._8_4_ - local_100) * fVar46 + local_100;
              fVar29 = (fVar45 - fVar29) * fVar46 + fVar29;
              fVar31 = _LC140;
            }
            _LC140 = fVar31;
            if (iVar17 == 1) {
              if (fVar31 <= local_100) {
                fVar46 = powf(local_100,_LC142);
                local_100 = (float)((double)fVar46 * __LC143 - __LC137);
              }
              else {
                local_100 = local_100 * _LC141;
              }
              if (fVar31 <= fVar33) {
                fVar33 = powf(fVar33,_LC142);
                fVar33 = (float)((double)fVar33 * __LC143 - __LC137);
              }
              else {
                fVar33 = fVar33 * _LC141;
              }
              if (fVar31 <= local_f8) {
                fVar31 = powf(local_f8,_LC142);
                local_f8 = (float)((double)fVar31 * __LC143 - __LC137);
              }
              else {
                local_f8 = local_f8 * _LC141;
              }
            }
            else if (iVar17 == 2) {
              local_78._4_4_ = fVar33;
              local_78._0_4_ = local_f8;
              local_70 = local_100;
              auVar50 = ok_color::oklab_to_linear_srgb();
              fVar31 = _LC140;
              local_100 = auVar50._8_4_;
              local_60 = CONCAT44(local_60._4_4_,local_100);
              local_68._0_4_ = auVar50._0_4_;
              local_f8 = (float)local_68;
              local_68._4_4_ = auVar50._4_4_;
              fVar33 = local_68._4_4_;
              local_68 = auVar50._0_8_;
              if (_LC140 <= local_100) {
                fVar46 = powf(local_100,_LC142);
                local_100 = (float)((double)fVar46 * __LC143 - __LC137);
              }
              else {
                local_100 = _LC141 * local_100;
              }
              if (fVar31 <= fVar33) {
                fVar33 = powf(fVar33,_LC142);
                fVar33 = (float)((double)fVar33 * __LC143 - __LC137);
              }
              else {
                fVar33 = fVar33 * _LC141;
              }
              if (fVar31 <= local_f8) {
                fVar31 = powf(local_f8,_LC142);
                local_f8 = (float)((double)fVar31 * __LC143 - __LC137);
              }
              else {
                local_f8 = local_f8 * _LC141;
              }
            }
            goto LAB_00105152;
          }
          if ((int)uVar24 <= (int)uVar7) {
LAB_00105990:
            pfVar10 = (float *)(lVar12 + (ulong)(uVar24 - 1) * 0x14);
LAB_0010599c:
            local_f8 = pfVar10[1];
            fVar33 = pfVar10[2];
            local_100 = pfVar10[3];
            fVar29 = pfVar10[4];
            goto LAB_00105152;
          }
          uVar21 = uVar7 - 1;
          if (uVar7 == 0) {
            local_f8 = *(float *)(lVar12 + 4);
            fVar33 = *(float *)(lVar12 + 8);
            local_100 = *(float *)(lVar12 + 0xc);
            fVar29 = *(float *)(lVar12 + 0x10);
            goto LAB_00105152;
          }
          uVar14 = uVar7;
          if (uVar21 < uVar24) goto LAB_00105461;
LAB_001050f9:
          uVar16 = (ulong)(int)uVar21;
          goto LAB_00105115;
        }
LAB_00105188:
        uVar26 = uVar26 + 1;
      } while ((int)uVar26 < *(int *)(this + 0x2fc));
    }
  }
  if (*(long *)(this + 0x2f0) == 0) {
    plVar8 = (long *)RenderingServer::get_singleton();
    uVar9 = (**(code **)(*plVar8 + 0x158))(plVar8,&local_90);
    *(undefined8 *)(this + 0x2f0) = uVar9;
  }
  else {
    plVar8 = (long *)RenderingServer::get_singleton();
    uVar9 = (**(code **)(*plVar8 + 0x158))(plVar8,&local_90);
    plVar8 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(this + 0x2f0),uVar9);
  }
  plVar8 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar8 + 0x1e8);
  Resource::get_path();
  (*pcVar2)(plVar8,*(undefined8 *)(this + 0x2f0),(CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_90 != (Image *)0x0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      memdelete<Image>(local_90);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_001056c6:
  uVar25 = 0;
  uVar16 = 0;
  goto LAB_00105115;
LAB_00106291:
  uVar16 = (ulong)(int)uVar14;
LAB_00105115:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar16,uVar25,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* GradientTexture2D::get_image() const */

void GradientTexture2D::get_image(void)

{
  long lVar1;
  long *plVar2;
  GradientTexture2D *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((in_RSI[0x31c] != (GradientTexture2D)0x0) &&
     (in_RSI[0x31c] = (GradientTexture2D)0x0, *(long *)(in_RSI + 0x2e8) != 0)) {
    _update(in_RSI);
  }
  if (*(long *)(in_RSI + 0x2f0) == 0) {
    *in_RDI = 0;
  }
  else {
    plVar2 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar2 + 0x1c0))();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientTexture2D::_update() const */

void __thiscall GradientTexture2D::_update(GradientTexture2D *this)

{
  this[0x31c] = (GradientTexture2D)0x0;
  if (*(long *)(this + 0x2e8) != 0) {
    _update(this);
    return;
  }
  return;
}



/* GradientTexture2D::update_now() const */

void __thiscall GradientTexture2D::update_now(GradientTexture2D *this)

{
  if ((this[0x31c] != (GradientTexture2D)0x0) &&
     (this[0x31c] = (GradientTexture2D)0x0, *(long *)(this + 0x2e8) != 0)) {
    _update(this);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GradientTexture1D::_update() const */

void __thiscall GradientTexture1D::_update(GradientTexture1D *this)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  Object *pOVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined1 uVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  long in_FS_OFFSET;
  float fVar28;
  float fVar30;
  double dVar31;
  float fVar29;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  float fVar32;
  float fVar33;
  double dVar34;
  ok_color *poVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [12];
  undefined1 auVar49 [12];
  undefined1 auVar50 [12];
  undefined1 auVar51 [12];
  float local_ec;
  float local_e0;
  float local_d8;
  float *local_c8;
  float *local_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  Object *local_88;
  float local_80;
  undefined1 local_78 [8];
  float local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x2f0] = (GradientTexture1D)0x0;
  if (*(long *)(this + 0x2e8) != 0) {
    if (this[0x304] == (GradientTexture1D)0x0) {
      local_60 = 0;
      CowData<unsigned_char>::resize<false>
                ((CowData<unsigned_char> *)&local_60,(long)(*(int *)(this + 0x300) * 4));
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
      lVar14 = local_60;
      iVar19 = *(int *)(this + 0x300);
      lVar3 = *(long *)(this + 0x2e8);
      if (0 < iVar19) {
        lVar18 = 0;
        dVar40 = _LC126;
        do {
          uVar22 = *(uint *)(lVar3 + 0x240);
          if (uVar22 == 0) {
            dVar34 = 0.0;
            *(undefined1 *)(lVar14 + lVar18 * 4) = 0;
            *(undefined1 *)(lVar14 + 1 + lVar18 * 4) = 0;
            uVar17 = 0xff;
            dVar31 = dVar40;
            if (0.0 <= dVar40) {
LAB_00109108:
              uVar17 = (undefined1)(int)dVar34;
            }
          }
          else {
            if (*(char *)(lVar3 + 0x250) == '\0') {
              LocalVector<Gradient::Point,unsigned_int,false,false>::
              sort_custom<_DefaultComparator<Gradient::Point>>
                        ((LocalVector<Gradient::Point,unsigned_int,false,false> *)(lVar3 + 0x240));
              uVar22 = *(uint *)(lVar3 + 0x240);
              *(undefined1 *)(lVar3 + 0x250) = 1;
              dVar40 = _LC126;
            }
            uVar23 = (ulong)uVar22;
            iVar21 = 0;
            fVar32 = (float)(int)lVar18 / (float)(iVar19 + -1);
            iVar19 = uVar22 - 1;
            if (iVar19 < 0) {
              _err_print_error("get_color_at_offset","./scene/resources/gradient.h",0xa6,
                               "low > high, this may be a bug",0,0);
              uVar23 = (ulong)*(uint *)(lVar3 + 0x240);
              if (*(uint *)(lVar3 + 0x240) == 0) goto LAB_00109246;
              lVar15 = *(long *)(lVar3 + 0x248);
              uVar24 = 0;
              uVar13 = 0;
              dVar40 = _LC126;
            }
            else {
              do {
                while( true ) {
                  uVar13 = (iVar19 + iVar21) / 2;
                  uVar16 = (ulong)uVar13;
                  uVar24 = (ulong)uVar13;
                  if (uVar22 <= uVar13) goto LAB_0010913b;
                  lVar15 = *(long *)(lVar3 + 0x248);
                  pfVar1 = (float *)(lVar15 + (long)(int)uVar13 * 0x14);
                  if (fVar32 < *pfVar1) break;
                  if (fVar32 <= *pfVar1) {
                    auVar42 = ZEXT416((uint)pfVar1[1]);
                    fVar32 = pfVar1[2];
                    local_e0 = pfVar1[3];
                    fVar46 = pfVar1[4];
                    goto LAB_0010908a;
                  }
                  iVar21 = uVar13 + 1;
                  if (iVar19 < iVar21) goto LAB_0010904e;
                }
                iVar19 = uVar13 - 1;
              } while (iVar21 <= iVar19);
            }
LAB_0010904e:
            fVar30 = _LC135;
            uVar22 = (uint)uVar23;
            if (*(float *)(lVar15 + uVar24 * 0x14) <= fVar32) {
              uVar26 = uVar13 + 1;
              uVar20 = uVar13;
              uVar13 = uVar26;
              if ((int)uVar22 <= (int)uVar26) goto LAB_00109069;
LAB_0010931d:
              pfVar1 = (float *)(lVar15 + (long)(int)uVar20 * 0x14);
              if (uVar22 <= uVar13) {
                uVar16 = (ulong)(int)uVar13;
                goto LAB_0010913b;
              }
              pfVar2 = (float *)(lVar15 + (long)(int)uVar13 * 0x14);
              if (*(int *)(lVar3 + 0x254) == 1) {
                auVar42 = ZEXT416((uint)pfVar1[1]);
                fVar32 = pfVar1[2];
                local_e0 = pfVar1[3];
                fVar46 = pfVar1[4];
              }
              else {
                fVar43 = (fVar32 - *pfVar1) / (*pfVar2 - *pfVar1);
                if (*(int *)(lVar3 + 0x254) == 2) {
                  uVar26 = uVar20 - 1;
                  if ((int)(uVar20 + 2) < (int)uVar22) {
                    uVar13 = uVar20 + 2;
                    if (uVar26 == 0xffffffff) {
                      uVar13 = 2;
                      lVar25 = lVar15;
                    }
                    else {
LAB_00109c38:
                      if (uVar22 <= uVar26) {
                        uVar16 = (ulong)(int)uVar26;
                        goto LAB_0010913b;
                      }
                      lVar25 = lVar15 + -0x14 + (long)(int)uVar20 * 0x14;
                      if (uVar22 <= uVar13) {
                        uVar16 = (ulong)(int)uVar13;
                        goto LAB_0010913b;
                      }
                    }
                    local_c8 = (float *)(lVar15 + (long)(int)uVar13 * 0x14);
                    lVar15 = lVar25;
                  }
                  else {
                    local_c8 = pfVar2;
                    if (uVar26 != 0xffffffff) goto LAB_00109c38;
                  }
                  fVar46 = *(float *)(lVar15 + 4);
                  iVar19 = *(int *)(lVar3 + 600);
                  fVar32 = *(float *)(lVar15 + 8);
                  local_d8 = *(float *)(lVar15 + 0xc);
                  fVar33 = *(float *)(lVar15 + 0x10);
                  if (iVar19 == 1) {
                    if (_LC135 <= local_d8) {
                      local_d8 = powf((float)(((double)local_d8 + __LC137) * __LC138),_LC139);
                      dVar40 = _LC126;
                    }
                    else {
                      local_d8 = local_d8 * _LC136;
                    }
                    if (fVar30 <= fVar32) {
                      fVar32 = powf((float)(((double)fVar32 + __LC137) * __LC138),_LC139);
                      dVar40 = _LC126;
                    }
                    else {
                      fVar32 = fVar32 * _LC136;
                    }
                    if (fVar30 <= fVar46) {
                      fVar46 = powf((float)(((double)fVar46 + __LC137) * __LC138),_LC139);
                      local_9c = pfVar1[4];
                      local_a8 = pfVar1[1];
                      local_a4 = pfVar1[2];
                      local_a0 = pfVar1[3];
                      dVar40 = _LC126;
                    }
                    else {
                      fVar46 = fVar46 * _LC136;
                      local_9c = pfVar1[4];
                      local_a8 = pfVar1[1];
                      local_a0 = pfVar1[3];
                      local_a4 = pfVar1[2];
                    }
                    if (fVar30 <= local_a0) {
                      local_a0 = powf((float)(((double)local_a0 + __LC137) * __LC138),_LC139);
                      dVar40 = _LC126;
                    }
                    else {
                      local_a0 = local_a0 * _LC136;
                    }
                    if (fVar30 <= local_a4) {
                      local_a4 = powf((float)(((double)local_a4 + __LC137) * __LC138),_LC139);
                      dVar40 = _LC126;
                    }
                    else {
                      local_a4 = local_a4 * _LC136;
                    }
                    if (fVar30 <= local_a8) {
                      local_a8 = powf((float)(((double)local_a8 + __LC137) * __LC138),_LC139);
                      local_ac = pfVar2[4];
                      fVar28 = pfVar2[1];
                      fVar44 = pfVar2[2];
                      local_b0 = pfVar2[3];
                      dVar40 = _LC126;
                    }
                    else {
                      local_a8 = local_a8 * _LC136;
                      local_ac = pfVar2[4];
                      fVar44 = pfVar2[2];
                      local_b0 = pfVar2[3];
                      fVar28 = pfVar2[1];
                    }
                    if (fVar30 <= local_b0) {
                      local_b0 = powf((float)(((double)local_b0 + __LC137) * __LC138),_LC139);
                      dVar40 = _LC126;
                    }
                    else {
                      local_b0 = local_b0 * _LC136;
                    }
                    if (fVar30 <= fVar44) {
                      fVar44 = powf((float)(((double)fVar44 + __LC137) * __LC138),_LC139);
                      dVar40 = _LC126;
                    }
                    else {
                      fVar44 = fVar44 * _LC136;
                    }
                    if (fVar30 <= fVar28) {
                      fVar28 = powf((float)(((double)fVar28 + __LC137) * __LC138),_LC139);
                      fVar36 = local_c8[4];
                      fVar29 = local_c8[1];
                      fVar45 = local_c8[2];
                      fVar39 = local_c8[3];
                      dVar40 = _LC126;
                    }
                    else {
                      fVar28 = fVar28 * _LC136;
                      fVar36 = local_c8[4];
                      fVar29 = local_c8[1];
                      fVar39 = local_c8[3];
                      fVar45 = local_c8[2];
                    }
                    if (fVar30 <= fVar39) {
                      fVar39 = powf((float)(((double)fVar39 + __LC137) * __LC138),_LC139);
                      dVar40 = _LC126;
                    }
                    else {
                      fVar39 = fVar39 * _LC136;
                    }
                    if (fVar30 <= fVar45) {
                      fVar45 = powf((float)(((double)fVar45 + __LC137) * __LC138),_LC139);
                      uVar23 = CONCAT44(extraout_XMM0_Db_04,fVar45);
                      dVar40 = _LC126;
                    }
                    else {
                      uVar23 = (ulong)(uint)(fVar45 * _LC136);
                    }
                    auVar50._8_4_ = fVar39;
                    auVar50._0_8_ = local_78;
                    if (fVar30 <= fVar29) {
                      fVar29 = powf((float)(((double)fVar29 + __LC137) * __LC138),_LC139);
                      auVar50._0_8_ = local_78;
                      uVar23 = uVar23 & 0xffffffff;
                      dVar40 = _LC126;
                      fVar30 = extraout_XMM0_Db_03;
                    }
                    else {
                      fVar29 = fVar29 * _LC136;
                      fVar30 = 0.0;
                    }
                  }
                  else if (iVar19 == 2) {
                    if (_LC135 <= local_d8) {
                      local_d8 = powf((float)(((double)local_d8 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      local_d8 = local_d8 * _LC136;
                    }
                    if (fVar30 <= fVar32) {
                      fVar32 = powf((float)(((double)fVar32 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar32 = fVar32 * _LC136;
                    }
                    if (fVar30 <= fVar46) {
                      fVar46 = powf((float)(((double)fVar46 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar46 = fVar46 * _LC136;
                    }
                    local_88 = (Object *)CONCAT44(fVar32,fVar46);
                    local_80 = local_d8;
                    auVar48 = ok_color::linear_srgb_to_oklab();
                    local_d8 = auVar48._8_4_;
                    fVar28 = pfVar1[1];
                    fVar44 = pfVar1[3];
                    local_78._0_4_ = auVar48._0_4_;
                    fVar46 = (float)local_78._0_4_;
                    local_78._4_4_ = auVar48._4_4_;
                    fVar32 = (float)local_78._4_4_;
                    fVar36 = pfVar1[2];
                    local_9c = pfVar1[4];
                    _local_78 = auVar48;
                    if (fVar30 <= fVar44) {
                      fVar44 = powf((float)(((double)fVar44 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar44 = fVar44 * _LC136;
                    }
                    if (fVar30 <= fVar36) {
                      fVar36 = powf((float)(((double)fVar36 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar36 = fVar36 * _LC136;
                    }
                    if (fVar30 <= fVar28) {
                      fVar28 = powf((float)(((double)fVar28 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar28 = fVar28 * _LC136;
                    }
                    local_88 = (Object *)CONCAT44(fVar36,fVar28);
                    local_80 = fVar44;
                    auVar48 = ok_color::linear_srgb_to_oklab((ok_color *)local_88,fVar44);
                    local_a0 = auVar48._8_4_;
                    local_78._0_4_ = auVar48._0_4_;
                    local_78._4_4_ = auVar48._4_4_;
                    fVar28 = pfVar2[3];
                    fVar44 = pfVar2[1];
                    local_a8 = (float)local_78._0_4_;
                    local_ac = pfVar2[4];
                    fVar36 = pfVar2[2];
                    local_a4 = (float)local_78._4_4_;
                    _local_78 = auVar48;
                    if (fVar30 <= fVar28) {
                      fVar28 = powf((float)(((double)fVar28 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar28 = fVar28 * _LC136;
                    }
                    if (fVar30 <= fVar36) {
                      fVar36 = powf((float)(((double)fVar36 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar36 = fVar36 * _LC136;
                    }
                    if (fVar30 <= fVar44) {
                      fVar44 = powf((float)(((double)fVar44 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar44 = fVar44 * _LC136;
                    }
                    local_88 = (Object *)CONCAT44(fVar36,fVar44);
                    local_80 = fVar28;
                    auVar48 = ok_color::linear_srgb_to_oklab((ok_color *)local_88,fVar28);
                    local_b0 = auVar48._8_4_;
                    local_78._0_4_ = auVar48._0_4_;
                    fVar28 = (float)local_78._0_4_;
                    local_78._4_4_ = auVar48._4_4_;
                    fVar44 = (float)local_78._4_4_;
                    fVar29 = local_c8[3];
                    fVar39 = local_c8[1];
                    fVar36 = local_c8[4];
                    fVar45 = local_c8[2];
                    _local_78 = auVar48;
                    if (fVar30 <= fVar29) {
                      fVar29 = powf((float)(((double)fVar29 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar29 = fVar29 * _LC136;
                    }
                    if (fVar30 <= fVar45) {
                      fVar45 = powf((float)(((double)fVar45 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar45 = fVar45 * _LC136;
                    }
                    if (fVar30 <= fVar39) {
                      fVar39 = powf((float)(((double)fVar39 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar39 = fVar39 * _LC136;
                    }
                    local_88 = (Object *)CONCAT44(fVar45,fVar39);
                    local_80 = fVar29;
                    auVar50 = ok_color::linear_srgb_to_oklab((ok_color *)local_88,fVar29);
                    local_70 = auVar50._8_4_;
                    local_78._0_4_ = auVar50._0_4_;
                    fVar30 = 0.0;
                    uVar23 = auVar50._0_8_ >> 0x20;
                    dVar40 = _LC126;
                    fVar29 = (float)local_78._0_4_;
                  }
                  else {
                    local_a8 = pfVar1[1];
                    local_a0 = pfVar1[3];
                    local_a4 = pfVar1[2];
                    local_9c = pfVar1[4];
                    fVar28 = pfVar2[1];
                    local_b0 = pfVar2[3];
                    uVar23 = (ulong)(uint)local_c8[2];
                    fVar44 = pfVar2[2];
                    auVar50._8_4_ = local_c8[3];
                    auVar50._0_8_ = local_78;
                    local_ac = pfVar2[4];
                    fVar36 = local_c8[4];
                    fVar30 = 0.0;
                    fVar29 = local_c8[1];
                  }
                  local_78 = auVar50._0_8_;
                  fVar39 = (float)(uVar23 >> 0x20);
                  fVar47 = fVar43 * fVar43;
                  fVar45 = fVar43 * fVar47;
                  fVar32 = (((((fVar32 + fVar32) - _UNK_0011c4dc * local_a4) +
                             _UNK_0011c4e4 * fVar44) - (float)uVar23) * fVar47 +
                            (fVar44 - fVar32) * fVar43 + local_a4 + local_a4 +
                           (((local_a4 * _UNK_0011c4ec - fVar32) - fVar44 * _UNK_0011c4ec) +
                           (float)uVar23) * fVar45) * _UNK_0011c4f4;
                  poVar35 = (ok_color *)
                            CONCAT44(fVar32,(((((fVar46 + fVar46) - _LC148 * local_a8) +
                                              _LC149 * fVar28) - fVar29) * fVar47 +
                                             (fVar28 - fVar46) * fVar43 + local_a8 + local_a8 +
                                            (((local_a8 * _LC150 - fVar46) - fVar28 * _LC150) +
                                            fVar29) * fVar45) * _LC151);
                  auVar42._8_4_ = ((0.0 - fVar30) * 0.0 + 0.0 + (fVar30 + 0.0) * 0.0) * 0.0;
                  auVar42._0_8_ = poVar35;
                  auVar42._12_4_ = ((0.0 - fVar39) * 0.0 + 0.0 + (fVar39 + 0.0) * 0.0) * 0.0;
                  local_e0 = (((local_b0 * _LC149 + ((local_d8 + local_d8) - local_a0 * _LC148)) -
                              auVar50._8_4_) * fVar47 +
                              (local_b0 - local_d8) * fVar43 + local_a0 + local_a0 +
                             (((local_a0 * _LC150 - local_d8) - local_b0 * _LC150) + auVar50._8_4_)
                             * fVar45) * _LC151;
                  fVar46 = (((((fVar33 + fVar33) - _LC148 * local_9c) + _LC149 * local_ac) - fVar36)
                            * fVar47 + (local_ac - fVar33) * fVar43 + local_9c + local_9c +
                           (((local_9c * _LC150 - fVar33) - _LC150 * local_ac) + fVar36) * fVar45) *
                           _LC151;
                  if (iVar19 == 1) goto LAB_0010a046;
                  if (iVar19 == 2) {
                    local_88 = (Object *)poVar35;
                    local_80 = local_e0;
                    _local_78 = ok_color::oklab_to_linear_srgb(poVar35);
                    fVar30 = _LC140;
                    local_e0 = SUB124(_local_78,8);
                    uVar7 = local_78._0_4_;
                    uVar8 = local_78._4_4_;
                    if (_LC140 <= local_e0) {
                      fVar32 = powf(local_e0,_LC142);
                      local_e0 = (float)((double)fVar32 * __LC143 - __LC137);
                    }
                    else {
                      local_e0 = _LC141 * local_e0;
                    }
                    if (fVar30 <= (float)uVar8) {
                      fVar32 = powf((float)uVar8,_LC142);
                      fVar32 = (float)((double)fVar32 * __LC143 - __LC137);
                    }
                    else {
                      fVar32 = (float)uVar8 * _LC141;
                    }
                    auVar42 = ZEXT416((uint)uVar7);
                    dVar40 = _LC126;
                    if ((float)uVar7 < fVar30) goto LAB_0010a01c;
                    fVar30 = powf((float)uVar7,_LC142);
                    auVar42 = ZEXT416((uint)(float)((double)fVar30 * __LC143 - __LC137));
                    dVar40 = _LC126;
                  }
                }
                else {
                  local_d8 = pfVar1[1];
                  fVar32 = pfVar1[2];
                  local_e0 = pfVar1[3];
                  fVar46 = pfVar1[4];
                  iVar19 = *(int *)(lVar3 + 600);
                  if (iVar19 == 1) {
                    if (_LC135 <= local_e0) {
                      local_e0 = powf((float)(((double)local_e0 + __LC137) * __LC138),_LC139);
                      dVar40 = _LC126;
                    }
                    else {
                      local_e0 = local_e0 * _LC136;
                    }
                    if (fVar30 <= fVar32) {
                      fVar32 = powf((float)(((double)fVar32 + __LC137) * __LC138),_LC139);
                      dVar40 = _LC126;
                    }
                    else {
                      fVar32 = fVar32 * _LC136;
                    }
                    if (fVar30 <= local_d8) {
                      local_d8 = powf((float)(((double)local_d8 + __LC137) * __LC138),_LC139);
                      fVar33 = pfVar2[4];
                      fVar36 = pfVar2[1];
                      fVar44 = pfVar2[2];
                      fVar28 = pfVar2[3];
                      dVar40 = _LC126;
                    }
                    else {
                      local_d8 = local_d8 * _LC136;
                      fVar33 = pfVar2[4];
                      fVar44 = pfVar2[2];
                      fVar28 = pfVar2[3];
                      fVar36 = pfVar2[1];
                    }
                    if (fVar30 <= fVar28) {
                      fVar28 = powf((float)(((double)fVar28 + __LC137) * __LC138),_LC139);
                      dVar40 = _LC126;
                    }
                    else {
                      fVar28 = _LC136 * fVar28;
                    }
                    if (fVar30 <= fVar44) {
                      fVar44 = powf((float)(((double)fVar44 + __LC137) * __LC138),_LC139);
                      uVar23 = CONCAT44(extraout_XMM0_Db_00,fVar44);
                      dVar40 = _LC126;
                    }
                    else {
                      uVar23 = (ulong)(uint)(fVar44 * _LC136);
                    }
                    if (fVar30 <= fVar36) {
                      fVar36 = powf((float)(((double)fVar36 + __LC137) * __LC138),_LC139);
                      uVar23 = uVar23 & 0xffffffff;
                      dVar40 = _LC126;
                      fVar30 = extraout_XMM0_Db;
                    }
                    else {
                      fVar36 = fVar36 * _LC136;
                      fVar30 = 0.0;
                    }
                  }
                  else if (iVar19 == 2) {
                    if (_LC135 <= local_e0) {
                      local_e0 = powf((float)(((double)local_e0 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      local_e0 = local_e0 * _LC136;
                    }
                    if (fVar30 <= fVar32) {
                      fVar32 = powf((float)(((double)fVar32 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar32 = fVar32 * _LC136;
                    }
                    if (fVar30 <= local_d8) {
                      local_d8 = powf((float)(((double)local_d8 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      local_d8 = local_d8 * _LC136;
                    }
                    local_88 = (Object *)CONCAT44(fVar32,local_d8);
                    local_80 = local_e0;
                    auVar48 = ok_color::linear_srgb_to_oklab();
                    local_e0 = auVar48._8_4_;
                    local_78._0_4_ = auVar48._0_4_;
                    local_78._4_4_ = auVar48._4_4_;
                    fVar32 = (float)local_78._4_4_;
                    fVar28 = pfVar2[3];
                    fVar33 = pfVar2[4];
                    local_d8 = (float)local_78._0_4_;
                    fVar44 = pfVar2[1];
                    fVar36 = pfVar2[2];
                    _local_78 = auVar48;
                    if (fVar30 <= fVar28) {
                      fVar28 = powf((float)(((double)fVar28 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar28 = fVar28 * _LC136;
                    }
                    if (fVar30 <= fVar36) {
                      fVar36 = powf((float)(((double)fVar36 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar36 = fVar36 * _LC136;
                    }
                    if (fVar30 <= fVar44) {
                      fVar44 = powf((float)(((double)fVar44 + __LC137) * __LC138),_LC139);
                    }
                    else {
                      fVar44 = fVar44 * _LC136;
                    }
                    local_88 = (Object *)CONCAT44(fVar36,fVar44);
                    local_80 = fVar28;
                    auVar48 = ok_color::linear_srgb_to_oklab();
                    fVar28 = auVar48._8_4_;
                    local_78._0_4_ = auVar48._0_4_;
                    fVar30 = 0.0;
                    uVar23 = auVar48._0_8_ >> 0x20;
                    dVar40 = _LC126;
                    fVar36 = (float)local_78._0_4_;
                    _local_78 = auVar48;
                  }
                  else {
                    fVar33 = pfVar2[4];
                    fVar30 = 0.0;
                    uVar23 = (ulong)(uint)pfVar2[2];
                    fVar28 = pfVar2[3];
                    fVar36 = pfVar2[1];
                  }
                  fVar32 = fVar32 + ((float)uVar23 - fVar32) * fVar43;
                  pOVar10 = (Object *)CONCAT44(fVar32,local_d8 + (fVar36 - local_d8) * fVar43);
                  auVar42._8_4_ = fVar30 * 0.0 + 0.0;
                  auVar42._0_8_ = pOVar10;
                  auVar42._12_4_ = (float)(uVar23 >> 0x20) * 0.0 + 0.0;
                  local_e0 = (fVar28 - local_e0) * fVar43 + local_e0;
                  fVar46 = (fVar33 - fVar46) * fVar43 + fVar46;
                  if (iVar19 == 1) {
LAB_0010a046:
                    fVar30 = _LC140;
                    if (_LC140 <= local_e0) {
                      fVar43 = powf(local_e0,_LC142);
                      auVar42 = ZEXT416(auVar42._0_4_);
                      local_e0 = (float)((double)fVar43 * __LC143 - __LC137);
                      dVar40 = _LC126;
                    }
                    else {
                      local_e0 = local_e0 * _LC141;
                    }
                    if (fVar30 <= fVar32) {
                      fVar32 = powf(fVar32,_LC142);
                      auVar42 = ZEXT416(auVar42._0_4_);
                      fVar32 = (float)((double)fVar32 * __LC143 - __LC137);
                      dVar40 = _LC126;
                    }
                    else {
                      fVar32 = fVar32 * _LC141;
                    }
                    if (auVar42._0_4_ < fVar30) {
LAB_0010a01c:
                      auVar42._0_4_ = auVar42._0_4_ * _LC141;
                    }
                    else {
                      fVar30 = powf(auVar42._0_4_,_LC142);
                      auVar42 = ZEXT416((uint)(float)((double)fVar30 * __LC143 - __LC137));
                      dVar40 = _LC126;
                    }
                  }
                  else if (iVar19 == 2) {
                    local_88 = pOVar10;
                    local_80 = local_e0;
                    auVar48 = ok_color::oklab_to_linear_srgb();
                    fVar30 = _LC140;
                    local_e0 = auVar48._8_4_;
                    local_78._0_4_ = auVar48._0_4_;
                    uVar7 = local_78._0_4_;
                    local_78._4_4_ = auVar48._4_4_;
                    uVar8 = local_78._4_4_;
                    _local_78 = auVar48;
                    if (_LC140 <= local_e0) {
                      fVar32 = powf(local_e0,_LC142);
                      local_e0 = (float)((double)fVar32 * __LC143 - __LC137);
                    }
                    else {
                      local_e0 = _LC141 * local_e0;
                    }
                    if (fVar30 <= (float)uVar8) {
                      fVar32 = powf((float)uVar8,_LC142);
                      fVar32 = (float)((double)fVar32 * __LC143 - __LC137);
                    }
                    else {
                      fVar32 = (float)uVar8 * _LC141;
                    }
                    if (fVar30 <= (float)uVar7) {
                      fVar30 = powf((float)uVar7,_LC142);
                      auVar42 = ZEXT416((uint)(float)((double)fVar30 * __LC143 - __LC137));
                      dVar40 = _LC126;
                    }
                    else {
                      auVar42 = ZEXT416((uint)((float)uVar7 * _LC141));
                      dVar40 = _LC126;
                    }
                  }
                }
              }
            }
            else {
              if ((int)uVar13 < (int)uVar22) {
                uVar20 = uVar13 - 1;
                if (uVar13 == 0) {
                  auVar42 = ZEXT416(*(uint *)(lVar15 + 4));
                  fVar32 = *(float *)(lVar15 + 8);
                  local_e0 = *(float *)(lVar15 + 0xc);
                  fVar46 = *(float *)(lVar15 + 0x10);
                  goto LAB_0010908a;
                }
                if (uVar20 < uVar22) goto LAB_0010931d;
                uVar16 = (ulong)(int)uVar20;
                goto LAB_0010913b;
              }
LAB_00109069:
              lVar15 = lVar15 + (ulong)(uVar22 - 1) * 0x14;
              auVar42 = ZEXT416(*(uint *)(lVar15 + 4));
              fVar32 = *(float *)(lVar15 + 8);
              local_e0 = *(float *)(lVar15 + 0xc);
              fVar46 = *(float *)(lVar15 + 0x10);
            }
LAB_0010908a:
            dVar41 = (double)auVar42._0_4_ * dVar40;
            uVar17 = 0;
            dVar34 = (double)local_e0 * dVar40;
            dVar31 = (double)fVar46 * dVar40;
            if (0.0 <= dVar41) {
              if (dVar41 <= dVar40) {
                uVar17 = (undefined1)(int)dVar41;
              }
              else {
                uVar17 = 0xff;
              }
            }
            *(undefined1 *)(lVar14 + lVar18 * 4) = uVar17;
            uVar17 = 0;
            dVar41 = (double)fVar32 * dVar40;
            if (0.0 <= dVar41) {
              if (dVar41 <= dVar40) {
                uVar17 = (undefined1)(int)dVar41;
              }
              else {
                uVar17 = 0xff;
              }
            }
            *(undefined1 *)(lVar14 + 1 + lVar18 * 4) = uVar17;
            uVar17 = 0;
            if ((0.0 <= dVar34) && (uVar17 = 0xff, dVar34 <= dVar40)) goto LAB_00109108;
          }
          *(undefined1 *)(lVar14 + 2 + lVar18 * 4) = uVar17;
          uVar17 = 0;
          if ((0.0 <= dVar31) && (uVar17 = 0xff, dVar31 <= dVar40)) {
            uVar17 = (undefined1)(int)dVar31;
          }
          *(undefined1 *)(lVar14 + 3 + lVar18 * 4) = uVar17;
          iVar19 = *(int *)(this + 0x300);
          lVar18 = lVar18 + 1;
        } while ((int)lVar18 < iVar19);
      }
      pOVar10 = (Object *)operator_new(0x268,"");
      Image::Image((Image *)pOVar10,*(undefined4 *)(this + 0x300),1,0,5,&local_68);
      postinitialize_handler(pOVar10);
      local_78 = (undefined1  [8])pOVar10;
      cVar9 = RefCounted::init_ref();
      if (cVar9 == '\0') {
        local_78 = (undefined1  [8])0x0;
      }
      if (*(long *)(this + 0x2f8) == 0) {
        plVar11 = (long *)RenderingServer::get_singleton();
        uVar12 = (**(code **)(*plVar11 + 0x158))(plVar11,local_78);
        *(undefined8 *)(this + 0x2f8) = uVar12;
      }
      else {
        plVar11 = (long *)RenderingServer::get_singleton();
        uVar12 = (**(code **)(*plVar11 + 0x158))(plVar11,local_78);
        plVar11 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(this + 0x2f8),uVar12);
      }
      if ((local_78 != (undefined1  [8])0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0'))
      {
        memdelete<Image>((Image *)local_78);
      }
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
    }
    else {
      pOVar10 = (Object *)operator_new(0x268,"");
      Image::Image((Image *)pOVar10,*(undefined4 *)(this + 0x300),1,0,0xb);
      postinitialize_handler(pOVar10);
      local_88 = pOVar10;
      cVar9 = RefCounted::init_ref();
      if (cVar9 == '\0') {
        local_88 = (Object *)0x0;
      }
      iVar19 = *(int *)(this + 0x300);
      lVar3 = *(long *)(this + 0x2e8);
      if (0 < iVar19) {
        iVar21 = 0;
        do {
          pOVar10 = local_88;
          uVar22 = *(uint *)(lVar3 + 0x240);
          if (uVar22 == 0) {
            local_e0 = 0.0;
            fVar32 = 0.0;
            poVar35 = (ok_color *)0x0;
            local_d8 = _LC61;
          }
          else {
            if (*(char *)(lVar3 + 0x250) == '\0') {
              LocalVector<Gradient::Point,unsigned_int,false,false>::
              sort_custom<_DefaultComparator<Gradient::Point>>
                        ((LocalVector<Gradient::Point,unsigned_int,false,false> *)(lVar3 + 0x240));
              *(undefined1 *)(lVar3 + 0x250) = 1;
              uVar22 = *(uint *)(lVar3 + 0x240);
            }
            uVar23 = (ulong)uVar22;
            iVar27 = 0;
            fVar32 = (float)iVar21 / (float)(iVar19 + -1);
            iVar19 = uVar22 - 1;
            if (iVar19 < 0) {
              _err_print_error("get_color_at_offset","./scene/resources/gradient.h",0xa6,
                               "low > high, this may be a bug",0);
              uVar23 = (ulong)*(uint *)(lVar3 + 0x240);
              if (*(uint *)(lVar3 + 0x240) == 0) goto LAB_00109246;
              lVar14 = *(long *)(lVar3 + 0x248);
              uVar24 = 0;
              uVar13 = 0;
            }
            else {
              do {
                while( true ) {
                  uVar13 = (iVar27 + iVar19) / 2;
                  uVar16 = (ulong)uVar13;
                  uVar24 = (ulong)uVar13;
                  if (uVar22 <= uVar13) goto LAB_0010913b;
                  lVar14 = *(long *)(lVar3 + 0x248);
                  pfVar1 = (float *)(lVar14 + (long)(int)uVar13 * 0x14);
                  if (fVar32 < *pfVar1) break;
                  if (fVar32 <= *pfVar1) {
                    poVar35 = (ok_color *)(ulong)(uint)pfVar1[1];
                    fVar32 = pfVar1[2];
                    local_e0 = pfVar1[3];
                    local_d8 = pfVar1[4];
                    goto LAB_00108eb2;
                  }
                  iVar27 = uVar13 + 1;
                  if (iVar19 < iVar27) goto LAB_00108e5c;
                }
                iVar19 = uVar13 - 1;
              } while (iVar27 <= iVar19);
            }
LAB_00108e5c:
            fVar46 = _LC135;
            auVar6._8_4_ = local_70;
            auVar6._0_8_ = local_78;
            auVar5._8_4_ = local_70;
            auVar5._0_8_ = local_78;
            auVar48._8_4_ = local_70;
            auVar48._0_8_ = local_78;
            uVar22 = (uint)uVar23;
            if (*(float *)(lVar14 + uVar24 * 0x14) <= fVar32) {
              uVar20 = uVar13 + 1;
              uVar26 = uVar13;
              if ((int)uVar22 <= (int)(uVar13 + 1)) goto LAB_001092bc;
LAB_00109561:
              pfVar1 = (float *)(lVar14 + (long)(int)uVar26 * 0x14);
              if (uVar22 <= uVar20) {
                uVar16 = (ulong)(int)uVar20;
                goto LAB_0010913b;
              }
              pfVar2 = (float *)(lVar14 + (long)(int)uVar20 * 0x14);
              if (*(int *)(lVar3 + 0x254) == 1) {
                poVar35 = (ok_color *)(ulong)(uint)pfVar1[1];
                fVar32 = pfVar1[2];
                local_e0 = pfVar1[3];
                local_d8 = pfVar1[4];
                goto LAB_00108eb2;
              }
              fVar30 = (fVar32 - *pfVar1) / (*pfVar2 - *pfVar1);
              if (*(int *)(lVar3 + 0x254) == 2) {
                uVar13 = uVar26 - 1;
                if ((int)(uVar26 + 2) < (int)uVar22) {
                  uVar20 = uVar26 + 2;
                  if (uVar13 == 0xffffffff) {
                    uVar20 = 2;
                    lVar18 = lVar14;
                  }
                  else {
LAB_00109813:
                    if (uVar22 <= uVar13) {
                      uVar16 = (ulong)(int)uVar13;
                      _local_78 = auVar6;
                      goto LAB_0010913b;
                    }
                    lVar18 = lVar14 + -0x14 + (long)(int)uVar26 * 0x14;
                    if (uVar22 <= uVar20) {
                      uVar16 = (ulong)(int)uVar20;
                      _local_78 = auVar5;
                      goto LAB_0010913b;
                    }
                  }
                  local_c0 = (float *)(lVar14 + (long)(int)uVar20 * 0x14);
                  lVar14 = lVar18;
                }
                else {
                  local_c0 = pfVar2;
                  if (uVar13 != 0xffffffff) goto LAB_00109813;
                }
                local_d8 = *(float *)(lVar14 + 4);
                iVar19 = *(int *)(lVar3 + 600);
                fVar32 = *(float *)(lVar14 + 8);
                local_e0 = *(float *)(lVar14 + 0xc);
                fVar43 = *(float *)(lVar14 + 0x10);
                if (iVar19 == 1) {
                  if (_LC135 <= local_e0) {
                    local_e0 = powf((float)(((double)local_e0 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    local_e0 = local_e0 * _LC136;
                  }
                  if (fVar46 <= fVar32) {
                    fVar32 = powf((float)(((double)fVar32 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar32 = fVar32 * _LC136;
                  }
                  if (fVar46 <= local_d8) {
                    local_d8 = powf((float)(((double)local_d8 + __LC137) * __LC138),_LC139);
                    local_9c = pfVar1[4];
                    local_a8 = pfVar1[1];
                    local_a4 = pfVar1[2];
                    local_a0 = pfVar1[3];
                  }
                  else {
                    local_d8 = local_d8 * _LC136;
                    local_a8 = pfVar1[1];
                    local_a4 = pfVar1[2];
                    local_a0 = pfVar1[3];
                    local_9c = pfVar1[4];
                  }
                  if (fVar46 <= local_a0) {
                    local_a0 = powf((float)(((double)local_a0 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    local_a0 = local_a0 * _LC136;
                  }
                  if (fVar46 <= local_a4) {
                    local_a4 = powf((float)(((double)local_a4 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    local_a4 = local_a4 * _LC136;
                  }
                  if (fVar46 <= local_a8) {
                    local_a8 = powf((float)(((double)local_a8 + __LC137) * __LC138),_LC139);
                    local_ac = pfVar2[4];
                    fVar33 = pfVar2[1];
                    fVar28 = pfVar2[2];
                    local_b0 = pfVar2[3];
                  }
                  else {
                    local_a8 = local_a8 * _LC136;
                    local_ac = pfVar2[4];
                    fVar28 = pfVar2[2];
                    local_b0 = pfVar2[3];
                    fVar33 = pfVar2[1];
                  }
                  if (fVar46 <= local_b0) {
                    local_b0 = powf((float)(((double)local_b0 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    local_b0 = local_b0 * _LC136;
                  }
                  if (fVar46 <= fVar28) {
                    fVar28 = powf((float)(((double)fVar28 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar28 = fVar28 * _LC136;
                  }
                  if (fVar46 <= fVar33) {
                    fVar33 = powf((float)(((double)fVar33 + __LC137) * __LC138),_LC139);
                    fVar44 = local_c0[4];
                    fVar36 = local_c0[1];
                    fVar39 = local_c0[2];
                    fVar29 = local_c0[3];
                  }
                  else {
                    fVar33 = fVar33 * _LC136;
                    fVar44 = local_c0[4];
                    fVar39 = local_c0[2];
                    fVar29 = local_c0[3];
                    fVar36 = local_c0[1];
                  }
                  if (fVar46 <= fVar29) {
                    fVar29 = powf((float)(((double)fVar29 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar29 = _LC136 * fVar29;
                  }
                  if (fVar46 <= fVar39) {
                    fVar39 = powf((float)(((double)fVar39 + __LC137) * __LC138),_LC139);
                    uVar23 = CONCAT44(extraout_XMM0_Db_06,fVar39);
                  }
                  else {
                    uVar23 = (ulong)(uint)(fVar39 * _LC136);
                  }
                  auVar51._8_4_ = fVar29;
                  auVar51._0_8_ = local_68;
                  if (fVar46 <= fVar36) {
                    fVar36 = powf((float)(((double)fVar36 + __LC137) * __LC138),_LC139);
                    auVar51._0_8_ = local_68;
                    uVar23 = uVar23 & 0xffffffff;
                    fVar46 = extraout_XMM0_Db_05;
                  }
                  else {
                    fVar36 = fVar36 * _LC136;
                    fVar46 = 0.0;
                  }
                }
                else if (iVar19 == 2) {
                  if (_LC135 <= local_e0) {
                    local_e0 = powf((float)(((double)local_e0 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    local_e0 = local_e0 * _LC136;
                  }
                  if (fVar46 <= fVar32) {
                    fVar32 = powf((float)(((double)fVar32 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar32 = fVar32 * _LC136;
                  }
                  if (fVar46 <= local_d8) {
                    local_d8 = powf((float)(((double)local_d8 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    local_d8 = local_d8 * _LC136;
                  }
                  local_78 = (undefined1  [8])CONCAT44(fVar32,local_d8);
                  local_70 = local_e0;
                  auVar48 = ok_color::linear_srgb_to_oklab();
                  local_e0 = auVar48._8_4_;
                  local_68._0_4_ = auVar48._0_4_;
                  local_68._4_4_ = auVar48._4_4_;
                  fVar32 = local_68._4_4_;
                  fVar33 = pfVar1[3];
                  local_9c = pfVar1[4];
                  local_60 = CONCAT44(local_60._4_4_,local_e0);
                  local_d8 = (float)local_68;
                  fVar28 = pfVar1[1];
                  fVar44 = pfVar1[2];
                  local_68 = auVar48._0_8_;
                  if (fVar46 <= fVar33) {
                    fVar33 = powf((float)(((double)fVar33 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar33 = fVar33 * _LC136;
                  }
                  if (fVar46 <= fVar44) {
                    fVar44 = powf((float)(((double)fVar44 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar44 = fVar44 * _LC136;
                  }
                  if (fVar46 <= fVar28) {
                    fVar28 = powf((float)(((double)fVar28 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar28 = fVar28 * _LC136;
                  }
                  local_78 = (undefined1  [8])CONCAT44(fVar44,fVar28);
                  local_70 = fVar33;
                  auVar48 = ok_color::linear_srgb_to_oklab();
                  local_a0 = auVar48._8_4_;
                  fVar33 = pfVar2[1];
                  local_ac = pfVar2[4];
                  fVar28 = pfVar2[3];
                  local_68._0_4_ = auVar48._0_4_;
                  local_68._4_4_ = auVar48._4_4_;
                  fVar44 = pfVar2[2];
                  local_60 = CONCAT44(local_60._4_4_,local_a0);
                  local_a8 = (float)local_68;
                  local_a4 = local_68._4_4_;
                  local_68 = auVar48._0_8_;
                  if (fVar46 <= fVar28) {
                    fVar28 = powf((float)(((double)fVar28 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar28 = fVar28 * _LC136;
                  }
                  if (fVar46 <= fVar44) {
                    fVar44 = powf((float)(((double)fVar44 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar44 = fVar44 * _LC136;
                  }
                  if (fVar46 <= fVar33) {
                    fVar33 = powf((float)(((double)fVar33 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar33 = fVar33 * _LC136;
                  }
                  local_78 = (undefined1  [8])CONCAT44(fVar44,fVar33);
                  local_70 = fVar28;
                  auVar48 = ok_color::linear_srgb_to_oklab();
                  local_b0 = auVar48._8_4_;
                  local_68._0_4_ = auVar48._0_4_;
                  fVar33 = (float)local_68;
                  local_68._4_4_ = auVar48._4_4_;
                  fVar28 = local_68._4_4_;
                  fVar36 = local_c0[3];
                  fVar29 = local_c0[1];
                  local_60 = CONCAT44(local_60._4_4_,local_b0);
                  fVar44 = local_c0[4];
                  fVar39 = local_c0[2];
                  local_68 = auVar48._0_8_;
                  if (fVar46 <= fVar36) {
                    fVar36 = powf((float)(((double)fVar36 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar36 = fVar36 * _LC136;
                  }
                  if (fVar46 <= fVar39) {
                    fVar39 = powf((float)(((double)fVar39 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar39 = fVar39 * _LC136;
                  }
                  if (fVar46 <= fVar29) {
                    fVar29 = powf((float)(((double)fVar29 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar29 = fVar29 * _LC136;
                  }
                  local_78 = (undefined1  [8])CONCAT44(fVar39,fVar29);
                  local_70 = fVar36;
                  auVar51 = ok_color::linear_srgb_to_oklab((ok_color *)local_78,fVar36);
                  local_68._0_4_ = auVar51._0_4_;
                  fVar46 = 0.0;
                  uVar23 = auVar51._0_8_ >> 0x20;
                  local_60 = CONCAT44(local_60._4_4_,auVar51._8_4_);
                  fVar36 = (float)local_68;
                }
                else {
                  local_a8 = pfVar1[1];
                  local_a0 = pfVar1[3];
                  local_a4 = pfVar1[2];
                  local_9c = pfVar1[4];
                  fVar33 = pfVar2[1];
                  local_b0 = pfVar2[3];
                  fVar46 = 0.0;
                  fVar28 = pfVar2[2];
                  auVar51._8_4_ = local_c0[3];
                  auVar51._0_8_ = local_68;
                  local_ac = pfVar2[4];
                  fVar44 = local_c0[4];
                  uVar23 = (ulong)(uint)local_c0[2];
                  fVar36 = local_c0[1];
                }
                fVar29 = _LC140;
                local_68 = auVar51._0_8_;
                fVar39 = (float)(uVar23 >> 0x20);
                fVar47 = fVar30 * fVar30;
                fVar45 = fVar30 * fVar47;
                fVar33 = (((((local_d8 + local_d8) - _LC148 * local_a8) + _LC149 * fVar33) - fVar36)
                          * fVar47 + (fVar33 - local_d8) * fVar30 + local_a8 + local_a8 +
                         (((local_a8 * _LC150 - local_d8) - fVar33 * _LC150) + fVar36) * fVar45) *
                         _LC151;
                fVar32 = (((((fVar32 + fVar32) - _UNK_0011c4dc * local_a4) + _UNK_0011c4e4 * fVar28)
                          - (float)uVar23) * fVar47 +
                          (fVar28 - fVar32) * fVar30 + local_a4 + local_a4 +
                         (((local_a4 * _UNK_0011c4ec - fVar32) - fVar28 * _UNK_0011c4ec) +
                         (float)uVar23) * fVar45) * _UNK_0011c4f4;
                poVar35 = (ok_color *)CONCAT44(fVar32,fVar33);
                auVar37._8_4_ = ((0.0 - fVar46) * 0.0 + 0.0 + (fVar46 + 0.0) * 0.0) * 0.0;
                auVar37._0_8_ = poVar35;
                auVar37._12_4_ = ((0.0 - fVar39) * 0.0 + 0.0 + (fVar39 + 0.0) * 0.0) * 0.0;
                local_e0 = (((local_b0 * _LC149 + ((local_e0 + local_e0) - local_a0 * _LC148)) -
                            auVar51._8_4_) * fVar47 +
                            (local_b0 - local_e0) * fVar30 + local_a0 + local_a0 +
                           (((local_a0 * _LC150 - local_e0) - local_b0 * _LC150) + auVar51._8_4_) *
                           fVar45) * _LC151;
                local_d8 = (((((fVar43 + fVar43) - _LC148 * local_9c) + _LC149 * local_ac) - fVar44)
                            * fVar47 + (local_ac - fVar43) * fVar30 + local_9c + local_9c +
                           (((local_9c * _LC150 - fVar43) - _LC150 * local_ac) + fVar44) * fVar45) *
                           _LC151;
                if (iVar19 == 1) {
                  if (_LC140 <= local_e0) {
                    fVar46 = powf(local_e0,_LC142);
                    auVar37 = ZEXT416((uint)fVar33);
                    local_e0 = (float)((double)fVar46 * __LC143 - __LC137);
                  }
                  else {
                    local_e0 = local_e0 * _LC141;
                  }
                  if (fVar29 <= fVar32) {
                    fVar32 = powf(fVar32,_LC142);
                    auVar37 = ZEXT416(auVar37._0_4_);
                    fVar32 = (float)((double)fVar32 * __LC143 - __LC137);
                  }
                  else {
                    fVar32 = fVar32 * _LC141;
                  }
                  fVar46 = auVar37._0_4_;
                  if (fVar29 <= fVar46) goto LAB_0010ab85;
                  goto LAB_0010a25f;
                }
                if (iVar19 != 2) goto LAB_00108eb2;
                local_78 = (undefined1  [8])poVar35;
                local_70 = local_e0;
                auVar48 = ok_color::oklab_to_linear_srgb(poVar35);
                fVar46 = _LC140;
                local_e0 = auVar48._8_4_;
                local_60 = CONCAT44(local_60._4_4_,local_e0);
                local_68._0_4_ = auVar48._0_4_;
                local_68._4_4_ = auVar48._4_4_;
                fVar32 = local_68._4_4_;
                local_ec = (float)local_68;
                local_68 = auVar48._0_8_;
                if (_LC140 <= local_e0) {
                  fVar30 = powf(local_e0,_LC142);
                  local_e0 = (float)((double)fVar30 * __LC143 - __LC137);
                }
                else {
                  local_e0 = _LC141 * local_e0;
                }
                if (fVar32 < fVar46) goto LAB_00109734;
LAB_00109bbc:
                fVar32 = powf(fVar32,_LC142);
                fVar32 = (float)((double)fVar32 * __LC143 - __LC137);
              }
              else {
                local_d8 = pfVar1[1];
                iVar19 = *(int *)(lVar3 + 600);
                fVar32 = pfVar1[2];
                local_e0 = pfVar1[3];
                fVar43 = pfVar1[4];
                if (iVar19 == 1) {
                  if (_LC135 <= local_e0) {
                    local_e0 = powf((float)(((double)local_e0 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    local_e0 = local_e0 * _LC136;
                  }
                  if (fVar46 <= fVar32) {
                    fVar32 = powf((float)(((double)fVar32 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar32 = fVar32 * _LC136;
                  }
                  if (fVar46 <= local_d8) {
                    local_d8 = powf((float)(((double)local_d8 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    local_d8 = local_d8 * _LC136;
                  }
                  fVar33 = pfVar2[4];
                  fVar28 = pfVar2[3];
                  fVar44 = pfVar2[1];
                  fVar36 = pfVar2[2];
                  if (fVar46 <= fVar28) {
                    fVar28 = powf((float)(((double)fVar28 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar28 = _LC136 * fVar28;
                  }
                  if (fVar46 <= fVar36) {
                    fVar36 = powf((float)(((double)fVar36 + __LC137) * __LC138),_LC139);
                    uVar23 = CONCAT44(extraout_XMM0_Db_02,fVar36);
                  }
                  else {
                    uVar23 = (ulong)(uint)(fVar36 * _LC136);
                  }
                  auVar49._8_4_ = fVar28;
                  auVar49._0_8_ = local_68;
                  if (fVar46 <= fVar44) {
                    fVar44 = powf((float)(((double)fVar44 + __LC137) * __LC138),_LC139);
                    auVar49._0_8_ = local_68;
                    uVar23 = uVar23 & 0xffffffff;
                    fVar46 = extraout_XMM0_Db_01;
                  }
                  else {
                    fVar44 = fVar44 * _LC136;
                    fVar46 = 0.0;
                  }
                }
                else if (iVar19 == 2) {
                  if (_LC135 <= local_e0) {
                    local_e0 = powf((float)(((double)local_e0 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    local_e0 = local_e0 * _LC136;
                  }
                  if (fVar46 <= fVar32) {
                    fVar32 = powf((float)(((double)fVar32 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar32 = fVar32 * _LC136;
                  }
                  if (fVar46 <= local_d8) {
                    local_d8 = powf((float)(((double)local_d8 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    local_d8 = local_d8 * _LC136;
                  }
                  local_78 = (undefined1  [8])CONCAT44(fVar32,local_d8);
                  local_70 = local_e0;
                  auVar48 = ok_color::linear_srgb_to_oklab();
                  local_e0 = auVar48._8_4_;
                  fVar33 = pfVar2[4];
                  fVar28 = pfVar2[2];
                  fVar44 = pfVar2[3];
                  local_68._4_4_ = auVar48._4_4_;
                  fVar32 = local_68._4_4_;
                  local_68._0_4_ = auVar48._0_4_;
                  local_d8 = (float)local_68;
                  fVar36 = pfVar2[1];
                  local_60 = CONCAT44(local_60._4_4_,local_e0);
                  local_68 = auVar48._0_8_;
                  if (fVar46 <= fVar44) {
                    fVar44 = powf((float)(((double)fVar44 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar44 = fVar44 * _LC136;
                  }
                  if (fVar46 <= fVar28) {
                    fVar28 = powf((float)(((double)fVar28 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar28 = fVar28 * _LC136;
                  }
                  if (fVar46 <= fVar36) {
                    fVar36 = powf((float)(((double)fVar36 + __LC137) * __LC138),_LC139);
                  }
                  else {
                    fVar36 = fVar36 * _LC136;
                  }
                  local_78 = (undefined1  [8])CONCAT44(fVar28,fVar36);
                  local_70 = fVar44;
                  auVar49 = ok_color::linear_srgb_to_oklab((ok_color *)local_78,fVar44);
                  uVar23 = auVar49._0_8_ >> 0x20;
                  local_60 = CONCAT44(local_60._4_4_,auVar49._8_4_);
                  local_68._0_4_ = auVar49._0_4_;
                  fVar46 = 0.0;
                  fVar44 = (float)local_68;
                }
                else {
                  fVar33 = pfVar2[4];
                  fVar46 = 0.0;
                  uVar23 = (ulong)(uint)pfVar2[2];
                  auVar49._8_4_ = pfVar2[3];
                  auVar49._0_8_ = local_68;
                  fVar44 = pfVar2[1];
                }
                fVar28 = _LC140;
                local_68 = auVar49._0_8_;
                fVar44 = (fVar44 - local_d8) * fVar30 + local_d8;
                fVar32 = ((float)uVar23 - fVar32) * fVar30 + fVar32;
                poVar35 = (ok_color *)CONCAT44(fVar32,fVar44);
                auVar37._8_4_ = fVar46 * 0.0 + 0.0;
                auVar37._0_8_ = poVar35;
                auVar37._12_4_ = (float)(uVar23 >> 0x20) * 0.0 + 0.0;
                local_e0 = (auVar49._8_4_ - local_e0) * fVar30 + local_e0;
                local_d8 = (fVar33 - fVar43) * fVar30 + fVar43;
                if (iVar19 == 1) {
                  if (_LC140 <= local_e0) {
                    fVar46 = powf(local_e0,_LC142);
                    auVar37 = ZEXT416((uint)fVar44);
                    local_e0 = (float)((double)fVar46 * __LC143 - __LC137);
                  }
                  else {
                    local_e0 = local_e0 * _LC141;
                  }
                  if (fVar28 <= fVar32) {
                    fVar32 = powf(fVar32,_LC142);
                    auVar37 = ZEXT416(auVar37._0_4_);
                    fVar32 = (float)((double)fVar32 * __LC143 - __LC137);
                  }
                  else {
                    fVar32 = fVar32 * _LC141;
                  }
                  fVar46 = auVar37._0_4_;
                  if (fVar28 <= fVar46) {
LAB_0010ab85:
                    fVar46 = powf(fVar46,_LC142);
                    poVar35 = (ok_color *)(ulong)(uint)(float)((double)fVar46 * __LC143 - __LC137);
                    goto LAB_00108eb2;
                  }
LAB_0010a25f:
                  auVar38._4_12_ = auVar37._4_12_;
                  auVar38._0_4_ = auVar37._0_4_ * _LC141;
                  poVar35 = auVar38._0_8_;
                  goto LAB_00108eb2;
                }
                if (iVar19 != 2) goto LAB_00108eb2;
                local_78 = (undefined1  [8])poVar35;
                local_70 = local_e0;
                auVar48 = ok_color::oklab_to_linear_srgb(poVar35);
                fVar46 = _LC140;
                local_e0 = auVar48._8_4_;
                local_60 = CONCAT44(local_60._4_4_,local_e0);
                local_68._0_4_ = auVar48._0_4_;
                local_ec = (float)local_68;
                local_68._4_4_ = auVar48._4_4_;
                fVar32 = local_68._4_4_;
                local_68 = auVar48._0_8_;
                if (_LC140 <= local_e0) {
                  fVar30 = powf(local_e0,_LC142);
                  local_e0 = (float)((double)fVar30 * __LC143 - __LC137);
                }
                else {
                  local_e0 = _LC141 * local_e0;
                }
                if (fVar46 <= fVar32) goto LAB_00109bbc;
LAB_00109734:
                fVar32 = fVar32 * _LC141;
              }
              if (fVar46 <= local_ec) {
                fVar46 = powf(local_ec,_LC142);
                poVar35 = (ok_color *)(ulong)(uint)(float)((double)fVar46 * __LC143 - __LC137);
              }
              else {
                poVar35 = (ok_color *)(ulong)(uint)(local_ec * _LC141);
              }
            }
            else if ((int)uVar13 < (int)uVar22) {
              uVar26 = uVar13 - 1;
              if (uVar13 != 0) {
                uVar20 = uVar13;
                if (uVar26 < uVar22) goto LAB_00109561;
                uVar16 = (ulong)(int)uVar26;
                _local_78 = auVar48;
                goto LAB_0010913b;
              }
              poVar35 = (ok_color *)(ulong)*(uint *)(lVar14 + 4);
              fVar32 = *(float *)(lVar14 + 8);
              local_e0 = *(float *)(lVar14 + 0xc);
              local_d8 = *(float *)(lVar14 + 0x10);
            }
            else {
LAB_001092bc:
              lVar14 = lVar14 + (ulong)(uVar22 - 1) * 0x14;
              poVar35 = (ok_color *)(ulong)*(uint *)(lVar14 + 4);
              fVar32 = *(float *)(lVar14 + 8);
              local_e0 = *(float *)(lVar14 + 0xc);
              local_d8 = *(float *)(lVar14 + 0x10);
            }
          }
LAB_00108eb2:
          uStack_50 = CONCAT44(local_d8,local_e0);
          local_58 = CONCAT44(fVar32,(int)poVar35);
          iVar27 = iVar21 + 1;
          Image::set_pixel((int)pOVar10,iVar21,(Color *)0x0);
          iVar19 = *(int *)(this + 0x300);
          iVar21 = iVar27;
        } while (iVar27 < iVar19);
      }
      if (*(long *)(this + 0x2f8) == 0) {
        plVar11 = (long *)RenderingServer::get_singleton();
        uVar12 = (**(code **)(*plVar11 + 0x158))(plVar11,&local_88);
        *(undefined8 *)(this + 0x2f8) = uVar12;
      }
      else {
        plVar11 = (long *)RenderingServer::get_singleton();
        uVar12 = (**(code **)(*plVar11 + 0x158))(plVar11,&local_88);
        plVar11 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(this + 0x2f8),uVar12);
      }
      if ((local_88 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) {
        memdelete<Image>((Image *)local_88);
      }
    }
    plVar11 = (long *)RenderingServer::get_singleton();
    pcVar4 = *(code **)(*plVar11 + 0x1e8);
    Resource::get_path();
    (*pcVar4)(plVar11,*(undefined8 *)(this + 0x2f8),(CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00109246:
  uVar23 = 0;
  uVar16 = 0;
LAB_0010913b:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar16,uVar23,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* GradientTexture1D::update_now() const */

void __thiscall GradientTexture1D::update_now(GradientTexture1D *this)

{
  if (this[0x2f0] == (GradientTexture1D)0x0) {
    return;
  }
  _update(this);
  return;
}



/* GradientTexture1D::get_image() const */

void GradientTexture1D::get_image(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  GradientTexture1D *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RSI[0x2f0] == (GradientTexture1D)0x0) {
    lVar2 = *(long *)(in_RSI + 0x2f8);
  }
  else {
    _update(in_RSI);
    lVar2 = *(long *)(in_RSI + 0x2f8);
  }
  if (lVar2 == 0) {
    *in_RDI = 0;
  }
  else {
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x1c0))();
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
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



/* Texture::is_class_ptr(void*) const */

uint __thiscall Texture::is_class_ptr(Texture *this,void *param_1)

{
  return (uint)CONCAT71(0x11c3,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c3,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c3,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c3,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Texture::_getv(StringName const&, Variant&) const */

undefined8 Texture::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Texture::_setv(StringName const&, Variant const&) */

undefined8 Texture::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Texture::_validate_propertyv(PropertyInfo&) const */

void Texture::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Texture::_property_can_revertv(StringName const&) const */

undefined8 Texture::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Texture::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Texture::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Texture::_notificationv(int, bool) */

void Texture::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GradientTexture1D::is_class_ptr(void*) const */

uint GradientTexture1D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x11c3,in_RSI == &Texture2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c3,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c3,in_RSI == &Texture::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c3,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c3,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* GradientTexture1D::_getv(StringName const&, Variant&) const */

undefined8 GradientTexture1D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GradientTexture1D::_setv(StringName const&, Variant const&) */

undefined8 GradientTexture1D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GradientTexture1D::_validate_propertyv(PropertyInfo&) const */

void GradientTexture1D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GradientTexture1D::_property_can_revertv(StringName const&) const */

undefined8 GradientTexture1D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GradientTexture1D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GradientTexture1D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GradientTexture1D::_notificationv(int, bool) */

void GradientTexture1D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GradientTexture1D::get_height() const */

undefined8 GradientTexture1D::get_height(void)

{
  return 1;
}



/* GradientTexture1D::has_alpha() const */

undefined8 GradientTexture1D::has_alpha(void)

{
  return 1;
}



/* GradientTexture2D::is_class_ptr(void*) const */

uint GradientTexture2D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x11c3,in_RSI == &Texture2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c3,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c3,in_RSI == &Texture::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c3,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11c3,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* GradientTexture2D::_getv(StringName const&, Variant&) const */

undefined8 GradientTexture2D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GradientTexture2D::_setv(StringName const&, Variant const&) */

undefined8 GradientTexture2D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GradientTexture2D::_validate_propertyv(PropertyInfo&) const */

void GradientTexture2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GradientTexture2D::_property_can_revertv(StringName const&) const */

undefined8 GradientTexture2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GradientTexture2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GradientTexture2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GradientTexture2D::_notificationv(int, bool) */

void GradientTexture2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GradientTexture2D::has_alpha() const */

undefined8 GradientTexture2D::has_alpha(void)

{
  return 1;
}



/* CallableCustomMethodPointerC<GradientTexture2D, void>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<GradientTexture2D,void>::~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<GradientTexture2D,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<GradientTexture2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientTexture2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientTexture2D,void> *this)

{
  return;
}



/* CallableCustomMethodPointerC<GradientTexture1D, void>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<GradientTexture1D,void>::~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<GradientTexture1D,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<GradientTexture1D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientTexture1D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientTexture1D,void> *this)

{
  return;
}



/* MethodBindTRC<GradientTexture2D::Repeat>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<GradientTexture2D::Repeat>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<GradientTexture2D::Repeat>::get_argument_meta(int) const */

undefined8 MethodBindTRC<GradientTexture2D::Repeat>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<GradientTexture2D::Repeat>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<GradientTexture2D::Repeat>::_gen_argument_type
          (MethodBindT<GradientTexture2D::Repeat> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<GradientTexture2D::Repeat>::get_argument_meta(int) const */

undefined8 MethodBindT<GradientTexture2D::Repeat>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector2>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector2>::_gen_argument_type(int param_1)

{
  return 5;
}



/* MethodBindTRC<Vector2>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector2>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector2>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Vector2>::_gen_argument_type(MethodBindT<Vector2> *this,int param_1)

{
  return -(param_1 == 0) & 5;
}



/* MethodBindT<Vector2>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector2>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<GradientTexture2D::Fill>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<GradientTexture2D::Fill>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<GradientTexture2D::Fill>::get_argument_meta(int) const */

undefined8 MethodBindTRC<GradientTexture2D::Fill>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<GradientTexture2D::Fill>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<GradientTexture2D::Fill>::_gen_argument_type
          (MethodBindT<GradientTexture2D::Fill> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<GradientTexture2D::Fill>::get_argument_meta(int) const */

undefined8 MethodBindT<GradientTexture2D::Fill>::get_argument_meta(int param_1)

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



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Ref<Gradient>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Gradient>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Gradient>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Gradient>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Gradient> >::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<Gradient>>::_gen_argument_type(MethodBindT<Ref<Gradient>> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Gradient> >::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Gradient>>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointerC<GradientTexture2D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<GradientTexture2D,void>::get_argument_count
          (CallableCustomMethodPointerC<GradientTexture2D,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<GradientTexture2D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GradientTexture2D,void>::get_argument_count
          (CallableCustomMethodPointer<GradientTexture2D,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerC<GradientTexture1D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<GradientTexture1D,void>::get_argument_count
          (CallableCustomMethodPointerC<GradientTexture1D,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<GradientTexture1D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GradientTexture1D,void>::get_argument_count
          (CallableCustomMethodPointer<GradientTexture1D,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<GradientTexture1D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientTexture1D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientTexture1D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<GradientTexture1D, void>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<GradientTexture1D,void>::~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<GradientTexture1D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GradientTexture2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientTexture2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientTexture2D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<GradientTexture2D, void>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<GradientTexture2D,void>::~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<GradientTexture2D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011b6d8;
  Resource::~Resource((Resource *)this);
  return;
}



/* Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011b6d8;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x240);
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



/* MethodBindT<Ref<Gradient> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<Gradient>>::~MethodBindT(MethodBindT<Ref<Gradient>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011bf50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Gradient> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<Gradient>>::~MethodBindT(MethodBindT<Ref<Gradient>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011bf50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Gradient>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Gradient>>::~MethodBindTRC(MethodBindTRC<Ref<Gradient>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011bfb0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Gradient>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Gradient>>::~MethodBindTRC(MethodBindTRC<Ref<Gradient>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011bfb0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c010;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c010;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c070;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c070;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c0d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c0d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<GradientTexture2D::Fill>::~MethodBindT() */

void __thiscall
MethodBindT<GradientTexture2D::Fill>::~MethodBindT(MethodBindT<GradientTexture2D::Fill> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c130;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<GradientTexture2D::Fill>::~MethodBindT() */

void __thiscall
MethodBindT<GradientTexture2D::Fill>::~MethodBindT(MethodBindT<GradientTexture2D::Fill> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c130;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<GradientTexture2D::Fill>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GradientTexture2D::Fill>::~MethodBindTRC(MethodBindTRC<GradientTexture2D::Fill> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c190;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<GradientTexture2D::Fill>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GradientTexture2D::Fill>::~MethodBindTRC(MethodBindTRC<GradientTexture2D::Fill> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c190;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector2>::~MethodBindT() */

void __thiscall MethodBindT<Vector2>::~MethodBindT(MethodBindT<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c1f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector2>::~MethodBindT() */

void __thiscall MethodBindT<Vector2>::~MethodBindT(MethodBindT<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c1f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c250;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c250;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<GradientTexture2D::Repeat>::~MethodBindT() */

void __thiscall
MethodBindT<GradientTexture2D::Repeat>::~MethodBindT(MethodBindT<GradientTexture2D::Repeat> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c2b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<GradientTexture2D::Repeat>::~MethodBindT() */

void __thiscall
MethodBindT<GradientTexture2D::Repeat>::~MethodBindT(MethodBindT<GradientTexture2D::Repeat> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c2b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<GradientTexture2D::Repeat>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GradientTexture2D::Repeat>::~MethodBindTRC
          (MethodBindTRC<GradientTexture2D::Repeat> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c310;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<GradientTexture2D::Repeat>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GradientTexture2D::Repeat>::~MethodBindTRC
          (MethodBindTRC<GradientTexture2D::Repeat> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c310;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CallableCustomMethodPointerC<GradientTexture2D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<GradientTexture2D,void>::get_object
          (CallableCustomMethodPointerC<GradientTexture2D,void> *this)

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
      goto LAB_0010d86d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d86d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d86d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<GradientTexture1D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<GradientTexture1D,void>::get_object
          (CallableCustomMethodPointerC<GradientTexture1D,void> *this)

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
      goto LAB_0010d96d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010d96d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010d96d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GradientTexture1D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GradientTexture1D,void>::get_object
          (CallableCustomMethodPointer<GradientTexture1D,void> *this)

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
      goto LAB_0010da6d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010da6d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010da6d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GradientTexture2D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GradientTexture2D,void>::get_object
          (CallableCustomMethodPointer<GradientTexture2D,void> *this)

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
      goto LAB_0010db6d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010db6d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010db6d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* SortArray<Gradient::Point, _DefaultComparator<Gradient::Point>, true>::introsort(long, long,
   Gradient::Point*, long) const [clone .isra.0] */

void SortArray<Gradient::Point,_DefaultComparator<Gradient::Point>,true>::introsort
               (long param_1,long param_2,Point *param_3,long param_4)

{
  Point *pPVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  long lVar11;
  long lVar12;
  Point *pPVar13;
  long lVar14;
  Point *pPVar15;
  long lVar16;
  Point *pPVar17;
  long lVar18;
  Point *pPVar19;
  long lVar20;
  long lVar21;
  long in_FS_OFFSET;
  bool bVar22;
  float fVar23;
  long local_b8;
  float local_78;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  
  lVar14 = param_2 - param_1;
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar14) {
    if (param_4 != 0) {
      lVar21 = param_2;
      local_b8 = param_4;
LAB_0010dcb1:
      local_b8 = local_b8 + -1;
      fVar2 = *(float *)(param_3 + param_1 * 0x14);
      fVar3 = *(float *)(param_3 + ((lVar14 >> 1) + param_1) * 0x14);
      fVar4 = *(float *)(param_3 + lVar21 * 0x14 + -0x14);
      if (fVar3 <= fVar2) {
        fVar23 = fVar2;
        if ((fVar4 <= fVar2) && (fVar23 = fVar4, fVar4 <= fVar3)) {
          fVar23 = fVar3;
        }
      }
      else {
        fVar23 = fVar3;
        if ((fVar4 <= fVar3) && (fVar23 = fVar4, fVar4 <= fVar2)) {
          fVar23 = fVar2;
        }
      }
      lVar14 = lVar21;
      pPVar17 = param_3 + param_1 * 0x14;
      param_2 = param_1;
      do {
        if (*(float *)pPVar17 <= fVar23 && fVar23 != *(float *)pPVar17) {
          if (lVar21 + -1 == param_2) {
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                             "bad comparison function; sorting will be broken",0,0);
            goto LAB_0010dd2c;
          }
        }
        else {
LAB_0010dd2c:
          lVar14 = lVar14 + -1;
          pPVar19 = param_3 + lVar14 * 0x14;
          if (fVar23 < *(float *)pPVar19) {
            pPVar13 = param_3 + lVar14 * 0x14 + -0x14;
            while (param_1 != lVar14) {
              lVar14 = lVar14 + -1;
              pPVar19 = pPVar13;
              if (*(float *)pPVar13 <= fVar23) goto LAB_0010ddac;
              pPVar13 = pPVar13 + -0x14;
            }
            _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                             "bad comparison function; sorting will be broken",0,0);
          }
LAB_0010ddac:
          if (lVar14 <= param_2) goto LAB_0010ddf0;
          uVar7 = *(undefined8 *)(pPVar19 + 8);
          auVar5 = *(undefined1 (*) [16])pPVar17;
          fVar2 = *(float *)(pPVar17 + 0x10);
          *(undefined8 *)pPVar17 = *(undefined8 *)pPVar19;
          *(undefined8 *)(pPVar17 + 8) = uVar7;
          *(float *)(pPVar17 + 0x10) = *(float *)(pPVar19 + 0x10);
          *(float *)(pPVar19 + 0x10) = fVar2;
          *(undefined1 (*) [16])pPVar19 = auVar5;
        }
        pPVar17 = pPVar17 + 0x14;
        param_2 = param_2 + 1;
      } while( true );
    }
LAB_0010e056:
    lVar20 = lVar14 + -2 >> 1;
    lVar21 = lVar20 * 2 + 2;
    pPVar17 = param_3 + (param_1 + lVar20) * 0x14;
    do {
      auVar5 = *(undefined1 (*) [16])pPVar17;
      fVar2 = *(float *)(pPVar17 + 0x10);
      local_78 = (float)*(undefined8 *)pPVar17;
      lVar11 = lVar21;
      lVar18 = lVar20;
      if (lVar21 < lVar14) {
        do {
          pPVar19 = param_3 + (param_1 + lVar11) * 0x14;
          fVar3 = *(float *)(param_3 + (param_1 + lVar11 + -1) * 0x14);
          lVar12 = lVar11 + -1;
          lVar16 = lVar11;
          pPVar13 = param_3 + (param_1 + lVar11 + -1) * 0x14;
          if (fVar3 < *(float *)pPVar19 || fVar3 == *(float *)pPVar19) {
            lVar16 = lVar11 + 1;
            lVar12 = lVar11;
            pPVar13 = pPVar19;
          }
          uVar7 = *(undefined8 *)(pPVar13 + 8);
          lVar11 = lVar16 * 2;
          pPVar19 = param_3 + (lVar18 + param_1) * 0x14;
          *(undefined8 *)pPVar19 = *(undefined8 *)pPVar13;
          *(undefined8 *)(pPVar19 + 8) = uVar7;
          *(float *)(pPVar19 + 0x10) = *(float *)(pPVar13 + 0x10);
          lVar18 = lVar12;
        } while (lVar14 != lVar11 && SBORROW8(lVar14,lVar11) == lVar14 + lVar16 * -2 < 0);
        pPVar19 = pPVar13;
        if (lVar14 == lVar11) {
LAB_0010e1b4:
          lVar12 = lVar11 + -1;
          pPVar13 = param_3 + (param_1 + lVar12) * 0x14;
          uVar7 = *(undefined8 *)(pPVar13 + 8);
          *(undefined8 *)pPVar19 = *(undefined8 *)pPVar13;
          *(undefined8 *)(pPVar19 + 8) = uVar7;
          *(float *)(pPVar19 + 0x10) = *(float *)(pPVar13 + 0x10);
        }
        lVar11 = lVar12 + -1;
        stack0xffffffffffffffac = auVar5._4_12_;
        if (lVar12 <= lVar20) goto LAB_0010e262;
        do {
          lVar18 = lVar11 >> 1;
          pPVar19 = param_3 + (param_1 + lVar18) * 0x14;
          pPVar13 = param_3 + (lVar12 + param_1) * 0x14;
          if (local_78 < *(float *)pPVar19 || local_78 == *(float *)pPVar19) break;
          uVar7 = *(undefined8 *)(pPVar19 + 8);
          *(undefined8 *)pPVar13 = *(undefined8 *)pPVar19;
          *(undefined8 *)(pPVar13 + 8) = uVar7;
          *(float *)(pPVar13 + 0x10) = *(float *)(pPVar19 + 0x10);
          lVar11 = (lVar18 + -1) - (lVar18 + -1 >> 0x3f);
          pPVar13 = pPVar19;
          lVar12 = lVar18;
        } while (lVar20 < lVar18);
        local_58._0_4_ = local_78;
        uStack_50 = auVar5._8_8_;
        *(float *)(pPVar13 + 0x10) = fVar2;
        *(undefined1 (*) [8])pPVar13 = local_58;
        *(undefined8 *)(pPVar13 + 8) = uStack_50;
        if (lVar20 == 0) goto LAB_0010de8a;
      }
      else {
        pPVar19 = pPVar17;
        if (lVar21 == lVar14) goto LAB_0010e1b4;
        stack0xffffffffffffffac = SUB1612(*(undefined1 (*) [16])pPVar17,4);
        pPVar13 = pPVar17;
LAB_0010e262:
        auVar10 = stack0xffffffffffffffac;
        local_58._0_4_ = local_78;
        uStack_50 = auVar10._4_8_;
        *(float *)(pPVar13 + 0x10) = fVar2;
        *(undefined1 (*) [8])pPVar13 = local_58;
        *(undefined8 *)(pPVar13 + 8) = uStack_50;
      }
      lVar20 = lVar20 + -1;
      pPVar17 = pPVar17 + -0x14;
      lVar21 = lVar21 + -2;
    } while( true );
  }
  goto LAB_0010e00c;
LAB_0010ddf0:
  introsort(param_2,lVar21,param_3,local_b8);
  lVar14 = param_2 - param_1;
  if (lVar14 < 0x11) goto LAB_0010e00c;
  lVar21 = param_2;
  if (local_b8 == 0) goto LAB_0010e056;
  goto LAB_0010dcb1;
LAB_0010de8a:
  pPVar17 = param_3 + param_1 * 0x14;
  pPVar19 = param_3 + (param_2 + -1) * 0x14 + -0x14;
  lVar14 = (param_2 + -1) - param_1;
  do {
    uVar7 = *(undefined8 *)(pPVar17 + 8);
    pPVar13 = pPVar19 + 0x14;
    uVar8 = *(undefined8 *)pPVar13;
    auVar9 = *(undefined1 (*) [16])pPVar13;
    auVar5 = *(undefined1 (*) [16])pPVar13;
    fVar2 = *(float *)(pPVar19 + 0x24);
    *(undefined8 *)(pPVar19 + 0x14) = *(undefined8 *)pPVar17;
    *(undefined8 *)(pPVar19 + 0x1c) = uVar7;
    *(float *)(pPVar19 + 0x24) = *(float *)(pPVar17 + 0x10);
    local_78 = (float)uVar8;
    if (lVar14 < 3) {
      pPVar15 = pPVar17;
      if (lVar14 == 2) goto LAB_0010e1ea;
      stack0xffffffffffffffac = auVar9._4_12_;
    }
    else {
      lVar21 = 2;
      lVar20 = 0;
      do {
        pPVar1 = param_3 + (param_1 + lVar21) * 0x14;
        fVar3 = *(float *)(param_3 + (param_1 + lVar21 + -1) * 0x14);
        lVar11 = lVar21 + -1;
        lVar18 = lVar21;
        pPVar15 = param_3 + (param_1 + lVar21 + -1) * 0x14;
        if (fVar3 < *(float *)pPVar1 || fVar3 == *(float *)pPVar1) {
          lVar18 = lVar21 + 1;
          lVar11 = lVar21;
          pPVar15 = pPVar1;
        }
        uVar7 = *(undefined8 *)(pPVar15 + 8);
        lVar21 = lVar18 * 2;
        pPVar1 = param_3 + (lVar20 + param_1) * 0x14;
        *(undefined8 *)pPVar1 = *(undefined8 *)pPVar15;
        *(undefined8 *)(pPVar1 + 8) = uVar7;
        *(float *)(pPVar1 + 0x10) = *(float *)(pPVar15 + 0x10);
        lVar20 = lVar11;
      } while (lVar21 < lVar14);
      if (lVar21 == lVar14) {
LAB_0010e1ea:
        uVar7 = *(undefined8 *)(pPVar19 + 8);
        *(undefined8 *)pPVar15 = *(undefined8 *)pPVar19;
        *(undefined8 *)(pPVar15 + 8) = uVar7;
        *(float *)(pPVar15 + 0x10) = *(float *)(pPVar19 + 0x10);
        lVar11 = lVar14 + -1;
        lVar21 = lVar14 + -2 >> 1;
      }
      else {
        stack0xffffffffffffffac = auVar5._4_12_;
        lVar21 = (lVar11 + -1) / 2;
        if (lVar11 == 0) goto LAB_0010dfdc;
      }
      do {
        _local_58 = *(undefined1 (*) [16])pPVar13;
        pPVar1 = param_3 + (param_1 + lVar21) * 0x14;
        pPVar15 = param_3 + (lVar11 + param_1) * 0x14;
        if (local_78 < *(float *)pPVar1 || local_78 == *(float *)pPVar1) break;
        uVar7 = *(undefined8 *)(pPVar1 + 8);
        *(undefined8 *)pPVar15 = *(undefined8 *)pPVar1;
        *(undefined8 *)(pPVar15 + 8) = uVar7;
        *(float *)(pPVar15 + 0x10) = *(float *)(pPVar1 + 0x10);
        bVar22 = lVar21 != 0;
        lVar11 = lVar21;
        pPVar15 = pPVar1;
        lVar21 = (lVar21 + -1) / 2;
      } while (bVar22);
    }
LAB_0010dfdc:
    auVar10 = stack0xffffffffffffffac;
    pPVar19 = pPVar19 + -0x14;
    local_58._0_4_ = local_78;
    uStack_50 = auVar10._4_8_;
    *(float *)(pPVar15 + 0x10) = fVar2;
    *(undefined1 (*) [8])pPVar15 = local_58;
    *(undefined8 *)(pPVar15 + 8) = uStack_50;
    bVar22 = 1 < lVar14;
    lVar14 = lVar14 + -1;
  } while (bVar22);
LAB_0010e00c:
  if (lVar6 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Texture2D::get_save_class() const */

Texture2D * __thiscall Texture2D::get_save_class(Texture2D *this)

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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = strlen;
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



/* GradientTexture1D::_get_class_namev() const */

undefined8 * GradientTexture1D::_get_class_namev(void)

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
LAB_0010e493:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e493;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GradientTexture1D");
      goto LAB_0010e4fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GradientTexture1D");
LAB_0010e4fe:
  return &_get_class_namev()::_class_name_static;
}



/* Texture::_get_class_namev() const */

undefined8 * Texture::_get_class_namev(void)

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
LAB_0010e573:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e573;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Texture");
      goto LAB_0010e5de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Texture");
LAB_0010e5de:
  return &_get_class_namev()::_class_name_static;
}



/* GradientTexture2D::_get_class_namev() const */

undefined8 * GradientTexture2D::_get_class_namev(void)

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
LAB_0010e663:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e663;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GradientTexture2D");
      goto LAB_0010e6ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GradientTexture2D");
LAB_0010e6ce:
  return &_get_class_namev()::_class_name_static;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GradientTexture1D::_bind_methods() [clone .cold] */

void GradientTexture1D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GradientTexture2D::_bind_methods() [clone .cold] */

void GradientTexture2D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010e7d8(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GradientTexture1D::get_class() const */

void GradientTexture1D::get_class(void)

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



/* GradientTexture2D::get_class() const */

void GradientTexture2D::get_class(void)

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



/* Texture::get_class() const */

void Texture::get_class(void)

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
  local_48 = &_LC0;
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
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
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
      goto joined_r0x0010eb9c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010eb9c:
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



/* MethodBindTRC<Ref<Gradient>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Gradient>>::_gen_argument_type_info(int param_1)

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
  local_48 = "Gradient";
  local_40 = 8;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_0010eca0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_0010eca0:
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
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



/* MethodBindTRC<Vector2>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector2>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 5;
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
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
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
      goto joined_r0x0010eebc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010eebc:
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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010f12f;
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
LAB_0010f12f:
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
    if (cVar6 != '\0') goto LAB_0010f1e3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
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
              if (lVar5 == 0) goto LAB_0010f293;
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
LAB_0010f293:
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
      if (cVar6 != '\0') goto LAB_0010f1e3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010f1e3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Texture::is_class(String const&) const */

undefined8 __thiscall Texture::is_class(Texture *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010f3bf;
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
LAB_0010f3bf:
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
    if (cVar6 != '\0') goto LAB_0010f473;
  }
  cVar6 = String::operator==(param_1,"Texture");
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
              if (lVar5 == 0) goto LAB_0010f533;
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
LAB_0010f533:
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
      if (cVar6 != '\0') goto LAB_0010f473;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010f5dc;
    }
  }
LAB_0010f473:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f5dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientTexture2D::is_class(String const&) const */

undefined8 __thiscall GradientTexture2D::is_class(GradientTexture2D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010f65f;
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
LAB_0010f65f:
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
    if (cVar6 != '\0') goto LAB_0010f713;
  }
  cVar6 = String::operator==(param_1,"GradientTexture2D");
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
              if (lVar5 == 0) goto LAB_0010f7d3;
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
LAB_0010f7d3:
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
      if (cVar6 != '\0') goto LAB_0010f713;
    }
    cVar6 = String::operator==(param_1,"Texture2D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Texture::is_class((Texture *)this,param_1);
        return uVar7;
      }
      goto LAB_0010f87c;
    }
  }
LAB_0010f713:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f87c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientTexture1D::is_class(String const&) const */

undefined8 __thiscall GradientTexture1D::is_class(GradientTexture1D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010f8ff;
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
LAB_0010f8ff:
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
    if (cVar6 != '\0') goto LAB_0010f9b3;
  }
  cVar6 = String::operator==(param_1,"GradientTexture1D");
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
              if (lVar5 == 0) goto LAB_0010fa73;
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
LAB_0010fa73:
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
      if (cVar6 != '\0') goto LAB_0010f9b3;
    }
    cVar6 = String::operator==(param_1,"Texture2D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Texture::is_class((Texture *)this,param_1);
        return uVar7;
      }
      goto LAB_0010fb1c;
    }
  }
LAB_0010f9b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010fb1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
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
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
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
LAB_0010fc98:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010fc98;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010fcb6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010fcb6:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
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
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
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
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
LAB_00110098:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00110098;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001100b5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001100b5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
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
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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



/* Texture::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Texture::_get_property_listv(Texture *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
  local_78 = "Texture";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Texture";
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
  if (local_90 == 0) {
LAB_001104e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001104e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00110505;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00110505:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
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
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Texture",false);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ok_color::linear_srgb_to_oklab(ok_color::RGB) */

undefined8 __thiscall ok_color::linear_srgb_to_oklab(undefined8 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 extraout_XMM0_Qb;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = (float)param_1;
  uStack_24 = (float)((ulong)param_1 >> 0x20);
  fVar1 = cbrtf(_LC28 * local_28 + _LC29 * uStack_24 + param_2 * __LC30);
  fVar5 = fVar1 * (float)_LC31;
  fVar1 = fVar1 * _LC31._4_4_;
  fVar2 = cbrtf(_LC32 * local_28 + _LC33 * uStack_24 + param_2 * __LC34);
  fVar3 = fVar2 * (float)_LC35;
  fVar2 = fVar2 * _LC35._4_4_;
  fVar4 = cbrtf(local_28 * __LC36 + uStack_24 * __LC37 + param_2 * __LC38);
  auVar6._4_4_ = (fVar1 - fVar2) + fVar4 * _LC39._4_4_;
  auVar6._8_4_ = (float)extraout_XMM0_Qb * 0.0 + 0.0;
  auVar6._12_4_ = (float)((ulong)extraout_XMM0_Qb >> 0x20) * 0.0 + 0.0;
  auVar6._0_4_ = (fVar5 + fVar3) - fVar4 * (float)_LC39;
  return auVar6._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ok_color::oklab_to_linear_srgb(ok_color::Lab) */

undefined8 __thiscall ok_color::oklab_to_linear_srgb(undefined8 param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)((ulong)param_1 >> 0x20);
  fVar3 = (float)param_1;
  fVar1 = _LC43 * fVar2 + fVar3 + _LC44 * param_2;
  fVar4 = (fVar3 - _LC45 * fVar2) - _LC46 * param_2;
  fVar1 = fVar1 * fVar1 * fVar1;
  fVar3 = (fVar3 - fVar2 * __LC47) - param_2 * __LC48;
  fVar4 = fVar4 * fVar4 * fVar4;
  fVar3 = fVar3 * fVar3 * fVar3;
  return CONCAT44((fVar1 * _LC49._4_4_ + fVar4 * _LC50._4_4_) - fVar3 * _LC51._4_4_,
                  (fVar1 * (float)_LC49 - fVar4 * (float)_LC50) + fVar3 * (float)_LC51);
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = strlen;
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



/* Texture2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Texture2D::_get_property_listv(Texture2D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
    Texture::_get_property_listv((Texture *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Texture2D";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Texture2D";
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
  if (local_90 == 0) {
LAB_00110c28:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00110c28;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00110c45;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00110c45:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
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
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Texture2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Texture::_get_property_listv((Texture *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientTexture2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
GradientTexture2D::_get_property_listv(GradientTexture2D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
    Texture2D::_get_property_listv((Texture2D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GradientTexture2D";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GradientTexture2D";
  local_98 = 0;
  local_70 = 0x11;
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
LAB_00111078:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00111078;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00111095;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00111095:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
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
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GradientTexture2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Texture2D::_get_property_listv((Texture2D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GradientTexture1D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
GradientTexture1D::_get_property_listv(GradientTexture1D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
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
    Texture2D::_get_property_listv((Texture2D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GradientTexture1D";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GradientTexture1D";
  local_98 = 0;
  local_70 = 0x11;
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
LAB_001114c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001114c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001114e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001114e5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
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
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"GradientTexture1D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Texture2D::_get_property_listv((Texture2D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Texture2D::~Texture2D() */

void __thiscall Texture2D::~Texture2D(Texture2D *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = predelete_handler;
  if (bVar1) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111897;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111897;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111897;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111897;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111897;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00111897;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00111897:
  *(undefined ***)this = &PTR__initialize_classv_0011b6d8;
  Resource::~Resource((Resource *)this);
  return;
}



/* Texture2D::~Texture2D() */

void __thiscall Texture2D::~Texture2D(Texture2D *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = predelete_handler;
  if (bVar1) {
    if (*(long *)(this + 0x2d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001119a7;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001119a7;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001119a7;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001119a7;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001119a7;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001119a7;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_001119a7:
  *(undefined ***)this = &PTR__initialize_classv_0011b6d8;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2e8);
  return;
}



/* Callable create_custom_callable_function_pointer<GradientTexture1D>(GradientTexture1D*, char
   const*, void (GradientTexture1D::*)()) */

GradientTexture1D *
create_custom_callable_function_pointer<GradientTexture1D>
          (GradientTexture1D *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011bd10;
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



/* Callable create_custom_callable_function_pointer<GradientTexture2D>(GradientTexture2D*, char
   const*, void (GradientTexture2D::*)()) */

GradientTexture2D *
create_custom_callable_function_pointer<GradientTexture2D>
          (GradientTexture2D *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011be30;
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x111b8d);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC71;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_00111c6d;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC71;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar7 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
LAB_00111c6d:
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar1;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar5 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<GradientTexture2D::Fill, void>::get_class_info() */

GetTypeInfo<GradientTexture2D::Fill,void> * __thiscall
GetTypeInfo<GradientTexture2D::Fill,void>::get_class_info
          (GetTypeInfo<GradientTexture2D::Fill,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "GradientTexture2D::Fill";
  local_40 = 0x17;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
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
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<GradientTexture2D::Repeat, void>::get_class_info() */

GetTypeInfo<GradientTexture2D::Repeat,void> * __thiscall
GetTypeInfo<GradientTexture2D::Repeat,void>::get_class_info
          (GetTypeInfo<GradientTexture2D::Repeat,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "GradientTexture2D::Repeat";
  local_40 = 0x19;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
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
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GradientTexture2D::Repeat>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<GradientTexture2D::Repeat>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x19;
  local_38 = "GradientTexture2D::Repeat";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
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
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GradientTexture2D::Fill>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<GradientTexture2D::Fill>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x17;
  local_38 = "GradientTexture2D::Fill";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pcVar3 = local_38;
  if (local_38 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = (char *)0x0;
      Memory::free_static(pcVar3 + -0x10,false);
    }
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
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointerC<GradientTexture2D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<GradientTexture2D,void>::call
          (CallableCustomMethodPointerC<GradientTexture2D,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011250f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011250f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001124e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001125d1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011250f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC81,"./core/object/callable_method_pointer.h",0xad,
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
LAB_001125d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GradientTexture2D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GradientTexture2D,void>::call
          (CallableCustomMethodPointer<GradientTexture2D,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011272f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011272f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001127f1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011272f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC81,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001127f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointerC<GradientTexture1D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<GradientTexture1D,void>::call
          (CallableCustomMethodPointerC<GradientTexture1D,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011294f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011294f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00112a11;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011294f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC81,"./core/object/callable_method_pointer.h",0xad,
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
LAB_00112a11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GradientTexture1D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GradientTexture1D,void>::call
          (CallableCustomMethodPointer<GradientTexture1D,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00112b6f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00112b6f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00112c31;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00112b6f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC81,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00112c31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00112c89;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00112d80:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112d80;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00112c89:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* Texture::_initialize_classv() */

void Texture::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
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
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
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
        if ((code *)PTR__bind_methods_00121008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Texture";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00113299;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113390:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113390;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00113299:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<Ref<Gradient> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Gradient>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
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
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00113549;
  local_78 = 0;
  local_68 = "Gradient";
  local_80 = 0;
  local_60._0_8_ = 8;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011371d:
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
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_0011371d;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar6 = local_68._0_4_;
  if (*(long *)(puVar6 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar4 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar4;
  }
  if (*(long *)(puVar6 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar4 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar4;
  }
  lVar5 = local_48;
  puVar6[6] = local_50;
  if (*(long *)(puVar6 + 8) == local_48) {
    puVar6[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    *(long *)(puVar6 + 8) = local_48;
    puVar6[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar4 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar4 + -0x10),false);
    }
  }
LAB_00113549:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBindT<Vector2>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector2>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00113809;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,5);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00113900:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00113900;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_00113809:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<GradientTexture2D::Repeat>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<GradientTexture2D::Repeat>::_gen_argument_type_info(int param_1)

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
    GetTypeInfo<GradientTexture2D::Repeat,void>::get_class_info
              ((GetTypeInfo<GradientTexture2D::Repeat,void> *)local_48);
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



/* MethodBindT<GradientTexture2D::Fill>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<GradientTexture2D::Fill>::_gen_argument_type_info(int param_1)

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
    GetTypeInfo<GradientTexture2D::Fill,void>::get_class_info
              ((GetTypeInfo<GradientTexture2D::Fill,void> *)local_48);
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



/* void LocalVector<Gradient::Point, unsigned int, false,
   false>::sort_custom<_DefaultComparator<Gradient::Point> >() */

void __thiscall
LocalVector<Gradient::Point,unsigned_int,false,false>::
sort_custom<_DefaultComparator<Gradient::Point>>
          (LocalVector<Gradient::Point,unsigned_int,false,false> *this)

{
  Point *__dest;
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  Point *__src;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  Point *pPVar15;
  Point *pPVar16;
  ulong uVar17;
  long lVar18;
  size_t sVar19;
  long in_FS_OFFSET;
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(uint *)this;
  if (uVar3 != 0) {
    __src = *(Point **)(this + 8);
    uVar17 = (ulong)uVar3;
    if (uVar3 == 1) {
      if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
        SortArray<Gradient::Point,_DefaultComparator<Gradient::Point>,true>::introsort(0,1,__src,0);
        return;
      }
      goto LAB_001140c4;
    }
    lVar11 = 0;
    uVar14 = uVar17;
    do {
      uVar14 = (long)uVar14 >> 1;
      lVar11 = lVar11 + 1;
    } while (uVar14 != 1);
    SortArray<Gradient::Point,_DefaultComparator<Gradient::Point>,true>::introsort
              (0,uVar17,__src,lVar11 * 2);
    __dest = __src + 0x14;
    if (uVar17 < 0x11) {
      sVar19 = 0x14;
      uVar14 = 1;
      pPVar15 = __dest;
      do {
        fVar1 = *(float *)pPVar15;
        uVar6 = *(undefined8 *)pPVar15;
        uVar7 = *(undefined8 *)(pPVar15 + 8);
        fVar4 = *(float *)(pPVar15 + 0x10);
        if (fVar1 < *(float *)__src) {
          memmove(__dest,__src,sVar19);
          *(float *)(__src + 0x10) = fVar4;
          *(undefined8 *)__src = uVar6;
          *(undefined8 *)(__src + 8) = uVar7;
        }
        else {
          pPVar16 = pPVar15;
          if (fVar1 < *(float *)(pPVar15 + -0x14)) {
            sVar10 = sVar19;
            uVar9 = uVar14;
            while (uVar9 = uVar9 - 1, uVar9 != 0) {
              uVar8 = *(undefined8 *)(pPVar15 + sVar10 + -sVar19 + -0x14 + 8);
              fVar2 = *(float *)(__src + (sVar10 - 0x28));
              *(undefined8 *)(__src + sVar10) = *(undefined8 *)(pPVar15 + sVar10 + -sVar19 + -0x14);
              *(undefined8 *)(__src + sVar10 + 8) = uVar8;
              *(undefined4 *)(__src + sVar10 + 0x10) =
                   *(undefined4 *)(pPVar15 + sVar10 + -sVar19 + -4);
              if (fVar2 <= fVar1) {
                pPVar16 = __src + uVar9 * 0x14;
                goto LAB_0011404c;
              }
              sVar10 = sVar10 - 0x14;
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pPVar16 = __dest;
          }
LAB_0011404c:
          *(undefined8 *)pPVar16 = uVar6;
          *(undefined8 *)(pPVar16 + 8) = uVar7;
          *(float *)(pPVar16 + 0x10) = fVar4;
        }
        uVar14 = uVar14 + 1;
        sVar19 = sVar19 + 0x14;
        pPVar15 = pPVar15 + 0x14;
      } while (uVar17 != uVar14);
    }
    else {
      pPVar15 = __dest;
      lVar11 = 0;
      sVar19 = 0x14;
      do {
        while( true ) {
          fVar1 = *(float *)pPVar15;
          lVar18 = lVar11 + 1;
          uVar6 = *(undefined8 *)pPVar15;
          uVar7 = *(undefined8 *)(pPVar15 + 8);
          fVar4 = *(float *)(pPVar15 + 0x10);
          if (fVar1 < *(float *)__src) break;
          pPVar16 = pPVar15;
          if (fVar1 < *(float *)(pPVar15 + -0x14)) {
            sVar10 = sVar19;
            while (lVar11 != 0) {
              uVar8 = *(undefined8 *)(pPVar15 + sVar10 + -sVar19 + -0x14 + 8);
              fVar2 = *(float *)(__src + (sVar10 - 0x28));
              *(undefined8 *)(__src + sVar10) = *(undefined8 *)(pPVar15 + sVar10 + -sVar19 + -0x14);
              *(undefined8 *)(__src + sVar10 + 8) = uVar8;
              *(undefined4 *)(__src + sVar10 + 0x10) =
                   *(undefined4 *)(pPVar15 + sVar10 + -sVar19 + -4);
              if (fVar2 <= fVar1) {
                pPVar16 = __src + lVar11 * 0x14;
                goto LAB_00113e70;
              }
              sVar10 = sVar10 - 0x14;
              lVar11 = lVar11 + -1;
            }
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            pPVar16 = __dest;
          }
LAB_00113e70:
          pPVar15 = pPVar15 + 0x14;
          *(float *)(pPVar16 + 0x10) = fVar4;
          *(undefined8 *)pPVar16 = uVar6;
          *(undefined8 *)(pPVar16 + 8) = uVar7;
          lVar11 = lVar18;
          sVar19 = sVar19 + 0x14;
          if (lVar18 == 0xf) goto LAB_00113e92;
        }
        memmove(__dest,__src,sVar19);
        pPVar15 = pPVar15 + 0x14;
        *(float *)(__src + 0x10) = fVar4;
        *(undefined8 *)__src = uVar6;
        *(undefined8 *)(__src + 8) = uVar7;
        lVar11 = lVar18;
        sVar19 = sVar19 + 0x14;
      } while (lVar18 != 0xf);
LAB_00113e92:
      pPVar15 = __src + 0x140;
      lVar11 = -0x140;
      uVar14 = 0x10;
      do {
        fVar4 = *(float *)(pPVar15 + 0x10);
        fVar1 = *(float *)pPVar15;
        uVar6 = *(undefined8 *)pPVar15;
        uVar7 = *(undefined8 *)(pPVar15 + 8);
        lVar13 = -lVar11;
        lVar18 = uVar14 - 1;
        pPVar16 = pPVar15;
        if (fVar1 < *(float *)(pPVar15 + -0x14)) {
          do {
            uVar8 = *(undefined8 *)(pPVar15 + lVar13 + lVar11 + -0x14 + 8);
            fVar2 = *(float *)(__src + lVar13 + -0x28);
            *(undefined8 *)(__src + lVar13) = *(undefined8 *)(pPVar15 + lVar13 + lVar11 + -0x14);
            *(undefined8 *)(__src + lVar13 + 8) = uVar8;
            *(undefined4 *)(__src + lVar13 + 0x10) = *(undefined4 *)(pPVar15 + lVar13 + lVar11 + -4)
            ;
            lVar12 = lVar18 + -1;
            if (fVar2 <= fVar1) {
              pPVar16 = __src + lVar18 * 0x14;
              goto LAB_00113f38;
            }
            lVar13 = lVar13 + -0x14;
            lVar18 = lVar12;
          } while (lVar12 != 0);
          _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                           "bad comparison function; sorting will be broken",0,0);
          pPVar16 = __dest;
        }
LAB_00113f38:
        uVar14 = uVar14 + 1;
        pPVar15 = pPVar15 + 0x14;
        lVar11 = lVar11 + -0x14;
        *(float *)(pPVar16 + 0x10) = fVar4;
        *(undefined8 *)pPVar16 = uVar6;
        *(undefined8 *)(pPVar16 + 8) = uVar7;
      } while (uVar17 != uVar14);
    }
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001140c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<GradientTexture1D, Ref<Gradient> >(void
   (GradientTexture1D::*)(Ref<Gradient>)) */

MethodBind * create_method_bind<GradientTexture1D,Ref<Gradient>>(_func_void_Ref *param_1)

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
  *(_func_void_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011bf50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GradientTexture1D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<GradientTexture1D, Ref<Gradient>>(Ref<Gradient>
   (GradientTexture1D::*)() const) */

MethodBind * create_method_bind<GradientTexture1D,Ref<Gradient>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011bfb0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GradientTexture1D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<GradientTexture1D, int>(void (GradientTexture1D::*)(int)) */

MethodBind * create_method_bind<GradientTexture1D,int>(_func_void_int *param_1)

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
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011c010;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GradientTexture1D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<GradientTexture1D, bool>(void (GradientTexture1D::*)(bool)) */

MethodBind * create_method_bind<GradientTexture1D,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011c070;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GradientTexture1D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<GradientTexture1D, bool>(bool (GradientTexture1D::*)() const) */

MethodBind * create_method_bind<GradientTexture1D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011c0d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GradientTexture1D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* GradientTexture1D::_initialize_classv() */

void GradientTexture1D::_initialize_classv(void)

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
    if (Texture2D::initialize_class()::initialized == '\0') {
      if (Texture::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          if (RefCounted::initialize_class()::initialized == '\0') {
            Object::initialize_class();
            local_68 = 0;
            local_50 = 6;
            local_58 = "Object";
            String::parse_latin1((StrRange *)&local_68);
            StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
            local_58 = "RefCounted";
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
            if ((code *)PTR__bind_methods_00121008 != RefCounted::_bind_methods) {
              RefCounted::_bind_methods();
            }
            RefCounted::initialize_class()::initialized = '\x01';
          }
          local_68 = 0;
          local_58 = "RefCounted";
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Resource";
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
          Resource::_bind_methods();
          Resource::initialize_class()::initialized = '\x01';
        }
        local_58 = "Resource";
        local_68 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Texture";
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
        Texture::initialize_class()::initialized = '\x01';
      }
      local_58 = "Texture";
      local_68 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Texture2D";
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
      if ((code *)PTR__bind_methods_00121010 != Resource::_bind_methods) {
        Texture2D::_bind_methods();
      }
      Texture2D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Texture2D";
    local_68 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GradientTexture1D";
    local_70 = 0;
    local_50 = 0x11;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<GradientTexture2D, Ref<Gradient> >(void
   (GradientTexture2D::*)(Ref<Gradient>)) */

MethodBind * create_method_bind<GradientTexture2D,Ref<Gradient>>(_func_void_Ref *param_1)

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
  *(_func_void_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011bf50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GradientTexture2D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<GradientTexture2D, int>(void (GradientTexture2D::*)(int)) */

MethodBind * create_method_bind<GradientTexture2D,int>(_func_void_int *param_1)

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
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011c010;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GradientTexture2D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<GradientTexture2D, bool>(void (GradientTexture2D::*)(bool)) */

MethodBind * create_method_bind<GradientTexture2D,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011c070;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GradientTexture2D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<GradientTexture2D, GradientTexture2D::Fill>(void
   (GradientTexture2D::*)(GradientTexture2D::Fill)) */

MethodBind * create_method_bind<GradientTexture2D,GradientTexture2D::Fill>(_func_void_Fill *param_1)

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
  *(_func_void_Fill **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011c130;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GradientTexture2D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<GradientTexture2D,
   GradientTexture2D::Fill>(GradientTexture2D::Fill (GradientTexture2D::*)() const) */

MethodBind * create_method_bind<GradientTexture2D,GradientTexture2D::Fill>(_func_Fill *param_1)

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
  *(_func_Fill **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011c190;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GradientTexture2D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<GradientTexture2D, Vector2>(void (GradientTexture2D::*)(Vector2))
    */

MethodBind * create_method_bind<GradientTexture2D,Vector2>(_func_void_Vector2 *param_1)

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
  *(_func_void_Vector2 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011c1f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GradientTexture2D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<GradientTexture2D, Vector2>(Vector2 (GradientTexture2D::*)()
   const) */

MethodBind * create_method_bind<GradientTexture2D,Vector2>(_func_Vector2 *param_1)

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
  *(_func_Vector2 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011c250;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GradientTexture2D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<GradientTexture2D, GradientTexture2D::Repeat>(void
   (GradientTexture2D::*)(GradientTexture2D::Repeat)) */

MethodBind *
create_method_bind<GradientTexture2D,GradientTexture2D::Repeat>(_func_void_Repeat *param_1)

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
  *(_func_void_Repeat **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011c2b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GradientTexture2D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* MethodBind* create_method_bind<GradientTexture2D,
   GradientTexture2D::Repeat>(GradientTexture2D::Repeat (GradientTexture2D::*)() const) */

MethodBind * create_method_bind<GradientTexture2D,GradientTexture2D::Repeat>(_func_Repeat *param_1)

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
  *(_func_Repeat **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011c310;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GradientTexture2D";
  local_30 = 0x11;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
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



/* GradientTexture2D::_initialize_classv() */

void GradientTexture2D::_initialize_classv(void)

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
    if (Texture2D::initialize_class()::initialized == '\0') {
      if (Texture::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          if (RefCounted::initialize_class()::initialized == '\0') {
            Object::initialize_class();
            local_68 = 0;
            local_50 = 6;
            local_58 = "Object";
            String::parse_latin1((StrRange *)&local_68);
            StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
            local_58 = "RefCounted";
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
            if ((code *)PTR__bind_methods_00121008 != RefCounted::_bind_methods) {
              RefCounted::_bind_methods();
            }
            RefCounted::initialize_class()::initialized = '\x01';
          }
          local_68 = 0;
          local_58 = "RefCounted";
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Resource";
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
          Resource::_bind_methods();
          Resource::initialize_class()::initialized = '\x01';
        }
        local_58 = "Resource";
        local_68 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Texture";
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
        Texture::initialize_class()::initialized = '\x01';
      }
      local_58 = "Texture";
      local_68 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Texture2D";
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
      if ((code *)PTR__bind_methods_00121010 != Resource::_bind_methods) {
        Texture2D::_bind_methods();
      }
      Texture2D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Texture2D";
    local_68 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GradientTexture2D";
    local_70 = 0;
    local_50 = 0x11;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

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
    *(code **)param_1 = strlen;
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



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* WARNING: Removing unreachable block (ram,0x00115e48) */
/* WARNING: Removing unreachable block (ram,0x00115fdd) */
/* WARNING: Removing unreachable block (ram,0x00115fe9) */
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



/* MethodBindTRC<GradientTexture2D::Repeat>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<GradientTexture2D::Repeat>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  int iVar3;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar4;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001161e0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      iVar3 = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,iVar3);
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
LAB_001161e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GradientTexture2D::Repeat>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<GradientTexture2D::Repeat>::validated_call
          (MethodBindTRC<GradientTexture2D::Repeat> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      goto LAB_001164b4;
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
LAB_001164b4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GradientTexture2D::Repeat>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<GradientTexture2D::Repeat>::ptrcall
          (MethodBindTRC<GradientTexture2D::Repeat> *this,Object *param_1,void **param_2,
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
      goto LAB_00116673;
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
LAB_00116673:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GradientTexture2D::Repeat>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<GradientTexture2D::Repeat>::validated_call
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
      goto LAB_001169b1;
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
                    /* WARNING: Could not recover jumptable at 0x0011683c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001169b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GradientTexture2D::Repeat>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<GradientTexture2D::Repeat>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00116b91;
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
                    /* WARNING: Could not recover jumptable at 0x00116a1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00116b91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector2>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  Variant *pVVar3;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_68 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar5 = (long *)(local_70 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00116c70;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
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
      local_50 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,(Vector2 *)&local_50);
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
LAB_00116c70:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector2>::validated_call
          (MethodBindTRC<Vector2> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      goto LAB_00116eb4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar3;
LAB_00116eb4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector2>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector2>::ptrcall
          (MethodBindTRC<Vector2> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
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
      goto LAB_00117063;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar3;
LAB_00117063:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector2>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_001173a1;
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
                    /* WARNING: Could not recover jumptable at 0x0011722e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001173a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector2>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00117581;
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
                    /* WARNING: Could not recover jumptable at 0x0011740d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(**param_3,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00117581:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GradientTexture2D::Fill>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<GradientTexture2D::Fill>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char *pcVar2;
  int iVar3;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
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
  Variant *pVVar4;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117650;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      iVar3 = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,iVar3);
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
LAB_00117650:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GradientTexture2D::Fill>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<GradientTexture2D::Fill>::validated_call
          (MethodBindTRC<GradientTexture2D::Fill> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      goto LAB_00117894;
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
LAB_00117894:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<GradientTexture2D::Fill>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<GradientTexture2D::Fill>::ptrcall
          (MethodBindTRC<GradientTexture2D::Fill> *this,Object *param_1,void **param_2,void *param_3
          )

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
      goto LAB_00117a43;
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
LAB_00117a43:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GradientTexture2D::Fill>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<GradientTexture2D::Fill>::validated_call
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
      goto LAB_00117d81;
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
                    /* WARNING: Could not recover jumptable at 0x00117c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00117d81:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<GradientTexture2D::Fill>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<GradientTexture2D::Fill>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00117f61;
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
                    /* WARNING: Could not recover jumptable at 0x00117deb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00117f61:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  bool bVar3;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar4;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118030;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      bVar3 = (bool)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,bVar3);
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
LAB_00118030:
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
      goto LAB_00118272;
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
LAB_00118272:
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
      goto LAB_00118421;
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
LAB_00118421:
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
      goto LAB_00118761;
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
                    /* WARNING: Could not recover jumptable at 0x001185ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00118761:
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
      goto LAB_00118949;
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
                    /* WARNING: Could not recover jumptable at 0x001187d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00118949:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00118b21;
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
                    /* WARNING: Could not recover jumptable at 0x001189ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00118b21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00118d01;
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
                    /* WARNING: Could not recover jumptable at 0x00118b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00118d01:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Gradient>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Gradient>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x116038;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118e20;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00118e20:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Gradient>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Gradient>>::ptrcall
          (MethodBindTRC<Ref<Gradient>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x116038;
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
      goto LAB_001190a6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001190a6;
    *(undefined8 *)param_3 = 0;
    goto LAB_001190e9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_001190e9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_001190e9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001190a6;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_001190a6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Gradient> >::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Gradient>>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x116038;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001193a8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00119366:
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
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Gradient::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00119366;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
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
LAB_001193a8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Gradient> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Gradient>>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
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
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x116038;
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
      goto LAB_0011966c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00119648:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00119648;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0011966c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector2>::call
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
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001199b8;
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
      if (in_R8D != 1) goto LAB_00119a10;
LAB_00119a00:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00119a10:
        uVar6 = 4;
        goto LAB_001199ad;
      }
      if (in_R8D == 1) goto LAB_00119a00;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,5);
    uVar4 = _LC164;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector2(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1));
  }
  else {
    uVar6 = 3;
LAB_001199ad:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001199b8:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<Ref<Gradient> >::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Ref<Gradient>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
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
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x116038;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119d70;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00119d65:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00119d70;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00119dc0;
LAB_00119db0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00119dc0:
      uVar7 = 4;
      goto LAB_00119d65;
    }
    if (in_R8D == 1) goto LAB_00119db0;
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
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC166;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_00119edd:
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
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Gradient::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00119edd;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1));
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00119d70:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Gradient>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Gradient>>::validated_call
          (MethodBindTRC<Ref<Gradient>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x116038;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_0011a086;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0011a086:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, GradientTexture2D::Repeat>(__UnexistingClass*,
   void (__UnexistingClass::*)(GradientTexture2D::Repeat), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,GradientTexture2D::Repeat>
               (__UnexistingClass *param_1,_func_void_Repeat *param_2,Variant **param_3,int param_4,
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
    goto LAB_0011a32d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011a390;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011a390:
      uVar6 = 4;
LAB_0011a32d:
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
      goto LAB_0011a2ab;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011a2ab:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_Repeat **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC167;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011a306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<GradientTexture2D::Repeat>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<GradientTexture2D::Repeat>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011a3f6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,GradientTexture2D::Repeat>
            (p_Var4,(_func_void_Repeat *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011a3f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, GradientTexture2D::Fill>(__UnexistingClass*,
   void (__UnexistingClass::*)(GradientTexture2D::Fill), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,GradientTexture2D::Fill>
               (__UnexistingClass *param_1,_func_void_Fill *param_2,Variant **param_3,int param_4,
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
    goto LAB_0011a6fd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011a760;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011a760:
      uVar6 = 4;
LAB_0011a6fd:
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
      goto LAB_0011a67b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011a67b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_Fill **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC167;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011a6d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<GradientTexture2D::Fill>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<GradientTexture2D::Fill>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011a7c6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,GradientTexture2D::Fill>
            (p_Var4,(_func_void_Fill *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011a7c6:
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
    goto LAB_0011aacd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011ab30;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011ab30:
      uVar6 = 4;
LAB_0011aacd:
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
      goto LAB_0011aa4b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011aa4b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC168;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0011aaa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011ab96;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var4,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011ab96:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
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
    goto LAB_0011ae9d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011af00;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011af00:
      uVar6 = 4;
LAB_0011ae9d:
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
      goto LAB_0011ae1b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011ae1b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC167;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0011ae76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC81,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011af66;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var4,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011af66:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* Texture2D::~Texture2D() */

void __thiscall Texture2D::~Texture2D(Texture2D *this)

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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<GradientTexture2D::Repeat>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GradientTexture2D::Repeat>::~MethodBindTRC
          (MethodBindTRC<GradientTexture2D::Repeat> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<GradientTexture2D::Repeat>::~MethodBindT() */

void __thiscall
MethodBindT<GradientTexture2D::Repeat>::~MethodBindT(MethodBindT<GradientTexture2D::Repeat> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector2>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector2>::~MethodBindT() */

void __thiscall MethodBindT<Vector2>::~MethodBindT(MethodBindT<Vector2> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<GradientTexture2D::Fill>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<GradientTexture2D::Fill>::~MethodBindTRC(MethodBindTRC<GradientTexture2D::Fill> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<GradientTexture2D::Fill>::~MethodBindT() */

void __thiscall
MethodBindT<GradientTexture2D::Fill>::~MethodBindT(MethodBindT<GradientTexture2D::Fill> *this)

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
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Gradient>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Gradient>>::~MethodBindTRC(MethodBindTRC<Ref<Gradient>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Gradient> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<Gradient>>::~MethodBindT(MethodBindT<Ref<Gradient>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Texture::~Texture() */

void __thiscall Texture::~Texture(Texture *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GradientTexture1D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientTexture1D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientTexture1D,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<GradientTexture1D, void>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<GradientTexture1D,void>::~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<GradientTexture1D,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GradientTexture2D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GradientTexture2D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GradientTexture2D,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<GradientTexture2D, void>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<GradientTexture2D,void>::~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<GradientTexture2D,void> *this)

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


