
/* ResourceImporterDynamicFont::get_preset_count() const */

undefined8 ResourceImporterDynamicFont::get_preset_count(void)

{
  return 2;
}



/* ResourceImporterDynamicFont::has_advanced_options() const */

undefined8 ResourceImporterDynamicFont::has_advanced_options(void)

{
  return 1;
}



/* ResourceImporterDynamicFont::show_advanced_options(String const&) */

void ResourceImporterDynamicFont::show_advanced_options(String *param_1)

{
  String *pSVar1;
  
  pSVar1 = (String *)DynamicFontImportSettingsDialog::get_singleton();
  DynamicFontImportSettingsDialog::open_settings(pSVar1);
  return;
}



/* ResourceImporterDynamicFont::get_visible_name() const */

ResourceImporterDynamicFont * __thiscall
ResourceImporterDynamicFont::get_visible_name(ResourceImporterDynamicFont *this)

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



/* ResourceImporterDynamicFont::get_importer_name() const */

ResourceImporterDynamicFont * __thiscall
ResourceImporterDynamicFont::get_importer_name(ResourceImporterDynamicFont *this)

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



/* ResourceImporterDynamicFont::get_resource_type() const */

ResourceImporterDynamicFont * __thiscall
ResourceImporterDynamicFont::get_resource_type(ResourceImporterDynamicFont *this)

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



/* ResourceImporterDynamicFont::get_save_extension() const */

ResourceImporterDynamicFont * __thiscall
ResourceImporterDynamicFont::get_save_extension(ResourceImporterDynamicFont *this)

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



/* ResourceImporterDynamicFont::ResourceImporterDynamicFont() */

void __thiscall
ResourceImporterDynamicFont::ResourceImporterDynamicFont(ResourceImporterDynamicFont *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00106c18;
  return;
}



/* ResourceImporterDynamicFont::get_option_visibility(String const&, String const&,
   HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) const */

uint __thiscall
ResourceImporterDynamicFont::get_option_visibility
          (ResourceImporterDynamicFont *this,String *param_1,String *param_2,HashMap *param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  Variant *pVVar4;
  undefined7 extraout_var;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = String::operator==(param_2,"msdf_pixel_range");
  if (cVar1 == '\0') {
LAB_001006bb:
    cVar1 = String::operator==(param_2,"msdf_size");
    if (cVar1 != '\0') {
      StringName::StringName((StringName *)&local_38,"multichannel_signed_distance_field",false);
      pVVar4 = (Variant *)
               HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
               ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,(StringName *)&local_38);
      bVar2 = Variant::operator_cast_to_bool(pVVar4);
      if (!bVar2) goto LAB_00100790;
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
    }
    cVar1 = String::operator==(param_2,"antialiasing");
    if (cVar1 != '\0') {
      StringName::StringName((StringName *)&local_38,"multichannel_signed_distance_field",false);
      pVVar4 = (Variant *)
               HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
               ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,(StringName *)&local_38);
      bVar2 = Variant::operator_cast_to_bool(pVVar4);
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      if (bVar2) goto LAB_001007a8;
    }
    cVar1 = String::operator==(param_2,"oversampling");
    if (cVar1 != '\0') {
      StringName::StringName((StringName *)&local_38,"multichannel_signed_distance_field",false);
      pVVar4 = (Variant *)
               HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
               ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,(StringName *)&local_38);
      bVar2 = Variant::operator_cast_to_bool(pVVar4);
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      if (bVar2) goto LAB_001007a8;
    }
    cVar1 = String::operator==(param_2,"subpixel_positioning");
    if (cVar1 != '\0') {
      StringName::StringName((StringName *)&local_38,"multichannel_signed_distance_field",false);
      pVVar4 = (Variant *)
               HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
               ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,(StringName *)&local_38);
      bVar2 = Variant::operator_cast_to_bool(pVVar4);
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      if (bVar2) goto LAB_001007a8;
    }
    cVar1 = String::operator==(param_2,"keep_rounding_remainders");
    if (cVar1 == '\0') {
      uVar3 = 1;
    }
    else {
      StringName::StringName((StringName *)&local_38,"multichannel_signed_distance_field",false);
      pVVar4 = (Variant *)
               HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
               ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,(StringName *)&local_38);
      bVar2 = Variant::operator_cast_to_bool(pVVar4);
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      uVar3 = (uint)CONCAT71(extraout_var,bVar2) ^ 1;
    }
  }
  else {
    StringName::StringName((StringName *)&local_38,"multichannel_signed_distance_field",false);
    pVVar4 = (Variant *)
             HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                           *)param_3,(StringName *)&local_38);
    bVar2 = Variant::operator_cast_to_bool(pVVar4);
    if (bVar2) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
      goto LAB_001006bb;
    }
LAB_00100790:
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
LAB_001007a8:
    uVar3 = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* ResourceImporterDynamicFont::get_preset_name(int) const */

String * ResourceImporterDynamicFont::get_preset_name(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  String *pSVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  pSVar1 = (String *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_50 = 0;
    local_40 = 0;
    local_48 = "";
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Dynamically rendered TrueType/OpenType font";
    local_40 = 0x2b;
  }
  else {
    if (in_EDX != 1) {
      *(undefined8 *)pSVar1 = 0;
      goto LAB_00100a0e;
    }
    local_50 = 0;
    local_40 = 0;
    local_48 = "";
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Prerendered multichannel(+true) signed distance field";
    local_40 = 0x35;
  }
  local_58 = 0;
  String::parse_latin1((StrRange *)&local_58);
  TTR(pSVar1,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00100a0e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterDynamicFont::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ResourceImporterDynamicFont::get_recognized_extensions
          (ResourceImporterDynamicFont *this,List *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (List *)0x0) {
    local_40 = 0;
    local_30 = 3;
    local_38 = "ttf";
    String::parse_latin1((StrRange *)&local_40);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    local_38 = "ttc";
    local_40 = 0;
    local_30 = 3;
    String::parse_latin1((StrRange *)&local_40);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    local_38 = "otf";
    local_40 = 0;
    local_30 = 3;
    String::parse_latin1((StrRange *)&local_40);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    local_38 = "otc";
    local_40 = 0;
    local_30 = 3;
    String::parse_latin1((StrRange *)&local_40);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    local_38 = "woff";
    local_40 = 0;
    local_30 = 4;
    String::parse_latin1((StrRange *)&local_40);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    local_38 = "woff2";
    local_40 = 0;
    local_30 = 5;
    String::parse_latin1((StrRange *)&local_40);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    local_38 = "pfb";
    local_40 = 0;
    local_30 = 3;
    String::parse_latin1((StrRange *)&local_40);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    local_38 = "pfm";
    local_40 = 0;
    local_30 = 3;
    String::parse_latin1((StrRange *)&local_40);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)param_1,(String *)&local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterDynamicFont::get_import_options(String const&,
   List<ResourceImporter::ImportOption, DefaultAllocator>*, int) const */

void __thiscall
ResourceImporterDynamicFont::get_import_options
          (ResourceImporterDynamicFont *this,String *param_1,List *param_2,int param_3)

{
  long in_FS_OFFSET;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  PropertyInfo local_d8 [48];
  int local_a8 [2];
  undefined1 local_a0 [16];
  PropertyInfo local_88 [48];
  Variant local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (undefined1  [16])0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"Rendering");
  PropertyInfo::PropertyInfo
            (local_d8,0,(String *)&local_f0,0,(String *)&local_e8,0x40,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,1);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"None,Grayscale,LCD Subpixel");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"antialiasing");
  PropertyInfo::PropertyInfo
            (local_d8,2,(String *)&local_f0,2,(String *)&local_e8,6,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
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
  String::parse_latin1((String *)&local_f0,"generate_mipmaps");
  PropertyInfo::PropertyInfo
            (local_d8,1,(String *)&local_f0,0,(String *)&local_e8,6,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"disable_embedded_bitmaps");
  PropertyInfo::PropertyInfo
            (local_d8,1,(String *)&local_f0,0,(String *)&local_e8,6,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,param_3 == 1);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"multichannel_signed_distance_field");
  PropertyInfo::PropertyInfo
            (local_d8,1,(String *)&local_f0,0,(String *)&local_e8,0x4006,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,8);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"1,100,1");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"msdf_pixel_range");
  PropertyInfo::PropertyInfo
            (local_d8,2,(String *)&local_f0,1,(String *)&local_e8,6,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0x30);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"1,250,1");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"msdf_size");
  PropertyInfo::PropertyInfo
            (local_d8,2,(String *)&local_f0,1,(String *)&local_e8,6,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"allow_system_fallback");
  PropertyInfo::PropertyInfo
            (local_d8,1,(String *)&local_f0,0,(String *)&local_e8,6,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
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
  String::parse_latin1((String *)&local_f0,"force_autohinter");
  PropertyInfo::PropertyInfo
            (local_d8,1,(String *)&local_f0,0,(String *)&local_e8,6,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,1);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"None,Light,Normal");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"hinting");
  PropertyInfo::PropertyInfo
            (local_d8,2,(String *)&local_f0,2,(String *)&local_e8,6,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,4);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1
            ((String *)&local_e8,
             "Disabled,Auto,One Half of a Pixel,One Quarter of a Pixel,Auto (Except Pixel Fonts)");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"subpixel_positioning");
  PropertyInfo::PropertyInfo
            (local_d8,2,(String *)&local_f0,2,(String *)&local_e8,6,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"keep_rounding_remainders");
  PropertyInfo::PropertyInfo
            (local_d8,1,(String *)&local_f0,0,(String *)&local_e8,6,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0.0);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"0,10,0.1");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"oversampling");
  PropertyInfo::PropertyInfo
            (local_d8,3,(String *)&local_f0,1,(String *)&local_e8,6,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a0 = (undefined1  [16])0x0;
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"Fallbacks");
  PropertyInfo::PropertyInfo
            (local_d8,0,(String *)&local_f0,0,(String *)&local_e8,0x40,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array((Array *)&local_e0);
  Variant::Variant((Variant *)local_a8,(Array *)&local_e0);
  local_e8 = 0;
  local_100 = 0;
  String::parse_latin1((String *)&local_100,"%s/%s:%s");
  vformat<Variant::Type,PropertyHint,char_const*>
            ((CowData<char32_t> *)&local_f8,(String *)&local_100,0x18,0x11,&_LC55);
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"fallbacks");
  PropertyInfo::PropertyInfo
            (local_d8,0x1c,(String *)&local_f0,0x1f,(CowData<char32_t> *)&local_f8,6,
             (String *)&local_e8);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)&local_e0);
  local_a0 = (undefined1  [16])0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"Compress");
  PropertyInfo::PropertyInfo
            (local_d8,0,(String *)&local_f0,0,(String *)&local_e8,0x40,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"compress");
  PropertyInfo::PropertyInfo
            (local_d8,1,(String *)&local_f0,0,(String *)&local_e8,6,(Array *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array((Array *)&local_e0);
  Variant::Variant((Variant *)local_a8,(Array *)&local_e0);
  local_e8 = 0;
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"");
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"preload");
  PropertyInfo::PropertyInfo
            (local_d8,0x1c,(CowData<char32_t> *)&local_f8,0,(String *)&local_f0,2,
             (String *)&local_e8);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)&local_e0);
  Dictionary::Dictionary((Dictionary *)&local_e0);
  Variant::Variant((Variant *)local_a8,(Dictionary *)&local_e0);
  local_e8 = 0;
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"");
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"language_support");
  PropertyInfo::PropertyInfo
            (local_d8,0x1b,(CowData<char32_t> *)&local_f8,0,(String *)&local_f0,2,
             (String *)&local_e8);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_e0);
  Dictionary::Dictionary((Dictionary *)&local_e0);
  Variant::Variant((Variant *)local_a8,(Dictionary *)&local_e0);
  local_e8 = 0;
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"");
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"script_support");
  PropertyInfo::PropertyInfo
            (local_d8,0x1b,(CowData<char32_t> *)&local_f8,0,(String *)&local_f0,2,
             (String *)&local_e8);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_e0);
  Dictionary::Dictionary((Dictionary *)&local_e0);
  Variant::Variant((Variant *)local_a8,(Dictionary *)&local_e0);
  local_e8 = 0;
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"");
  local_f8 = 0;
  String::parse_latin1((String *)&local_f8,"opentype_features");
  PropertyInfo::PropertyInfo
            (local_d8,0x1b,(CowData<char32_t> *)&local_f8,0,(String *)&local_f0,2,
             (String *)&local_e8);
  PropertyInfo::PropertyInfo(local_88,local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo(local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)&local_e0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterDynamicFont::import(long, String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) */

int ResourceImporterDynamicFont::import
              (long param_1,String *param_2,String *param_3,HashMap *param_4,List *param_5,
              List *param_6,Variant *param_7)

{
  long *plVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  Variant *pVVar18;
  FontFile *this;
  Object *pOVar19;
  Object *pOVar20;
  long lVar21;
  float *pfVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long in_FS_OFFSET;
  undefined1 auVar30 [16];
  float fVar31;
  int local_19c;
  Dictionary *local_198;
  double local_180;
  CowData<char32_t> *local_170;
  Variant local_128 [8];
  Variant local_120 [8];
  Variant local_118 [8];
  Variant local_110 [8];
  Variant local_108 [8];
  Variant local_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  String local_e8 [8];
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  Object *local_b8;
  long local_b0 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_78 [8];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar6 = is_print_verbose_enabled();
  if (cVar6 != '\0') {
    operator+((char *)&local_c8,(String *)"Importing dynamic font from: ");
    Variant::Variant((Variant *)local_58,(String *)&local_c8);
    stringify_variants((Variant *)&local_b8);
    __print_line((String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  }
  StringName::StringName((StringName *)&local_b8,"antialiasing",false);
  pVVar18 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_b8);
  iVar13 = Variant::operator_cast_to_int(pVVar18);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"generate_mipmaps",false);
  pVVar18 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_b8);
  bVar7 = Variant::operator_cast_to_bool(pVVar18);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"disable_embedded_bitmaps",false);
  pVVar18 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_b8);
  bVar8 = Variant::operator_cast_to_bool(pVVar18);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"multichannel_signed_distance_field",false);
  pVVar18 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_b8);
  bVar9 = Variant::operator_cast_to_bool(pVVar18);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"msdf_pixel_range",false);
  pVVar18 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_b8);
  iVar14 = Variant::operator_cast_to_int(pVVar18);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"msdf_size",false);
  pVVar18 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_b8);
  iVar15 = Variant::operator_cast_to_int(pVVar18);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"opentype_features",false);
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                *)param_5,(StringName *)&local_b8);
  Variant::operator_cast_to_Dictionary(local_128);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"force_autohinter",false);
  pVVar18 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_b8);
  bVar10 = Variant::operator_cast_to_bool(pVVar18);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"allow_system_fallback",false);
  pVVar18 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_b8);
  bVar11 = Variant::operator_cast_to_bool(pVVar18);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"hinting",false);
  pVVar18 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_b8);
  iVar16 = Variant::operator_cast_to_int(pVVar18);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"subpixel_positioning",false);
  pVVar18 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_b8);
  iVar17 = Variant::operator_cast_to_int(pVVar18);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"keep_rounding_remainders",false);
  pVVar18 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_b8);
  bVar12 = Variant::operator_cast_to_bool(pVVar18);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"oversampling",false);
  pVVar18 = (Variant *)
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
            ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                          *)param_5,(StringName *)&local_b8);
  Variant::operator_cast_to_float(pVVar18);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"fallbacks",false);
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                *)param_5,(StringName *)&local_b8);
  Variant::operator_cast_to_Array(local_120);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  FileAccess::get_file_as_bytes(local_e8,(Error *)param_3);
  this = (FontFile *)operator_new(0x340,"");
  FontFile::FontFile(this);
  postinitialize_handler((Object *)this);
  cVar6 = RefCounted::init_ref();
  if (cVar6 == '\0') {
ResourceImporterDynamicFont_import:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  cVar6 = RefCounted::reference();
  pOVar19 = (Object *)0x0;
  if (cVar6 != '\0') {
    pOVar19 = (Object *)this;
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)this), cVar6 != '\0')) {
    (**(code **)(*(long *)this + 0x140))(this);
    Memory::free_static(this,false);
  }
  (**(code **)(*(long *)pOVar19 + 0x310))(pOVar19,local_e8);
  (**(code **)(*(long *)pOVar19 + 0x348))(pOVar19,iVar13);
  (**(code **)(*(long *)pOVar19 + 0x358))(pOVar19,bVar8);
  (**(code **)(*(long *)pOVar19 + 0x368))(pOVar19,bVar7);
  (**(code **)(*(long *)pOVar19 + 0x378))(pOVar19,bVar9);
  (**(code **)(*(long *)pOVar19 + 0x388))(pOVar19,iVar14);
  (**(code **)(*(long *)pOVar19 + 0x398))(pOVar19,iVar15);
  (**(code **)(*(long *)pOVar19 + 0x620))(pOVar19,local_128);
  (**(code **)(*(long *)pOVar19 + 0x3a8))(pOVar19,0);
  (**(code **)(*(long *)pOVar19 + 0x3d8))(pOVar19,bVar10);
  (**(code **)(*(long *)pOVar19 + 0x3c8))(pOVar19,bVar11);
  (**(code **)(*(long *)pOVar19 + 1000))(pOVar19,iVar16);
  (**(code **)(*(long *)pOVar19 + 0x418))(pOVar19);
  pcVar5 = *(code **)(*(long *)pOVar19 + 0x1f0);
  Array::Array((Array *)&local_d8);
  local_50 = (undefined1  [16])0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"Font");
  StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
  Array::set_typed((uint)(Array *)&local_d8,(StringName *)0x18,(Variant *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar6 = Array::is_same_typed((Array *)&local_d8);
  if (cVar6 == '\0') {
    Array::assign((Array *)&local_d8);
  }
  else {
    Array::_ref((Array *)&local_d8);
  }
  (*pcVar5)(pOVar19,(Array *)&local_d8);
  Array::~Array((Array *)&local_d8);
  if (iVar17 != 4) goto LAB_00102882;
  (**(code **)(*(long *)pOVar19 + 0x210))((StringName *)&local_b8);
  Array::Array((Array *)local_100,(Array *)&local_b8);
  Array::~Array((Array *)&local_b8);
  cVar6 = Array::is_empty();
  if (cVar6 == '\0') {
    pOVar20 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar20 == (Object *)0x0) goto ResourceImporterDynamicFont_import;
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      pOVar20 = (Object *)0x0;
    }
    pcVar5 = *(code **)(*(long *)pOVar20 + 0x4e0);
    iVar13 = (int)(Array *)local_100;
    pVVar18 = (Variant *)Array::operator[](iVar13);
    local_b8 = (Object *)Variant::operator_cast_to_RID(pVVar18);
    (*pcVar5)((Array *)&local_d8,pOVar20,(StringName *)&local_b8);
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar20), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
      Memory::free_static(pOVar20,false);
    }
    CowData<int>::_copy_on_write((CowData<int> *)&local_d0);
    lVar29 = local_d0;
    CowData<int>::_copy_on_write((CowData<int> *)&local_d0);
    if (local_d0 == 0) {
      lVar21 = 0;
      if (lVar29 != 0) goto LAB_001035dd;
LAB_00103ce0:
      iVar17 = 1;
    }
    else {
      lVar21 = local_d0 + *(long *)(local_d0 + -8) * 4;
      if (lVar29 != lVar21) {
LAB_001035dd:
        do {
          pOVar20 = *(Object **)(TextServerManager::singleton + 0x178);
          if (pOVar20 == (Object *)0x0) goto ResourceImporterDynamicFont_import;
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            pOVar20 = (Object *)0x0;
          }
          pcVar5 = *(code **)(*(long *)pOVar20 + 0x490);
          pVVar18 = (Variant *)Array::operator[](iVar13);
          local_b8 = (Object *)Variant::operator_cast_to_RID(pVVar18);
          (*pcVar5)((Variant *)&local_f0,pOVar20,(StringName *)&local_b8,0x10);
          cVar6 = RefCounted::unreference();
          if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar20), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
            Memory::free_static(pOVar20,false);
          }
          Variant::Variant((Variant *)local_58,"contours");
          Dictionary::operator[]((Variant *)&local_f0);
          Variant::operator_cast_to_Vector((Variant *)&local_c8);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,"points");
          Dictionary::operator[]((Variant *)&local_f0);
          Variant::operator_cast_to_Vector((Variant *)&local_b8);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (local_c0 != 0) {
            uVar26 = 0;
            for (lVar28 = 0; lVar28 < *(long *)(local_c0 + -8); lVar28 = lVar28 + 1) {
              iVar14 = *(int *)(local_c0 + lVar28 * 4);
              iVar15 = (int)uVar26;
              if (iVar15 <= iVar14) {
                uVar23 = (ulong)iVar15;
                pfVar22 = (float *)(local_b0[0] + uVar23 * 0xc);
                uVar25 = uVar26;
                if (iVar14 <= iVar15) goto LAB_00103752;
LAB_0010374e:
                iVar15 = (int)uVar25;
                uVar25 = (ulong)((int)uVar23 + 1);
LAB_00103752:
                if (iVar15 < 0) {
LAB_00103bfc:
                  if (local_b0[0] != 0) {
                    lVar27 = *(long *)(local_b0[0] + -8);
                    uVar24 = uVar23;
                    goto LAB_00103871;
                  }
LAB_00103c0a:
                  lVar27 = 0;
                  uVar24 = uVar23;
                }
                else {
                  if (local_b0[0] == 0) goto LAB_00103c0a;
                  lVar27 = *(long *)(local_b0[0] + -8);
                  uVar24 = uVar23;
                  if ((long)uVar23 < lVar27) {
                    do {
                      if (_LC0 != pfVar22[2]) {
LAB_00103cb7:
                        CowData<Vector3>::_unref((CowData<Vector3> *)local_b0);
                        CowData<int>::_unref((CowData<int> *)&local_c0);
                        Dictionary::~Dictionary((Dictionary *)&local_f0);
                        goto LAB_00103ce0;
                      }
                      uVar24 = (ulong)(int)uVar25;
                      if (((int)uVar25 < 0) || (lVar27 <= (long)uVar24)) break;
                      fVar3 = *pfVar22;
                      pfVar2 = (float *)(local_b0[0] + uVar24 * 0xc);
                      fVar4 = *pfVar2;
                      if (fVar4 != fVar3) {
                        fVar31 = _LC64;
                        if (_LC64 <= ABS(fVar3) * _LC64) {
                          fVar31 = ABS(fVar3) * _LC64;
                        }
                        if (fVar31 <= ABS(fVar3 - fVar4)) {
                          fVar3 = pfVar2[1];
                          fVar4 = pfVar22[1];
                          if (fVar3 != fVar4) {
                            fVar31 = _LC64;
                            if (_LC64 <= ABS(fVar4) * _LC64) {
                              fVar31 = ABS(fVar4) * _LC64;
                            }
                            if (fVar31 <= ABS(fVar4 - fVar3)) goto LAB_00103cb7;
                          }
                        }
                      }
                      uVar23 = uVar23 + 1;
                      pfVar22 = pfVar22 + 3;
                      iVar15 = (int)uVar23;
                      if (iVar14 < iVar15) goto LAB_00103c9d;
                      uVar25 = uVar23 & 0xffffffff;
                      if (iVar15 < iVar14) goto LAB_0010374e;
                      if (iVar15 < 0) goto LAB_00103bfc;
                      uVar24 = uVar23;
                      uVar25 = uVar26;
                      if (lVar27 <= (long)uVar23) break;
                    } while( true );
                  }
                }
LAB_00103871:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,uVar24,lVar27,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
LAB_00103c9d:
              uVar26 = (ulong)(iVar14 + 1);
            }
          }
          lVar29 = lVar29 + 4;
          CowData<Vector3>::_unref((CowData<Vector3> *)local_b0);
          CowData<int>::_unref((CowData<int> *)&local_c0);
          Dictionary::~Dictionary((Dictionary *)&local_f0);
        } while (lVar21 != lVar29);
        if (local_d0 == 0) goto LAB_00103ce0;
      }
      local_198 = (Dictionary *)&local_f0;
      local_f0 = 0;
      if (*(long *)param_3 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_198,(CowData *)param_3);
      }
      local_f8 = 0;
      String::parse_latin1
                ((String *)&local_f8,"%s: Pixel font detected, disabling subpixel positioning.");
      vformat<String>((String *)&local_c8,(String *)&local_f8,local_198);
      Variant::Variant((Variant *)local_58,(String *)&local_c8);
      stringify_variants((Variant *)&local_b8);
      __print_line((String *)&local_b8);
      pOVar20 = local_b8;
      if (local_b8 != (Object *)0x0) {
        LOCK();
        plVar1 = (long *)(local_b8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_b8 = (Object *)0x0;
          Memory::free_static(pOVar20 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
      iVar17 = 0;
    }
    CowData<int>::_unref((CowData<int> *)&local_d0);
  }
  else {
    iVar17 = 4;
  }
  Array::~Array((Array *)local_100);
LAB_00102882:
  (**(code **)(*(long *)pOVar19 + 0x3f8))(pOVar19,iVar17);
  (**(code **)(*(long *)pOVar19 + 0x408))(pOVar19,bVar12);
  StringName::StringName((StringName *)&local_b8,"language_support",false);
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                *)param_5,(StringName *)&local_b8);
  Variant::operator_cast_to_Dictionary(local_118);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  iVar13 = 0;
  while( true ) {
    iVar14 = Dictionary::size();
    iVar15 = (int)(Variant *)local_58;
    if (iVar14 <= iVar13) break;
    Dictionary::get_key_at_index(iVar15);
    Variant::operator_cast_to_String((Variant *)&local_b8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::get_value_at_index(iVar15);
    bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar13 = iVar13 + 1;
    (**(code **)(*(long *)pOVar19 + 0x5e0))(pOVar19,(StringName *)&local_b8,bVar7);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  }
  StringName::StringName((StringName *)&local_b8,"script_support",false);
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                *)param_5,(StringName *)&local_b8);
  Variant::operator_cast_to_Dictionary(local_110);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  for (iVar13 = 0; iVar14 = Dictionary::size(), iVar13 < iVar14; iVar13 = iVar13 + 1) {
    Dictionary::get_key_at_index(iVar15);
    Variant::operator_cast_to_String((Variant *)&local_b8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::get_value_at_index(iVar15);
    bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    (**(code **)(*(long *)pOVar19 + 0x600))(pOVar19,(StringName *)&local_b8,bVar7);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  }
  StringName::StringName((StringName *)&local_b8,"preload",false);
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                *)param_5,(StringName *)&local_b8);
  Variant::operator_cast_to_Array(local_108);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_19c = 0;
  do {
    iVar13 = Array::size();
    if (iVar13 <= local_19c) {
      StringName::StringName((StringName *)&local_b8,"compress",false);
      pVVar18 = (Variant *)
                HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                              *)param_5,(StringName *)&local_b8);
      bVar7 = Variant::operator_cast_to_bool(pVVar18);
      if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
        StringName::unref();
      }
      cVar6 = is_print_verbose_enabled();
      if (cVar6 != '\0') {
        local_d8 = 0;
        String::parse_latin1((String *)&local_d8,".fontdata");
        operator+((char *)&local_f0,(String *)"Saving to: ");
        String::operator+((String *)&local_c8,(String *)&local_f0);
        Variant::Variant((Variant *)local_58,(String *)&local_c8);
        stringify_variants((Variant *)&local_b8);
        __print_line((String *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      }
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,".fontdata");
      String::operator+((String *)&local_c8,(String *)param_4);
      local_b8 = (Object *)0x0;
      pOVar20 = (Object *)__dynamic_cast(pOVar19,&Object::typeinfo,&Resource::typeinfo,0);
      if ((pOVar20 != (Object *)0x0) &&
         (local_b8 = pOVar20, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
        local_b8 = (Object *)0x0;
      }
      iVar13 = ResourceSaver::save((Ref *)&local_b8,(String *)&local_c8,(uint)bVar7 << 5);
      if (((local_b8 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar20 = local_b8, cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar20 + 0x140))();
        Memory::free_static(pOVar20,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      if (iVar13 == 0) {
        cVar6 = is_print_verbose_enabled();
        if (cVar6 != '\0') {
          local_d8 = 0;
          String::parse_latin1((String *)&local_d8,".fontdata");
          operator+((char *)&local_f0,(String *)"Done saving to: ");
          String::operator+((String *)&local_c8,(String *)&local_f0);
          Variant::Variant((Variant *)local_58,(String *)&local_c8);
          stringify_variants((Variant *)&local_b8);
          __print_line((String *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        }
        Array::~Array((Array *)local_108);
        Dictionary::~Dictionary((Dictionary *)local_110);
        Dictionary::~Dictionary((Dictionary *)local_118);
      }
      else {
        local_c8 = 0;
        String::parse_latin1((String *)&local_c8,".res\".");
        operator+((char *)&local_d8,(String *)"Cannot save font to file \"");
        String::operator+((String *)&local_b8,(String *)&local_d8);
        _err_print_error("import","editor/import/resource_importer_dynamic_font.cpp",0x10e,
                         "Condition \"err != OK\" is true. Returning: err",(StringName *)&local_b8,0
                         ,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        Array::~Array((Array *)local_108);
        Dictionary::~Dictionary((Dictionary *)local_110);
        Dictionary::~Dictionary((Dictionary *)local_118);
      }
      cVar6 = RefCounted::unreference();
      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar19), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar19 + 0x140))(pOVar19);
        Memory::free_static(pOVar19,false);
      }
      lVar29 = local_e0;
      if (local_e0 != 0) {
        LOCK();
        plVar1 = (long *)(local_e0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_e0 = 0;
          Memory::free_static((void *)(lVar29 + -0x10),false);
        }
      }
      Array::~Array((Array *)local_120);
      Dictionary::~Dictionary((Dictionary *)local_128);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return iVar13;
    }
    Array::operator[]((int)local_108);
    Variant::operator_cast_to_Dictionary(local_100);
    Variant::Variant((Variant *)local_78,"variation_opentype");
    cVar6 = Dictionary::has(local_100);
    if (cVar6 == '\0') {
      Dictionary::Dictionary((Dictionary *)&local_f8);
    }
    else {
      Variant::Variant((Variant *)local_58,"variation_opentype");
      Dictionary::operator[](local_100);
      Variant::operator_cast_to_Dictionary((Variant *)&local_f8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    local_198 = (Dictionary *)&local_f8;
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,"variation_embolden");
    cVar6 = Dictionary::has(local_100);
    local_180 = 0.0;
    if (cVar6 != '\0') {
      Variant::Variant((Variant *)local_58,"variation_embolden");
      pVVar18 = (Variant *)Dictionary::operator[](local_100);
      local_180 = Variant::operator_cast_to_double(pVVar18);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,"variation_face_index");
    cVar6 = Dictionary::has(local_100);
    iVar13 = 0;
    if (cVar6 != '\0') {
      Variant::Variant((Variant *)local_58,"variation_face_index");
      pVVar18 = (Variant *)Dictionary::operator[](local_100);
      iVar13 = Variant::operator_cast_to_int(pVVar18);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,"variation_transform");
    cVar6 = Dictionary::has(local_100);
    if (cVar6 == '\0') {
      local_98 = 0x3f800000;
      uStack_90 = 0x3f80000000000000;
      local_88 = 0;
    }
    else {
      Variant::Variant((Variant *)local_58,"variation_transform");
      Dictionary::operator[](local_100);
      Variant::operator_cast_to_Transform2D((Variant *)&local_98);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,"size");
    cVar6 = Dictionary::has(local_100);
    if (cVar6 == '\0') {
      local_a0 = _LC77;
    }
    else {
      Variant::Variant((Variant *)local_58,"size");
      pVVar18 = (Variant *)Dictionary::operator[](local_100);
      local_a0 = Variant::operator_cast_to_Vector2i(pVVar18);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,"name");
    cVar6 = Dictionary::has(local_100);
    iVar14 = (int)(String *)&local_c8;
    if (cVar6 == '\0') {
      local_c8 = 0;
      local_b8 = (Object *)0x1045d1;
      local_b0[0] = 0x10;
      String::parse_latin1((StrRange *)&local_c8);
      vformat<int>((String *)&local_f0,iVar14);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    }
    else {
      Variant::Variant((Variant *)local_58,"name");
      Dictionary::operator[](local_100);
      Variant::operator_cast_to_String((Variant *)&local_f0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    local_170 = (CowData<char32_t> *)&local_f0;
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    auVar30._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar30._0_4_ = (float)local_180;
    local_d8 = (**(code **)(*(long *)pOVar19 + 0x200))
                         (auVar30._0_8_,0,pOVar19,local_198,iVar13,0,0,0,local_98,uStack_90,local_88
                          ,0);
    Variant::Variant((Variant *)local_58,"chars");
    Dictionary::operator[](local_100);
    Variant::operator_cast_to_Array((Variant *)&local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    for (iVar13 = 0; iVar15 = Array::size(), iVar13 < iVar15; iVar13 = iVar13 + 1) {
      pVVar18 = (Variant *)Array::operator[](iVar14);
      Variant::operator_cast_to_int(pVVar18);
      pOVar20 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar20 == (Object *)0x0) goto ResourceImporterDynamicFont_import;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        pOVar20 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar20 + 0x4e8))(pOVar20,(Array *)&local_d8,&local_a0);
      cVar6 = RefCounted::unreference();
      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar20), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
        Memory::free_static(pOVar20,false);
      }
    }
    Variant::Variant((Variant *)local_58,"glyphs");
    Dictionary::operator[](local_100);
    Variant::operator_cast_to_Array((Variant *)&local_b8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    for (iVar13 = 0; iVar14 = Array::size(), iVar13 < iVar14; iVar13 = iVar13 + 1) {
      pVVar18 = (Variant *)Array::operator[]((int)(StringName *)&local_b8);
      iVar14 = Variant::operator_cast_to_int(pVVar18);
      pOVar20 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar20 == (Object *)0x0) goto ResourceImporterDynamicFont_import;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        pOVar20 = (Object *)0x0;
      }
      (**(code **)(*(long *)pOVar20 + 0x4f0))(pOVar20,(Array *)&local_d8,&local_a0,(long)iVar14);
      cVar6 = RefCounted::unreference();
      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar20), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
        Memory::free_static(pOVar20,false);
      }
    }
    Array::~Array((Array *)&local_b8);
    Array::~Array((Array *)&local_c8);
    CowData<char32_t>::_unref(local_170);
    Dictionary::~Dictionary(local_198);
    Dictionary::~Dictionary((Dictionary *)local_100);
    local_19c = local_19c + 1;
  } while( true );
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
  return (uint)CONCAT71(0x106f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ResourceImporterDynamicFont::is_class_ptr(void*) const */

uint __thiscall
ResourceImporterDynamicFont::is_class_ptr(ResourceImporterDynamicFont *this,void *param_1)

{
  return (uint)CONCAT71(0x106e,(undefined4 *)param_1 ==
                               &ResourceImporter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceImporterDynamicFont::_getv(StringName const&, Variant&) const */

undefined8 ResourceImporterDynamicFont::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterDynamicFont::_setv(StringName const&, Variant const&) */

undefined8 ResourceImporterDynamicFont::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterDynamicFont::_validate_propertyv(PropertyInfo&) const */

void ResourceImporterDynamicFont::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceImporterDynamicFont::_property_can_revertv(StringName const&) const */

undefined8 ResourceImporterDynamicFont::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceImporterDynamicFont::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceImporterDynamicFont::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterDynamicFont::_notificationv(int, bool) */

void ResourceImporterDynamicFont::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceImporterDynamicFont::can_import_threaded() const */

undefined8 ResourceImporterDynamicFont::can_import_threaded(void)

{
  return 1;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106ab8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106ab8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ResourceImporterDynamicFont::~ResourceImporterDynamicFont() */

void __thiscall
ResourceImporterDynamicFont::~ResourceImporterDynamicFont(ResourceImporterDynamicFont *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106ab8;
  Object::~Object((Object *)this);
  return;
}



/* ResourceImporterDynamicFont::~ResourceImporterDynamicFont() */

void __thiscall
ResourceImporterDynamicFont::~ResourceImporterDynamicFont(ResourceImporterDynamicFont *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106ab8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
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
LAB_00104183:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104183;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001041ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001041ee:
  return &_get_class_namev()::_class_name_static;
}



/* ResourceImporterDynamicFont::_get_class_namev() const */

undefined8 * ResourceImporterDynamicFont::_get_class_namev(void)

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
LAB_00104273:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104273;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterDynamicFont"
                );
      goto LAB_001042de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterDynamicFont");
LAB_001042de:
  return &_get_class_namev()::_class_name_static;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ResourceImporterDynamicFont::import(long, String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) [clone .cold] */

void ResourceImporterDynamicFont::import
               (long param_1,String *param_2,String *param_3,HashMap *param_4,List *param_5,
               List *param_6,Variant *param_7)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* ResourceImporterDynamicFont::get_class() const */

void ResourceImporterDynamicFont::get_class(void)

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
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* ResourceImporterDynamicFont::_initialize_classv() */

void ResourceImporterDynamicFont::_initialize_classv(void)

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
    local_58 = "ResourceImporterDynamicFont";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00105310) */
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
  Array local_f0 [8];
  undefined8 local_e8 [8];
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
  Array::Array(local_f0);
  iVar3 = (int)local_f0;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_e8,param_2);
  *param_1 = local_e8[0];
  local_e8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  pVVar2 = local_48;
  Array::~Array(local_f0);
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



/* WARNING: Removing unreachable block (ram,0x00105588) */
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



/* WARNING: Removing unreachable block (ram,0x00105838) */
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
    if (cVar5 != '\0') goto LAB_00105abb;
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
      if (cVar5 != '\0') goto LAB_00105abb;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00105abb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterDynamicFont::is_class(String const&) const */

undefined8 __thiscall
ResourceImporterDynamicFont::is_class(ResourceImporterDynamicFont *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00105cbb;
  }
  cVar5 = String::operator==(param_1,"ResourceImporterDynamicFont");
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
      if (cVar5 != '\0') goto LAB_00105cbb;
    }
    cVar5 = String::operator==(param_1,"ResourceImporter");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_00105dbe;
    }
  }
LAB_00105cbb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00105dbe:
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
    if ((code *)PTR__bind_methods_00109010 != Object::_bind_methods) {
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
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
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
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001060b6;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001060b6:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
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
      goto LAB_0010626c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010626c:
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
      goto LAB_001064d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001064d1:
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



/* ResourceImporterDynamicFont::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
ResourceImporterDynamicFont::_get_property_listv
          (ResourceImporterDynamicFont *this,List *param_1,bool param_2)

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
  local_78 = "ResourceImporterDynamicFont";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceImporterDynamicFont";
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
      goto LAB_00106781;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00106781:
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
  StringName::StringName((StringName *)&local_78,"ResourceImporterDynamicFont",false);
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



/* CowData<Vector3>::_unref() */

void __thiscall CowData<Vector3>::_unref(CowData<Vector3> *this)

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



/* ResourceImporterDynamicFont::get_importer_name() const */

void ResourceImporterDynamicFont::_GLOBAL__sub_I_get_importer_name(void)

{
  undefined8 uStack_8;
  
  if (TabBar::base_property_helper == '\0') {
    TabBar::base_property_helper = '\x01';
    TabBar::base_property_helper._64_8_ = 0;
    TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle)
    ;
  }
  if (PopupMenu::base_property_helper != '\0') {
    return;
  }
  PopupMenu::base_property_helper = 1;
  PopupMenu::base_property_helper._64_8_ = 0;
  PopupMenu::base_property_helper._56_8_ = 2;
  PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,&__dso_handle
               ,uStack_8);
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
/* ResourceImporter::ImportOption::~ImportOption() */

void __thiscall ResourceImporter::ImportOption::~ImportOption(ImportOption *this)

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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

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
/* ResourceImporterDynamicFont::~ResourceImporterDynamicFont() */

void __thiscall
ResourceImporterDynamicFont::~ResourceImporterDynamicFont(ResourceImporterDynamicFont *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


