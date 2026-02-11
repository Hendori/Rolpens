
/* ResourceImporterTexture::get_preset_count() const */

undefined8 ResourceImporterTexture::get_preset_count(void)

{
  return 3;
}



/* ResourceImporterTexture::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ResourceImporterTexture::get_recognized_extensions(ResourceImporterTexture *this,List *param_1)

{
  ImageLoader::get_recognized_extensions(param_1);
  return;
}



/* ResourceImporterTexture::get_importer_name() const */

ResourceImporterTexture * __thiscall
ResourceImporterTexture::get_importer_name(ResourceImporterTexture *this)

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



/* ResourceImporterTexture::get_save_extension() const */

ResourceImporterTexture * __thiscall
ResourceImporterTexture::get_save_extension(ResourceImporterTexture *this)

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



/* ResourceImporterTexture::get_visible_name() const */

ResourceImporterTexture * __thiscall
ResourceImporterTexture::get_visible_name(ResourceImporterTexture *this)

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



/* ResourceImporterTexture::get_resource_type() const */

ResourceImporterTexture * __thiscall
ResourceImporterTexture::get_resource_type(ResourceImporterTexture *this)

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



/* ResourceImporterTexture::~ResourceImporterTexture() */

void __thiscall ResourceImporterTexture::~ResourceImporterTexture(ResourceImporterTexture *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  bool bVar6;
  
  bVar6 = singleton == this;
  *(undefined ***)this = &PTR__initialize_classv_0010cb80;
  if (bVar6) {
    singleton = (ResourceImporterTexture *)0x0;
  }
  pvVar5 = *(void **)(this + 0x1b0);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1d4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1b8) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x1b8) + lVar4) = 0;
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
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x1b0);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1d4) = 0;
        *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001002ac;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1b8),false);
  }
LAB_001002ac:
  *(undefined ***)this = &PTR__initialize_classv_0010c8c0;
  Object::~Object((Object *)this);
  return;
}



/* ResourceImporterTexture::~ResourceImporterTexture() */

void __thiscall ResourceImporterTexture::~ResourceImporterTexture(ResourceImporterTexture *this)

{
  ~ResourceImporterTexture(this);
  operator_delete(this,0x1d8);
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



/* List<String, DefaultAllocator>::push_back(String const&) [clone .isra.0] */

void __thiscall
List<String,DefaultAllocator>::push_back(List<String,DefaultAllocator> *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar3) [16];
  
  if (*(long *)this == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)param_1);
  }
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar1;
  *(long *)(this_00 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)this_00;
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



/* List<ResourceImporter::ImportOption, DefaultAllocator>::push_back(ResourceImporter::ImportOption
   const&) [clone .isra.0] */

void __thiscall
List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
          (List<ResourceImporter::ImportOption,DefaultAllocator> *this,ImportOption *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 (*pauVar5) [16];
  
  if (*(long *)this == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
  lVar3 = *(long *)(param_1 + 8);
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  puVar4[0xc] = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *puVar4 = *(undefined4 *)param_1;
  if (lVar3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)(param_1 + 0x10));
  puVar4[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar4 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar4[10] = *(undefined4 *)(param_1 + 0x28);
  Variant::operator=((Variant *)(puVar4 + 0xc),(Variant *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar4 + 0x16) = *(long *)this;
  plVar2 = *(long **)this;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 != 0) {
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    return;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  *plVar2 = (long)puVar4;
  return;
}



/* ResourceImporterTexture::_save_editor_meta(Dictionary const&, String const&) */

void __thiscall
ResourceImporterTexture::_save_editor_meta
          (ResourceImporterTexture *this,Dictionary *param_1,String *param_2)

{
  Variant *pVVar1;
  char cVar2;
  long in_FS_OFFSET;
  Variant *local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_40,(int)param_2,(Error *)0x2);
  pVVar1 = local_40;
  if (local_40 == (Variant *)0x0) {
    _err_print_error("_save_editor_meta","editor/import/resource_importer_texture.cpp",0x1b1,
                     "Condition \"f.is_null()\" is true.",0,0);
  }
  else {
    Variant::Variant((Variant *)local_38,param_1);
    FileAccess::store_var(pVVar1,SUB81((Variant *)local_38,0));
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (((local_40 != (Variant *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler((Object *)local_40), cVar2 != '\0')) {
    (**(code **)(*(long *)local_40 + 0x140))(local_40);
    Memory::free_static(local_40,false);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceImporterTexture::ResourceImporterTexture(bool) */

void __thiscall
ResourceImporterTexture::ResourceImporterTexture(ResourceImporterTexture *this,bool param_1)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010cb80;
  *(undefined4 *)(this + 400) = 1;
  *(undefined8 *)(this + 0x1d0) = 2;
  *(undefined1 (*) [16])(this + 0x1b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  if (param_1) {
    singleton = this;
  }
  CompressedTexture2D::request_3d_callback = _texture_reimport_3d;
  CompressedTexture2D::request_roughness_callback = _texture_reimport_roughness;
  CompressedTexture2D::request_normal_callback = _texture_reimport_normal;
  return;
}



/* ResourceImporterTexture::get_option_visibility(String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) const */

bool __thiscall
ResourceImporterTexture::get_option_visibility
          (ResourceImporterTexture *this,String *param_1,String *param_2,HashMap *param_3)

{
  char cVar1;
  int iVar2;
  Variant *pVVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = String::operator==(param_2,"compress/high_quality");
  if (cVar1 == '\0') {
    cVar1 = String::operator==(param_2,"compress/hdr_compression");
    if (cVar1 == '\0') {
      cVar1 = String::operator==(param_2,"compress/lossy_quality");
      if (cVar1 == '\0') {
        cVar1 = String::operator==(param_2,"compress/hdr_mode");
        if (cVar1 == '\0') {
          cVar1 = String::operator==(param_2,"compress/normal_map");
          if (cVar1 == '\0') {
            cVar1 = String::operator==(param_2,"mipmaps/limit");
            bVar4 = true;
            if (cVar1 != '\0') {
              StringName::StringName((StringName *)&local_28,"mipmaps/generate",false);
              pVVar3 = (Variant *)
                       HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                       ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                     *)param_3,(StringName *)&local_28);
              bVar4 = Variant::operator_cast_to_bool(pVVar3);
              if ((StringName::configured != '\0') && (local_28 != 0)) {
                StringName::unref();
              }
            }
          }
          else {
            StringName::StringName((StringName *)&local_28,"compress/mode",false);
            pVVar3 = (Variant *)
                     HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                     ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                   *)param_3,(StringName *)&local_28);
            iVar2 = Variant::operator_cast_to_int(pVVar3);
            if ((StringName::configured != '\0') && (local_28 != 0)) {
              StringName::unref();
            }
            bVar4 = iVar2 != 0;
          }
        }
        else {
          StringName::StringName((StringName *)&local_28,"compress/mode",false);
          pVVar3 = (Variant *)
                   HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                 *)param_3,(StringName *)&local_28);
          iVar2 = Variant::operator_cast_to_int(pVVar3);
          if ((StringName::configured != '\0') && (local_28 != 0)) {
            StringName::unref();
          }
          bVar4 = 1 < iVar2;
        }
      }
      else {
        StringName::StringName((StringName *)&local_28,"compress/mode",false);
        pVVar3 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,(StringName *)&local_28);
        iVar2 = Variant::operator_cast_to_int(pVVar3);
        if ((StringName::configured != '\0') && (local_28 != 0)) {
          StringName::unref();
        }
        bVar4 = iVar2 == 1;
      }
      goto LAB_00100912;
    }
  }
  StringName::StringName((StringName *)&local_28,"compress/mode",false);
  pVVar3 = (Variant *)
           HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                         *)param_3,(StringName *)&local_28);
  iVar2 = Variant::operator_cast_to_int(pVVar3);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  bVar4 = iVar2 == 2;
LAB_00100912:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterTexture::get_preset_name(int) const */

String * ResourceImporterTexture::get_preset_name(int param_1)

{
  long *plVar1;
  char *__s;
  long lVar2;
  size_t sVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_40 = 0;
  local_48 = "";
  String::parse_latin1((StrRange *)&local_50);
  local_58 = 0;
  __s = *(char **)(get_preset_name(int)::preset_names + (long)in_EDX * 8);
  sVar3 = 0;
  if (__s != (char *)0x0) {
    sVar3 = strlen(__s);
  }
  local_48 = __s;
  local_40 = sVar3;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)CONCAT44(in_register_0000003c,param_1),(String *)&local_58);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (String *)CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterTexture::get_import_settings_string() const */

ResourceImporterTexture * __thiscall
ResourceImporterTexture::get_import_settings_string(ResourceImporterTexture *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  size_t sVar4;
  char *pcVar5;
  undefined **ppuVar6;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  pcVar5 = compression_formats;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  if (pcVar5 != (undefined *)0x0) {
    ppuVar6 = &compression_formats;
    do {
      local_70 = 0;
      local_60 = strlen(pcVar5);
      local_68 = pcVar5;
      String::parse_latin1((StrRange *)&local_70);
      operator+((char *)&local_78,(String *)"rendering/textures/vram_compression/import_");
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
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_68,(String *)&local_78,false);
      ProjectSettings::get_setting_with_override((StringName *)local_58);
      bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      if (bVar3) {
        local_70 = 0;
        pcVar5 = *ppuVar6;
        sVar4 = 0;
        if (pcVar5 != (char *)0x0) {
          sVar4 = strlen(pcVar5);
        }
        local_68 = pcVar5;
        local_60 = sVar4;
        String::parse_latin1((StrRange *)&local_70);
        String::operator+=((String *)this,(String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      }
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
      pcVar5 = ppuVar6[1];
      ppuVar6 = ppuVar6 + 1;
    } while (pcVar5 != (char *)0x0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterTexture::_load_editor_meta(String const&) const */

String * ResourceImporterTexture::_load_editor_meta(String *param_1)

{
  char cVar1;
  CowData *in_RDX;
  long in_FS_OFFSET;
  Object *local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_70,(int)in_RDX,(Error *)0x1);
  if (local_70 == (Object *)0x0) {
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,in_RDX);
    local_58 = 
    "Missing required editor-specific import metadata for a texture (please reimport it using the \'Import\' tab): \'%s\'"
    ;
    local_68 = 0;
    local_50 = 0x70;
    String::parse_latin1((StrRange *)&local_68);
    vformat<String>((CowData<char32_t> *)&local_58,(StrRange *)&local_68,
                    (CowData<char32_t> *)&local_60);
    _err_print_error("_load_editor_meta","editor/import/resource_importer_texture.cpp",0x1b8,
                     "Condition \"f.is_null()\" is true. Returning: Dictionary()",
                     (CowData<char32_t> *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    Dictionary::Dictionary((Dictionary *)param_1);
  }
  else {
    FileAccess::get_var(SUB81(local_48,0));
    Variant::operator_cast_to_Dictionary((Variant *)param_1);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_70 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_70);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_70 + 0x140))(local_70);
        Memory::free_static(local_70,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterTexture::_texture_reimport_roughness(Ref<CompressedTexture2D> const&, String
   const&, RenderingServer::TextureDetectRoughnessChannel) */

void ResourceImporterTexture::_texture_reimport_roughness
               (long *param_1,CowData *param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  uint uVar13;
  pthread_mutex_t *__mutex;
  undefined4 *puVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  long local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_texture_reimport_roughness","editor/import/resource_importer_texture.cpp",
                       0x2d,"Condition \"p_tex.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    __mutex = (pthread_mutex_t *)(singleton + 0x180);
    iVar12 = pthread_mutex_lock(__mutex);
    if (iVar12 == 0) {
      Resource::get_path();
      StringName::StringName((StringName *)&local_60,(String *)local_58,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      lVar16 = singleton;
      if ((*(long *)(singleton + 0x1b0) != 0) && (*(int *)(singleton + 0x1d4) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(singleton + 0x1d0) * 4);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(singleton + 0x1d0) * 8);
        if (local_60 == 0) {
          uVar13 = StringName::get_empty_hash();
        }
        else {
          uVar13 = *(uint *)(local_60 + 0x20);
        }
        uVar19 = CONCAT44(0,uVar1);
        lVar3 = *(long *)(lVar16 + 0x1b8);
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar13 * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar19;
        lVar17 = SUB168(auVar4 * auVar8,8);
        uVar18 = *(uint *)(lVar3 + lVar17 * 4);
        iVar12 = SUB164(auVar4 * auVar8,8);
        if (uVar18 != 0) {
          uVar20 = 0;
          do {
            if ((uVar18 == uVar13) &&
               (*(long *)(*(long *)(*(long *)(lVar16 + 0x1b0) + lVar17 * 8) + 0x10) == local_60))
            goto LAB_00101181;
            uVar20 = uVar20 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar12 + 1) * lVar2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar19;
            lVar17 = SUB168(auVar5 * auVar9,8);
            uVar18 = *(uint *)(lVar3 + lVar17 * 4);
            iVar12 = SUB164(auVar5 * auVar9,8);
          } while ((uVar18 != 0) &&
                  (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar18 * lVar2, auVar10._8_8_ = 0,
                  auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
                  auVar7._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar6 * auVar10,8)) * lVar2,
                  auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar20 <= SUB164(auVar7 * auVar11,8)));
        }
      }
      local_58[0] = 0;
      local_48 = 0;
      local_50 = 0;
      puVar14 = (undefined4 *)
                HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                ::operator[]((HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                              *)(singleton + 0x1a8),(StringName *)&local_60);
      *puVar14 = 0;
      if (*(long *)(puVar14 + 2) != 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(puVar14 + 2));
        *(undefined8 *)(puVar14 + 2) = 0;
      }
      puVar14[4] = 0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00101181:
      puVar15 = (uint *)HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                        ::operator[]((HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                                      *)(singleton + 0x1a8),(StringName *)&local_60);
      *puVar15 = *puVar15 | 2;
      lVar16 = HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
               ::operator[]((HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                             *)(singleton + 0x1a8),(StringName *)&local_60);
      *(undefined4 *)(lVar16 + 0x10) = param_3;
      lVar16 = HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
               ::operator[]((HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                             *)(singleton + 0x1a8),(StringName *)&local_60);
      if (*(long *)(lVar16 + 8) != *(long *)param_2) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(lVar16 + 8),param_2);
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pthread_mutex_unlock(__mutex);
        return;
      }
    }
    else {
      std::__throw_system_error(iVar12);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterTexture::_texture_reimport_normal(Ref<CompressedTexture2D> const&) */

void ResourceImporterTexture::_texture_reimport_normal(Ref *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  int iVar13;
  uint uVar14;
  pthread_mutex_t *__mutex;
  undefined4 *puVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  long local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_texture_reimport_normal","editor/import/resource_importer_texture.cpp",0x49
                       ,"Condition \"p_tex.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    __mutex = (pthread_mutex_t *)(singleton + 0x180);
    iVar13 = pthread_mutex_lock(__mutex);
    if (iVar13 == 0) {
      Resource::get_path();
      StringName::StringName((StringName *)&local_60,(String *)local_58,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      lVar12 = singleton;
      if ((*(long *)(singleton + 0x1b0) != 0) && (*(int *)(singleton + 0x1d4) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(singleton + 0x1d0) * 4);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(singleton + 0x1d0) * 8);
        if (local_60 == 0) {
          uVar14 = StringName::get_empty_hash();
        }
        else {
          uVar14 = *(uint *)(local_60 + 0x20);
        }
        uVar19 = CONCAT44(0,uVar1);
        lVar3 = *(long *)(lVar12 + 0x1b8);
        if (uVar14 == 0) {
          uVar14 = 1;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar14 * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar19;
        lVar17 = SUB168(auVar4 * auVar8,8);
        uVar18 = *(uint *)(lVar3 + lVar17 * 4);
        iVar13 = SUB164(auVar4 * auVar8,8);
        if (uVar18 != 0) {
          uVar20 = 0;
          do {
            if ((uVar18 == uVar14) &&
               (*(long *)(*(long *)(*(long *)(lVar12 + 0x1b0) + lVar17 * 8) + 0x10) == local_60))
            goto LAB_0010147a;
            uVar20 = uVar20 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar13 + 1) * lVar2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar19;
            lVar17 = SUB168(auVar5 * auVar9,8);
            uVar18 = *(uint *)(lVar3 + lVar17 * 4);
            iVar13 = SUB164(auVar5 * auVar9,8);
          } while ((uVar18 != 0) &&
                  (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar18 * lVar2, auVar10._8_8_ = 0,
                  auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
                  auVar7._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar6 * auVar10,8)) * lVar2,
                  auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar20 <= SUB164(auVar7 * auVar11,8)));
        }
      }
      local_58[0] = 0;
      local_48 = 0;
      local_50 = 0;
      puVar15 = (undefined4 *)
                HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                ::operator[]((HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                              *)(singleton + 0x1a8),(StringName *)&local_60);
      *puVar15 = 0;
      if (*(long *)(puVar15 + 2) != 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(puVar15 + 2));
        *(undefined8 *)(puVar15 + 2) = 0;
      }
      puVar15[4] = 0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010147a:
      puVar16 = (uint *)HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                        ::operator[]((HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                                      *)(singleton + 0x1a8),(StringName *)&local_60);
      *puVar16 = *puVar16 | 4;
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pthread_mutex_unlock(__mutex);
        return;
      }
    }
    else {
      std::__throw_system_error(iVar13);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterTexture::_texture_reimport_3d(Ref<CompressedTexture2D> const&) */

void ResourceImporterTexture::_texture_reimport_3d(Ref *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  int iVar13;
  uint uVar14;
  pthread_mutex_t *__mutex;
  undefined4 *puVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  long local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_texture_reimport_3d","editor/import/resource_importer_texture.cpp",0x3c,
                       "Condition \"p_tex.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    __mutex = (pthread_mutex_t *)(singleton + 0x180);
    iVar13 = pthread_mutex_lock(__mutex);
    if (iVar13 == 0) {
      Resource::get_path();
      StringName::StringName((StringName *)&local_60,(String *)local_58,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      lVar12 = singleton;
      if ((*(long *)(singleton + 0x1b0) != 0) && (*(int *)(singleton + 0x1d4) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(singleton + 0x1d0) * 4);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(singleton + 0x1d0) * 8);
        if (local_60 == 0) {
          uVar14 = StringName::get_empty_hash();
        }
        else {
          uVar14 = *(uint *)(local_60 + 0x20);
        }
        uVar19 = CONCAT44(0,uVar1);
        lVar3 = *(long *)(lVar12 + 0x1b8);
        if (uVar14 == 0) {
          uVar14 = 1;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar14 * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar19;
        lVar17 = SUB168(auVar4 * auVar8,8);
        uVar18 = *(uint *)(lVar3 + lVar17 * 4);
        iVar13 = SUB164(auVar4 * auVar8,8);
        if (uVar18 != 0) {
          uVar20 = 0;
          do {
            if ((uVar18 == uVar14) &&
               (*(long *)(*(long *)(*(long *)(lVar12 + 0x1b0) + lVar17 * 8) + 0x10) == local_60))
            goto LAB_0010172a;
            uVar20 = uVar20 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar13 + 1) * lVar2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar19;
            lVar17 = SUB168(auVar5 * auVar9,8);
            uVar18 = *(uint *)(lVar3 + lVar17 * 4);
            iVar13 = SUB164(auVar5 * auVar9,8);
          } while ((uVar18 != 0) &&
                  (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar18 * lVar2, auVar10._8_8_ = 0,
                  auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
                  auVar7._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar6 * auVar10,8)) * lVar2,
                  auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar20 <= SUB164(auVar7 * auVar11,8)));
        }
      }
      local_58[0] = 0;
      local_48 = 0;
      local_50 = 0;
      puVar15 = (undefined4 *)
                HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                ::operator[]((HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                              *)(singleton + 0x1a8),(StringName *)&local_60);
      *puVar15 = 0;
      if (*(long *)(puVar15 + 2) != 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(puVar15 + 2));
        *(undefined8 *)(puVar15 + 2) = 0;
      }
      puVar15[4] = 0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010172a:
      puVar16 = (uint *)HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                        ::operator[]((HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
                                      *)(singleton + 0x1a8),(StringName *)&local_60);
      *puVar16 = *puVar16 | 1;
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pthread_mutex_unlock(__mutex);
        return;
      }
    }
    else {
      std::__throw_system_error(iVar13);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterTexture::get_import_options(String const&, List<ResourceImporter::ImportOption,
   DefaultAllocator>*, int) const */

void __thiscall
ResourceImporterTexture::get_import_options
          (ResourceImporterTexture *this,String *param_1,List *param_2,int param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  int local_a8 [8];
  PropertyInfo local_88 [48];
  Variant local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_a8,(uint)(param_3 == 2) * 2);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1
            ((String *)&local_e8,"Lossless,Lossy,VRAM Compressed,VRAM Uncompressed,Basis Universal")
  ;
  local_f0 = 0;
  local_d8 = "compress/mode";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_f0,2,(String *)&local_e8,0x4006,
             &local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,false);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"compress/high_quality");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,_LC47);
  local_d8 = "0,1,0.01";
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_d8 = "compress/lossy_quality";
  local_d0 = 0x16;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(StrRange *)&local_f0,1,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,1);
  local_d8 = "Disabled,Opaque Only,Always";
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_d8 = "compress/hdr_compression";
  local_d0 = 0x18;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_f0,2,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0);
  local_d8 = "Detect,Enable,Disabled";
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0x16;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_d8 = "compress/normal_map";
  local_d0 = 0x13;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_f0,2,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"sRGB Friendly,Optimized");
  local_f0 = 0;
  local_d8 = "compress/channel_pack";
  local_d0 = 0x15;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_f0,2,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,param_3 == 2);
  local_d8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_d8 = "mipmaps/generate";
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,-1);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"-1,256");
  local_f0 = 0;
  local_d8 = "mipmaps/limit";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_f0,1,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"Detect,Disabled,Red,Green,Blue,Alpha,Gray");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"roughness/mode");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_f0,2,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,"");
  local_d8 = "*.bmp,*.dds,*.exr,*.jpeg,*.jpg,*.hdr,*.png,*.svg,*.tga,*.webp";
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0x3d;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"roughness/src_normal");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,4,(StrRange *)&local_f0,0xd,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,param_3 != 2);
  local_d8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_d8 = "process/fix_alpha_border";
  local_d0 = 0x18;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,false);
  local_d8 = "";
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_d8 = "process/premult_alpha";
  local_d0 = 0x15;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,false);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  local_d8 = "process/normal_map_invert_y";
  local_d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,false);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"process/hdr_as_srgb");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,false);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  local_d8 = "process/hdr_clamp_exposure";
  local_d0 = 0x1a;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0);
  local_d8 = "0,16383,1";
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"process/size_limit");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_f0,1,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,(uint)(param_3 == 0));
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"Disabled,VRAM Compressed,Basis Universal");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"detect_3d/compress_to");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_f0,2,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((*(long *)param_1 != 0) && (1 < *(uint *)(*(long *)param_1 + -8))) {
    String::get_extension();
    cVar1 = String::operator==((String *)&local_d8,"svg");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    if (cVar1 == '\0') goto LAB_00102b1e;
  }
  Variant::Variant((Variant *)local_a8,_LC68);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"0.001,100,0.001");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"svg/scale");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,3,(StrRange *)&local_f0,1,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,false);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"editor/scale_with_editor_scale");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,false);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"editor/convert_colors_with_editor_theme");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)&local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00102b1e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceImporterTexture::are_import_settings_valid(String const&, Dictionary const&) const */

uint __thiscall
ResourceImporterTexture::are_import_settings_valid
          (ResourceImporterTexture *this,String *param_1,Dictionary *param_2)

{
  size_t sVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  Variant *pVVar6;
  String *pSVar7;
  undefined **ppuVar8;
  char *__s;
  long lVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  CowData<char32_t> local_a8 [8];
  long local_a0;
  CowData<char32_t> local_98 [8];
  size_t local_90;
  char *local_88;
  size_t local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,"has_editor_variant");
  cVar2 = Dictionary::has((Variant *)param_2);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar2 == '\0') {
LAB_00102e60:
    Variant::Variant((Variant *)local_58,"vram_texture");
    uVar5 = Dictionary::has((Variant *)param_2);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((char)uVar5 != '\0') {
      Variant::Variant((Variant *)local_58,"vram_texture");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)param_2);
      bVar3 = Variant::operator_cast_to_bool(pVVar6);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (bVar3) {
        local_90 = 0;
        Variant::Variant((Variant *)local_58,"imported_formats");
        cVar2 = Dictionary::has((Variant *)param_2);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar2 != '\0') {
          Variant::Variant((Variant *)local_58,"imported_formats");
          Dictionary::operator[]((Variant *)param_2);
          Variant::operator_cast_to_Vector((Variant *)&local_88);
          if (local_80 != 0) {
            CowData<String>::_unref((CowData<String> *)&local_90);
            local_90 = local_80;
            local_80 = 0;
          }
          CowData<String>::_unref((CowData<String> *)&local_80);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if (compression_formats != (undefined *)0x0) {
          ppuVar8 = &compression_formats;
          __s = compression_formats;
          do {
            local_a0 = 0;
            local_80 = strlen(__s);
            local_88 = __s;
            String::parse_latin1((StrRange *)&local_a0);
            operator+((char *)local_a8,(String *)"rendering/textures/vram_compression/import_");
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            pSVar7 = (String *)ProjectSettings::get_singleton();
            cVar2 = ProjectSettings::has_setting(pSVar7);
            if (cVar2 == '\0') {
              operator+((char *)&local_88,(String *)"Setting for imported format not found: ");
              _err_print_error("are_import_settings_valid",
                               "editor/import/resource_importer_texture.cpp",0x345,
                               (CowData<char32_t> *)&local_88,0,1);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            }
            else {
              ProjectSettings::get_singleton();
              StringName::StringName((StringName *)&local_a0,(String *)local_a8,false);
              ProjectSettings::get_setting_with_override((StringName *)local_58);
              bVar4 = Variant::operator_cast_to_bool((Variant *)local_58);
              if (bVar4) {
                local_88 = (char *)0x0;
                String::parse_latin1((String *)&local_88,*ppuVar8);
                sVar1 = local_90;
                if (((local_90 != 0) && (*(long *)(local_90 - 8) != 0)) &&
                   (0 < *(long *)(local_90 - 8))) {
                  lVar9 = 0;
                  do {
                    cVar2 = String::operator==((String *)(sVar1 + lVar9 * 8),(String *)&local_88);
                    if (cVar2 != '\0') {
                      bVar4 = false;
                      break;
                    }
                    lVar9 = lVar9 + 1;
                  } while (lVar9 < *(long *)(sVar1 - 8));
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_a0 != 0)) {
                  StringName::unref();
                }
                if (bVar4 != false) {
                  uVar5 = 0;
                  CowData<char32_t>::_unref(local_a8);
                  goto LAB_001031cf;
                }
              }
              else {
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_a0 != 0)) {
                  StringName::unref();
                }
              }
            }
            ppuVar8 = ppuVar8 + 1;
            CowData<char32_t>::_unref(local_a8);
            __s = *ppuVar8;
          } while (__s != (char *)0x0);
        }
        uVar5 = (uint)bVar3;
LAB_001031cf:
        CowData<String>::_unref((CowData<String> *)&local_90);
      }
      goto LAB_00102d6d;
    }
  }
  else {
    ResourceFormatImporter::get_internal_resource_path((String *)&local_a0);
    cVar2 = FileAccess::exists((String *)&local_a0);
    if (cVar2 == '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
    else {
      String::replace((char *)local_98,(char *)&local_a0);
      _load_editor_meta((String *)&local_88);
      Variant::Variant((Variant *)local_78,"editor_scale");
      cVar2 = Dictionary::has((Variant *)&local_88);
      if (cVar2 == '\0') {
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
LAB_00102e0e:
        Variant::Variant((Variant *)local_78,"editor_dark_theme");
        cVar2 = Dictionary::has((Variant *)&local_88);
        if (cVar2 == '\0') {
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          Variant::Variant((Variant *)local_58,"editor_dark_theme");
          pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
          bVar3 = Variant::operator_cast_to_bool(pVVar6);
          cVar2 = EditorThemeManager::is_dark_theme();
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (bVar3 != (bool)cVar2) goto LAB_001030f2;
        }
        Dictionary::~Dictionary((Dictionary *)&local_88);
        CowData<char32_t>::_unref(local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        goto LAB_00102e60;
      }
      Variant::Variant((Variant *)local_58,"editor_scale");
      pVVar6 = (Variant *)Dictionary::operator[]((Variant *)&local_88);
      fVar10 = Variant::operator_cast_to_float(pVVar6);
      fVar11 = (float)EditorScale::get_scale();
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (fVar10 == fVar11) goto LAB_00102e0e;
LAB_001030f2:
      Dictionary::~Dictionary((Dictionary *)&local_88);
      CowData<char32_t>::_unref(local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
  }
  uVar5 = 0;
LAB_00102d6d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
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



/* ResourceImporterTexture::update_imports() */

void ResourceImporterTexture::update_imports(void)

{
  CowData<char32_t> *this;
  void *pvVar1;
  Image *pIVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  RefCounted *this_00;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  Image *in_RSI;
  long in_RDI;
  RefCounted *pRVar12;
  undefined8 *puVar13;
  long *plVar14;
  long in_FS_OFFSET;
  byte bVar15;
  String *local_140;
  CowData<char32_t> *local_118;
  CowData<char32_t> *local_100;
  String local_d8 [8];
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0 [2];
  long local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  bVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = EditorFileSystem::is_scanning();
  if ((cVar4 != '\0') || (EditorFileSystem::singleton[0x452] != '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00104964;
  }
  uVar6 = pthread_mutex_lock((pthread_mutex_t *)(in_RDI + 0x180));
  if (uVar6 != 0) {
    puVar13 = (undefined8 *)(ulong)uVar6;
    std::__throw_system_error(uVar6);
    pIVar2 = (Image *)*puVar13;
    if (pIVar2 != in_RSI) {
      *puVar13 = in_RSI;
      if ((in_RSI != (Image *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *puVar13 = 0;
      }
      if ((pIVar2 != (Image *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
        memdelete<Image>(pIVar2);
        return;
      }
    }
    return;
  }
  local_90 = 0;
  if (*(int *)(in_RDI + 0x1d4) == 0) {
    CowData<String>::_unref((CowData<String> *)&local_90);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00104964;
    goto LAB_00104142;
  }
  plVar14 = *(long **)(in_RDI + 0x1c0);
  if (plVar14 == (long *)0x0) {
    if (*(long *)(in_RDI + 0x1b0) != 0) goto LAB_00104056;
  }
  else {
    do {
      while( true ) {
        this_00 = (RefCounted *)operator_new(0x1b0,"");
        pRVar12 = this_00;
        for (lVar10 = 0x36; lVar10 != 0; lVar10 = lVar10 + -1) {
          *(undefined8 *)pRVar12 = 0;
          pRVar12 = pRVar12 + (ulong)bVar15 * -0x10 + 8;
        }
        RefCounted::RefCounted(this_00);
        *(undefined ***)this_00 = &PTR__initialize_classv_0010ca20;
        uVar8 = _LC11;
        *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
        *(undefined8 *)(this_00 + 0x1a8) = uVar8;
        *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
        postinitialize_handler((Object *)this_00);
        cVar4 = RefCounted::init_ref();
        local_140 = (String *)0x0;
        if (cVar4 != '\0') {
          cVar4 = RefCounted::reference();
          local_140 = (String *)(RefCounted *)0x0;
          if (cVar4 != '\0') {
            local_140 = (String *)this_00;
          }
          cVar4 = RefCounted::unreference();
          if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)this_00), cVar4 != '\0')) {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
            Memory::free_static(this_00,false);
          }
        }
        local_a0[0] = 0;
        local_88 = ".import";
        local_80 = 7;
        String::parse_latin1((StrRange *)local_a0);
        lVar10 = plVar14[2];
        if (lVar10 == 0) {
          local_88 = (char *)0x0;
        }
        else {
          local_88 = (char *)0x0;
          if (*(char **)(lVar10 + 8) == (char *)0x0) {
            if (*(long *)(lVar10 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(lVar10 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_88,*(char **)(lVar10 + 8));
          }
        }
        String::operator+(local_d8,(String *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        iVar7 = ConfigFile::load(local_140);
        if (iVar7 == 0) break;
        _err_print_error("update_imports","editor/import/resource_importer_texture.cpp",0x6e,
                         "Condition \"err != OK\" is true. Continuing.",0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)local_140), cVar4 != '\0')) {
          lVar10 = *(long *)local_140;
          goto LAB_0010400e;
        }
LAB_001036b0:
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) goto LAB_00104030;
      }
      uVar6 = *(uint *)(plVar14 + 3);
      if ((uVar6 & 4) == 0) {
LAB_00103674:
        bVar3 = false;
      }
      else {
        local_78 = 0;
        local_70 = (undefined1  [16])0x0;
        local_88 = (char *)0x0;
        String::parse_latin1((String *)&local_88,"compress/normal_map");
        local_a0[0] = 0;
        String::parse_latin1((String *)local_a0,"params");
        ConfigFile::get_value((String *)local_58,local_140,(Variant *)local_a0);
        iVar7 = Variant::operator_cast_to_int((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        if (iVar7 != 0) {
          uVar6 = *(uint *)(plVar14 + 3);
          goto LAB_00103674;
        }
        lVar10 = plVar14[2];
        if (lVar10 == 0) {
          local_a8 = 0;
        }
        else if (*(char **)(lVar10 + 8) == (char *)0x0) {
          local_a8 = 0;
          if (*(long *)(lVar10 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(lVar10 + 0x10));
          }
        }
        else {
          local_a8 = 0;
          String::parse_latin1((String *)&local_a8,*(char **)(lVar10 + 8));
        }
        local_b8 = 0;
        local_88 = "";
        local_80 = 0;
        String::parse_latin1((StrRange *)&local_b8);
        local_c0 = 0;
        local_88 = 
        "%s: Texture detected as used as a normal map in 3D. Enabling red-green texture compression to reduce memory usage (blue channel is discarded)."
        ;
        local_80 = 0x8e;
        String::parse_latin1((StrRange *)&local_c0);
        TTR((String *)&local_b0,(String *)&local_c0);
        vformat<String>((CowData<char32_t> *)local_a0,(String *)&local_b0,
                        (CowData<char32_t> *)&local_a8);
        uVar8 = EditorToaster::get_singleton();
        local_88 = (char *)0x0;
        EditorToaster::popup_str(uVar8,(CowData<char32_t> *)local_a0,0,(String *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        Variant::Variant((Variant *)local_58,(String *)local_a0);
        stringify_variants((Variant *)&local_88);
        __print_line((String *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        Variant::Variant((Variant *)local_58,1);
        local_88 = "compress/normal_map";
        local_a0[0] = 0;
        local_80 = 0x13;
        String::parse_latin1((StrRange *)local_a0);
        local_a8 = 0;
        local_88 = "params";
        local_80 = 6;
        String::parse_latin1((StrRange *)&local_a8);
        ConfigFile::set_value(local_140,(String *)&local_a8,(Variant *)local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        bVar3 = true;
        uVar6 = *(uint *)(plVar14 + 3);
      }
      if ((uVar6 & 2) == 0) {
LAB_00103681:
        if ((uVar6 & 1) != 0) {
LAB_00103b68:
          local_78 = 0;
          local_70 = (undefined1  [16])0x0;
          local_88 = (char *)0x0;
          String::parse_latin1((String *)&local_88,"detect_3d/compress_to");
          local_a0[0] = 0;
          String::parse_latin1((String *)local_a0,"params");
          ConfigFile::get_value((String *)local_58,local_140,(Variant *)local_a0);
          bVar5 = Variant::operator_cast_to_bool((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
          if (bVar5) {
            local_78 = 0;
            local_70 = (undefined1  [16])0x0;
            local_88 = (char *)0x0;
            String::parse_latin1((String *)&local_88,"detect_3d/compress_to");
            local_a0[0] = 0;
            String::parse_latin1((String *)local_a0,"params");
            ConfigFile::get_value((String *)local_58,local_140,(Variant *)local_a0);
            iVar7 = Variant::operator_cast_to_int((Variant *)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            if (Variant::needs_deinit[(int)local_78] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_58,0);
            local_88 = (char *)0x0;
            String::parse_latin1((String *)&local_88,"detect_3d/compress_to");
            local_a0[0] = 0;
            String::parse_latin1((String *)local_a0,"params");
            ConfigFile::set_value(local_140,(String *)local_a0,(Variant *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_d0 = 0;
            if (iVar7 == 1) {
              Variant::Variant((Variant *)local_58,2);
              local_88 = (char *)0x0;
              String::parse_latin1((String *)&local_88,"compress/mode");
              local_a0[0] = 0;
              String::parse_latin1((String *)local_a0,"params");
              ConfigFile::set_value(local_140,(String *)local_a0,(Variant *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              String::parse_latin1((String *)&local_d0,"VRAM Compressed (S3TC/ETC/BPTC)");
LAB_00104771:
              local_100 = (CowData<char32_t> *)&local_d0;
              local_a8 = 0;
              if (local_d0 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_100);
              }
            }
            else {
              if (iVar7 == 2) {
                Variant::Variant((Variant *)local_58,4);
                local_88 = (char *)0x0;
                String::parse_latin1((String *)&local_88,"compress/mode");
                local_a0[0] = 0;
                String::parse_latin1((String *)local_a0,"params");
                ConfigFile::set_value(local_140,(String *)local_a0,(Variant *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                String::parse_latin1((String *)&local_d0,"Basis Universal");
                goto LAB_00104771;
              }
              local_a8 = 0;
            }
            local_100 = (CowData<char32_t> *)&local_d0;
            lVar10 = plVar14[2];
            if (lVar10 == 0) {
              local_b0 = 0;
            }
            else if (*(char **)(lVar10 + 8) == (char *)0x0) {
              local_b0 = 0;
              if (*(long *)(lVar10 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar10 + 0x10));
              }
            }
            else {
              local_b0 = 0;
              String::parse_latin1((String *)&local_b0,*(char **)(lVar10 + 8));
            }
            local_118 = (CowData<char32_t> *)&local_b0;
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"");
            local_c8 = 0;
            String::parse_latin1
                      ((String *)&local_c8,
                       "%s: Texture detected as used in 3D. Enabling mipmap generation and setting the texture compression mode to %s."
                      );
            TTR((String *)&local_b8,(String *)&local_c8);
            vformat<String,String>
                      ((CowData<char32_t> *)local_a0,(String *)&local_b8,local_118,
                       (CowData<char32_t> *)&local_a8);
            uVar8 = EditorToaster::get_singleton();
            local_88 = (char *)0x0;
            EditorToaster::popup_str(uVar8,(CowData<char32_t> *)local_a0,0,(String *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            Variant::Variant((Variant *)local_58,(String *)local_a0);
            stringify_variants((Variant *)&local_88);
            __print_line((String *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref(local_118);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            Variant::Variant((Variant *)local_58,true);
            local_88 = (char *)0x0;
            String::parse_latin1((String *)&local_88,"mipmaps/generate");
            local_a0[0] = 0;
            String::parse_latin1((String *)local_a0,"params");
            ConfigFile::set_value(local_140,(String *)local_a0,(Variant *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref(local_100);
            goto LAB_00103f1e;
          }
        }
        if (bVar3) goto LAB_00103f1e;
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        cVar4 = RefCounted::unreference();
      }
      else {
        local_78 = 0;
        local_70 = (undefined1  [16])0x0;
        local_88 = (char *)0x0;
        String::parse_latin1((String *)&local_88,"roughness/mode");
        local_a0[0] = 0;
        String::parse_latin1((String *)local_a0,"params");
        ConfigFile::get_value((String *)local_58,local_140,(Variant *)local_a0);
        iVar7 = Variant::operator_cast_to_int((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        if (iVar7 != 0) {
          uVar6 = *(uint *)(plVar14 + 3);
          goto LAB_00103681;
        }
        local_a8 = 0;
        if (plVar14[4] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(plVar14 + 4));
        }
        lVar10 = plVar14[2];
        if (lVar10 == 0) {
          local_b0 = 0;
        }
        else if (*(char **)(lVar10 + 8) == (char *)0x0) {
          local_b0 = 0;
          if (*(long *)(lVar10 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(lVar10 + 0x10));
          }
        }
        else {
          local_b0 = 0;
          String::parse_latin1((String *)&local_b0,*(char **)(lVar10 + 8));
        }
        local_118 = (CowData<char32_t> *)&local_b0;
        local_c0 = 0;
        local_88 = "";
        local_80 = 0;
        String::parse_latin1((StrRange *)&local_c0);
        local_c8 = 0;
        local_88 = 
        "%s: Texture detected as used as a roughness map in 3D. Enabling roughness limiter based on the detected associated normal map at %s."
        ;
        local_80 = 0x84;
        String::parse_latin1((StrRange *)&local_c8);
        TTR((String *)&local_b8,(String *)&local_c8);
        vformat<String,String>
                  ((CowData<char32_t> *)local_a0,(String *)&local_b8,local_118,
                   (CowData<char32_t> *)&local_a8);
        uVar8 = EditorToaster::get_singleton();
        local_88 = (char *)0x0;
        EditorToaster::popup_str(uVar8,(CowData<char32_t> *)local_a0,0,(String *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        Variant::Variant((Variant *)local_58,(String *)local_a0);
        stringify_variants((Variant *)&local_88);
        __print_line((String *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref(local_118);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        Variant::Variant((Variant *)local_58,(int)plVar14[5] + 2);
        local_88 = "roughness/mode";
        local_a0[0] = 0;
        local_80 = 0xe;
        String::parse_latin1((StrRange *)local_a0);
        local_a8 = 0;
        local_88 = "params";
        local_80 = 6;
        String::parse_latin1((StrRange *)&local_a8);
        ConfigFile::set_value(local_140,(String *)&local_a8,(Variant *)local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_58,(String *)(plVar14 + 4));
        local_88 = "roughness/src_normal";
        local_a0[0] = 0;
        local_80 = 0x14;
        String::parse_latin1((StrRange *)local_a0);
        local_a8 = 0;
        local_88 = "params";
        local_80 = 6;
        String::parse_latin1((StrRange *)&local_a8);
        ConfigFile::set_value(local_140,(String *)&local_a8,(Variant *)local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((*(byte *)(plVar14 + 3) & 1) != 0) {
          bVar3 = true;
          goto LAB_00103b68;
        }
LAB_00103f1e:
        ConfigFile::save(local_140);
        lVar10 = plVar14[2];
        if (lVar10 == 0) {
          local_88 = (char *)0x0;
          if (local_90 == 0) goto LAB_00104481;
LAB_00103f6b:
          iVar7 = CowData<String>::resize<false>
                            ((CowData<String> *)&local_90,*(long *)(local_90 + -8) + 1);
          if (iVar7 == 0) goto LAB_00103f85;
LAB_001044a0:
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
        else {
          local_88 = (char *)0x0;
          if (*(char **)(lVar10 + 8) == (char *)0x0) {
            if (*(long *)(lVar10 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(lVar10 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_88,*(char **)(lVar10 + 8));
          }
          if (local_90 != 0) goto LAB_00103f6b;
LAB_00104481:
          iVar7 = CowData<String>::resize<false>((CowData<String> *)&local_90,1);
          if (iVar7 != 0) goto LAB_001044a0;
LAB_00103f85:
          if (local_90 == 0) {
            lVar11 = -1;
            lVar10 = 0;
          }
          else {
            lVar10 = *(long *)(local_90 + -8);
            lVar11 = lVar10 + -1;
            if (-1 < lVar11) {
              CowData<String>::_copy_on_write((CowData<String> *)&local_90);
              this = (CowData<char32_t> *)(local_90 + lVar11 * 8);
              if (*(char **)this != local_88) {
                CowData<char32_t>::_ref(this,(CowData *)&local_88);
              }
              goto LAB_00103fd2;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar10,"p_index","size()","",
                     false,false);
        }
LAB_00103fd2:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        cVar4 = RefCounted::unreference();
      }
      if ((cVar4 == '\0') || (cVar4 = predelete_handler((Object *)local_140), cVar4 == '\0'))
      goto LAB_001036b0;
      lVar10 = *(long *)local_140;
LAB_0010400e:
      (**(code **)(lVar10 + 0x140))(local_140);
      Memory::free_static(local_140,false);
      plVar14 = (long *)*plVar14;
    } while (plVar14 != (long *)0x0);
LAB_00104030:
    if ((*(long *)(in_RDI + 0x1b0) != 0) && (*(int *)(in_RDI + 0x1d4) != 0)) {
LAB_00104056:
      lVar10 = 0;
      uVar6 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RDI + 0x1d0) * 4);
      if (uVar6 != 0) {
        do {
          piVar9 = (int *)(*(long *)(in_RDI + 0x1b8) + lVar10);
          if (*piVar9 != 0) {
            *piVar9 = 0;
            pvVar1 = *(void **)(*(long *)(in_RDI + 0x1b0) + lVar10 * 2);
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar1,false);
            *(undefined8 *)(*(long *)(in_RDI + 0x1b0) + lVar10 * 2) = 0;
          }
          lVar10 = lVar10 + 4;
        } while (lVar10 != (ulong)uVar6 << 2);
      }
      *(undefined4 *)(in_RDI + 0x1d4) = 0;
      *(undefined1 (*) [16])(in_RDI + 0x1c0) = (undefined1  [16])0x0;
    }
    if (local_90 != 0) {
      EditorFileSystem::reimport_files(EditorFileSystem::singleton);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00104142:
    pthread_mutex_unlock((pthread_mutex_t *)(in_RDI + 0x180));
    return;
  }
LAB_00104964:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Image>::TEMPNAMEPLACEHOLDERVALUE(Ref<Image> const&) [clone .isra.0] */

void __thiscall Ref<Image>::operator=(Ref<Image> *this,Ref *param_1)

{
  Image *pIVar1;
  char cVar2;
  
  pIVar1 = *(Image **)this;
  if (pIVar1 != (Image *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pIVar1 != (Image *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        memdelete<Image>(pIVar1);
        return;
      }
    }
  }
  return;
}



/* ResourceImporterTexture::save_to_ctex_format(Ref<FileAccess>, Ref<Image> const&,
   ResourceImporterTexture::CompressMode, Image::UsedChannels, Image::CompressMode, float) */

void ResourceImporterTexture::save_to_ctex_format
               (undefined4 param_1,undefined8 *param_2,long *param_3,ulong param_4,
               undefined4 param_5,undefined4 param_6)

{
  Vector *pVVar1;
  Object *pOVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  Image *pIVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long in_FS_OFFSET;
  CowData<unsigned_char> *local_a0;
  char local_91;
  Image *local_80;
  Object *local_78;
  long local_70;
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (4 < (uint)param_4) goto LAB_00104c18;
  switch(param_4 & 0xffffffff) {
  case 0:
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_68,"rendering/textures/lossless_compression/force_png",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    local_91 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (((bool)local_91) || (Image::_webp_mem_loader_func == 0)) {
      if (Variant::needs_deinit[local_58[0]] == '\0') {
        local_91 = StringName::configured;
        if (StringName::configured == '\0') goto LAB_00104e7e;
LAB_0010505d:
        if (local_68 != 0) {
          StringName::unref();
        }
      }
      else {
        Variant::_clear_internal();
        if (StringName::configured != '\0') goto LAB_0010505d;
      }
      plVar12 = (long *)*param_2;
      local_91 = '\0';
      uVar11 = 1;
      pcVar8 = *(code **)(*plVar12 + 0x278);
    }
    else {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      iVar13 = Image::get_width();
      if (iVar13 < 0x4000) {
        iVar13 = Image::get_height();
        plVar12 = (long *)*param_2;
        uVar11 = 1;
        pcVar8 = *(code **)(*plVar12 + 0x278);
        if (iVar13 < 0x4000) {
          local_91 = '\x01';
          uVar11 = 2;
        }
      }
      else {
LAB_00104e7e:
        plVar12 = (long *)*param_2;
        uVar11 = 1;
        pcVar8 = *(code **)(*plVar12 + 0x278);
      }
    }
    (*pcVar8)(plVar12,uVar11);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x270);
    uVar4 = Image::get_width();
    (*pcVar8)(plVar12,uVar4);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x270);
    uVar4 = Image::get_height();
    (*pcVar8)(plVar12,uVar4);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x278);
    uVar5 = Image::get_mipmap_count();
    (*pcVar8)(plVar12,uVar5);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x278);
    uVar5 = Image::get_format();
    (*pcVar8)(plVar12,uVar5);
    for (iVar13 = 0; iVar6 = Image::get_mipmap_count(), iVar13 <= iVar6; iVar13 = iVar13 + 1) {
      local_70 = 0;
      if (local_91 == '\0') {
        pcVar8 = Image::png_packer;
        if (iVar13 != 0) goto LAB_00105130;
LAB_0010521b:
        if ((Image *)*param_3 == (Image *)0x0) {
          local_80 = (Image *)0x0;
        }
        else {
          local_80 = (Image *)*param_3;
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_80 = (Image *)0x0;
          }
        }
      }
      else {
        pcVar8 = Image::webp_lossless_packer;
        if (iVar13 == 0) goto LAB_0010521b;
LAB_00105130:
        Image::get_image_from_mipmap((int)&local_80);
      }
      (*pcVar8)((StringName *)&local_68,&local_80);
      lVar14 = local_60;
      uVar10 = param_4 & 0xffffffff;
      if (local_60 == 0) {
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
        if ((local_80 != (Image *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
        goto LAB_0010529a;
        lVar14 = 0;
        uVar9 = 0;
      }
      else {
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
        lVar14 = local_60;
        local_60 = 0;
        local_70 = lVar14;
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
        if ((local_80 != (Image *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
LAB_0010529a:
          memdelete<Image>(local_80);
        }
        if (lVar14 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(ulong *)(lVar14 + -8);
          uVar10 = uVar9 & 0xffffffff;
        }
      }
      local_a0 = (CowData<unsigned_char> *)&local_70;
      (**(code **)(*(long *)*param_2 + 0x278))((long *)*param_2,uVar10);
      (**(code **)(*(long *)*param_2 + 0x2d0))((long *)*param_2,lVar14,uVar9);
      CowData<unsigned_char>::_unref(local_a0);
    }
    break;
  case 1:
    (**(code **)(*(long *)*param_2 + 0x278))((long *)*param_2,2);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x270);
    uVar4 = Image::get_width();
    (*pcVar8)(plVar12,uVar4);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x270);
    uVar4 = Image::get_height();
    (*pcVar8)(plVar12,uVar4);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x278);
    uVar5 = Image::get_mipmap_count();
    (*pcVar8)(plVar12,uVar5);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x278);
    uVar5 = Image::get_format();
    (*pcVar8)(plVar12,uVar5);
    for (iVar13 = 0; iVar6 = Image::get_mipmap_count(), pcVar8 = Image::webp_lossy_packer,
        iVar13 <= iVar6; iVar13 = iVar13 + 1) {
      if (iVar13 == 0) {
        if (((Object *)*param_3 == (Object *)0x0) ||
           (local_78 = (Object *)*param_3, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
          local_78 = (Object *)0x0;
        }
      }
      else {
        Image::get_image_from_mipmap((int)&local_78);
      }
      (*pcVar8)(param_1,&local_68,&local_78);
      if ((local_78 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0')) {
        if (local_60 == 0) goto LAB_00105030;
LAB_00104f7b:
        uVar10 = *(ulong *)(local_60 + -8);
        uVar9 = uVar10 & 0xffffffff;
      }
      else {
        memdelete<Image>((Image *)local_78);
        if (local_60 != 0) goto LAB_00104f7b;
LAB_00105030:
        uVar10 = 0;
        uVar9 = 0;
      }
      (**(code **)(*(long *)*param_2 + 0x278))((long *)*param_2,uVar9);
      (**(code **)(*(long *)*param_2 + 0x2d0))((long *)*param_2,local_60,uVar10);
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
    }
    break;
  case 2:
    pIVar7 = (Image *)0x0;
    (**(code **)(*(long *)*param_3 + 0x198))(&local_78,(long *)*param_3,0);
    local_80 = (Image *)0x0;
    if (local_78 != (Object *)0x0) {
      pIVar7 = (Image *)__dynamic_cast(local_78,&Object::typeinfo,&Image::typeinfo,0);
      if (pIVar7 != (Image *)0x0) {
        local_68 = 0;
        local_80 = pIVar7;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_80 = (Image *)0x0;
          pIVar7 = (Image *)0x0;
        }
        Ref<Image>::unref((Ref<Image> *)&local_68);
        if (local_78 == (Object *)0x0) goto LAB_00104b50;
      }
      cVar3 = RefCounted::unreference();
      pOVar2 = local_78;
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_78), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
LAB_00104b50:
    Image::compress_from_channels(pIVar7,param_6,param_5,0);
    (**(code **)(*(long *)*param_2 + 0x278))((long *)*param_2,0);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x270);
    uVar4 = Image::get_width();
    (*pcVar8)(plVar12,uVar4);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x270);
    uVar4 = Image::get_height();
    (*pcVar8)(plVar12,uVar4);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x278);
    uVar5 = Image::get_mipmap_count();
    (*pcVar8)(plVar12,uVar5);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x278);
    uVar5 = Image::get_format();
    (*pcVar8)(plVar12,uVar5);
    pVVar1 = (Vector *)*param_2;
    Image::get_data();
    FileAccess::store_buffer(pVVar1);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
    Ref<Image>::unref((Ref<Image> *)&local_80);
    break;
  case 3:
    (**(code **)(*(long *)*param_2 + 0x278))((long *)*param_2,0);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x270);
    uVar4 = Image::get_width();
    (*pcVar8)(plVar12,uVar4);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x270);
    uVar4 = Image::get_height();
    (*pcVar8)(plVar12,uVar4);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x278);
    uVar5 = Image::get_mipmap_count();
    (*pcVar8)(plVar12,uVar5);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x278);
    uVar5 = Image::get_format();
    (*pcVar8)(plVar12,uVar5);
    pVVar1 = (Vector *)*param_2;
    Image::get_data();
    FileAccess::store_buffer(pVVar1);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
    break;
  case 4:
    (**(code **)(*(long *)*param_2 + 0x278))((long *)*param_2,3);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x270);
    uVar4 = Image::get_width();
    (*pcVar8)(plVar12,uVar4);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x270);
    uVar4 = Image::get_height();
    (*pcVar8)(plVar12,uVar4);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x278);
    uVar5 = Image::get_mipmap_count();
    (*pcVar8)(plVar12,uVar5);
    plVar12 = (long *)*param_2;
    pcVar8 = *(code **)(*plVar12 + 0x278);
    uVar5 = Image::get_format();
    (*pcVar8)(plVar12,uVar5);
    (*Image::basis_universal_packer)(&local_68,param_3,param_5);
    if (local_60 == 0) {
      uVar10 = 0;
      uVar9 = 0;
    }
    else {
      uVar10 = *(ulong *)(local_60 + -8);
      uVar9 = uVar10 & 0xffffffff;
    }
    (**(code **)(*(long *)*param_2 + 0x278))((long *)*param_2,uVar9);
    (**(code **)(*(long *)*param_2 + 0x2d0))((long *)*param_2,local_60,uVar10);
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
  }
LAB_00104c18:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceImporterTexture::_save_ctex(Ref<Image> const&, String const&,
   ResourceImporterTexture::CompressMode, float, Image::CompressMode, bool, bool, bool, bool, bool,
   bool, bool, bool, unsigned int, Ref<Image> const&, Image::RoughnessChannel) */

void __thiscall
ResourceImporterTexture::_save_ctex
          (undefined4 param_1_00,undefined8 param_2,undefined8 *param_1,int param_4,uint param_5,
          undefined4 param_6,byte param_7,uint param_8,uint param_9,uint param_10,uint param_11,
          char param_12,undefined1 param_13,char param_14,undefined4 param_15,long *param_16,
          undefined4 param_17)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  Object *pOVar5;
  uint uVar6;
  long in_FS_OFFSET;
  Object *local_58;
  Object *local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_58,param_4,(Error *)0x2);
  if (local_58 == (Object *)0x0) {
    _err_print_error("_save_ctex","editor/import/resource_importer_texture.cpp",0x15e,
                     "Condition \"f.is_null()\" is true.",0,0);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_58);
    goto LAB_001056f7;
  }
  (**(code **)(*(long *)local_58 + 0x268))(local_58,0x47);
  (**(code **)(*(long *)local_58 + 0x268))(local_58,0x53);
  (**(code **)(*(long *)local_58 + 0x268))(local_58,0x54);
  (**(code **)(*(long *)local_58 + 0x268))(local_58,0x32);
  (**(code **)(*(long *)local_58 + 0x278))(local_58,1);
  pOVar5 = local_58;
  pcVar1 = *(code **)(*(long *)local_58 + 0x278);
  uVar3 = Image::get_width();
  (*pcVar1)(pOVar5,uVar3);
  pOVar5 = local_58;
  pcVar1 = *(code **)(*(long *)local_58 + 0x278);
  uVar3 = Image::get_height();
  (*pcVar1)(pOVar5,uVar3);
  (**(code **)(*(long *)local_58 + 0x278))
            (local_58,-(param_10 & 0xff) & 0x8000000 | -(param_11 & 0xff) & 0x4000000 |
                      -(param_9 & 0xff) & 0x1000000 | (param_8 & 0xff) << 0x16 |
                      -(uint)param_7 & 0x800000);
  (**(code **)(*(long *)local_58 + 0x278))(local_58,param_15);
  (**(code **)(*(long *)local_58 + 0x278))(local_58,0);
  (**(code **)(*(long *)local_58 + 0x278))(local_58,0);
  (**(code **)(*(long *)local_58 + 0x278))(local_58,0);
  if ((param_5 < 2) && (iVar4 = Image::get_format(), 7 < iVar4)) {
    uVar6 = 1;
    param_5 = 3;
  }
  else {
    uVar6 = param_5 - 2 & 0xfffffffd;
  }
  (**(code **)(*(long *)*param_1 + 0x198))(&local_48,(long *)*param_1,0);
  local_50 = (Object *)0x0;
  pOVar5 = local_48;
  if (local_48 != (Object *)0x0) {
    pOVar5 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&Image::typeinfo,0);
    if (pOVar5 != (Object *)0x0) {
      local_50 = pOVar5;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_50 = (Object *)0x0;
      }
      pOVar5 = local_50;
      if (local_48 == (Object *)0x0) goto LAB_001055ef;
    }
    cVar2 = RefCounted::unreference();
    pOVar5 = local_50;
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_48), pOVar5 = local_50, cVar2 != '\0'))
    {
      (**(code **)(*(long *)local_48 + 0x140))(local_48);
      Memory::free_static(local_48,false);
      pOVar5 = local_50;
    }
  }
LAB_001055ef:
  if (param_7 == 0) {
    Image::clear_mipmaps();
  }
  else {
    if ((param_14 != '\0') && (uVar6 == 0)) {
      Image::resize_to_po2(pOVar5,0,1);
    }
    cVar2 = Image::has_mipmaps();
    if ((cVar2 != '\x01') || (param_12 != '\0')) {
      Image::generate_mipmaps(SUB81(local_50,0));
    }
  }
  cVar2 = Image::has_mipmaps();
  if ((cVar2 != '\0') && (*param_16 != 0)) {
    Image::generate_mipmap_roughness(local_50,param_17,param_16);
  }
  uVar3 = 5;
  if (uVar6 == 0) {
    if (param_12 != '\0') {
      param_13 = 2;
    }
    uVar3 = Image::detect_used_channels(local_50,param_13);
  }
  pOVar5 = local_58;
  if (local_58 == (Object *)0x0) {
LAB_001056ab:
    local_48 = (Object *)0x0;
    save_to_ctex_format(param_1_00,&local_48,&local_50,param_5,uVar3,param_6);
  }
  else {
    local_48 = local_58;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') goto LAB_001056ab;
    save_to_ctex_format(param_1_00,&local_48,&local_50,param_5,uVar3,param_6);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if ((local_50 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    memdelete<Image>((Image *)local_50);
  }
  if (((local_58 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_58), cVar2 != '\0')) {
    (**(code **)(*(long *)local_58 + 0x140))(local_58);
    Memory::free_static(local_58,false);
  }
LAB_001056f7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceImporterTexture::import(long, String const&, String const&, HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) */

int ResourceImporterTexture::import
              (long param_1,String *param_2,String *param_3,HashMap *param_4,List *param_5,
              List *param_6,Variant *param_7)

{
  bool bVar1;
  code *pcVar2;
  Ref *pRVar3;
  Ref *pRVar4;
  Object *pOVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  undefined4 uVar25;
  Variant *pVVar26;
  Ref<Image> *this;
  Ref<Image> *pRVar27;
  uint uVar28;
  Color *pCVar29;
  long in_FS_OFFSET;
  float fVar30;
  ResourceImporterTexture *pRVar33;
  undefined8 uVar31;
  float in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float fVar32;
  int *in_stack_00000010;
  float local_1b4;
  String *local_1a8;
  Ref<Image> *local_198;
  uint local_150;
  int local_14c;
  byte local_146;
  char local_145;
  Ref<Image> *local_118;
  uint local_f0;
  Variant local_e0 [8];
  Image *local_d8;
  Ref *local_d0;
  Ref *local_c8;
  Array local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  String local_a8 [8];
  undefined8 local_a0;
  Ref *local_98;
  undefined8 local_90;
  undefined8 local_88;
  float fStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [2] [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_90,"compress/mode",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  iVar14 = Variant::operator_cast_to_int(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"compress/lossy_quality",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  pRVar33._0_4_ = (ResourceImporterTexture *)Variant::operator_cast_to_float(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"compress/channel_pack",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  iVar15 = Variant::operator_cast_to_int(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"compress/normal_map",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  iVar16 = Variant::operator_cast_to_int(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"compress/hdr_compression",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  iVar17 = Variant::operator_cast_to_int(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"compress/high_quality",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  iVar18 = Variant::operator_cast_to_int(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"mipmaps/generate",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  bVar6 = Variant::operator_cast_to_bool(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  local_150 = 0xffffffff;
  if (bVar6) {
    StringName::StringName((StringName *)&local_90,"mipmaps/limit",false);
    pVVar26 = (Variant *)
              HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                            *)param_5,(StringName *)&local_90);
    local_150 = Variant::operator_cast_to_unsigned_int(pVVar26);
    if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  StringName::StringName((StringName *)&local_90,"roughness/mode",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  iVar19 = Variant::operator_cast_to_int(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"roughness/src_normal",false);
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                *)param_5,(StringName *)&local_90);
  Variant::operator_cast_to_String(local_e0);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"process/fix_alpha_border",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  bVar7 = Variant::operator_cast_to_bool(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"process/premult_alpha",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  bVar8 = Variant::operator_cast_to_bool(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"process/normal_map_invert_y",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  bVar9 = Variant::operator_cast_to_bool(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"process/hdr_as_srgb",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  bVar10 = Variant::operator_cast_to_bool(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"process/hdr_clamp_exposure",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  bVar11 = Variant::operator_cast_to_bool(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_90,"process/size_limit",false);
  pVVar26 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_90);
  iVar20 = Variant::operator_cast_to_int(pVVar26);
  if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
    StringName::unref();
  }
  bVar1 = false;
  if (iVar20 == 0) {
    bVar1 = true;
    if (iVar14 == 1) {
      iVar20 = 0x3fff;
    }
    else {
      iVar20 = 0x8000;
      if (iVar14 == 4) {
        iVar20 = 0x4000;
      }
    }
  }
  StringName::StringName((StringName *)&local_98,"svg/scale",false);
  local_90 = (Object *)((ulong)local_90._4_4_ << 0x20);
  cVar12 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_98,(uint *)&local_90);
  if (cVar12 == '\0') {
    local_1b4 = _LC0;
LAB_00105dec:
    if (StringName::configured != '\0') {
LAB_00105df0:
      if (local_98 != (Ref *)0x0) {
        StringName::unref();
      }
    }
  }
  else {
    StringName::StringName((StringName *)&local_90,"svg/scale",false);
    pVVar26 = (Variant *)
              HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                            *)param_5,(StringName *)&local_90);
    local_1b4 = Variant::operator_cast_to_float(pVVar26);
    if (StringName::configured != '\0') {
      if (local_90 != (Object *)0x0) {
        StringName::unref();
        goto LAB_00105dec;
      }
      goto LAB_00105df0;
    }
  }
  StringName::StringName((StringName *)&local_98,"editor/scale_with_editor_scale",false);
  local_90 = (Object *)((ulong)local_90 & 0xffffffff00000000);
  local_145 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_5,(StringName *)&local_98,(uint *)&local_90);
  if (local_145 == '\0') {
LAB_00105e48:
    if (StringName::configured != '\0') {
LAB_00105e53:
      if (local_98 != (Ref *)0x0) {
        StringName::unref();
      }
    }
  }
  else {
    StringName::StringName((StringName *)&local_90,"editor/scale_with_editor_scale",false);
    pVVar26 = (Variant *)
              HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                            *)param_5,(StringName *)&local_90);
    local_145 = Variant::operator_cast_to_bool(pVVar26);
    if (StringName::configured != '\0') {
      if (local_90 != (Object *)0x0) {
        StringName::unref();
        goto LAB_00105e48;
      }
      goto LAB_00105e53;
    }
  }
  StringName::StringName((StringName *)&local_98,"editor/convert_colors_with_editor_theme",false);
  local_90 = (Object *)((ulong)local_90 & 0xffffffff00000000);
  local_146 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_5,(StringName *)&local_98,(uint *)&local_90);
  if (local_146 == 0) {
LAB_00105eab:
    if (StringName::configured != '\0') {
LAB_00105eb6:
      if (local_98 != (Ref *)0x0) {
        StringName::unref();
      }
    }
  }
  else {
    StringName::StringName((StringName *)&local_90,"editor/convert_colors_with_editor_theme",false);
    pVVar26 = (Variant *)
              HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                            *)param_5,(StringName *)&local_90);
    local_146 = Variant::operator_cast_to_bool(pVVar26);
    if (StringName::configured != '\0') {
      if (local_90 != (Object *)0x0) {
        StringName::unref();
        goto LAB_00105eab;
      }
      goto LAB_00105eb6;
    }
  }
  local_d8 = (Image *)0x0;
  if (((iVar19 < 2) || (!bVar6)) ||
     (cVar12 = FileAccess::exists((String *)local_e0), cVar12 == '\0')) {
LAB_00105eec:
    local_14c = 0;
  }
  else {
    Ref<Image>::instantiate<>((Ref<Image> *)&local_d8);
    local_90 = (Object *)0x0;
    local_98 = (Ref *)0x0;
    Ref<Image>::operator=((Ref<Image> *)&local_98,(Ref *)local_d8);
    iVar21 = ImageLoader::load_image
                       (_LC0,local_e0,(StringName *)&local_98,(StringName *)&local_90,0);
    Ref<Image>::unref((Ref<Image> *)&local_98);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_90);
    if (iVar21 != 0) goto LAB_00105eec;
    local_14c = iVar19 + -2;
  }
  local_d0 = (Ref *)0x0;
  Ref<Image>::instantiate<>((Ref<Image> *)&local_d0);
  pRVar3 = local_d0;
  local_90 = (Object *)0x0;
  local_98 = (Ref *)0x0;
  if (local_d0 != (Ref *)0x0) {
    local_98 = local_d0;
    cVar12 = RefCounted::reference();
    if (cVar12 == '\0') {
      local_98 = (Ref *)0x0;
    }
  }
  iVar21 = ImageLoader::load_image
                     (local_1b4,param_3,(StringName *)&local_98,(StringName *)&local_90,bVar10);
  if ((local_98 != (Ref *)0x0) && (cVar12 = RefCounted::unreference(), cVar12 != '\0')) {
    memdelete<Image>((Image *)local_98);
  }
  if (((local_90 != (Object *)0x0) &&
      (cVar12 = RefCounted::unreference(), pOVar5 = local_90, cVar12 != '\0')) &&
     (cVar12 = predelete_handler(local_90), cVar12 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  if (iVar21 == 0) {
    local_98 = (Ref *)0x0;
    Ref<Image>::operator=((Ref<Image> *)&local_98,pRVar3);
    this = (Ref<Image> *)Memory::realloc_static((void *)0x0,8,false);
    if (this == (Ref<Image> *)0x0) goto LAB_0010725b;
    *(undefined8 *)this = 0;
    Ref<Image>::operator=(this,local_98);
    Ref<Image>::unref((Ref<Image> *)&local_98);
    local_c8 = (Ref *)0x0;
    if (local_146 == 0) {
      if (local_145 != '\0') {
LAB_00107245:
        fVar30 = (float)EditorScale::get_scale();
        local_1b4 = fVar30 * local_1b4;
        goto LAB_00107094;
      }
      local_f0 = 1;
      local_198 = this + 8;
    }
    else {
      if (local_145 != '\0') goto LAB_00107245;
LAB_00107094:
      Ref<Image>::instantiate<>((Ref<Image> *)&local_c8);
      pRVar4 = local_c8;
      local_90 = (Object *)0x0;
      local_98 = (Ref *)0x0;
      Ref<Image>::operator=((Ref<Image> *)&local_98,local_c8);
      iVar22 = ImageLoader::load_image
                         (local_1b4,param_3,(StringName *)&local_98,(StringName *)&local_90,
                          (uint)local_146 * 2 | (uint)bVar10);
      Ref<Image>::unref((Ref<Image> *)&local_98);
      Ref<FileAccess>::unref((Ref<FileAccess> *)&local_90);
      if (iVar22 == 0) {
        local_90 = (Object *)0x0;
        Ref<Image>::operator=((Ref<Image> *)&local_90,pRVar4);
        this = (Ref<Image> *)Memory::realloc_static(this,0x10,false);
        if (this == (Ref<Image> *)0x0) {
LAB_0010725b:
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        *(long *)(this + 8) = 0;
        Ref<Image>::operator=(this + 8,(Ref *)local_90);
        Ref<Image>::unref((Ref<Image> *)&local_90);
        local_198 = this + 0x10;
        local_f0 = 2;
      }
      else {
        local_98 = (Ref *)0x0;
        if (*(long *)param_3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)param_3);
        }
        local_a0 = 0;
        String::parse_latin1
                  ((String *)&local_a0,
                   "Failed to import an image resource for editor use from \'%s\'.");
        vformat<String>((StringName *)&local_90,(String *)&local_a0,(StringName *)&local_98);
        _err_print_error("import","editor/import/resource_importer_texture.cpp",0x24f,
                         (StringName *)&local_90,0,1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        local_198 = this + 8;
        local_f0 = 1;
      }
    }
    local_118 = (Ref<Image> *)&local_c8;
    pRVar27 = this;
LAB_0010623b:
    do {
      if (0 < iVar20) {
        iVar22 = Image::get_width();
        if (iVar22 <= iVar20) {
          iVar22 = Image::get_height();
          if (iVar22 <= iVar20) goto joined_r0x00106205;
        }
        iVar22 = Image::get_width();
        iVar23 = Image::get_height();
        if (iVar22 < iVar23) {
          iVar22 = Image::get_width();
          iVar23 = Image::get_height();
          if (bVar1) {
            uVar25 = Image::get_height();
            local_98 = (Ref *)0x0;
            if (*(long *)param_3 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)param_3);
            }
            local_a0 = 0;
            String::parse_latin1
                      ((String *)&local_a0,
                       "%s: Texture was downsized on import as its height (%d pixels) exceeded the importable size limit (%d pixels)."
                      );
            vformat<String,int,int>
                      ((StringName *)&local_90,(String *)&local_a0,(StringName *)&local_98,uVar25);
            _err_print_error("import","editor/import/resource_importer_texture.cpp",0x267,
                             (StringName *)&local_90,0,1);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          }
          Image::resize(*(long *)pRVar27,(long)(iVar22 * iVar20) / (long)iVar23 & 0xffffffff,iVar20,
                        2);
        }
        else {
          iVar22 = Image::get_height();
          iVar23 = Image::get_width();
          if (bVar1) {
            uVar25 = Image::get_width();
            local_98 = (Ref *)0x0;
            if (*(long *)param_3 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)param_3);
            }
            local_a0 = 0;
            String::parse_latin1
                      ((String *)&local_a0,
                       "%s: Texture was downsized on import as its width (%d pixels) exceeded the importable size limit (%d pixels)."
                      );
            vformat<String,int,int>
                      ((StringName *)&local_90,(String *)&local_a0,(StringName *)&local_98,uVar25);
            _err_print_error("import","editor/import/resource_importer_texture.cpp",0x25e,
                             (StringName *)&local_90,0,1);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          }
          Image::resize(*(long *)pRVar27,iVar20,(long)(iVar22 * iVar20) / (long)iVar23 & 0xffffffff,
                        2);
        }
        if (iVar16 == 1) {
          Image::normalize();
        }
      }
joined_r0x00106205:
      if (bVar7) {
        Image::fix_alpha_edges();
      }
      if (bVar8) {
        Image::premultiply_alpha();
      }
      if (bVar9) {
        uVar24 = Image::get_height();
        iVar22 = Image::get_width();
        fVar30 = _LC0;
        if ((0 < iVar22) && (0 < (int)uVar24)) {
          iVar23 = 0;
          do {
            pCVar29 = (Color *)0x0;
            do {
              uVar31 = Image::get_pixel((int)*(long *)pRVar27,iVar23);
              uVar28 = (int)pCVar29 + 1;
              local_58 = CONCAT44(fVar30 - (float)((ulong)uVar31 >> 0x20),(int)uVar31);
              uStack_50 = CONCAT44(in_XMM1_Db,in_XMM1_Da);
              Image::set_pixel((int)*(long *)pRVar27,iVar23,pCVar29);
              pCVar29 = (Color *)(ulong)uVar28;
            } while (uVar24 != uVar28);
            iVar23 = iVar23 + 1;
          } while (iVar22 != iVar23);
        }
      }
      if (!bVar11) {
LAB_0010622c:
        pRVar27 = pRVar27 + 8;
        if (local_198 == pRVar27) break;
        goto LAB_0010623b;
      }
      uVar24 = Image::get_height();
      iVar22 = Image::get_width();
      if ((iVar22 < 1) || ((int)uVar24 < 1)) goto LAB_0010622c;
      iVar23 = 0;
      do {
        pCVar29 = (Color *)0x0;
        do {
          uVar31 = Image::get_pixel((int)*(long *)pRVar27,iVar23);
          local_78[0]._8_8_ = CONCAT44(_LC0,_UNK_0010d018);
          local_78[0]._0_8_ = __LC118;
          fVar30 = _LC115 * (float)uVar31 + _LC116 * (float)((ulong)uVar31 >> 0x20) +
                   _LC117 * in_XMM1_Da;
          fStack_80 = in_XMM1_Da;
          uStack_7c = in_XMM1_Db;
          if (fVar30 <= _LC119) {
            local_78[0]._8_4_ = in_XMM1_Da;
            local_78[0]._0_8_ = uVar31;
            local_78[0]._12_4_ = in_XMM1_Db;
            in_XMM1_Da = _LC117 * in_XMM1_Da;
            in_XMM1_Db = 0;
          }
          else {
            in_XMM1_Db = 0;
            in_XMM1_Da = _LC122 - fVar30;
            fVar32 = (_LC121 - _LC120 * fVar30) / in_XMM1_Da;
            local_88 = uVar31;
            local_58 = Color::operator/((Color *)&local_88,fVar30);
            uStack_50 = CONCAT44(in_XMM1_Db,in_XMM1_Da);
            local_78[0]._0_8_ = Color::operator*((Color *)&local_58,fVar32);
            local_78[0]._12_4_ = in_XMM1_Db;
            local_78[0]._8_4_ = in_XMM1_Da;
            uVar31 = local_88;
          }
          uVar28 = (int)pCVar29 + 1;
          local_88 = uVar31;
          Image::set_pixel((int)*(long *)pRVar27,iVar23,pCVar29);
          pCVar29 = (Color *)(ulong)uVar28;
        } while (uVar24 != uVar28);
        iVar23 = iVar23 + 1;
      } while (iVar23 != iVar22);
      pRVar27 = pRVar27 + 8;
    } while (local_198 != pRVar27);
    StringName::StringName((StringName *)&local_90,"detect_3d/compress_to",false);
    pVVar26 = (Variant *)
              HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                            *)param_5,(StringName *)&local_90);
    iVar20 = Variant::operator_cast_to_int(pVVar26);
    bVar7 = 0 < iVar20;
    if ((StringName::configured != '\0') && (local_90 != (Object *)0x0)) {
      StringName::unref();
    }
    bVar8 = iVar19 == 0;
    bVar9 = iVar16 == 0;
    bVar10 = iVar16 == 1;
    bVar11 = iVar15 == 0;
    Array::Array(local_c0);
    if (iVar14 == 2) {
      iVar15 = Image::get_format();
      bVar1 = false;
      if (7 < iVar15) {
        iVar15 = Image::get_format();
        bVar1 = iVar15 < 0x11;
      }
      cVar12 = ResourceImporterTextureSettings::should_import_s3tc_bptc();
      cVar13 = ResourceImporterTextureSettings::should_import_etc2_astc();
      if (cVar12 == '\0') {
        if (cVar13 == '\0') {
          iVar15 = Image::detect_alpha();
          if (bVar1) {
            if (iVar15 != 0) goto LAB_001077ce;
            if (0 < iVar17) goto LAB_001066be;
LAB_00106fdd:
            iVar15 = Image::get_format();
            if (iVar15 != 0x10) {
              Image::convert(pRVar3,0x10);
              local_98 = (Ref *)0x0;
              String::parse_latin1((String *)&local_98,".ctex");
              String::operator+((String *)&local_90,(String *)param_4);
              iVar15 = 3;
              goto LAB_00106692;
            }
joined_r0x00107a1a:
            if (cVar12 != '\0') goto LAB_0010734f;
            if (cVar13 != '\0') goto LAB_001078a6;
          }
          goto LAB_001066be;
        }
LAB_001076f7:
        Variant::Variant((Variant *)&local_58,"etc2_astc");
        Array::push_back((Variant *)local_c0);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        iVar15 = Image::detect_alpha();
        if (!bVar1) {
          if (cVar12 != '\0') goto LAB_001078e0;
          goto LAB_0010753d;
        }
        if (iVar15 != 0) {
LAB_001077ce:
          if (iVar17 != 2) goto LAB_00106fdd;
          iVar15 = Image::get_format();
          if (iVar15 == 0xb) {
            Image::convert(pRVar3);
          }
          else {
            iVar15 = Image::get_format();
            if (iVar15 == 0xf) {
              Image::convert(pRVar3);
            }
          }
          goto joined_r0x00107a1a;
        }
        if (iVar17 < 1) goto LAB_00106fdd;
        if (cVar12 != '\0') goto LAB_0010734f;
LAB_001078a6:
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"astc");
        uVar25 = 4;
      }
      else {
        Variant::Variant((Variant *)&local_58,"s3tc_bptc");
        Array::push_back((Variant *)local_c0);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar13 != '\0') goto LAB_001076f7;
        iVar15 = Image::detect_alpha();
        if (bVar1) {
          if (iVar15 != 0) goto LAB_001077ce;
          if (iVar17 < 1) goto LAB_00106fdd;
LAB_0010734f:
          local_b8 = 0;
          String::parse_latin1((String *)&local_b8,"bptc");
          uVar25 = 3;
        }
        else {
LAB_001078e0:
          local_b8 = 0;
          if (iVar18 != 0) goto LAB_0010734f;
          String::parse_latin1((String *)&local_b8,"s3tc");
          uVar25 = 0;
        }
        local_98 = (Ref *)0x0;
        String::parse_latin1((String *)&local_98,".ctex");
        local_b0 = 0;
        String::parse_latin1((String *)&local_b0,".");
        String::operator+(local_a8,(String *)param_4);
        String::operator+((String *)&local_a0,local_a8);
        String::operator+((String *)&local_90,(String *)&local_a0);
        _save_ctex(pRVar33._0_4_,param_1,(Ref<Image> *)&local_d0,(StringName *)&local_90,2,uVar25,
                   bVar6,0,bVar7,bVar8,bVar9,bVar10,bVar11,0,local_150,&local_d8,local_14c);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        List<String,DefaultAllocator>::push_back
                  ((List<String,DefaultAllocator> *)param_6,(String *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        if (cVar13 == '\0') goto LAB_001066be;
LAB_0010753d:
        local_b8 = 0;
        if ((iVar18 != 0) || (bVar1)) goto LAB_001078a6;
        String::parse_latin1((String *)&local_b8,"etc2");
        uVar25 = 2;
      }
      local_198 = (Ref<Image> *)local_a8;
      local_1a8 = (String *)&local_a0;
      local_98 = (Ref *)0x0;
      String::parse_latin1((String *)&local_98,".ctex");
      local_b0 = 0;
      String::parse_latin1((String *)&local_b0,".");
      String::operator+((String *)local_198,(String *)param_4);
      String::operator+(local_1a8,(String *)local_198);
      String::operator+((String *)&local_90,local_1a8);
      _save_ctex(pRVar33._0_4_,param_1,(Ref<Image> *)&local_d0,(StringName *)&local_90,2,uVar25,
                 bVar6,0,bVar7,bVar8,bVar9,bVar10,bVar11,0,local_150,&local_d8,local_14c);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_1a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      List<String,DefaultAllocator>::push_back
                ((List<String,DefaultAllocator> *)param_6,(String *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    }
    else {
      local_98 = (Ref *)0x0;
      String::parse_latin1((String *)&local_98,".ctex");
      String::operator+((String *)&local_90,(String *)param_4);
      iVar15 = iVar14;
LAB_00106692:
      _save_ctex(pRVar33._0_4_,param_1,(Ref<Image> *)&local_d0,(StringName *)&local_90,iVar15,0,
                 bVar6,0,bVar7,bVar8,bVar9,bVar10,bVar11,0,local_150,&local_d8,local_14c);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    }
LAB_001066be:
    pRVar4 = local_c8;
    if (local_c8 != (Ref *)0x0) {
      local_98 = (Ref *)0x0;
      String::parse_latin1((String *)&local_98,".editor.ctex");
      String::operator+((String *)&local_90,(String *)param_4);
      _save_ctex(pRVar33._0_4_,param_1,local_118,(StringName *)&local_90,iVar14,0,bVar6,0,bVar7,
                 bVar8,bVar9,bVar10,bVar11,0,local_150,&local_d8,local_14c);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      Dictionary::Dictionary((Dictionary *)&local_a0);
      if (local_145 != '\0') {
        fVar30 = (float)EditorScale::get_scale();
        Variant::Variant((Variant *)&local_58,fVar30);
        Variant::Variant((Variant *)local_78,"editor_scale");
        pVVar26 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
        if (pVVar26 != (Variant *)&local_58) {
          if (Variant::needs_deinit[*(int *)pVVar26] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar26 = 0;
          *(int *)pVVar26 = (int)local_58;
          *(undefined8 *)(pVVar26 + 8) = uStack_50;
          *(undefined8 *)(pVVar26 + 0x10) = uStack_48;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
      }
      if (local_146 != 0) {
        bVar6 = (bool)EditorThemeManager::is_dark_theme();
        Variant::Variant((Variant *)&local_58,bVar6);
        Variant::Variant((Variant *)local_78,"editor_dark_theme");
        pVVar26 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
        if (pVVar26 != (Variant *)&local_58) {
          if (Variant::needs_deinit[*(int *)pVVar26] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar26 = 0;
          *(int *)pVVar26 = (int)local_58;
          *(undefined8 *)(pVVar26 + 8) = uStack_50;
          *(undefined8 *)(pVVar26 + 0x10) = uStack_48;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
      }
      local_98 = (Ref *)0x0;
      String::parse_latin1((String *)&local_98,".editor.meta");
      String::operator+((String *)&local_90,(String *)param_4);
      _save_editor_meta((ResourceImporterTexture *)param_1,(Dictionary *)&local_a0,
                        (String *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      Dictionary::~Dictionary((Dictionary *)&local_a0);
    }
    if (in_stack_00000010 != (int *)0x0) {
      Dictionary::Dictionary((Dictionary *)&local_90);
      Variant::Variant((Variant *)&local_58,iVar14 == 2);
      Variant::Variant((Variant *)local_78,"vram_texture");
      pVVar26 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
      if (pVVar26 != (Variant *)&local_58) {
        if (Variant::needs_deinit[*(int *)pVVar26] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar26 = 0;
        *(int *)pVVar26 = (int)local_58;
        *(undefined8 *)(pVVar26 + 8) = uStack_50;
        *(undefined8 *)(pVVar26 + 0x10) = uStack_48;
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      iVar14 = Array::size();
      if (iVar14 != 0) {
        Variant::Variant((Variant *)&local_58,local_c0);
        Variant::Variant((Variant *)local_78,"imported_formats");
        pVVar26 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
        if (pVVar26 != (Variant *)&local_58) {
          if (Variant::needs_deinit[*(int *)pVVar26] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar26 = 0;
          *(int *)pVVar26 = (int)local_58;
          *(undefined8 *)(pVVar26 + 8) = uStack_50;
          *(undefined8 *)(pVVar26 + 0x10) = uStack_48;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
      }
      if (pRVar4 != (Ref *)0x0) {
        Variant::Variant((Variant *)&local_58,true);
        Variant::Variant((Variant *)local_78,"has_editor_variant");
        pVVar26 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
        if (pVVar26 != (Variant *)&local_58) {
          if (Variant::needs_deinit[*(int *)pVVar26] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar26 = 0;
          *(int *)pVVar26 = (int)local_58;
          *(undefined8 *)(pVVar26 + 8) = uStack_50;
          *(undefined8 *)(pVVar26 + 0x10) = uStack_48;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
      }
      Variant::Variant((Variant *)&local_58,(Dictionary *)&local_90);
      if (Variant::needs_deinit[*in_stack_00000010] != '\0') {
        Variant::_clear_internal();
      }
      *in_stack_00000010 = (int)local_58;
      *(undefined8 *)(in_stack_00000010 + 2) = uStack_50;
      *(undefined8 *)(in_stack_00000010 + 4) = uStack_48;
      Dictionary::~Dictionary((Dictionary *)&local_90);
    }
    Array::~Array(local_c0);
    Ref<Image>::unref(local_118);
    if (pRVar3 != (Ref *)0x0) goto LAB_00105fd3;
    if (local_d8 != (Image *)0x0) goto LAB_00105ff0;
LAB_001069e9:
    pRVar27 = this;
    do {
      if (*(long *)pRVar27 != 0) {
        cVar12 = RefCounted::unreference();
        if (cVar12 != '\0') {
          memdelete<Image>(*(Image **)pRVar27);
        }
      }
      pRVar27 = pRVar27 + 8;
    } while (this + (ulong)local_f0 * 8 != pRVar27);
  }
  else {
    if (pRVar3 == (Ref *)0x0) {
      if (local_d8 == (Image *)0x0) goto LAB_0010601b;
      local_f0 = 0;
      this = (Ref<Image> *)0x0;
      cVar12 = RefCounted::unreference();
joined_r0x00106121:
      if (cVar12 != '\0') {
        memdelete<Image>(local_d8);
      }
    }
    else {
      local_f0 = 0;
      this = (Ref<Image> *)0x0;
LAB_00105fd3:
      cVar12 = RefCounted::unreference();
      if (cVar12 != '\0') {
        memdelete<Image>((Image *)pRVar3);
      }
      if (local_d8 != (Image *)0x0) {
LAB_00105ff0:
        cVar12 = RefCounted::unreference();
        goto joined_r0x00106121;
      }
    }
    if (this == (Ref<Image> *)0x0) goto LAB_0010601b;
    if (local_f0 != 0) goto LAB_001069e9;
  }
  Memory::free_static(this,false);
LAB_0010601b:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar21;
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
  return (uint)CONCAT71(0x10ce,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ce,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ResourceImporterTexture::is_class_ptr(void*) const */

uint __thiscall ResourceImporterTexture::is_class_ptr(ResourceImporterTexture *this,void *param_1)

{
  return (uint)CONCAT71(0x10cd,(undefined4 *)param_1 ==
                               &ResourceImporter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cd,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ce,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ce,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceImporterTexture::_getv(StringName const&, Variant&) const */

undefined8 ResourceImporterTexture::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterTexture::_setv(StringName const&, Variant const&) */

undefined8 ResourceImporterTexture::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterTexture::_validate_propertyv(PropertyInfo&) const */

void ResourceImporterTexture::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceImporterTexture::_property_can_revertv(StringName const&) const */

undefined8 ResourceImporterTexture::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceImporterTexture::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceImporterTexture::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterTexture::_notificationv(int, bool) */

void ResourceImporterTexture::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceImporterTexture::can_import_threaded() const */

undefined8 ResourceImporterTexture::can_import_threaded(void)

{
  return 1;
}



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x10ce,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cd,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ce,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ConfigFile::_getv(StringName const&, Variant&) const */

undefined8 ConfigFile::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_setv(StringName const&, Variant const&) */

undefined8 ConfigFile::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_validate_propertyv(PropertyInfo&) const */

void ConfigFile::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ConfigFile::_property_can_revertv(StringName const&) const */

undefined8 ConfigFile::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConfigFile::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConfigFile::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_notificationv(int, bool) */

void ConfigFile::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010c8c0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010c8c0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ResourceImporterTexture::_get_class_namev() const */

undefined8 * ResourceImporterTexture::_get_class_namev(void)

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
LAB_00108203:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108203;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterTexture");
      goto LAB_0010826e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterTexture");
LAB_0010826e:
  return &_get_class_namev()::_class_name_static;
}



/* ConfigFile::_get_class_namev() const */

undefined8 * ConfigFile::_get_class_namev(void)

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
LAB_001082e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001082e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_0010834e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_0010834e:
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
LAB_001083c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001083c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010842e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010842e:
  return &_get_class_namev()::_class_name_static;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
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



/* ResourceImporterTexture::get_class() const */

void ResourceImporterTexture::get_class(void)

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



/* ConfigFile::get_class() const */

void ConfigFile::get_class(void)

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



/* PropertyInfo::PropertyInfo(PropertyInfo const&) */

void __thiscall PropertyInfo::PropertyInfo(PropertyInfo *this,PropertyInfo *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(this + 8) = 0;
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  StringName::StringName((StringName *)(this + 0x10),(StringName *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = uVar1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)(param_1 + 0x20));
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&)
   const */

long __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::operator[](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
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
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar17 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar12 = StringName::get_empty_hash();
    }
    else {
      uVar12 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar12 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar17;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar15 = *(uint *)(*(long *)(this + 0x10) + lVar14 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar15 != 0) {
      uVar16 = 0;
      do {
        if ((uVar12 == uVar15) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar14 * 8) + 0x10) == *(long *)param_1)) {
          return *(long *)(*(long *)(this + 8) + (ulong)uVar13 * 8) + 0x18;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar15 = *(uint *)(*(long *)(this + 0x10) + lVar14 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar15 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar17, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar17, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
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



/* WARNING: Removing unreachable block (ram,0x00109428) */
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



/* WARNING: Removing unreachable block (ram,0x00109760) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00109a50) */
/* String vformat<String, int, int>(String const&, String const, int const, int const) */

undefined8 *
vformat<String,int,int>(undefined8 *param_1,bool *param_2,String *param_3,int param_4,int param_5)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, ResourceImporterTexture::MakeInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ResourceImporterTexture::MakeInfo> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
::operator[](HashMap<StringName,ResourceImporterTexture::MakeInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ResourceImporterTexture::MakeInfo>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
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
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_78 [16];
  long local_68;
  undefined8 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_0010a339:
    local_88 = 0;
    local_90 = 0;
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
      }
      else {
        memset(pvVar3,0,uVar45);
        memset(pvVar44,0,uVar50);
      }
      goto LAB_00109de1;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00109ee7;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00109ded;
LAB_00109f0d:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010a2f4;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar38 * lVar48;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar45;
          lVar47 = SUB168(auVar13 * auVar29,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar13 * auVar29,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar53 * lVar48;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar45;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar48;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar45;
            uVar37 = SUB164(auVar15 * auVar31,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar48;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar45;
            lVar47 = SUB168(auVar16 * auVar32,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar16 * auVar32,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) == 0) {
      local_88 = 0;
      local_90 = 0;
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    }
    else {
      lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar48;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar52 == uVar39) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_00109d7c;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar48;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar48, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar48,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      local_88 = 0;
      local_90 = 0;
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_0010a339;
    }
LAB_00109de1:
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
LAB_00109ded:
      uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar45 = CONCAT44(0,uVar38);
      lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      uVar54 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar39 * lVar43;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar45;
      lVar48 = SUB168(auVar9 * auVar25,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
      uVar53 = SUB164(auVar9 * auVar25,8);
      if (uVar52 != 0) {
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(*(long *)(this + 8) + lVar48 * 8) + 0x10) == *(long *)param_1)) {
            lVar43 = *(long *)(*(long *)(this + 8) + (ulong)uVar53 * 8);
            *(undefined4 *)(lVar43 + 0x18) = 0;
            CowData<char32_t>::_ref((CowData<char32_t> *)(lVar43 + 0x20),(CowData *)&local_90);
            lVar48 = *(long *)(this + 8);
            *(undefined4 *)(lVar43 + 0x28) = 0;
            puVar42 = *(undefined8 **)(lVar48 + (ulong)uVar53 * 8);
            goto LAB_0010a2f4;
          }
          uVar54 = uVar54 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar53 + 1) * lVar43;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar45;
          lVar48 = SUB168(auVar10 * auVar26,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
          uVar53 = SUB164(auVar10 * auVar26,8);
        } while ((uVar52 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar52 * lVar43, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar45, auVar12._8_8_ = 0,
                auVar12._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar11 * auVar27,8)) * lVar43,
                auVar28._8_8_ = 0, auVar28._0_8_ = uVar45, uVar54 <= SUB164(auVar12 * auVar28,8)));
      }
      iVar46 = *(int *)(this + 0x2c);
    }
LAB_00109ee7:
    if ((float)uVar40 * __LC36 < (float)(iVar46 + 1)) goto LAB_00109f0d;
  }
  local_78 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_68,param_1);
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x30,"");
  *puVar42 = local_78._0_8_;
  puVar42[1] = local_78._8_8_;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_68);
  puVar42[4] = 0;
  *(undefined4 *)(puVar42 + 3) = (undefined4)local_60;
  if (local_58 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar42 + 4),(CowData *)&local_58);
  }
  *(undefined4 *)(puVar42 + 5) = local_50;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_0010a3e5;
LAB_0010a201:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_0010a201;
LAB_0010a3e5:
    uVar38 = StringName::get_empty_hash();
  }
  lVar43 = *(long *)(this + 0x10);
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  uVar53 = 0;
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar40 * lVar48;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar45;
  lVar49 = SUB168(auVar17 * auVar33,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar49 * 4);
  iVar46 = SUB164(auVar17 * auVar33,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)uVar52 * lVar48;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar45;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar18 * auVar34,8)) * lVar48;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar45;
    uVar38 = SUB164(auVar19 * auVar35,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar49 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(iVar46 + 1) * lVar48;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar45;
    lVar49 = SUB168(auVar20 * auVar36,8);
    puVar1 = (uint *)(lVar43 + lVar49 * 4);
    iVar46 = SUB164(auVar20 * auVar36,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar49 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010a2f4:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_00109d7c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
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
    if (cVar5 != '\0') goto LAB_0010a5db;
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
      if (cVar5 != '\0') goto LAB_0010a5db;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010a5db:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::is_class(String const&) const */

undefined8 __thiscall ConfigFile::is_class(ConfigFile *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010a74f;
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
LAB_0010a74f:
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
    if (cVar5 != '\0') goto LAB_0010a803;
  }
  cVar5 = String::operator==(param_1,"ConfigFile");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010a803:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterTexture::is_class(String const&) const */

undefined8 __thiscall
ResourceImporterTexture::is_class(ResourceImporterTexture *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010a96b;
  }
  cVar5 = String::operator==(param_1,"ResourceImporterTexture");
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
      if (cVar5 != '\0') goto LAB_0010a96b;
    }
    cVar5 = String::operator==(param_1,"ResourceImporter");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0010aa6e;
    }
  }
LAB_0010a96b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010aa6e:
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
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



/* ConfigFile::_initialize_classv() */

void ConfigFile::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_00110010 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConfigFile";
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
    if ((code *)PTR__bind_methods_00110008 != RefCounted::_bind_methods) {
      ConfigFile::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceImporterTexture::_initialize_classv() */

void ResourceImporterTexture::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00110010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00110018 != RefCounted::_bind_methods) {
        ResourceImporter::_bind_methods();
      }
      ResourceImporter::initialize_class()::initialized = '\x01';
    }
    local_58 = "ResourceImporter";
    local_68 = 0;
    local_50 = 0x10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterTexture";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceImporter::ImportOption::~ImportOption() */

void __thiscall ResourceImporter::ImportOption::~ImportOption(ImportOption *this)

{
  long *plVar1;
  long lVar2;
  
  if (Variant::needs_deinit[*(int *)(this + 0x30)] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
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
      goto LAB_0010b32c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b32c:
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



/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConfigFile::_get_property_listv(ConfigFile *this,List *param_1,bool param_2)

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
  local_78 = "ConfigFile";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConfigFile";
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
      goto LAB_0010b591;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b591:
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
  StringName::StringName((StringName *)&local_78,"ConfigFile",false);
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
      goto LAB_0010b841;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b841:
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



/* ResourceImporterTexture::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
ResourceImporterTexture::_get_property_listv
          (ResourceImporterTexture *this,List *param_1,bool param_2)

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
  local_78 = "ResourceImporterTexture";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceImporterTexture";
  local_98 = 0;
  local_70 = 0x17;
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
      goto LAB_0010baf1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010baf1:
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
  StringName::StringName((StringName *)&local_78,"ResourceImporterTexture",false);
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



/* Ref<FileAccess>::unref() */

void __thiscall Ref<FileAccess>::unref(Ref<FileAccess> *this)

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



/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::_lookup_pos(StringName const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::_lookup_pos(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              *this,StringName *param_1,uint *param_2)

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
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_0010c240:
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
  if (lVar9 == 0) goto LAB_0010c240;
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
    goto LAB_0010c296;
  }
  if (lVar9 == lVar5) {
LAB_0010c1bb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010c296:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010c12f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010c1bb;
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
LAB_0010c12f:
  puVar7[-1] = param_1;
  return 0;
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
    *(code **)param_1 = Memory::free_static;
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



/* Ref<Image>::unref() */

void __thiscall Ref<Image>::unref(Ref<Image> *this)

{
  char cVar1;
  
  if (*(long *)this != 0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<Image>(*(Image **)this);
      *(undefined8 *)this = 0;
      return;
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* void Ref<Image>::instantiate<>() */

void __thiscall Ref<Image>::instantiate<>(Ref<Image> *this)

{
  Image *pIVar1;
  char cVar2;
  Resource *this_00;
  long lVar3;
  Resource *pRVar4;
  Image *pIVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (Resource *)operator_new(0x268,"");
  pRVar4 = this_00;
  for (lVar3 = 0x4d; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar4 = 0;
    pRVar4 = pRVar4 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  this_00[0x260] = (Resource)0x0;
  *(code **)this_00 = Memory::free_static;
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pIVar1 = *(Image **)this;
    if (pIVar1 == (Image *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') {
      return;
    }
    memdelete<Image>(pIVar1);
    return;
  }
  pIVar1 = *(Image **)this;
  pIVar5 = pIVar1;
  if (this_00 != (Resource *)pIVar1) {
    *(Resource **)this = this_00;
    cVar2 = RefCounted::reference();
    pIVar5 = (Image *)this_00;
    if (cVar2 == '\0') {
      *(undefined8 *)this = 0;
      if (pIVar1 == (Image *)0x0) goto LAB_0010c458;
      cVar2 = RefCounted::unreference();
    }
    else {
      if (pIVar1 == (Image *)0x0) goto LAB_0010c458;
      cVar2 = RefCounted::unreference();
    }
    if (cVar2 != '\0') {
      memdelete<Image>(pIVar1);
    }
  }
LAB_0010c458:
  cVar2 = RefCounted::unreference();
  if (cVar2 == '\0') {
    return;
  }
  memdelete<Image>(pIVar5);
  return;
}



/* void memdelete<HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >
   >(HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >*)
    */

void memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
               (HashMapElement *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x20);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(param_1 + 0x28) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
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
            pvVar5 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010c5a1;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_0010c5a1:
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x10));
  Memory::free_static(param_1,false);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ca20;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010c6b1;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0010c6b1:
  *(undefined ***)this = &PTR__initialize_classv_0010c8c0;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ca20;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010c7a1;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0010c7a1:
  *(undefined ***)this = &PTR__initialize_classv_0010c8c0;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceImporter::ImportOption::~ImportOption() */

void __thiscall ResourceImporter::ImportOption::~ImportOption(ImportOption *this)

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
/* PropertyInfo::PropertyInfo(PropertyInfo const&) */

void __thiscall PropertyInfo::PropertyInfo(PropertyInfo *this,PropertyInfo *param_1)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


