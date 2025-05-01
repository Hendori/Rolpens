
/* CowData<void (*)()>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<void(*)()>::_copy_on_write(CowData<void(*)()> *this)

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
  __n = lVar2 * 8;
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



/* uninitialize_gdscript_module(ModuleInitializationLevel) */

void uninitialize_gdscript_module(int param_1)

{
  GDScriptCache *pGVar1;
  char cVar2;
  undefined8 uVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 1) {
    ScriptServer::unregister_language(script_language_gd);
    pGVar1 = gdscript_cache;
    if (gdscript_cache != (GDScriptCache *)0x0) {
      GDScriptCache::~GDScriptCache(gdscript_cache);
      Memory::free_static(pGVar1,false);
    }
    pOVar4 = (Object *)script_language_gd;
    if (script_language_gd != (ScriptLanguage *)0x0) {
      cVar2 = predelete_handler((Object *)script_language_gd);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    local_28 = (Object *)0x0;
    if (resource_loader_gd != (Object *)0x0) {
      pOVar4 = (Object *)
               __dynamic_cast(resource_loader_gd,&Object::typeinfo,&ResourceFormatLoader::typeinfo,0
                             );
      if (pOVar4 != (Object *)0x0) {
        local_28 = pOVar4;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_28 = (Object *)0x0;
        }
      }
    }
    ResourceLoader::remove_resource_format_loader(&local_28);
    if (local_28 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar4 = local_28;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_28);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    if (resource_loader_gd != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar4 = resource_loader_gd;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(resource_loader_gd);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    local_28 = (Object *)0x0;
    resource_loader_gd = (Object *)0x0;
    if (resource_saver_gd != (Object *)0x0) {
      pOVar4 = (Object *)
               __dynamic_cast(resource_saver_gd,&Object::typeinfo,&ResourceFormatSaver::typeinfo,0);
      if (pOVar4 != (Object *)0x0) {
        local_28 = pOVar4;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_28 = (Object *)0x0;
        }
      }
    }
    ResourceSaver::remove_resource_format_saver(&local_28);
    if (local_28 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar4 = local_28;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_28);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    if (resource_saver_gd != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar4 = resource_saver_gd;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(resource_saver_gd);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    resource_saver_gd = (Object *)0x0;
    GDScriptParser::cleanup();
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      GDScriptUtilityFunctions::unregister_functions();
      return;
    }
  }
  else {
    if (param_1 == 3) {
      uVar3 = EditorTranslationParser::get_singleton();
      local_28 = (Object *)0x0;
      if (gdscript_translation_parser_plugin != (Object *)0x0) {
        pOVar4 = (Object *)
                 __dynamic_cast(gdscript_translation_parser_plugin,&Object::typeinfo,
                                &EditorTranslationParserPlugin::typeinfo,0);
        if (pOVar4 != (Object *)0x0) {
          local_28 = pOVar4;
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            local_28 = (Object *)0x0;
          }
        }
      }
      EditorTranslationParser::remove_parser(uVar3,&local_28,0);
      if (local_28 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        pOVar4 = local_28;
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(local_28);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      if (gdscript_translation_parser_plugin != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        pOVar4 = gdscript_translation_parser_plugin;
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(gdscript_translation_parser_plugin);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      gdscript_translation_parser_plugin = (Object *)0x0;
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
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



/* Resource::initialize_class() [clone .part.0] */

void Resource::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
    if ((code *)PTR__bind_methods_0010a008 != RefCounted::_bind_methods) {
      RefCounted::_bind_methods();
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "Resource";
  local_70 = 0;
  local_50 = 8;
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
    Resource::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* initialize_gdscript_module(ModuleInitializationLevel) */

void initialize_gdscript_module(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  GDScriptLanguage *this;
  Object *pOVar4;
  RefCounted *this_00;
  GDScriptCache *this_01;
  GDScriptEditorTranslationParserPlugin *this_02;
  undefined8 uVar5;
  long lVar6;
  RefCounted *pRVar7;
  Object *pOVar8;
  long lVar9;
  long in_FS_OFFSET;
  byte bVar10;
  Object *local_38;
  long local_30;
  
  bVar10 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 1) {
    ClassDB::register_class<GDScript>(false);
    this = (GDScriptLanguage *)operator_new(0x2e0,"");
    GDScriptLanguage::GDScriptLanguage(this);
    postinitialize_handler((Object *)this);
    script_language_gd = this;
    ScriptServer::register_language((ScriptLanguage *)this);
    Ref<ResourceFormatLoaderGDScript>::instantiate<>
              ((Ref<ResourceFormatLoaderGDScript> *)&resource_loader_gd);
    local_38 = (Object *)0x0;
    if (((resource_loader_gd != 0) &&
        (pOVar4 = (Object *)
                  __dynamic_cast(resource_loader_gd,&Object::typeinfo,
                                 &ResourceFormatLoader::typeinfo,0), pOVar4 != (Object *)0x0)) &&
       (local_38 = pOVar4, cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      local_38 = (Object *)0x0;
    }
    ResourceLoader::add_resource_format_loader(&local_38);
    if (((local_38 != (Object *)0x0) &&
        (cVar1 = RefCounted::unreference(), pOVar4 = local_38, cVar1 != '\0')) &&
       (cVar1 = predelete_handler(local_38), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    this_00 = (RefCounted *)operator_new(0x1f8,"");
    pRVar7 = this_00;
    for (lVar6 = 0x3f; lVar6 != 0; lVar6 = lVar6 + -1) {
      *(undefined8 *)pRVar7 = 0;
      pRVar7 = pRVar7 + (ulong)bVar10 * -0x10 + 8;
    }
    RefCounted::RefCounted(this_00);
    *(code **)this_00 = ResourceSaver::add_resource_format_saver;
    StringName::StringName((StringName *)(this_00 + 0x180),"_save",false);
    this_00[0x188] = (RefCounted)0x0;
    *(undefined8 *)(this_00 + 400) = 0;
    StringName::StringName((StringName *)(this_00 + 0x198),"_set_uid",false);
    this_00[0x1a0] = (RefCounted)0x0;
    *(undefined8 *)(this_00 + 0x1a8) = 0;
    StringName::StringName((StringName *)(this_00 + 0x1b0),"_recognize",false);
    this_00[0x1b8] = (RefCounted)0x0;
    *(undefined8 *)(this_00 + 0x1c0) = 0;
    StringName::StringName((StringName *)(this_00 + 0x1c8),"_get_recognized_extensions",false);
    this_00[0x1d0] = (RefCounted)0x0;
    *(undefined8 *)(this_00 + 0x1d8) = 0;
    StringName::StringName((StringName *)(this_00 + 0x1e0),"_recognize_path",false);
    this_00[0x1e8] = (RefCounted)0x0;
    *(code **)this_00 = GDScriptCache::GDScriptCache;
    *(undefined8 *)(this_00 + 0x1f0) = 0;
    postinitialize_handler((Object *)this_00);
    local_38 = (Object *)0x0;
    cVar1 = RefCounted::init_ref();
    if (cVar1 == '\0') {
      Ref<ResourceFormatSaverGDScript>::unref((Ref<ResourceFormatSaverGDScript> *)&local_38);
      if (resource_saver_gd != (RefCounted *)0x0) {
        local_38 = (Object *)resource_saver_gd;
        resource_saver_gd = (RefCounted *)0x0;
        Ref<ResourceFormatSaverGDScript>::unref((Ref<ResourceFormatSaverGDScript> *)&local_38);
        goto LAB_001013b0;
      }
LAB_001013e7:
      local_38 = (Object *)0x0;
    }
    else {
      Ref<ResourceFormatSaverGDScript>::unref((Ref<ResourceFormatSaverGDScript> *)&local_38);
      if (this_00 != resource_saver_gd) {
        local_38 = (Object *)resource_saver_gd;
        resource_saver_gd = this_00;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          resource_saver_gd = (RefCounted *)0x0;
          Ref<ResourceFormatSaverGDScript>::unref((Ref<ResourceFormatSaverGDScript> *)&local_38);
        }
        else {
          Ref<ResourceFormatSaverGDScript>::unref((Ref<ResourceFormatSaverGDScript> *)&local_38);
        }
      }
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler((Object *)this_00), cVar1 != '\0')) {
        (**(code **)(*(long *)this_00 + 0x140))(this_00);
        Memory::free_static(this_00,false);
      }
LAB_001013b0:
      local_38 = (Object *)0x0;
      if (((resource_saver_gd != (RefCounted *)0x0) &&
          (pOVar4 = (Object *)
                    __dynamic_cast(resource_saver_gd,&Object::typeinfo,
                                   &ResourceFormatSaver::typeinfo,0), pOVar4 != (Object *)0x0)) &&
         (local_38 = pOVar4, cVar1 = RefCounted::reference(), cVar1 == '\0')) goto LAB_001013e7;
    }
    ResourceSaver::add_resource_format_saver(&local_38);
    if (((local_38 != (Object *)0x0) &&
        (cVar1 = RefCounted::unreference(), pOVar4 = local_38, cVar1 != '\0')) &&
       (cVar1 = predelete_handler(local_38), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    this_01 = (GDScriptCache *)operator_new(0x158,"");
    GDScriptCache::GDScriptCache(this_01);
    gdscript_cache = this_01;
    GDScriptUtilityFunctions::register_functions();
    if (_GDScriptEditorTranslationParserPlugin == 0) {
      lVar6 = 1;
    }
    else {
      lVar6 = *(long *)(_GDScriptEditorTranslationParserPlugin + -8) + 1;
    }
    iVar2 = CowData<void(*)()>::resize<false>
                      ((CowData<void(*)()> *)
                       GDScriptEditorTranslationParserPlugin::GDScriptEditorTranslationParserPlugin,
                       lVar6);
    if (iVar2 == 0) {
      if (_GDScriptEditorTranslationParserPlugin == 0) {
        lVar9 = -1;
        lVar6 = 0;
      }
      else {
        lVar6 = *(long *)(_GDScriptEditorTranslationParserPlugin + -8);
        lVar9 = lVar6 + -1;
        if (-1 < lVar9) {
          CowData<void(*)()>::_copy_on_write
                    ((CowData<void(*)()> *)
                     GDScriptEditorTranslationParserPlugin::GDScriptEditorTranslationParserPlugin);
          *(code **)(_GDScriptEditorTranslationParserPlugin + lVar9 * 8) = _editor_init;
          goto LAB_0010149d;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar6,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
LAB_0010149d:
    this_02 = (GDScriptEditorTranslationParserPlugin *)operator_new(0x288,"");
    GDScriptEditorTranslationParserPlugin::GDScriptEditorTranslationParserPlugin(this_02);
    postinitialize_handler((Object *)this_02);
    cVar1 = RefCounted::init_ref();
    pOVar4 = (Object *)gdscript_translation_parser_plugin;
    if (cVar1 == '\0') {
      if (gdscript_translation_parser_plugin != (GDScriptEditorTranslationParserPlugin *)0x0) {
        gdscript_translation_parser_plugin = (GDScriptEditorTranslationParserPlugin *)0x0;
        cVar1 = RefCounted::unreference();
        if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    else {
      pOVar8 = (Object *)gdscript_translation_parser_plugin;
      if (this_02 != gdscript_translation_parser_plugin) {
        gdscript_translation_parser_plugin = this_02;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          gdscript_translation_parser_plugin = (GDScriptEditorTranslationParserPlugin *)0x0;
        }
        pOVar8 = (Object *)this_02;
        if (((pOVar4 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
           (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar8), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
    uVar5 = EditorTranslationParser::get_singleton();
    local_38 = (Object *)0x0;
    if (((gdscript_translation_parser_plugin != (GDScriptEditorTranslationParserPlugin *)0x0) &&
        (pOVar4 = (Object *)
                  __dynamic_cast(gdscript_translation_parser_plugin,&Object::typeinfo,
                                 &EditorTranslationParserPlugin::typeinfo,0),
        pOVar4 != (Object *)0x0)) &&
       (local_38 = pOVar4, cVar1 = RefCounted::reference(), cVar1 == '\0')) {
      local_38 = (Object *)0x0;
    }
    EditorTranslationParser::add_parser(uVar5,&local_38,0);
    if (((local_38 != (Object *)0x0) &&
        (cVar1 = RefCounted::unreference(), pOVar4 = local_38, cVar1 != '\0')) &&
       (cVar1 = predelete_handler(local_38), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
  else if (param_1 == 3) {
    uVar3 = ClassDB::get_current_api();
    ClassDB::set_current_api();
    ClassDB::register_class<GDScriptSyntaxHighlighter>(false);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      ClassDB::set_current_api(uVar3);
      return;
    }
    goto LAB_00101843;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101843:
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1073,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1073,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* SyntaxHighlighter::is_class_ptr(void*) const */

uint __thiscall SyntaxHighlighter::is_class_ptr(SyntaxHighlighter *this,void *param_1)

{
  return (uint)CONCAT71(0x1073,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1073,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1073,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1073,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SyntaxHighlighter::_getv(StringName const&, Variant&) const */

undefined8 SyntaxHighlighter::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SyntaxHighlighter::_setv(StringName const&, Variant const&) */

undefined8 SyntaxHighlighter::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SyntaxHighlighter::_validate_propertyv(PropertyInfo&) const */

void SyntaxHighlighter::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* SyntaxHighlighter::_property_can_revertv(StringName const&) const */

undefined8 SyntaxHighlighter::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SyntaxHighlighter::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SyntaxHighlighter::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SyntaxHighlighter::_notificationv(int, bool) */

void SyntaxHighlighter::_notificationv(int param_1,bool param_2)

{
  return;
}



/* SyntaxHighlighter::_clear_highlighting_cache() */

void SyntaxHighlighter::_clear_highlighting_cache(void)

{
  return;
}



/* SyntaxHighlighter::_update_cache() */

void SyntaxHighlighter::_update_cache(void)

{
  return;
}



/* EditorExportGDScript::is_class_ptr(void*) const */

uint __thiscall EditorExportGDScript::is_class_ptr(EditorExportGDScript *this,void *param_1)

{
  return (uint)CONCAT71(0x1073,(undefined4 *)param_1 ==
                               &EditorExportPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1073,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1073,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1073,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorExportGDScript::_getv(StringName const&, Variant&) const */

undefined8 EditorExportGDScript::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportGDScript::_setv(StringName const&, Variant const&) */

undefined8 EditorExportGDScript::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportGDScript::_validate_propertyv(PropertyInfo&) const */

void EditorExportGDScript::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorExportGDScript::_property_can_revertv(StringName const&) const */

undefined8 EditorExportGDScript::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorExportGDScript::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorExportGDScript::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportGDScript::_notificationv(int, bool) */

void EditorExportGDScript::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106dc0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106dc0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* SyntaxHighlighter::_get_line_syntax_highlighting_impl(int) */

undefined8 SyntaxHighlighter::_get_line_syntax_highlighting_impl(int param_1)

{
  undefined4 in_register_0000003c;
  
  Dictionary::Dictionary((Dictionary *)CONCAT44(in_register_0000003c,param_1));
  return CONCAT44(in_register_0000003c,param_1);
}



/* Object* ClassDB::creator<GDScript>(bool) */

Object * ClassDB::creator<GDScript>(bool param_1)

{
  GDScript *this;
  
  this = (GDScript *)operator_new(0x780,"");
  GDScript::GDScript(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* CowData<void (*)()>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<void(*)()>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SyntaxHighlighter::_get_class_namev() const */

undefined8 * SyntaxHighlighter::_get_class_namev(void)

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
LAB_00101ed3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101ed3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SyntaxHighlighter");
      goto LAB_00101f3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SyntaxHighlighter");
LAB_00101f3e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorExportGDScript::_export_begin(HashSet<String, HashMapHasherDefault,
   HashMapComparatorDefault<String> > const&, bool, String const&, int) */

void EditorExportGDScript::_export_begin(HashSet *param_1,bool param_2,String *param_3,int param_4)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  Object *local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0x458) = 2;
  EditorExportPlugin::get_export_preset();
  if (local_18 != (Object *)0x0) {
    uVar3 = EditorExportPreset::get_script_export_mode();
    *(undefined4 *)(param_1 + 0x458) = uVar3;
    if (local_18 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_18);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_18 + 0x140))(local_18);
          Memory::free_static(local_18,false);
        }
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RBMap<int, Dictionary, Comparator<int>, DefaultAllocator>::_cleanup_tree(RBMap<int, Dictionary,
   Comparator<int>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
          (RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *this,Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
          Memory::free_static(pEVar2,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
        Memory::free_static(pEVar2,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
      Memory::free_static(pEVar2,false);
    }
    Dictionary::~Dictionary((Dictionary *)(pEVar1 + 0x38));
    Memory::free_static(pEVar1,false);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
          Memory::free_static(pEVar2,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
        Memory::free_static(pEVar2,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
      Memory::free_static(pEVar3,false);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
        Memory::free_static(pEVar5,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
      Memory::free_static(pEVar2,false);
    }
    Dictionary::~Dictionary((Dictionary *)(pEVar1 + 0x38));
    Memory::free_static(pEVar1,false);
  }
  Dictionary::~Dictionary((Dictionary *)(param_1 + 0x38));
  Memory::free_static(param_1,false);
  return;
}



/* Ref<ResourceFormatSaverGDScript>::~Ref() */

void __thiscall Ref<ResourceFormatSaverGDScript>::~Ref(Ref<ResourceFormatSaverGDScript> *this)

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
        return;
      }
    }
  }
  return;
}



/* Ref<ResourceFormatLoaderGDScript>::~Ref() */

void __thiscall Ref<ResourceFormatLoaderGDScript>::~Ref(Ref<ResourceFormatLoaderGDScript> *this)

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
        return;
      }
    }
  }
  return;
}



/* Ref<GDScriptEditorTranslationParserPlugin>::~Ref() */

void __thiscall
Ref<GDScriptEditorTranslationParserPlugin>::~Ref(Ref<GDScriptEditorTranslationParserPlugin> *this)

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
        return;
      }
    }
  }
  return;
}



/* SyntaxHighlighter::~SyntaxHighlighter() */

void __thiscall SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this)

{
  RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *this_00;
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  void *pvVar4;
  Element *pEVar5;
  Element *pEVar6;
  bool bVar7;
  
  bVar7 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00106f20;
  if (bVar7) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010296c;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010296c;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
    }
  }
LAB_0010296c:
  pvVar4 = *(void **)(this + 0x240);
  if (pvVar4 != (void *)0x0) {
    pEVar1 = *(Element **)((long)pvVar4 + 0x10);
    pEVar2 = *(Element **)(this + 0x248);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      this_00 = (RBMap<int,Dictionary,Comparator<int>,DefaultAllocator> *)(this + 0x240);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar5 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar5) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar5);
            pEVar5 = *(Element **)(this + 0x248);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 0x248);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar6) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar5 != pEVar6) {
            if (*(Element **)(pEVar5 + 0x10) != pEVar6) {
              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                        (this_00,*(Element **)(pEVar5 + 0x10));
              pEVar6 = *(Element **)(this + 0x248);
            }
            if (pEVar6 != *(Element **)(pEVar5 + 8)) {
              RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                        (this_00,*(Element **)(pEVar5 + 8));
            }
            Dictionary::~Dictionary((Dictionary *)(pEVar5 + 0x38));
            Memory::free_static(pEVar5,false);
            pEVar6 = *(Element **)(this + 0x248);
          }
          if (pEVar6 != *(Element **)(pEVar2 + 8)) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar2 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
          Memory::free_static(pEVar2,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
        Memory::free_static(pEVar3,false);
        pEVar3 = *(Element **)(this + 0x248);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar3 != pEVar6) {
          pEVar5 = *(Element **)(pEVar6 + 0x10);
          if (pEVar3 != pEVar5) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar5);
            pEVar5 = *(Element **)(this + 0x248);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar6 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar6 + 0x38));
          Memory::free_static(pEVar6,false);
          pEVar6 = *(Element **)(this + 0x248);
        }
        pEVar3 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar3) {
          pEVar5 = *(Element **)(pEVar3 + 0x10);
          if (pEVar6 != pEVar5) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree(this_00,pEVar5);
            pEVar5 = *(Element **)(this + 0x248);
          }
          if (pEVar5 != *(Element **)(pEVar3 + 8)) {
            RBMap<int,Dictionary,Comparator<int>,DefaultAllocator>::_cleanup_tree
                      (this_00,*(Element **)(pEVar3 + 8));
          }
          Dictionary::~Dictionary((Dictionary *)(pEVar3 + 0x38));
          Memory::free_static(pEVar3,false);
        }
        Dictionary::~Dictionary((Dictionary *)(pEVar2 + 0x38));
        Memory::free_static(pEVar2,false);
      }
      Dictionary::~Dictionary((Dictionary *)(pEVar1 + 0x38));
      Memory::free_static(pEVar1,false);
      pvVar4 = *(void **)(this + 0x240);
      pEVar2 = *(Element **)(this + 0x248);
    }
    *(Element **)((long)pvVar4 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x250) = 0;
    Dictionary::~Dictionary((Dictionary *)((long)pvVar4 + 0x38));
    Memory::free_static(pvVar4,false);
  }
  Resource::~Resource((Resource *)this);
  return;
}



/* SyntaxHighlighter::~SyntaxHighlighter() */

void __thiscall SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this)

{
  ~SyntaxHighlighter(this);
  operator_delete(this,0x2b0);
  return;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

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



/* EditorExportGDScript::get_name() const */

EditorExportGDScript * __thiscall EditorExportGDScript::get_name(EditorExportGDScript *this)

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
LAB_00102cf3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102cf3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00102d5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00102d5e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorExportGDScript::_get_class_namev() const */

undefined8 * EditorExportGDScript::_get_class_namev(void)

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
LAB_00102de3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102de3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorExportGDScript");
      goto LAB_00102e4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorExportGDScript");
LAB_00102e4e:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GDScriptSyntaxHighlighter::GDScriptSyntaxHighlighter() */

void __thiscall
GDScriptSyntaxHighlighter::GDScriptSyntaxHighlighter(GDScriptSyntaxHighlighter *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  Resource::Resource((Resource *)this);
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00106f20;
  *(undefined8 **)(this + 0x248) = &_GlobalNilClass::_nil;
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  StringName::StringName((StringName *)(this + 0x268),"_get_line_syntax_highlighting",false);
  this[0x270] = (GDScriptSyntaxHighlighter)0x0;
  *(undefined8 *)(this + 0x278) = 0;
  StringName::StringName((StringName *)(this + 0x280),"_clear_highlighting_cache",false);
  this[0x288] = (GDScriptSyntaxHighlighter)0x0;
  *(undefined8 *)(this + 0x290) = 0;
  StringName::StringName((StringName *)(this + 0x298),"_update_cache",false);
  *(code **)this = RefCounted::RefCounted;
  this[0x2a0] = (GDScriptSyntaxHighlighter)0x0;
  *(undefined1 (*) [16])(this + 0x2a8) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x2b8),"_get_name",false);
  this[0x2c0] = (GDScriptSyntaxHighlighter)0x0;
  *(undefined8 *)(this + 0x2c8) = 0;
  StringName::StringName((StringName *)(this + 0x2d0),"_get_supported_languages",false);
  uVar3 = _UNK_001075c8;
  uVar2 = __LC16;
  *(undefined **)this = &EditorExportPlugin::vtable;
  uVar1 = _LC15;
  this[0x2d8] = (GDScriptSyntaxHighlighter)0x0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 800) = uVar1;
  *(undefined8 *)(this + 0x350) = uVar1;
  *(undefined8 *)(this + 0x380) = uVar1;
  *(undefined8 *)(this + 0x3b0) = uVar1;
  *(undefined8 *)(this + 0x3d8) = uVar1;
  *(undefined1 (*) [16])(this + 0x300) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x310) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x330) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x340) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x360) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x370) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x390) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3a0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3c8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x3e0) = uVar2;
  *(undefined8 *)(this + 1000) = uVar3;
  *(undefined8 *)(this + 0x3f0) = uVar2;
  *(undefined8 *)(this + 0x3f8) = uVar3;
  *(undefined8 *)(this + 0x400) = uVar2;
  *(undefined8 *)(this + 0x408) = uVar3;
  *(undefined8 *)(this + 0x410) = uVar2;
  *(undefined8 *)(this + 0x418) = uVar3;
  *(undefined8 *)(this + 0x420) = uVar2;
  *(undefined8 *)(this + 0x428) = uVar3;
  *(undefined8 *)(this + 0x430) = uVar2;
  *(undefined8 *)(this + 0x438) = uVar3;
  *(undefined8 *)(this + 0x440) = uVar2;
  *(undefined8 *)(this + 0x448) = uVar3;
  *(undefined8 *)(this + 0x450) = uVar2;
  *(undefined8 *)(this + 0x458) = uVar3;
  *(undefined8 *)(this + 0x460) = uVar2;
  *(undefined8 *)(this + 0x468) = uVar3;
  *(undefined8 *)(this + 0x470) = uVar2;
  *(undefined8 *)(this + 0x478) = uVar3;
  *(undefined8 *)(this + 0x480) = uVar2;
  *(undefined8 *)(this + 0x488) = uVar3;
  *(undefined8 *)(this + 0x490) = uVar2;
  *(undefined8 *)(this + 0x498) = uVar3;
  *(undefined8 *)(this + 0x518) = uVar1;
  *(undefined8 *)(this + 0x4a0) = uVar2;
  *(undefined8 *)(this + 0x4a8) = uVar3;
  *(undefined8 *)(this + 0x4b0) = uVar2;
  *(undefined8 *)(this + 0x4b8) = uVar3;
  *(undefined8 *)(this + 0x4c0) = uVar2;
  *(undefined8 *)(this + 0x4c8) = uVar3;
  *(undefined8 *)(this + 0x4d0) = uVar2;
  *(undefined8 *)(this + 0x4d8) = uVar3;
  *(undefined8 *)(this + 0x4e0) = uVar2;
  *(undefined8 *)(this + 0x4e8) = uVar3;
  *(undefined1 (*) [16])(this + 0x4f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x508) = (undefined1  [16])0x0;
  return;
}



/* Object* ClassDB::creator<GDScriptSyntaxHighlighter>(bool) */

Object * ClassDB::creator<GDScriptSyntaxHighlighter>(bool param_1)

{
  GDScriptSyntaxHighlighter *this;
  
  this = (GDScriptSyntaxHighlighter *)operator_new(0x520,"");
  GDScriptSyntaxHighlighter::GDScriptSyntaxHighlighter(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* void Ref<ResourceFormatLoaderGDScript>::instantiate<>() */

void __thiscall
Ref<ResourceFormatLoaderGDScript>::instantiate<>(Ref<ResourceFormatLoaderGDScript> *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  RefCounted *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (RefCounted *)operator_new(0x288,"");
  pRVar3 = this_00;
  for (lVar2 = 0x51; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(code **)this_00 = operator_new;
  StringName::StringName((StringName *)(this_00 + 0x180),"_get_recognized_extensions",false);
  this_00[0x188] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 400) = 0;
  StringName::StringName((StringName *)(this_00 + 0x198),"_recognize_path",false);
  this_00[0x1a0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1a8) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1b0),"_handles_type",false);
  this_00[0x1b8] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1c0) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1c8),"_get_resource_type",false);
  this_00[0x1d0] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1d8) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1e0),"_get_resource_script_class",false);
  this_00[0x1e8] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x1f0) = 0;
  StringName::StringName((StringName *)(this_00 + 0x1f8),"_get_resource_uid",false);
  this_00[0x200] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x208) = 0;
  StringName::StringName((StringName *)(this_00 + 0x210),"_get_dependencies",false);
  this_00[0x218] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x220) = 0;
  StringName::StringName((StringName *)(this_00 + 0x228),"_get_classes_used",false);
  this_00[0x230] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x238) = 0;
  StringName::StringName((StringName *)(this_00 + 0x240),"_rename_dependencies",false);
  this_00[0x248] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x250) = 0;
  StringName::StringName((StringName *)(this_00 + 600),"_exists",false);
  this_00[0x260] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x268) = 0;
  StringName::StringName((StringName *)(this_00 + 0x270),"_load",false);
  this_00[0x278] = (RefCounted)0x0;
  *(undefined8 *)(this_00 + 0x280) = 0;
  *(code **)this_00 = StringName::operator=;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)this;
    if (pOVar5 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (RefCounted *)pOVar5) goto LAB_00103645;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_00103645;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_00103645:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* Ref<ResourceFormatSaverGDScript>::unref() */

void __thiscall Ref<ResourceFormatSaverGDScript>::unref(Ref<ResourceFormatSaverGDScript> *this)

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



/* String::~String() */

void __thiscall String::~String(String *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

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



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"RefCounted");
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
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SyntaxHighlighter::get_class() const */

void SyntaxHighlighter::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"SyntaxHighlighter");
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
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportGDScript::get_class() const */

void EditorExportGDScript::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"EditorExportGDScript");
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
        String::parse_latin1((StrRange *)in_RDI);
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
    if (cVar4 != '\0') goto LAB_00103b03;
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
      if (cVar4 != '\0') goto LAB_00103b03;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_00103b03:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_00103ce3;
  }
  cVar3 = String::operator==(param_1,"Resource");
  if (cVar3 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar4;
    }
  }
  else {
LAB_00103ce3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SyntaxHighlighter::is_class(String const&) const */

undefined8 __thiscall SyntaxHighlighter::is_class(SyntaxHighlighter *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_00103e13;
  }
  cVar3 = String::operator==(param_1,"SyntaxHighlighter");
  if (cVar3 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = Resource::is_class((Resource *)this,param_1);
      return uVar4;
    }
  }
  else {
LAB_00103e13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportGDScript::_initialize_classv() */

void EditorExportGDScript::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorExportPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0010a008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"RefCounted");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"EditorExportPlugin");
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
      if ((code *)PTR__bind_methods_0010a010 != RefCounted::_bind_methods) {
        EditorExportPlugin::_bind_methods();
      }
      EditorExportPlugin::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"EditorExportPlugin");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"EditorExportGDScript");
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorExportGDScript::is_class(String const&) const */

undefined8 __thiscall EditorExportGDScript::is_class(EditorExportGDScript *this,String *param_1)

{
  long lVar1;
  char *__s;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar2 = *(long *)(lVar1 + 0x20);
    if (lVar2 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar2 + 0x10));
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar3 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar3 != '\0') goto LAB_00104243;
  }
  cVar3 = String::operator==(param_1,"EditorExportGDScript");
  if (cVar3 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar2 = *(long *)(lVar1 + 0x20);
      if (lVar2 == 0) {
        local_58 = (char *)0x0;
      }
      else {
        local_58 = (char *)0x0;
        if (*(char **)(lVar2 + 8) == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar2 + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_58,*(char **)(lVar2 + 8));
        }
      }
      cVar3 = String::operator==(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (cVar3 != '\0') goto LAB_00104243;
    }
    cVar3 = String::operator==(param_1,"EditorExportPlugin");
    if (cVar3 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar4;
      }
      goto LAB_00104336;
    }
  }
LAB_00104243:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104336:
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
    if ((code *)PTR__bind_methods_0010a018 != Object::_bind_methods) {
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<GDScriptSyntaxHighlighter>(bool) */

void ClassDB::register_class<GDScriptSyntaxHighlighter>(bool param_1)

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
  uint uVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (GDScriptSyntaxHighlighter::initialize_class()::initialized == '\0') {
    if (EditorSyntaxHighlighter::initialize_class()::initialized == '\0') {
      if (SyntaxHighlighter::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          Resource::initialize_class();
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Resource");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"SyntaxHighlighter");
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
        if ((code *)_GLOBAL_OFFSET_TABLE_ != SyntaxHighlighter::_bind_methods) {
          SyntaxHighlighter::_bind_methods();
        }
        SyntaxHighlighter::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"SyntaxHighlighter");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"EditorSyntaxHighlighter");
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
      if ((code *)PTR__bind_methods_0010a020 != SyntaxHighlighter::_bind_methods) {
        EditorSyntaxHighlighter::_bind_methods();
      }
      EditorSyntaxHighlighter::initialize_class()::initialized = '\x01';
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"EditorSyntaxHighlighter");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"GDScriptSyntaxHighlighter");
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
    GDScriptSyntaxHighlighter::initialize_class()::initialized = '\x01';
  }
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"GDScriptSyntaxHighlighter");
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_0010929c != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)__clear_internal * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)__clear_internal * 8);
    if (local_58 == (char *)0x0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_58 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(_add_resource_base_extension + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(char **)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar13 * 8) +
                      0x10) == local_58)) {
          lVar2 = *(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + (ulong)uVar12 * 8)
          ;
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          *(code **)(lVar2 + 0x2a8) = creator<GDScriptSyntaxHighlighter>;
          *(undefined1 *)(lVar2 + 0x2a1) = 1;
          *(bool *)(lVar2 + 0x2a3) = param_1;
          *(undefined4 **)(lVar2 + 0x28) = &GDScriptSyntaxHighlighter::get_class_ptr_static()::ptr;
          *(undefined4 *)(lVar2 + 0x18) = (undefined4)current_api;
          local_58 = "Resource";
          local_60 = 0;
          local_50 = 8;
          String::parse_latin1((StrRange *)&local_60);
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          StringName::StringName((StringName *)&local_68,"res",false);
          ClassDB::add_resource_base_extension((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') &&
             (((local_68 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
              (local_58 != (char *)0x0)))) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00104a33;
          goto LAB_001049d0;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(_add_resource_base_extension + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00104a33:
    _global_unlock();
    return;
  }
LAB_001049d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SyntaxHighlighter::_initialize_classv() */

void SyntaxHighlighter::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
      Resource::initialize_class();
    }
    local_58 = 0;
    local_40 = 8;
    local_48 = "Resource";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "SyntaxHighlighter";
    local_60 = 0;
    local_40 = 0x11;
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
    if ((code *)PTR__bind_methods_0010a028 != Resource::_bind_methods) {
      SyntaxHighlighter::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
        if (pvVar3 == (void *)0x0) goto LAB_00104ccf;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00104ccf:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<GDScript>(bool) */

void ClassDB::register_class<GDScript>(bool param_1)

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
  uint uVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (GDScript::initialize_class()::initialized == '\0') {
    if (Script::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Resource");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Script");
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Script::_bind_methods) {
        Script::_bind_methods();
      }
      Script::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"Script");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"GDScript");
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
    if ((code *)PTR__bind_methods_0010a030 != Script::_bind_methods) {
      GDScript::_bind_methods();
    }
    GDScript::initialize_class()::initialized = '\x01';
  }
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"GDScript");
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_0010929c != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)__clear_internal * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)__clear_internal * 8);
    if (local_48 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(local_48 + 0x20);
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(_add_resource_base_extension + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar13 * 8) +
                     0x10) == local_48)) {
          lVar2 = *(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + (ulong)uVar12 * 8)
          ;
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          *(code **)(lVar2 + 0x2a8) = creator<GDScript>;
          *(undefined1 *)(lVar2 + 0x2a1) = 1;
          *(bool *)(lVar2 + 0x2a3) = param_1;
          *(undefined4 **)(lVar2 + 0x28) = &GDScript::get_class_ptr_static()::ptr;
          *(undefined4 *)(lVar2 + 0x18) = (undefined4)current_api;
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Resource");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          StringName::StringName((StringName *)&local_58,"res",false);
          ClassDB::add_resource_base_extension((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') &&
             (((local_58 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
              (local_48 != 0)))) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00105183;
          goto LAB_0010511f;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(_add_resource_base_extension + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00105183:
    _global_unlock();
    return;
  }
LAB_0010511f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* EditorExportPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorExportPlugin::_get_property_listv(EditorExportPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorExportPlugin";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorExportPlugin";
  local_98 = 0;
  local_70 = 0x12;
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
  StringName::StringName((StringName *)&local_78,"EditorExportPlugin",false);
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



/* EditorExportGDScript::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorExportGDScript::_get_property_listv(EditorExportGDScript *this,List *param_1,bool param_2)

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
    EditorExportPlugin::_get_property_listv((EditorExportPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorExportGDScript";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorExportGDScript";
  local_98 = 0;
  local_70 = 0x14;
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
  StringName::StringName((StringName *)&local_78,"EditorExportGDScript",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorExportPlugin::_get_property_listv((EditorExportPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* SyntaxHighlighter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SyntaxHighlighter::_get_property_listv(SyntaxHighlighter *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SyntaxHighlighter";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SyntaxHighlighter";
  local_98 = 0;
  local_70 = 0x11;
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
  StringName::StringName((StringName *)&local_78,"SyntaxHighlighter",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* EditorExportGDScript::_export_file(String const&, String const&, HashSet<String,
   HashMapHasherDefault, HashMapComparatorDefault<String> > const&) */

void EditorExportGDScript::_export_file(String *param_1,String *param_2,HashSet *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_80;
  String local_78 [8];
  undefined8 local_70;
  String local_68 [8];
  long local_60;
  String local_58 [8];
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  cVar1 = String::operator!=(local_58,"gd");
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0x458) != 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    FileAccess::get_file_as_bytes(local_68,param_2);
    if (local_60 != 0) {
      local_80 = 0;
      String::parse_utf8((char *)&local_80,(int)local_60,SUB41(*(undefined4 *)(local_60 + -8),0));
      GDScriptTokenizerBuffer::parse_code_string
                (local_58,(CowData<char32_t> *)&local_80,*(int *)(param_1 + 0x458) == 2);
      if (local_60 != local_50[0]) {
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
        local_60 = local_50[0];
        local_50[0] = 0;
      }
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_50);
      if (local_60 != 0) {
        local_70 = 0;
        String::parse_latin1((String *)&local_70,".gdc");
        String::get_basename();
        String::operator+(local_58,local_78);
        EditorExportPlugin::add_file(param_1,(Vector *)local_58,SUB81(local_68,0));
        CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
        goto LAB_00106045;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    }
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  }
LAB_00106045:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pCVar2 = *(CowData<char32_t> **)this;
    if (pCVar2 != (CowData<char32_t> *)0x0) {
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 8;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<void (*)()>::_realloc(long) */

undefined8 __thiscall CowData<void(*)()>::_realloc(CowData<void(*)()> *this,long param_1)

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
/* Error CowData<void (*)()>::resize<false>(long) */

undefined8 __thiscall CowData<void(*)()>::resize<false>(CowData<void(*)()> *this,long param_1)

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
    lVar3 = lVar9 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00106450:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00106450;
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
        goto LAB_00106361;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00106361:
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



/* CowData<SharedObject>::_unref() */

void __thiscall CowData<SharedObject>::_unref(CowData<SharedObject> *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  CowData<char32_t> *this_00;
  long lVar5;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pCVar2 = *(CowData<char32_t> **)this;
    if (pCVar2 != (CowData<char32_t> *)0x0) {
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this_00 + 0x18);
          CowData<String>::_unref((CowData<String> *)(this_00 + 0x10));
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 0x20;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<EditorExportPlugin::ExtraFile>::_unref() */

void __thiscall
CowData<EditorExportPlugin::ExtraFile>::_unref(CowData<EditorExportPlugin::ExtraFile> *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  CowData<char32_t> *this_00;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pCVar2 = *(CowData<char32_t> **)this;
    if (pCVar2 != (CowData<char32_t> *)0x0) {
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        this_00 = pCVar2;
        do {
          if (*(long *)(this_00 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(this_00 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(this_00 + 0x10);
              *(undefined8 *)(this_00 + 0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 0x20;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(pCVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* EditorExportPlugin::~EditorExportPlugin() */

void __thiscall EditorExportPlugin::~EditorExportPlugin(EditorExportPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  bVar3 = StringName::configured != '\0';
  *(code **)this = RefCounted::init_ref;
  if (bVar3) {
    if (*(long *)(this + 0x440) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x428) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x410) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x3f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x3e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x3c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x3b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x398) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x380) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x368) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x350) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x338) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 800) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x308) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x2f0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x2d8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x2c0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x2a8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x290) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x278) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x260) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x248) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x230) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00106970;
    }
    if (*(long *)(this + 0x218) != 0) {
      StringName::unref();
    }
  }
LAB_00106970:
  CowData<String>::_unref((CowData<String> *)(this + 0x210));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x200));
  CowData<String>::_unref((CowData<String> *)(this + 0x1f8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1e8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1e0));
  CowData<String>::_unref((CowData<String> *)(this + 0x1d8));
  CowData<String>::_unref((CowData<String> *)(this + 0x1c8));
  CowData<String>::_unref((CowData<String> *)(this + 0x1b8));
  CowData<EditorExportPlugin::ExtraFile>::_unref
            ((CowData<EditorExportPlugin::ExtraFile> *)(this + 0x1a0));
  CowData<SharedObject>::_unref((CowData<SharedObject> *)(this + 400));
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00106dc0;
  Object::~Object((Object *)this);
  return;
}



/* EditorExportPlugin::~EditorExportPlugin() */

void __thiscall EditorExportPlugin::~EditorExportPlugin(EditorExportPlugin *this)

{
  ~EditorExportPlugin(this);
  operator_delete(this,0x458);
  return;
}



/* EditorExportGDScript::~EditorExportGDScript() */

void __thiscall EditorExportGDScript::~EditorExportGDScript(EditorExportGDScript *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107110;
  EditorExportPlugin::~EditorExportPlugin((EditorExportPlugin *)this);
  return;
}



/* EditorExportGDScript::~EditorExportGDScript() */

void __thiscall EditorExportGDScript::~EditorExportGDScript(EditorExportGDScript *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107110;
  EditorExportPlugin::~EditorExportPlugin((EditorExportPlugin *)this);
  operator_delete(this,0x460);
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
/* EditorExportGDScript::~EditorExportGDScript() */

void __thiscall EditorExportGDScript::~EditorExportGDScript(EditorExportGDScript *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorExportPlugin::~EditorExportPlugin() */

void __thiscall EditorExportPlugin::~EditorExportPlugin(EditorExportPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* GDScriptSyntaxHighlighter::GDScriptSyntaxHighlighter() */

void __thiscall
GDScriptSyntaxHighlighter::GDScriptSyntaxHighlighter(GDScriptSyntaxHighlighter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Ref<GDScriptEditorTranslationParserPlugin>::~Ref() */

void __thiscall
Ref<GDScriptEditorTranslationParserPlugin>::~Ref(Ref<GDScriptEditorTranslationParserPlugin> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Ref<ResourceFormatLoaderGDScript>::~Ref() */

void __thiscall Ref<ResourceFormatLoaderGDScript>::~Ref(Ref<ResourceFormatLoaderGDScript> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Ref<ResourceFormatSaverGDScript>::~Ref() */

void __thiscall Ref<ResourceFormatSaverGDScript>::~Ref(Ref<ResourceFormatSaverGDScript> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SyntaxHighlighter::~SyntaxHighlighter() */

void __thiscall SyntaxHighlighter::~SyntaxHighlighter(SyntaxHighlighter *this)

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


