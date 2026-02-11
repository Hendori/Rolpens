
/* ResourceImporterShaderFile::get_preset_count() const */

undefined8 ResourceImporterShaderFile::get_preset_count(void)

{
  return 0;
}



/* ResourceImporterShaderFile::get_preset_name(int) const */

undefined8 ResourceImporterShaderFile::get_preset_name(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* ResourceImporterShaderFile::get_import_options(String const&,
   List<ResourceImporter::ImportOption, DefaultAllocator>*, int) const */

void ResourceImporterShaderFile::get_import_options(String *param_1,List *param_2,int param_3)

{
  return;
}



/* ResourceImporterShaderFile::get_option_visibility(String const&, String const&,
   HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) const */

undefined8
ResourceImporterShaderFile::get_option_visibility(String *param_1,String *param_2,HashMap *param_3)

{
  return 1;
}



/* ResourceImporterShaderFile::get_save_extension() const */

ResourceImporterShaderFile * __thiscall
ResourceImporterShaderFile::get_save_extension(ResourceImporterShaderFile *this)

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



/* ResourceImporterShaderFile::get_resource_type() const */

ResourceImporterShaderFile * __thiscall
ResourceImporterShaderFile::get_resource_type(ResourceImporterShaderFile *this)

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



/* ResourceImporterShaderFile::get_visible_name() const */

ResourceImporterShaderFile * __thiscall
ResourceImporterShaderFile::get_visible_name(ResourceImporterShaderFile *this)

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



/* ResourceImporterShaderFile::get_importer_name() const */

ResourceImporterShaderFile * __thiscall
ResourceImporterShaderFile::get_importer_name(ResourceImporterShaderFile *this)

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



/* ResourceImporterShaderFile::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ResourceImporterShaderFile::get_recognized_extensions
          (ResourceImporterShaderFile *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = &_LC9;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (local_40 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)&local_40);
  }
  lVar3 = local_40;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar1;
  *(long *)(this_00 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 == 0) {
    *plVar1 = (long)this_00;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterShaderFile::ResourceImporterShaderFile() */

void __thiscall
ResourceImporterShaderFile::ResourceImporterShaderFile(ResourceImporterShaderFile *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0010f1e0;
  return;
}



/* ResourceImporterShaderFile::import(long, String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) */

undefined4
ResourceImporterShaderFile::import
          (long param_1,String *param_2,String *param_3,HashMap *param_4,List *param_5,List *param_6
          ,Variant *param_7)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Resource *this;
  Object *pOVar4;
  CallableCustom *this_00;
  Resource *pRVar5;
  Resource *pRVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  byte bVar8;
  StrRange *local_120;
  int local_e4;
  Object *local_e0;
  CowData<char32_t> local_d8 [8];
  CowData<char32_t> local_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  String local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8 [2];
  Object *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  int local_60 [8];
  long local_40;
  
  bVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = OS::get_singleton();
  local_98 = (Object *)0x0;
  if (*(long *)(lVar3 + 0x68) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(lVar3 + 0x68));
  }
  cVar1 = String::operator==((String *)&local_98,"gl_compatibility");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (cVar1 == '\0') {
    (**(code **)(*DisplayServer::singleton + 0x158))((CowData<char32_t> *)&local_98);
    cVar1 = String::operator==((String *)&local_98,"headless");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (cVar1 == '\0') {
      FileAccess::open((String *)&local_e0,(int)param_3,(Error *)0x1);
      if (local_e4 == 0) {
        if (local_e0 == (Object *)0x0) {
          _err_print_error("import","editor/import/resource_importer_shader_file.cpp",99,
                           "Condition \"file.is_null()\" is true. Returning: ERR_CANT_OPEN",0,0);
          goto LAB_00100cf5;
        }
        pRVar6 = (Resource *)0x0;
        (**(code **)(*(long *)local_e0 + 0x240))(local_d8,local_e0,0);
        this = (Resource *)operator_new(0x278,"");
        pRVar5 = this;
        for (lVar3 = 0x4f; lVar3 != 0; lVar3 = lVar3 + -1) {
          *(undefined8 *)pRVar5 = 0;
          pRVar5 = pRVar5 + (ulong)bVar8 * -0x10 + 8;
        }
        Resource::Resource(this);
        *(undefined ***)this = &PTR__initialize_classv_0010f008;
        *(undefined8 *)(this + 0x268) = 2;
        *(undefined8 *)(this + 0x270) = 0;
        *(undefined1 (*) [16])(this + 0x248) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
        postinitialize_handler((Object *)this);
        cVar1 = RefCounted::init_ref();
        if (cVar1 != '\0') {
          cVar1 = RefCounted::reference();
          if (cVar1 != '\0') {
            pRVar6 = this;
          }
          cVar1 = RefCounted::unreference();
          if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)this), cVar1 != '\0')) {
            (**(code **)(*(long *)this + 0x140))(this);
            Memory::free_static(this,false);
          }
        }
        String::get_base_dir();
        local_a8[0] = 0;
        local_98 = (Object *)&_LC1;
        local_90 = 0;
        String::parse_latin1((StrRange *)local_a8);
        iVar2 = RDShaderFile::parse_versions_from_text
                          (pRVar6,local_d8,(StrRange *)local_a8,_include_function,local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
        if (iVar2 != 0) {
          cVar1 = CanvasItem::is_visible_in_tree();
          if (cVar1 == '\0') {
            this_00 = (CallableCustom *)operator_new(0x30,"");
            CallableCustom::CallableCustom(this_00);
            *(undefined ***)this_00 = &PTR_hash_0010f3f8;
            *(undefined8 *)(this_00 + 0x10) = 0;
            *(code **)(this_00 + 0x28) = EditorNode::add_io_error;
            *(undefined **)(this_00 + 0x20) = &_LC1;
            CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
            *(char **)(this_00 + 0x20) = "EditorNode::add_io_error";
            Callable::Callable((Callable *)local_a8,this_00);
            local_b0 = 0;
            if (*(long *)param_3 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)param_3);
            }
            local_98 = (Object *)&_LC1;
            local_c0 = 0;
            local_90 = 0;
            String::parse_latin1((StrRange *)&local_c0);
            local_98 = (Object *)0x107278;
            local_c8 = 0;
            local_90 = 0x68;
            String::parse_latin1((StrRange *)&local_c8);
            TTR(local_b8,(String *)&local_c8);
            vformat<String>((CowData<char32_t> *)&local_98,local_b8,(CowData<char32_t> *)&local_b0);
            Variant::Variant((Variant *)local_78,(String *)&local_98);
            Variant::Variant((Variant *)local_60,0);
            local_88[0] = (Variant *)local_78;
            Callable::call_deferredp((Variant **)local_a8,(int)local_88);
            if (Variant::needs_deinit[local_60[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_120 = (StrRange *)&local_b0;
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
            Callable::~Callable((Callable *)local_a8);
          }
        }
        local_120 = (StrRange *)&local_b0;
        local_b0 = 0;
        local_98 = (Object *)&_LC54;
        local_90 = 4;
        String::parse_latin1(local_120);
        String::operator+((String *)local_a8,(String *)param_4);
        local_98 = (Object *)0x0;
        pOVar4 = (Object *)__dynamic_cast(pRVar6,&Object::typeinfo,&Resource::typeinfo,0);
        if ((pOVar4 != (Object *)0x0) &&
           (local_98 = pOVar4, cVar1 = RefCounted::reference(), cVar1 == '\0')) {
          local_98 = (Object *)0x0;
        }
        ResourceSaver::save((Ref *)&local_98,(String *)local_a8,0);
        if (((local_98 != (Object *)0x0) &&
            (cVar1 = RefCounted::unreference(), pOVar4 = local_98, cVar1 != '\0')) &&
           (cVar1 = predelete_handler(local_98), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
        CowData<char32_t>::_unref(local_d0);
        cVar1 = RefCounted::unreference();
        if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)pRVar6), cVar1 != '\0')) {
          (**(code **)(*(long *)pRVar6 + 0x140))(pRVar6);
          Memory::free_static(pRVar6,false);
        }
        CowData<char32_t>::_unref(local_d8);
        uVar7 = 0;
      }
      else {
        _err_print_error("import","editor/import/resource_importer_shader_file.cpp",0x62,
                         "Condition \"err != OK\" is true. Returning: ERR_CANT_OPEN",0,0);
LAB_00100cf5:
        uVar7 = 0x13;
      }
      if (((local_e0 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(local_e0), cVar1 != '\0')) {
        (**(code **)(*(long *)local_e0 + 0x140))(local_e0);
        Memory::free_static(local_e0,false);
      }
      goto LAB_0010093f;
    }
    _err_print_error("import","editor/import/resource_importer_shader_file.cpp",0x5e,
                     "Condition \"(DisplayServer::get_singleton()->get_name() == \"headless\")\" is true. Returning: ERR_UNAVAILABLE"
                     ,"Cannot import custom .glsl shaders when running in headless mode.",1);
  }
  else {
    _err_print_error("import","editor/import/resource_importer_shader_file.cpp",0x5d,
                     "Condition \"(OS::get_singleton()->get_current_rendering_method() == \"gl_compatibility\")\" is true. Returning: ERR_UNAVAILABLE"
                     ,
                     "Cannot import custom .glsl shaders when using the Compatibility renderer. Please switch to the Forward+ or Mobile renderer to use custom shaders."
                     ,1,0);
  }
  uVar7 = 2;
LAB_0010093f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x10f7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ResourceImporter::get_priority() const */

undefined4 ResourceImporter::get_priority(void)

{
  return _LC0;
}



/* ResourceImporter::get_import_order() const */

undefined8 ResourceImporter::get_import_order(void)

{
  return 0;
}



/* ResourceImporter::get_format_version() const */

undefined8 ResourceImporter::get_format_version(void)

{
  return 0;
}



/* ResourceImporter::has_advanced_options() const */

undefined8 ResourceImporter::has_advanced_options(void)

{
  return 0;
}



/* ResourceImporter::show_advanced_options(String const&) */

void ResourceImporter::show_advanced_options(String *param_1)

{
  return;
}



/* ResourceImporter::handle_compatibility_options(HashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Variant> >
   >&) const */

void ResourceImporter::handle_compatibility_options(HashMap *param_1)

{
  return;
}



/* ResourceImporter::get_option_group_file() const */

ResourceImporter * __thiscall ResourceImporter::get_option_group_file(ResourceImporter *this)

{
  *(undefined8 *)this = 0;
  return this;
}



/* ResourceImporter::import_threaded_begin() */

void ResourceImporter::import_threaded_begin(void)

{
  return;
}



/* ResourceImporter::import_threaded_end() */

void ResourceImporter::import_threaded_end(void)

{
  return;
}



/* ResourceImporter::import_group_file(String const&, HashMap<String, HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > > > > const&, HashMap<String,
   String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > > const&) */

undefined8 ResourceImporter::import_group_file(String *param_1,HashMap *param_2,HashMap *param_3)

{
  return 2;
}



/* ResourceImporter::are_import_settings_valid(String const&, Dictionary const&) const */

undefined8 ResourceImporter::are_import_settings_valid(String *param_1,Dictionary *param_2)

{
  return 1;
}



/* ResourceImporter::get_import_settings_string() const */

ResourceImporter * __thiscall ResourceImporter::get_import_settings_string(ResourceImporter *this)

{
  *(undefined8 *)this = 0;
  return this;
}



/* ResourceImporterShaderFile::is_class_ptr(void*) const */

uint __thiscall
ResourceImporterShaderFile::is_class_ptr(ResourceImporterShaderFile *this,void *param_1)

{
  return (uint)CONCAT71(0x10f7,(undefined4 *)param_1 ==
                               &ResourceImporter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f7,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceImporterShaderFile::_getv(StringName const&, Variant&) const */

undefined8 ResourceImporterShaderFile::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterShaderFile::_setv(StringName const&, Variant const&) */

undefined8 ResourceImporterShaderFile::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterShaderFile::_validate_propertyv(PropertyInfo&) const */

void ResourceImporterShaderFile::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceImporterShaderFile::_property_can_revertv(StringName const&) const */

undefined8 ResourceImporterShaderFile::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceImporterShaderFile::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceImporterShaderFile::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterShaderFile::_notificationv(int, bool) */

void ResourceImporterShaderFile::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceImporterShaderFile::can_import_threaded() const */

undefined8 ResourceImporterShaderFile::can_import_threaded(void)

{
  return 1;
}



/* RDShaderFile::is_class_ptr(void*) const */

uint __thiscall RDShaderFile::is_class_ptr(RDShaderFile *this,void *param_1)

{
  return (uint)CONCAT71(0x10f7,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f7,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RDShaderFile::_getv(StringName const&, Variant&) const */

undefined8 RDShaderFile::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RDShaderFile::_setv(StringName const&, Variant const&) */

undefined8 RDShaderFile::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RDShaderFile::_validate_propertyv(PropertyInfo&) const */

void RDShaderFile::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RDShaderFile::_property_can_revertv(StringName const&) const */

undefined8 RDShaderFile::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RDShaderFile::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RDShaderFile::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RDShaderFile::_notificationv(int, bool) */

void RDShaderFile::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomStaticMethodPointer<void, String const&>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&>::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,String_const&> *this)

{
  return;
}



/* MethodBindTRC<Dictionary>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Dictionary>::_gen_argument_type(int param_1)

{
  return 0x1b;
}



/* MethodBindTRC<Dictionary>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Dictionary>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Dictionary const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Dictionary_const&>::_gen_argument_type(MethodBindT<Dictionary_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1b;
}



/* MethodBindT<Dictionary const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Dictionary_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TypedArray<StringName>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TypedArray<StringName>>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<TypedArray<StringName>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TypedArray<StringName>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::_gen_argument_type
          (MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffd) + 0x18;
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::_gen_argument_type
          (MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 3U) + 0x15;
  }
  return cVar1;
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<void, String const&>::is_valid() const */

undefined8 CallableCustomStaticMethodPointer<void,String_const&>::is_valid(void)

{
  return 1;
}



/* CallableCustomStaticMethodPointer<void, String const&>::get_object() const */

undefined8 CallableCustomStaticMethodPointer<void,String_const&>::get_object(void)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<void, String const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomStaticMethodPointer<void,String_const&>::get_argument_count
          (CallableCustomStaticMethodPointer<void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomStaticMethodPointer<void, String const&>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&>::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,String_const&> *this)

{
  operator_delete(this,0x30);
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



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::~MethodBindT
          (MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f488;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::~MethodBindT
          (MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f488;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f4e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f4e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<StringName>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<StringName>>::~MethodBindTRC(MethodBindTRC<TypedArray<StringName>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f548;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<StringName>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<StringName>>::~MethodBindTRC(MethodBindTRC<TypedArray<StringName>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f548;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f5a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f5a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f608;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f608;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f668;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f668;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f6c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f6c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010eea8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010eea8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ResourceImporterShaderFile::~ResourceImporterShaderFile() */

void __thiscall
ResourceImporterShaderFile::~ResourceImporterShaderFile(ResourceImporterShaderFile *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010eea8;
  Object::~Object((Object *)this);
  return;
}



/* ResourceImporterShaderFile::~ResourceImporterShaderFile() */

void __thiscall
ResourceImporterShaderFile::~ResourceImporterShaderFile(ResourceImporterShaderFile *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010eea8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* SortArray<StringName, StringName::AlphCompare, true>::adjust_heap(long, long, long, StringName,
   StringName*) const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::adjust_heap
               (long param_1,long param_2,long param_3,StringName *param_4,long param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  StringName *pSVar13;
  StringName *this;
  long lVar14;
  long in_FS_OFFSET;
  StringName *local_50;
  long local_48;
  long local_40;
  
  lVar11 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = param_2;
  if (lVar11 < param_3) {
    do {
      lVar9 = lVar11 + -1;
      this = (StringName *)(param_5 + (lVar9 + param_1) * 8);
      pSVar13 = (StringName *)(param_5 + (param_1 + lVar11) * 8);
      lVar6 = *(long *)this;
      lVar5 = *(long *)pSVar13;
      if (lVar5 == 0) {
        if (lVar6 != 0) {
          pbVar10 = *(byte **)(lVar6 + 8);
          uVar8 = 0;
          pbVar12 = &_LC1;
LAB_0010172c:
          if (pbVar10 == (byte *)0x0) {
            lVar5 = 0;
            uVar3 = **(uint **)(lVar6 + 0x10);
            if (uVar3 != 0 || uVar8 != 0) {
              do {
                if (uVar8 == 0) goto LAB_001016e0;
                if (uVar3 == 0) break;
                if (uVar8 < uVar3) goto LAB_001016e0;
                if (uVar3 < uVar8) break;
                uVar8 = (uint)(char)pbVar12[lVar5 + 1];
                uVar3 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
                lVar5 = lVar5 + 1;
              } while (uVar8 != 0 || uVar3 != 0);
            }
          }
          else {
            uVar3 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
LAB_0010177e:
            if (bVar4 != 0) {
              lVar6 = 1;
              do {
                if (uVar8 == 0) goto LAB_001016e0;
                if (uVar3 == 0) break;
                if (uVar8 < uVar3) goto LAB_001016e0;
                if (uVar3 < uVar8) break;
                pbVar1 = pbVar12 + lVar6;
                uVar8 = (uint)(char)*pbVar1;
                pbVar2 = pbVar10 + lVar6;
                uVar3 = (uint)(char)*pbVar2;
                lVar6 = lVar6 + 1;
              } while (*pbVar1 != 0 || *pbVar2 != 0);
            }
          }
        }
      }
      else {
        pbVar12 = *(byte **)(lVar5 + 8);
        if (lVar6 == 0) {
          if (pbVar12 != (byte *)0x0) {
            bVar4 = *pbVar12;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC1;
            uVar3 = 0;
            goto LAB_0010177e;
          }
          uVar8 = 0;
          pbVar10 = &_LC1;
        }
        else {
          pbVar10 = *(byte **)(lVar6 + 8);
          if (pbVar12 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar12;
            goto LAB_0010172c;
          }
          if (pbVar10 == (byte *)0x0) {
            lVar7 = 4;
            uVar8 = **(uint **)(lVar6 + 0x10);
            uVar3 = **(uint **)(lVar5 + 0x10);
            if (uVar8 != 0 || uVar3 != 0) {
              do {
                if (uVar3 == 0) goto LAB_001016e0;
                if (uVar8 == 0) break;
                if (uVar3 < uVar8) goto LAB_001016e0;
                if (uVar8 < uVar3) break;
                uVar3 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
                uVar8 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
                lVar7 = lVar7 + 4;
              } while (uVar3 != 0 || uVar8 != 0);
            }
            goto LAB_00101708;
          }
          uVar8 = (uint)(char)*pbVar10;
        }
        lVar6 = 0;
        uVar3 = **(uint **)(lVar5 + 0x10);
        if (uVar3 != 0 || uVar8 != 0) {
          do {
            if (uVar3 == 0) goto LAB_001016e0;
            if (uVar8 == 0) break;
            if (uVar3 < uVar8) goto LAB_001016e0;
            if (uVar8 < uVar3) break;
            uVar3 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
            uVar8 = (uint)(char)pbVar10[lVar6 + 1];
            lVar6 = lVar6 + 1;
          } while (uVar3 != 0 || uVar8 != 0);
        }
      }
LAB_00101708:
      lVar9 = lVar11;
      this = pSVar13;
      lVar11 = lVar11 + 1;
LAB_001016e0:
      lVar11 = lVar11 * 2;
      StringName::operator=((StringName *)(param_5 + (lVar14 + param_1) * 8),this);
      lVar14 = lVar9;
    } while (lVar11 < param_3);
    pSVar13 = this;
    if (lVar11 == param_3) goto LAB_00101b48;
  }
  else {
    this = (StringName *)(param_5 + (param_2 + param_1) * 8);
    if (lVar11 != param_3) {
      StringName::StringName((StringName *)&local_48,param_4);
      goto LAB_00101922;
    }
LAB_00101b48:
    lVar9 = lVar11 + -1;
    pSVar13 = (StringName *)(param_5 + (param_1 + lVar9) * 8);
    StringName::operator=(this,pSVar13);
  }
  StringName::StringName((StringName *)&local_48,param_4);
  lVar11 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
  this = pSVar13;
  while (param_2 < lVar9) {
    lVar14 = lVar11 >> 1;
    this = (StringName *)(param_5 + (param_1 + lVar14) * 8);
    lVar11 = *(long *)this;
    if (lVar11 == 0) {
      if (local_48 != 0) {
        pbVar10 = *(byte **)(local_48 + 8);
        uVar3 = 0;
        uVar8 = 0;
        pbVar12 = &_LC1;
        if (pbVar10 != (byte *)0x0) goto LAB_001019e3;
LAB_00101985:
        uVar8 = **(uint **)(local_48 + 0x10);
        if (uVar8 != 0 || uVar3 != 0) {
          lVar11 = 0;
          while (uVar3 != 0) {
            if (uVar8 == 0) goto LAB_00101918;
            if (uVar3 < uVar8) break;
            if (uVar8 < uVar3) goto LAB_00101918;
            uVar3 = (uint)(char)pbVar12[lVar11 + 1];
            uVar8 = (*(uint **)(local_48 + 0x10))[lVar11 + 1];
            lVar11 = lVar11 + 1;
            if (uVar3 == 0 && uVar8 == 0) goto LAB_00101918;
          }
          goto LAB_001018e0;
        }
      }
LAB_00101918:
      this = (StringName *)(param_5 + (lVar9 + param_1) * 8);
      break;
    }
    pbVar12 = *(byte **)(lVar11 + 8);
    if (local_48 == 0) {
      uVar8 = 0;
      pbVar10 = &_LC1;
      if (pbVar12 != (byte *)0x0) {
        bVar4 = *pbVar12;
        uVar8 = (uint)(char)bVar4;
        pbVar10 = &_LC1;
        uVar3 = 0;
        goto LAB_001019e9;
      }
LAB_00101a4a:
      uVar3 = **(uint **)(lVar11 + 0x10);
      if (uVar3 == 0 && uVar8 == 0) goto LAB_00101918;
      lVar6 = 0;
      while (uVar3 != 0) {
        if (uVar8 == 0) goto LAB_00101918;
        if (uVar3 < uVar8) break;
        if (uVar8 < uVar3) goto LAB_00101918;
        uVar3 = (*(uint **)(lVar11 + 0x10))[lVar6 + 1];
        uVar8 = (uint)(char)pbVar10[lVar6 + 1];
        lVar6 = lVar6 + 1;
        if (uVar3 == 0 && uVar8 == 0) goto LAB_00101918;
      }
    }
    else {
      pbVar10 = *(byte **)(local_48 + 8);
      if (pbVar12 == (byte *)0x0) {
        if (pbVar10 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar10;
          goto LAB_00101a4a;
        }
        uVar8 = **(uint **)(local_48 + 0x10);
        uVar3 = **(uint **)(lVar11 + 0x10);
        if (uVar8 == 0 && uVar3 == 0) goto LAB_00101918;
        lVar6 = 4;
        while (uVar3 != 0) {
          if (uVar8 == 0) goto LAB_00101918;
          if (uVar3 < uVar8) break;
          if (uVar8 < uVar3) goto LAB_00101918;
          uVar3 = *(uint *)((long)*(uint **)(lVar11 + 0x10) + lVar6);
          uVar8 = *(uint *)((long)*(uint **)(local_48 + 0x10) + lVar6);
          lVar6 = lVar6 + 4;
          if (uVar3 == 0 && uVar8 == 0) {
            this = (StringName *)(param_5 + (param_1 + lVar9) * 8);
            goto LAB_00101922;
          }
        }
      }
      else {
        uVar3 = (uint)(char)*pbVar12;
        uVar8 = uVar3;
        if (pbVar10 == (byte *)0x0) goto LAB_00101985;
LAB_001019e3:
        uVar3 = (uint)(char)*pbVar10;
        bVar4 = (byte)uVar8 | *pbVar10;
LAB_001019e9:
        if (bVar4 == 0) goto LAB_00101918;
        lVar11 = 1;
        while (uVar8 != 0) {
          if (uVar3 == 0) goto LAB_00101918;
          if (uVar8 < uVar3) break;
          if (uVar3 < uVar8) goto LAB_00101918;
          pbVar1 = pbVar12 + lVar11;
          uVar8 = (uint)(char)*pbVar1;
          pbVar2 = pbVar10 + lVar11;
          uVar3 = (uint)(char)*pbVar2;
          lVar11 = lVar11 + 1;
          if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00101918;
        }
      }
    }
LAB_001018e0:
    StringName::operator=((StringName *)(param_5 + (lVar9 + param_1) * 8),this);
    lVar11 = (lVar14 + -1) - (lVar14 + -1 >> 0x3f);
    lVar9 = lVar14;
  }
LAB_00101922:
  local_50 = (StringName *)&local_48;
  StringName::operator=(this,local_50);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<StringName, StringName::AlphCompare, true>::unguarded_linear_insert(long, StringName,
   StringName*) const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert
               (long param_1,StringName *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  StringName *pSVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  pSVar3 = (StringName *)(param_3 + -8 + param_1 * 8);
  lVar6 = *(long *)pSVar3;
  lVar5 = *(long *)param_2;
  do {
    if (lVar5 == 0) {
      if (lVar6 == 0) goto LAB_00101deb;
      pbVar10 = *(byte **)(lVar6 + 8);
      uVar8 = 0;
      pbVar11 = &_LC1;
LAB_00101cf1:
      if (pbVar10 == (byte *)0x0) {
        uVar9 = **(uint **)(lVar6 + 0x10);
        if (uVar9 == 0 && uVar8 == 0) goto LAB_00101deb;
        lVar5 = 0;
        while (uVar8 != 0) {
          if (uVar9 == 0) goto LAB_00101deb;
          if (uVar8 < uVar9) break;
          if (uVar9 < uVar8) goto LAB_00101deb;
          uVar8 = (uint)(char)pbVar11[lVar5 + 1];
          uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
          lVar5 = lVar5 + 1;
          if (uVar8 == 0 && uVar9 == 0) goto LAB_00101deb;
        }
      }
      else {
        uVar9 = (uint)(char)*pbVar10;
        bVar4 = (byte)uVar8 | *pbVar10;
LAB_00101d4e:
        if (bVar4 == 0) goto LAB_00101deb;
        lVar6 = 1;
        while (uVar8 != 0) {
          if (uVar9 == 0) goto LAB_00101deb;
          if (uVar8 < uVar9) break;
          if (uVar9 < uVar8) goto LAB_00101deb;
          pbVar1 = pbVar11 + lVar6;
          uVar8 = (uint)(char)*pbVar1;
          pbVar2 = pbVar10 + lVar6;
          uVar9 = (uint)(char)*pbVar2;
          lVar6 = lVar6 + 1;
          if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00101deb;
        }
      }
    }
    else {
      pbVar11 = *(byte **)(lVar5 + 8);
      if (lVar6 == 0) {
        if (pbVar11 != (byte *)0x0) {
          bVar4 = *pbVar11;
          uVar8 = (uint)(char)bVar4;
          pbVar10 = &_LC1;
          uVar9 = 0;
          goto LAB_00101d4e;
        }
        uVar8 = 0;
        pbVar10 = &_LC1;
LAB_00101c67:
        uVar9 = **(uint **)(lVar5 + 0x10);
        if (uVar9 == 0 && uVar8 == 0) goto LAB_00101deb;
        lVar6 = 0;
        while (uVar9 != 0) {
          if (uVar8 == 0) goto LAB_00101deb;
          if (uVar9 < uVar8) break;
          if (uVar8 < uVar9) goto LAB_00101deb;
          uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
          uVar8 = (uint)(char)pbVar10[lVar6 + 1];
          lVar6 = lVar6 + 1;
          if (uVar9 == 0 && uVar8 == 0) goto LAB_00101deb;
        }
      }
      else {
        pbVar10 = *(byte **)(lVar6 + 8);
        if (pbVar11 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar11;
          goto LAB_00101cf1;
        }
        if (pbVar10 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar10;
          goto LAB_00101c67;
        }
        uVar8 = **(uint **)(lVar6 + 0x10);
        uVar9 = **(uint **)(lVar5 + 0x10);
        if (uVar8 == 0 && uVar9 == 0) goto LAB_00101deb;
        lVar7 = 4;
        while (uVar9 != 0) {
          if (uVar8 == 0) goto LAB_00101deb;
          if (uVar9 < uVar8) break;
          if (uVar8 < uVar9) goto LAB_00101deb;
          uVar9 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
          uVar8 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
          lVar7 = lVar7 + 4;
          if (uVar9 == 0 && uVar8 == 0) goto LAB_00101deb;
        }
      }
    }
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      param_1 = 1;
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_00101deb:
      StringName::operator=((StringName *)(param_3 + param_1 * 8),param_2);
      return;
    }
    StringName::operator=(pSVar3 + 8,pSVar3);
    lVar5 = *(long *)param_2;
    lVar6 = *(long *)(pSVar3 + -8);
    pSVar3 = pSVar3 + -8;
  } while( true );
}



/* SortArray<StringName, StringName::AlphCompare, true>::linear_insert(long, long, StringName*)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::linear_insert
               (long param_1,long param_2,StringName *param_3)

{
  StringName *this;
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  StringName *this_00;
  byte *pbVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  this = param_3 + param_1 * 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_50,param_3 + param_2 * 8);
  if (local_50 == 0) {
    lVar4 = *(long *)this;
    if (lVar4 != 0) {
      pbVar8 = *(byte **)(lVar4 + 8);
      uVar6 = 0;
      pbVar9 = &_LC1;
LAB_00101fc8:
      if (pbVar8 == (byte *)0x0) {
        uVar7 = **(uint **)(lVar4 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar5 = 0;
          do {
            if (uVar6 == 0) goto LAB_00101f20;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_00101f20;
            if (uVar7 < uVar6) break;
            uVar6 = (uint)(char)pbVar9[lVar5 + 1];
            uVar7 = (*(uint **)(lVar4 + 0x10))[lVar5 + 1];
            lVar5 = lVar5 + 1;
          } while (uVar6 != 0 || uVar7 != 0);
        }
      }
      else {
        uVar7 = (uint)(char)*pbVar8;
        bVar3 = *pbVar8 | (byte)uVar6;
LAB_00102070:
        if (bVar3 != 0) {
          lVar4 = 1;
          do {
            if (uVar6 == 0) goto LAB_00101f20;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_00101f20;
            if (uVar7 < uVar6) break;
            pbVar1 = pbVar9 + lVar4;
            uVar6 = (uint)(char)*pbVar1;
            pbVar2 = pbVar8 + lVar4;
            uVar7 = (uint)(char)*pbVar2;
            lVar4 = lVar4 + 1;
          } while (*pbVar1 != 0 || *pbVar2 != 0);
        }
      }
    }
  }
  else {
    lVar4 = *(long *)this;
    pbVar9 = *(byte **)(local_50 + 8);
    if (lVar4 == 0) {
      if (pbVar9 != (byte *)0x0) {
        bVar3 = *pbVar9;
        uVar6 = (uint)(char)bVar3;
        pbVar8 = &_LC1;
        uVar7 = 0;
        goto LAB_00102070;
      }
      uVar6 = 0;
      pbVar8 = &_LC1;
    }
    else {
      pbVar8 = *(byte **)(lVar4 + 8);
      if (pbVar9 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar9;
        goto LAB_00101fc8;
      }
      if (pbVar8 == (byte *)0x0) {
        uVar6 = **(uint **)(lVar4 + 0x10);
        uVar7 = **(uint **)(local_50 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar5 = 4;
          do {
            if (uVar7 == 0) goto LAB_00101f20;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00101f20;
            if (uVar6 < uVar7) break;
            uVar7 = *(uint *)((long)*(uint **)(local_50 + 0x10) + lVar5);
            uVar6 = *(uint *)((long)*(uint **)(lVar4 + 0x10) + lVar5);
            lVar5 = lVar5 + 4;
          } while (uVar7 != 0 || uVar6 != 0);
        }
        goto LAB_00102018;
      }
      uVar6 = (uint)(char)*pbVar8;
    }
    uVar7 = **(uint **)(local_50 + 0x10);
    if (uVar6 != 0 || uVar7 != 0) {
      lVar4 = 0;
      do {
        if (uVar7 == 0) goto LAB_00101f20;
        if (uVar6 == 0) break;
        if (uVar7 < uVar6) goto LAB_00101f20;
        if (uVar6 < uVar7) break;
        uVar7 = (*(uint **)(local_50 + 0x10))[lVar4 + 1];
        uVar6 = (uint)(char)pbVar8[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (uVar7 != 0 || uVar6 != 0);
    }
  }
LAB_00102018:
  StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
  unguarded_linear_insert(param_2,(StringName *)&local_48,param_3);
  if (StringName::configured == '\0') goto LAB_00101f66;
  if (local_48 != 0) {
    StringName::unref();
    goto LAB_00101f52;
  }
  goto LAB_00101f56;
LAB_00101f20:
  this_00 = param_3 + param_2 * 8;
  if (param_1 < param_2) {
    do {
      param_2 = param_2 + -1;
      StringName::operator=(this_00,this_00 + -8);
      this_00 = this_00 + -8;
    } while (param_1 != param_2);
  }
  StringName::operator=(this,(StringName *)&local_50);
LAB_00101f52:
  if (StringName::configured == '\0') goto LAB_00101f66;
LAB_00101f56:
  if (local_50 != 0) {
    StringName::unref();
  }
LAB_00101f66:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<StringName, StringName::AlphCompare, true>::median_of_3(StringName const&, StringName
   const&, StringName const&) const [clone .isra.0] */

StringName *
SortArray<StringName,StringName::AlphCompare,true>::median_of_3
          (StringName *param_1,StringName *param_2,StringName *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  lVar8 = *(long *)param_1;
  lVar9 = *(long *)param_3;
  lVar13 = *(long *)param_2;
  if (lVar8 == 0) {
    pbVar15 = &_LC1;
    pbVar16 = &_LC1;
    if (lVar13 == 0) {
LAB_00102a50:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
LAB_0010231e:
        uVar5 = (uint)(char)*pbVar16;
        uVar4 = uVar5;
        goto LAB_00102324;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC1;
      if (*pbVar16 == 0) goto LAB_00102619;
LAB_00102472:
      lVar8 = 1;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar6 == 0) break;
        if (uVar5 < uVar6) {
          return param_1;
        }
        if (uVar6 < uVar5) break;
        pbVar2 = pbVar16 + lVar8;
        uVar5 = (uint)(char)*pbVar2;
        pbVar1 = pbVar17 + lVar8;
        uVar6 = (uint)(char)*pbVar1;
        lVar8 = lVar8 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      uVar4 = 0;
      pbVar16 = &_LC1;
LAB_001022a2:
      if (pbVar15 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar15;
        bVar11 = *pbVar15 | (byte)uVar4;
LAB_00102390:
        if (bVar11 != 0) {
          lVar14 = 1;
          do {
            if (uVar4 == 0) goto joined_r0x001023d8;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x001023d8;
            if (uVar12 < uVar4) break;
            pbVar17 = pbVar16 + lVar14;
            uVar4 = (uint)(char)*pbVar17;
            pbVar2 = pbVar15 + lVar14;
            uVar12 = (uint)(char)*pbVar2;
            lVar14 = lVar14 + 1;
          } while (*pbVar17 != 0 || *pbVar2 != 0);
          goto LAB_00102308;
        }
        goto LAB_00102a50;
      }
      uVar12 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar4 == 0) goto joined_r0x001023d8;
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto joined_r0x001023d8;
          if (uVar12 < uVar4) break;
          uVar4 = (uint)(char)pbVar16[lVar14 + 1];
          uVar12 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00102308;
      }
      if (lVar9 == 0) goto LAB_00102671;
      pbVar17 = *(byte **)(lVar9 + 8);
      uVar5 = 0;
LAB_00102324:
      if (pbVar17 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar17;
        bVar11 = (byte)uVar4 | *pbVar17;
        goto LAB_00102469;
      }
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_00102956;
      lVar8 = 0;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar4 == 0) break;
        if (uVar5 < uVar4) {
          return param_1;
        }
        if (uVar4 < uVar5) break;
        uVar5 = (uint)(char)pbVar16[lVar8 + 1];
        uVar4 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar4 != 0);
    }
LAB_00102600:
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar10 = *(uint **)(lVar9 + 0x10);
LAB_0010295f:
        uVar4 = *puVar10;
        uVar12 = **(uint **)(lVar13 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_2;
        }
        lVar8 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_2;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar8);
          uVar4 = *(uint *)((long)puVar10 + lVar8);
          lVar8 = lVar8 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
          }
        }
        return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
LAB_001027e6:
      uVar4 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_3;
          }
          if (uVar12 == 0) {
            return param_2;
          }
          if (uVar4 < uVar12) {
            return param_3;
          }
          if (uVar12 < uVar4) {
            return param_2;
          }
          uVar4 = (*(uint **)(lVar13 + 0x10))[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
      }
      return param_2;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar6 = *puVar10;
LAB_00102848:
      uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
        return param_2;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 < uVar6) {
          return param_3;
        }
        if (uVar6 < uVar4) break;
        uVar4 = (uint)(char)pbVar15[lVar8 + 1];
        uVar6 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar6 == 0) {
          return param_2;
        }
      }
      return param_2;
    }
    uVar12 = (uint)(char)*pbVar17;
    uVar5 = uVar12;
  }
  else {
    pbVar16 = *(byte **)(lVar8 + 8);
    if (lVar13 == 0) {
      if (pbVar16 != (byte *)0x0) {
        bVar11 = *pbVar16;
        uVar4 = (uint)(char)bVar11;
        uVar12 = 0;
        pbVar15 = &_LC1;
        goto LAB_00102390;
      }
      uVar4 = 0;
      pbVar15 = &_LC1;
LAB_00102189:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar12 == 0) goto joined_r0x001023d8;
          if (uVar4 == 0) break;
          if (uVar12 < uVar4) goto joined_r0x001023d8;
          if (uVar4 < uVar12) break;
          uVar12 = (*(uint **)(lVar8 + 0x10))[lVar14 + 1];
          uVar4 = (uint)(char)pbVar15[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar12 != 0 || uVar4 != 0);
      }
LAB_00102308:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        if (pbVar16 != (byte *)0x0) goto LAB_0010231e;
        puVar7 = *(uint **)(lVar8 + 0x10);
        uVar4 = *puVar7;
LAB_00102708:
        if (pbVar17 != (byte *)0x0) {
          uVar12 = (uint)(char)*pbVar17;
          uVar6 = uVar4 | uVar12;
          goto LAB_001029c3;
        }
        puVar10 = *(uint **)(lVar9 + 0x10);
        uVar12 = *puVar10;
        uVar6 = uVar12 | uVar4;
        if (uVar6 != 0) {
          lVar8 = 4;
          do {
            if (uVar4 == 0) {
              return param_1;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
              return param_1;
            }
            if (uVar12 < uVar4) break;
            uVar4 = *(uint *)((long)puVar7 + lVar8);
            uVar12 = *(uint *)((long)puVar10 + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar4 != 0 || uVar12 != 0);
          goto LAB_00102600;
        }
LAB_00102956:
        if (pbVar15 != (byte *)0x0) goto LAB_00102848;
        goto LAB_0010295f;
      }
      if (pbVar16 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar8 + 0x10);
        goto LAB_00102a21;
      }
LAB_00102671:
      bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC1;
LAB_00102469:
      uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_00102472;
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      if (pbVar16 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar16;
        goto LAB_001022a2;
      }
      if (pbVar15 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar15;
        goto LAB_00102189;
      }
      puVar7 = *(uint **)(lVar8 + 0x10);
      uVar12 = **(uint **)(lVar13 + 0x10);
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
        lVar14 = 4;
        do {
          if (uVar4 == 0) {
LAB_00102578:
            pbVar16 = (byte *)0x0;
            goto joined_r0x001023d8;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto LAB_00102578;
          if (uVar12 < uVar4) break;
          uVar4 = *(uint *)((long)puVar7 + lVar14);
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
          lVar14 = lVar14 + 4;
        } while (uVar4 != 0 || uVar12 != 0);
        pbVar16 = (byte *)0x0;
        goto LAB_00102308;
      }
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        uVar4 = 0;
        goto LAB_00102708;
      }
LAB_00102a21:
      uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC1;
      uVar6 = uVar4;
LAB_001029c3:
      if (uVar6 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) {
            return param_1;
          }
          if (uVar12 < uVar4) break;
          uVar4 = puVar7[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00102600;
      }
    }
    uVar5 = uVar12;
    if (pbVar15 == (byte *)0x0) goto LAB_001027e6;
  }
LAB_00102619:
  bVar11 = *pbVar15;
  if (bVar11 == 0 && (char)uVar5 == '\0') {
    return param_2;
  }
  lVar8 = 1;
  while( true ) {
    uVar4 = (uint)(char)bVar11;
    if (uVar4 == 0) {
      return param_3;
    }
    if (uVar12 == 0) {
      return param_2;
    }
    if (uVar4 < uVar12) {
      return param_3;
    }
    if (uVar12 < uVar4) break;
    bVar11 = pbVar15[lVar8];
    pbVar16 = pbVar17 + lVar8;
    uVar12 = (uint)(char)*pbVar16;
    lVar8 = lVar8 + 1;
    if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
    }
  }
  return param_2;
joined_r0x001023d8:
  if (lVar9 == 0) {
    uVar4 = 0;
    uVar12 = 0;
    bVar11 = 0;
    pbVar17 = &_LC1;
    if (pbVar15 != (byte *)0x0) goto LAB_001024c7;
LAB_001023f4:
    uVar6 = **(uint **)(lVar13 + 0x10);
    uVar4 = uVar6 | uVar12;
    if (uVar4 != 0) {
      lVar14 = 0;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar12 == 0) break;
        if (uVar6 < uVar12) {
          return param_2;
        }
        if (uVar12 < uVar6) break;
        uVar6 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
        uVar12 = (uint)(char)pbVar17[lVar14 + 1];
        lVar14 = lVar14 + 1;
      } while (uVar6 != 0 || uVar12 != 0);
      goto LAB_00102590;
    }
LAB_00102a5e:
    bVar11 = (byte)uVar12;
    if (pbVar16 == (byte *)0x0) goto LAB_0010277e;
  }
  else {
    pbVar17 = *(byte **)(lVar9 + 8);
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar17;
        goto LAB_001023f4;
      }
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar7;
      uVar6 = **(uint **)(lVar13 + 0x10);
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_001028f9;
      lVar14 = 4;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar6 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar6) break;
        uVar6 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
        uVar4 = *(uint *)((long)puVar7 + lVar14);
        lVar14 = lVar14 + 4;
      } while (uVar6 != 0 || uVar4 != 0);
    }
    else {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
        uVar6 = (uint)(char)*pbVar15;
        uVar4 = *puVar7;
        uVar12 = uVar4 | uVar6;
        if (uVar12 != 0) {
          lVar13 = 0;
          do {
            if (uVar6 == 0) {
              return param_2;
            }
            if (uVar4 == 0) break;
            if (uVar6 < uVar4) {
              return param_2;
            }
            if (uVar4 < uVar6) break;
            uVar6 = (uint)(char)pbVar15[lVar13 + 1];
            uVar4 = puVar7[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar6 != 0 || uVar4 != 0);
          goto LAB_00102590;
        }
LAB_001028f9:
        if (pbVar16 == (byte *)0x0) goto LAB_001028fe;
        goto LAB_001028a6;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
LAB_001024c7:
      bVar3 = *pbVar15;
      uVar12 = (uint)(bVar11 | bVar3);
      if ((bVar11 | bVar3) == 0) goto LAB_00102a5e;
      lVar13 = 1;
      do {
        uVar12 = (uint)(char)bVar3;
        if (uVar12 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar12 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar12) break;
        bVar3 = pbVar15[lVar13];
        pbVar2 = pbVar17 + lVar13;
        uVar4 = (uint)(char)*pbVar2;
        lVar13 = lVar13 + 1;
      } while (bVar3 != 0 || *pbVar2 != 0);
    }
LAB_00102590:
    if (pbVar16 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
LAB_001028fe:
        uVar4 = *puVar7;
        uVar12 = **(uint **)(lVar8 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
        lVar9 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
          uVar4 = *(uint *)((long)puVar7 + lVar9);
          lVar9 = lVar9 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
          }
        }
        return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
LAB_0010277e:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar9 = 0;
      while( true ) {
        if (uVar12 == 0) {
          return param_3;
        }
        if (uVar4 == 0) {
          return param_1;
        }
        if (uVar12 < uVar4) {
          return param_3;
        }
        if (uVar4 < uVar12) break;
        uVar12 = (*(uint **)(lVar8 + 0x10))[lVar9 + 1];
        uVar4 = (uint)(char)pbVar17[lVar9 + 1];
        lVar9 = lVar9 + 1;
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar12 = *puVar7;
LAB_001028a6:
      uVar4 = (uint)(char)*pbVar16;
      if (uVar4 == 0 && uVar12 == 0) {
        return param_1;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar12 == 0) {
          return param_1;
        }
        if (uVar4 < uVar12) {
          return param_3;
        }
        if (uVar12 < uVar4) break;
        uVar4 = (uint)(char)pbVar16[lVar8 + 1];
        uVar12 = puVar7[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar12 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    bVar11 = *pbVar17;
    uVar4 = (uint)(char)bVar11;
  }
  bVar3 = *pbVar16;
  if (bVar3 == 0 && bVar11 == 0) {
    return param_1;
  }
  lVar8 = 1;
  while( true ) {
    uVar12 = (uint)(char)bVar3;
    if (uVar12 == 0) {
      return param_3;
    }
    if (uVar4 == 0) {
      return param_1;
    }
    if (uVar12 < uVar4) {
      return param_3;
    }
    if (uVar4 < uVar12) break;
    bVar3 = pbVar16[lVar8];
    pbVar15 = pbVar17 + lVar8;
    uVar4 = (uint)(char)*pbVar15;
    lVar8 = lVar8 + 1;
    if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
    }
  }
  return param_1;
}



/* SortArray<StringName, StringName::AlphCompare, true>::partitioner(long, long, StringName,
   StringName*) const [clone .isra.0] */

long SortArray<StringName,StringName::AlphCompare,true>::partitioner
               (long param_1,long param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  byte *pbVar13;
  long *plVar14;
  
  lVar10 = *param_3;
  lVar3 = *(long *)(param_4 + param_1 * 8);
  lVar9 = param_1;
  lVar8 = param_2;
joined_r0x00102aff:
  if (lVar3 == 0) {
    if (lVar10 == 0) goto LAB_00102c20;
    pbVar5 = *(byte **)(lVar10 + 8);
    uVar6 = 0;
    pbVar13 = &_LC1;
LAB_00102bb6:
    if (pbVar5 == (byte *)0x0) {
      uVar7 = **(uint **)(lVar10 + 0x10);
      if (uVar7 != 0 || uVar6 != 0) {
        lVar3 = 0;
        do {
          if (uVar6 == 0) goto LAB_00102b80;
          if (uVar7 == 0) break;
          if (uVar6 < uVar7) goto LAB_00102b80;
          if (uVar7 < uVar6) break;
          uVar6 = (uint)(char)pbVar13[lVar3 + 1];
          uVar7 = (*(uint **)(lVar10 + 0x10))[lVar3 + 1];
          lVar3 = lVar3 + 1;
        } while (uVar6 != 0 || uVar7 != 0);
      }
      goto LAB_00102c20;
    }
    uVar7 = (uint)(char)*pbVar5;
    bVar12 = (byte)uVar6 | *pbVar5;
LAB_00102ef6:
    if (bVar12 != 0) {
      lVar3 = 1;
      do {
        if (uVar6 == 0) goto LAB_00102b80;
        if (uVar7 == 0) break;
        if (uVar6 < uVar7) goto LAB_00102b80;
        if (uVar7 < uVar6) break;
        pbVar1 = pbVar13 + lVar3;
        uVar6 = (uint)(char)*pbVar1;
        pbVar2 = pbVar5 + lVar3;
        uVar7 = (uint)(char)*pbVar2;
        lVar3 = lVar3 + 1;
      } while (*pbVar1 != 0 || *pbVar2 != 0);
    }
  }
  else {
    pbVar13 = *(byte **)(lVar3 + 8);
    if (lVar10 == 0) {
      if (pbVar13 != (byte *)0x0) {
        bVar12 = *pbVar13;
        uVar6 = (uint)(char)bVar12;
        uVar7 = 0;
        pbVar5 = &_LC1;
        goto LAB_00102ef6;
      }
      uVar6 = 0;
      pbVar5 = &_LC1;
    }
    else {
      pbVar5 = *(byte **)(lVar10 + 8);
      if (pbVar13 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar13;
        goto LAB_00102bb6;
      }
      if (pbVar5 == (byte *)0x0) {
        uVar6 = **(uint **)(lVar10 + 0x10);
        uVar7 = **(uint **)(lVar3 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar4 = 4;
          do {
            if (uVar7 == 0) goto LAB_00102b80;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00102b80;
            if (uVar6 < uVar7) break;
            uVar7 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar4);
            uVar6 = *(uint *)((long)*(uint **)(lVar10 + 0x10) + lVar4);
            lVar4 = lVar4 + 4;
          } while (uVar7 != 0 || uVar6 != 0);
        }
        goto LAB_00102c20;
      }
      uVar6 = (uint)(char)*pbVar5;
    }
    uVar7 = **(uint **)(lVar3 + 0x10);
    if (uVar7 != 0 || uVar6 != 0) {
      lVar4 = 0;
      do {
        if (uVar7 == 0) goto LAB_00102b80;
        if (uVar6 == 0) break;
        if (uVar7 < uVar6) goto LAB_00102b80;
        if (uVar6 < uVar7) break;
        uVar7 = (*(uint **)(lVar3 + 0x10))[lVar4 + 1];
        uVar6 = (uint)(char)pbVar5[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (uVar7 != 0 || uVar6 != 0);
    }
  }
  goto LAB_00102c20;
LAB_00102b80:
  if (param_2 + -1 == lVar9) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    lVar10 = *param_3;
LAB_00102c20:
    plVar11 = (long *)(param_4 + -8 + lVar8 * 8);
LAB_00102c30:
    lVar8 = lVar8 + -1;
    lVar3 = *plVar11;
    if (lVar10 != 0) {
      pbVar13 = *(byte **)(lVar10 + 8);
      do {
        if (lVar3 == 0) {
          if (pbVar13 != (byte *)0x0) {
            bVar12 = *pbVar13;
            uVar7 = (uint)(char)bVar12;
            pbVar5 = &_LC1;
            uVar6 = 0;
            goto LAB_00102dde;
          }
          uVar6 = 0;
          pbVar5 = &_LC1;
LAB_00102cfa:
          uVar7 = **(uint **)(lVar10 + 0x10);
          if (uVar7 == 0 && uVar6 == 0) goto LAB_00102e58;
          lVar3 = 0;
          while (uVar7 != 0) {
            if (uVar6 == 0) goto LAB_00102e58;
            if (uVar7 < uVar6) break;
            if (uVar6 < uVar7) goto LAB_00102e58;
            uVar7 = (*(uint **)(lVar10 + 0x10))[lVar3 + 1];
            uVar6 = (uint)(char)pbVar5[lVar3 + 1];
            lVar3 = lVar3 + 1;
            if (uVar7 == 0 && uVar6 == 0) goto LAB_00102e58;
          }
        }
        else {
          pbVar5 = *(byte **)(lVar3 + 8);
          if (pbVar13 != (byte *)0x0) goto LAB_00102e20;
          if (pbVar5 != (byte *)0x0) {
            uVar6 = (uint)(char)*pbVar5;
            goto LAB_00102cfa;
          }
          uVar6 = **(uint **)(lVar3 + 0x10);
          uVar7 = **(uint **)(lVar10 + 0x10);
          if (uVar6 == 0 && uVar7 == 0) goto LAB_00102e58;
          lVar4 = 4;
          while (uVar7 != 0) {
            if (uVar6 == 0) goto LAB_00102e58;
            if (uVar7 < uVar6) break;
            if (uVar6 < uVar7) goto LAB_00102e58;
            uVar7 = *(uint *)((long)*(uint **)(lVar10 + 0x10) + lVar4);
            uVar6 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar4);
            lVar4 = lVar4 + 4;
            if (uVar7 == 0 && uVar6 == 0) goto LAB_00102e58;
          }
        }
        plVar14 = plVar11;
        if (param_1 == lVar8) goto LAB_00102e30;
        lVar3 = plVar11[-1];
        lVar8 = lVar8 + -1;
        plVar11 = plVar11 + -1;
      } while( true );
    }
    if (lVar3 != 0) {
      pbVar5 = *(byte **)(lVar3 + 8);
      uVar7 = 0;
      bVar12 = 0;
      pbVar13 = &_LC1;
      goto LAB_00102d69;
    }
    goto LAB_00102e58;
  }
LAB_00102b8e:
  lVar9 = lVar9 + 1;
  lVar3 = *(long *)(param_4 + lVar9 * 8);
  goto joined_r0x00102aff;
LAB_00102e20:
  bVar12 = *pbVar13;
  uVar7 = (uint)(char)bVar12;
LAB_00102d69:
  if (pbVar5 == (byte *)0x0) {
    uVar6 = **(uint **)(lVar3 + 0x10);
    if (uVar6 == 0 && uVar7 == 0) goto LAB_00102e58;
    lVar4 = 0;
    while (plVar14 = plVar11, uVar7 != 0) {
      if (uVar6 == 0) goto LAB_00102e58;
      if (uVar7 < uVar6) break;
      if (uVar6 < uVar7) goto LAB_00102e58;
      uVar7 = (uint)(char)pbVar13[lVar4 + 1];
      uVar6 = (*(uint **)(lVar3 + 0x10))[lVar4 + 1];
      lVar4 = lVar4 + 1;
      if (uVar7 == 0 && uVar6 == 0) goto LAB_00102e58;
    }
  }
  else {
    uVar6 = (uint)(char)*pbVar5;
    bVar12 = bVar12 | *pbVar5;
LAB_00102dde:
    if (bVar12 == 0) goto LAB_00102e58;
    lVar3 = 1;
    while (plVar14 = plVar11, uVar7 != 0) {
      if (uVar6 == 0) goto LAB_00102e58;
      if (uVar7 < uVar6) break;
      if (uVar6 < uVar7) goto LAB_00102e58;
      pbVar1 = pbVar13 + lVar3;
      uVar7 = (uint)(char)*pbVar1;
      pbVar2 = pbVar5 + lVar3;
      uVar6 = (uint)(char)*pbVar2;
      lVar3 = lVar3 + 1;
      if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00102e58;
    }
  }
  plVar11 = plVar14 + -1;
  if (param_1 == lVar8) goto LAB_00102e30;
  goto LAB_00102c30;
LAB_00102e30:
  plVar11 = plVar14;
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00102e58:
  if (lVar8 <= lVar9) {
    return lVar9;
  }
  lVar3 = *(long *)(param_4 + lVar9 * 8);
  *(undefined8 *)(param_4 + lVar9 * 8) = 0;
  if (*plVar11 != 0) {
    StringName::unref();
    *(long *)(param_4 + lVar9 * 8) = *plVar11;
    *plVar11 = 0;
  }
  if (lVar3 != 0) {
    StringName::unref();
    *plVar11 = lVar3;
  }
  lVar10 = *param_3;
  goto LAB_00102b8e;
}



/* SortArray<StringName, StringName::AlphCompare, true>::partial_sort(long, long, long, StringName*)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::partial_sort
               (long param_1,long param_2,long param_3,StringName *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  StringName *pSVar13;
  long lVar14;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  lVar10 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar10 < 2) {
    if (param_2 <= param_3) goto LAB_001032db;
LAB_001030c6:
    lVar14 = param_3;
LAB_00103100:
    lVar6 = *(long *)(param_4 + lVar14 * 8);
    lVar5 = *(long *)(param_4 + param_1 * 8);
    if (lVar6 == 0) {
      if (lVar5 != 0) {
        pbVar11 = *(byte **)(lVar5 + 8);
        uVar8 = 0;
        pbVar12 = &_LC1;
LAB_00103314:
        if (pbVar11 == (byte *)0x0) {
          uVar9 = **(uint **)(lVar5 + 0x10);
          if (uVar9 != 0 || uVar8 != 0) {
            lVar6 = 0;
            do {
              if (uVar8 == 0) goto LAB_00103180;
              if (uVar9 == 0) break;
              if (uVar8 < uVar9) goto LAB_00103180;
              if (uVar9 < uVar8) break;
              uVar8 = (uint)(char)pbVar12[lVar6 + 1];
              uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
              lVar6 = lVar6 + 1;
            } while (uVar8 != 0 || uVar9 != 0);
          }
        }
        else {
          uVar9 = (uint)(char)*pbVar11;
          bVar4 = (byte)uVar8 | *pbVar11;
LAB_00103376:
          if (bVar4 != 0) {
            lVar6 = 1;
            do {
              if (uVar8 == 0) goto LAB_00103180;
              if (uVar9 == 0) break;
              if (uVar8 < uVar9) goto LAB_00103180;
              if (uVar9 < uVar8) break;
              pbVar1 = pbVar12 + lVar6;
              uVar8 = (uint)(char)*pbVar1;
              pbVar2 = pbVar11 + lVar6;
              uVar9 = (uint)(char)*pbVar2;
              lVar6 = lVar6 + 1;
            } while (*pbVar1 != 0 || *pbVar2 != 0);
          }
        }
      }
    }
    else {
      pbVar12 = *(byte **)(lVar6 + 8);
      if (lVar5 == 0) {
        if (pbVar12 != (byte *)0x0) {
          bVar4 = *pbVar12;
          uVar8 = (uint)(char)bVar4;
          uVar9 = 0;
          pbVar11 = &_LC1;
          goto LAB_00103376;
        }
        uVar8 = 0;
        pbVar11 = &_LC1;
      }
      else {
        pbVar11 = *(byte **)(lVar5 + 8);
        if (pbVar12 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar12;
          goto LAB_00103314;
        }
        if (pbVar11 == (byte *)0x0) {
          uVar8 = **(uint **)(lVar5 + 0x10);
          uVar9 = **(uint **)(lVar6 + 0x10);
          if (uVar8 != 0 || uVar9 != 0) {
            lVar7 = 4;
            do {
              if (uVar9 == 0) goto LAB_00103180;
              if (uVar8 == 0) break;
              if (uVar9 < uVar8) goto LAB_00103180;
              if (uVar8 < uVar9) break;
              uVar9 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
              uVar8 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
              lVar7 = lVar7 + 4;
            } while (uVar9 != 0 || uVar8 != 0);
          }
          goto LAB_00103208;
        }
        uVar8 = (uint)(char)*pbVar11;
      }
      uVar9 = **(uint **)(lVar6 + 0x10);
      if (uVar9 != 0 || uVar8 != 0) {
        lVar5 = 0;
        do {
          if (uVar9 == 0) goto LAB_00103180;
          if (uVar8 == 0) break;
          if (uVar9 < uVar8) goto LAB_00103180;
          if (uVar8 < uVar9) break;
          uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
          uVar8 = (uint)(char)pbVar11[lVar5 + 1];
          lVar5 = lVar5 + 1;
        } while (uVar9 != 0 || uVar8 != 0);
      }
    }
    goto LAB_00103208;
  }
  lVar14 = lVar10 + -2 >> 1;
  pSVar13 = param_4 + (param_1 + lVar14) * 8;
  while( true ) {
    StringName::StringName((StringName *)&local_48,pSVar13);
    adjust_heap(param_1,lVar14,lVar10,(StringName *)&local_48,param_4);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    pSVar13 = pSVar13 + -8;
    if (lVar14 == 0) break;
    lVar14 = lVar14 + -1;
  }
  if (param_3 < param_2) goto LAB_001030c6;
  goto LAB_0010323b;
LAB_00103180:
  StringName::StringName((StringName *)&local_50,param_4 + lVar14 * 8);
  StringName::operator=(param_4 + lVar14 * 8,param_4 + param_1 * 8);
  StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
  adjust_heap(param_1,0,lVar10,(StringName *)&local_48,param_4);
  if ((StringName::configured != '\0') &&
     (((local_48 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_50 != 0)))
     ) {
    StringName::unref();
  }
LAB_00103208:
  lVar14 = lVar14 + 1;
  if (param_2 <= lVar14) goto code_r0x00103215;
  goto LAB_00103100;
code_r0x00103215:
  if (lVar10 < 2) goto LAB_001032db;
LAB_0010323b:
  pSVar13 = param_4 + param_3 * 8 + -8;
  lVar10 = (param_3 + -1) - param_1;
  do {
    StringName::StringName((StringName *)&local_50,pSVar13);
    StringName::operator=(pSVar13,param_4 + param_1 * 8);
    StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
    adjust_heap(param_1,0,lVar10,(StringName *)&local_48,param_4);
    if (((StringName::configured != '\0') &&
        ((local_48 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_50 != 0)) {
      StringName::unref();
    }
    pSVar13 = pSVar13 + -8;
    bVar3 = 1 < lVar10;
    lVar10 = lVar10 + -1;
  } while (bVar3);
LAB_001032db:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* ResourceImporterShaderFile::_get_class_namev() const */

undefined8 * ResourceImporterShaderFile::_get_class_namev(void)

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
LAB_00103653:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103653;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterShaderFile")
      ;
      goto LAB_001036be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterShaderFile");
LAB_001036be:
  return &_get_class_namev()::_class_name_static;
}



/* RDShaderFile::_get_class_namev() const */

undefined8 * RDShaderFile::_get_class_namev(void)

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
LAB_00103733:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103733;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RDShaderFile");
      goto LAB_0010379e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RDShaderFile");
LAB_0010379e:
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
LAB_00103813:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103813;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010387e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010387e:
  return &_get_class_namev()::_class_name_static;
}



/* RDShaderFile::get_spirv(StringName const&) const */

StringName * RDShaderFile::get_spirv(StringName *param_1)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  char cVar20;
  uint uVar21;
  int iVar22;
  long *in_RDX;
  long lVar23;
  long in_RSI;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  
  if ((*(long *)(in_RSI + 0x248) != 0) && (*(int *)(in_RSI + 0x26c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x268) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x268) * 8);
    if (*in_RDX == 0) {
      uVar21 = StringName::get_empty_hash();
    }
    else {
      uVar21 = *(uint *)(*in_RDX + 0x20);
    }
    uVar25 = CONCAT44(0,uVar1);
    lVar28 = *(long *)(in_RSI + 0x250);
    if (uVar21 == 0) {
      uVar21 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar21 * lVar2;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar25;
    lVar23 = SUB168(auVar3 * auVar11,8);
    uVar24 = *(uint *)(lVar28 + lVar23 * 4);
    iVar22 = SUB164(auVar3 * auVar11,8);
    if (uVar24 != 0) {
      uVar26 = 0;
      do {
        if ((uVar24 == uVar21) &&
           (lVar23 = *(long *)(*(long *)(*(long *)(in_RSI + 0x248) + lVar23 * 8) + 0x10),
           lVar23 == *in_RDX)) {
          if ((*(long *)(in_RSI + 0x248) != 0) && (*(int *)(in_RSI + 0x26c) != 0)) {
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x268) * 4);
            uVar25 = CONCAT44(0,uVar1);
            lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x268) * 8);
            if (lVar23 == 0) {
              uVar21 = StringName::get_empty_hash();
              lVar28 = *(long *)(in_RSI + 0x250);
            }
            else {
              uVar21 = *(uint *)(lVar23 + 0x20);
            }
            if (uVar21 == 0) {
              uVar21 = 1;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar21 * lVar2;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar25;
            lVar23 = SUB168(auVar7 * auVar15,8);
            uVar24 = *(uint *)(lVar28 + lVar23 * 4);
            uVar26 = SUB164(auVar7 * auVar15,8);
            if (uVar24 != 0) {
              uVar27 = 0;
              do {
                if ((uVar24 == uVar21) &&
                   (*(long *)(*(long *)(*(long *)(in_RSI + 0x248) + lVar23 * 8) + 0x10) == *in_RDX))
                {
                  lVar2 = *(long *)(*(long *)(in_RSI + 0x248) + (ulong)uVar26 * 8);
                  *(undefined8 *)param_1 = 0;
                  lVar2 = *(long *)(lVar2 + 0x18);
                  if (lVar2 == 0) {
                    return param_1;
                  }
                  *(long *)param_1 = lVar2;
                  cVar20 = RefCounted::reference();
                  if (cVar20 != '\0') {
                    return param_1;
                  }
                  *(undefined8 *)param_1 = 0;
                  return param_1;
                }
                uVar27 = uVar27 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)(uVar26 + 1) * lVar2;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar25;
                lVar23 = SUB168(auVar8 * auVar16,8);
                uVar24 = *(uint *)(lVar28 + lVar23 * 4);
                uVar26 = SUB164(auVar8 * auVar16,8);
              } while ((uVar24 != 0) &&
                      (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar24 * lVar2, auVar17._8_8_ = 0,
                      auVar17._0_8_ = uVar25, auVar10._8_8_ = 0,
                      auVar10._0_8_ = (ulong)((uVar1 + uVar26) - SUB164(auVar9 * auVar17,8)) * lVar2
                      , auVar18._8_8_ = 0, auVar18._0_8_ = uVar25,
                      uVar27 <= SUB164(auVar10 * auVar18,8)));
            }
          }
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        uVar26 = uVar26 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar22 + 1) * lVar2;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar25;
        lVar23 = SUB168(auVar4 * auVar12,8);
        uVar24 = *(uint *)(lVar28 + lVar23 * 4);
        iVar22 = SUB164(auVar4 * auVar12,8);
      } while ((uVar24 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar24 * lVar2, auVar13._8_8_ = 0,
              auVar13._0_8_ = uVar25, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar22) - SUB164(auVar5 * auVar13,8)) * lVar2,
              auVar14._8_8_ = 0, auVar14._0_8_ = uVar25, uVar26 <= SUB164(auVar6 * auVar14,8)));
    }
  }
  _err_print_error("get_spirv","./servers/rendering/rendering_device_binds.h",0x168,
                   "Condition \"!versions.has(p_version)\" is true. Returning: Ref<RDShaderSPIRV>()"
                   ,0,0);
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* SortArray<StringName, StringName::AlphCompare, true>::introsort(long, long, StringName*, long)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::introsort
               (long param_1,long param_2,StringName *param_3,long param_4)

{
  long lVar1;
  StringName *pSVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  long local_138;
  long local_120;
  long local_100;
  long local_f8;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
LAB_0010467a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_4 != 0) {
      lVar12 = param_2 * 8;
      lVar3 = param_2;
LAB_00103cc2:
      param_4 = param_4 + -1;
      pSVar2 = (StringName *)
               median_of_3(param_3 + param_1 * 8,param_3 + ((lVar1 >> 1) + param_1) * 8,
                           param_3 + lVar12 + -8);
      StringName::StringName((StringName *)&local_48,pSVar2);
      param_2 = partitioner(param_1,lVar3,(StringName *)&local_48,param_3);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      lVar1 = lVar3 - param_2;
      if (0x10 < lVar1) {
        if (param_4 != 0) {
          lVar12 = param_4;
          lVar4 = lVar3;
LAB_00103d81:
          do {
            lVar12 = lVar12 + -1;
            pSVar2 = (StringName *)
                     median_of_3(param_3 + param_2 * 8,param_3 + ((lVar1 >> 1) + param_2) * 8,
                                 param_3 + lVar4 * 8 + -8);
            StringName::StringName((StringName *)&local_48,pSVar2);
            lVar3 = partitioner(param_2,lVar4,(StringName *)&local_48,param_3);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) {
              if (lVar12 != 0) {
                lVar13 = lVar12;
                local_138 = lVar4;
LAB_00103e42:
                do {
                  lVar13 = lVar13 + -1;
                  pSVar2 = (StringName *)
                           median_of_3(param_3 + lVar3 * 8,param_3 + ((lVar1 >> 1) + lVar3) * 8,
                                       param_3 + local_138 * 8 + -8);
                  StringName::StringName((StringName *)&local_48,pSVar2);
                  lVar4 = partitioner(lVar3,local_138,(StringName *)&local_48,param_3);
                  if ((StringName::configured != '\0') && (local_48 != 0)) {
                    StringName::unref();
                  }
                  lVar1 = local_138 - lVar4;
                  if (0x10 < lVar1) {
                    if (lVar13 != 0) {
                      lVar11 = lVar13;
LAB_00103efc:
                      do {
                        lVar11 = lVar11 + -1;
                        lVar9 = local_138 * 8;
                        pSVar2 = (StringName *)
                                 median_of_3(param_3 + lVar4 * 8,
                                             param_3 + ((lVar1 >> 1) + lVar4) * 8,
                                             param_3 + lVar9 + -8);
                        StringName::StringName((StringName *)&local_48,pSVar2);
                        lVar5 = partitioner(lVar4,local_138,(StringName *)&local_48,param_3);
                        if ((StringName::configured != '\0') && (local_48 != 0)) {
                          StringName::unref();
                        }
                        lVar1 = local_138 - lVar5;
                        if (0x10 < lVar1) {
                          lVar6 = local_138;
                          if (lVar11 != 0) {
                            lVar7 = local_138;
                            local_100 = lVar11;
                            do {
                              local_100 = local_100 + -1;
                              pSVar2 = (StringName *)
                                       median_of_3(param_3 + lVar5 * 8,
                                                   param_3 + ((lVar1 >> 1) + lVar5) * 8,
                                                   param_3 + lVar9 + -8);
                              StringName::StringName((StringName *)&local_48,pSVar2);
                              lVar6 = partitioner(lVar5,lVar7,(StringName *)&local_48,param_3);
                              if ((StringName::configured != '\0') && (local_48 != 0)) {
                                StringName::unref();
                              }
                              lVar1 = lVar7 - lVar6;
                              if (0x10 < lVar1) {
                                if (local_100 != 0) {
                                  lVar8 = lVar7;
                                  local_120 = local_100;
                                  do {
                                    local_120 = local_120 + -1;
                                    pSVar2 = (StringName *)
                                             median_of_3(param_3 + lVar6 * 8,
                                                         param_3 + ((lVar1 >> 1) + lVar6) * 8,
                                                         param_3 + lVar9 + -8);
                                    StringName::StringName((StringName *)&local_48,pSVar2);
                                    lVar7 = partitioner(lVar6,lVar8,(StringName *)&local_48,param_3)
                                    ;
                                    if ((StringName::configured != '\0') && (local_48 != 0)) {
                                      StringName::unref();
                                    }
                                    lVar1 = lVar8 - lVar7;
                                    if (0x10 < lVar1) {
                                      if (local_120 == 0) {
LAB_0010444e:
                                        partial_sort(lVar7,lVar8,lVar8,param_3);
                                      }
                                      else {
                                        lVar9 = lVar8;
                                        local_138 = local_120;
                                        do {
                                          while( true ) {
                                            local_138 = local_138 + -1;
                                            lVar14 = lVar9 * 8;
                                            pSVar2 = (StringName *)
                                                     median_of_3(param_3 + lVar7 * 8,
                                                                 param_3 + ((lVar1 >> 1) + lVar7) *
                                                                           8,param_3 + lVar14 + -8);
                                            StringName::StringName((StringName *)&local_48,pSVar2);
                                            lVar8 = partitioner(lVar7,lVar9,(StringName *)&local_48,
                                                                param_3);
                                            if ((StringName::configured != '\0') && (local_48 != 0))
                                            {
                                              StringName::unref();
                                            }
                                            lVar1 = lVar9 - lVar8;
                                            if (0x10 < lVar1) break;
LAB_001043be:
                                            lVar1 = lVar8 - lVar7;
                                            if (lVar1 < 0x11) {
                                              lVar1 = lVar7 - lVar6;
                                              if (lVar1 < 0x11) goto LAB_00104370;
                                              goto LAB_00104419;
                                            }
                                            lVar9 = lVar8;
                                            if (local_138 == 0) goto LAB_0010444e;
                                          }
                                          if (local_138 == 0) {
LAB_001043ad:
                                            partial_sort(lVar8,lVar9,lVar9,param_3);
                                            goto LAB_001043be;
                                          }
                                          lVar10 = lVar9;
                                          local_f8 = local_138;
                                          while( true ) {
                                            local_f8 = local_f8 + -1;
                                            pSVar2 = (StringName *)
                                                     median_of_3(param_3 + lVar8 * 8,
                                                                 param_3 + ((lVar1 >> 1) + lVar8) *
                                                                           8,param_3 + lVar14 + -8);
                                            StringName::StringName((StringName *)&local_48,pSVar2);
                                            lVar9 = partitioner(lVar8,lVar10,(StringName *)&local_48
                                                                ,param_3);
                                            if ((StringName::configured != '\0') && (local_48 != 0))
                                            {
                                              StringName::unref();
                                            }
                                            lVar1 = lVar10 - lVar9;
                                            if (0x10 < lVar1) {
                                              if (local_f8 != 0) {
                                                lVar14 = local_f8;
                                                lVar15 = lVar10;
                                                do {
                                                  lVar14 = lVar14 + -1;
                                                  pSVar2 = (StringName *)
                                                           median_of_3(param_3 + lVar9 * 8,
                                                                       param_3 + ((lVar1 >> 1) +
                                                                                 lVar9) * 8,
                                                                       param_3 + lVar15 * 8 + -8);
                                                  StringName::StringName
                                                            ((StringName *)&local_48,pSVar2);
                                                  lVar10 = partitioner(lVar9,lVar15,
                                                                       (StringName *)&local_48,
                                                                       param_3);
                                                  if ((StringName::configured != '\0') &&
                                                     (local_48 != 0)) {
                                                    StringName::unref();
                                                  }
                                                  introsort(lVar10,lVar15,param_3,lVar14);
                                                  lVar1 = lVar10 - lVar9;
                                                  if (lVar1 < 0x11) {
                                                    lVar1 = lVar9 - lVar8;
                                                    if (lVar1 < 0x11) goto LAB_001043be;
                                                    goto LAB_00104344;
                                                  }
                                                  lVar15 = lVar10;
                                                } while (lVar14 != 0);
                                              }
                                              partial_sort(lVar9,lVar10,lVar10,param_3);
                                            }
                                            lVar1 = lVar9 - lVar8;
                                            if (lVar1 < 0x11) break;
                                            if (local_f8 == 0) goto LAB_001043ad;
LAB_00104344:
                                            lVar14 = lVar9 * 8;
                                            lVar10 = lVar9;
                                          }
                                          lVar1 = lVar8 - lVar7;
                                          lVar9 = lVar8;
                                        } while (0x10 < lVar1);
                                      }
                                    }
                                    lVar1 = lVar7 - lVar6;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar6 - lVar5;
                                      if (lVar1 < 0x11) goto LAB_00104497;
                                      goto LAB_00104391;
                                    }
                                    if (local_120 == 0) break;
LAB_00104419:
                                    lVar9 = lVar7 * 8;
                                    lVar8 = lVar7;
                                  } while( true );
                                }
                                partial_sort(lVar6,lVar7,lVar7,param_3);
                              }
LAB_00104370:
                              lVar1 = lVar6 - lVar5;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar5 - lVar4;
                                local_138 = lVar5;
                                if (lVar1 < 0x11) goto LAB_00104550;
                                goto LAB_00103efc;
                              }
                              if (local_100 == 0) break;
LAB_00104391:
                              lVar9 = lVar6 * 8;
                              lVar7 = lVar6;
                            } while( true );
                          }
                          partial_sort(lVar5,lVar6,lVar6,param_3);
                        }
LAB_00104497:
                        lVar1 = lVar5 - lVar4;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar4 - lVar3;
                          local_138 = lVar4;
                          if (lVar1 < 0x11) goto LAB_001045e1;
                          goto LAB_00103e42;
                        }
                        local_138 = lVar5;
                      } while (lVar11 != 0);
                    }
                    partial_sort(lVar4,local_138,local_138,param_3);
                  }
LAB_00104550:
                  lVar1 = lVar4 - lVar3;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar3 - param_2;
                    lVar4 = lVar3;
                    if (lVar1 < 0x11) goto LAB_0010466e;
                    goto LAB_00103d81;
                  }
                  local_138 = lVar4;
                } while (lVar13 != 0);
              }
              partial_sort(lVar3,lVar4,lVar4,param_3);
            }
LAB_001045e1:
            lVar1 = lVar3 - param_2;
            if (lVar1 < 0x11) goto LAB_0010466e;
            lVar4 = lVar3;
            if (lVar12 == 0) break;
          } while( true );
        }
        partial_sort(param_2,lVar3,lVar3,param_3);
      }
      lVar1 = param_2 - param_1;
      if (0x10 < lVar1) {
        if (param_4 != 0) goto LAB_0010464d;
        goto LAB_001046ac;
      }
      goto LAB_0010467a;
    }
LAB_001046ac:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      partial_sort(param_1,param_2,param_2,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010466e:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) goto LAB_0010467a;
LAB_0010464d:
  lVar12 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_00103cc2;
}



/* RDShaderFile::get_base_error() const */

void RDShaderFile::get_base_error(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x270) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x270));
  }
  return;
}



/* RDShaderFile::set_base_error(String const&) */

void __thiscall RDShaderFile::set_base_error(RDShaderFile *this,String *param_1)

{
  if (*(long *)(this + 0x270) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x270),(CowData *)param_1);
  }
  Resource::emit_changed();
  return;
}



/* ResourceImporterShaderFile::get_class() const */

void ResourceImporterShaderFile::get_class(void)

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



/* RDShaderFile::get_class() const */

void RDShaderFile::get_class(void)

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
            if (lVar5 == 0) goto LAB_00104abf;
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
LAB_00104abf:
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
    if (cVar6 != '\0') goto LAB_00104b73;
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
              if (lVar5 == 0) goto LAB_00104c23;
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
LAB_00104c23:
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
      if (cVar6 != '\0') goto LAB_00104b73;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00104b73:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<StringName>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TypedArray<StringName>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  Variant::get_type_name(&local_38,0x15);
  *puVar3 = 0x1c;
  puVar3[6] = 0x1f;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_38 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_38);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_28,(String *)(puVar3 + 8),false);
      if (*(long *)(puVar3 + 4) == local_28) {
        lVar2 = local_38;
        if ((StringName::configured != '\0') && (local_28 != 0)) {
          StringName::unref();
          lVar2 = local_38;
        }
      }
      else {
        StringName::unref();
        *(long *)(puVar3 + 4) = local_28;
        lVar2 = local_38;
      }
      goto joined_r0x00104dfc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_30);
  lVar2 = local_38;
joined_r0x00104dfc:
  local_38 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_30 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterShaderFile::is_class(String const&) const */

undefined8 __thiscall
ResourceImporterShaderFile::is_class(ResourceImporterShaderFile *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00104ebf;
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
LAB_00104ebf:
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
    if (cVar6 != '\0') goto LAB_00104f73;
  }
  cVar6 = String::operator==(param_1,"ResourceImporterShaderFile");
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
              if (lVar5 == 0) goto LAB_00105033;
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
LAB_00105033:
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
      if (cVar6 != '\0') goto LAB_00104f73;
    }
    cVar6 = String::operator==(param_1,"ResourceImporter");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_001050dc;
    }
  }
LAB_00104f73:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001050dc:
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



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010530f;
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
LAB_0010530f:
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
    if (cVar5 != '\0') goto LAB_001053c3;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001053c3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RDShaderFile::is_class(String const&) const */

undefined8 __thiscall RDShaderFile::is_class(RDShaderFile *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010548f;
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
LAB_0010548f:
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
    if (cVar5 != '\0') goto LAB_00105543;
  }
  cVar5 = String::operator==(param_1,"RDShaderFile");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00105543:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Ref<RDShaderSPIRV>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Ref<RDShaderSPIRV> > > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
::operator[](HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
  Object *pOVar5;
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
  undefined1 auVar37 [16];
  char cVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 uVar43;
  void *__s_00;
  undefined8 *puVar44;
  long lVar45;
  void *pvVar46;
  ulong uVar47;
  int iVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  undefined8 uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined8 *puVar57;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  long local_40;
  
  lVar45 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar40);
  if (lVar45 == 0) {
LAB_00105d30:
    uVar47 = uVar42 * 4;
    uVar52 = uVar42 * 8;
    uVar43 = Memory::alloc_static(uVar47,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    pvVar46 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar46;
    if ((int)uVar42 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar46 + uVar52)) && (pvVar46 < (void *)((long)pvVar3 + uVar47))
         ) {
        uVar47 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar47 * 4) = 0;
          *(undefined8 *)((long)pvVar46 + uVar47 * 8) = 0;
          uVar47 = uVar47 + 1;
        } while (uVar42 != uVar47);
        goto LAB_00105b78;
      }
      memset(pvVar3,0,uVar47);
      memset(pvVar46,0,uVar52);
      iVar48 = *(int *)(this + 0x2c);
LAB_00105b7c:
      if (iVar48 != 0) {
LAB_00105b84:
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar47 = CONCAT44(0,uVar40);
        lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar41 = StringName::get_empty_hash();
        }
        else {
          uVar41 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar41 == 0) {
          uVar41 = 1;
        }
        uVar56 = 0;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = (ulong)uVar41 * lVar45;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar47;
        lVar51 = SUB168(auVar18 * auVar34,8);
        uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar51 * 4);
        uVar55 = SUB164(auVar18 * auVar34,8);
        if (uVar54 != 0) {
          do {
            if ((uVar54 == uVar41) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar51 * 8) + 0x10) == *(long *)param_1))
            {
              puVar44 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar55 * 8);
              pOVar5 = (Object *)puVar44[3];
              if (pOVar5 != (Object *)0x0) {
                puVar44[3] = 0;
                cVar38 = RefCounted::unreference();
                if ((cVar38 != '\0') && (cVar38 = predelete_handler(pOVar5), cVar38 != '\0')) {
                  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                  Memory::free_static(pOVar5,false);
                }
                puVar44 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar55 * 8);
              }
              goto LAB_0010574c;
            }
            uVar56 = uVar56 + 1;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = (ulong)(uVar55 + 1) * lVar45;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar47;
            lVar51 = SUB168(auVar19 * auVar35,8);
            uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar51 * 4);
            uVar55 = SUB164(auVar19 * auVar35,8);
          } while ((uVar54 != 0) &&
                  (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar54 * lVar45, auVar36._8_8_ = 0,
                  auVar36._0_8_ = uVar47, auVar21._8_8_ = 0,
                  auVar21._0_8_ = (ulong)((uVar40 + uVar55) - SUB164(auVar20 * auVar36,8)) * lVar45,
                  auVar37._8_8_ = 0, auVar37._0_8_ = uVar47, uVar56 <= SUB164(auVar21 * auVar37,8)))
          ;
        }
        iVar48 = *(int *)(this + 0x2c);
      }
      goto LAB_0010577f;
    }
    iVar48 = *(int *)(this + 0x2c);
    if (pvVar46 == (void *)0x0) goto LAB_0010577f;
    if (iVar48 != 0) goto LAB_00105b84;
LAB_001057a5:
    uVar40 = *(uint *)(this + 0x28);
    if (uVar40 == 0x1c) {
      puVar44 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010574c;
    }
    uVar42 = (ulong)(uVar40 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar41 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    if (uVar40 + 1 < 2) {
      uVar42 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar42 * 4);
    uVar52 = (ulong)uVar40;
    *(int *)(this + 0x28) = (int)uVar42;
    pvVar46 = *(void **)(this + 8);
    uVar42 = uVar52 * 4;
    uVar47 = uVar52 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    __s_00 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar47)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar42 != uVar52);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar47);
      }
    }
    if (uVar41 != 0) {
      uVar42 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar3 + uVar42 * 4);
        if (uVar40 != 0) {
          lVar45 = *(long *)(this + 0x10);
          uVar56 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar47 = CONCAT44(0,uVar54);
          lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar40 * lVar51;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar47;
          lVar49 = SUB168(auVar10 * auVar26,8);
          puVar1 = (uint *)(lVar45 + lVar49 * 4);
          iVar48 = SUB164(auVar10 * auVar26,8);
          uVar55 = *puVar1;
          uVar43 = *(undefined8 *)((long)pvVar46 + uVar42 * 8);
          while (uVar55 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar55 * lVar51;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar47;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar54 + iVar48) - SUB164(auVar11 * auVar27,8)) * lVar51;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar47;
            uVar39 = SUB164(auVar12 * auVar28,8);
            uVar53 = uVar43;
            if (uVar39 < uVar56) {
              *puVar1 = uVar40;
              puVar44 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar53 = *puVar44;
              *puVar44 = uVar43;
              uVar40 = uVar55;
              uVar56 = uVar39;
            }
            uVar56 = uVar56 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar48 + 1) * lVar51;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar47;
            lVar49 = SUB168(auVar13 * auVar29,8);
            puVar1 = (uint *)(lVar45 + lVar49 * 4);
            iVar48 = SUB164(auVar13 * auVar29,8);
            uVar43 = uVar53;
            uVar55 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar43;
          *puVar1 = uVar40;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar42 = uVar42 + 1;
      } while (uVar41 != uVar42);
      Memory::free_static(pvVar46,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar48 = *(int *)(this + 0x2c);
    if (iVar48 != 0) {
      lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar41 = StringName::get_empty_hash();
        lVar45 = *(long *)(this + 8);
      }
      else {
        uVar41 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar41 == 0) {
        uVar41 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar41 * lVar51;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar42;
      lVar49 = SUB168(auVar6 * auVar22,8);
      uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
      uVar55 = SUB164(auVar6 * auVar22,8);
      if (uVar54 != 0) {
        uVar56 = 0;
        do {
          if ((uVar41 == uVar54) &&
             (*(long *)(*(long *)(lVar45 + lVar49 * 8) + 0x10) == *(long *)param_1)) {
            puVar44 = *(undefined8 **)(lVar45 + (ulong)uVar55 * 8);
            goto LAB_0010574c;
          }
          uVar56 = uVar56 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar55 + 1) * lVar51;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar42;
          lVar49 = SUB168(auVar7 * auVar23,8);
          uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
          uVar55 = SUB164(auVar7 * auVar23,8);
        } while ((uVar54 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar54 * lVar51, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar42, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar55 + uVar40) - SUB164(auVar8 * auVar24,8)) * lVar51,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar42, uVar56 <= SUB164(auVar9 * auVar25,8)));
      }
      uVar42 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar45 == 0) goto LAB_00105d30;
LAB_00105b78:
      iVar48 = *(int *)(this + 0x2c);
      goto LAB_00105b7c;
    }
LAB_0010577f:
    if ((float)uVar42 * __LC21 < (float)(iVar48 + 1)) goto LAB_001057a5;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = (Object *)0x0;
  puVar44 = (undefined8 *)operator_new(0x20,"");
  *puVar44 = 0;
  puVar44[1] = 0;
  StringName::StringName((StringName *)(puVar44 + 2),(StringName *)&local_58);
  puVar44[3] = 0;
  if (local_50 != (Object *)0x0) {
    puVar44[3] = local_50;
    cVar38 = RefCounted::reference();
    if (cVar38 == '\0') {
      puVar44[3] = 0;
    }
    if (((local_50 != (Object *)0x0) &&
        (cVar38 = RefCounted::unreference(), pOVar5 = local_50, cVar38 != '\0')) &&
       (cVar38 = predelete_handler(local_50), cVar38 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar45 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar44;
    *(undefined8 **)(this + 0x20) = puVar44;
    if (lVar45 == 0) goto LAB_00105cf5;
LAB_00105a68:
    uVar40 = *(uint *)(lVar45 + 0x20);
  }
  else {
    *puVar4 = puVar44;
    puVar44[1] = puVar4;
    lVar45 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar44;
    if (lVar45 != 0) goto LAB_00105a68;
LAB_00105cf5:
    uVar40 = StringName::get_empty_hash();
  }
  lVar45 = *(long *)(this + 0x10);
  if (uVar40 == 0) {
    uVar40 = 1;
  }
  uVar42 = (ulong)uVar40;
  uVar55 = 0;
  uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar47 = CONCAT44(0,uVar41);
  lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar42 * lVar51;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar47;
  lVar50 = SUB168(auVar14 * auVar30,8);
  lVar49 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar45 + lVar50 * 4);
  iVar48 = SUB164(auVar14 * auVar30,8);
  uVar54 = *puVar1;
  puVar4 = puVar44;
  while (uVar54 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar54 * lVar51;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar47;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((iVar48 + uVar41) - SUB164(auVar15 * auVar31,8)) * lVar51;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar47;
    uVar40 = SUB164(auVar16 * auVar32,8);
    puVar57 = puVar4;
    if (uVar40 < uVar55) {
      *puVar1 = (uint)uVar42;
      uVar42 = (ulong)uVar54;
      puVar2 = (undefined8 *)(lVar49 + lVar50 * 8);
      puVar57 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar55 = uVar40;
    }
    uVar40 = (uint)uVar42;
    uVar55 = uVar55 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar48 + 1) * lVar51;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar47;
    lVar50 = SUB168(auVar17 * auVar33,8);
    puVar1 = (uint *)(lVar45 + lVar50 * 4);
    iVar48 = SUB164(auVar17 * auVar33,8);
    puVar4 = puVar57;
    uVar54 = *puVar1;
  }
  *(undefined8 **)(lVar49 + lVar50 * 8) = puVar4;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010574c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar44 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RDShaderFile::set_bytecode(Ref<RDShaderSPIRV> const&, StringName const&) */

void __thiscall RDShaderFile::set_bytecode(RDShaderFile *this,Ref *param_1,StringName *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  
  if (*(long *)param_1 != 0) {
    plVar4 = (long *)HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
                     ::operator[]((HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
                                   *)(this + 0x240),param_2);
    pOVar1 = *(Object **)param_1;
    pOVar2 = (Object *)*plVar4;
    if (pOVar1 != pOVar2) {
      *plVar4 = (long)pOVar1;
      if (pOVar1 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          *plVar4 = 0;
        }
      }
      if (pOVar2 != (Object *)0x0) {
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
    Resource::emit_changed();
    return;
  }
  _err_print_error("set_bytecode","./servers/rendering/rendering_device_binds.h",0x162,
                   "Condition \"p_bytecode.is_null()\" is true.",0,0);
  return;
}



/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)*puVar2;
    if (piVar1 == (int *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)(piVar1 + 10) == puVar2) {
      *puVar2 = *(undefined8 *)(piVar1 + 6);
      if (piVar1 == (int *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)(piVar1 + 8);
      }
      if (*(long *)(piVar1 + 8) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 8) + 0x18) = *(undefined8 *)(piVar1 + 6);
      }
      if (*(long *)(piVar1 + 6) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 6) + 0x20) = *(undefined8 *)(piVar1 + 8);
      }
      if (Variant::needs_deinit[*piVar1] != '\0') {
        Variant::_clear_internal();
      }
      Memory::free_static(piVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* RDShaderFile::_set_versions(Dictionary const&) */

void __thiscall RDShaderFile::_set_versions(RDShaderFile *this,Dictionary *param_1)

{
  uint uVar1;
  void *pvVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  Object *pOVar6;
  undefined8 *puVar7;
  long lVar8;
  long in_FS_OFFSET;
  long *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x248) != 0) && (*(int *)(this + 0x26c) != 0)) {
    lVar8 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x250) + lVar8) != 0) {
          *(int *)(*(long *)(this + 0x250) + lVar8) = 0;
          pvVar2 = *(void **)(*(long *)(this + 0x248) + lVar8 * 2);
          if ((*(long *)((long)pvVar2 + 0x18) != 0) &&
             (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
            pOVar6 = *(Object **)((long)pvVar2 + 0x18);
            cVar4 = predelete_handler(pOVar6);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(*(long *)(this + 0x248) + lVar8 * 2) = 0;
        }
        lVar8 = lVar8 + 4;
      } while (lVar8 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0x26c) = 0;
    *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  }
  local_50 = (long *)0x0;
  Dictionary::get_key_list((List *)param_1);
  if ((local_50 != (long *)0x0) && (lVar8 = *local_50, lVar8 != 0)) {
    do {
      Variant::operator_cast_to_StringName((Variant *)&local_48);
      Dictionary::operator[]((Variant *)param_1);
      lVar5 = Variant::get_validated_object();
      if (((lVar5 == 0) ||
          (pOVar6 = (Object *)__dynamic_cast(lVar5,&Object::typeinfo,&RDShaderSPIRV::typeinfo,0),
          pOVar6 == (Object *)0x0)) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        _err_print_error("_set_versions","./servers/rendering/rendering_device_binds.h",0x1b2,
                         "Condition \"bc.is_null()\" is true. Continuing.",0,0);
      }
      else {
        puVar7 = (undefined8 *)
                 HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
                 ::operator[]((HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
                               *)(this + 0x240),(StringName *)&local_48);
        pOVar3 = (Object *)*puVar7;
        if (pOVar6 != pOVar3) {
          *puVar7 = pOVar6;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *puVar7 = 0;
          }
          if (((pOVar3 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
             (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      lVar8 = *(long *)(lVar8 + 0x18);
    } while (lVar8 != 0);
  }
  Resource::emit_changed();
  List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_50);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* MethodBindTRC<Dictionary>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Dictionary>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC1;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 0x1b;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_001065c5;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_001065c5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterShaderFile::_initialize_classv() */

void ResourceImporterShaderFile::_initialize_classv(void)

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
    if (ResourceImporter::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00113008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "ResourceImporter";
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        ResourceImporter::_bind_methods();
      }
      ResourceImporter::initialize_class()::initialized = '\x01';
    }
    local_58 = "ResourceImporter";
    local_68 = 0;
    local_50 = 0x10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterShaderFile";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00106af8) */
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



/* RDShaderFile::~RDShaderFile() */

void __thiscall RDShaderFile::~RDShaderFile(RDShaderFile *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010f008;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x270));
  pvVar5 = *(void **)(this + 0x248);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x26c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x250) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x250) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                pOVar2 = *(Object **)((long)pvVar5 + 0x18);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x248);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00106dcc;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x250),false);
  }
LAB_00106dcc:
  Resource::~Resource((Resource *)this);
  return;
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
        if (pvVar5 == (void *)0x0) goto LAB_00106fa4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00106fa4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* CallableCustomStaticMethodPointer<void, String const&>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&>::call
          (CallableCustomStaticMethodPointer<void,String_const&> *this,Variant **param_1,int param_2
          ,Variant *param_3,CallError *param_4)

{
  code *pcVar1;
  Variant *pVVar2;
  undefined8 uVar3;
  char cVar4;
  long in_FS_OFFSET;
  Variant aVStack_28 [8];
  long local_20;
  
  pcVar1 = *(code **)(this + 0x28);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)param_2 < 2) {
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      pVVar2 = *param_1;
      *(undefined4 *)param_4 = 0;
      cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar2,4);
      uVar3 = _LC55;
      if (cVar4 == '\0') {
        *(undefined4 *)param_4 = 2;
        *(undefined8 *)(param_4 + 4) = uVar3;
      }
      Variant::operator_cast_to_String(aVStack_28);
      (*pcVar1)(aVStack_28);
      CowData<char32_t>::_unref((CowData<char32_t> *)aVStack_28);
    }
  }
  else {
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
    if ((code *)PTR__bind_methods_00113010 != Object::_bind_methods) {
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



/* RDShaderFile::~RDShaderFile() */

void __thiscall RDShaderFile::~RDShaderFile(RDShaderFile *this)

{
  uint uVar1;
  Object *pOVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010f008;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x270));
  pvVar5 = *(void **)(this + 0x248);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x26c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x250) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x250) + lVar4) = 0;
            if (*(long *)((long)pvVar5 + 0x18) != 0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                pOVar2 = *(Object **)((long)pvVar5 + 0x18);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x248);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010760c;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x250),false);
  }
LAB_0010760c:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x278);
  return;
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC1;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar3 = 4;
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
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
      }
      goto LAB_00107785;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
LAB_00107785:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
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



/* MethodBindT<Dictionary const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Dictionary_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
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
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC1;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x1b,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78
               ,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
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
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
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
LAB_00107b6d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107b6d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00107b8f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00107b8f:
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
      goto LAB_00107ec1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00107ec1:
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



/* RDShaderFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall RDShaderFile::_get_property_listv(RDShaderFile *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "RDShaderFile";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RDShaderFile";
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
      goto LAB_00108171;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108171:
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
  StringName::StringName((StringName *)&local_78,"RDShaderFile",false);
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



/* ResourceImporter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceImporter::_get_property_listv(ResourceImporter *this,List *param_1,bool param_2)

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
  local_78 = "ResourceImporter";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceImporter";
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
      goto LAB_00108421;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108421:
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
  StringName::StringName((StringName *)&local_78,"ResourceImporter",false);
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



/* ResourceImporterShaderFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
ResourceImporterShaderFile::_get_property_listv
          (ResourceImporterShaderFile *this,List *param_1,bool param_2)

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
    ResourceImporter::_get_property_listv((ResourceImporter *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ResourceImporterShaderFile";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceImporterShaderFile";
  local_98 = 0;
  local_70 = 0x1a;
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
      goto LAB_001086d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001086d1:
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
  StringName::StringName((StringName *)&local_78,"ResourceImporterShaderFile",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ResourceImporter::_get_property_listv((ResourceImporter *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<RDShaderFile, Ref<RDShaderSPIRV> const&, StringName const&>(void
   (RDShaderFile::*)(Ref<RDShaderSPIRV> const&, StringName const&)) */

MethodBind *
create_method_bind<RDShaderFile,Ref<RDShaderSPIRV>const&,StringName_const&>
          (_func_void_Ref_ptr_StringName_ptr *param_1)

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
  *(_func_void_Ref_ptr_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f488;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<RDShaderFile, Ref<RDShaderSPIRV>, StringName
   const&>(Ref<RDShaderSPIRV> (RDShaderFile::*)(StringName const&) const) */

MethodBind *
create_method_bind<RDShaderFile,Ref<RDShaderSPIRV>,StringName_const&>
          (_func_Ref_StringName_ptr *param_1)

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
  *(_func_Ref_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f4e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<RDShaderFile, TypedArray<StringName>>(TypedArray<StringName>
   (RDShaderFile::*)() const) */

MethodBind * create_method_bind<RDShaderFile,TypedArray<StringName>>(_func_TypedArray *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010f548;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<RDShaderFile, String const&>(void (RDShaderFile::*)(String
   const&)) */

MethodBind * create_method_bind<RDShaderFile,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f5a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<RDShaderFile, String>(String (RDShaderFile::*)() const) */

MethodBind * create_method_bind<RDShaderFile,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f608;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<RDShaderFile, Dictionary const&>(void (RDShaderFile::*)(Dictionary
   const&)) */

MethodBind * create_method_bind<RDShaderFile,Dictionary_const&>(_func_void_Dictionary_ptr *param_1)

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
  *(_func_void_Dictionary_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f668;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<RDShaderFile, Dictionary>(Dictionary (RDShaderFile::*)() const) */

MethodBind * create_method_bind<RDShaderFile,Dictionary>(_func_Dictionary *param_1)

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
  *(_func_Dictionary **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f6c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RDShaderFile::_bind_methods() */

void RDShaderFile::_bind_methods(void)

{
  char cVar1;
  MethodBind *pMVar2;
  uint uVar3;
  long in_FS_OFFSET;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  CowData<StringName> local_b8 [32];
  Variant *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (char *)0x0;
  local_88 = 0;
  local_98 = (Variant *)0x1090e4;
  pcStack_90 = "version";
  auStack_70._8_8_ = auStack_70._0_8_;
  auStack_70._0_8_ = &pcStack_90;
  uVar3 = (uint)(Variant *)&local_78;
  local_78 = &local_98;
  D_METHODP((char *)&local_c8,(char ***)"set_bytecode",uVar3);
  Variant::Variant((Variant *)&local_78,(StringName *)&local_d8);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar2 = create_method_bind<RDShaderFile,Ref<RDShaderSPIRV>const&,StringName_const&>(set_bytecode)
  ;
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_c8,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_b8);
  if ((StringName::configured != '\0') &&
     (((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_d8 != (char *)0x0)))) {
    StringName::unref();
  }
  local_d8 = (char *)0x0;
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x1090ed;
  local_78 = &local_98;
  D_METHODP((char *)&local_c8,(char ***)"get_spirv",uVar3);
  Variant::Variant((Variant *)&local_78,(StringName *)&local_d8);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar2 = create_method_bind<RDShaderFile,Ref<RDShaderSPIRV>,StringName_const&>(get_spirv);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_c8,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_b8);
  if (((StringName::configured != '\0') &&
      ((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"get_version_list",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<RDShaderFile,TypedArray<StringName>>(get_version_list);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  local_98 = (Variant *)0x109106;
  pcStack_90 = (char *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_c8,(char ***)"set_base_error",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<RDShaderFile,String_const&>(set_base_error);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"get_base_error",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<RDShaderFile,String>(get_base_error);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x10912a;
  local_78 = &local_98;
  D_METHODP((char *)&local_c8,(char ***)"_set_versions",uVar3);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<RDShaderFile,Dictionary_const&>(_set_versions);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"_get_versions",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar2 = create_method_bind<RDShaderFile,Dictionary>(_get_versions);
  ClassDB::bind_methodfi(1,pMVar2,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = "_versions";
  local_100 = 0;
  local_c0 = 9;
  String::parse_latin1((StrRange *)&local_100);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_c8,0x1b,(StrRange *)&local_100,0,(StrRange *)&local_f8,10,
             &local_f0);
  local_d8 = "RDShaderFile";
  local_108 = 0;
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,-1);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((((StringName::configured != '\0') &&
       ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_e0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = "base_error";
  local_100 = 0;
  local_c0 = 10;
  String::parse_latin1((StrRange *)&local_100);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_c8,4,(StrRange *)&local_100,0,(StrRange *)&local_f8,6,&local_f0)
  ;
  local_d8 = "RDShaderFile";
  local_108 = 0;
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,-1);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if (((StringName::configured != '\0') &&
      ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_e0 != 0)))
     ) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RDShaderFile::_initialize_classv() */

void RDShaderFile::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00113008 != RefCounted::_bind_methods) {
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
    local_58 = "RDShaderFile";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

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
/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
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
LAB_0010a1c0:
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
  lVar8 = uVar6 + 1;
  if (lVar8 == 0) goto LAB_0010a1c0;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0010a09a:
        if (lVar8 != lVar5) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) {
            return uVar2;
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
      while ((StringName::configured == '\0' || (*(long *)(lVar4 + uVar6 * 8) == 0))) {
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0010a09a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_0010a067;
  }
  if (lVar8 == lVar5) {
LAB_0010a13b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010a067:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010a11b;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0010a13b;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0010a11b:
  puVar7[-1] = param_1;
  return 0;
}



/* RDShaderFile::get_version_list() const */

void RDShaderFile::get_version_list(void)

{
  int iVar1;
  Variant *pVVar2;
  StringName *pSVar3;
  long lVar4;
  StringName *pSVar5;
  long in_RSI;
  long lVar6;
  uint uVar7;
  Array *in_RDI;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_90;
  long local_70 [2];
  StringName *local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  plVar8 = *(long **)(in_RSI + 600);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (StringName *)0x0;
  if (plVar8 != (long *)0x0) {
    pSVar5 = (StringName *)0x0;
    do {
      StringName::StringName((StringName *)local_70,(StringName *)(plVar8 + 2));
      if (pSVar5 == (StringName *)0x0) {
        lVar6 = 1;
      }
      else {
        lVar6 = *(long *)(pSVar5 + -8) + 1;
      }
      iVar1 = CowData<StringName>::resize<false>((CowData<StringName> *)&local_60,lVar6);
      pSVar5 = local_60;
      if (iVar1 == 0) {
        if (local_60 == (StringName *)0x0) {
          lVar9 = -1;
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(local_60 + -8);
          lVar9 = lVar6 + -1;
          if (-1 < lVar9) {
            CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_60);
            pSVar5 = local_60;
            StringName::operator=(local_60 + lVar9 * 8,(StringName *)local_70);
            goto LAB_0010a33d;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar6,"p_index","size()","",false,
                   false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
        pSVar5 = local_60;
      }
LAB_0010a33d:
      if ((StringName::configured != '\0') && (local_70[0] != 0)) {
        StringName::unref();
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
    if (pSVar5 != (StringName *)0x0) {
      lVar6 = *(long *)(pSVar5 + -8);
      if ((lVar6 != 0) &&
         (CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_60), pSVar5 = local_60,
         lVar6 != 1)) {
        local_90 = 0;
        lVar9 = lVar6;
        do {
          lVar9 = lVar9 >> 1;
          local_90 = local_90 + 1;
        } while (lVar9 != 1);
        local_90 = local_90 * 2;
        lVar9 = lVar6;
        lVar4 = 1;
        if (lVar6 < 0x11) {
          do {
            lVar9 = lVar4 + 1;
            SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0,lVar4,pSVar5);
            lVar4 = lVar9;
          } while (lVar6 != lVar9);
        }
        else {
          do {
            local_90 = local_90 + -1;
            pSVar3 = (StringName *)
                     SortArray<StringName,StringName::AlphCompare,true>::median_of_3
                               (pSVar5,pSVar5 + (lVar9 >> 1) * 8,pSVar5 + lVar9 * 8 + -8);
            StringName::StringName((StringName *)local_70,pSVar3);
            lVar4 = SortArray<StringName,StringName::AlphCompare,true>::partitioner
                              (0,lVar9,(StringName *)local_70,pSVar5);
            if ((StringName::configured != '\0') && (local_70[0] != 0)) {
              StringName::unref();
            }
            SortArray<StringName,StringName::AlphCompare,true>::introsort
                      (lVar4,lVar9,pSVar5,local_90);
            lVar9 = 1;
            if (lVar4 < 0x11) goto LAB_0010a638;
            lVar9 = lVar4;
          } while (local_90 != 0);
          SortArray<StringName,StringName::AlphCompare,true>::partial_sort(0,lVar4,lVar4,pSVar5);
          lVar9 = 1;
LAB_0010a638:
          do {
            lVar4 = lVar9 + 1;
            SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0,lVar9,pSVar5);
            lVar9 = lVar4;
          } while (lVar4 != 0x10);
          do {
            StringName::StringName((StringName *)local_70,pSVar5 + lVar4 * 8);
            SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert
                      (lVar4,(StringName *)local_70,pSVar5);
            if ((StringName::configured != '\0') && (local_70[0] != 0)) {
              StringName::unref();
            }
            lVar4 = lVar4 + 1;
          } while (lVar6 != lVar4);
        }
      }
      goto LAB_0010a37d;
    }
  }
  pSVar5 = (StringName *)0x0;
LAB_0010a37d:
  Array::Array(in_RDI);
  local_58[0] = 0;
  local_58[1] = 0;
  local_70[0] = 0;
  local_50 = (undefined1  [16])0x0;
  uVar7 = (uint)in_RDI;
  Array::set_typed(uVar7,(StringName *)0x15,(Variant *)local_70);
  if ((StringName::configured != '\0') && (local_70[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (pSVar5 == (StringName *)0x0) {
    Array::resize(uVar7);
  }
  else {
    Array::resize(uVar7);
    if (0 < *(long *)(pSVar5 + -8)) {
      lVar6 = 0;
      do {
        while( true ) {
          Variant::Variant((Variant *)local_58,pSVar5 + lVar6 * 8);
          pVVar2 = (Variant *)Array::operator[](uVar7);
          if (pVVar2 == (Variant *)local_58) break;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar2 = 0;
          *(int *)pVVar2 = local_58[0];
          *(undefined8 *)(pVVar2 + 8) = local_50._0_8_;
          *(undefined8 *)(pVVar2 + 0x10) = local_50._8_8_;
LAB_0010a43c:
          lVar6 = lVar6 + 1;
          if (*(long *)(pSVar5 + -8) <= lVar6) goto LAB_0010a490;
        }
        if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_0010a43c;
        lVar6 = lVar6 + 1;
        Variant::_clear_internal();
      } while (lVar6 < *(long *)(pSVar5 + -8));
    }
  }
LAB_0010a490:
  CowData<StringName>::_unref((CowData<StringName> *)&local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RDShaderFile::_get_versions() const */

Dictionary * RDShaderFile::_get_versions(void)

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
  code *pcVar11;
  int iVar12;
  uint uVar13;
  Variant *pVVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  long in_RSI;
  uint uVar18;
  Dictionary *in_RDI;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  Array local_68 [8];
  long local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  iVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  get_version_list();
  Dictionary::Dictionary(in_RDI);
  iVar12 = Array::size();
  if (0 < iVar12) {
    do {
      iVar12 = (int)local_68;
      Array::operator[](iVar12);
      Variant::operator_cast_to_StringName((Variant *)&local_60);
      if ((*(long *)(in_RSI + 0x248) == 0) || (*(int *)(in_RSI + 0x26c) == 0)) {
LAB_0010a920:
        _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                         "FATAL: Condition \"!exists\" is true.",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x268) * 4);
      uVar20 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x268) * 8);
      if (local_60 == 0) {
        uVar13 = StringName::get_empty_hash();
      }
      else {
        uVar13 = *(uint *)(local_60 + 0x20);
      }
      if (uVar13 == 0) {
        uVar13 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar20;
      lVar16 = SUB168(auVar3 * auVar7,8);
      uVar18 = *(uint *)(*(long *)(in_RSI + 0x250) + lVar16 * 4);
      uVar15 = SUB164(auVar3 * auVar7,8);
      if (uVar18 == 0) goto LAB_0010a920;
      uVar19 = 0;
      while ((uVar18 != uVar13 ||
             (*(long *)(*(long *)(*(long *)(in_RSI + 0x248) + lVar16 * 8) + 0x10) != local_60))) {
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar15 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar20;
        lVar16 = SUB168(auVar4 * auVar8,8);
        uVar18 = *(uint *)(*(long *)(in_RSI + 0x250) + lVar16 * 4);
        uVar15 = SUB164(auVar4 * auVar8,8);
        if ((uVar18 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar18 * lVar2, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar20, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((uVar1 + uVar15) - SUB164(auVar5 * auVar9,8)) * lVar2,
           auVar10._8_8_ = 0, auVar10._0_8_ = uVar20, SUB164(auVar6 * auVar10,8) < uVar19))
        goto LAB_0010a920;
      }
      Variant::Variant((Variant *)local_58,
                       *(Object **)(*(long *)(*(long *)(in_RSI + 0x248) + (ulong)uVar15 * 8) + 0x18)
                      );
      Array::operator[](iVar12);
      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
      if (pVVar14 == (Variant *)local_58) {
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        if (Variant::needs_deinit[*(int *)pVVar14] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar14 = 0;
        *(int *)pVVar14 = local_58[0];
        *(undefined8 *)(pVVar14 + 8) = local_50;
        *(undefined8 *)(pVVar14 + 0x10) = uStack_48;
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      iVar17 = iVar17 + 1;
      iVar12 = Array::size();
    } while (iVar17 < iVar12);
  }
  Array::~Array(local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010aac8) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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



/* MethodBindTRC<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Dictionary>::call
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ae50;
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
      (*(code *)pVVar2)((Dictionary *)&local_58);
      Variant::Variant((Variant *)local_48,(Dictionary *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Dictionary::~Dictionary((Dictionary *)&local_58);
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
LAB_0010ae50:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Dictionary>::validated_call
          (MethodBindTRC<Dictionary> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x10ac98;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b109;
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
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010b109:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Dictionary>::ptrcall
          (MethodBindTRC<Dictionary> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x10ac98;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b2da;
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
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0010b2da:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Dictionary_const&>::validated_call
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
      goto LAB_0010b621;
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
                    /* WARNING: Could not recover jumptable at 0x0010b4ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010b621:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Dictionary_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010b801;
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
                    /* WARNING: Could not recover jumptable at 0x0010b689. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010b801:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b8e0;
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
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_0010b8e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x10ac98;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bb1c;
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
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010bb1c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x10ac98;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bced;
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
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010bced:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010c021;
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
                    /* WARNING: Could not recover jumptable at 0x0010bead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010c021:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010c201;
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
                    /* WARNING: Could not recover jumptable at 0x0010c089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010c201:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<StringName>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<TypedArray<StringName>>::call
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c2e0;
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
LAB_0010c2e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<StringName>>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<TypedArray<StringName>>::validated_call
          (MethodBindTRC<TypedArray<StringName>> *this,Object *param_1,Variant **param_2,
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
      local_48 = (Variant **)0x10ac98;
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
      goto LAB_0010c509;
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
LAB_0010c509:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<StringName>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TypedArray<StringName>>::ptrcall
          (MethodBindTRC<TypedArray<StringName>> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (void **)0x10ac98;
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
      goto LAB_0010c6da;
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
LAB_0010c6da:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::ptrcall
          (MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
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
      local_48 = (Object *)0x10ac98;
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010c907;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010c907;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010c951;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010c951;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010c951:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010c907;
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
LAB_0010c907:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10ac98;
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
      goto LAB_0010cc39;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar1) + -1);
  }
  lVar2 = *(long *)(param_3 + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0010cbf4:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&RDShaderSPIRV::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_0010cbf4;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar1),(StringName *)&local_68,lVar2 + 8);
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_0010cc39:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
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
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10ac98;
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
      goto LAB_0010cf03;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = *(undefined8 *)((long)param_3 + 8);
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_0010cedc:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_0010cedc;
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),(StringName *)&local_48,uVar2);
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_0010cf03:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Dictionary_const&>::call
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d260;
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
      if (in_R8D != 1) goto LAB_0010d2b0;
LAB_0010d2a0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010d2b0:
        uVar6 = 4;
        goto LAB_0010d255;
      }
      if (in_R8D == 1) goto LAB_0010d2a0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1b);
    uVar4 = _LC89;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Dictionary::~Dictionary((Dictionary *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0010d255:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010d260:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d590;
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
      if (in_R8D != 1) goto LAB_0010d5e0;
LAB_0010d5d0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010d5e0:
        uVar6 = 4;
        goto LAB_0010d585;
      }
      if (in_R8D == 1) goto LAB_0010d5d0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC55;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0010d585:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010d590:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d940;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010d990;
LAB_0010d980:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010d990:
        uVar7 = 4;
        goto LAB_0010d935;
      }
      if (in_R8D == 1) goto LAB_0010d980;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x15);
    uVar4 = _LC91;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*(code *)pVVar12)(&local_70,(Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (((local_70 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar5 = local_70, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_0010d935:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010d940:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::validated_call
          (MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
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
      goto LAB_0010dc1d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
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
LAB_0010dc1d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Ref<RDShaderSPIRV> const&, StringName
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(Ref<RDShaderSPIRV> const&, StringName
   const&), Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Ref<RDShaderSPIRV>const&,StringName_const&>
               (__UnexistingClass *param_1,_func_void_Ref_ptr_StringName_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Object *pOVar9;
  undefined4 in_register_0000000c;
  long *plVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long in_FS_OFFSET;
  long in_stack_00000008;
  long local_50;
  Object *local_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (uint)param_5;
  if (2 < uVar12) {
    uVar8 = 3;
LAB_0010dfb5:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
    goto LAB_0010dfbe;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar7 = 2 - uVar12;
  if (lVar1 == 0) {
    if (iVar7 != 0) goto LAB_0010dfb0;
    puVar14 = (undefined4 *)*plVar10;
LAB_0010dffd:
    puVar15 = (undefined4 *)plVar10[1];
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar13 = (int)lVar2;
    if (iVar13 < iVar7) {
LAB_0010dfb0:
      uVar8 = 4;
      goto LAB_0010dfb5;
    }
    if (uVar12 == 0) {
      lVar11 = (long)(iVar13 + -2);
      if (lVar2 <= lVar11) goto LAB_0010e0a0;
      puVar14 = (undefined4 *)(lVar1 + lVar11 * 0x18);
    }
    else {
      puVar14 = (undefined4 *)*plVar10;
      if (uVar12 == 2) goto LAB_0010dffd;
    }
    lVar11 = (long)(int)((uVar12 ^ 1) + (iVar13 - iVar7));
    if (lVar2 <= lVar11) {
LAB_0010e0a0:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puVar15 = (undefined4 *)(lVar1 + lVar11 * 0x18);
  }
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_Ref_ptr_StringName_ptr **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar6 = Variant::can_convert_strict(*puVar15,0x15);
  uVar4 = _LC92;
  if (cVar6 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_StringName((Variant *)&local_50);
  cVar6 = Variant::can_convert_strict(*puVar14);
  uVar4 = _LC93;
  if (cVar6 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar9 != local_48) {
    if (pOVar9 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_0010e022:
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
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&RDShaderSPIRV::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_48 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0010e022;
      }
    }
  }
  (*param_2)((Ref *)(param_1 + (long)param_3),(StringName *)&local_48);
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
LAB_0010dfbe:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::call
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
      _err_print_error(&_LC83,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010e146;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Ref<RDShaderSPIRV>const&,StringName_const&>
            (p_Var2,(_func_void_Ref_ptr_StringName_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010e146:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC1;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,4,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC1;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x15,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88
               ,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<StringName_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0010e788;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "RDShaderSPIRV";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010e887:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_0010e887;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010e788:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar2;
  long in_FS_OFFSET;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pPVar2 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar2 = 0;
  *(undefined4 *)(pPVar2 + 0x18) = 0;
  *(undefined8 *)(pPVar2 + 0x20) = 0;
  *(undefined4 *)(pPVar2 + 0x28) = 6;
  local_94 = 0;
  *(undefined1 (*) [16])(pPVar2 + 8) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "RDShaderSPIRV";
    local_70 = 0xd;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x18,(CowData<char32_t> *)&local_90,0x11,
               (StrRange *)&local_88,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)pPVar2 = local_78._0_4_;
    if (*(long *)(pPVar2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(pPVar2 + 8) = lVar1;
    }
    if (*(long *)(pPVar2 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(pPVar2 + 0x10) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x18) = local_60;
    if (*(long *)(pPVar2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar2 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(pPVar2 + 0x20) = lVar1;
    }
    *(undefined4 *)(pPVar2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_94 = 1;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_94,pPVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterShaderFile::get_importer_name() const */

void ResourceImporterShaderFile::_GLOBAL__sub_I_get_importer_name(void)

{
  if (PopupMenu::base_property_helper != '\0') {
    return;
  }
  PopupMenu::base_property_helper = 1;
  PopupMenu::base_property_helper._56_8_ = 2;
  PopupMenu::base_property_helper._64_8_ = 0;
  PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,&__dso_handle
              );
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RDShaderFile::~RDShaderFile() */

void __thiscall RDShaderFile::~RDShaderFile(RDShaderFile *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

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
/* ResourceImporterShaderFile::~ResourceImporterShaderFile() */

void __thiscall
ResourceImporterShaderFile::~ResourceImporterShaderFile(ResourceImporterShaderFile *this)

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
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TypedArray<StringName>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<StringName>>::~MethodBindTRC(MethodBindTRC<TypedArray<StringName>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::~MethodBindT
          (MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomStaticMethodPointer<void, String const&>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<void,String_const&>::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<void,String_const&> *this)

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


