
/* void ClassDB::register_class<OpenXRAPIExtension>(bool) [clone .part.0] */

void ClassDB::register_class<OpenXRAPIExtension>(bool param_1)

{
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  _global_unlock();
  return;
}



/* CowData<void (*)()>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<void(*)()>::_copy_on_write(CowData<void(*)()> *this)

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
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = *(undefined4 *)param_1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
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



/* Node3D::initialize_class() [clone .part.0] */

void Node3D::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if ((code *)PTR__bind_methods_0010f008 != Node::_bind_methods) {
      Node::_bind_methods();
    }
    Node::initialize_class()::initialized = '\x01';
  }
  local_58 = "Node";
  local_68 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "Node3D";
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
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Node::_bind_methods) {
    Node3D::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Resource::initialize_class() [clone .part.0] */

void Resource::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if ((code *)PTR__bind_methods_0010f008 != RefCounted::_bind_methods) {
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
  if ((code *)PTR__bind_methods_0010f010 != RefCounted::_bind_methods) {
    Resource::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OpenXRCompositionLayer::initialize_class() [clone .part.0] */

void OpenXRCompositionLayer::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (Node3D::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_0010f008 != Node::_bind_methods) {
        Node::_bind_methods();
      }
      Node::initialize_class()::initialized = '\x01';
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"Node");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"Node3D");
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
    Node3D::_bind_methods();
    Node3D::initialize_class()::initialized = '\x01';
  }
  local_58 = "Node3D";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "OpenXRCompositionLayer";
  local_70 = 0;
  local_50 = 0x16;
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
  if ((code *)PTR__bind_methods_0010f018 != Node3D::_bind_methods) {
    OpenXRCompositionLayer::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* uninitialize_openxr_module(ModuleInitializationLevel) */

void uninitialize_openxr_module(int param_1)

{
  OpenXRAPI *pOVar1;
  char cVar2;
  Ref *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 2) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00100def;
  }
  if (openxr_interface != (Object *)0x0) {
    cVar2 = (**(code **)(*(long *)openxr_interface + 0x160))();
    if (cVar2 != '\0') {
      (**(code **)(*(long *)openxr_interface + 0x170))();
    }
    pRVar3 = (Ref *)XRServer::get_singleton();
    if (pRVar3 != (Ref *)0x0) {
      if (openxr_interface == (Object *)0x0) {
        XRServer::get_primary_interface();
        if (local_38 != (Object *)0x0) {
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
            (**(code **)(*(long *)local_38 + 0x140))(local_38);
            Memory::free_static(local_38,false);
          }
          goto LAB_00100beb;
        }
LAB_00100bd0:
        local_38 = (Object *)0x0;
        XRServer::set_primary_interface(pRVar3);
        Ref<XRInterface>::unref((Ref<XRInterface> *)&local_38);
      }
      else {
        pOVar4 = (Object *)
                 __dynamic_cast(openxr_interface,&Object::typeinfo,&XRInterface::typeinfo,0);
        if (pOVar4 == (Object *)0x0) {
          XRServer::get_primary_interface();
          pOVar5 = local_38;
          if (local_38 == (Object *)0x0) goto LAB_00100bd0;
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_38);
joined_r0x00100eb7:
            pOVar6 = local_38;
            if (cVar2 != '\0') {
LAB_00100b71:
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
              if (pOVar4 != (Object *)0x0) goto LAB_00100bb2;
            }
          }
        }
        else {
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            XRServer::get_primary_interface();
            pOVar5 = local_38;
            if (local_38 == (Object *)0x0) goto LAB_00100bd0;
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
              pOVar4 = (Object *)0x0;
              cVar2 = predelete_handler(local_38);
              goto joined_r0x00100eb7;
            }
          }
          else {
            XRServer::get_primary_interface();
            pOVar5 = local_38;
            if (local_38 == (Object *)0x0) {
              cVar2 = RefCounted::unreference();
              if ((cVar2 == '\0') || (cVar2 = predelete_handler(pOVar4), cVar2 == '\0'))
              goto LAB_00100beb;
LAB_00100da0:
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
            else {
              cVar2 = RefCounted::unreference();
              if ((cVar2 != '\0') &&
                 (cVar2 = predelete_handler(local_38), pOVar6 = local_38, cVar2 != '\0'))
              goto LAB_00100b71;
LAB_00100bb2:
              cVar2 = RefCounted::unreference();
              if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0'))
              goto LAB_00100da0;
            }
            if (pOVar4 == pOVar5) goto LAB_00100bd0;
          }
        }
      }
LAB_00100beb:
      local_38 = (Object *)0x0;
      if (((openxr_interface != (Object *)0x0) &&
          (pOVar4 = (Object *)
                    __dynamic_cast(openxr_interface,&Object::typeinfo,&XRInterface::typeinfo,0),
          pOVar4 != (Object *)0x0)) &&
         (local_38 = pOVar4, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
        local_38 = (Object *)0x0;
      }
      XRServer::remove_interface(pRVar3);
      if (((local_38 != (Object *)0x0) &&
          (cVar2 = RefCounted::unreference(), pOVar4 = local_38, cVar2 != '\0')) &&
         (cVar2 = predelete_handler(local_38), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    if (((openxr_interface != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar4 = openxr_interface, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(openxr_interface), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    openxr_interface = (Object *)0x0;
  }
  if (openxr_api != (OpenXRAPI *)0x0) {
    OpenXRAPI::finish();
    pOVar1 = openxr_api;
    OpenXRAPI::~OpenXRAPI(openxr_api);
    Memory::free_static(pOVar1,false);
    openxr_api = (OpenXRAPI *)0x0;
  }
  pOVar4 = openxr_interaction_profile_metadata;
  if (openxr_interaction_profile_metadata != (Object *)0x0) {
    cVar2 = predelete_handler(openxr_interaction_profile_metadata);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    openxr_interaction_profile_metadata = (Object *)0x0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    OpenXRAPI::cleanup_extension_wrappers();
    return;
  }
LAB_00100def:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* initialize_openxr_module(ModuleInitializationLevel) */

void initialize_openxr_module(int param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  Ref *pRVar7;
  OpenXRInterface *this;
  OpenXRInteractionProfileMetadata *this_00;
  OpenXRAPI *pOVar8;
  OpenXRPalmPoseExtension *this_01;
  OpenXRLocalFloorExtension *this_02;
  OpenXRExtensionWrapper *pOVar9;
  OpenXRCompositionLayerDepthExtension *this_03;
  OpenXRCompositionLayerExtension *this_04;
  OpenXRDisplayRefreshRateExtension *this_05;
  OpenXREyeGazeInteractionExtension *this_06;
  OpenXRHandInteractionExtension *this_07;
  OpenXRVisibilityMaskExtension *this_08;
  OpenXRDPadBindingExtension *this_09;
  long lVar10;
  OpenXRDebugUtilsExtension *this_10;
  OpenXRHandTrackingExtension *this_11;
  OpenXRValveAnalogThresholdExtension *this_12;
  long *plVar11;
  long lVar12;
  long in_FS_OFFSET;
  OpenXRInterface *local_58;
  OpenXRInterface *local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    ClassDB::register_class<OpenXRExtensionWrapperExtension>(false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      ClassDB::register_class<OpenXRAPIExtension>(false);
      return;
    }
    goto LAB_001019d4;
  }
  if (param_1 == 1) {
    cVar2 = OpenXRAPI::openxr_is_enabled(false);
    if (cVar2 != '\0') {
      this_01 = (OpenXRPalmPoseExtension *)operator_new(0x10,"");
      OpenXRPalmPoseExtension::OpenXRPalmPoseExtension(this_01);
      OpenXRAPI::register_extension_wrapper((OpenXRExtensionWrapper *)this_01);
      this_02 = (OpenXRLocalFloorExtension *)operator_new(0x10,"");
      OpenXRLocalFloorExtension::OpenXRLocalFloorExtension(this_02);
      OpenXRAPI::register_extension_wrapper((OpenXRExtensionWrapper *)this_02);
      pOVar9 = (OpenXRExtensionWrapper *)operator_new(0x10,"");
      *(code **)pOVar9 = OpenXRCompositionLayerExtension::OpenXRCompositionLayerExtension;
      pOVar9[8] = (OpenXRExtensionWrapper)0x0;
      OpenXRAPI::register_extension_wrapper(pOVar9);
      this_03 = (OpenXRCompositionLayerDepthExtension *)operator_new(0x18,"");
      OpenXRCompositionLayerDepthExtension::OpenXRCompositionLayerDepthExtension(this_03);
      OpenXRAPI::register_extension_wrapper((OpenXRExtensionWrapper *)this_03);
      this_04 = (OpenXRCompositionLayerExtension *)operator_new(0x28,"");
      OpenXRCompositionLayerExtension::OpenXRCompositionLayerExtension(this_04);
      OpenXRAPI::register_extension_wrapper((OpenXRExtensionWrapper *)this_04);
      pOVar9 = (OpenXRExtensionWrapper *)operator_new(0x10,"");
      *(undefined **)pOVar9 = &OpenXRHuaweiControllerExtension::vtable;
      *(undefined2 *)(pOVar9 + 8) = 0;
      pOVar9[10] = (OpenXRExtensionWrapper)0x0;
      OpenXRAPI::register_extension_wrapper(pOVar9);
      pOVar9 = (OpenXRExtensionWrapper *)operator_new(0x10,"");
      *(code **)pOVar9 = OpenXRDisplayRefreshRateExtension::OpenXRDisplayRefreshRateExtension;
      pOVar9[8] = (OpenXRExtensionWrapper)0x0;
      OpenXRAPI::register_extension_wrapper(pOVar9);
      pOVar9 = (OpenXRExtensionWrapper *)operator_new(0x10,"");
      *(undefined **)pOVar9 = &OpenXRWMRControllerExtension::vtable;
      pOVar9[8] = (OpenXRExtensionWrapper)0x0;
      OpenXRAPI::register_extension_wrapper(pOVar9);
      this_05 = (OpenXRDisplayRefreshRateExtension *)operator_new(0x28,"");
      OpenXRDisplayRefreshRateExtension::OpenXRDisplayRefreshRateExtension(this_05);
      OpenXRAPI::register_extension_wrapper((OpenXRExtensionWrapper *)this_05);
      pOVar9 = (OpenXRExtensionWrapper *)operator_new(0x10,"");
      *(undefined2 *)(pOVar9 + 8) = 0;
      *(undefined **)pOVar9 = &OpenXRMetaControllerExtension::vtable;
      pOVar9[10] = (OpenXRExtensionWrapper)0x0;
      OpenXRAPI::register_extension_wrapper(pOVar9);
      pOVar9 = (OpenXRExtensionWrapper *)operator_new(0x10,"");
      *(code **)pOVar9 = OpenXREyeGazeInteractionExtension::OpenXREyeGazeInteractionExtension;
      pOVar9[8] = (OpenXRExtensionWrapper)0x0;
      OpenXRAPI::register_extension_wrapper(pOVar9);
      pOVar9 = (OpenXRExtensionWrapper *)operator_new(0x10,"");
      *(undefined2 *)(pOVar9 + 8) = 0;
      *(code **)pOVar9 = OpenXRHandInteractionExtension::OpenXRHandInteractionExtension;
      pOVar9[10] = (OpenXRExtensionWrapper)0x0;
      OpenXRAPI::register_extension_wrapper(pOVar9);
      this_06 = (OpenXREyeGazeInteractionExtension *)operator_new(0x40,"");
      OpenXREyeGazeInteractionExtension::OpenXREyeGazeInteractionExtension(this_06);
      OpenXRAPI::register_extension_wrapper((OpenXRExtensionWrapper *)this_06);
      this_07 = (OpenXRHandInteractionExtension *)operator_new(0x10,"");
      OpenXRHandInteractionExtension::OpenXRHandInteractionExtension(this_07);
      OpenXRAPI::register_extension_wrapper((OpenXRExtensionWrapper *)this_07);
      pOVar9 = (OpenXRExtensionWrapper *)operator_new(0x10,"");
      *(code **)pOVar9 = Variant::operator_cast_to_int;
      pOVar9[8] = (OpenXRExtensionWrapper)0x0;
      OpenXRAPI::register_extension_wrapper(pOVar9);
      this_08 = (OpenXRVisibilityMaskExtension *)operator_new(0xb8,"");
      OpenXRVisibilityMaskExtension::OpenXRVisibilityMaskExtension(this_08);
      OpenXRAPI::register_extension_wrapper((OpenXRExtensionWrapper *)this_08);
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_50,"xr/openxr/extensions/debug_utils",false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      iVar5 = Variant::operator_cast_to_int((Variant *)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != (OpenXRInterface *)0x0)) {
        StringName::unref();
      }
      if (0 < iVar5) {
        this_10 = (OpenXRDebugUtilsExtension *)operator_new(0x48,"");
        OpenXRDebugUtilsExtension::OpenXRDebugUtilsExtension(this_10);
        OpenXRAPI::register_extension_wrapper((OpenXRExtensionWrapper *)this_10);
      }
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_50,"xr/openxr/extensions/hand_tracking",false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      bVar3 = Variant::operator_cast_to_bool((Variant *)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != (OpenXRInterface *)0x0)) {
        StringName::unref();
      }
      if (bVar3) {
        this_11 = (OpenXRHandTrackingExtension *)operator_new(0xfd0,"");
        OpenXRHandTrackingExtension::OpenXRHandTrackingExtension(this_11);
        OpenXRAPI::register_extension_wrapper((OpenXRExtensionWrapper *)this_11);
      }
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_50,"xr/openxr/binding_modifiers/analog_threshold",false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      bVar3 = Variant::operator_cast_to_bool((Variant *)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != (OpenXRInterface *)0x0)) {
        StringName::unref();
      }
      if (bVar3) {
        this_12 = (OpenXRValveAnalogThresholdExtension *)operator_new(0x10,"");
        OpenXRValveAnalogThresholdExtension::OpenXRValveAnalogThresholdExtension(this_12);
        OpenXRAPI::register_extension_wrapper((OpenXRExtensionWrapper *)this_12);
      }
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_50,"xr/openxr/binding_modifiers/dpad_binding",false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      bVar3 = Variant::operator_cast_to_bool((Variant *)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != (OpenXRInterface *)0x0)) {
        StringName::unref();
      }
      if (bVar3) {
        this_09 = (OpenXRDPadBindingExtension *)operator_new(0x10,"");
        OpenXRDPadBindingExtension::OpenXRDPadBindingExtension(this_09);
        OpenXRAPI::register_extension_wrapper((OpenXRExtensionWrapper *)this_09);
      }
    }
    cVar2 = OpenXRAPI::openxr_is_enabled(true);
    if (cVar2 != '\0') {
      this_00 = (OpenXRInteractionProfileMetadata *)operator_new(0x1c8,"");
      OpenXRInteractionProfileMetadata::OpenXRInteractionProfileMetadata(this_00);
      postinitialize_handler((Object *)this_00);
      openxr_interaction_profile_metadata = this_00;
      pOVar8 = (OpenXRAPI *)operator_new(0x590,"");
      OpenXRAPI::OpenXRAPI(pOVar8);
      openxr_api = pOVar8;
      Main::get_rendering_driver_name();
      cVar2 = OpenXRAPI::initialize((String *)pOVar8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if (cVar2 == '\0') {
        _err_print_error("initialize_openxr_module","modules/openxr/register_types.cpp",0xaf,
                         "OpenXR was requested but failed to start.\nPlease check if your HMD is connected.\nGodot will start in normal mode.\n"
                         ,0,1);
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_50,"xr/openxr/startup_alert",false);
        ProjectSettings::get_setting_with_override((StringName *)local_48);
        bVar3 = Variant::operator_cast_to_bool((Variant *)local_48);
        if (Variant::needs_deinit[local_48[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_50 != (OpenXRInterface *)0x0)) {
          StringName::unref();
        }
        if (bVar3) {
          plVar11 = (long *)OS::get_singleton();
          pcVar1 = *(code **)(*plVar11 + 0xa8);
          local_50 = (OpenXRInterface *)0x0;
          String::parse_latin1((String *)&local_50,"ALERT!");
          local_58 = (OpenXRInterface *)0x0;
          String::parse_latin1
                    ((String *)&local_58,
                     "OpenXR was requested but failed to start.\nPlease check if your HMD is connected.\nGodot will start in normal mode.\n"
                    );
          (*pcVar1)(plVar11,&local_58,(CowData<char32_t> *)&local_50);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        }
        pOVar8 = openxr_api;
        OpenXRAPI::~OpenXRAPI(openxr_api);
        Memory::free_static(pOVar8,false);
        openxr_api = (OpenXRAPI *)0x0;
      }
    }
  }
  else if (param_1 == 2) {
    ClassDB::register_class<OpenXRInterface>(false);
    ClassDB::register_class<OpenXRAction>(false);
    ClassDB::register_class<OpenXRActionSet>(false);
    ClassDB::register_class<OpenXRActionMap>(false);
    ClassDB::register_class<OpenXRInteractionProfileMetadata>(false);
    ClassDB::register_class<OpenXRIPBinding>(false);
    ClassDB::register_class<OpenXRInteractionProfile>(false);
    ClassDB::register_abstract_class<OpenXRBindingModifier>();
    ClassDB::register_class<OpenXRIPBindingModifier>(true);
    ClassDB::register_class<OpenXRActionBindingModifier>(true);
    ClassDB::register_class<OpenXRAnalogThresholdModifier>(false);
    ClassDB::register_class<OpenXRDpadBindingModifier>(false);
    ClassDB::register_abstract_class<OpenXRHapticBase>();
    ClassDB::register_class<OpenXRHapticVibration>(false);
    _global_lock();
    if (OpenXRCompositionLayer::initialize_class()::initialized == '\0') {
      OpenXRCompositionLayer::initialize_class();
    }
    local_58 = (OpenXRInterface *)0x0;
    String::parse_latin1((String *)&local_58,"OpenXRCompositionLayer");
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    puVar6 = (undefined4 *)
             HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
             ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                       *)&ClassDB::classes,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_50 != (OpenXRInterface *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if (puVar6 == (undefined4 *)0x0) {
      _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                       "Parameter \"t\" is null.",0,0);
      _global_unlock();
    }
    else {
      *(undefined1 *)((long)puVar6 + 0x289) = 1;
      *(undefined4 **)(puVar6 + 4) = &OpenXRCompositionLayer::get_class_ptr_static()::ptr;
      *puVar6 = (undefined4)ClassDB::current_api;
      _global_unlock();
    }
    ClassDB::register_class<OpenXRCompositionLayerEquirect>(false);
    ClassDB::register_class<OpenXRCompositionLayerCylinder>(false);
    ClassDB::register_class<OpenXRCompositionLayerQuad>(false);
    ClassDB::register_class<OpenXRHand>(false);
    ClassDB::register_class<OpenXRVisibilityMask>(false);
    pRVar7 = (Ref *)XRServer::get_singleton();
    if (pRVar7 != (Ref *)0x0) {
      this = (OpenXRInterface *)operator_new(0x450,"");
      OpenXRInterface::OpenXRInterface(this);
      postinitialize_handler((Object *)this);
      local_50 = (OpenXRInterface *)0x0;
      local_58 = this;
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') {
        local_58 = (OpenXRInterface *)0x0;
        Ref<OpenXRInterface>::unref((Ref<OpenXRInterface> *)&local_50);
        if (openxr_interface != (OpenXRInterface *)0x0) {
          local_50 = openxr_interface;
          openxr_interface = (OpenXRInterface *)0x0;
LAB_001016a7:
          Ref<OpenXRInterface>::unref((Ref<OpenXRInterface> *)&local_50);
        }
      }
      else {
        Ref<OpenXRInterface>::unref((Ref<OpenXRInterface> *)&local_50);
        if (openxr_interface != this) {
          local_50 = openxr_interface;
          openxr_interface = this;
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            openxr_interface = (OpenXRInterface *)0x0;
          }
          goto LAB_001016a7;
        }
      }
      Ref<OpenXRInterface>::unref((Ref<OpenXRInterface> *)&local_58);
      local_50 = (OpenXRInterface *)0x0;
      if (openxr_interface != (OpenXRInterface *)0x0) {
        lVar10 = __dynamic_cast(openxr_interface,&Object::typeinfo,&XRInterface::typeinfo,0);
        if (lVar10 != 0) {
          local_50 = (OpenXRInterface *)lVar10;
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            local_50 = (OpenXRInterface *)0x0;
          }
        }
      }
      XRServer::add_interface(pRVar7);
      Ref<XRInterface>::unref((Ref<XRInterface> *)&local_50);
      cVar2 = OpenXRInterface::initialize_on_startup();
      if (cVar2 != '\0') {
        (**(code **)(*(long *)openxr_interface + 0x168))();
      }
    }
    uVar4 = ClassDB::get_current_api();
    ClassDB::set_current_api();
    ClassDB::register_abstract_class<OpenXRInteractionProfileEditorBase>();
    ClassDB::register_class<OpenXRInteractionProfileEditor>(false);
    ClassDB::register_class<OpenXRBindingModifierEditor>(false);
    ClassDB::set_current_api(uVar4);
    if (_OpenXRDebugUtilsExtension == 0) {
      lVar10 = 1;
    }
    else {
      lVar10 = *(long *)(_OpenXRDebugUtilsExtension + -8) + 1;
    }
    iVar5 = CowData<void(*)()>::resize<false>
                      ((CowData<void(*)()> *)OpenXRDebugUtilsExtension::OpenXRDebugUtilsExtension,
                       lVar10);
    if (iVar5 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
        return;
      }
      goto LAB_001019d4;
    }
    if (_OpenXRDebugUtilsExtension == 0) {
      lVar12 = -1;
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(_OpenXRDebugUtilsExtension + -8);
      lVar12 = lVar10 + -1;
      if (-1 < lVar12) {
        CowData<void(*)()>::_copy_on_write
                  ((CowData<void(*)()> *)OpenXRDebugUtilsExtension::OpenXRDebugUtilsExtension);
        *(undefined8 *)(_OpenXRDebugUtilsExtension + lVar12 * 8) = 0x100000;
        goto LAB_001010d5;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar12,lVar10,"p_index","size()","",false,
               false);
  }
LAB_001010d5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001019d4:
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



/* OpenXRAction::is_class_ptr(void*) const */

uint __thiscall OpenXRAction::is_class_ptr(OpenXRAction *this,void *param_1)

{
  return (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* OpenXRAction::_getv(StringName const&, Variant&) const */

undefined8 OpenXRAction::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRAction::_setv(StringName const&, Variant const&) */

undefined8 OpenXRAction::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRAction::_validate_propertyv(PropertyInfo&) const */

void OpenXRAction::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* OpenXRAction::_property_can_revertv(StringName const&) const */

undefined8 OpenXRAction::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* OpenXRAction::_property_get_revertv(StringName const&, Variant&) const */

undefined8 OpenXRAction::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRAction::_notificationv(int, bool) */

void OpenXRAction::_notificationv(int param_1,bool param_2)

{
  return;
}



/* OpenXRIPBindingModifier::is_class_ptr(void*) const */

uint __thiscall OpenXRIPBindingModifier::is_class_ptr(OpenXRIPBindingModifier *this,void *param_1)

{
  return (uint)CONCAT71(0x10ba,(undefined4 *)param_1 ==
                               &OpenXRBindingModifier::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* OpenXRIPBindingModifier::_getv(StringName const&, Variant&) const */

undefined8 OpenXRIPBindingModifier::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRIPBindingModifier::_setv(StringName const&, Variant const&) */

undefined8 OpenXRIPBindingModifier::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRIPBindingModifier::_validate_propertyv(PropertyInfo&) const */

void OpenXRIPBindingModifier::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* OpenXRIPBindingModifier::_property_can_revertv(StringName const&) const */

undefined8 OpenXRIPBindingModifier::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* OpenXRIPBindingModifier::_property_get_revertv(StringName const&, Variant&) const */

undefined8 OpenXRIPBindingModifier::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRIPBindingModifier::_notificationv(int, bool) */

void OpenXRIPBindingModifier::_notificationv(int param_1,bool param_2)

{
  return;
}



/* OpenXRActionBindingModifier::is_class_ptr(void*) const */

uint __thiscall
OpenXRActionBindingModifier::is_class_ptr(OpenXRActionBindingModifier *this,void *param_1)

{
  return (uint)CONCAT71(0x10ba,(undefined4 *)param_1 ==
                               &OpenXRBindingModifier::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* OpenXRActionBindingModifier::_getv(StringName const&, Variant&) const */

undefined8 OpenXRActionBindingModifier::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRActionBindingModifier::_setv(StringName const&, Variant const&) */

undefined8 OpenXRActionBindingModifier::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRActionBindingModifier::_validate_propertyv(PropertyInfo&) const */

void OpenXRActionBindingModifier::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* OpenXRActionBindingModifier::_property_can_revertv(StringName const&) const */

undefined8 OpenXRActionBindingModifier::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* OpenXRActionBindingModifier::_property_get_revertv(StringName const&, Variant&) const */

undefined8 OpenXRActionBindingModifier::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OpenXRActionBindingModifier::_notificationv(int, bool) */

void OpenXRActionBindingModifier::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Object* ClassDB::creator<OpenXRExtensionWrapperExtension>(bool) */

Object * ClassDB::creator<OpenXRExtensionWrapperExtension>(bool param_1)

{
  OpenXRExtensionWrapperExtension *this;
  
  this = (OpenXRExtensionWrapperExtension *)operator_new(0x518,"");
  OpenXRExtensionWrapperExtension::OpenXRExtensionWrapperExtension(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRInteractionProfileMetadata>(bool) */

Object * ClassDB::creator<OpenXRInteractionProfileMetadata>(bool param_1)

{
  OpenXRInteractionProfileMetadata *this;
  
  this = (OpenXRInteractionProfileMetadata *)operator_new(0x1c8,"");
  OpenXRInteractionProfileMetadata::OpenXRInteractionProfileMetadata(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRAPIExtension>(bool) */

Object * ClassDB::creator<OpenXRAPIExtension>(bool param_1)

{
  OpenXRAPIExtension *this;
  
  this = (OpenXRAPIExtension *)operator_new(0x1a8,"");
  OpenXRAPIExtension::OpenXRAPIExtension(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRInterface>(bool) */

Object * ClassDB::creator<OpenXRInterface>(bool param_1)

{
  OpenXRInterface *this;
  
  this = (OpenXRInterface *)operator_new(0x450,"");
  OpenXRInterface::OpenXRInterface(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRAction>(bool) */

Object * ClassDB::creator<OpenXRAction>(bool param_1)

{
  Resource *this;
  
  this = (Resource *)operator_new(0x268,"");
  Resource::Resource(this);
  *(undefined ***)this = &PTR__initialize_classv_0010b0d8;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x248) = 1;
  *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRActionBindingModifier>(bool) */

Object * ClassDB::creator<OpenXRActionBindingModifier>(bool param_1)

{
  Resource *this;
  
  this = (Resource *)operator_new(0x278,"");
  Resource::Resource(this);
  *(undefined **)this = &OpenXRIPBinding::vtable;
  StringName::StringName((StringName *)(this + 0x240),"_get_description",false);
  this[0x248] = (Resource)0x0;
  *(undefined8 *)(this + 0x250) = 0;
  StringName::StringName((StringName *)(this + 600),"_get_ip_modification",false);
  this[0x260] = (Resource)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010b498;
  *(undefined1 (*) [16])(this + 0x268) = (undefined1  [16])0x0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRIPBinding>(bool) */

Object * ClassDB::creator<OpenXRIPBinding>(bool param_1)

{
  Resource *this;
  
  this = (Resource *)operator_new(0x268,"");
  Resource::Resource(this);
  *(code **)this = Array::Array;
  *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRActionSet>(bool) */

Object * ClassDB::creator<OpenXRActionSet>(bool param_1)

{
  Resource *this;
  
  this = (Resource *)operator_new(600,"");
  Resource::Resource(this);
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined **)this = &OpenXRActionMap::vtable;
  *(undefined4 *)(this + 0x248) = 0;
  Array::Array((Array *)(this + 0x250));
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRActionMap>(bool) */

Object * ClassDB::creator<OpenXRActionMap>(bool param_1)

{
  Resource *this;
  
  this = (Resource *)operator_new(0x250,"");
  Resource::Resource(this);
  *(code **)this = OpenXRAnalogThresholdModifier::OpenXRAnalogThresholdModifier;
  Array::Array((Array *)(this + 0x240));
  Array::Array((Array *)(this + 0x248));
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRInteractionProfile>(bool) */

Object * ClassDB::creator<OpenXRInteractionProfile>(bool param_1)

{
  Resource *this;
  
  this = (Resource *)operator_new(0x268,"");
  Resource::Resource(this);
  *(undefined8 *)(this + 0x240) = 0;
  *(code **)this = OpenXRDpadBindingModifier::OpenXRDpadBindingModifier;
  Array::Array((Array *)(this + 0x248));
  *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRAnalogThresholdModifier>(bool) */

Object * ClassDB::creator<OpenXRAnalogThresholdModifier>(bool param_1)

{
  OpenXRAnalogThresholdModifier *this;
  
  this = (OpenXRAnalogThresholdModifier *)operator_new(0x2c0,"");
  OpenXRAnalogThresholdModifier::OpenXRAnalogThresholdModifier(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRDpadBindingModifier>(bool) */

Object * ClassDB::creator<OpenXRDpadBindingModifier>(bool param_1)

{
  OpenXRDpadBindingModifier *this;
  
  this = (OpenXRDpadBindingModifier *)operator_new(0x2b0,"");
  OpenXRDpadBindingModifier::OpenXRDpadBindingModifier(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRHapticVibration>(bool) */

Object * ClassDB::creator<OpenXRHapticVibration>(bool param_1)

{
  OpenXRHapticVibration *this;
  
  this = (OpenXRHapticVibration *)operator_new(0x260,"");
  OpenXRHapticVibration::OpenXRHapticVibration(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRCompositionLayerEquirect>(bool) */

Object * ClassDB::creator<OpenXRCompositionLayerEquirect>(bool param_1)

{
  OpenXRCompositionLayerEquirect *this;
  
  this = (OpenXRCompositionLayerEquirect *)operator_new(0x608,"");
  OpenXRCompositionLayerEquirect::OpenXRCompositionLayerEquirect(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRCompositionLayerCylinder>(bool) */

Object * ClassDB::creator<OpenXRCompositionLayerCylinder>(bool param_1)

{
  OpenXRCompositionLayerCylinder *this;
  
  this = (OpenXRCompositionLayerCylinder *)operator_new(0x5f8,"");
  OpenXRCompositionLayerCylinder::OpenXRCompositionLayerCylinder(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRCompositionLayerQuad>(bool) */

Object * ClassDB::creator<OpenXRCompositionLayerQuad>(bool param_1)

{
  OpenXRCompositionLayerQuad *this;
  
  this = (OpenXRCompositionLayerQuad *)operator_new(0x5f0,"");
  OpenXRCompositionLayerQuad::OpenXRCompositionLayerQuad(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRHand>(bool) */

Object * ClassDB::creator<OpenXRHand>(bool param_1)

{
  OpenXRHand *this;
  
  this = (OpenXRHand *)operator_new(0x620,"");
  OpenXRHand::OpenXRHand(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRVisibilityMask>(bool) */

Object * ClassDB::creator<OpenXRVisibilityMask>(bool param_1)

{
  OpenXRVisibilityMask *this;
  
  this = (OpenXRVisibilityMask *)operator_new(0x560,"");
  OpenXRVisibilityMask::OpenXRVisibilityMask(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRInteractionProfileEditor>(bool) */

Object * ClassDB::creator<OpenXRInteractionProfileEditor>(bool param_1)

{
  OpenXRInteractionProfileEditor *this;
  
  this = (OpenXRInteractionProfileEditor *)operator_new(0xa78,"");
  OpenXRInteractionProfileEditor::OpenXRInteractionProfileEditor(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<OpenXRBindingModifierEditor>(bool) */

Object * ClassDB::creator<OpenXRBindingModifierEditor>(bool param_1)

{
  OpenXRBindingModifierEditor *this;
  
  this = (OpenXRBindingModifierEditor *)operator_new(0xa48,"");
  OpenXRBindingModifierEditor::OpenXRBindingModifierEditor(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* CowData<void (*)()>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<void(*)()>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* OpenXRAction::_get_class_namev() const */

undefined8 * OpenXRAction::_get_class_namev(void)

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
LAB_001026e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001026e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRAction");
      goto LAB_0010274e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRAction");
LAB_0010274e:
  return &_get_class_namev()::_class_name_static;
}



/* Object* ClassDB::creator<OpenXRIPBindingModifier>(bool) */

Object * ClassDB::creator<OpenXRIPBindingModifier>(bool param_1)

{
  Resource *this;
  
  this = (Resource *)operator_new(0x278,"");
  Resource::Resource(this);
  *(undefined **)this = &OpenXRIPBinding::vtable;
  StringName::StringName((StringName *)(this + 0x240),"_get_description",false);
  this[0x248] = (Resource)0x0;
  *(undefined8 *)(this + 0x250) = 0;
  StringName::StringName((StringName *)(this + 600),"_get_ip_modification",false);
  this[0x260] = (Resource)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010b2b0;
  *(undefined1 (*) [16])(this + 0x268) = (undefined1  [16])0x0;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* OpenXRIPBindingModifier::_get_class_namev() const */

undefined8 * OpenXRIPBindingModifier::_get_class_namev(void)

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
LAB_001028a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001028a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRIPBindingModifier");
      goto LAB_0010290e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRIPBindingModifier");
LAB_0010290e:
  return &_get_class_namev()::_class_name_static;
}



/* OpenXRActionBindingModifier::_get_class_namev() const */

undefined8 * OpenXRActionBindingModifier::_get_class_namev(void)

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
LAB_00102993:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102993;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRActionBindingModifier"
                );
      goto LAB_001029fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OpenXRActionBindingModifier");
LAB_001029fe:
  return &_get_class_namev()::_class_name_static;
}



/* Ref<OpenXRInterface>::~Ref() */

void __thiscall Ref<OpenXRInterface>::~Ref(Ref<OpenXRInterface> *this)

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
        return;
      }
    }
  }
  return;
}



/* OpenXRIPBindingModifier::~OpenXRIPBindingModifier() */

void __thiscall OpenXRIPBindingModifier::~OpenXRIPBindingModifier(OpenXRIPBindingModifier *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &OpenXRIPBinding::vtable;
  if (bVar1) {
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102ae0;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00102ae0:
  Resource::~Resource((Resource *)this);
  return;
}



/* OpenXRActionBindingModifier::~OpenXRActionBindingModifier() */

void __thiscall
OpenXRActionBindingModifier::~OpenXRActionBindingModifier(OpenXRActionBindingModifier *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &OpenXRIPBinding::vtable;
  if (bVar1) {
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102b40;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00102b40:
  Resource::~Resource((Resource *)this);
  return;
}



/* OpenXRActionBindingModifier::~OpenXRActionBindingModifier() */

void __thiscall
OpenXRActionBindingModifier::~OpenXRActionBindingModifier(OpenXRActionBindingModifier *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &OpenXRIPBinding::vtable;
  if (bVar1) {
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102ba0;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00102ba0:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x278);
  return;
}



/* OpenXRIPBindingModifier::~OpenXRIPBindingModifier() */

void __thiscall OpenXRIPBindingModifier::~OpenXRIPBindingModifier(OpenXRIPBindingModifier *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &OpenXRIPBinding::vtable;
  if (bVar1) {
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102c10;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
    }
  }
LAB_00102c10:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x278);
  return;
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



/* Ref<OpenXRInterface>::unref() */

void __thiscall Ref<OpenXRInterface>::unref(Ref<OpenXRInterface> *this)

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



/* Resource::register_custom_data_to_otdb() */

void Resource::register_custom_data_to_otdb(void)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_38 = "Resource";
  local_30 = 8;
  String::parse_latin1((StrRange *)&local_48);
  StringName::StringName((StringName *)&local_38,(String *)&local_48,false);
  StringName::StringName((StringName *)&local_40,"res",false);
  ClassDB::add_resource_base_extension((StringName *)&local_40,(StringName *)&local_38);
  if (StringName::configured != '\0') {
    if (local_40 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102e5c;
    }
    if (local_38 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00102e5c:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRAction::~OpenXRAction() */

void __thiscall OpenXRAction::~OpenXRAction(OpenXRAction *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *this_00;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b0d8;
  if (*(long *)(this + 600) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 600) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pCVar2 = *(CowData<char32_t> **)(this + 600);
      if (pCVar2 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)(this + 600) = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 8;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x240));
  Resource::~Resource((Resource *)this);
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



/* OpenXRActionBindingModifier::get_class() const */

void OpenXRActionBindingModifier::get_class(void)

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



/* OpenXRIPBindingModifier::get_class() const */

void OpenXRIPBindingModifier::get_class(void)

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



/* OpenXRAction::get_class() const */

void OpenXRAction::get_class(void)

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



/* OpenXRAction::~OpenXRAction() */

void __thiscall OpenXRAction::~OpenXRAction(OpenXRAction *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *this_00;
  
  *(undefined ***)this = &PTR__initialize_classv_0010b0d8;
  if (*(long *)(this + 600) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 600) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pCVar2 = *(CowData<char32_t> **)(this + 600);
      if (pCVar2 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)(this + 600) = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 8;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x240));
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
  return;
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_00103353;
  }
  cVar3 = String::operator==(param_1,"Resource");
  if (cVar3 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar2 = *(long *)(lVar1 + 0x20);
      if (lVar2 == 0) {
        local_58 = (char *)0x0;
      }
      else {
        local_58 = (char *)0x0;
        if (*(char **)(lVar2 + 8) == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar2 + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_58,*(char **)(lVar2 + 8));
        }
      }
      cVar3 = String::operator==(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (cVar3 != '\0') goto LAB_00103353;
    }
    cVar3 = String::operator==(param_1,"RefCounted");
    if (cVar3 == '\0') {
      for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
        lVar2 = *(long *)(lVar1 + 0x20);
        if (lVar2 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar2 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar2 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar2 + 8));
          }
        }
        cVar3 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar3 != '\0') goto LAB_00103353;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = String::operator==(param_1,"Object");
        return uVar4;
      }
      goto LAB_001034ce;
    }
  }
LAB_00103353:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001034ce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRAction::is_class(String const&) const */

undefined8 __thiscall OpenXRAction::is_class(OpenXRAction *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001035db;
  }
  cVar4 = String::operator==(param_1,"OpenXRAction");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Resource::is_class((Resource *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001035db:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRAction::_initialize_classv() */

void OpenXRAction::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "OpenXRAction";
    local_60 = 0;
    local_40 = 0xc;
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
    if ((code *)PTR__bind_methods_0010f020 != Resource::_bind_methods) {
      OpenXRAction::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRIPBindingModifier::_initialize_classv() */

void OpenXRIPBindingModifier::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (OpenXRBindingModifier::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Resource");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"OpenXRBindingModifier");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0010f028 != Resource::_bind_methods) {
        OpenXRBindingModifier::_bind_methods();
      }
      OpenXRBindingModifier::initialize_class()::initialized = '\x01';
    }
    local_48 = "OpenXRBindingModifier";
    local_58 = 0;
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "OpenXRIPBindingModifier";
    local_60 = 0;
    local_40 = 0x17;
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



/* OpenXRActionBindingModifier::_initialize_classv() */

void OpenXRActionBindingModifier::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (OpenXRBindingModifier::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Resource");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"OpenXRBindingModifier");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0010f028 != Resource::_bind_methods) {
        OpenXRBindingModifier::_bind_methods();
      }
      OpenXRBindingModifier::initialize_class()::initialized = '\x01';
    }
    local_48 = "OpenXRBindingModifier";
    local_58 = 0;
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "OpenXRActionBindingModifier";
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
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
        if (pvVar3 == (void *)0x0) goto LAB_00103cbf;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00103cbf:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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



/* OpenXRAction::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall OpenXRAction::_get_property_listv(OpenXRAction *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "OpenXRAction";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OpenXRAction";
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
  StringName::StringName((StringName *)&local_78,"OpenXRAction",false);
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



/* OpenXRBindingModifier::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
OpenXRBindingModifier::_get_property_listv(OpenXRBindingModifier *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "OpenXRBindingModifier";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OpenXRBindingModifier";
  local_98 = 0;
  local_70 = 0x15;
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
  StringName::StringName((StringName *)&local_78,"OpenXRBindingModifier",false);
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



/* OpenXRIPBindingModifier::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
OpenXRIPBindingModifier::_get_property_listv
          (OpenXRIPBindingModifier *this,List *param_1,bool param_2)

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
    OpenXRBindingModifier::_get_property_listv((OpenXRBindingModifier *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "OpenXRIPBindingModifier";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OpenXRIPBindingModifier";
  local_98 = 0;
  local_70 = 0x17;
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
  StringName::StringName((StringName *)&local_78,"OpenXRIPBindingModifier",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      OpenXRBindingModifier::_get_property_listv((OpenXRBindingModifier *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionBindingModifier::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
OpenXRActionBindingModifier::_get_property_listv
          (OpenXRActionBindingModifier *this,List *param_1,bool param_2)

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
    OpenXRBindingModifier::_get_property_listv((OpenXRBindingModifier *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "OpenXRActionBindingModifier";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OpenXRActionBindingModifier";
  local_98 = 0;
  local_70 = 0x1b;
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
  StringName::StringName((StringName *)&local_78,"OpenXRActionBindingModifier",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      OpenXRBindingModifier::_get_property_listv((OpenXRBindingModifier *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRIPBindingModifier::is_class(String const&) const */

undefined8 __thiscall
OpenXRIPBindingModifier::is_class(OpenXRIPBindingModifier *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00104d03;
  }
  cVar4 = String::operator==(param_1,"OpenXRIPBindingModifier");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00104d03;
    }
    cVar4 = String::operator==(param_1,"OpenXRBindingModifier");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Resource::is_class((Resource *)this,param_1);
        return uVar5;
      }
      goto LAB_00104e0e;
    }
  }
LAB_00104d03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104e0e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXRActionBindingModifier::is_class(String const&) const */

undefined8 __thiscall
OpenXRActionBindingModifier::is_class(OpenXRActionBindingModifier *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00104ef3;
  }
  cVar4 = String::operator==(param_1,"OpenXRActionBindingModifier");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00104ef3;
    }
    cVar4 = String::operator==(param_1,"OpenXRBindingModifier");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Resource::is_class((Resource *)this,param_1);
        return uVar5;
      }
      goto LAB_00104ffe;
    }
  }
LAB_00104ef3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104ffe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, ClassDB::ClassInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ClassDB::ClassInfo> > >::getptr(StringName const&) */

long __thiscall
HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
::getptr(HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
         *this,StringName *param_1)

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
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          return *(long *)(*(long *)(this + 8) + (ulong)uVar12 * 8) + 0x18;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* void ClassDB::register_class<OpenXRExtensionWrapperExtension>(bool) */

void ClassDB::register_class<OpenXRExtensionWrapperExtension>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRExtensionWrapperExtension::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRExtensionWrapperExtension";
    local_70 = 0;
    local_50 = 0x1f;
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
    if ((code *)PTR__bind_methods_0010f030 != Object::_bind_methods) {
      OpenXRExtensionWrapperExtension::_bind_methods();
    }
    OpenXRExtensionWrapperExtension::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRExtensionWrapperExtension";
  local_60 = 0;
  local_50 = 0x1f;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRExtensionWrapperExtension>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRExtensionWrapperExtension::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRAPIExtension>(bool) */

void ClassDB::register_class<OpenXRAPIExtension>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRAPIExtension::initialize_class()::initialized == '\0') {
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
      if ((code *)PTR__bind_methods_0010f008 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRAPIExtension";
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
    if ((code *)PTR__bind_methods_0010f038 != RefCounted::_bind_methods) {
      OpenXRAPIExtension::_bind_methods();
    }
    OpenXRAPIExtension::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRAPIExtension";
  local_60 = 0;
  local_50 = 0x12;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRAPIExtension>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRAPIExtension::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRInterface>(bool) */

void ClassDB::register_class<OpenXRInterface>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRInterface::initialize_class()::initialized == '\0') {
    if (XRInterface::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0010f008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"RefCounted");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"XRInterface");
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
      XRInterface::_bind_methods();
      XRInterface::initialize_class()::initialized = '\x01';
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"XRInterface");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"OpenXRInterface");
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
    if ((code *)PTR__bind_methods_0010f040 != XRInterface::_bind_methods) {
      OpenXRInterface::_bind_methods();
    }
    OpenXRInterface::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRInterface";
  local_60 = 0;
  local_50 = 0xf;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRInterface>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRInterface::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRAction>(bool) */

void ClassDB::register_class<OpenXRAction>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRAction::initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_68 = 0;
    local_50 = 8;
    local_58 = "Resource";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRAction";
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
    if ((code *)PTR__bind_methods_0010f020 != Resource::_bind_methods) {
      OpenXRAction::_bind_methods();
    }
    OpenXRAction::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRAction";
  local_60 = 0;
  local_50 = 0xc;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRAction>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRAction::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    Resource::register_custom_data_to_otdb();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRActionSet>(bool) */

void ClassDB::register_class<OpenXRActionSet>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRActionSet::initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_68 = 0;
    local_50 = 8;
    local_58 = "Resource";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRActionSet";
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
    if ((code *)PTR__bind_methods_0010f048 != Resource::_bind_methods) {
      OpenXRActionSet::_bind_methods();
    }
    OpenXRActionSet::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRActionSet";
  local_60 = 0;
  local_50 = 0xf;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRActionSet>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRActionSet::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    Resource::register_custom_data_to_otdb();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRActionMap>(bool) */

void ClassDB::register_class<OpenXRActionMap>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRActionMap::initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_68 = 0;
    local_50 = 8;
    local_58 = "Resource";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRActionMap";
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
    if ((code *)PTR__bind_methods_0010f050 != Resource::_bind_methods) {
      OpenXRActionMap::_bind_methods();
    }
    OpenXRActionMap::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRActionMap";
  local_60 = 0;
  local_50 = 0xf;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRActionMap>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRActionMap::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    Resource::register_custom_data_to_otdb();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRInteractionProfileMetadata>(bool) */

void ClassDB::register_class<OpenXRInteractionProfileMetadata>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRInteractionProfileMetadata::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = 0;
    local_50 = 6;
    local_58 = "Object";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRInteractionProfileMetadata";
    local_70 = 0;
    local_50 = 0x20;
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
    if ((code *)PTR__bind_methods_0010f058 != Object::_bind_methods) {
      OpenXRInteractionProfileMetadata::_bind_methods();
    }
    OpenXRInteractionProfileMetadata::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRInteractionProfileMetadata";
  local_60 = 0;
  local_50 = 0x20;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRInteractionProfileMetadata>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRInteractionProfileMetadata::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRIPBinding>(bool) */

void ClassDB::register_class<OpenXRIPBinding>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRIPBinding::initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_68 = 0;
    local_50 = 8;
    local_58 = "Resource";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRIPBinding";
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
    if ((code *)PTR__bind_methods_0010f060 != Resource::_bind_methods) {
      OpenXRIPBinding::_bind_methods();
    }
    OpenXRIPBinding::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRIPBinding";
  local_60 = 0;
  local_50 = 0xf;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRIPBinding>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRIPBinding::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    Resource::register_custom_data_to_otdb();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRInteractionProfile>(bool) */

void ClassDB::register_class<OpenXRInteractionProfile>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRInteractionProfile::initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_68 = 0;
    local_50 = 8;
    local_58 = "Resource";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRInteractionProfile";
    local_70 = 0;
    local_50 = 0x18;
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
    if ((code *)PTR__bind_methods_0010f068 != Resource::_bind_methods) {
      OpenXRInteractionProfile::_bind_methods();
    }
    OpenXRInteractionProfile::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRInteractionProfile";
  local_60 = 0;
  local_50 = 0x18;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRInteractionProfile>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRInteractionProfile::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    Resource::register_custom_data_to_otdb();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_abstract_class<OpenXRBindingModifier>() */

void ClassDB::register_abstract_class<OpenXRBindingModifier>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRBindingModifier::initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "OpenXRBindingModifier";
    local_60 = 0;
    local_40 = 0x15;
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
    if ((code *)PTR__bind_methods_0010f028 != Resource::_bind_methods) {
      OpenXRBindingModifier::_bind_methods();
    }
    OpenXRBindingModifier::initialize_class()::initialized = '\x01';
  }
  local_48 = "OpenXRBindingModifier";
  local_50 = 0;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00106a95;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &OpenXRBindingModifier::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00106a95:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_class<OpenXRIPBindingModifier>(bool) */

void ClassDB::register_class<OpenXRIPBindingModifier>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRIPBindingModifier::initialize_class()::initialized == '\0') {
    if (OpenXRBindingModifier::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Resource");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"OpenXRBindingModifier");
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
      if ((code *)PTR__bind_methods_0010f028 != Resource::_bind_methods) {
        OpenXRBindingModifier::_bind_methods();
      }
      OpenXRBindingModifier::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"OpenXRBindingModifier");
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRIPBindingModifier";
    local_70 = 0;
    local_50 = 0x17;
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
    OpenXRIPBindingModifier::initialize_class()::initialized = '\x01';
  }
  local_58 = "OpenXRIPBindingModifier";
  this = (StrRange *)&local_60;
  local_60 = 0;
  local_50 = 0x17;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRIPBindingModifier>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRIPBindingModifier::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    Resource::register_custom_data_to_otdb();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRActionBindingModifier>(bool) */

void ClassDB::register_class<OpenXRActionBindingModifier>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRActionBindingModifier::initialize_class()::initialized == '\0') {
    if (OpenXRBindingModifier::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Resource");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"OpenXRBindingModifier");
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
      if ((code *)PTR__bind_methods_0010f028 != Resource::_bind_methods) {
        OpenXRBindingModifier::_bind_methods();
      }
      OpenXRBindingModifier::initialize_class()::initialized = '\x01';
    }
    local_58 = "OpenXRBindingModifier";
    local_60 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"OpenXRActionBindingModifier");
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
    OpenXRActionBindingModifier::initialize_class()::initialized = '\x01';
  }
  local_58 = "OpenXRActionBindingModifier";
  this = (StrRange *)&local_60;
  local_60 = 0;
  local_50 = 0x1b;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRActionBindingModifier>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRActionBindingModifier::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    Resource::register_custom_data_to_otdb();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRAnalogThresholdModifier>(bool) */

void ClassDB::register_class<OpenXRAnalogThresholdModifier>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRAnalogThresholdModifier::initialize_class()::initialized == '\0') {
    if (OpenXRActionBindingModifier::initialize_class()::initialized == '\0') {
      if (OpenXRBindingModifier::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          Resource::initialize_class();
        }
        local_68 = 0;
        local_50 = 8;
        local_58 = "Resource";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "OpenXRBindingModifier";
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
        if ((code *)PTR__bind_methods_0010f010 != OpenXRBindingModifier::_bind_methods) {
          OpenXRBindingModifier::_bind_methods();
        }
        OpenXRBindingModifier::initialize_class()::initialized = '\x01';
      }
      local_58 = "OpenXRBindingModifier";
      local_68 = 0;
      local_50 = 0x15;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "OpenXRActionBindingModifier";
      local_70 = 0;
      local_50 = 0x1b;
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
      OpenXRActionBindingModifier::initialize_class()::initialized = '\x01';
    }
    local_58 = "OpenXRActionBindingModifier";
    local_68 = 0;
    local_50 = 0x1b;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRAnalogThresholdModifier";
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
    if ((code *)PTR__bind_methods_0010f070 != OpenXRBindingModifier::_bind_methods) {
      OpenXRAnalogThresholdModifier::_bind_methods();
    }
    OpenXRAnalogThresholdModifier::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRAnalogThresholdModifier";
  local_60 = 0;
  local_50 = 0x1d;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRAnalogThresholdModifier>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRAnalogThresholdModifier::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
    Resource::register_custom_data_to_otdb();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRDpadBindingModifier>(bool) */

void ClassDB::register_class<OpenXRDpadBindingModifier>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRDpadBindingModifier::initialize_class()::initialized == '\0') {
    if (OpenXRIPBindingModifier::initialize_class()::initialized == '\0') {
      if (OpenXRBindingModifier::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          Resource::initialize_class();
        }
        local_68 = 0;
        local_50 = 8;
        local_58 = "Resource";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "OpenXRBindingModifier";
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
        if ((code *)PTR__bind_methods_0010f010 != OpenXRBindingModifier::_bind_methods) {
          OpenXRBindingModifier::_bind_methods();
        }
        OpenXRBindingModifier::initialize_class()::initialized = '\x01';
      }
      local_58 = "OpenXRBindingModifier";
      local_68 = 0;
      local_50 = 0x15;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "OpenXRIPBindingModifier";
      local_70 = 0;
      local_50 = 0x17;
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
      OpenXRIPBindingModifier::initialize_class()::initialized = '\x01';
    }
    local_58 = "OpenXRIPBindingModifier";
    local_68 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRDpadBindingModifier";
    local_70 = 0;
    local_50 = 0x19;
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
    if ((code *)PTR__bind_methods_0010f078 != OpenXRBindingModifier::_bind_methods) {
      OpenXRDpadBindingModifier::_bind_methods();
    }
    OpenXRDpadBindingModifier::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRDpadBindingModifier";
  local_60 = 0;
  local_50 = 0x19;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRDpadBindingModifier>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRDpadBindingModifier::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
    Resource::register_custom_data_to_otdb();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_abstract_class<OpenXRHapticBase>() */

void ClassDB::register_abstract_class<OpenXRHapticBase>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRHapticBase::initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "OpenXRHapticBase";
    local_60 = 0;
    local_40 = 0x10;
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
    if ((code *)PTR__bind_methods_0010f080 != Resource::_bind_methods) {
      OpenXRHapticBase::_bind_methods();
    }
    OpenXRHapticBase::initialize_class()::initialized = '\x01';
  }
  local_48 = "OpenXRHapticBase";
  local_50 = 0;
  local_40 = 0x10;
  String::parse_latin1((StrRange *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00107b65;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &OpenXRHapticBase::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00107b65:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_class<OpenXRHapticVibration>(bool) */

void ClassDB::register_class<OpenXRHapticVibration>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRHapticVibration::initialize_class()::initialized == '\0') {
    if (OpenXRHapticBase::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Resource");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"OpenXRHapticBase");
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
      if ((code *)PTR__bind_methods_0010f010 != OpenXRHapticBase::_bind_methods) {
        OpenXRHapticBase::_bind_methods();
      }
      OpenXRHapticBase::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"OpenXRHapticBase");
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRHapticVibration";
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
    if ((code *)PTR__bind_methods_0010f088 != OpenXRHapticBase::_bind_methods) {
      OpenXRHapticVibration::_bind_methods();
    }
    OpenXRHapticVibration::initialize_class()::initialized = '\x01';
  }
  local_58 = "OpenXRHapticVibration";
  this = (StrRange *)&local_60;
  local_60 = 0;
  local_50 = 0x15;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRHapticVibration>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRHapticVibration::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
    Resource::register_custom_data_to_otdb();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRCompositionLayerEquirect>(bool) */

void ClassDB::register_class<OpenXRCompositionLayerEquirect>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRCompositionLayerEquirect::initialize_class()::initialized == '\0') {
    if (OpenXRCompositionLayer::initialize_class()::initialized == '\0') {
      OpenXRCompositionLayer::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x16;
    local_58 = "OpenXRCompositionLayer";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRCompositionLayerEquirect";
    local_70 = 0;
    local_50 = 0x1e;
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
    if ((code *)PTR__bind_methods_0010f090 != OpenXRCompositionLayer::_bind_methods) {
      OpenXRCompositionLayerEquirect::_bind_methods();
    }
    OpenXRCompositionLayerEquirect::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRCompositionLayerEquirect";
  local_60 = 0;
  local_50 = 0x1e;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRCompositionLayerEquirect>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRCompositionLayerEquirect::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRCompositionLayerCylinder>(bool) */

void ClassDB::register_class<OpenXRCompositionLayerCylinder>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRCompositionLayerCylinder::initialize_class()::initialized == '\0') {
    if (OpenXRCompositionLayer::initialize_class()::initialized == '\0') {
      OpenXRCompositionLayer::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x16;
    local_58 = "OpenXRCompositionLayer";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRCompositionLayerCylinder";
    local_70 = 0;
    local_50 = 0x1e;
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
    if ((code *)PTR__bind_methods_0010f098 != OpenXRCompositionLayer::_bind_methods) {
      OpenXRCompositionLayerCylinder::_bind_methods();
    }
    OpenXRCompositionLayerCylinder::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRCompositionLayerCylinder";
  local_60 = 0;
  local_50 = 0x1e;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRCompositionLayerCylinder>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRCompositionLayerCylinder::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRCompositionLayerQuad>(bool) */

void ClassDB::register_class<OpenXRCompositionLayerQuad>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRCompositionLayerQuad::initialize_class()::initialized == '\0') {
    if (OpenXRCompositionLayer::initialize_class()::initialized == '\0') {
      OpenXRCompositionLayer::initialize_class();
    }
    local_68 = 0;
    local_50 = 0x16;
    local_58 = "OpenXRCompositionLayer";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRCompositionLayerQuad";
    local_70 = 0;
    local_50 = 0x1a;
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
    if ((code *)PTR__bind_methods_0010f0a0 != OpenXRCompositionLayer::_bind_methods) {
      OpenXRCompositionLayerQuad::_bind_methods();
    }
    OpenXRCompositionLayerQuad::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRCompositionLayerQuad";
  local_60 = 0;
  local_50 = 0x1a;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRCompositionLayerQuad>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRCompositionLayerQuad::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRHand>(bool) */

void ClassDB::register_class<OpenXRHand>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRHand::initialize_class()::initialized == '\0') {
    if (Node3D::initialize_class()::initialized == '\0') {
      Node3D::initialize_class();
    }
    local_68 = 0;
    local_50 = 6;
    local_58 = "Node3D";
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRHand";
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
    if ((code *)PTR__bind_methods_0010f0a8 != Node3D::_bind_methods) {
      OpenXRHand::_bind_methods();
    }
    OpenXRHand::initialize_class()::initialized = '\x01';
  }
  this = (StrRange *)&local_60;
  local_58 = "OpenXRHand";
  local_60 = 0;
  local_50 = 10;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRHand>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRHand::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRVisibilityMask>(bool) */

void ClassDB::register_class<OpenXRVisibilityMask>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRVisibilityMask::initialize_class()::initialized == '\0') {
    if (VisualInstance3D::initialize_class()::initialized == '\0') {
      if (Node3D::initialize_class()::initialized == '\0') {
        Node3D::initialize_class();
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Node3D");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"VisualInstance3D");
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != VisualInstance3D::_bind_methods) {
        VisualInstance3D::_bind_methods();
      }
      VisualInstance3D::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"VisualInstance3D");
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "OpenXRVisibilityMask";
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
    if ((code *)PTR__bind_methods_0010f0b0 != VisualInstance3D::_bind_methods) {
      OpenXRVisibilityMask::_bind_methods();
    }
    OpenXRVisibilityMask::initialize_class()::initialized = '\x01';
  }
  local_58 = "OpenXRVisibilityMask";
  this = (StrRange *)&local_60;
  local_60 = 0;
  local_50 = 0x14;
  String::parse_latin1(this);
  StringName::StringName((StringName *)&local_58,(String *)this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRVisibilityMask>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRVisibilityMask::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_abstract_class<OpenXRInteractionProfileEditorBase>() */

void ClassDB::register_abstract_class<OpenXRInteractionProfileEditorBase>(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRInteractionProfileEditorBase::initialize_class()::initialized == '\0') {
    if (HBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          if (Control::initialize_class()::initialized == '\0') {
            if (CanvasItem::initialize_class()::initialized == '\0') {
              if (Node::initialize_class()::initialized == '\0') {
                Object::initialize_class();
                local_50 = 0;
                String::parse_latin1((String *)&local_50,"Object");
                StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
                local_60 = 0;
                String::parse_latin1((String *)&local_60,"Node");
                StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
                ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
                if ((StringName::configured != '\0') && (local_58 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                if ((StringName::configured != '\0') && (local_48 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
                if ((code *)PTR__bind_methods_0010f008 != Node::_bind_methods) {
                  Node::_bind_methods();
                }
                Node::initialize_class()::initialized = '\x01';
              }
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Node");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"CanvasItem");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              CanvasItem::_bind_methods();
              if ((code *)PTR__bind_compatibility_methods_0010f0b8 !=
                  Object::_bind_compatibility_methods) {
                CanvasItem::_bind_compatibility_methods();
              }
              CanvasItem::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"CanvasItem");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Control");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            Control::_bind_methods();
            Control::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Control");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Container");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Container::_bind_methods();
          Container::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Container");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"BoxContainer");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        BoxContainer::_bind_methods();
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"BoxContainer");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"HBoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      HBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"HBoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"OpenXRInteractionProfileEditorBase");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if ((code *)PTR__bind_methods_0010f0c0 != BoxContainer::_bind_methods) {
      OpenXRInteractionProfileEditorBase::_bind_methods();
    }
    OpenXRInteractionProfileEditorBase::initialize_class()::initialized = '\x01';
  }
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"OpenXRInteractionProfileEditorBase");
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  puVar1 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (puVar1 == (undefined4 *)0x0) {
    _err_print_error("register_abstract_class","./core/object/class_db.h",0xe5,
                     "Parameter \"t\" is null.",0,0);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001090f9;
  }
  else {
    *(undefined1 *)((long)puVar1 + 0x289) = 1;
    *(undefined4 **)(puVar1 + 4) = &OpenXRInteractionProfileEditorBase::get_class_ptr_static()::ptr;
    *puVar1 = (undefined4)current_api;
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001090f9:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _global_unlock();
  return;
}



/* void ClassDB::register_class<OpenXRInteractionProfileEditor>(bool) */

void ClassDB::register_class<OpenXRInteractionProfileEditor>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  String *this;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRInteractionProfileEditor::initialize_class()::initialized == '\0') {
    if (OpenXRInteractionProfileEditorBase::initialize_class()::initialized == '\0') {
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
                  if ((code *)PTR__bind_methods_0010f008 != Node::_bind_methods) {
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
                if ((code *)PTR__bind_compatibility_methods_0010f0b8 !=
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
            local_58 = "Control";
            local_68 = 0;
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
          BoxContainer::_bind_methods();
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
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"HBoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"OpenXRInteractionProfileEditorBase");
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
      if ((code *)PTR__bind_methods_0010f0c0 != BoxContainer::_bind_methods) {
        OpenXRInteractionProfileEditorBase::_bind_methods();
      }
      OpenXRInteractionProfileEditorBase::initialize_class()::initialized = '\x01';
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"OpenXRInteractionProfileEditorBase");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"OpenXRInteractionProfileEditor");
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
    OpenXRInteractionProfileEditor::initialize_class()::initialized = '\x01';
  }
  this = (String *)&local_60;
  local_60 = 0;
  String::parse_latin1(this,"OpenXRInteractionProfileEditor");
  StringName::StringName((StringName *)&local_58,this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRInteractionProfileEditor>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRInteractionProfileEditor::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void ClassDB::register_class<OpenXRBindingModifierEditor>(bool) */

void ClassDB::register_class<OpenXRBindingModifierEditor>(bool param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  String *this;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (OpenXRBindingModifierEditor::initialize_class()::initialized == '\0') {
    if (PanelContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_0010f008 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0010f0b8 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"PanelContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      PanelContainer::_bind_methods();
      PanelContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"PanelContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"OpenXRBindingModifierEditor");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if ((code *)PTR__bind_methods_0010f0c8 != PanelContainer::_bind_methods) {
      OpenXRBindingModifierEditor::_bind_methods();
    }
    OpenXRBindingModifierEditor::initialize_class()::initialized = '\x01';
  }
  this = (String *)&local_50;
  local_50 = 0;
  String::parse_latin1(this,"OpenXRBindingModifierEditor");
  StringName::StringName((StringName *)&local_48,this,false);
  puVar2 = (undefined4 *)
           HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
           ::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>
                     *)&classes,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  if (puVar2 == (undefined4 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      register_class<OpenXRAPIExtension>(SUB81(this,0));
      return;
    }
  }
  else {
    *(bool *)((long)puVar2 + 0x28b) = param_1;
    *(code **)(puVar2 + 0xa4) = creator<OpenXRBindingModifierEditor>;
    *(undefined4 **)(puVar2 + 4) = &OpenXRBindingModifierEditor::get_class_ptr_static()::ptr;
    uVar1 = (undefined4)current_api;
    *(undefined1 *)((long)puVar2 + 0x289) = 1;
    *puVar2 = uVar1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _global_unlock();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<XRInterface>::unref() */

void __thiscall Ref<XRInterface>::unref(Ref<XRInterface> *this)

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



/* CowData<void (*)()>::_realloc(long) */

undefined8 __thiscall CowData<void(*)()>::_realloc(CowData<void(*)()> *this,long param_1)

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
/* Error CowData<void (*)()>::resize<false>(long) */

undefined8 __thiscall CowData<void(*)()>::resize<false>(CowData<void(*)()> *this,long param_1)

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
LAB_0010a660:
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
  if (lVar8 == 0) goto LAB_0010a660;
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
        goto LAB_0010a571;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0010a571:
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



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  CowData<char32_t> *this;
  long lVar5;
  
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
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this + 0x20);
          CowData<char32_t>::_unref(this + 0x10);
          CowData<char32_t>::_unref(this + 8);
          CowData<char32_t>::_unref(this);
          this = this + 0x28;
        } while (lVar3 != lVar5);
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
                if (pvVar5 == (void *)0x0) goto LAB_0010aaf9;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_0010aaf9:
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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OpenXRAction::~OpenXRAction() */

void __thiscall OpenXRAction::~OpenXRAction(OpenXRAction *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OpenXRActionBindingModifier::~OpenXRActionBindingModifier() */

void __thiscall
OpenXRActionBindingModifier::~OpenXRActionBindingModifier(OpenXRActionBindingModifier *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OpenXRIPBindingModifier::~OpenXRIPBindingModifier() */

void __thiscall OpenXRIPBindingModifier::~OpenXRIPBindingModifier(OpenXRIPBindingModifier *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Ref<OpenXRInterface>::~Ref() */

void __thiscall Ref<OpenXRInterface>::~Ref(Ref<OpenXRInterface> *this)

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


