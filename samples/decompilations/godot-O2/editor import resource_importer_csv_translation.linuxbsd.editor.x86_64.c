
/* ResourceImporterCSVTranslation::get_option_visibility(String const&, String const&,
   HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) const */

undefined8
ResourceImporterCSVTranslation::get_option_visibility
          (String *param_1,String *param_2,HashMap *param_3)

{
  return 1;
}



/* ResourceImporterCSVTranslation::get_preset_count() const */

undefined8 ResourceImporterCSVTranslation::get_preset_count(void)

{
  return 0;
}



/* ResourceImporterCSVTranslation::get_importer_name() const */

ResourceImporterCSVTranslation * __thiscall
ResourceImporterCSVTranslation::get_importer_name(ResourceImporterCSVTranslation *this)

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



/* ResourceImporterCSVTranslation::get_visible_name() const */

ResourceImporterCSVTranslation * __thiscall
ResourceImporterCSVTranslation::get_visible_name(ResourceImporterCSVTranslation *this)

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



/* ResourceImporterCSVTranslation::get_save_extension() const */

ResourceImporterCSVTranslation * __thiscall
ResourceImporterCSVTranslation::get_save_extension(ResourceImporterCSVTranslation *this)

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



/* ResourceImporterCSVTranslation::get_preset_name(int) const */

undefined8 ResourceImporterCSVTranslation::get_preset_name(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterCSVTranslation::get_resource_type() const */

ResourceImporterCSVTranslation * __thiscall
ResourceImporterCSVTranslation::get_resource_type(ResourceImporterCSVTranslation *this)

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



/* ResourceImporterCSVTranslation::get_recognized_extensions(List<String, DefaultAllocator>*) const
    */

void __thiscall
ResourceImporterCSVTranslation::get_recognized_extensions
          (ResourceImporterCSVTranslation *this,List *param_1)

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
  local_38 = &_LC7;
  local_30 = 3;
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



/* ResourceImporterCSVTranslation::get_import_options(String const&,
   List<ResourceImporter::ImportOption, DefaultAllocator>*, int) const */

void ResourceImporterCSVTranslation::get_import_options(String *param_1,List *param_2,int param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined4 in_register_00000014;
  long *plVar6;
  long in_FS_OFFSET;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  char *local_d8;
  long local_d0;
  long local_c8;
  int local_c0;
  long local_b8;
  undefined4 local_b0;
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
  Variant::Variant((Variant *)local_a8,true);
  local_e8 = 0;
  local_d8 = "";
  local_f0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "compress";
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  if (local_f0 == 0) {
LAB_00100538:
    local_b0 = 6;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_00100538;
    StringName::StringName((StringName *)&local_e0,(String *)&local_b8,false);
    if (local_c8 == local_e0) {
      if ((StringName::configured != '\0') && (local_e0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_c8 = local_e0;
    }
  }
  local_80 = 0;
  local_88 = local_d8._0_4_;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
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
  lVar3 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar2 = (long *)(local_b8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar2 = (long *)(local_d0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_f8;
  if (local_f8 != 0) {
    LOCK();
    plVar2 = (long *)(local_f8 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_f8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar2 = (long *)(local_f0 + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0);
  local_d8 = "Comma,Semicolon,Tab";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0x13;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "delimiter";
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,2);
  local_d0 = 0;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  }
  local_c8 = 0;
  local_c0 = 2;
  local_b8 = 0;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 == 0x11) {
      StringName::StringName((StringName *)&local_e0,(String *)&local_b8,false);
      if (local_c8 == local_e0) {
        if ((StringName::configured != '\0') && (local_e0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_c8 = local_e0;
      }
      goto LAB_0010091d;
    }
  }
  local_b0 = 6;
  StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
LAB_0010091d:
  local_80 = 0;
  local_88 = local_d8._0_4_;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  }
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
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
  lVar3 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar6 = (long *)(local_80 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar6 = (long *)(local_b8 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar6 = (long *)(local_d0 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_f8;
  if (local_f8 != 0) {
    LOCK();
    plVar6 = (long *)(local_f8 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_f8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar6 = (long *)(local_f0 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
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



/* ResourceImporterCSVTranslation::ResourceImporterCSVTranslation() */

void __thiscall
ResourceImporterCSVTranslation::ResourceImporterCSVTranslation(ResourceImporterCSVTranslation *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00106bd0;
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



/* CowData<Ref<Translation> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Translation>>::_copy_on_write(CowData<Ref<Translation>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* ResourceImporterCSVTranslation::import(long, String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) */

undefined8
ResourceImporterCSVTranslation::import
          (long param_1,String *param_2,String *param_3,HashMap *param_4,List *param_5,List *param_6
          ,Variant *param_7)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
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
  code *pcVar28;
  undefined1 auVar29 [16];
  bool bVar30;
  char cVar31;
  char cVar32;
  int iVar33;
  uint uVar34;
  undefined *puVar35;
  Resource *this;
  long lVar36;
  long lVar37;
  ulong uVar38;
  Object *pOVar39;
  CowData<char32_t> *pCVar40;
  long lVar41;
  long lVar42;
  Resource *pRVar43;
  Object *pOVar44;
  undefined1 (*pauVar45) [16];
  uint uVar46;
  int iVar47;
  long lVar48;
  ulong uVar49;
  uint uVar50;
  undefined8 uVar51;
  uint uVar52;
  ulong uVar53;
  uint uVar54;
  long in_FS_OFFSET;
  bool bVar55;
  long local_f0;
  Object *local_e8;
  Object *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 local_a8 [8];
  long *local_a0 [2];
  long local_90;
  long local_88;
  long local_80;
  Object *local_78;
  long *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_78,"compress",false);
  if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
    uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
    uVar38 = CONCAT44(0,uVar34);
    lVar41 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
    if (local_78 == (Object *)0x0) {
      uVar50 = StringName::get_empty_hash();
    }
    else {
      uVar50 = *(uint *)(local_78 + 0x20);
    }
    if (uVar50 == 0) {
      uVar50 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar50 * lVar41;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar38;
    lVar48 = SUB168(auVar4 * auVar16,8);
    uVar52 = *(uint *)(*(long *)(param_5 + 0x10) + lVar48 * 4);
    uVar46 = SUB164(auVar4 * auVar16,8);
    if (uVar52 != 0) {
      uVar54 = 0;
      while ((uVar52 != uVar50 ||
             (*(Object **)(*(long *)(*(long *)(param_5 + 8) + lVar48 * 8) + 0x10) != local_78))) {
        uVar54 = uVar54 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar46 + 1) * lVar41;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar38;
        lVar48 = SUB168(auVar5 * auVar17,8);
        uVar52 = *(uint *)(*(long *)(param_5 + 0x10) + lVar48 * 4);
        uVar46 = SUB164(auVar5 * auVar17,8);
        if ((uVar52 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar52 * lVar41, auVar18._8_8_ = 0,
           auVar18._0_8_ = uVar38, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((uVar34 + uVar46) - SUB164(auVar6 * auVar18,8)) * lVar41,
           auVar19._8_8_ = 0, auVar19._0_8_ = uVar38, SUB164(auVar7 * auVar19,8) < uVar54))
        goto LAB_00101770;
      }
      bVar30 = Variant::operator_cast_to_bool
                         ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar46 * 8) + 0x18))
      ;
      if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
        StringName::unref();
      }
      local_f0 = 0;
      StringName::StringName((StringName *)local_68,"delimiter",false);
      if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
        uVar34 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
        uVar38 = CONCAT44(0,uVar34);
        lVar41 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
        if (local_68._0_8_ == 0) {
          uVar50 = StringName::get_empty_hash();
        }
        else {
          uVar50 = *(uint *)(local_68._0_8_ + 0x20);
        }
        if (uVar50 == 0) {
          uVar50 = 1;
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar50 * lVar41;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar38;
        lVar48 = SUB168(auVar8 * auVar20,8);
        uVar52 = *(uint *)(*(long *)(param_5 + 0x10) + lVar48 * 4);
        uVar46 = SUB164(auVar8 * auVar20,8);
        if (uVar52 != 0) {
          uVar54 = 0;
          goto LAB_00101372;
        }
      }
    }
  }
  goto LAB_00101770;
LAB_001014b1:
  if (lVar41 <= lVar48) goto LAB_00101dd2;
  if (lVar48 < 0) goto LAB_001017ca;
  TranslationServer::standardize_locale((String *)&local_c0,SUB81(TranslationServer::singleton,0));
  if (local_a0[0] == (long *)0x0) {
LAB_001017a9:
    lVar41 = 0;
    goto LAB_001017ca;
  }
  lVar41 = local_a0[0][-1];
  if (lVar41 <= lVar48) goto LAB_001017ca;
  String::left((int)(StringName *)&local_78);
  cVar31 = String::operator==((String *)&local_78,"_");
  pOVar39 = local_78;
  if (local_78 != (Object *)0x0) {
    LOCK();
    pOVar44 = local_78 + -0x10;
    *(long *)pOVar44 = *(long *)pOVar44 + -1;
    UNLOCK();
    if (*(long *)pOVar44 == 0) {
      local_78 = (Object *)0x0;
      Memory::free_static(pOVar39 + -0x10,false);
    }
  }
  if (cVar31 == '\0') {
    if ((local_c0 == 0) || (*(uint *)(local_c0 + -8) < 2)) {
      HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)&local_78);
      lVar48 = (long)(int)local_c8;
      if (lVar48 < 0) {
        if (local_a0[0] == (long *)0x0) goto LAB_00101d3c;
      }
      else {
        if (local_a0[0] == (long *)0x0) {
LAB_00101d3c:
          lVar41 = 0;
          goto LAB_001017ca;
        }
        if (lVar48 < local_a0[0][-1]) {
          local_b0 = 0;
          lVar41 = local_a0[0][lVar48];
          plVar1 = (long *)(lVar41 + -0x10);
          if (lVar41 != 0) {
            do {
              lVar41 = *plVar1;
              if (lVar41 == 0) goto LAB_001015f9;
              LOCK();
              lVar42 = *plVar1;
              bVar55 = lVar41 == lVar42;
              if (bVar55) {
                *plVar1 = lVar41 + 1;
                lVar42 = lVar41;
              }
              UNLOCK();
            } while (!bVar55);
            if (lVar42 != -1) {
              local_b0 = local_a0[0][lVar48];
            }
          }
LAB_001015f9:
          local_b8 = 0;
          local_78 = (Object *)0x1067d8;
          local_70 = (long *)&DAT_0000008c;
          String::parse_latin1((StrRange *)&local_b8);
          vformat<String>((StringName *)&local_78,(StrRange *)&local_b8,&local_b0);
          _err_print_error("import","editor/import/resource_importer_csv_translation.cpp",0x6d);
          pOVar39 = local_78;
          if (local_78 != (Object *)0x0) {
            LOCK();
            pOVar44 = local_78 + -0x10;
            *(long *)pOVar44 = *(long *)pOVar44 + -1;
            UNLOCK();
            if (*(long *)pOVar44 == 0) {
              local_78 = (Object *)0x0;
              Memory::free_static(pOVar39 + -0x10,false);
            }
          }
          lVar41 = local_b8;
          if (local_b8 != 0) {
            LOCK();
            plVar1 = (long *)(local_b8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b8 = 0;
              Memory::free_static((void *)(lVar41 + -0x10),false);
            }
          }
          lVar41 = local_b0;
          if (local_b0 != 0) {
            LOCK();
            plVar1 = (long *)(local_b0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b0 = 0;
              Memory::free_static((void *)(lVar41 + -0x10),false);
            }
          }
          goto LAB_0010170a;
        }
      }
      lVar41 = local_a0[0][-1];
      goto LAB_001017ca;
    }
    local_78 = (Object *)0x0;
    plVar1 = (long *)(local_c0 + -0x10);
    do {
      lVar41 = *plVar1;
      if (lVar41 == 0) goto LAB_00101881;
      LOCK();
      lVar48 = *plVar1;
      bVar55 = lVar41 == lVar48;
      if (bVar55) {
        *plVar1 = lVar41 + 1;
        lVar48 = lVar41;
      }
      UNLOCK();
    } while (!bVar55);
    if (lVar48 != -1) {
      local_78 = (Object *)local_c0;
    }
LAB_00101881:
    pOVar39 = local_78;
    if (local_90 == 0) {
      lVar41 = 1;
    }
    else {
      lVar41 = *(long *)(local_90 + -8) + 1;
    }
    iVar33 = CowData<String>::resize<false>((CowData<String> *)&local_90,lVar41);
    if (iVar33 == 0) {
      if (local_90 == 0) {
        lVar48 = -1;
        lVar41 = 0;
      }
      else {
        lVar41 = *(long *)(local_90 + -8);
        lVar48 = lVar41 + -1;
        if (-1 < lVar48) {
          CowData<String>::_copy_on_write((CowData<String> *)&local_90);
          pCVar40 = (CowData<char32_t> *)(local_90 + lVar48 * 8);
          if (pOVar39 != (Object *)*(long *)pCVar40) {
            CowData<char32_t>::_ref(pCVar40,(CowData *)&local_78);
          }
          goto LAB_0010190b;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar48,lVar41,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true");
    }
LAB_0010190b:
    if (pOVar39 != (Object *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pOVar39 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_78 + -0x10),false);
      }
    }
    pRVar43 = (Resource *)0x0;
    this = (Resource *)operator_new(0x2a8,"");
    Resource::Resource(this);
    *(code **)this = RefCounted::init_ref;
    *(undefined8 *)(this + 0x240) = 0;
    local_78 = (Object *)&_LC56;
    local_70 = (long *)0x2;
    String::parse_latin1((StrRange *)(this + 0x240));
    uVar38 = _LC45;
    *(undefined1 (*) [16])(this + 0x250) = (undefined1  [16])0x0;
    *(ulong *)(this + 0x270) = uVar38;
    *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
    StringName::StringName((StringName *)(this + 0x278),"_get_message",false);
    this[0x280] = (Resource)0x0;
    *(undefined8 *)(this + 0x288) = 0;
    StringName::StringName((StringName *)(this + 0x290),"_get_plural_message",false);
    this[0x298] = (Resource)0x0;
    *(undefined8 *)(this + 0x2a0) = 0;
    postinitialize_handler((Object *)this);
    cVar31 = RefCounted::init_ref();
    if (cVar31 != '\0') {
      cVar31 = RefCounted::reference();
      if (cVar31 != '\0') {
        pRVar43 = this;
      }
      cVar31 = RefCounted::unreference();
      if ((cVar31 != '\0') && (cVar31 = predelete_handler((Object *)this), cVar31 != '\0')) {
        (**(code **)(*(long *)this + 0x140))(this);
        Memory::free_static(this,false);
      }
    }
    Translation::set_locale((String *)pRVar43);
    cVar31 = RefCounted::reference();
    pOVar39 = (Object *)0x0;
    if (cVar31 != '\0') {
      pOVar39 = (Object *)pRVar43;
    }
    if (local_80 == 0) {
      lVar41 = 1;
    }
    else {
      lVar41 = *(long *)(local_80 + -8) + 1;
    }
    iVar33 = CowData<Ref<Translation>>::resize<false>((CowData<Ref<Translation>> *)&local_80,lVar41)
    ;
    if (iVar33 == 0) {
      if (local_80 == 0) {
        lVar48 = -1;
        lVar41 = 0;
LAB_001028dc:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar48,lVar41,"p_index","size()","",false
                   ,false);
        goto LAB_00101b1f;
      }
      lVar41 = *(long *)(local_80 + -8);
      lVar48 = lVar41 + -1;
      if (lVar48 < 0) goto LAB_001028dc;
      CowData<Ref<Translation>>::_copy_on_write((CowData<Ref<Translation>> *)&local_80);
      puVar3 = (undefined8 *)(local_80 + lVar48 * 8);
      pOVar44 = (Object *)*puVar3;
      if (pOVar44 == pOVar39) goto LAB_00101b1f;
      *puVar3 = pOVar39;
      if (pOVar39 != (Object *)0x0) {
        cVar31 = RefCounted::reference();
        if (cVar31 == '\0') {
          *puVar3 = 0;
        }
        if (((pOVar44 != (Object *)0x0) && (cVar31 = RefCounted::unreference(), cVar31 != '\0')) &&
           (cVar31 = predelete_handler(pOVar44), cVar31 != '\0')) goto LAB_00101b08;
        goto LAB_00101b24;
      }
      if (((pOVar44 != (Object *)0x0) && (cVar31 = RefCounted::unreference(), cVar31 != '\0')) &&
         (cVar31 = predelete_handler(pOVar44), cVar31 != '\0')) {
LAB_00101b08:
        (**(code **)(*(long *)pOVar44 + 0x140))(pOVar44);
        Memory::free_static(pOVar44,false);
        goto LAB_00101b1f;
      }
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142);
LAB_00101b1f:
      if (pOVar39 != (Object *)0x0) {
LAB_00101b24:
        cVar31 = RefCounted::unreference();
        if ((cVar31 != '\0') && (cVar31 = predelete_handler(pOVar39), cVar31 != '\0')) {
          (**(code **)(*(long *)pOVar39 + 0x140))(pOVar39);
          Memory::free_static(pOVar39,false);
        }
      }
    }
    cVar31 = RefCounted::unreference();
    if ((cVar31 != '\0') && (cVar31 = predelete_handler((Object *)pRVar43), cVar31 != '\0')) {
      (**(code **)(*(long *)pRVar43 + 0x140))(pRVar43);
      Memory::free_static(pRVar43,false);
    }
  }
  else {
    HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int *)&local_78);
  }
LAB_0010170a:
  lVar41 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar41 + -0x10),false);
    }
  }
  iVar33 = (int)local_c8 + 1;
  local_c8 = CONCAT44(local_c8._4_4_,iVar33);
  lVar48 = (long)iVar33;
  if (local_a0[0] == (long *)0x0) {
    if (lVar48 < 0) goto LAB_001017a9;
    goto LAB_00101dd2;
  }
  lVar41 = local_a0[0][-1];
  goto LAB_001014b1;
LAB_00101dd2:
  do {
    (**(code **)(*(long *)local_e8 + 0x238))((StringName *)&local_78,local_e8,&local_f0);
    if (local_a0[0] != local_70) {
      CowData<String>::_unref((CowData<String> *)local_a0);
      local_a0[0] = local_70;
      local_70 = (long *)0x0;
    }
    CowData<String>::_unref((CowData<String> *)&local_70);
    if (local_a0[0] == (long *)0x0) {
      lVar41 = 0;
LAB_001029d0:
      lVar48 = 0;
      goto LAB_001017ca;
    }
    lVar41 = local_a0[0][-1];
    if (lVar41 < 1) goto LAB_001029d0;
    local_c8 = 0;
    if (*local_a0[0] != 0) {
      plVar1 = (long *)(*local_a0[0] + -0x10);
      do {
        lVar41 = *plVar1;
        if (lVar41 == 0) goto LAB_00101ea4;
        LOCK();
        lVar48 = *plVar1;
        bVar55 = lVar41 == lVar48;
        if (bVar55) {
          *plVar1 = lVar41 + 1;
          lVar48 = lVar41;
        }
        UNLOCK();
      } while (!bVar55);
      if (lVar48 != -1) {
        local_c8 = *local_a0[0];
      }
LAB_00101ea4:
      if (local_c8 != 0) {
        if (1 < *(uint *)(local_c8 + -8)) {
          if (local_a0[0] == (long *)0x0) {
            lVar41 = 0;
          }
          else {
            lVar41 = local_a0[0][-1];
          }
          if (local_90 == 0) {
            lVar42 = 0;
          }
          else {
            lVar42 = *(long *)(local_90 + -8);
          }
          lVar48 = 1;
          iVar33 = 0;
          if (lVar42 + 1 + (long)local_48._4_4_ == lVar41) {
            while (local_a0[0] != (long *)0x0) {
              while( true ) {
                if (local_a0[0][-1] <= lVar48) goto joined_r0x00102b68;
                if ((local_68._0_8_ == 0) || (local_48._4_4_ == 0)) break;
                uVar38 = *(ulong *)(hash_table_size_primes_inv + (local_48 & 0xffffffff) * 8);
                uVar34 = ((uint)((ulong)lVar48 >> 0x10) & 0xffff ^ (uint)lVar48) * -0x7a143595;
                uVar34 = (uVar34 ^ uVar34 >> 0xd) * -0x3d4d51cb;
                uVar50 = uVar34 ^ uVar34 >> 0x10;
                if (uVar34 == uVar34 >> 0x10) {
                  uVar50 = 1;
                  uVar49 = uVar38;
                }
                else {
                  uVar49 = uVar50 * uVar38;
                }
                uVar53 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4))
                ;
                auVar12._8_8_ = 0;
                auVar12._0_8_ = uVar53;
                auVar24._8_8_ = 0;
                auVar24._0_8_ = uVar49;
                lVar41 = SUB168(auVar12 * auVar24,8);
                uVar34 = *(uint *)(local_58._8_8_ + lVar41 * 4);
                uVar49 = (ulong)uVar34;
                iVar47 = SUB164(auVar12 * auVar24,8);
                if (uVar34 == 0) break;
                uVar34 = 0;
                while (((uint)uVar49 != uVar50 ||
                       (*(uint *)(local_68._0_8_ + (ulong)*(uint *)(local_68._8_8_ + lVar41 * 4) * 4
                                 ) != (uint)lVar48))) {
                  uVar34 = uVar34 + 1;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = (iVar47 + 1) * uVar38;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar53;
                  lVar41 = SUB168(auVar13 * auVar25,8);
                  uVar52 = *(uint *)(local_58._8_8_ + lVar41 * 4);
                  uVar49 = (ulong)uVar52;
                  iVar47 = SUB164(auVar13 * auVar25,8);
                  if ((uVar52 == 0) ||
                     (auVar14._8_8_ = 0, auVar14._0_8_ = uVar49 * uVar38, auVar26._8_8_ = 0,
                     auVar26._0_8_ = uVar53, auVar15._8_8_ = 0,
                     auVar15._0_8_ =
                          ((*(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4) + iVar47
                           ) - SUB164(auVar14 * auVar26,8)) * uVar38, auVar27._8_8_ = 0,
                     auVar27._0_8_ = uVar53, SUB164(auVar15 * auVar27,8) < uVar34))
                  goto LAB_0010262d;
                }
                lVar48 = lVar48 + 1;
              }
LAB_0010262d:
              lVar41 = (long)iVar33;
              if (local_80 == 0) {
                lVar48 = 0;
LAB_00102891:
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,lVar41,lVar48,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar28 = (code *)invalidInstructionException();
                (*pcVar28)();
              }
              if (*(long *)(local_80 + -8) <= lVar41) {
                lVar48 = *(long *)(local_80 + -8);
                goto LAB_00102891;
              }
              CowData<Ref<Translation>>::_copy_on_write((CowData<Ref<Translation>> *)&local_80);
              plVar1 = *(long **)(local_80 + lVar41 * 8);
              pcVar28 = *(code **)(*plVar1 + 0x1e0);
              StringName::StringName((StringName *)&local_78,"",false);
              if (local_a0[0] == (long *)0x0) {
                lVar41 = 0;
                goto LAB_001017ca;
              }
              lVar41 = local_a0[0][-1];
              if (lVar41 <= lVar48) goto LAB_001017ca;
              String::c_unescape();
              StringName::StringName((StringName *)&local_b0,(String *)&local_c0,false);
              StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
              (*pcVar28)(plVar1,(StringName *)&local_b8,(StringName *)&local_b0,
                         (StringName *)&local_78);
              if ((StringName::configured != '\0') &&
                 (((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
                  (local_b0 != 0)))) {
                StringName::unref();
              }
              lVar41 = local_c0;
              if (local_c0 != 0) {
                LOCK();
                plVar1 = (long *)(local_c0 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_c0 = 0;
                  Memory::free_static((void *)(lVar41 + -0x10),false);
                }
              }
              if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
                StringName::unref();
              }
              iVar33 = iVar33 + 1;
              lVar48 = lVar48 + 1;
            }
          }
          else {
            local_b0 = 0;
            plVar1 = (long *)(local_c8 + -0x10);
            do {
              lVar48 = *plVar1;
              if (lVar48 == 0) goto LAB_00102a2f;
              LOCK();
              lVar42 = *plVar1;
              bVar55 = lVar48 == lVar42;
              if (bVar55) {
                *plVar1 = lVar48 + 1;
                lVar42 = lVar48;
              }
              UNLOCK();
            } while (!bVar55);
            if (lVar42 != -1) {
              local_b0 = local_c8;
            }
LAB_00102a2f:
            if (local_90 == 0) {
              uVar51 = 0;
            }
            else {
              uVar51 = *(undefined8 *)(local_90 + -8);
            }
            local_b8 = 0;
            local_78 = (Object *)0x1068c0;
            local_70 = (long *)0x5a;
            String::parse_latin1((StrRange *)&local_b8);
            vformat<long,String,long>
                      ((StringName *)&local_78,(StrRange *)&local_b8,uVar51,&local_b0,lVar41 + -1);
            _err_print_error("import","editor/import/resource_importer_csv_translation.cpp",0x7b);
            pOVar39 = local_78;
            if (local_78 != (Object *)0x0) {
              LOCK();
              pOVar44 = local_78 + -0x10;
              *(long *)pOVar44 = *(long *)pOVar44 + -1;
              UNLOCK();
              if (*(long *)pOVar44 == 0) {
                local_78 = (Object *)0x0;
                Memory::free_static(pOVar39 + -0x10,false);
              }
            }
            lVar41 = local_b8;
            if (local_b8 != 0) {
              LOCK();
              plVar1 = (long *)(local_b8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_b8 = 0;
                Memory::free_static((void *)(lVar41 + -0x10),false);
              }
            }
            lVar41 = local_b0;
            if (local_b0 != 0) {
              LOCK();
              plVar1 = (long *)(local_b0 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_b0 = 0;
                Memory::free_static((void *)(lVar41 + -0x10),false);
              }
            }
          }
joined_r0x00102b68:
          if (local_c8 == 0) goto LAB_00101eda;
        }
        lVar41 = local_c8;
        LOCK();
        plVar1 = (long *)(local_c8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar41 + -0x10),false);
        }
      }
    }
LAB_00101eda:
    cVar31 = (**(code **)(*(long *)local_e8 + 0x1d8))();
  } while (cVar31 == '\0');
  lVar48 = 0;
  lVar42 = local_80;
  uVar38 = local_48;
  do {
    local_80 = lVar42;
    local_48 = uVar38;
    if ((lVar42 == 0) || (*(long *)(lVar42 + -8) <= lVar48)) {
      if ((void *)local_68._0_8_ != (void *)0x0) {
        local_48._4_4_ = (int)(uVar38 >> 0x20);
        uVar51 = local_58._8_8_;
        if (local_48._4_4_ != 0) {
          uVar34 = *(uint *)(hash_table_size_primes + (uVar38 & 0xffffffff) * 4);
          for (lVar41 = 0; (uint)lVar41 < uVar34; lVar41 = lVar41 + 1) {
            *(undefined4 *)(local_58._8_8_ + lVar41 * 4) = 0;
          }
        }
        Memory::free_static((void *)local_68._0_8_,false);
        Memory::free_static((void *)local_58._0_8_,false);
        Memory::free_static((void *)local_68._8_8_,false);
        Memory::free_static((void *)uVar51,false);
      }
      uVar51 = 0;
      CowData<Ref<Translation>>::_unref((CowData<Ref<Translation>> *)&local_80);
      CowData<String>::_unref((CowData<String> *)&local_90);
LAB_00101d2a:
      CowData<String>::_unref((CowData<String> *)local_a0);
LAB_00101c8f:
      if (((local_e8 != (Object *)0x0) && (cVar31 = RefCounted::unreference(), cVar31 != '\0')) &&
         (cVar31 = predelete_handler(local_e8), cVar31 != '\0')) {
        (**(code **)(*(long *)local_e8 + 0x140))(local_e8);
        Memory::free_static(local_e8,false);
      }
      lVar41 = local_f0;
      if (local_f0 != 0) {
        LOCK();
        plVar1 = (long *)(local_f0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_f0 = 0;
          Memory::free_static((void *)(lVar41 + -0x10),false);
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar51;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_e0 = (Object *)0x0;
    plVar1 = (long *)(lVar42 + lVar48 * 8);
    if (((Object *)*plVar1 != (Object *)0x0) &&
       (local_e0 = (Object *)*plVar1, cVar31 = RefCounted::reference(), cVar31 == '\0')) {
      local_e0 = (Object *)0x0;
    }
    if (bVar30) {
      pRVar43 = (Resource *)operator_new(0x2d8,"");
      Resource::Resource(pRVar43);
      *(undefined8 *)(pRVar43 + 0x240) = 0;
      *(code **)pRVar43 = RefCounted::init_ref;
      local_78 = (Object *)&_LC56;
      local_70 = (long *)0x2;
      String::parse_latin1((StrRange *)(pRVar43 + 0x240));
      uVar38 = _LC45;
      *(undefined1 (*) [16])(pRVar43 + 0x250) = (undefined1  [16])0x0;
      *(ulong *)(pRVar43 + 0x270) = uVar38;
      *(undefined1 (*) [16])(pRVar43 + 0x260) = (undefined1  [16])0x0;
      StringName::StringName((StringName *)(pRVar43 + 0x278),"_get_message",false);
      pRVar43[0x280] = (Resource)0x0;
      *(undefined8 *)(pRVar43 + 0x288) = 0;
      StringName::StringName((StringName *)(pRVar43 + 0x290),"_get_plural_message",false);
      *(undefined8 *)(pRVar43 + 0x2b0) = 0;
      *(undefined8 *)(pRVar43 + 0x2c0) = 0;
      *(undefined8 *)(pRVar43 + 0x2d0) = 0;
      *(undefined8 *)(pRVar43 + 0x2a0) = 0;
      *(undefined **)pRVar43 = &Translation::typeinfo;
      pRVar43[0x298] = (Resource)0x0;
      postinitialize_handler((Object *)pRVar43);
      cVar31 = RefCounted::init_ref();
      if (cVar31 == '\0') {
        pRVar43 = (Resource *)0x0;
      }
      OptimizedTranslation::generate((Ref *)pRVar43);
      pOVar44 = (Object *)__dynamic_cast(pRVar43,&Object::typeinfo,&Translation::typeinfo,0);
      pOVar39 = local_e0;
      if (local_e0 != pOVar44) {
        local_e0 = pOVar44;
        if ((pOVar44 != (Object *)0x0) && (cVar31 = RefCounted::reference(), cVar31 == '\0')) {
          local_e0 = (Object *)0x0;
        }
        if (((pOVar39 != (Object *)0x0) && (cVar31 = RefCounted::unreference(), cVar31 != '\0')) &&
           (cVar31 = predelete_handler(pOVar39), cVar31 != '\0')) {
          (**(code **)(*(long *)pOVar39 + 0x140))(pOVar39);
          Memory::free_static(pOVar39,false);
        }
      }
      cVar31 = RefCounted::unreference();
      if ((cVar31 != '\0') && (cVar31 = predelete_handler((Object *)pRVar43), cVar31 != '\0')) {
        (**(code **)(*(long *)pRVar43 + 0x140))(pRVar43);
        Memory::free_static(pRVar43,false);
      }
    }
    local_b0 = 0;
    local_78 = (Object *)0x103498;
    local_70 = (long *)0xc;
    String::parse_latin1((StrRange *)&local_b0);
    lVar41 = *(long *)(lVar42 + -8);
    if (lVar41 <= lVar48) {
LAB_001017ca:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar48,lVar41,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar28 = (code *)invalidInstructionException();
      (*pcVar28)();
    }
    lVar41 = *plVar1;
    local_b8 = 0;
    lVar37 = *(long *)(lVar41 + 0x240);
    plVar2 = (long *)(lVar37 + -0x10);
    if (lVar37 != 0) {
      do {
        lVar37 = *plVar2;
        if (lVar37 == 0) goto LAB_00101fd8;
        LOCK();
        lVar36 = *plVar2;
        bVar55 = lVar37 == lVar36;
        if (bVar55) {
          *plVar2 = lVar37 + 1;
          lVar36 = lVar37;
        }
        UNLOCK();
      } while (!bVar55);
      if (lVar36 != -1) {
        local_b8 = *(long *)(lVar41 + 0x240);
      }
    }
LAB_00101fd8:
    local_c8 = 0;
    local_78 = (Object *)&_LC18;
    local_70 = (long *)0x1;
    String::parse_latin1((StrRange *)&local_c8);
    String::get_basename();
    String::operator+((String *)&local_c0,(String *)&local_d0);
    String::operator+((String *)&local_78,(String *)&local_c0);
    String::operator+((String *)&local_d8,(String *)&local_78);
    pOVar39 = local_78;
    if (local_78 != (Object *)0x0) {
      LOCK();
      pOVar44 = local_78 + -0x10;
      *(long *)pOVar44 = *(long *)pOVar44 + -1;
      UNLOCK();
      if (*(long *)pOVar44 == 0) {
        local_78 = (Object *)0x0;
        Memory::free_static(pOVar39 + -0x10,false);
      }
    }
    lVar41 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar2 = (long *)(local_c0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar41 + -0x10),false);
      }
    }
    lVar41 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar2 = (long *)(local_d0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar41 + -0x10),false);
      }
    }
    lVar41 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar2 = (long *)(local_c8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar41 + -0x10),false);
      }
    }
    lVar41 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar2 = (long *)(local_b8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar41 + -0x10),false);
      }
    }
    lVar41 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar2 = (long *)(local_b0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar41 + -0x10),false);
      }
    }
    lVar41 = *(long *)(lVar42 + -8);
    if (lVar41 <= lVar48) goto LAB_001017ca;
    lVar41 = *plVar1;
    local_78 = (Object *)0x0;
    lVar42 = *(long *)(lVar41 + 0x240);
    plVar1 = (long *)(lVar42 + -0x10);
    if (lVar42 != 0) {
      do {
        lVar42 = *plVar1;
        if (lVar42 == 0) goto LAB_001021e5;
        LOCK();
        lVar37 = *plVar1;
        bVar55 = lVar42 == lVar37;
        if (bVar55) {
          *plVar1 = lVar42 + 1;
          lVar37 = lVar42;
        }
        UNLOCK();
      } while (!bVar55);
      if (lVar37 != -1) {
        local_78 = *(Object **)(lVar41 + 0x240);
      }
    }
LAB_001021e5:
    uVar38 = String::hash64();
    pOVar39 = local_78;
    uVar38 = (uVar38 ^ (ulong)param_2 ^ (uVar38 ^ (ulong)param_2) >> 0x21) * -0xae502812aa7333;
    uVar38 = (uVar38 ^ uVar38 >> 0x21) * -0x3b314601e57a13ad;
    if (local_78 != (Object *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = (Object *)0x0;
        Memory::free_static((void *)((long)pOVar39 + -0x10),false);
      }
    }
    cVar31 = ResourceUID::has_id(ResourceUID::singleton);
    if (cVar31 != '\0') {
      ResourceUID::get_id_path((long)&local_78);
      if ((Object *)local_d8 != local_78) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        local_d8 = (long)local_78;
        local_78 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    }
    local_78 = (Object *)0x0;
    if (((local_e0 != (Object *)0x0) &&
        (pOVar39 = (Object *)__dynamic_cast(local_e0,&Object::typeinfo,&Resource::typeinfo),
        pOVar39 != (Object *)0x0)) &&
       (local_78 = pOVar39, cVar32 = RefCounted::reference(), cVar32 == '\0')) {
      local_78 = (Object *)0x0;
    }
    ResourceSaver::save((Ref *)&local_78,(String *)&local_d8,0);
    if (((local_78 != (Object *)0x0) &&
        (cVar32 = RefCounted::unreference(), pOVar39 = local_78, cVar32 != '\0')) &&
       (cVar32 = predelete_handler(local_78), cVar32 != '\0')) {
      (**(code **)(*(long *)pOVar39 + 0x140))(pOVar39);
      Memory::free_static(pOVar39,false);
    }
    if (param_7 != (Variant *)0x0) {
      if (*(long *)param_7 == 0) {
        pauVar45 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_7 = pauVar45;
        *(undefined4 *)pauVar45[1] = 0;
        *pauVar45 = (undefined1  [16])0x0;
      }
      pCVar40 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pCVar40 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pCVar40 + 0x10) = (undefined1  [16])0x0;
      if (local_d8 != 0) {
        CowData<char32_t>::_ref(pCVar40,(CowData *)&local_d8);
      }
      plVar1 = *(long **)param_7;
      lVar41 = plVar1[1];
      *(undefined8 *)(pCVar40 + 8) = 0;
      *(long **)(pCVar40 + 0x18) = plVar1;
      *(long *)(pCVar40 + 0x10) = lVar41;
      if (lVar41 != 0) {
        *(CowData<char32_t> **)(lVar41 + 8) = pCVar40;
      }
      plVar1[1] = (long)pCVar40;
      if (*plVar1 == 0) {
        *plVar1 = (long)pCVar40;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    }
    if (cVar31 == '\0') {
      ResourceSaver::set_uid((String *)&local_d8,(uVar38 ^ uVar38 >> 0x21) & 0x7fffffffffffffff);
    }
    lVar41 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar41 + -0x10),false);
      }
    }
    if (((local_e0 != (Object *)0x0) &&
        (cVar31 = RefCounted::unreference(), pOVar39 = local_e0, cVar31 != '\0')) &&
       (cVar31 = predelete_handler(local_e0), cVar31 != '\0')) {
      (**(code **)(*(long *)pOVar39 + 0x140))(pOVar39);
      Memory::free_static(pOVar39,false);
    }
    lVar48 = lVar48 + 1;
    lVar42 = local_80;
    uVar38 = local_48;
  } while( true );
  while( true ) {
    uVar54 = uVar54 + 1;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)(uVar46 + 1) * lVar41;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar38;
    lVar48 = SUB168(auVar9 * auVar21,8);
    uVar52 = *(uint *)(*(long *)(param_5 + 0x10) + lVar48 * 4);
    uVar46 = SUB164(auVar9 * auVar21,8);
    if ((uVar52 == 0) ||
       (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar52 * lVar41, auVar22._8_8_ = 0,
       auVar22._0_8_ = uVar38, auVar11._8_8_ = 0,
       auVar11._0_8_ = (ulong)((uVar34 + uVar46) - SUB164(auVar10 * auVar22,8)) * lVar41,
       auVar23._8_8_ = 0, auVar23._0_8_ = uVar38, SUB164(auVar11 * auVar23,8) < uVar54)) break;
LAB_00101372:
    if ((uVar52 == uVar50) &&
       (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar48 * 8) + 0x10) == local_68._0_8_)) {
      iVar33 = Variant::operator_cast_to_int
                         ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar46 * 8) + 0x18))
      ;
      if ((StringName::configured != '\0') && (local_68._0_8_ != 0)) {
        StringName::unref();
      }
      if (iVar33 == 1) {
        puVar35 = &_LC37;
LAB_001013cf:
        local_68._8_8_ = 1;
        local_68._0_8_ = puVar35;
        String::parse_latin1((StrRange *)&local_f0);
      }
      else {
        if (iVar33 == 2) {
          puVar35 = &_LC38;
          goto LAB_001013cf;
        }
        puVar35 = &_LC36;
        if (iVar33 == 0) goto LAB_001013cf;
      }
      FileAccess::open((String *)&local_e8,(int)param_3,(Error *)0x1);
      if (local_e8 != (Object *)0x0) {
        (**(code **)(*(long *)local_e8 + 0x238))(local_a8,local_e8,&local_f0);
        if ((local_a0[0] != (long *)0x0) && (lVar41 = local_a0[0][-1], 1 < lVar41)) {
          local_90 = 0;
          lVar48 = 1;
          local_68 = (undefined1  [16])0x0;
          local_80 = 0;
          local_c8 = CONCAT44(local_c8._4_4_,1);
          local_48 = _LC45;
          local_58 = (undefined1  [16])0x0;
          goto LAB_001014b1;
        }
        uVar51 = 0x2b;
        _err_print_error("import","editor/import/resource_importer_csv_translation.cpp",0x5f,
                         "Condition \"line.size() <= 1\" is true. Returning: ERR_PARSE_ERROR",0,0);
        goto LAB_00101d2a;
      }
      local_78 = (Object *)0x0;
      local_68._8_8_ = 2;
      local_68._0_8_ = &_LC39;
      String::parse_latin1((StrRange *)&local_78);
      operator+((char *)&local_88,(String *)"Cannot open file from path \'");
      String::operator+((String *)local_68,(String *)&local_88);
      _err_print_error("import","editor/import/resource_importer_csv_translation.cpp",0x5c,
                       "Condition \"f.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",
                       (StringName *)local_68,0,0);
      uVar51 = local_68._0_8_;
      if (local_68._0_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_68._0_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          auVar29._8_8_ = 0;
          auVar29._0_8_ = local_68._8_8_;
          local_68 = auVar29 << 0x40;
          Memory::free_static((void *)(uVar51 + -0x10),false);
        }
      }
      lVar41 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar41 + -0x10),false);
        }
      }
      pOVar39 = local_78;
      if (local_78 != (Object *)0x0) {
        LOCK();
        pOVar44 = local_78 + -0x10;
        *(long *)pOVar44 = *(long *)pOVar44 + -1;
        UNLOCK();
        if (*(long *)pOVar44 == 0) {
          local_78 = (Object *)0x0;
          Memory::free_static(pOVar39 + -0x10,false);
        }
      }
      uVar51 = 0x1f;
      goto LAB_00101c8f;
    }
  }
LAB_00101770:
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar28 = (code *)invalidInstructionException();
  (*pcVar28)();
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
  return (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
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



/* ResourceImporterCSVTranslation::is_class_ptr(void*) const */

uint __thiscall
ResourceImporterCSVTranslation::is_class_ptr(ResourceImporterCSVTranslation *this,void *param_1)

{
  return (uint)CONCAT71(0x106d,(undefined4 *)param_1 ==
                               &ResourceImporter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceImporterCSVTranslation::_getv(StringName const&, Variant&) const */

undefined8 ResourceImporterCSVTranslation::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterCSVTranslation::_setv(StringName const&, Variant const&) */

undefined8 ResourceImporterCSVTranslation::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterCSVTranslation::_validate_propertyv(PropertyInfo&) const */

void ResourceImporterCSVTranslation::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceImporterCSVTranslation::_property_can_revertv(StringName const&) const */

undefined8 ResourceImporterCSVTranslation::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceImporterCSVTranslation::_property_get_revertv(StringName const&, Variant&) const */

undefined8
ResourceImporterCSVTranslation::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterCSVTranslation::_notificationv(int, bool) */

void ResourceImporterCSVTranslation::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceImporterCSVTranslation::can_import_threaded() const */

undefined8 ResourceImporterCSVTranslation::can_import_threaded(void)

{
  return 1;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106a70;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106a70;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ResourceImporterCSVTranslation::~ResourceImporterCSVTranslation() */

void __thiscall
ResourceImporterCSVTranslation::~ResourceImporterCSVTranslation
          (ResourceImporterCSVTranslation *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106a70;
  Object::~Object((Object *)this);
  return;
}



/* ResourceImporterCSVTranslation::~ResourceImporterCSVTranslation() */

void __thiscall
ResourceImporterCSVTranslation::~ResourceImporterCSVTranslation
          (ResourceImporterCSVTranslation *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106a70;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ResourceImporterCSVTranslation::_get_class_namev() const */

undefined8 * ResourceImporterCSVTranslation::_get_class_namev(void)

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
LAB_001031c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001031c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "ResourceImporterCSVTranslation");
      goto LAB_0010322e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterCSVTranslation")
  ;
LAB_0010322e:
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
LAB_001032a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001032a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010330e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010330e:
  return &_get_class_namev()::_class_name_static;
}



/* ResourceImporterCSVTranslation::get_class() const */

void ResourceImporterCSVTranslation::get_class(void)

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
            if (lVar5 == 0) goto LAB_001036cf;
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
LAB_001036cf:
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
    if (cVar6 != '\0') goto LAB_00103783;
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
              if (lVar5 == 0) goto LAB_00103833;
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
LAB_00103833:
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
      if (cVar6 != '\0') goto LAB_00103783;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00103783:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterCSVTranslation::is_class(String const&) const */

undefined8 __thiscall
ResourceImporterCSVTranslation::is_class(ResourceImporterCSVTranslation *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010396f;
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
LAB_0010396f:
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
    if (cVar6 != '\0') goto LAB_00103a23;
  }
  cVar6 = String::operator==(param_1,"ResourceImporterCSVTranslation");
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
              if (lVar5 == 0) goto LAB_00103ae3;
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
LAB_00103ae3:
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
      if (cVar6 != '\0') goto LAB_00103a23;
    }
    cVar6 = String::operator==(param_1,"ResourceImporter");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_00103b8c;
    }
  }
LAB_00103a23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103b8c:
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
LAB_00103ea8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103ea8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00103ec6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00103ec6:
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



/* ResourceImporterCSVTranslation::_initialize_classv() */

void ResourceImporterCSVTranslation::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00109010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00109008 != RefCounted::_bind_methods) {
        ResourceImporter::_bind_methods();
      }
      ResourceImporter::initialize_class()::initialized = '\x01';
    }
    local_58 = "ResourceImporter";
    local_68 = 0;
    local_50 = 0x10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterCSVTranslation";
    local_70 = 0;
    local_50 = 0x1e;
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
LAB_001046c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001046c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001046e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001046e5:
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



/* ResourceImporterCSVTranslation::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
ResourceImporterCSVTranslation::_get_property_listv
          (ResourceImporterCSVTranslation *this,List *param_1,bool param_2)

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
  local_78 = "ResourceImporterCSVTranslation";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceImporterCSVTranslation";
  local_98 = 0;
  local_70 = 0x1e;
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
LAB_00104b18:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104b18;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104b35;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104b35:
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
  StringName::StringName((StringName *)&local_78,"ResourceImporterCSVTranslation",false);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert(int const&) */

undefined1  [16]
HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
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
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint *puVar37;
  int iVar38;
  uint *in_RDX;
  long lVar39;
  ulong uVar40;
  uint uVar41;
  long *in_RSI;
  uint uVar42;
  ulong uVar43;
  undefined4 uVar44;
  ulong uVar45;
  uint uVar46;
  uint *puVar47;
  undefined1 auVar48 [16];
  long *plStack_98;
  
  lVar34 = *in_RSI;
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (lVar34 == 0) {
    uVar33 = (ulong)uVar30 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar30 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar31 = *in_RDX;
    uVar42 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    if (lVar34 != 0) goto LAB_00104eea;
  }
  else {
    uVar31 = *in_RDX;
    uVar42 = *(uint *)((long)in_RSI + 0x24);
LAB_00104eea:
    if (uVar42 != 0) {
      uVar33 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar29 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar41 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar41 = 1;
        uVar40 = uVar33;
      }
      else {
        uVar40 = uVar41 * uVar33;
      }
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4));
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar43;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar40;
      lVar39 = SUB168(auVar5 * auVar17,8);
      iVar38 = SUB164(auVar5 * auVar17,8);
      uVar29 = *(uint *)(in_RSI[3] + lVar39 * 4);
      uVar40 = (ulong)uVar29;
      if (uVar29 != 0) {
        uVar29 = 0;
        do {
          if (uVar41 == (uint)uVar40) {
            uVar32 = *(uint *)(in_RSI[1] + lVar39 * 4);
            plStack_98 = (long *)(ulong)uVar32;
            if (*(uint *)(lVar34 + (long)plStack_98 * 4) == uVar31) goto LAB_00104fdf;
          }
          uVar29 = uVar29 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (iVar38 + 1) * uVar33;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar43;
          lVar39 = SUB168(auVar6 * auVar18,8);
          uVar32 = *(uint *)(in_RSI[3] + lVar39 * 4);
          uVar40 = (ulong)uVar32;
          iVar38 = SUB164(auVar6 * auVar18,8);
        } while ((uVar32 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar40 * uVar33, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar43, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4
                                          ) + iVar38) - SUB164(auVar7 * auVar19,8)) * uVar33,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar43, uVar29 <= SUB164(auVar8 * auVar20,8)));
      }
    }
  }
  if ((float)uVar30 * __LC13 < (float)(uVar42 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      plStack_98 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar42 = *(uint *)((long)in_RSI + 0x24);
      lVar34 = *in_RSI;
      uVar32 = 0xffffffff;
      goto LAB_00104fdf;
    }
    uVar30 = (int)in_RSI[4] + 1;
    uVar33 = (ulong)uVar30;
    if (uVar30 < 2) {
      uVar33 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar1 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar30 << 2;
    pvVar2 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,uVar33,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar30 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar33 = 0;
      lVar39 = in_RSI[3];
      lVar3 = in_RSI[2];
      do {
        uVar45 = uVar33 & 0xffffffff;
        uVar44 = (undefined4)uVar33;
        uVar29 = 0;
        uVar30 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar33 * 4) * 4);
        uVar40 = (ulong)uVar30;
        lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar43 = CONCAT44(0,uVar42);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar40 * lVar35;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar43;
        lVar36 = SUB168(auVar9 * auVar21,8) * 4;
        iVar38 = SUB164(auVar9 * auVar21,8);
        puVar47 = (uint *)(lVar39 + lVar36);
        uVar31 = *puVar47;
        if (uVar31 == 0) {
          lVar35 = uVar33 * 4;
        }
        else {
          do {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar31 * lVar35;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar42 + iVar38) - SUB164(auVar10 * auVar22,8)) * lVar35;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            uVar30 = SUB164(auVar11 * auVar23,8);
            if (uVar30 < uVar29) {
              *(int *)(lVar3 + uVar45 * 4) = iVar38;
              uVar31 = *puVar47;
              *puVar47 = (uint)uVar40;
              uVar29 = *(uint *)(lVar36 + lVar34);
              uVar40 = (ulong)uVar31;
              *(uint *)(lVar36 + lVar34) = (uint)uVar45;
              uVar45 = (ulong)uVar29;
              uVar29 = uVar30;
            }
            uVar44 = (undefined4)uVar45;
            uVar30 = (uint)uVar40;
            uVar29 = uVar29 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar38 + 1) * lVar35;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar43;
            lVar36 = SUB168(auVar12 * auVar24,8) * 4;
            iVar38 = SUB164(auVar12 * auVar24,8);
            puVar47 = (uint *)(lVar39 + lVar36);
            uVar31 = *puVar47;
          } while (uVar31 != 0);
          lVar35 = uVar45 << 2;
        }
        *puVar47 = uVar30;
        uVar33 = uVar33 + 1;
        *(int *)(lVar3 + lVar35) = iVar38;
        *(undefined4 *)(lVar34 + lVar36) = uVar44;
      } while ((uint)uVar33 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    uVar42 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    uVar31 = *in_RDX;
  }
  uVar30 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
  uVar29 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
  uVar30 = uVar29 ^ uVar29 >> 0x10;
  if (uVar29 == uVar29 >> 0x10) {
    uVar33 = 1;
    uVar30 = 1;
  }
  else {
    uVar33 = (ulong)uVar30;
  }
  uVar41 = 0;
  *(uint *)(lVar34 + (ulong)uVar42 * 4) = uVar31;
  lVar3 = in_RSI[3];
  uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar40 = CONCAT44(0,uVar42);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar33 * lVar36;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar39 = SUB168(auVar13 * auVar25,8) * 4;
  iVar38 = SUB164(auVar13 * auVar25,8);
  lVar35 = in_RSI[2];
  puVar47 = (uint *)(lVar3 + lVar39);
  lVar4 = in_RSI[1];
  uVar31 = *puVar47;
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  plStack_98 = in_RSI;
  while (uVar31 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar31 * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar42 + iVar38) - SUB164(auVar14 * auVar26,8)) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar40;
    uVar31 = SUB164(auVar15 * auVar27,8);
    uVar32 = uVar30;
    uVar46 = uVar29;
    if (uVar31 < uVar41) {
      puVar37 = (uint *)(lVar39 + lVar4);
      *(int *)(lVar35 + (ulong)uVar29 * 4) = iVar38;
      uVar32 = *puVar47;
      *puVar47 = uVar30;
      uVar46 = *puVar37;
      *puVar37 = uVar29;
      uVar41 = uVar31;
    }
    uVar41 = uVar41 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar38 + 1) * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    plStack_98 = SUB168(auVar16 * auVar28,8);
    lVar39 = (long)plStack_98 * 4;
    iVar38 = SUB164(auVar16 * auVar28,8);
    puVar47 = (uint *)(lVar3 + lVar39);
    uVar29 = uVar46;
    uVar30 = uVar32;
    uVar31 = *puVar47;
  }
  *puVar47 = uVar30;
  *(int *)(lVar35 + (ulong)uVar29 * 4) = iVar38;
  *(uint *)(lVar4 + lVar39) = uVar29;
  uVar32 = *(uint *)((long)in_RSI + 0x24);
  uVar42 = uVar32 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar42;
LAB_00104fdf:
  param_1[3] = uVar32;
  *(long *)param_1 = lVar34;
  param_1[2] = uVar42;
  auVar48._8_8_ = plStack_98;
  auVar48._0_8_ = param_1;
  return auVar48;
}



/* WARNING: Removing unreachable block (ram,0x00105628) */
/* WARNING: Removing unreachable block (ram,0x00105758) */
/* WARNING: Removing unreachable block (ram,0x00105920) */
/* WARNING: Removing unreachable block (ram,0x00105764) */
/* WARNING: Removing unreachable block (ram,0x0010576e) */
/* WARNING: Removing unreachable block (ram,0x00105900) */
/* WARNING: Removing unreachable block (ram,0x0010577a) */
/* WARNING: Removing unreachable block (ram,0x00105784) */
/* WARNING: Removing unreachable block (ram,0x001058e0) */
/* WARNING: Removing unreachable block (ram,0x00105790) */
/* WARNING: Removing unreachable block (ram,0x0010579a) */
/* WARNING: Removing unreachable block (ram,0x001058c0) */
/* WARNING: Removing unreachable block (ram,0x001057a6) */
/* WARNING: Removing unreachable block (ram,0x001057b0) */
/* WARNING: Removing unreachable block (ram,0x001058a0) */
/* WARNING: Removing unreachable block (ram,0x001057bc) */
/* WARNING: Removing unreachable block (ram,0x001057c6) */
/* WARNING: Removing unreachable block (ram,0x00105880) */
/* WARNING: Removing unreachable block (ram,0x001057d2) */
/* WARNING: Removing unreachable block (ram,0x001057dc) */
/* WARNING: Removing unreachable block (ram,0x00105860) */
/* WARNING: Removing unreachable block (ram,0x001057e4) */
/* WARNING: Removing unreachable block (ram,0x001057fa) */
/* WARNING: Removing unreachable block (ram,0x00105806) */
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



/* WARNING: Removing unreachable block (ram,0x00105aa8) */
/* WARNING: Removing unreachable block (ram,0x00105bd8) */
/* WARNING: Removing unreachable block (ram,0x00105d50) */
/* WARNING: Removing unreachable block (ram,0x00105be4) */
/* WARNING: Removing unreachable block (ram,0x00105bee) */
/* WARNING: Removing unreachable block (ram,0x00105d32) */
/* WARNING: Removing unreachable block (ram,0x00105bfa) */
/* WARNING: Removing unreachable block (ram,0x00105c04) */
/* WARNING: Removing unreachable block (ram,0x00105d14) */
/* WARNING: Removing unreachable block (ram,0x00105c10) */
/* WARNING: Removing unreachable block (ram,0x00105c1a) */
/* WARNING: Removing unreachable block (ram,0x00105cf6) */
/* WARNING: Removing unreachable block (ram,0x00105c26) */
/* WARNING: Removing unreachable block (ram,0x00105c30) */
/* WARNING: Removing unreachable block (ram,0x00105cd8) */
/* WARNING: Removing unreachable block (ram,0x00105c3c) */
/* WARNING: Removing unreachable block (ram,0x00105c46) */
/* WARNING: Removing unreachable block (ram,0x00105cba) */
/* WARNING: Removing unreachable block (ram,0x00105c4e) */
/* WARNING: Removing unreachable block (ram,0x00105c58) */
/* WARNING: Removing unreachable block (ram,0x00105c9f) */
/* WARNING: Removing unreachable block (ram,0x00105c60) */
/* WARNING: Removing unreachable block (ram,0x00105c75) */
/* WARNING: Removing unreachable block (ram,0x00105c81) */
/* String vformat<long, String, long>(String const&, long const, String const, long const) */

undefined8 *
vformat<long,String,long>
          (undefined8 *param_1,bool *param_2,long param_3,String *param_4,long param_5)

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



/* CowData<Ref<Translation> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Translation>>::_copy_on_write(void)

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
LAB_00106220:
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
  if (lVar10 == 0) goto LAB_00106220;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001060f9:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001060f9;
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
    goto LAB_00106276;
  }
  if (lVar10 == lVar7) {
LAB_0010619f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00106276:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010618a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010619f;
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
LAB_0010618a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Ref<Translation> >::_unref() */

void __thiscall CowData<Ref<Translation>>::_unref(CowData<Ref<Translation>> *this)

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
LAB_001062dd:
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
            goto LAB_001062dd;
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



/* CowData<Ref<Translation> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<Translation>>::_realloc(CowData<Ref<Translation>> *this,long param_1)

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
/* Error CowData<Ref<Translation> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<Translation>>::resize<false>(CowData<Ref<Translation>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
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
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00106690:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_00106690;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0010653a:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0010653a;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_00106500;
  }
  if (lVar11 == lVar8) {
LAB_0010660b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_00106500:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_001065eb;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010660b;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_001065eb:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceImporterCSVTranslation::~ResourceImporterCSVTranslation() */

void __thiscall
ResourceImporterCSVTranslation::~ResourceImporterCSVTranslation
          (ResourceImporterCSVTranslation *this)

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


