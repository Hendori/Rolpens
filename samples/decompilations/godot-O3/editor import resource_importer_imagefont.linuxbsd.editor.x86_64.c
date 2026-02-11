
/* ResourceImporterImageFont::get_option_visibility(String const&, String const&,
   HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) const */

undefined8
ResourceImporterImageFont::get_option_visibility(String *param_1,String *param_2,HashMap *param_3)

{
  return 1;
}



/* ResourceImporterImageFont::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ResourceImporterImageFont::get_recognized_extensions(ResourceImporterImageFont *this,List *param_1)

{
  if (param_1 != (List *)0x0) {
    ImageLoader::get_recognized_extensions(param_1);
    return;
  }
  return;
}



/* ResourceImporterImageFont::get_save_extension() const */

ResourceImporterImageFont * __thiscall
ResourceImporterImageFont::get_save_extension(ResourceImporterImageFont *this)

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



/* ResourceImporterImageFont::get_importer_name() const */

ResourceImporterImageFont * __thiscall
ResourceImporterImageFont::get_importer_name(ResourceImporterImageFont *this)

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



/* ResourceImporterImageFont::get_visible_name() const */

ResourceImporterImageFont * __thiscall
ResourceImporterImageFont::get_visible_name(ResourceImporterImageFont *this)

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



/* ResourceImporterImageFont::get_resource_type() const */

ResourceImporterImageFont * __thiscall
ResourceImporterImageFont::get_resource_type(ResourceImporterImageFont *this)

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



/* ResourceImporterImageFont::ResourceImporterImageFont() */

void __thiscall
ResourceImporterImageFont::ResourceImporterImageFont(ResourceImporterImageFont *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0010ad88;
  return;
}



/* ResourceImporterImageFont::get_import_options(String const&, List<ResourceImporter::ImportOption,
   DefaultAllocator>*, int) const */

void ResourceImporterImageFont::get_import_options(String *param_1,List *param_2,int param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined4 in_register_00000014;
  long *plVar6;
  long in_FS_OFFSET;
  StringName *local_158;
  StringName *local_148;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  char *local_e8;
  long local_e0;
  long local_d8;
  int local_d0;
  long local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8 [8];
  undefined4 local_88;
  long local_80;
  long local_78;
  int local_70;
  long local_68;
  undefined4 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_f0 = 0;
  Variant::Variant((Variant *)local_a8,(Vector *)&local_f8);
  local_e8 = "";
  local_108 = 0;
  local_110 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_e8 = "character_ranges";
  local_e0 = 0x10;
  String::parse_latin1((StrRange *)&local_118);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x22);
  local_e0 = 0;
  if (local_118 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_118);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  if (local_110 == 0) {
LAB_0010041b:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,(StringName *)&local_108);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_0010041b;
    StringName::StringName((StringName *)&local_100,(String *)&local_c8,false);
    if (local_d8 == local_100) {
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_100;
    }
  }
  local_148 = (StringName *)&local_100;
  local_158 = (StringName *)&local_108;
  local_80 = 0;
  local_88 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_d8);
  local_68 = 0;
  local_70 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_c8);
  }
  local_60 = local_c0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*plVar6 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *plVar6 = (long)pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  puVar4[0xc] = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *puVar4 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
  puVar4[6] = local_70;
  if (*(long *)(puVar4 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_68);
  }
  puVar4[10] = local_60;
  Variant::operator=((Variant *)(puVar4 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*plVar6 + 8);
  *(long *)(puVar4 + 0x16) = *plVar6;
  plVar2 = (long *)*plVar6;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar2 = (long *)(local_c8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar2 = (long *)(local_e0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_f0 = 0;
  Variant::Variant((Variant *)local_a8,(Vector *)&local_f8);
  local_e8 = "";
  local_108 = 0;
  local_110 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_e8 = "kerning_pairs";
  local_e0 = 0xd;
  String::parse_latin1((StrRange *)&local_118);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x22);
  local_e0 = 0;
  if (local_118 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_118);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  if (local_110 == 0) {
LAB_0010084b:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,local_158);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_0010084b;
    StringName::StringName(local_148,(String *)&local_c8,false);
    if (local_d8 == local_100) {
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_100;
    }
  }
  local_80 = 0;
  local_88 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_d8);
  local_68 = 0;
  local_70 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_c8);
  }
  local_60 = local_c0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*plVar6 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *plVar6 = (long)pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  puVar4[0xc] = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *puVar4 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
  puVar4[6] = local_70;
  if (*(long *)(puVar4 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_68);
  }
  puVar4[10] = local_60;
  Variant::operator=((Variant *)(puVar4 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*plVar6 + 8);
  *(long *)(puVar4 + 0x16) = *plVar6;
  plVar2 = (long *)*plVar6;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar2 = (long *)(local_c8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar2 = (long *)(local_e0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  lVar3 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar2 = (long *)(local_110 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<String>::_unref((CowData<String> *)&local_f0);
  Variant::Variant((Variant *)local_a8,1);
  local_100 = 0;
  local_108 = 0;
  local_e8 = "1,1024,1,or_greater";
  local_e0 = 0x13;
  String::parse_latin1((StrRange *)local_158);
  local_110 = 0;
  local_e8 = "columns";
  local_e0 = 7;
  String::parse_latin1((StrRange *)&local_110);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,2);
  local_e0 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  }
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  if (local_108 == 0) {
LAB_00100c2b:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,local_148);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_158);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00100c2b;
    StringName::StringName((StringName *)&local_f8,(String *)&local_c8,false);
    if (local_d8 == local_f8) {
      if ((StringName::configured != '\0') && (local_f8 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f8;
    }
  }
  local_80 = 0;
  local_88 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_d8);
  local_68 = 0;
  local_70 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_c8);
  }
  local_60 = local_c0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*plVar6 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *plVar6 = (long)pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  puVar4[0xc] = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *puVar4 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
  puVar4[6] = local_70;
  if (*(long *)(puVar4 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_68);
  }
  puVar4[10] = local_60;
  Variant::operator=((Variant *)(puVar4 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*plVar6 + 8);
  *(long *)(puVar4 + 0x16) = *plVar6;
  plVar2 = (long *)*plVar6;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar2 = (long *)(local_c8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar2 = (long *)(local_e0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  lVar3 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar2 = (long *)(local_108 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,1);
  local_100 = 0;
  local_108 = 0;
  local_e8 = "1,1024,1,or_greater";
  local_e0 = 0x13;
  String::parse_latin1((StrRange *)local_158);
  local_110 = 0;
  local_e8 = "rows";
  local_e0 = 4;
  String::parse_latin1((StrRange *)&local_110);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,2);
  local_e0 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  }
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  if (local_108 == 0) {
LAB_00100ffb:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,local_148);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_158);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00100ffb;
    StringName::StringName((StringName *)&local_f8,(String *)&local_c8,false);
    if (local_d8 == local_f8) {
      if ((StringName::configured != '\0') && (local_f8 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f8;
    }
  }
  local_80 = 0;
  local_88 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_d8);
  local_68 = 0;
  local_70 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_c8);
  }
  local_60 = local_c0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*plVar6 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *plVar6 = (long)pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  puVar4[0xc] = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *puVar4 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
  puVar4[6] = local_70;
  if (*(long *)(puVar4 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_68);
  }
  puVar4[10] = local_60;
  Variant::operator=((Variant *)(puVar4 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*plVar6 + 8);
  *(long *)(puVar4 + 0x16) = *plVar6;
  plVar2 = (long *)*plVar6;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  lVar3 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar2 = (long *)(local_80 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar2 = (long *)(local_c8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar2 = (long *)(local_e0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  lVar3 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar2 = (long *)(local_108 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_b8 = 0;
  local_b0 = 0;
  Variant::Variant((Variant *)local_a8,(Rect2i *)&local_b8);
  local_e8 = "";
  local_100 = 0;
  local_108 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_158);
  local_110 = 0;
  local_e8 = "image_margin";
  local_e0 = 0xc;
  String::parse_latin1((StrRange *)&local_110);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,8);
  local_e0 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  if (local_108 == 0) {
LAB_00101403:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,local_148);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_158);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00101403;
    StringName::StringName((StringName *)&local_f8,(String *)&local_c8,false);
    if (local_d8 == local_f8) {
      if ((StringName::configured != '\0') && (local_f8 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f8;
    }
  }
  local_80 = 0;
  local_88 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_d8);
  local_68 = 0;
  local_70 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_c8);
  }
  local_60 = local_c0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*plVar6 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *plVar6 = (long)pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  puVar4[0xc] = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *puVar4 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
  puVar4[6] = local_70;
  if (*(long *)(puVar4 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_68);
  }
  puVar4[10] = local_60;
  Variant::operator=((Variant *)(puVar4 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*plVar6 + 8);
  *(long *)(puVar4 + 0x16) = *plVar6;
  plVar2 = (long *)*plVar6;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar2 = (long *)(local_c8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar2 = (long *)(local_e0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_158);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_b8 = 0;
  local_b0 = 0;
  Variant::Variant((Variant *)local_a8,(Rect2i *)&local_b8);
  local_e8 = "";
  local_100 = 0;
  local_108 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_158);
  local_110 = 0;
  local_e8 = "character_margin";
  local_e0 = 0x10;
  String::parse_latin1((StrRange *)&local_110);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,8);
  local_e0 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  if (local_108 == 0) {
LAB_001017eb:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,local_148);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_158);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_001017eb;
    StringName::StringName((StringName *)&local_f8,(String *)&local_c8,false);
    if (local_d8 == local_f8) {
      if ((StringName::configured != '\0') && (local_f8 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f8;
    }
  }
  local_80 = 0;
  local_88 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_d8);
  local_68 = 0;
  local_70 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_c8);
  }
  local_60 = local_c0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*plVar6 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *plVar6 = (long)pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  puVar4[0xc] = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *puVar4 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
  puVar4[6] = local_70;
  if (*(long *)(puVar4 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_68);
  }
  puVar4[10] = local_60;
  Variant::operator=((Variant *)(puVar4 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*plVar6 + 8);
  *(long *)(puVar4 + 0x16) = *plVar6;
  plVar2 = (long *)*plVar6;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar2 = (long *)(local_68 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar2 = (long *)(local_c8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar2 = (long *)(local_e0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar2 = (long *)(local_110 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_158);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0);
  local_e8 = "";
  local_100 = 0;
  local_108 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_158);
  local_110 = 0;
  local_e8 = "ascent";
  local_e0 = 6;
  String::parse_latin1((StrRange *)&local_110);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,2);
  local_e0 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  if (local_108 == 0) {
LAB_00101bd3:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,local_148);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_158);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00101bd3;
    StringName::StringName((StringName *)&local_f8,(String *)&local_c8,false);
    if (local_d8 == local_f8) {
      if ((StringName::configured != '\0') && (local_f8 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f8;
    }
  }
  local_80 = 0;
  local_88 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_d8);
  local_68 = 0;
  local_70 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_c8);
  }
  local_60 = local_c0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*plVar6 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *plVar6 = (long)pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  puVar4[0xc] = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *puVar4 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
  puVar4[6] = local_70;
  if (*(long *)(puVar4 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_68);
  }
  puVar4[10] = local_60;
  Variant::operator=((Variant *)(puVar4 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*plVar6 + 8);
  *(long *)(puVar4 + 0x16) = *plVar6;
  plVar2 = (long *)*plVar6;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar2 = (long *)(local_68 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar2 = (long *)(local_c8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar2 = (long *)(local_e0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_158);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0);
  local_e8 = "";
  local_100 = 0;
  local_108 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_158);
  local_110 = 0;
  local_e8 = "descent";
  local_e0 = 7;
  String::parse_latin1((StrRange *)&local_110);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,2);
  local_e0 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  if (local_108 == 0) {
LAB_00101fab:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,local_148);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_158);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00101fab;
    StringName::StringName((StringName *)&local_f8,(String *)&local_c8,false);
    if (local_d8 == local_f8) {
      if ((StringName::configured != '\0') && (local_f8 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f8;
    }
  }
  local_80 = 0;
  local_88 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_d8);
  local_68 = 0;
  local_70 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_c8);
  }
  local_60 = local_c0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*plVar6 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *plVar6 = (long)pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  puVar4[0xc] = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *puVar4 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
  puVar4[6] = local_70;
  if (*(long *)(puVar4 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_68);
  }
  puVar4[10] = local_60;
  Variant::operator=((Variant *)(puVar4 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*plVar6 + 8);
  *(long *)(puVar4 + 0x16) = *plVar6;
  plVar2 = (long *)*plVar6;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar2 = (long *)(local_c8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar2 = (long *)(local_e0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_158);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array((Array *)local_148);
  Variant::Variant((Variant *)local_a8,(Array *)local_148);
  local_e8 = "%s/%s:%s";
  local_108 = 0;
  local_120 = 0;
  local_e0 = 8;
  String::parse_latin1((StrRange *)&local_120);
  vformat<Variant::Type,PropertyHint,char_const*>
            ((StrRange *)&local_118,(StrRange *)&local_120,0x18,0x11,&_LC29);
  local_110 = 0;
  local_e8 = "fallbacks";
  local_e0 = 9;
  String::parse_latin1((StrRange *)&local_110);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,0x1c);
  local_e0 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  }
  local_d8 = 0;
  local_d0 = 0x1f;
  local_c8 = 0;
  if (local_118 == 0) {
LAB_001023ab:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,local_158);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_118);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_001023ab;
    StringName::StringName((StringName *)&local_f8,(String *)&local_c8,false);
    if (local_d8 == local_f8) {
      if ((StringName::configured != '\0') && (local_f8 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f8;
    }
  }
  local_80 = 0;
  local_88 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_d8);
  local_68 = 0;
  local_70 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_c8);
  }
  local_60 = local_c0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*plVar6 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *plVar6 = (long)pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  puVar4[0xc] = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *puVar4 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
  puVar4[6] = local_70;
  if (*(long *)(puVar4 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_68);
  }
  puVar4[10] = local_60;
  Variant::operator=((Variant *)(puVar4 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*plVar6 + 8);
  *(long *)(puVar4 + 0x16) = *plVar6;
  plVar2 = (long *)*plVar6;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar2 = (long *)(local_c8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar2 = (long *)(local_e0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar2 = (long *)(local_110 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_118 != 0) {
    LOCK();
    plVar2 = (long *)(local_118 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      Memory::free_static((void *)(local_118 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::~Array((Array *)local_148);
  Variant::Variant((Variant *)local_a8,true);
  local_e8 = "";
  local_100 = 0;
  local_108 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)local_158);
  local_110 = 0;
  local_e8 = "compress";
  local_e0 = 8;
  String::parse_latin1((StrRange *)&local_110);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,1);
  local_e0 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  if (local_108 == 0) {
LAB_001027a3:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,local_148);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_158);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_001027a3;
    StringName::StringName((StringName *)&local_f8,(String *)&local_c8,false);
    if (local_d8 == local_f8) {
      if ((StringName::configured != '\0') && (local_f8 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f8;
    }
  }
  local_80 = 0;
  local_88 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_d8);
  local_68 = 0;
  local_70 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_c8);
  }
  local_60 = local_c0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*plVar6 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *plVar6 = (long)pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  puVar4[0xc] = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *puVar4 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
  puVar4[6] = local_70;
  if (*(long *)(puVar4 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_68);
  }
  puVar4[10] = local_60;
  Variant::operator=((Variant *)(puVar4 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*plVar6 + 8);
  *(long *)(puVar4 + 0x16) = *plVar6;
  plVar2 = (long *)*plVar6;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar4;
  }
  plVar2[1] = (long)puVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar2 = (long *)(local_68 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  lVar3 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar2 = (long *)(local_80 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar2 = (long *)(local_c8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar2 = (long *)(local_e0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  lVar3 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar2 = (long *)(local_108 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,2);
  local_e8 = "Disabled,Enabled (Integer),Enabled (Fractional)";
  local_100 = 0;
  local_108 = 0;
  local_e0 = 0x2f;
  String::parse_latin1((StrRange *)local_158);
  local_110 = 0;
  local_e8 = "scaling_mode";
  local_e0 = 0xc;
  String::parse_latin1((StrRange *)&local_110);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,2);
  local_e0 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  }
  local_d8 = 0;
  local_d0 = 2;
  local_c8 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)local_158);
    local_c0 = 6;
    if (local_d0 == 0x11) {
      StringName::StringName((StringName *)&local_f8,(String *)&local_c8,false);
      if (local_d8 == local_f8) {
        if ((StringName::configured != '\0') && (local_f8 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_d8 = local_f8;
      }
      goto LAB_00102ba8;
    }
  }
  local_c0 = 6;
  StringName::operator=((StringName *)&local_d8,local_148);
LAB_00102ba8:
  local_80 = 0;
  local_88 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_d8);
  local_68 = 0;
  local_70 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_c8);
  }
  local_60 = local_c0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*plVar6 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *plVar6 = (long)pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  puVar4 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xe) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  puVar4[0xc] = 0;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *puVar4 = local_88;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_78);
  puVar4[6] = local_70;
  if (*(long *)(puVar4 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_68);
  }
  puVar4[10] = local_60;
  Variant::operator=((Variant *)(puVar4 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*plVar6 + 8);
  *(long *)(puVar4 + 0x16) = *plVar6;
  plVar6 = (long *)*plVar6;
  *(undefined8 *)(puVar4 + 0x12) = 0;
  *(undefined8 *)(puVar4 + 0x14) = uVar1;
  if (plVar6[1] != 0) {
    *(undefined4 **)(plVar6[1] + 0x48) = puVar4;
  }
  plVar6[1] = (long)puVar4;
  if (*plVar6 == 0) {
    *plVar6 = (long)puVar4;
  }
  *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar6 = (long *)(local_68 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar6 = (long *)(local_c8 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar6 = (long *)(local_e0 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar6 = (long *)(local_110 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar6 = (long *)(local_108 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
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



/* WARNING: Removing unreachable block (ram,0x00106866) */
/* WARNING: Removing unreachable block (ram,0x001067d6) */
/* WARNING: Removing unreachable block (ram,0x00106790) */
/* WARNING: Removing unreachable block (ram,0x00106878) */
/* WARNING: Removing unreachable block (ram,0x0010515f) */
/* WARNING: Removing unreachable block (ram,0x00105177) */
/* WARNING: Removing unreachable block (ram,0x0010517f) */
/* WARNING: Removing unreachable block (ram,0x00105183) */
/* WARNING: Removing unreachable block (ram,0x0010518a) */
/* WARNING: Removing unreachable block (ram,0x00105190) */
/* WARNING: Removing unreachable block (ram,0x0010519b) */
/* WARNING: Removing unreachable block (ram,0x00105219) */
/* WARNING: Removing unreachable block (ram,0x00105221) */
/* WARNING: Removing unreachable block (ram,0x00105240) */
/* WARNING: Removing unreachable block (ram,0x0010524d) */
/* WARNING: Removing unreachable block (ram,0x00105255) */
/* WARNING: Removing unreachable block (ram,0x00105274) */
/* WARNING: Removing unreachable block (ram,0x00105285) */
/* WARNING: Removing unreachable block (ram,0x00105291) */
/* WARNING: Removing unreachable block (ram,0x00104f02) */
/* WARNING: Removing unreachable block (ram,0x00106163) */
/* WARNING: Removing unreachable block (ram,0x00106125) */
/* WARNING: Removing unreachable block (ram,0x00106132) */
/* WARNING: Removing unreachable block (ram,0x0010613a) */
/* WARNING: Removing unreachable block (ram,0x00106159) */
/* WARNING: Removing unreachable block (ram,0x00106167) */
/* WARNING: Removing unreachable block (ram,0x0010616b) */
/* WARNING: Removing unreachable block (ram,0x00106176) */
/* WARNING: Removing unreachable block (ram,0x00106187) */
/* WARNING: Removing unreachable block (ram,0x0010622a) */
/* WARNING: Removing unreachable block (ram,0x001067e9) */
/* WARNING: Removing unreachable block (ram,0x0010645e) */
/* WARNING: Removing unreachable block (ram,0x0010646c) */
/* WARNING: Removing unreachable block (ram,0x001064dc) */
/* WARNING: Removing unreachable block (ram,0x001064e4) */
/* WARNING: Removing unreachable block (ram,0x00106503) */
/* WARNING: Removing unreachable block (ram,0x00106510) */
/* WARNING: Removing unreachable block (ram,0x00106518) */
/* WARNING: Removing unreachable block (ram,0x00106537) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ResourceImporterImageFont::import(long, String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) */

ulong ResourceImporterImageFont::import
                (long param_1,String *param_2,String *param_3,HashMap *param_4,List *param_5,
                List *param_6,Variant *param_7)

{
  long *plVar1;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  Image *pIVar81;
  char cVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  uint uVar89;
  wchar32 wVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  Resource *pRVar93;
  FontFile *this;
  Object *pOVar94;
  ulong uVar95;
  long lVar96;
  Variant *this_00;
  Object *pOVar97;
  long lVar98;
  wchar32 *pwVar99;
  long lVar100;
  char *pcVar101;
  long lVar102;
  int *piVar103;
  uint uVar104;
  long lVar105;
  undefined8 uVar106;
  long *plVar107;
  uint uVar108;
  Resource *pRVar109;
  uint uVar110;
  uint uVar111;
  long *plVar112;
  long in_FS_OFFSET;
  bool bVar113;
  byte bVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  CowData<String> *local_1f0;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  Variant local_d8 [8];
  Image *local_d0;
  long local_c8;
  long local_c0;
  Variant local_b8 [8];
  long *local_b0;
  Variant local_a8 [8];
  long *local_a0;
  Resource *local_98;
  long *local_90;
  Object *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_60;
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  bVar114 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar82 = is_print_verbose_enabled();
  if (cVar82 != '\0') {
    operator+((char *)&local_98,(String *)"Importing image font from: ");
    Variant::Variant((Variant *)&local_58,(String *)&local_98);
    stringify_variants((Variant *)&local_88);
    __print_line((String *)&local_88);
    pOVar94 = local_88;
    if (local_88 != (Object *)0x0) {
      LOCK();
      plVar112 = (long *)((long)local_88 + -0x10);
      *plVar112 = *plVar112 + -1;
      UNLOCK();
      if (*plVar112 == 0) {
        local_88 = (Object *)0x0;
        Memory::free_static((void *)((long)pOVar94 + -0x10),false);
      }
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    pRVar109 = local_98;
    if (local_98 != (Resource *)0x0) {
      LOCK();
      plVar112 = (long *)((long)local_98 + -0x10);
      *plVar112 = *plVar112 + -1;
      UNLOCK();
      if (*plVar112 == 0) {
        local_98 = (Resource *)0x0;
        Memory::free_static((void *)((long)pRVar109 + -0x10),false);
      }
    }
  }
  StringName::StringName((StringName *)&local_100,"columns",false);
  if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
    uVar104 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
    uVar95 = CONCAT44(0,uVar104);
    lVar100 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
    if (local_100 == 0) {
      uVar89 = StringName::get_empty_hash();
    }
    else {
      uVar89 = *(uint *)(local_100 + 0x20);
    }
    if (uVar89 == 0) {
      uVar89 = 1;
    }
    auVar117._8_8_ = 0;
    auVar117._0_8_ = (ulong)uVar89 * lVar100;
    auVar118._8_8_ = 0;
    auVar118._0_8_ = uVar95;
    lVar105 = SUB168(auVar117 * auVar118,8);
    uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
    uVar110 = SUB164(auVar117 * auVar118,8);
    if (uVar108 != 0) {
      uVar111 = 0;
      while ((uVar108 != uVar89 ||
             (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar105 * 8) + 0x10) != local_100))) {
        uVar111 = uVar111 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar110 + 1) * lVar100;
        auVar42._8_8_ = 0;
        auVar42._0_8_ = uVar95;
        lVar105 = SUB168(auVar3 * auVar42,8);
        uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
        uVar110 = SUB164(auVar3 * auVar42,8);
        if ((uVar108 == 0) ||
           (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar108 * lVar100, auVar43._8_8_ = 0,
           auVar43._0_8_ = uVar95, auVar5._8_8_ = 0,
           auVar5._0_8_ = (ulong)((uVar104 + uVar110) - SUB164(auVar4 * auVar43,8)) * lVar100,
           auVar44._8_8_ = 0, auVar44._0_8_ = uVar95, SUB164(auVar5 * auVar44,8) < uVar111))
        goto LAB_00104cd0;
      }
      iVar83 = Variant::operator_cast_to_int
                         ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar110 * 8) + 0x18)
                         );
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_f8,"rows",false);
      if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
        uVar104 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
        uVar95 = CONCAT44(0,uVar104);
        lVar100 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
        if (local_f8 == 0) {
          uVar89 = StringName::get_empty_hash();
        }
        else {
          uVar89 = *(uint *)(local_f8 + 0x20);
        }
        if (uVar89 == 0) {
          uVar89 = 1;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)uVar89 * lVar100;
        auVar45._8_8_ = 0;
        auVar45._0_8_ = uVar95;
        lVar105 = SUB168(auVar6 * auVar45,8);
        uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
        uVar110 = SUB164(auVar6 * auVar45,8);
        if (uVar108 != 0) {
          uVar111 = 0;
          goto LAB_00103d5a;
        }
      }
    }
  }
LAB_00104cd0:
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
LAB_00103d5a:
  if ((uVar108 == uVar89) &&
     (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar105 * 8) + 0x10) == local_f8)) {
    iVar84 = Variant::operator_cast_to_int
                       ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar110 * 8) + 0x18));
    if ((StringName::configured != '\0') && (local_f8 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_f0,"ascent",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar104 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar95 = CONCAT44(0,uVar104);
      lVar100 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_f0 == 0) {
        uVar89 = StringName::get_empty_hash();
      }
      else {
        uVar89 = *(uint *)(local_f0 + 0x20);
      }
      if (uVar89 == 0) {
        uVar89 = 1;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar89 * lVar100;
      auVar49._8_8_ = 0;
      auVar49._0_8_ = uVar95;
      lVar105 = SUB168(auVar10 * auVar49,8);
      uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
      uVar110 = SUB164(auVar10 * auVar49,8);
      if (uVar108 != 0) {
        uVar111 = 0;
        goto LAB_00103e8a;
      }
    }
    goto LAB_00104cd0;
  }
  uVar111 = uVar111 + 1;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (ulong)(uVar110 + 1) * lVar100;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar95;
  lVar105 = SUB168(auVar7 * auVar46,8);
  uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
  uVar110 = SUB164(auVar7 * auVar46,8);
  if ((uVar108 == 0) ||
     (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar108 * lVar100, auVar47._8_8_ = 0,
     auVar47._0_8_ = uVar95, auVar9._8_8_ = 0,
     auVar9._0_8_ = (ulong)((uVar104 + uVar110) - SUB164(auVar8 * auVar47,8)) * lVar100,
     auVar48._8_8_ = 0, auVar48._0_8_ = uVar95, SUB164(auVar9 * auVar48,8) < uVar111))
  goto LAB_00104cd0;
  goto LAB_00103d5a;
LAB_00103e8a:
  if ((uVar108 == uVar89) &&
     (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar105 * 8) + 0x10) == local_f0)) {
    iVar85 = Variant::operator_cast_to_int
                       ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar110 * 8) + 0x18));
    if ((StringName::configured != '\0') && (local_f0 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_e8,"descent",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar104 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar95 = CONCAT44(0,uVar104);
      lVar100 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_e8 == 0) {
        uVar89 = StringName::get_empty_hash();
      }
      else {
        uVar89 = *(uint *)(local_e8 + 0x20);
      }
      if (uVar89 == 0) {
        uVar89 = 1;
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar89 * lVar100;
      auVar53._8_8_ = 0;
      auVar53._0_8_ = uVar95;
      lVar105 = SUB168(auVar14 * auVar53,8);
      uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
      uVar110 = SUB164(auVar14 * auVar53,8);
      if (uVar108 != 0) {
        uVar111 = 0;
        goto LAB_00103fba;
      }
    }
    goto LAB_00104cd0;
  }
  uVar111 = uVar111 + 1;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (ulong)(uVar110 + 1) * lVar100;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = uVar95;
  lVar105 = SUB168(auVar11 * auVar50,8);
  uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
  uVar110 = SUB164(auVar11 * auVar50,8);
  if ((uVar108 == 0) ||
     (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar108 * lVar100, auVar51._8_8_ = 0,
     auVar51._0_8_ = uVar95, auVar13._8_8_ = 0,
     auVar13._0_8_ = (ulong)((uVar104 + uVar110) - SUB164(auVar12 * auVar51,8)) * lVar100,
     auVar52._8_8_ = 0, auVar52._0_8_ = uVar95, SUB164(auVar13 * auVar52,8) < uVar111))
  goto LAB_00104cd0;
  goto LAB_00103e8a;
LAB_00103fba:
  if ((uVar108 == uVar89) &&
     (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar105 * 8) + 0x10) == local_e8)) {
    iVar86 = Variant::operator_cast_to_int
                       ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar110 * 8) + 0x18));
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_e0,"character_ranges",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar104 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar95 = CONCAT44(0,uVar104);
      lVar100 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_e0 == 0) {
        uVar89 = StringName::get_empty_hash();
      }
      else {
        uVar89 = *(uint *)(local_e0 + 0x20);
      }
      if (uVar89 == 0) {
        uVar89 = 1;
      }
      auVar18._8_8_ = 0;
      auVar18._0_8_ = (ulong)uVar89 * lVar100;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar95;
      lVar105 = SUB168(auVar18 * auVar57,8);
      uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
      iVar87 = SUB164(auVar18 * auVar57,8);
      if (uVar108 != 0) {
        uVar110 = 0;
        goto LAB_001040ea;
      }
    }
    goto LAB_00104cd0;
  }
  uVar111 = uVar111 + 1;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = (ulong)(uVar110 + 1) * lVar100;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = uVar95;
  lVar105 = SUB168(auVar15 * auVar54,8);
  uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
  uVar110 = SUB164(auVar15 * auVar54,8);
  if ((uVar108 == 0) ||
     (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar108 * lVar100, auVar55._8_8_ = 0,
     auVar55._0_8_ = uVar95, auVar17._8_8_ = 0,
     auVar17._0_8_ = (ulong)((uVar104 + uVar110) - SUB164(auVar16 * auVar55,8)) * lVar100,
     auVar56._8_8_ = 0, auVar56._0_8_ = uVar95, SUB164(auVar17 * auVar56,8) < uVar111))
  goto LAB_00104cd0;
  goto LAB_00103fba;
LAB_001040ea:
  if ((uVar108 == uVar89) &&
     (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar105 * 8) + 0x10) == local_e0)) {
    Variant::operator_cast_to_Vector(local_b8);
    if ((StringName::configured != '\0') && (local_e0 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_d0,"kerning_pairs",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar104 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar95 = CONCAT44(0,uVar104);
      lVar100 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_d0 == (Image *)0x0) {
        uVar89 = StringName::get_empty_hash();
      }
      else {
        uVar89 = *(uint *)((long)local_d0 + 0x20);
      }
      if (uVar89 == 0) {
        uVar89 = 1;
      }
      auVar22._8_8_ = 0;
      auVar22._0_8_ = (ulong)uVar89 * lVar100;
      auVar61._8_8_ = 0;
      auVar61._0_8_ = uVar95;
      lVar105 = SUB168(auVar22 * auVar61,8);
      uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
      iVar87 = SUB164(auVar22 * auVar61,8);
      if (uVar108 != 0) {
        uVar110 = 0;
        goto LAB_00104219;
      }
    }
    goto LAB_00104cd0;
  }
  uVar110 = uVar110 + 1;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = (ulong)(iVar87 + 1) * lVar100;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = uVar95;
  lVar105 = SUB168(auVar19 * auVar58,8);
  uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
  iVar87 = SUB164(auVar19 * auVar58,8);
  if ((uVar108 == 0) ||
     (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar108 * lVar100, auVar59._8_8_ = 0,
     auVar59._0_8_ = uVar95, auVar21._8_8_ = 0,
     auVar21._0_8_ = (ulong)((uVar104 + iVar87) - SUB164(auVar20 * auVar59,8)) * lVar100,
     auVar60._8_8_ = 0, auVar60._0_8_ = uVar95, SUB164(auVar21 * auVar60,8) < uVar110))
  goto LAB_00104cd0;
  goto LAB_001040ea;
LAB_00104219:
  if ((uVar108 == uVar89) &&
     ((Image *)*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar105 * 8) + 0x10) == local_d0)) {
    Variant::operator_cast_to_Vector(local_a8);
    if ((StringName::configured != '\0') && (local_d0 != (Image *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_c8,"fallbacks",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar104 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar95 = CONCAT44(0,uVar104);
      lVar100 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_c8 == 0) {
        uVar89 = StringName::get_empty_hash();
      }
      else {
        uVar89 = *(uint *)(local_c8 + 0x20);
      }
      if (uVar89 == 0) {
        uVar89 = 1;
      }
      auVar26._8_8_ = 0;
      auVar26._0_8_ = (ulong)uVar89 * lVar100;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = uVar95;
      lVar105 = SUB168(auVar26 * auVar65,8);
      uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
      iVar87 = SUB164(auVar26 * auVar65,8);
      if (uVar108 != 0) {
        uVar110 = 0;
        goto LAB_00104351;
      }
    }
    goto LAB_00104cd0;
  }
  uVar110 = uVar110 + 1;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = (ulong)(iVar87 + 1) * lVar100;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = uVar95;
  lVar105 = SUB168(auVar23 * auVar62,8);
  uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
  iVar87 = SUB164(auVar23 * auVar62,8);
  if ((uVar108 == 0) ||
     (auVar24._8_8_ = 0, auVar24._0_8_ = (ulong)uVar108 * lVar100, auVar63._8_8_ = 0,
     auVar63._0_8_ = uVar95, auVar25._8_8_ = 0,
     auVar25._0_8_ = (ulong)((uVar104 + iVar87) - SUB164(auVar24 * auVar63,8)) * lVar100,
     auVar64._8_8_ = 0, auVar64._0_8_ = uVar95, SUB164(auVar25 * auVar64,8) < uVar110))
  goto LAB_00104cd0;
  goto LAB_00104219;
LAB_00104351:
  if ((uVar108 == uVar89) &&
     (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar105 * 8) + 0x10) == local_c8)) {
    Variant::operator_cast_to_Array(local_d8);
    if ((StringName::configured != '\0') && (local_c8 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_c0,"image_margin",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar104 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar95 = CONCAT44(0,uVar104);
      lVar100 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_c0 == 0) {
        uVar89 = StringName::get_empty_hash();
      }
      else {
        uVar89 = *(uint *)(local_c0 + 0x20);
      }
      if (uVar89 == 0) {
        uVar89 = 1;
      }
      auVar30._8_8_ = 0;
      auVar30._0_8_ = (ulong)uVar89 * lVar100;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = uVar95;
      lVar105 = SUB168(auVar30 * auVar69,8);
      uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
      uVar110 = SUB164(auVar30 * auVar69,8);
      if (uVar108 != 0) {
        uVar111 = 0;
        goto LAB_00104489;
      }
    }
    goto LAB_00104cd0;
  }
  uVar110 = uVar110 + 1;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = (ulong)(iVar87 + 1) * lVar100;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = uVar95;
  lVar105 = SUB168(auVar27 * auVar66,8);
  uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
  iVar87 = SUB164(auVar27 * auVar66,8);
  if ((uVar108 == 0) ||
     (auVar28._8_8_ = 0, auVar28._0_8_ = (ulong)uVar108 * lVar100, auVar67._8_8_ = 0,
     auVar67._0_8_ = uVar95, auVar29._8_8_ = 0,
     auVar29._0_8_ = (ulong)((uVar104 + iVar87) - SUB164(auVar28 * auVar67,8)) * lVar100,
     auVar68._8_8_ = 0, auVar68._0_8_ = uVar95, SUB164(auVar29 * auVar68,8) < uVar110))
  goto LAB_00104cd0;
  goto LAB_00104351;
LAB_00104489:
  if ((uVar108 == uVar89) &&
     (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar105 * 8) + 0x10) == local_c0)) {
    auVar117 = Variant::operator_cast_to_Rect2i
                         ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar110 * 8) + 0x18)
                         );
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_98,"character_margin",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar104 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar95 = CONCAT44(0,uVar104);
      lVar100 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_98 == (Resource *)0x0) {
        uVar89 = StringName::get_empty_hash();
      }
      else {
        uVar89 = *(uint *)((long)local_98 + 0x20);
      }
      if (uVar89 == 0) {
        uVar89 = 1;
      }
      auVar34._8_8_ = 0;
      auVar34._0_8_ = (ulong)uVar89 * lVar100;
      auVar73._8_8_ = 0;
      auVar73._0_8_ = uVar95;
      lVar105 = SUB168(auVar34 * auVar73,8);
      uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
      uVar110 = SUB164(auVar34 * auVar73,8);
      if (uVar108 != 0) {
        uVar111 = 0;
        goto LAB_001045d9;
      }
    }
    goto LAB_00104cd0;
  }
  uVar111 = uVar111 + 1;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = (ulong)(uVar110 + 1) * lVar100;
  auVar70._8_8_ = 0;
  auVar70._0_8_ = uVar95;
  lVar105 = SUB168(auVar31 * auVar70,8);
  uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
  uVar110 = SUB164(auVar31 * auVar70,8);
  if ((uVar108 == 0) ||
     (auVar32._8_8_ = 0, auVar32._0_8_ = (ulong)uVar108 * lVar100, auVar71._8_8_ = 0,
     auVar71._0_8_ = uVar95, auVar33._8_8_ = 0,
     auVar33._0_8_ = (ulong)((uVar104 + uVar110) - SUB164(auVar32 * auVar71,8)) * lVar100,
     auVar72._8_8_ = 0, auVar72._0_8_ = uVar95, SUB164(auVar33 * auVar72,8) < uVar111))
  goto LAB_00104cd0;
  goto LAB_00104489;
LAB_001045d9:
  if ((uVar89 == uVar108) &&
     ((Resource *)*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar105 * 8) + 0x10) == local_98)) {
    auVar118 = Variant::operator_cast_to_Rect2i
                         ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar110 * 8) + 0x18)
                         );
    if ((StringName::configured != '\0') && (local_98 != (Resource *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_88,"scaling_mode",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar104 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar95 = CONCAT44(0,uVar104);
      lVar100 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_88 == (Object *)0x0) {
        uVar89 = StringName::get_empty_hash();
      }
      else {
        uVar89 = *(uint *)((long)local_88 + 0x20);
      }
      if (uVar89 == 0) {
        uVar89 = 1;
      }
      auVar38._8_8_ = 0;
      auVar38._0_8_ = (ulong)uVar89 * lVar100;
      auVar77._8_8_ = 0;
      auVar77._0_8_ = uVar95;
      lVar105 = SUB168(auVar38 * auVar77,8);
      uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
      uVar110 = SUB164(auVar38 * auVar77,8);
      if (uVar108 != 0) {
        uVar111 = 0;
        goto LAB_0010472a;
      }
    }
    goto LAB_00104cd0;
  }
  uVar111 = uVar111 + 1;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = (ulong)(uVar110 + 1) * lVar100;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = uVar95;
  lVar105 = SUB168(auVar35 * auVar74,8);
  uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
  uVar110 = SUB164(auVar35 * auVar74,8);
  if ((uVar108 == 0) ||
     (auVar36._8_8_ = 0, auVar36._0_8_ = (ulong)uVar108 * lVar100, auVar75._8_8_ = 0,
     auVar75._0_8_ = uVar95, auVar37._8_8_ = 0,
     auVar37._0_8_ = (ulong)((uVar104 + uVar110) - SUB164(auVar36 * auVar75,8)) * lVar100,
     auVar76._8_8_ = 0, auVar76._0_8_ = uVar95, SUB164(auVar37 * auVar76,8) < uVar111))
  goto LAB_00104cd0;
  goto LAB_001045d9;
LAB_0010472a:
  if ((uVar89 != uVar108) ||
     ((Object *)*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar105 * 8) + 0x10) != local_88))
  goto LAB_001046e0;
  iVar87 = Variant::operator_cast_to_int
                     ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar110 * 8) + 0x18));
  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
    StringName::unref();
  }
  local_d0 = (Image *)0x0;
  pRVar93 = (Resource *)operator_new(0x268,"");
  pRVar109 = pRVar93;
  for (lVar100 = 0x4d; lVar100 != 0; lVar100 = lVar100 + -1) {
    *(undefined8 *)pRVar109 = 0;
    pRVar109 = pRVar109 + (ulong)bVar114 * -0x10 + 8;
  }
  Resource::Resource(pRVar93);
  *(undefined4 *)(pRVar93 + 0x240) = 0;
  *(code **)pRVar93 = Memory::free_static;
  *(undefined8 *)(pRVar93 + 0x250) = 0;
  *(undefined8 *)(pRVar93 + 600) = 0;
  pRVar93[0x260] = (Resource)0x0;
  postinitialize_handler((Object *)pRVar93);
  cVar82 = RefCounted::init_ref();
  pIVar81 = local_d0;
  if (cVar82 == '\0') {
    if (local_d0 != (Image *)0x0) {
      local_d0 = (Image *)0x0;
      cVar82 = RefCounted::unreference();
      goto joined_r0x0010514c;
    }
    local_88 = (Object *)0x0;
LAB_00104847:
    local_98 = (Resource *)0x0;
  }
  else {
    if (local_d0 != (Image *)pRVar93) {
      local_d0 = (Image *)pRVar93;
      cVar82 = RefCounted::reference();
      if (cVar82 == '\0') {
        local_d0 = (Image *)0x0;
      }
      if ((pIVar81 != (Image *)0x0) && (cVar82 = RefCounted::unreference(), cVar82 != '\0')) {
        memdelete<Image>(pIVar81);
      }
    }
    cVar82 = RefCounted::unreference();
    pIVar81 = (Image *)pRVar93;
joined_r0x0010514c:
    if (cVar82 != '\0') {
      memdelete<Image>(pIVar81);
    }
    local_88 = (Object *)0x0;
    if (local_d0 == (Image *)0x0) goto LAB_00104847;
    local_98 = (Resource *)local_d0;
    cVar82 = RefCounted::reference();
    if (cVar82 == '\0') goto LAB_00104847;
  }
  iVar88 = ImageLoader::load_image(param_3,(StringName *)&local_98,(StringName *)&local_88,0);
  if ((local_98 != (Resource *)0x0) && (cVar82 = RefCounted::unreference(), cVar82 != '\0')) {
    memdelete<Image>((Image *)local_98);
  }
  if (((local_88 != (Object *)0x0) &&
      (cVar82 = RefCounted::unreference(), pOVar94 = local_88, cVar82 != '\0')) &&
     (cVar82 = predelete_handler(local_88), cVar82 != '\0')) {
    (**(code **)(*(long *)pOVar94 + 0x140))(pOVar94);
    Memory::free_static(pOVar94,false);
  }
  if (iVar88 != 0) {
    local_98 = (Resource *)0x0;
    plVar112 = (long *)(*(long *)param_3 + -0x10);
    if (*(long *)param_3 != 0) {
      do {
        lVar100 = *plVar112;
        if (lVar100 == 0) goto LAB_001054bb;
        LOCK();
        lVar105 = *plVar112;
        bVar113 = lVar100 == lVar105;
        if (bVar113) {
          *plVar112 = lVar100 + 1;
          lVar105 = lVar100;
        }
        UNLOCK();
      } while (!bVar113);
      if (lVar105 != -1) {
        local_98 = *(Resource **)param_3;
      }
    }
LAB_001054bb:
    local_c0 = 0;
    local_88 = (Object *)0x10a7c0;
    local_80 = 0x1e;
    String::parse_latin1((StrRange *)&local_c0);
    vformat<String>((StringName *)&local_88,(StringName *)&local_c0,(StringName *)&local_98);
    _err_print_error("import","editor/import/resource_importer_imagefont.cpp",0x5f,
                     "Condition \"err != OK\" is true. Returning: ERR_FILE_CANT_READ",
                     (StringName *)&local_88,0,0);
    pOVar94 = local_88;
    if (local_88 != (Object *)0x0) {
      LOCK();
      pOVar97 = local_88 + -0x10;
      *(long *)pOVar97 = *(long *)pOVar97 + -1;
      UNLOCK();
      if (*(long *)pOVar97 == 0) {
        local_88 = (Object *)0x0;
        Memory::free_static(pOVar94 + -0x10,false);
      }
    }
    lVar100 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar112 = (long *)(local_c0 + -0x10);
      *plVar112 = *plVar112 + -1;
      UNLOCK();
      if (*plVar112 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar100 + -0x10),false);
      }
    }
LAB_001055a0:
    pRVar109 = local_98;
    if (local_98 != (Resource *)0x0) {
      LOCK();
      pRVar93 = local_98 + -0x10;
      *(long *)pRVar93 = *(long *)pRVar93 + -1;
      UNLOCK();
      if (*(long *)pRVar93 == 0) {
        local_98 = (Resource *)0x0;
        Memory::free_static(pRVar109 + -0x10,false);
      }
    }
LAB_001055d4:
    uVar95 = 0xe;
    goto LAB_001055ee;
  }
  iVar88 = (int)(StringName *)&local_98;
  if (iVar83 < 1) {
    local_98 = (Resource *)0x0;
    local_88 = (Object *)0x10a850;
    local_80 = 0x1e;
    String::parse_latin1((StrRange *)&local_98);
    vformat<int>((String *)&local_88,iVar88);
    pcVar101 = "Condition \"columns <= 0\" is true. Returning: ERR_FILE_CANT_READ";
    uVar106 = 0x61;
LAB_001056d2:
    _err_print_error("import","editor/import/resource_importer_imagefont.cpp",uVar106,pcVar101,
                     (StringName *)&local_88,0,0);
    pOVar94 = local_88;
    if (local_88 != (Object *)0x0) {
      LOCK();
      pOVar97 = local_88 + -0x10;
      *(long *)pOVar97 = *(long *)pOVar97 + -1;
      UNLOCK();
      if (*(long *)pOVar97 == 0) {
        local_88 = (Object *)0x0;
        Memory::free_static(pOVar94 + -0x10,false);
      }
    }
    goto LAB_001055a0;
  }
  if (iVar84 < 1) {
    local_98 = (Resource *)0x0;
    local_88 = (Object *)0x107883;
    local_80 = 0x1b;
    String::parse_latin1((StrRange *)&local_98);
    vformat<int>((String *)&local_88,iVar88);
    pcVar101 = "Condition \"rows <= 0\" is true. Returning: ERR_FILE_CANT_READ";
    uVar106 = 0x62;
    goto LAB_001056d2;
  }
  iVar88 = Image::get_width();
  iVar83 = ((iVar88 - auVar117._0_4_) - auVar117._8_4_) / iVar83;
  iVar88 = Image::get_height();
  iVar84 = ((iVar88 - auVar117._4_4_) - auVar117._12_4_) / iVar84;
  if ((iVar83 < 1) || (iVar84 < 1)) {
    _err_print_error("import","editor/import/resource_importer_imagefont.cpp",0x66,
                     "Condition \"chr_cell_width <= 0 || chr_cell_height <= 0\" is true. Returning: ERR_FILE_CANT_READ"
                     ,"Image margin too big.",0,0);
    goto LAB_001055d4;
  }
  uVar104 = (iVar84 - auVar118._4_4_) - auVar118._12_4_;
  if (((iVar83 - auVar118._0_4_) - auVar118._8_4_ < 1) || ((int)uVar104 < 1)) {
    _err_print_error("import","editor/import/resource_importer_imagefont.cpp",0x6a,
                     "Condition \"chr_width <= 0 || chr_height <= 0\" is true. Returning: ERR_FILE_CANT_READ"
                     ,"Character margin too big.",0,0);
    goto LAB_001055d4;
  }
  this = (FontFile *)operator_new(0x340,"");
  FontFile::FontFile(this);
  postinitialize_handler((Object *)this);
  cVar82 = RefCounted::init_ref();
  if (cVar82 == '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  cVar82 = RefCounted::reference();
  pOVar94 = (Object *)0x0;
  if (cVar82 != '\0') {
    pOVar94 = (Object *)this;
  }
  cVar82 = RefCounted::unreference();
  if ((cVar82 != '\0') && (cVar82 = predelete_handler((Object *)this), cVar82 != '\0')) {
    (**(code **)(*(long *)this + 0x140))(this);
    Memory::free_static(this,false);
  }
  (**(code **)(*(long *)pOVar94 + 0x348))(pOVar94,0);
  (**(code **)(*(long *)pOVar94 + 0x368))(pOVar94,0);
  (**(code **)(*(long *)pOVar94 + 0x378))(pOVar94,0);
  (**(code **)(*(long *)pOVar94 + 0x3a8))(pOVar94,uVar104);
  (**(code **)(*(long *)pOVar94 + 0x3f8))(pOVar94,0);
  (**(code **)(*(long *)pOVar94 + 0x408))(pOVar94,1);
  (**(code **)(*(long *)pOVar94 + 0x3d8))(pOVar94,0);
  (**(code **)(*(long *)pOVar94 + 0x3c8))(pOVar94,0);
  (**(code **)(*(long *)pOVar94 + 1000))(pOVar94,0);
  (**(code **)(*(long *)pOVar94 + 0x418))(pOVar94);
  pcVar2 = *(code **)(*(long *)pOVar94 + 0x1f0);
  Array::Array((Array *)&local_c0);
  local_50 = (undefined1  [16])0x0;
  local_88 = (Object *)&_LC29;
  local_58 = 0;
  local_98 = (Resource *)0x0;
  local_80 = 4;
  String::parse_latin1((StrRange *)&local_98);
  StringName::StringName((StringName *)&local_88,(String *)&local_98,false);
  uVar89 = (uint)(StringName *)&local_c0;
  Array::set_typed(uVar89,(StringName *)0x18,(Variant *)&local_88);
  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
    StringName::unref();
  }
  pRVar109 = local_98;
  if (local_98 != (Resource *)0x0) {
    LOCK();
    pRVar93 = local_98 + -0x10;
    *(long *)pRVar93 = *(long *)pRVar93 + -1;
    UNLOCK();
    if (*(long *)pRVar93 == 0) {
      local_98 = (Resource *)0x0;
      Memory::free_static(pRVar109 + -0x10,false);
    }
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar82 = Array::is_same_typed((Array *)&local_c0);
  if (cVar82 == '\0') {
    Array::assign((Array *)&local_c0);
  }
  else {
    Array::_ref((Array *)&local_c0);
  }
  (*pcVar2)(pOVar94,(StringName *)&local_c0);
  Array::~Array((Array *)&local_c0);
  local_58 = (ulong)uVar104;
  (**(code **)(*(long *)pOVar94 + 0x520))(pOVar94,0,(Variant *)&local_58,0);
  (**(code **)(*(long *)pOVar94 + 0x3b8))(pOVar94,iVar87);
  CowData<String>::_copy_on_write((CowData<String> *)&local_b0);
  plVar107 = local_b0;
  CowData<String>::_copy_on_write((CowData<String> *)&local_b0);
  plVar112 = local_b0;
  if (local_b0 != (long *)0x0) {
    plVar112 = local_b0 + local_b0[-1];
  }
  for (; plVar107 != plVar112; plVar107 = plVar107 + 1) {
    local_c8 = 0;
    local_78 = 0;
    if (*plVar107 == 0) {
      iVar83 = 0;
    }
    else {
      iVar83 = (int)*(undefined8 *)(*plVar107 + -8);
      iVar83 = iVar83 + -1 + (uint)(iVar83 == 0);
    }
    if (0 < iVar83) {
                    /* WARNING: Could not recover jumptable at 0x00104cc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar95 = (*(code *)((long)&switchD_00104cc9::switchdataD_0010ab60 +
                         (long)(int)switchD_00104cc9::switchdataD_0010ab60))();
      return uVar95;
    }
    local_98 = (Resource *)0x0;
    plVar1 = (long *)(*plVar107 + -0x10);
    if (*plVar107 != 0) {
      do {
        lVar100 = *plVar1;
        if (lVar100 == 0) goto LAB_00105965;
        LOCK();
        lVar105 = *plVar1;
        bVar113 = lVar100 == lVar105;
        if (bVar113) {
          *plVar1 = lVar100 + 1;
          lVar105 = lVar100;
        }
        UNLOCK();
      } while (!bVar113);
      if (lVar105 != -1) {
        local_98 = (Resource *)*plVar107;
      }
    }
LAB_00105965:
    local_c0 = 0;
    local_88 = (Object *)0x1078e2;
    local_80 = 0x13;
    String::parse_latin1((StrRange *)&local_c0);
    vformat<String>((StringName *)&local_88,(StringName *)&local_c0,(StringName *)&local_98);
    _err_print_error("import","editor/import/resource_importer_imagefont.cpp",0x110,
                     (StringName *)&local_88);
    pOVar97 = local_88;
    if (local_88 != (Object *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (Object *)0x0;
        Memory::free_static(pOVar97 + -0x10,false);
      }
    }
    lVar100 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar100 + -0x10),false);
      }
    }
    pRVar109 = local_98;
    if (local_98 != (Resource *)0x0) {
      LOCK();
      pRVar93 = local_98 + -0x10;
      *(long *)pRVar93 = *(long *)pRVar93 + -1;
      UNLOCK();
      if (*(long *)pRVar93 == 0) {
        local_98 = (Resource *)0x0;
        Memory::free_static(pRVar109 + -0x10,false);
      }
    }
    lVar100 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar100 + -0x10),false);
      }
    }
  }
  CowData<String>::_copy_on_write((CowData<String> *)&local_a0);
  plVar112 = local_a0;
  CowData<String>::_copy_on_write((CowData<String> *)&local_a0);
  if (local_a0 == (long *)0x0) {
    lVar100 = 0;
  }
  else {
    lVar100 = local_a0[-1];
  }
  if (local_a0 + lVar100 == plVar112) goto LAB_00105cd0;
LAB_00105b3a:
  String::split((char *)&local_98,SUB81(plVar112,0),0x1078f6);
  if ((local_90 != (long *)0x0) && (local_90[-1] == 3)) {
    local_c8 = 0;
    iVar83 = 0;
LAB_0010668f:
    lVar105 = *local_90;
    iVar84 = (int)(StringName *)&local_88;
    if (lVar105 != 0) {
      lVar96 = *(long *)(lVar105 + -8);
      iVar87 = (int)lVar96;
      if (iVar87 != 0) {
        if (iVar87 + -1 <= iVar83) goto LAB_00106d60;
        lVar98 = (long)iVar83;
        if (iVar83 < iVar87 + -6) {
          if (lVar96 == lVar98) {
            piVar103 = (int *)&String::_null;
          }
          else {
            if ((lVar98 < 0) || (lVar96 <= lVar98)) goto LAB_001067b3;
            piVar103 = (int *)(lVar105 + lVar98 * 4);
          }
          if (*piVar103 != 0x5c) goto LAB_001066f0;
          lVar102 = (long)(iVar83 + 1);
          if (lVar102 == lVar96) {
            piVar103 = (int *)&String::_null;
          }
          else {
            if ((iVar83 + 1 < 0) || (lVar96 <= lVar102)) goto LAB_001052e3;
            piVar103 = (int *)(lVar105 + lVar102 * 4);
          }
          if (*piVar103 != 0x75) goto LAB_001066f0;
          lVar102 = (long)(iVar83 + 2);
          if (lVar102 == lVar96) {
            piVar103 = (int *)&String::_null;
          }
          else {
            if ((iVar83 + 2 < 0) || (lVar96 <= lVar102)) goto LAB_001052e3;
            piVar103 = (int *)(lVar105 + lVar102 * 4);
          }
          if ((0x36 < *piVar103 - 0x30U) ||
             ((0x7e0000007e03ffU >> ((ulong)(*piVar103 - 0x30U) & 0x3f) & 1) == 0))
          goto LAB_001066f0;
          lVar102 = (long)(iVar83 + 3);
          if (lVar102 == lVar96) {
            piVar103 = (int *)&String::_null;
          }
          else {
            if ((lVar96 <= lVar102) || (iVar83 + 3 < 0)) goto LAB_001052e3;
            piVar103 = (int *)(lVar105 + lVar102 * 4);
          }
          if ((0x36 < *piVar103 - 0x30U) ||
             ((0x7e0000007e03ffU >> ((ulong)(*piVar103 - 0x30U) & 0x3f) & 1) == 0))
          goto LAB_001066f0;
          lVar102 = (long)(iVar83 + 4);
          if (lVar102 == lVar96) {
            piVar103 = (int *)&String::_null;
          }
          else {
            if ((lVar96 <= lVar102) || (iVar83 + 4 < 0)) goto LAB_001052e3;
            piVar103 = (int *)(lVar105 + lVar102 * 4);
          }
          if ((0x36 < *piVar103 - 0x30U) ||
             ((0x7e0000007e03ffU >> ((ulong)(*piVar103 - 0x30U) & 0x3f) & 1) == 0))
          goto LAB_001066f0;
          iVar87 = iVar83 + 5;
          lVar102 = (long)iVar87;
          if (lVar102 == lVar96) {
            piVar103 = (int *)&String::_null;
          }
          else {
            if ((iVar87 < 0) || (lVar96 <= lVar102)) goto LAB_001052e3;
            piVar103 = (int *)(lVar105 + lVar102 * 4);
          }
          if ((0x36 < *piVar103 - 0x30U) ||
             ((0x7e0000007e03ffU >> ((ulong)(*piVar103 - 0x30U) & 0x3f) & 1) == 0))
          goto LAB_001066f0;
          String::substr(iVar84,(int)local_90);
          wVar90 = String::hex_to_int();
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          String::operator+=((String *)&local_c8,wVar90);
        }
        else {
LAB_001066f0:
          if (lVar96 == lVar98) {
            pwVar99 = (wchar32 *)&String::_null;
          }
          else {
            if ((lVar98 < 0) || (lVar96 <= lVar98)) goto LAB_0010676d;
            pwVar99 = (wchar32 *)(lVar105 + lVar98 * 4);
          }
          String::operator+=((String *)&local_c8,*pwVar99);
          iVar87 = iVar83;
        }
        iVar83 = iVar87 + 1;
        if (local_90 != (long *)0x0) goto code_r0x00106728;
        lVar96 = 0;
        goto LAB_00106738;
      }
      if (-1 < iVar83) goto LAB_00106d60;
      if (iVar83 < -5) goto LAB_001067b3;
      goto LAB_0010676d;
    }
    if (-1 < iVar83) {
LAB_00106d60:
      local_c0 = 0;
      iVar83 = 0;
      do {
        if (local_90 == (long *)0x0) {
          lVar96 = 0;
LAB_00107183:
          lVar102 = 1;
          goto LAB_001052e3;
        }
        lVar105 = local_90[-1];
        lVar96 = lVar105;
        if (lVar105 < 2) goto LAB_00107183;
        lVar98 = local_90[1];
        if (lVar98 == 0) {
          if (-1 < iVar83) goto LAB_00106fd5;
          lVar96 = 0;
          if (iVar83 < -5) {
LAB_00106dc3:
            lVar102 = (long)iVar83;
            if ((-1 < iVar83) && (lVar102 < lVar96)) {
              piVar103 = (int *)(lVar98 + lVar102 * 4);
              goto LAB_00106dd8;
            }
            goto LAB_001052e3;
          }
LAB_00106dee:
          lVar102 = (long)iVar83;
          if ((iVar83 < 0) || (lVar96 <= lVar102)) goto LAB_001052e3;
          pwVar99 = (wchar32 *)(lVar98 + lVar102 * 4);
LAB_00106e03:
          String::operator+=((String *)&local_c0,*pwVar99);
          iVar87 = iVar83;
        }
        else {
          lVar96 = *(long *)(lVar98 + -8);
          if ((int)lVar96 == 0) {
            iVar87 = 0;
            if (-1 < iVar83) goto LAB_00106fd5;
          }
          else {
            iVar87 = (int)lVar96 + -1;
            if (iVar87 <= iVar83) goto LAB_00106fd5;
          }
          if (iVar87 + -5 <= iVar83) {
LAB_00106de9:
            if (iVar83 != lVar96) goto LAB_00106dee;
            pwVar99 = (wchar32 *)&String::_null;
            goto LAB_00106e03;
          }
          if (lVar96 != iVar83) goto LAB_00106dc3;
          piVar103 = (int *)&String::_null;
LAB_00106dd8:
          if (*piVar103 != 0x5c) {
LAB_00106ddd:
            if (lVar98 == 0) {
              lVar96 = 0;
            }
            else {
              lVar96 = *(long *)(lVar98 + -8);
            }
            goto LAB_00106de9;
          }
          lVar102 = (long)(iVar83 + 1);
          if (lVar102 == lVar96) {
            piVar103 = (int *)&String::_null;
          }
          else {
            if ((lVar96 <= lVar102) || (iVar83 + 1 < 0)) goto LAB_001052e3;
            piVar103 = (int *)(lVar98 + lVar102 * 4);
          }
          if (*piVar103 != 0x75) goto LAB_00106ddd;
          lVar102 = (long)(iVar83 + 2);
          if (lVar102 == lVar96) {
            piVar103 = (int *)&String::_null;
          }
          else {
            if ((iVar83 + 2 < 0) || (lVar96 <= lVar102)) goto LAB_001052e3;
            piVar103 = (int *)(lVar98 + lVar102 * 4);
          }
          if ((0x36 < *piVar103 - 0x30U) ||
             ((0x7e0000007e03ffU >> ((ulong)(*piVar103 - 0x30U) & 0x3f) & 1) == 0))
          goto LAB_00106ddd;
          lVar102 = (long)(iVar83 + 3);
          if (lVar102 == lVar96) {
            piVar103 = (int *)&String::_null;
          }
          else {
            if ((lVar96 <= lVar102) || (iVar83 + 3 < 0)) goto LAB_001052e3;
            piVar103 = (int *)(lVar98 + lVar102 * 4);
          }
          if ((0x36 < *piVar103 - 0x30U) ||
             ((0x7e0000007e03ffU >> ((ulong)(*piVar103 - 0x30U) & 0x3f) & 1) == 0))
          goto LAB_00106ddd;
          lVar102 = (long)(iVar83 + 4);
          if (lVar96 == lVar102) {
            piVar103 = (int *)&String::_null;
          }
          else {
            if ((lVar96 <= lVar102) || (iVar83 + 4 < 0)) goto LAB_001052e3;
            piVar103 = (int *)(lVar98 + lVar102 * 4);
          }
          if ((0x36 < *piVar103 - 0x30U) ||
             ((0x7e0000007e03ffU >> ((ulong)(*piVar103 - 0x30U) & 0x3f) & 1) == 0))
          goto LAB_00106ddd;
          iVar87 = iVar83 + 5;
          lVar102 = (long)iVar87;
          if (lVar96 == lVar102) {
            piVar103 = (int *)&String::_null;
          }
          else {
            if ((lVar96 <= lVar102) || (iVar87 < 0)) goto LAB_001052e3;
            piVar103 = (int *)(lVar98 + lVar102 * 4);
          }
          if ((0x36 < *piVar103 - 0x30U) ||
             ((0x7e0000007e03ffU >> ((ulong)(*piVar103 - 0x30U) & 0x3f) & 1) == 0))
          goto LAB_00106ddd;
          String::substr(iVar84,(int)local_90 + 8);
          wVar90 = String::hex_to_int();
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          String::operator+=((String *)&local_c0,wVar90);
        }
        iVar83 = iVar87 + 1;
      } while( true );
    }
    lVar96 = 0;
    if (iVar83 < -5) {
      lVar96 = 0;
LAB_001067b3:
      lVar102 = (long)iVar83;
    }
    else {
LAB_0010676d:
      lVar102 = (long)iVar83;
    }
    goto LAB_001052e3;
  }
  local_c0 = 0;
  plVar107 = (long *)(*plVar112 + -0x10);
  if (*plVar112 != 0) {
    do {
      lVar105 = *plVar107;
      if (lVar105 == 0) goto LAB_00105bad;
      LOCK();
      lVar96 = *plVar107;
      bVar113 = lVar105 == lVar96;
      if (bVar113) {
        *plVar107 = lVar105 + 1;
        lVar96 = lVar105;
      }
      UNLOCK();
    } while (!bVar113);
    if (lVar96 != -1) {
      local_c0 = *plVar112;
    }
  }
LAB_00105bad:
  local_c8 = 0;
  local_88 = (Object *)0x10aa48;
  local_80 = 0x22;
  String::parse_latin1((StrRange *)&local_c8);
  vformat<String>((StringName *)&local_88,(StringName *)&local_c8,(StringName *)&local_c0);
  _err_print_error("import","editor/import/resource_importer_imagefont.cpp",0x124,
                   (StringName *)&local_88);
  pOVar97 = local_88;
  if (local_88 != (Object *)0x0) {
    LOCK();
    plVar107 = (long *)(local_88 + -0x10);
    *plVar107 = *plVar107 + -1;
    UNLOCK();
    if (*plVar107 == 0) {
      local_88 = (Object *)0x0;
      Memory::free_static(pOVar97 + -0x10,false);
    }
  }
  lVar105 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar107 = (long *)(local_c8 + -0x10);
    *plVar107 = *plVar107 + -1;
    UNLOCK();
    if (*plVar107 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar105 + -0x10),false);
    }
  }
  lVar105 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar107 = (long *)(local_c0 + -0x10);
    *plVar107 = *plVar107 + -1;
    UNLOCK();
    if (*plVar107 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar105 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_90);
  goto LAB_00105cb7;
LAB_001046e0:
  uVar111 = uVar111 + 1;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = (ulong)(uVar110 + 1) * lVar100;
  auVar78._8_8_ = 0;
  auVar78._0_8_ = uVar95;
  lVar105 = SUB168(auVar39 * auVar78,8);
  uVar108 = *(uint *)(*(long *)(param_5 + 0x10) + lVar105 * 4);
  uVar110 = SUB164(auVar39 * auVar78,8);
  if ((uVar108 == 0) ||
     (auVar40._8_8_ = 0, auVar40._0_8_ = (ulong)uVar108 * lVar100, auVar79._8_8_ = 0,
     auVar79._0_8_ = uVar95, auVar41._8_8_ = 0,
     auVar41._0_8_ = (ulong)((uVar104 + uVar110) - SUB164(auVar40 * auVar79,8)) * lVar100,
     auVar80._8_8_ = 0, auVar80._0_8_ = uVar95, SUB164(auVar41 * auVar80,8) < uVar111))
  goto LAB_00104cd0;
  goto LAB_0010472a;
code_r0x00106728:
  lVar96 = local_90[-1];
  if (lVar96 < 1) {
LAB_00106738:
    lVar102 = 0;
    goto LAB_001052e3;
  }
  goto LAB_0010668f;
LAB_00106fd5:
  if (lVar105 == 2) {
    lVar102 = 2;
    lVar96 = lVar105;
LAB_001052e3:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar102,lVar96,"p_index","size()","",false,
               true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  iVar83 = String::to_int();
  for (iVar84 = 0;
      ((local_c8 != 0 && (iVar87 = (int)*(undefined8 *)(local_c8 + -8), iVar87 != 0)) &&
      (iVar84 < iVar87 + -1)); iVar84 = iVar84 + 1) {
    for (iVar87 = 0;
        ((local_c0 != 0 && (iVar88 = (int)*(undefined8 *)(local_c0 + -8), iVar88 != 0)) &&
        (iVar87 < iVar88 + -1)); iVar87 = iVar87 + 1) {
      pcVar2 = *(code **)(*(long *)pOVar94 + 0x5c0);
      local_58 = (ulong)(uint)(float)iVar83;
      uVar91 = String::unicode_at(uVar89);
      uVar92 = String::unicode_at((int)(StringName *)&local_c8);
      local_60 = CONCAT44(uVar91,uVar92);
      (*pcVar2)(pOVar94,0,uVar104,&local_60);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<String>::_unref((CowData<String> *)&local_90);
LAB_00105cb7:
  plVar112 = plVar112 + 1;
  if (local_a0 + lVar100 == plVar112) {
LAB_00105cd0:
    if (iVar85 < 1) {
      (**(code **)(*(long *)pOVar94 + 0x4b8))
                (CONCAT44((int)((ulong)((double)(int)uVar104 * __LC62) >> 0x20),
                          (float)((double)(int)uVar104 * __LC62)),pOVar94,0);
    }
    else {
      auVar115._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar115._0_4_ = (float)iVar85;
      (**(code **)(*(long *)pOVar94 + 0x4b8))(auVar115._0_8_,pOVar94,0,uVar104);
    }
    if (iVar86 < 1) {
      (**(code **)(*(long *)pOVar94 + 0x4c8))
                (CONCAT44((int)((ulong)((double)(int)uVar104 * __LC62) >> 0x20),
                          (float)((double)(int)uVar104 * __LC62)),pOVar94,0);
    }
    else {
      auVar116._4_12_ = SUB1612((undefined1  [16])0x0,4);
      auVar116._0_4_ = (float)iVar86;
      (**(code **)(*(long *)pOVar94 + 0x4c8))(auVar116._0_8_,pOVar94,0,uVar104);
    }
    StringName::StringName((StringName *)&local_88,"compress",false);
    this_00 = (Variant *)
              HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                            *)param_5,(StringName *)&local_88);
    bVar113 = Variant::operator_cast_to_bool(this_00);
    if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
      StringName::unref();
    }
    cVar82 = is_print_verbose_enabled();
    if (cVar82 != '\0') {
      local_98 = (Resource *)0x0;
      String::parse_latin1((String *)&local_98,".fontdata");
      operator+((char *)&local_c0,(String *)"Saving to: ");
      String::operator+((String *)&local_88,(String *)&local_c0);
      Variant::Variant((Variant *)&local_58,(String *)&local_88);
      print_line((Variant *)&local_58);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    }
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,".fontdata");
    String::operator+((String *)&local_98,(String *)param_4);
    uVar106 = 0;
    local_88 = (Object *)0x0;
    pOVar97 = (Object *)__dynamic_cast(pOVar94,&Object::typeinfo,&Resource::typeinfo);
    if ((pOVar97 != (Object *)0x0) &&
       (local_88 = pOVar97, cVar82 = RefCounted::reference(), cVar82 == '\0')) {
      local_88 = (Object *)0x0;
    }
    uVar104 = ResourceSaver::save((StringName *)&local_88,(String *)&local_98,(uint)bVar113 << 5);
    uVar95 = (ulong)uVar104;
    if (((local_88 != (Object *)0x0) &&
        (cVar82 = RefCounted::unreference(), pOVar97 = local_88, cVar82 != '\0')) &&
       (cVar82 = predelete_handler(local_88), cVar82 != '\0')) {
      (**(code **)(*(long *)pOVar97 + 0x140))(pOVar97);
      Memory::free_static(pOVar97,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    if (uVar104 == 0) {
      cVar82 = is_print_verbose_enabled();
      if (cVar82 != '\0') {
        local_98 = (Resource *)0x0;
        String::parse_latin1((String *)&local_98,".fontdata");
        operator+((char *)&local_c0,(String *)"Done saving to: ");
        String::operator+((String *)&local_88,(String *)&local_c0);
        Variant::Variant((Variant *)&local_58,(String *)&local_88);
        print_line((Variant *)&local_58);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
    }
    else {
      local_98 = (Resource *)0x0;
      String::parse_latin1((String *)&local_98,".res\".");
      operator+((char *)&local_c0,(String *)"Cannot save font to file \"");
      String::operator+((String *)&local_88,(String *)&local_c0);
      _err_print_error("import","editor/import/resource_importer_imagefont.cpp",0x157,
                       "Condition \"err != OK\" is true. Returning: err",(StringName *)&local_88,0,0
                       ,uVar106);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    }
    cVar82 = RefCounted::unreference();
    if ((cVar82 != '\0') && (cVar82 = predelete_handler(pOVar94), cVar82 != '\0')) {
      (**(code **)(*(long *)pOVar94 + 0x140))(pOVar94);
      Memory::free_static(pOVar94,false);
    }
LAB_001055ee:
    local_1f0 = (CowData<String> *)&local_a0;
    if ((local_d0 != (Image *)0x0) && (cVar82 = RefCounted::unreference(), cVar82 != '\0')) {
      memdelete<Image>(local_d0);
    }
    Array::~Array((Array *)local_d8);
    CowData<String>::_unref(local_1f0);
    CowData<String>::_unref((CowData<String> *)&local_b0);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar95;
  }
  goto LAB_00105b3a;
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
  return (uint)CONCAT71(0x10af,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10af,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ResourceImporter::get_preset_count() const */

undefined8 ResourceImporter::get_preset_count(void)

{
  return 0;
}



/* ResourceImporter::get_preset_name(int) const */

undefined8 ResourceImporter::get_preset_name(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  return CONCAT44(in_register_0000003c,param_1);
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



/* ResourceImporterImageFont::is_class_ptr(void*) const */

uint __thiscall
ResourceImporterImageFont::is_class_ptr(ResourceImporterImageFont *this,void *param_1)

{
  return (uint)CONCAT71(0x10af,(undefined4 *)param_1 ==
                               &ResourceImporter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10af,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10af,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10af,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceImporterImageFont::_getv(StringName const&, Variant&) const */

undefined8 ResourceImporterImageFont::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterImageFont::_setv(StringName const&, Variant const&) */

undefined8 ResourceImporterImageFont::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterImageFont::_validate_propertyv(PropertyInfo&) const */

void ResourceImporterImageFont::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceImporterImageFont::_property_can_revertv(StringName const&) const */

undefined8 ResourceImporterImageFont::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceImporterImageFont::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceImporterImageFont::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterImageFont::_notificationv(int, bool) */

void ResourceImporterImageFont::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceImporterImageFont::can_import_threaded() const */

undefined8 ResourceImporterImageFont::can_import_threaded(void)

{
  return 1;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ac28;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ac28;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ResourceImporterImageFont::~ResourceImporterImageFont() */

void __thiscall
ResourceImporterImageFont::~ResourceImporterImageFont(ResourceImporterImageFont *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ac28;
  Object::~Object((Object *)this);
  return;
}



/* ResourceImporterImageFont::~ResourceImporterImageFont() */

void __thiscall
ResourceImporterImageFont::~ResourceImporterImageFont(ResourceImporterImageFont *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ac28;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
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



/* ResourceImporterImageFont::_get_class_namev() const */

undefined8 * ResourceImporterImageFont::_get_class_namev(void)

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
LAB_001075c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001075c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterImageFont");
      goto LAB_0010762e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterImageFont");
LAB_0010762e:
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
LAB_001076a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001076a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010770e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010770e:
  return &_get_class_namev()::_class_name_static;
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



/* ResourceImporterImageFont::get_class() const */

void ResourceImporterImageFont::get_class(void)

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
            if (lVar5 == 0) goto LAB_00107b6f;
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
LAB_00107b6f:
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
    if (cVar6 != '\0') goto LAB_00107c23;
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
              if (lVar5 == 0) goto LAB_00107cd3;
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
LAB_00107cd3:
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
      if (cVar6 != '\0') goto LAB_00107c23;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00107c23:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterImageFont::is_class(String const&) const */

undefined8 __thiscall
ResourceImporterImageFont::is_class(ResourceImporterImageFont *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00107e0f;
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
LAB_00107e0f:
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
    if (cVar6 != '\0') goto LAB_00107ec3;
  }
  cVar6 = String::operator==(param_1,"ResourceImporterImageFont");
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
              if (lVar5 == 0) goto LAB_00107f83;
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
LAB_00107f83:
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
      if (cVar6 != '\0') goto LAB_00107ec3;
    }
    cVar6 = String::operator==(param_1,"ResourceImporter");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010802c;
    }
  }
LAB_00107ec3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010802c:
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
LAB_00108348:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108348;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00108366;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00108366:
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



/* ResourceImporterImageFont::_initialize_classv() */

void ResourceImporterImageFont::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
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
        if ((code *)PTR__bind_methods_0010d010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0010d008 != RefCounted::_bind_methods) {
        ResourceImporter::_bind_methods();
      }
      ResourceImporter::initialize_class()::initialized = '\x01';
    }
    local_58 = "ResourceImporter";
    local_68 = 0;
    local_50 = 0x10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterImageFont";
    local_70 = 0;
    local_50 = 0x19;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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



/* print_line(Variant const&) */

void print_line(Variant *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  stringify_variants((Variant *)&local_18);
  __print_line((String *)&local_18);
  lVar2 = local_18;
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_18 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceImporter::_get_property_listv(ResourceImporter *this,List *param_1,bool param_2)

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
  if (local_90 == 0) {
LAB_00108c48:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108c48;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108c65;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108c65:
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



/* ResourceImporterImageFont::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
ResourceImporterImageFont::_get_property_listv
          (ResourceImporterImageFont *this,List *param_1,bool param_2)

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
    ResourceImporter::_get_property_listv((ResourceImporter *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ResourceImporterImageFont";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceImporterImageFont";
  local_98 = 0;
  local_70 = 0x19;
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
LAB_00109098:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109098;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001090b5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001090b5:
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
  StringName::StringName((StringName *)&local_78,"ResourceImporterImageFont",false);
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



/* WARNING: Removing unreachable block (ram,0x001095a0) */
/* WARNING: Removing unreachable block (ram,0x001096d0) */
/* WARNING: Removing unreachable block (ram,0x00109848) */
/* WARNING: Removing unreachable block (ram,0x001096dc) */
/* WARNING: Removing unreachable block (ram,0x001096e6) */
/* WARNING: Removing unreachable block (ram,0x0010982a) */
/* WARNING: Removing unreachable block (ram,0x001096f2) */
/* WARNING: Removing unreachable block (ram,0x001096fc) */
/* WARNING: Removing unreachable block (ram,0x0010980c) */
/* WARNING: Removing unreachable block (ram,0x00109708) */
/* WARNING: Removing unreachable block (ram,0x00109712) */
/* WARNING: Removing unreachable block (ram,0x001097ee) */
/* WARNING: Removing unreachable block (ram,0x0010971e) */
/* WARNING: Removing unreachable block (ram,0x00109728) */
/* WARNING: Removing unreachable block (ram,0x001097d0) */
/* WARNING: Removing unreachable block (ram,0x00109734) */
/* WARNING: Removing unreachable block (ram,0x0010973e) */
/* WARNING: Removing unreachable block (ram,0x001097b2) */
/* WARNING: Removing unreachable block (ram,0x00109746) */
/* WARNING: Removing unreachable block (ram,0x00109750) */
/* WARNING: Removing unreachable block (ram,0x00109797) */
/* WARNING: Removing unreachable block (ram,0x00109758) */
/* WARNING: Removing unreachable block (ram,0x0010976d) */
/* WARNING: Removing unreachable block (ram,0x00109779) */
/* String vformat<Variant::Type, PropertyHint, char const*>(String const&, Variant::Type const,
   PropertyHint const, char const* const) */

undefined8 *
vformat<Variant::Type,PropertyHint,char_const*>
          (undefined8 *param_1,bool *param_2,int param_3,int param_4,char *param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
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
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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



/* WARNING: Removing unreachable block (ram,0x00109b18) */
/* WARNING: Removing unreachable block (ram,0x00109c48) */
/* WARNING: Removing unreachable block (ram,0x00109e10) */
/* WARNING: Removing unreachable block (ram,0x00109c54) */
/* WARNING: Removing unreachable block (ram,0x00109c5e) */
/* WARNING: Removing unreachable block (ram,0x00109df0) */
/* WARNING: Removing unreachable block (ram,0x00109c6a) */
/* WARNING: Removing unreachable block (ram,0x00109c74) */
/* WARNING: Removing unreachable block (ram,0x00109dd0) */
/* WARNING: Removing unreachable block (ram,0x00109c80) */
/* WARNING: Removing unreachable block (ram,0x00109c8a) */
/* WARNING: Removing unreachable block (ram,0x00109db0) */
/* WARNING: Removing unreachable block (ram,0x00109c96) */
/* WARNING: Removing unreachable block (ram,0x00109ca0) */
/* WARNING: Removing unreachable block (ram,0x00109d90) */
/* WARNING: Removing unreachable block (ram,0x00109cac) */
/* WARNING: Removing unreachable block (ram,0x00109cb6) */
/* WARNING: Removing unreachable block (ram,0x00109d70) */
/* WARNING: Removing unreachable block (ram,0x00109cc2) */
/* WARNING: Removing unreachable block (ram,0x00109ccc) */
/* WARNING: Removing unreachable block (ram,0x00109d50) */
/* WARNING: Removing unreachable block (ram,0x00109cd4) */
/* WARNING: Removing unreachable block (ram,0x00109cea) */
/* WARNING: Removing unreachable block (ram,0x00109cf6) */
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



/* WARNING: Removing unreachable block (ram,0x00109f58) */
/* WARNING: Removing unreachable block (ram,0x0010a088) */
/* WARNING: Removing unreachable block (ram,0x0010a250) */
/* WARNING: Removing unreachable block (ram,0x0010a094) */
/* WARNING: Removing unreachable block (ram,0x0010a09e) */
/* WARNING: Removing unreachable block (ram,0x0010a230) */
/* WARNING: Removing unreachable block (ram,0x0010a0aa) */
/* WARNING: Removing unreachable block (ram,0x0010a0b4) */
/* WARNING: Removing unreachable block (ram,0x0010a210) */
/* WARNING: Removing unreachable block (ram,0x0010a0c0) */
/* WARNING: Removing unreachable block (ram,0x0010a0ca) */
/* WARNING: Removing unreachable block (ram,0x0010a1f0) */
/* WARNING: Removing unreachable block (ram,0x0010a0d6) */
/* WARNING: Removing unreachable block (ram,0x0010a0e0) */
/* WARNING: Removing unreachable block (ram,0x0010a1d0) */
/* WARNING: Removing unreachable block (ram,0x0010a0ec) */
/* WARNING: Removing unreachable block (ram,0x0010a0f6) */
/* WARNING: Removing unreachable block (ram,0x0010a1b0) */
/* WARNING: Removing unreachable block (ram,0x0010a102) */
/* WARNING: Removing unreachable block (ram,0x0010a10c) */
/* WARNING: Removing unreachable block (ram,0x0010a190) */
/* WARNING: Removing unreachable block (ram,0x0010a114) */
/* WARNING: Removing unreachable block (ram,0x0010a12a) */
/* WARNING: Removing unreachable block (ram,0x0010a136) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
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



/* WARNING: Removing unreachable block (ram,0x0010a3d0) */
/* WARNING: Removing unreachable block (ram,0x0010a500) */
/* WARNING: Removing unreachable block (ram,0x0010a679) */
/* WARNING: Removing unreachable block (ram,0x0010a50c) */
/* WARNING: Removing unreachable block (ram,0x0010a516) */
/* WARNING: Removing unreachable block (ram,0x0010a65b) */
/* WARNING: Removing unreachable block (ram,0x0010a522) */
/* WARNING: Removing unreachable block (ram,0x0010a52c) */
/* WARNING: Removing unreachable block (ram,0x0010a63d) */
/* WARNING: Removing unreachable block (ram,0x0010a538) */
/* WARNING: Removing unreachable block (ram,0x0010a542) */
/* WARNING: Removing unreachable block (ram,0x0010a61f) */
/* WARNING: Removing unreachable block (ram,0x0010a54e) */
/* WARNING: Removing unreachable block (ram,0x0010a558) */
/* WARNING: Removing unreachable block (ram,0x0010a601) */
/* WARNING: Removing unreachable block (ram,0x0010a564) */
/* WARNING: Removing unreachable block (ram,0x0010a56e) */
/* WARNING: Removing unreachable block (ram,0x0010a5e3) */
/* WARNING: Removing unreachable block (ram,0x0010a576) */
/* WARNING: Removing unreachable block (ram,0x0010a580) */
/* WARNING: Removing unreachable block (ram,0x0010a5c8) */
/* WARNING: Removing unreachable block (ram,0x0010a588) */
/* WARNING: Removing unreachable block (ram,0x0010a59e) */
/* WARNING: Removing unreachable block (ram,0x0010a5aa) */
/* String vformat<int, String>(String const&, int const, String const) */

undefined8 * vformat<int,String>(undefined8 *param_1,bool *param_2,int param_3,String *param_4)

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



/* ResourceImporterImageFont::import(long, String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) [clone .cold] */

void ResourceImporterImageFont::import
               (long param_1,String *param_2,String *param_3,HashMap *param_4,List *param_5,
               List *param_6,Variant *param_7)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* WARNING: Control flow encountered bad instruction data */
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceImporterImageFont::~ResourceImporterImageFont() */

void __thiscall
ResourceImporterImageFont::~ResourceImporterImageFont(ResourceImporterImageFont *this)

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


