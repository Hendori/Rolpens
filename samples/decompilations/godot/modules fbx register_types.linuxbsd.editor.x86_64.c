
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



/* uninitialize_fbx_module(ModuleInitializationLevel) */

void uninitialize_fbx_module(void)

{
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
    if ((code *)PTR__bind_methods_00109008 != RefCounted::_bind_methods) {
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
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* initialize_fbx_module(ModuleInitializationLevel) */

void initialize_fbx_module(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_70;
  int local_68 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 2) {
    ClassDB::register_class<FBXDocument>(false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      ClassDB::register_class<FBXState>(false);
      return;
    }
    goto LAB_00100e79;
  }
  if (param_1 == 3) {
    uVar1 = ClassDB::get_current_api();
    ClassDB::set_current_api();
    ClassDB::register_class<EditorSceneFormatImporterUFBX>(false);
    Variant::Variant((Variant *)local_68,true);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"filesystem/import/fbx2gltf/enabled");
    bVar3 = SUB81((Variant *)local_68,0);
    _GLOBAL_DEF((String *)local_48,(Variant *)&local_70,bVar3,true,false,true);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    ClassDB::register_class<EditorSceneFormatImporterFBX2GLTF>(false);
    Variant::Variant((Variant *)local_68,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"filesystem/import/fbx2gltf/enabled.android");
    _GLOBAL_DEF((String *)local_48,(Variant *)&local_70,bVar3,true,false,false);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_68,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"filesystem/import/fbx2gltf/enabled.web");
    _GLOBAL_DEF((String *)local_48,(Variant *)&local_70,bVar3,true,false,false);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    ClassDB::set_current_api(uVar1);
    if (__err_print_index_error == 0) {
      lVar5 = 1;
    }
    else {
      lVar5 = *(long *)(__err_print_index_error + -8) + 1;
    }
    iVar2 = CowData<void(*)()>::resize<false>((CowData<void(*)()> *)_err_print_index_error,lVar5);
    if (iVar2 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
        return;
      }
      goto LAB_00100e79;
    }
    if (__err_print_index_error == 0) {
      lVar4 = -1;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(__err_print_index_error + -8);
      lVar4 = lVar5 + -1;
      if (-1 < lVar4) {
        CowData<void(*)()>::_copy_on_write((CowData<void(*)()> *)_err_print_index_error);
        *(code **)(__err_print_index_error + lVar4 * 8) = _editor_init;
        goto LAB_00100b2a;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar5,"p_index","size()","",false,false
              );
  }
LAB_00100b2a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100e79:
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



/* GLTFState::is_class_ptr(void*) const */

uint __thiscall GLTFState::is_class_ptr(GLTFState *this,void *param_1)

{
  return (uint)CONCAT71(0x1069,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1069,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1069,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GLTFState::_getv(StringName const&, Variant&) const */

undefined8 GLTFState::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFState::_setv(StringName const&, Variant const&) */

undefined8 GLTFState::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFState::_validate_propertyv(PropertyInfo&) const */

void GLTFState::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GLTFState::_property_can_revertv(StringName const&) const */

undefined8 GLTFState::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GLTFState::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GLTFState::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFState::_notificationv(int, bool) */

void GLTFState::_notificationv(int param_1,bool param_2)

{
  return;
}



/* FBXState::is_class_ptr(void*) const */

uint __thiscall FBXState::is_class_ptr(FBXState *this,void *param_1)

{
  return (uint)CONCAT71(0x1069,(undefined4 *)param_1 == &GLTFState::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1069,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1069,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1069,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* FBXState::_getv(StringName const&, Variant&) const */

undefined8 FBXState::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FBXState::_setv(StringName const&, Variant const&) */

undefined8 FBXState::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FBXState::_validate_propertyv(PropertyInfo&) const */

void FBXState::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* FBXState::_property_can_revertv(StringName const&) const */

undefined8 FBXState::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* FBXState::_property_get_revertv(StringName const&, Variant&) const */

undefined8 FBXState::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* FBXState::_notificationv(int, bool) */

void FBXState::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Object* ClassDB::creator<FBXState>(bool) */

Object * ClassDB::creator<FBXState>(bool param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Resource *this;
  
  this = (Resource *)operator_new(0x670,"");
  Resource::Resource(this);
  *(undefined ***)this = &PTR__initialize_classv_001065b0;
  *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x250) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this + 0x260));
  uVar2 = _LC3;
  uVar1 = _LC1;
  *(undefined1 (*) [16])(this + 0x308) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x288) = uVar1;
  *(undefined2 *)(this + 0x294) = 1;
  *(undefined1 (*) [16])(this + 0x318) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x338) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x370) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 1000) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3f8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x290) = 0;
  this[0x296] = (Resource)0x0;
  *(undefined4 *)(this + 0x298) = 1;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x328) = uVar2;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x410) = uVar2;
  *(undefined8 *)(this + 0x438) = uVar2;
  *(undefined8 *)(this + 0x448) = 0;
  *(undefined8 *)(this + 0x458) = 0;
  *(undefined8 *)(this + 0x488) = uVar2;
  *(undefined8 *)(this + 0x4b8) = uVar2;
  *(undefined8 *)(this + 0x4e8) = uVar2;
  *(undefined8 *)(this + 0x518) = uVar2;
  *(undefined8 *)(this + 0x548) = uVar2;
  *(undefined1 (*) [16])(this + 0x418) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x428) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x468) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x478) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x498) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x4a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x4c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x4d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x4f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x508) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x528) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x538) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this + 0x550));
  *(undefined8 *)(this + 0x558) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00106788;
  this[0x560] = (Resource)0x0;
  *(undefined8 *)(this + 0x590) = uVar2;
  *(undefined8 *)(this + 0x5c0) = uVar2;
  *(undefined8 *)(this + 0x5d0) = 0;
  *(undefined8 *)(this + 0x5e0) = 0;
  *(undefined8 *)(this + 0x610) = uVar2;
  *(undefined8 *)(this + 0x640) = uVar2;
  *(undefined8 *)(this + 0x668) = uVar2;
  *(undefined1 (*) [16])(this + 0x570) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x580) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x5a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x5b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x5f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x600) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x620) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x630) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x648) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = RefCounted::RefCounted;
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



/* Object* ClassDB::creator<EditorSceneFormatImporterUFBX>(bool) */

Object * ClassDB::creator<EditorSceneFormatImporterUFBX>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x1e8,"");
  RefCounted::RefCounted(this);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined **)this = &EditorSceneFormatImporterUFBX::vtable;
  StringName::StringName((StringName *)(this + 0x188),"_get_extensions",false);
  this[400] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x198) = 0;
  StringName::StringName((StringName *)(this + 0x1a0),"_import_scene",false);
  this[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  StringName::StringName((StringName *)(this + 0x1b8),"_get_import_options",false);
  this[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  StringName::StringName((StringName *)(this + 0x1d0),"_get_option_visibility",false);
  this[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(code **)this = String::parse_latin1;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<EditorSceneFormatImporterFBX2GLTF>(bool) */

Object * ClassDB::creator<EditorSceneFormatImporterFBX2GLTF>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x1e8,"");
  RefCounted::RefCounted(this);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined **)this = &EditorSceneFormatImporterUFBX::vtable;
  StringName::StringName((StringName *)(this + 0x188),"_get_extensions",false);
  this[400] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x198) = 0;
  StringName::StringName((StringName *)(this + 0x1a0),"_import_scene",false);
  this[0x1a8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  StringName::StringName((StringName *)(this + 0x1b8),"_get_import_options",false);
  this[0x1c0] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  StringName::StringName((StringName *)(this + 0x1d0),"_get_option_visibility",false);
  this[0x1d8] = (RefCounted)0x0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined **)this = &GLTFDocument::vtable;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
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



/* Object* ClassDB::creator<FBXDocument>(bool) */

Object * ClassDB::creator<FBXDocument>(bool param_1)

{
  long lVar1;
  undefined8 uVar2;
  Resource *this;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  this = (Resource *)operator_new(0x278,"");
  Resource::Resource(this);
  *(code **)this = __cxa_guard_acquire;
  uVar2 = _LC14;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = uVar2;
  String::parse_latin1((StrRange *)(this + 0x248));
  *(undefined4 *)(this + 0x250) = 0x3f400000;
  *(undefined8 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined **)this = &__dso_handle;
  Object::_initialize();
  if (param_1) {
    Object::_postinitialize();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (Object *)this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FBXState::_get_class_namev() const */

undefined8 * FBXState::_get_class_namev(void)

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
LAB_00101883:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101883;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"FBXState");
      goto LAB_001018ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"FBXState");
LAB_001018ee:
  return &_get_class_namev()::_class_name_static;
}



/* GLTFState::_get_class_namev() const */

undefined8 * GLTFState::_get_class_namev(void)

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
LAB_00101963:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101963;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GLTFState");
      goto LAB_001019ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFState");
LAB_001019ce:
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = RefCounted::RefCounted;
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



/* String::~String() */

void __thiscall String::~String(String *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::~HashSet() */

void __thiscall
HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::~HashSet
          (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *this)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)this;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if ((*(int *)(this + 0x24) != 0) &&
     ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) == 0 ||
      (memset(*(void **)(this + 0x18),0,
              (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2),
      *(int *)(this + 0x24) != 0)))) {
    lVar2 = 0;
    do {
      lVar1 = lVar2 * 8;
      lVar2 = lVar2 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + lVar1));
      pvVar3 = *(void **)this;
    } while ((uint)lVar2 < *(uint *)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
    if (pvVar3 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  Memory::free_static(*(void **)(this + 8),false);
  Memory::free_static(*(void **)(this + 0x18),false);
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



/* FBXState::get_class() const */

void FBXState::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"FBXState");
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
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFState::get_class() const */

void GLTFState::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"GLTFState");
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
        String::parse_latin1((StrRange *)in_RDI);
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00101efb;
  }
  cVar4 = String::operator==(param_1,"RefCounted");
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
      if (cVar4 != '\0') goto LAB_00101efb;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_00101efb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001020fb;
  }
  cVar4 = String::operator==(param_1,"Resource");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001020fb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFState::is_class(String const&) const */

undefined8 __thiscall GLTFState::is_class(GLTFState *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010224b;
  }
  cVar4 = String::operator==(param_1,"GLTFState");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Resource::is_class((Resource *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010224b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFState::_initialize_classv() */

void GLTFState::_initialize_classv(void)

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
    local_48 = "GLTFState";
    local_60 = 0;
    local_40 = 9;
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
    if ((code *)PTR__bind_methods_00109010 != Resource::_bind_methods) {
      GLTFState::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<FBXState>(bool) */

void ClassDB::register_class<FBXState>(bool param_1)

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
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (FBXState::initialize_class()::initialized == '\0') {
    if (GLTFState::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Resource");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"GLTFState");
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != GLTFState::_bind_methods) {
        GLTFState::_bind_methods();
      }
      GLTFState::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"GLTFState");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"FBXState");
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
    if ((code *)PTR__bind_methods_00109018 != GLTFState::_bind_methods) {
      FBXState::_bind_methods();
    }
    FBXState::initialize_class()::initialized = '\x01';
  }
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"FBXState");
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_001081e4 != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)__bind_methods * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)__bind_methods * 8);
    if (local_48 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_48 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(_add_resource_base_extension + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar13 * 8) +
                     0x10) == local_48)) {
          lVar2 = *(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + (ulong)uVar12 * 8)
          ;
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          *(code **)(lVar2 + 0x2a8) = creator<FBXState>;
          *(undefined1 *)(lVar2 + 0x2a1) = 1;
          *(bool *)(lVar2 + 0x2a3) = param_1;
          *(undefined4 **)(lVar2 + 0x28) = &FBXState::get_class_ptr_static()::ptr;
          *(undefined4 *)(lVar2 + 0x18) = (undefined4)current_api;
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Resource");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          StringName::StringName((StringName *)&local_58,"res",false);
          ClassDB::add_resource_base_extension((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') &&
             (((local_58 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
              (local_48 != 0)))) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102883;
          goto LAB_0010281f;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(_add_resource_base_extension + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00102883:
    _global_unlock();
    return;
  }
LAB_0010281f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FBXState::_initialize_classv() */

void FBXState::_initialize_classv(void)

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
    if (GLTFState::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Resource");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"GLTFState");
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != GLTFState::_bind_methods) {
        GLTFState::_bind_methods();
      }
      GLTFState::initialize_class()::initialized = '\x01';
    }
    local_58 = "GLTFState";
    local_68 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "FBXState";
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
    if ((code *)PTR__bind_methods_00109018 != GLTFState::_bind_methods) {
      FBXState::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<EditorSceneFormatImporterUFBX>(bool) */

void ClassDB::register_class<EditorSceneFormatImporterUFBX>(bool param_1)

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
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorSceneFormatImporterUFBX::initialize_class()::initialized == '\0') {
    if (EditorSceneFormatImporter::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Object");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
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
        if ((code *)PTR__bind_methods_00109008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"RefCounted");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"EditorSceneFormatImporter");
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
      if ((code *)PTR__bind_methods_00109020 != RefCounted::_bind_methods) {
        EditorSceneFormatImporter::_bind_methods();
      }
      EditorSceneFormatImporter::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"EditorSceneFormatImporter");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"EditorSceneFormatImporterUFBX");
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
    EditorSceneFormatImporterUFBX::initialize_class()::initialized = '\x01';
  }
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"EditorSceneFormatImporterUFBX");
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_001081e4 != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)__bind_methods * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)__bind_methods * 8);
    if (local_48 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_48 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(_add_resource_base_extension + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar13 * 8) +
                     0x10) == local_48)) {
          lVar2 = *(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + (ulong)uVar12 * 8)
          ;
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          *(undefined1 *)(lVar2 + 0x2a1) = 1;
          *(code **)(lVar2 + 0x2a8) = creator<EditorSceneFormatImporterUFBX>;
          *(bool *)(lVar2 + 0x2a3) = param_1;
          *(undefined4 **)(lVar2 + 0x28) =
               &EditorSceneFormatImporterUFBX::get_class_ptr_static()::ptr;
          *(undefined4 *)(lVar2 + 0x18) = (undefined4)current_api;
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102f13;
          goto LAB_00102eaf;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(_add_resource_base_extension + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00102f13:
    _global_unlock();
    return;
  }
LAB_00102eaf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<EditorSceneFormatImporterFBX2GLTF>(bool) */

void ClassDB::register_class<EditorSceneFormatImporterFBX2GLTF>(bool param_1)

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
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (EditorSceneFormatImporterFBX2GLTF::initialize_class()::initialized == '\0') {
    if (EditorSceneFormatImporter::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Object");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
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
        if ((code *)PTR__bind_methods_00109008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"RefCounted");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"EditorSceneFormatImporter");
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
      if ((code *)PTR__bind_methods_00109020 != RefCounted::_bind_methods) {
        EditorSceneFormatImporter::_bind_methods();
      }
      EditorSceneFormatImporter::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"EditorSceneFormatImporter");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"EditorSceneFormatImporterFBX2GLTF");
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
    EditorSceneFormatImporterFBX2GLTF::initialize_class()::initialized = '\x01';
  }
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"EditorSceneFormatImporterFBX2GLTF");
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_001081e4 != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)__bind_methods * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)__bind_methods * 8);
    if (local_48 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_48 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(_add_resource_base_extension + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar13 * 8) +
                     0x10) == local_48)) {
          lVar2 = *(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + (ulong)uVar12 * 8)
          ;
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          *(undefined1 *)(lVar2 + 0x2a1) = 1;
          *(code **)(lVar2 + 0x2a8) = creator<EditorSceneFormatImporterFBX2GLTF>;
          *(bool *)(lVar2 + 0x2a3) = param_1;
          *(undefined4 **)(lVar2 + 0x28) =
               &EditorSceneFormatImporterFBX2GLTF::get_class_ptr_static()::ptr;
          *(undefined4 *)(lVar2 + 0x18) = (undefined4)current_api;
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00103423;
          goto LAB_001033bf;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(_add_resource_base_extension + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00103423:
    _global_unlock();
    return;
  }
LAB_001033bf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<FBXDocument>(bool) */

void ClassDB::register_class<FBXDocument>(bool param_1)

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
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (FBXDocument::initialize_class()::initialized == '\0') {
    if (GLTFDocument::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Resource");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"GLTFDocument");
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
      if ((code *)PTR__bind_methods_00109028 != Resource::_bind_methods) {
        GLTFDocument::_bind_methods();
      }
      GLTFDocument::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"GLTFDocument");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"FBXDocument");
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
    FBXDocument::initialize_class()::initialized = '\x01';
  }
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"FBXDocument");
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_001081e4 != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)__bind_methods * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)__bind_methods * 8);
    if (local_48 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_48 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(_add_resource_base_extension + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar13 * 8) +
                     0x10) == local_48)) {
          lVar2 = *(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + (ulong)uVar12 * 8)
          ;
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          *(code **)(lVar2 + 0x2a8) = creator<FBXDocument>;
          *(undefined1 *)(lVar2 + 0x2a1) = 1;
          *(bool *)(lVar2 + 0x2a3) = param_1;
          *(undefined4 **)(lVar2 + 0x28) = &FBXDocument::get_class_ptr_static()::ptr;
          *(undefined4 *)(lVar2 + 0x18) = (undefined4)current_api;
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Resource");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          StringName::StringName((StringName *)&local_58,"res",false);
          ClassDB::add_resource_base_extension((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') &&
             (((local_58 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
              (local_48 != 0)))) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001039a3;
          goto LAB_0010393f;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(_add_resource_base_extension + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001039a3:
    _global_unlock();
    return;
  }
LAB_0010393f:
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
        if (pvVar3 == (void *)0x0) goto LAB_00103adf;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00103adf:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* FBXState::is_class(String const&) const */

undefined8 __thiscall FBXState::is_class(FBXState *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00103c13;
  }
  cVar4 = String::operator==(param_1,"FBXState");
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
      if (cVar4 != '\0') goto LAB_00103c13;
    }
    cVar4 = String::operator==(param_1,"GLTFState");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Resource::is_class((Resource *)this,param_1);
        return uVar5;
      }
      goto LAB_00103d1e;
    }
  }
LAB_00103c13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103d1e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* GLTFState::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GLTFState::_get_property_listv(GLTFState *this,List *param_1,bool param_2)

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
  local_78 = "GLTFState";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFState";
  local_98 = 0;
  local_70 = 9;
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
  StringName::StringName((StringName *)&local_78,"GLTFState",false);
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



/* FBXState::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall FBXState::_get_property_listv(FBXState *this,List *param_1,bool param_2)

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
    GLTFState::_get_property_listv((GLTFState *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "FBXState";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FBXState";
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
  StringName::StringName((StringName *)&local_78,"FBXState",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      GLTFState::_get_property_listv((GLTFState *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

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



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pCVar2 = *(CowData<char32_t> **)this;
    if (pCVar2 != (CowData<char32_t> *)0x0) {
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)this = 0;
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
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* HashMap<ObjectID, HashMap<ObjectID, int, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID, int> > >,
   HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, HashMap<ObjectID, int, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID, int> > > > >
   >::~HashMap() */

void __thiscall
HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>
::~HashMap(HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>
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
                    Memory::free_static(*(void **)((long)pvVar5 + lVar4 * 2),false);
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_001048eb;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_001048eb:
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
LAB_00104cd0:
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
  if (lVar8 == 0) goto LAB_00104cd0;
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
        goto LAB_00104be1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00104be1:
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



/* CowData<Ref<GLTFNode> >::_unref() */

void __thiscall CowData<Ref<GLTFNode>>::_unref(CowData<Ref<GLTFNode>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_00104d8d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_00104d8d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<GLTFCamera> >::_unref() */

void __thiscall CowData<Ref<GLTFCamera>>::_unref(CowData<Ref<GLTFCamera>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_00104e6d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_00104e6d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<GLTFAnimation> >::_unref() */

void __thiscall CowData<Ref<GLTFAnimation>>::_unref(CowData<Ref<GLTFAnimation>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_00104f4d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_00104f4d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* GLTFState::~GLTFState() */

void __thiscall GLTFState::~GLTFState(GLTFState *this)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  Object *pOVar4;
  long lVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  long lVar12;
  long lVar13;
  
  *(undefined ***)this = &PTR__initialize_classv_001065b0;
  Dictionary::~Dictionary((Dictionary *)(this + 0x550));
  HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>
  ::~HashMap((HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>
              *)(this + 0x520));
  pvVar11 = *(void **)(this + 0x4f8);
  if (pvVar11 != (void *)0x0) {
    if (*(int *)(this + 0x51c) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x518) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x51c) = 0;
        *(undefined1 (*) [16])(this + 0x508) = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x500) + lVar8) != 0) {
            *(int *)(*(long *)(this + 0x500) + lVar8) = 0;
            Memory::free_static(*(void **)((long)pvVar11 + lVar8 * 2),false);
            pvVar11 = *(void **)(this + 0x4f8);
            *(undefined8 *)((long)pvVar11 + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 0x51c) = 0;
        *(undefined1 (*) [16])(this + 0x508) = (undefined1  [16])0x0;
        if (pvVar11 == (void *)0x0) goto LAB_001050a9;
      }
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0x500),false);
  }
LAB_001050a9:
  pvVar11 = *(void **)(this + 0x4c8);
  if (pvVar11 != (void *)0x0) {
    if (*(int *)(this + 0x4ec) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4e8) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x4ec) = 0;
        *(undefined1 (*) [16])(this + 0x4d8) = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x4d0) + lVar8) != 0) {
            pvVar11 = *(void **)((long)pvVar11 + lVar8 * 2);
            *(int *)(*(long *)(this + 0x4d0) + lVar8) = 0;
            if ((*(long *)((long)pvVar11 + 0x18) != 0) &&
               (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
              pOVar4 = *(Object **)((long)pvVar11 + 0x18);
              cVar7 = predelete_handler(pOVar4);
              if (cVar7 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar11 + 0x10));
            Memory::free_static(pvVar11,false);
            pvVar11 = *(void **)(this + 0x4c8);
            *(undefined8 *)((long)pvVar11 + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 0x4ec) = 0;
        *(undefined1 (*) [16])(this + 0x4d8) = (undefined1  [16])0x0;
        if (pvVar11 == (void *)0x0) goto LAB_00105172;
      }
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0x4d0),false);
  }
LAB_00105172:
  pvVar11 = *(void **)(this + 0x498);
  if (pvVar11 != (void *)0x0) {
    if (*(int *)(this + 0x4bc) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4b8) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x4bc) = 0;
        *(undefined1 (*) [16])(this + 0x4a8) = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x4a0) + lVar8) != 0) {
            *(int *)(*(long *)(this + 0x4a0) + lVar8) = 0;
            Memory::free_static(*(void **)((long)pvVar11 + lVar8 * 2),false);
            pvVar11 = *(void **)(this + 0x498);
            *(undefined8 *)((long)pvVar11 + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 0x4bc) = 0;
        *(undefined1 (*) [16])(this + 0x4a8) = (undefined1  [16])0x0;
        if (pvVar11 == (void *)0x0) goto LAB_00105211;
      }
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0x4a0),false);
  }
LAB_00105211:
  pvVar11 = *(void **)(this + 0x468);
  if (pvVar11 != (void *)0x0) {
    if (*(int *)(this + 0x48c) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x488) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x48c) = 0;
        *(undefined1 (*) [16])(this + 0x478) = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x470) + lVar8) != 0) {
            *(int *)(*(long *)(this + 0x470) + lVar8) = 0;
            Memory::free_static(*(void **)((long)pvVar11 + lVar8 * 2),false);
            pvVar11 = *(void **)(this + 0x468);
            *(undefined8 *)((long)pvVar11 + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 0x48c) = 0;
        *(undefined1 (*) [16])(this + 0x478) = (undefined1  [16])0x0;
        if (pvVar11 == (void *)0x0) goto LAB_001052af;
      }
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0x470),false);
  }
LAB_001052af:
  CowData<Ref<GLTFAnimation>>::_unref((CowData<Ref<GLTFAnimation>> *)(this + 0x458));
  if (*(long *)(this + 0x448) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x448) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x448);
      if (plVar1 == (long *)0x0) goto LAB_00105f0a;
      lVar8 = plVar1[-1];
      lVar12 = 0;
      *(undefined8 *)(this + 0x448) = 0;
      plVar9 = plVar1;
      if (lVar8 != 0) {
        do {
          while ((*plVar9 == 0 || (cVar7 = RefCounted::unreference(), cVar7 == '\0'))) {
LAB_00105308:
            lVar12 = lVar12 + 1;
            plVar9 = plVar9 + 1;
            if (lVar8 == lVar12) goto LAB_00105360;
          }
          pOVar4 = (Object *)*plVar9;
          cVar7 = predelete_handler(pOVar4);
          if (cVar7 == '\0') goto LAB_00105308;
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        } while (lVar8 != lVar12);
      }
LAB_00105360:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::~HashSet
            ((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *)(this + 0x418)
            );
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::~HashSet
            ((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *)(this + 0x3f0)
            );
  if (*(long *)(this + 1000) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 1000) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 1000);
      if (plVar1 == (long *)0x0) goto LAB_00105f0a;
      lVar8 = plVar1[-1];
      lVar12 = 0;
      *(undefined8 *)(this + 1000) = 0;
      plVar9 = plVar1;
      if (lVar8 != 0) {
        do {
          while ((*plVar9 == 0 || (cVar7 = RefCounted::unreference(), cVar7 == '\0'))) {
LAB_001053d0:
            lVar12 = lVar12 + 1;
            plVar9 = plVar9 + 1;
            if (lVar8 == lVar12) goto LAB_00105428;
          }
          pOVar4 = (Object *)*plVar9;
          cVar7 = predelete_handler(pOVar4);
          if (cVar7 == '\0') goto LAB_001053d0;
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        } while (lVar8 != lVar12);
      }
LAB_00105428:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<Ref<GLTFCamera>>::_unref((CowData<Ref<GLTFCamera>> *)(this + 0x3d8));
  if (*(long *)(this + 0x3c8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x3c8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x3c8);
      if (plVar1 == (long *)0x0) goto LAB_00105f0a;
      lVar8 = plVar1[-1];
      lVar12 = 0;
      *(undefined8 *)(this + 0x3c8) = 0;
      plVar9 = plVar1;
      if (lVar8 != 0) {
        do {
          while ((*plVar9 == 0 || (cVar7 = RefCounted::unreference(), cVar7 == '\0'))) {
LAB_00105490:
            lVar12 = lVar12 + 1;
            plVar9 = plVar9 + 1;
            if (lVar8 == lVar12) goto LAB_001054e8;
          }
          pOVar4 = (Object *)*plVar9;
          cVar7 = predelete_handler(pOVar4);
          if (cVar7 == '\0') goto LAB_00105490;
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        } while (lVar8 != lVar12);
      }
LAB_001054e8:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (*(long *)(this + 0x3b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x3b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x3b8);
      if (plVar1 == (long *)0x0) goto LAB_00105f0a;
      lVar8 = plVar1[-1];
      lVar12 = 0;
      *(undefined8 *)(this + 0x3b8) = 0;
      plVar9 = plVar1;
      if (lVar8 != 0) {
        do {
          while ((*plVar9 == 0 || (cVar7 = RefCounted::unreference(), cVar7 == '\0'))) {
LAB_00105540:
            lVar12 = lVar12 + 1;
            plVar9 = plVar9 + 1;
            if (lVar8 == lVar12) goto LAB_001055d0;
          }
          pOVar4 = (Object *)*plVar9;
          cVar7 = predelete_handler(pOVar4);
          if (cVar7 == '\0') goto LAB_00105540;
          if (*(code **)(*(long *)pOVar4 + 0x140) == Image::~Image) {
            *(code **)pOVar4 = RefCounted::RefCounted;
            if (*(long *)(pOVar4 + 0x250) != 0) {
              LOCK();
              plVar2 = (long *)(*(long *)(pOVar4 + 0x250) + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar10 = *(long *)(pOVar4 + 0x250);
                *(undefined8 *)(pOVar4 + 0x250) = 0;
                Memory::free_static((void *)(lVar10 + -0x10),false);
              }
            }
            Resource::~Resource((Resource *)pOVar4);
          }
          else {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          }
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
          Memory::free_static(pOVar4,false);
        } while (lVar8 != lVar12);
      }
LAB_001055d0:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<String>::_unref((CowData<String> *)(this + 0x3a8));
  CowData<String>::_unref((CowData<String> *)(this + 0x398));
  if (*(long *)(this + 0x388) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x388) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x388);
      if (plVar1 == (long *)0x0) goto LAB_00105f0a;
      lVar8 = plVar1[-1];
      lVar12 = 0;
      *(undefined8 *)(this + 0x388) = 0;
      plVar9 = plVar1;
      if (lVar8 != 0) {
        do {
          while ((*plVar9 == 0 || (cVar7 = RefCounted::unreference(), cVar7 == '\0'))) {
LAB_00105640:
            lVar12 = lVar12 + 1;
            plVar9 = plVar9 + 1;
            if (lVar8 == lVar12) goto LAB_00105698;
          }
          pOVar4 = (Object *)*plVar9;
          cVar7 = predelete_handler(pOVar4);
          if (cVar7 == '\0') goto LAB_00105640;
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        } while (lVar8 != lVar12);
      }
LAB_00105698:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((*(long *)(this + 0x378) != 0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
    pOVar4 = *(Object **)(this + 0x378);
    cVar7 = predelete_handler(pOVar4);
    if (cVar7 != '\0') {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
  if (*(long *)(this + 0x370) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x370) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x370);
      if (plVar1 == (long *)0x0) goto LAB_00105f0a;
      lVar8 = plVar1[-1];
      lVar12 = 0;
      *(undefined8 *)(this + 0x370) = 0;
      plVar9 = plVar1;
      if (lVar8 != 0) {
        do {
          while ((*plVar9 == 0 || (cVar7 = RefCounted::unreference(), cVar7 == '\0'))) {
LAB_00105708:
            lVar12 = lVar12 + 1;
            plVar9 = plVar9 + 1;
            if (lVar8 == lVar12) goto LAB_00105760;
          }
          pOVar4 = (Object *)*plVar9;
          cVar7 = predelete_handler(pOVar4);
          if (cVar7 == '\0') goto LAB_00105708;
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        } while (lVar8 != lVar12);
      }
LAB_00105760:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (*(long *)(this + 0x360) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x360) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x360);
      if (plVar1 == (long *)0x0) goto LAB_00105f0a;
      lVar8 = plVar1[-1];
      lVar12 = 0;
      *(undefined8 *)(this + 0x360) = 0;
      plVar9 = plVar1;
      if (lVar8 != 0) {
        do {
          while ((*plVar9 == 0 || (cVar7 = RefCounted::unreference(), cVar7 == '\0'))) {
LAB_001057b8:
            lVar12 = lVar12 + 1;
            plVar9 = plVar9 + 1;
            if (lVar8 == lVar12) goto LAB_00105810;
          }
          pOVar4 = (Object *)*plVar9;
          cVar7 = predelete_handler(pOVar4);
          if (cVar7 == '\0') goto LAB_001057b8;
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        } while (lVar8 != lVar12);
      }
LAB_00105810:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<int>::_unref((CowData<int> *)(this + 0x350));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x340));
  if (*(long *)(this + 0x338) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x338) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x338);
      if (plVar1 == (long *)0x0) goto LAB_00105f0a;
      lVar8 = plVar1[-1];
      lVar12 = 0;
      *(undefined8 *)(this + 0x338) = 0;
      plVar9 = plVar1;
      if (lVar8 != 0) {
        do {
          while ((*plVar9 == 0 || (cVar7 = RefCounted::unreference(), cVar7 == '\0'))) {
LAB_00105880:
            lVar12 = lVar12 + 1;
            plVar9 = plVar9 + 1;
            if (lVar8 == lVar12) goto LAB_001058d8;
          }
          pOVar4 = (Object *)*plVar9;
          cVar7 = predelete_handler(pOVar4);
          if (cVar7 == '\0') goto LAB_00105880;
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        } while (lVar8 != lVar12);
      }
LAB_001058d8:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  pvVar11 = *(void **)(this + 0x308);
  if (pvVar11 != (void *)0x0) {
    if (*(int *)(this + 0x32c) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x328) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x32c) = 0;
        *(undefined1 (*) [16])(this + 0x318) = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x310) + lVar8) != 0) {
            pvVar11 = *(void **)((long)pvVar11 + lVar8 * 2);
            *(int *)(*(long *)(this + 0x310) + lVar8) = 0;
            if ((*(long *)((long)pvVar11 + 0x10) != 0) &&
               (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
              pOVar4 = *(Object **)((long)pvVar11 + 0x10);
              cVar7 = predelete_handler(pOVar4);
              if (cVar7 != '\0') {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
            Memory::free_static(pvVar11,false);
            pvVar11 = *(void **)(this + 0x308);
            *(undefined8 *)((long)pvVar11 + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while ((ulong)uVar3 << 2 != lVar8);
        *(undefined4 *)(this + 0x32c) = 0;
        *(undefined1 (*) [16])(this + 0x318) = (undefined1  [16])0x0;
        if (pvVar11 == (void *)0x0) goto LAB_0010599d;
      }
    }
    Memory::free_static(pvVar11,false);
    Memory::free_static(*(void **)(this + 0x310),false);
  }
LAB_0010599d:
  if (*(long *)(this + 0x2f8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2f8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar8 = *(long *)(this + 0x2f8);
      *(undefined8 *)(this + 0x2f8) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x2e8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2e8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x2e8);
      if (plVar1 == (long *)0x0) goto LAB_00105f0a;
      lVar8 = plVar1[-1];
      lVar12 = 0;
      *(undefined8 *)(this + 0x2e8) = 0;
      plVar9 = plVar1;
      if (lVar8 != 0) {
        do {
          while ((*plVar9 == 0 || (cVar7 = RefCounted::unreference(), cVar7 == '\0'))) {
LAB_00105a00:
            lVar12 = lVar12 + 1;
            plVar9 = plVar9 + 1;
            if (lVar8 == lVar12) goto LAB_00105a58;
          }
          pOVar4 = (Object *)*plVar9;
          cVar7 = predelete_handler(pOVar4);
          if (cVar7 == '\0') goto LAB_00105a00;
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        } while (lVar8 != lVar12);
      }
LAB_00105a58:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (*(long *)(this + 0x2d8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2d8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x2d8);
      if (plVar1 == (long *)0x0) goto LAB_00105f0a;
      lVar8 = plVar1[-1];
      lVar12 = 0;
      *(undefined8 *)(this + 0x2d8) = 0;
      plVar9 = plVar1;
      if (lVar8 != 0) {
        do {
          while ((*plVar9 == 0 || (cVar7 = RefCounted::unreference(), cVar7 == '\0'))) {
LAB_00105ab0:
            lVar12 = lVar12 + 1;
            plVar9 = plVar9 + 1;
            if (lVar8 == lVar12) goto LAB_00105b08;
          }
          pOVar4 = (Object *)*plVar9;
          cVar7 = predelete_handler(pOVar4);
          if (cVar7 == '\0') goto LAB_00105ab0;
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        } while (lVar8 != lVar12);
      }
LAB_00105b08:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (*(long *)(this + 0x2c8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2c8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x2c8);
      if (plVar1 == (long *)0x0) goto LAB_00105f0a;
      lVar8 = plVar1[-1];
      lVar12 = 0;
      *(undefined8 *)(this + 0x2c8) = 0;
      plVar9 = plVar1;
      if (lVar8 != 0) {
        do {
          while ((*plVar9 == 0 || (cVar7 = RefCounted::unreference(), cVar7 == '\0'))) {
LAB_00105b60:
            lVar12 = lVar12 + 1;
            plVar9 = plVar9 + 1;
            if (lVar8 == lVar12) goto LAB_00105bb8;
          }
          pOVar4 = (Object *)*plVar9;
          cVar7 = predelete_handler(pOVar4);
          if (cVar7 == '\0') goto LAB_00105b60;
          lVar12 = lVar12 + 1;
          plVar9 = plVar9 + 1;
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        } while (lVar8 != lVar12);
      }
LAB_00105bb8:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (*(long *)(this + 0x2b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar8 = *(long *)(this + 0x2b8);
      if (lVar8 == 0) {
LAB_00105f0a:
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar12 = *(long *)(lVar8 + -8);
      lVar13 = 0;
      *(undefined8 *)(this + 0x2b8) = 0;
      lVar10 = lVar8;
      if (lVar12 != 0) {
        do {
          if (*(long *)(lVar10 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar10 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar5 = *(long *)(lVar10 + 8);
              *(undefined8 *)(lVar10 + 8) = 0;
              Memory::free_static((void *)(lVar5 + -0x10),false);
            }
          }
          lVar13 = lVar13 + 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar12 != lVar13);
      }
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  CowData<Ref<GLTFNode>>::_unref((CowData<Ref<GLTFNode>> *)(this + 0x2a8));
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar8 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x270));
  Dictionary::~Dictionary((Dictionary *)(this + 0x260));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 600));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x250));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x248));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x240));
  Resource::~Resource((Resource *)this);
  return;
}



/* GLTFState::~GLTFState() */

void __thiscall GLTFState::~GLTFState(GLTFState *this)

{
  ~GLTFState(this);
  operator_delete(this,0x558);
  return;
}



/* FBXState::~FBXState() */

void __thiscall FBXState::~FBXState(FBXState *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  pvVar7 = *(void **)(this + 0x648);
  *(undefined ***)this = &PTR__initialize_classv_00106788;
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x66c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x668) * 4) != 0) {
        memset(*(void **)(this + 0x660),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x668) * 4) * 4);
        if (*(int *)(this + 0x66c) == 0) goto LAB_00106370;
      }
      lVar4 = 0;
      do {
        lVar5 = lVar4 * 8;
        lVar4 = lVar4 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + lVar5));
        pvVar7 = *(void **)(this + 0x648);
      } while ((uint)lVar4 < *(uint *)(this + 0x66c));
      *(undefined4 *)(this + 0x66c) = 0;
      if (pvVar7 == (void *)0x0) goto LAB_00105fef;
    }
LAB_00106370:
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x658),false);
    Memory::free_static(*(void **)(this + 0x650),false);
    Memory::free_static(*(void **)(this + 0x660),false);
  }
LAB_00105fef:
  pvVar7 = *(void **)(this + 0x620);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x644) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x640) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x644) = 0;
        *(undefined1 (*) [16])(this + 0x630) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x628) + lVar4) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x628) + lVar4) = 0;
            pvVar6 = *(void **)((long)pvVar7 + 0x20);
            if (pvVar6 != (void *)0x0) {
              if (*(int *)((long)pvVar7 + 0x44) != 0) {
                uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar7 + 0x40) * 4
                                 );
                if (uVar2 == 0) {
                  *(undefined4 *)((long)pvVar7 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar7 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar5 = 0;
                  do {
                    piVar3 = (int *)(*(long *)((long)pvVar7 + 0x28) + lVar5);
                    if (*piVar3 != 0) {
                      *piVar3 = 0;
                      Memory::free_static(*(void **)((long)pvVar6 + lVar5 * 2),false);
                      pvVar6 = *(void **)((long)pvVar7 + 0x20);
                      *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
                    }
                    lVar5 = lVar5 + 4;
                  } while ((ulong)uVar2 << 2 != lVar5);
                  *(undefined4 *)((long)pvVar7 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar7 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar6 == (void *)0x0) goto LAB_001060df;
                }
              }
              Memory::free_static(pvVar6,false);
              Memory::free_static(*(void **)((long)pvVar7 + 0x28),false);
            }
LAB_001060df:
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x620);
            *(undefined8 *)((long)pvVar7 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x644) = 0;
        *(undefined1 (*) [16])(this + 0x630) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_00106128;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x628),false);
  }
LAB_00106128:
  pvVar7 = *(void **)(this + 0x5f0);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x614) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x610) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x614) = 0;
        *(undefined1 (*) [16])(this + 0x600) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x5f8) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0x5f8) + lVar4) = 0;
            Memory::free_static(*(void **)((long)pvVar7 + lVar4 * 2),false);
            pvVar7 = *(void **)(this + 0x5f0);
            *(undefined8 *)((long)pvVar7 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0x614) = 0;
        *(undefined1 (*) [16])(this + 0x600) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_001061c9;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x5f8),false);
  }
LAB_001061c9:
  CowData<int>::_unref((CowData<int> *)(this + 0x5e0));
  CowData<int>::_unref((CowData<int> *)(this + 0x5d0));
  pvVar7 = *(void **)(this + 0x5a0);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x5c4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x5c0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x5c4) = 0;
        *(undefined1 (*) [16])(this + 0x5b0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x5a8) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0x5a8) + lVar4) = 0;
            Memory::free_static(*(void **)((long)pvVar7 + lVar4 * 2),false);
            pvVar7 = *(void **)(this + 0x5a0);
            *(undefined8 *)((long)pvVar7 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x5c4) = 0;
        *(undefined1 (*) [16])(this + 0x5b0) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0010627f;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x5a8),false);
  }
LAB_0010627f:
  pvVar7 = *(void **)(this + 0x570);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x594) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x590) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x594) = 0;
        *(undefined1 (*) [16])(this + 0x580) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x578) + lVar4) != 0) {
            *(int *)(*(long *)(this + 0x578) + lVar4) = 0;
            Memory::free_static(*(void **)((long)pvVar7 + lVar4 * 2),false);
            pvVar7 = *(void **)(this + 0x570);
            *(undefined8 *)((long)pvVar7 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0x594) = 0;
        *(undefined1 (*) [16])(this + 0x580) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_00106313;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x578),false);
  }
LAB_00106313:
  ufbx_free_scene(*(undefined8 *)(this + 0x558));
  GLTFState::~GLTFState((GLTFState *)this);
  return;
}



/* FBXState::~FBXState() */

void __thiscall FBXState::~FBXState(FBXState *this)

{
  ~FBXState(this);
  operator_delete(this,0x670);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* FBXState::~FBXState() */

void __thiscall FBXState::~FBXState(FBXState *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GLTFState::~GLTFState() */

void __thiscall GLTFState::~GLTFState(GLTFState *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<ObjectID, HashMap<ObjectID, int, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID, int> > >,
   HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, HashMap<ObjectID, int, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID, int> > > > >
   >::~HashMap() */

void __thiscall
HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>
::~HashMap(HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>
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
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::~HashSet() */

void __thiscall
HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::~HashSet
          (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *this)

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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

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


