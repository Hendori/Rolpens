
/* ResourceImporterLayeredTexture::get_preset_count() const */

undefined8 ResourceImporterLayeredTexture::get_preset_count(void)

{
  return 0;
}



/* ResourceImporterLayeredTexture::get_recognized_extensions(List<String, DefaultAllocator>*) const
    */

void __thiscall
ResourceImporterLayeredTexture::get_recognized_extensions
          (ResourceImporterLayeredTexture *this,List *param_1)

{
  ImageLoader::get_recognized_extensions(param_1);
  return;
}



/* ResourceImporterLayeredTexture::~ResourceImporterLayeredTexture() */

void __thiscall
ResourceImporterLayeredTexture::~ResourceImporterLayeredTexture
          (ResourceImporterLayeredTexture *this)

{
  if (singleton != this) {
    *(undefined ***)this = &PTR__initialize_classv_0010cb70;
    Object::~Object((Object *)this);
    return;
  }
  singleton = (ResourceImporterLayeredTexture *)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010cb70;
  Object::~Object((Object *)this);
  return;
}



/* ResourceImporterLayeredTexture::~ResourceImporterLayeredTexture() */

void __thiscall
ResourceImporterLayeredTexture::~ResourceImporterLayeredTexture
          (ResourceImporterLayeredTexture *this)

{
  if (this == singleton) {
    singleton = (ResourceImporterLayeredTexture *)0x0;
  }
  *(undefined ***)this = &PTR__initialize_classv_0010cb70;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ResourceImporterLayeredTexture::get_preset_name(int) const */

undefined8 ResourceImporterLayeredTexture::get_preset_name(int param_1)

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



/* ResourceImporterLayeredTexture::get_resource_type() const */

void ResourceImporterLayeredTexture::get_resource_type(void)

{
  uint uVar1;
  long lVar2;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(in_RSI + 0x17c);
  if (uVar1 == 2) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else if (uVar1 < 3) {
    if (uVar1 == 0) {
      *(undefined8 *)in_RDI = 0;
      String::parse_latin1(in_RDI);
    }
    else {
      *(undefined8 *)in_RDI = 0;
      String::parse_latin1(in_RDI);
    }
  }
  else if (uVar1 == 3) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    _err_print_error("get_resource_type","editor/import/resource_importer_layered_texture.cpp",0x76,
                     "Method/function failed. Returning: String()",0,0);
    *(undefined8 *)in_RDI = 0;
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterLayeredTexture::get_save_extension() const */

void ResourceImporterLayeredTexture::get_save_extension(void)

{
  uint uVar1;
  long lVar2;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(in_RSI + 0x17c);
  if (uVar1 == 2) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else if (uVar1 < 3) {
    if (uVar1 == 0) {
      *(undefined8 *)in_RDI = 0;
      String::parse_latin1(in_RDI);
    }
    else {
      *(undefined8 *)in_RDI = 0;
      String::parse_latin1(in_RDI);
    }
  }
  else if (uVar1 == 3) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    _err_print_error("get_save_extension","editor/import/resource_importer_layered_texture.cpp",100,
                     "Method/function failed. Returning: String()",0,0);
    *(undefined8 *)in_RDI = 0;
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterLayeredTexture::get_visible_name() const */

void ResourceImporterLayeredTexture::get_visible_name(void)

{
  uint uVar1;
  long lVar2;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(in_RSI + 0x17c);
  if (uVar1 == 2) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else if (uVar1 < 3) {
    if (uVar1 == 0) {
      *(undefined8 *)in_RDI = 0;
      String::parse_latin1(in_RDI);
    }
    else {
      *(undefined8 *)in_RDI = 0;
      String::parse_latin1(in_RDI);
    }
  }
  else if (uVar1 == 3) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    _err_print_error("get_visible_name","editor/import/resource_importer_layered_texture.cpp",0x4d,
                     "Method/function failed. Returning: \"\"",0,0);
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterLayeredTexture::get_importer_name() const */

void ResourceImporterLayeredTexture::get_importer_name(void)

{
  uint uVar1;
  long lVar2;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(in_RSI + 0x17c);
  if (uVar1 == 2) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else if (uVar1 < 3) {
    if (uVar1 == 0) {
      *(undefined8 *)in_RDI = 0;
      String::parse_latin1(in_RDI);
    }
    else {
      *(undefined8 *)in_RDI = 0;
      String::parse_latin1(in_RDI);
    }
  }
  else if (uVar1 == 3) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    _err_print_error("get_importer_name","editor/import/resource_importer_layered_texture.cpp",0x3a,
                     "Method/function failed. Returning: \"\"",0,0);
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* ResourceImporterLayeredTexture::get_import_settings_string() const */

ResourceImporterLayeredTexture * __thiscall
ResourceImporterLayeredTexture::get_import_settings_string(ResourceImporterLayeredTexture *this)

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



/* ResourceImporterLayeredTexture::get_option_visibility(String const&, String const&,
   HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) const */

ulong __thiscall
ResourceImporterLayeredTexture::get_option_visibility
          (ResourceImporterLayeredTexture *this,String *param_1,String *param_2,HashMap *param_3)

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
  code *pcVar35;
  bool bVar36;
  char cVar37;
  int iVar38;
  uint uVar39;
  long lVar40;
  undefined7 uVar42;
  ulong uVar41;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar37 = String::operator==(param_2,"compress/lossy_quality");
  uVar42 = (undefined7)((ulong)param_3 >> 8);
  if (cVar37 != '\0') {
    StringName::StringName((StringName *)&local_48,"compress/mode",false);
    if ((*(long *)(param_3 + 8) != 0) && (*(int *)(param_3 + 0x2c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x28) * 4);
      uVar41 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x28) * 8);
      if (local_48 == 0) {
        uVar39 = StringName::get_empty_hash();
      }
      else {
        uVar39 = *(uint *)(local_48 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar39 * lVar2;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar41;
      lVar40 = SUB168(auVar7 * auVar23,8);
      uVar43 = *(uint *)(*(long *)(param_3 + 0x10) + lVar40 * 4);
      iVar38 = SUB164(auVar7 * auVar23,8);
      if (uVar43 != 0) {
        uVar44 = 0;
        do {
          if ((uVar39 == uVar43) &&
             (*(long *)(*(long *)(*(long *)(param_3 + 8) + lVar40 * 8) + 0x10) == local_48))
          goto LAB_00100ef3;
          uVar44 = uVar44 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar38 + 1) * lVar2;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar41;
          lVar40 = SUB168(auVar8 * auVar24,8);
          uVar43 = *(uint *)(*(long *)(param_3 + 0x10) + lVar40 * 4);
          iVar38 = SUB164(auVar8 * auVar24,8);
        } while ((uVar43 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar43 * lVar2, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar41, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar1 + iVar38) - SUB164(auVar9 * auVar25,8)) * lVar2,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar41, uVar44 <= SUB164(auVar10 * auVar26,8)));
        cVar37 = '\0';
LAB_00100ef3:
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        if (cVar37 != '\0') {
          StringName::StringName((StringName *)&local_50,"compress/mode",false);
          if ((*(long *)(param_3 + 8) != 0) && (*(int *)(param_3 + 0x2c) != 0)) {
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x28) * 4);
            uVar41 = CONCAT44(0,uVar1);
            lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x28) * 8);
            if (local_50 == 0) {
              uVar39 = StringName::get_empty_hash();
            }
            else {
              uVar39 = *(uint *)(local_50 + 0x20);
            }
            if (uVar39 == 0) {
              uVar39 = 1;
            }
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)uVar39 * lVar2;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar41;
            lVar40 = SUB168(auVar15 * auVar31,8);
            uVar43 = *(uint *)(*(long *)(param_3 + 0x10) + lVar40 * 4);
            uVar44 = SUB164(auVar15 * auVar31,8);
            if (uVar43 != 0) {
              uVar45 = 0;
              do {
                if ((uVar39 == uVar43) &&
                   (*(long *)(*(long *)(*(long *)(param_3 + 8) + lVar40 * 8) + 0x10) == local_50)) {
                  iVar38 = Variant::operator_cast_to_int
                                     ((Variant *)
                                      (*(long *)(*(long *)(param_3 + 8) + (ulong)uVar44 * 8) + 0x18)
                                     );
                  uVar41 = CONCAT71(uVar42,iVar38 == 1);
                  if ((StringName::configured != '\0') && (local_50 != 0)) {
                    StringName::unref();
                  }
                  goto LAB_00100d60;
                }
                uVar45 = uVar45 + 1;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = (ulong)(uVar44 + 1) * lVar2;
                auVar32._8_8_ = 0;
                auVar32._0_8_ = uVar41;
                lVar40 = SUB168(auVar16 * auVar32,8);
                uVar43 = *(uint *)(*(long *)(param_3 + 0x10) + lVar40 * 4);
                uVar44 = SUB164(auVar16 * auVar32,8);
              } while ((uVar43 != 0) &&
                      (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar43 * lVar2, auVar33._8_8_ = 0,
                      auVar33._0_8_ = uVar41, auVar18._8_8_ = 0,
                      auVar18._0_8_ =
                           (ulong)((uVar1 + uVar44) - SUB164(auVar17 * auVar33,8)) * lVar2,
                      auVar34._8_8_ = 0, auVar34._0_8_ = uVar41,
                      uVar45 <= SUB164(auVar18 * auVar34,8)));
            }
          }
          goto LAB_00100ec0;
        }
        goto LAB_00100a6f;
      }
    }
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
LAB_00100a6f:
  cVar37 = String::operator==(param_2,"compress/high_quality");
  if ((cVar37 != '\0') ||
     (cVar37 = String::operator==(param_2,"compress/hdr_compression"), cVar37 != '\0')) {
    StringName::StringName((StringName *)&local_48,"compress/mode",false);
    if ((*(long *)(param_3 + 8) != 0) && (*(int *)(param_3 + 0x2c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x28) * 4);
      uVar41 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x28) * 8);
      if (local_48 == 0) {
        uVar39 = StringName::get_empty_hash();
      }
      else {
        uVar39 = *(uint *)(local_48 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar39 * lVar2;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar41;
      lVar40 = SUB168(auVar3 * auVar19,8);
      uVar43 = *(uint *)(*(long *)(param_3 + 0x10) + lVar40 * 4);
      iVar38 = SUB164(auVar3 * auVar19,8);
      if (uVar43 != 0) {
        uVar44 = 0;
        do {
          if ((uVar39 == uVar43) &&
             (*(long *)(*(long *)(*(long *)(param_3 + 8) + lVar40 * 8) + 0x10) == local_48)) {
            bVar36 = true;
            goto LAB_00100d8a;
          }
          uVar44 = uVar44 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar38 + 1) * lVar2;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar41;
          lVar40 = SUB168(auVar4 * auVar20,8);
          uVar43 = *(uint *)(*(long *)(param_3 + 0x10) + lVar40 * 4);
          iVar38 = SUB164(auVar4 * auVar20,8);
        } while ((uVar43 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar43 * lVar2, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar41, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar1 + iVar38) - SUB164(auVar5 * auVar21,8)) * lVar2,
                auVar22._8_8_ = 0, auVar22._0_8_ = uVar41, uVar44 <= SUB164(auVar6 * auVar22,8)));
        bVar36 = false;
LAB_00100d8a:
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        if (bVar36) {
          StringName::StringName((StringName *)&local_48,"compress/mode",false);
          if ((*(long *)(param_3 + 8) != 0) && (*(int *)(param_3 + 0x2c) != 0)) {
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_3 + 0x28) * 4);
            uVar41 = CONCAT44(0,uVar1);
            lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_3 + 0x28) * 8);
            if (local_48 == 0) {
              uVar39 = StringName::get_empty_hash();
            }
            else {
              uVar39 = *(uint *)(local_48 + 0x20);
            }
            if (uVar39 == 0) {
              uVar39 = 1;
            }
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar39 * lVar2;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar41;
            lVar40 = SUB168(auVar11 * auVar27,8);
            uVar43 = *(uint *)(*(long *)(param_3 + 0x10) + lVar40 * 4);
            uVar44 = SUB164(auVar11 * auVar27,8);
            if (uVar43 != 0) {
              uVar45 = 0;
              do {
                if ((uVar39 == uVar43) &&
                   (*(long *)(*(long *)(*(long *)(param_3 + 8) + lVar40 * 8) + 0x10) == local_48)) {
                  iVar38 = Variant::operator_cast_to_int
                                     ((Variant *)
                                      (*(long *)(*(long *)(param_3 + 8) + (ulong)uVar44 * 8) + 0x18)
                                     );
                  uVar41 = CONCAT71(uVar42,iVar38 == 2);
                  if ((StringName::configured != '\0') && (local_48 != 0)) {
                    StringName::unref();
                  }
                  goto LAB_00100d60;
                }
                uVar45 = uVar45 + 1;
                auVar12._8_8_ = 0;
                auVar12._0_8_ = (ulong)(uVar44 + 1) * lVar2;
                auVar28._8_8_ = 0;
                auVar28._0_8_ = uVar41;
                lVar40 = SUB168(auVar12 * auVar28,8);
                uVar43 = *(uint *)(*(long *)(param_3 + 0x10) + lVar40 * 4);
                uVar44 = SUB164(auVar12 * auVar28,8);
              } while ((uVar43 != 0) &&
                      (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar43 * lVar2, auVar29._8_8_ = 0,
                      auVar29._0_8_ = uVar41, auVar14._8_8_ = 0,
                      auVar14._0_8_ =
                           (ulong)((uVar1 + uVar44) - SUB164(auVar13 * auVar29,8)) * lVar2,
                      auVar30._8_8_ = 0, auVar30._0_8_ = uVar41,
                      uVar45 <= SUB164(auVar14 * auVar30,8)));
            }
          }
LAB_00100ec0:
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar35 = (code *)invalidInstructionException();
          (*pcVar35)();
        }
        goto LAB_00100d5b;
      }
    }
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
  }
LAB_00100d5b:
  uVar41 = 1;
LAB_00100d60:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar41 & 0xffffffff;
}



/* ResourceImporterLayeredTexture::ResourceImporterLayeredTexture(bool) */

void __thiscall
ResourceImporterLayeredTexture::ResourceImporterLayeredTexture
          (ResourceImporterLayeredTexture *this,bool param_1)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0010ce30;
  if (param_1) {
    singleton = this;
  }
  *(undefined4 *)(this + 0x17c) = 1;
  return;
}



/* ResourceImporterLayeredTexture::get_import_options(String const&,
   List<ResourceImporter::ImportOption, DefaultAllocator>*, int) const */

void ResourceImporterLayeredTexture::get_import_options(String *param_1,List *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined4 in_register_00000014;
  List<ResourceImporter::ImportOption,DefaultAllocator> *this;
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
  Variant::Variant((Variant *)local_a8,1);
  local_e8 = 0;
  local_d8 = "Lossless,Lossy,VRAM Compressed,VRAM Uncompressed,Basis Universal";
  local_f0 = 0;
  local_d0 = 0x40;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "compress/mode";
  local_d0 = 0xd;
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
LAB_0010125b:
    local_b0 = 0x4006;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 0x4006;
    if (local_c0 != 0x11) goto LAB_0010125b;
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
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
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
  lVar4 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  lVar4 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,false);
  local_d8 = "";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "compress/high_quality";
  local_d0 = 0x15;
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
LAB_00101553:
    local_b0 = 6;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_00101553;
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
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*(long *)this == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 0xe) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  puVar5[0xc] = 0;
  *(undefined8 *)(puVar5 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar5 + 0x12) = (undefined1  [16])0x0;
  *puVar5 = local_88[0];
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_78);
  puVar5[6] = local_70;
  if (*(long *)(puVar5 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_68);
  }
  puVar5[10] = local_60;
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_58);
  uVar3 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar5 + 0x16) = *(long *)this;
  plVar1 = *(long **)this;
  *(undefined8 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x14) = uVar3;
  if (plVar1[1] != 0) {
    *(undefined4 **)(plVar1[1] + 0x48) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar4 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  lVar4 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,_LC39);
  local_d8 = "0,1,0.01";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 8;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "compress/lossy_quality";
  local_d0 = 0x16;
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
LAB_0010190b:
    local_b0 = 6;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_0010190b;
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
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*(long *)this == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 0xe) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  puVar5[0xc] = 0;
  *(undefined8 *)(puVar5 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar5 + 0x12) = (undefined1  [16])0x0;
  *puVar5 = local_88[0];
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_78);
  puVar5[6] = local_70;
  if (*(long *)(puVar5 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_68);
  }
  puVar5[10] = local_60;
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_58);
  uVar3 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar5 + 0x16) = *(long *)this;
  plVar1 = *(long **)this;
  *(undefined8 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x14) = uVar3;
  if (plVar1[1] != 0) {
    *(undefined4 **)(plVar1[1] + 0x48) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar4 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  lVar4 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,1);
  local_d8 = "Disabled,Opaque Only,Always";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "compress/hdr_compression";
  local_d0 = 0x18;
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
LAB_00101cbb:
    local_b0 = 6;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_00101cbb;
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
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
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
  lVar4 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  lVar4 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,0);
  local_d8 = "sRGB Friendly,Optimized,Normal Map (RG Channels)";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0x30;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "compress/channel_pack";
  local_d0 = 0x15;
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
LAB_00101f6b:
    local_b0 = 6;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_00101f6b;
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
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*(long *)this == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 0xe) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  puVar5[0xc] = 0;
  *(undefined8 *)(puVar5 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar5 + 0x12) = (undefined1  [16])0x0;
  *puVar5 = local_88[0];
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_78);
  puVar5[6] = local_70;
  if (*(long *)(puVar5 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_68);
  }
  puVar5[10] = local_60;
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_58);
  uVar3 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar5 + 0x16) = *(long *)this;
  plVar1 = *(long **)this;
  *(undefined8 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x14) = uVar3;
  if (plVar1[1] != 0) {
    *(undefined4 **)(plVar1[1] + 0x48) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar4 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  lVar4 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
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
  local_d8 = "mipmaps/generate";
  local_d0 = 0x10;
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
LAB_0010231b:
    local_b0 = 6;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_0010231b;
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
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
  local_68 = 0;
  local_70 = local_c0;
  if (local_b8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  }
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*(long *)this == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x60,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 0xe) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  puVar5[0xc] = 0;
  *(undefined8 *)(puVar5 + 0x16) = 0;
  *(undefined1 (*) [16])(puVar5 + 0x12) = (undefined1  [16])0x0;
  *puVar5 = local_88[0];
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_80);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_78);
  puVar5[6] = local_70;
  if (*(long *)(puVar5 + 8) != local_68) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_68);
  }
  puVar5[10] = local_60;
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_58);
  uVar3 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar5 + 0x16) = *(long *)this;
  plVar1 = *(long **)this;
  *(undefined8 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x14) = uVar3;
  if (plVar1[1] != 0) {
    *(undefined4 **)(plVar1[1] + 0x48) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  lVar4 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  lVar4 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,-1);
  local_d8 = "-1,256";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 6;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "mipmaps/limit";
  local_d0 = 0xd;
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
LAB_001026cb:
    local_b0 = 6;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_001026cb;
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
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
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
  lVar4 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  lVar4 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  iVar2 = *(int *)(param_1 + 0x17c);
  if ((iVar2 == 0) || (iVar2 == 3)) {
    Variant::Variant((Variant *)local_a8,8);
    local_e8 = 0;
    local_f0 = 0;
    local_d8 = "1,256,1";
    local_d0 = 7;
    String::parse_latin1((StrRange *)&local_f0);
    local_f8 = 0;
    local_d8 = "slices/horizontal";
    local_d0 = 0x11;
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
LAB_00102c0b:
      local_b0 = 6;
      StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
      local_b0 = 6;
      if (local_c0 != 0x11) goto LAB_00102c0b;
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
    StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
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
    lVar4 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_c8 != 0)) {
      StringName::unref();
    }
    lVar4 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_a8,8);
    local_d8 = "1,256,1";
    local_e8 = 0;
    local_f0 = 0;
    local_d0 = 7;
    String::parse_latin1((StrRange *)&local_f0);
    local_f8 = 0;
    local_d8 = "slices/vertical";
    local_d0 = 0xf;
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
LAB_00102ebb:
      local_b0 = 6;
      StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
      local_b0 = 6;
      if (local_c0 != 0x11) goto LAB_00102ebb;
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
    StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
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
    lVar4 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_c8 != 0)) {
      StringName::unref();
    }
    lVar4 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar2 = *(int *)(param_1 + 0x17c);
  }
  if (1 < iVar2 - 1U) goto LAB_0010286c;
  Variant::Variant((Variant *)local_a8,1);
  local_d8 = "1x6,2x3,3x2,6x1";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0xf;
  String::parse_latin1((StrRange *)&local_f0);
  local_f8 = 0;
  local_d8 = "slices/arrangement";
  local_d0 = 0x12;
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
LAB_00103793:
    local_b0 = 6;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_00103793;
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
  StringName::StringName((StringName *)&local_78,(StringName *)&local_c8);
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
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  lVar4 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  lVar4 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  if ((StringName::configured != '\0') && (local_e8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (*(int *)(param_1 + 0x17c) == 2) {
    Variant::Variant((Variant *)local_a8,1);
    local_d8 = "Horizontal,Vertical";
    local_e0 = 0;
    local_e8 = 0;
    local_d0 = 0x13;
    String::parse_latin1((StrRange *)&local_e8);
    local_f0 = 0;
    local_d8 = "slices/layout";
    local_d0 = 0xd;
    String::parse_latin1((StrRange *)&local_f0);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_d8,2,(StrRange *)&local_f0,2,(StrRange *)&local_e8,6,&local_e0
              );
    local_80 = 0;
    local_88[0] = local_d8._0_4_;
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
    List<ResourceImporter::ImportOption,DefaultAllocator>::push_back(this,(ImportOption *)local_88);
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
    local_d8 = "1,1024,1,or_greater";
    local_e0 = 0;
    local_e8 = 0;
    local_d0 = 0x13;
    String::parse_latin1((StrRange *)&local_e8);
    local_f0 = 0;
    local_d8 = "slices/amount";
    local_d0 = 0xd;
    String::parse_latin1((StrRange *)&local_f0);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_d8,2,(StrRange *)&local_f0,1,(StrRange *)&local_e8,6,&local_e0
              );
    local_80 = 0;
    local_88[0] = local_d8._0_4_;
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
    List<ResourceImporter::ImportOption,DefaultAllocator>::push_back(this,(ImportOption *)local_88);
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
  }
LAB_0010286c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterLayeredTexture::are_import_settings_valid(String const&, Dictionary const&) const
    */

ulong __thiscall
ResourceImporterLayeredTexture::are_import_settings_valid
          (ResourceImporterLayeredTexture *this,String *param_1,Dictionary *param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  Variant *this_00;
  undefined7 extraout_var;
  String *pSVar7;
  size_t sVar8;
  ulong uVar9;
  undefined **ppuVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  long in_FS_OFFSET;
  long local_88;
  long local_80 [2];
  size_t local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,"vram_texture");
  uVar6 = Dictionary::has((Variant *)param_2);
  uVar9 = (ulong)uVar6;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((char)uVar6 != '\0') {
    Variant::Variant((Variant *)local_58,"vram_texture");
    this_00 = (Variant *)Dictionary::operator[]((Variant *)param_2);
    bVar3 = Variant::operator_cast_to_bool(this_00);
    uVar11 = CONCAT71(extraout_var,bVar3) & 0xffffffff;
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((char)uVar11 != '\0') {
      local_70 = 0;
      Variant::Variant((Variant *)local_58,"imported_formats");
      cVar4 = Dictionary::has((Variant *)param_2);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar4 != '\0') {
        Variant::Variant((Variant *)local_58,"imported_formats");
        Dictionary::operator[]((Variant *)param_2);
        Variant::operator_cast_to_Vector((Variant *)&local_68);
        if (local_60 != 0) {
          CowData<String>::_unref((CowData<String> *)&local_70);
          local_70 = local_60;
          local_60 = 0;
        }
        CowData<String>::_unref((CowData<String> *)&local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      uVar9 = uVar11;
      if (compression_formats != (undefined *)0x0) {
        ppuVar10 = &compression_formats;
        pcVar12 = compression_formats;
        do {
          local_80[0] = 0;
          local_60 = strlen(pcVar12);
          local_68 = pcVar12;
          String::parse_latin1((StrRange *)local_80);
          operator+((char *)&local_88,(String *)"rendering/textures/vram_compression/import_");
          lVar13 = local_80[0];
          if (local_80[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_80[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80[0] = 0;
              Memory::free_static((void *)(lVar13 + -0x10),false);
            }
          }
          pSVar7 = (String *)ProjectSettings::get_singleton();
          cVar4 = ProjectSettings::has_setting(pSVar7);
          if (cVar4 == '\0') {
            operator+((char *)&local_68,(String *)"Setting for imported format not found: ");
            _err_print_error("are_import_settings_valid",
                             "editor/import/resource_importer_layered_texture.cpp",0x1cb,
                             (StringName *)&local_68,0,1);
            pcVar12 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_68 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar12 + -0x10,false);
              }
            }
          }
          else {
            ProjectSettings::get_singleton();
            StringName::StringName((StringName *)&local_68,(String *)&local_88,false);
            ProjectSettings::get_setting_with_override((StringName *)local_58);
            bVar5 = Variant::operator_cast_to_bool((Variant *)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
              StringName::unref();
            }
            if (bVar5) {
              local_80[0] = 0;
              pcVar12 = *ppuVar10;
              sVar8 = 0;
              if (pcVar12 != (char *)0x0) {
                sVar8 = strlen(pcVar12);
              }
              local_68 = pcVar12;
              local_60 = sVar8;
              String::parse_latin1((StrRange *)local_80);
              sVar8 = local_70;
              if (((local_70 == 0) || (*(long *)(local_70 - 8) == 0)) ||
                 (*(long *)(local_70 - 8) < 1)) {
LAB_00103ea0:
                lVar13 = local_80[0];
                if (local_80[0] != 0) {
                  LOCK();
                  plVar1 = (long *)(local_80[0] + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_80[0] = 0;
                    Memory::free_static((void *)(lVar13 + -0x10),false);
                  }
                }
                uVar9 = 0;
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                CowData<String>::_unref((CowData<String> *)&local_70);
                goto LAB_00103b7b;
              }
              lVar13 = 0;
              while( true ) {
                cVar4 = String::operator==((String *)(sVar8 + lVar13 * 8),(String *)local_80);
                lVar2 = local_80[0];
                if (cVar4 != '\0') break;
                lVar13 = lVar13 + 1;
                if (*(long *)(sVar8 - 8) <= lVar13) goto LAB_00103ea0;
              }
              if (local_80[0] != 0) {
                LOCK();
                plVar1 = (long *)(local_80[0] + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_80[0] = 0;
                  Memory::free_static((void *)(lVar2 + -0x10),false);
                }
              }
            }
          }
          lVar13 = local_88;
          if (local_88 != 0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = 0;
              Memory::free_static((void *)(lVar13 + -0x10),false);
            }
          }
          pcVar12 = ppuVar10[1];
          ppuVar10 = ppuVar10 + 1;
        } while (pcVar12 != (char *)0x0);
        uVar9 = (ulong)bVar3;
      }
      CowData<String>::_unref((CowData<String> *)&local_70);
    }
  }
LAB_00103b7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<Image> >::_ref(CowData<Ref<Image> > const&) [clone .part.0] */

void __thiscall CowData<Ref<Image>>::_ref(CowData<Ref<Image>> *this,CowData *param_1)

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



/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Image>>::_copy_on_write(CowData<Ref<Image>> *this)

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



/* Vector<Ref<Image> >::push_back(Ref<Image>) [clone .isra.0] */

void __thiscall Vector<Ref<Image>>::push_back(Vector<Ref<Image>> *this,long *param_2)

{
  long *plVar1;
  Image *pIVar2;
  Image *pIVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar5 = CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>> *)(this + 8),lVar6);
  if (iVar5 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar7 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8);
    lVar7 = lVar6 + -1;
    if (-1 < lVar7) {
      CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)(this + 8));
      pIVar2 = (Image *)*param_2;
      plVar1 = (long *)(*(long *)(this + 8) + lVar7 * 8);
      pIVar3 = (Image *)*plVar1;
      if (pIVar2 == pIVar3) {
        return;
      }
      *plVar1 = (long)pIVar2;
      if ((pIVar2 != (Image *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *plVar1 = 0;
      }
      if (pIVar3 == (Image *)0x0) {
        return;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') {
        return;
      }
      memdelete<Image>(pIVar3);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceImporterLayeredTexture::_save_tex(Vector<Ref<Image> >, String const&, int, float,
   Image::CompressMode, Image::CompressSource, Image::UsedChannels, bool, bool) */

void ResourceImporterLayeredTexture::_save_tex
               (long param_1,long param_2,int param_3,uint param_4,undefined4 param_5,
               undefined8 param_6,undefined4 param_7,char param_8,char param_9)

{
  CowData<Ref<Image>> *pCVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  code *pcVar5;
  Object *pOVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  Color *pCVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [12];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint local_214;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  Object *local_c0;
  Vector<Ref<Image>> local_b8 [8];
  long local_b0 [2];
  long local_a0;
  Object *local_98;
  long local_90;
  Object *local_88;
  undefined8 local_80 [2];
  undefined8 local_70;
  float local_68;
  undefined1 local_64 [12];
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar20 = *(long *)(param_2 + 8);
  local_b0[0] = 0;
  if (*(int *)(param_1 + 0x17c) != 3) {
    pCVar1 = (CowData<Ref<Image>> *)(param_2 + 8);
    lVar17 = 0;
    while (lVar20 != 0) {
      while( true ) {
        if (*(long *)(lVar20 + -8) <= lVar17) goto LAB_001043f3;
        if (param_9 != '\0') {
          CowData<Ref<Image>>::_copy_on_write(pCVar1);
          Image::resize_to_po2(*(undefined8 *)(*(long *)(param_2 + 8) + lVar17 * 8),0,1);
          lVar20 = *(long *)(param_2 + 8);
        }
        if (param_8 != '\0') break;
        if (lVar20 == 0) goto LAB_00104738;
        lVar20 = *(long *)(lVar20 + -8);
        if (lVar20 <= lVar17) goto LAB_00104759;
        CowData<Ref<Image>>::_copy_on_write(pCVar1);
        lVar17 = lVar17 + 1;
        Image::clear_mipmaps();
        lVar20 = *(long *)(param_2 + 8);
        if (lVar20 == 0) goto LAB_001043f3;
      }
      if (lVar20 == 0) {
LAB_00104738:
        lVar20 = 0;
        goto LAB_00104759;
      }
      lVar20 = *(long *)(lVar20 + -8);
      if (lVar20 <= lVar17) goto LAB_00104759;
      CowData<Ref<Image>>::_copy_on_write(pCVar1);
      lVar20 = lVar17 * 8;
      lVar17 = lVar17 + 1;
      Image::generate_mipmaps(SUB81(*(undefined8 *)(*(long *)(param_2 + 8) + lVar20),0));
      lVar20 = *(long *)(param_2 + 8);
    }
LAB_001043f3:
    lVar17 = 0;
    goto LAB_001043fd;
  }
  lVar17 = 0;
  pCVar1 = (CowData<Ref<Image>> *)(param_2 + 8);
  if (lVar20 == 0) {
    if (param_8 == '\0') goto LAB_001043f3;
  }
  else {
    do {
      if (*(long *)(lVar20 + -8) <= lVar17) {
        if (param_8 == '\0') goto LAB_001043f3;
        local_a0 = 0;
        CowData<Ref<Image>>::_ref((CowData<Ref<Image>> *)&local_a0,(CowData *)(param_2 + 8));
        if (*(long *)(param_2 + 8) == 0) goto LAB_00104878;
        lVar20 = *(long *)(*(long *)(param_2 + 8) + -8);
        if (lVar20 < 1) goto LAB_0010487b;
        iVar9 = Image::get_width();
        if (*(long *)(param_2 + 8) == 0) goto LAB_00104878;
        lVar20 = *(long *)(*(long *)(param_2 + 8) + -8);
        if (lVar20 < 1) goto LAB_0010487b;
        uVar10 = Image::get_height();
        auVar32._8_4_ = local_64._8_4_;
        auVar32._0_8_ = local_64._0_8_;
        lVar20 = *(long *)(param_2 + 8);
        if (lVar20 == 0) {
          bVar4 = false;
          iVar11 = 0;
        }
        else {
          iVar11 = (int)*(undefined8 *)(lVar20 + -8);
          bVar4 = 1 < iVar11;
        }
        if ((1 < (int)uVar10 || 1 < iVar9) || (local_64 = auVar32, bVar4)) goto LAB_00104a9d;
        goto LAB_00105247;
      }
      CowData<Ref<Image>>::_copy_on_write(pCVar1);
      cVar8 = Image::has_mipmaps();
      if (cVar8 != '\0') {
        if (*(long *)(param_2 + 8) == 0) {
LAB_001048c0:
          lVar20 = 0;
        }
        else {
          lVar20 = *(long *)(*(long *)(param_2 + 8) + -8);
          if (lVar17 < lVar20) {
            CowData<Ref<Image>>::_copy_on_write(pCVar1);
            Image::clear_mipmaps();
            goto LAB_0010480a;
          }
        }
LAB_00104759:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar17,lVar20,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
LAB_0010480a:
      lVar20 = *(long *)(param_2 + 8);
      if (param_9 != '\0') {
        if (lVar20 == 0) goto LAB_001048c0;
        lVar20 = *(long *)(lVar20 + -8);
        if (lVar20 <= lVar17) goto LAB_00104759;
        CowData<Ref<Image>>::_copy_on_write(pCVar1);
        Image::resize_to_po2(*(undefined8 *)(*(long *)(param_2 + 8) + lVar17 * 8),0,1);
        lVar20 = *(long *)(param_2 + 8);
      }
      lVar17 = lVar17 + 1;
    } while (lVar20 != 0);
    if (param_8 == '\0') goto LAB_001043f3;
    local_a0 = 0;
  }
  goto LAB_00104878;
LAB_00104a9d:
  local_90 = 0;
  iVar25 = iVar9 >> 1;
  iVar3 = 0;
  iVar12 = 1;
  if (0 < iVar25) {
    iVar12 = iVar25;
  }
  uVar21 = (int)uVar10 >> 1;
  uVar13 = 1;
  if (0 < (int)uVar21) {
    uVar13 = uVar21;
  }
  iVar24 = iVar11 >> 1;
  iVar14 = 1;
  if (0 < iVar24) {
    iVar14 = iVar24;
  }
  do {
    if (lVar20 == 0) goto LAB_00104878;
    lVar20 = *(long *)(lVar20 + -8);
    if (lVar20 < 1) goto LAB_0010487b;
    Image::get_format();
    Image::create_empty((Ref<Image> *)&local_c0,iVar12,uVar13,0);
    iVar26 = 0;
    local_68 = ((float)iVar3 * (float)iVar11) / (float)iVar14 + __LC82;
    do {
      lVar17 = local_a0;
      fVar27 = ((float)iVar26 * (float)iVar9) / (float)iVar12 + __LC82;
      pCVar23 = (Color *)0x0;
      do {
        local_70 = CONCAT44(((float)(int)pCVar23 * (float)(int)uVar10) / (float)(int)uVar13 + __LC82
                            ,fVar27);
        auVar32 = Vector3::operator_cast_to_Vector3i((Vector3 *)&local_70);
        local_64 = auVar32;
        _local_58 = Vector3i::operator_cast_to_Vector3((Vector3i *)local_64);
        fVar28 = local_68;
        fVar29 = SUB124(_local_58,8);
        lVar19 = (long)(int)local_64._8_4_;
        fVar30 = local_70._4_4_;
        uVar7 = local_58._4_4_;
        iVar15 = (uint)((int)local_64._0_4_ < iVar9 + -1) + local_64._0_4_;
        fVar31 = (float)local_70;
        uVar18 = local_58._0_4_;
        iVar16 = local_64._8_4_ + (uint)((int)local_64._8_4_ < iVar11 + -1);
        if (lVar19 < 0) {
          if (lVar17 != 0) goto LAB_0010512d;
LAB_0010515c:
          lVar20 = 0;
          goto LAB_00104898;
        }
        if (lVar17 == 0) goto LAB_0010515c;
        if (*(long *)(lVar17 + -8) <= lVar19) {
LAB_0010512d:
          lVar20 = *(long *)(lVar17 + -8);
          goto LAB_00104898;
        }
        auVar33 = Image::get_pixel((int)*(undefined8 *)(lVar17 + lVar19 * 8),local_64._0_4_);
        lVar19 = (long)(int)local_64._8_4_;
        if ((lVar19 < 0) || (*(long *)(lVar17 + -8) <= lVar19)) goto LAB_0010512d;
        auVar34 = Image::get_pixel((int)*(undefined8 *)(lVar17 + lVar19 * 8),iVar15);
        lVar19 = (long)(int)local_64._8_4_;
        if ((lVar19 < 0) || (*(long *)(lVar17 + -8) <= lVar19)) goto LAB_0010512d;
        auVar35 = Image::get_pixel((int)*(undefined8 *)(lVar17 + lVar19 * 8),local_64._0_4_);
        lVar19 = (long)(int)local_64._8_4_;
        if ((lVar19 < 0) || (*(long *)(lVar17 + -8) <= lVar19)) goto LAB_0010512d;
        lVar20 = lVar19 * 8;
        lVar19 = (long)iVar16;
        auVar36 = Image::get_pixel((int)*(undefined8 *)(lVar17 + lVar20),iVar15);
        if ((lVar19 < 0) || (*(long *)(lVar17 + -8) <= lVar19)) goto LAB_0010512d;
        puVar2 = (undefined8 *)(lVar17 + lVar19 * 8);
        auVar37 = Image::get_pixel((int)*puVar2,local_64._0_4_);
        lVar20 = *(long *)(lVar17 + -8);
        if (lVar20 <= lVar19) goto LAB_00104898;
        auVar38 = Image::get_pixel((int)*puVar2,iVar15);
        lVar20 = *(long *)(lVar17 + -8);
        if (lVar20 <= lVar19) goto LAB_00104898;
        auVar39 = Image::get_pixel((int)*puVar2,local_64._0_4_);
        lVar20 = *(long *)(lVar17 + -8);
        if (lVar20 <= lVar19) goto LAB_00104898;
        fVar28 = fVar28 - fVar29;
        fVar30 = fVar30 - (float)uVar7;
        fVar31 = fVar31 - (float)uVar18;
        auVar40 = Image::get_pixel((int)*puVar2,iVar15);
        local_1a8 = auVar34._0_4_;
        fStack_1a4 = auVar34._4_4_;
        fStack_1a0 = auVar34._8_4_;
        fStack_19c = auVar34._12_4_;
        local_1f8 = auVar33._0_4_;
        fStack_1f4 = auVar33._4_4_;
        fStack_1f0 = auVar33._8_4_;
        fStack_1ec = auVar33._12_4_;
        local_148 = auVar36._0_4_;
        fStack_144 = auVar36._4_4_;
        fStack_140 = auVar36._8_4_;
        fStack_13c = auVar36._12_4_;
        local_198 = auVar35._0_4_;
        fStack_194 = auVar35._4_4_;
        fStack_190 = auVar35._8_4_;
        fStack_18c = auVar35._12_4_;
        uVar22 = (int)pCVar23 + 1;
        local_e8 = auVar38._0_4_;
        fStack_e4 = auVar38._4_4_;
        fStack_e0 = auVar38._8_4_;
        fStack_dc = auVar38._12_4_;
        local_138 = auVar37._0_4_;
        fStack_134 = auVar37._4_4_;
        fStack_130 = auVar37._8_4_;
        fStack_12c = auVar37._12_4_;
        local_1f8 = (local_1a8 - local_1f8) * fVar31 + local_1f8;
        fStack_1f4 = (fStack_1a4 - fStack_1f4) * fVar31 + fStack_1f4;
        fStack_1f0 = (fStack_1a0 - fStack_1f0) * fVar31 + fStack_1f0;
        fStack_1ec = (fStack_19c - fStack_1ec) * fVar31 + fStack_1ec;
        local_138 = (local_e8 - local_138) * fVar31 + local_138;
        fStack_134 = (fStack_e4 - fStack_134) * fVar31 + fStack_134;
        fStack_130 = (fStack_e0 - fStack_130) * fVar31 + fStack_130;
        fStack_12c = (fStack_dc - fStack_12c) * fVar31 + fStack_12c;
        local_1f8 = (((local_148 - local_198) * fVar31 + local_198) - local_1f8) * fVar30 +
                    local_1f8;
        fStack_1f4 = (((fStack_144 - fStack_194) * fVar31 + fStack_194) - fStack_1f4) * fVar30 +
                     fStack_1f4;
        fStack_1f0 = (((fStack_140 - fStack_190) * fVar31 + fStack_190) - fStack_1f0) * fVar30 +
                     fStack_1f0;
        fStack_1ec = (((fStack_13c - fStack_18c) * fVar31 + fStack_18c) - fStack_1ec) * fVar30 +
                     fStack_1ec;
        local_188 = auVar40._0_4_;
        fStack_184 = auVar40._4_4_;
        fStack_180 = auVar40._8_4_;
        fStack_17c = auVar40._12_4_;
        local_128 = auVar39._0_4_;
        fStack_124 = auVar39._4_4_;
        fStack_120 = auVar39._8_4_;
        fStack_11c = auVar39._12_4_;
        fStack_50 = (((((fStack_180 - fStack_120) * fVar31 + fStack_120) - fStack_130) * fVar30 +
                     fStack_130) - fStack_1f0) * fVar28 + fStack_1f0;
        fStack_4c = (((((fStack_17c - fStack_11c) * fVar31 + fStack_11c) - fStack_12c) * fVar30 +
                     fStack_12c) - fStack_1ec) * fVar28 + fStack_1ec;
        local_58._4_4_ =
             (((((fStack_184 - fStack_124) * fVar31 + fStack_124) - fStack_134) * fVar30 +
              fStack_134) - fStack_1f4) * fVar28 + fStack_1f4;
        local_58._0_4_ =
             (((((local_188 - local_128) * fVar31 + local_128) - local_138) * fVar30 + local_138) -
             local_1f8) * fVar28 + local_1f8;
        Image::set_pixel((int)local_c0,iVar26,pCVar23);
        pCVar23 = (Color *)(ulong)uVar22;
      } while (uVar22 != uVar13);
      iVar26 = iVar26 + 1;
    } while (iVar26 != iVar12);
    local_88 = (Object *)0x0;
    if (local_c0 != (Object *)0x0) {
      local_88 = local_c0;
      cVar8 = RefCounted::reference();
      if (cVar8 == '\0') {
        local_88 = (Object *)0x0;
      }
    }
    Vector<Ref<Image>>::push_back((Vector<Ref<Image>> *)&local_98,(Ref<Image> *)&local_88);
    Ref<Image>::unref((Ref<Image> *)&local_88);
    Ref<Image>::unref((Ref<Image> *)&local_c0);
    lVar20 = local_90;
    iVar3 = iVar3 + 1;
    if (iVar3 == iVar14) break;
    lVar20 = *(long *)(param_2 + 8);
  } while( true );
  local_80[0] = 0;
  if (local_90 == 0) {
    Vector<Ref<Image>>::append_array(local_b8,(Ref<Image> *)&local_88);
    CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)local_80);
  }
  else {
    CowData<Ref<Image>>::_ref((CowData<Ref<Image>> *)local_80,(CowData *)&local_90);
    Vector<Ref<Image>>::append_array(local_b8,(Ref<Image> *)&local_88);
    CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)local_80);
    if (lVar17 == lVar20) goto LAB_001051ff;
  }
  CowData<Ref<Image>>::_ref((CowData<Ref<Image>> *)&local_a0,(CowData *)&local_90);
LAB_001051ff:
  CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_90);
  if (((int)uVar21 < 2 && iVar25 < 2) && (auVar32 = local_64, iVar24 < 2)) goto LAB_00105247;
  lVar20 = *(long *)(param_2 + 8);
  uVar10 = uVar13;
  iVar11 = iVar14;
  iVar9 = iVar12;
  goto LAB_00104a9d;
LAB_00104570:
  lVar20 = *(long *)(param_2 + 8);
  lVar19 = lVar19 + 1;
  goto joined_r0x0010454f;
LAB_00105247:
  local_64 = auVar32;
  CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_a0);
  lVar17 = local_b0[0];
LAB_001043fd:
  FileAccess::open((String *)&local_98,param_3,(Error *)0x2);
  (**(code **)(*(long *)local_98 + 0x268))(local_98,0x47);
  (**(code **)(*(long *)local_98 + 0x268))(local_98,0x53);
  (**(code **)(*(long *)local_98 + 0x268))(local_98,0x54);
  (**(code **)(*(long *)local_98 + 0x268))(local_98,0x4c);
  (**(code **)(*(long *)local_98 + 0x278))(local_98,1);
  if (*(long *)(param_2 + 8) == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined4 *)(*(long *)(param_2 + 8) + -8);
  }
  (**(code **)(*(long *)local_98 + 0x278))(local_98,uVar18);
  (**(code **)(*(long *)local_98 + 0x278))();
  (**(code **)(*(long *)local_98 + 0x278))();
  (**(code **)(*(long *)local_98 + 0x278))();
  (**(code **)(*(long *)local_98 + 0x278))();
  (**(code **)(*(long *)local_98 + 0x278))();
  (**(code **)(*(long *)local_98 + 0x278))();
  local_214 = param_4;
  if (1 < param_4) {
LAB_00104538:
    lVar19 = 0;
    lVar20 = *(long *)(param_2 + 8);
joined_r0x0010454f:
    if (lVar20 != 0) {
      do {
        if (*(long *)(lVar20 + -8) <= lVar19) break;
        if (local_98 == (Object *)0x0) {
LAB_001045ad:
          local_88 = (Object *)0x0;
        }
        else {
          local_88 = local_98;
          cVar8 = RefCounted::reference();
          if (cVar8 == '\0') goto LAB_001045ad;
        }
        ResourceImporterTexture::save_to_ctex_format
                  (&local_88,lVar20 + lVar19 * 8,local_214,param_7,param_5);
        if (local_88 == (Object *)0x0) goto LAB_00104570;
        cVar8 = RefCounted::unreference();
        pOVar6 = local_88;
        if (cVar8 == '\0') goto LAB_00104570;
        cVar8 = predelete_handler(local_88);
        if (cVar8 == '\0') goto LAB_00104570;
        lVar19 = lVar19 + 1;
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
        lVar20 = *(long *)(param_2 + 8);
        if (lVar20 == 0) break;
      } while( true );
    }
    if (lVar17 == 0) goto LAB_001048f0;
    lVar20 = 0;
    if (*(long *)(lVar17 + -8) < 1) goto LAB_001048f0;
    do {
      if (local_98 == (Object *)0x0) {
LAB_00104699:
        local_88 = (Object *)0x0;
      }
      else {
        local_88 = local_98;
        cVar8 = RefCounted::reference();
        if (cVar8 == '\0') goto LAB_00104699;
      }
      ResourceImporterTexture::save_to_ctex_format
                (&local_88,lVar17 + lVar20 * 8,local_214,param_7,param_5);
      if (local_88 != (Object *)0x0) {
        cVar8 = RefCounted::unreference();
        pOVar6 = local_88;
        if (cVar8 != '\0') {
          cVar8 = predelete_handler(local_88);
          if (cVar8 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))();
            Memory::free_static(pOVar6,false);
          }
        }
      }
      lVar20 = lVar20 + 1;
      if (*(long *)(lVar17 + -8) <= lVar20) {
LAB_001048f0:
        if (local_98 != (Object *)0x0) {
          cVar8 = RefCounted::unreference();
          if (cVar8 != '\0') {
            cVar8 = predelete_handler(local_98);
            if (cVar8 != '\0') {
              (**(code **)(*(long *)local_98 + 0x140))(local_98);
              Memory::free_static(local_98,false);
            }
          }
        }
        CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)local_b0);
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    } while( true );
  }
  if (*(long *)(param_2 + 8) != 0) {
    lVar20 = *(long *)(*(long *)(param_2 + 8) + -8);
    if (0 < lVar20) {
      iVar9 = Image::get_format();
      local_214 = 3;
      if (iVar9 < 8) {
        local_214 = param_4;
      }
      goto LAB_00104538;
    }
    goto LAB_0010487b;
  }
LAB_00104878:
  lVar20 = 0;
LAB_0010487b:
  lVar19 = 0;
LAB_00104898:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar19,lVar20,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* ResourceImporterLayeredTexture::_check_compress_ctex(String const&, Ref<LayeredTextureImport>) */

void __thiscall
ResourceImporterLayeredTexture::_check_compress_ctex
          (ResourceImporterLayeredTexture *this,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  CowData<char32_t> *pCVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  long lVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  undefined **local_f8;
  CowData *local_e0;
  undefined4 local_b4;
  undefined4 local_ac;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  String local_90 [8];
  String local_88 [8];
  long local_80;
  String local_78 [8];
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0x168))((CowData<char32_t> *)&local_a8,this);
  lVar11 = *param_3;
  if (*(undefined4 **)(lVar11 + 0x180) == (undefined4 *)0x0) {
    _err_print_error("_check_compress_ctex","editor/import/resource_importer_layered_texture.cpp",
                     0x1e6,"Parameter \"r_texture_import->csource\" is null.",0,0);
  }
  else {
    iVar9 = *(int *)(lVar11 + 0x1e0);
    if (iVar9 == 2) {
      cVar6 = ResourceImporterTextureSettings::should_import_s3tc_bptc();
      cVar7 = ResourceImporterTextureSettings::should_import_etc2_astc();
      if (cVar6 != '\0') {
        lVar11 = *param_3;
        Variant::Variant((Variant *)local_58,"s3tc_bptc");
        Array::push_back((Variant *)(lVar11 + 0x1d0));
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      if (cVar7 != '\0') {
        lVar11 = *param_3;
        Variant::Variant((Variant *)local_58,"etc2_astc");
        Array::push_back((Variant *)(lVar11 + 0x1d0));
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      iVar9 = *(int *)(*param_3 + 0x1e8);
      if (*(long *)(*param_3 + 0x1c8) == 0) {
        _err_print_error("_check_compress_ctex",
                         "editor/import/resource_importer_layered_texture.cpp",0x1fb,
                         "Condition \"r_texture_import->image.is_null()\" is true.",0,0);
      }
      else {
        iVar8 = Image::get_format();
        lVar11 = *param_3;
        if (iVar8 < 8) {
          if (*(long *)(lVar11 + 0x1d8) == 0) goto LAB_00105ec8;
LAB_00105374:
          if (cVar6 != '\0') {
            local_a0 = 0;
            if (*(char *)(lVar11 + 0x1ed) == '\0') {
              local_60 = 4;
              local_68 = &_LC90;
              String::parse_latin1((StrRange *)&local_a0);
              local_ac = 0;
              cVar6 = '\0';
            }
            else {
              cVar6 = '\0';
LAB_00105e33:
              local_a0 = 0;
              local_60 = 4;
              local_68 = &_LC91;
              String::parse_latin1((StrRange *)&local_a0);
              local_ac = 3;
            }
            local_e0 = (CowData *)&local_a0;
            local_f8 = &local_68;
            lVar11 = *param_3;
            uVar1 = *(undefined1 *)(lVar11 + 0x1ec);
            uVar2 = *(undefined4 *)(lVar11 + 0x1f0);
            uVar3 = *(undefined4 *)(lVar11 + 0x1e0);
            uVar4 = **(undefined4 **)(lVar11 + 0x180);
            local_68 = &_LC85;
            local_80 = 0;
            local_60 = 1;
            String::parse_latin1((StrRange *)&local_80);
            local_68 = &_LC85;
            local_98 = 0;
            local_60 = 1;
            String::parse_latin1((StrRange *)&local_98);
            String::operator+(local_90,(String *)(*param_3 + 0x188));
            String::operator+(local_88,local_90);
            String::operator+(local_78,local_88);
            String::operator+((String *)&local_70,local_78);
            local_60 = 0;
            if (*(long *)(*(long *)(*param_3 + 0x1d8) + 8) != 0) {
              CowData<Ref<Image>>::_ref
                        ((CowData<Ref<Image>> *)&local_60,
                         (CowData *)(*(long *)(*param_3 + 0x1d8) + 8));
            }
            _save_tex(this,local_f8,(String *)&local_70,uVar3,local_ac,uVar4,uVar2,uVar1,1);
            CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            plVar5 = *(long **)(*param_3 + 0x1c0);
            if (*plVar5 == 0) {
              pauVar12 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *plVar5 = (long)pauVar12;
              *(undefined4 *)pauVar12[1] = 0;
              *pauVar12 = (undefined1  [16])0x0;
            }
            pCVar10 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
            *(undefined1 (*) [16])pCVar10 = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pCVar10 + 0x10) = (undefined1  [16])0x0;
            if (local_a0 != 0) {
              CowData<char32_t>::_ref(pCVar10,local_e0);
            }
            plVar5 = (long *)*plVar5;
            lVar11 = plVar5[1];
            *(undefined8 *)(pCVar10 + 8) = 0;
            *(long **)(pCVar10 + 0x18) = plVar5;
            *(long *)(pCVar10 + 0x10) = lVar11;
            if (lVar11 != 0) {
              *(CowData<char32_t> **)(lVar11 + 8) = pCVar10;
            }
            plVar5[1] = (long)pCVar10;
            if (*plVar5 == 0) {
              *plVar5 = (long)pCVar10;
            }
            *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
          }
          if (cVar7 != '\0') {
            local_a0 = 0;
            if ((*(char *)(*param_3 + 0x1ed) == '\0') && (cVar6 == '\0')) {
              local_60 = 4;
              local_68 = &_LC92;
              String::parse_latin1((StrRange *)&local_a0);
              local_b4 = 2;
            }
            else {
LAB_00105657:
              local_a0 = 0;
              local_60 = 4;
              local_68 = &_LC93;
              String::parse_latin1((StrRange *)&local_a0);
              local_b4 = 4;
            }
            local_e0 = (CowData *)&local_a0;
            local_f8 = &local_68;
            lVar11 = *param_3;
            uVar1 = *(undefined1 *)(lVar11 + 0x1ec);
            uVar2 = *(undefined4 *)(lVar11 + 0x1f0);
            uVar3 = *(undefined4 *)(lVar11 + 0x1e0);
            uVar4 = **(undefined4 **)(lVar11 + 0x180);
            local_68 = &_LC85;
            local_80 = 0;
            local_60 = 1;
            String::parse_latin1((StrRange *)&local_80);
            local_68 = &_LC85;
            local_98 = 0;
            local_60 = 1;
            String::parse_latin1((StrRange *)&local_98);
            String::operator+(local_90,(String *)(*param_3 + 0x188));
            String::operator+(local_88,local_90);
            String::operator+(local_78,local_88);
            String::operator+((String *)&local_70,local_78);
            local_60 = 0;
            if (*(long *)(*(long *)(*param_3 + 0x1d8) + 8) != 0) {
              CowData<Ref<Image>>::_ref
                        ((CowData<Ref<Image>> *)&local_60,
                         (CowData *)(*(long *)(*param_3 + 0x1d8) + 8));
            }
            _save_tex(this,local_f8,(String *)&local_70,uVar3,local_b4,uVar4,uVar2,uVar1,1);
            CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            plVar5 = *(long **)(*param_3 + 0x1c0);
            if (*plVar5 == 0) {
              pauVar12 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *plVar5 = (long)pauVar12;
              *(undefined4 *)pauVar12[1] = 0;
              *pauVar12 = (undefined1  [16])0x0;
            }
            pCVar10 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
            *(undefined1 (*) [16])pCVar10 = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pCVar10 + 0x10) = (undefined1  [16])0x0;
            if (local_a0 != 0) {
              CowData<char32_t>::_ref(pCVar10,local_e0);
            }
            plVar5 = (long *)*plVar5;
            lVar11 = plVar5[1];
            *(undefined8 *)(pCVar10 + 8) = 0;
            *(long **)(pCVar10 + 0x18) = plVar5;
            *(long *)(pCVar10 + 0x10) = lVar11;
            if (lVar11 != 0) {
              *(CowData<char32_t> **)(lVar11 + 8) = pCVar10;
            }
            plVar5[1] = (long)pCVar10;
            if (*plVar5 == 0) {
              *plVar5 = (long)pCVar10;
            }
            *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
            CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
          }
LAB_001058e4:
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          goto LAB_00105a6a;
        }
        iVar8 = Image::get_format();
        if (iVar8 < 0x11) {
          lVar11 = *param_3;
          if (*(long *)(lVar11 + 0x1d8) != 0) {
            if ((*(uint *)(lVar11 + 0x1f0) & 0xfffffffb) == 1) {
              if (*(int *)(lVar11 + 0x1e8) == 2) {
                iVar8 = Image::get_format();
                if (iVar8 == 0xb) {
                  lVar11 = *(long *)(*param_3 + 0x1d8);
                  lVar13 = *(long *)(lVar11 + 8);
                  if (lVar13 != 0) {
                    lVar15 = 0;
                    do {
                      if (*(long *)(lVar13 + -8) <= lVar15) break;
                      CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)(lVar11 + 8));
                      lVar13 = lVar15 * 8;
                      lVar15 = lVar15 + 1;
                      Image::convert(*(undefined8 *)(*(long *)(lVar11 + 8) + lVar13),10);
                      lVar11 = *(long *)(*param_3 + 0x1d8);
                      lVar13 = *(long *)(lVar11 + 8);
                    } while (lVar13 != 0);
                  }
                }
                else {
                  iVar8 = Image::get_format();
                  if (iVar8 == 0xf) {
                    lVar11 = *(long *)(*param_3 + 0x1d8);
                    lVar13 = *(long *)(lVar11 + 8);
                    if (lVar13 != 0) {
                      lVar15 = 0;
                      do {
                        if (*(long *)(lVar13 + -8) <= lVar15) break;
                        CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)(lVar11 + 8));
                        lVar13 = lVar15 * 8;
                        lVar15 = lVar15 + 1;
                        Image::convert(*(undefined8 *)(*(long *)(lVar11 + 8) + lVar13),0xe);
                        lVar11 = *(long *)(*param_3 + 0x1d8);
                        lVar13 = *(long *)(lVar11 + 8);
                      } while (lVar13 != 0);
                    }
                  }
                }
                goto LAB_00105e18;
              }
            }
            else {
LAB_00105e18:
              if (0 < iVar9) {
                if (cVar6 != '\0') goto LAB_00105e33;
                if (cVar7 != '\0') goto LAB_00105657;
                goto LAB_001058e4;
              }
            }
            iVar9 = Image::get_format();
            if (iVar9 == 0x10) {
              lVar11 = *param_3;
            }
            else {
              lVar11 = *param_3;
              lVar13 = *(long *)(lVar11 + 0x1d8);
              lVar15 = *(long *)(lVar13 + 8);
              if (lVar15 != 0) {
                lVar14 = 0;
                do {
                  if (*(long *)(lVar15 + -8) <= lVar14) break;
                  CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)(lVar13 + 8));
                  lVar11 = lVar14 * 8;
                  lVar14 = lVar14 + 1;
                  Image::convert(*(undefined8 *)(*(long *)(lVar13 + 8) + lVar11),0x10);
                  lVar11 = *param_3;
                  lVar13 = *(long *)(lVar11 + 0x1d8);
                  lVar15 = *(long *)(lVar13 + 8);
                } while (lVar15 != 0);
              }
            }
            uVar1 = *(undefined1 *)(lVar11 + 0x1ec);
            uVar2 = **(undefined4 **)(lVar11 + 0x180);
            uVar3 = *(undefined4 *)(lVar11 + 0x1f0);
            local_68 = &_LC85;
            local_80 = 0;
            local_60 = 1;
            String::parse_latin1((StrRange *)&local_80);
            String::operator+(local_78,(String *)(*param_3 + 0x188));
            String::operator+((String *)&local_70,local_78);
            local_60 = 0;
            if (*(long *)(*(long *)(*param_3 + 0x1d8) + 8) != 0) {
              CowData<Ref<Image>>::_ref
                        ((CowData<Ref<Image>> *)&local_60,
                         (CowData *)(*(long *)(*param_3 + 0x1d8) + 8));
            }
            _save_tex(this,&local_68,(String *)&local_70,3,0,uVar2,uVar3,uVar1,0);
            CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            goto LAB_00105a6a;
          }
        }
        else {
          lVar11 = *param_3;
          if (*(long *)(lVar11 + 0x1d8) != 0) goto LAB_00105374;
        }
LAB_00105ec8:
        _err_print_error("_check_compress_ctex",
                         "editor/import/resource_importer_layered_texture.cpp",0x1fd,
                         "Parameter \"r_texture_import->slices\" is null.",0,0);
      }
    }
    else {
      uVar2 = *(undefined4 *)(lVar11 + 0x1f0);
      uVar1 = *(undefined1 *)(lVar11 + 0x1ec);
      uVar3 = **(undefined4 **)(lVar11 + 0x180);
      local_68 = &_LC85;
      local_80 = 0;
      local_60 = 1;
      String::parse_latin1((StrRange *)&local_80);
      String::operator+(local_78,(String *)(*param_3 + 0x188));
      String::operator+((String *)&local_70,local_78);
      local_60 = 0;
      if (*(long *)(*(long *)(*param_3 + 0x1d8) + 8) != 0) {
        CowData<Ref<Image>>::_ref
                  ((CowData<Ref<Image>> *)&local_60,(CowData *)(*(long *)(*param_3 + 0x1d8) + 8));
      }
      _save_tex(this,&local_68,(String *)&local_70,iVar9,0,uVar3,uVar2,uVar1,0);
      CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_60);
      lVar11 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar5 = (long *)(local_70 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      lVar11 = local_80;
      if (local_80 != 0) {
        LOCK();
        plVar5 = (long *)(local_80 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_80 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
    }
  }
  lVar11 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar5 = (long *)(local_a8 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
  }
LAB_00105a6a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceImporterLayeredTexture::import(long, String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) */

int __thiscall
ResourceImporterLayeredTexture::import
          (ResourceImporterLayeredTexture *this,long param_1,String *param_2,String *param_3,
          HashMap *param_4,List *param_5,List *param_6,Variant *param_7)

{
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  *this_00;
  undefined8 *puVar1;
  Image *pIVar2;
  void *pvVar3;
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
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  code *pcVar132;
  Object *pOVar133;
  LayeredTextureImport LVar134;
  LayeredTextureImport LVar135;
  char cVar136;
  int iVar137;
  int iVar138;
  int iVar139;
  uint uVar140;
  int iVar141;
  undefined4 uVar142;
  int iVar143;
  int iVar144;
  uint uVar145;
  uint uVar146;
  Resource *this_01;
  RefCounted *this_02;
  Variant *pVVar148;
  int iVar149;
  long lVar150;
  long lVar151;
  int iVar152;
  int iVar153;
  LayeredTextureImport *pLVar154;
  Resource *pRVar155;
  RefCounted *pRVar156;
  uint uVar157;
  uint uVar158;
  uint uVar159;
  int iVar160;
  int iVar161;
  int iVar162;
  long in_FS_OFFSET;
  byte bVar163;
  float fVar164;
  Array *local_190;
  int local_184;
  Vector<Ref<Image>> *local_168;
  int local_15c;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  Image *local_98;
  Resource *local_90;
  Object *local_88;
  undefined8 local_80;
  int local_78 [8];
  ulong local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_40;
  ulong uVar147;
  
  bVar163 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_100,"compress/mode",false);
  if ((*(long *)(param_4 + 8) != 0) && (*(int *)(param_4 + 0x2c) != 0)) {
    uVar140 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
    uVar147 = CONCAT44(0,uVar140);
    lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
    if (local_100 == 0) {
      uVar145 = StringName::get_empty_hash();
    }
    else {
      uVar145 = *(uint *)(local_100 + 0x20);
    }
    if (uVar145 == 0) {
      uVar145 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar145 * lVar150;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar147;
    lVar151 = SUB168(auVar4 * auVar68,8);
    uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
    uVar157 = SUB164(auVar4 * auVar68,8);
    if (uVar146 != 0) {
      uVar158 = 0;
      while ((uVar146 != uVar145 ||
             (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) != local_100))) {
        uVar158 = uVar158 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar157 + 1) * lVar150;
        auVar69._8_8_ = 0;
        auVar69._0_8_ = uVar147;
        lVar151 = SUB168(auVar5 * auVar69,8);
        uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
        uVar157 = SUB164(auVar5 * auVar69,8);
        if ((uVar146 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar146 * lVar150, auVar70._8_8_ = 0,
           auVar70._0_8_ = uVar147, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((uVar140 + uVar157) - SUB164(auVar6 * auVar70,8)) * lVar150,
           auVar71._8_8_ = 0, auVar71._0_8_ = uVar147, SUB164(auVar7 * auVar71,8) < uVar158))
        goto LAB_00106a98;
      }
      iVar137 = Variant::operator_cast_to_int
                          ((Variant *)
                           (*(long *)(*(long *)(param_4 + 8) + (ulong)uVar157 * 8) + 0x18));
      if ((StringName::configured != '\0') && (local_100 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_f8,"compress/lossy_quality",false);
      if ((*(long *)(param_4 + 8) != 0) && (*(int *)(param_4 + 0x2c) != 0)) {
        uVar140 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
        uVar147 = CONCAT44(0,uVar140);
        lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
        if (local_f8 == 0) {
          uVar145 = StringName::get_empty_hash();
        }
        else {
          uVar145 = *(uint *)(local_f8 + 0x20);
        }
        if (uVar145 == 0) {
          uVar145 = 1;
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar145 * lVar150;
        auVar72._8_8_ = 0;
        auVar72._0_8_ = uVar147;
        lVar151 = SUB168(auVar8 * auVar72,8);
        uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
        uVar157 = SUB164(auVar8 * auVar72,8);
        if (uVar146 != 0) {
          uVar158 = 0;
          goto LAB_0010634a;
        }
      }
    }
  }
  goto LAB_00106a98;
LAB_0010634a:
  if ((uVar145 == uVar146) &&
     (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) == local_f8)) {
    fVar164 = Variant::operator_cast_to_float
                        ((Variant *)(*(long *)(*(long *)(param_4 + 8) + (ulong)uVar157 * 8) + 0x18))
    ;
    if ((StringName::configured != '\0') && (local_f8 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_f0,"compress/high_quality",false);
    if ((*(long *)(param_4 + 8) != 0) && (*(int *)(param_4 + 0x2c) != 0)) {
      uVar140 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
      uVar147 = CONCAT44(0,uVar140);
      lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
      if (local_f0 == 0) {
        uVar145 = StringName::get_empty_hash();
      }
      else {
        uVar145 = *(uint *)(local_f0 + 0x20);
      }
      if (uVar145 == 0) {
        uVar145 = 1;
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar145 * lVar150;
      auVar76._8_8_ = 0;
      auVar76._0_8_ = uVar147;
      lVar151 = SUB168(auVar12 * auVar76,8);
      uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
      uVar157 = SUB164(auVar12 * auVar76,8);
      if (uVar146 != 0) {
        uVar158 = 0;
        goto LAB_0010647a;
      }
    }
    goto LAB_00106a98;
  }
  uVar158 = uVar158 + 1;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)(uVar157 + 1) * lVar150;
  auVar73._8_8_ = 0;
  auVar73._0_8_ = uVar147;
  lVar151 = SUB168(auVar9 * auVar73,8);
  uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
  uVar157 = SUB164(auVar9 * auVar73,8);
  if ((uVar146 == 0) ||
     (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar146 * lVar150, auVar74._8_8_ = 0,
     auVar74._0_8_ = uVar147, auVar11._8_8_ = 0,
     auVar11._0_8_ = (ulong)((uVar140 + uVar157) - SUB164(auVar10 * auVar74,8)) * lVar150,
     auVar75._8_8_ = 0, auVar75._0_8_ = uVar147, SUB164(auVar11 * auVar75,8) < uVar158))
  goto LAB_00106a98;
  goto LAB_0010634a;
LAB_0010647a:
  if ((uVar146 == uVar145) &&
     (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) == local_f0)) {
    LVar134 = (LayeredTextureImport)
              Variant::operator_cast_to_bool
                        ((Variant *)(*(long *)(*(long *)(param_4 + 8) + (ulong)uVar157 * 8) + 0x18))
    ;
    if ((StringName::configured != '\0') && (local_f0 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_e8,"compress/hdr_compression",false);
    if ((*(long *)(param_4 + 8) != 0) && (*(int *)(param_4 + 0x2c) != 0)) {
      uVar140 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
      uVar147 = CONCAT44(0,uVar140);
      lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
      if (local_e8 == 0) {
        uVar145 = StringName::get_empty_hash();
      }
      else {
        uVar145 = *(uint *)(local_e8 + 0x20);
      }
      if (uVar145 == 0) {
        uVar145 = 1;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar145 * lVar150;
      auVar80._8_8_ = 0;
      auVar80._0_8_ = uVar147;
      lVar151 = SUB168(auVar16 * auVar80,8);
      uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
      uVar157 = SUB164(auVar16 * auVar80,8);
      if (uVar146 != 0) {
        uVar158 = 0;
        goto LAB_001065b2;
      }
    }
    goto LAB_00106a98;
  }
  uVar158 = uVar158 + 1;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = (ulong)(uVar157 + 1) * lVar150;
  auVar77._8_8_ = 0;
  auVar77._0_8_ = uVar147;
  lVar151 = SUB168(auVar13 * auVar77,8);
  uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
  uVar157 = SUB164(auVar13 * auVar77,8);
  if ((uVar146 == 0) ||
     (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar146 * lVar150, auVar78._8_8_ = 0,
     auVar78._0_8_ = uVar147, auVar15._8_8_ = 0,
     auVar15._0_8_ = (ulong)((uVar140 + uVar157) - SUB164(auVar14 * auVar78,8)) * lVar150,
     auVar79._8_8_ = 0, auVar79._0_8_ = uVar147, SUB164(auVar15 * auVar79,8) < uVar158))
  goto LAB_00106a98;
  goto LAB_0010647a;
LAB_001065b2:
  if ((uVar145 == uVar146) &&
     (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) == local_e8)) {
    iVar138 = Variant::operator_cast_to_int
                        ((Variant *)(*(long *)(*(long *)(param_4 + 8) + (ulong)uVar157 * 8) + 0x18))
    ;
    if ((StringName::configured != '\0') && (local_e8 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_e0,"mipmaps/generate",false);
    if ((*(long *)(param_4 + 8) != 0) && (*(int *)(param_4 + 0x2c) != 0)) {
      uVar140 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
      uVar147 = CONCAT44(0,uVar140);
      lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
      if (local_e0 == 0) {
        uVar145 = StringName::get_empty_hash();
      }
      else {
        uVar145 = *(uint *)(local_e0 + 0x20);
      }
      if (uVar145 == 0) {
        uVar145 = 1;
      }
      auVar20._8_8_ = 0;
      auVar20._0_8_ = (ulong)uVar145 * lVar150;
      auVar84._8_8_ = 0;
      auVar84._0_8_ = uVar147;
      lVar151 = SUB168(auVar20 * auVar84,8);
      uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
      uVar157 = SUB164(auVar20 * auVar84,8);
      if (uVar146 != 0) {
        uVar158 = 0;
        goto LAB_001066e2;
      }
    }
    goto LAB_00106a98;
  }
  uVar158 = uVar158 + 1;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = (ulong)(uVar157 + 1) * lVar150;
  auVar81._8_8_ = 0;
  auVar81._0_8_ = uVar147;
  lVar151 = SUB168(auVar17 * auVar81,8);
  uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
  uVar157 = SUB164(auVar17 * auVar81,8);
  if ((uVar146 == 0) ||
     (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar146 * lVar150, auVar82._8_8_ = 0,
     auVar82._0_8_ = uVar147, auVar19._8_8_ = 0,
     auVar19._0_8_ = (ulong)((uVar140 + uVar157) - SUB164(auVar18 * auVar82,8)) * lVar150,
     auVar83._8_8_ = 0, auVar83._0_8_ = uVar147, SUB164(auVar19 * auVar83,8) < uVar158))
  goto LAB_00106a98;
  goto LAB_001065b2;
LAB_001066e2:
  if ((uVar146 == uVar145) &&
     (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) == local_e0)) {
    LVar135 = (LayeredTextureImport)
              Variant::operator_cast_to_bool
                        ((Variant *)(*(long *)(*(long *)(param_4 + 8) + (ulong)uVar157 * 8) + 0x18))
    ;
    if ((StringName::configured != '\0') && (local_e0 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_d8,"compress/channel_pack",false);
    if ((*(long *)(param_4 + 8) != 0) && (*(int *)(param_4 + 0x2c) != 0)) {
      uVar140 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
      uVar147 = CONCAT44(0,uVar140);
      lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
      if (local_d8 == 0) {
        uVar145 = StringName::get_empty_hash();
      }
      else {
        uVar145 = *(uint *)(local_d8 + 0x20);
      }
      uVar146 = 1;
      if (uVar145 != 0) {
        uVar146 = uVar145;
      }
      auVar24._8_8_ = 0;
      auVar24._0_8_ = (ulong)uVar146 * lVar150;
      auVar88._8_8_ = 0;
      auVar88._0_8_ = uVar147;
      lVar151 = SUB168(auVar24 * auVar88,8);
      uVar145 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
      uVar157 = SUB164(auVar24 * auVar88,8);
      if (uVar145 != 0) {
        uVar158 = 0;
        goto LAB_0010681a;
      }
    }
    goto LAB_00106a98;
  }
  uVar158 = uVar158 + 1;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = (ulong)(uVar157 + 1) * lVar150;
  auVar85._8_8_ = 0;
  auVar85._0_8_ = uVar147;
  lVar151 = SUB168(auVar21 * auVar85,8);
  uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
  uVar157 = SUB164(auVar21 * auVar85,8);
  if ((uVar146 == 0) ||
     (auVar22._8_8_ = 0, auVar22._0_8_ = (ulong)uVar146 * lVar150, auVar86._8_8_ = 0,
     auVar86._0_8_ = uVar147, auVar23._8_8_ = 0,
     auVar23._0_8_ = (ulong)((uVar140 + uVar157) - SUB164(auVar22 * auVar86,8)) * lVar150,
     auVar87._8_8_ = 0, auVar87._0_8_ = uVar147, SUB164(auVar23 * auVar87,8) < uVar158))
  goto LAB_00106a98;
  goto LAB_001066e2;
  while( true ) {
    uVar158 = uVar158 + 1;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = (ulong)(uVar157 + 1) * lVar150;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = uVar147;
    lVar151 = SUB168(auVar25 * auVar89,8);
    uVar145 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
    uVar157 = SUB164(auVar25 * auVar89,8);
    if ((uVar145 == 0) ||
       (auVar26._8_8_ = 0, auVar26._0_8_ = (ulong)uVar145 * lVar150, auVar90._8_8_ = 0,
       auVar90._0_8_ = uVar147, auVar27._8_8_ = 0,
       auVar27._0_8_ = (ulong)((uVar140 + uVar157) - SUB164(auVar26 * auVar90,8)) * lVar150,
       auVar91._8_8_ = 0, auVar91._0_8_ = uVar147, SUB164(auVar27 * auVar91,8) < uVar158)) break;
LAB_0010681a:
    if ((uVar145 == uVar146) &&
       (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) == local_d8)) {
      iVar139 = Variant::operator_cast_to_int
                          ((Variant *)
                           (*(long *)(*(long *)(param_4 + 8) + (ulong)uVar157 * 8) + 0x18));
      if ((StringName::configured != '\0') && (local_d8 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_d0,"slices/horizontal",false);
      if ((*(long *)(param_4 + 8) == 0) || (*(int *)(param_4 + 0x2c) == 0)) goto LAB_00106ac8;
      uVar140 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
      uVar147 = CONCAT44(0,uVar140);
      lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
      if (local_d0 == 0) {
        uVar145 = StringName::get_empty_hash();
      }
      else {
        uVar145 = *(uint *)(local_d0 + 0x20);
      }
      if (uVar145 == 0) {
        uVar145 = 1;
      }
      uVar157 = 0;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = (ulong)uVar145 * lVar150;
      auVar92._8_8_ = 0;
      auVar92._0_8_ = uVar147;
      lVar151 = SUB168(auVar28 * auVar92,8);
      uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
      iVar141 = SUB164(auVar28 * auVar92,8);
      if (uVar146 == 0) goto LAB_00106ac8;
      goto LAB_00106952;
    }
  }
  goto LAB_00106a98;
  while( true ) {
    uVar158 = uVar158 + 1;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = (ulong)(uVar157 + 1) * lVar150;
    auVar97._8_8_ = 0;
    auVar97._0_8_ = uVar147;
    lVar151 = SUB168(auVar33 * auVar97,8);
    uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
    uVar157 = SUB164(auVar33 * auVar97,8);
    if ((uVar146 == 0) ||
       (auVar34._8_8_ = 0, auVar34._0_8_ = (ulong)uVar146 * lVar150, auVar98._8_8_ = 0,
       auVar98._0_8_ = uVar147, auVar35._8_8_ = 0,
       auVar35._0_8_ = (ulong)((uVar140 + uVar157) - SUB164(auVar34 * auVar98,8)) * lVar150,
       auVar99._8_8_ = 0, auVar99._0_8_ = uVar147, SUB164(auVar35 * auVar99,8) < uVar158)) break;
LAB_00106a4a:
    if ((uVar146 == uVar145) &&
       (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) == local_c8)) {
      local_184 = Variant::operator_cast_to_int
                            ((Variant *)
                             (*(long *)(*(long *)(param_4 + 8) + (ulong)uVar157 * 8) + 0x18));
      if (StringName::configured == '\0') goto LAB_00106af0;
      if (local_c8 == 0) goto LAB_00106adb;
      StringName::unref();
      goto LAB_00106ad7;
    }
  }
  goto LAB_00106a98;
  while( true ) {
    uVar158 = uVar158 + 1;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = (ulong)(uVar157 + 1) * lVar150;
    auVar105._8_8_ = 0;
    auVar105._0_8_ = uVar147;
    lVar151 = SUB168(auVar41 * auVar105,8);
    uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
    uVar157 = SUB164(auVar41 * auVar105,8);
    if ((uVar146 == 0) ||
       (auVar42._8_8_ = 0, auVar42._0_8_ = (ulong)uVar146 * lVar150, auVar106._8_8_ = 0,
       auVar106._0_8_ = uVar147, auVar43._8_8_ = 0,
       auVar43._0_8_ = (ulong)((uVar140 + uVar157) - SUB164(auVar42 * auVar106,8)) * lVar150,
       auVar107._8_8_ = 0, auVar107._0_8_ = uVar147, SUB164(auVar43 * auVar107,8) < uVar158)) break;
LAB_00106ce2:
    if ((uVar146 == uVar145) &&
       (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) == local_b8)) {
      local_15c = Variant::operator_cast_to_int
                            ((Variant *)
                             (*(long *)(*(long *)(param_4 + 8) + (ulong)uVar157 * 8) + 0x18));
      if (StringName::configured == '\0') goto LAB_00106d56;
      if (local_b8 == 0) goto LAB_00106d43;
      StringName::unref();
      goto LAB_00106d3f;
    }
  }
  goto LAB_00106a98;
  while( true ) {
    uVar158 = uVar158 + 1;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = (ulong)(uVar157 + 1) * lVar150;
    auVar113._8_8_ = 0;
    auVar113._0_8_ = uVar147;
    lVar151 = SUB168(auVar49 * auVar113,8);
    uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
    uVar157 = SUB164(auVar49 * auVar113,8);
    if ((uVar146 == 0) ||
       (auVar50._8_8_ = 0, auVar50._0_8_ = (ulong)uVar146 * lVar150, auVar114._8_8_ = 0,
       auVar114._0_8_ = uVar147, auVar51._8_8_ = 0,
       auVar51._0_8_ = (ulong)((uVar140 + uVar157) - SUB164(auVar50 * auVar114,8)) * lVar150,
       auVar115._8_8_ = 0, auVar115._0_8_ = uVar147, SUB164(auVar51 * auVar115,8) < uVar158)) break;
LAB_00106f52:
    if ((uVar146 == uVar145) &&
       (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) == local_a8)) {
      uVar140 = Variant::operator_cast_to_int
                          ((Variant *)
                           (*(long *)(*(long *)(param_4 + 8) + (ulong)uVar157 * 8) + 0x18));
      if (StringName::configured == '\0') goto LAB_00106fc6;
      if (local_a8 == 0) goto LAB_00106fb3;
      StringName::unref();
      goto LAB_00106faf;
    }
  }
  goto LAB_00106a98;
  while( true ) {
    uVar159 = uVar159 + 1;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = (ulong)(uVar158 + 1) * lVar150;
    auVar121._8_8_ = 0;
    auVar121._0_8_ = uVar147;
    lVar151 = SUB168(auVar57 * auVar121,8);
    uVar157 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
    uVar158 = SUB164(auVar57 * auVar121,8);
    if ((uVar157 == 0) ||
       (auVar58._8_8_ = 0, auVar58._0_8_ = (ulong)uVar157 * lVar150, auVar122._8_8_ = 0,
       auVar122._0_8_ = uVar147, auVar59._8_8_ = 0,
       auVar59._0_8_ = (ulong)((uVar145 + uVar158) - SUB164(auVar58 * auVar122,8)) * lVar150,
       auVar123._8_8_ = 0, auVar123._0_8_ = uVar147, SUB164(auVar59 * auVar123,8) < uVar159)) break;
LAB_001071c3:
    if ((uVar157 == uVar146) &&
       (*(Image **)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) == local_98)) {
      iVar141 = Variant::operator_cast_to_int
                          ((Variant *)
                           (*(long *)(*(long *)(param_4 + 8) + (ulong)uVar158 * 8) + 0x18));
      if (StringName::configured == '\0') goto LAB_00107238;
      if (local_98 == (Image *)0x0) goto LAB_00107223;
      StringName::unref();
      goto LAB_0010721f;
    }
  }
  goto LAB_00106a98;
  while( true ) {
    uVar157 = uVar157 + 1;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = (ulong)(iVar141 + 1) * lVar150;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = uVar147;
    lVar151 = SUB168(auVar29 * auVar93,8);
    uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
    iVar141 = SUB164(auVar29 * auVar93,8);
    if ((uVar146 == 0) ||
       (auVar30._8_8_ = 0, auVar30._0_8_ = (ulong)uVar146 * lVar150, auVar94._8_8_ = 0,
       auVar94._0_8_ = uVar147, auVar31._8_8_ = 0,
       auVar31._0_8_ = (ulong)((uVar140 + iVar141) - SUB164(auVar30 * auVar94,8)) * lVar150,
       auVar95._8_8_ = 0, auVar95._0_8_ = uVar147, SUB164(auVar31 * auVar95,8) < uVar157)) break;
LAB_00106952:
    if ((uVar146 == uVar145) &&
       (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) == local_d0)) {
      StringName::StringName((StringName *)&local_c8,"slices/horizontal",false);
      if ((*(long *)(param_4 + 8) == 0) || (*(int *)(param_4 + 0x2c) == 0)) goto LAB_00106a98;
      uVar140 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
      lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
      if (local_c8 == 0) {
        uVar145 = StringName::get_empty_hash();
      }
      else {
        uVar145 = *(uint *)(local_c8 + 0x20);
      }
      uVar147 = CONCAT44(0,uVar140);
      if (uVar145 == 0) {
        uVar145 = 1;
      }
      auVar32._8_8_ = 0;
      auVar32._0_8_ = (ulong)uVar145 * lVar150;
      auVar96._8_8_ = 0;
      auVar96._0_8_ = uVar147;
      lVar151 = SUB168(auVar32 * auVar96,8);
      uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
      uVar157 = SUB164(auVar32 * auVar96,8);
      if (uVar146 == 0) goto LAB_00106a98;
      uVar158 = 0;
      goto LAB_00106a4a;
    }
  }
LAB_00106ac8:
  local_184 = 0;
LAB_00106ad7:
  if (StringName::configured != '\0') {
LAB_00106adb:
    if (local_d0 != 0) {
      StringName::unref();
    }
  }
LAB_00106af0:
  StringName::StringName((StringName *)&local_c0,"slices/vertical",false);
  if ((*(long *)(param_4 + 8) != 0) && (*(int *)(param_4 + 0x2c) != 0)) {
    uVar140 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
    lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
    if (local_c0 == 0) {
      uVar145 = StringName::get_empty_hash();
    }
    else {
      uVar145 = *(uint *)(local_c0 + 0x20);
    }
    uVar147 = CONCAT44(0,uVar140);
    if (uVar145 == 0) {
      uVar145 = 1;
    }
    uVar157 = 0;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = (ulong)uVar145 * lVar150;
    auVar100._8_8_ = 0;
    auVar100._0_8_ = uVar147;
    lVar151 = SUB168(auVar36 * auVar100,8);
    uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
    iVar141 = SUB164(auVar36 * auVar100,8);
    if (uVar146 != 0) {
      do {
        if ((uVar145 == uVar146) &&
           (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) == local_c0)) {
          StringName::StringName((StringName *)&local_b8,"slices/vertical",false);
          if ((*(long *)(param_4 + 8) == 0) || (*(int *)(param_4 + 0x2c) == 0)) goto LAB_00106a98;
          uVar140 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
          lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
          if (local_b8 == 0) {
            uVar145 = StringName::get_empty_hash();
          }
          else {
            uVar145 = *(uint *)(local_b8 + 0x20);
          }
          uVar147 = CONCAT44(0,uVar140);
          if (uVar145 == 0) {
            uVar145 = 1;
          }
          auVar40._8_8_ = 0;
          auVar40._0_8_ = (ulong)uVar145 * lVar150;
          auVar104._8_8_ = 0;
          auVar104._0_8_ = uVar147;
          lVar151 = SUB168(auVar40 * auVar104,8);
          uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
          uVar157 = SUB164(auVar40 * auVar104,8);
          if (uVar146 == 0) goto LAB_00106a98;
          uVar158 = 0;
          goto LAB_00106ce2;
        }
        uVar157 = uVar157 + 1;
        auVar37._8_8_ = 0;
        auVar37._0_8_ = (ulong)(iVar141 + 1) * lVar150;
        auVar101._8_8_ = 0;
        auVar101._0_8_ = uVar147;
        lVar151 = SUB168(auVar37 * auVar101,8);
        uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
        iVar141 = SUB164(auVar37 * auVar101,8);
      } while ((uVar146 != 0) &&
              (auVar38._8_8_ = 0, auVar38._0_8_ = (ulong)uVar146 * lVar150, auVar102._8_8_ = 0,
              auVar102._0_8_ = uVar147, auVar39._8_8_ = 0,
              auVar39._0_8_ = (ulong)((uVar140 + iVar141) - SUB164(auVar38 * auVar102,8)) * lVar150,
              auVar103._8_8_ = 0, auVar103._0_8_ = uVar147, uVar157 <= SUB164(auVar39 * auVar103,8))
              );
    }
  }
  local_15c = 0;
LAB_00106d3f:
  if (StringName::configured != '\0') {
LAB_00106d43:
    if (local_c0 != 0) {
      StringName::unref();
    }
  }
LAB_00106d56:
  StringName::StringName((StringName *)&local_b0,"slices/arrangement",false);
  if ((*(long *)(param_4 + 8) != 0) && (*(int *)(param_4 + 0x2c) != 0)) {
    uVar140 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
    uVar147 = CONCAT44(0,uVar140);
    lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
    if (local_b0 == 0) {
      uVar145 = StringName::get_empty_hash();
    }
    else {
      uVar145 = *(uint *)(local_b0 + 0x20);
    }
    if (uVar145 == 0) {
      uVar145 = 1;
    }
    uVar157 = 0;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = (ulong)uVar145 * lVar150;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = uVar147;
    lVar151 = SUB168(auVar44 * auVar108,8);
    uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
    iVar141 = SUB164(auVar44 * auVar108,8);
    if (uVar146 != 0) {
      do {
        if ((uVar145 == uVar146) &&
           (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) == local_b0)) {
          StringName::StringName((StringName *)&local_a8,"slices/arrangement",false);
          if ((*(long *)(param_4 + 8) == 0) || (*(int *)(param_4 + 0x2c) == 0)) goto LAB_00106a98;
          uVar140 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
          lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
          if (local_a8 == 0) {
            uVar145 = StringName::get_empty_hash();
          }
          else {
            uVar145 = *(uint *)(local_a8 + 0x20);
          }
          uVar147 = CONCAT44(0,uVar140);
          if (uVar145 == 0) {
            uVar145 = 1;
          }
          auVar48._8_8_ = 0;
          auVar48._0_8_ = (ulong)uVar145 * lVar150;
          auVar112._8_8_ = 0;
          auVar112._0_8_ = uVar147;
          lVar151 = SUB168(auVar48 * auVar112,8);
          uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
          uVar157 = SUB164(auVar48 * auVar112,8);
          if (uVar146 == 0) goto LAB_00106a98;
          uVar158 = 0;
          goto LAB_00106f52;
        }
        uVar157 = uVar157 + 1;
        auVar45._8_8_ = 0;
        auVar45._0_8_ = (ulong)(iVar141 + 1) * lVar150;
        auVar109._8_8_ = 0;
        auVar109._0_8_ = uVar147;
        lVar151 = SUB168(auVar45 * auVar109,8);
        uVar146 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
        iVar141 = SUB164(auVar45 * auVar109,8);
      } while ((uVar146 != 0) &&
              (auVar46._8_8_ = 0, auVar46._0_8_ = (ulong)uVar146 * lVar150, auVar110._8_8_ = 0,
              auVar110._0_8_ = uVar147, auVar47._8_8_ = 0,
              auVar47._0_8_ = (ulong)((uVar140 + iVar141) - SUB164(auVar46 * auVar110,8)) * lVar150,
              auVar111._8_8_ = 0, auVar111._0_8_ = uVar147, uVar157 <= SUB164(auVar47 * auVar111,8))
              );
    }
  }
  uVar140 = 0;
LAB_00106faf:
  if (StringName::configured != '\0') {
LAB_00106fb3:
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00106fc6:
  StringName::StringName((StringName *)&local_a0,"slices/layout",false);
  if ((*(long *)(param_4 + 8) != 0) && (*(int *)(param_4 + 0x2c) != 0)) {
    uVar145 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
    lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
    if (CONCAT44(uStack_9c,local_a0) == 0) {
      uVar146 = StringName::get_empty_hash();
    }
    else {
      uVar146 = *(uint *)(CONCAT44(uStack_9c,local_a0) + 0x20);
    }
    uVar147 = CONCAT44(0,uVar145);
    if (uVar146 == 0) {
      uVar146 = 1;
    }
    uVar158 = 0;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = (ulong)uVar146 * lVar150;
    auVar116._8_8_ = 0;
    auVar116._0_8_ = uVar147;
    lVar151 = SUB168(auVar52 * auVar116,8);
    uVar157 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
    iVar141 = SUB164(auVar52 * auVar116,8);
    if (uVar157 != 0) {
      do {
        if ((uVar157 == uVar146) &&
           (*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) ==
            CONCAT44(uStack_9c,local_a0))) {
          StringName::StringName((StringName *)&local_98,"slices/layout",false);
          if ((*(long *)(param_4 + 8) == 0) || (*(int *)(param_4 + 0x2c) == 0)) goto LAB_00106a98;
          uVar145 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
          lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
          if (local_98 == (Image *)0x0) {
            uVar146 = StringName::get_empty_hash();
          }
          else {
            uVar146 = *(uint *)(local_98 + 0x20);
          }
          uVar147 = CONCAT44(0,uVar145);
          if (uVar146 == 0) {
            uVar146 = 1;
          }
          auVar56._8_8_ = 0;
          auVar56._0_8_ = (ulong)uVar146 * lVar150;
          auVar120._8_8_ = 0;
          auVar120._0_8_ = uVar147;
          lVar151 = SUB168(auVar56 * auVar120,8);
          uVar157 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
          uVar158 = SUB164(auVar56 * auVar120,8);
          if (uVar157 == 0) goto LAB_00106a98;
          uVar159 = 0;
          goto LAB_001071c3;
        }
        uVar158 = uVar158 + 1;
        auVar53._8_8_ = 0;
        auVar53._0_8_ = (ulong)(iVar141 + 1) * lVar150;
        auVar117._8_8_ = 0;
        auVar117._0_8_ = uVar147;
        lVar151 = SUB168(auVar53 * auVar117,8);
        uVar157 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
        iVar141 = SUB164(auVar53 * auVar117,8);
      } while ((uVar157 != 0) &&
              (auVar54._8_8_ = 0, auVar54._0_8_ = (ulong)uVar157 * lVar150, auVar118._8_8_ = 0,
              auVar118._0_8_ = uVar147, auVar55._8_8_ = 0,
              auVar55._0_8_ = (ulong)((uVar145 + iVar141) - SUB164(auVar54 * auVar118,8)) * lVar150,
              auVar119._8_8_ = 0, auVar119._0_8_ = uVar147, uVar158 <= SUB164(auVar55 * auVar119,8))
              );
    }
  }
  iVar141 = 0;
LAB_0010721f:
  if (StringName::configured != '\0') {
LAB_00107223:
    if (CONCAT44(uStack_9c,local_a0) != 0) {
      StringName::unref();
    }
  }
LAB_00107238:
  StringName::StringName((StringName *)&local_90,"slices/amount",false);
  if ((*(long *)(param_4 + 8) != 0) && (*(int *)(param_4 + 0x2c) != 0)) {
    uVar145 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
    lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
    if (local_90 == (Resource *)0x0) {
      uVar146 = StringName::get_empty_hash();
    }
    else {
      uVar146 = *(uint *)((long)local_90 + 0x20);
    }
    uVar147 = CONCAT44(0,uVar145);
    if (uVar146 == 0) {
      uVar146 = 1;
    }
    uVar158 = 0;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = (ulong)uVar146 * lVar150;
    auVar124._8_8_ = 0;
    auVar124._0_8_ = uVar147;
    lVar151 = SUB168(auVar60 * auVar124,8);
    uVar157 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
    iVar143 = SUB164(auVar60 * auVar124,8);
    if (uVar157 != 0) {
      do {
        if ((uVar146 == uVar157) &&
           ((Resource *)*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) ==
            local_90)) {
          StringName::StringName((StringName *)&local_88,"slices/amount",false);
          if ((*(long *)(param_4 + 8) == 0) || (*(int *)(param_4 + 0x2c) == 0)) goto LAB_00106a98;
          uVar145 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4);
          uVar147 = CONCAT44(0,uVar145);
          lVar150 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_4 + 0x28) * 8);
          if (local_88 == (Object *)0x0) {
            uVar146 = StringName::get_empty_hash();
          }
          else {
            uVar146 = *(uint *)((long)local_88 + 0x20);
          }
          if (uVar146 == 0) {
            uVar146 = 1;
          }
          auVar64._8_8_ = 0;
          auVar64._0_8_ = (ulong)uVar146 * lVar150;
          auVar128._8_8_ = 0;
          auVar128._0_8_ = uVar147;
          lVar151 = SUB168(auVar64 * auVar128,8);
          uVar157 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
          uVar158 = SUB164(auVar64 * auVar128,8);
          if (uVar157 == 0) goto LAB_00106a98;
          uVar159 = 0;
          goto LAB_0010743a;
        }
        uVar158 = uVar158 + 1;
        auVar61._8_8_ = 0;
        auVar61._0_8_ = (ulong)(iVar143 + 1) * lVar150;
        auVar125._8_8_ = 0;
        auVar125._0_8_ = uVar147;
        lVar151 = SUB168(auVar61 * auVar125,8);
        uVar157 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
        iVar143 = SUB164(auVar61 * auVar125,8);
      } while ((uVar157 != 0) &&
              (auVar62._8_8_ = 0, auVar62._0_8_ = (ulong)uVar157 * lVar150, auVar126._8_8_ = 0,
              auVar126._0_8_ = uVar147, auVar63._8_8_ = 0,
              auVar63._0_8_ = (ulong)((uVar145 + iVar143) - SUB164(auVar62 * auVar126,8)) * lVar150,
              auVar127._8_8_ = 0, auVar127._0_8_ = uVar147, uVar158 <= SUB164(auVar63 * auVar127,8))
              );
    }
  }
  iVar143 = 0;
LAB_0010749e:
  if (StringName::configured != '\0') {
LAB_001074a2:
    if (local_90 != (Resource *)0x0) {
      StringName::unref();
    }
  }
LAB_001074b7:
  local_168 = (Vector<Ref<Image>> *)&local_88;
  if (*(int *)(this + 0x17c) - 1U < 2) {
    if (uVar140 < 4) {
      local_184 = *(int *)(CSWTCH_1394 + (ulong)uVar140 * 4);
      local_15c = *(int *)(CSWTCH_1395 + (ulong)uVar140 * 4);
    }
    if (*(int *)(this + 0x17c) == 2) {
      if (iVar141 == 0) {
        local_184 = local_184 * iVar143;
      }
      else {
        local_15c = local_15c * iVar143;
      }
    }
  }
  this_01 = (Resource *)operator_new(0x268,"");
  pRVar155 = this_01;
  for (lVar150 = 0x4d; lVar150 != 0; lVar150 = lVar150 + -1) {
    *(undefined8 *)pRVar155 = 0;
    pRVar155 = pRVar155 + (ulong)bVar163 * -0x10 + 8;
  }
  Resource::Resource(this_01);
  this_01[0x260] = (Resource)0x0;
  *(code **)this_01 = Memory::free_static;
  *(undefined4 *)(this_01 + 0x240) = 0;
  *(undefined8 *)(this_01 + 0x250) = 0;
  *(undefined8 *)(this_01 + 600) = 0;
  postinitialize_handler((Object *)this_01);
  cVar136 = RefCounted::init_ref();
  if (cVar136 == '\0') {
LAB_00107599:
    local_88 = (Object *)0x0;
    this_01 = (Resource *)0x0;
    local_90 = (Resource *)0x0;
  }
  else {
    cVar136 = RefCounted::reference();
    if (cVar136 == '\0') {
      cVar136 = RefCounted::unreference();
      if (cVar136 != '\0') {
        memdelete<Image>((Image *)this_01);
      }
      goto LAB_00107599;
    }
    cVar136 = RefCounted::unreference();
    if (cVar136 != '\0') {
      memdelete<Image>((Image *)this_01);
    }
    local_88 = (Object *)0x0;
    local_90 = this_01;
    cVar136 = RefCounted::reference();
    if (cVar136 == '\0') {
      local_90 = (Resource *)0x0;
    }
  }
  iVar141 = ImageLoader::load_image(param_2,(StringName *)&local_90,local_168);
  if ((local_90 != (Resource *)0x0) && (cVar136 = RefCounted::unreference(), cVar136 != '\0')) {
    memdelete<Image>((Image *)local_90);
  }
  if (((local_88 != (Object *)0x0) &&
      (cVar136 = RefCounted::unreference(), pOVar133 = local_88, cVar136 != '\0')) &&
     (cVar136 = predelete_handler(local_88), cVar136 != '\0')) {
    (**(code **)(*(long *)pOVar133 + 0x140))(pOVar133);
    Memory::free_static(pOVar133,false);
  }
  if (iVar141 == 0) {
    if (iVar137 == 2) {
      if (iVar139 != 0) {
        iVar143 = Image::get_format();
        if (iVar143 < 5) {
          Image::optimize_channels();
        }
        goto LAB_00107e80;
      }
      iVar139 = Image::get_format();
      if ((iVar139 == 5) && (iVar139 = Image::detect_alpha(), iVar139 == 0)) {
        Image::convert(this_01,4);
      }
LAB_0010763b:
      local_a0 = 1;
      uVar142 = 1;
    }
    else {
      if (iVar139 == 0) goto LAB_0010763b;
LAB_00107e80:
      local_a0 = 0;
      if (iVar139 == 2) {
        local_a0 = 2;
        uVar142 = 2;
      }
      else {
        uVar142 = 0;
      }
    }
    uVar142 = Image::detect_used_channels(this_01,uVar142);
    local_80 = 0;
    iVar139 = Image::get_width();
    iVar143 = Image::get_height();
    iVar162 = (int)((long)iVar143 / (long)local_15c);
    if ((0 < local_15c) && (0 < local_184)) {
      iVar161 = (int)((long)iVar139 / (long)local_184);
      iVar152 = 0;
      iVar149 = 0;
      do {
        iVar153 = 0;
        iVar160 = 0;
LAB_0010773c:
        do {
          local_58 = CONCAT44(iVar149,iVar153);
          uStack_50 = CONCAT44(iVar162,iVar161);
          Image::get_region((Rect2i *)&local_98);
          if ((local_98 == (Image *)0x0) || (cVar136 = Image::is_empty(), cVar136 != '\0')) {
            _err_print_error("import","editor/import/resource_importer_layered_texture.cpp",0x173,
                             "Condition \"slice.is_null() || slice->is_empty()\" is true. Continuing."
                             ,0,0);
          }
          else {
            iVar144 = Image::get_width();
            if ((iVar144 != iVar161) || (iVar144 = Image::get_height(), iVar144 != iVar162)) {
              Image::resize(local_98,(long)iVar139 / (long)local_184 & 0xffffffff,
                            (long)iVar143 / (long)local_15c & 0xffffffff,1);
            }
            pIVar2 = local_98;
            if (local_98 != (Image *)0x0) {
              local_90 = (Resource *)local_98;
              cVar136 = RefCounted::reference();
              if (cVar136 != '\0') {
                Vector<Ref<Image>>::push_back(local_168,(StringName *)&local_90);
                cVar136 = RefCounted::unreference();
                if (cVar136 != '\0') {
                  memdelete<Image>(pIVar2);
                }
                goto LAB_00107710;
              }
            }
            local_90 = (Resource *)0x0;
            Vector<Ref<Image>>::push_back(local_168,(StringName *)&local_90);
          }
LAB_00107710:
          if ((local_98 == (Image *)0x0) || (cVar136 = RefCounted::unreference(), cVar136 == '\0'))
          {
            iVar160 = iVar160 + 1;
            iVar153 = iVar153 + iVar161;
            if (local_184 == iVar160) break;
            goto LAB_0010773c;
          }
          iVar160 = iVar160 + 1;
          iVar153 = iVar153 + iVar161;
          memdelete<Image>(local_98);
        } while (local_184 != iVar160);
        iVar149 = iVar149 + iVar162;
        iVar152 = iVar152 + 1;
      } while (local_15c != iVar152);
    }
    local_190 = (Array *)&local_98;
    Array::Array(local_190);
    this_02 = (RefCounted *)operator_new(0x1f8,"");
    pRVar156 = this_02;
    for (lVar150 = 0x3f; lVar150 != 0; lVar150 = lVar150 + -1) {
      *(undefined8 *)pRVar156 = 0;
      pRVar156 = pRVar156 + (ulong)bVar163 * -0x10 + 8;
    }
    RefCounted::RefCounted(this_02);
    *(undefined8 *)(this_02 + 0x1b8) = 2;
    *(undefined ***)this_02 = &PTR__initialize_classv_0010ccd0;
    *(undefined1 (*) [16])(this_02 + 0x180) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_02 + 0x198) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_02 + 0x1a8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_02 + 0x1c0) = (undefined1  [16])0x0;
    Array::Array((Array *)(this_02 + 0x1d0));
    *(undefined8 *)(this_02 + 0x1d8) = 0;
    *(undefined2 *)(this_02 + 0x1ec) = 1;
    *(undefined8 *)(this_02 + 0x1e0) = 0x3f80000000000000;
    *(undefined4 *)(this_02 + 0x1e8) = 0;
    *(undefined4 *)(this_02 + 0x1f0) = 5;
    postinitialize_handler((Object *)this_02);
    cVar136 = RefCounted::init_ref();
    if (cVar136 == '\0') {
                    /* WARNING: Does not return */
      pcVar132 = (code *)invalidInstructionException();
      _DAT_00000180 = (StringName *)&local_a0;
      (*pcVar132)();
    }
    cVar136 = RefCounted::reference();
    pLVar154 = (LayeredTextureImport *)0x0;
    if (cVar136 != '\0') {
      pLVar154 = (LayeredTextureImport *)this_02;
    }
    cVar136 = RefCounted::unreference();
    if (cVar136 != '\0') {
      memdelete<LayeredTextureImport>((LayeredTextureImport *)this_02);
    }
    *(StringName **)(pLVar154 + 0x180) = (StringName *)&local_a0;
    if (*(long *)(pLVar154 + 0x188) != *(long *)param_3) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pLVar154 + 0x188),(CowData *)param_3);
    }
    this_00 = (HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
               *)(pLVar154 + 400);
    if (this_00 !=
        (HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
         *)param_4) {
      uVar140 = *(uint *)(pLVar154 + 0x1b8);
      uVar145 = *(uint *)(hash_table_size_primes + (ulong)uVar140 * 4);
      if ((*(int *)(pLVar154 + 0x1bc) != 0) && (*(long *)(pLVar154 + 0x198) != 0)) {
        if (uVar145 != 0) {
          lVar150 = 0;
          do {
            if (*(int *)(*(long *)(pLVar154 + 0x1a0) + lVar150) != 0) {
              *(int *)(*(long *)(pLVar154 + 0x1a0) + lVar150) = 0;
              pvVar3 = *(void **)(*(long *)(pLVar154 + 0x198) + lVar150 * 2);
              if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x18)] != '\0') {
                Variant::_clear_internal();
              }
              if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
                StringName::unref();
              }
              Memory::free_static(pvVar3,false);
              *(undefined8 *)(*(long *)(pLVar154 + 0x198) + lVar150 * 2) = 0;
            }
            lVar150 = lVar150 + 4;
          } while (lVar150 != (ulong)uVar145 << 2);
          uVar140 = *(uint *)(pLVar154 + 0x1b8);
          uVar145 = *(uint *)(hash_table_size_primes + (ulong)uVar140 * 4);
        }
        *(undefined4 *)(pLVar154 + 0x1bc) = 0;
        *(undefined1 (*) [16])(pLVar154 + 0x1a8) = (undefined1  [16])0x0;
      }
      if (uVar145 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4)) {
        if (uVar140 != 0x1c) {
          uVar147 = (ulong)uVar140;
          do {
            uVar145 = (int)uVar147 + 1;
            uVar147 = (ulong)uVar145;
            if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_4 + 0x28) * 4) <=
                *(uint *)(hash_table_size_primes + uVar147 * 4)) {
              if (uVar145 != uVar140) {
                if (*(long *)(pLVar154 + 0x198) == 0) {
                  *(uint *)(pLVar154 + 0x1b8) = uVar145;
                }
                else {
                  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                  ::_resize_and_rehash(this_00,uVar145);
                }
              }
              goto LAB_00107b38;
            }
          } while (uVar145 != 0x1c);
        }
        _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                         "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0
                         ,0);
      }
LAB_00107b38:
      if (*(long *)(param_4 + 8) != 0) {
        for (puVar1 = *(undefined8 **)(param_4 + 0x18); puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)*puVar1) {
          HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
          ::insert((StringName *)&local_90,(Variant *)this_00,(bool)((char)puVar1 + '\x10'));
        }
      }
    }
    pIVar2 = *(Image **)(pLVar154 + 0x1c8);
    *(List **)(pLVar154 + 0x1c0) = param_5;
    if (pIVar2 != (Image *)this_01) {
      *(Resource **)(pLVar154 + 0x1c8) = this_01;
      cVar136 = RefCounted::reference();
      if (cVar136 == '\0') {
        *(undefined8 *)(pLVar154 + 0x1c8) = 0;
      }
      if ((pIVar2 != (Image *)0x0) && (cVar136 = RefCounted::unreference(), cVar136 != '\0')) {
        memdelete<Image>(pIVar2);
      }
    }
    Array::operator=((Array *)(pLVar154 + 0x1d0),local_190);
    *(undefined4 *)(pLVar154 + 0x1f0) = uVar142;
    *(Vector<Ref<Image>> **)(pLVar154 + 0x1d8) = local_168;
    *(float *)(pLVar154 + 0x1e4) = fVar164;
    *(int *)(pLVar154 + 0x1e0) = iVar137;
    *(int *)(pLVar154 + 0x1e8) = iVar138;
    pLVar154[0x1ec] = LVar135;
    pLVar154[0x1ed] = LVar134;
    local_90 = (Resource *)pLVar154;
    cVar136 = RefCounted::reference();
    if (cVar136 == '\0') {
      local_90 = (Resource *)0x0;
      _check_compress_ctex(this,param_2,(StringName *)&local_90);
    }
    else {
      _check_compress_ctex(this,param_2,(StringName *)&local_90);
      cVar136 = RefCounted::unreference();
      if (cVar136 != '\0') {
        memdelete<LayeredTextureImport>(pLVar154);
      }
    }
    if (param_7 != (Variant *)0x0) {
      Dictionary::Dictionary((Dictionary *)&local_90);
      Variant::Variant((Variant *)&local_58,iVar137 == 2);
      Variant::Variant((Variant *)local_78,"vram_texture");
      pVVar148 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
      if (pVVar148 != (Variant *)&local_58) {
        if (Variant::needs_deinit[*(int *)pVVar148] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar148 = 0;
        *(int *)pVVar148 = (int)local_58;
        *(undefined8 *)(pVVar148 + 8) = uStack_50;
        *(undefined8 *)(pVVar148 + 0x10) = uStack_48;
        local_58 = local_58 & 0xffffffff00000000;
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      iVar137 = Array::size();
      if (iVar137 != 0) {
        Variant::Variant((Variant *)&local_58,local_190);
        Variant::Variant((Variant *)local_78,"imported_formats");
        pVVar148 = (Variant *)Dictionary::operator[]((Variant *)&local_90);
        if (pVVar148 != (Variant *)&local_58) {
          if (Variant::needs_deinit[*(int *)pVVar148] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar148 = 0;
          *(int *)pVVar148 = (int)local_58;
          *(undefined8 *)(pVVar148 + 8) = uStack_50;
          *(undefined8 *)(pVVar148 + 0x10) = uStack_48;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
      }
      Variant::Variant((Variant *)&local_58,(Dictionary *)&local_90);
      if (Variant::needs_deinit[*(int *)param_7] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_7 = (int)local_58;
      *(undefined8 *)(param_7 + 8) = uStack_50;
      *(undefined8 *)(param_7 + 0x10) = uStack_48;
      Dictionary::~Dictionary((Dictionary *)&local_90);
    }
    cVar136 = RefCounted::unreference();
    if (cVar136 != '\0') {
      memdelete<LayeredTextureImport>(pLVar154);
    }
    Array::~Array(local_190);
    CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)&local_80);
  }
  else if (this_01 == (Resource *)0x0) goto LAB_00107daf;
  cVar136 = RefCounted::unreference();
  if (cVar136 != '\0') {
    memdelete<Image>((Image *)this_01);
  }
LAB_00107daf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar141;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    uVar159 = uVar159 + 1;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = (ulong)(uVar158 + 1) * lVar150;
    auVar129._8_8_ = 0;
    auVar129._0_8_ = uVar147;
    lVar151 = SUB168(auVar65 * auVar129,8);
    uVar157 = *(uint *)(*(long *)(param_4 + 0x10) + lVar151 * 4);
    uVar158 = SUB164(auVar65 * auVar129,8);
    if ((uVar157 == 0) ||
       (auVar66._8_8_ = 0, auVar66._0_8_ = (ulong)uVar157 * lVar150, auVar130._8_8_ = 0,
       auVar130._0_8_ = uVar147, auVar67._8_8_ = 0,
       auVar67._0_8_ = (ulong)((uVar145 + uVar158) - SUB164(auVar66 * auVar130,8)) * lVar150,
       auVar131._8_8_ = 0, auVar131._0_8_ = uVar147, SUB164(auVar67 * auVar131,8) < uVar159)) break;
LAB_0010743a:
    if ((uVar157 == uVar146) &&
       ((Object *)*(long *)(*(long *)(*(long *)(param_4 + 8) + lVar151 * 8) + 0x10) == local_88)) {
      iVar143 = Variant::operator_cast_to_int
                          ((Variant *)
                           (*(long *)(*(long *)(param_4 + 8) + (ulong)uVar158 * 8) + 0x18));
      if (StringName::configured == '\0') goto LAB_001074b7;
      if (local_88 == (Object *)0x0) goto LAB_001074a2;
      StringName::unref();
      goto LAB_0010749e;
    }
  }
LAB_00106a98:
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar132 = (code *)invalidInstructionException();
  (*pcVar132)();
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
  return (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* LayeredTextureImport::is_class_ptr(void*) const */

uint __thiscall LayeredTextureImport::is_class_ptr(LayeredTextureImport *this,void *param_1)

{
  return (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* LayeredTextureImport::_getv(StringName const&, Variant&) const */

undefined8 LayeredTextureImport::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* LayeredTextureImport::_setv(StringName const&, Variant const&) */

undefined8 LayeredTextureImport::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* LayeredTextureImport::_validate_propertyv(PropertyInfo&) const */

void LayeredTextureImport::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* LayeredTextureImport::_property_can_revertv(StringName const&) const */

undefined8 LayeredTextureImport::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* LayeredTextureImport::_property_get_revertv(StringName const&, Variant&) const */

undefined8 LayeredTextureImport::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* LayeredTextureImport::_notificationv(int, bool) */

void LayeredTextureImport::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceImporterLayeredTexture::is_class_ptr(void*) const */

uint __thiscall
ResourceImporterLayeredTexture::is_class_ptr(ResourceImporterLayeredTexture *this,void *param_1)

{
  return (uint)CONCAT71(0x10d0,(undefined4 *)param_1 ==
                               &ResourceImporter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceImporterLayeredTexture::_getv(StringName const&, Variant&) const */

undefined8 ResourceImporterLayeredTexture::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterLayeredTexture::_setv(StringName const&, Variant const&) */

undefined8 ResourceImporterLayeredTexture::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterLayeredTexture::_validate_propertyv(PropertyInfo&) const */

void ResourceImporterLayeredTexture::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ResourceImporterLayeredTexture::_property_can_revertv(StringName const&) const */

undefined8 ResourceImporterLayeredTexture::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ResourceImporterLayeredTexture::_property_get_revertv(StringName const&, Variant&) const */

undefined8
ResourceImporterLayeredTexture::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceImporterLayeredTexture::_notificationv(int, bool) */

void ResourceImporterLayeredTexture::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ResourceImporterLayeredTexture::can_import_threaded() const */

undefined8 ResourceImporterLayeredTexture::can_import_threaded(void)

{
  return 1;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010cb70;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010cb70;
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



/* ResourceImporterLayeredTexture::_get_class_namev() const */

undefined8 * ResourceImporterLayeredTexture::_get_class_namev(void)

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
LAB_001085d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001085d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "ResourceImporterLayeredTexture");
      goto LAB_0010863e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceImporterLayeredTexture")
  ;
LAB_0010863e:
  return &_get_class_namev()::_class_name_static;
}



/* LayeredTextureImport::_get_class_namev() const */

undefined8 * LayeredTextureImport::_get_class_namev(void)

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
LAB_001086c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001086c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"LayeredTextureImport");
      goto LAB_0010872e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"LayeredTextureImport");
LAB_0010872e:
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
LAB_001087a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001087a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010880e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010880e:
  return &_get_class_namev()::_class_name_static;
}



/* ResourceImporterLayeredTexture::get_class() const */

void ResourceImporterLayeredTexture::get_class(void)

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



/* LayeredTextureImport::get_class() const */

void LayeredTextureImport::get_class(void)

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
            if (lVar5 == 0) goto LAB_001091df;
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
LAB_001091df:
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
    if (cVar6 != '\0') goto LAB_00109293;
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
              if (lVar5 == 0) goto LAB_00109343;
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
LAB_00109343:
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
      if (cVar6 != '\0') goto LAB_00109293;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00109293:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LayeredTextureImport::is_class(String const&) const */

undefined8 __thiscall LayeredTextureImport::is_class(LayeredTextureImport *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010946f;
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
LAB_0010946f:
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
    if (cVar5 != '\0') goto LAB_00109523;
  }
  cVar5 = String::operator==(param_1,"LayeredTextureImport");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00109523:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceImporterLayeredTexture::is_class(String const&) const */

undefined8 __thiscall
ResourceImporterLayeredTexture::is_class(ResourceImporterLayeredTexture *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001095ff;
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
LAB_001095ff:
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
    if (cVar6 != '\0') goto LAB_001096b3;
  }
  cVar6 = String::operator==(param_1,"ResourceImporterLayeredTexture");
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
              if (lVar5 == 0) goto LAB_00109773;
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
LAB_00109773:
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
      if (cVar6 != '\0') goto LAB_001096b3;
    }
    cVar6 = String::operator==(param_1,"ResourceImporter");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010981c;
    }
  }
LAB_001096b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010981c:
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
LAB_00109b38:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109b38;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00109b56;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00109b56:
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



/* LayeredTextureImport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
LayeredTextureImport::_get_property_listv(LayeredTextureImport *this,List *param_1,bool param_2)

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
  local_78 = "LayeredTextureImport";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "LayeredTextureImport";
  local_98 = 0;
  local_70 = 0x14;
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
LAB_00109f38:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109f38;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00109f55;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00109f55:
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
  StringName::StringName((StringName *)&local_78,"LayeredTextureImport",false);
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



/* LayeredTextureImport::_initialize_classv() */

void LayeredTextureImport::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_0010a364;
  if (RefCounted::initialize_class()::initialized == '\0') {
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
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 == 0) {
LAB_0010a46e:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_0010a47e:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010a46e;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010a47e;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_48 = "RefCounted";
  local_58 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "LayeredTextureImport";
  local_60 = 0;
  local_40 = 0x14;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
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
  initialize_class()::initialized = '\x01';
LAB_0010a364:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ResourceImporterLayeredTexture::_initialize_classv() */

void ResourceImporterLayeredTexture::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_00110008 != RefCounted::_bind_methods) {
        ResourceImporter::_bind_methods();
      }
      ResourceImporter::initialize_class()::initialized = '\x01';
    }
    local_58 = "ResourceImporter";
    local_68 = 0;
    local_50 = 0x10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceImporterLayeredTexture";
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
LAB_0010ac98:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ac98;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010acb5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010acb5:
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



/* ResourceImporterLayeredTexture::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
ResourceImporterLayeredTexture::_get_property_listv
          (ResourceImporterLayeredTexture *this,List *param_1,bool param_2)

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
  local_78 = "ResourceImporterLayeredTexture";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceImporterLayeredTexture";
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
LAB_0010b0e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010b0e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010b105;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010b105:
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
  StringName::StringName((StringName *)&local_78,"ResourceImporterLayeredTexture",false);
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



/* ResourceImporter::ImportOption::~ImportOption() */

void __thiscall ResourceImporter::ImportOption::~ImportOption(ImportOption *this)

{
  long *plVar1;
  long lVar2;
  
  if (Variant::needs_deinit[*(int *)(this + 0x30)] != '\0') {
    Variant::_clear_internal();
  }
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



/* LayeredTextureImport::~LayeredTextureImport() */

void __thiscall LayeredTextureImport::~LayeredTextureImport(LayeredTextureImport *this)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ccd0;
  Array::~Array((Array *)(this + 0x1d0));
  if (*(long *)(this + 0x1c8) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x1c8));
    }
  }
  pvVar5 = *(void **)(this + 0x198);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1bc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1bc) = 0;
        *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1a0) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x1a0) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x198);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1bc) = 0;
        *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010b755;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1a0),false);
  }
LAB_0010b755:
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010cb70;
  Object::~Object((Object *)this);
  return;
}



/* LayeredTextureImport::~LayeredTextureImport() */

void __thiscall LayeredTextureImport::~LayeredTextureImport(LayeredTextureImport *this)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ccd0;
  Array::~Array((Array *)(this + 0x1d0));
  if (*(long *)(this + 0x1c8) != 0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(*(Image **)(this + 0x1c8));
    }
  }
  pvVar5 = *(void **)(this + 0x198);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x1bc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1bc) = 0;
        *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1a0) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x1a0) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x198);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1bc) = 0;
        *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010b925;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x1a0),false);
  }
LAB_0010b925:
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010cb70;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
}



/* CowData<Ref<Image> >::_unref() */

void __thiscall CowData<Ref<Image>>::_unref(CowData<Ref<Image>> *this)

{
  long *plVar1;
  long lVar2;
  Image *pIVar3;
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
LAB_0010ba55:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pIVar3 = (Image *)*plVar6;
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
          memdelete<Image>(pIVar3);
          if (lVar2 == lVar7) break;
          goto LAB_0010ba55;
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Image>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceImporterLayeredTexture::import(long, String const&, String const&, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, List<String, DefaultAllocator>*, Variant*) [clone .cold] */

void ResourceImporterLayeredTexture::import
               (long param_1,String *param_2,String *param_3,HashMap *param_4,List *param_5,
               List *param_6,Variant *param_7)

{
  code *pcVar1;
  undefined8 in_stack_00000078;
  
  _DAT_00000180 = in_stack_00000078;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* void memdelete<LayeredTextureImport>(LayeredTextureImport*) */

void memdelete<LayeredTextureImport>(LayeredTextureImport *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  void *pvVar5;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) != LayeredTextureImport::~LayeredTextureImport) {
    (**(code **)(*(long *)param_1 + 0x140))(param_1);
    goto LAB_0010bc30;
  }
  *(undefined ***)param_1 = &PTR__initialize_classv_0010ccd0;
  Array::~Array((Array *)(param_1 + 0x1d0));
  if ((*(long *)(param_1 + 0x1c8) != 0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    memdelete<Image>(*(Image **)(param_1 + 0x1c8));
  }
  pvVar5 = *(void **)(param_1 + 0x198);
  if (pvVar5 == (void *)0x0) {
LAB_0010bc06:
    lVar4 = *(long *)(param_1 + 0x188);
  }
  else {
    if (*(int *)(param_1 + 0x1bc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x1b8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x1bc) = 0;
        *(undefined1 (*) [16])(param_1 + 0x1a8) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x1a0) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(param_1 + 0x1a0) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(param_1 + 0x198);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(param_1 + 0x1bc) = 0;
        *(undefined1 (*) [16])(param_1 + 0x1a8) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010bc06;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(param_1 + 0x1a0),false);
    lVar4 = *(long *)(param_1 + 0x188);
  }
  if (lVar4 != 0) {
    LOCK();
    plVar1 = (long *)(lVar4 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(param_1 + 0x188);
      *(undefined8 *)(param_1 + 0x188) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  *(undefined ***)param_1 = &PTR__initialize_classv_0010cb70;
  Object::~Object((Object *)param_1);
LAB_0010bc30:
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::_resize_and_rehash(unsigned int)
    */

void __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::_resize_and_rehash
          (HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
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
  uint uVar3;
  long lVar4;
  void *__s;
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
  ulong uVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  undefined8 uVar26;
  void *__s_00;
  Variant *in_RCX;
  uint uVar27;
  int iVar28;
  undefined7 in_register_00000011;
  StringName *pSVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  undefined8 *puVar36;
  long in_FS_OFFSET;
  undefined8 *local_90;
  long local_68;
  int local_60 [8];
  long local_40;
  
  pSVar29 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar21 = (ulong)uVar23;
    uVar32 = uVar21 * 4;
    uVar34 = uVar21 * 8;
    uVar26 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar21 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar34);
      }
      goto LAB_0010c032;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0010c129;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0010c03e;
LAB_0010c14b:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_90 = (undefined8 *)0x0;
      goto LAB_0010c303;
    }
    _resize_and_rehash((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_0010c032:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_0010c03e:
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar3);
      lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar29 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar29 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar35 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar24 * lVar25;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar32;
      lVar30 = SUB168(auVar5 * auVar13,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
      uVar27 = SUB164(auVar5 * auVar13,8);
      if (uVar33 != 0) {
        do {
          if ((uVar33 == uVar24) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar30 * 8) + 0x10) == *(long *)pSVar29))
          {
            Variant::operator=((Variant *)
                               (*(long *)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8) + 0x18),in_RCX
                              );
            local_90 = *(undefined8 **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            goto LAB_0010c303;
          }
          uVar35 = uVar35 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar27 + 1) * lVar25;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar32;
          lVar30 = SUB168(auVar6 * auVar14,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
          uVar27 = SUB164(auVar6 * auVar14,8);
        } while ((uVar33 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar33 * lVar25, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar32, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar3 + uVar27) - SUB164(auVar7 * auVar15,8)) * lVar25,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar32, uVar35 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar28 = *(int *)(param_2 + 0x2c);
    }
LAB_0010c129:
    if ((float)uVar23 * __LC66 < (float)(iVar28 + 1)) goto LAB_0010c14b;
  }
  StringName::StringName((StringName *)&local_68,pSVar29);
  Variant::Variant((Variant *)local_60,in_RCX);
  local_90 = (undefined8 *)operator_new(0x30,"");
  *local_90 = 0;
  local_90[1] = 0;
  StringName::StringName((StringName *)(local_90 + 2),(StringName *)&local_68);
  Variant::Variant((Variant *)(local_90 + 3),(Variant *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(param_2 + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(param_2 + 0x18) = local_90;
    *(undefined8 **)(param_2 + 0x20) = local_90;
LAB_0010c222:
    lVar25 = *(long *)pSVar29;
    if (lVar25 != 0) goto LAB_0010c22f;
LAB_0010c365:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      **(undefined8 **)(param_2 + 0x20) = local_90;
      local_90[1] = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 **)(param_2 + 0x20) = local_90;
      goto LAB_0010c222;
    }
    *(undefined8 **)(*(long *)(param_2 + 0x18) + 8) = local_90;
    *local_90 = *(undefined8 *)(param_2 + 0x18);
    lVar25 = *(long *)pSVar29;
    *(undefined8 **)(param_2 + 0x18) = local_90;
    if (lVar25 == 0) goto LAB_0010c365;
LAB_0010c22f:
    uVar23 = *(uint *)(lVar25 + 0x20);
  }
  lVar25 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar32 = (ulong)uVar23;
  uVar33 = 0;
  lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar3);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar32 * lVar30;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar34;
  lVar31 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar25 + lVar31 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar24 = *puVar1;
  puVar22 = local_90;
  while (uVar24 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar24 * lVar30;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((iVar28 + uVar3) - SUB164(auVar10 * auVar18,8)) * lVar30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    uVar23 = SUB164(auVar11 * auVar19,8);
    puVar36 = puVar22;
    if (uVar23 < uVar33) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar24;
      puVar2 = (undefined8 *)(lVar4 + lVar31 * 8);
      puVar36 = (undefined8 *)*puVar2;
      *puVar2 = puVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar32;
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    lVar31 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar25 + lVar31 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    puVar22 = puVar36;
    uVar24 = *puVar1;
  }
  *(undefined8 **)(lVar4 + lVar31 * 8) = puVar22;
  *puVar1 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010c303:
  *(undefined8 **)param_1 = local_90;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Ref<Image> >::_realloc(long) */

undefined8 __thiscall CowData<Ref<Image>>::_realloc(CowData<Ref<Image>> *this,long param_1)

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
/* Error CowData<Ref<Image> >::resize<false>(long) */

undefined8 __thiscall CowData<Ref<Image>>::resize<false>(CowData<Ref<Image>> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
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
LAB_0010c880:
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
  if (lVar10 == 0) goto LAB_0010c880;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010c74a:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar6 + uVar8 * 8), *plVar1 == 0) {
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010c74a;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        memdelete<Image>((Image *)*plVar1);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_0010c710;
  }
  if (lVar10 == lVar7) {
LAB_0010c7fb:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010c710:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010c7db;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010c7fb;
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
LAB_0010c7db:
  puVar9[-1] = param_1;
  return 0;
}



/* Vector<Ref<Image> >::append_array(Vector<Ref<Image> >) */

void __thiscall Vector<Ref<Image>>::append_array(Vector<Ref<Image>> *this,long param_2)

{
  long lVar1;
  long lVar2;
  Image *pIVar3;
  Image *pIVar4;
  code *pcVar5;
  char cVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_2 + 8) + -8);
  if (lVar1 != 0) {
    if (*(long *)(this + 8) == 0) {
      lVar9 = 0;
      lVar8 = lVar1;
    }
    else {
      lVar9 = *(long *)(*(long *)(this + 8) + -8);
      lVar8 = lVar1 + lVar9;
    }
    CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>> *)(this + 8),lVar8);
    if (0 < lVar1) {
      lVar9 = lVar9 << 3;
      lVar8 = 0;
LAB_0010c96d:
      do {
        lVar2 = *(long *)(param_2 + 8);
        if (lVar2 == 0) {
          lVar10 = 0;
LAB_0010ca03:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar10,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar10 = *(long *)(lVar2 + -8);
        if (lVar10 <= lVar8) goto LAB_0010ca03;
        CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>> *)(this + 8));
        pIVar3 = *(Image **)(lVar2 + lVar8 * 8);
        plVar7 = (long *)(*(long *)(this + 8) + lVar9);
        pIVar4 = (Image *)*plVar7;
        if (pIVar3 != pIVar4) {
          *plVar7 = (long)pIVar3;
          if ((pIVar3 != (Image *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
            *plVar7 = 0;
          }
          if ((pIVar4 != (Image *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
            lVar8 = lVar8 + 1;
            lVar9 = lVar9 + 8;
            memdelete<Image>(pIVar4);
            if (lVar8 == lVar1) {
              return;
            }
            goto LAB_0010c96d;
          }
        }
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 8;
        if (lVar8 == lVar1) {
          return;
        }
      } while( true );
    }
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* LayeredTextureImport::~LayeredTextureImport() */

void __thiscall LayeredTextureImport::~LayeredTextureImport(LayeredTextureImport *this)

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


