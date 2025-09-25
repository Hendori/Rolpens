/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write() [clone
   .isra.0] */

void __thiscall
CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write
          (CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *this)

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
  __n = lVar2 * 0x20;
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



/* CowData<RID>::_ref(CowData<RID> const&) [clone .part.0] */

void __thiscall CowData<RID>::_ref(CowData<RID> *this,CowData *param_1)

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



/* RendererRD::Luminance::LuminanceBuffers::free_data() */

void __thiscall RendererRD::Luminance::LuminanceBuffers::free_data(LuminanceBuffers *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  lVar5 = *(long *)(this + 0x188);
  do {
    if (lVar5 == 0) {
LAB_001002e0:
      if (*(long *)(this + 400) == 0) {
        return;
      }
      uVar3 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar3,*(undefined8 *)(this + 400));
      *(undefined8 *)(this + 400) = 0;
      return;
    }
    if (*(long *)(lVar5 + -8) <= lVar4) {
      if (*(long *)(lVar5 + -8) != 0) {
        LOCK();
        plVar1 = (long *)(lVar5 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar5 = *(long *)(this + 0x188);
          *(undefined8 *)(this + 0x188) = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
        else {
          *(undefined8 *)(this + 0x188) = 0;
        }
      }
      goto LAB_001002e0;
    }
    uVar3 = RenderingDevice::get_singleton();
    if (*(long *)(this + 0x188) == 0) {
      lVar5 = 0;
LAB_00100282:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar5 = *(long *)(*(long *)(this + 0x188) + -8);
    if (lVar5 <= lVar4) goto LAB_00100282;
    lVar4 = lVar4 + 1;
    RenderingDevice::free(uVar3);
    lVar5 = *(long *)(this + 0x188);
  } while( true );
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<RID>::_copy_on_write(CowData<RID> *this)

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



/* RendererRD::Luminance::~Luminance() */

void __thiscall RendererRD::Luminance::~Luminance(Luminance *this)

{
  if (*this == (Luminance)0x0) {
    ShaderRD::version_free(this + 8,*(undefined8 *)(this + 0x180));
  }
  else {
    ShaderRD::version_free(this + 0x1a0,*(undefined8 *)(this + 0x318));
  }
  PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD *)(this + 0x590));
  PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD *)(this + 0x458));
  PipelineCacheRD::~PipelineCacheRD((PipelineCacheRD *)(this + 800));
  *(undefined ***)(this + 0x1a0) = &PTR__LuminanceReduceRasterShaderRD_00108e78;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 0x1a0));
  *(undefined ***)(this + 8) = &PTR__LuminanceReduceShaderRD_00108e58;
  ShaderRD::~ShaderRD((ShaderRD *)(this + 8));
  return;
}



/* RendererRD::Luminance::LuminanceBuffers::set_prefer_raster_effects(bool) */

void __thiscall
RendererRD::Luminance::LuminanceBuffers::set_prefer_raster_effects
          (LuminanceBuffers *this,bool param_1)

{
  this[0x17c] = (LuminanceBuffers)param_1;
  return;
}



/* RendererRD::Luminance::get_luminance_buffers(Ref<RenderSceneBuffersRD>) */

long * RendererRD::Luminance::get_luminance_buffers
                 (long *param_1,Object *param_2,undefined8 *param_3)

{
  StringName *pSVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  RefCounted *this;
  Object *pOVar7;
  RefCounted *pRVar8;
  Object *pOVar9;
  long in_FS_OFFSET;
  byte bVar10;
  Object *local_48;
  long local_40;
  
  bVar10 = 0;
  pSVar1 = (StringName *)*param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#1}::
                                 operator()()::sname);
    if (iVar5 != 0) {
      _scs_create((char *)&get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#1}::
                           operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#1}::operator()()::
                    sname,&__dso_handle);
      __cxa_guard_release(&get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#1}::
                           operator()()::sname);
    }
  }
  cVar4 = RenderSceneBuffersRD::has_custom_data(pSVar1);
  if (cVar4 == '\0') {
    this = (RefCounted *)operator_new(0x198,"");
    pRVar8 = this;
    for (lVar6 = 0x33; lVar6 != 0; lVar6 = lVar6 + -1) {
      *(undefined8 *)pRVar8 = 0;
      pRVar8 = pRVar8 + (ulong)bVar10 * -0x10 + 8;
    }
    RefCounted::RefCounted(this);
    *(undefined8 *)(this + 0x188) = 0;
    *(undefined ***)this = &PTR__initialize_classv_00108e98;
    *(undefined8 *)(this + 400) = 0;
    postinitialize_handler((Object *)this);
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') {
      DAT_0000017c = 0;
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    cVar4 = RefCounted::reference();
    pOVar9 = (Object *)0x0;
    if (cVar4 != '\0') {
      pOVar9 = (Object *)this;
    }
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler((Object *)this);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)this + 0x140))(this);
        Memory::free_static(this,false);
      }
    }
    uVar2 = *param_3;
    pOVar9[0x17c] = *param_2;
    (**(code **)(*(long *)pOVar9 + 0x150))(pOVar9,uVar2);
    uVar2 = *param_3;
    local_48 = (Object *)0x0;
    pOVar7 = (Object *)
             __dynamic_cast(pOVar9,&Object::typeinfo,&RenderBufferCustomDataRD::typeinfo,0);
    if (pOVar7 != (Object *)0x0) {
      local_48 = pOVar7;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_48 = (Object *)0x0;
      }
    }
    if (get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#3}::operator()()::sname == '\0')
    {
      iVar5 = __cxa_guard_acquire(&get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#3}::
                                   operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#3}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#3}::operator()()::
                      sname,&__dso_handle);
        __cxa_guard_release(&get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#3}::
                             operator()()::sname);
      }
    }
    RenderSceneBuffersRD::set_custom_data
              (uVar2,&get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#3}::operator()()::
                      sname,&local_48);
    if (local_48 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      pOVar7 = local_48;
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_48);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
    }
    *param_1 = (long)pOVar9;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      *param_1 = 0;
    }
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(pOVar9);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
  }
  else {
    if (get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#2}::operator()()::sname == '\0')
    {
      iVar5 = __cxa_guard_acquire(&get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#2}::
                                   operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#2}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#2}::operator()()::
                      sname,&__dso_handle);
        __cxa_guard_release(&get_luminance_buffers(Ref<RenderSceneBuffersRD>)::{lambda()#2}::
                             operator()()::sname);
      }
    }
    RenderSceneBuffersRD::get_custom_data((StringName *)&local_48);
    *param_1 = 0;
    if (local_48 != (Object *)0x0) {
      lVar6 = __dynamic_cast(local_48,&Object::typeinfo,&LuminanceBuffers::typeinfo,0);
      if (lVar6 != 0) {
        *param_1 = lVar6;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *param_1 = 0;
        }
        if (local_48 == (Object *)0x0) goto LAB_0010060e;
      }
      cVar4 = RefCounted::unreference();
      pOVar9 = local_48;
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_48);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
      }
    }
  }
LAB_0010060e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::Luminance::get_current_luminance_buffer(Ref<RenderSceneBuffersRD>) */

undefined8 __thiscall
RendererRD::Luminance::get_current_luminance_buffer(undefined8 param_1,undefined8 *param_2)

{
  StringName *pSVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  pSVar1 = (StringName *)*param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (get_current_luminance_buffer(Ref<RenderSceneBuffersRD>)::{lambda()#1}::operator()()::sname ==
      '\0') {
    iVar4 = __cxa_guard_acquire(&get_current_luminance_buffer(Ref<RenderSceneBuffersRD>)::
                                 {lambda()#1}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&get_current_luminance_buffer(Ref<RenderSceneBuffersRD>)::{lambda()#1}::
                           operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &get_current_luminance_buffer(Ref<RenderSceneBuffersRD>)::{lambda()#1}::
                    operator()()::sname,&__dso_handle);
      __cxa_guard_release(&get_current_luminance_buffer(Ref<RenderSceneBuffersRD>)::{lambda()#1}::
                           operator()()::sname);
    }
  }
  uVar6 = 0;
  cVar3 = RenderSceneBuffersRD::has_custom_data(pSVar1);
  if (cVar3 == '\0') goto LAB_0010099b;
  if (get_current_luminance_buffer(Ref<RenderSceneBuffersRD>)::{lambda()#2}::operator()()::sname ==
      '\0') {
    iVar4 = __cxa_guard_acquire(&get_current_luminance_buffer(Ref<RenderSceneBuffersRD>)::
                                 {lambda()#2}::operator()()::sname);
    if (iVar4 != 0) {
      _scs_create((char *)&get_current_luminance_buffer(Ref<RenderSceneBuffersRD>)::{lambda()#2}::
                           operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &get_current_luminance_buffer(Ref<RenderSceneBuffersRD>)::{lambda()#2}::
                    operator()()::sname,&__dso_handle);
      __cxa_guard_release(&get_current_luminance_buffer(Ref<RenderSceneBuffersRD>)::{lambda()#2}::
                           operator()()::sname);
    }
  }
  RenderSceneBuffersRD::get_custom_data((StringName *)&local_38);
  if (local_38 == (Object *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pOVar5 = (Object *)__dynamic_cast(local_38,&Object::typeinfo,&LuminanceBuffers::typeinfo,0);
  if (pOVar5 == (Object *)0x0) {
LAB_00100a88:
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_38);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_38 + 0x140))(local_38);
        Memory::free_static(local_38,false);
      }
    }
  }
  else {
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    if (local_38 != (Object *)0x0) goto LAB_00100a88;
  }
  uVar6 = *(undefined8 *)(pOVar5 + 400);
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    cVar3 = predelete_handler(pOVar5);
    if (cVar3 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_0010099b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
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



/* Vector<RID>::push_back(RID) [clone .isra.0] */

void __thiscall Vector<RID>::push_back(Vector<RID> *this,undefined8 param_2)

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
  iVar1 = CowData<RID>::resize<false>((CowData<RID> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<RID>::_copy_on_write((CowData<RID> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_2;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::Luminance::LuminanceBuffers::configure(RenderSceneBuffersRD*) */

void __thiscall
RendererRD::Luminance::LuminanceBuffers::configure
          (LuminanceBuffers *this,RenderSceneBuffersRD *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  TextureFormat *pTVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long in_FS_OFFSET;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  long local_68;
  undefined2 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = *(int *)(param_1 + 0x1ac);
  iVar7 = *(int *)(param_1 + 0x1b0);
  while( true ) {
    iVar9 = iVar6 + 7;
    if (-1 < iVar6) {
      iVar9 = iVar6;
    }
    local_8c = 1;
    local_80 = 1;
    local_98 = 99;
    local_68 = 0;
    iVar3 = 1;
    if (0 < iVar9 >> 3) {
      iVar3 = iVar9 >> 3;
    }
    iVar9 = iVar7 + 7;
    if (-1 < iVar7) {
      iVar9 = iVar7;
    }
    iVar8 = 1;
    if (0 < iVar9 >> 3) {
      iVar8 = iVar9 >> 3;
    }
    local_88 = 0x100000001;
    local_60 = 0;
    local_78 = (-(uint)(this[0x17c] == (LuminanceBuffers)0x0) & 5) + 3;
    local_94 = iVar3;
    local_90 = iVar8;
    if (iVar6 < 0x10 && iVar7 < 0x10) break;
    pTVar4 = (TextureFormat *)RenderingDevice::get_singleton();
    local_c0 = 0;
    local_a8 = 6;
    local_b8 = __LC36;
    uStack_b0 = _UNK_00109f38;
    RenderingDevice::texture_create(pTVar4,(TextureView *)&local_98,(Vector *)&local_b8);
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_c0);
    Vector<RID>::push_back((Vector<RID> *)(this + 0x180));
    lVar2 = local_68;
    iVar6 = iVar3;
    iVar7 = iVar8;
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
  }
  local_78 = local_78 | 0x101;
  pTVar4 = (TextureFormat *)RenderingDevice::get_singleton();
  local_c0 = 0;
  local_a8 = 6;
  local_b8 = __LC36;
  uStack_b0 = _UNK_00109f38;
  uVar5 = RenderingDevice::texture_create(pTVar4,(TextureView *)&local_98,(Vector *)&local_b8);
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_c0);
  Vector<RID>::push_back((Vector<RID> *)(this + 0x180),uVar5);
  pTVar4 = (TextureFormat *)RenderingDevice::get_singleton();
  local_c0 = 0;
  local_a8 = 6;
  local_b8 = __LC36;
  uStack_b0 = _UNK_00109f38;
  uVar5 = RenderingDevice::texture_create(pTVar4,(TextureView *)&local_98,(Vector *)&local_b8);
  *(undefined8 *)(this + 400) = uVar5;
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_c0);
  uVar5 = RenderingDevice::get_singleton();
  local_58 = __LC37;
  uStack_54 = _UNK_00109f44;
  uStack_50 = _UNK_00109f48;
  uStack_4c = _LC69;
  RenderingDevice::texture_clear(uVar5,*(undefined8 *)(this + 400),&local_58,0,1,0);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDevice::Uniform>::_copy_on_write(CowData<RenderingDevice::Uniform> *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 0x28 != 0) {
    uVar7 = lVar1 * 0x28 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar1;
    puVar8 = puVar5 + 2;
    if (lVar1 != 0) {
      do {
        puVar6 = (undefined8 *)((long)puVar8 + *(long *)this + (-0x10 - (long)puVar5));
        *puVar8 = *puVar6;
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar6 + 1);
        uVar2 = puVar6[2];
        puVar8[4] = 0;
        lVar3 = puVar6[4];
        puVar8[2] = uVar2;
        if (lVar3 != 0) {
          CowData<RID>::_ref((CowData<RID> *)(puVar8 + 4),(CowData *)(puVar6 + 4));
        }
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + 5;
      } while (lVar1 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RendererRD::Luminance::Luminance(bool) */

void __thiscall RendererRD::Luminance::Luminance(Luminance *this,bool param_1)

{
  ShaderRD *this_00;
  long *plVar1;
  ShaderRD *this_01;
  ulong uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  PipelineCacheRD *this_02;
  long lVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  String local_138 [8];
  undefined8 local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [12];
  undefined8 local_fc;
  undefined4 local_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined2 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  ulong uStack_84;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 auStack_74 [12];
  undefined1 local_68 [4];
  undefined4 local_64;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  this_00 = (ShaderRD *)(this + 8);
  this_01 = (ShaderRD *)(this + 0x1a0);
  this_02 = (PipelineCacheRD *)(this + 800);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ShaderRD::ShaderRD(this_00);
  *(undefined ***)(this + 8) = &PTR__LuminanceReduceShaderRD_00108e58;
  ShaderRD::setup((char *)this_00,(char *)0x0,(char *)0x0,
                  "\n#version 450\n\n#VERSION_DEFINES\n\n#define BLOCK_SIZE 8\n\nlayout(local_size_x = BLOCK_SIZE, local_size_y = BLOCK_SIZE, local_size_z = 1) in;\n\nshared float tmp_data[BLOCK_SIZE * BLOCK_SIZE];\n\n#ifdef READ_TEXTURE\n\n\nlayout(set = 0, binding = 0) uniform sampler2D source_texture;\n\n#else\n\n\nlayout(r32f, set = 0, binding = 0) uniform restrict readonly image2D source_luminance;\n\n#endif\n\nlayout(r32f, set = 1, binding = 0) uniform restrict writeonly image2D dest_luminance;\n\n#ifdef WRITE_LUMINANCE\nlayout(set = 2, binding = 0) uniform sampler2D prev_luminance;\n#endif\n\nlayout(push_constant, std430) uniform Params {\n\tivec2 source_size;\n\tfloat max_luminance;\n\tfloat min_luminance;\n\tfloat exposure_adjust;\n\tfloat pad[3];\n}\nparams;\n\nvoid main() {\n\tuint t = gl_LocalInvocationID.y * BLOCK_SIZE + gl_LocalInvocationID.x;\n\tivec2 pos = ivec2(gl_GlobalInvocationID.xy);\n\n\tif (any(lessThan(pos, params.source_size))) {\n#ifdef READ_TEXTURE\n\t\tvec3 v = texelFetch(source_texture, pos, 0).rgb;\n\t\ttmp_data[t] = max(v.r, max(v.g, v.b));\n#else\n\t\ttmp_data[t] = imageLoad(source_luminance, pos).r;\n#endif\n\t} else {\n\t\ttmp_data[t] = 0.0;\n\t}\n\n\tgroupMemoryBarrier();\n\tbarrier();\n\n\tuint size = (BLOCK_SIZE * BLOCK_SIZE) >> 1;\n\n\tdo {\n\t\tif (t < size) {\n\t\t\ttmp_data[t] += tmp_data[t + size];\n\t\t}\n\t\tgroupMemoryBarrier();\n\t\tbarrier();\n\n\t\tsize >>= 1;\n\t} while (size >= 1);\n\n\tif (t == 0) {\n\t\t\n\t\tivec2 rect_size = min(params.source_size - pos, ivec2(BLOCK_SIZE));\n\t\tfloat avg = tmp_data[0] / float(rect_size.x * rect_size.y);\n\t\t\n\t\tpos /= ivec2(BLOCK_SIZE);\n#ifdef WRITE_LUMINANCE\n\t\tfloat prev_lum = texelFetch(prev_luminance, ivec2(0, 0), 0).r; \n\t\tavg = clamp(prev_lum + (avg - prev_lum) * params.exposure_adjust, params.min_luminance, params.max_luminance);\n#endif\n\t\timageStore(dest_luminance, pos, vec4(avg));\n\t}\n}\n"
                 );
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  ShaderRD::ShaderRD(this_01);
  *(undefined ***)(this + 0x1a0) = &PTR__LuminanceReduceRasterShaderRD_00108e78;
  ShaderRD::setup((char *)this_01,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(push_constant, std430) uniform PushConstant {\n\tivec2 source_size;\n\tivec2 dest_size;\n\n\tfloat exposure_adjust;\n\tfloat min_luminance;\n\tfloat max_luminance;\n\tuint pad1;\n}\nsettings;\n\nlayout(location = 0) out vec2 uv_interp;\n/* clang-format on */\n\nvoid main() {\n\tvec2 base_arr[3] = vec2[](vec2(-1.0, -1.0), vec2(-1.0, 3.0), vec2(3.0, -1.0));\n\tgl_Position = vec4(base_arr[gl_VertexIndex], 0.0, 1.0);\n\tuv_interp = clamp(gl_Position.xy, vec2(0.0, 0.0), vec2(1.0, 1.0)) * 2.0; \n}\n\n/* clang-format off */\n"
                  ,
                  "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(push_constant, std430) uniform PushConstant {\n\tivec2 source_size;\n\tivec2 dest_size;\n\n\tfloat exposure_adjust;\n\tfloat min_luminance;\n\tfloat max_luminance;\n\tuint pad1;\n}\nsettings;\n\nlayout(location = 0) in vec2 uv_interp;\n/* clang-format on */\n\nlayout(set = 0, binding = 0) uniform sampler2D source_exposure;\n\n#ifdef FINAL_PASS\nlayout(set = 1, binding = 0) uniform sampler2D prev_luminance;\n#endif\n\nlayout(location = 0) out highp float luminance;\n\nvoid main() {\n\tivec2 dest_pos = ivec2(uv_interp * settings.dest_size);\n\tivec2 src_pos = ivec2(uv_interp * settings.source_size);\n\n\tivec2 next_pos = (dest_pos + ivec2(1)) * settings.source_size / settings.dest_size;\n\tnext_pos = max(next_pos, src_pos + ivec2(1)); \n\n\thighp vec3 source_color = vec3(0.0);\n\tfor (int i = src_pos.x; i < next_pos.x; i++) {\n\t\tfor (int j = src_pos.y; j < next_pos.y; j++) {\n\t\t\tsource_color += texelFetch(source_exposure, ivec2(i, j), 0).rgb;\n\t\t}\n\t}\n\n\tsource_color /= float((next_pos.x - src_pos.x) * (next_pos.y - src_pos.y));\n\n#ifdef FIRST_PASS\n\tluminance = max(source_color.r, max(source_color.g, source_color.b));\n\n\t\n\t\n\t\n#else\n\tluminance = source_color.r;\n#endif\n\n#ifdef FINAL_PASS\n\t\n\tluminance = clamp(luminance, settings.min_luminance, settings.max_luminance);\n\n\t\n\thighp float prev_lum = texelFetch(prev_luminance, ivec2(0, 0), 0).r; \n\tluminance = prev_lum + (luminance - prev_lum) * clamp(settings.exposure_adjust, 0.0, 1.0);\n#endif\n}\n"
                  ,(char *)0x0);
  *(undefined8 *)(this + 0x318) = 0;
  PipelineCacheRD::PipelineCacheRD(this_02);
  PipelineCacheRD::PipelineCacheRD((PipelineCacheRD *)(this + 0x458));
  PipelineCacheRD::PipelineCacheRD((PipelineCacheRD *)(this + 0x590));
  *this = (Luminance)param_1;
  if (param_1) {
    local_130 = 0;
    local_e8 = 0;
    uStack_e4 = 0;
    local_b8._0_8_ = "\n#define FIRST_PASS\n";
    local_b8._8_8_ = 0x14;
    String::parse_latin1((StrRange *)&local_e8);
    Vector<String>::push_back((Vector<String> *)local_138);
    if (CONCAT44(uStack_e4,local_e8) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_e4,local_e8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar10 = CONCAT44(uStack_e4,local_e8);
        local_e8 = 0;
        uStack_e4 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    local_e8 = 0;
    uStack_e4 = 0;
    local_b8._0_8_ = &_LC44;
    local_b8._8_8_ = 1;
    String::parse_latin1((StrRange *)&local_e8);
    Vector<String>::push_back((Vector<String> *)local_138);
    if (CONCAT44(uStack_e4,local_e8) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_e4,local_e8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar10 = CONCAT44(uStack_e4,local_e8);
        local_e8 = 0;
        uStack_e4 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    local_e8 = 0;
    uStack_e4 = 0;
    local_b8._0_8_ = "\n#define FINAL_PASS\n";
    local_b8._8_8_ = 0x14;
    String::parse_latin1((StrRange *)&local_e8);
    Vector<String>::push_back((Vector<String> *)local_138);
    if (CONCAT44(uStack_e4,local_e8) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_e4,local_e8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar10 = CONCAT44(uStack_e4,local_e8);
        local_e8 = 0;
        uStack_e4 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    uStack_e0 = 0;
    uStack_dc = 0;
    local_118 = 0;
    local_b8 = ZEXT816(0x1044b8);
    String::parse_latin1((StrRange *)&local_118);
    ShaderRD::initialize((Vector *)this_01,local_138,(Vector *)&local_118);
    lVar10 = local_118;
    if (local_118 != 0) {
      LOCK();
      plVar1 = (long *)(local_118 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_118 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    uVar13 = 0;
    CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&uStack_e0);
    uVar6 = ShaderRD::version_create();
    *(undefined8 *)(this + 0x318) = uVar6;
    do {
      local_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_b8._0_8_ = 0;
      local_b8._8_8_ = 0;
      uStack_cc = _LC39;
      local_a8._8_8_ = (ulong)_LC39 << 0x20;
      local_120 = 0;
      local_68[0] = 0;
      local_64 = 0;
      local_58 = 0;
      local_50 = __LC37;
      uStack_48 = _UNK_00109f48;
      local_a8._0_8_ = 0;
      iVar5 = CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>
                        ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                         &local_58,1);
      if (iVar5 == 0) {
        if (local_58 == 0) {
          lVar10 = 0;
          lVar8 = -1;
        }
        else {
          lVar10 = *(long *)(local_58 + -8);
          lVar8 = lVar10 + -1;
          if (-1 < lVar8) {
            CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write
                      ((CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *)
                       &local_58);
            puVar9 = (undefined8 *)(lVar8 * 0x20 + local_58);
            *puVar9 = local_b8._0_8_;
            puVar9[1] = local_b8._8_8_;
            puVar9[2] = local_a8._0_8_;
            puVar9[3] = local_a8._8_8_;
            goto LAB_001016c3;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar10,"p_index","size()","",false,
                   false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_001016c3:
      local_fc = 0x13f800000;
      uVar2 = *(ulong *)(this + 0x318);
      local_88 = 0;
      auStack_74 = SUB1612((undefined1  [16])0x0,4);
      local_118 = 0;
      uStack_110 = 0;
      local_b8 = ZEXT816(0x700000000);
      local_e8 = 0;
      uStack_e4 = uStack_e4 & 0xffffff00;
      uStack_e0 = 0;
      local_c8 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = __LC46;
      local_a8 = auVar4 << 0x40;
      local_98._8_8_ = 0;
      local_98._0_8_ = _UNK_00109f58;
      uStack_84 = __LC46;
      uStack_7c = (undefined4)_UNK_00109f58;
      local_78 = (undefined4)(_UNK_00109f58 >> 0x20);
      uStack_10c = 0;
      auStack_108 = SUB1612((undefined1  [16])0x0,4);
      if (*(long *)(this + 0x1b8) == 0) {
        lVar10 = 0;
LAB_00101d5b:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar13,
                   lVar10,"p_variant","variant_defines.size()","",false,false);
LAB_00101d91:
        uVar6 = 0;
      }
      else {
        lVar10 = *(long *)(*(long *)(this + 0x1b8) + -8);
        if (lVar10 <= (long)uVar13) goto LAB_00101d5b;
        lVar10 = *(long *)(this + 0x1c8);
        uVar7 = uVar13;
        if (lVar10 == 0) goto LAB_00102080;
        lVar8 = *(long *)(lVar10 + -8);
        if (lVar8 <= (long)uVar13) {
LAB_0010209d:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar7,lVar8,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (*(char *)(lVar10 + uVar13) != '\0') {
          if ((uVar2 == 0) || (*(uint *)(this + 0x274) <= (uint)uVar2)) {
LAB_00101f88:
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.",0,0);
            uVar6 = 0;
            goto LAB_00101875;
          }
          lVar10 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(this + 0x270)) * 0xa0 +
                   *(long *)(*(long *)(this + 0x260) +
                            ((uVar2 & 0xffffffff) / (ulong)*(uint *)(this + 0x270)) * 8);
          if (*(int *)(lVar10 + 0x98) != (int)(uVar2 >> 0x20)) {
            if (*(int *)(lVar10 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_00101f88;
          }
          iVar5 = (int)lVar10;
          if (*(char *)(lVar10 + 0x91) != '\0') {
            ShaderRD::_initialize_version((Version *)this_01);
            lVar8 = *(long *)(this + 0x218);
            if (lVar8 != 0) {
              lVar12 = 0;
              do {
                if (*(long *)(lVar8 + -8) <= lVar12) break;
                if (*(char *)(lVar8 + lVar12) == '\0') {
                  ShaderRD::_allocate_placeholders((Version *)this_01,iVar5);
                }
                else {
                  ShaderRD::_compile_version_start((Version *)this_01,iVar5);
                }
                lVar8 = *(long *)(this + 0x218);
                lVar12 = lVar12 + 1;
              } while (lVar8 != 0);
            }
          }
          lVar12 = *(long *)(this + 0x1d8);
          if (lVar12 == 0) {
LAB_00102080:
            lVar8 = 0;
            uVar7 = uVar13;
          }
          else {
            lVar8 = *(long *)(lVar12 + -8);
            if ((long)uVar13 < lVar8) {
              uVar7 = (ulong)*(uint *)(lVar12 + uVar13 * 4);
              lVar12 = *(long *)(lVar10 + 0x68);
              if (lVar12 == 0) {
LAB_00102110:
                lVar8 = 0;
              }
              else {
                lVar8 = *(long *)(lVar12 + -8);
                if ((long)uVar7 < lVar8) {
                  if (*(long *)(lVar12 + uVar7 * 8) != 0) {
                    ShaderRD::_compile_version_end((Version *)this_01,iVar5);
                  }
                  if (*(char *)(lVar10 + 0x90) == '\0') goto LAB_00101d91;
                  lVar10 = *(long *)(lVar10 + 0x88);
                  if (lVar10 == 0) goto LAB_00102080;
                  lVar8 = *(long *)(lVar10 + -8);
                  uVar7 = uVar13;
                  if ((long)uVar13 < lVar8) {
                    uVar6 = *(undefined8 *)(lVar10 + uVar13 * 8);
                    goto LAB_00101875;
                  }
                }
              }
            }
          }
          goto LAB_0010209d;
        }
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        uVar6 = 0;
      }
LAB_00101875:
      PipelineCacheRD::setup
                (this_02,uVar6,5,(StrRange *)&local_118,(StrRange *)&local_e8,local_b8,local_68,0,
                 &local_128);
      if (CONCAT44(uStack_cc,uStack_d0) != 0) {
        LOCK();
        plVar1 = (long *)(CONCAT44(uStack_cc,uStack_d0) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar10 = CONCAT44(uStack_cc,uStack_d0);
          uStack_d0 = 0;
          uStack_cc = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_120;
      if (local_120 != 0) {
        LOCK();
        plVar1 = (long *)(local_120 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_120 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      uVar13 = uVar13 + 1;
      this_02 = this_02 + 0x138;
    } while (uVar13 != 3);
    CowData<String>::_unref((CowData<String> *)&local_130);
  }
  else {
    uStack_110 = 0;
    uStack_10c = 0;
    local_e8 = 0;
    uStack_e4 = 0;
    local_b8._0_8_ = "\n#define READ_TEXTURE\n";
    local_b8._8_8_ = 0x16;
    String::parse_latin1((StrRange *)&local_e8);
    Vector<String>::push_back((Vector<String> *)&local_118);
    if (CONCAT44(uStack_e4,local_e8) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_e4,local_e8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar10 = CONCAT44(uStack_e4,local_e8);
        local_e8 = 0;
        uStack_e4 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    local_e8 = 0;
    uStack_e4 = 0;
    local_b8._0_8_ = &_LC44;
    local_b8._8_8_ = 1;
    String::parse_latin1((StrRange *)&local_e8);
    Vector<String>::push_back((Vector<String> *)&local_118);
    if (CONCAT44(uStack_e4,local_e8) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_e4,local_e8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar10 = CONCAT44(uStack_e4,local_e8);
        local_e8 = 0;
        uStack_e4 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    local_e8 = 0;
    uStack_e4 = 0;
    local_b8._0_8_ = "\n#define WRITE_LUMINANCE\n";
    local_b8._8_8_ = 0x19;
    String::parse_latin1((StrRange *)&local_e8);
    Vector<String>::push_back((Vector<String> *)&local_118);
    if (CONCAT44(uStack_e4,local_e8) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_e4,local_e8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar10 = CONCAT44(uStack_e4,local_e8);
        local_e8 = 0;
        uStack_e4 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    uStack_e0 = 0;
    uStack_dc = 0;
    local_128 = 0;
    local_b8 = ZEXT816(0x1044b8);
    String::parse_latin1((StrRange *)&local_128);
    ShaderRD::initialize((Vector *)this_00,(String *)&local_118,(Vector *)&local_128);
    lVar10 = local_128;
    if (local_128 != 0) {
      LOCK();
      plVar1 = (long *)(local_128 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    uVar13 = 0;
    CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&uStack_e0);
    uVar6 = ShaderRD::version_create();
    *(undefined8 *)(this + 0x180) = uVar6;
    do {
      uVar6 = RenderingDevice::get_singleton();
      uVar2 = *(ulong *)(this + 0x180);
      local_b8._8_8_ = 0;
      if (*(long *)(this + 0x20) == 0) {
        lVar10 = 0;
LAB_00101d14:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,uVar13,
                   lVar10,"p_variant","variant_defines.size()","",false,false);
LAB_00101d4a:
        uVar11 = 0;
      }
      else {
        lVar10 = *(long *)(*(long *)(this + 0x20) + -8);
        if (lVar10 <= (long)uVar13) goto LAB_00101d14;
        lVar10 = *(long *)(this + 0x30);
        uVar7 = uVar13;
        if (lVar10 == 0) goto LAB_001020e8;
        lVar8 = *(long *)(lVar10 + -8);
        if (lVar8 <= (long)uVar13) goto LAB_0010209d;
        if (*(char *)(lVar10 + uVar13) != '\0') {
          if ((uVar2 == 0) || (*(uint *)(this + 0xdc) <= (uint)uVar2)) {
LAB_00101f18:
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa
                             ,"Parameter \"version\" is null.",0,0);
            uVar11 = 0;
            goto LAB_00101c60;
          }
          lVar10 = ((uVar2 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xa0 +
                   *(long *)(*(long *)(this + 200) +
                            ((uVar2 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8);
          if (*(int *)(lVar10 + 0x98) != (int)(uVar2 >> 0x20)) {
            if (*(int *)(lVar10 + 0x98) + 0x80000000U < 0x7fffffff) {
              _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                               "Method/function failed. Returning: nullptr",
                               "Attempting to use an uninitialized RID",0,0);
            }
            goto LAB_00101f18;
          }
          iVar5 = (int)lVar10;
          if (*(char *)(lVar10 + 0x91) != '\0') {
            ShaderRD::_initialize_version((Version *)this_00);
            lVar8 = *(long *)(this + 0x80);
            if (lVar8 != 0) {
              lVar12 = 0;
              do {
                if (*(long *)(lVar8 + -8) <= lVar12) break;
                if (*(char *)(lVar8 + lVar12) == '\0') {
                  ShaderRD::_allocate_placeholders((Version *)this_00,iVar5);
                }
                else {
                  ShaderRD::_compile_version_start((Version *)this_00,iVar5);
                }
                lVar8 = *(long *)(this + 0x80);
                lVar12 = lVar12 + 1;
              } while (lVar8 != 0);
            }
          }
          lVar12 = *(long *)(this + 0x40);
          if (lVar12 == 0) {
LAB_001020e8:
            lVar8 = 0;
            uVar7 = uVar13;
          }
          else {
            lVar8 = *(long *)(lVar12 + -8);
            if ((long)uVar13 < lVar8) {
              uVar7 = (ulong)*(uint *)(lVar12 + uVar13 * 4);
              lVar12 = *(long *)(lVar10 + 0x68);
              if (lVar12 != 0) {
                lVar8 = *(long *)(lVar12 + -8);
                if ((long)uVar7 < lVar8) {
                  if (*(long *)(lVar12 + uVar7 * 8) != 0) {
                    ShaderRD::_compile_version_end((Version *)this_00,iVar5);
                  }
                  if (*(char *)(lVar10 + 0x90) == '\0') goto LAB_00101d4a;
                  lVar10 = *(long *)(lVar10 + 0x88);
                  if (lVar10 == 0) goto LAB_001020e8;
                  lVar8 = *(long *)(lVar10 + -8);
                  uVar7 = uVar13;
                  if ((long)uVar13 < lVar8) {
                    uVar11 = *(undefined8 *)(lVar10 + uVar13 * 8);
                    goto LAB_00101c60;
                  }
                }
                goto LAB_0010209d;
              }
              goto LAB_00102110;
            }
          }
          goto LAB_0010209d;
        }
        _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                         "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,0)
        ;
        uVar11 = 0;
      }
LAB_00101c60:
      uVar6 = RenderingDevice::compute_pipeline_create(uVar6,uVar11,local_b8);
      *(undefined8 *)(this + ((long)(int)uVar13 + 0x30) * 8 + 8) = uVar6;
      uVar6 = local_b8._8_8_;
      if (local_b8._8_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_b8._8_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b8._8_8_ = 0;
          Memory::free_static((void *)(uVar6 + -0x10),false);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != 3);
    PipelineCacheRD::clear();
    PipelineCacheRD::clear();
    PipelineCacheRD::clear();
    CowData<String>::_unref((CowData<String> *)&uStack_110);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RendererRD::Luminance::luminance_reduction(RID, Vector2i,
   Ref<RendererRD::Luminance::LuminanceBuffers>, float, float, float, bool) */

void __thiscall
RendererRD::Luminance::luminance_reduction
          (undefined4 param_1,undefined4 param_2,uint param_3,Luminance *this,undefined8 param_5,
          ulong param_6,long *param_7,byte param_8)

{
  long *plVar1;
  Version *pVVar2;
  Luminance *pLVar3;
  Luminance LVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  uint *puVar8;
  code *pcVar9;
  UniformSetCacheRD *pUVar10;
  undefined1 uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  void *pvVar19;
  undefined8 uVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  bool bVar28;
  undefined8 local_160;
  ulong *local_150;
  uint local_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 local_110;
  ulong local_108;
  undefined1 local_100;
  undefined8 local_f8;
  long local_e8 [2];
  ulong local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  long local_b8 [2];
  ulong local_a8;
  ulong local_a0;
  undefined8 local_98;
  long local_88 [2];
  undefined8 local_78 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  pUVar10 = UniformSetCacheRD::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_110 = param_5;
  if (UniformSetCacheRD::singleton == (UniformSetCacheRD *)0x0) {
    _err_print_error("luminance_reduction","servers/rendering/renderer_rd/effects/luminance.cpp",
                     0xa0,"Parameter \"uniform_set_cache\" is null.",0,0);
    goto LAB_00103608;
  }
  lVar15 = RendererRD::MaterialStorage::get_singleton();
  if (lVar15 == 0) {
    _err_print_error("luminance_reduction","servers/rendering/renderer_rd/effects/luminance.cpp",
                     0xa2,"Parameter \"material_storage\" is null.",0,0);
    goto LAB_00103608;
  }
  uVar5 = *(undefined8 *)(lVar15 + 0x50);
  if (*this == (Luminance)0x0) {
    local_68._12_4_ = param_1;
    local_68._8_4_ = param_2;
    local_58 = ZEXT416(param_3);
    local_68._0_8_ = param_6;
    RenderingDevice::get_singleton();
    pvVar19 = (void *)RenderingDevice::compute_list_begin();
    if ((*(long *)(*param_7 + 0x188) != 0) && (0 < *(long *)(*(long *)(*param_7 + 0x188) + -8))) {
      uVar25 = *(ulong *)(this + 0x180);
      if (*(long *)(this + 0x20) == 0) {
        lVar15 = 0;
LAB_001037b6:
        _err_print_index_error
                  ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,0,lVar15,
                   "p_variant","variant_defines.size()","",false,false);
LAB_001028f9:
        local_160 = 0;
      }
      else {
        lVar15 = *(long *)(*(long *)(this + 0x20) + -8);
        if (lVar15 < 1) goto LAB_001037b6;
        pcVar7 = *(char **)(this + 0x30);
        if (pcVar7 == (char *)0x0) {
LAB_001033f8:
          lVar22 = 0;
LAB_001033fb:
          uVar23 = 0;
          goto LAB_00103420;
        }
        lVar22 = *(long *)(pcVar7 + -8);
        if (lVar22 < 1) goto LAB_001033fb;
        if (*pcVar7 == '\0') {
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7,
                           "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()",0,
                           0);
          goto LAB_001028f9;
        }
        if ((uVar25 == 0) || (*(uint *)(this + 0xdc) <= (uint)uVar25)) {
LAB_00103d19:
          _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xaa,
                           "Parameter \"version\" is null.",0,0);
          goto LAB_001028f9;
        }
        lVar15 = ((uVar25 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xa0 +
                 *(long *)(*(long *)(this + 200) +
                          ((uVar25 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8);
        if (*(int *)(lVar15 + 0x98) != (int)(uVar25 >> 0x20)) {
          if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                             "Method/function failed. Returning: nullptr",
                             "Attempting to use an uninitialized RID",0,0);
          }
          goto LAB_00103d19;
        }
        pVVar2 = (Version *)(this + 8);
        iVar14 = (int)lVar15;
        if (*(char *)(lVar15 + 0x91) != '\0') {
          ShaderRD::_initialize_version(pVVar2);
          lVar22 = *(long *)(this + 0x80);
          if (lVar22 != 0) {
            lVar26 = 0;
            do {
              if (*(long *)(lVar22 + -8) <= lVar26) break;
              if (*(char *)(lVar22 + lVar26) == '\0') {
                ShaderRD::_allocate_placeholders(pVVar2,iVar14);
              }
              else {
                ShaderRD::_compile_version_start(pVVar2,iVar14);
              }
              lVar22 = *(long *)(this + 0x80);
              lVar26 = lVar26 + 1;
            } while (lVar22 != 0);
          }
        }
        puVar8 = *(uint **)(this + 0x40);
        if (puVar8 == (uint *)0x0) goto LAB_001033f8;
        lVar22 = *(long *)(puVar8 + -2);
        if (lVar22 < 1) goto LAB_001033fb;
        uVar23 = (ulong)*puVar8;
        lVar26 = *(long *)(lVar15 + 0x68);
        if (lVar26 == 0) {
LAB_0010354b:
          lVar22 = 0;
          goto LAB_00103420;
        }
        lVar22 = *(long *)(lVar26 + -8);
        if (lVar22 <= (long)uVar23) goto LAB_00103420;
        if (*(long *)(lVar26 + uVar23 * 8) != 0) {
          ShaderRD::_compile_version_end(pVVar2,iVar14);
        }
        if (*(char *)(lVar15 + 0x90) == '\0') goto LAB_001028f9;
        puVar17 = *(undefined8 **)(lVar15 + 0x88);
        if (puVar17 == (undefined8 *)0x0) goto LAB_001033f8;
        lVar22 = puVar17[-1];
        if (lVar22 < 1) goto LAB_001033fb;
        local_160 = *puVar17;
      }
      local_a0 = 0;
      local_78[1] = local_110;
      local_78[0] = uVar5;
      iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_a0,2);
      uVar25 = local_a0;
      if (iVar14 == 0) {
        lVar15 = 0;
        do {
          if (uVar25 == 0) {
            lVar22 = 0;
LAB_001030a0:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar22,"p_index","size()","",
                       false,false);
          }
          else {
            lVar22 = *(long *)(uVar25 + -8);
            if (lVar22 <= lVar15) goto LAB_001030a0;
            CowData<RID>::_copy_on_write((CowData<RID> *)&local_a0);
            *(undefined8 *)(local_a0 + lVar15 * 8) = local_78[lVar15];
            uVar25 = local_a0;
          }
          if (lVar15 != 0) break;
          lVar15 = 1;
        } while( true );
      }
      local_d0 = 0;
      local_c8 = 0;
      local_b8[0] = 0;
      local_d8 = _LC64;
      if (uVar25 != 0) {
        plVar1 = (long *)(uVar25 + -0x10);
        do {
          lVar15 = *plVar1;
          if (lVar15 == 0) goto LAB_00102a0d;
          LOCK();
          lVar22 = *plVar1;
          bVar28 = lVar15 == lVar22;
          if (bVar28) {
            *plVar1 = lVar15 + 1;
            lVar22 = lVar15;
          }
          UNLOCK();
        } while (!bVar28);
        if (lVar22 != -1) {
          local_b8[0] = local_a0;
        }
LAB_00102a0d:
        uVar25 = local_b8[0];
        if (local_a0 != 0) {
          LOCK();
          plVar1 = (long *)(local_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_a0 + -0x10),false);
            uVar25 = local_b8[0];
          }
        }
      }
      uVar11 = local_d0;
      uVar24 = local_d8;
      uVar16 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline
                (uVar16,pvVar19,*(undefined8 *)(this + 0x188));
      uVar16 = RenderingDevice::get_singleton();
      local_a0 = CONCAT71(local_a0._1_7_,uVar11);
      local_98 = local_c8;
      local_88[0] = 0;
      local_a8 = uVar24;
      if (uVar25 == 0) {
        uVar18 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar10,local_160,0,&local_a8);
        RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar19,uVar18,0);
      }
      else {
        CowData<RID>::_ref((CowData<RID> *)local_88,(CowData *)local_b8);
        lVar15 = local_88[0];
        uVar18 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar10,local_160,0,&local_a8);
        RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar19,uVar18,0);
        if (lVar15 != 0) {
          LOCK();
          plVar1 = (long *)(lVar15 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_88[0] + -0x10),false);
          }
          uVar25 = local_b8[0];
          if (local_b8[0] == 0) goto LAB_00102b30;
        }
        LOCK();
        plVar1 = (long *)(uVar25 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_b8[0] + -0x10),false);
        }
      }
LAB_00102b30:
      local_150 = &local_a8;
      uVar25 = 0;
      while (lVar15 = *(long *)(*param_7 + 0x188), uVar23 = uVar25, lVar15 != 0) {
        lVar22 = *(long *)(lVar15 + -8);
        if (lVar22 <= (long)uVar25) goto LAB_00103420;
        uVar16 = *(undefined8 *)(lVar15 + uVar25 * 8);
        uVar18 = RenderingDevice::get_singleton();
        local_a0 = local_a0 & 0xffffffffffffff00;
        uVar24 = uVar25 + 1;
        local_a8 = _LC27;
        local_88[0] = 0;
        local_98 = uVar16;
        uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar10,local_160,1,local_150);
        RenderingDevice::compute_list_bind_uniform_set(uVar18,pvVar19,uVar16,1);
        lVar15 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_set_push_constant(lVar15,pvVar19,(uint)local_68);
        lVar15 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_dispatch_threads
                  (lVar15,(uint)pvVar19,local_68._0_4_,local_68._4_4_);
        iVar14 = local_68._0_4_ + 7;
        if (-1 < (int)local_68._0_4_) {
          iVar14 = local_68._0_4_;
        }
        iVar14 = iVar14 >> 3;
        if (iVar14 < 1) {
          iVar14 = 1;
        }
        iVar13 = local_68._4_4_ + 7;
        if (-1 < (int)local_68._4_4_) {
          iVar13 = local_68._4_4_;
        }
        iVar13 = iVar13 >> 3;
        if (iVar13 < 1) {
          iVar13 = 1;
        }
        local_68._4_4_ = iVar13;
        local_68._0_4_ = iVar14;
        if ((*(long *)(*param_7 + 0x188) == 0) ||
           (*(long *)(*(long *)(*param_7 + 0x188) + -8) <= (long)uVar24)) goto LAB_00103631;
        lVar15 = RenderingDevice::get_singleton();
        RenderingDevice::compute_list_add_barrier(lVar15);
        if ((*(long *)(*param_7 + 0x188) == 0) ||
           (*(long *)(*(long *)(*param_7 + 0x188) + -8) - 1U != uVar24 || param_8 != 0)) {
          uVar27 = *(ulong *)(this + 0x180);
          if (*(long *)(this + 0x20) == 0) {
            lVar15 = 0;
LAB_00103d5f:
            _err_print_index_error
                      ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,1,
                       lVar15,"p_variant","variant_defines.size()","",false,false);
LAB_00103d9b:
            local_160 = 0;
          }
          else {
            lVar15 = *(long *)(*(long *)(this + 0x20) + -8);
            if (lVar15 < 2) goto LAB_00103d5f;
            lVar15 = *(long *)(this + 0x30);
            if (lVar15 == 0) goto LAB_00103cb3;
            lVar22 = *(long *)(lVar15 + -8);
            if (lVar22 < 2) goto LAB_00103cb6;
            if (*(char *)(lVar15 + 1) != '\0') {
              if ((uVar27 == 0) || (*(uint *)(this + 0xdc) <= (uint)uVar27)) {
LAB_00103de7:
                _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                                 0xaa,"Parameter \"version\" is null.",0,0);
                local_160 = 0;
                goto LAB_00102dbc;
              }
              lVar15 = ((uVar27 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xa0 +
                       *(long *)(*(long *)(this + 200) +
                                ((uVar27 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8);
              if (*(int *)(lVar15 + 0x98) != (int)(uVar27 >> 0x20)) {
                if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                   "Method/function failed. Returning: nullptr",
                                   "Attempting to use an uninitialized RID",0,0);
                }
                goto LAB_00103de7;
              }
              pVVar2 = (Version *)(this + 8);
              iVar14 = (int)lVar15;
              if (*(char *)(lVar15 + 0x91) != '\0') {
                ShaderRD::_initialize_version(pVVar2);
                lVar22 = *(long *)(this + 0x80);
                if (lVar22 != 0) {
                  lVar26 = 0;
                  do {
                    if (*(long *)(lVar22 + -8) <= lVar26) break;
                    if (*(char *)(lVar22 + lVar26) == '\0') {
                      ShaderRD::_allocate_placeholders(pVVar2,iVar14);
                    }
                    else {
                      ShaderRD::_compile_version_start(pVVar2,iVar14);
                    }
                    lVar22 = *(long *)(this + 0x80);
                    lVar26 = lVar26 + 1;
                  } while (lVar22 != 0);
                }
              }
              lVar26 = *(long *)(this + 0x40);
              if (lVar26 != 0) {
                lVar22 = *(long *)(lVar26 + -8);
                if (lVar22 < 2) goto LAB_00103cb6;
                uVar23 = (ulong)*(uint *)(lVar26 + 4);
                lVar26 = *(long *)(lVar15 + 0x68);
                if (lVar26 != 0) {
                  lVar22 = *(long *)(lVar26 + -8);
                  if ((long)uVar23 < lVar22) {
                    if (*(long *)(lVar26 + uVar23 * 8) != 0) {
                      ShaderRD::_compile_version_end(pVVar2,iVar14);
                    }
                    if (*(char *)(lVar15 + 0x90) != '\0') {
                      lVar15 = *(long *)(lVar15 + 0x88);
                      if (lVar15 == 0) goto LAB_00103cb3;
                      lVar22 = *(long *)(lVar15 + -8);
                      if (1 < lVar22) {
                        local_160 = *(undefined8 *)(lVar15 + 8);
                        goto LAB_00102dbc;
                      }
                      goto LAB_00103cb6;
                    }
                    goto LAB_00103d9b;
                  }
                  goto LAB_00103420;
                }
                goto LAB_0010354b;
              }
LAB_00103cb3:
              lVar22 = 0;
LAB_00103cb6:
              uVar23 = 1;
              goto LAB_00103420;
            }
            _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa7
                             ,"Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                             ,0,0);
            local_160 = 0;
          }
LAB_00102dbc:
          uVar16 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_bind_compute_pipeline
                    (uVar16,pvVar19,*(undefined8 *)(this + 400));
        }
        else {
          uVar27 = *(ulong *)(this + 0x180);
          if (*(long *)(this + 0x20) == 0) {
            lVar15 = 0;
LAB_001040dd:
            _err_print_index_error
                      ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,2,
                       lVar15,"p_variant","variant_defines.size()","",false,false);
LAB_00103a19:
            local_130 = 0;
          }
          else {
            lVar15 = *(long *)(*(long *)(this + 0x20) + -8);
            if (lVar15 < 3) goto LAB_001040dd;
            lVar15 = *(long *)(this + 0x30);
            if (lVar15 == 0) goto LAB_00103fcc;
            lVar22 = *(long *)(lVar15 + -8);
            if (lVar22 < 3) goto LAB_00103fcf;
            if (*(char *)(lVar15 + 2) == '\0') {
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xa7,
                               "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                               ,0,0);
              goto LAB_00103a19;
            }
            if ((uVar27 == 0) || (*(uint *)(this + 0xdc) <= (uint)uVar27)) {
LAB_001040b0:
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xaa,"Parameter \"version\" is null.",0,0);
              goto LAB_00103a19;
            }
            lVar15 = ((uVar27 & 0xffffffff) % (ulong)*(uint *)(this + 0xd8)) * 0xa0 +
                     *(long *)(*(long *)(this + 200) +
                              ((uVar27 & 0xffffffff) / (ulong)*(uint *)(this + 0xd8)) * 8);
            if (*(int *)(lVar15 + 0x98) != (int)(uVar27 >> 0x20)) {
              if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_001040b0;
            }
            pVVar2 = (Version *)(this + 8);
            iVar14 = (int)lVar15;
            if (*(char *)(lVar15 + 0x91) != '\0') {
              ShaderRD::_initialize_version(pVVar2);
              lVar22 = *(long *)(this + 0x80);
              if (lVar22 != 0) {
                lVar26 = 0;
                do {
                  if (*(long *)(lVar22 + -8) <= lVar26) break;
                  if (*(char *)(lVar22 + lVar26) == '\0') {
                    ShaderRD::_allocate_placeholders(pVVar2,iVar14);
                  }
                  else {
                    ShaderRD::_compile_version_start(pVVar2,iVar14);
                  }
                  lVar22 = *(long *)(this + 0x80);
                  lVar26 = lVar26 + 1;
                } while (lVar22 != 0);
              }
            }
            lVar26 = *(long *)(this + 0x40);
            if (lVar26 == 0) {
LAB_00103fcc:
              lVar22 = 0;
LAB_00103fcf:
              uVar23 = 2;
              goto LAB_00103420;
            }
            lVar22 = *(long *)(lVar26 + -8);
            if (lVar22 < 3) goto LAB_00103fcf;
            uVar23 = (ulong)*(uint *)(lVar26 + 8);
            lVar26 = *(long *)(lVar15 + 0x68);
            if (lVar26 == 0) goto LAB_0010354b;
            lVar22 = *(long *)(lVar26 + -8);
            if (lVar22 <= (long)uVar23) goto LAB_00103420;
            if (*(long *)(lVar26 + uVar23 * 8) != 0) {
              ShaderRD::_compile_version_end(pVVar2,iVar14);
            }
            if (*(char *)(lVar15 + 0x90) == '\0') goto LAB_00103a19;
            lVar15 = *(long *)(lVar15 + 0x88);
            if (lVar15 == 0) goto LAB_00103fcc;
            lVar22 = *(long *)(lVar15 + -8);
            if (lVar22 < 3) goto LAB_00103fcf;
            local_130 = *(undefined8 *)(lVar15 + 0x10);
          }
          local_160 = local_130;
          local_78[1] = *(undefined8 *)(*param_7 + 400);
          local_a0 = 0;
          local_78[0] = uVar5;
          iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_a0,2);
          uVar27 = local_a0;
          if (iVar14 == 0) {
            lVar15 = 0;
            do {
              if (uVar27 == 0) {
                lVar22 = 0;
LAB_00103f02:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar22,"p_index","size()",
                           "",false,false);
              }
              else {
                lVar22 = *(long *)(uVar27 + -8);
                if (lVar22 <= lVar15) goto LAB_00103f02;
                CowData<RID>::_copy_on_write((CowData<RID> *)&local_a0);
                *(undefined8 *)(local_a0 + lVar15 * 8) = local_78[lVar15];
                uVar27 = local_a0;
              }
              if (lVar15 != 0) break;
              lVar15 = 1;
            } while( true );
          }
          local_d0 = 0;
          local_c8 = 0;
          local_b8[0] = 0;
          local_d8 = _LC64;
          if (uVar27 != 0) {
            plVar1 = (long *)(uVar27 + -0x10);
            do {
              lVar15 = *plVar1;
              if (lVar15 == 0) goto LAB_00103b2a;
              LOCK();
              lVar22 = *plVar1;
              bVar28 = lVar15 == lVar22;
              if (bVar28) {
                *plVar1 = lVar15 + 1;
                lVar22 = lVar15;
              }
              UNLOCK();
            } while (!bVar28);
            if (lVar22 != -1) {
              local_b8[0] = local_a0;
            }
LAB_00103b2a:
            uVar27 = local_b8[0];
            if (local_a0 != 0) {
              LOCK();
              plVar1 = (long *)(local_a0 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_a0 + -0x10),false);
                uVar27 = local_b8[0];
              }
            }
          }
          uVar11 = local_d0;
          uVar6 = local_d8;
          uVar16 = RenderingDevice::get_singleton();
          RenderingDevice::compute_list_bind_compute_pipeline
                    (uVar16,pvVar19,*(undefined8 *)(this + 0x198));
          uVar16 = RenderingDevice::get_singleton();
          local_88[0] = 0;
          local_a0 = CONCAT71(local_a0._1_7_,uVar11);
          local_98 = local_c8;
          local_a8 = uVar6;
          if (uVar27 == 0) {
            uVar18 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar10,local_130,2,local_150);
            RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar19,uVar18,2);
          }
          else {
            CowData<RID>::_ref((CowData<RID> *)local_88,(CowData *)local_b8);
            lVar15 = local_88[0];
            uVar18 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar10,local_130,2,local_150);
            RenderingDevice::compute_list_bind_uniform_set(uVar16,pvVar19,uVar18,2);
            if (lVar15 != 0) {
              LOCK();
              plVar1 = (long *)(lVar15 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_88[0] + -0x10),false);
              }
              uVar27 = local_b8[0];
              if (local_b8[0] == 0) goto LAB_00102dd8;
            }
            LOCK();
            plVar1 = (long *)(uVar27 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_b8[0] + -0x10),false);
            }
          }
        }
LAB_00102dd8:
        lVar15 = *(long *)(*param_7 + 0x188);
        if (lVar15 == 0) {
          lVar22 = 0;
          uVar23 = uVar25;
          goto LAB_00103420;
        }
        lVar22 = *(long *)(lVar15 + -8);
        uVar23 = uVar25;
        if (lVar22 <= (long)uVar25) goto LAB_00103420;
        uVar16 = *(undefined8 *)(lVar15 + -8 + uVar24 * 8);
        uVar18 = RenderingDevice::get_singleton();
        local_a8 = _LC27;
        local_a0 = local_a0 & 0xffffffffffffff00;
        local_88[0] = 0;
        local_98 = uVar16;
        uVar16 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                           (pUVar10,local_160,0,local_150);
        RenderingDevice::compute_list_bind_uniform_set(uVar18,pvVar19,uVar16,0);
        uVar25 = uVar24;
      }
      lVar22 = 0;
LAB_00103420:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar23,lVar22,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
LAB_00103631:
    RenderingDevice::get_singleton();
    RenderingDevice::compute_list_end();
    lVar15 = *param_7;
    lVar22 = *(long *)(lVar15 + 0x188);
LAB_0010364d:
    if (lVar22 != 0) {
      lVar22 = *(long *)(lVar22 + -8);
      lVar26 = lVar22 + -1;
      if (-1 < lVar26) {
        CowData<RID>::_copy_on_write((CowData<RID> *)(lVar15 + 0x188));
        puVar17 = (undefined8 *)(*(long *)(lVar15 + 0x188) + lVar26 * 8);
        uVar5 = *(undefined8 *)(*param_7 + 400);
        *(undefined8 *)(*param_7 + 400) = *puVar17;
        *puVar17 = uVar5;
LAB_00103608:
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      goto LAB_00104061;
    }
  }
  else {
    lVar15 = *param_7;
    local_68 = (undefined1  [16])0x0;
    local_58._4_4_ = param_1;
    local_58._0_4_ = param_3;
    local_58._8_4_ = param_2;
    local_58._12_4_ = 0;
    if (*(long *)(lVar15 + 0x188) != 0) {
      if (0 < *(long *)(*(long *)(lVar15 + 0x188) + -8)) {
        uVar25 = 0;
        iVar14 = 0;
        local_130._0_1_ = param_8 ^ 1;
        pVVar2 = (Version *)(this + 0x1a0);
        local_68._12_4_ = (undefined4)(param_6 >> 0x20);
        param_6 = param_6 & 0xffffffff;
        do {
          local_68._0_4_ = (undefined4)param_6;
          iVar13 = local_68._0_4_ + 7;
          if (-1 < (int)local_68._0_4_) {
            iVar13 = local_68._0_4_;
          }
          local_68._4_4_ = local_68._12_4_;
          local_68._8_4_ = 1;
          if (0 < iVar13 >> 3) {
            local_68._8_4_ = iVar13 >> 3;
          }
          iVar13 = local_68._12_4_ + 7;
          if (-1 < (int)local_68._12_4_) {
            iVar13 = local_68._12_4_;
          }
          iVar13 = iVar13 >> 3;
          if (iVar13 < 1) {
            iVar13 = 1;
          }
          bVar28 = (int)local_68._12_4_ < 0x10;
          local_68._12_4_ = iVar13;
          bVar12 = (bVar28 && (int)local_68._0_4_ < 0x10) & (byte)local_130;
          if (bVar12 == 0) {
            local_138 = (uint)(iVar14 != 0);
            uVar24 = (ulong)local_138;
            uVar27 = (ulong)(iVar14 != 0);
          }
          else {
            local_138 = 2;
            uVar27 = 2;
            uVar24 = 2;
          }
          uVar6 = *(ulong *)(this + 0x318);
          if (*(long *)(this + 0x1b8) == 0) {
            lVar15 = 0;
LAB_00103571:
            _err_print_index_error
                      ("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",0xa6,
                       uVar27,lVar15,"p_variant","variant_defines.size()","",false,false);
LAB_0010249a:
            local_120 = 0;
          }
          else {
            lVar15 = *(long *)(*(long *)(this + 0x1b8) + -8);
            if (lVar15 <= (long)uVar27) goto LAB_00103571;
            lVar15 = *(long *)(this + 0x1c8);
            uVar23 = uVar27;
            if (lVar15 == 0) goto LAB_001034fa;
            lVar22 = *(long *)(lVar15 + -8);
            if (lVar22 <= (long)uVar27) goto LAB_00103420;
            if (*(char *)(lVar15 + uVar24) == '\0') {
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xa7,
                               "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()"
                               ,0,0);
              goto LAB_0010249a;
            }
            if ((uVar6 == 0) || (*(uint *)(this + 0x274) <= (uint)uVar6)) {
LAB_0010377f:
              _err_print_error("version_get_shader","./servers/rendering/renderer_rd/shader_rd.h",
                               0xaa,"Parameter \"version\" is null.",0,0);
              goto LAB_0010249a;
            }
            lVar15 = ((uVar6 & 0xffffffff) % (ulong)*(uint *)(this + 0x270)) * 0xa0 +
                     *(long *)(*(long *)(this + 0x260) +
                              ((uVar6 & 0xffffffff) / (ulong)*(uint *)(this + 0x270)) * 8);
            if (*(int *)(lVar15 + 0x98) != (int)(uVar6 >> 0x20)) {
              if (*(int *)(lVar15 + 0x98) + 0x80000000U < 0x7fffffff) {
                _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                                 "Method/function failed. Returning: nullptr",
                                 "Attempting to use an uninitialized RID",0,0);
              }
              goto LAB_0010377f;
            }
            iVar13 = (int)lVar15;
            if (*(char *)(lVar15 + 0x91) != '\0') {
              ShaderRD::_initialize_version(pVVar2);
              lVar22 = *(long *)(this + 0x218);
              if (lVar22 != 0) {
                lVar26 = 0;
                do {
                  if (*(long *)(lVar22 + -8) <= lVar26) break;
                  if (*(char *)(lVar22 + lVar26) == '\0') {
                    ShaderRD::_allocate_placeholders(pVVar2,iVar13);
                  }
                  else {
                    ShaderRD::_compile_version_start(pVVar2,iVar13);
                  }
                  lVar22 = *(long *)(this + 0x218);
                  lVar26 = lVar26 + 1;
                } while (lVar22 != 0);
              }
            }
            lVar26 = *(long *)(this + 0x1d8);
            if (lVar26 == 0) {
LAB_001034fa:
              lVar22 = 0;
              uVar23 = uVar27;
              goto LAB_00103420;
            }
            lVar22 = *(long *)(lVar26 + -8);
            if (lVar22 <= (long)uVar27) goto LAB_00103420;
            uVar23 = (ulong)*(uint *)(lVar26 + uVar24 * 4);
            lVar26 = *(long *)(lVar15 + 0x68);
            if (lVar26 == 0) {
              lVar22 = 0;
              goto LAB_00103420;
            }
            lVar22 = *(long *)(lVar26 + -8);
            if (lVar22 <= (long)uVar23) goto LAB_00103420;
            if (*(long *)(lVar26 + uVar23 * 8) != 0) {
              ShaderRD::_compile_version_end(pVVar2,iVar13);
            }
            if (*(char *)(lVar15 + 0x90) == '\0') goto LAB_0010249a;
            lVar15 = *(long *)(lVar15 + 0x88);
            if (lVar15 == 0) goto LAB_001034fa;
            lVar22 = *(long *)(lVar15 + -8);
            uVar23 = uVar27;
            if (lVar22 <= (long)uVar27) goto LAB_00103420;
            local_120 = *(undefined8 *)(lVar15 + uVar24 * 8);
          }
          lVar15 = *(long *)(*param_7 + 0x188);
          uVar23 = uVar25;
          if (lVar15 == 0) {
            lVar22 = 0;
            goto LAB_00103420;
          }
          lVar22 = *(long *)(lVar15 + -8);
          if (lVar22 <= (long)uVar25) goto LAB_00103420;
          uVar16 = FramebufferCacheRD::get_cache<RID>
                             (FramebufferCacheRD::singleton,*(undefined8 *)(lVar15 + uVar25 * 8));
          local_78[0] = uVar5;
          if (iVar14 == 0) {
            puVar17 = &local_110;
          }
          else {
            uVar23 = uVar25 - 1;
            lVar15 = *(long *)(*param_7 + 0x188);
            if (lVar15 == 0) goto LAB_0010354b;
            lVar22 = *(long *)(lVar15 + -8);
            if (lVar22 <= (long)uVar23) goto LAB_00103420;
            puVar17 = (undefined8 *)(lVar15 + -8 + uVar25 * 8);
          }
          local_78[1] = *puVar17;
          local_a0 = 0;
          iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_a0,2);
          uVar24 = local_a0;
          if (iVar14 == 0) {
            lVar15 = 0;
            do {
              if (uVar24 == 0) {
                lVar22 = 0;
LAB_00103054:
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar22,"p_index","size()",
                           "",false,false);
              }
              else {
                lVar22 = *(long *)(uVar24 + -8);
                if (lVar22 <= lVar15) goto LAB_00103054;
                CowData<RID>::_copy_on_write((CowData<RID> *)&local_a0);
                *(undefined8 *)(local_a0 + lVar15 * 8) = local_78[lVar15];
                uVar24 = local_a0;
              }
              if (lVar15 != 0) break;
              lVar15 = 1;
            } while( true );
          }
          plVar1 = (long *)(uVar24 + -0x10);
          local_100 = 0;
          local_f8 = 0;
          local_e8[0] = 0;
          local_108 = _LC64;
          if (uVar24 != 0) {
            do {
              lVar15 = *plVar1;
              if (lVar15 == 0) goto LAB_00102610;
              LOCK();
              lVar22 = *plVar1;
              bVar28 = lVar15 == lVar22;
              if (bVar28) {
                *plVar1 = lVar15 + 1;
                lVar22 = lVar15;
              }
              UNLOCK();
            } while (!bVar28);
            if (lVar22 != -1) {
              local_e8[0] = local_a0;
            }
LAB_00102610:
            if (local_a0 != 0) {
              LOCK();
              plVar1 = (long *)(local_a0 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_a0 + -0x10),false);
              }
            }
          }
          uVar18 = RenderingDevice::get_singleton();
          local_78[0] = 0;
          local_78[1] = 0;
          local_a0 = 0;
          pvVar19 = (void *)RenderingDevice::draw_list_begin(uVar18,uVar16,0,&local_a8,0,local_78,0)
          ;
          uVar24 = local_a0;
          if (local_a0 != 0) {
            LOCK();
            plVar1 = (long *)(local_a0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_a0 = 0;
              Memory::free_static((void *)(uVar24 + -0x10),false);
            }
          }
          uVar18 = RenderingDevice::get_singleton();
          lVar22 = (long)(int)local_138;
          pLVar3 = this + lVar22 * 0x138 + 800;
          uVar20 = RenderingDevice::get_singleton();
          lVar15 = RenderingDevice::framebuffer_get_format(uVar20,uVar16);
          if (*(long *)(pLVar3 + 0x40) == 0) {
            _err_print_error("get_render_pipeline",
                             "./servers/rendering/renderer_rd/pipeline_cache_rd.h",0x49,
                             "Condition \"shader.is_null()\" is true. Returning: RID()",
                             "Attempted to use an unused shader variant (shader is null),",0,0);
            lVar15 = 0;
          }
          else {
            while( true ) {
              uVar24 = local_a8 >> 8;
              local_a8 = uVar24 << 8;
              LOCK();
              LVar4 = *pLVar3;
              if (LVar4 == (Luminance)0x0) {
                *pLVar3 = (Luminance)0x1;
              }
              UNLOCK();
              if (LVar4 == (Luminance)0x0) break;
              local_a8 = uVar24 << 8;
              do {
              } while (*pLVar3 != (Luminance)0x0);
            }
            if (*(uint *)(this + lVar22 * 0x138 + 0x450) != 0) {
              plVar21 = *(long **)(this + lVar22 * 0x138 + 0x448);
              plVar1 = plVar21 + (ulong)*(uint *)(this + lVar22 * 0x138 + 0x450) * 5;
              do {
                if ((((*plVar21 == -1) && (lVar15 == plVar21[1])) &&
                    (this[lVar22 * 0x138 + 0x36e] == *(Luminance *)((long)plVar21 + 0x14))) &&
                   (((int)plVar21[2] == 0 && ((int)plVar21[3] == 0)))) {
                  lVar15 = plVar21[4];
                  *pLVar3 = (Luminance)0x0;
                  goto LAB_00102e9d;
                }
                plVar21 = plVar21 + 5;
              } while (plVar1 != plVar21);
            }
            lVar15 = PipelineCacheRD::_generate_version
                               ((long)pLVar3,-1,SUB81(lVar15,0),
                                (uint)(byte)this[lVar22 * 0x138 + 0x36e],0);
            *pLVar3 = (Luminance)0x0;
          }
LAB_00102e9d:
          RenderingDevice::draw_list_bind_render_pipeline(uVar18,pvVar19,lVar15);
          uVar16 = RenderingDevice::get_singleton();
          local_88[0] = 0;
          local_a8 = local_108;
          local_a0 = CONCAT71(local_a0._1_7_,local_100);
          local_98 = local_f8;
          if (local_e8[0] == 0) {
            uVar18 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar10,local_120,0,&local_a8);
            RenderingDevice::draw_list_bind_uniform_set(uVar16,pvVar19,uVar18,0);
          }
          else {
            CowData<RID>::_ref((CowData<RID> *)local_88,(CowData *)local_e8);
            lVar15 = local_88[0];
            uVar18 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                               (pUVar10,local_120,0,&local_a8);
            RenderingDevice::draw_list_bind_uniform_set(uVar16,pvVar19,uVar18,0);
            if (lVar15 != 0) {
              LOCK();
              plVar1 = (long *)(lVar15 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_88[0] + -0x10),false);
              }
            }
          }
          if (bVar12 != 0) {
            lVar15 = 0;
            local_78[1] = *(undefined8 *)(*param_7 + 400);
            local_a0 = 0;
            local_78[0] = uVar5;
            iVar14 = CowData<RID>::resize<false>((CowData<RID> *)&local_a0,2);
            uVar24 = local_a0;
            if (iVar14 == 0) {
              do {
                if (uVar24 == 0) {
                  lVar22 = 0;
LAB_001036cc:
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar15,lVar22,"p_index",
                             "size()","",false,false);
                }
                else {
                  lVar22 = *(long *)(uVar24 + -8);
                  if (lVar22 <= lVar15) goto LAB_001036cc;
                  CowData<RID>::_copy_on_write((CowData<RID> *)&local_a0);
                  *(undefined8 *)(local_a0 + lVar15 * 8) = local_78[lVar15];
                  uVar24 = local_a0;
                }
                if (lVar15 != 0) break;
                lVar15 = 1;
              } while( true );
            }
            local_d0 = 0;
            local_c8 = 0;
            local_b8[0] = 0;
            local_d8 = _LC64;
            if (uVar24 != 0) {
              plVar1 = (long *)(uVar24 + -0x10);
              do {
                lVar15 = *plVar1;
                if (lVar15 == 0) goto LAB_00103225;
                LOCK();
                lVar22 = *plVar1;
                bVar28 = lVar15 == lVar22;
                if (bVar28) {
                  *plVar1 = lVar15 + 1;
                  lVar22 = lVar15;
                }
                UNLOCK();
              } while (!bVar28);
              if (lVar22 != -1) {
                local_b8[0] = local_a0;
              }
LAB_00103225:
              if (local_a0 != 0) {
                LOCK();
                plVar1 = (long *)(local_a0 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_a0 + -0x10),false);
                }
              }
            }
            lVar15 = local_b8[0];
            uVar11 = local_d0;
            uVar24 = local_d8;
            uVar16 = RenderingDevice::get_singleton();
            local_a0 = CONCAT71(local_a0._1_7_,uVar11);
            local_88[0] = 0;
            local_98 = local_c8;
            local_a8 = uVar24;
            if (lVar15 == 0) {
              uVar18 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar10,local_120,1,&local_a8);
              RenderingDevice::draw_list_bind_uniform_set(uVar16,pvVar19,uVar18,1);
            }
            else {
              CowData<RID>::_ref((CowData<RID> *)local_88,(CowData *)local_b8);
              lVar22 = local_88[0];
              uVar18 = UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
                                 (pUVar10,local_120,1,&local_a8);
              RenderingDevice::draw_list_bind_uniform_set(uVar16,pvVar19,uVar18,1);
              if (lVar22 != 0) {
                LOCK();
                plVar1 = (long *)(lVar22 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  Memory::free_static((void *)(local_88[0] + -0x10),false);
                }
                lVar15 = local_b8[0];
                if (local_b8[0] == 0) goto LAB_00102f73;
              }
              LOCK();
              plVar1 = (long *)(lVar15 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                Memory::free_static((void *)(local_b8[0] + -0x10),false);
              }
            }
          }
LAB_00102f73:
          lVar15 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_set_push_constant(lVar15,pvVar19,(uint)local_68);
          lVar15 = RenderingDevice::get_singleton();
          RenderingDevice::draw_list_draw(lVar15,SUB81(pvVar19,0),0,1);
          RenderingDevice::get_singleton();
          RenderingDevice::draw_list_end();
          if (local_e8[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_e8[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_e8[0] + -0x10),false);
            }
          }
          uVar25 = uVar25 + 1;
          lVar15 = *param_7;
          if (*(long *)(lVar15 + 0x188) == 0) goto LAB_0010405a;
          if (*(long *)(*(long *)(lVar15 + 0x188) + -8) <= (long)uVar25) break;
          param_6 = (ulong)(uint)local_68._8_4_;
          iVar14 = (int)uVar25;
        } while( true );
      }
      lVar22 = *(long *)(lVar15 + 0x188);
      goto LAB_0010364d;
    }
  }
LAB_0010405a:
  lVar22 = 0;
  lVar26 = -1;
LAB_00104061:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar26,lVar22,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x109f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x109e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* RendererRD::Luminance::LuminanceBuffers::is_class_ptr(void*) const */

uint __thiscall
RendererRD::Luminance::LuminanceBuffers::is_class_ptr(LuminanceBuffers *this,void *param_1)

{
  return (uint)CONCAT71(0x1090,(undefined4 *)param_1 ==
                               &RenderBufferCustomDataRD::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x109e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x109f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RendererRD::Luminance::LuminanceBuffers::_getv(StringName const&, Variant&) const */

undefined8 RendererRD::Luminance::LuminanceBuffers::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RendererRD::Luminance::LuminanceBuffers::_setv(StringName const&, Variant const&) */

undefined8 RendererRD::Luminance::LuminanceBuffers::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RendererRD::Luminance::LuminanceBuffers::_validate_propertyv(PropertyInfo&) const */

void RendererRD::Luminance::LuminanceBuffers::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RendererRD::Luminance::LuminanceBuffers::_property_can_revertv(StringName const&) const */

undefined8 RendererRD::Luminance::LuminanceBuffers::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RendererRD::Luminance::LuminanceBuffers::_property_get_revertv(StringName const&, Variant&) const
    */

undefined8
RendererRD::Luminance::LuminanceBuffers::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RendererRD::Luminance::LuminanceBuffers::_notificationv(int, bool) */

void RendererRD::Luminance::LuminanceBuffers::_notificationv(int param_1,bool param_2)

{
  return;
}



/* LuminanceReduceShaderRD::~LuminanceReduceShaderRD() */

void __thiscall LuminanceReduceShaderRD::~LuminanceReduceShaderRD(LuminanceReduceShaderRD *this)

{
  *(undefined ***)this = &PTR__LuminanceReduceShaderRD_00108e58;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* LuminanceReduceShaderRD::~LuminanceReduceShaderRD() */

void __thiscall LuminanceReduceShaderRD::~LuminanceReduceShaderRD(LuminanceReduceShaderRD *this)

{
  *(undefined ***)this = &PTR__LuminanceReduceShaderRD_00108e58;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* LuminanceReduceRasterShaderRD::~LuminanceReduceRasterShaderRD() */

void __thiscall
LuminanceReduceRasterShaderRD::~LuminanceReduceRasterShaderRD(LuminanceReduceRasterShaderRD *this)

{
  *(undefined ***)this = &PTR__LuminanceReduceRasterShaderRD_00108e78;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  return;
}



/* LuminanceReduceRasterShaderRD::~LuminanceReduceRasterShaderRD() */

void __thiscall
LuminanceReduceRasterShaderRD::~LuminanceReduceRasterShaderRD(LuminanceReduceRasterShaderRD *this)

{
  *(undefined ***)this = &PTR__LuminanceReduceRasterShaderRD_00108e78;
  ShaderRD::~ShaderRD((ShaderRD *)this);
  operator_delete(this,0x178);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00108cf8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00108cf8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write() [clone
   .isra.0] [clone .cold] */

void CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RID>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::Luminance::get_luminance_buffers(Ref<RenderSceneBuffersRD>) [clone .cold] */

void RendererRD::Luminance::get_luminance_buffers(void)

{
  code *pcVar1;
  
  DAT_0000017c = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::Luminance::get_current_luminance_buffer(Ref<RenderSceneBuffersRD>) [clone .cold] */

void RendererRD::Luminance::get_current_luminance_buffer(void)

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



/* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RenderingDevice::Uniform>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RendererRD::Luminance::LuminanceBuffers::_get_class_namev() const */

undefined8 * RendererRD::Luminance::LuminanceBuffers::_get_class_namev(void)

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
LAB_001046c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001046c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"LuminanceBuffers");
      goto LAB_0010472e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"LuminanceBuffers");
LAB_0010472e:
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
LAB_001047a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001047a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010480e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010480e:
  return &_get_class_namev()::_class_name_static;
}



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* RendererRD::Luminance::LuminanceBuffers::~LuminanceBuffers() */

void __thiscall RendererRD::Luminance::LuminanceBuffers::~LuminanceBuffers(LuminanceBuffers *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00108e98;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00108cf8;
  Object::~Object((Object *)this);
  return;
}



/* RendererRD::Luminance::LuminanceBuffers::~LuminanceBuffers() */

void __thiscall RendererRD::Luminance::LuminanceBuffers::~LuminanceBuffers(LuminanceBuffers *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00108e98;
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00108cf8;
  Object::~Object((Object *)this);
  operator_delete(this,0x198);
  return;
}



/* RendererRD::Luminance::LuminanceBuffers::get_class() const */

void RendererRD::Luminance::LuminanceBuffers::get_class(void)

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
            if (lVar5 == 0) goto LAB_00104bbf;
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
LAB_00104bbf:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00104c73;
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
              if (lVar5 == 0) goto LAB_00104d23;
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
LAB_00104d23:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00104c73;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==((String *)param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00104c73:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererRD::Luminance::LuminanceBuffers::is_class(String const&) const */

undefined8 __thiscall
RendererRD::Luminance::LuminanceBuffers::is_class(LuminanceBuffers *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00104e5f;
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
LAB_00104e5f:
    cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00104f13;
  }
  cVar6 = String::operator==((String *)param_1,"LuminanceBuffers");
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
              if (lVar5 == 0) goto LAB_00104fd3;
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
LAB_00104fd3:
      cVar6 = String::operator==((String *)param_1,(StrRange *)&local_60);
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
      if (cVar6 != '\0') goto LAB_00104f13;
    }
    cVar6 = String::operator==((String *)param_1,"RenderBufferCustomDataRD");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010507c;
    }
  }
LAB_00104f13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010507c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
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
LAB_00105398:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105398;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001053b6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001053b6:
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



/* RendererRD::Luminance::LuminanceBuffers::_initialize_classv() */

void RendererRD::Luminance::LuminanceBuffers::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_0010587a;
  if (RenderBufferCustomDataRD::initialize_class()::initialized == '\0') {
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
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RenderBufferCustomDataRD";
    local_60 = 0;
    local_40 = 0x18;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
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
        RenderBufferCustomDataRD::initialize_class()::initialized = '\x01';
        goto LAB_0010577b;
      }
    }
    RenderBufferCustomDataRD::initialize_class()::initialized = '\x01';
  }
LAB_0010577b:
  local_48 = "RenderBufferCustomDataRD";
  local_58 = 0;
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "LuminanceBuffers";
  local_60 = 0;
  local_40 = 0x10;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
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
  initialize_class()::initialized = '\x01';
LAB_0010587a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RenderBufferCustomDataRD::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
RenderBufferCustomDataRD::_get_property_listv
          (RenderBufferCustomDataRD *this,List *param_1,bool param_2)

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
  local_78 = "RenderBufferCustomDataRD";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RenderBufferCustomDataRD";
  local_98 = 0;
  local_70 = 0x18;
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
LAB_00105ba8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105ba8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105bc5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105bc5:
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
  StringName::StringName((StringName *)&local_78,"RenderBufferCustomDataRD",false);
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



/* RendererRD::Luminance::LuminanceBuffers::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
RendererRD::Luminance::LuminanceBuffers::_get_property_listv
          (LuminanceBuffers *this,List *param_1,bool param_2)

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
    RenderBufferCustomDataRD::_get_property_listv((RenderBufferCustomDataRD *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "LuminanceBuffers";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "LuminanceBuffers";
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
LAB_00105ff8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105ff8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106015;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106015:
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
  StringName::StringName((StringName *)&local_78,"LuminanceBuffers",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RenderBufferCustomDataRD::_get_property_listv((RenderBufferCustomDataRD *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FramebufferCacheRD::_allocate_from_data(unsigned int, unsigned int, unsigned int, Vector<RID>
   const&, Vector<RenderingDevice::FramebufferPass> const&) */

long __thiscall
FramebufferCacheRD::_allocate_from_data
          (FramebufferCacheRD *this,uint param_1,uint param_2,uint param_3,Vector *param_4,
          Vector *param_5)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  Vector *pVVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint local_48;
  
  if ((*(long *)(param_5 + 8) == 0) || (*(long *)(*(long *)(param_5 + 8) + -8) == 0)) {
    pVVar9 = (Vector *)RenderingDevice::get_singleton();
    lVar10 = RenderingDevice::framebuffer_create(pVVar9,(long)param_4,0xffffffff);
  }
  else {
    pVVar9 = (Vector *)RenderingDevice::get_singleton();
    lVar10 = RenderingDevice::framebuffer_create_multipass(pVVar9,param_4,(long)param_5,0xffffffff);
  }
  if (lVar10 == 0) {
    _err_print_error("_allocate_from_data",
                     "servers/rendering/renderer_rd/effects/../framebuffer_cache_rd.h",0xab,
                     "Condition \"rid.is_null()\" is true. Returning: rid",0,0);
    return 0;
  }
  iVar8 = *(int *)(this + 0x18c);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x188);
    uVar6 = uVar7 + 1;
    *(uint *)(this + 0x188) = uVar6;
    uVar14 = Memory::realloc_static(*(void **)(this + 0x178),(ulong)uVar6 * 8,false);
    *(undefined8 *)(this + 0x178) = uVar14;
    uVar14 = Memory::realloc_static
                       (*(void **)(this + 0x180),(ulong)*(uint *)(this + 0x188) << 3,false);
    lVar20 = *(long *)(this + 0x178);
    *(undefined8 *)(this + 0x180) = uVar14;
    lVar11 = (ulong)uVar7 * 8;
    uVar14 = Memory::alloc_static((ulong)*(uint *)(this + 0x198) * 0x48,false);
    uVar6 = *(uint *)(this + 0x198);
    *(undefined8 *)(lVar20 + lVar11) = uVar14;
    lVar20 = *(long *)(this + 0x180);
    uVar14 = Memory::alloc_static((ulong)uVar6 << 3,false);
    *(undefined8 *)(lVar20 + lVar11) = uVar14;
    uVar6 = *(uint *)(this + 0x198);
    if (uVar6 == 0) {
      plVar18 = *(long **)(this + 0x180);
    }
    else {
      plVar18 = *(long **)(this + 0x180);
      lVar20 = *(long *)(this + 0x178);
      plVar3 = (long *)*plVar18;
      lVar15 = 0;
      plVar16 = plVar3;
      do {
        plVar17 = plVar16 + 1;
        lVar13 = *(long *)(lVar20 + lVar11) + lVar15;
        lVar15 = lVar15 + 0x48;
        *plVar16 = lVar13;
        plVar16 = plVar17;
      } while (plVar3 + uVar6 != plVar17);
    }
    iVar8 = uVar6 + *(int *)(this + 0x18c);
  }
  else {
    plVar18 = *(long **)(this + 0x180);
  }
  uVar6 = iVar8 - 1;
  *(uint *)(this + 0x18c) = uVar6;
  pauVar1 = *(undefined1 (**) [16])
             (plVar18[uVar6 >> ((byte)*(undefined4 *)(this + 400) & 0x1f)] +
             (ulong)(uVar6 & *(uint *)(this + 0x194)) * 8);
  pauVar1[1] = (undefined1  [16])0x0;
  *(long *)(pauVar1[1] + 8) = lVar10;
  lVar11 = *(long *)(param_4 + 8);
  *(undefined8 *)pauVar1[4] = 0;
  *(uint *)pauVar1[1] = param_2;
  *(uint *)pauVar1[4] = param_1;
  *pauVar1 = (undefined1  [16])0x0;
  pauVar1[2] = (undefined1  [16])0x0;
  pauVar1[3] = (undefined1  [16])0x0;
  if (lVar11 == 0) {
LAB_00106688:
    lVar11 = *(long *)(param_5 + 8);
    if ((lVar11 == 0) || (local_48 = (uint)*(undefined8 *)(lVar11 + -8), local_48 == 0)) {
LAB_00106870:
      *(undefined8 *)*pauVar1 = 0;
      puVar2 = *(undefined8 **)(this + (ulong)param_3 * 8 + 0x1e0);
      *(undefined8 **)(*pauVar1 + 8) = puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = pauVar1;
      }
      *(undefined1 (**) [16])(this + (ulong)param_3 * 8 + 0x1e0) = pauVar1;
      uVar14 = RenderingDevice::get_singleton();
      RenderingDevice::framebuffer_set_invalidation_callback
                (uVar14,lVar10,FramebufferCacheRD::_framebuffer_invalidation_callback,pauVar1);
      *(int *)(this + 0x201c8) = *(int *)(this + 0x201c8) + 1;
      return lVar10;
    }
    uVar6 = 0;
LAB_001066ad:
    uVar7 = local_48 - 1;
    if (*(uint *)(pauVar1[3] + 4) < local_48) {
      pvVar4 = *(void **)(pauVar1[3] + 8);
      uVar6 = uVar7 >> 1 | uVar7;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
      *(uint *)(pauVar1[3] + 4) = uVar6;
      lVar11 = Memory::realloc_static(pvVar4,(ulong)uVar6 * 0x48,false);
      *(long *)(pauVar1[3] + 8) = lVar11;
      if (lVar11 == 0) {
LAB_00106a71:
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar6 = *(uint *)pauVar1[3];
      lVar11 = *(long *)(param_5 + 8);
      if (uVar6 < local_48) goto LAB_001066bb;
    }
    else {
LAB_001066bb:
      uVar14 = _LC20;
      lVar20 = *(long *)(pauVar1[3] + 8);
      lVar15 = lVar20 + (ulong)uVar6 * 0x48;
      do {
        *(undefined8 *)(lVar15 + 8) = 0;
        lVar13 = lVar15 + 0x48;
        *(undefined8 *)(lVar15 + 0x18) = 0;
        *(undefined8 *)(lVar15 + 0x28) = 0;
        *(undefined8 *)(lVar15 + 0x38) = 0;
        *(undefined8 *)(lVar15 + 0x40) = uVar14;
        lVar15 = lVar13;
      } while (lVar20 + 0x48 + ((ulong)uVar6 + (ulong)(uVar7 - uVar6)) * 0x48 != lVar13);
    }
    *(uint *)pauVar1[3] = local_48;
  }
  else {
    uVar21 = *(ulong *)(lVar11 + -8);
    uVar6 = (uint)uVar21;
    if (uVar6 == 0) goto LAB_00106688;
    uVar19 = uVar6 - 1;
    uVar7 = uVar19 >> 1 | uVar19;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
    *(uint *)(pauVar1[2] + 4) = uVar7;
    lVar11 = Memory::realloc_static((void *)0x0,(ulong)uVar7 * 8,false);
    *(long *)(pauVar1[2] + 8) = lVar11;
    if (lVar11 == 0) goto LAB_00106a71;
    uVar7 = *(uint *)pauVar1[2];
    if (uVar7 < uVar6) {
      memset((void *)(lVar11 + (ulong)uVar7 * 8),0,(ulong)(uVar19 - uVar7) * 8 + 8);
    }
    lVar20 = *(long *)(param_4 + 8);
    *(uint *)pauVar1[2] = uVar6;
    if (lVar20 == 0) {
      uVar12 = 0;
      lVar15 = 0;
      goto LAB_001067ee;
    }
    uVar12 = 0;
    do {
      lVar15 = *(long *)(lVar20 + -8);
      if (lVar15 <= (long)uVar12) goto LAB_001067ee;
      *(undefined8 *)(lVar11 + uVar12 * 8) = *(undefined8 *)(lVar20 + uVar12 * 8);
      uVar12 = uVar12 + 1;
    } while (uVar12 != (uVar21 & 0xffffffff));
    uVar6 = *(uint *)pauVar1[3];
    lVar11 = *(long *)(param_5 + 8);
    if (lVar11 != 0) {
      local_48 = (uint)*(undefined8 *)(lVar11 + -8);
      if (local_48 < uVar6) goto LAB_0010658e;
      if (local_48 <= uVar6) goto LAB_0010666d;
      goto LAB_001066ad;
    }
    if (uVar6 == 0) goto LAB_00106870;
    local_48 = 0;
LAB_0010658e:
    uVar21 = (ulong)local_48;
    lVar11 = uVar21 * 0x48;
    do {
      lVar20 = *(long *)(pauVar1[3] + 8) + lVar11;
      if (*(long *)(lVar20 + 0x38) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 0x38) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 0x38);
          *(undefined8 *)(lVar20 + 0x38) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (*(long *)(lVar20 + 0x28) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 0x28) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 0x28);
          *(undefined8 *)(lVar20 + 0x28) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (*(long *)(lVar20 + 0x18) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 0x18) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 0x18);
          *(undefined8 *)(lVar20 + 0x18) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      if (*(long *)(lVar20 + 8) != 0) {
        LOCK();
        plVar18 = (long *)(*(long *)(lVar20 + 8) + -0x10);
        *plVar18 = *plVar18 + -1;
        UNLOCK();
        if (*plVar18 == 0) {
          lVar15 = *(long *)(lVar20 + 8);
          *(undefined8 *)(lVar20 + 8) = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      uVar6 = (int)uVar21 + 1;
      uVar21 = (ulong)uVar6;
      lVar11 = lVar11 + 0x48;
    } while (uVar6 < *(uint *)pauVar1[3]);
    *(uint *)pauVar1[3] = local_48;
    uVar6 = local_48;
LAB_0010666d:
    if (uVar6 == 0) goto LAB_00106870;
    lVar11 = *(long *)(param_5 + 8);
  }
  uVar12 = 0;
  while (lVar11 != 0) {
    lVar15 = *(long *)(lVar11 + -8);
    if (lVar15 <= (long)uVar12) goto LAB_001067ee;
    lVar11 = lVar11 + uVar12 * 0x48;
    lVar20 = uVar12 * 0x48 + *(long *)(pauVar1[3] + 8);
    if (*(long *)(lVar20 + 8) != *(long *)(lVar11 + 8)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 8),(CowData *)(lVar11 + 8));
    }
    if (*(long *)(lVar20 + 0x18) != *(long *)(lVar11 + 0x18)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 0x18),(CowData *)(lVar11 + 0x18));
    }
    if (*(long *)(lVar20 + 0x28) != *(long *)(lVar11 + 0x28)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 0x28),(CowData *)(lVar11 + 0x28));
    }
    if (*(long *)(lVar20 + 0x38) != *(long *)(lVar11 + 0x38)) {
      CowData<int>::_ref((CowData<int> *)(lVar20 + 0x38),(CowData *)(lVar11 + 0x38));
    }
    uVar12 = uVar12 + 1;
    *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)(lVar11 + 0x40);
    if (*(uint *)pauVar1[3] <= (uint)uVar12) goto LAB_00106870;
    lVar11 = *(long *)(param_5 + 8);
  }
  lVar15 = 0;
LAB_001067ee:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar12,lVar15,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* RID UniformSetCacheRD::_allocate_from_uniforms<Vector<RenderingDevice::Uniform> >(RID, unsigned
   int, unsigned int, unsigned int, Vector<RenderingDevice::Uniform> const&) */

long __thiscall
UniformSetCacheRD::_allocate_from_uniforms<Vector<RenderingDevice::Uniform>>
          (UniformSetCacheRD *this,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          uint param_5,long param_6)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  
  uVar7 = RenderingDevice::get_singleton();
  lVar8 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                    (uVar7,param_6,param_2,param_3,0);
  if (lVar8 == 0) {
    _err_print_error("_allocate_from_uniforms",
                     "servers/rendering/renderer_rd/effects/../uniform_set_cache_rd.h",0x83,
                     "Condition \"rid.is_null()\" is true. Returning: rid",0,0);
  }
  else {
    iVar6 = *(int *)(this + 0x18c);
    if (iVar6 == 0) {
      uVar5 = *(uint *)(this + 0x188);
      uVar4 = uVar5 + 1;
      *(uint *)(this + 0x188) = uVar4;
      uVar7 = Memory::realloc_static(*(void **)(this + 0x178),(ulong)uVar4 * 8,false);
      *(undefined8 *)(this + 0x178) = uVar7;
      uVar7 = Memory::realloc_static
                        (*(void **)(this + 0x180),(ulong)*(uint *)(this + 0x188) << 3,false);
      lVar2 = *(long *)(this + 0x178);
      *(undefined8 *)(this + 0x180) = uVar7;
      lVar9 = (ulong)uVar5 * 8;
      uVar7 = Memory::alloc_static((ulong)*(uint *)(this + 0x198) << 6,false);
      uVar4 = *(uint *)(this + 0x198);
      *(undefined8 *)(lVar2 + lVar9) = uVar7;
      lVar2 = *(long *)(this + 0x180);
      uVar7 = Memory::alloc_static((ulong)uVar4 << 3,false);
      *(undefined8 *)(lVar2 + lVar9) = uVar7;
      uVar4 = *(uint *)(this + 0x198);
      if (uVar4 == 0) {
        plVar12 = *(long **)(this + 0x180);
      }
      else {
        plVar12 = *(long **)(this + 0x180);
        lVar2 = *(long *)(this + 0x178);
        uVar10 = 0;
        lVar15 = *plVar12;
        do {
          *(ulong *)(lVar15 + uVar10 * 8) = uVar10 * 0x40 + *(long *)(lVar2 + lVar9);
          uVar10 = uVar10 + 1;
        } while (uVar4 != uVar10);
      }
      iVar6 = uVar4 + *(int *)(this + 0x18c);
    }
    else {
      plVar12 = *(long **)(this + 0x180);
    }
    uVar4 = iVar6 - 1;
    *(uint *)(this + 0x18c) = uVar4;
    pauVar1 = *(undefined1 (**) [16])
               (plVar12[uVar4 >> ((byte)*(undefined4 *)(this + 400) & 0x1f)] +
               (ulong)(uVar4 & *(uint *)(this + 0x194)) * 8);
    pauVar1[1] = (undefined1  [16])0x0;
    *(undefined4 *)pauVar1[1] = param_4;
    lVar9 = *(long *)(param_6 + 8);
    pauVar1[2] = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar1[1] + 8) = param_2;
    *(undefined4 *)pauVar1[2] = param_3;
    *(long *)(pauVar1[2] + 8) = lVar8;
    *pauVar1 = (undefined1  [16])0x0;
    pauVar1[3] = (undefined1  [16])0x0;
    if ((lVar9 != 0) && (uVar4 = (uint)*(undefined8 *)(lVar9 + -8), uVar4 != 0)) {
      uVar14 = uVar4 - 1;
      uVar5 = uVar14 >> 1 | uVar14;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = (uVar5 | uVar5 >> 0x10) + 1;
      *(uint *)(pauVar1[3] + 4) = uVar5;
      lVar9 = Memory::realloc_static((void *)0x0,(ulong)uVar5 * 0x28,false);
      *(long *)(pauVar1[3] + 8) = lVar9;
      uVar7 = _LC27;
      if (lVar9 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = *(uint *)pauVar1[3];
      if (uVar5 < uVar4) {
        puVar11 = (undefined8 *)(lVar9 + (ulong)uVar5 * 0x28);
        do {
          *puVar11 = uVar7;
          puVar13 = puVar11 + 5;
          *(undefined1 *)(puVar11 + 1) = 0;
          puVar11[2] = 0;
          puVar11[4] = 0;
          puVar11 = puVar13;
        } while ((undefined8 *)(lVar9 + ((ulong)uVar5 + 1 + (ulong)(uVar14 - uVar5)) * 0x28) !=
                 puVar13);
      }
      *(uint *)pauVar1[3] = uVar4;
      lVar9 = 0;
      do {
        lVar2 = *(long *)(param_6 + 8);
        if (lVar2 == 0) {
          lVar15 = 0;
LAB_00106d03:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar15 = *(long *)(lVar2 + -8);
        if (lVar15 <= lVar9) goto LAB_00106d03;
        puVar11 = (undefined8 *)(lVar2 + lVar9 * 0x28);
        puVar13 = (undefined8 *)(lVar9 * 0x28 + *(long *)(pauVar1[3] + 8));
        *puVar13 = *puVar11;
        *(undefined1 *)(puVar13 + 1) = *(undefined1 *)(puVar11 + 1);
        puVar13[2] = puVar11[2];
        if (puVar13[4] != puVar11[4]) {
          CowData<RID>::_ref((CowData<RID> *)(puVar13 + 4),(CowData *)(puVar11 + 4));
        }
        lVar9 = lVar9 + 1;
      } while ((uint)lVar9 < *(uint *)pauVar1[3]);
    }
    *(undefined8 *)*pauVar1 = 0;
    puVar11 = *(undefined8 **)(this + (ulong)param_5 * 8 + 0x1e0);
    *(undefined8 **)(*pauVar1 + 8) = puVar11;
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = pauVar1;
    }
    *(undefined1 (**) [16])(this + (ulong)param_5 * 8 + 0x1e0) = pauVar1;
    uVar7 = RenderingDevice::get_singleton();
    RenderingDevice::uniform_set_set_invalidation_callback
              (uVar7,lVar8,UniformSetCacheRD::_uniform_set_invalidation_callback,pauVar1);
    *(int *)(this + 0x201c8) = *(int *)(this + 0x201c8) + 1;
  }
  return lVar8;
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
LAB_00107350:
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
  if (lVar10 == 0) goto LAB_00107350;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00107229:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00107229;
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
    goto LAB_001073a6;
  }
  if (lVar10 == lVar7) {
LAB_001072cf:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001073a6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_001072ba;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001072cf;
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
LAB_001072ba:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<RID>::_realloc(long) */

undefined8 __thiscall CowData<RID>::_realloc(CowData<RID> *this,long param_1)

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
/* Error CowData<RID>::resize<false>(long) */

undefined8 __thiscall CowData<RID>::resize<false>(CowData<RID> *this,long param_1)

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
LAB_001078c0:
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
  if (lVar7 == 0) goto LAB_001078c0;
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
LAB_0010782c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_001077c1;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010782c;
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
LAB_001077c1:
  puVar9[-1] = param_1;
  return 0;
}



/* RID FramebufferCacheRD::get_cache<RID>(RID) */

undefined8 __thiscall FramebufferCacheRD::get_cache<RID>(FramebufferCacheRD *this,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  Vector aVStack_58 [8];
  long local_50;
  Vector local_48 [8];
  long local_40;
  long local_30;
  
  iVar8 = (int)((ulong)param_2 >> 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = ((int)param_2 * 0x16a88000 | (uint)((int)param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          0xb3e1e8c0;
  uVar6 = (iVar8 * 0x16a88000 | (uint)(iVar8 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar6 = (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar6 = (uVar6 >> 0x10 ^ uVar6) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  lVar2 = *(long *)(this + (ulong)(uVar6 % 0x3ffd) * 8 + 0x1e0);
  do {
    if (lVar2 == 0) {
      local_50 = 0;
      Vector<RID>::push_back((Vector<RID> *)aVStack_58);
      local_40 = 0;
      uVar7 = _allocate_from_data(this,1,uVar6,uVar6 % 0x3ffd,aVStack_58,local_48);
      lVar2 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar1 = (long *)(local_40 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          if (local_40 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          lVar3 = *(long *)(local_40 + -8);
          local_40 = 0;
          if (lVar3 != 0) {
            lVar10 = 0;
            lVar9 = lVar2;
            do {
              if (*(long *)(lVar9 + 0x38) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar9 + 0x38) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar4 = *(long *)(lVar9 + 0x38);
                  *(undefined8 *)(lVar9 + 0x38) = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
              if (*(long *)(lVar9 + 0x28) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar9 + 0x28) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar4 = *(long *)(lVar9 + 0x28);
                  *(undefined8 *)(lVar9 + 0x28) = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
              if (*(long *)(lVar9 + 0x18) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar9 + 0x18) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar4 = *(long *)(lVar9 + 0x18);
                  *(undefined8 *)(lVar9 + 0x18) = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
              if (*(long *)(lVar9 + 8) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(lVar9 + 8) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar4 = *(long *)(lVar9 + 8);
                  *(undefined8 *)(lVar9 + 8) = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
              lVar10 = lVar10 + 1;
              lVar9 = lVar9 + 0x48;
            } while (lVar3 != lVar10);
          }
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
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
LAB_00107a30:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((((*(uint *)(lVar2 + 0x10) == uVar6) && (*(int *)(lVar2 + 0x30) == 0)) &&
        (*(int *)(lVar2 + 0x20) == 1)) &&
       ((*(int *)(lVar2 + 0x40) == 1 && (param_2 == **(long **)(lVar2 + 0x28))))) {
      uVar7 = *(undefined8 *)(lVar2 + 0x18);
      goto LAB_00107a30;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* CowData<Vector<unsigned char> >::_unref() */

void __thiscall CowData<Vector<unsigned_char>>::_unref(CowData<Vector<unsigned_char>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<RenderingDevice::Uniform>::_unref() */

void __thiscall CowData<RenderingDevice::Uniform>::_unref(CowData<RenderingDevice::Uniform> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x20);
              *(undefined8 *)(lVar6 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x28;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::_realloc
          (CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *this,long param_1)

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
/* Error CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>(long)
    */

undefined8 __thiscall
CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment>::resize<false>
          (CowData<RenderingDeviceCommons::PipelineColorBlendState::Attachment> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar10 = *(long *)(lVar4 + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar4 = lVar10 * 0x20;
    if (lVar4 != 0) {
      uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      lVar4 = (uVar5 | uVar5 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_00108030:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar5 = param_1 * 0x20 - 1;
  uVar5 = uVar5 >> 1 | uVar5;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  uVar5 = uVar5 | uVar5 >> 0x20;
  lVar11 = uVar5 + 1;
  if (lVar11 == 0) goto LAB_00108030;
  if (param_1 <= lVar10) {
    if ((lVar11 != lVar4) && (uVar8 = _realloc(this,lVar11), (int)uVar8 != 0)) {
      return uVar8;
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
  if (lVar11 == lVar4) {
LAB_00107f9c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar9[-1];
    if (param_1 <= lVar4) goto LAB_00107f33;
  }
  else {
    if (lVar10 != 0) {
      uVar8 = _realloc(this,lVar11);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      goto LAB_00107f9c;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar4 = 0;
  }
  uVar3 = _LC39;
  puVar6 = puVar9 + lVar4 * 4;
  do {
    *(undefined1 *)puVar6 = 0;
    puVar7 = puVar6 + 4;
    *(undefined1 (*) [16])((long)puVar6 + 4) = (undefined1  [16])0x0;
    *(undefined8 *)((long)puVar6 + 0x14) = 0;
    *(undefined4 *)((long)puVar6 + 0x1c) = uVar3;
    puVar6 = puVar7;
  } while (puVar7 != puVar9 + param_1 * 4);
LAB_00107f33:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<RenderingDevice::Uniform>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDevice::Uniform>::_realloc(CowData<RenderingDevice::Uniform> *this,long param_1)

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
/* Error CowData<RenderingDevice::Uniform>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDevice::Uniform>::resize<false>
          (CowData<RenderingDevice::Uniform> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
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
    lVar8 = 0;
    lVar9 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar8 * 0x28;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_001083d0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x28 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar11 = uVar10 + 1;
  if (lVar11 == 0) goto LAB_001083d0;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_00108261:
        if (lVar11 != lVar9) {
          uVar4 = _realloc(this,lVar11);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      while( true ) {
        lVar2 = lVar8 + uVar10 * 0x28;
        if (*(long *)(lVar2 + 0x20) != 0) break;
        uVar10 = uVar10 + 1;
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_00108261;
      }
      LOCK();
      plVar1 = (long *)(*(long *)(lVar2 + 0x20) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar8 = *(long *)(lVar2 + 0x20);
        *(undefined8 *)(lVar2 + 0x20) = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
      uVar10 = uVar10 + 1;
      lVar8 = *(long *)this;
    }
    goto LAB_00108426;
  }
  if (lVar11 == lVar9) {
LAB_00108343:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00108426:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_00108320;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00108343;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar8 = 0;
  }
  uVar4 = _LC27;
  puVar5 = puVar7 + lVar8 * 5;
  do {
    *puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 5);
LAB_00108320:
  puVar7[-1] = param_1;
  return 0;
}



/* RID UniformSetCacheRD::get_cache<RenderingDevice::Uniform>(RID, unsigned int,
   RenderingDevice::Uniform) */

undefined8 __thiscall
UniformSetCacheRD::get_cache<RenderingDevice::Uniform>
          (UniformSetCacheRD *this,long param_2,int param_3,ulong *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  int iVar17;
  undefined1 auVar16 [16];
  undefined1 local_78 [8];
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  ulong local_58;
  ulong local_48;
  long local_40;
  
  iVar7 = (int)((ulong)param_2 >> 0x20);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar17 = (int)(*param_4 >> 0x20);
  uVar6 = ((int)param_2 * 0x16a88000 | (uint)((int)param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          0x7f07c65;
  uVar6 = (iVar7 * 0x16a88000 | (uint)(iVar7 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar6 = (param_3 * 0x16a88000 | (uint)(param_3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar6 = ((int)*param_4 * 0x16a88000 | (uint)((int)*param_4 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar6 = (iVar17 * 0x16a88000 | (uint)(iVar17 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
  uVar13 = (ulong)((uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64);
  uVar11 = param_4[2];
  if (uVar11 != 0) {
    uVar15 = 1;
LAB_001088a6:
    uVar14 = 0;
    do {
      uVar6 = (uint)uVar13;
      if (uVar11 == 0) {
        uVar11 = param_4[4];
        if (uVar11 == 0) {
          lVar9 = 0;
LAB_001089a1:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar9,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar9 = *(long *)(uVar11 - 8);
        if (lVar9 <= (long)uVar14) goto LAB_001089a1;
        uVar11 = *(ulong *)(uVar11 + uVar14 * 8);
LAB_001088c9:
        iVar7 = (int)(uVar11 >> 0x20);
        uVar8 = (iVar7 * 0x16a88000 | (uint)(iVar7 * -0x3361d2af) >> 0x11) * 0x1b873593;
        uVar6 = uVar6 ^ ((int)uVar11 * 0x16a88000 | (uint)((int)uVar11 * -0x3361d2af) >> 0x11) *
                        0x1b873593;
      }
      else {
        if (uVar14 == 0) goto LAB_001088c9;
        _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                         "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
        uVar8 = 0;
      }
      uVar14 = uVar14 + 1;
      uVar8 = uVar8 ^ (uVar6 << 0xd | uVar6 >> 0x13) * 5 + 0xe6546b64;
      uVar13 = (ulong)((uVar8 << 0xd | uVar8 >> 0x13) * 5 + 0xe6546b64);
      if (uVar14 == uVar15) goto LAB_00108930;
      uVar11 = param_4[2];
    } while( true );
  }
  if ((param_4[4] != 0) &&
     (uVar14 = *(ulong *)(param_4[4] - 8), uVar15 = uVar14 & 0xffffffff, (int)uVar14 != 0))
  goto LAB_001088a6;
  goto LAB_001085a0;
LAB_00108b89:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
  goto LAB_00108600;
LAB_00108930:
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_4;
LAB_001085a0:
  uVar10 = auVar16._0_8_;
  uVar6 = ((uint)uVar13 ^ (uint)(uVar13 >> 0x10)) * -0x7a143595;
  uVar6 = (uVar6 ^ uVar6 >> 0xd) * -0x3d4d51cb;
  uVar6 = uVar6 ^ uVar6 >> 0x10;
  lVar12 = *(long *)(this + (ulong)(uVar6 % 0x3ffd) * 8 + 0x1e0);
  if (lVar12 != 0) {
LAB_0010860d:
    if ((((*(uint *)(lVar12 + 0x10) == uVar6) && (*(int *)(lVar12 + 0x20) == param_3)) &&
        (param_2 == *(long *)(lVar12 + 0x18))) && (*(int *)(lVar12 + 0x30) == 1)) {
      piVar3 = *(int **)(lVar12 + 0x38);
      if ((auVar16._4_4_ == piVar3[1]) && (*piVar3 == auVar16._0_4_)) {
        uVar11 = param_4[2];
        if (*(long *)(piVar3 + 4) == 0) {
          if (*(long *)(piVar3 + 8) == 0) {
            if (uVar11 != 0) goto LAB_00108600;
            if (param_4[4] != 0) {
              uVar8 = *(uint *)(param_4[4] - 8);
joined_r0x00108b53:
              if (uVar8 != 0) goto LAB_00108600;
            }
LAB_00108a94:
            uVar10 = *(undefined8 *)(lVar12 + 0x28);
            goto LAB_00108877;
          }
          uVar8 = (uint)*(undefined8 *)(*(long *)(piVar3 + 8) + -8);
          if (uVar11 == 0) {
            if (param_4[4] == 0) goto joined_r0x00108b53;
            if (*(uint *)(param_4[4] - 8) == uVar8) {
              if (uVar8 != 0) goto LAB_00108674;
              goto LAB_00108a94;
            }
          }
          else if (uVar8 == 1) goto LAB_00108674;
        }
        else {
          uVar8 = 1;
          if (uVar11 != 0) {
LAB_00108674:
            uVar13 = 0;
            do {
              uVar14 = uVar13;
              if (uVar11 == 0) {
                uVar11 = param_4[4];
                if (uVar11 == 0) {
                  lVar9 = 0;
                  goto LAB_001089a1;
                }
                lVar9 = *(long *)(uVar11 - 8);
                if (lVar9 <= (long)uVar13) goto LAB_001089a1;
                uVar11 = *(ulong *)(uVar11 + uVar13 * 8);
                uVar15 = *(ulong *)(piVar3 + 4);
                if (uVar15 == 0) goto LAB_001086b5;
                if (uVar13 != 0) goto LAB_00108735;
              }
              else if (uVar13 == 0) {
                uVar15 = *(ulong *)(piVar3 + 4);
                uVar14 = 0;
                if (uVar15 == 0) {
LAB_001086b5:
                  lVar4 = *(long *)(piVar3 + 8);
                  if (lVar4 == 0) {
                    lVar9 = 0;
                    goto LAB_001089a1;
                  }
                  lVar9 = *(long *)(lVar4 + -8);
                  if (lVar9 <= (long)uVar14) goto LAB_001089a1;
                  uVar15 = *(ulong *)(lVar4 + uVar13 * 8);
                }
              }
              else {
                _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                 "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                if (*(long *)(piVar3 + 4) == 0) {
                  uVar11 = 0;
                  goto LAB_001086b5;
                }
                uVar11 = 0;
LAB_00108735:
                _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                                 "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
                uVar15 = 0;
              }
              if (uVar15 != uVar11) goto LAB_00108b89;
              uVar13 = uVar13 + 1;
              if (uVar8 <= (uint)uVar13) goto LAB_00108a94;
              uVar11 = param_4[2];
            } while( true );
          }
          if ((param_4[4] != 0) && ((int)*(undefined8 *)(param_4[4] - 8) == 1)) {
            uVar8 = 1;
            goto LAB_00108674;
          }
        }
      }
    }
LAB_00108600:
    uVar10 = auVar16._0_8_;
    lVar12 = *(long *)(lVar12 + 8);
    if (lVar12 == 0) goto LAB_00108755;
    goto LAB_0010860d;
  }
LAB_00108755:
  local_60 = (undefined1)param_4[1];
  local_70 = 0;
  local_48 = 0;
  local_58 = param_4[2];
  lVar9 = 1;
  uVar11 = param_4[4];
  local_68 = uVar10;
  if (param_4[4] != 0) {
    CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)(param_4 + 4));
    lVar9 = 1;
    uVar11 = local_48;
    if (local_70 != 0) {
      lVar9 = *(long *)(local_70 + -8) + 1;
    }
  }
  iVar7 = CowData<RenderingDevice::Uniform>::resize<false>
                    ((CowData<RenderingDevice::Uniform> *)&local_70,lVar9);
  if (iVar7 == 0) {
    if (local_70 == 0) {
      lVar12 = -1;
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(local_70 + -8);
      lVar12 = lVar9 + -1;
      if (-1 < lVar12) {
        CowData<RenderingDevice::Uniform>::_copy_on_write
                  ((CowData<RenderingDevice::Uniform> *)&local_70);
        puVar2 = (undefined8 *)(local_70 + lVar12 * 0x28);
        *puVar2 = local_68;
        *(undefined1 *)(puVar2 + 1) = local_60;
        puVar2[2] = local_58;
        if (puVar2[4] != uVar11) {
          CowData<RID>::_ref((CowData<RID> *)(puVar2 + 4),(CowData *)&local_48);
        }
        goto LAB_00108842;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar12,lVar9,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00108842:
  if (uVar11 != 0) {
    LOCK();
    plVar1 = (long *)(uVar11 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_48 - 0x10),false);
    }
  }
  uVar10 = _allocate_from_uniforms<Vector<RenderingDevice::Uniform>>
                     (this,param_2,param_3,uVar6,uVar6 % 0x3ffd,local_78);
  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_70);
LAB_00108877:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* WARNING: Control flow encountered bad instruction data */
/* RendererRD::Luminance::LuminanceBuffers::~LuminanceBuffers() */

void __thiscall RendererRD::Luminance::LuminanceBuffers::~LuminanceBuffers(LuminanceBuffers *this)

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
/* LuminanceReduceRasterShaderRD::~LuminanceReduceRasterShaderRD() */

void __thiscall
LuminanceReduceRasterShaderRD::~LuminanceReduceRasterShaderRD(LuminanceReduceRasterShaderRD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* LuminanceReduceShaderRD::~LuminanceReduceShaderRD() */

void __thiscall LuminanceReduceShaderRD::~LuminanceReduceShaderRD(LuminanceReduceShaderRD *this)

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




