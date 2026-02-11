
/* ResourceImporterMP3::get_option_visibility(String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) const */

undefined8
ResourceImporterMP3::get_option_visibility(String *param_1,String *param_2,HashMap *param_3)

{
  return 1;
}



/* ResourceImporterMP3::get_preset_count() const */

undefined8 ResourceImporterMP3::get_preset_count(void)

{
  return 0;
}



/* ResourceImporterMP3::get_preset_name(int) const */

undefined8 ResourceImporterMP3::get_preset_name(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* ResourceImporterMP3::has_advanced_options() const */

undefined8 ResourceImporterMP3::has_advanced_options(void)

{
  return 1;
}



/* ResourceImporterMP3::get_importer_name() const */

ResourceImporterMP3 * __thiscall ResourceImporterMP3::get_importer_name(ResourceImporterMP3 *this)

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



/* ResourceImporterMP3::get_resource_type() const */

ResourceImporterMP3 * __thiscall ResourceImporterMP3::get_resource_type(ResourceImporterMP3 *this)

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



/* ResourceImporterMP3::get_visible_name() const */

ResourceImporterMP3 * __thiscall ResourceImporterMP3::get_visible_name(ResourceImporterMP3 *this)

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



/* ResourceImporterMP3::get_save_extension() const */

ResourceImporterMP3 * __thiscall ResourceImporterMP3::get_save_extension(ResourceImporterMP3 *this)

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



/* ResourceImporterMP3::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ResourceImporterMP3::get_recognized_extensions(ResourceImporterMP3 *this,List *param_1)

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
  local_38 = &_LC3;
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



/* ResourceImporterMP3::ResourceImporterMP3() */

void __thiscall ResourceImporterMP3::ResourceImporterMP3(ResourceImporterMP3 *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_001041f0;
  return;
}



/* ResourceImporterMP3::show_advanced_options(String const&) */

void __thiscall
ResourceImporterMP3::show_advanced_options(ResourceImporterMP3 *this,String *param_1)

{
  String *pSVar1;
  char cVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_50;
  undefined8 local_48;
  Object *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  AudioStreamMP3::load_from_file((String *)&local_50);
  if (local_50 != (Object *)0x0) {
    local_40 = (Object *)0x0;
    pOVar3 = (Object *)__dynamic_cast(local_50,&Object::typeinfo,&AudioStream::typeinfo,0);
    pSVar1 = AudioStreamImportSettingsDialog::singleton;
    if (pOVar3 != (Object *)0x0) {
      local_40 = pOVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_40 = (Object *)0x0;
      }
    }
    local_48 = 0;
    local_38 = &_LC3;
    local_30 = 3;
    String::parse_latin1((StrRange *)&local_48);
    AudioStreamImportSettingsDialog::edit(pSVar1,param_1,(Ref *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (local_40 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar3 = local_40;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_40);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    if (local_50 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_50);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_50 + 0x140))(local_50);
          Memory::free_static(local_50,false);
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterMP3::import(long, String const&, String const&, HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) */

undefined4
ResourceImporterMP3::import
          (long param_1,String *param_2,String *param_3,HashMap *param_4,List *param_5,List *param_6
          ,Variant *param_7)

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
  code *pcVar43;
  char cVar44;
  undefined4 uVar45;
  uint uVar46;
  Object *pOVar47;
  uint uVar48;
  long lVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  long in_FS_OFFSET;
  float fVar53;
  double dVar54;
  long local_78;
  Object *local_70;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_78,"loop",false);
  if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
    uVar52 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
    if (local_78 == 0) {
      uVar46 = StringName::get_empty_hash();
    }
    else {
      uVar46 = *(uint *)(local_78 + 0x20);
    }
    if (uVar46 == 0) {
      uVar46 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar46 * lVar2;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar52;
    lVar49 = SUB168(auVar3 * auVar23,8);
    uVar50 = *(uint *)(*(long *)(param_5 + 0x10) + lVar49 * 4);
    uVar48 = SUB164(auVar3 * auVar23,8);
    if (uVar50 != 0) {
      uVar51 = 0;
      while ((uVar50 != uVar46 ||
             (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar49 * 8) + 0x10) != local_78))) {
        uVar51 = uVar51 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar48 + 1) * lVar2;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar52;
        lVar49 = SUB168(auVar4 * auVar24,8);
        uVar50 = *(uint *)(*(long *)(param_5 + 0x10) + lVar49 * 4);
        uVar48 = SUB164(auVar4 * auVar24,8);
        if ((uVar50 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar50 * lVar2, auVar25._8_8_ = 0,
           auVar25._0_8_ = uVar52, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((uVar1 + uVar48) - SUB164(auVar5 * auVar25,8)) * lVar2,
           auVar26._8_8_ = 0, auVar26._0_8_ = uVar52, SUB164(auVar6 * auVar26,8) < uVar51))
        goto LAB_00100db0;
      }
      Variant::operator_cast_to_bool
                ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar48 * 8) + 0x18));
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_70,"loop_offset",false);
      if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
        uVar52 = CONCAT44(0,uVar1);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
        if (local_70 == (Object *)0x0) {
          uVar46 = StringName::get_empty_hash();
        }
        else {
          uVar46 = *(uint *)(local_70 + 0x20);
        }
        if (uVar46 == 0) {
          uVar46 = 1;
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)uVar46 * lVar2;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = uVar52;
        lVar49 = SUB168(auVar7 * auVar27,8);
        uVar50 = *(uint *)(*(long *)(param_5 + 0x10) + lVar49 * 4);
        uVar48 = SUB164(auVar7 * auVar27,8);
        if (uVar50 != 0) {
          uVar51 = 0;
          goto LAB_00100899;
        }
      }
    }
  }
LAB_00100db0:
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar43 = (code *)invalidInstructionException();
  (*pcVar43)();
LAB_00100899:
  if ((uVar50 == uVar46) &&
     (*(Object **)(*(long *)(*(long *)(param_5 + 8) + lVar49 * 8) + 0x10) == local_70)) {
    fVar53 = Variant::operator_cast_to_float
                       ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar48 * 8) + 0x18));
    if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_68,"bpm",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar52 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_68 == 0) {
        uVar46 = StringName::get_empty_hash();
      }
      else {
        uVar46 = *(uint *)(local_68 + 0x20);
      }
      if (uVar46 == 0) {
        uVar46 = 1;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar46 * lVar2;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar52;
      lVar49 = SUB168(auVar11 * auVar31,8);
      uVar50 = *(uint *)(*(long *)(param_5 + 0x10) + lVar49 * 4);
      uVar48 = SUB164(auVar11 * auVar31,8);
      if (uVar50 != 0) {
        uVar51 = 0;
        goto LAB_001009c1;
      }
    }
    goto LAB_00100db0;
  }
  uVar51 = uVar51 + 1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)(uVar48 + 1) * lVar2;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar52;
  lVar49 = SUB168(auVar8 * auVar28,8);
  uVar50 = *(uint *)(*(long *)(param_5 + 0x10) + lVar49 * 4);
  uVar48 = SUB164(auVar8 * auVar28,8);
  if ((uVar50 == 0) ||
     (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar50 * lVar2, auVar29._8_8_ = 0,
     auVar29._0_8_ = uVar52, auVar10._8_8_ = 0,
     auVar10._0_8_ = (ulong)((uVar1 + uVar48) - SUB164(auVar9 * auVar29,8)) * lVar2,
     auVar30._8_8_ = 0, auVar30._0_8_ = uVar52, SUB164(auVar10 * auVar30,8) < uVar51))
  goto LAB_00100db0;
  goto LAB_00100899;
LAB_001009c1:
  if ((uVar50 == uVar46) &&
     (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar49 * 8) + 0x10) == local_68)) {
    dVar54 = Variant::operator_cast_to_double
                       ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar48 * 8) + 0x18));
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_60,"beat_count",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar52 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_60 == 0) {
        uVar46 = StringName::get_empty_hash();
      }
      else {
        uVar46 = *(uint *)(local_60 + 0x20);
      }
      if (uVar46 == 0) {
        uVar46 = 1;
      }
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar46 * lVar2;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar52;
      lVar49 = SUB168(auVar15 * auVar35,8);
      uVar50 = *(uint *)(*(long *)(param_5 + 0x10) + lVar49 * 4);
      uVar48 = SUB164(auVar15 * auVar35,8);
      if (uVar50 != 0) {
        uVar51 = 0;
        goto LAB_00100ae9;
      }
    }
    goto LAB_00100db0;
  }
  uVar51 = uVar51 + 1;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (ulong)(uVar48 + 1) * lVar2;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar52;
  lVar49 = SUB168(auVar12 * auVar32,8);
  uVar50 = *(uint *)(*(long *)(param_5 + 0x10) + lVar49 * 4);
  uVar48 = SUB164(auVar12 * auVar32,8);
  if ((uVar50 == 0) ||
     (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar50 * lVar2, auVar33._8_8_ = 0,
     auVar33._0_8_ = uVar52, auVar14._8_8_ = 0,
     auVar14._0_8_ = (ulong)((uVar1 + uVar48) - SUB164(auVar13 * auVar33,8)) * lVar2,
     auVar34._8_8_ = 0, auVar34._0_8_ = uVar52, SUB164(auVar14 * auVar34,8) < uVar51))
  goto LAB_00100db0;
  goto LAB_001009c1;
LAB_00100ae9:
  if ((uVar50 == uVar46) &&
     (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar49 * 8) + 0x10) == local_60)) {
    Variant::operator_cast_to_float
              ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar48 * 8) + 0x18));
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_58,"bar_beats",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar52 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_58 == (Object *)0x0) {
        uVar46 = StringName::get_empty_hash();
      }
      else {
        uVar46 = *(uint *)(local_58 + 0x20);
      }
      if (uVar46 == 0) {
        uVar46 = 1;
      }
      auVar19._8_8_ = 0;
      auVar19._0_8_ = (ulong)uVar46 * lVar2;
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar52;
      lVar49 = SUB168(auVar19 * auVar39,8);
      uVar50 = *(uint *)(*(long *)(param_5 + 0x10) + lVar49 * 4);
      uVar48 = SUB164(auVar19 * auVar39,8);
      if (uVar50 != 0) {
        uVar51 = 0;
        do {
          if ((uVar46 == uVar50) &&
             (*(Object **)(*(long *)(*(long *)(param_5 + 8) + lVar49 * 8) + 0x10) == local_58)) {
            Variant::operator_cast_to_float
                      ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar48 * 8) + 0x18));
            if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
              StringName::unref();
            }
            AudioStreamMP3::load_from_file((String *)&local_70);
            if (local_70 == (Object *)0x0) {
              uVar45 = 0x13;
            }
            else {
              AudioStreamMP3::set_loop(SUB81(local_70,0));
              AudioStreamMP3::set_loop_offset((double)fVar53);
              AudioStreamMP3::set_bpm(dVar54);
              AudioStreamMP3::set_beat_count((int)local_70);
              AudioStreamMP3::set_bar_beats((int)local_70);
              local_58 = (Object *)0x102573;
              local_68 = 0;
              local_50 = 7;
              String::parse_latin1((StrRange *)&local_68);
              String::operator+((String *)&local_60,(String *)param_4);
              local_58 = (Object *)0x0;
              if (local_70 != (Object *)0x0) {
                pOVar47 = (Object *)__dynamic_cast(local_70,&Object::typeinfo,&Resource::typeinfo,0)
                ;
                if (pOVar47 != (Object *)0x0) {
                  local_58 = pOVar47;
                  cVar44 = RefCounted::reference();
                  if (cVar44 == '\0') {
                    local_58 = (Object *)0x0;
                  }
                }
              }
              uVar45 = ResourceSaver::save((Ref *)&local_58,(String *)&local_60,0);
              if (local_58 != (Object *)0x0) {
                cVar44 = RefCounted::unreference();
                pOVar47 = local_58;
                if (cVar44 != '\0') {
                  cVar44 = predelete_handler(local_58);
                  if (cVar44 != '\0') {
                    (**(code **)(*(long *)pOVar47 + 0x140))(pOVar47);
                    Memory::free_static(pOVar47,false);
                  }
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              if (local_70 != (Object *)0x0) {
                cVar44 = RefCounted::unreference();
                if (cVar44 != '\0') {
                  cVar44 = predelete_handler(local_70);
                  if (cVar44 != '\0') {
                    (**(code **)(*(long *)local_70 + 0x140))(local_70);
                    Memory::free_static(local_70,false);
                  }
                }
              }
            }
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return uVar45;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          uVar51 = uVar51 + 1;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = (ulong)(uVar48 + 1) * lVar2;
          auVar40._8_8_ = 0;
          auVar40._0_8_ = uVar52;
          lVar49 = SUB168(auVar20 * auVar40,8);
          uVar50 = *(uint *)(*(long *)(param_5 + 0x10) + lVar49 * 4);
          uVar48 = SUB164(auVar20 * auVar40,8);
        } while ((uVar50 != 0) &&
                (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)uVar50 * lVar2, auVar41._8_8_ = 0,
                auVar41._0_8_ = uVar52, auVar22._8_8_ = 0,
                auVar22._0_8_ = (ulong)((uVar1 + uVar48) - SUB164(auVar21 * auVar41,8)) * lVar2,
                auVar42._8_8_ = 0, auVar42._0_8_ = uVar52, uVar51 <= SUB164(auVar22 * auVar42,8)));
      }
    }
    goto LAB_00100db0;
  }
  uVar51 = uVar51 + 1;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (ulong)(uVar48 + 1) * lVar2;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar52;
  lVar49 = SUB168(auVar16 * auVar36,8);
  uVar50 = *(uint *)(*(long *)(param_5 + 0x10) + lVar49 * 4);
  uVar48 = SUB164(auVar16 * auVar36,8);
  if ((uVar50 == 0) ||
     (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar50 * lVar2, auVar37._8_8_ = 0,
     auVar37._0_8_ = uVar52, auVar18._8_8_ = 0,
     auVar18._0_8_ = (ulong)((uVar1 + uVar48) - SUB164(auVar17 * auVar37,8)) * lVar2,
     auVar38._8_8_ = 0, auVar38._0_8_ = uVar52, SUB164(auVar18 * auVar38,8) < uVar51))
  goto LAB_00100db0;
  goto LAB_00100ae9;
}



/* ResourceImporterMP3::get_import_options(String const&, List<ResourceImporter::ImportOption,
   DefaultAllocator>*, int) const */

void ResourceImporterMP3::get_import_options(String *param_1,List *param_2,int param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined4 in_register_00000014;
  List<ResourceImporter::ImportOption,DefaultAllocator> *this;
  long in_FS_OFFSET;
  StringName *local_138;
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
  undefined4 local_88 [2];
  long local_80;
  long local_78;
  int local_70;
  long local_68;
  undefined4 local_60;
  int local_58 [6];
  long local_40;
  
  this = (List<ResourceImporter::ImportOption,DefaultAllocator> *)
         CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_a8,false);
  local_d8 = "";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_f0);
  local_d8 = "loop";
  local_f8 = 0;
  local_d0 = 4;
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
LAB_00101063:
    local_b0 = 6;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_00101063;
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
  local_138 = (StringName *)&local_c8;
  local_80 = 0;
  local_88[0] = local_d8._0_4_;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  }
  StringName::StringName((StringName *)&local_78,local_138);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xe) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  puVar3[0xc] = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar3 + 0x12) = (undefined1  [16])0x0;
  *puVar3 = local_88[0];
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_78);
  puVar3[6] = local_70;
  if (*(long *)(puVar3 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_68);
  }
  puVar3[10] = local_60;
  Variant::operator=((Variant *)(puVar3 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar3 + 0x16) = *(long *)this;
  plVar2 = *(long **)this;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar3;
  }
  plVar2[1] = (long)puVar3;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar3;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0);
  local_d8 = "";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "loop_offset";
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,3);
  local_d0 = 0;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  if (local_f0 == 0) {
LAB_0010142b:
    local_b0 = 6;
    StringName::operator=(local_138,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_0010142b;
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
  local_88[0] = local_d8._0_4_;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  }
  StringName::StringName((StringName *)&local_78,local_138);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back(this,(ImportOption *)local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0);
  local_d8 = "0,400,0.01,or_greater";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0x15;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "bpm";
  local_d0 = 3;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,3);
  local_d0 = 0;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  }
  local_c8 = 0;
  local_c0 = 1;
  local_b8 = 0;
  if (local_f0 == 0) {
LAB_001016bb:
    local_b0 = 6;
    StringName::operator=(local_138,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_001016bb;
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
  local_88[0] = local_d8._0_4_;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  }
  StringName::StringName((StringName *)&local_78,local_138);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back(this,(ImportOption *)local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0);
  local_d8 = "0,512,or_greater";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "beat_count";
  local_d0 = 10;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,2);
  local_d0 = 0;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  }
  local_c8 = 0;
  local_c0 = 1;
  local_b8 = 0;
  if (local_f0 == 0) {
LAB_00101943:
    local_b0 = 6;
    StringName::operator=(local_138,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_00101943;
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
  local_88[0] = local_d8._0_4_;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  }
  StringName::StringName((StringName *)&local_78,local_138);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back(this,(ImportOption *)local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,4);
  local_d8 = "2,32,or_greater";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0xf;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "bar_beats";
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,2);
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
      goto LAB_00101bda;
    }
  }
  local_b0 = 6;
  StringName::operator=(local_138,(StringName *)&local_e8);
LAB_00101bda:
  local_80 = 0;
  local_88[0] = local_d8._0_4_;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  }
  StringName::StringName((StringName *)&local_78,local_138);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xe) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  puVar3[0xc] = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar3 + 0x12) = (undefined1  [16])0x0;
  *puVar3 = local_88[0];
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_78);
  puVar3[6] = local_70;
  if (*(long *)(puVar3 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_68);
  }
  puVar3[10] = local_60;
  Variant::operator=((Variant *)(puVar3 + 0xc),(Variant *)local_58);
  uVar1 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar3 + 0x16) = *(long *)this;
  plVar2 = *(long **)this;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar3;
  }
  plVar2[1] = (long)puVar3;
  if (*plVar2 == 0) {
    *plVar2 = (long)puVar3;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
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
  return (uint)CONCAT71(0x1044,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1044,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ResourceImporterMP3::is_class_ptr(void*) const */

uint __thiscall ResourceImporterMP3::is_class_ptr(ResourceImporterMP3 *this,void *param_1)

{
  return (uint)CONCAT71(0x1044,(undefined4 *)param_1 ==
                               &ResourceImporter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1044,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1044,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1044,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceImporterMP3::_getv(StringName const&, Variant&) const */

undefined8 ResourceImporterMP3::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterMP3::_setv(StringName const&, Variant const&) */

undefined8 ResourceImporterMP3::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterMP3::_validate_propertyv(PropertyInfo&) const */

void ResourceImporterMP3::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceImporterMP3::_property_can_revertv(StringName const&) const */

undefined8 ResourceImporterMP3::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceImporterMP3::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceImporterMP3::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterMP3::_notificationv(int, bool) */

void ResourceImporterMP3::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceImporterMP3::can_import_threaded() const */

undefined8 ResourceImporterMP3::can_import_threaded(void)

{
  return 1;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104090;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104090;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ResourceImporterMP3::~ResourceImporterMP3() */

void __thiscall ResourceImporterMP3::~ResourceImporterMP3(ResourceImporterMP3 *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104090;
  Object::~Object((Object *)this);
  return;
}



/* ResourceImporterMP3::~ResourceImporterMP3() */

void __thiscall ResourceImporterMP3::~ResourceImporterMP3(ResourceImporterMP3 *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104090;
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
LAB_00102373:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102373;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001023de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001023de:
  return &_get_class_namev()::_class_name_static;
}



/* ResourceImporterMP3::_get_class_namev() const */

undefined8 * ResourceImporterMP3::_get_class_namev(void)

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
LAB_00102463:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102463;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterMP3");
      goto LAB_001024ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterMP3");
LAB_001024ce:
  return &_get_class_namev()::_class_name_static;
}



/* ResourceImporterMP3::get_class() const */

void ResourceImporterMP3::get_class(void)

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
            if (lVar5 == 0) goto LAB_001027df;
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
LAB_001027df:
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
    if (cVar6 != '\0') goto LAB_00102893;
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
              if (lVar5 == 0) goto LAB_00102943;
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
LAB_00102943:
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
      if (cVar6 != '\0') goto LAB_00102893;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00102893:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterMP3::is_class(String const&) const */

undefined8 __thiscall ResourceImporterMP3::is_class(ResourceImporterMP3 *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00102a7f;
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
LAB_00102a7f:
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
    if (cVar6 != '\0') goto LAB_00102b33;
  }
  cVar6 = String::operator==(param_1,"ResourceImporterMP3");
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
              if (lVar5 == 0) goto LAB_00102bf3;
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
LAB_00102bf3:
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
      if (cVar6 != '\0') goto LAB_00102b33;
    }
    cVar6 = String::operator==(param_1,"ResourceImporter");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_00102c9c;
    }
  }
LAB_00102b33:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00102c9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        if (pvVar5 == (void *)0x0) goto LAB_00102e04;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00102e04:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
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



/* ResourceImporterMP3::_initialize_classv() */

void ResourceImporterMP3::_initialize_classv(void)

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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
    local_58 = "ResourceImporterMP3";
    local_70 = 0;
    local_50 = 0x13;
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
LAB_00103545:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103545;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00103567;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00103567:
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



/* ResourceImporter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceImporter::_get_property_listv(ResourceImporter *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a0;
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
LAB_001038ed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001038ed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010390f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010390f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a0);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
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



/* ResourceImporterMP3::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceImporterMP3::_get_property_listv(ResourceImporterMP3 *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    ResourceImporter::_get_property_listv((ResourceImporter *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ResourceImporterMP3";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceImporterMP3";
  local_98 = 0;
  local_70 = 0x13;
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
LAB_00103cdd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103cdd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103cff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103cff:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
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
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"ResourceImporterMP3",false);
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



/* ResourceImporterMP3::get_importer_name() const */

void ResourceImporterMP3::_GLOBAL__sub_I_get_importer_name(void)

{
  undefined8 uStack_8;
  
  if (AudioStreamRandomizer::base_property_helper == '\0') {
    AudioStreamRandomizer::base_property_helper = '\x01';
    AudioStreamRandomizer::base_property_helper._64_8_ = 0;
    AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper
                 ,&__dso_handle);
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
/* ResourceImporterMP3::~ResourceImporterMP3() */

void __thiscall ResourceImporterMP3::~ResourceImporterMP3(ResourceImporterMP3 *this)

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


