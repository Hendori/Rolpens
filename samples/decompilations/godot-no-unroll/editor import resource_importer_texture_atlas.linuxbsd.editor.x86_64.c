
/* ResourceImporterTextureAtlas::get_preset_count() const */

undefined8 ResourceImporterTextureAtlas::get_preset_count(void)

{
  return 0;
}



/* ResourceImporterTextureAtlas::get_preset_name(int) const */

undefined8 ResourceImporterTextureAtlas::get_preset_name(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* ResourceImporterTextureAtlas::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ResourceImporterTextureAtlas::get_recognized_extensions
          (ResourceImporterTextureAtlas *this,List *param_1)

{
  ImageLoader::get_recognized_extensions(param_1);
  return;
}



/* ResourceImporterTextureAtlas::get_save_extension() const */

ResourceImporterTextureAtlas * __thiscall
ResourceImporterTextureAtlas::get_save_extension(ResourceImporterTextureAtlas *this)

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



/* ResourceImporterTextureAtlas::get_importer_name() const */

ResourceImporterTextureAtlas * __thiscall
ResourceImporterTextureAtlas::get_importer_name(ResourceImporterTextureAtlas *this)

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



/* ResourceImporterTextureAtlas::get_resource_type() const */

ResourceImporterTextureAtlas * __thiscall
ResourceImporterTextureAtlas::get_resource_type(ResourceImporterTextureAtlas *this)

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



/* ResourceImporterTextureAtlas::get_option_group_file() const */

ResourceImporterTextureAtlas * __thiscall
ResourceImporterTextureAtlas::get_option_group_file(ResourceImporterTextureAtlas *this)

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



/* ResourceImporterTextureAtlas::get_visible_name() const */

ResourceImporterTextureAtlas * __thiscall
ResourceImporterTextureAtlas::get_visible_name(ResourceImporterTextureAtlas *this)

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



/* CowData<EditorAtlasPacker::Chart::Face>::_ref(CowData<EditorAtlasPacker::Chart::Face> const&)
   [clone .part.0] */

void __thiscall
CowData<EditorAtlasPacker::Chart::Face>::_ref
          (CowData<EditorAtlasPacker::Chart::Face> *this,CowData *param_1)

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



/* CowData<Vector2>::_ref(CowData<Vector2> const&) [clone .part.0] [clone .constprop.0] */

void __thiscall CowData<Vector2>::_ref(CowData<Vector2> *this,CowData *param_1)

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



/* ResourceImporterTextureAtlas::get_option_visibility(String const&, String const&,
   HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) const */

char __thiscall
ResourceImporterTextureAtlas::get_option_visibility
          (ResourceImporterTextureAtlas *this,String *param_1,String *param_2,HashMap *param_3)

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
  int iVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar20 = String::operator==(param_2,"crop_to_region");
  if (cVar20 == '\0') {
LAB_0010034b:
    cVar20 = String::operator==(param_2,"trim_alpha_border_from_region");
    if (cVar20 == '\0') {
LAB_00100362:
      cVar20 = '\x01';
      goto LAB_001005fe;
    }
    StringName::StringName((StringName *)&local_48,"import_mode",false);
    if ((*(long *)(param_3 + 8) != 0) && (*(int *)(param_3 + 0x2c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x28) * 4);
      uVar27 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x28) * 8);
      if (local_48 == 0) {
        uVar22 = StringName::get_empty_hash();
      }
      else {
        uVar22 = *(uint *)(local_48 + 0x20);
      }
      if (uVar22 == 0) {
        uVar22 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar22 * lVar2;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar27;
      lVar24 = SUB168(auVar7 * auVar15,8);
      uVar25 = *(uint *)(*(long *)(param_3 + 0x10) + lVar24 * 4);
      uVar23 = SUB164(auVar7 * auVar15,8);
      if (uVar25 != 0) {
        uVar26 = 0;
        do {
          if ((uVar25 == uVar22) &&
             (*(long *)(*(long *)(*(long *)(param_3 + 8) + lVar24 * 8) + 0x10) == local_48)) {
            iVar21 = Variant::operator_cast_to_int
                               ((Variant *)
                                (*(long *)(*(long *)(param_3 + 8) + (ulong)uVar23 * 8) + 0x18));
            if (iVar21 == 0) {
              if ((StringName::configured == '\0') ||
                 (cVar20 = StringName::configured, local_48 == 0)) goto LAB_00100362;
            }
            else {
              if ((StringName::configured == '\0') || (local_48 == 0)) goto LAB_00100495;
              cVar20 = '\0';
            }
            StringName::unref();
            goto LAB_001005fe;
          }
          uVar26 = uVar26 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar23 + 1) * lVar2;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar27;
          lVar24 = SUB168(auVar8 * auVar16,8);
          uVar25 = *(uint *)(*(long *)(param_3 + 0x10) + lVar24 * 4);
          uVar23 = SUB164(auVar8 * auVar16,8);
        } while ((uVar25 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar25 * lVar2, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar27, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar1 + uVar23) - SUB164(auVar9 * auVar17,8)) * lVar2,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar27, uVar26 <= SUB164(auVar10 * auVar18,8)));
      }
    }
  }
  else {
    StringName::StringName((StringName *)&local_50,"import_mode",false);
    if ((*(long *)(param_3 + 8) != 0) && (*(int *)(param_3 + 0x2c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x28) * 4);
      uVar27 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x28) * 8);
      if (local_50 == 0) {
        uVar22 = StringName::get_empty_hash();
      }
      else {
        uVar22 = *(uint *)(local_50 + 0x20);
      }
      if (uVar22 == 0) {
        uVar22 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar22 * lVar2;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar27;
      lVar24 = SUB168(auVar3 * auVar11,8);
      uVar25 = *(uint *)(*(long *)(param_3 + 0x10) + lVar24 * 4);
      uVar23 = SUB164(auVar3 * auVar11,8);
      if (uVar25 != 0) {
        uVar26 = 0;
        do {
          if ((uVar22 == uVar25) &&
             (*(long *)(*(long *)(*(long *)(param_3 + 8) + lVar24 * 8) + 0x10) == local_50)) {
            iVar21 = Variant::operator_cast_to_int
                               ((Variant *)
                                (*(long *)(*(long *)(param_3 + 8) + (ulong)uVar23 * 8) + 0x18));
            if (iVar21 == 0) {
              if ((StringName::configured != '\0') && (local_50 != 0)) {
                StringName::unref();
              }
              goto LAB_0010034b;
            }
            if ((StringName::configured != '\0') && (local_50 != 0)) {
              StringName::unref();
            }
            goto LAB_00100495;
          }
          uVar26 = uVar26 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar23 + 1) * lVar2;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar27;
          lVar24 = SUB168(auVar4 * auVar12,8);
          uVar25 = *(uint *)(*(long *)(param_3 + 0x10) + lVar24 * 4);
          uVar23 = SUB164(auVar4 * auVar12,8);
        } while ((uVar25 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar25 * lVar2, auVar13._8_8_ = 0,
                auVar13._0_8_ = uVar27, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar1 + uVar23) - SUB164(auVar5 * auVar13,8)) * lVar2,
                auVar14._8_8_ = 0, auVar14._0_8_ = uVar27, uVar26 <= SUB164(auVar6 * auVar14,8)));
      }
    }
  }
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar19 = (code *)invalidInstructionException();
  (*pcVar19)();
LAB_00100495:
  cVar20 = '\0';
LAB_001005fe:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar20;
}



/* ResourceImporterTextureAtlas::ResourceImporterTextureAtlas() */

void __thiscall
ResourceImporterTextureAtlas::ResourceImporterTextureAtlas(ResourceImporterTextureAtlas *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0010df58;
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



/* ResourceImporterTextureAtlas::get_import_options(String const&,
   List<ResourceImporter::ImportOption, DefaultAllocator>*, int) const */

void ResourceImporterTextureAtlas::get_import_options(String *param_1,List *param_2,int param_3)

{
  undefined4 in_register_00000014;
  List<ResourceImporter::ImportOption,DefaultAllocator> *this;
  long in_FS_OFFSET;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  long local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  int local_a8 [8];
  undefined4 local_88 [2];
  undefined8 local_80;
  long local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  int local_58 [6];
  long local_40;
  
  this = (List<ResourceImporter::ImportOption,DefaultAllocator> *)
         CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_a8,"");
  local_d8 = "*.png";
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 5;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_d8 = "atlas_file";
  local_d0 = 10;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,4,(StrRange *)&local_f0,0x1b,(StrRange *)&local_e8,6,
             (StringName *)&local_e0);
  local_88[0] = local_d8._0_4_;
  local_80 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
  local_70 = local_c0;
  local_68 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0);
  local_d8 = "Region,Mesh2D";
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_d8 = "import_mode";
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,2,(StrRange *)&local_f0,2,(StrRange *)&local_e8,0x4006,
             (StringName *)&local_e0);
  local_80 = 0;
  local_88[0] = local_d8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
  local_68 = 0;
  local_70 = local_c0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
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
  local_d8 = "crop_to_region";
  local_d0 = 0xe;
  String::parse_latin1((StrRange *)&local_f0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_d8,1,(StrRange *)&local_f0,0,(StrRange *)&local_e8,6,
             (StringName *)&local_e0);
  local_80 = 0;
  local_88[0] = local_d8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
  local_68 = 0;
  local_70 = local_c0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_d8 = "";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "trim_alpha_border_from_region";
  local_d0 = 0x1d;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  }
  local_c8 = 0;
  local_c0 = 0;
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
      goto LAB_001010a0;
    }
  }
  local_b0 = 6;
  StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
LAB_001010a0:
  local_80 = 0;
  local_88[0] = local_d8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
  local_68 = 0;
  local_70 = local_c0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */

void __thiscall Vector<Vector2>::push_back(undefined8 param_1,Vector<Vector2> *this)

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
  iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* ResourceImporterTextureAtlas::import(long, String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) */

undefined8
ResourceImporterTextureAtlas::import
          (long param_1,String *param_2,String *param_3,HashMap *param_4,List *param_5,List *param_6
          ,Variant *param_7)

{
  char cVar1;
  Object *pOVar2;
  long in_FS_OFFSET;
  Image *local_68;
  Object *local_60;
  undefined8 local_58;
  String local_50 [8];
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (Image *)operator_new(0x268,"");
  Image::Image(local_68,(char **)atlas_import_failed_xpm);
  postinitialize_handler((Object *)local_68);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    local_68 = (Image *)0x0;
  }
  local_58 = 0;
  local_48 = (Object *)&_LC40;
  local_40 = 4;
  String::parse_latin1((StrRange *)&local_58);
  String::operator+(local_50,(String *)param_4);
  ImageTexture::create_from_image((Ref *)&local_60);
  local_48 = (Object *)0x0;
  if (local_60 != (Object *)0x0) {
    pOVar2 = (Object *)__dynamic_cast(local_60,&Object::typeinfo,&Resource::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      local_48 = pOVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_48 = (Object *)0x0;
      }
    }
  }
  ResourceSaver::save((Ref *)&local_48,local_50,0);
  if (local_48 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_48);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (local_60 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_60);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_60 + 0x140))(local_60);
        Memory::free_static(local_60,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_68 != (Image *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<Image>(local_68);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector<Vector2> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<Vector2>>::_copy_on_write(CowData<Vector<Vector2>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<Vector2> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<Vector2> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<Vector2>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
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



/* CowData<EditorAtlasPacker::Chart>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorAtlasPacker::Chart>::_copy_on_write(CowData<EditorAtlasPacker::Chart> *this)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  CowData<Vector2> *this_00;
  ulong uVar5;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x30 != 0) {
    uVar5 = lVar1 * 0x30 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar1;
    this_00 = (CowData<Vector2> *)(puVar4 + 3);
    if (lVar1 != 0) {
      do {
        lVar3 = *(long *)this + (-0x18 - (long)puVar4);
        *(undefined8 *)this_00 = 0;
        if (*(long *)(this_00 + lVar3 + 8) != 0) {
          CowData<Vector2>::_ref(this_00,(CowData *)(this_00 + lVar3 + 8));
        }
        *(undefined8 *)(this_00 + 0x10) = 0;
        if (*(long *)(this_00 + lVar3 + 0x18) != 0) {
          CowData<EditorAtlasPacker::Chart::Face>::_ref
                    ((CowData<EditorAtlasPacker::Chart::Face> *)(this_00 + 0x10),
                     (CowData *)(this_00 + lVar3 + 0x18));
        }
        lVar6 = lVar6 + 1;
        this_00[0x18] = this_00[lVar3 + 0x20];
        *(undefined8 *)(this_00 + 0x1c) = *(undefined8 *)(this_00 + lVar3 + 0x24);
        this_00[0x24] = this_00[lVar3 + 0x2c];
        this_00 = this_00 + 0x30;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<ResourceImporterTextureAtlas::PackData>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<ResourceImporterTextureAtlas::PackData>::_copy_on_write
          (CowData<ResourceImporterTextureAtlas::PackData> *this)

{
  long *plVar1;
  undefined2 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  CowData<Vector<Vector2>> *pCVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  CowData<Vector<Vector2>> *pCVar10;
  long lVar11;
  CowData<Vector<Vector2>> *this_00;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar3 = *(long *)(*(long *)this + -8);
  uVar13 = 0x10;
  if (lVar3 * 0x40 != 0) {
    uVar13 = lVar3 * 0x40 - 1;
    uVar13 = uVar13 | uVar13 >> 1;
    uVar13 = uVar13 | uVar13 >> 2;
    uVar13 = uVar13 | uVar13 >> 4;
    uVar13 = uVar13 | uVar13 >> 8;
    uVar13 = uVar13 | uVar13 >> 0x10;
    uVar13 = (uVar13 | uVar13 >> 0x20) + 0x11;
  }
  pCVar10 = (CowData<Vector<Vector2>> *)Memory::alloc_static(uVar13,false);
  if (pCVar10 == (CowData<Vector<Vector2>> *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar14 = 0;
  *(undefined8 *)pCVar10 = 1;
  *(long *)(pCVar10 + 8) = lVar3;
  pCVar6 = pCVar10;
  if (lVar3 != 0) {
    do {
      this_00 = pCVar6 + 0x40;
      puVar12 = (undefined8 *)(lVar14 * 0x40 + *(long *)this);
      uVar7 = *puVar12;
      uVar8 = puVar12[1];
      uVar2 = *(undefined2 *)(puVar12 + 2);
      *(undefined8 *)(pCVar6 + 0x30) = 0;
      lVar4 = puVar12[4];
      *(undefined2 *)(pCVar6 + 0x20) = uVar2;
      *(undefined8 *)(pCVar6 + 0x10) = uVar7;
      *(undefined8 *)(pCVar6 + 0x18) = uVar8;
      if (lVar4 != 0) {
        CowData<int>::_unref((CowData<int> *)(pCVar6 + 0x30));
        if (puVar12[4] != 0) {
          plVar1 = (long *)(puVar12[4] + -0x10);
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00101c92;
            LOCK();
            lVar11 = *plVar1;
            bVar15 = lVar4 == lVar11;
            if (bVar15) {
              *plVar1 = lVar4 + 1;
              lVar11 = lVar4;
            }
            UNLOCK();
          } while (!bVar15);
          if (lVar11 != -1) {
            *(undefined8 *)(pCVar6 + 0x30) = puVar12[4];
          }
        }
      }
LAB_00101c92:
      *(undefined8 *)this_00 = 0;
      if (puVar12[6] != 0) {
        CowData<Vector<Vector2>>::_unref(this_00);
        if (puVar12[6] != 0) {
          plVar1 = (long *)(puVar12[6] + -0x10);
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00101cd5;
            LOCK();
            lVar11 = *plVar1;
            bVar15 = lVar4 == lVar11;
            if (bVar15) {
              *plVar1 = lVar4 + 1;
              lVar11 = lVar4;
            }
            UNLOCK();
          } while (!bVar15);
          if (lVar11 != -1) {
            *(undefined8 *)this_00 = puVar12[6];
          }
        }
      }
LAB_00101cd5:
      *(undefined8 *)(pCVar6 + 0x48) = 0;
      if (puVar12[7] != 0) {
        *(undefined8 *)(pCVar6 + 0x48) = puVar12[7];
        cVar9 = RefCounted::reference();
        if (cVar9 == '\0') {
          *(undefined8 *)(pCVar6 + 0x48) = 0;
        }
      }
      lVar14 = lVar14 + 1;
      pCVar6 = this_00;
    } while (lVar3 != lVar14);
  }
  _unref(this);
  *(CowData<Vector<Vector2>> **)this = pCVar10 + 0x10;
  return;
}



/* CowData<EditorAtlasPacker::Chart::Face>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorAtlasPacker::Chart::Face>::_copy_on_write
          (CowData<EditorAtlasPacker::Chart::Face> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 0xc;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref();
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<EditorAtlasPacker::Chart::Face>::push_back(EditorAtlasPacker::Chart::Face) [clone .isra.0]
    */

void Vector<EditorAtlasPacker::Chart::Face>::push_back
               (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar2 = CowData<EditorAtlasPacker::Chart::Face>::resize<false>
                    ((CowData<EditorAtlasPacker::Chart::Face> *)(param_1 + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<EditorAtlasPacker::Chart::Face>::_copy_on_write
                  ((CowData<EditorAtlasPacker::Chart::Face> *)(param_1 + 8));
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar4 * 0xc);
        *puVar1 = param_2;
        *(undefined4 *)(puVar1 + 1) = param_3;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Vector<Vector<Vector2> >::push_back(Vector<Vector2>) [clone .isra.0] */

void __thiscall Vector<Vector<Vector2>>::push_back(Vector<Vector<Vector2>> *this,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Vector<Vector2>>::resize<false>((CowData<Vector<Vector2>> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<Vector<Vector2>>::_copy_on_write((CowData<Vector<Vector2>> *)(this + 8));
        lVar3 = *(long *)(this + 8) + lVar2 * 0x10;
        if (*(long *)(lVar3 + 8) == *(long *)(param_2 + 8)) {
          return;
        }
        CowData<Vector2>::_ref((CowData<Vector2> *)(lVar3 + 8),(CowData *)(param_2 + 8));
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* Vector<EditorAtlasPacker::Chart>::push_back(EditorAtlasPacker::Chart) [clone .isra.0] */

void __thiscall
Vector<EditorAtlasPacker::Chart>::push_back(Vector<EditorAtlasPacker::Chart> *this,long param_2)

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
  iVar1 = CowData<EditorAtlasPacker::Chart>::resize<false>
                    ((CowData<EditorAtlasPacker::Chart> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<EditorAtlasPacker::Chart>::_copy_on_write
                  ((CowData<EditorAtlasPacker::Chart> *)(this + 8));
        lVar2 = lVar3 * 0x30 + *(long *)(this + 8);
        if (*(long *)(lVar2 + 8) != *(long *)(param_2 + 8)) {
          CowData<Vector2>::_ref((CowData<Vector2> *)(lVar2 + 8),(CowData *)(param_2 + 8));
        }
        if (*(long *)(lVar2 + 0x18) != *(long *)(param_2 + 0x18)) {
          CowData<EditorAtlasPacker::Chart::Face>::_ref
                    ((CowData<EditorAtlasPacker::Chart::Face> *)(lVar2 + 0x18),
                     (CowData *)(param_2 + 0x18));
        }
        *(undefined1 *)(lVar2 + 0x20) = *(undefined1 *)(param_2 + 0x20);
        *(undefined8 *)(lVar2 + 0x24) = *(undefined8 *)(param_2 + 0x24);
        *(undefined1 *)(lVar2 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceImporterTextureAtlas::import_group_file(String const&, HashMap<String,
   HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > > > > const&, HashMap<String,
   String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > > const&) */

undefined8 __thiscall
ResourceImporterTextureAtlas::import_group_file
          (ResourceImporterTextureAtlas *this,String *param_1,HashMap *param_2,HashMap *param_3)

{
  undefined8 uVar1;
  Image *pIVar2;
  int *piVar3;
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
  code *pcVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  char cVar39;
  bool bVar40;
  uint uVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  uint uVar46;
  undefined8 *puVar47;
  undefined1 (*pauVar48) [16];
  Resource *this_00;
  undefined8 uVar49;
  Variant *pVVar50;
  long lVar51;
  BitMap *this_01;
  Object *pOVar52;
  String *pSVar53;
  undefined4 *puVar54;
  float fVar55;
  long lVar56;
  float fVar57;
  int iVar58;
  float fVar59;
  uint uVar60;
  undefined8 *puVar61;
  undefined8 *puVar62;
  long lVar63;
  uint uVar64;
  ulong uVar65;
  long *plVar66;
  Object *pOVar67;
  float fVar68;
  BitMap *pBVar69;
  uint uVar70;
  long lVar71;
  long lVar72;
  float fVar73;
  float fVar74;
  ulong uVar75;
  Resource *pRVar76;
  int iVar77;
  float fVar78;
  uint uVar79;
  float fVar80;
  int iVar81;
  undefined1 uVar82;
  long lVar83;
  ulong uVar84;
  float fVar85;
  long in_FS_OFFSET;
  bool bVar86;
  byte bVar87;
  double dVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  double dVar91;
  double dVar92;
  double dVar93;
  undefined1 auVar94 [16];
  long local_250;
  StringName *local_248;
  undefined8 *local_240;
  int local_208;
  ulong local_1e0;
  int local_160;
  int local_15c;
  String *local_158;
  Object *local_150;
  long local_148;
  Object *local_140;
  Array local_138 [8];
  Array local_130 [8];
  undefined8 local_128;
  Image *local_120;
  Vector<EditorAtlasPacker::Chart> local_118 [8];
  long local_110 [2];
  undefined8 *local_100;
  long local_f8;
  long local_f0;
  Image *local_e8;
  long local_e0;
  String *local_d8;
  long local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  long local_90;
  undefined1 local_88;
  undefined8 local_84;
  undefined1 local_7c;
  float local_78 [2];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  undefined1 local_4c;
  long local_40;
  
  bVar87 = 0;
  uVar65 = (ulong)*(uint *)(param_2 + 0x2c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(uint *)(param_2 + 0x2c) == 0) {
    _err_print_error("import_group_file","editor/import/resource_importer_texture_atlas.cpp",0xc4,
                     "Condition \"p_source_file_options.is_empty()\" is true. Returning: ERR_BUG",0,
                     0);
    uVar49 = 0x2f;
    goto LAB_001035cd;
  }
  local_110[0] = 0;
  local_100 = (undefined8 *)0x0;
  CowData<ResourceImporterTextureAtlas::PackData>::_copy_on_write
            ((CowData<ResourceImporterTextureAtlas::PackData> *)&local_100);
  uVar75 = uVar65 * 0x40 - 1;
  uVar75 = uVar75 | uVar75 >> 1;
  uVar75 = uVar75 | uVar75 >> 2;
  uVar75 = uVar75 | uVar75 >> 4;
  uVar75 = uVar75 | uVar75 >> 8;
  uVar75 = uVar75 | uVar75 >> 0x10;
  puVar47 = (undefined8 *)Memory::alloc_static((uVar75 | uVar75 >> 0x20) + 0x11,false);
  if (puVar47 == (undefined8 *)0x0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.");
  }
  else {
    local_100 = puVar47 + 2;
    *puVar47 = 1;
    puVar61 = local_100;
    do {
      *(undefined1 (*) [16])(puVar61 + 6) = (undefined1  [16])0x0;
      puVar62 = puVar61 + 8;
      *puVar61 = 0;
      puVar61[1] = 0;
      *(undefined2 *)(puVar61 + 2) = 0;
      puVar61[4] = 0;
      puVar61 = puVar62;
    } while (puVar47 + uVar65 * 8 + 2 != puVar62);
    puVar47[1] = uVar65;
  }
  plVar66 = *(long **)(param_2 + 0x18);
  local_240 = local_100;
  if (plVar66 != (long *)0x0) {
    iVar43 = 0;
    do {
      auVar94._8_8_ = local_a8._8_8_;
      auVar94._0_8_ = local_a8._0_8_;
      local_250 = (long)iVar43;
      if (local_240 == (undefined8 *)0x0) {
        lVar56 = 0;
        goto LAB_00103519;
      }
      lVar56 = local_240[-1];
      local_a8 = auVar94;
      if (lVar56 <= local_250) goto LAB_00103519;
      CowData<ResourceImporterTextureAtlas::PackData>::_copy_on_write
                ((CowData<ResourceImporterTextureAtlas::PackData> *)&local_100);
      local_120 = (Image *)0x0;
      local_240 = local_100;
      pauVar48 = (undefined1 (*) [16])(local_100 + local_250 * 8);
      this_00 = (Resource *)operator_new(0x268,"");
      pRVar76 = this_00;
      for (lVar56 = 0x4d; lVar56 != 0; lVar56 = lVar56 + -1) {
        *(undefined8 *)pRVar76 = 0;
        pRVar76 = pRVar76 + (ulong)bVar87 * -0x10 + 8;
      }
      Resource::Resource(this_00);
      this_00[0x260] = (Resource)0x0;
      *(code **)this_00 = Memory::free_static;
      *(undefined4 *)(this_00 + 0x240) = 0;
      *(undefined8 *)(this_00 + 0x250) = 0;
      *(undefined8 *)(this_00 + 600) = 0;
      postinitialize_handler((Object *)this_00);
      cVar39 = RefCounted::init_ref();
      pIVar2 = local_120;
      if (cVar39 == '\0') {
        if (local_120 != (Image *)0x0) {
          local_120 = (Image *)0x0;
          cVar39 = RefCounted::unreference();
          goto joined_r0x00102eda;
        }
        local_d8 = (String *)0x0;
LAB_00102441:
        local_e8 = (Image *)0x0;
      }
      else {
        if (local_120 != (Image *)this_00) {
          local_120 = (Image *)this_00;
          cVar39 = RefCounted::reference();
          if (cVar39 == '\0') {
            local_120 = (Image *)0x0;
            if (pIVar2 != (Image *)0x0) {
              cVar39 = RefCounted::unreference();
joined_r0x00102eff:
              if (cVar39 != '\0') {
                memdelete<Image>(pIVar2);
              }
            }
          }
          else if (pIVar2 != (Image *)0x0) {
            cVar39 = RefCounted::unreference();
            goto joined_r0x00102eff;
          }
        }
        cVar39 = RefCounted::unreference();
        pIVar2 = (Image *)this_00;
joined_r0x00102eda:
        if (cVar39 != '\0') {
          memdelete<Image>(pIVar2);
        }
        local_d8 = (String *)0x0;
        if (local_120 == (Image *)0x0) goto LAB_00102441;
        local_e8 = local_120;
        cVar39 = RefCounted::reference();
        if (cVar39 == '\0') goto LAB_00102441;
      }
      uVar41 = ImageLoader::load_image(plVar66 + 2,(StringName *)&local_e8,&local_d8,0);
      if (local_e8 != (Image *)0x0) {
        cVar39 = RefCounted::unreference();
        if (cVar39 != '\0') {
          memdelete<Image>(local_e8);
        }
      }
      local_248 = (StringName *)&local_d8;
      if (local_d8 == (String *)0x0) {
LAB_001024b2:
        if (uVar41 != 0) goto LAB_00103320;
LAB_001024ba:
        pIVar2 = *(Image **)((long)pauVar48[3] + 8);
        if (local_120 != pIVar2) {
          *(Image **)((long)pauVar48[3] + 8) = local_120;
          if (local_120 != (Image *)0x0) {
            cVar39 = RefCounted::reference();
            if (cVar39 == '\0') {
              *(undefined8 *)((long)pauVar48[3] + 8) = 0;
            }
          }
          if (pIVar2 != (Image *)0x0) {
            cVar39 = RefCounted::unreference();
            if (cVar39 != '\0') {
              memdelete<Image>(pIVar2);
            }
          }
        }
        StringName::StringName((StringName *)&local_f8,"import_mode",false);
        auVar33._8_8_ = local_a8._8_8_;
        auVar33._0_8_ = local_a8._0_8_;
        if ((plVar66[4] == 0) || (local_a8 = auVar33, *(int *)((long)plVar66 + 0x44) == 0))
        goto LAB_00102e60;
        uVar70 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar66 + 8) * 4);
        uVar65 = CONCAT44(0,uVar70);
        lVar56 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(plVar66 + 8) * 8);
        if (local_f8 == 0) {
          uVar46 = StringName::get_empty_hash();
        }
        else {
          uVar46 = *(uint *)(local_f8 + 0x20);
        }
        auVar38._8_8_ = local_a8._8_8_;
        auVar38._0_8_ = local_a8._0_8_;
        auVar37._8_8_ = local_a8._8_8_;
        auVar37._0_8_ = local_a8._0_8_;
        if (uVar46 == 0) {
          uVar46 = 1;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)uVar46 * lVar56;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar65;
        lVar63 = SUB168(auVar5 * auVar17,8);
        uVar60 = *(uint *)(plVar66[5] + lVar63 * 4);
        uVar64 = SUB164(auVar5 * auVar17,8);
        if (uVar60 == 0) goto LAB_00102e60;
        uVar79 = 0;
        while ((uVar60 != uVar46 ||
               (*(long *)(*(long *)(plVar66[4] + lVar63 * 8) + 0x10) != local_f8))) {
          uVar79 = uVar79 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar64 + 1) * lVar56;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar65;
          lVar63 = SUB168(auVar6 * auVar18,8);
          uVar60 = *(uint *)(plVar66[5] + lVar63 * 4);
          uVar64 = SUB164(auVar6 * auVar18,8);
          local_a8 = auVar37;
          if ((uVar60 == 0) ||
             (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar60 * lVar56, auVar19._8_8_ = 0,
             auVar19._0_8_ = uVar65, auVar8._8_8_ = 0,
             auVar8._0_8_ = (ulong)((uVar70 + uVar64) - SUB164(auVar7 * auVar19,8)) * lVar56,
             auVar20._8_8_ = 0, auVar20._0_8_ = uVar65, local_a8 = auVar38,
             SUB164(auVar8 * auVar20,8) < uVar79)) goto LAB_00102e60;
        }
        iVar42 = Variant::operator_cast_to_int
                           ((Variant *)(*(long *)(plVar66[4] + (ulong)uVar64 * 8) + 0x18));
        if ((StringName::configured != '\0') && (local_f8 != 0)) {
          StringName::unref();
        }
        if (iVar42 == 0) {
          *(undefined1 *)((long)pauVar48[1] + 1) = 0;
          StringName::StringName((StringName *)&local_e8,"crop_to_region",false);
          auVar34._8_8_ = local_a8._8_8_;
          auVar34._0_8_ = local_a8._0_8_;
          if ((plVar66[4] == 0) || (local_a8 = auVar34, *(int *)((long)plVar66 + 0x44) == 0))
          goto LAB_00102e60;
          uVar70 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar66 + 8) * 4);
          uVar65 = CONCAT44(0,uVar70);
          lVar56 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(plVar66 + 8) * 8);
          if (local_e8 == (Image *)0x0) {
            uVar46 = StringName::get_empty_hash();
          }
          else {
            uVar46 = *(uint *)(local_e8 + 0x20);
          }
          auVar36._8_8_ = local_a8._8_8_;
          auVar36._0_8_ = local_a8._0_8_;
          auVar35._8_8_ = local_a8._8_8_;
          auVar35._0_8_ = local_a8._0_8_;
          if (uVar46 == 0) {
            uVar46 = 1;
          }
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar46 * lVar56;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar65;
          lVar63 = SUB168(auVar9 * auVar21,8);
          uVar60 = *(uint *)(plVar66[5] + lVar63 * 4);
          uVar64 = SUB164(auVar9 * auVar21,8);
          if (uVar60 == 0) goto LAB_00102e60;
          while ((uVar60 != uVar46 ||
                 (*(Image **)(*(long *)(plVar66[4] + lVar63 * 8) + 0x10) != local_e8))) {
            uVar41 = uVar41 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(uVar64 + 1) * lVar56;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar65;
            lVar63 = SUB168(auVar10 * auVar22,8);
            uVar60 = *(uint *)(plVar66[5] + lVar63 * 4);
            uVar64 = SUB164(auVar10 * auVar22,8);
            local_a8 = auVar35;
            if ((uVar60 == 0) ||
               (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar60 * lVar56, auVar23._8_8_ = 0,
               auVar23._0_8_ = uVar65, auVar12._8_8_ = 0,
               auVar12._0_8_ = (ulong)((uVar70 + uVar64) - SUB164(auVar11 * auVar23,8)) * lVar56,
               auVar24._8_8_ = 0, auVar24._0_8_ = uVar65, local_a8 = auVar36,
               SUB164(auVar12 * auVar24,8) < uVar41)) goto LAB_00102e60;
          }
          bVar40 = Variant::operator_cast_to_bool
                             ((Variant *)(*(long *)(plVar66[4] + (ulong)uVar64 * 8) + 0x18));
          bVar86 = StringName::configured != '\0';
          pauVar48[1][0] = bVar40;
          if ((bVar86) && (local_e8 != (Image *)0x0)) {
            StringName::unref();
          }
          local_88 = 0;
          local_a8._8_8_ = 0;
          local_90 = 0;
          local_84 = 0;
          local_7c = 0;
          uVar49 = Image::get_size();
          local_b8._0_8_ = 0;
          local_b8._8_8_ = uVar49;
          StringName::StringName(local_248,"trim_alpha_border_from_region",false);
          pVVar50 = (Variant *)
                    HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                    ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                  *)(plVar66 + 3),local_248);
          bVar40 = Variant::operator_cast_to_bool(pVVar50);
          if ((StringName::configured != '\0') && (local_d8 != (String *)0x0)) {
            StringName::unref();
          }
          if (bVar40) {
            local_b8 = Image::get_used_rect();
          }
          auVar94 = Rect2i::operator_cast_to_Rect2((Rect2i *)local_b8);
          *pauVar48 = auVar94;
          Vector2i::operator_cast_to_Vector2((Vector2i *)local_b8);
          Vector<Vector2>::push_back((Vector<Vector2> *)local_a8);
          uStack_c4 = 0;
          local_c8 = local_b8._8_4_;
          uVar49 = Vector2i::operator+((Vector2i *)local_b8,(Vector2i *)&local_c8);
          local_78[0] = (float)uVar49;
          local_78[1] = (float)((ulong)uVar49 >> 0x20);
          Vector2i::operator_cast_to_Vector2((Vector2i *)local_78);
          Vector<Vector2>::push_back((Vector<Vector2> *)local_a8);
          local_c8 = local_b8._8_4_;
          uStack_c4 = local_b8._12_4_;
          uVar49 = Vector2i::operator+((Vector2i *)local_b8,(Vector2i *)&local_c8);
          local_78[0] = (float)uVar49;
          local_78[1] = (float)((ulong)uVar49 >> 0x20);
          Vector2i::operator_cast_to_Vector2((Vector2i *)local_78);
          Vector<Vector2>::push_back((Vector<Vector2> *)local_a8);
          local_c8 = 0;
          uStack_c4 = local_b8._12_4_;
          uVar49 = Vector2i::operator+((Vector2i *)local_b8,(Vector2i *)&local_c8);
          local_78[0] = (float)uVar49;
          local_78[1] = (float)((ulong)uVar49 >> 0x20);
          Vector2i::operator_cast_to_Vector2((Vector2i *)local_78);
          Vector<Vector2>::push_back((Vector<Vector2> *)local_a8);
          local_c8 = 0;
          uStack_c4 = (undefined4)_LC50;
          local_c0 = (undefined4)((ulong)_LC50 >> 0x20);
          Vector<EditorAtlasPacker::Chart::Face>::push_back(local_98,_LC50 << 0x20,local_c0);
          uStack_c4 = (undefined4)_LC51;
          local_c0 = (undefined4)((ulong)_LC51 >> 0x20);
          Vector<EditorAtlasPacker::Chart::Face>::push_back
                    (local_98,CONCAT44(uStack_c4,local_c8),local_c0);
          local_88 = 0;
          local_d0 = 0;
          if (local_a8._8_8_ == 0) {
            Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)((long)pauVar48[2] + 8));
            CowData<Vector2>::_unref((CowData<Vector2> *)&local_d0);
            if (local_110[0] == 0) {
              Vector<int>::push_back((Vector<int> *)((long)pauVar48[1] + 8),0);
              local_70 = 0.0;
              fStack_6c = 0.0;
            }
            else {
              Vector<int>::push_back
                        ((Vector<int> *)((long)pauVar48[1] + 8),*(int *)(local_110[0] + -8));
              local_70 = 0.0;
              fStack_6c = 0.0;
            }
          }
          else {
            CowData<Vector2>::_ref((CowData<Vector2> *)&local_d0,(CowData *)(local_a8 + 8));
            Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)((long)pauVar48[2] + 8));
            CowData<Vector2>::_unref((CowData<Vector2> *)&local_d0);
            if (local_110[0] == 0) {
              Vector<int>::push_back((Vector<int> *)((long)pauVar48[1] + 8),0);
            }
            else {
              Vector<int>::push_back
                        ((Vector<int> *)((long)pauVar48[1] + 8),*(int *)(local_110[0] + -8));
            }
            local_70 = 0.0;
            fStack_6c = 0.0;
            CowData<Vector2>::_ref((CowData<Vector2> *)&local_70,(CowData *)(local_a8 + 8));
          }
          local_60 = 0;
          if (local_90 != 0) {
            CowData<EditorAtlasPacker::Chart::Face>::_ref
                      ((CowData<EditorAtlasPacker::Chart::Face> *)&local_60,(CowData *)&local_90);
          }
          local_58 = 0;
          local_54 = local_84;
          local_4c = local_7c;
          Vector<EditorAtlasPacker::Chart>::push_back(local_118,(Vector2i *)local_78);
          CowData<EditorAtlasPacker::Chart::Face>::_unref();
          CowData<Vector2>::_unref((CowData<Vector2> *)&local_70);
          CowData<EditorAtlasPacker::Chart::Face>::_unref();
          CowData<Vector2>::_unref((CowData<Vector2> *)(local_a8 + 8));
        }
        else {
          *(undefined1 *)((long)pauVar48[1] + 1) = 1;
          pBVar69 = (BitMap *)0x0;
          this_01 = (BitMap *)operator_new(600,"");
          BitMap::BitMap(this_01);
          postinitialize_handler((Object *)this_01);
          cVar39 = RefCounted::init_ref();
          if (cVar39 != '\0') {
            cVar39 = RefCounted::reference();
            if (cVar39 != '\0') {
              pBVar69 = this_01;
            }
            cVar39 = RefCounted::unreference();
            if (cVar39 != '\0') {
              cVar39 = predelete_handler((Object *)this_01);
              if (cVar39 != '\0') {
                (**(code **)(*(long *)this_01 + 0x140))(this_01);
                Memory::free_static(this_01,false);
              }
            }
          }
          BitMap::create_from_image_alpha((Ref *)pBVar69,_LC52);
          uVar49 = Image::get_size();
          local_b8._0_8_ = uVar49;
          local_a8._8_8_ = Vector2i::operator_cast_to_Vector2((Vector2i *)local_b8);
          local_a8._0_8_ = 0;
          auVar94 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_a8);
          local_70 = auVar94._8_4_;
          fStack_6c = auVar94._12_4_;
          local_78[0] = auVar94._0_4_;
          local_78[1] = auVar94._4_4_;
          BitMap::clip_opaque_to_polygons((Rect2i *)&local_f8,_LC53);
          for (uVar65 = 0; (local_f0 != 0 && ((long)uVar65 < *(long *)(local_f0 + -8)));
              uVar65 = uVar65 + 1) {
            local_88 = 0;
            lVar56 = uVar65 * 0x10;
            local_a8._8_8_ = 0;
            local_7c = 0;
            local_90 = 0;
            local_84 = 0;
            if (*(long *)(local_f0 + lVar56 + 8) != 0) {
              CowData<Vector2>::_ref
                        ((CowData<Vector2> *)(local_a8 + 8),(CowData *)(local_f0 + lVar56 + 8));
            }
            local_88 = 1;
            if (local_f0 == 0) {
LAB_00103602:
              lVar63 = 0;
              uVar75 = uVar65;
              goto LAB_001034d2;
            }
            lVar63 = *(long *)(local_f0 + -8);
            uVar75 = uVar65;
            if (lVar63 <= (long)uVar65) goto LAB_001034d2;
            local_d0 = 0;
            cVar39 = Triangulate::triangulate((Vector *)(local_f0 + lVar56),local_248);
            lVar71 = local_d0;
            if (cVar39 == '\0') {
              local_e0 = 0;
              CowData<int>::_unref((CowData<int> *)&local_d0);
LAB_001030bd:
              uVar82 = 1;
            }
            else {
              local_d0 = 0;
              uVar84 = 2;
              local_e0 = lVar71;
              CowData<int>::_unref((CowData<int> *)&local_d0);
              if (lVar71 == 0) goto LAB_001030bd;
              while( true ) {
                auVar32._8_8_ = local_b8._8_8_;
                auVar32._0_8_ = local_b8._0_8_;
                auVar31._8_8_ = local_a8._8_8_;
                auVar31._0_8_ = local_a8._0_8_;
                lVar63 = *(long *)(lVar71 + -8);
                uVar82 = local_88;
                if (lVar63 <= (long)(uVar84 - 2)) break;
                local_78[1] = 0.0;
                local_70 = 0.0;
                uVar75 = uVar84 - 1;
                local_78[0] = *(float *)(lVar71 + -8 + uVar84 * 4);
                if ((lVar63 <= (long)uVar75) ||
                   (local_78[1] = *(float *)(lVar71 + -4 + uVar84 * 4), uVar75 = uVar84,
                   local_a8 = auVar31, local_b8 = auVar32, lVar63 <= (long)uVar84))
                goto LAB_001034d2;
                local_70 = *(float *)(lVar71 + uVar84 * 4);
                uVar84 = uVar84 + 3;
                Vector<EditorAtlasPacker::Chart::Face>::push_back(local_98);
              }
            }
            if (local_110[0] == 0) {
              iVar42 = 0;
            }
            else {
              iVar42 = *(int *)(local_110[0] + -8);
            }
            Vector<int>::push_back((Vector<int> *)((long)pauVar48[1] + 8),iVar42);
            local_70 = 0.0;
            fStack_6c = 0.0;
            if (local_a8._8_8_ != 0) {
              CowData<Vector2>::_ref((CowData<Vector2> *)&local_70,(CowData *)(local_a8 + 8));
            }
            local_60 = 0;
            if (local_90 != 0) {
              CowData<EditorAtlasPacker::Chart::Face>::_ref
                        ((CowData<EditorAtlasPacker::Chart::Face> *)&local_60,(CowData *)&local_90);
            }
            local_54 = local_84;
            local_4c = local_7c;
            local_58 = uVar82;
            Vector<EditorAtlasPacker::Chart>::push_back(local_118,local_78);
            CowData<EditorAtlasPacker::Chart::Face>::_unref();
            CowData<Vector2>::_unref((CowData<Vector2> *)&local_70);
            if (local_f0 == 0) goto LAB_00103602;
            lVar63 = *(long *)(local_f0 + -8);
            uVar75 = uVar65;
            if (lVar63 <= (long)uVar65) goto LAB_001034d2;
            local_d0 = 0;
            if (*(long *)(local_f0 + lVar56 + 8) != 0) {
              CowData<Vector2>::_ref
                        ((CowData<Vector2> *)&local_d0,(CowData *)(local_f0 + lVar56 + 8));
            }
            Vector<Vector<Vector2>>::push_back((Vector<Vector<Vector2>> *)((long)pauVar48[2] + 8));
            CowData<Vector2>::_unref((CowData<Vector2> *)&local_d0);
            CowData<int>::_unref((CowData<int> *)&local_e0);
            CowData<EditorAtlasPacker::Chart::Face>::_unref();
            CowData<Vector2>::_unref((CowData<Vector2> *)(local_a8 + 8));
          }
          CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)&local_f0);
          cVar39 = RefCounted::unreference();
          if (cVar39 != '\0') {
            cVar39 = predelete_handler((Object *)pBVar69);
            if (cVar39 != '\0') {
              (**(code **)(*(long *)pBVar69 + 0x140))(pBVar69);
              Memory::free_static(pBVar69,false);
            }
          }
        }
        iVar43 = iVar43 + 1;
        if (local_120 != (Image *)0x0) {
          cVar39 = RefCounted::unreference();
          if (cVar39 != '\0') {
            memdelete<Image>(local_120);
          }
        }
      }
      else {
        cVar39 = RefCounted::unreference();
        pSVar53 = local_d8;
        if (cVar39 == '\0') goto LAB_001024b2;
        cVar39 = predelete_handler((Object *)local_d8);
        if (cVar39 == '\0') goto LAB_001024b2;
        (**(code **)(*(long *)pSVar53 + 0x140))(pSVar53);
        Memory::free_static(pSVar53,false);
        if (uVar41 == 0) goto LAB_001024ba;
LAB_00103320:
        _err_print_error("import_group_file","editor/import/resource_importer_texture_atlas.cpp",
                         0xd4,"Condition \"err != OK\" is true. Continuing.");
        Ref<Image>::unref((Ref<Image> *)&local_120);
      }
      plVar66 = (long *)*plVar66;
    } while (plVar66 != (long *)0x0);
  }
  local_248 = (StringName *)&local_d8;
  ProjectSettings::get_singleton();
  StringName::StringName(local_248,"editor/import/atlas_max_width",false);
  ProjectSettings::get_setting_with_override((StringName *)local_78);
  iVar43 = Variant::operator_cast_to_int((Variant *)local_78);
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d8 != (String *)0x0)) {
    StringName::unref();
  }
  EditorAtlasPacker::chart_pack(local_118,&local_160,&local_15c,iVar43,4);
  iVar42 = local_15c;
  if (iVar43 * 2 < local_15c) {
    local_e8 = (Image *)0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)param_1);
    }
    local_120 = (Image *)0x0;
    String::parse_latin1((String *)&local_120,"");
    local_128 = 0;
    String::parse_latin1
              ((String *)&local_128,
               "%s: Atlas texture significantly larger on one axis (%d), consider changing the `editor/import/atlas_max_width` Project Setting to allow a wider texture, making the result more even in size."
              );
    TTR((String *)&local_f8,(String *)&local_128);
    vformat<String,int>(local_248,(String *)&local_f8,(CowData<char32_t> *)&local_e8,iVar42);
    _err_print_error("import_group_file","editor/import/resource_importer_texture_atlas.cpp",0x11f,
                     local_248,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_248);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  }
  Image::create_empty((Ref<Image> *)&local_158,local_160,local_15c);
  for (lVar56 = 0; (local_240 != (undefined8 *)0x0 && (lVar56 < (long)local_240[-1]));
      lVar56 = lVar56 + 1) {
    lVar71 = 0;
    CowData<ResourceImporterTextureAtlas::PackData>::_copy_on_write
              ((CowData<ResourceImporterTextureAtlas::PackData> *)&local_100);
    local_240 = local_100;
    lVar63 = local_100[lVar56 * 8 + 4];
    if (lVar63 != 0) {
LAB_00102cf8:
      if (lVar71 < *(long *)(lVar63 + -8)) {
        uVar75 = (ulong)*(int *)(lVar63 + lVar71 * 4);
        if (-1 < (long)uVar75) {
          if (local_110[0] == 0) goto LAB_00103ef3;
          if (*(long *)(local_110[0] + -8) <= (long)uVar75) goto LAB_00103f34;
          lVar72 = local_110[0] + uVar75 * 0x30;
          lVar51 = *(long *)(lVar72 + 0x18);
          if (lVar51 != 0) {
            local_1e0 = 0;
LAB_00102d80:
            if ((long)local_1e0 < *(long *)(lVar51 + -8)) {
              iVar43 = 0;
              local_78[0] = 0.0;
              local_78[1] = 0.0;
              local_70 = 0.0;
              fStack_6c = 0.0;
              fStack_68 = 0.0;
              fStack_64 = 0.0;
              if (lVar51 != 0) {
                do {
                  lVar63 = *(long *)(lVar51 + -8);
                  uVar75 = local_1e0;
                  if (lVar63 <= (long)local_1e0) goto LAB_001034d2;
                  lVar83 = (long)iVar43;
                  lVar63 = *(long *)(lVar72 + 8);
                  uVar75 = (ulong)*(int *)(lVar51 + lVar83 * 4 + local_1e0 * 0xc);
                  if ((long)uVar75 < 0) {
                    if (lVar63 == 0) goto LAB_00103ef3;
LAB_00103ea7:
                    lVar63 = *(long *)(lVar63 + -8);
                    goto LAB_001034d2;
                  }
                  if (lVar63 == 0) goto LAB_00103ef3;
                  if (*(long *)(lVar63 + -8) <= (long)uVar75) goto LAB_00103ea7;
                  iVar43 = iVar43 + 1;
                  uVar49 = Vector2::operator_cast_to_Vector2i((Vector2 *)(lVar63 + uVar75 * 8));
                  *(undefined8 *)(local_78 + lVar83 * 2) = uVar49;
                  if (iVar43 == 3) goto LAB_0010362b;
                  lVar51 = *(long *)(lVar72 + 0x18);
                  if (lVar51 == 0) break;
                } while( true );
              }
              lVar63 = 0;
              uVar75 = local_1e0;
              goto LAB_001034d2;
            }
            goto LAB_00103ac2;
          }
          goto LAB_00103ae6;
        }
        if (local_110[0] == 0) {
LAB_00103ef3:
          lVar63 = 0;
        }
        else {
LAB_00103f34:
          lVar63 = *(long *)(local_110[0] + -8);
        }
        goto LAB_001034d2;
      }
    }
LAB_00103af3:
  }
  Image::save_png(local_158);
  local_150 = (Object *)0x0;
  ResourceCache::get_ref((String *)local_248);
  pOVar67 = local_150;
  if (local_d8 == (String *)0x0) {
    if (local_150 != (Object *)0x0) {
      local_150 = (Object *)0x0;
LAB_001048ff:
      cVar39 = RefCounted::unreference();
      if (cVar39 != '\0') {
        cVar39 = predelete_handler(pOVar67);
        if (cVar39 != '\0') {
          (**(code **)(*(long *)pOVar67 + 0x140))(pOVar67);
          Memory::free_static(pOVar67,false);
        }
      }
    }
  }
  else {
    pOVar52 = (Object *)__dynamic_cast(local_d8,&Object::typeinfo,&Texture2D::typeinfo);
    pOVar67 = local_150;
    if (local_150 != pOVar52) {
      local_150 = pOVar52;
      if (pOVar52 != (Object *)0x0) {
        cVar39 = RefCounted::reference();
        if (cVar39 == '\0') {
          local_150 = (Object *)0x0;
        }
      }
      if (pOVar67 != (Object *)0x0) goto LAB_001048ff;
    }
  }
  Ref<Resource>::unref((Ref<Resource> *)local_248);
  if (local_150 == (Object *)0x0) {
    ImageTexture::create_from_image((Ref *)local_248);
    (**(code **)(*(long *)local_d8 + 0x188))(local_d8,param_1,0);
    pOVar67 = local_150;
    if (local_d8 == (String *)0x0) {
      if (local_150 != (Object *)0x0) {
        local_150 = (Object *)0x0;
LAB_00104955:
        cVar39 = RefCounted::unreference();
        if (cVar39 != '\0') {
          cVar39 = predelete_handler(pOVar67);
          if (cVar39 != '\0') {
            (**(code **)(*(long *)pOVar67 + 0x140))(pOVar67);
            Memory::free_static(pOVar67,false);
          }
        }
        goto LAB_00104890;
      }
    }
    else {
      pOVar52 = (Object *)__dynamic_cast(local_d8,&Object::typeinfo,&Texture2D::typeinfo);
      pOVar67 = local_150;
      if (pOVar52 != local_150) {
        local_150 = pOVar52;
        if (pOVar52 != (Object *)0x0) {
          cVar39 = RefCounted::reference();
          if (cVar39 == '\0') {
            local_150 = (Object *)0x0;
          }
        }
        if (pOVar67 != (Object *)0x0) goto LAB_00104955;
LAB_00104890:
        if (local_d8 == (String *)0x0) goto LAB_00103bac;
      }
      cVar39 = RefCounted::unreference();
      pSVar53 = local_d8;
      if (cVar39 != '\0') {
        cVar39 = predelete_handler((Object *)local_d8);
        if (cVar39 != '\0') {
          (**(code **)(*(long *)pSVar53 + 0x140))(pSVar53);
          Memory::free_static(pSVar53,false);
        }
      }
    }
  }
LAB_00103bac:
  local_250 = 0;
  plVar66 = *(long **)(param_2 + 0x18);
  if (plVar66 != (long *)0x0) {
LAB_00103bd2:
    if (local_100 == (undefined8 *)0x0) {
      lVar56 = 0;
LAB_00103519:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,local_250,lVar56,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar29 = (code *)invalidInstructionException();
      (*pcVar29)();
    }
    lVar56 = local_100[-1];
    if (lVar56 <= local_250) goto LAB_00103519;
    CowData<ResourceImporterTextureAtlas::PackData>::_copy_on_write
              ((CowData<ResourceImporterTextureAtlas::PackData> *)&local_100);
    local_148 = 0;
    puVar47 = local_100 + local_250 * 8;
    if (*(char *)((long)puVar47 + 0x11) != '\0') {
      local_140 = (Object *)0x0;
      Ref<ArrayMesh>::instantiate<>((Ref<ArrayMesh> *)&local_140);
      for (lVar56 = 0; (lVar63 = puVar47[4], lVar63 != 0 && (lVar56 < *(long *)(lVar63 + -8)));
          lVar56 = lVar56 + 1) {
        uVar75 = (ulong)*(int *)(lVar63 + lVar56 * 4);
        if ((long)uVar75 < 0) {
          if (local_110[0] == 0) goto LAB_0010416d;
LAB_001045d3:
          lVar63 = *(long *)(local_110[0] + -8);
          goto LAB_001034d2;
        }
        if (local_110[0] == 0) goto LAB_0010416d;
        if (*(long *)(local_110[0] + -8) <= (long)uVar75) goto LAB_001045d3;
        lVar71 = local_110[0] + uVar75 * 0x30;
        local_f0 = 0;
        local_e0 = 0;
        local_d0 = 0;
        if (*(long *)(lVar71 + 8) == 0) {
          iVar43 = 0;
        }
        else {
          iVar43 = (int)*(undefined8 *)(*(long *)(lVar71 + 8) + -8);
        }
        if (*(long *)(lVar71 + 0x18) == 0) {
          iVar42 = 0;
        }
        else {
          iVar42 = (int)*(undefined8 *)(*(long *)(lVar71 + 0x18) + -8);
        }
        CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_f0,(long)iVar43);
        CowData<Vector2>::resize<false>((CowData<Vector2> *)&local_d0,(long)iVar43);
        CowData<int>::resize<false>((CowData<int> *)&local_e0,(long)(iVar42 * 3));
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_f0);
        lVar72 = local_f0;
        CowData<int>::_copy_on_write((CowData<int> *)&local_e0);
        lVar51 = local_e0;
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)&local_d0);
        lVar83 = local_d0;
        if (0 < iVar43) {
          uVar75 = 0;
          do {
            lVar4 = *(long *)(lVar71 + 8);
            if (lVar4 == 0) {
              lVar63 = 0;
              goto LAB_001034d2;
            }
            lVar63 = *(long *)(lVar4 + -8);
            if (lVar63 <= (long)uVar75) goto LAB_001034d2;
            puVar61 = (undefined8 *)(lVar4 + uVar75 * 8);
            cVar39 = *(char *)(lVar71 + 0x2c);
            *(undefined8 *)(lVar72 + uVar75 * 8) = *puVar61;
            uVar49 = *puVar61;
            if (cVar39 != '\0') {
              uVar49 = CONCAT44((int)uVar49,(int)((ulong)uVar49 >> 0x20));
            }
            auVar90._0_4_ = (float)*(undefined8 *)(lVar71 + 0x24) + (float)uVar49;
            auVar90._4_4_ =
                 (float)((ulong)*(undefined8 *)(lVar71 + 0x24) >> 0x20) +
                 (float)((ulong)uVar49 >> 0x20);
            uVar49 = Image::get_size();
            local_78[0] = (float)uVar49;
            local_78[1] = (float)((ulong)uVar49 >> 0x20);
            auVar89._0_8_ = Vector2i::operator_cast_to_Vector2((Vector2i *)local_78);
            auVar90._8_8_ = 0;
            auVar89._8_8_ = __LC0;
            auVar94 = divps(auVar90,auVar89);
            *(long *)(lVar83 + uVar75 * 8) = auVar94._0_8_;
            bVar40 = uVar75 != iVar43 - 1;
            uVar75 = uVar75 + 1;
          } while (bVar40);
        }
        lVar72 = 0;
        for (uVar75 = 0; (int)uVar75 < iVar42; uVar75 = uVar75 + 1) {
          lVar83 = *(long *)(lVar71 + 0x18);
          if (lVar83 == 0) goto LAB_0010416d;
          lVar63 = *(long *)(lVar83 + -8);
          if (lVar63 <= (long)uVar75) goto LAB_001034d2;
          puVar54 = (undefined4 *)(lVar83 + lVar72);
          *(undefined4 *)(lVar51 + lVar72) = *puVar54;
          *(undefined4 *)(lVar51 + 4 + lVar72) = puVar54[1];
          *(undefined4 *)(lVar51 + 8 + lVar72) = puVar54[2];
          lVar72 = lVar72 + 0xc;
        }
        Array::Array(local_138);
        iVar43 = (int)local_138;
        Array::resize(iVar43);
        Variant::Variant((Variant *)local_78,(Vector *)&local_f8);
        pVVar50 = (Variant *)Array::operator[](iVar43);
        Variant::operator=(pVVar50,(Variant *)local_78);
        if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_78,local_248);
        pVVar50 = (Variant *)Array::operator[](iVar43);
        Variant::operator=(pVVar50,(Variant *)local_78);
        if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_78,(Vector *)&local_e8);
        pVVar50 = (Variant *)Array::operator[](iVar43);
        Variant::operator=(pVVar50,(Variant *)local_78);
        if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        pOVar67 = local_140;
        Dictionary::Dictionary((Dictionary *)&local_128);
        Array::Array(local_130);
        local_78[0] = 0.0;
        local_78[1] = 0.0;
        local_120 = (Image *)0x0;
        local_70 = 0.0;
        fStack_6c = 0.0;
        fStack_68 = 0.0;
        fStack_64 = 0.0;
        Array::set_typed((uint)local_130,(StringName *)0x1c,(Variant *)&local_120);
        if ((StringName::configured != '\0') && (local_120 != (Image *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        ArrayMesh::add_surface_from_arrays(pOVar67,3,local_138);
        Array::~Array(local_130);
        Dictionary::~Dictionary((Dictionary *)&local_128);
        Array::~Array(local_138);
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_d0);
        CowData<int>::_unref((CowData<int> *)&local_e0);
        CowData<Vector2>::_unref((CowData<Vector2> *)&local_f0);
      }
      local_e8 = (Image *)0x0;
      Ref<MeshTexture>::instantiate<>((Ref<MeshTexture> *)&local_e8);
      pIVar2 = local_e8;
      MeshTexture::set_base_texture((Ref *)local_e8);
      uVar49 = Image::get_size();
      local_a8._0_8_ = uVar49;
      uVar49 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_a8);
      local_78[0] = (float)uVar49;
      local_78[1] = (float)((ulong)uVar49 >> 0x20);
      MeshTexture::set_image_size(pIVar2);
      pOVar67 = local_140;
      local_d8 = (String *)0x0;
      if (local_140 != (Object *)0x0) {
        pOVar52 = (Object *)__dynamic_cast(local_140,&Object::typeinfo,&Mesh::typeinfo,0);
        if (pOVar52 != (Object *)0x0) {
          local_d8 = (String *)pOVar52;
          cVar39 = RefCounted::reference();
          if (cVar39 == '\0') {
            local_d8 = (String *)0x0;
          }
        }
      }
      MeshTexture::set_mesh((Ref *)pIVar2);
      if (local_d8 != (String *)0x0) {
        cVar39 = RefCounted::unreference();
        pSVar53 = local_d8;
        if (cVar39 != '\0') {
          cVar39 = predelete_handler((Object *)local_d8);
          if (cVar39 != '\0') {
            (**(code **)(*(long *)pSVar53 + 0x140))();
            Memory::free_static(pSVar53,false);
          }
        }
      }
      lVar56 = __dynamic_cast(pIVar2,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (lVar56 != 0) {
        local_148 = lVar56;
        cVar39 = RefCounted::reference();
        if (cVar39 == '\0') {
          local_148 = 0;
        }
      }
      cVar39 = RefCounted::unreference();
      if (cVar39 != '\0') {
        cVar39 = predelete_handler((Object *)pIVar2);
        if (cVar39 != '\0') {
          (**(code **)(*(long *)pIVar2 + 0x140))(pIVar2);
          Memory::free_static(pIVar2,false);
        }
      }
      if (pOVar67 != (Object *)0x0) {
        cVar39 = RefCounted::unreference();
        if (cVar39 != '\0') {
          cVar39 = predelete_handler(pOVar67);
          if (cVar39 != '\0') {
            (**(code **)(*(long *)pOVar67 + 0x140))(pOVar67);
            Memory::free_static(pOVar67,false);
          }
        }
      }
LAB_00103d47:
      local_d8 = (String *)0x0;
      String::parse_latin1((String *)local_248,".res");
      if ((*(long *)(param_3 + 8) != 0) && (*(int *)(param_3 + 0x2c) != 0)) {
        uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x28) * 4);
        lVar56 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x28) * 8);
        uVar46 = String::hash();
        uVar65 = CONCAT44(0,uVar41);
        lVar63 = *(long *)(param_3 + 0x10);
        uVar70 = 1;
        if (uVar46 != 0) {
          uVar70 = uVar46;
        }
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)uVar70 * lVar56;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar65;
        lVar71 = SUB168(auVar13 * auVar25,8);
        uVar46 = *(uint *)(lVar63 + lVar71 * 4);
        uVar60 = SUB164(auVar13 * auVar25,8);
        if (uVar46 != 0) {
          uVar64 = 0;
          do {
            if (uVar46 == uVar70) {
              cVar39 = String::operator==((String *)
                                          (*(long *)(*(long *)(param_3 + 8) + lVar71 * 8) + 0x10),
                                          (String *)(plVar66 + 2));
              if (cVar39 != '\0') goto LAB_00103f5e;
              lVar63 = *(long *)(param_3 + 0x10);
            }
            uVar64 = uVar64 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(uVar60 + 1) * lVar56;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar65;
            lVar71 = SUB168(auVar14 * auVar26,8);
            uVar46 = *(uint *)(lVar63 + lVar71 * 4);
            uVar60 = SUB164(auVar14 * auVar26,8);
            if ((uVar46 == 0) ||
               (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar46 * lVar56, auVar27._8_8_ = 0,
               auVar27._0_8_ = uVar65, auVar16._8_8_ = 0,
               auVar16._0_8_ = (ulong)((uVar41 + uVar60) - SUB164(auVar15 * auVar27,8)) * lVar56,
               auVar28._8_8_ = 0, auVar28._0_8_ = uVar65, SUB164(auVar16 * auVar28,8) < uVar64))
            break;
          } while( true );
        }
      }
LAB_00102e60:
      _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                       "FATAL: Condition \"!exists\" is true.",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar29 = (code *)invalidInstructionException();
      (*pcVar29)();
    }
    piVar3 = (int *)puVar47[4];
    if (piVar3 == (int *)0x0) {
LAB_00104175:
      lVar63 = 0;
    }
    else {
      lVar63 = *(long *)(piVar3 + -2);
      if (0 < lVar63) {
        uVar75 = (ulong)*piVar3;
        if ((long)uVar75 < 0) {
          if (local_110[0] != 0) {
LAB_00104110:
            lVar63 = *(long *)(local_110[0] + -8);
            goto LAB_001034d2;
          }
        }
        else if (local_110[0] != 0) {
          if (*(long *)(local_110[0] + -8) <= (long)uVar75) goto LAB_00104110;
          lVar56 = local_110[0] + uVar75 * 0x30;
          puVar61 = *(undefined8 **)(lVar56 + 8);
          if (puVar61 == (undefined8 *)0x0) goto LAB_00104175;
          lVar63 = puVar61[-1];
          if (0 < lVar63) {
            uVar49 = *puVar61;
            uVar1 = *(undefined8 *)(lVar56 + 0x24);
            local_d8 = (String *)0x0;
            Ref<AtlasTexture>::instantiate<>((Ref<AtlasTexture> *)local_248);
            pSVar53 = local_d8;
            AtlasTexture::set_atlas((Ref *)local_d8);
            local_70 = (float)puVar47[1];
            fStack_6c = (float)((ulong)puVar47[1] >> 0x20);
            local_78[0] = (float)uVar1 + (float)uVar49;
            local_78[1] = (float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar49 >> 0x20);
            AtlasTexture::set_region(pSVar53);
            if (*(char *)(puVar47 + 2) == '\0') {
              uVar49 = Vector2::operator_cast_to_Vector2i((Vector2 *)(puVar47 + 1));
              local_b8._0_8_ = uVar49;
              uVar49 = Image::get_size();
              local_c8 = (undefined4)uVar49;
              uStack_c4 = (undefined4)((ulong)uVar49 >> 0x20);
              uVar49 = Vector2i::operator-((Vector2i *)&local_c8,(Vector2i *)local_b8);
              local_a8._0_8_ = uVar49;
              uVar49 = Vector2i::operator_cast_to_Vector2((Vector2i *)local_a8);
              local_70 = (float)uVar49;
              fStack_6c = (float)((ulong)uVar49 >> 0x20);
              local_78[0] = (float)*puVar47;
              local_78[1] = (float)((ulong)*puVar47 >> 0x20);
              AtlasTexture::set_margin(pSVar53);
            }
            lVar56 = __dynamic_cast(pSVar53,&Object::typeinfo,&Texture2D::typeinfo,0);
            if (lVar56 != 0) {
              local_148 = lVar56;
              cVar39 = RefCounted::reference();
              if (cVar39 == '\0') {
                local_148 = 0;
              }
            }
            cVar39 = RefCounted::unreference();
            if (cVar39 != '\0') {
              cVar39 = predelete_handler((Object *)pSVar53);
              if (cVar39 != '\0') {
                (**(code **)(*(long *)pSVar53 + 0x140))(pSVar53);
                Memory::free_static(pSVar53,false);
              }
            }
            goto LAB_00103d47;
          }
          goto LAB_00104178;
        }
LAB_0010416d:
        lVar63 = 0;
LAB_001034d2:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar75,lVar63,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar29 = (code *)invalidInstructionException();
        (*pcVar29)();
      }
    }
LAB_00104178:
    uVar75 = 0;
    goto LAB_001034d2;
  }
LAB_0010402a:
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_150);
  Ref<Image>::unref((Ref<Image> *)&local_158);
  CowData<ResourceImporterTextureAtlas::PackData>::_unref
            ((CowData<ResourceImporterTextureAtlas::PackData> *)&local_100);
  CowData<EditorAtlasPacker::Chart>::_unref((CowData<EditorAtlasPacker::Chart> *)local_110);
  uVar49 = 0;
LAB_001035cd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar49;
LAB_0010362b:
  local_208 = (int)local_158;
  if (local_158 != (String *)0x0) {
    local_d8 = local_158;
    cVar39 = RefCounted::reference();
    if (cVar39 != '\0') goto LAB_00103677;
  }
  local_d8 = (String *)0x0;
  local_208 = 0;
LAB_00103677:
  cVar39 = *(char *)(lVar72 + 0x2c);
  uVar49 = Vector2::operator_cast_to_Vector2i((Vector2 *)(lVar72 + 0x24));
  iVar43 = (int)uVar49;
  iVar77 = (int)((ulong)uVar49 >> 0x20);
  iVar42 = Image::get_width();
  iVar44 = Image::get_height();
  iVar45 = Image::get_width();
  Image::get_height();
  fVar85 = fStack_64;
  fVar73 = local_70;
  fVar57 = fStack_68;
  fVar30 = fStack_6c;
  if ((int)fStack_64 < (int)fStack_6c) {
    fVar85 = fStack_6c;
    fVar73 = fStack_68;
    fVar57 = local_70;
    fVar30 = fStack_64;
  }
  fVar80 = fVar85;
  fVar74 = fVar73;
  fVar78 = fVar30;
  fVar68 = local_78[1];
  fVar55 = local_78[0];
  if (((int)fVar30 < (int)local_78[1]) &&
     (fVar74 = local_78[0], fVar78 = local_78[1], fVar68 = fVar30, fVar55 = fVar73,
     (int)fVar85 < (int)local_78[1])) {
    fVar80 = local_78[1];
    fVar74 = fVar57;
    fVar57 = local_78[0];
    fVar78 = fVar85;
  }
  iVar81 = (int)fVar80 - (int)fVar68;
  dVar91 = (double)(int)fVar55;
  dVar93 = (double)((int)fVar74 - (int)fVar55) / (double)(((int)fVar78 - (int)fVar68) + 1);
  dVar88 = dVar93 + dVar91;
  if (cVar39 == '\0') {
    iVar58 = iVar44 - iVar77;
  }
  else {
    iVar58 = iVar42 - iVar43;
  }
  fVar30 = fVar80;
  if (iVar58 + -1 < (int)fVar80) {
    fVar30 = (float)(iVar58 + -1);
  }
  if ((int)fVar68 < (int)fVar30) {
    do {
      if (-1 < (int)fVar68) {
        fVar85 = 0.0;
        if (0.0 < dVar91) {
          fVar85 = (float)(int)dVar91;
        }
        dVar92 = (double)iVar45;
        for (; (double)(int)fVar85 <
               (double)(~-(ulong)(dVar92 < dVar88) & (ulong)dVar88 |
                       (ulong)dVar92 & -(ulong)(dVar92 < dVar88)); fVar85 = (float)((int)fVar85 + 1)
            ) {
          fVar73 = (float)(iVar45 + -1);
          if ((int)fVar85 < iVar45 + -1) {
            fVar73 = fVar85;
          }
          if ((int)fVar85 < 0) {
            fVar73 = 0.0;
          }
          auVar94 = Image::get_pixel((int)local_240[lVar56 * 8 + 7],(int)fVar73);
          fVar73 = fVar85;
          fVar59 = fVar68;
          if (cVar39 != '\0') {
            fVar73 = fVar68;
            fVar59 = fVar85;
          }
          uVar70 = (int)fVar73 + iVar43;
          uVar41 = (int)fVar59 + iVar77;
          local_a8 = auVar94;
          if (((int)uVar70 < iVar42 && -1 < (int)(uVar70 | uVar41)) && ((int)uVar41 < iVar44)) {
            Image::set_pixel(local_208,uVar70,(Color *)(ulong)uVar41);
          }
        }
        fVar85 = (float)(iVar45 + -1);
        if (dVar91 < dVar92) {
          fVar85 = (float)(int)dVar91;
        }
        for (; (double)(-(ulong)(0.0 < dVar88) & (ulong)dVar88) <= (double)(int)fVar85;
            fVar85 = (float)((int)fVar85 + -1)) {
          fVar73 = (float)(iVar45 + -1);
          if ((int)fVar85 < iVar45 + -1) {
            fVar73 = fVar85;
          }
          if ((int)fVar85 < 0) {
            fVar73 = 0.0;
          }
          auVar94 = Image::get_pixel((int)local_240[lVar56 * 8 + 7],(int)fVar73);
          fVar73 = fVar85;
          fVar59 = fVar68;
          if (cVar39 != '\0') {
            fVar73 = fVar68;
            fVar59 = fVar85;
          }
          uVar70 = (int)fVar73 + iVar43;
          uVar41 = (int)fVar59 + iVar77;
          local_a8 = auVar94;
          if (((int)uVar70 < iVar42 && -1 < (int)(uVar70 | uVar41)) && ((int)uVar41 < iVar44)) {
            Image::set_pixel(local_208,uVar70,(Color *)(ulong)uVar41);
          }
        }
      }
      dVar91 = dVar91 + (double)((int)fVar57 - (int)fVar55) / (double)(iVar81 + 1);
      dVar92 = dVar93;
      if ((int)fVar78 <= (int)fVar68) {
        dVar92 = (double)((int)fVar57 - (int)fVar74) / (double)(((int)fVar80 - (int)fVar78) + 1);
      }
      dVar88 = dVar88 + dVar92;
      fVar68 = (float)((int)fVar68 + 1);
    } while (fVar30 != fVar68);
  }
  Ref<Image>::unref((Ref<Image> *)local_248);
  local_1e0 = local_1e0 + 1;
  lVar51 = *(long *)(lVar72 + 0x18);
  if (lVar51 == 0) goto LAB_00103ac2;
  goto LAB_00102d80;
LAB_00103ac2:
  lVar63 = local_240[lVar56 * 8 + 4];
LAB_00103ae6:
  lVar71 = lVar71 + 1;
  if (lVar63 == 0) goto LAB_00103af3;
  goto LAB_00102cf8;
LAB_00103f5e:
  String::operator+((String *)&local_e8,
                    (String *)(*(long *)(*(long *)(param_3 + 8) + (ulong)uVar60 * 8) + 0x18));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_248);
  local_d8 = (String *)0x0;
  if (local_148 != 0) {
    pSVar53 = (String *)__dynamic_cast(local_148,&Object::typeinfo,&Resource::typeinfo);
    if (pSVar53 != (String *)0x0) {
      local_d8 = pSVar53;
      cVar39 = RefCounted::reference();
      if (cVar39 == '\0') {
        local_d8 = (String *)0x0;
      }
    }
  }
  ResourceSaver::save((Ref *)local_248,(String *)&local_e8,0);
  Ref<Resource>::unref((Ref<Resource> *)local_248);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_148);
  plVar66 = (long *)*plVar66;
  local_250 = local_250 + 1;
  if (plVar66 == (long *)0x0) goto LAB_0010402a;
  goto LAB_00103bd2;
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
  return (uint)CONCAT71(0x10ee,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ee,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ResourceImporterTextureAtlas::is_class_ptr(void*) const */

uint __thiscall
ResourceImporterTextureAtlas::is_class_ptr(ResourceImporterTextureAtlas *this,void *param_1)

{
  return (uint)CONCAT71(0x10ee,(undefined4 *)param_1 ==
                               &ResourceImporter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ee,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ee,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ee,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceImporterTextureAtlas::_getv(StringName const&, Variant&) const */

undefined8 ResourceImporterTextureAtlas::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterTextureAtlas::_setv(StringName const&, Variant const&) */

undefined8 ResourceImporterTextureAtlas::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterTextureAtlas::_validate_propertyv(PropertyInfo&) const */

void ResourceImporterTextureAtlas::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceImporterTextureAtlas::_property_can_revertv(StringName const&) const */

undefined8 ResourceImporterTextureAtlas::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceImporterTextureAtlas::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ResourceImporterTextureAtlas::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterTextureAtlas::_notificationv(int, bool) */

void ResourceImporterTextureAtlas::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceImporterTextureAtlas::can_import_threaded() const */

undefined8 ResourceImporterTextureAtlas::can_import_threaded(void)

{
  return 1;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ddf8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ddf8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ResourceImporterTextureAtlas::~ResourceImporterTextureAtlas() */

void __thiscall
ResourceImporterTextureAtlas::~ResourceImporterTextureAtlas(ResourceImporterTextureAtlas *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ddf8;
  Object::~Object((Object *)this);
  return;
}



/* ResourceImporterTextureAtlas::~ResourceImporterTextureAtlas() */

void __thiscall
ResourceImporterTextureAtlas::~ResourceImporterTextureAtlas(ResourceImporterTextureAtlas *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ddf8;
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
LAB_00104d33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104d33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00104d9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00104d9e:
  return &_get_class_namev()::_class_name_static;
}



/* ResourceImporterTextureAtlas::_get_class_namev() const */

undefined8 * ResourceImporterTextureAtlas::_get_class_namev(void)

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
LAB_00104e33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104e33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "ResourceImporterTextureAtlas");
      goto LAB_00104e9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterTextureAtlas");
LAB_00104e9e:
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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
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
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
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



/* void Ref<AtlasTexture>::instantiate<>() */

void __thiscall Ref<AtlasTexture>::instantiate<>(Ref<AtlasTexture> *this)

{
  char cVar1;
  AtlasTexture *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (AtlasTexture *)operator_new(0x318,"");
  AtlasTexture::AtlasTexture(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (AtlasTexture *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (AtlasTexture *)pOVar3) goto LAB_0010adf5;
    *(AtlasTexture **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010adf5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (AtlasTexture *)0x0) {
    return;
  }
LAB_0010adf5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<ArrayMesh>::instantiate<>() */

void __thiscall Ref<ArrayMesh>::instantiate<>(Ref<ArrayMesh> *this)

{
  char cVar1;
  ArrayMesh *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (ArrayMesh *)operator_new(0x430,"");
  ArrayMesh::ArrayMesh(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (ArrayMesh *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (ArrayMesh *)pOVar3) goto LAB_0010af25;
    *(ArrayMesh **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010af25;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (ArrayMesh *)0x0) {
    return;
  }
LAB_0010af25:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<MeshTexture>::instantiate<>() */

void __thiscall Ref<MeshTexture>::instantiate<>(Ref<MeshTexture> *this)

{
  char cVar1;
  MeshTexture *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (MeshTexture *)operator_new(0x300,"");
  MeshTexture::MeshTexture(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)this;
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (MeshTexture *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (MeshTexture *)pOVar3) goto LAB_0010b055;
    *(MeshTexture **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010b055;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (MeshTexture *)0x0) {
    return;
  }
LAB_0010b055:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
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



/* WARNING: Removing unreachable block (ram,0x0010b300) */
/* String vformat<String, int>(String const&, String const, int const) */

undefined8 * vformat<String,int>(undefined8 *param_1,bool *param_2,String *param_3,int param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d0 [8];
  undefined8 local_c8 [8];
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
  Array::Array(local_d0);
  iVar3 = (int)local_d0;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_c8,param_2);
  *param_1 = local_c8[0];
  local_c8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d0);
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* ResourceImporterTextureAtlas::get_class() const */

void ResourceImporterTextureAtlas::get_class(void)

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
    if (cVar5 != '\0') goto LAB_0010b83b;
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
      if (cVar5 != '\0') goto LAB_0010b83b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010b83b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterTextureAtlas::is_class(String const&) const */

undefined8 __thiscall
ResourceImporterTextureAtlas::is_class(ResourceImporterTextureAtlas *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010ba4b;
  }
  cVar5 = String::operator==(param_1,"ResourceImporterTextureAtlas");
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
      if (cVar5 != '\0') goto LAB_0010ba4b;
    }
    cVar5 = String::operator==(param_1,"ResourceImporter");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0010bb4e;
    }
  }
LAB_0010ba4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010bb4e:
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



/* ResourceImporterTextureAtlas::_initialize_classv() */

void ResourceImporterTextureAtlas::_initialize_classv(void)

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
    if (ResourceImporter::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00112010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00112008 != RefCounted::_bind_methods) {
        ResourceImporter::_bind_methods();
      }
      ResourceImporter::initialize_class()::initialized = '\x01';
    }
    local_58 = "ResourceImporter";
    local_68 = 0;
    local_50 = 0x10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterTextureAtlas";
    local_70 = 0;
    local_50 = 0x1c;
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
      goto LAB_0010c11c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010c11c:
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
  local_78 = "ResourceImporter";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceImporter";
  local_98 = 0;
  local_70 = 0x10;
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



/* ResourceImporterTextureAtlas::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
ResourceImporterTextureAtlas::_get_property_listv
          (ResourceImporterTextureAtlas *this,List *param_1,bool param_2)

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
    ResourceImporter::_get_property_listv((ResourceImporter *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ResourceImporterTextureAtlas";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceImporterTextureAtlas";
  local_98 = 0;
  local_70 = 0x1c;
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
  StringName::StringName((StringName *)&local_78,"ResourceImporterTextureAtlas",false);
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



/* Ref<Resource>::unref() */

void __thiscall Ref<Resource>::unref(Ref<Resource> *this)

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



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

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



/* CowData<Vector2>::_unref() */

void __thiscall CowData<Vector2>::_unref(CowData<Vector2> *this)

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



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<Vector2> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<Vector2>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorAtlasPacker::Chart>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorAtlasPacker::Chart>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<ResourceImporterTextureAtlas::PackData>::_copy_on_write() [clone .isra.0] [clone .cold]
    */

void CowData<ResourceImporterTextureAtlas::PackData>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorAtlasPacker::Chart::Face>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorAtlasPacker::Chart::Face>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
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
    lVar2 = 0;
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
    lVar2 = lVar7 * 8;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010cbd0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 8 - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar6 = uVar3 + 1;
  if (lVar6 == 0) goto LAB_0010cbd0;
  if (param_1 <= lVar7) {
    if ((lVar6 != lVar2) && (uVar5 = _realloc(this,lVar6), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == lVar2) {
LAB_0010cb5c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_0010cb01;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010cb5c;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  memset(puVar8 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0010cb01:
  puVar8[-1] = param_1;
  return 0;
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



/* CowData<Vector<Vector2> >::_unref() */

void __thiscall CowData<Vector<Vector2>>::_unref(CowData<Vector<Vector2>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
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
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
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
    lVar8 = 0;
    lVar2 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar8 * 4;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_0010d080:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 4 - 1;
  uVar3 = uVar3 | uVar3 >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar7 = uVar3 + 1;
  if (lVar7 == 0) goto LAB_0010d080;
  if (lVar8 < param_1) {
    if (lVar7 != lVar2) {
      if (lVar8 == 0) {
        puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
        if (puVar4 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar6 = puVar4 + 2;
        *puVar4 = 1;
        puVar4[1] = 0;
        *(undefined8 **)this = puVar6;
        goto LAB_0010cfb1;
      }
      uVar5 = _realloc(this,lVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
    }
    puVar6 = *(undefined8 **)this;
    if (puVar6 != (undefined8 *)0x0) {
LAB_0010cfb1:
      puVar6[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar7 != lVar2) && (uVar5 = _realloc(this,lVar7), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorAtlasPacker::Chart>::_unref() */

void __thiscall CowData<EditorAtlasPacker::Chart>::_unref(CowData<EditorAtlasPacker::Chart> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x18);
              *(undefined8 *)(lVar6 + 0x18) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x30;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<ResourceImporterTextureAtlas::PackData>::_unref() */

void __thiscall
CowData<ResourceImporterTextureAtlas::PackData>::_unref
          (CowData<ResourceImporterTextureAtlas::PackData> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar8 = 0;
        lVar7 = lVar2;
        do {
          if (*(long *)(lVar7 + 0x38) != 0) {
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              memdelete<Image>(*(Image **)(lVar7 + 0x38));
            }
          }
          CowData<Vector<Vector2>>::_unref((CowData<Vector<Vector2>> *)(lVar7 + 0x30));
          if (*(long *)(lVar7 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar7 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar7 + 0x20);
              *(undefined8 *)(lVar7 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x40;
        } while (lVar3 != lVar8);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<ResourceImporterTextureAtlas::PackData>::_realloc(long) */

undefined8 __thiscall
CowData<ResourceImporterTextureAtlas::PackData>::_realloc
          (CowData<ResourceImporterTextureAtlas::PackData> *this,long param_1)

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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CowData<EditorAtlasPacker::Chart::Face>::_unref() */

void CowData<EditorAtlasPacker::Chart::Face>::_unref(void)

{
  long *plVar1;
  long lVar2;
  long *in_RDI;
  
  if (*in_RDI == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*in_RDI + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *in_RDI = 0;
    return;
  }
  lVar2 = *in_RDI;
  *in_RDI = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* CowData<EditorAtlasPacker::Chart::Face>::_realloc(long) */

undefined8 __thiscall
CowData<EditorAtlasPacker::Chart::Face>::_realloc
          (CowData<EditorAtlasPacker::Chart::Face> *this,long param_1)

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
/* Error CowData<EditorAtlasPacker::Chart::Face>::resize<false>(long) */

undefined8 __thiscall
CowData<EditorAtlasPacker::Chart::Face>::resize<false>
          (CowData<EditorAtlasPacker::Chart::Face> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
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
    lVar2 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref();
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar7 * 0xc;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_0010d5f0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 0xc - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar6 = uVar3 + 1;
  if (lVar6 == 0) goto LAB_0010d5f0;
  if (param_1 <= lVar7) {
    if ((lVar6 != lVar2) && (uVar5 = _realloc(this,lVar6), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == lVar2) {
LAB_0010d57c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_0010d51f;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010d57c;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  memset((void *)((long)puVar8 + lVar7 * 0xc),0,(param_1 - lVar7) * 0xc);
LAB_0010d51f:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<Vector<Vector2> >::_realloc(long) */

undefined8 __thiscall
CowData<Vector<Vector2>>::_realloc(CowData<Vector<Vector2>> *this,long param_1)

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
/* Error CowData<Vector<Vector2> >::resize<false>(long) */

undefined8 __thiscall
CowData<Vector<Vector2>>::resize<false>(CowData<Vector<Vector2>> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
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
    lVar7 = 0;
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
    lVar7 = lVar4 * 0x10;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0010d950:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x10 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar9 = uVar8 + 1;
  if (lVar9 == 0) goto LAB_0010d950;
  uVar6 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
        if (lVar9 != lVar7) {
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
      CowData<Vector2>::_unref((CowData<Vector2> *)(lVar4 + 8 + uVar6 * 0x10));
      uVar6 = uVar6 + 1;
    }
    goto LAB_0010d9a6;
  }
  if (lVar9 == lVar7) {
LAB_0010d8c3:
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
LAB_0010d9a6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar5[-1];
    if (param_1 <= lVar4) goto LAB_0010d821;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010d8c3;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar4 = 0;
  }
  puVar2 = puVar5 + lVar4 * 2;
  do {
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  } while (puVar2 != puVar5 + param_1 * 2);
LAB_0010d821:
  puVar5[-1] = param_1;
  return 0;
}



/* CowData<EditorAtlasPacker::Chart>::_realloc(long) */

undefined8 __thiscall
CowData<EditorAtlasPacker::Chart>::_realloc(CowData<EditorAtlasPacker::Chart> *this,long param_1)

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
/* Error CowData<EditorAtlasPacker::Chart>::resize<false>(long) */

undefined8 __thiscall
CowData<EditorAtlasPacker::Chart>::resize<false>
          (CowData<EditorAtlasPacker::Chart> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
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
    lVar10 = 0;
    lVar8 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar10 * 0x30;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x30 == 0) {
LAB_0010dcf0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x30 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_0010dcf0;
  uVar12 = param_1;
  if (param_1 <= lVar10) {
    while (lVar10 = *(long *)this, lVar10 != 0) {
      if (*(ulong *)(lVar10 + -8) <= uVar12) {
        if (lVar11 != lVar8) {
          uVar6 = _realloc(this,lVar11);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
          lVar10 = *(long *)this;
          if (lVar10 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar10 + -8) = param_1;
        return 0;
      }
      lVar10 = lVar10 + uVar12 * 0x30;
      if (*(long *)(lVar10 + 0x18) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar10 + 0x18) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar10 + 0x18);
          *(undefined8 *)(lVar10 + 0x18) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      CowData<Vector2>::_unref((CowData<Vector2> *)(lVar10 + 8));
      uVar12 = uVar12 + 1;
    }
    goto LAB_0010dd46;
  }
  if (lVar11 == lVar8) {
LAB_0010dc63:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010dd46:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar10 = puVar7[-1];
    if (param_1 <= lVar10) goto LAB_0010db91;
  }
  else {
    if (lVar10 != 0) {
      uVar6 = _realloc(this,lVar11);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010dc63;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar10 = 0;
  }
  puVar4 = puVar7 + lVar10 * 6;
  do {
    puVar4[1] = 0;
    puVar5 = puVar4 + 6;
    puVar4[3] = 0;
    *(undefined1 *)(puVar4 + 4) = 0;
    *(undefined8 *)((long)puVar4 + 0x24) = 0;
    *(undefined1 *)((long)puVar4 + 0x2c) = 0;
    puVar4 = puVar5;
  } while (puVar5 != puVar7 + param_1 * 6);
LAB_0010db91:
  puVar7[-1] = param_1;
  return 0;
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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceImporterTextureAtlas::~ResourceImporterTextureAtlas() */

void __thiscall
ResourceImporterTextureAtlas::~ResourceImporterTextureAtlas(ResourceImporterTextureAtlas *this)

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


