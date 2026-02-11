
/* ResourceImporterBitMap::get_option_visibility(String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) const */

undefined8
ResourceImporterBitMap::get_option_visibility(String *param_1,String *param_2,HashMap *param_3)

{
  return 1;
}



/* ResourceImporterBitMap::get_preset_count() const */

undefined8 ResourceImporterBitMap::get_preset_count(void)

{
  return 0;
}



/* ResourceImporterBitMap::get_preset_name(int) const */

undefined8 ResourceImporterBitMap::get_preset_name(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* ResourceImporterBitMap::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ResourceImporterBitMap::get_recognized_extensions(ResourceImporterBitMap *this,List *param_1)

{
  ImageLoader::get_recognized_extensions(param_1);
  return;
}



/* ResourceImporterBitMap::~ResourceImporterBitMap() */

void __thiscall ResourceImporterBitMap::~ResourceImporterBitMap(ResourceImporterBitMap *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103548;
  Object::~Object((Object *)this);
  return;
}



/* ResourceImporterBitMap::~ResourceImporterBitMap() */

void __thiscall ResourceImporterBitMap::~ResourceImporterBitMap(ResourceImporterBitMap *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103548;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ResourceImporterBitMap::get_resource_type() const */

ResourceImporterBitMap * __thiscall
ResourceImporterBitMap::get_resource_type(ResourceImporterBitMap *this)

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



/* ResourceImporterBitMap::get_save_extension() const */

ResourceImporterBitMap * __thiscall
ResourceImporterBitMap::get_save_extension(ResourceImporterBitMap *this)

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



/* ResourceImporterBitMap::get_importer_name() const */

ResourceImporterBitMap * __thiscall
ResourceImporterBitMap::get_importer_name(ResourceImporterBitMap *this)

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



/* ResourceImporterBitMap::get_import_options(String const&, List<ResourceImporter::ImportOption,
   DefaultAllocator>*, int) const */

void ResourceImporterBitMap::get_import_options(String *param_1,List *param_2,int param_3)

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
  Variant::Variant((Variant *)local_a8,0);
  local_e8 = 0;
  local_d8 = "Black & White,Alpha";
  local_f0 = 0;
  local_d0 = 0x13;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "create_from";
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,2);
  local_d0 = 0;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  }
  local_c8 = 0;
  local_c0 = 2;
  local_b8 = 0;
  if (local_f0 == 0) {
LAB_00100398:
    local_b0 = 6;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_00100398;
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
  Variant::Variant((Variant *)local_a8,_LC10);
  local_d8 = "0,1,0.01";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "threshold";
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,3);
  local_d0 = 0;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  }
  local_c8 = 0;
  local_c0 = 1;
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
      goto LAB_00100785;
    }
  }
  local_b0 = 6;
  StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
LAB_00100785:
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



/* ResourceImporterBitMap::ResourceImporterBitMap() */

void __thiscall ResourceImporterBitMap::ResourceImporterBitMap(ResourceImporterBitMap *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_001036a8;
  return;
}



/* ResourceImporterBitMap::import(long, String const&, String const&, HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) */

int ResourceImporterBitMap::import
              (long param_1,String *param_2,String *param_3,HashMap *param_4,List *param_5,
              List *param_6,Variant *param_7)

{
  Resource *pRVar1;
  long *plVar2;
  uint uVar3;
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
  code *pcVar20;
  char cVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  Resource *this;
  BitMap *this_00;
  Object *pOVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  int iVar30;
  uint uVar31;
  Resource *pRVar32;
  uint uVar33;
  ulong uVar34;
  BitMap *pBVar35;
  int iVar36;
  long in_FS_OFFSET;
  byte bVar37;
  long local_88;
  Resource *local_80;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  long local_40;
  
  bVar37 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_80,"create_from",false);
  if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
    uVar34 = CONCAT44(0,uVar3);
    lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
    if (local_80 == (Resource *)0x0) {
      uVar25 = StringName::get_empty_hash();
    }
    else {
      uVar25 = *(uint *)((long)local_80 + 0x20);
    }
    if (uVar25 == 0) {
      uVar25 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar25 * lVar27;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar34;
    lVar29 = SUB168(auVar4 * auVar12,8);
    uVar31 = *(uint *)(*(long *)(param_5 + 0x10) + lVar29 * 4);
    uVar28 = SUB164(auVar4 * auVar12,8);
    if (uVar31 != 0) {
      uVar33 = 0;
      while ((uVar25 != uVar31 ||
             ((Resource *)*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar29 * 8) + 0x10) !=
              local_80))) {
        uVar33 = uVar33 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar28 + 1) * lVar27;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar34;
        lVar29 = SUB168(auVar5 * auVar13,8);
        uVar31 = *(uint *)(*(long *)(param_5 + 0x10) + lVar29 * 4);
        uVar28 = SUB164(auVar5 * auVar13,8);
        if ((uVar31 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar31 * lVar27, auVar14._8_8_ = 0,
           auVar14._0_8_ = uVar34, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((uVar3 + uVar28) - SUB164(auVar6 * auVar14,8)) * lVar27,
           auVar15._8_8_ = 0, auVar15._0_8_ = uVar34, SUB164(auVar7 * auVar15,8) < uVar33))
        goto LAB_001011b0;
      }
      iVar22 = Variant::operator_cast_to_int
                         ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar28 * 8) + 0x18))
      ;
      if ((StringName::configured != '\0') && (local_80 != (Resource *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_78,"threshold",false);
      if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
        uVar34 = CONCAT44(0,uVar3);
        lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
        if (local_78 == (Object *)0x0) {
          uVar25 = StringName::get_empty_hash();
        }
        else {
          uVar25 = *(uint *)((long)local_78 + 0x20);
        }
        if (uVar25 == 0) {
          uVar25 = 1;
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar25 * lVar27;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar34;
        lVar29 = SUB168(auVar8 * auVar16,8);
        uVar31 = *(uint *)(*(long *)(param_5 + 0x10) + lVar29 * 4);
        uVar28 = SUB164(auVar8 * auVar16,8);
        if (uVar31 != 0) {
          uVar33 = 0;
          goto LAB_00100f4a;
        }
      }
    }
  }
  goto LAB_001011b0;
  while( true ) {
    uVar33 = uVar33 + 1;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)(uVar28 + 1) * lVar27;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar34;
    lVar29 = SUB168(auVar9 * auVar17,8);
    uVar31 = *(uint *)(*(long *)(param_5 + 0x10) + lVar29 * 4);
    uVar28 = SUB164(auVar9 * auVar17,8);
    if ((uVar31 == 0) ||
       (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar31 * lVar27, auVar18._8_8_ = 0,
       auVar18._0_8_ = uVar34, auVar11._8_8_ = 0,
       auVar11._0_8_ = (ulong)((uVar3 + uVar28) - SUB164(auVar10 * auVar18,8)) * lVar27,
       auVar19._8_8_ = 0, auVar19._0_8_ = uVar34, SUB164(auVar11 * auVar19,8) < uVar33)) break;
LAB_00100f4a:
    if ((uVar31 == uVar25) &&
       ((Object *)*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar29 * 8) + 0x10) == local_78)) {
      Variant::operator_cast_to_float
                ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar28 * 8) + 0x18));
      if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
        StringName::unref();
      }
      this = (Resource *)operator_new(0x268,"");
      pRVar32 = this;
      for (lVar27 = 0x4d; lVar27 != 0; lVar27 = lVar27 + -1) {
        *(undefined8 *)pRVar32 = 0;
        pRVar32 = pRVar32 + (ulong)bVar37 * -0x10 + 8;
      }
      Resource::Resource(this);
      this[0x260] = (Resource)0x0;
      *(code **)this = Memory::free_static;
      *(undefined4 *)(this + 0x240) = 0;
      *(undefined8 *)(this + 0x250) = 0;
      *(undefined8 *)(this + 600) = 0;
      postinitialize_handler((Object *)this);
      cVar21 = RefCounted::init_ref();
      if (cVar21 == '\0') {
LAB_00101371:
        local_78 = (Object *)0x0;
        this = (Resource *)0x0;
        local_80 = (Resource *)0x0;
      }
      else {
        cVar21 = RefCounted::reference();
        if (cVar21 == '\0') {
          cVar21 = RefCounted::unreference();
          if (cVar21 != '\0') {
            memdelete<Image>((Image *)this);
          }
          goto LAB_00101371;
        }
        cVar21 = RefCounted::unreference();
        if (cVar21 != '\0') {
          memdelete<Image>((Image *)this);
        }
        local_78 = (Object *)0x0;
        local_80 = this;
        cVar21 = RefCounted::reference();
        if (cVar21 == '\0') {
          local_80 = (Resource *)0x0;
        }
      }
      iVar23 = ImageLoader::load_image
                         (_LC0,param_3,(StringName *)&local_80,(StringName *)&local_78,0);
      if ((local_80 != (Resource *)0x0) && (cVar21 = RefCounted::unreference(), cVar21 != '\0')) {
        memdelete<Image>((Image *)local_80);
      }
      if (((local_78 != (Object *)0x0) &&
          (cVar21 = RefCounted::unreference(), pOVar26 = local_78, cVar21 != '\0')) &&
         (cVar21 = predelete_handler(local_78), cVar21 != '\0')) {
        (**(code **)(*(long *)pOVar26 + 0x140))(pOVar26);
        Memory::free_static(pOVar26,false);
      }
      if (iVar23 == 0) {
        pBVar35 = (BitMap *)0x0;
        iVar23 = Image::get_width();
        iVar24 = Image::get_height();
        this_00 = (BitMap *)operator_new(600,"");
        BitMap::BitMap(this_00);
        postinitialize_handler((Object *)this_00);
        cVar21 = RefCounted::init_ref();
        if (cVar21 != '\0') {
          cVar21 = RefCounted::reference();
          if (cVar21 != '\0') {
            pBVar35 = this_00;
          }
          cVar21 = RefCounted::unreference();
          if ((cVar21 != '\0') && (cVar21 = predelete_handler((Object *)this_00), cVar21 != '\0')) {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
            Memory::free_static(this_00,false);
          }
        }
        local_60 = CONCAT44((float)iVar24,(float)iVar23);
        local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
        BitMap::create(pBVar35);
        if ((0 < iVar24) && (iVar36 = 0, 0 < iVar23)) {
          do {
            iVar30 = 0;
            do {
              local_58 = Image::get_pixel((int)this,iVar30);
              if (iVar22 == 0) {
                Color::get_v();
              }
              BitMap::set_bit((int)pBVar35,iVar30,SUB41(iVar36,0));
              iVar30 = iVar30 + 1;
            } while (iVar23 != iVar30);
            iVar36 = iVar36 + 1;
          } while (iVar24 != iVar36);
        }
        local_88 = 0;
        local_78 = (Object *)&_LC19;
        local_70 = 4;
        String::parse_latin1((StrRange *)&local_88);
        String::operator+((String *)&local_80,(String *)param_4);
        local_78 = (Object *)0x0;
        pOVar26 = (Object *)__dynamic_cast(pBVar35,&Object::typeinfo,&Resource::typeinfo,0);
        if ((pOVar26 != (Object *)0x0) &&
           (local_78 = pOVar26, cVar21 = RefCounted::reference(), cVar21 == '\0')) {
          local_78 = (Object *)0x0;
        }
        iVar23 = ResourceSaver::save((StringName *)&local_78,(String *)&local_80,0);
        if (((local_78 != (Object *)0x0) &&
            (cVar21 = RefCounted::unreference(), pOVar26 = local_78, cVar21 != '\0')) &&
           (cVar21 = predelete_handler(local_78), cVar21 != '\0')) {
          (**(code **)(*(long *)pOVar26 + 0x140))(pOVar26);
          Memory::free_static(pOVar26,false);
        }
        pRVar32 = local_80;
        if (local_80 != (Resource *)0x0) {
          LOCK();
          pRVar1 = local_80 + -0x10;
          *(long *)pRVar1 = *(long *)pRVar1 + -1;
          UNLOCK();
          if (*(long *)pRVar1 == 0) {
            local_80 = (Resource *)0x0;
            Memory::free_static(pRVar32 + -0x10,false);
          }
        }
        lVar27 = local_88;
        if (local_88 == 0) {
LAB_0010130b:
          cVar21 = RefCounted::unreference();
        }
        else {
          LOCK();
          plVar2 = (long *)(local_88 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 != 0) goto LAB_0010130b;
          local_88 = 0;
          Memory::free_static((void *)(lVar27 + -0x10),false);
          cVar21 = RefCounted::unreference();
        }
        if ((cVar21 != '\0') && (cVar21 = predelete_handler((Object *)pBVar35), cVar21 != '\0')) {
          (**(code **)(*(long *)pBVar35 + 0x140))(pBVar35);
          Memory::free_static(pBVar35,false);
        }
      }
      else if (this == (Resource *)0x0) goto LAB_00101330;
      cVar21 = RefCounted::unreference();
      if (cVar21 != '\0') {
        memdelete<Image>((Image *)this);
      }
LAB_00101330:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar23;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_001011b0:
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar20 = (code *)invalidInstructionException();
  (*pcVar20)();
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
  return (uint)CONCAT71(0x1038,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1038,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ResourceImporterBitMap::is_class_ptr(void*) const */

uint __thiscall ResourceImporterBitMap::is_class_ptr(ResourceImporterBitMap *this,void *param_1)

{
  return (uint)CONCAT71(0x1038,(undefined4 *)param_1 ==
                               &ResourceImporter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1038,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1038,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1038,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceImporterBitMap::_getv(StringName const&, Variant&) const */

undefined8 ResourceImporterBitMap::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterBitMap::_setv(StringName const&, Variant const&) */

undefined8 ResourceImporterBitMap::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterBitMap::_validate_propertyv(PropertyInfo&) const */

void ResourceImporterBitMap::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceImporterBitMap::_property_can_revertv(StringName const&) const */

undefined8 ResourceImporterBitMap::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceImporterBitMap::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceImporterBitMap::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterBitMap::_notificationv(int, bool) */

void ResourceImporterBitMap::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceImporterBitMap::can_import_threaded() const */

undefined8 ResourceImporterBitMap::can_import_threaded(void)

{
  return 1;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103548;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103548;
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
LAB_001017d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001017d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010183e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010183e:
  return &_get_class_namev()::_class_name_static;
}



/* ResourceImporterBitMap::_get_class_namev() const */

undefined8 * ResourceImporterBitMap::_get_class_namev(void)

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
LAB_001018c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001018c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterBitMap");
      goto LAB_0010192e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterBitMap");
LAB_0010192e:
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



/* ResourceImporterBitMap::get_class() const */

void ResourceImporterBitMap::get_class(void)

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
            if (lVar5 == 0) goto LAB_00101c5f;
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
LAB_00101c5f:
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
    if (cVar6 != '\0') goto LAB_00101d13;
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
              if (lVar5 == 0) goto LAB_00101dc3;
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
LAB_00101dc3:
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
      if (cVar6 != '\0') goto LAB_00101d13;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00101d13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterBitMap::is_class(String const&) const */

undefined8 __thiscall ResourceImporterBitMap::is_class(ResourceImporterBitMap *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00101eff;
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
LAB_00101eff:
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
    if (cVar6 != '\0') goto LAB_00101fb3;
  }
  cVar6 = String::operator==(param_1,"ResourceImporterBitMap");
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
              if (lVar5 == 0) goto LAB_00102073;
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
LAB_00102073:
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
      if (cVar6 != '\0') goto LAB_00101fb3;
    }
    cVar6 = String::operator==(param_1,"ResourceImporter");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010211c;
    }
  }
LAB_00101fb3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010211c:
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
LAB_00102438:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102438;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102456;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102456:
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



/* ResourceImporterBitMap::_initialize_classv() */

void ResourceImporterBitMap::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00106010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00106008 != RefCounted::_bind_methods) {
        ResourceImporter::_bind_methods();
      }
      ResourceImporter::initialize_class()::initialized = '\x01';
    }
    local_58 = "ResourceImporter";
    local_68 = 0;
    local_50 = 0x10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterBitMap";
    local_70 = 0;
    local_50 = 0x16;
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
LAB_00102c58:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102c58;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102c75;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102c75:
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



/* ResourceImporterBitMap::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceImporterBitMap::_get_property_listv(ResourceImporterBitMap *this,List *param_1,bool param_2)

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
  local_78 = "ResourceImporterBitMap";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceImporterBitMap";
  local_98 = 0;
  local_70 = 0x16;
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
LAB_001030a8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001030a8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001030c5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001030c5:
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
  StringName::StringName((StringName *)&local_78,"ResourceImporterBitMap",false);
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


