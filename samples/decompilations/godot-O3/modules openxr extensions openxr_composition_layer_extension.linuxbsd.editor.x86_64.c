
/* OpenXRCompositionLayerExtension::on_instance_created(XrInstance_T*) */

void OpenXRCompositionLayerExtension::on_instance_created(XrInstance_T *param_1)

{
  return;
}



/* OpenXRCompositionLayerExtension::get_composition_layer_count() */

undefined4 __thiscall
OpenXRCompositionLayerExtension::get_composition_layer_count(OpenXRCompositionLayerExtension *this)

{
  if (*(long *)(this + 0x18) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x18) + -8);
  }
  return 0;
}



/* OpenXRCompositionLayerExtension::on_session_created(XrSession_T*) */

void OpenXRCompositionLayerExtension::on_session_created(XrSession_T *param_1)

{
  OpenXRAPI::register_composition_layer_provider(OpenXRAPI::singleton);
  return;
}



/* OpenXRCompositionLayerExtension::on_session_destroyed() */

void OpenXRCompositionLayerExtension::on_session_destroyed(void)

{
  OpenXRAPI::unregister_composition_layer_provider(OpenXRAPI::singleton);
  return;
}



/* OpenXRCompositionLayerExtension::get_composition_layer_order(int) */

undefined4 __thiscall
OpenXRCompositionLayerExtension::get_composition_layer_order
          (OpenXRCompositionLayerExtension *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x18);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_001000a1;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(*(long *)(lVar1 + lVar2 * 8) + 8);
    }
    goto LAB_001000a1;
  }
  lVar3 = 0;
LAB_001000a1:
  _err_print_index_error
            ("get_composition_layer_order",
             "modules/openxr/extensions/openxr_composition_layer_extension.cpp",0x6e,lVar2,lVar3,
             "p_index","composition_layers.size()","",false,false);
  return 1;
}



/* CowData<OpenXRViewportCompositionLayerProvider*>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<OpenXRViewportCompositionLayerProvider*>::_copy_on_write
          (CowData<OpenXRViewportCompositionLayerProvider*> *this)

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



/* non-virtual thunk to OpenXRCompositionLayerExtension::get_composition_layer_count() */

undefined4 __thiscall
OpenXRCompositionLayerExtension::get_composition_layer_count(OpenXRCompositionLayerExtension *this)

{
  if (*(long *)(this + 0x10) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x10) + -8);
  }
  return 0;
}



/* non-virtual thunk to OpenXRCompositionLayerExtension::get_composition_layer_order(int) */

undefined4 __thiscall
OpenXRCompositionLayerExtension::get_composition_layer_order
          (OpenXRCompositionLayerExtension *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x10);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100261;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(*(long *)(lVar1 + lVar2 * 8) + 8);
    }
    goto LAB_00100261;
  }
  lVar3 = 0;
LAB_00100261:
  _err_print_index_error
            ("get_composition_layer_order",
             "modules/openxr/extensions/openxr_composition_layer_extension.cpp",0x6e,lVar2,lVar3,
             "p_index","composition_layers.size()","",false,false);
  return 1;
}



/* non-virtual thunk to OpenXRCompositionLayerExtension::~OpenXRCompositionLayerExtension() */

void __thiscall
OpenXRCompositionLayerExtension::~OpenXRCompositionLayerExtension
          (OpenXRCompositionLayerExtension *this)

{
  long *plVar1;
  long lVar2;
  
  singleton = 0;
  *(undefined ***)(this + -8) = &PTR_get_requested_extensions_001029b0;
  *(undefined ***)this = &PTR_get_composition_layer_count_00102af0;
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* OpenXRCompositionLayerExtension::~OpenXRCompositionLayerExtension() */

void __thiscall
OpenXRCompositionLayerExtension::~OpenXRCompositionLayerExtension
          (OpenXRCompositionLayerExtension *this)

{
  long *plVar1;
  long lVar2;
  
  singleton = 0;
  *(undefined ***)this = &PTR_get_requested_extensions_001029b0;
  *(undefined ***)(this + 8) = &PTR_get_composition_layer_count_00102af0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* OpenXRCompositionLayerExtension::~OpenXRCompositionLayerExtension() */

void __thiscall
OpenXRCompositionLayerExtension::~OpenXRCompositionLayerExtension
          (OpenXRCompositionLayerExtension *this)

{
  long *plVar1;
  long lVar2;
  
  singleton = 0;
  *(undefined ***)this = &PTR_get_requested_extensions_001029b0;
  *(undefined ***)(this + 8) = &PTR_get_composition_layer_count_00102af0;
  if (*(long *)(this + 0x18) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x18) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x18);
      *(undefined8 *)(this + 0x18) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0x28);
      return;
    }
  }
  operator_delete(this,0x28);
  return;
}



/* non-virtual thunk to OpenXRCompositionLayerExtension::~OpenXRCompositionLayerExtension() */

void __thiscall
OpenXRCompositionLayerExtension::~OpenXRCompositionLayerExtension
          (OpenXRCompositionLayerExtension *this)

{
  long *plVar1;
  long lVar2;
  
  singleton = 0;
  *(undefined ***)(this + -8) = &PTR_get_requested_extensions_001029b0;
  *(undefined ***)this = &PTR_get_composition_layer_count_00102af0;
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this + -8,0x28);
      return;
    }
  }
  operator_delete(this + -8,0x28);
  return;
}



/* OpenXRCompositionLayerExtension::get_singleton() */

undefined8 OpenXRCompositionLayerExtension::get_singleton(void)

{
  return singleton;
}



/* OpenXRCompositionLayerExtension::OpenXRCompositionLayerExtension() */

void __thiscall
OpenXRCompositionLayerExtension::OpenXRCompositionLayerExtension
          (OpenXRCompositionLayerExtension *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  this[0x22] = (OpenXRCompositionLayerExtension)0x0;
  *(undefined2 *)(this + 0x20) = 0;
  singleton = this;
  *(undefined ***)this = &PTR_get_requested_extensions_001029b0;
  *(undefined ***)(this + 8) = &PTR_get_composition_layer_count_00102af0;
  return;
}



/* OpenXRViewportCompositionLayerProvider::OpenXRViewportCompositionLayerProvider(XrCompositionLayerBaseHeader*)
    */

void __thiscall
OpenXRViewportCompositionLayerProvider::OpenXRViewportCompositionLayerProvider
          (OpenXRViewportCompositionLayerProvider *this,XrCompositionLayerBaseHeader *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 1;
  this[0xc] = (OpenXRViewportCompositionLayerProvider)0x0;
  Dictionary::Dictionary((Dictionary *)(this + 0x10));
  this[0x18] = (OpenXRViewportCompositionLayerProvider)0x1;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  uVar2 = OpenXRAPI::singleton;
  *(undefined8 *)(this + 0x20) = 0;
  uVar1 = OpenXRCompositionLayerExtension::singleton;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined2 *)(this + 0x44) = 0;
  this[0x48] = (OpenXRViewportCompositionLayerProvider)0x0;
  this[0x50] = (OpenXRViewportCompositionLayerProvider)0x0;
  *(undefined8 *)(this + 0x54) = 0;
  *(XrCompositionLayerBaseHeader **)this = param_1;
  *(undefined8 *)(this + 0x60) = uVar2;
  *(undefined8 *)(this + 0x68) = uVar1;
  return;
}



/* OpenXRViewportCompositionLayerProvider::set_alpha_blend(bool) */

void __thiscall
OpenXRViewportCompositionLayerProvider::set_alpha_blend
          (OpenXRViewportCompositionLayerProvider *this,bool param_1)

{
  ulong *puVar1;
  
  if (this[0xc] != (OpenXRViewportCompositionLayerProvider)param_1) {
    this[0xc] = (OpenXRViewportCompositionLayerProvider)param_1;
    if (param_1) {
      puVar1 = (ulong *)(*(long *)this + 0x10);
      *puVar1 = *puVar1 | 2;
      return;
    }
    puVar1 = (ulong *)(*(long *)this + 0x10);
    *puVar1 = *puVar1 & 0xfffffffffffffffd;
  }
  return;
}



/* OpenXRViewportCompositionLayerProvider::set_viewport(RID, Vector2i) */

void __thiscall
OpenXRViewportCompositionLayerProvider::set_viewport
          (OpenXRViewportCompositionLayerProvider *this,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (this[0x50] != (OpenXRViewportCompositionLayerProvider)0x0) {
    _err_print_error("set_viewport",
                     "modules/openxr/extensions/openxr_composition_layer_extension.cpp",0xcd,
                     "Condition \"use_android_surface\" is true.",0,0);
    return;
  }
  plVar1 = (long *)RenderingServer::get_singleton();
  if (plVar1 != (long *)0x0) {
    if (param_2 != *(long *)(this + 0x20)) {
      if (*(long *)(this + 0x20) != 0) {
        uVar2 = (**(code **)(*plVar1 + 0xa10))(plVar1);
        (**(code **)(*RenderingServerGlobals::texture_storage + 0x2f0))
                  (RenderingServerGlobals::texture_storage,uVar2,0,0,0,0);
      }
      *(long *)(this + 0x20) = param_2;
      if (param_2 == 0) {
        if (*(long *)(this + 0x30) != 0) {
          OpenXRAPI::OpenXRSwapChainInfo::queue_free();
        }
        this[0x48] = (OpenXRViewportCompositionLayerProvider)0x0;
        *(undefined8 *)(this + 0x54) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        return;
      }
      *(undefined8 *)(this + 0x28) = param_3;
    }
    return;
  }
  _err_print_error("set_viewport","modules/openxr/extensions/openxr_composition_layer_extension.cpp"
                   ,0xd0,"Parameter \"rs\" is null.",0,0);
  return;
}



/* OpenXRViewportCompositionLayerProvider::~OpenXRViewportCompositionLayerProvider() */

void __thiscall
OpenXRViewportCompositionLayerProvider::~OpenXRViewportCompositionLayerProvider
          (OpenXRViewportCompositionLayerProvider *this)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = OpenXRAPI::get_registered_extension_wrappers();
  puVar5 = *(undefined8 **)(lVar4 + 8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = puVar5 + puVar5[-1];
    for (; puVar1 != puVar5; puVar5 = puVar5 + 1) {
      while( true ) {
        plVar2 = (long *)*puVar5;
        pcVar3 = *(code **)(*plVar2 + 0xe0);
        if (pcVar3 == OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed) break;
        puVar5 = puVar5 + 1;
        (*pcVar3)(plVar2,*(undefined8 *)this);
        if (puVar1 == puVar5) goto LAB_001006e8;
      }
    }
  }
LAB_001006e8:
  if (this[0x50] == (OpenXRViewportCompositionLayerProvider)0x0) {
    set_viewport(this,0,0);
  }
  else {
    if (*(long *)(this + 0x30) != 0) {
      OpenXRAPI::OpenXRSwapChainInfo::queue_free();
    }
    this[0x48] = (OpenXRViewportCompositionLayerProvider)0x0;
    *(undefined8 *)(this + 0x54) = 0;
  }
  Dictionary::~Dictionary((Dictionary *)(this + 0x10));
  return;
}



/* OpenXRViewportCompositionLayerProvider::set_use_android_surface(bool, Vector2i) */

void OpenXRViewportCompositionLayerProvider::set_use_android_surface(void)

{
  return;
}



/* OpenXRViewportCompositionLayerProvider::get_android_surface() */

OpenXRViewportCompositionLayerProvider * __thiscall
OpenXRViewportCompositionLayerProvider::get_android_surface
          (OpenXRViewportCompositionLayerProvider *this)

{
  *(undefined8 *)this = 0;
  return this;
}



/* OpenXRViewportCompositionLayerProvider::set_extension_property_values(Dictionary const&) */

void __thiscall
OpenXRViewportCompositionLayerProvider::set_extension_property_values
          (OpenXRViewportCompositionLayerProvider *this,Dictionary *param_1)

{
  Dictionary::operator=((Dictionary *)(this + 0x10),param_1);
  this[0x18] = (OpenXRViewportCompositionLayerProvider)0x1;
  return;
}



/* OpenXRViewportCompositionLayerProvider::update_swapchain_sub_image(XrSwapchainSubImage&) */

void __thiscall
OpenXRViewportCompositionLayerProvider::update_swapchain_sub_image
          (OpenXRViewportCompositionLayerProvider *this,XrSwapchainSubImage *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(this + 0x30);
  if ((lVar1 != 0) && (this[0x44] != (OpenXRViewportCompositionLayerProvider)0x0)) {
    OpenXRAPI::OpenXRSwapChainInfo::release();
  }
  uVar2 = *(undefined8 *)(this + 0x54);
  *(long *)param_1 = lVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}



/* OpenXRViewportCompositionLayerProvider::free_swapchain() */

void __thiscall
OpenXRViewportCompositionLayerProvider::free_swapchain(OpenXRViewportCompositionLayerProvider *this)

{
  if (*(long *)(this + 0x30) != 0) {
    OpenXRAPI::OpenXRSwapChainInfo::queue_free();
  }
  this[0x48] = (OpenXRViewportCompositionLayerProvider)0x0;
  *(undefined8 *)(this + 0x54) = 0;
  return;
}



/* OpenXRViewportCompositionLayerProvider::get_current_swapchain_texture() */

undefined8 __thiscall
OpenXRViewportCompositionLayerProvider::get_current_swapchain_texture
          (OpenXRViewportCompositionLayerProvider *this)

{
  undefined8 uVar1;
  
  if (this[0x50] != (OpenXRViewportCompositionLayerProvider)0x0) {
    _err_print_error("get_current_swapchain_texture",
                     "modules/openxr/extensions/openxr_composition_layer_extension.cpp",0x1e6,
                     "Condition \"use_android_surface\" is true. Returning: RID()",0,0);
    return 0;
  }
  if (*(long *)(this + 0x60) != 0) {
    uVar1 = OpenXRAPI::OpenXRSwapChainInfo::get_image();
    return uVar1;
  }
  return 0;
}



/* OpenXRCompositionLayerExtension::get_requested_extensions() */

void OpenXRCompositionLayerExtension::get_requested_extensions(void)

{
  long lVar1;
  long *plVar2;
  long in_RSI;
  HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
  *in_RDI;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(in_RDI + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(in_RDI + 0x18) = (undefined1  [16])0x0;
  *(undefined8 *)(in_RDI + 0x28) = 2;
  local_48 = "XR_KHR_composition_layer_cylinder";
  local_50 = 0;
  local_40 = 0x21;
  String::parse_latin1((StrRange *)&local_50);
  plVar2 = (long *)HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
                   ::operator[](in_RDI,(String *)&local_50);
  lVar1 = local_50;
  *plVar2 = in_RSI + 0x20;
  if (local_50 != 0) {
    LOCK();
    plVar2 = (long *)(local_50 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  local_50 = 0;
  local_48 = "XR_KHR_composition_layer_equirect2";
  local_40 = 0x22;
  String::parse_latin1((StrRange *)&local_50);
  plVar2 = (long *)HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
                   ::operator[](in_RDI,(String *)&local_50);
  lVar1 = local_50;
  *plVar2 = in_RSI + 0x21;
  if (local_50 != 0) {
    LOCK();
    plVar2 = (long *)(local_50 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRCompositionLayerExtension::is_available(XrStructureType) */

OpenXRCompositionLayerExtension __thiscall
OpenXRCompositionLayerExtension::is_available(OpenXRCompositionLayerExtension *this,int param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  OpenXRCompositionLayerExtension OVar4;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0x3b9b0c68) {
    OVar4 = this[0x20];
  }
  else if (param_2 == 0x3b9c2d78) {
    OVar4 = this[0x21];
  }
  else {
    OVar4 = (OpenXRCompositionLayerExtension)0x1;
    if (param_2 != 0x24) {
      local_40 = 0;
      local_30 = 0x26;
      local_38 = "Unsupported composition layer type: %s";
      String::parse_latin1((StrRange *)&local_40);
      vformat<XrStructureType>(&local_38,(StrRange *)&local_40,param_2);
      _err_print_error("is_available",
                       "modules/openxr/extensions/openxr_composition_layer_extension.cpp",0x87,
                       &local_38,0,0);
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
      OVar4 = (OpenXRCompositionLayerExtension)0x0;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return OVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRViewportCompositionLayerProvider::update_and_acquire_swapchain(bool) */

undefined8 __thiscall
OpenXRViewportCompositionLayerProvider::update_and_acquire_swapchain
          (OpenXRViewportCompositionLayerProvider *this,bool param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x50] == (OpenXRViewportCompositionLayerProvider)0x0) {
    if ((*(long *)(this + 0x60) != 0) &&
       (*(OpenXRCompositionLayerExtension **)(this + 0x68) != (OpenXRCompositionLayerExtension *)0x0
       )) {
      cVar2 = OpenXRCompositionLayerExtension::is_available
                        (*(OpenXRCompositionLayerExtension **)(this + 0x68),**(undefined4 **)this);
      if (cVar2 != '\0') {
        if (*(long *)(this + 0x30) == 0) {
LAB_00100b6c:
          uVar5 = (ulong)param_1 * 2;
          uVar4 = (uint)*(undefined8 *)(*(long *)(this + 0x60) + 0x170);
        }
        else {
          cVar2 = Vector2i::operator==((Vector2i *)(this + 0x54),this + 0x28);
          if (cVar2 == '\0') {
            OpenXRAPI::OpenXRSwapChainInfo::queue_free();
            goto LAB_00100b6c;
          }
          if (param_1) {
            OpenXRAPI::OpenXRSwapChainInfo::queue_free();
            uVar5 = 2;
            uVar4 = (uint)*(undefined8 *)(*(long *)(this + 0x60) + 0x170);
          }
          else {
            if (this[0x48] == (OpenXRViewportCompositionLayerProvider)0x0) {
              uVar3 = OpenXRAPI::OpenXRSwapChainInfo::acquire((bool *)(this + 0x30));
              goto LAB_00100baa;
            }
            OpenXRAPI::OpenXRSwapChainInfo::queue_free();
            uVar5 = 0;
            uVar4 = (uint)*(undefined8 *)(*(long *)(this + 0x60) + 0x170);
          }
        }
        cVar2 = OpenXRAPI::OpenXRSwapChainInfo::create
                          ((ulong)(this + 0x30),uVar5,0x61,uVar4,*(uint *)(this + 0x28),
                           *(uint *)(this + 0x2c),1);
        if (cVar2 != '\0') {
          uVar3 = OpenXRAPI::OpenXRSwapChainInfo::acquire((bool *)(this + 0x30));
          this[0x48] = (OpenXRViewportCompositionLayerProvider)param_1;
          *(undefined8 *)(this + 0x54) = *(undefined8 *)(this + 0x28);
          goto LAB_00100baa;
        }
        *(undefined8 *)(this + 0x54) = 0;
      }
    }
  }
  else {
    _err_print_error("update_and_acquire_swapchain",
                     "modules/openxr/extensions/openxr_composition_layer_extension.cpp",0x1a1,
                     "Condition \"use_android_surface\" is true. Returning: false",0,0);
  }
  uVar3 = 0;
LAB_00100baa:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRViewportCompositionLayerProvider::on_pre_render() */

void __thiscall
OpenXRViewportCompositionLayerProvider::on_pre_render(OpenXRViewportCompositionLayerProvider *this)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)RenderingServer::get_singleton();
  if (plVar3 == (long *)0x0) {
    _err_print_error("on_pre_render",
                     "modules/openxr/extensions/openxr_composition_layer_extension.cpp",0x13d,
                     "Parameter \"rs\" is null.",0,0);
    return;
  }
  if ((*(long *)(this + 0x20) == 0) || (*(long *)(this + 0x60) == 0)) {
    return;
  }
  cVar1 = OpenXRAPI::is_running();
  if (cVar1 == '\0') {
    return;
  }
  iVar2 = (**(code **)(*plVar3 + 0xa00))(plVar3,*(undefined8 *)(this + 0x20));
  if ((iVar2 != 4) && (iVar2 != 1)) {
    return;
  }
  cVar1 = update_and_acquire_swapchain(this,iVar2 == 1);
  if (cVar1 == '\0') {
    return;
  }
  uVar4 = (**(code **)(*plVar3 + 0xa10))(plVar3,*(undefined8 *)(this + 0x20));
  plVar3 = RenderingServerGlobals::texture_storage;
  UNRECOVERED_JUMPTABLE = *(code **)(*RenderingServerGlobals::texture_storage + 0x2f0);
  if (this[0x50] == (OpenXRViewportCompositionLayerProvider)0x0) {
    if (*(long *)(this + 0x60) != 0) {
      uVar5 = OpenXRAPI::OpenXRSwapChainInfo::get_image();
      goto LAB_00100d5f;
    }
  }
  else {
    _err_print_error("get_current_swapchain_texture",
                     "modules/openxr/extensions/openxr_composition_layer_extension.cpp",0x1e6,
                     "Condition \"use_android_surface\" is true. Returning: RID()",0,0);
  }
  uVar5 = 0;
LAB_00100d5f:
                    /* WARNING: Could not recover jumptable at 0x00100d7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar3,uVar4,uVar5,0,0,0);
  return;
}



/* OpenXRCompositionLayerExtension::on_pre_render() */

void __thiscall
OpenXRCompositionLayerExtension::on_pre_render(OpenXRCompositionLayerExtension *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  CowData<OpenXRViewportCompositionLayerProvider*>::_copy_on_write
            ((CowData<OpenXRViewportCompositionLayerProvider*> *)(this + 0x18));
  puVar1 = *(undefined8 **)(this + 0x18);
  CowData<OpenXRViewportCompositionLayerProvider*>::_copy_on_write
            ((CowData<OpenXRViewportCompositionLayerProvider*> *)(this + 0x18));
  puVar2 = *(undefined8 **)(this + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2 = puVar2 + puVar2[-1];
  }
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    OpenXRViewportCompositionLayerProvider::on_pre_render
              ((OpenXRViewportCompositionLayerProvider *)*puVar1);
  }
  return;
}



/* OpenXRViewportCompositionLayerProvider::get_composition_layer() */

int * __thiscall
OpenXRViewportCompositionLayerProvider::get_composition_layer
          (OpenXRViewportCompositionLayerProvider *this)

{
  undefined8 *puVar1;
  OpenXRViewportCompositionLayerProvider OVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (*(long *)(this + 0x60) == 0) {
    return (int *)0x0;
  }
  if (((*(OpenXRCompositionLayerExtension **)(this + 0x68) != (OpenXRCompositionLayerExtension *)0x0
       ) && (cVar7 = OpenXRCompositionLayerExtension::is_available
                               (*(OpenXRCompositionLayerExtension **)(this + 0x68),
                                **(undefined4 **)this), cVar7 != '\0')) &&
     (lVar8 = *(long *)(this + 0x30), lVar8 != 0)) {
    if (this[0x44] == (OpenXRViewportCompositionLayerProvider)0x0) {
      uVar10 = *(undefined8 *)(this + 0x54);
    }
    else {
      OpenXRAPI::OpenXRSwapChainInfo::release();
      uVar10 = *(undefined8 *)(this + 0x54);
    }
    piVar4 = *(int **)this;
    iVar3 = *piVar4;
    if (((iVar3 == 0x3b9b0c68) || (iVar3 == 0x3b9c2d78)) || (iVar3 == 0x24)) {
      OVar2 = this[0x18];
      uVar5 = *(undefined8 *)(*(long *)(this + 0x60) + 0x188);
      *(long *)(piVar4 + 10) = lVar8;
      piVar4[0xc] = 0;
      piVar4[0xd] = 0;
      *(undefined8 *)(piVar4 + 6) = uVar5;
      *(undefined8 *)(piVar4 + 0xe) = uVar10;
      piVar4[0x10] = 0;
      if (OVar2 == (OpenXRViewportCompositionLayerProvider)0x0) {
        return piVar4;
      }
      this[0x18] = (OpenXRViewportCompositionLayerProvider)0x0;
      lVar8 = OpenXRAPI::get_registered_extension_wrappers();
      puVar12 = *(undefined8 **)(lVar8 + 8);
      if (puVar12 == (undefined8 *)0x0) {
        lVar8 = *(long *)this;
        lVar11 = 0;
      }
      else {
        lVar8 = *(long *)this;
        puVar1 = puVar12 + puVar12[-1];
        if (puVar1 == puVar12) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          do {
            while( true ) {
              pcVar6 = *(code **)(*(long *)*puVar12 + 0xd8);
              if (pcVar6 == OpenXRExtensionWrapper::
                            set_viewport_composition_layer_and_get_next_pointer) break;
              lVar9 = (*pcVar6)((long *)*puVar12,lVar8,this + 0x10,lVar11);
              lVar8 = *(long *)this;
              if (lVar9 != 0) {
                lVar11 = lVar9;
              }
              puVar12 = puVar12 + 1;
              if (puVar1 == puVar12) goto LAB_00100f62;
            }
            puVar12 = puVar12 + 1;
          } while (puVar1 != puVar12);
        }
      }
LAB_00100f62:
      *(long *)(lVar8 + 8) = lVar11;
      return *(int **)this;
    }
  }
  return (int *)0x0;
}



/* OpenXRCompositionLayerExtension::get_composition_layer(int) */

undefined8 __thiscall
OpenXRCompositionLayerExtension::get_composition_layer
          (OpenXRCompositionLayerExtension *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 0x18);
  lVar3 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar4 = *(long *)(lVar1 + -8);
      goto LAB_00100fc9;
    }
  }
  else if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + -8);
    if (lVar3 < lVar4) {
      uVar2 = OpenXRViewportCompositionLayerProvider::get_composition_layer
                        (*(OpenXRViewportCompositionLayerProvider **)(lVar1 + lVar3 * 8));
      return uVar2;
    }
    goto LAB_00100fc9;
  }
  lVar4 = 0;
LAB_00100fc9:
  _err_print_index_error
            ("get_composition_layer",
             "modules/openxr/extensions/openxr_composition_layer_extension.cpp",0x69,lVar3,lVar4,
             "p_index","composition_layers.size()","",false,false);
  return 0;
}



/* non-virtual thunk to OpenXRCompositionLayerExtension::get_composition_layer(int) */

undefined8 __thiscall
OpenXRCompositionLayerExtension::get_composition_layer
          (OpenXRCompositionLayerExtension *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 0x10);
  lVar3 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar4 = *(long *)(lVar1 + -8);
      goto LAB_00101059;
    }
  }
  else if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + -8);
    if (lVar3 < lVar4) {
      uVar2 = OpenXRViewportCompositionLayerProvider::get_composition_layer
                        (*(OpenXRViewportCompositionLayerProvider **)(lVar1 + lVar3 * 8));
      return uVar2;
    }
    goto LAB_00101059;
  }
  lVar4 = 0;
LAB_00101059:
  _err_print_index_error
            ("get_composition_layer",
             "modules/openxr/extensions/openxr_composition_layer_extension.cpp",0x69,lVar3,lVar4,
             "p_index","composition_layers.size()","",false,false);
  return 0;
}



/* OpenXRCompositionLayerExtension::unregister_viewport_composition_layer_provider(OpenXRViewportCompositionLayerProvider*)
    */

void __thiscall
OpenXRCompositionLayerExtension::unregister_viewport_composition_layer_provider
          (OpenXRCompositionLayerExtension *this,OpenXRViewportCompositionLayerProvider *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x18);
  if ((lVar1 != 0) && (lVar3 = *(long *)(lVar1 + -8), 0 < lVar3)) {
    lVar2 = 0;
    do {
      if (*(OpenXRViewportCompositionLayerProvider **)(lVar1 + lVar2 * 8) == param_1) {
        if (lVar3 <= lVar2) {
          _err_print_index_error
                    ("remove_at","./core/templates/cowdata.h",0xe4,lVar2,lVar3,"p_index","size()",""
                     ,false,false);
          return;
        }
        CowData<OpenXRViewportCompositionLayerProvider*>::_copy_on_write
                  ((CowData<OpenXRViewportCompositionLayerProvider*> *)(this + 0x18));
        lVar1 = *(long *)(this + 0x18);
        if (lVar1 == 0) {
          lVar3 = -1;
        }
        else {
          lVar3 = *(long *)(lVar1 + -8) + -1;
          if (lVar2 < lVar3) {
            memmove((void *)(lVar1 + lVar2 * 8),(void *)(lVar1 + 8 + lVar2 * 8),(lVar3 - lVar2) * 8)
            ;
          }
        }
        CowData<OpenXRViewportCompositionLayerProvider*>::resize<false>
                  ((CowData<OpenXRViewportCompositionLayerProvider*> *)(this + 0x18),lVar3);
        return;
      }
      lVar2 = lVar2 + 1;
    } while (lVar3 != lVar2);
    return;
  }
  return;
}



/* OpenXRCompositionLayerExtension::register_viewport_composition_layer_provider(OpenXRViewportCompositionLayerProvider*)
    */

void __thiscall
OpenXRCompositionLayerExtension::register_viewport_composition_layer_provider
          (OpenXRCompositionLayerExtension *this,OpenXRViewportCompositionLayerProvider *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 0x18) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 0x18) + -8) + 1;
  }
  iVar1 = CowData<OpenXRViewportCompositionLayerProvider*>::resize<false>
                    ((CowData<OpenXRViewportCompositionLayerProvider*> *)(this + 0x18),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 0x18) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 0x18) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<OpenXRViewportCompositionLayerProvider*>::_copy_on_write
                  ((CowData<OpenXRViewportCompositionLayerProvider*> *)(this + 0x18));
        *(OpenXRViewportCompositionLayerProvider **)(*(long *)(this + 0x18) + lVar3 * 8) = param_1;
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



/* OpenXRExtensionWrapper::set_system_properties_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_system_properties_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_session_create_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_session_create_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer(int, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer
          (OpenXRExtensionWrapper *this,int param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::set_projection_views_and_get_next_pointer(int, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_projection_views_and_get_next_pointer
          (OpenXRExtensionWrapper *this,int param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::get_suggested_tracker_names() */

OpenXRExtensionWrapper * __thiscall
OpenXRExtensionWrapper::get_suggested_tracker_names(OpenXRExtensionWrapper *this)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}



/* OpenXRExtensionWrapper::on_register_metadata() */

void OpenXRExtensionWrapper::on_register_metadata(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_before_instance_created() */

void OpenXRExtensionWrapper::on_before_instance_created(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_instance_destroyed() */

void OpenXRExtensionWrapper::on_instance_destroyed(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_process() */

void OpenXRExtensionWrapper::on_process(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_main_swapchains_created() */

void OpenXRExtensionWrapper::on_main_swapchains_created(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_pre_draw_viewport(RID) */

void OpenXRExtensionWrapper::on_pre_draw_viewport(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_post_draw_viewport(RID) */

void OpenXRExtensionWrapper::on_post_draw_viewport(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_idle() */

void OpenXRExtensionWrapper::on_state_idle(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_ready() */

void OpenXRExtensionWrapper::on_state_ready(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_synchronized() */

void OpenXRExtensionWrapper::on_state_synchronized(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_visible() */

void OpenXRExtensionWrapper::on_state_visible(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_focused() */

void OpenXRExtensionWrapper::on_state_focused(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_stopping() */

void OpenXRExtensionWrapper::on_state_stopping(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_loss_pending() */

void OpenXRExtensionWrapper::on_state_loss_pending(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_exiting() */

void OpenXRExtensionWrapper::on_state_exiting(void)

{
  return;
}



/* OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer(XrCompositionLayerBaseHeader
   const*, Dictionary const&, void*) */

void OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer
               (XrCompositionLayerBaseHeader *param_1,Dictionary *param_2,void *param_3)

{
  return;
}



/* OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed(XrCompositionLayerBaseHeader
   const*) */

void OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed
               (XrCompositionLayerBaseHeader *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List<PropertyInfo,
   DefaultAllocator>*) */

void OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer(Dictionary
   const&, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,Dictionary *param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::on_event_polled(XrEventDataBuffer const&) */

undefined8 OpenXRExtensionWrapper::on_event_polled(XrEventDataBuffer *param_1)

{
  return 0;
}



/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults() */

OpenXRExtensionWrapper * __thiscall
OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults
          (OpenXRExtensionWrapper *this)

{
  Dictionary::Dictionary((Dictionary *)this);
  return this;
}



/* CowData<OpenXRViewportCompositionLayerProvider*>::_copy_on_write() [clone .isra.0] [clone .cold]
    */

void CowData<OpenXRViewportCompositionLayerProvider*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, bool*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, bool*> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
::operator[](HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
             *this,String *param_1)

{
  long *plVar1;
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
  undefined8 *puVar42;
  void *pvVar43;
  ulong uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint *puVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00101f78:
    uVar39 = (ulong)uVar55;
    uVar44 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar43 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar43 + uVar48)) && (pvVar43 < (void *)((long)pvVar2 + uVar44))
         ) {
        uVar44 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar44 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar44 * 8) = 0;
          uVar44 = uVar44 + 1;
        } while (uVar39 != uVar44);
        goto LAB_00101e0a;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_00101e0e:
      if (iVar45 != 0) {
LAB_00101e16:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar52 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar53 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar52 != 0) {
          uVar38 = uVar52;
        }
        uVar54 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar46 = SUB168(auVar16 * auVar32,8);
        uVar52 = *(uint *)(lVar53 + lVar46 * 4);
        uVar51 = SUB164(auVar16 * auVar32,8);
        if (uVar52 != 0) {
          do {
            if (uVar38 == uVar52) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
                *(undefined8 *)(pauVar41[1] + 8) = 0;
                goto LAB_00101cbb;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar51 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar46 = SUB168(auVar17 * auVar33,8);
            uVar52 = *(uint *)(lVar53 + lVar46 * 4);
            uVar51 = SUB164(auVar17 * auVar33,8);
          } while ((uVar52 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar52 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar51) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar54 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar55;
      goto LAB_001018f4;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_001018f4;
    if (iVar45 != 0) goto LAB_00101e16;
LAB_0010191a:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00101cbb;
    }
    uVar39 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar39 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar43 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar44 = uVar48 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar55 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar51 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar38);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar55 * lVar53;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar44;
          lVar46 = SUB168(auVar4 * auVar20,8);
          puVar50 = (uint *)(lVar3 + lVar46 * 4);
          iVar45 = SUB164(auVar4 * auVar20,8);
          uVar52 = *puVar50;
          uVar40 = *(undefined8 *)((long)pvVar43 + uVar39 * 8);
          while (uVar52 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar52 * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar44;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar5 * auVar21,8)) * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            uVar54 = SUB164(auVar6 * auVar22,8);
            uVar49 = uVar40;
            if (uVar54 < uVar51) {
              *puVar50 = uVar55;
              puVar42 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar42;
              *puVar42 = uVar40;
              uVar55 = uVar52;
              uVar51 = uVar54;
            }
            uVar51 = uVar51 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar44;
            lVar46 = SUB168(auVar7 * auVar23,8);
            puVar50 = (uint *)(lVar3 + lVar46 * 4);
            iVar45 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar49;
            uVar52 = *puVar50;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar40;
          *puVar50 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar55);
    if (iVar45 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar51 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar46 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar53 + lVar46 * 4);
      uVar52 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
              goto LAB_00101cbb;
            }
            lVar53 = *(long *)(this + 0x10);
          }
          uVar51 = uVar51 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar52 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar46 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar53 + lVar46 * 4);
          uVar52 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar52 + uVar55) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar51 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_00101f78;
LAB_00101e0a:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_00101e0e;
    }
LAB_001018f4:
    if ((float)uVar39 * __LC14 < (float)(iVar45 + 1)) goto LAB_0010191a;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_00101f4b:
    *(undefined8 *)(pauVar41[1] + 8) = 0;
LAB_00101ba3:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_00101bb0;
LAB_00101de5:
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 == 0) goto LAB_00101f4b;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00101ba3;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_00101de5;
LAB_00101bb0:
    *puVar42 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar42;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar37 != 0) {
    uVar55 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar55 * lVar53;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar47 = SUB168(auVar8 * auVar24,8);
  lVar46 = *(long *)(this + 8);
  puVar50 = (uint *)(lVar3 + lVar47 * 4);
  iVar45 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar50;
  pauVar57 = pauVar41;
  if (uVar38 != 0) {
    uVar52 = 0;
    pauVar56 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar45) - SUB164(auVar9 * auVar25,8)) * lVar53;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar51 = SUB164(auVar10 * auVar26,8);
      pauVar57 = pauVar56;
      if (uVar51 < uVar52) {
        *puVar50 = uVar55;
        puVar42 = (undefined8 *)(lVar46 + lVar47 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar42;
        *puVar42 = pauVar56;
        uVar52 = uVar51;
        uVar55 = uVar38;
      }
      uVar52 = uVar52 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar45 + 1) * lVar53;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar47 = SUB168(auVar11 * auVar27,8);
      puVar50 = (uint *)(lVar3 + lVar47 * 4);
      iVar45 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar50;
      pauVar56 = pauVar57;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar57;
  *puVar50 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00101cbb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00102218) */
/* WARNING: Removing unreachable block (ram,0x00102348) */
/* WARNING: Removing unreachable block (ram,0x00102510) */
/* WARNING: Removing unreachable block (ram,0x00102354) */
/* WARNING: Removing unreachable block (ram,0x0010235e) */
/* WARNING: Removing unreachable block (ram,0x001024f0) */
/* WARNING: Removing unreachable block (ram,0x0010236a) */
/* WARNING: Removing unreachable block (ram,0x00102374) */
/* WARNING: Removing unreachable block (ram,0x001024d0) */
/* WARNING: Removing unreachable block (ram,0x00102380) */
/* WARNING: Removing unreachable block (ram,0x0010238a) */
/* WARNING: Removing unreachable block (ram,0x001024b0) */
/* WARNING: Removing unreachable block (ram,0x00102396) */
/* WARNING: Removing unreachable block (ram,0x001023a0) */
/* WARNING: Removing unreachable block (ram,0x00102490) */
/* WARNING: Removing unreachable block (ram,0x001023ac) */
/* WARNING: Removing unreachable block (ram,0x001023b6) */
/* WARNING: Removing unreachable block (ram,0x00102470) */
/* WARNING: Removing unreachable block (ram,0x001023c2) */
/* WARNING: Removing unreachable block (ram,0x001023cc) */
/* WARNING: Removing unreachable block (ram,0x00102450) */
/* WARNING: Removing unreachable block (ram,0x001023d4) */
/* WARNING: Removing unreachable block (ram,0x001023ea) */
/* WARNING: Removing unreachable block (ram,0x001023f6) */
/* String vformat<XrStructureType>(String const&, XrStructureType const) */

undefined8 * vformat<XrStructureType>(undefined8 *param_1,bool *param_2,int param_3)

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



/* CowData<OpenXRViewportCompositionLayerProvider*>::_realloc(long) */

undefined8 __thiscall
CowData<OpenXRViewportCompositionLayerProvider*>::_realloc
          (CowData<OpenXRViewportCompositionLayerProvider*> *this,long param_1)

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
/* Error CowData<OpenXRViewportCompositionLayerProvider*>::resize<false>(long) */

undefined8 __thiscall
CowData<OpenXRViewportCompositionLayerProvider*>::resize<false>
          (CowData<OpenXRViewportCompositionLayerProvider*> *this,long param_1)

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
LAB_00102870:
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
  if (lVar8 == 0) goto LAB_00102870;
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
        goto LAB_00102781;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00102781:
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


