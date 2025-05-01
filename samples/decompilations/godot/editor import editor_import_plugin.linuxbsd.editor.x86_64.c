
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



/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */

void __thiscall PropertyInfo::operator=(PropertyInfo *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  *(undefined4 *)this = *(undefined4 *)param_1;
  lVar2 = *(long *)(this + 8);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 8);
        *(undefined8 *)(this + 8) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        *(undefined8 *)(this + 8) = 0;
        lVar3 = *(long *)(param_1 + 8);
      }
    }
    *(long *)(this + 8) = lVar3;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    StringName::unref();
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != lVar3) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar3 = *(long *)(this + 0x20);
        *(undefined8 *)(this + 0x20) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar3 = *(long *)(param_1 + 0x20);
      }
      else {
        *(undefined8 *)(this + 0x20) = 0;
        lVar3 = *(long *)(param_1 + 0x20);
      }
    }
    *(long *)(this + 0x20) = lVar3;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}



/* EditorImportPlugin::EditorImportPlugin() */

void __thiscall EditorImportPlugin::EditorImportPlugin(EditorImportPlugin *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0010fa28;
  StringName::StringName((StringName *)(this + 0x180),"_get_importer_name",false);
  this[0x188] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 400) = 0;
  StringName::StringName((StringName *)(this + 0x198),"_get_visible_name",false);
  this[0x1a0] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  StringName::StringName((StringName *)(this + 0x1b0),"_get_preset_count",false);
  this[0x1b8] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 0x1c0) = 0;
  StringName::StringName((StringName *)(this + 0x1c8),"_get_preset_name",false);
  this[0x1d0] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 0x1d8) = 0;
  StringName::StringName((StringName *)(this + 0x1e0),"_get_recognized_extensions",false);
  this[0x1e8] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 0x1f0) = 0;
  StringName::StringName((StringName *)(this + 0x1f8),"_get_import_options",false);
  this[0x200] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 0x208) = 0;
  StringName::StringName((StringName *)(this + 0x210),"_get_save_extension",false);
  this[0x218] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 0x220) = 0;
  StringName::StringName((StringName *)(this + 0x228),"_get_resource_type",false);
  this[0x230] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 0x238) = 0;
  StringName::StringName((StringName *)(this + 0x240),"_get_priority",false);
  this[0x248] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 0x250) = 0;
  StringName::StringName((StringName *)(this + 600),"_get_import_order",false);
  this[0x260] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 0x268) = 0;
  StringName::StringName((StringName *)(this + 0x270),"_get_format_version",false);
  this[0x278] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 0x280) = 0;
  StringName::StringName((StringName *)(this + 0x288),"_get_option_visibility",false);
  this[0x290] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 0x298) = 0;
  StringName::StringName((StringName *)(this + 0x2a0),"_import",false);
  this[0x2a8] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 0x2b0) = 0;
  StringName::StringName((StringName *)(this + 0x2b8),"_can_import_threaded",false);
  this[0x2c0] = (EditorImportPlugin)0x0;
  *(undefined8 *)(this + 0x2c8) = 0;
  return;
}



/* EditorImportPlugin::append_import_external_resource(String const&, HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, String const&, Variant) */

ulong __thiscall
EditorImportPlugin::append_import_external_resource
          (undefined8 param_1_00,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          Variant *param_5)

{
  long lVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  lVar1 = EditorFileSystem::singleton;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(EditorFileSystem::singleton + 0x452) == '\0') {
    _err_print_error("append_import_external_resource","editor/import/editor_import_plugin.cpp",0xd9
                     ,
                     "Condition \"!EditorFileSystem::get_singleton()->is_importing()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,"Can only append files to import during a current reimport process.",0,0);
    uVar2 = 0x1f;
  }
  else {
    Variant::Variant((Variant *)local_48,param_5);
    uVar2 = EditorFileSystem::reimport_append(lVar1,param_1,param_2,param_3,(Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
      uVar2 = uVar2 & 0xffffffff;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorImportPlugin::_append_import_external_resource(String const&, Dictionary const&, String
   const&, Variant) */

undefined4 __thiscall
EditorImportPlugin::_append_import_external_resource
          (EditorImportPlugin *this,undefined8 param_1,List *param_2,undefined8 param_3,
          Variant *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  long in_FS_OFFSET;
  long *local_a0;
  long local_98;
  StringName local_90 [8];
  Variant local_88 [8];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (undefined1  [16])0x0;
  local_60 = 2;
  local_a0 = (long *)0x0;
  local_70 = (undefined1  [16])0x0;
  Dictionary::get_key_list(param_2);
  if (local_a0 != (long *)0x0) {
    for (lVar3 = *local_a0; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x18)) {
      Dictionary::operator[]((Variant *)param_2);
      Variant::operator_cast_to_StringName((Variant *)&local_98);
      HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
      ::insert(local_90,local_88,SUB81((Variant *)&local_98,0));
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
    }
  }
  Variant::Variant((Variant *)local_58,param_5);
  uVar2 = append_import_external_resource(this,param_1,local_88,param_3,(Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_a0);
  if ((void *)local_80._0_8_ != (void *)0x0) {
    pvVar4 = (void *)local_80._0_8_;
    if (local_60._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_60 = local_60 & 0xffffffff;
        local_70 = (undefined1  [16])0x0;
      }
      else {
        lVar3 = 0;
        do {
          if (*(int *)(local_80._8_8_ + lVar3) != 0) {
            pvVar4 = *(void **)((long)pvVar4 + lVar3 * 2);
            *(int *)(local_80._8_8_ + lVar3) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar4 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            *(undefined8 *)(local_80._0_8_ + lVar3 * 2) = 0;
            pvVar4 = (void *)local_80._0_8_;
          }
          lVar3 = lVar3 + 4;
        } while (lVar3 != (ulong)uVar1 << 2);
        local_60 = local_60 & 0xffffffff;
        local_70 = (undefined1  [16])0x0;
        if (pvVar4 == (void *)0x0) goto LAB_001008ca;
      }
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static((void *)local_80._8_8_,false);
  }
LAB_001008ca:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
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



/* EditorImportPlugin::get_importer_name() const */

void EditorImportPlugin::get_importer_name(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_RSI;
  long *in_RDI;
  long lVar7;
  long in_FS_OFFSET;
  long local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_110 = 0;
  if (plVar5 == (long *)0x0) {
LAB_00100c2b:
    if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x188) == '\0')) {
      local_c8 = 0;
      uStack_c4 = 0;
      local_b8 = (undefined1  [16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String *)&local_c8,"_get_importer_name");
      local_90 = CONCAT44(local_90._4_4_,0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_f8);
      PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long *)(in_RSI + 8);
      *(undefined8 *)(in_RSI + 400) = 0;
      pcVar6 = *(code **)(lVar4 + 0xd8);
      if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
         (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
        local_108 = 0;
        String::parse_latin1((String *)&local_108,"EditorImportPlugin");
        StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_f8,(StringName *)&local_100);
        if (local_f0[0] == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00100fcf;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00100fe4:
          lVar4 = *(long *)(in_RSI + 8);
          pcVar6 = *(code **)(lVar4 + 200);
          if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
             (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00100f1f;
          uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x180);
          *(undefined8 *)(in_RSI + 400) = uVar3;
        }
        else {
          lVar4 = *(long *)(local_f0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00100fcf:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          if (lVar4 == 0) goto LAB_00100fe4;
        }
        lVar4 = *(long *)(in_RSI + 8);
      }
      else {
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x180,uVar2);
        *(undefined8 *)(in_RSI + 400) = uVar3;
        lVar4 = *(long *)(in_RSI + 8);
      }
LAB_00100f1f:
      if (*(char *)(lVar4 + 0x29) != '\0') {
        plVar5 = (long *)operator_new(0x18,"");
        *plVar5 = in_RSI + 400;
        plVar5[1] = in_RSI + 0x188;
        plVar5[2] = *(long *)(in_RSI + 0x168);
        *(long **)(in_RSI + 0x168) = plVar5;
      }
      *(undefined1 *)(in_RSI + 0x188) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    pcVar6 = *(code **)(in_RSI + 400);
    if (pcVar6 == (code *)0x0) {
      _err_print_error("get_importer_name","editor/import/editor_import_plugin.cpp",0x2c,
                       "Method/function failed. Returning: String()",
                       "Unimplemented _get_importer_name in add-on.",0,0);
      *in_RDI = 0;
      goto LAB_00100cd7;
    }
    local_f8 = 0;
    pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(in_RSI + 0x10),0,(CowData<char32_t> *)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
      lVar4 = CONCAT44(uStack_c4,local_c8);
      lVar7 = local_110;
joined_r0x00100dd8:
      local_110 = lVar7;
      if (lVar4 != 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
        local_c8 = 0;
        uStack_c4 = 0;
        lVar7 = lVar4;
      }
    }
    else {
      (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x180,pcVar6,0,
                (CowData<char32_t> *)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      lVar7 = local_110;
      if (local_f8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
        lVar4 = CONCAT44(uStack_c4,local_c8);
        lVar7 = local_110;
        goto joined_r0x00100dd8;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  }
  else {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,in_RSI + 0x180,0,0,&local_c8);
    if (local_c8 != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00100c2b;
    }
    Variant::operator_cast_to_String((Variant *)&local_f8);
    lVar7 = local_f8;
    if (local_f8 != 0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      lVar7 = local_f8;
      local_f8 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  *in_RDI = lVar7;
LAB_00100cd7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorImportPlugin::get_visible_name() const */

void EditorImportPlugin::get_visible_name(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_RSI;
  long *in_RDI;
  long lVar7;
  long in_FS_OFFSET;
  long local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_110 = 0;
  if (plVar5 == (long *)0x0) {
LAB_0010113b:
    if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x1a0) == '\0')) {
      local_c8 = 0;
      uStack_c4 = 0;
      local_b8 = (undefined1  [16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String *)&local_c8,"_get_visible_name");
      local_90 = CONCAT44(local_90._4_4_,0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_f8);
      PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long *)(in_RSI + 8);
      *(undefined8 *)(in_RSI + 0x1a8) = 0;
      pcVar6 = *(code **)(lVar4 + 0xd8);
      if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
         (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
        local_108 = 0;
        String::parse_latin1((String *)&local_108,"EditorImportPlugin");
        StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_f8,(StringName *)&local_100);
        if (local_f0[0] == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_001014df;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001014f4:
          lVar4 = *(long *)(in_RSI + 8);
          pcVar6 = *(code **)(lVar4 + 200);
          if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
             (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010142f;
          uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x198);
          *(undefined8 *)(in_RSI + 0x1a8) = uVar3;
        }
        else {
          lVar4 = *(long *)(local_f0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001014df:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          if (lVar4 == 0) goto LAB_001014f4;
        }
        lVar4 = *(long *)(in_RSI + 8);
      }
      else {
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x198,uVar2);
        *(undefined8 *)(in_RSI + 0x1a8) = uVar3;
        lVar4 = *(long *)(in_RSI + 8);
      }
LAB_0010142f:
      if (*(char *)(lVar4 + 0x29) != '\0') {
        plVar5 = (long *)operator_new(0x18,"");
        *plVar5 = in_RSI + 0x1a8;
        plVar5[1] = in_RSI + 0x1a0;
        plVar5[2] = *(long *)(in_RSI + 0x168);
        *(long **)(in_RSI + 0x168) = plVar5;
      }
      *(undefined1 *)(in_RSI + 0x1a0) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    pcVar6 = *(code **)(in_RSI + 0x1a8);
    if (pcVar6 == (code *)0x0) {
      _err_print_error("get_visible_name","editor/import/editor_import_plugin.cpp",0x34,
                       "Method/function failed. Returning: String()",
                       "Unimplemented _get_visible_name in add-on.",0,0);
      *in_RDI = 0;
      goto LAB_001011e7;
    }
    local_f8 = 0;
    pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(in_RSI + 0x10),0,(CowData<char32_t> *)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
      lVar4 = CONCAT44(uStack_c4,local_c8);
      lVar7 = local_110;
joined_r0x001012e8:
      local_110 = lVar7;
      if (lVar4 != 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
        local_c8 = 0;
        uStack_c4 = 0;
        lVar7 = lVar4;
      }
    }
    else {
      (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x198,pcVar6,0,
                (CowData<char32_t> *)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      lVar7 = local_110;
      if (local_f8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
        lVar4 = CONCAT44(uStack_c4,local_c8);
        lVar7 = local_110;
        goto joined_r0x001012e8;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  }
  else {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,in_RSI + 0x198,0,0,&local_c8);
    if (local_c8 != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010113b;
    }
    Variant::operator_cast_to_String((Variant *)&local_f8);
    lVar7 = local_f8;
    if (local_f8 != 0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      lVar7 = local_f8;
      local_f8 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  *in_RDI = lVar7;
LAB_001011e7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorImportPlugin::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
EditorImportPlugin::get_recognized_extensions(EditorImportPlugin *this,List *param_1)

{
  long lVar1;
  undefined4 uVar2;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_118;
  long local_110 [2];
  long local_100;
  int local_f8 [2];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_c8;
  long local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = 0;
  if (plVar6 == (long *)0x0) {
LAB_0010164b:
    if ((*(long *)(this + 8) != 0) && (this[0x1e8] == (EditorImportPlugin)0x0)) {
      local_c8 = 0;
      local_b8 = (undefined1  [16])0x0;
      local_c0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String *)&local_c8,"_get_recognized_extensions");
      local_90 = CONCAT44(local_90._4_4_,0xc);
      GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)local_f8)
      ;
      PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x1f0) = 0;
      lVar5 = *(long *)(this + 8);
      pcVar7 = *(code **)(lVar5 + 0xd8);
      if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
         (pcVar7 = *(code **)(lVar5 + 0xd0), pcVar7 == (code *)0x0)) {
        local_118 = 0;
        String::parse_latin1((String *)&local_118,"EditorImportPlugin");
        StringName::StringName((StringName *)local_110,(String *)&local_118,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_f8,(StringName *)local_110);
        if (CONCAT44(uStack_ec,uStack_f0) == 0) {
          lVar5 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
          if (StringName::configured != '\0') goto LAB_00101ae0;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
LAB_00101afd:
          lVar5 = *(long *)(this + 8);
          pcVar7 = *(code **)(lVar5 + 200);
          if (((pcVar7 == (code *)0x0) || (*(long *)(lVar5 + 0xe0) == 0)) &&
             (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_001019f7;
          uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1e0);
          *(undefined8 *)(this + 0x1f0) = uVar4;
        }
        else {
          lVar5 = *(long *)(CONCAT44(uStack_ec,uStack_f0) + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
          if (StringName::configured != '\0') {
LAB_00101ae0:
            if (local_110[0] != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
          if (lVar5 == 0) goto LAB_00101afd;
        }
        lVar5 = *(long *)(this + 8);
      }
      else {
        uVar4 = (*pcVar7)(*(undefined8 *)(lVar5 + 0xa0),this + 0x1e0,uVar2);
        *(undefined8 *)(this + 0x1f0) = uVar4;
        lVar5 = *(long *)(this + 8);
      }
LAB_001019f7:
      if (*(char *)(lVar5 + 0x29) != '\0') {
        plVar6 = (long *)operator_new(0x18,"");
        *plVar6 = (long)(this + 0x1f0);
        plVar6[1] = (long)(this + 0x1e8);
        plVar6[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar6;
      }
      this[0x1e8] = (EditorImportPlugin)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    pcVar7 = *(code **)(this + 0x1f0);
    if (pcVar7 == (code *)0x0) {
      _err_print_error("get_recognized_extensions","editor/import/editor_import_plugin.cpp",0x40,
                       "Method/function failed.",
                       "Unimplemented _get_recognized_extensions in add-on.",0,0);
      goto LAB_001017c6;
    }
    uStack_f0 = 0;
    uStack_ec = 0;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar7)(*(undefined8 *)(this + 0x10),0,local_f8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1e0,pcVar7,0,local_f8);
    }
    local_c0 = 0;
    CowData<String>::_ref((CowData<String> *)&local_c0,(CowData *)&uStack_f0);
    lVar8 = local_c0;
    lVar5 = local_100;
    if (local_c0 == 0) {
      CowData<String>::_unref((CowData<String> *)&local_c0);
      CowData<String>::_unref((CowData<String> *)&uStack_f0);
      goto LAB_00101842;
    }
    CowData<String>::_unref((CowData<String> *)&local_100);
    local_100 = lVar8;
    local_c0 = 0;
    CowData<String>::_unref((CowData<String> *)&local_c0);
    CowData<String>::_unref((CowData<String> *)&uStack_f0);
    lVar5 = lVar8;
  }
  else {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    (**(code **)(*plVar6 + 0x60))(local_58,plVar6,this + 0x1e0,0,0,local_f8);
    if (local_f8[0] != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010164b;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_c8);
    if (local_c0 == 0) {
      CowData<String>::_unref((CowData<String> *)&local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_001017c6;
    }
    CowData<String>::_unref((CowData<String> *)&local_100);
    lVar5 = local_c0;
    local_c0 = 0;
    local_100 = lVar5;
    CowData<String>::_unref((CowData<String> *)&local_c0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
LAB_00101842:
    if (lVar5 == 0) goto LAB_001017c6;
  }
  lVar8 = 0;
  if (0 < *(long *)(lVar5 + -8)) {
    do {
      if (*(long *)param_1 == 0) {
        pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar3;
        *(undefined4 *)pauVar3[1] = 0;
        *pauVar3 = (undefined1  [16])0x0;
      }
      this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
      if (*(long *)(lVar5 + lVar8 * 8) != 0) {
        CowData<char32_t>::_ref(this_00,(CowData *)(lVar5 + lVar8 * 8));
      }
      plVar6 = *(long **)param_1;
      lVar1 = plVar6[1];
      *(undefined8 *)(this_00 + 8) = 0;
      *(long **)(this_00 + 0x18) = plVar6;
      *(long *)(this_00 + 0x10) = lVar1;
      if (lVar1 != 0) {
        *(CowData<char32_t> **)(lVar1 + 8) = this_00;
      }
      plVar6[1] = (long)this_00;
      if (*plVar6 == 0) {
        *plVar6 = (long)this_00;
      }
      *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(long *)(lVar5 + -8));
  }
LAB_001017c6:
  CowData<String>::_unref((CowData<String> *)&local_100);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorImportPlugin::get_preset_count() const */

int __thiscall EditorImportPlugin::get_preset_count(EditorImportPlugin *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<int,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x1b0,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00101c96;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1b8] == (EditorImportPlugin)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_preset_count");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<int,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1c0) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"EditorImportPlugin");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00101f18;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00101f2d:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00101e70;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x1b0);
        *(undefined8 *)(this + 0x1c0) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00101f18:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_00101f2d;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x1b0,uVar2);
      *(undefined8 *)(this + 0x1c0) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00101e70:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x1c0);
      plVar5[1] = (long)(this + 0x1b8);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x1b8] = (EditorImportPlugin)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x1c0);
  if (pcVar6 == (code *)0x0) {
    _err_print_error("get_preset_count","editor/import/editor_import_plugin.cpp",0x50,
                     "Method/function failed. Returning: -1",
                     "Unimplemented _get_preset_count in add-on.",0,0);
    iVar1 = -1;
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
    iVar1 = local_c8[0];
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x1b0,pcVar6,0,local_c8);
    iVar1 = local_c8[0];
  }
LAB_00101c96:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* EditorImportPlugin::get_save_extension() const */

void EditorImportPlugin::get_save_extension(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_RSI;
  long *in_RDI;
  long lVar7;
  long in_FS_OFFSET;
  long local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_110 = 0;
  if (plVar5 == (long *)0x0) {
LAB_0010208b:
    if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x218) == '\0')) {
      local_c8 = 0;
      uStack_c4 = 0;
      local_b8 = (undefined1  [16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String *)&local_c8,"_get_save_extension");
      local_90 = CONCAT44(local_90._4_4_,0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_f8);
      PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long *)(in_RSI + 8);
      *(undefined8 *)(in_RSI + 0x220) = 0;
      pcVar6 = *(code **)(lVar4 + 0xd8);
      if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
         (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
        local_108 = 0;
        String::parse_latin1((String *)&local_108,"EditorImportPlugin");
        StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_f8,(StringName *)&local_100);
        if (local_f0[0] == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_0010242f;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00102444:
          lVar4 = *(long *)(in_RSI + 8);
          pcVar6 = *(code **)(lVar4 + 200);
          if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
             (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010237f;
          uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x210);
          *(undefined8 *)(in_RSI + 0x220) = uVar3;
        }
        else {
          lVar4 = *(long *)(local_f0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010242f:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          if (lVar4 == 0) goto LAB_00102444;
        }
        lVar4 = *(long *)(in_RSI + 8);
      }
      else {
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x210,uVar2);
        *(undefined8 *)(in_RSI + 0x220) = uVar3;
        lVar4 = *(long *)(in_RSI + 8);
      }
LAB_0010237f:
      if (*(char *)(lVar4 + 0x29) != '\0') {
        plVar5 = (long *)operator_new(0x18,"");
        *plVar5 = in_RSI + 0x220;
        plVar5[1] = in_RSI + 0x218;
        plVar5[2] = *(long *)(in_RSI + 0x168);
        *(long **)(in_RSI + 0x168) = plVar5;
      }
      *(undefined1 *)(in_RSI + 0x218) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    pcVar6 = *(code **)(in_RSI + 0x220);
    if (pcVar6 == (code *)0x0) {
      _err_print_error("get_save_extension","editor/import/editor_import_plugin.cpp",0x58,
                       "Method/function failed. Returning: String()",
                       "Unimplemented _get_save_extension in add-on.",0,0);
      *in_RDI = 0;
      goto LAB_00102137;
    }
    local_f8 = 0;
    pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(in_RSI + 0x10),0,(CowData<char32_t> *)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
      lVar4 = CONCAT44(uStack_c4,local_c8);
      lVar7 = local_110;
joined_r0x00102238:
      local_110 = lVar7;
      if (lVar4 != 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
        local_c8 = 0;
        uStack_c4 = 0;
        lVar7 = lVar4;
      }
    }
    else {
      (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x210,pcVar6,0,
                (CowData<char32_t> *)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      lVar7 = local_110;
      if (local_f8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
        lVar4 = CONCAT44(uStack_c4,local_c8);
        lVar7 = local_110;
        goto joined_r0x00102238;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  }
  else {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,in_RSI + 0x210,0,0,&local_c8);
    if (local_c8 != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010208b;
    }
    Variant::operator_cast_to_String((Variant *)&local_f8);
    lVar7 = local_f8;
    if (local_f8 != 0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      lVar7 = local_f8;
      local_f8 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  *in_RDI = lVar7;
LAB_00102137:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorImportPlugin::get_resource_type() const */

void EditorImportPlugin::get_resource_type(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_RSI;
  long *in_RDI;
  long lVar7;
  long in_FS_OFFSET;
  long local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0 [5];
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_110 = 0;
  if (plVar5 == (long *)0x0) {
LAB_0010259b:
    if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x230) == '\0')) {
      local_c8 = 0;
      uStack_c4 = 0;
      local_b8 = (undefined1  [16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String *)&local_c8,"_get_resource_type");
      local_90 = CONCAT44(local_90._4_4_,0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_f8);
      PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long *)(in_RSI + 8);
      *(undefined8 *)(in_RSI + 0x238) = 0;
      pcVar6 = *(code **)(lVar4 + 0xd8);
      if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
         (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
        local_108 = 0;
        String::parse_latin1((String *)&local_108,"EditorImportPlugin");
        StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_f8,(StringName *)&local_100);
        if (local_f0[0] == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_0010293f;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00102954:
          lVar4 = *(long *)(in_RSI + 8);
          pcVar6 = *(code **)(lVar4 + 200);
          if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
             (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_0010288f;
          uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x228);
          *(undefined8 *)(in_RSI + 0x238) = uVar3;
        }
        else {
          lVar4 = *(long *)(local_f0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
          if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_0010293f:
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
          if (lVar4 == 0) goto LAB_00102954;
        }
        lVar4 = *(long *)(in_RSI + 8);
      }
      else {
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x228,uVar2);
        *(undefined8 *)(in_RSI + 0x238) = uVar3;
        lVar4 = *(long *)(in_RSI + 8);
      }
LAB_0010288f:
      if (*(char *)(lVar4 + 0x29) != '\0') {
        plVar5 = (long *)operator_new(0x18,"");
        *plVar5 = in_RSI + 0x238;
        plVar5[1] = in_RSI + 0x230;
        plVar5[2] = *(long *)(in_RSI + 0x168);
        *(long **)(in_RSI + 0x168) = plVar5;
      }
      *(undefined1 *)(in_RSI + 0x230) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    pcVar6 = *(code **)(in_RSI + 0x238);
    if (pcVar6 == (code *)0x0) {
      _err_print_error("get_resource_type","editor/import/editor_import_plugin.cpp",0x60,
                       "Method/function failed. Returning: String()",
                       "Unimplemented _get_resource_type in add-on.",0,0);
      *in_RDI = 0;
      goto LAB_00102647;
    }
    local_f8 = 0;
    pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(in_RSI + 0x10),0,(CowData<char32_t> *)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
      lVar4 = CONCAT44(uStack_c4,local_c8);
      lVar7 = local_110;
joined_r0x00102748:
      local_110 = lVar7;
      if (lVar4 != 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
        local_c8 = 0;
        uStack_c4 = 0;
        lVar7 = lVar4;
      }
    }
    else {
      (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x228,pcVar6,0,
                (CowData<char32_t> *)&local_f8);
      local_c8 = 0;
      uStack_c4 = 0;
      lVar7 = local_110;
      if (local_f8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
        lVar4 = CONCAT44(uStack_c4,local_c8);
        lVar7 = local_110;
        goto joined_r0x00102748;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  }
  else {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,in_RSI + 0x228,0,0,&local_c8);
    if (local_c8 != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010259b;
    }
    Variant::operator_cast_to_String((Variant *)&local_f8);
    lVar7 = local_f8;
    if (local_f8 != 0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      lVar7 = local_f8;
      local_f8 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  *in_RDI = lVar7;
LAB_00102647:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorImportPlugin::get_priority() const */

void __thiscall EditorImportPlugin::get_priority(EditorImportPlugin *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<float,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x240,0,0,local_c8);
    if (local_c8[0] == 0) {
      Variant::operator_cast_to_float((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00102aec;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x248] == (EditorImportPlugin)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_priority");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<float,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = CONCAT44(local_70._4_4_,9);
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x250) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"EditorImportPlugin");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00102d78;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00102d8d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00102cc8;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x240);
        *(undefined8 *)(this + 0x250) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00102d78:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_00102d8d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x240,uVar1);
      *(undefined8 *)(this + 0x250) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00102cc8:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x250);
      plVar4[1] = (long)(this + 0x248);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x248] = (EditorImportPlugin)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x250);
  if (pcVar5 == (code *)0x0) {
    _err_print_error("get_priority","editor/import/editor_import_plugin.cpp",0x68,
                     "Method/function failed. Returning: -1",
                     "Unimplemented _get_priority in add-on.",0,0);
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x240,pcVar5,0,local_c8);
  }
LAB_00102aec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorImportPlugin::get_import_order() const */

int __thiscall EditorImportPlugin::get_import_order(EditorImportPlugin *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<int,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 600,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00102f26;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x260] == (EditorImportPlugin)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_import_order");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<int,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x268) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"EditorImportPlugin");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_001031a8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_001031bd:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_00103100;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 600);
        *(undefined8 *)(this + 0x268) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_001031a8:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_001031bd;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 600,uVar2);
      *(undefined8 *)(this + 0x268) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_00103100:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x268);
      plVar5[1] = (long)(this + 0x260);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x260] = (EditorImportPlugin)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x268);
  if (pcVar6 == (code *)0x0) {
    _err_print_error("get_import_order","editor/import/editor_import_plugin.cpp",0x70,
                     "Method/function failed. Returning: -1",
                     "Unimplemented _get_import_order in add-on.",0,0);
    iVar1 = -1;
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
    iVar1 = local_c8[0];
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 600,pcVar6,0,local_c8);
    iVar1 = local_c8[0];
  }
LAB_00102f26:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* EditorImportPlugin::get_format_version() const */

int __thiscall EditorImportPlugin::get_format_version(EditorImportPlugin *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<int,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar5 + 0x60))((Variant *)local_58,plVar5,this + 0x270,0,0,local_c8);
    if (local_c8[0] == 0) {
      iVar1 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00103353;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x278] == (EditorImportPlugin)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_get_format_version");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<int,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = CONCAT44(local_70._4_4_,3);
    uVar2 = MethodInfo::get_compatibility_hash();
    lVar4 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x280) = 0;
    pcVar6 = *(code **)(lVar4 + 0xd8);
    if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
       (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"EditorImportPlugin");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar4 = 0, local_100 != 0)) goto LAB_00103588;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010359d:
        lVar4 = *(long *)(this + 8);
        pcVar6 = *(code **)(lVar4 + 200);
        if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
           (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_001034d8;
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x270);
        *(undefined8 *)(this + 0x280) = uVar3;
      }
      else {
        lVar4 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00103588:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar4 == 0) goto LAB_0010359d;
      }
      lVar4 = *(long *)(this + 8);
    }
    else {
      uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),this + 0x270,uVar2);
      *(undefined8 *)(this + 0x280) = uVar3;
      lVar4 = *(long *)(this + 8);
    }
LAB_001034d8:
    if (*(char *)(lVar4 + 0x29) != '\0') {
      plVar5 = (long *)operator_new(0x18,"");
      *plVar5 = (long)(this + 0x280);
      plVar5[1] = (long)(this + 0x278);
      plVar5[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar5;
    }
    this[0x278] = (EditorImportPlugin)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar6 = *(code **)(this + 0x280);
  iVar1 = 0;
  if (pcVar6 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(this + 0x10),0,local_c8);
      iVar1 = local_c8[0];
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x270,pcVar6,0,local_c8);
      iVar1 = local_c8[0];
    }
  }
LAB_00103353:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* EditorImportPlugin::can_import_threaded() const */

bool __thiscall EditorImportPlugin::can_import_threaded(EditorImportPlugin *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined8 local_108;
  long local_100;
  GetTypeInfo<bool,void> local_f8 [8];
  long local_f0 [5];
  int local_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar4 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar4 != (long *)0x0) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    uStack_c0 = 0;
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x2b8,0,0,local_c8);
    if (local_c8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00103737;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x2c0] == (EditorImportPlugin)0x0)) {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_b8 = (undefined1  [16])0x0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 6;
    local_90 = 1;
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_60 = 0;
    String::parse_latin1((String *)local_c8,"_can_import_threaded");
    local_90 = CONCAT44(local_90._4_4_,0xc);
    GetTypeInfo<bool,void>::get_class_info(local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x2c8) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"EditorImportPlugin");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00103968;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0010397d:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_001038c0;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2b8);
        *(undefined8 *)(this + 0x2c8) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00103968:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_0010397d;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x2b8,uVar1);
      *(undefined8 *)(this + 0x2c8) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_001038c0:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x2c8);
      plVar4[1] = (long)(this + 0x2c0);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x2c0] = (EditorImportPlugin)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x2c8);
  bVar6 = false;
  if (pcVar5 != (code *)0x0) {
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (String)0x0;
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x2b8,pcVar5,0,local_c8);
      bVar6 = local_c8[0]._0_1_ != (String)0x0;
    }
  }
LAB_00103737:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

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
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
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



/* EditorImportPlugin::_bind_methods() */

void EditorImportPlugin::_bind_methods(void)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puVar12;
  undefined8 uVar13;
  MethodBind *pMVar14;
  long lVar15;
  Variant *pVVar16;
  long *plVar17;
  long in_FS_OFFSET;
  StringName *local_278;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  Dictionary local_1d8 [8];
  undefined8 local_1d0;
  char *local_1c8;
  undefined1 local_1c0 [16];
  int local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  char *local_198;
  undefined8 local_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158 [2];
  undefined8 local_148;
  ulong local_140;
  Vector<int> local_138 [8];
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [16];
  undefined *local_108;
  char *pcStack_100;
  char *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant *local_c8;
  char **ppcStack_c0;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_1c0._8_8_ = local_1c0._0_8_;
  puVar12 = PTR__LC74_0010fea0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_188 = (undefined1  [16])0x0;
  local_1d0 = 0;
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_1c8 = "_get_importer_name";
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_1c8);
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = local_140 & 0xffffffff00000000;
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_188 = (undefined1  [16])0x0;
  local_1c8 = "_get_visible_name";
  local_1d0 = 0;
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_1c8);
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = local_140 & 0xffffffff00000000;
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_188 = (undefined1  [16])0x0;
  local_1c8 = "_get_preset_count";
  local_1d0 = 0;
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_1c8);
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = CONCAT44(local_140._4_4_,3);
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_1d0 = 0;
  local_1c8 = (char *)0x0;
  local_198 = "preset_index";
  local_190 = 0xc;
  String::parse_latin1((StrRange *)&local_1c8);
  local_198 = (char *)0x0;
  if (local_1c8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_1c8);
  }
  Vector<String>::push_back((Vector<String> *)local_1d8,(StrRange *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  local_188 = (undefined1  [16])0x0;
  local_1c8 = "_get_preset_name";
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_1c8);
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = local_140 & 0xffffffff00000000;
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_1c8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  Vector<int>::push_back(local_138,3);
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_188 = (undefined1  [16])0x0;
  local_1c8 = "_get_recognized_extensions";
  local_1d0 = 0;
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  local_1f8 = 0;
  local_1f0 = 0;
  local_1c8 = "";
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_1c0._8_8_;
  local_1c0 = auVar7 << 0x40;
  String::parse_latin1((StrRange *)&local_1f0);
  local_1e8 = 0;
  local_1c8 = (char *)CONCAT44(local_1c8._4_4_,0x22);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1c0 = (undefined1  [16])0x0;
  if (local_1f0 == 0) {
LAB_0010447b:
    local_1a0 = 6;
    StringName::operator=((StringName *)(local_1c0 + 8),(StringName *)&local_1f8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)&local_1f0);
    local_1a0 = 6;
    if (local_1b0 != 0x11) goto LAB_0010447b;
    StringName::StringName((StringName *)&local_1e0,(String *)&local_1a8,false);
    if (local_1c0._8_8_ == local_1e0) {
      if ((StringName::configured != '\0') && (local_1e0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1c0._8_8_ = local_1e0;
    }
  }
  local_278 = (StringName *)&local_1f8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1f8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = local_140 & 0xffffffff00000000;
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_1d0 = 0;
  local_1c8 = (char *)0x0;
  local_198 = "path";
  local_190 = 4;
  String::parse_latin1((StrRange *)&local_1c8);
  local_198 = (char *)0x0;
  if (local_1c8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_1c8);
  }
  Vector<String>::push_back((Vector<String> *)local_1d8,(StrRange *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  local_1e0 = 0;
  local_198 = "preset_index";
  local_190 = 0xc;
  String::parse_latin1((StrRange *)&local_1e0);
  local_198 = (char *)0x0;
  if (local_1e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_1e0);
  }
  Vector<String>::push_back((Vector<String> *)local_1d8,(StrRange *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  local_188 = (undefined1  [16])0x0;
  local_1c8 = "_get_import_options";
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  local_1f8 = 0;
  Variant::get_type_name((StrRange *)&local_1f0,0x1b);
  local_1e8 = 0;
  local_1c8 = (char *)CONCAT44(local_1c8._4_4_,0x1c);
  local_1b0 = 0x1f;
  local_1a8 = 0;
  local_1c0 = (undefined1  [16])0x0;
  if (local_1f0 == 0) {
LAB_001047fb:
    local_1a0 = 6;
    StringName::operator=((StringName *)(local_1c0 + 8),local_278);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)&local_1f0);
    local_1a0 = 6;
    if (local_1b0 != 0x11) goto LAB_001047fb;
    StringName::StringName((StringName *)&local_1e0,(String *)&local_1a8,false);
    if (local_1c0._8_8_ == local_1e0) {
      if ((StringName::configured != '\0') && (local_1e0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1c0._8_8_ = local_1e0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1f8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = local_140 & 0xffffffff00000000;
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_1c8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  Vector<int>::push_back(local_138,0);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_1c8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  Vector<int>::push_back(local_138,3);
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_188 = (undefined1  [16])0x0;
  local_1c8 = "_get_save_extension";
  local_1d0 = 0;
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_1c8);
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = local_140 & 0xffffffff00000000;
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_188 = (undefined1  [16])0x0;
  local_1c8 = "_get_resource_type";
  local_1d0 = 0;
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_1c8);
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = local_140 & 0xffffffff00000000;
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_188 = (undefined1  [16])0x0;
  local_1c8 = "_get_priority";
  local_1d0 = 0;
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  local_1f8 = 0;
  local_1f0 = 0;
  local_1c8 = "";
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_1c0._8_8_;
  local_1c0 = auVar8 << 0x40;
  String::parse_latin1((StrRange *)&local_1f0);
  local_1e8 = 0;
  local_1c8 = (char *)CONCAT44(local_1c8._4_4_,3);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1c0 = (undefined1  [16])0x0;
  if (local_1f0 == 0) {
LAB_00104ddb:
    local_1a0 = 6;
    StringName::operator=((StringName *)(local_1c0 + 8),local_278);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)&local_1f0);
    local_1a0 = 6;
    if (local_1b0 != 0x11) goto LAB_00104ddb;
    StringName::StringName((StringName *)&local_1e0,(String *)&local_1a8,false);
    if (local_1c0._8_8_ == local_1e0) {
      if ((StringName::configured != '\0') && (local_1e0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1c0._8_8_ = local_1e0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1f8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = CONCAT44(local_140._4_4_,9);
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_188 = (undefined1  [16])0x0;
  local_1c8 = "_get_import_order";
  local_1d0 = 0;
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_1c8);
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = CONCAT44(local_140._4_4_,3);
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_188 = (undefined1  [16])0x0;
  local_1c8 = "_get_format_version";
  local_1d0 = 0;
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_1c8);
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = CONCAT44(local_140._4_4_,3);
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_1d0 = 0;
  local_1c8 = (char *)0x0;
  local_198 = "path";
  local_190 = 4;
  String::parse_latin1((StrRange *)&local_1c8);
  local_198 = (char *)0x0;
  if (local_1c8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_1c8);
  }
  Vector<String>::push_back((Vector<String> *)local_1d8,(StrRange *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  local_1e8 = 0;
  local_198 = "option_name";
  local_190 = 0xb;
  String::parse_latin1((StrRange *)&local_1e8);
  local_198 = (char *)0x0;
  if (local_1e8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_1e8);
  }
  Vector<String>::push_back((Vector<String> *)local_1d8,(StrRange *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  local_1e0 = 0;
  local_198 = "options";
  local_190 = 7;
  String::parse_latin1((StrRange *)&local_1e0);
  local_198 = (char *)0x0;
  if (local_1e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_1e0);
  }
  Vector<String>::push_back((Vector<String> *)local_1d8,(StrRange *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  local_188 = (undefined1  [16])0x0;
  local_1c8 = "_get_option_visibility";
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 0x16;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  local_1f8 = 0;
  local_1f0 = 0;
  local_1c8 = "";
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_1c0._8_8_;
  local_1c0 = auVar9 << 0x40;
  String::parse_latin1((StrRange *)&local_1f0);
  local_1e8 = 0;
  local_1c8 = (char *)CONCAT44(local_1c8._4_4_,1);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1c0 = (undefined1  [16])0x0;
  if (local_1f0 == 0) {
LAB_001054bb:
    local_1a0 = 6;
    StringName::operator=((StringName *)(local_1c0 + 8),local_278);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)&local_1f0);
    local_1a0 = 6;
    if (local_1b0 != 0x11) goto LAB_001054bb;
    StringName::StringName((StringName *)&local_1e0,(String *)&local_1a8,false);
    if (local_1c0._8_8_ == local_1e0) {
      if ((StringName::configured != '\0') && (local_1e0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1c0._8_8_ = local_1e0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1f8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = local_140 & 0xffffffff00000000;
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_1c8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  Vector<int>::push_back(local_138,0);
  local_1f8 = 0;
  local_1f0 = 0;
  local_1c8 = "";
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_1c0._8_8_;
  local_1c0 = auVar4 << 0x40;
  String::parse_latin1((StrRange *)&local_1f0);
  local_1e8 = 0;
  local_1c8 = (char *)CONCAT44(local_1c8._4_4_,0x15);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1c0 = (undefined1  [16])0x0;
  if (local_1f0 == 0) {
LAB_0010564b:
    local_1a0 = 6;
    StringName::operator=((StringName *)(local_1c0 + 8),local_278);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)&local_1f0);
    local_1a0 = 6;
    if (local_1b0 != 0x11) goto LAB_0010564b;
    StringName::StringName((StringName *)&local_1e0,(String *)&local_1a8,false);
    if (local_1c0._8_8_ == local_1e0) {
      if ((StringName::configured != '\0') && (local_1e0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1c0._8_8_ = local_1e0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1f8 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  Vector<int>::push_back(local_138,0);
  local_1f8 = 0;
  local_1f0 = 0;
  local_1c8 = "";
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_1c0._8_8_;
  local_1c0 = auVar5 << 0x40;
  String::parse_latin1((StrRange *)&local_1f0);
  local_1e8 = 0;
  local_1c8 = (char *)CONCAT44(local_1c8._4_4_,0x1b);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1c0 = (undefined1  [16])0x0;
  if (local_1f0 == 0) {
LAB_001057bb:
    local_1a0 = 6;
    StringName::operator=((StringName *)(local_1c0 + 8),local_278);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)&local_1f0);
    local_1a0 = 6;
    if (local_1b0 != 0x11) goto LAB_001057bb;
    StringName::StringName((StringName *)&local_1e0,(String *)&local_1a8,false);
    if (local_1c0._8_8_ == local_1e0) {
      if ((StringName::configured != '\0') && (local_1e0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1c0._8_8_ = local_1e0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1f8 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  Vector<int>::push_back(local_138,0);
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_1d0 = 0;
  local_1c8 = (char *)0x0;
  local_198 = "source_file";
  local_190 = 0xb;
  String::parse_latin1((StrRange *)&local_1c8);
  local_198 = (char *)0x0;
  if (local_1c8 != (char *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_1c8);
  }
  Vector<String>::push_back((Vector<String> *)local_1d8,(StrRange *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  local_1f8 = 0;
  local_198 = "save_path";
  local_190 = 9;
  String::parse_latin1((StrRange *)local_278);
  local_198 = (char *)0x0;
  if (local_1f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)local_278);
  }
  Vector<String>::push_back((Vector<String> *)local_1d8,(StrRange *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  local_1e0 = 0;
  local_198 = "options";
  local_190 = 7;
  String::parse_latin1((StrRange *)&local_1e0);
  local_198 = (char *)0x0;
  if (local_1e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_1e0);
  }
  Vector<String>::push_back((Vector<String> *)local_1d8,(StrRange *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  local_1f0 = 0;
  local_198 = "platform_variants";
  local_190 = 0x11;
  String::parse_latin1((StrRange *)&local_1f0);
  local_198 = (char *)0x0;
  if (local_1f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_1f0);
  }
  Vector<String>::push_back((Vector<String> *)local_1d8,(StrRange *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  local_1e8 = 0;
  local_198 = "gen_files";
  local_190 = 9;
  String::parse_latin1((StrRange *)&local_1e8);
  local_198 = (char *)0x0;
  if (local_1e8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)&local_1e8);
  }
  Vector<String>::push_back((Vector<String> *)local_1d8,(StrRange *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_278);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  local_188 = (undefined1  [16])0x0;
  local_1c8 = "_import";
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_1c8);
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = local_140 & 0xffffffff00000000;
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_1c8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  Vector<int>::push_back(local_138,0);
  GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_1c8);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  Vector<int>::push_back(local_138,0);
  local_1f8 = 0;
  local_1f0 = 0;
  local_1c8 = "";
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_1c0._8_8_;
  local_1c0 = auVar10 << 0x40;
  String::parse_latin1((StrRange *)&local_1f0);
  local_1e8 = 0;
  local_1c8 = (char *)CONCAT44(local_1c8._4_4_,0x1b);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1c0 = (undefined1  [16])0x0;
  if (local_1f0 == 0) {
LAB_00105d1b:
    local_1a0 = 6;
    StringName::operator=((StringName *)(local_1c0 + 8),local_278);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)&local_1f0);
    local_1a0 = 6;
    if (local_1b0 != 0x11) goto LAB_00105d1b;
    StringName::StringName((StringName *)&local_1e0,(String *)&local_1a8,false);
    if (local_1c0._8_8_ == local_1e0) {
      if ((StringName::configured != '\0') && (local_1e0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1c0._8_8_ = local_1e0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1f8 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  Vector<int>::push_back(local_138,0);
  local_1f8 = 0;
  Variant::get_type_name((StrRange *)&local_1f0,4);
  local_1e8 = 0;
  local_1c8 = (char *)CONCAT44(local_1c8._4_4_,0x1c);
  local_1b0 = 0x1f;
  local_1a8 = 0;
  local_1c0 = (undefined1  [16])0x0;
  if (local_1f0 == 0) {
LAB_00105e63:
    local_1a0 = 6;
    StringName::operator=((StringName *)(local_1c0 + 8),local_278);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)&local_1f0);
    local_1a0 = 6;
    if (local_1b0 != 0x11) goto LAB_00105e63;
    StringName::StringName((StringName *)&local_1e0,(String *)&local_1a8,false);
    if (local_1c0._8_8_ == local_1e0) {
      if ((StringName::configured != '\0') && (local_1e0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1c0._8_8_ = local_1e0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1f8 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  Vector<int>::push_back(local_138,0);
  local_1f8 = 0;
  Variant::get_type_name((StrRange *)&local_1f0,4);
  local_1e8 = 0;
  local_1c8 = (char *)CONCAT44(local_1c8._4_4_,0x1c);
  local_1b0 = 0x1f;
  local_1a8 = 0;
  local_1c0 = (undefined1  [16])0x0;
  if (local_1f0 == 0) {
LAB_00105fab:
    local_1a0 = 6;
    StringName::operator=((StringName *)(local_1c0 + 8),local_278);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)&local_1f0);
    local_1a0 = 6;
    if (local_1b0 != 0x11) goto LAB_00105fab;
    StringName::StringName((StringName *)&local_1e0,(String *)&local_1a8,false);
    if (local_1c0._8_8_ == local_1e0) {
      if ((StringName::configured != '\0') && (local_1e0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_1c0._8_8_ = local_1e0;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1f8 != 0)) {
    StringName::unref();
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_158,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  Vector<int>::push_back(local_138,0);
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_188 = (undefined1  [16])0x0;
  local_1c8 = "_can_import_threaded";
  local_1d0 = 0;
  local_198 = (char *)0x0;
  local_190 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 6;
  local_160 = 1;
  local_158[0] = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  local_1c0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_198);
  local_160 = CONCAT44(local_160._4_4_,0xc);
  local_1f8 = 0;
  local_1f0 = 0;
  local_1c8 = "";
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_1c0._8_8_;
  local_1c0 = auVar11 << 0x40;
  String::parse_latin1((StrRange *)&local_1f0);
  local_1e8 = 0;
  local_1c8 = (char *)CONCAT44(local_1c8._4_4_,1);
  local_1b0 = 0;
  local_1a8 = 0;
  local_1c0 = (undefined1  [16])0x0;
  if (local_1f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1a8,(CowData *)&local_1f0);
    local_1a0 = 6;
    if (local_1b0 == 0x11) {
      StringName::StringName((StringName *)&local_1e0,(String *)&local_1a8,false);
      if (local_1c0._8_8_ == local_1e0) {
        if ((StringName::configured != '\0') && (local_1e0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_1c0._8_8_ = local_1e0;
      }
      goto LAB_0010626d;
    }
  }
  local_1a0 = 6;
  StringName::operator=((StringName *)(local_1c0 + 8),local_278);
LAB_0010626d:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1f8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=((PropertyInfo *)&local_190,(PropertyInfo *)&local_1c8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1c8);
  local_140 = local_140 & 0xffffffff00000000;
  local_1e0 = 0;
  local_1c8 = "EditorImportPlugin";
  local_1c0._0_8_ = 0x12;
  String::parse_latin1((StrRange *)&local_1e0);
  StringName::StringName((StringName *)&local_1c8,(String *)&local_1e0,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_1c8,(MethodInfo *)&local_198,true,(Vector *)local_1d8,false);
  if ((StringName::configured != '\0') && (local_1c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  MethodInfo::~MethodInfo((MethodInfo *)&local_198);
  CowData<String>::_unref((CowData<String> *)&local_1d0);
  local_128 = 0;
  local_120 = (undefined1  [16])0x0;
  local_1c8 = (char *)0x0;
  Dictionary::Dictionary(local_1d8);
  local_108 = puVar12;
  pcStack_100 = "custom_options";
  local_f8 = "custom_importer";
  pcStack_f0 = "generator_parameters";
  local_e8 = 0;
  local_d8 = (Variant *)&local_108;
  pVStack_d0 = (Variant *)&pcStack_100;
  local_c8 = (Variant *)&local_f8;
  ppcStack_c0 = &pcStack_f0;
  D_METHODP((char *)&local_198,(char ***)"append_import_external_resource",(uint)&local_d8);
  Variant::Variant(local_a8,local_1d8);
  Variant::Variant(local_90,(String *)&local_1c8);
  Variant::Variant(local_78,(Variant *)&local_128);
  pVVar16 = local_48;
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_d8 = local_a8;
  pVStack_d0 = local_90;
  local_c8 = local_78;
  pMVar14 = create_method_bind<EditorImportPlugin,Error,String_const&,Dictionary_const&,String_const&,Variant>
                      (_append_import_external_resource);
  ClassDB::bind_methodfi(1,pMVar14,false,(MethodDefinition *)&local_198,&local_d8,3);
  do {
    pVVar1 = pVVar16 + -0x18;
    pVVar16 = pVVar16 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar16 != local_a8);
  uVar13 = local_188._0_8_;
  if ((long *)local_188._0_8_ != (long *)0x0) {
    LOCK();
    plVar17 = (long *)(local_188._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      if ((long *)local_188._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_188._0_8_ + -8);
      lVar15 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_188._8_8_;
      local_188 = auVar6 << 0x40;
      plVar17 = (long *)uVar13;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar17 != 0)) {
            StringName::unref();
          }
          lVar15 = lVar15 + 1;
          plVar17 = plVar17 + 1;
        } while (lVar2 != lVar15);
      }
      Memory::free_static((long *)(uVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_198 != (char *)0x0)) {
    StringName::unref();
  }
  Dictionary::~Dictionary(local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if (Variant::needs_deinit[(int)local_128] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorImportPlugin::import(long, String const&, String const&, HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) */

int EditorImportPlugin::import
              (long param_1,String *param_2,String *param_3,HashMap *param_4,List *param_5,
              List *param_6,Variant *param_7)

{
  Variant *pVVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  Variant *pVVar7;
  CowData<char32_t> *pCVar8;
  undefined1 (*pauVar9) [16];
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  code *pcVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  Dictionary local_208 [8];
  Array local_200 [8];
  Array local_1f8 [8];
  long local_1f0;
  undefined8 local_1e8;
  Dictionary local_1e0 [8];
  Array local_1d8 [8];
  Array local_1d0 [8];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  Array local_1a8 [8];
  long local_1a0 [5];
  int local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138 [2];
  undefined8 local_128;
  ulong local_120;
  Vector<int> local_118 [8];
  undefined8 local_110;
  int local_108 [8];
  Variant *local_e8;
  Variant *pVStack_e0;
  Variant *local_d8;
  Variant *pVStack_d0;
  Variant *local_c8;
  CowData<char32_t> *local_b8;
  undefined1 auStack_b0 [16];
  Array *pAStack_a0;
  Array *local_98;
  Variant local_88 [24];
  Variant local_70 [24];
  Variant local_58 [24];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_208);
  Array::Array(local_200);
  local_b8 = (CowData<char32_t> *)0x0;
  local_178 = 0;
  uStack_174 = 0;
  auStack_b0 = (undefined1  [16])0x0;
  uVar15 = (uint)local_200;
  Array::set_typed(uVar15,(StringName *)0x4,(Variant *)&local_178);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_174,local_178) != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array(local_1f8);
  local_b8 = (CowData<char32_t> *)0x0;
  local_178 = 0;
  uStack_174 = 0;
  auStack_b0 = (undefined1  [16])0x0;
  uVar16 = (uint)local_1f8;
  Array::set_typed(uVar16,(StringName *)0x4,(Variant *)&local_178);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_174,local_178) != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  for (puVar2 = *(undefined8 **)(param_5 + 0x18); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    Variant::Variant((Variant *)&local_b8,(StringName *)(puVar2 + 2));
    pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_208);
    Variant::operator=(pVVar7,(Variant *)(puVar2 + 3));
    if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
    }
  }
  Array::Array(local_1d0,local_1f8);
  Array::Array(local_1d8,local_200);
  Dictionary::Dictionary(local_1e0,local_208);
  local_1e8 = 0;
  if (*(long *)param_4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1e8,(CowData *)param_4);
  }
  local_1f0 = 0;
  if (*(long *)param_3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1f0,(CowData *)param_3);
  }
  plVar12 = *(long **)(param_1 + 0x98);
  if (plVar12 == (long *)0x0) {
LAB_00106b44:
    if ((*(long *)(param_1 + 8) != 0) && (*(char *)(param_1 + 0x2a8) == '\0')) {
      local_168 = (undefined1  [16])0x0;
      local_178 = 0;
      uStack_174 = 0;
      local_170 = 0;
      uStack_16c = 0;
      local_158 = 0;
      local_150 = 0;
      local_148 = 6;
      local_140 = 1;
      local_138[0] = 0;
      local_128 = 0;
      local_120 = 0;
      local_110 = 0;
      String::parse_latin1((String *)&local_178,"_import");
      local_140 = CONCAT44(local_140._4_4_,0xc);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)local_1a8);
      PropertyInfo::operator=((PropertyInfo *)&local_170,(PropertyInfo *)local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_1a8);
      local_120 = local_120 & 0xffffffff00000000;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_1a8);
      Vector<int>::push_back(local_118,0);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_1a8);
      Vector<int>::push_back(local_118,0);
      GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_1a8);
      Vector<int>::push_back(local_118,0);
      GetTypeInfo<TypedArray<String>,void>::get_class_info
                ((GetTypeInfo<TypedArray<String>,void> *)local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_1a8);
      Vector<int>::push_back(local_118,0);
      GetTypeInfo<TypedArray<String>,void>::get_class_info
                ((GetTypeInfo<TypedArray<String>,void> *)local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_138,(PropertyInfo *)local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_1a8);
      Vector<int>::push_back(local_118,0);
      uVar6 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      lVar10 = *(long *)(param_1 + 8);
      pcVar13 = *(code **)(lVar10 + 0xd8);
      if (((pcVar13 == (code *)0x0) || (*(long *)(lVar10 + 0xe0) == 0)) &&
         (pcVar13 = *(code **)(lVar10 + 0xd0), pcVar13 == (code *)0x0)) {
        local_1b8 = 0;
        String::parse_latin1((String *)&local_1b8,"EditorImportPlugin");
        StringName::StringName((StringName *)&local_1b0,(String *)&local_1b8,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_1a8,(StringName *)&local_1b0);
        if (local_1a0[0] == 0) {
          lVar10 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_1a0);
          if (StringName::configured != '\0') goto LAB_001073b8;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
        }
        else {
          lVar10 = *(long *)(local_1a0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_1a0);
          if (StringName::configured != '\0') {
LAB_001073b8:
            if (local_1b0 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
          if (lVar10 != 0) {
            lVar10 = *(long *)(param_1 + 8);
            goto LAB_001072c1;
          }
        }
        lVar10 = *(long *)(param_1 + 8);
        pcVar13 = *(code **)(lVar10 + 200);
        if (((pcVar13 != (code *)0x0) && (*(long *)(lVar10 + 0xe0) != 0)) ||
           (pcVar13 = *(code **)(lVar10 + 0xc0), pcVar13 != (code *)0x0)) {
          uVar11 = (*pcVar13)(*(undefined8 *)(lVar10 + 0xa0),param_1 + 0x2a0);
          *(undefined8 *)(param_1 + 0x2b0) = uVar11;
          lVar10 = *(long *)(param_1 + 8);
        }
      }
      else {
        uVar11 = (*pcVar13)(*(undefined8 *)(lVar10 + 0xa0),param_1 + 0x2a0,uVar6);
        *(undefined8 *)(param_1 + 0x2b0) = uVar11;
        lVar10 = *(long *)(param_1 + 8);
      }
LAB_001072c1:
      if (*(char *)(lVar10 + 0x29) != '\0') {
        plVar12 = (long *)operator_new(0x18,"");
        *plVar12 = param_1 + 0x2b0;
        plVar12[1] = param_1 + 0x2a8;
        plVar12[2] = *(long *)(param_1 + 0x168);
        *(long **)(param_1 + 0x168) = plVar12;
      }
      *(undefined1 *)(param_1 + 0x2a8) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_178);
    }
    if (*(long *)(param_1 + 0x2b0) == 0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
      Dictionary::~Dictionary(local_1e0);
      Array::~Array(local_1d8);
      Array::~Array(local_1d0);
      _err_print_error("import","editor/import/editor_import_plugin.cpp",0xc2,
                       "Method/function failed. Returning: ERR_METHOD_NOT_FOUND",
                       "Unimplemented _import in add-on.",0,0);
      iVar5 = 0x25;
      goto LAB_00106bd0;
    }
    local_1c8 = 0;
    if (local_1f0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)&local_1f0);
    }
    local_1c0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c0,(CowData *)&local_1e8);
    Dictionary::Dictionary((Dictionary *)&local_1b8,local_1e0);
    Array::Array((Array *)&local_1b0,local_1d8);
    Array::Array(local_1a8,local_1d0);
    auStack_b0._8_8_ = (Dictionary *)&local_1b8;
    auStack_b0._0_8_ = (CowData<char32_t> *)&local_1c0;
    pcVar13 = *(code **)(*(long *)(param_1 + 8) + 0xe0);
    local_b8 = (CowData<char32_t> *)&local_1c8;
    pAStack_a0 = (Array *)&local_1b0;
    local_98 = local_1a8;
    if (pcVar13 == (code *)0x0) {
      (**(code **)(param_1 + 0x2b0))
                (*(undefined8 *)(param_1 + 0x10),(Variant *)&local_b8,(Variant *)&local_178);
    }
    else {
      (*pcVar13)(*(undefined8 *)(param_1 + 0x10),param_1 + 0x2a0,*(undefined8 *)(param_1 + 0x2b0),
                 (Variant *)&local_b8,(Variant *)&local_178);
    }
    iVar5 = local_178;
    Array::~Array(local_1a8);
    Array::~Array((Array *)&local_1b0);
    Dictionary::~Dictionary((Dictionary *)&local_1b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  }
  else {
    local_178 = 0;
    uStack_174 = 0;
    local_170 = 0;
    Variant::Variant((Variant *)&local_b8,(String *)&local_1f0);
    Variant::Variant((Variant *)&pAStack_a0,(String *)&local_1e8);
    Variant::Variant(local_88,local_1e0);
    Variant::Variant(local_70,local_1d8);
    Variant::Variant(local_58,local_1d0);
    local_e8 = (Variant *)&local_b8;
    pVStack_e0 = (Variant *)&pAStack_a0;
    local_d8 = local_88;
    pVStack_d0 = local_70;
    local_c8 = local_58;
    (**(code **)(*plVar12 + 0x60))
              ((Variant *)local_108,plVar12,param_1 + 0x2a0,&local_e8,5,(Variant *)&local_178);
    if (local_178 != 0) {
      if (Variant::needs_deinit[local_108[0]] != '\0') {
        Variant::_clear_internal();
      }
      pVVar7 = (Variant *)local_40;
      do {
        pVVar1 = pVVar7 + -0x18;
        pVVar7 = pVVar7 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar7 != (Variant *)&local_b8);
      goto LAB_00106b44;
    }
    lVar10 = Variant::operator_cast_to_long((Variant *)local_108);
    iVar5 = (int)lVar10;
    if (Variant::needs_deinit[local_108[0]] != '\0') {
      Variant::_clear_internal();
    }
    pVVar7 = (Variant *)local_40;
    do {
      pVVar1 = pVVar7 + -0x18;
      pVVar7 = pVVar7 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar7 != (Variant *)&local_b8);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  Dictionary::~Dictionary(local_1e0);
  Array::~Array(local_1d8);
  Array::~Array(local_1d0);
  for (iVar14 = 0; iVar4 = Array::size(), iVar14 < iVar4; iVar14 = iVar14 + 1) {
    Array::operator[](uVar15);
    Variant::operator_cast_to_String((Variant *)&local_178);
    if (*(long *)param_6 == 0) {
      pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_6 = pauVar9;
      *(undefined4 *)pauVar9[1] = 0;
      *pauVar9 = (undefined1  [16])0x0;
    }
    pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
    lVar10 = CONCAT44(uStack_174,local_178);
    if (lVar10 != 0) {
      CowData<char32_t>::_ref(pCVar8,(CowData *)&local_178);
      lVar10 = CONCAT44(uStack_174,local_178);
    }
    plVar12 = *(long **)param_6;
    lVar3 = plVar12[1];
    *(undefined8 *)(pCVar8 + 8) = 0;
    *(long **)(pCVar8 + 0x18) = plVar12;
    *(long *)(pCVar8 + 0x10) = lVar3;
    if (lVar3 != 0) {
      *(CowData<char32_t> **)(lVar3 + 8) = pCVar8;
    }
    plVar12[1] = (long)pCVar8;
    if (*plVar12 == 0) {
      *plVar12 = (long)pCVar8;
    }
    *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
    if (lVar10 != 0) {
      LOCK();
      plVar12 = (long *)(lVar10 + -0x10);
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
        lVar10 = CONCAT44(uStack_174,local_178);
        local_178 = 0;
        uStack_174 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
  }
  for (iVar14 = 0; iVar4 = Array::size(), iVar14 < iVar4; iVar14 = iVar14 + 1) {
    Array::operator[](uVar16);
    Variant::operator_cast_to_String((Variant *)&local_178);
    if (*(long *)param_7 == 0) {
      pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_7 = pauVar9;
      *(undefined4 *)pauVar9[1] = 0;
      *pauVar9 = (undefined1  [16])0x0;
    }
    pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
    lVar10 = CONCAT44(uStack_174,local_178);
    if (lVar10 != 0) {
      CowData<char32_t>::_ref(pCVar8,(CowData *)&local_178);
      lVar10 = CONCAT44(uStack_174,local_178);
    }
    plVar12 = *(long **)param_7;
    lVar3 = plVar12[1];
    *(undefined8 *)(pCVar8 + 8) = 0;
    *(long **)(pCVar8 + 0x18) = plVar12;
    *(long *)(pCVar8 + 0x10) = lVar3;
    if (lVar3 != 0) {
      *(CowData<char32_t> **)(lVar3 + 8) = pCVar8;
    }
    plVar12[1] = (long)pCVar8;
    if (*plVar12 == 0) {
      *plVar12 = (long)pCVar8;
    }
    *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
    if (lVar10 != 0) {
      LOCK();
      plVar12 = (long *)(lVar10 + -0x10);
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
        lVar10 = CONCAT44(uStack_174,local_178);
        local_178 = 0;
        uStack_174 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
  }
LAB_00106bd0:
  Array::~Array(local_1f8);
  Array::~Array(local_200);
  Dictionary::~Dictionary(local_208);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorImportPlugin::get_option_visibility(String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) const */

ulong __thiscall
EditorImportPlugin::get_option_visibility
          (EditorImportPlugin *this,String *param_1,String *param_2,HashMap *param_3)

{
  Variant *pVVar1;
  undefined4 uVar2;
  Variant *pVVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_1b0;
  Dictionary local_198 [8];
  long local_190;
  long local_188;
  Dictionary local_180 [8];
  undefined8 local_178;
  long local_170;
  long local_168;
  long local_160 [5];
  int local_138 [2];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  ulong local_e0;
  Vector<int> local_d8 [8];
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [8];
  CowData<char32_t> *local_88;
  StringName *pSStack_80;
  Dictionary *local_78;
  Variant local_70 [24];
  Variant local_58 [24];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_198);
  plVar7 = *(long **)(param_3 + 0x18);
  if (plVar7 != (long *)0x0) {
    do {
      Variant::Variant((Variant *)&local_88,(StringName *)(plVar7 + 2));
      pVVar3 = (Variant *)Dictionary::operator[]((Variant *)local_198);
      Variant::operator=(pVVar3,(Variant *)(plVar7 + 3));
      if (Variant::needs_deinit[(int)local_88] != '\0') {
        Variant::_clear_internal();
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  Dictionary::Dictionary(local_180,local_198);
  StringName::StringName((StringName *)&local_188,param_2,false);
  local_190 = 0;
  plVar7 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_001075ac;
      LOCK();
      lVar4 = *plVar7;
      bVar10 = lVar6 == lVar4;
      if (bVar10) {
        *plVar7 = lVar6 + 1;
        lVar4 = lVar6;
      }
      UNLOCK();
    } while (!bVar10);
    if (lVar4 != -1) {
      local_190 = *(long *)param_1;
    }
  }
LAB_001075ac:
  plVar7 = *(long **)(this + 0x98);
  if (plVar7 == (long *)0x0) {
LAB_001076c1:
    if ((*(long *)(this + 8) != 0) && (this[0x290] == (EditorImportPlugin)0x0)) {
      local_138[0] = 0;
      local_138[1] = 0;
      local_128 = (undefined1  [16])0x0;
      uStack_130 = 0;
      uStack_12c = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = 6;
      local_100 = 1;
      local_f8[0] = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d0 = 0;
      String::parse_latin1((String *)local_138,"_get_option_visibility");
      local_100 = CONCAT44(local_100._4_4_,0xc);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_168);
      PropertyInfo::operator=((PropertyInfo *)&uStack_130,(PropertyInfo *)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
      local_e0 = local_e0 & 0xffffffff00000000;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
      Vector<int>::push_back(local_d8,0);
      GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void> *)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
      Vector<int>::push_back(local_d8,0);
      GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void> *)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_f8,(PropertyInfo *)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_168);
      Vector<int>::push_back(local_d8,0);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x298) = 0;
      lVar6 = *(long *)(this + 8);
      pcVar8 = *(code **)(lVar6 + 0xd8);
      if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
         (pcVar8 = *(code **)(lVar6 + 0xd0), pcVar8 == (code *)0x0)) {
        local_178 = 0;
        String::parse_latin1((String *)&local_178,"EditorImportPlugin");
        StringName::StringName((StringName *)&local_170,(String *)&local_178,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_168,(StringName *)&local_170);
        if (local_160[0] == 0) {
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
          local_1b0 = 0;
          if (StringName::configured != '\0') goto LAB_00107bd0;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
LAB_00107bf2:
          lVar6 = *(long *)(this + 8);
          pcVar8 = *(code **)(lVar6 + 200);
          if (((pcVar8 == (code *)0x0) || (*(long *)(lVar6 + 0xe0) == 0)) &&
             (pcVar8 = *(code **)(lVar6 + 0xc0), pcVar8 == (code *)0x0)) goto LAB_00107af4;
          uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x288);
          *(undefined8 *)(this + 0x298) = uVar5;
        }
        else {
          local_1b0 = *(long *)(local_160[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_160);
          if (StringName::configured != '\0') {
LAB_00107bd0:
            if (local_170 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
          if (local_1b0 == 0) goto LAB_00107bf2;
        }
        lVar6 = *(long *)(this + 8);
      }
      else {
        uVar5 = (*pcVar8)(*(undefined8 *)(lVar6 + 0xa0),this + 0x288,uVar2);
        *(undefined8 *)(this + 0x298) = uVar5;
        lVar6 = *(long *)(this + 8);
      }
LAB_00107af4:
      if (*(char *)(lVar6 + 0x29) != '\0') {
        plVar7 = (long *)operator_new(0x18,"");
        *plVar7 = (long)(this + 0x298);
        plVar7[1] = (long)(this + 0x290);
        plVar7[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar7;
      }
      this[0x290] = (EditorImportPlugin)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)local_138);
    }
    if (*(long *)(this + 0x298) == 0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
      if ((StringName::configured == '\0') || (local_188 == 0)) {
        Dictionary::~Dictionary(local_180);
      }
      else {
        StringName::unref();
        Dictionary::~Dictionary(local_180);
      }
      uVar9 = 0;
      _err_print_error("get_option_visibility","editor/import/editor_import_plugin.cpp",0xab,
                       "Method/function failed. Returning: false",
                       "Unimplemented _get_option_visibility in add-on.",0,0);
      goto LAB_0010775c;
    }
    local_170 = 0;
    if (local_190 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_170,(CowData *)&local_190);
    }
    StringName::StringName((StringName *)&local_168,(StringName *)&local_188);
    Dictionary::Dictionary((Dictionary *)local_138,local_180);
    local_88 = (CowData<char32_t> *)&local_170;
    pSStack_80 = (StringName *)&local_168;
    local_78 = (Dictionary *)local_138;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x298))(*(undefined8 *)(this + 0x10),&local_88,&local_178);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x288,*(undefined8 *)(this + 0x298),&local_88,
                 &local_178);
    }
    uVar9 = CONCAT71((int7)((ulong)this >> 8),local_178._0_1_ != (String)0x0);
    Dictionary::~Dictionary((Dictionary *)local_138);
    if ((StringName::configured != '\0') && (local_168 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  }
  else {
    local_138[0] = 0;
    local_138[1] = 0;
    uStack_130 = 0;
    Variant::Variant((Variant *)&local_88,(String *)&local_190);
    Variant::Variant(local_70,(StringName *)&local_188);
    Variant::Variant(local_58,local_180);
    local_c8 = (Variant *)&local_88;
    pVStack_c0 = local_70;
    local_b8 = local_58;
    (**(code **)(*plVar7 + 0x60))((Variant *)local_a8,plVar7,this + 0x288,&local_c8,3,local_138);
    if (local_138[0] != 0) {
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      pVVar3 = (Variant *)local_40;
      do {
        pVVar1 = pVVar3 + -0x18;
        pVVar3 = pVVar3 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar3 != (Variant *)&local_88);
      goto LAB_001076c1;
    }
    bVar10 = Variant::operator_cast_to_bool((Variant *)local_a8);
    uVar9 = CONCAT71(extraout_var,bVar10) & 0xffffffff;
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    pVVar3 = (Variant *)local_40;
    do {
      pVVar1 = pVVar3 + -0x18;
      pVVar3 = pVVar3 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar3 != (Variant *)&local_88);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  if ((StringName::configured != '\0') && (local_188 != 0)) {
    StringName::unref();
  }
  Dictionary::~Dictionary(local_180);
LAB_0010775c:
  Dictionary::~Dictionary(local_198);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9 & 0xffffffff;
}



/* EditorImportPlugin::get_import_options(String const&, List<ResourceImporter::ImportOption,
   DefaultAllocator>*, int) const */

void __thiscall
EditorImportPlugin::get_import_options
          (EditorImportPlugin *this,String *param_1,List *param_2,int param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  Variant *pVVar10;
  Variant *pVVar11;
  long lVar12;
  undefined1 (*pauVar13) [16];
  undefined8 uVar14;
  long *plVar15;
  code *pcVar16;
  uint uVar17;
  long in_FS_OFFSET;
  Variant *local_1e8;
  StringName *local_1d0;
  CowData *local_1c0;
  StringName *local_1b8;
  Array local_1a8 [8];
  Array local_1a0 [8];
  undefined8 local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170 [5];
  int local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined1 local_138 [16];
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108 [2];
  undefined8 local_f8;
  ulong local_f0;
  Vector<int> local_e8 [8];
  undefined8 local_e0;
  Variant *local_d8;
  Variant *pVStack_d0;
  int local_c8 [8];
  CowData<char32_t> *local_a8;
  undefined1 auStack_a0 [16];
  int local_88 [2];
  undefined1 local_80 [16];
  int local_70 [2];
  long local_68;
  undefined4 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(local_1a8);
  Variant::Variant((Variant *)local_88,"name");
  Array::push_back((Variant *)local_1a8);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_88,"default_value");
  Array::push_back((Variant *)local_1a8);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array(local_1a0);
  local_88[0] = 0;
  local_88[1] = 0;
  local_148 = 0;
  uStack_144 = 0;
  local_80 = (undefined1  [16])0x0;
  uVar17 = (uint)local_1a0;
  Array::set_typed(uVar17,(StringName *)0x1b,(Variant *)&local_148);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_144,local_148) != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_198 = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_198,(CowData *)param_1);
  }
  plVar15 = *(long **)(this + 0x98);
  if (plVar15 == (long *)0x0) {
LAB_00107ef5:
    if ((*(long *)(this + 8) != 0) && (this[0x200] == (EditorImportPlugin)0x0)) {
      local_138 = (undefined1  [16])0x0;
      local_148 = 0;
      uStack_144 = 0;
      local_140 = 0;
      uStack_13c = 0;
      local_128 = 0;
      local_120 = 0;
      local_118 = 6;
      local_110 = 1;
      local_108[0] = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e0 = 0;
      String::parse_latin1((String *)&local_148,"_get_import_options");
      local_110 = CONCAT44(local_110._4_4_,0xc);
      GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
                ((GetTypeInfo<TypedArray<Dictionary>,void> *)&local_178);
      PropertyInfo::operator=((PropertyInfo *)&local_140,(PropertyInfo *)&local_178);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      local_f0 = local_f0 & 0xffffffff00000000;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_178);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)&local_178);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      Vector<int>::push_back(local_e8,0);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_178);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_108,(PropertyInfo *)&local_178);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
      Vector<int>::push_back(local_e8,3);
      uVar8 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x208) = 0;
      lVar12 = *(long *)(this + 8);
      pcVar16 = *(code **)(lVar12 + 0xd8);
      if (((pcVar16 == (code *)0x0) || (*(long *)(lVar12 + 0xe0) == 0)) &&
         (pcVar16 = *(code **)(lVar12 + 0xd0), pcVar16 == (code *)0x0)) {
        local_188 = 0;
        String::parse_latin1((String *)&local_188,"EditorImportPlugin");
        StringName::StringName((StringName *)&local_180,(String *)&local_188,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_178,(StringName *)&local_180);
        if (local_170[0] == 0) {
          lVar12 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_170);
          if (StringName::configured != '\0') goto LAB_00108dc6;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
LAB_00108dea:
          lVar12 = *(long *)(this + 8);
          pcVar16 = *(code **)(lVar12 + 200);
          if (((pcVar16 == (code *)0x0) || (*(long *)(lVar12 + 0xe0) == 0)) &&
             (pcVar16 = *(code **)(lVar12 + 0xc0), pcVar16 == (code *)0x0)) goto LAB_00108c8a;
          uVar14 = (*pcVar16)(*(undefined8 *)(lVar12 + 0xa0),this + 0x1f8);
          *(undefined8 *)(this + 0x208) = uVar14;
        }
        else {
          lVar12 = *(long *)(local_170[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_170);
          if (StringName::configured != '\0') {
LAB_00108dc6:
            if (local_180 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
          if (lVar12 == 0) goto LAB_00108dea;
        }
        lVar12 = *(long *)(this + 8);
      }
      else {
        uVar14 = (*pcVar16)(*(undefined8 *)(lVar12 + 0xa0),this + 0x1f8,uVar8);
        *(undefined8 *)(this + 0x208) = uVar14;
        lVar12 = *(long *)(this + 8);
      }
LAB_00108c8a:
      if (*(char *)(lVar12 + 0x29) != '\0') {
        plVar15 = (long *)operator_new(0x18,"");
        *plVar15 = (long)(this + 0x208);
        plVar15[1] = (long)(this + 0x200);
        plVar15[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar15;
      }
      this[0x200] = (EditorImportPlugin)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_148);
    }
    if (*(long *)(this + 0x208) == 0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
      _err_print_error("get_import_options","editor/import/editor_import_plugin.cpp",0x9c,
                       "Method/function failed.","Unimplemented _get_import_options in add-on.",0,0)
      ;
      goto LAB_00107f45;
    }
    local_190 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_190,(CowData *)&local_198);
    auStack_a0._0_8_ = &local_188;
    local_188 = (long)param_3;
    local_a8 = (CowData<char32_t> *)&local_190;
    Array::Array((Array *)&local_180);
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x208))(*(undefined8 *)(this + 0x10),&local_a8,(Array *)&local_180);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x1f8,*(undefined8 *)(this + 0x208),&local_a8,
                 (Array *)&local_180);
    }
    Array::Array((Array *)&local_148);
    local_88[0] = 0;
    local_88[1] = 0;
    local_178 = 0;
    local_80 = (undefined1  [16])0x0;
    Array::set_typed((uint)(Variant *)&local_148,(StringName *)0x1b,(Variant *)&local_178);
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar5 = Array::is_same_typed((Array *)&local_148);
    if (cVar5 == '\0') {
      Array::assign((Array *)&local_148);
    }
    else {
      Array::_ref((Array *)&local_148);
    }
    Array::operator=(local_1a0,(Array *)&local_148);
    Array::~Array((Array *)&local_148);
    Array::~Array((Array *)&local_180);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  }
  else {
    local_148 = 0;
    uStack_144 = 0;
    local_140 = 0;
    Variant::Variant((Variant *)local_88,(String *)&local_198);
    Variant::Variant((Variant *)local_70,param_3);
    local_d8 = (Variant *)local_88;
    pVStack_d0 = (Variant *)local_70;
    (**(code **)(*plVar15 + 0x60))(local_c8,plVar15,this + 0x1f8,&local_d8,2,(Variant *)&local_148);
    if (local_148 != 0) {
      if (Variant::needs_deinit[local_c8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_70[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00107ef5;
    }
    Variant::operator_cast_to_Array((Variant *)&local_180);
    Array::Array((Array *)&local_178);
    auStack_a0 = (undefined1  [16])0x0;
    local_a8 = (CowData<char32_t> *)0x0;
    local_188 = 0;
    Array::set_typed((uint)(Array *)&local_178,(StringName *)0x1b,(Variant *)&local_188);
    if ((StringName::configured != '\0') && (local_188 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
    }
    local_1b8 = (StringName *)&local_178;
    local_1d0 = (StringName *)&local_180;
    cVar5 = Array::is_same_typed((Array *)local_1b8);
    if (cVar5 == '\0') {
      Array::assign((Array *)local_1b8);
    }
    else {
      Array::_ref((Array *)local_1b8);
    }
    Array::~Array((Array *)local_1d0);
    Array::operator=(local_1a0,(Array *)local_1b8);
    Array::~Array((Array *)local_1b8);
    if (Variant::needs_deinit[local_c8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  local_1b8 = (StringName *)&local_178;
  local_1c0 = (CowData *)&local_188;
  local_1d0 = (StringName *)&local_180;
  local_1e8 = (Variant *)&local_a8;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
  for (iVar1 = 0; iVar6 = Array::size(), iVar1 < iVar6; iVar1 = iVar1 + 1) {
    Array::operator[](uVar17);
    Variant::operator_cast_to_Dictionary((Variant *)&local_198);
    cVar5 = Dictionary::has_all((Array *)&local_198);
    if (cVar5 == '\0') {
      _err_print_error("get_import_options","editor/import/editor_import_plugin.cpp",0x83,
                       "Condition \"!d.has_all(needed)\" is true.",0,0);
      Dictionary::~Dictionary((Dictionary *)&local_198);
      break;
    }
    Variant::Variant((Variant *)local_88,"name");
    Dictionary::operator[]((Variant *)&local_198);
    Variant::operator_cast_to_String((Variant *)&local_190);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_88,"default_value");
    pVVar10 = (Variant *)Dictionary::operator[]((Variant *)&local_198);
    Variant::Variant(local_1e8,pVVar10);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_88,"property_hint");
    cVar5 = Dictionary::has((Variant *)&local_198);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar6 = 0;
    if (cVar5 != '\0') {
      Variant::Variant((Variant *)local_88,"property_hint");
      pVVar11 = (Variant *)Dictionary::operator[]((Variant *)&local_198);
      lVar12 = Variant::operator_cast_to_long(pVVar11);
      iVar6 = (int)lVar12;
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    local_188 = 0;
    Variant::Variant((Variant *)local_88,"hint_string");
    cVar5 = Dictionary::has((Variant *)&local_198);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar12 = 0;
    if (cVar5 != '\0') {
      Variant::Variant((Variant *)local_88,"hint_string");
      Dictionary::operator[]((Variant *)&local_198);
      Variant::operator_cast_to_String((Variant *)&local_148);
      lVar12 = CONCAT44(uStack_144,local_148);
      if (lVar12 != 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1c0);
        lVar12 = CONCAT44(uStack_144,local_148);
        local_148 = 0;
        uStack_144 = 0;
        local_188 = lVar12;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    Variant::Variant((Variant *)local_88,"usage");
    cVar5 = Dictionary::has((Variant *)&local_198);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    uVar7 = 6;
    if (cVar5 != '\0') {
      Variant::Variant((Variant *)local_88,"usage");
      pVVar11 = (Variant *)Dictionary::operator[]((Variant *)&local_198);
      uVar7 = Variant::operator_cast_to_unsigned_int(pVVar11);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    local_180 = 0;
    local_140 = 0;
    uStack_13c = 0;
    local_148 = (int)local_a8;
    if (local_190 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)&local_190);
    }
    auVar4._4_4_ = local_138._12_4_;
    auVar4._0_4_ = iVar6;
    auVar4._8_8_ = 0;
    local_138 = auVar4 << 0x40;
    local_128 = 0;
    if (lVar12 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,local_1c0);
      iVar6 = local_138._8_4_;
    }
    local_120 = CONCAT44(local_120._4_4_,uVar7);
    if (iVar6 == 0x11) {
      StringName::StringName(local_1b8,(String *)&local_128,false);
      if (local_138._0_8_ == local_178) {
        if ((StringName::configured != '\0') && (local_178 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_138._0_8_ = local_178;
      }
    }
    else {
      StringName::operator=((StringName *)local_138,local_1d0);
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_80._8_8_;
    local_80 = auVar3 << 0x40;
    local_88[0] = local_148;
    if (CONCAT44(uStack_13c,local_140) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_80,(CowData *)&local_140);
    }
    StringName::StringName((StringName *)(local_80 + 8),(StringName *)local_138);
    local_68 = 0;
    local_70[0] = local_138._8_4_;
    if (local_128 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_128);
    }
    local_60 = (undefined4)local_120;
    Variant::Variant((Variant *)local_58,local_1e8);
    lVar12 = local_128;
    if (local_128 != 0) {
      LOCK();
      plVar15 = (long *)(local_128 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        local_128 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_138._0_8_ != 0)) {
      StringName::unref();
    }
    if (CONCAT44(uStack_13c,local_140) != 0) {
      LOCK();
      plVar15 = (long *)(CONCAT44(uStack_13c,local_140) + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        lVar12 = CONCAT44(uStack_13c,local_140);
        local_140 = 0;
        uStack_13c = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_180 != 0)) {
      StringName::unref();
    }
    if (*(long *)param_2 == 0) {
      pauVar13 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_2 = pauVar13;
      *(undefined4 *)pauVar13[1] = 0;
      *pauVar13 = (undefined1  [16])0x0;
    }
    puVar9 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
    *(undefined8 *)(puVar9 + 8) = 0;
    *(undefined1 (*) [16])(puVar9 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar9 + 0xe) = (undefined1  [16])0x0;
    *puVar9 = 0;
    puVar9[6] = 0;
    puVar9[10] = 6;
    puVar9[0xc] = 0;
    *(undefined8 *)(puVar9 + 0x16) = 0;
    *(undefined1 (*) [16])(puVar9 + 0x12) = (undefined1  [16])0x0;
    *puVar9 = local_88[0];
    if (local_80._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 2),(CowData *)local_80);
    }
    StringName::operator=((StringName *)(puVar9 + 4),(StringName *)(local_80 + 8));
    puVar9[6] = local_70[0];
    if (*(long *)(puVar9 + 8) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 8),(CowData *)&local_68);
    }
    puVar9[10] = local_60;
    Variant::operator=((Variant *)(puVar9 + 0xc),(Variant *)local_58);
    uVar14 = *(undefined8 *)(*(long *)param_2 + 8);
    *(long *)(puVar9 + 0x16) = *(long *)param_2;
    plVar15 = *(long **)param_2;
    *(undefined8 *)(puVar9 + 0x12) = 0;
    *(undefined8 *)(puVar9 + 0x14) = uVar14;
    if (plVar15[1] != 0) {
      *(undefined4 **)(plVar15[1] + 0x48) = puVar9;
    }
    plVar15[1] = (long)puVar9;
    if (*plVar15 == 0) {
      *plVar15 = (long)puVar9;
    }
    *(int *)(plVar15 + 2) = (int)plVar15[2] + 1;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar12 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar15 = (long *)(local_68 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_80._8_8_ != 0)) {
      StringName::unref();
    }
    uVar14 = local_80._0_8_;
    if (local_80._0_8_ != 0) {
      LOCK();
      plVar15 = (long *)(local_80._0_8_ + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_80._8_8_;
        local_80 = auVar2 << 0x40;
        Memory::free_static((void *)(uVar14 + -0x10),false);
      }
    }
    if (local_188 != 0) {
      LOCK();
      plVar15 = (long *)(local_188 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        Memory::free_static((void *)(local_188 + -0x10),false);
      }
    }
    if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
    }
    lVar12 = local_190;
    if (local_190 != 0) {
      LOCK();
      plVar15 = (long *)(local_190 + -0x10);
      *plVar15 = *plVar15 + -1;
      UNLOCK();
      if (*plVar15 == 0) {
        local_190 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    Dictionary::~Dictionary((Dictionary *)&local_198);
  }
LAB_00107f45:
  Array::~Array(local_1a0);
  Array::~Array(local_1a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorImportPlugin::get_preset_name(int) const */

long * EditorImportPlugin::get_preset_name(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  long local_120 [5];
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  ulong local_a0;
  Vector<int> local_98 [8];
  undefined8 local_90;
  Variant *local_80;
  int local_78 [8];
  long *local_58 [3];
  long local_40;
  
  plVar7 = (long *)CONCAT44(in_register_0000003c,param_1);
  plVar5 = *(long **)(in_RSI + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_140 = 0;
  if (plVar5 == (long *)0x0) {
LAB_00108f9d:
    if ((*(long *)(in_RSI + 8) != 0) && (*(char *)(in_RSI + 0x1d0) == '\0')) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1  [16])0x0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 6;
      local_c0 = 1;
      local_b8[0] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = 0;
      String::parse_latin1((String *)&local_f8,"_get_preset_name");
      local_c0 = CONCAT44(local_c0._4_4_,0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void> *)&local_128);
      PropertyInfo::operator=((PropertyInfo *)&uStack_f0,(PropertyInfo *)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void> *)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
      Vector<int>::push_back(local_98,3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long *)(in_RSI + 8);
      *(undefined8 *)(in_RSI + 0x1d8) = 0;
      pcVar6 = *(code **)(lVar4 + 0xd8);
      if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
         (pcVar6 = *(code **)(lVar4 + 0xd0), pcVar6 == (code *)0x0)) {
        local_138 = 0;
        String::parse_latin1((String *)&local_138,"EditorImportPlugin");
        StringName::StringName((StringName *)&local_130,(String *)&local_138,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)&local_128,(StringName *)&local_130);
        if (local_120[0] == 0) {
          lVar4 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
          if (StringName::configured != '\0') goto LAB_001093bc;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
LAB_001093db:
          lVar4 = *(long *)(in_RSI + 8);
          pcVar6 = *(code **)(lVar4 + 200);
          if (((pcVar6 == (code *)0x0) || (*(long *)(lVar4 + 0xe0) == 0)) &&
             (pcVar6 = *(code **)(lVar4 + 0xc0), pcVar6 == (code *)0x0)) goto LAB_001092f1;
          uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x1c8);
          *(undefined8 *)(in_RSI + 0x1d8) = uVar3;
        }
        else {
          lVar4 = *(long *)(local_120[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_120);
          if (StringName::configured != '\0') {
LAB_001093bc:
            if (local_130 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
          if (lVar4 == 0) goto LAB_001093db;
        }
        lVar4 = *(long *)(in_RSI + 8);
      }
      else {
        uVar3 = (*pcVar6)(*(undefined8 *)(lVar4 + 0xa0),in_RSI + 0x1c8,uVar2);
        *(undefined8 *)(in_RSI + 0x1d8) = uVar3;
        lVar4 = *(long *)(in_RSI + 8);
      }
LAB_001092f1:
      if (*(char *)(lVar4 + 0x29) != '\0') {
        plVar5 = (long *)operator_new(0x18,"");
        *plVar5 = in_RSI + 0x1d8;
        plVar5[1] = in_RSI + 0x1d0;
        plVar5[2] = *(long *)(in_RSI + 0x168);
        *(long **)(in_RSI + 0x168) = plVar5;
      }
      *(undefined1 *)(in_RSI + 0x1d0) = 1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_f8);
    }
    pcVar6 = *(code **)(in_RSI + 0x1d8);
    if (pcVar6 == (code *)0x0) {
      _err_print_error("get_preset_name","editor/import/editor_import_plugin.cpp",0x48,
                       "Method/function failed. Returning: String()",
                       "Unimplemented _get_preset_name in add-on.",0,0);
      *plVar7 = 0;
      goto LAB_00109064;
    }
    local_58[0] = &local_130;
    local_130 = (long)in_EDX;
    local_128 = 0;
    pcVar1 = *(code **)(*(long *)(in_RSI + 8) + 0xe0);
    if (pcVar1 == (code *)0x0) {
      (*pcVar6)(*(undefined8 *)(in_RSI + 0x10),local_58,(CowData<char32_t> *)&local_128);
      local_f8 = 0;
      uStack_f4 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_128);
      lVar4 = CONCAT44(uStack_f4,local_f8);
      lVar8 = local_140;
joined_r0x00109176:
      local_140 = lVar8;
      if (lVar4 != 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        local_f8 = 0;
        uStack_f4 = 0;
        lVar8 = lVar4;
      }
    }
    else {
      (*pcVar1)(*(undefined8 *)(in_RSI + 0x10),in_RSI + 0x1c8,pcVar6,local_58,
                (CowData<char32_t> *)&local_128);
      local_f8 = 0;
      uStack_f4 = 0;
      lVar8 = local_140;
      if (local_128 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_128);
        lVar4 = CONCAT44(uStack_f4,local_f8);
        lVar8 = local_140;
        goto joined_r0x00109176;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  }
  else {
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    Variant::Variant((Variant *)local_78,in_EDX);
    local_80 = (Variant *)local_78;
    (**(code **)(*plVar5 + 0x60))(local_58,plVar5,in_RSI + 0x1c8,&local_80,1,&local_f8);
    if (local_f8 != 0) {
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00108f9d;
    }
    Variant::operator_cast_to_String((Variant *)&local_128);
    lVar8 = local_128;
    if (local_128 != 0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
      lVar8 = local_128;
      local_128 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  *plVar7 = lVar8;
LAB_00109064:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar7;
  }
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
  return (uint)CONCAT71(0x10fc,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10fc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* EditorImportPlugin::is_class_ptr(void*) const */

uint __thiscall EditorImportPlugin::is_class_ptr(EditorImportPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x10fc,(undefined4 *)param_1 ==
                               &ResourceImporter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10fc,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10fc,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10fc,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorImportPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorImportPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorImportPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorImportPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorImportPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorImportPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorImportPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorImportPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorImportPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorImportPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorImportPlugin::_notificationv(int, bool) */

void EditorImportPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTR<Error, String const&, Dictionary const&, String const&,
   Variant>::_gen_argument_type(int) const */

long __thiscall
MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant>::_gen_argument_type
          (MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant> *this,
          int param_1)

{
  long lVar1;
  
  lVar1 = 2;
  if ((((uint)param_1 < 4) && (lVar1 = 4, param_1 != 0)) && (lVar1 = 0x1b, param_1 != 1)) {
    lVar1 = (ulong)(param_1 == 2) << 2;
  }
  return lVar1;
}



/* MethodBindTR<Error, String const&, Dictionary const&, String const&,
   Variant>::get_argument_meta(int) const */

undefined8
MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant>::get_argument_meta
          (int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&, Dictionary const&, String const&, Variant>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant>::~MethodBindTR
          (MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fc40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&, Dictionary const&, String const&, Variant>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant>::~MethodBindTR
          (MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010fc40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010f8c8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010f8c8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* EditorImportPlugin::~EditorImportPlugin() */

void __thiscall EditorImportPlugin::~EditorImportPlugin(EditorImportPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010fa28;
  if (bVar1) {
    if (*(long *)(this + 0x2b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099bc;
    }
    if (*(long *)(this + 0x2a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099bc;
    }
    if (*(long *)(this + 0x288) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099bc;
    }
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099bc;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099bc;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099bc;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099bc;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099bc;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099bc;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099bc;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099bc;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099bc;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001099bc;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_001099bc:
  *(undefined ***)this = &PTR__initialize_classv_0010f8c8;
  Object::~Object((Object *)this);
  return;
}



/* EditorImportPlugin::~EditorImportPlugin() */

void __thiscall EditorImportPlugin::~EditorImportPlugin(EditorImportPlugin *this)

{
  ~EditorImportPlugin(this);
  operator_delete(this,0x2d0);
  return;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

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



/* EditorImportPlugin::_bind_methods() [clone .cold] */

void EditorImportPlugin::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_00109d73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109d73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00109dde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00109dde:
  return &_get_class_namev()::_class_name_static;
}



/* EditorImportPlugin::_get_class_namev() const */

undefined8 * EditorImportPlugin::_get_class_namev(void)

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
LAB_00109e63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109e63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorImportPlugin");
      goto LAB_00109ece;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorImportPlugin");
LAB_00109ece:
  return &_get_class_namev()::_class_name_static;
}



/* EditorImportPlugin::get_class() const */

void EditorImportPlugin::get_class(void)

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
LAB_0010a3c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010a3c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010a3e6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010a3e6:
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
            if (lVar5 == 0) goto LAB_0010a6bf;
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
LAB_0010a6bf:
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
    if (cVar6 != '\0') goto LAB_0010a773;
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
              if (lVar5 == 0) goto LAB_0010a823;
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
LAB_0010a823:
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
      if (cVar6 != '\0') goto LAB_0010a773;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010a773:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorImportPlugin::is_class(String const&) const */

undefined8 __thiscall EditorImportPlugin::is_class(EditorImportPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010a95f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010a95f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010aa13;
  }
  cVar6 = String::operator==(param_1,"EditorImportPlugin");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_0010aa13;
    }
    cVar6 = String::operator==(param_1,"ResourceImporter");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar8;
      }
      goto LAB_0010ab58;
    }
  }
LAB_0010aa13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ab58:
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



/* GetTypeInfo<bool, void>::get_class_info() */

GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010ad8c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010ad8c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<int, void>::get_class_info() */

GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010af0c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010af0c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<float, void>::get_class_info() */

GetTypeInfo<float,void> * __thiscall
GetTypeInfo<float,void>::get_class_info(GetTypeInfo<float,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 3;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b08c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b08c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<String, void>::get_class_info() */

GetTypeInfo<String,void> * __thiscall
GetTypeInfo<String,void>::get_class_info(GetTypeInfo<String,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 4;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b20c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b20c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<StringName, void>::get_class_info() */

GetTypeInfo<StringName,void> * __thiscall
GetTypeInfo<StringName,void>::get_class_info(GetTypeInfo<StringName,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x15;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b38c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b38c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Dictionary, void>::get_class_info() */

GetTypeInfo<Dictionary,void> * __thiscall
GetTypeInfo<Dictionary,void>::get_class_info(GetTypeInfo<Dictionary,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x1b;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b50c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b50c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Vector<String>, void>::get_class_info() */

GetTypeInfo<Vector<String>,void> * __thiscall
GetTypeInfo<Vector<String>,void>::get_class_info(GetTypeInfo<Vector<String>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC8;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x22;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010b68c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010b68c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
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
    return this;
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
LAB_0010b848:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010b848;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010b865;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010b865:
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



/* EditorImportPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorImportPlugin::_get_property_listv(EditorImportPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorImportPlugin";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorImportPlugin";
  local_98 = 0;
  local_70 = 0x12;
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
LAB_0010bc98:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010bc98;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010bcb5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010bcb5:
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
  StringName::StringName((StringName *)&local_78,"EditorImportPlugin",false);
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



/* GetTypeInfo<TypedArray<String>, void>::get_class_info() */

GetTypeInfo<TypedArray<String>,void> * __thiscall
GetTypeInfo<TypedArray<String>,void>::get_class_info(GetTypeInfo<TypedArray<String>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  Variant::get_type_name(&local_38,4);
  *(undefined4 *)this = 0x1c;
  *(undefined4 *)(this + 0x18) = 0x1f;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_38 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_38);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_28,(String *)(this + 0x20),false);
      if (*(long *)(this + 0x10) == local_28) {
        lVar2 = local_38;
        if ((StringName::configured != '\0') && (local_28 != 0)) {
          StringName::unref();
          lVar2 = local_38;
        }
      }
      else {
        StringName::unref();
        *(long *)(this + 0x10) = local_28;
        lVar2 = local_38;
      }
      goto joined_r0x0010c08c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_30);
  lVar2 = local_38;
joined_r0x0010c08c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<TypedArray<Dictionary>, void>::get_class_info() */

GetTypeInfo<TypedArray<Dictionary>,void> * __thiscall
GetTypeInfo<TypedArray<Dictionary>,void>::get_class_info
          (GetTypeInfo<TypedArray<Dictionary>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  Variant::get_type_name(&local_38,0x1b);
  *(undefined4 *)this = 0x1c;
  *(undefined4 *)(this + 0x18) = 0x1f;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_38 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_38);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_28,(String *)(this + 0x20),false);
      if (*(long *)(this + 0x10) == local_28) {
        lVar2 = local_38;
        if ((StringName::configured != '\0') && (local_28 != 0)) {
          StringName::unref();
          lVar2 = local_38;
        }
      }
      else {
        StringName::unref();
        *(long *)(this + 0x10) = local_28;
        lVar2 = local_38;
      }
      goto joined_r0x0010c1ec;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_30);
  lVar2 = local_38;
joined_r0x0010c1ec:
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
    return this;
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::insert(StringName const&, Variant
   const&, bool) */

StringName *
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::insert(StringName *param_1,Variant *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  void *pvVar5;
  void *__s;
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
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *__s_00;
  long lVar34;
  void *pvVar35;
  Variant *in_RCX;
  int iVar36;
  undefined7 in_register_00000011;
  StringName *pSVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  undefined8 uVar42;
  char in_R8B;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  uint uVar46;
  undefined8 *puVar47;
  long in_FS_OFFSET;
  undefined8 *local_c0;
  long local_68;
  int local_60 [8];
  long local_40;
  
  pSVar37 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar41 = (ulong)uVar30;
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    pvVar35 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = pvVar35;
    if (uVar30 != 0) {
      pvVar5 = *(void **)(param_2 + 0x10);
      if ((pvVar5 < (void *)((long)pvVar35 + uVar45)) && (pvVar35 < (void *)((long)pvVar5 + uVar32))
         ) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar32 * 4) = 0;
          *(undefined8 *)((long)pvVar35 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar41 != uVar32);
      }
      else {
        memset(pvVar5,0,uVar32);
        memset(pvVar35,0,uVar45);
      }
      goto LAB_0010cc95;
    }
    iVar36 = *(int *)(param_2 + 0x2c);
    if (pvVar35 == (void *)0x0) goto LAB_0010cd97;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0010cca1;
LAB_0010cdbd:
    uVar30 = *(uint *)(param_2 + 0x28);
    if (uVar30 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c0 = (undefined8 *)0x0;
      goto LAB_0010d15c;
    }
    uVar32 = (ulong)(uVar30 + 1);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)uVar30 * 4);
    if (uVar30 + 1 < 2) {
      uVar32 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    uVar41 = (ulong)uVar30;
    *(int *)(param_2 + 0x28) = (int)uVar32;
    pvVar35 = *(void **)(param_2 + 8);
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    pvVar5 = *(void **)(param_2 + 0x10);
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar30 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar41);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar4 != 0) {
      uVar32 = 0;
      do {
        uVar30 = *(uint *)((long)pvVar5 + uVar32 * 4);
        if (uVar30 != 0) {
          lVar34 = *(long *)(param_2 + 0x10);
          uVar43 = 0;
          uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar31);
          lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar30 * lVar38;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar45;
          lVar39 = SUB168(auVar10 * auVar22,8);
          puVar1 = (uint *)(lVar34 + lVar39 * 4);
          iVar36 = SUB164(auVar10 * auVar22,8);
          uVar44 = *puVar1;
          uVar33 = *(undefined8 *)((long)pvVar35 + uVar32 * 8);
          while (uVar44 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar44 * lVar38;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar45;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar31 + iVar36) - SUB164(auVar11 * auVar23,8)) * lVar38;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar45;
            uVar46 = SUB164(auVar12 * auVar24,8);
            uVar42 = uVar33;
            if (uVar46 < uVar43) {
              *puVar1 = uVar30;
              puVar2 = (undefined8 *)((long)__s_00 + lVar39 * 8);
              uVar42 = *puVar2;
              *puVar2 = uVar33;
              uVar30 = uVar44;
              uVar43 = uVar46;
            }
            uVar43 = uVar43 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar36 + 1) * lVar38;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar45;
            lVar39 = SUB168(auVar13 * auVar25,8);
            puVar1 = (uint *)(lVar34 + lVar39 * 4);
            iVar36 = SUB164(auVar13 * auVar25,8);
            uVar33 = uVar42;
            uVar44 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar39 * 8) = uVar33;
          *puVar1 = uVar30;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar4 != uVar32);
      Memory::free_static(pvVar35,false);
      Memory::free_static(pvVar5,false);
    }
  }
  else {
LAB_0010cc95:
    iVar36 = *(int *)(param_2 + 0x2c);
    if (iVar36 != 0) {
LAB_0010cca1:
      uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar4);
      lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar37 == 0) {
        uVar31 = StringName::get_empty_hash();
      }
      else {
        uVar31 = *(uint *)(*(long *)pSVar37 + 0x20);
      }
      if (uVar31 == 0) {
        uVar31 = 1;
      }
      uVar46 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar31 * lVar34;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar32;
      lVar38 = SUB168(auVar6 * auVar18,8);
      uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
      uVar43 = SUB164(auVar6 * auVar18,8);
      if (uVar44 != 0) {
        do {
          if ((uVar44 == uVar31) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar38 * 8) + 0x10) == *(long *)pSVar37))
          {
            Variant::operator=((Variant *)
                               (*(long *)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8) + 0x18),in_RCX
                              );
            local_c0 = *(undefined8 **)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
            goto LAB_0010d15c;
          }
          uVar46 = uVar46 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar43 + 1) * lVar34;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar32;
          lVar38 = SUB168(auVar7 * auVar19,8);
          uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
          uVar43 = SUB164(auVar7 * auVar19,8);
        } while ((uVar44 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar44 * lVar34, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar32, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar4 + uVar43) - SUB164(auVar8 * auVar20,8)) * lVar34,
                auVar21._8_8_ = 0, auVar21._0_8_ = uVar32, uVar46 <= SUB164(auVar9 * auVar21,8)));
      }
      iVar36 = *(int *)(param_2 + 0x2c);
    }
LAB_0010cd97:
    if ((float)uVar30 * __LC32 < (float)(iVar36 + 1)) goto LAB_0010cdbd;
  }
  StringName::StringName((StringName *)&local_68,pSVar37);
  Variant::Variant((Variant *)local_60,in_RCX);
  local_c0 = (undefined8 *)operator_new(0x30,"");
  *local_c0 = 0;
  local_c0[1] = 0;
  StringName::StringName((StringName *)(local_c0 + 2),(StringName *)&local_68);
  Variant::Variant((Variant *)(local_c0 + 3),(Variant *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(param_2 + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x18) = local_c0;
    *(undefined8 **)(param_2 + 0x20) = local_c0;
LAB_0010d076:
    lVar34 = *(long *)pSVar37;
    if (lVar34 != 0) goto LAB_0010d082;
LAB_0010d1c4:
    uVar30 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      **(undefined8 **)(param_2 + 0x20) = local_c0;
      local_c0[1] = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 **)(param_2 + 0x20) = local_c0;
      goto LAB_0010d076;
    }
    *(undefined8 **)(*(long *)(param_2 + 0x18) + 8) = local_c0;
    *local_c0 = *(undefined8 *)(param_2 + 0x18);
    lVar34 = *(long *)pSVar37;
    *(undefined8 **)(param_2 + 0x18) = local_c0;
    if (lVar34 == 0) goto LAB_0010d1c4;
LAB_0010d082:
    uVar30 = *(uint *)(lVar34 + 0x20);
  }
  lVar34 = *(long *)(param_2 + 0x10);
  if (uVar30 == 0) {
    uVar30 = 1;
  }
  uVar32 = (ulong)uVar30;
  uVar44 = 0;
  uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar4);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar32 * lVar38;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar45;
  lVar40 = SUB168(auVar14 * auVar26,8);
  lVar39 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar34 + lVar40 * 4);
  iVar36 = SUB164(auVar14 * auVar26,8);
  uVar31 = *puVar1;
  puVar2 = local_c0;
  while (uVar31 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar31 * lVar38;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar45;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar4 + iVar36) - SUB164(auVar15 * auVar27,8)) * lVar38;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar45;
    uVar30 = SUB164(auVar16 * auVar28,8);
    puVar47 = puVar2;
    if (uVar30 < uVar44) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar31;
      puVar3 = (undefined8 *)(lVar39 + lVar40 * 8);
      puVar47 = (undefined8 *)*puVar3;
      *puVar3 = puVar2;
      uVar44 = uVar30;
    }
    uVar30 = (uint)uVar32;
    uVar44 = uVar44 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar36 + 1) * lVar38;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar45;
    lVar40 = SUB168(auVar17 * auVar29,8);
    puVar1 = (uint *)(lVar34 + lVar40 * 4);
    iVar36 = SUB164(auVar17 * auVar29,8);
    puVar2 = puVar47;
    uVar31 = *puVar1;
  }
  *(undefined8 **)(lVar39 + lVar40 * 8) = puVar2;
  *puVar1 = uVar30;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010d15c:
  *(undefined8 **)param_1 = local_c0;
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



/* MethodBind* create_method_bind<EditorImportPlugin, Error, String const&, Dictionary const&,
   String const&, Variant>(Error (EditorImportPlugin::*)(String const&, Dictionary const&, String
   const&, Variant)) */

MethodBind *
create_method_bind<EditorImportPlugin,Error,String_const&,Dictionary_const&,String_const&,Variant>
          (_func_Error_String_ptr_Dictionary_ptr_String_ptr_Variant *param_1)

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
  *(_func_Error_String_ptr_Dictionary_ptr_String_ptr_Variant **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010fc40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 4;
  local_40 = 0;
  local_38 = "EditorImportPlugin";
  local_30 = 0x12;
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



/* GetTypeInfo<Error, void>::get_class_info() */

GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char local_58 [8];
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_48 = "Error";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_70);
  String::split(local_58,SUB81((StrRange *)&local_70,0),0x10d560);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_40 = 1;
    local_48 = ".";
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar3 = -2;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(local_50 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)&local_68,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0010d676;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = ".";
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)&local_68);
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
LAB_0010d676:
  CowData<String>::_unref((CowData<String> *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_68,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar4 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_ref(CowData<String> const&) */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this == *(long *)param_1) {
    return;
  }
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
LAB_0010dc40:
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
  if (lVar10 == 0) goto LAB_0010dc40;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010db19:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010db19;
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
    goto LAB_0010dc96;
  }
  if (lVar10 == lVar7) {
LAB_0010dbbf:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010dc96:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010dbaa;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010dbbf;
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
LAB_0010dbaa:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<unsigned int>::_unref() */

void __thiscall CowData<unsigned_int>::_unref(CowData<unsigned_int> *this)

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



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

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
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_0010df60:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_0010df60;
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
        goto LAB_0010de71;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0010de71:
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



/* EditorImportPlugin::_initialize_classv() */

void EditorImportPlugin::_initialize_classv(void)

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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00113010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00113008 != RefCounted::_bind_methods) {
        ResourceImporter::_bind_methods();
      }
      ResourceImporter::initialize_class()::initialized = '\x01';
    }
    local_58 = "ResourceImporter";
    local_68 = 0;
    local_50 = 0x10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorImportPlugin";
    local_70 = 0;
    local_50 = 0x12;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010e4c8) */
/* WARNING: Removing unreachable block (ram,0x0010e65d) */
/* WARNING: Removing unreachable block (ram,0x0010e669) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Error, String const&, Dictionary const&, String const&,
   Variant>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant>::validated_call
          (MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e834;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,param_2[3]);
  uVar2 = (*pcVar4)(param_1 + lVar1,*param_2 + 8,param_2[1] + 8,param_2[2] + 8,(Variant *)local_48);
  *(ulong *)(param_3 + 8) = (ulong)uVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010e834:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, Dictionary const&, String const&, Variant>::ptrcall(Object*,
   void const**, void*) const */

void __thiscall
MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant>::ptrcall
          (MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant> *this,
          Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ea46;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,(Variant *)param_2[3]);
  uVar2 = (*pcVar4)(param_1 + lVar1,*param_2,param_2[1],param_2[2],(Variant *)local_48);
  *(ulong *)param_3 = (ulong)uVar2;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_0010ea46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, Dictionary const&, String const&, Variant>::call(Object*,
   Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  undefined8 uVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  undefined4 *puVar12;
  long lVar13;
  uint in_R8D;
  undefined4 *in_R9;
  code *pcVar14;
  long in_FS_OFFSET;
  long local_c8;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_88 [8];
  undefined4 *local_68 [5];
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_b8,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_b8 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_b8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_c0 = 0;
      local_b0 = 0x35;
      String::parse_latin1((StrRange *)&local_c0);
      vformat<StringName>((StringName *)&local_b8,(StrRange *)&local_c0,&local_c8);
      _err_print_error(&_LC114,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_b8,0);
      pcVar4 = local_b8;
      if (local_b8 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_b8 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_b8 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      lVar13 = local_c0;
      if (local_c0 != 0) {
        LOCK();
        plVar11 = (long *)(local_c0 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_c0 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_c8 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ef10;
    }
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar14 = (code *)param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 5) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar6 = 0;
      lVar13 = 0;
    }
    else {
      lVar13 = *(long *)(pVVar2 + -8);
      iVar6 = (int)lVar13;
    }
    if ((int)(4 - in_R8D) <= iVar6) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          puVar12 = *(undefined4 **)(param_4 + lVar8 * 8);
        }
        else {
          uVar10 = iVar6 + -4 + (int)lVar8;
          if (lVar13 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar13,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar14 = (code *)invalidInstructionException();
            (*pcVar14)();
          }
          puVar12 = (undefined4 *)(pVVar2 + (ulong)uVar10 * 0x18);
        }
        local_68[lVar8] = puVar12;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      *in_R9 = 0;
      if (((ulong)pcVar14 & 1) != 0) {
        pcVar14 = *(code **)(pcVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*local_68[3],0);
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = 3;
      }
      Variant::Variant((Variant *)local_88,(Variant *)local_68[3]);
      cVar5 = Variant::can_convert_strict(*local_68[2],4);
      uVar3 = _LC116;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      Variant::operator_cast_to_String((Variant *)&local_c8);
      cVar5 = Variant::can_convert_strict(*local_68[1],0x1b);
      uVar3 = _LC117;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      Variant::operator_cast_to_Dictionary((Variant *)&local_c0);
      cVar5 = Variant::can_convert_strict(*local_68[0],4);
      uVar3 = _LC118;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar3;
      }
      Variant::operator_cast_to_String((Variant *)&local_b8);
      iVar6 = (*pcVar14)((long *)((long)plVar11 + (long)pVVar1),(Variant *)&local_b8,
                         (Variant *)&local_c0,(Variant *)&local_c8,(Variant *)local_88);
      Variant::Variant((Variant *)local_a8,iVar6);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pcVar4 = local_b8;
      *(undefined4 *)param_1 = local_a8[0];
      *(undefined8 *)(param_1 + 8) = local_a0;
      *(undefined8 *)(param_1 + 0x10) = uStack_98;
      if (local_b8 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_b8 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_b8 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      Dictionary::~Dictionary((Dictionary *)&local_c0);
      lVar13 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar11 = (long *)(local_c8 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010ef10;
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 3;
  }
  *in_R9 = uVar7;
  in_R9[2] = 4;
LAB_0010ef10:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *param_2;
  if (iVar7 != param_1) goto LAB_0010f197;
  local_78 = 0;
  local_68 = &_LC8;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010f290:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010f290;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar5;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar5;
  }
  lVar6 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
  iVar7 = *param_2;
LAB_0010f197:
  *param_2 = iVar7 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void call_get_argument_type_info<String const&, Dictionary const&, String const&, Variant>(int,
   PropertyInfo&) */

void call_get_argument_type_info<String_const&,Dictionary_const&,String_const&,Variant>
               (int param_1,PropertyInfo *param_2)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_9c;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  ulong local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c = 0;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_9c,param_2);
  iVar4 = local_9c;
  if (param_1 != local_9c) goto LAB_0010f44c;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC8;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_70._8_8_;
  local_70 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x1b);
  local_60 = local_60 & 0xffffffff00000000;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_0010f6a0:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if ((int)local_60 != 0x11) goto LAB_0010f6a0;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  PropertyInfo::operator=(param_2,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_0010f44c:
  local_9c = iVar4 + 1;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_9c,param_2);
  if (param_1 == local_9c) {
    local_80 = 0;
    local_70 = (undefined1  [16])0x0;
    local_88 = 0;
    local_90 = 0;
    local_78 = (undefined *)0x0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0x20006;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    PropertyInfo::operator=(param_2,(PropertyInfo *)&local_78);
    lVar6 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
      StringName::unref();
    }
    uVar5 = local_70._0_8_;
    if (local_70._0_8_ != 0) {
      LOCK();
      plVar1 = (long *)(local_70._0_8_ + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_70._8_8_;
        local_70 = auVar3 << 0x40;
        Memory::free_static((void *)(uVar5 + -0x10),false);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, String const&, Dictionary const&, String const&,
   Variant>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant>::_gen_argument_type_info
          (int param_1)

{
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 4) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,Dictionary_const&,String_const&,Variant>
              (in_EDX,(PropertyInfo *)&local_48);
    *(undefined4 *)this = (undefined4)local_48;
    *(undefined8 *)(this + 8) = local_40._0_8_;
    *(undefined8 *)(this + 0x10) = local_40._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_30;
    *(undefined8 *)(this + 0x20) = local_28;
    *(undefined4 *)(this + 0x28) = local_20;
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

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
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

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
/* EditorImportPlugin::~EditorImportPlugin() */

void __thiscall EditorImportPlugin::~EditorImportPlugin(EditorImportPlugin *this)

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
/* MethodBindTR<Error, String const&, Dictionary const&, String const&, Variant>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant>::~MethodBindTR
          (MethodBindTR<Error,String_const&,Dictionary_const&,String_const&,Variant> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


