
/* ResourceImporterOggVorbis::get_option_visibility(String const&, String const&,
   HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) const */

undefined8
ResourceImporterOggVorbis::get_option_visibility(String *param_1,String *param_2,HashMap *param_3)

{
  return 1;
}



/* ResourceImporterOggVorbis::get_preset_count() const */

undefined8 ResourceImporterOggVorbis::get_preset_count(void)

{
  return 0;
}



/* ResourceImporterOggVorbis::get_preset_name(int) const */

undefined8 ResourceImporterOggVorbis::get_preset_name(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* ResourceImporterOggVorbis::has_advanced_options() const */

undefined8 ResourceImporterOggVorbis::has_advanced_options(void)

{
  return 1;
}



/* ResourceImporterOggVorbis::load_from_file(String const&) */

String * ResourceImporterOggVorbis::load_from_file(String *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  AudioStreamOggVorbis::load_from_file(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterOggVorbis::load_from_buffer(Vector<unsigned char> const&) */

Vector * ResourceImporterOggVorbis::load_from_buffer(Vector *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  AudioStreamOggVorbis::load_from_buffer(param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterOggVorbis::get_importer_name() const */

ResourceImporterOggVorbis * __thiscall
ResourceImporterOggVorbis::get_importer_name(ResourceImporterOggVorbis *this)

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



/* ResourceImporterOggVorbis::get_resource_type() const */

ResourceImporterOggVorbis * __thiscall
ResourceImporterOggVorbis::get_resource_type(ResourceImporterOggVorbis *this)

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



/* ResourceImporterOggVorbis::_bind_methods() */

void ResourceImporterOggVorbis::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_90;
  long local_88 [2];
  long *local_78;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "stream_data";
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"load_from_buffer",(uint)&local_58);
  StringName::StringName((StringName *)&local_90,"ResourceImporterOggVorbis",false);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00104820;
  *(code **)(pMVar4 + 0x58) = load_from_buffer;
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 1;
  MethodBind::_set_static(SUB81(pMVar4,0));
  MethodBind::_set_returns(SUB81(pMVar4,0));
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_90);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  local_68 = "path";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)"load_from_file",(uint)&local_58);
  StringName::StringName((StringName *)&local_90,"ResourceImporterOggVorbis",false);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00104880;
  *(code **)(pMVar4 + 0x58) = load_from_file;
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 1;
  MethodBind::_set_static(SUB81(pMVar4,0));
  MethodBind::_set_returns(SUB81(pMVar4,0));
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_90);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterOggVorbis::ResourceImporterOggVorbis() */

void __thiscall
ResourceImporterOggVorbis::ResourceImporterOggVorbis(ResourceImporterOggVorbis *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00104608;
  return;
}



/* ResourceImporterOggVorbis::show_advanced_options(String const&) */

void __thiscall
ResourceImporterOggVorbis::show_advanced_options(ResourceImporterOggVorbis *this,String *param_1)

{
  String *pSVar1;
  char cVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_50;
  undefined8 local_48;
  Object *local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  AudioStreamOggVorbis::load_from_file((String *)&local_50);
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
    local_38 = "oggvorbisstr";
    local_30 = 0xc;
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



/* ResourceImporterOggVorbis::import(long, String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) */

undefined4
ResourceImporterOggVorbis::import
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
  double dVar53;
  double dVar54;
  long local_68;
  Object *local_60;
  long local_58;
  long local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_68,"loop",false);
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
             (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar49 * 8) + 0x10) != local_68))) {
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
        goto LAB_00100df0;
      }
      Variant::operator_cast_to_bool
                ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar48 * 8) + 0x18));
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_60,"loop_offset",false);
      if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
        uVar52 = CONCAT44(0,uVar1);
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
        if (local_60 == (Object *)0x0) {
          uVar46 = StringName::get_empty_hash();
        }
        else {
          uVar46 = *(uint *)(local_60 + 0x20);
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
          goto LAB_001008f9;
        }
      }
    }
  }
LAB_00100df0:
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar43 = (code *)invalidInstructionException();
  (*pcVar43)();
LAB_001008f9:
  if ((uVar50 == uVar46) &&
     (*(Object **)(*(long *)(*(long *)(param_5 + 8) + lVar49 * 8) + 0x10) == local_60)) {
    dVar53 = Variant::operator_cast_to_double
                       ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar48 * 8) + 0x18));
    if ((StringName::configured != '\0') && (local_60 != (Object *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_58,"bpm",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar52 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_58 == 0) {
        uVar46 = StringName::get_empty_hash();
      }
      else {
        uVar46 = *(uint *)(local_58 + 0x20);
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
        goto LAB_00100a21;
      }
    }
    goto LAB_00100df0;
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
  goto LAB_00100df0;
  goto LAB_001008f9;
LAB_00100a21:
  if ((uVar50 == uVar46) &&
     (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar49 * 8) + 0x10) == local_58)) {
    dVar54 = Variant::operator_cast_to_double
                       ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar48 * 8) + 0x18));
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_50,"beat_count",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar52 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_50 == 0) {
        uVar46 = StringName::get_empty_hash();
      }
      else {
        uVar46 = *(uint *)(local_50 + 0x20);
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
        goto LAB_00100b49;
      }
    }
    goto LAB_00100df0;
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
  goto LAB_00100df0;
  goto LAB_00100a21;
LAB_00100b49:
  if ((uVar50 == uVar46) &&
     (*(long *)(*(long *)(*(long *)(param_5 + 8) + lVar49 * 8) + 0x10) == local_50)) {
    Variant::operator_cast_to_int
              ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar48 * 8) + 0x18));
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_48,"bar_beats",false);
    if ((*(long *)(param_5 + 8) != 0) && (*(int *)(param_5 + 0x2c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_5 + 0x28) * 4);
      uVar52 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_5 + 0x28) * 8);
      if (local_48 == (Object *)0x0) {
        uVar46 = StringName::get_empty_hash();
      }
      else {
        uVar46 = *(uint *)(local_48 + 0x20);
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
          if ((uVar50 == uVar46) &&
             (*(Object **)(*(long *)(*(long *)(param_5 + 8) + lVar49 * 8) + 0x10) == local_48)) {
            Variant::operator_cast_to_int
                      ((Variant *)(*(long *)(*(long *)(param_5 + 8) + (ulong)uVar48 * 8) + 0x18));
            if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
              StringName::unref();
            }
            AudioStreamOggVorbis::load_from_file((String *)&local_60);
            if (local_60 == (Object *)0x0) {
              uVar45 = 0x13;
            }
            else {
              AudioStreamOggVorbis::set_loop(SUB81(local_60,0));
              AudioStreamOggVorbis::set_loop_offset(dVar53);
              AudioStreamOggVorbis::set_bpm(dVar54);
              AudioStreamOggVorbis::set_beat_count((int)local_60);
              AudioStreamOggVorbis::set_bar_beats((int)local_60);
              local_58 = 0;
              String::parse_latin1((String *)&local_58,".oggvorbisstr");
              String::operator+((String *)&local_50,(String *)param_4);
              local_48 = (Object *)0x0;
              if (local_60 != (Object *)0x0) {
                pOVar47 = (Object *)__dynamic_cast(local_60,&Object::typeinfo,&Resource::typeinfo,0)
                ;
                if (pOVar47 != (Object *)0x0) {
                  local_48 = pOVar47;
                  cVar44 = RefCounted::reference();
                  if (cVar44 == '\0') {
                    local_48 = (Object *)0x0;
                  }
                }
              }
              uVar45 = ResourceSaver::save((Ref *)&local_48,(String *)&local_50,0);
              if (local_48 != (Object *)0x0) {
                cVar44 = RefCounted::unreference();
                pOVar47 = local_48;
                if (cVar44 != '\0') {
                  cVar44 = predelete_handler(local_48);
                  if (cVar44 != '\0') {
                    (**(code **)(*(long *)pOVar47 + 0x140))(pOVar47);
                    Memory::free_static(pOVar47,false);
                  }
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
              if (local_60 != (Object *)0x0) {
                cVar44 = RefCounted::unreference();
                if (cVar44 != '\0') {
                  cVar44 = predelete_handler(local_60);
                  if (cVar44 != '\0') {
                    (**(code **)(*(long *)local_60 + 0x140))(local_60);
                    Memory::free_static(local_60,false);
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
    goto LAB_00100df0;
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
  goto LAB_00100df0;
  goto LAB_00100b49;
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



/* ResourceImporterOggVorbis::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ResourceImporterOggVorbis::get_recognized_extensions(ResourceImporterOggVorbis *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar3) [16];
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = &_LC28;
  local_30 = 3;
  String::parse_latin1((StrRange *)&local_40);
  if (*(long *)param_1 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  CowData<char32_t>::_ref(this_00,(CowData *)&local_40);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* List<ResourceImporter::ImportOption, DefaultAllocator>::push_back(ResourceImporter::ImportOption
   const&) [clone .isra.0] */

void __thiscall
List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
          (List<ResourceImporter::ImportOption,DefaultAllocator> *this,ImportOption *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xe) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0x12) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  puVar3[0xc] = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  *puVar3 = *(undefined4 *)param_1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  Variant::operator=((Variant *)(puVar3 + 0xc),(Variant *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar3 + 0x16) = *(long *)this;
  plVar2 = *(long **)this;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = uVar1;
  if (plVar2[1] != 0) {
    *(undefined4 **)(plVar2[1] + 0x48) = puVar3;
  }
  plVar2[1] = (long)puVar3;
  if (*plVar2 != 0) {
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    return;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  *plVar2 = (long)puVar3;
  return;
}



/* ResourceImporterOggVorbis::get_import_options(String const&, List<ResourceImporter::ImportOption,
   DefaultAllocator>*, int) const */

void ResourceImporterOggVorbis::get_import_options(String *param_1,List *param_2,int param_3)

{
  undefined4 in_register_00000014;
  List<ResourceImporter::ImportOption,DefaultAllocator> *this;
  long in_FS_OFFSET;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined4 local_d8 [2];
  CowData local_d0 [8];
  StringName local_c8 [8];
  undefined4 local_c0;
  CowData local_b8 [8];
  undefined4 local_b0;
  int local_a8 [8];
  undefined4 local_88 [2];
  undefined8 local_80;
  StringName local_78 [8];
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  int local_58 [6];
  long local_40;
  
  this = (List<ResourceImporter::ImportOption,DefaultAllocator> *)
         CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_a8,false);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"loop");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(String *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  local_80 = 0;
  local_88[0] = local_d8[0];
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,local_d0);
  StringName::StringName(local_78,local_c8);
  local_68 = 0;
  local_70 = local_c0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,local_b8);
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back(this,(ImportOption *)local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
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
  String::parse_latin1((String *)&local_e8,"");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"loop_offset");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,3,(String *)&local_f0,0,(String *)&local_e8,6,&local_e0);
  local_80 = 0;
  local_88[0] = local_d8[0];
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,local_d0);
  StringName::StringName(local_78,local_c8);
  local_68 = 0;
  local_70 = local_c0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,local_b8);
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back(this,(ImportOption *)local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
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
  String::parse_latin1((String *)&local_e8,"0,400,0.01,or_greater");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"bpm");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,3,(String *)&local_f0,1,(String *)&local_e8,6,&local_e0);
  local_80 = 0;
  local_88[0] = local_d8[0];
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,local_d0);
  StringName::StringName(local_78,local_c8);
  local_68 = 0;
  local_70 = local_c0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,local_b8);
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back(this,(ImportOption *)local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
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
  String::parse_latin1((String *)&local_e8,"0,512,or_greater");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"beat_count");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,2,(String *)&local_f0,1,(String *)&local_e8,6,&local_e0);
  local_80 = 0;
  local_88[0] = local_d8[0];
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,local_d0);
  StringName::StringName(local_78,local_c8);
  local_68 = 0;
  local_70 = local_c0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,local_b8);
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back(this,(ImportOption *)local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
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
  String::parse_latin1((String *)&local_e8,"2,32,or_greater");
  local_f0 = 0;
  String::parse_latin1((String *)&local_f0,"bar_beats");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,2,(String *)&local_f0,1,(String *)&local_e8,6,&local_e0);
  local_80 = 0;
  local_88[0] = local_d8[0];
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,local_d0);
  StringName::StringName(local_78,local_c8);
  local_68 = 0;
  local_70 = local_c0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,local_b8);
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back(this,(ImportOption *)local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
  return (uint)CONCAT71(0x1049,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1049,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ResourceImporterOggVorbis::is_class_ptr(void*) const */

uint __thiscall
ResourceImporterOggVorbis::is_class_ptr(ResourceImporterOggVorbis *this,void *param_1)

{
  return (uint)CONCAT71(0x1049,(undefined4 *)param_1 ==
                               &ResourceImporter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1049,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1049,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1049,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceImporterOggVorbis::_getv(StringName const&, Variant&) const */

undefined8 ResourceImporterOggVorbis::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterOggVorbis::_setv(StringName const&, Variant const&) */

undefined8 ResourceImporterOggVorbis::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterOggVorbis::_validate_propertyv(PropertyInfo&) const */

void ResourceImporterOggVorbis::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceImporterOggVorbis::_property_can_revertv(StringName const&) const */

undefined8 ResourceImporterOggVorbis::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceImporterOggVorbis::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceImporterOggVorbis::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterOggVorbis::_notificationv(int, bool) */

void ResourceImporterOggVorbis::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceImporterOggVorbis::can_import_threaded() const */

undefined8 ResourceImporterOggVorbis::can_import_threaded(void)

{
  return 1;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::_gen_argument_type
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffec) + 0x18;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::_gen_argument_type(int)
   const */

char __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::_gen_argument_type
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&> *this,int param_1)

{
  return (-(param_1 == 0) & 5U) + 0x18;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::get_argument_meta(int)
   const */

undefined8
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::~MethodBindTRS
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00104820;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::~MethodBindTRS
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00104820;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::~MethodBindTRS
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00104880;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::~MethodBindTRS
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00104880;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001044a8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001044a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ResourceImporterOggVorbis::~ResourceImporterOggVorbis() */

void __thiscall
ResourceImporterOggVorbis::~ResourceImporterOggVorbis(ResourceImporterOggVorbis *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001044a8;
  Object::~Object((Object *)this);
  return;
}



/* ResourceImporterOggVorbis::~ResourceImporterOggVorbis() */

void __thiscall
ResourceImporterOggVorbis::~ResourceImporterOggVorbis(ResourceImporterOggVorbis *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001044a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar9;
  long in_FS_OFFSET;
  Object *local_60;
  Variant local_58 [8];
  long local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar2 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 2) {
    pVVar9 = param_2[5];
    if (pVVar9 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001020d8;
LAB_00102058:
      pVVar9 = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar9 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_001020d8:
        uVar7 = 4;
        goto LAB_00102065;
      }
      if (in_R8D == 1) goto LAB_00102058;
      lVar8 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pVVar9 = pVVar9 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar9,0x1d);
    uVar5 = _LC6;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    Variant::operator_cast_to_Vector(local_58);
    (*(code *)pVVar2)(&local_60,local_58);
    Variant::Variant((Variant *)local_48,local_60);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if (((local_60 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_60), cVar6 != '\0')) {
      (**(code **)(*(long *)local_60 + 0x140))(local_60);
      Memory::free_static(local_60,false);
    }
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_00102065:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::validated_call
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Object *local_30;
  undefined8 local_28;
  Object *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_30,*param_2 + 8,param_2,0);
  if (local_30 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_28 = *(undefined8 *)(local_30 + 0x60);
    local_20 = local_30;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_30 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_30);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_30 + 0x140))(local_30);
        Memory::free_static(local_30,false);
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::validated_call
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Object *local_30;
  undefined8 local_28;
  Object *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_30,*(long *)(*param_2 + 8) + 0x10,*param_2,0);
  if (local_30 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_28 = *(undefined8 *)(local_30 + 0x60);
    local_20 = local_30;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_30 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_30);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_30 + 0x140))(local_30);
        Memory::free_static(local_30,false);
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::ptrcall
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&> *this,
          Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_28,*param_2,param_2,0);
  if (local_28 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar3 = *param_3;
    if (pOVar3 == (Object *)0x0) goto LAB_00102331;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010239f;
  }
  pOVar2 = (Object *)__dynamic_cast(local_28,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar3 = *param_3;
  if (pOVar3 != pOVar2) {
    *(Object **)param_3 = pOVar2;
    if (pOVar2 == (Object *)0x0) {
      if (pOVar3 != (Object *)0x0) goto LAB_0010239f;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar3 != (Object *)0x0) {
LAB_0010239f:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar3);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      if (local_28 == (Object *)0x0) goto LAB_00102331;
    }
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_28);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)local_28 + 0x140))(local_28);
      Memory::free_static(local_28,false);
    }
  }
LAB_00102331:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::ptrcall
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(this + 0x58))(&local_28,*param_2,param_2,0);
  if (local_28 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar3 = *param_3;
    if (pOVar3 == (Object *)0x0) goto LAB_00102461;
    *(undefined8 *)param_3 = 0;
    goto LAB_001024cf;
  }
  pOVar2 = (Object *)__dynamic_cast(local_28,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar3 = *param_3;
  if (pOVar3 != pOVar2) {
    *(Object **)param_3 = pOVar2;
    if (pOVar2 == (Object *)0x0) {
      if (pOVar3 != (Object *)0x0) goto LAB_001024cf;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar3 != (Object *)0x0) {
LAB_001024cf:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar3);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      if (local_28 == (Object *)0x0) goto LAB_00102461;
    }
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_28);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)local_28 + 0x140))(local_28);
      Memory::free_static(local_28,false);
    }
  }
LAB_00102461:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterOggVorbis::_get_class_namev() const */

undefined8 * ResourceImporterOggVorbis::_get_class_namev(void)

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
LAB_00102653:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102653;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterOggVorbis");
      goto LAB_001026be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterOggVorbis");
LAB_001026be:
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
LAB_00102733:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102733;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010279e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010279e:
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



/* ResourceImporterOggVorbis::_bind_methods() [clone .cold] */

void ResourceImporterOggVorbis::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* ResourceImporterOggVorbis::_initialize_classv() */

void ResourceImporterOggVorbis::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (ResourceImporter::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00107008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"RefCounted");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"ResourceImporter");
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        ResourceImporter::_bind_methods();
      }
      ResourceImporter::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"ResourceImporter");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"ResourceImporterOggVorbis");
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* ResourceImporterOggVorbis::get_class() const */

void ResourceImporterOggVorbis::get_class(void)

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
  *(undefined4 *)this = param_2;
  *(undefined8 *)(this + 8) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
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



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar8;
  long in_FS_OFFSET;
  Object *local_58;
  Variant local_50 [8];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar1 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 2) {
    pVVar8 = param_2[5];
    if (pVVar8 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00103098;
LAB_00103010:
      pVVar8 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar8 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00103098:
        uVar6 = 4;
        goto LAB_00103025;
      }
      if (in_R8D == 1) goto LAB_00103010;
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar8 = pVVar8 + lVar7 * 0x18;
    }
    *in_R9 = 0;
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar8,4);
    uVar4 = _LC32;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String(local_50);
    (*(code *)pVVar1)(&local_58,local_50);
    Variant::Variant((Variant *)local_48,local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if (((local_58 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_58), cVar5 != '\0')) {
      (**(code **)(*(long *)local_58 + 0x140))(local_58);
      Memory::free_static(local_58,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    uVar6 = 3;
LAB_00103025:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
    if (cVar4 != '\0') goto LAB_001031c3;
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
      if (cVar4 != '\0') goto LAB_001031c3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_001031c3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterOggVorbis::is_class(String const&) const */

undefined8 __thiscall
ResourceImporterOggVorbis::is_class(ResourceImporterOggVorbis *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001033a3;
  }
  cVar4 = String::operator==(param_1,"ResourceImporterOggVorbis");
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
      if (cVar4 != '\0') goto LAB_001033a3;
    }
    cVar4 = String::operator==(param_1,"ResourceImporter");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar5;
      }
      goto LAB_001034ae;
    }
  }
LAB_001033a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001034ae:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::_gen_argument_type_info(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_98 = 0;
    local_70 = 6;
    local_80 = 0;
    local_78 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    String::parse_latin1((String *)&local_a8,"");
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,4,(CowData<char32_t> *)&local_b0,0,(String *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,(undefined4)local_68);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    lVar3 = local_78;
    uVar2 = local_90._8_8_;
    uVar1 = local_90._0_8_;
    local_90 = (undefined1  [16])0x0;
    *(undefined4 *)pPVar4 = (undefined4)local_98;
    *(undefined8 *)(pPVar4 + 8) = uVar1;
    *(undefined8 *)(pPVar4 + 0x10) = uVar2;
    *(undefined4 *)(pPVar4 + 0x18) = (undefined4)local_80;
    local_78 = 0;
    *(long *)(pPVar4 + 0x20) = lVar3;
    *(undefined4 *)(pPVar4 + 0x28) = local_70;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  }
  else {
    local_68 = 0;
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"AudioStreamOggVorbis");
    local_a0 = 0;
    PropertyInfo::PropertyInfo
              (pPVar4,0x18,(CowData<char32_t> *)&local_a0,0x11,(String *)&local_98,6,&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar4;
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
    if ((code *)PTR__bind_methods_00107010 != Object::_bind_methods) {
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



/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char>
   const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::_gen_argument_type_info
          (int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_98 = 0;
    local_70 = 6;
    local_80 = 0;
    local_78 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    String::parse_latin1((String *)&local_a8,"");
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x1d,(CowData<char32_t> *)&local_b0,0,(String *)&local_a8,6
               ,&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,(undefined4)local_68);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    lVar3 = local_78;
    uVar2 = local_90._8_8_;
    uVar1 = local_90._0_8_;
    local_90 = (undefined1  [16])0x0;
    *(undefined4 *)pPVar4 = (undefined4)local_98;
    *(undefined8 *)(pPVar4 + 8) = uVar1;
    *(undefined8 *)(pPVar4 + 0x10) = uVar2;
    *(undefined4 *)(pPVar4 + 0x18) = (undefined4)local_80;
    local_78 = 0;
    *(long *)(pPVar4 + 0x20) = lVar3;
    *(undefined4 *)(pPVar4 + 0x28) = local_70;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  }
  else {
    local_68 = 0;
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"AudioStreamOggVorbis");
    local_a0 = 0;
    PropertyInfo::PropertyInfo
              (pPVar4,0x18,(CowData<char32_t> *)&local_a0,0x11,(String *)&local_98,6,&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar4;
  }
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
        if (pvVar3 == (void *)0x0) goto LAB_00103c1f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00103c1f:
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



/* ResourceImporter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceImporter::_get_property_listv(ResourceImporter *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ResourceImporter";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ResourceImporter";
  local_90 = 0;
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
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



/* ResourceImporterOggVorbis::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
ResourceImporterOggVorbis::_get_property_listv
          (ResourceImporterOggVorbis *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    ResourceImporter::_get_property_listv((ResourceImporter *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ResourceImporterOggVorbis";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ResourceImporterOggVorbis";
  local_90 = 0;
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ResourceImporterOggVorbis",false);
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



/* ResourceImporterOggVorbis::get_importer_name() const */

void ResourceImporterOggVorbis::_GLOBAL__sub_I_get_importer_name(void)

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
/* ResourceImporterOggVorbis::~ResourceImporterOggVorbis() */

void __thiscall
ResourceImporterOggVorbis::~ResourceImporterOggVorbis(ResourceImporterOggVorbis *this)

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
/* MethodBindTRS<Ref<AudioStreamOggVorbis>, String const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&>::~MethodBindTRS
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<Ref<AudioStreamOggVorbis>, Vector<unsigned char> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&>::~MethodBindTRS
          (MethodBindTRS<Ref<AudioStreamOggVorbis>,Vector<unsigned_char>const&> *this)

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


