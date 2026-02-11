
/* EditorExportPlatformWeb::get_options_count() const */

char __thiscall EditorExportPlatformWeb::get_options_count(EditorExportPlatformWeb *this)

{
  char cVar1;
  
  cVar1 = '\x02';
  if (*(int *)(this + 0x1b0) != 1) {
    cVar1 = (*(int *)(this + 0x1b0) == 2) * '\x03';
  }
  return cVar1;
}



/* EditorExportPlatformWeb::get_export_option_visibility(EditorExportPreset const*, String const&)
   const */

undefined4 __thiscall
EditorExportPlatformWeb::get_export_option_visibility
          (EditorExportPlatformWeb *this,EditorExportPreset *param_1,String *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = EditorExportPreset::are_advanced_options_enabled();
  cVar1 = String::operator==(param_2,"custom_template/debug");
  if (cVar1 == '\0') {
    cVar1 = String::operator==(param_2,"custom_template/release");
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* EditorExportPlatformWeb::get_logo() const */

void EditorExportPlatformWeb::get_logo(void)

{
  char cVar1;
  long lVar2;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 400) != 0) {
    lVar2 = __dynamic_cast(*(long *)(in_RSI + 400),&Object::typeinfo,&Texture2D::typeinfo,0);
    if (lVar2 != 0) {
      *in_RDI = lVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *in_RDI = 0;
      }
    }
  }
  return;
}



/* EditorExportPlatformWeb::get_run_icon() const */

void EditorExportPlatformWeb::get_run_icon(void)

{
  char cVar1;
  long lVar2;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x198) != 0) {
    lVar2 = __dynamic_cast(*(long *)(in_RSI + 0x198),&Object::typeinfo,&Texture2D::typeinfo,0);
    if (lVar2 != 0) {
      *in_RDI = lVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *in_RDI = 0;
      }
    }
  }
  return;
}



/* EditorExportPlatformWeb::get_os_name() const */

EditorExportPlatformWeb * __thiscall
EditorExportPlatformWeb::get_os_name(EditorExportPlatformWeb *this)

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



/* EditorExportPlatformWeb::get_option_icon(int) const */

long * EditorExportPlatformWeb::get_option_icon(int param_1)

{
  char cVar1;
  uint in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  plVar2 = (long *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  EditorExportPlatform::get_option_icon((int)&local_28);
  if (*(int *)(in_RSI + 0x1b0) == 1) {
    if (in_EDX < 2) {
LAB_001002a0:
      *plVar2 = 0;
      pOVar3 = local_28;
      if (local_28 == (Object *)0x0) goto LAB_001001ce;
LAB_001002b4:
      *plVar2 = (long)pOVar3;
      cVar1 = RefCounted::reference();
      if (cVar1 != '\0') goto LAB_001001b8;
    }
    else {
      _err_print_error("get_option_icon","platform/web/export/export_plugin.cpp",0x288,
                       "Method/function failed. Returning: nullptr",0,0);
    }
LAB_001001b1:
    *plVar2 = 0;
  }
  else {
    if (*(int *)(in_RSI + 0x1b0) != 2) goto LAB_001001b1;
    if (in_EDX == 1) {
      *plVar2 = 0;
      pOVar3 = *(Object **)(in_RSI + 0x1a8);
    }
    else {
      if (in_EDX != 2) {
        if (in_EDX == 0) goto LAB_001002a0;
        _err_print_error("get_option_icon","platform/web/export/export_plugin.cpp",0x295,
                         "Method/function failed. Returning: nullptr",0,0);
        goto LAB_001001b1;
      }
      *plVar2 = 0;
      pOVar3 = *(Object **)(in_RSI + 0x1a0);
    }
    if (pOVar3 != (Object *)0x0) goto LAB_001002b4;
  }
LAB_001001b8:
  if (((local_28 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_28), cVar1 != '\0')) {
    (**(code **)(*(long *)local_28 + 0x140))(local_28);
    Memory::free_static(local_28,false);
  }
LAB_001001ce:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar2;
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



/* List<EditorExportPlatform::ExportOption,
   DefaultAllocator>::push_back(EditorExportPlatform::ExportOption const&) [clone .isra.0] */

void __thiscall
List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
          (List<EditorExportPlatform::ExportOption,DefaultAllocator> *this,ExportOption *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  
  if (*(long *)this == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x68,DefaultAllocator::alloc);
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 0xe) = (undefined1  [16])0x0;
  *puVar5 = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[0xc] = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  lVar4 = *(long *)(param_1 + 8);
  *(undefined2 *)(puVar5 + 0x12) = 0;
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *puVar5 = uVar1;
  *(undefined1 (*) [16])(puVar5 + 0x14) = (undefined1  [16])0x0;
  if (lVar4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)(param_1 + 0x10));
  puVar5[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar5 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar5[10] = *(undefined4 *)(param_1 + 0x28);
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)(param_1 + 0x30));
  *(ExportOption *)(puVar5 + 0x12) = param_1[0x48];
  *(ExportOption *)((long)puVar5 + 0x49) = param_1[0x49];
  uVar2 = *(undefined8 *)(*(long *)this + 8);
  *(long *)(puVar5 + 0x18) = *(long *)this;
  plVar3 = *(long **)this;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x16) = uVar2;
  if (plVar3[1] != 0) {
    *(undefined4 **)(plVar3[1] + 0x50) = puVar5;
  }
  plVar3[1] = (long)puVar5;
  if (*plVar3 != 0) {
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    return;
  }
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  *plVar3 = (long)puVar5;
  return;
}



/* EditorExportPlatformWeb::get_binary_extensions(Ref<EditorExportPreset> const&) const */

Ref * EditorExportPlatformWeb::get_binary_extensions(Ref *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  CowData<char32_t> *this;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_38 = &_LC19;
  local_40 = 0;
  local_30 = 4;
  String::parse_latin1((StrRange *)&local_40);
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  this = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  if (local_40 != 0) {
    CowData<char32_t>::_ref(this,(CowData *)&local_40);
  }
  lVar3 = local_40;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(this + 8) = 0;
  *(long **)(this + 0x18) = plVar1;
  *(long *)(this + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = this;
  }
  plVar1[1] = (long)this;
  if (*plVar1 == 0) {
    *plVar1 = (long)this;
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::has_valid_project_configuration(Ref<EditorExportPreset> const&, String&)
   const */

undefined8 EditorExportPlatformWeb::has_valid_project_configuration(Ref *param_1,String *param_2)

{
  bool *pbVar1;
  bool bVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_40;
  int local_38 [6];
  long local_20;
  
  pbVar1 = *(bool **)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_40,"vram_texture_compression/for_mobile",false);
  Object::get((StringName *)local_38,pbVar1);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_38);
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (bVar2) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = ResourceImporterTextureSettings::should_import_etc2_astc();
      return uVar3;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
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
    puVar4[1] = __n;
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



/* EditorExportPlatformWeb::_stop_server() */

undefined8 EditorExportPlatformWeb::_stop_server(void)

{
  EditorHTTPServer::stop();
  return 0;
}



/* EditorExportPlatformWeb::_launch_browser(String const&, unsigned short, bool) */

undefined8 EditorExportPlatformWeb::_launch_browser(String *param_1,ushort param_2,bool param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  char in_CL;
  char *pcVar4;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  String local_78 [8];
  CowData<char32_t> local_70 [8];
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)OS::get_singleton();
  local_60 = 0;
  pcVar1 = *(code **)(*plVar3 + 0x150);
  local_50 = 0x13;
  local_58 = "/tmp_js_export.html";
  String::parse_latin1((StrRange *)&local_60);
  itos((long)local_70);
  local_58 = ":";
  local_80 = 0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_80);
  pcVar4 = "http://";
  if (in_CL != '\0') {
    pcVar4 = "https://";
  }
  operator+((char *)&local_88,(String *)pcVar4);
  String::operator+(local_78,(String *)&local_88);
  String::operator+((String *)&local_68,local_78);
  String::operator+((String *)&local_58,(String *)&local_68);
  (*pcVar1)(plVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  lVar2 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar3 = (long *)(local_68 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar3 = (long *)(local_88 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref(local_70);
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar3 = (long *)(local_60 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::get_option_label(int) const */

StrRange * EditorExportPlatformWeb::get_option_label(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  this = (StrRange *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Run in Browser";
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_88,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Start HTTP Server";
  local_68 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_80,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Re-export Project";
  local_68 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_78,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Stop HTTP Server";
  local_68 = 0;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_70,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  uVar3 = local_70;
  uVar2 = local_78;
  uVar1 = local_80;
  if (*(int *)(in_RSI + 0x1b0) == 1) {
    if (in_EDX != 0) {
      if (in_EDX == 1) {
        local_80 = 0;
        *(undefined8 *)this = uVar1;
      }
      else {
        _err_print_error("get_option_label","platform/web/export/export_plugin.cpp",0x2c0,
                         "Method/function failed. Returning: \"\"",0,0);
        local_58 = "";
        *(undefined8 *)this = 0;
        local_50 = 0;
        String::parse_latin1(this);
      }
      goto LAB_00100d34;
    }
  }
  else {
    if (*(int *)(in_RSI + 0x1b0) != 2) {
      *(undefined8 *)this = 0;
      local_58 = "";
      local_50 = 0;
      String::parse_latin1(this);
      goto LAB_00100d34;
    }
    if (in_EDX == 1) {
      local_78 = 0;
      *(undefined8 *)this = uVar2;
      goto LAB_00100d34;
    }
    if (in_EDX == 2) {
      local_70 = 0;
      *(undefined8 *)this = uVar3;
      goto LAB_00100d34;
    }
    if (in_EDX != 0) {
      _err_print_error("get_option_label","platform/web/export/export_plugin.cpp",0x2cd,
                       "Method/function failed. Returning: \"\"",0,0);
      *(undefined8 *)this = 0;
      String::parse_latin1((String *)this,"");
      goto LAB_00100d34;
    }
  }
  *(undefined8 *)this = local_88;
  local_88 = 0;
LAB_00100d34:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::get_option_tooltip(int) const */

StrRange * EditorExportPlatformWeb::get_option_tooltip(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  StrRange *this;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  this = (StrRange *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Run exported HTML in the system\'s default browser.";
  local_68 = 0;
  local_50 = 0x32;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_88,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Start the HTTP server.";
  local_68 = 0;
  local_50 = 0x16;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_80,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Export project again to account for updates.";
  local_68 = 0;
  local_50 = 0x2c;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_78,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Stop the HTTP server.";
  local_68 = 0;
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_70,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  uVar3 = local_70;
  uVar2 = local_78;
  uVar1 = local_80;
  if (*(int *)(in_RSI + 0x1b0) == 1) {
    if (in_EDX != 0) {
      if (in_EDX == 1) {
        local_80 = 0;
        *(undefined8 *)this = uVar1;
      }
      else {
        _err_print_error("get_option_tooltip","platform/web/export/export_plugin.cpp",0x2e6,
                         "Method/function failed. Returning: \"\"",0,0);
        local_58 = "";
        *(undefined8 *)this = 0;
        local_50 = 0;
        String::parse_latin1(this);
      }
      goto LAB_001010f4;
    }
  }
  else {
    if (*(int *)(in_RSI + 0x1b0) != 2) {
      *(undefined8 *)this = 0;
      local_58 = "";
      local_50 = 0;
      String::parse_latin1(this);
      goto LAB_001010f4;
    }
    if (in_EDX == 1) {
      local_78 = 0;
      *(undefined8 *)this = uVar2;
      goto LAB_001010f4;
    }
    if (in_EDX == 2) {
      local_70 = 0;
      *(undefined8 *)this = uVar3;
      goto LAB_001010f4;
    }
    if (in_EDX != 0) {
      _err_print_error("get_option_tooltip","platform/web/export/export_plugin.cpp",0x2f3,
                       "Method/function failed. Returning: \"\"",0,0);
      *(undefined8 *)this = 0;
      String::parse_latin1((String *)this,"");
      goto LAB_001010f4;
    }
  }
  *(undefined8 *)this = local_88;
  local_88 = 0;
LAB_001010f4:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::_start_server(String const&, unsigned short, bool) */

int __thiscall
EditorExportPlatformWeb::_start_server
          (EditorExportPlatformWeb *this,String *param_1,ushort param_2,bool param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  String local_98 [8];
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined2 uStack_66;
  int local_58 [2];
  undefined8 uStack_50;
  undefined2 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  IPAddress::clear();
  cVar2 = String::is_valid_ip_address();
  if (cVar2 == '\0') {
    uVar4 = IP::get_singleton();
    IP::resolve_hostname(local_58,uVar4,param_1,3);
    uStack_70 = uStack_50;
    _local_68 = CONCAT22(uStack_66,local_48);
  }
  else {
    IPAddress::IPAddress((IPAddress *)local_58,param_1);
    _local_68 = CONCAT22(uStack_66,local_48);
    uStack_70 = uStack_50;
  }
  local_90 = 0;
  if ((char)local_68 == '\0') {
    local_80 = 0x19;
    local_88 = "\'. Try using \'127.0.0.1\'.";
    String::parse_latin1((StrRange *)&local_90);
    operator+((char *)local_98,(String *)"Invalid editor setting \'export/web/http_host\': \'");
    String::operator+((String *)&local_88,local_98);
    _err_print_error("_start_server","platform/web/export/export_plugin.cpp",0x370,
                     "Condition \"!bind_ip.is_valid()\" is true. Returning: ERR_INVALID_PARAMETER",
                     (String *)&local_88,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    iVar3 = 0x1f;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  }
  else {
    local_80 = 0x12;
    local_88 = "export/web/tls_key";
    String::parse_latin1((StrRange *)&local_90);
    _EDITOR_GET((String *)local_58);
    Variant::operator_cast_to_String((Variant *)&local_c8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    local_88 = "export/web/tls_certificate";
    local_90 = 0;
    local_80 = 0x1a;
    String::parse_latin1((StrRange *)&local_90);
    _EDITOR_GET((String *)local_58);
    Variant::operator_cast_to_String((Variant *)&local_c0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    EditorHTTPServer::stop();
    local_88 = (char *)0x0;
    uVar4 = *(undefined8 *)(this + 0x1b8);
    if (local_c0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    }
    local_90 = 0;
    if (local_c8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_c8);
    }
    iVar3 = EditorHTTPServer::listen
                      (uVar4,param_2,param_3,(StrRange *)&local_90,(CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (iVar3 != 0) {
      local_a0 = 0;
      pcVar1 = *(code **)(*(long *)this + 0x178);
      local_80 = 0;
      local_88 = "";
      String::parse_latin1((StrRange *)&local_a0);
      local_a8 = 0;
      local_88 = "Error starting HTTP server: %d.";
      local_80 = 0x1f;
      String::parse_latin1((StrRange *)&local_a8);
      TTR(local_98,(String *)&local_a8);
      vformat<Error>((StrRange *)&local_90,local_98,iVar3);
      local_b0 = 0;
      local_88 = "";
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_b0);
      local_b8 = 0;
      local_88 = "Run";
      local_80 = 3;
      String::parse_latin1((StrRange *)&local_b8);
      TTR((String *)&local_88,(String *)&local_b8);
      (*pcVar1)(this,3,(CowData<char32_t> *)&local_88,(StrRange *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::has_valid_export_configuration(Ref<EditorExportPreset> const&, String&,
   bool&, bool) const */

uint EditorExportPlatformWeb::has_valid_export_configuration
               (Ref *param_1,String *param_2,bool *param_3,bool param_4)

{
  bool *pbVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined7 in_register_00000009;
  long in_FS_OFFSET;
  String *local_e8;
  byte local_ca;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  String local_98 [8];
  long local_90;
  undefined *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  pbVar1 = *(bool **)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  StringName::StringName((StringName *)&local_88,"variant/extensions_support",false);
  Object::get((StringName *)local_58,pbVar1);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (undefined *)0x0)) {
    StringName::unref();
  }
  pbVar1 = *(bool **)param_2;
  StringName::StringName((StringName *)&local_88,"variant/thread_support",false);
  Object::get((StringName *)local_58,pbVar1);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_90 = 0;
  local_88 = &_LC58;
  local_80 = 3;
  String::parse_latin1((StrRange *)&local_90);
  if (bVar2) {
    String::operator+=((String *)&local_90,"_dlink");
  }
  if (bVar3) {
    String::operator+=((String *)&local_90,"_debug.zip");
    local_ca = EditorExportPlatform::exists_export_template((String *)param_1,(String *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    local_88 = &_LC58;
    local_90 = 0;
    local_80 = 3;
    String::parse_latin1((StrRange *)&local_90);
    if (bVar2) {
      String::operator+=((String *)&local_90,"_dlink");
    }
  }
  else {
    String::operator+=((String *)&local_90,"_nothreads");
    String::operator+=((String *)&local_90,"_debug.zip");
    local_ca = EditorExportPlatform::exists_export_template((String *)param_1,(String *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    local_88 = &_LC58;
    local_90 = 0;
    local_80 = 3;
    String::parse_latin1((StrRange *)&local_90);
    if (bVar2) {
      String::operator+=((String *)&local_90,"_dlink");
    }
    String::operator+=((String *)&local_90,"_nothreads");
  }
  local_e8 = (String *)&local_b0;
  String::operator+=((String *)&local_90,"_release.zip");
  bVar4 = EditorExportPlatform::exists_export_template((String *)param_1,(String *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  Variant::Variant((Variant *)local_58,"");
  pbVar1 = *(bool **)param_2;
  StringName::StringName((StringName *)&local_88,"custom_template/debug",false);
  Object::get((StringName *)local_78,pbVar1);
  cVar5 = Variant::operator!=((Variant *)local_78,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar5 != '\0') {
    pbVar1 = *(bool **)param_2;
    StringName::StringName((StringName *)&local_90,"custom_template/debug",false);
    Object::get((StringName *)local_58,pbVar1);
    Variant::operator_cast_to_String((Variant *)&local_88);
    local_ca = FileAccess::exists((String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    if (local_ca == 0) {
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"\n");
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"");
      local_a8 = 0;
      String::parse_latin1((String *)&local_a8,"Custom debug template not found.");
      TTR(local_98,(String *)&local_a8);
      String::operator+((String *)&local_88,local_98);
      String::operator+=(local_e8,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    }
  }
  Variant::Variant((Variant *)local_58,"");
  pbVar1 = *(bool **)param_2;
  StringName::StringName((StringName *)&local_88,"custom_template/release",false);
  Object::get((StringName *)local_78,pbVar1);
  cVar5 = Variant::operator!=((Variant *)local_78,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar5 == '\0') {
    uVar6 = (uint)(local_ca | bVar4);
    bVar4 = (local_ca | bVar4) ^ 1;
  }
  else {
    pbVar1 = *(bool **)param_2;
    StringName::StringName((StringName *)&local_90,"custom_template/release",false);
    Object::get((StringName *)local_58,pbVar1);
    Variant::operator_cast_to_String((Variant *)&local_88);
    uVar6 = FileAccess::exists((String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    bVar4 = 0;
    if ((char)uVar6 == '\0') {
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"\n");
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0,"");
      local_a8 = 0;
      String::parse_latin1((String *)&local_a8,"Custom release template not found.");
      TTR(local_98,(String *)&local_a8);
      String::operator+((String *)&local_88,local_98);
      String::operator+=(local_e8,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      uVar6 = (uint)local_ca;
      bVar4 = local_ca ^ 1;
    }
  }
  *(byte *)CONCAT71(in_register_00000009,param_4) = bVar4;
  if ((local_b0 != 0) && (1 < *(uint *)(local_b0 + -8))) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)local_e8);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::get_preset_features(Ref<EditorExportPreset> const&, List<String,
   DefaultAllocator>*) const */

void __thiscall
EditorExportPlatformWeb::get_preset_features
          (EditorExportPlatformWeb *this,Ref *param_1,List *param_2)

{
  bool *pbVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar5) [16];
  long in_FS_OFFSET;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pbVar1 = *(bool **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_68,"vram_texture_compression/for_desktop",false);
  Object::get((StringName *)local_58,pbVar1);
  bVar4 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (bVar4) {
    local_70 = 0;
    local_68 = "s3tc";
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_70);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)param_2,(String *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "bptc";
    local_70 = 0;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_70);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)param_2,(String *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  pbVar1 = *(bool **)param_1;
  StringName::StringName((StringName *)&local_68,"vram_texture_compression/for_mobile",false);
  Object::get((StringName *)local_58,pbVar1);
  bVar4 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (bVar4) {
    local_70 = 0;
    local_68 = "etc2";
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_70);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)param_2,(String *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_68 = "astc";
    local_70 = 0;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_70);
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)param_2,(String *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  pbVar1 = *(bool **)param_1;
  StringName::StringName((StringName *)&local_68,"variant/thread_support",false);
  Object::get((StringName *)local_58,pbVar1);
  bVar4 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
    StringName::unref();
  }
  local_70 = 0;
  if (bVar4) {
    local_60 = 7;
    local_68 = "threads";
  }
  else {
    local_60 = 9;
    local_68 = "nothreads";
  }
  String::parse_latin1((StrRange *)&local_70);
  List<String,DefaultAllocator>::push_back
            ((List<String,DefaultAllocator> *)param_2,(String *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_70 = 0;
  local_68 = "wasm32";
  local_60 = 6;
  String::parse_latin1((StrRange *)&local_70);
  if (*(long *)param_2 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_2 = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (local_70 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)&local_70);
  }
  plVar2 = *(long **)param_2;
  lVar3 = plVar2[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar2;
  *(long *)(this_00 + 0x10) = lVar3;
  if (lVar3 != 0) {
    *(CowData<char32_t> **)(lVar3 + 8) = this_00;
  }
  plVar2[1] = (long)this_00;
  if (*plVar2 == 0) {
    *plVar2 = (long)this_00;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorExportPlatformWeb::get_export_options(List<EditorExportPlatform::ExportOption,
   DefaultAllocator>*) const */

void __thiscall
EditorExportPlatformWeb::get_export_options(EditorExportPlatformWeb *this,List *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  char *local_f8;
  long local_f0;
  StringName local_e8 [8];
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8 [8];
  undefined4 local_98 [2];
  undefined8 local_90;
  StringName local_88 [8];
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  Variant local_68 [24];
  undefined2 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_b8,"");
  local_f8 = "*.zip";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 5;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "custom_template/debug";
  local_f0 = 0x15;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,4,(StrRange *)&local_110,0xf,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_f8 = "*.zip";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 5;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "custom_template/release";
  local_f0 = 0x17;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,4,(StrRange *)&local_110,0xf,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,false);
  local_f8 = "";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "variant/extensions_support";
  local_f0 = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,1,(StrRange *)&local_110,0,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,false);
  local_f8 = "";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "variant/thread_support";
  local_f0 = 0x16;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,1,(StrRange *)&local_110,0,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,true);
  local_f8 = "";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "vram_texture_compression/for_desktop";
  local_f0 = 0x24;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,1,(StrRange *)&local_110,0,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,false);
  local_f8 = "";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "vram_texture_compression/for_mobile";
  local_f0 = 0x23;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,1,(StrRange *)&local_110,0,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,true);
  local_f8 = "";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "html/export_icon";
  local_f0 = 0x10;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,1,(StrRange *)&local_110,0,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_f8 = "*.html";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 6;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "html/custom_html_shell";
  local_f0 = 0x16;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,4,(StrRange *)&local_110,0xd,(StrRange *)&local_108,6,
             &local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)local_98,(PropertyInfo *)&local_f8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_f8 = "";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "html/head_include";
  local_f0 = 0x11;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,4,(StrRange *)&local_110,0x12,(StrRange *)&local_108,6,
             &local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)local_98,(PropertyInfo *)&local_f8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,2);
  local_f8 = "None,Project,Adaptive";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0x15;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "html/canvas_resize_policy";
  local_f0 = 0x19;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,2,(StrRange *)&local_110,2,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,true);
  local_f8 = "";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "html/focus_canvas_on_start";
  local_f0 = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,1,(StrRange *)&local_110,0,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,false);
  local_f8 = "";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "html/experimental_virtual_keyboard";
  local_f0 = 0x22;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,1,(StrRange *)&local_110,0,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,false);
  local_f8 = "";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "progressive_web_app/enabled";
  local_f0 = 0x1b;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,1,(StrRange *)&local_110,0,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,true);
  local_f8 = "";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "progressive_web_app/ensure_cross_origin_isolation_headers";
  local_f0 = 0x39;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,1,(StrRange *)&local_110,0,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_f8 = "*.html";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 6;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "progressive_web_app/offline_page";
  local_f0 = 0x20;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,4,(StrRange *)&local_110,0xd,(StrRange *)&local_108,6,
             &local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)local_98,(PropertyInfo *)&local_f8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,1);
  local_f8 = "Fullscreen,Standalone,Minimal UI,Browser";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0x28;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "progressive_web_app/display";
  local_f0 = 0x1b;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,2,(StrRange *)&local_110,2,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,0);
  local_f8 = "Any,Landscape,Portrait";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0x16;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "progressive_web_app/orientation";
  local_f0 = 0x1f;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,2,(StrRange *)&local_110,2,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_f8 = "*.png,*.webp,*.svg";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0x12;
  String::parse_latin1((StrRange *)&local_108);
  local_f8 = "progressive_web_app/icon_144x144";
  local_110 = 0;
  local_f0 = 0x20;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,4,(StrRange *)&local_110,0xd,(StrRange *)&local_108,6,
             &local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)local_98,(PropertyInfo *)&local_f8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_f8 = "*.png,*.webp,*.svg";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0x12;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "progressive_web_app/icon_180x180";
  local_f0 = 0x20;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,4,(StrRange *)&local_110,0xd,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_f8 = "*.png,*.webp,*.svg";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0x12;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "progressive_web_app/icon_512x512";
  local_f0 = 0x20;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,4,(StrRange *)&local_110,0xd,(StrRange *)&local_108,6,
             &local_100);
  PropertyInfo::PropertyInfo((PropertyInfo *)local_98,(PropertyInfo *)&local_f8);
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_c8 = __LC94;
  uStack_c0 = _UNK_001187e8;
  Variant::Variant((Variant *)local_b8,(Color *)&local_c8);
  local_f8 = "";
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_f8 = "progressive_web_app/background_color";
  local_f0 = 0x24;
  String::parse_latin1((StrRange *)&local_110);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_f8,0x14,(StrRange *)&local_110,0x15,(StrRange *)&local_108,6,
             &local_100);
  local_90 = 0;
  local_98[0] = local_f8._0_4_;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_f0);
  }
  StringName::StringName(local_88,local_e8);
  local_78 = 0;
  local_80 = local_e0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_d8);
  }
  local_70 = local_d0;
  Variant::Variant(local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  EditorExportPlatform::ExportOption::~ExportOption((ExportOption *)local_98);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::_write_or_error(unsigned char const*, int, String) */

undefined8 __thiscall
EditorExportPlatformWeb::_write_or_error
          (EditorExportPlatformWeb *this,undefined8 param_1,int param_2,CowData *param_4)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  Object *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  undefined8 local_68;
  CowData<char32_t> local_60 [8];
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_98,(int)param_4,(Error *)0x2);
  if (local_98 == (Object *)0x0) {
    local_68 = 0;
    pcVar1 = *(code **)(*(long *)this + 0x178);
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,param_4);
    local_58 = "";
    local_78 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    local_58 = "Could not write file: \"%s\".";
    local_50 = 0x1b;
    String::parse_latin1((StrRange *)&local_80);
    TTR(local_70,(String *)&local_80);
    vformat<String>(local_60,local_70,(CowData<char32_t> *)&local_68);
    local_58 = "";
    local_88 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_58 = "Export";
    local_90 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_90);
    TTR((String *)&local_58,(String *)&local_90);
    uVar3 = 0xd;
    (*pcVar1)(this,3,(String *)&local_58,local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar3 = 0;
    (**(code **)(*(long *)local_98 + 0x2d0))(local_98,param_1,(long)param_2);
  }
  if (local_98 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_98);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_98 + 0x140))(local_98);
        Memory::free_static(local_98,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::_export_project(Ref<EditorExportPreset> const&, int) */

int __thiscall
EditorExportPlatformWeb::_export_project(EditorExportPlatformWeb *this,Ref *param_1,int param_2)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_a0;
  Object *local_98;
  undefined8 local_90;
  undefined8 local_88;
  String local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorPaths::get_temp_dir();
  local_58 = "web";
  local_60 = 0;
  local_50 = 3;
  String::parse_latin1((StrRange *)&local_60);
  String::path_join((String *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref(local_68);
  DirAccess::create(&local_98,2);
  pOVar2 = local_98;
  pcVar1 = *(code **)(*(long *)local_98 + 0x1d8);
  local_58 = (char *)0x0;
  if (local_a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_a0);
  }
  cVar3 = (*pcVar1)(pOVar2,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (cVar3 == '\0') {
    iVar4 = (**(code **)(*(long *)local_98 + 0x1c0))(local_98,(String *)&local_a0);
    if (iVar4 != 0) {
      pcVar1 = *(code **)(*(long *)this + 0x178);
      local_60 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_a0);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"Could not create HTTP server directory: %s.");
      TTR((String *)local_68,(String *)&local_78);
      vformat<String>((CowData<char32_t> *)&local_58,local_68,(StrRange *)&local_60);
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"Run");
      TTR(local_80,(String *)&local_90);
      (*pcVar1)(this,3,local_80,(CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      goto LAB_00104666;
    }
  }
  local_60 = 0;
  local_58 = "tmp_js_export";
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_60);
  String::path_join((String *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pcVar1 = *(code **)(*(long *)this + 0x260);
  local_58 = ".html";
  local_60 = 0;
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_60);
  String::operator+((String *)&local_58,(String *)local_68);
  iVar4 = (*pcVar1)(this,param_1,1,(CowData<char32_t> *)&local_58,(long)param_2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (iVar4 != 0) {
    local_58 = ".html";
    local_60 = 0;
    local_50 = 5;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)local_68);
    DirAccess::remove_file_or_error((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = ".offline.html";
    local_60 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)local_68);
    DirAccess::remove_file_or_error((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = ".js";
    local_60 = 0;
    local_50 = 3;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)local_68);
    DirAccess::remove_file_or_error((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = ".audio.worklet.js";
    local_60 = 0;
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)local_68);
    DirAccess::remove_file_or_error((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = ".audio.position.worklet.js";
    local_60 = 0;
    local_50 = 0x1a;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)local_68);
    DirAccess::remove_file_or_error((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = ".service.worker.js";
    local_60 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)local_68);
    DirAccess::remove_file_or_error((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = ".pck";
    local_60 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)local_68);
    DirAccess::remove_file_or_error((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = ".png";
    local_60 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)local_68);
    DirAccess::remove_file_or_error((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = ".side.wasm";
    local_60 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)local_68);
    DirAccess::remove_file_or_error((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = ".wasm";
    local_60 = 0;
    local_50 = 5;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)local_68);
    DirAccess::remove_file_or_error((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = ".icon.png";
    local_60 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)local_68);
    DirAccess::remove_file_or_error((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_58 = ".apple-touch-icon.png";
    local_60 = 0;
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)local_68);
    DirAccess::remove_file_or_error((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  CowData<char32_t>::_unref(local_68);
LAB_00104666:
  if (local_98 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_98);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_98 + 0x140))(local_98);
        Memory::free_static(local_98,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::run(Ref<EditorExportPreset> const&, int,
   BitField<EditorExportPlatform::DebugFlags>) */

int __thiscall
EditorExportPlatformWeb::run(EditorExportPlatformWeb *this,Ref *param_1,int param_2,int param_4)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  ushort uVar5;
  long in_FS_OFFSET;
  Variant local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = "export/web/http_port";
  local_60 = 0x14;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  uVar2 = Variant::operator_cast_to_unsigned_short((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "export/web/http_host";
  local_70 = 0;
  local_60 = 0x14;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String(local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "export/web/use_tls";
  local_70 = 0;
  local_60 = 0x12;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  uVar5 = (ushort)local_78;
  iVar3 = (int)(StrRange *)&local_70;
  if (*(int *)(this + 0x1b0) == 1) {
    if (param_2 == 0) {
      iVar3 = _export_project(this,param_1,param_4);
      if (iVar3 == 0) {
        iVar3 = _start_server(this,(String *)local_78,uVar2,bVar1);
        if (iVar3 == 0) {
          iVar3 = _launch_browser((String *)this,uVar5,SUB21(uVar2,0));
        }
      }
      goto LAB_00104dc0;
    }
    if (param_2 == 1) {
      iVar3 = _export_project(this,param_1,param_4);
      if (iVar3 == 0) {
        iVar3 = _start_server(this,(String *)local_78,uVar2,bVar1);
      }
      goto LAB_00104dc0;
    }
    local_70 = 0;
    local_68 = "Invalid option \"%s\" for the current state.";
    local_60 = 0x2a;
    String::parse_latin1((StrRange *)&local_70);
    vformat<int>((String *)&local_68,iVar3);
    uVar4 = 799;
LAB_00104ea1:
    _err_print_error(&_LC122,"platform/web/export/export_plugin.cpp",uVar4,
                     "Method/function failed. Returning: FAILED",(String *)&local_68,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  else if (*(int *)(this + 0x1b0) == 2) {
    if (param_2 == 1) {
      iVar3 = _export_project(this,param_1,param_4);
      goto LAB_00104dc0;
    }
    if (param_2 == 2) {
      iVar3 = 0;
      EditorHTTPServer::stop();
      goto LAB_00104dc0;
    }
    if (param_2 == 0) {
      iVar3 = _export_project(this,param_1,param_4);
      if (iVar3 == 0) {
        iVar3 = _launch_browser((String *)this,uVar5,SUB21(uVar2,0));
      }
      goto LAB_00104dc0;
    }
    local_70 = 0;
    local_68 = "Invalid option \"%s\" for the current state.";
    local_60 = 0x2a;
    String::parse_latin1((StrRange *)&local_70);
    vformat<int>((String *)&local_68,iVar3);
    uVar4 = 0x33a;
    goto LAB_00104ea1;
  }
  iVar3 = 1;
LAB_00104dc0:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::poll_export() */

ulong __thiscall EditorExportPlatformWeb::poll_export(EditorExportPlatformWeb *this)

{
  EditorExportPlatformWeb *pEVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  CowData<char32_t> *this_00;
  CowData<char32_t> *pCVar5;
  long in_FS_OFFSET;
  CowData<char32_t> *local_48;
  CowData<char32_t> *local_40;
  EditorExportPlatformWeb *local_38;
  long local_30;
  
  this_00 = (CowData<char32_t> *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (CowData<char32_t> *)0x0;
  while( true ) {
    iVar3 = EditorExport::get_export_preset_count();
    if (iVar3 <= (int)this_00) break;
    EditorExport::get_export_preset((int)&local_40);
    cVar2 = EditorExportPreset::is_runnable();
    if (cVar2 != '\0') {
      EditorExportPreset::get_platform();
      if (this == local_38) {
        cVar2 = RefCounted::unreference();
        pEVar1 = local_38;
        if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)local_38), cVar2 != '\0')) {
          (**(code **)(*(long *)pEVar1 + 0x140))(pEVar1);
          Memory::free_static(pEVar1,false);
        }
        this_00 = local_48;
        pCVar5 = local_48;
        if (local_40 != local_48) {
          local_48 = local_40;
          if (local_40 == (CowData<char32_t> *)0x0) {
            if (this_00 == (CowData<char32_t> *)0x0) {
              iVar3 = *(int *)(this + 0x1b0);
              *(undefined4 *)(this + 0x1b0) = 0;
              goto LAB_001052a0;
            }
          }
          else {
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              local_48 = (CowData<char32_t> *)0x0;
            }
            pCVar5 = local_40;
            if (this_00 == (CowData<char32_t> *)0x0) goto LAB_0010519e;
          }
          cVar2 = RefCounted::unreference();
          pCVar5 = local_40;
          if ((cVar2 != '\0') &&
             (cVar2 = predelete_handler((Object *)this_00), pCVar5 = local_40, cVar2 != '\0')) {
            (**(code **)(*(long *)this_00 + 0x140))(this_00);
            Memory::free_static(this_00,false);
            pCVar5 = local_40;
          }
        }
LAB_0010519e:
        this_00 = pCVar5;
        if (((pCVar5 != (CowData<char32_t> *)0x0) &&
            (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
           (cVar2 = predelete_handler((Object *)local_40), this_00 = local_40, cVar2 != '\0')) {
          (**(code **)(*(long *)local_40 + 0x140))(local_40);
          Memory::free_static(local_40,false);
        }
        break;
      }
      if (((local_38 != (EditorExportPlatformWeb *)0x0) &&
          (cVar2 = RefCounted::unreference(), pEVar1 = local_38, cVar2 != '\0')) &&
         (cVar2 = predelete_handler((Object *)local_38), cVar2 != '\0')) {
        (**(code **)(*(long *)pEVar1 + 0x140))(pEVar1);
        Memory::free_static(pEVar1,false);
      }
    }
    if (((local_40 != (CowData<char32_t> *)0x0) &&
        (cVar2 = RefCounted::unreference(), pCVar5 = local_40, cVar2 != '\0')) &&
       (cVar2 = predelete_handler((Object *)local_40), cVar2 != '\0')) {
      (**(code **)(*(long *)pCVar5 + 0x140))(pCVar5);
      Memory::free_static(pCVar5,false);
    }
    this_00 = (CowData<char32_t> *)(ulong)((int)this_00 + 1);
  }
  iVar3 = *(int *)(this + 0x1b0);
  *(undefined4 *)(this + 0x1b0) = 0;
  if (local_48 != (CowData<char32_t> *)0x0) {
    this_00 = (CowData<char32_t> *)&local_38;
    local_38 = (EditorExportPlatformWeb *)0x0;
    cVar2 = (**(code **)(*(long *)this + 0x240))(this,&local_48,this_00,&local_40,1);
    if (cVar2 != '\0') {
      cVar2 = EditorHTTPServer::is_listening();
      *(uint *)(this + 0x1b0) = 2 - (uint)(cVar2 == '\0');
    }
    CowData<char32_t>::_unref(this_00);
    iVar4 = *(int *)(this + 0x1b0);
    if (iVar4 == 2) goto LAB_00105218;
  }
LAB_001052a0:
  cVar2 = EditorHTTPServer::is_listening();
  if (cVar2 != '\0') {
    EditorHTTPServer::stop();
  }
  iVar4 = *(int *)(this + 0x1b0);
LAB_00105218:
  if (((local_48 != (CowData<char32_t> *)0x0) &&
      (cVar2 = RefCounted::unreference(), pCVar5 = local_48, cVar2 != '\0')) &&
     (cVar2 = predelete_handler((Object *)local_48), cVar2 != '\0')) {
    (**(code **)(*(long *)pCVar5 + 0x140))(pCVar5);
    Memory::free_static(pCVar5,false);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)this_00 >> 8),iVar4 != iVar3) & 0xffffffff;
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



/* EditorExportPlatformWeb::_add_manifest_icon(String const&, String const&, int, Array&) */

int __thiscall
EditorExportPlatformWeb::_add_manifest_icon
          (EditorExportPlatformWeb *this,String *param_1,String *param_2,int param_3,Array *param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Variant *pVVar4;
  Image *pIVar5;
  long in_FS_OFFSET;
  long local_d8;
  String local_d0 [8];
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  String local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  Image *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_file();
  String::get_basename();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_90 = 0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d8);
  }
  local_98 = 0;
  local_88 = (Image *)0x10db71;
  local_80 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  vformat<String,int,int>
            (local_d0,(StrRange *)&local_98,(CowData<char32_t> *)&local_90,param_3,param_3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  String::get_base_dir();
  String::path_join((String *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((*(long *)param_2 == 0) || (*(uint *)(*(long *)param_2 + -8) < 2)) {
    _get_project_icon();
    pIVar5 = local_88;
    if (local_88 != (Image *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pIVar5 = (Image *)0x0;
      }
      if ((local_88 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
        memdelete<Image>(local_88);
      }
    }
LAB_00105640:
    Image::resize(pIVar5,param_3,param_3,1);
LAB_00105653:
    iVar3 = Image::save_png((String *)pIVar5);
    if (iVar3 != 0) {
      pcVar1 = *(code **)(*(long *)this + 0x178);
      local_98 = 0;
      if (local_c8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_c8);
      }
      local_a8 = 0;
      local_88 = (Image *)&_LC7;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_a8);
      local_b0 = 0;
      local_88 = (Image *)0x10da6c;
      local_80 = 0x1b;
      String::parse_latin1((StrRange *)&local_b0);
      TTR(local_a0,(String *)&local_b0);
      vformat<String>((CowData<char32_t> *)&local_90,local_a0,(StrRange *)&local_98);
      local_88 = (Image *)&_LC7;
      local_b8 = 0;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_b8);
      local_88 = (Image *)0x10db99;
      local_c0 = 0;
      local_80 = 0xd;
      String::parse_latin1((StrRange *)&local_c0);
      TTR((String *)&local_88,(String *)&local_c0);
      (*pcVar1)(this,3,(CowData<char32_t> *)&local_88,(CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      goto LAB_00105820;
    }
    Dictionary::Dictionary((Dictionary *)&local_98);
    local_88 = (Image *)0x10dba7;
    local_90 = 0;
    local_80 = 5;
    String::parse_latin1((StrRange *)&local_90);
    vformat<int,int>((String *)&local_88,(int)(CowData<char32_t> *)&local_90,param_3);
    Variant::Variant((Variant *)local_58,(String *)&local_88);
    Variant::Variant((Variant *)local_78,"sizes");
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)&local_98);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    Variant::Variant((Variant *)local_58,"image/png");
    Variant::Variant((Variant *)local_78,"type");
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)&local_98);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,local_d0);
    Variant::Variant((Variant *)local_78,"src");
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)&local_98);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,(Dictionary *)&local_98);
    Array::push_back((Variant *)param_4);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Dictionary::~Dictionary((Dictionary *)&local_98);
    cVar2 = RefCounted::unreference();
  }
  else {
    EditorExportPlatform::_load_icon_or_splash_image((String *)&local_88,this);
    pIVar5 = local_88;
    if (local_88 == (Image *)0x0) {
LAB_00105d98:
      pIVar5 = (Image *)0x0;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        pIVar5 = (Image *)0x0;
        if (local_88 != (Image *)0x0) goto LAB_001058ce;
        goto LAB_00105d98;
      }
      if (local_88 != (Image *)0x0) {
LAB_001058ce:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          memdelete<Image>(local_88);
        }
        if (pIVar5 == (Image *)0x0) goto LAB_00105d98;
      }
      cVar2 = Image::is_empty();
      if (cVar2 == '\0') {
        iVar3 = Image::get_width();
        if ((iVar3 != param_3) || (iVar3 = Image::get_height(), iVar3 != param_3))
        goto LAB_00105640;
        goto LAB_00105653;
      }
    }
    pcVar1 = *(code **)(*(long *)this + 0x178);
    local_98 = 0;
    if (*(long *)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)param_2);
    }
    local_a8 = 0;
    local_88 = (Image *)&_LC7;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a8);
    local_b0 = 0;
    local_88 = (Image *)0x10db7e;
    local_80 = 0x1a;
    String::parse_latin1((StrRange *)&local_b0);
    TTR(local_a0,(String *)&local_b0);
    vformat<String>((CowData<char32_t> *)&local_90,local_a0,(StrRange *)&local_98);
    local_88 = (Image *)&_LC7;
    local_b8 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_b8);
    local_88 = (Image *)0x10db99;
    local_c0 = 0;
    local_80 = 0xd;
    String::parse_latin1((StrRange *)&local_c0);
    TTR((String *)&local_88,(String *)&local_c0);
    (*pcVar1)(this,3,(CowData<char32_t> *)&local_88,(CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    iVar3 = 0;
    if (pIVar5 == (Image *)0x0) goto LAB_00105830;
LAB_00105820:
    cVar2 = RefCounted::unreference();
  }
  if (cVar2 != '\0') {
    memdelete<Image>(pIVar5);
  }
LAB_00105830:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::EditorExportPlatformWeb() */

void __thiscall EditorExportPlatformWeb::EditorExportPlatformWeb(EditorExportPlatformWeb *this)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  EditorHTTPServer *this_00;
  Object *pOVar5;
  Object *pOVar6;
  void *pvVar7;
  long lVar8;
  Object *pOVar9;
  long in_FS_OFFSET;
  bool bVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  Image *local_98;
  undefined8 local_90;
  Image *local_88;
  undefined8 local_80;
  Object *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorExportPlatform::EditorExportPlatform((EditorExportPlatform *)this);
  bVar10 = EditorNode::singleton == 0;
  *(undefined ***)this = &PTR__initialize_classv_001148f8;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1a0) = (undefined1  [16])0x0;
  if (bVar10) goto LAB_001063c0;
  this_00 = (EditorHTTPServer *)operator_new(0x1230,"");
  EditorHTTPServer::EditorHTTPServer(this_00);
  postinitialize_handler((Object *)this_00);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    pOVar9 = *(Object **)(this + 0x1b8);
    if (pOVar9 != (Object *)0x0) {
      *(undefined8 *)(this + 0x1b8) = 0;
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        this_00 = (EditorHTTPServer *)0x0;
        cVar3 = predelete_handler(pOVar9);
        if (cVar3 != '\0') goto LAB_00106873;
      }
    }
  }
  else {
    pOVar9 = *(Object **)(this + 0x1b8);
    pOVar6 = pOVar9;
    if (this_00 != (EditorHTTPServer *)pOVar9) {
      *(EditorHTTPServer **)(this + 0x1b8) = this_00;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x1b8) = 0;
      }
      pOVar6 = (Object *)this_00;
      if (((pOVar9 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
LAB_00106873:
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
        pOVar6 = (Object *)this_00;
        if (this_00 == (EditorHTTPServer *)0x0) goto LAB_00105f27;
      }
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
LAB_00105f27:
  local_98 = (Image *)operator_new(0x268,"");
  Resource::Resource((Resource *)local_98);
  ((Resource *)local_98)[0x260] = (Resource)0x0;
  *(code **)local_98 = Memory::free_static;
  *(undefined4 *)((Resource *)local_98 + 0x240) = 0;
  *(undefined8 *)((Resource *)local_98 + 0x250) = 0;
  *(undefined8 *)((Resource *)local_98 + 600) = 0;
  postinitialize_handler((Object *)local_98);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    local_98 = (Image *)0x0;
  }
  fVar11 = (float)EditorScale::get_scale();
  fVar12 = (float)EditorScale::get_scale();
  fVar12 = roundf(fVar12);
  bVar10 = false;
  if (fVar11 != fVar12) {
    fVar14 = _LC140;
    if (_LC140 <= ABS(fVar12) * _LC140) {
      fVar14 = ABS(fVar12) * _LC140;
    }
    bVar10 = fVar14 <= ABS(fVar12 - fVar11);
  }
  local_50 = 0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  uVar13 = EditorScale::get_scale();
  local_90 = 0;
  local_88 = (Image *)0x10e820;
  local_80 = 0x15e;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = (Image *)0x0;
  if (local_98 != (Image *)0x0) {
    local_88 = local_98;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      local_88 = (Image *)0x0;
    }
  }
  ImageLoaderSVG::create_image_from_string
            (uVar13,&local_88,(StrRange *)&local_90,bVar10,(Ref *)&local_78);
  if ((local_88 != (Image *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    memdelete<Image>(local_88);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((void *)local_70._0_8_ != (void *)0x0) {
    pvVar7 = (void *)local_70._0_8_;
    if (local_50._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(local_70._8_8_ + lVar8) != 0) {
            *(int *)(local_70._8_8_ + lVar8) = 0;
            Memory::free_static(*(void **)((long)pvVar7 + lVar8 * 2),false);
            *(undefined8 *)(local_70._0_8_ + lVar8 * 2) = 0;
            pvVar7 = (void *)local_70._0_8_;
          }
          lVar8 = lVar8 + 4;
        } while ((ulong)uVar1 << 2 != lVar8);
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0010613f;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static((void *)local_70._8_8_,false);
  }
LAB_0010613f:
  ImageTexture::create_from_image((Ref *)&local_78);
  pOVar9 = *(Object **)(this + 400);
  pOVar6 = pOVar9;
  if (local_78 == pOVar9) {
LAB_001061b2:
    if (((pOVar6 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar9 = local_78, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_78), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))();
      Memory::free_static(pOVar9,false);
    }
  }
  else {
    *(Object **)(this + 400) = local_78;
    if (local_78 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 400) = 0;
      }
      pOVar6 = local_78;
      if (pOVar9 != (Object *)0x0) goto LAB_00106193;
      goto LAB_001061b2;
    }
    if (pOVar9 != (Object *)0x0) {
LAB_00106193:
      cVar3 = RefCounted::unreference();
      pOVar6 = local_78;
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar9), pOVar6 = local_78, cVar3 != '\0'))
      {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
        pOVar6 = local_78;
      }
      goto LAB_001061b2;
    }
  }
  local_50 = 0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  uVar13 = EditorScale::get_scale();
  local_90 = 0;
  local_88 = (Image *)0x10e980;
  local_80 = 0x13e;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = (Image *)0x0;
  if (local_98 != (Image *)0x0) {
    local_88 = local_98;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      local_88 = (Image *)0x0;
    }
  }
  ImageLoaderSVG::create_image_from_string
            (uVar13,&local_88,(StrRange *)&local_90,bVar10,(Ref *)&local_78);
  if ((local_88 != (Image *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    memdelete<Image>(local_88);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((void *)local_70._0_8_ != (void *)0x0) {
    pvVar7 = (void *)local_70._0_8_;
    if (local_50._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
      }
      else {
        lVar8 = 0;
        do {
          if (*(int *)(local_70._8_8_ + lVar8) != 0) {
            *(int *)(local_70._8_8_ + lVar8) = 0;
            Memory::free_static(*(void **)((long)pvVar7 + lVar8 * 2),false);
            *(undefined8 *)(local_70._0_8_ + lVar8 * 2) = 0;
            pvVar7 = (void *)local_70._0_8_;
          }
          lVar8 = lVar8 + 4;
        } while (lVar8 != (ulong)uVar1 << 2);
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_001062f7;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static((void *)local_70._8_8_,false);
  }
LAB_001062f7:
  ImageTexture::create_from_image((Ref *)&local_78);
  pOVar9 = *(Object **)(this + 0x198);
  pOVar6 = pOVar9;
  if (local_78 == pOVar9) {
LAB_00106351:
    if (((pOVar6 != (Object *)0x0) &&
        (cVar3 = RefCounted::unreference(), pOVar9 = local_78, cVar3 != '\0')) &&
       (cVar3 = predelete_handler(local_78), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
  }
  else {
    *(Object **)(this + 0x198) = local_78;
    if (local_78 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(this + 0x198) = 0;
      }
      pOVar6 = local_78;
      if (pOVar9 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        goto joined_r0x00106346;
      }
      goto LAB_00106351;
    }
    if (pOVar9 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
joined_r0x00106346:
      pOVar6 = local_78;
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar9), pOVar6 = local_78, cVar3 != '\0'))
      {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
        pOVar6 = local_78;
      }
      goto LAB_00106351;
    }
  }
  pOVar9 = *(Object **)(EditorNode::singleton + 0x838);
  if ((pOVar9 == (Object *)0x0) || (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    Ref<ImageTexture>::instantiate<>((Ref<ImageTexture> *)(this + 0x1a0));
    Ref<ImageTexture>::instantiate<>((Ref<ImageTexture> *)(this + 0x1a8));
  }
  else {
    pcVar2 = *(code **)(*(long *)pOVar9 + 0x1c8);
    lVar8 = EditorStringNames::singleton + 0x10;
    if ((EditorExportPlatformWeb()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&EditorExportPlatformWeb()::{lambda()#1}::operator()()::sname),
       iVar4 != 0)) {
      _scs_create((char *)&EditorExportPlatformWeb()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &EditorExportPlatformWeb()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&EditorExportPlatformWeb()::{lambda()#1}::operator()()::sname);
    }
    (*pcVar2)((Ref *)&local_78,pOVar9,&EditorExportPlatformWeb()::{lambda()#1}::operator()()::sname,
              lVar8);
    if (local_78 == (Object *)0x0) {
      pOVar6 = *(Object **)(this + 0x1a0);
      if (pOVar6 != (Object *)0x0) {
        *(undefined8 *)(this + 0x1a0) = 0;
        goto LAB_0010691b;
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(local_78,&Object::typeinfo,&ImageTexture::typeinfo,0);
      pOVar6 = *(Object **)(this + 0x1a0);
      if (pOVar6 != pOVar5) {
        *(Object **)(this + 0x1a0) = pOVar5;
        if (pOVar5 == (Object *)0x0) {
          if (pOVar6 != (Object *)0x0) goto LAB_0010691b;
        }
        else {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)(this + 0x1a0) = 0;
          }
          if (pOVar6 != (Object *)0x0) {
LAB_0010691b:
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
          if (local_78 == (Object *)0x0) goto LAB_0010657f;
        }
      }
      cVar3 = RefCounted::unreference();
      pOVar6 = local_78;
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_78), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
LAB_0010657f:
    pcVar2 = *(code **)(*(long *)pOVar9 + 0x1c8);
    lVar8 = EditorStringNames::singleton + 0x10;
    if ((EditorExportPlatformWeb()::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&EditorExportPlatformWeb()::{lambda()#2}::operator()()::sname),
       iVar4 != 0)) {
      _scs_create((char *)&EditorExportPlatformWeb()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &EditorExportPlatformWeb()::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&EditorExportPlatformWeb()::{lambda()#2}::operator()()::sname);
    }
    (*pcVar2)((Ref *)&local_78,pOVar9,&EditorExportPlatformWeb()::{lambda()#2}::operator()()::sname,
              lVar8);
    if (local_78 == (Object *)0x0) {
      pOVar6 = *(Object **)(this + 0x1a8);
      if (pOVar6 != (Object *)0x0) {
        *(undefined8 *)(this + 0x1a8) = 0;
        goto LAB_001068bb;
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(local_78,&Object::typeinfo,&ImageTexture::typeinfo,0);
      pOVar6 = *(Object **)(this + 0x1a8);
      if (pOVar6 != pOVar5) {
        *(Object **)(this + 0x1a8) = pOVar5;
        if (pOVar5 == (Object *)0x0) {
          if (pOVar6 != (Object *)0x0) goto LAB_001068bb;
        }
        else {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)(this + 0x1a8) = 0;
          }
          if (pOVar6 != (Object *)0x0) {
LAB_001068bb:
            cVar3 = RefCounted::unreference();
            if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
          if (local_78 == (Object *)0x0) goto LAB_0010662e;
        }
      }
      cVar3 = RefCounted::unreference();
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_78), cVar3 != '\0')) {
        (**(code **)(*(long *)local_78 + 0x140))(local_78);
        Memory::free_static(local_78,false);
      }
    }
LAB_0010662e:
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
  }
  if ((local_98 != (Image *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
    memdelete<Image>(local_98);
  }
LAB_001063c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00106bf6:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_00106bf6;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_0010f68e();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_00106b4c;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_00106b4c:
  puVar8[-1] = param_1;
  return;
}



/* EditorExportPlatformWeb::_replace_strings(HashMap<String, String, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, String> > >
   const&, Vector<unsigned char>&) */

void __thiscall
EditorExportPlatformWeb::_replace_strings
          (EditorExportPlatformWeb *this,HashMap *param_1,Vector *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  long *plVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  undefined *local_78;
  long local_70;
  char local_68 [8];
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::utf8((char *)local_88,(int)*(undefined8 *)(param_2 + 8));
  local_80 = 0;
  String::split(local_68,SUB81(local_88,0),0x10d949);
  for (lVar8 = 0; (local_60 != 0 && (lVar8 < *(long *)(local_60 + -8))); lVar8 = lVar8 + 1) {
    local_78 = (undefined *)0x0;
    plVar1 = (long *)(local_60 + lVar8 * 8);
    lVar6 = *plVar1;
    plVar9 = (long *)(lVar6 + -0x10);
    if (lVar6 != 0) {
      do {
        lVar6 = *plVar9;
        if (lVar6 == 0) goto LAB_00106d34;
        LOCK();
        lVar5 = *plVar9;
        bVar10 = lVar6 == lVar5;
        if (bVar10) {
          *plVar9 = lVar6 + 1;
          lVar5 = lVar6;
        }
        UNLOCK();
      } while (!bVar10);
      if (lVar5 != -1) {
        local_78 = (undefined *)*plVar1;
      }
    }
LAB_00106d34:
    plVar9 = *(long **)(param_1 + 0x18);
joined_r0x00106d43:
    if (plVar9 != (long *)0x0) {
      do {
        String::replace((String *)&local_58,(String *)&local_78);
        puVar4 = local_58;
        puVar3 = local_78;
        if (local_78 == local_58) {
          if (local_78 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) goto code_r0x00106db7;
          }
        }
        else {
          if (local_78 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = (undefined *)0x0;
              Memory::free_static(puVar3 + -0x10,false);
            }
          }
          local_78 = local_58;
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) break;
      } while( true );
    }
    local_70 = 0;
    local_58 = &_LC63;
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    String::operator+((String *)&local_58,(String *)&local_78);
    String::operator+=((String *)&local_80,(String *)&local_58);
    puVar3 = local_58;
    if (local_58 != (undefined *)0x0) {
      LOCK();
      plVar9 = (long *)(local_58 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar3 + -0x10,false);
      }
    }
    lVar6 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar9 = (long *)(local_70 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    puVar3 = local_78;
    if (local_78 != (undefined *)0x0) {
      LOCK();
      plVar9 = (long *)(local_78 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_78 = (undefined *)0x0;
        Memory::free_static(puVar3 + -0x10,false);
      }
    }
  }
  String::utf8();
  if (local_58 == (undefined *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (long)((int)*(undefined8 *)(local_58 + -8) + -1);
    if ((int)*(undefined8 *)(local_58 + -8) == 0) {
      lVar8 = 0;
    }
  }
  lVar6 = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(param_2 + 8),lVar8);
  puVar3 = local_58;
  do {
    local_58 = puVar3;
    if (puVar3 == (undefined *)0x0) {
LAB_00106f11:
      CowData<String>::_unref((CowData<String> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref(local_88);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar8 = *(long *)(puVar3 + -8);
    if (((int)lVar8 == 0) || ((int)lVar8 + -1 <= (int)lVar6)) {
      LOCK();
      plVar9 = (long *)(puVar3 + -0x10);
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
        local_58 = (undefined *)0x0;
        Memory::free_static(puVar3 + -0x10,false);
      }
      goto LAB_00106f11;
    }
    if (lVar6 == lVar8) {
      lVar8 = *(long *)(param_2 + 8);
      uVar7 = 0;
    }
    else {
      if (lVar8 <= lVar6) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar7 = puVar3[lVar6];
      lVar8 = *(long *)(param_2 + 8);
    }
    if (lVar8 == 0) {
      lVar8 = 0;
LAB_00106fc9:
      _err_print_index_error
                ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar8,"p_index",
                 "((Vector<T> *)(this))->_cowdata.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar8 = *(long *)(lVar8 + -8);
    if (lVar8 <= lVar6) goto LAB_00106fc9;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(param_2 + 8));
    *(undefined1 *)(*(long *)(param_2 + 8) + lVar6) = uVar7;
    lVar6 = lVar6 + 1;
    puVar3 = local_58;
  } while( true );
code_r0x00106db7:
  local_58 = (undefined *)0x0;
  Memory::free_static(puVar4 + -0x10,false);
  plVar9 = (long *)*plVar9;
  goto joined_r0x00106d43;
}



/* EditorExportPlatformWeb::_fix_html(Vector<unsigned char>&, Ref<EditorExportPreset> const&, String
   const&, bool, BitField<EditorExportPlatform::DebugFlags>, Vector<SharedObject>, Dictionary
   const&) */

void EditorExportPlatformWeb::_fix_html
               (undefined8 param_1_00,undefined8 param_2_00,EditorExportPlatformWeb *param_1,
               Vector *param_2,undefined8 *param_3,String *param_6,undefined8 param_7,ulong param_8,
               long param_9,Dictionary *param_10)

{
  int *piVar1;
  char cVar2;
  bool *pbVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  Variant *pVVar8;
  CowData<char32_t> *pCVar9;
  void *pvVar10;
  undefined8 *puVar11;
  CowData<char32_t> *pCVar12;
  String *this;
  StrRange *pSVar13;
  CowData<char32_t> *pCVar14;
  long lVar15;
  long lVar16;
  CowData<char32_t> *this_00;
  int *piVar17;
  long in_FS_OFFSET;
  String *local_1f8;
  String *local_1b8;
  Dictionary local_160 [8];
  Array local_158 [8];
  Array local_150 [8];
  undefined8 local_148;
  long local_140;
  Variant local_138 [8];
  long local_130;
  Variant local_128 [8];
  long local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  undefined1 local_f8 [8];
  long local_f0;
  long local_e8;
  CowData<char32_t> *local_e0;
  char *local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  int local_98 [8];
  undefined8 local_78;
  undefined8 local_70;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_160);
  Array::Array(local_158);
  lVar16 = *(long *)(param_9 + 8);
  if (lVar16 != 0) {
    lVar15 = 0;
    do {
      if (*(long *)(lVar16 + -8) <= lVar15) break;
      String::get_file();
      Variant::Variant((Variant *)local_58,(String *)&local_c8);
      Array::push_back((Variant *)local_158);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar15 = lVar15 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      lVar16 = *(long *)(param_9 + 8);
    } while (lVar16 != 0);
  }
  EditorExportPlatform::gen_export_flags(local_f8,param_1,param_8 & 0xfffffffffffffffe);
  Array::Array(local_150);
  if (local_f0 != 0) {
    lVar16 = 0;
    do {
      if (*(long *)(local_f0 + -8) <= lVar16) break;
      Variant::Variant((Variant *)local_58,(String *)(local_f0 + lVar16 * 8));
      Array::push_back((Variant *)local_150);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar16 = lVar16 + 1;
    } while (local_f0 != 0);
  }
  pbVar3 = (bool *)*param_3;
  StringName::StringName((StringName *)&local_c8,"html/canvas_resize_policy",false);
  Object::get((StringName *)local_58,pbVar3);
  Variant::Variant((Variant *)&local_78,"canvasResizePolicy");
  pVVar8 = (Variant *)Dictionary::operator[]((Variant *)local_160);
  if (pVVar8 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar8 = 0;
    *(int *)pVVar8 = local_58[0];
    *(undefined8 *)(pVVar8 + 8) = local_50;
    *(undefined8 *)(pVVar8 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[(int)local_78] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  pbVar3 = (bool *)*param_3;
  StringName::StringName((StringName *)&local_c8,"html/experimental_virtual_keyboard",false);
  Object::get((StringName *)local_58,pbVar3);
  Variant::Variant((Variant *)&local_78,"experimentalVK");
  pVVar8 = (Variant *)Dictionary::operator[]((Variant *)local_160);
  if (pVVar8 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar8 = 0;
    *(int *)pVVar8 = local_58[0];
    *(undefined8 *)(pVVar8 + 8) = local_50;
    *(undefined8 *)(pVVar8 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[(int)local_78] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  pbVar3 = (bool *)*param_3;
  StringName::StringName((StringName *)&local_c8,"html/focus_canvas_on_start",false);
  Object::get((StringName *)local_58,pbVar3);
  Variant::Variant((Variant *)&local_78,"focusCanvas");
  pVVar8 = (Variant *)Dictionary::operator[]((Variant *)local_160);
  if (pVVar8 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar8 = 0;
    *(int *)pVVar8 = local_58[0];
    *(undefined8 *)(pVVar8 + 8) = local_50;
    *(undefined8 *)(pVVar8 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[(int)local_78] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  Variant::Variant((Variant *)local_58,local_158);
  Variant::Variant((Variant *)&local_78,"gdextensionLibs");
  pVVar8 = (Variant *)Dictionary::operator[]((Variant *)local_160);
  if (pVVar8 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar8 = 0;
    *(int *)pVVar8 = local_58[0];
    *(undefined8 *)(pVVar8 + 8) = local_50;
    *(undefined8 *)(pVVar8 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[(int)local_78] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,param_6);
  Variant::Variant((Variant *)&local_78,"executable");
  pVVar8 = (Variant *)Dictionary::operator[]((Variant *)local_160);
  if (pVVar8 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar8 = 0;
    *(int *)pVVar8 = local_58[0];
    *(undefined8 *)(pVVar8 + 8) = local_50;
    *(undefined8 *)(pVVar8 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[(int)local_78] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,local_150);
  Variant::Variant((Variant *)&local_78,"args");
  pVVar8 = (Variant *)Dictionary::operator[]((Variant *)local_160);
  if (pVVar8 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar8 = 0;
    *(int *)pVVar8 = local_58[0];
    *(undefined8 *)(pVVar8 + 8) = local_50;
    *(undefined8 *)(pVVar8 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[(int)local_78] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,param_10);
  Variant::Variant((Variant *)&local_78,"fileSizes");
  pVVar8 = (Variant *)Dictionary::operator[]((Variant *)local_160);
  if (pVVar8 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar8 = 0;
    *(int *)pVVar8 = local_58[0];
    *(undefined8 *)(pVVar8 + 8) = local_50;
    *(undefined8 *)(pVVar8 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[(int)local_78] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  pbVar3 = (bool *)*param_3;
  StringName::StringName
            ((StringName *)&local_c8,"progressive_web_app/ensure_cross_origin_isolation_headers",
             false);
  Object::get((StringName *)&local_78,pbVar3);
  bVar7 = Variant::operator_cast_to_bool((Variant *)&local_78);
  Variant::Variant((Variant *)local_58,bVar7);
  Variant::Variant((Variant *)local_98,"ensureCrossOriginIsolationHeaders");
  pVVar8 = (Variant *)Dictionary::operator[]((Variant *)local_160);
  if (pVVar8 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)pVVar8 = 0;
    *(int *)pVVar8 = local_58[0];
    *(undefined8 *)(pVVar8 + 8) = local_50;
    *(undefined8 *)(pVVar8 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_98[0]] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  local_148 = 0;
  pbVar3 = (bool *)*param_3;
  StringName::StringName((StringName *)&local_c8,"html/export_icon",false);
  Object::get((StringName *)local_58,pbVar3);
  bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (bVar7) {
    local_d8 = (char *)0x0;
    String::parse_latin1((String *)&local_d8,".icon.png\" />\n");
    operator+((char *)&local_e8,
              (String *)"<link id=\"-gd-engine-icon\" rel=\"icon\" type=\"image/png\" href=\"");
    String::operator+((String *)&local_c8,(String *)&local_e8);
    String::operator+=((String *)&local_148,(String *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    local_d8 = (char *)0x0;
    String::parse_latin1((String *)&local_d8,".apple-touch-icon.png\"/>\n");
    operator+((char *)&local_e8,(String *)"<link rel=\"apple-touch-icon\" href=\"");
    String::operator+((String *)&local_c8,(String *)&local_e8);
    String::operator+=((String *)&local_148,(String *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  }
  local_1b8 = (String *)&local_148;
  local_1f8 = (String *)&local_d8;
  pbVar3 = (bool *)*param_3;
  StringName::StringName((StringName *)&local_c8,"progressive_web_app/enabled",false);
  Object::get((StringName *)local_58,pbVar3);
  bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (bVar7) {
    local_d8 = (char *)0x0;
    String::parse_latin1(local_1f8,".manifest.json\">\n");
    operator+((char *)&local_e8,(String *)"<link rel=\"manifest\" href=\"");
    String::operator+((String *)&local_c8,(String *)&local_e8);
    String::operator+=(local_1b8,(String *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
    local_d8 = (char *)0x0;
    String::parse_latin1(local_1f8,".service.worker.js");
    String::operator+((String *)&local_c8,param_6);
    Variant::Variant((Variant *)local_58,(String *)&local_c8);
    Variant::Variant((Variant *)&local_78,"serviceWorker");
    pVVar8 = (Variant *)Dictionary::operator[]((Variant *)local_160);
    Variant::operator=(pVVar8,(Variant *)local_58);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
  }
  Variant::Variant((Variant *)local_58,local_160);
  Variant::to_json_string();
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pbVar3 = (bool *)*param_3;
  StringName::StringName((StringName *)&local_c8,"html/head_include",false);
  Object::get((StringName *)local_58,pbVar3);
  Variant::operator_cast_to_String(local_138);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  local_a0 = 2;
  local_d8 = ".js";
  local_c0 = (undefined1  [16])0x0;
  local_b0 = (undefined1  [16])0x0;
  local_100 = 0;
  local_d0 = 3;
  String::parse_latin1((StrRange *)&local_100);
  String::operator+((String *)&local_e8,param_6);
  local_108 = 0;
  local_d8 = "$GODOT_URL";
  local_d0 = 10;
  String::parse_latin1((StrRange *)&local_108);
  pCVar9 = (CowData<char32_t> *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                         *)&local_c8,(String *)&local_108);
  if (*(long *)pCVar9 != local_e8) {
    CowData<char32_t>::_unref(pCVar9);
    *(long *)pCVar9 = local_e8;
    local_e8 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_100,"application/config/name",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_e8);
  local_d8 = "$GODOT_PROJECT_NAME";
  local_108 = 0;
  local_d0 = 0x13;
  String::parse_latin1((StrRange *)&local_108);
  pCVar9 = (CowData<char32_t> *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                         *)&local_c8,(String *)&local_108);
  if (*(long *)pCVar9 != local_e8) {
    CowData<char32_t>::_unref(pCVar9);
    *(long *)pCVar9 = local_e8;
    local_e8 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_100 != 0)) {
    StringName::unref();
  }
  String::operator+((String *)&local_e8,local_1b8);
  local_d8 = "$GODOT_HEAD_INCLUDE";
  local_100 = 0;
  local_d0 = 0x13;
  String::parse_latin1((StrRange *)&local_100);
  pCVar9 = (CowData<char32_t> *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                         *)&local_c8,(String *)&local_100);
  if (*(long *)pCVar9 != local_e8) {
    CowData<char32_t>::_unref(pCVar9);
    *(long *)pCVar9 = local_e8;
    local_e8 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  local_d8 = "$GODOT_CONFIG";
  local_e8 = 0;
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  pCVar9 = (CowData<char32_t> *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                         *)&local_c8,(String *)&local_e8);
  if (*(long *)pCVar9 != local_140) {
    CowData<char32_t>::_ref(pCVar9,(CowData *)&local_140);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_108,"application/boot_splash/bg_color",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  local_78 = Variant::operator_cast_to_Color((Variant *)local_58);
  local_70 = param_2_00;
  Color::to_html(false);
  operator+((char *)&local_e8,(String *)&_LC175);
  local_110 = 0;
  local_d8 = "$GODOT_SPLASH_COLOR";
  local_d0 = 0x13;
  String::parse_latin1((StrRange *)&local_110);
  pCVar9 = (CowData<char32_t> *)
           HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                         *)&local_c8,(String *)&local_110);
  if (*(long *)pCVar9 != local_e8) {
    CowData<char32_t>::_unref(pCVar9);
    *(long *)pCVar9 = local_e8;
    local_e8 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_130,"application/boot_splash/show_image",false);
  ProjectSettings::get_setting_with_override((StringName *)local_98);
  Variant::operator_cast_to_String(local_128);
  operator+((char *)&local_120,(String *)"show-image--");
  pCVar9 = (CowData<char32_t> *)Memory::realloc_static((void *)0x0,8,false);
  if (pCVar9 != (CowData<char32_t> *)0x0) {
    *(undefined8 *)pCVar9 = 0;
    if (local_120 != 0) {
      CowData<char32_t>::_ref(pCVar9,(CowData *)&local_120);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_130 != 0)) {
      StringName::unref();
    }
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_118,"application/boot_splash/fullsize",false);
    ProjectSettings::get_setting_with_override((StringName *)&local_78);
    Variant::operator_cast_to_String((Variant *)&local_110);
    operator+((char *)&local_108,(String *)"fullsize--");
    pvVar10 = (void *)Memory::realloc_static(pCVar9,0x10,false);
    if (pvVar10 != (void *)0x0) {
      *(undefined8 *)((long)pvVar10 + 8) = 0;
      if (local_108 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)((long)pvVar10 + 8),(CowData *)&local_108);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_118 != 0)) {
        StringName::unref();
      }
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_100,"application/boot_splash/use_filter",false);
      ProjectSettings::get_setting_with_override((StringName *)local_58);
      Variant::operator_cast_to_String((Variant *)&local_e8);
      operator+((char *)local_1f8,(String *)"use-filter--");
      pCVar9 = (CowData<char32_t> *)Memory::realloc_static(pvVar10,0x20,false);
      if (pCVar9 != (CowData<char32_t> *)0x0) {
        *(undefined8 *)(pCVar9 + 0x10) = 0;
        if (local_d8 != (char *)0x0) {
          CowData<char32_t>::_ref(pCVar9 + 0x10,(CowData *)local_1f8);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_100 != 0)) {
          StringName::unref();
        }
        local_108 = 0;
        local_d8 = " ";
        local_d0 = 1;
        String::parse_latin1((StrRange *)&local_108);
        local_e0 = (CowData<char32_t> *)0x0;
        CowData<String>::_copy_on_write((CowData<String> *)&local_e0);
        puVar11 = (undefined8 *)Memory::alloc_static(0x30,false);
        if (puVar11 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          local_e0 = (CowData<char32_t> *)(puVar11 + 2);
          *puVar11 = 1;
          puVar11[4] = 0;
          puVar11[1] = 3;
          *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
        }
        CowData<String>::_copy_on_write((CowData<String> *)&local_e0);
        if (local_e0 != (CowData<char32_t> *)0x0) {
          pCVar12 = local_e0 + 0x18;
          pCVar14 = pCVar9;
          this_00 = local_e0;
          do {
            if (*(long *)this_00 != *(long *)pCVar14) {
              CowData<char32_t>::_ref(this_00,(CowData *)pCVar14);
            }
            this_00 = this_00 + 8;
            pCVar14 = (CowData<char32_t> *)((CowData *)pCVar14 + 8);
          } while (this_00 != pCVar12);
        }
        String::join((Vector *)&local_100);
        local_d8 = "$GODOT_SPLASH_CLASSES";
        local_110 = 0;
        local_d0 = 0x15;
        String::parse_latin1((StrRange *)&local_110);
        pCVar12 = (CowData<char32_t> *)
                  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                  ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                *)&local_c8,(String *)&local_110);
        if (*(long *)pCVar12 != local_100) {
          CowData<char32_t>::_unref(pCVar12);
          *(long *)pCVar12 = local_100;
          local_100 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        CowData<String>::_unref((CowData<String> *)&local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        local_d8 = ".png";
        local_100 = 0;
        local_d0 = 4;
        String::parse_latin1((StrRange *)&local_100);
        String::operator+((String *)&local_e8,param_6);
        local_d8 = "$GODOT_SPLASH";
        local_108 = 0;
        local_d0 = 0xd;
        String::parse_latin1((StrRange *)&local_108);
        pCVar12 = (CowData<char32_t> *)
                  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                  ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                *)&local_c8,(String *)&local_108);
        if (*(long *)pCVar12 != local_e8) {
          CowData<char32_t>::_unref(pCVar12);
          *(long *)pCVar12 = local_e8;
          local_e8 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
        pbVar3 = (bool *)*param_3;
        StringName::StringName((StringName *)local_1f8,"variant/thread_support",false);
        Object::get((StringName *)local_58,pbVar3);
        bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
          StringName::unref();
        }
        if (bVar7) {
          local_e8 = 0;
          String::parse_latin1((String *)&local_e8,"$GODOT_THREADS_ENABLED");
          pSVar13 = (StrRange *)
                    HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                    ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                  *)&local_c8,(String *)&local_e8);
          local_d0 = 4;
          local_d8 = "true";
          String::parse_latin1(pSVar13);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        }
        else {
          local_d8 = (undefined *)0x0;
          String::parse_latin1(local_1f8,"$GODOT_THREADS_ENABLED");
          this = (String *)
                 HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                 ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                               *)&local_c8,local_1f8);
          String::parse_latin1(this,"false");
          CowData<char32_t>::_unref((CowData<char32_t> *)local_1f8);
        }
        _replace_strings(param_1,(HashMap *)&local_c8,param_2);
        CowData<char32_t>::_unref(pCVar9);
        CowData<char32_t>::_unref(pCVar9 + 8);
        CowData<char32_t>::_unref(pCVar9 + 0x10);
        Memory::free_static(pCVar9,false);
        uVar5 = local_c0._0_8_;
        if ((undefined8 *)local_c0._0_8_ != (undefined8 *)0x0) {
          uVar6 = local_c0._8_8_;
          if ((local_a0._4_4_ != 0) &&
             (*(uint *)(hash_table_size_primes + (local_a0 & 0xffffffff) * 4) != 0)) {
            piVar1 = (int *)(local_c0._8_8_ +
                            (ulong)*(uint *)(hash_table_size_primes + (local_a0 & 0xffffffff) * 4) *
                            4);
            piVar17 = (int *)local_c0._8_8_;
            puVar11 = (undefined8 *)local_c0._0_8_;
            do {
              if (*piVar17 != 0) {
                pvVar10 = (void *)*puVar11;
                *piVar17 = 0;
                CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x18));
                CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar10 + 0x10));
                Memory::free_static(pvVar10,false);
                *puVar11 = 0;
              }
              piVar17 = piVar17 + 1;
              puVar11 = puVar11 + 1;
            } while (piVar1 != piVar17);
          }
          Memory::free_static((void *)uVar5,false);
          Memory::free_static((void *)uVar6,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_140);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
        Array::~Array(local_150);
        CowData<String>::_unref((CowData<String> *)&local_f0);
        Array::~Array(local_158);
        Dictionary::~Dictionary(local_160);
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
  _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* EditorExportPlatformWeb::_build_pwa(Ref<EditorExportPreset> const&, String, Vector<SharedObject>
   const&) */

int EditorExportPlatformWeb::_build_pwa
              (undefined8 param_1_00,undefined8 param_2,EditorExportPlatformWeb *param_1,
              undefined8 *param_4,String *param_5,long param_6)

{
  int *piVar1;
  bool *pbVar2;
  code *pcVar3;
  void *pvVar4;
  Object *pOVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  long *plVar11;
  CowData<char32_t> *pCVar12;
  String *this;
  long lVar13;
  Variant *pVVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  char *pcVar20;
  long in_FS_OFFSET;
  double dVar21;
  long local_1c8;
  CowData<char32_t> local_1c0 [8];
  String local_1b8 [8];
  Array local_1b0 [8];
  Array local_1a8 [8];
  long local_1a0;
  long local_198;
  Object *local_190;
  Object *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  long local_160;
  long local_158;
  undefined8 local_150;
  long local_148;
  long local_140;
  char *local_138;
  undefined8 local_130;
  char *local_128;
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  char *local_e8 [4];
  int local_c8 [8];
  int local_a8 [8];
  int local_88 [8];
  char *local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_128,"application/config/name",false);
  ProjectSettings::get_setting_with_override((StringName *)local_68);
  Variant::operator_cast_to_String((Variant *)&local_1c8);
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  if ((local_1c8 == 0) || (*(uint *)(local_1c8 + -8) < 2)) {
    local_120._0_8_ = 10;
    local_128 = "Godot Game";
    String::parse_latin1((StrRange *)&local_1c8);
  }
  String::get_base_dir();
  String::get_file();
  String::get_basename();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  pbVar2 = (bool *)*param_4;
  StringName::StringName((StringName *)&local_128,"variant/extensions_support",false);
  Object::get((StringName *)local_68,pbVar2);
  bVar7 = Variant::operator_cast_to_bool((Variant *)local_68);
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  pbVar2 = (bool *)*param_4;
  StringName::StringName
            ((StringName *)&local_128,"progressive_web_app/ensure_cross_origin_isolation_headers",
             false);
  Object::get((StringName *)local_68,pbVar2);
  bVar8 = Variant::operator_cast_to_bool((Variant *)local_68);
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  local_100 = 2;
  local_120 = (undefined1  [16])0x0;
  local_110 = (undefined1  [16])0x0;
  plVar11 = (long *)OS::get_singleton();
  iVar10 = (**(code **)(*plVar11 + 0x208))(plVar11);
  String::num_int64((long)&local_150,iVar10,true);
  local_160 = 0;
  local_138 = "|";
  local_130 = 1;
  String::parse_latin1((StrRange *)&local_160);
  plVar11 = (long *)OS::get_singleton();
  dVar21 = (double)(**(code **)(*plVar11 + 0x1f0))(plVar11);
  String::num_int64((long)&local_168,(int)(long)dVar21,true);
  String::operator+((String *)&local_158,(String *)&local_168);
  String::operator+((String *)&local_148,(String *)&local_158);
  local_170 = 0;
  local_138 = "___GODOT_VERSION___";
  local_130 = 0x13;
  String::parse_latin1((StrRange *)&local_170);
  pCVar12 = (CowData<char32_t> *)
            HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
            ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          *)&local_128,(String *)&local_170);
  if (*(long *)pCVar12 != local_148) {
    CowData<char32_t>::_unref(pCVar12);
    *(long *)pCVar12 = local_148;
    local_148 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  String::substr((int)(String *)&local_148,(int)(Variant *)&local_1c8);
  local_138 = "___GODOT_NAME___";
  local_150 = 0;
  local_130 = 0x10;
  String::parse_latin1((StrRange *)&local_150);
  pCVar12 = (CowData<char32_t> *)
            HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
            ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          *)&local_128,(String *)&local_150);
  if (*(long *)pCVar12 != local_148) {
    CowData<char32_t>::_unref(pCVar12);
    *(long *)pCVar12 = local_148;
    local_148 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  local_138 = ".offline.html";
  local_150 = 0;
  local_130 = 0xd;
  String::parse_latin1((StrRange *)&local_150);
  String::operator+((String *)&local_148,local_1b8);
  local_138 = "___GODOT_OFFLINE_PAGE___";
  local_158 = 0;
  local_130 = 0x18;
  String::parse_latin1((StrRange *)&local_158);
  pCVar12 = (CowData<char32_t> *)
            HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
            ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          *)&local_128,(String *)&local_158);
  if (*(long *)pCVar12 != local_148) {
    CowData<char32_t>::_unref(pCVar12);
    *(long *)pCVar12 = local_148;
    local_148 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  pcVar20 = "false";
  local_148 = 0;
  local_130 = 0x30;
  if (bVar8) {
    pcVar20 = "true";
  }
  local_138 = "___GODOT_ENSURE_CROSSORIGIN_ISOLATION_HEADERS___";
  String::parse_latin1((StrRange *)&local_148);
  this = (String *)
         HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
         ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                       *)&local_128,(String *)&local_148);
  String::parse_latin1(this,pcVar20);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  Array::Array(local_1b0);
  local_138 = ".html";
  local_148 = 0;
  local_130 = 5;
  String::parse_latin1((StrRange *)&local_148);
  String::operator+((String *)&local_138,local_1b8);
  Variant::Variant((Variant *)local_68,(String *)&local_138);
  Array::push_back((Variant *)local_1b0);
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  local_138 = ".js";
  local_148 = 0;
  local_130 = 3;
  String::parse_latin1((StrRange *)&local_148);
  String::operator+((String *)&local_138,local_1b8);
  Variant::Variant((Variant *)local_68,(String *)&local_138);
  Array::push_back((Variant *)local_1b0);
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  local_138 = ".offline.html";
  local_148 = 0;
  local_130 = 0xd;
  String::parse_latin1((StrRange *)&local_148);
  String::operator+((String *)&local_138,local_1b8);
  Variant::Variant((Variant *)local_68,(String *)&local_138);
  Array::push_back((Variant *)local_1b0);
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  pbVar2 = (bool *)*param_4;
  StringName::StringName((StringName *)&local_138,"html/export_icon",false);
  Object::get((StringName *)local_68,pbVar2);
  bVar8 = Variant::operator_cast_to_bool((Variant *)local_68);
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
    StringName::unref();
  }
  if (bVar8) {
    local_148 = 0;
    String::parse_latin1((String *)&local_148,".icon.png");
    String::operator+((String *)&local_138,local_1b8);
    Variant::Variant((Variant *)local_68,(String *)&local_138);
    Array::push_back((Variant *)local_1b0);
    if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
    local_148 = 0;
    String::parse_latin1((String *)&local_148,".apple-touch-icon.png");
    String::operator+((String *)&local_138,local_1b8);
    Variant::Variant((Variant *)local_68,(String *)&local_138);
    Array::push_back((Variant *)local_1b0);
    if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  }
  local_148 = 0;
  local_138 = ".audio.worklet.js";
  local_130 = 0x11;
  String::parse_latin1((StrRange *)&local_148);
  String::operator+((String *)&local_138,local_1b8);
  Variant::Variant((Variant *)local_68,(String *)&local_138);
  Array::push_back((Variant *)local_1b0);
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  local_138 = ".audio.position.worklet.js";
  local_148 = 0;
  local_130 = 0x1a;
  String::parse_latin1((StrRange *)&local_148);
  String::operator+((String *)&local_138,local_1b8);
  Variant::Variant((Variant *)local_68,(String *)&local_138);
  Array::push_back((Variant *)local_1b0);
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  Variant::Variant((Variant *)local_68,local_1b0);
  Variant::to_json_string();
  local_138 = "___GODOT_CACHE___";
  local_150 = 0;
  local_130 = 0x11;
  String::parse_latin1((StrRange *)&local_150);
  pCVar12 = (CowData<char32_t> *)
            HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
            ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          *)&local_128,(String *)&local_150);
  if (*(long *)pCVar12 != local_148) {
    CowData<char32_t>::_unref(pCVar12);
    *(long *)pCVar12 = local_148;
    local_148 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  Array::Array(local_1a8);
  local_138 = ".wasm";
  local_148 = 0;
  local_130 = 5;
  String::parse_latin1((StrRange *)&local_148);
  String::operator+((String *)&local_138,local_1b8);
  Variant::Variant((Variant *)local_68,(String *)&local_138);
  Array::push_back((Variant *)local_1a8);
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  local_138 = ".pck";
  local_148 = 0;
  local_130 = 4;
  String::parse_latin1((StrRange *)&local_148);
  String::operator+((String *)&local_138,local_1b8);
  Variant::Variant((Variant *)local_68,(String *)&local_138);
  Array::push_back((Variant *)local_1a8);
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (bVar7) {
    local_148 = 0;
    String::parse_latin1((String *)&local_148,".side.wasm");
    String::operator+((String *)&local_138,local_1b8);
    Variant::Variant((Variant *)local_68,(String *)&local_138);
    Array::push_back((Variant *)local_1a8);
    if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
    lVar13 = *(long *)(param_6 + 8);
    if (lVar13 != 0) {
      lVar19 = 0;
      do {
        if (*(long *)(lVar13 + -8) <= lVar19) break;
        String::get_file();
        Variant::Variant((Variant *)local_68,(String *)&local_138);
        Array::push_back((Variant *)local_1a8);
        if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar19 = lVar19 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
        lVar13 = *(long *)(param_6 + 8);
      } while (lVar13 != 0);
    }
  }
  Variant::Variant((Variant *)local_68,local_1a8);
  Variant::to_json_string();
  local_138 = "___GODOT_OPT_CACHE___";
  local_150 = 0;
  local_130 = 0x15;
  String::parse_latin1((StrRange *)&local_150);
  pCVar12 = (CowData<char32_t> *)
            HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
            ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          *)&local_128,(String *)&local_150);
  if (*(long *)pCVar12 != local_148) {
    CowData<char32_t>::_unref(pCVar12);
    *(long *)pCVar12 = local_148;
    local_148 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_148 = 0;
  local_138 = ".service.worker.js";
  local_130 = 0x12;
  String::parse_latin1((StrRange *)&local_148);
  String::operator+((String *)&local_138,local_1b8);
  String::path_join((String *)&local_1a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  local_140 = 0;
  FileAccess::open((String *)&local_188,(int)(String *)&local_1a0,(Error *)0x1);
  if (local_188 == (Object *)0x0) {
    pcVar3 = *(code **)(*(long *)param_1 + 0x178);
    local_150 = 0;
    if (local_1a0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,(CowData *)&local_1a0);
    }
    local_160 = 0;
    String::parse_latin1((String *)&local_160,"");
    local_168 = 0;
    String::parse_latin1((String *)&local_168,"Could not read file: \"%s\".");
    TTR((String *)&local_158,(String *)&local_168);
    vformat<String>((String *)&local_138,(String *)&local_158,(CowData<char32_t> *)&local_150);
    local_178 = 0;
    String::parse_latin1((String *)&local_178,"");
    local_180 = 0;
    String::parse_latin1((String *)&local_180,"PWA");
    TTR((String *)&local_170,(String *)&local_180);
    (*pcVar3)(param_1,3,(StrRange *)&local_170,(String *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
    iVar10 = 0xe;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
    Ref<FileAccess>::unref((Ref<FileAccess> *)&local_188);
    goto LAB_00109772;
  }
  lVar13 = (**(code **)(*(long *)local_188 + 0x1d0))();
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_140,lVar13);
  pOVar5 = local_188;
  pcVar3 = *(code **)(*(long *)local_188 + 0x220);
  if (local_140 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(local_140 + -8);
  }
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_140);
  (*pcVar3)(pOVar5,local_140,uVar15);
  if (((local_188 != (Object *)0x0) &&
      (cVar9 = RefCounted::unreference(), pOVar5 = local_188, cVar9 != '\0')) &&
     (cVar9 = predelete_handler(local_188), cVar9 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))();
    Memory::free_static(pOVar5,false);
  }
  _replace_strings(param_1,(HashMap *)&local_128,(Vector *)&local_148);
  local_138 = ".service.worker.js";
  local_158 = 0;
  local_130 = 0x12;
  String::parse_latin1((StrRange *)&local_158);
  String::operator+((String *)&local_150,local_1b8);
  String::path_join((String *)&local_138);
  lVar13 = local_140;
  if (local_140 == 0) {
    iVar10 = _write_or_error(param_1,0,0,(String *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    if (iVar10 != 0) goto LAB_00109772;
LAB_001098c0:
    pbVar2 = (bool *)*param_4;
    StringName::StringName((StringName *)&local_138,"progressive_web_app/offline_page",false);
    Object::get((StringName *)local_68,pbVar2);
    Variant::operator_cast_to_String((Variant *)&local_198);
    if (Variant::needs_deinit[(int)local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
      StringName::unref();
    }
    if ((local_198 == 0) || (*(uint *)(local_198 + -8) < 2)) {
LAB_0010994b:
      local_68[0] = "fullscreen";
      local_68[1] = "standalone";
      local_e8[2] = "portrait";
      pbVar2 = (bool *)*param_4;
      local_68[2] = "minimal-ui";
      local_68[3] = "browser";
      local_e8[0] = "any";
      local_e8[1] = "landscape";
      StringName::StringName((StringName *)&local_138,"progressive_web_app/display",false);
      Object::get((StringName *)local_88,pbVar2);
      iVar10 = Variant::operator_cast_to_int((Variant *)local_88);
      lVar19 = (long)iVar10;
      if (4 < iVar10) {
        lVar19 = 4;
      }
      if ((int)lVar19 < 0) {
        lVar19 = 0;
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
        StringName::unref();
      }
      pbVar2 = (bool *)*param_4;
      StringName::StringName((StringName *)&local_138,"progressive_web_app/orientation",false);
      Object::get((StringName *)local_88,pbVar2);
      iVar10 = Variant::operator_cast_to_int((Variant *)local_88);
      lVar17 = (long)iVar10;
      if (3 < iVar10) {
        lVar17 = 3;
      }
      if ((int)lVar17 < 0) {
        lVar17 = 0;
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
        StringName::unref();
      }
      Dictionary::Dictionary((Dictionary *)&local_188);
      Variant::Variant((Variant *)local_88,(String *)&local_1c8);
      Variant::Variant((Variant *)local_a8,"name");
      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_188);
      Variant::operator=(pVVar14,(Variant *)local_88);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_150 = 0;
      String::parse_latin1((String *)&local_150,".html");
      operator+((char *)&local_158,(String *)&_LC211);
      String::operator+((String *)&local_138,(String *)&local_158);
      Variant::Variant((Variant *)local_88,(String *)&local_138);
      Variant::Variant((Variant *)local_a8,"start_url");
      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_188);
      Variant::operator=(pVVar14,(Variant *)local_88);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      String::utf8((char *)&local_138,(int)local_68[lVar19]);
      Variant::Variant((Variant *)local_88,(String *)&local_138);
      Variant::Variant((Variant *)local_a8,"display");
      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_188);
      Variant::operator=(pVVar14,(Variant *)local_88);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      String::utf8((char *)&local_138,(int)local_e8[lVar17]);
      Variant::Variant((Variant *)local_88,(String *)&local_138);
      Variant::Variant((Variant *)local_a8,"orientation");
      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_188);
      Variant::operator=(pVVar14,(Variant *)local_88);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      pbVar2 = (bool *)*param_4;
      StringName::StringName((StringName *)&local_158,"progressive_web_app/background_color",false);
      Object::get((StringName *)local_a8,pbVar2);
      local_f8 = Variant::operator_cast_to_Color((Variant *)local_a8);
      local_f0 = param_2;
      Color::to_html(SUB81((CowData<char32_t> *)&local_150,0));
      operator+((char *)&local_138,(String *)&_LC175);
      Variant::Variant((Variant *)local_88,(String *)&local_138);
      Variant::Variant((Variant *)local_c8,"background_color");
      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_188);
      Variant::operator=(pVVar14,(Variant *)local_88);
      if (Variant::needs_deinit[local_c8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_158 != 0)) {
        StringName::unref();
      }
      Array::Array((Array *)&local_180);
      pbVar2 = (bool *)*param_4;
      StringName::StringName((StringName *)&local_138,"progressive_web_app/icon_144x144",false);
      Object::get((StringName *)local_88,pbVar2);
      Variant::operator_cast_to_String((Variant *)&local_178);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
        StringName::unref();
      }
      iVar10 = _add_manifest_icon(param_1,param_5,(String *)&local_178,0x90,(Array *)&local_180);
      if (iVar10 == 0) {
        pbVar2 = (bool *)*param_4;
        StringName::StringName((StringName *)&local_138,"progressive_web_app/icon_180x180",false);
        Object::get((StringName *)local_88,pbVar2);
        Variant::operator_cast_to_String((Variant *)&local_170);
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
          StringName::unref();
        }
        iVar10 = _add_manifest_icon(param_1,param_5,(String *)&local_170,0xb4,(Array *)&local_180);
        if (iVar10 == 0) {
          pbVar2 = (bool *)*param_4;
          StringName::StringName((StringName *)&local_138,"progressive_web_app/icon_512x512",false);
          Object::get((StringName *)local_88,pbVar2);
          Variant::operator_cast_to_String((Variant *)&local_168);
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_138 != (char *)0x0)) {
            StringName::unref();
          }
          iVar10 = _add_manifest_icon(param_1,param_5,(String *)&local_168,0x200,(Array *)&local_180
                                     );
          if (iVar10 == 0) {
            Variant::Variant((Variant *)local_88,(Array *)&local_180);
            Variant::Variant((Variant *)local_a8,"icons");
            pVVar14 = (Variant *)Dictionary::operator[]((Variant *)&local_188);
            Variant::operator=(pVVar14,(Variant *)local_88);
            if (Variant::needs_deinit[local_a8[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_88[0]] != '\0') {
              Variant::_clear_internal();
            }
            Variant::Variant((Variant *)local_88,(Dictionary *)&local_188);
            Variant::to_json_string();
            String::utf8();
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
            if (Variant::needs_deinit[local_88[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_158 = 0;
            String::parse_latin1((String *)&local_158,".manifest.json");
            String::operator+((String *)&local_150,local_1b8);
            String::path_join((String *)&local_138);
            if (local_160 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = (int)*(undefined8 *)(local_160 + -8);
              iVar10 = iVar10 + -1 + (uint)(iVar10 == 0);
            }
            uVar15 = CharString::get_data();
            iVar10 = _write_or_error(param_1,uVar15,iVar10,(String *)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
            lVar19 = local_160;
            if (local_160 != 0) {
              LOCK();
              plVar11 = (long *)(local_160 + -0x10);
              *plVar11 = *plVar11 + -1;
              UNLOCK();
              lVar13 = local_140;
              if (*plVar11 == 0) {
                local_160 = 0;
                Memory::free_static((void *)(lVar19 + -0x10),false);
                lVar13 = local_140;
              }
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      Array::~Array((Array *)&local_180);
      Dictionary::~Dictionary((Dictionary *)&local_188);
    }
    else {
      DirAccess::create(&local_190,2);
      local_150 = 0;
      String::parse_latin1((String *)&local_150,".offline.html");
      String::operator+((String *)&local_138,local_1b8);
      String::path_join((String *)&local_188);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      pOVar5 = local_190;
      pcVar3 = *(code **)(*(long *)local_190 + 0x1f8);
      ProjectSettings::get_singleton();
      ProjectSettings::globalize_path((String *)&local_138);
      iVar10 = (*pcVar3)(pOVar5,(String *)&local_138,(String *)&local_188,0xffffffff);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      if (iVar10 == 0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
        if (((local_190 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
           (cVar9 = predelete_handler(local_190), cVar9 != '\0')) {
          (**(code **)(*(long *)local_190 + 0x140))(local_190);
          Memory::free_static(local_190,false);
        }
        goto LAB_0010994b;
      }
      pcVar3 = *(code **)(*(long *)param_1 + 0x178);
      local_150 = 0;
      if (local_188 != (Object *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,(CowData *)&local_188);
      }
      local_160 = 0;
      String::parse_latin1((String *)&local_160,"");
      local_168 = 0;
      String::parse_latin1((String *)&local_168,"Could not read file: \"%s\".");
      TTR((String *)&local_158,(String *)&local_168);
      vformat<String>((String *)&local_138,(String *)&local_158,(CowData<char32_t> *)&local_150);
      local_178 = 0;
      String::parse_latin1((String *)&local_178,"");
      local_180 = 0;
      String::parse_latin1((String *)&local_180,"PWA");
      TTR((String *)&local_170,(String *)&local_180);
      (*pcVar3)(param_1,3,(StrRange *)&local_170,(String *)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_160);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
      if (((local_190 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
         (cVar9 = predelete_handler(local_190), cVar9 != '\0')) {
        (**(code **)(*(long *)local_190 + 0x140))(local_190);
        Memory::free_static(local_190,false);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
    if (lVar13 == 0) goto LAB_00109772;
  }
  else {
    iVar10 = _write_or_error(param_1,local_140,*(undefined4 *)(local_140 + -8),(String *)&local_138)
    ;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
    if (iVar10 == 0) goto LAB_001098c0;
  }
  LOCK();
  plVar11 = (long *)(lVar13 + -0x10);
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  if (*plVar11 == 0) {
    Memory::free_static((void *)(local_140 + -0x10),false);
  }
LAB_00109772:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1a0);
  Array::~Array(local_1a8);
  Array::~Array(local_1b0);
  uVar15 = local_120._0_8_;
  if ((undefined8 *)local_120._0_8_ != (undefined8 *)0x0) {
    uVar6 = local_120._8_8_;
    if ((local_100._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_100 & 0xffffffff) * 4) != 0)) {
      piVar1 = (int *)(local_120._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_100 & 0xffffffff) * 4) * 4);
      puVar16 = (undefined8 *)local_120._0_8_;
      piVar18 = (int *)local_120._8_8_;
      do {
        if (*piVar18 != 0) {
          pvVar4 = (void *)*puVar16;
          *piVar18 = 0;
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x18));
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x10));
          Memory::free_static(pvVar4,false);
          *puVar16 = 0;
        }
        piVar18 = piVar18 + 1;
        puVar16 = puVar16 + 1;
      } while (piVar1 != piVar18);
    }
    Memory::free_static((void *)uVar15,false);
    Memory::free_static((void *)uVar6,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
  CowData<char32_t>::_unref(local_1c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar10;
}



/* EditorExportPlatformWeb::_extract_template(String const&, String const&, String const&, bool) */

undefined8 __thiscall
EditorExportPlatformWeb::_extract_template
          (EditorExportPlatformWeb *this,String *param_1,String *param_2,String *param_3,
          bool param_4)

{
  long *plVar1;
  String *pSVar2;
  StrRange *pSVar3;
  StrRange *pSVar4;
  String *pSVar5;
  CowData<char32_t> *pCVar6;
  String *pSVar7;
  Object *pOVar8;
  code *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  char cVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  long in_FS_OFFSET;
  undefined1 local_4030 [16384];
  
  puVar11 = &stack0xffffffffffffffd0;
  do {
    puVar16 = puVar11;
    *(undefined8 *)(puVar16 + -0x1000) = *(undefined8 *)(puVar16 + -0x1000);
    puVar11 = puVar16 + -0x1000;
  } while (puVar16 + -0x1000 != local_4030);
  *(String **)(puVar16 + -0x1198) = param_2;
  *(String **)(puVar16 + -0x1190) = param_3;
  puVar16[-0x11a0] = param_4;
  *(EditorExportPlatformWeb **)(puVar16 + -0x1188) = this;
  *(undefined8 *)(puVar16 + 0x2ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar16 + -0x1170) = 0;
  *(undefined8 *)(puVar16 + -0x11c0) = 0x10aaa6;
  zipio_create_io((Ref *)(puVar16 + -0x10f8));
  *(undefined1 **)(puVar16 + -0x11b0) = puVar16 + -0x10a8;
  *(undefined8 *)(puVar16 + -0x11c0) = 0x10aac1;
  String::utf8();
  *(undefined8 *)(puVar16 + -0x11c0) = 0x10aac9;
  uVar14 = CharString::get_data();
  *(undefined8 *)(puVar16 + -0x11c0) = 0x10aad4;
  lVar15 = unzOpen2(uVar14);
  if (*(long *)(puVar16 + -0x10a8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(puVar16 + -0x10a8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar10 = *(long *)(puVar16 + -0x10a8);
      *(undefined8 *)(puVar16 + -0x10a8) = 0;
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10ae17;
      Memory::free_static((void *)(lVar10 + -0x10),false);
    }
  }
  if (lVar15 == 0) {
    lVar15 = *(long *)param_1;
    uVar14 = *(undefined8 *)(**(long **)(puVar16 + -0x1188) + 0x178);
    *(undefined8 *)(puVar16 + -0x1118) = 0;
    *(undefined8 *)(puVar16 + -0x11a8) = uVar14;
    *(CowData<char32_t> **)(puVar16 + -0x11b8) = (CowData<char32_t> *)(puVar16 + -0x1118);
    if (lVar15 != 0) {
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10ae5d;
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar16 + -0x1118),(CowData *)param_1);
    }
    uVar14 = *(undefined8 *)(puVar16 + -0x11b0);
    *(undefined8 *)(puVar16 + -0x1128) = 0;
    pSVar3 = (StrRange *)(puVar16 + -0x1130);
    pSVar2 = (String *)(puVar16 + -0x1120);
    *(undefined **)(puVar16 + -0x10a8) = &_LC7;
    pCVar6 = (CowData<char32_t> *)(puVar16 + -0x1108);
    *(undefined8 *)(puVar16 + -0x10a0) = 0;
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10aeb4;
    String::parse_latin1((StrRange *)(puVar16 + -0x1128));
    *(char **)(puVar16 + -0x10a8) = "Could not open template for export: \"%s\".";
    *(undefined8 *)(puVar16 + -0x1130) = 0;
    *(undefined8 *)(puVar16 + -0x10a0) = 0x29;
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10aee6;
    String::parse_latin1(pSVar3);
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10aef4;
    TTR(pSVar2,(String *)pSVar3);
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10af03;
    vformat<String>(pCVar6,pSVar2,*(undefined8 *)(puVar16 + -0x11b8));
    *(undefined **)(puVar16 + -0x10a8) = &_LC7;
    *(undefined8 *)(puVar16 + -0x11b0) = uVar14;
    pSVar4 = (StrRange *)(puVar16 + -0x1140);
    *(undefined8 *)(puVar16 + -0x1138) = 0;
    *(undefined8 *)(puVar16 + -0x10a0) = 0;
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10af40;
    String::parse_latin1((StrRange *)(puVar16 + -0x1138));
    *(char **)(puVar16 + -0x10a8) = "Prepare Templates";
    *(undefined8 *)(puVar16 + -0x1140) = 0;
    *(undefined8 *)(puVar16 + -0x10a0) = 0x11;
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10af71;
    String::parse_latin1(pSVar4);
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10af81;
    TTR(*(String **)(puVar16 + -0x11b0),(String *)pSVar4);
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10af9a;
    (**(code **)(puVar16 + -0x11a8))
              (*(undefined8 *)(puVar16 + -0x1188),3,*(undefined8 *)(puVar16 + -0x11b0),pCVar6);
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10afa4;
    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar16 + -0x11b0));
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10afac;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar4);
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10afb4;
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar16 + -0x1138));
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10afbc;
    CowData<char32_t>::_unref(pCVar6);
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10afc4;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10afcc;
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
    uVar14 = 7;
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10afd9;
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar16 + -0x1128));
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10afe2;
    CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar16 + -0x11b8));
  }
  else {
    pSVar2 = (String *)(puVar16 + -0x1168);
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10ab0e;
    iVar13 = unzGoToFirstFile(lVar15);
    *(undefined1 **)(puVar16 + -0x11a8) = puVar16 + -0x1110;
    if (iVar13 == 0) {
      do {
        while( true ) {
          *(undefined8 *)(puVar16 + -0x11c0) = 0;
          *(undefined8 *)(puVar16 + -0x11c8) = 0;
          *(undefined8 *)(puVar16 + -0x11d0) = 0x10ad00;
          unzGetCurrentFileInfo
                    (lVar15,*(undefined8 *)(puVar16 + -0x11b0),puVar16 + -0x1018,0x4000,0,0);
          *(undefined8 *)(puVar16 + -0x11d0) = 0x10ad10;
          String::utf8((char *)pSVar2,(int)(puVar16 + -0x1018));
          *(undefined8 *)(puVar16 + -0x11d0) = 0x10ad1f;
          cVar12 = String::ends_with((char *)pSVar2);
          if (cVar12 != '\0') break;
          if (puVar16[-0x11a0] == '\0') {
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10ab46;
            cVar12 = String::operator==(pSVar2,"godot.service.worker.js");
            if (cVar12 == '\0') {
              *(undefined8 *)(puVar16 + -0x11c0) = 0x10ab5d;
              cVar12 = String::operator==(pSVar2,"godot.offline.html");
              if (cVar12 == '\0') goto LAB_0010ab65;
            }
            break;
          }
LAB_0010ab65:
          *(undefined8 *)(puVar16 + -0x1110) = 0;
          *(undefined8 *)(puVar16 + -0x11c0) = 0x10ab83;
          CowData<unsigned_char>::resize<false>
                    (*(CowData<unsigned_char> **)(puVar16 + -0x11a8),*(long *)(puVar16 + -0x1070));
          *(undefined8 *)(puVar16 + -0x11c0) = 0x10ab8b;
          unzOpenCurrentFile(lVar15);
          if (*(long *)(puVar16 + -0x1110) == 0) {
            uVar17 = 0;
          }
          else {
            uVar17 = *(undefined4 *)(*(long *)(puVar16 + -0x1110) + -8);
          }
          pSVar7 = (String *)(puVar16 + -0x1108);
          *(undefined8 *)(puVar16 + -0x11c0) = 0x10abb2;
          CowData<unsigned_char>::_copy_on_write(*(CowData<unsigned_char> **)(puVar16 + -0x11a8));
          lVar10 = *(long *)(puVar16 + -0x1110);
          pSVar4 = (StrRange *)(puVar16 + -0x1120);
          *(undefined8 *)(puVar16 + -0x11c0) = 0x10abd0;
          unzReadCurrentFile(lVar15,lVar10,uVar17);
          *(undefined8 *)(puVar16 + -0x11c0) = 0x10abd8;
          unzCloseCurrentFile(lVar15);
          *(char **)(puVar16 + -0x1108) = "godot";
          *(undefined8 *)(puVar16 + -0x1120) = 0;
          *(undefined8 *)(puVar16 + -0x1100) = 5;
          *(undefined8 *)(puVar16 + -0x11c0) = 0x10ac0a;
          String::parse_latin1(pSVar4);
          *(undefined8 *)(puVar16 + -0x11c0) = 0x10ac1d;
          String::replace(pSVar7,pSVar2);
          *(String **)(puVar16 + -0x11b8) = (String *)(puVar16 + -0x1160);
          *(undefined8 *)(puVar16 + -0x11c0) = 0x10ac36;
          String::path_join((String *)(puVar16 + -0x1160));
          *(undefined8 *)(puVar16 + -0x11c0) = 0x10ac3e;
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar7);
          *(undefined8 *)(puVar16 + -0x11c0) = 0x10ac46;
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar4);
          *(undefined8 *)(puVar16 + -0x11c0) = 0x10ac5b;
          FileAccess::open((String *)(puVar16 + -0x1158),(int)*(undefined8 *)(puVar16 + -0x11b8),
                           (Error *)0x2);
          plVar1 = *(long **)(puVar16 + -0x1158);
          if (plVar1 == (long *)0x0) {
            uVar14 = *(undefined8 *)(**(long **)(puVar16 + -0x1188) + 0x178);
            *(undefined8 *)(puVar16 + -0x1128) = 0;
            *(undefined8 *)(puVar16 + -0x1198) = uVar14;
            *(CowData<char32_t> **)(puVar16 + -0x11a0) = (CowData<char32_t> *)(puVar16 + -0x1128);
            if (*(long *)(puVar16 + -0x1160) != 0) {
              *(undefined8 *)(puVar16 + -0x11c0) = 0x10b069;
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)(puVar16 + -0x1128),*(CowData **)(puVar16 + -0x11b8));
            }
            *(undefined8 *)(puVar16 + -0x1138) = 0;
            *(undefined **)(puVar16 + -0x1108) = &_LC7;
            *(undefined8 *)(puVar16 + -0x1100) = 0;
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b0a3;
            String::parse_latin1((StrRange *)(puVar16 + -0x1138));
            *(undefined8 *)(puVar16 + -0x1140) = 0;
            *(char **)(puVar16 + -0x1108) = "Could not write file: \"%s\".";
            *(StrRange **)(puVar16 + -0x11b0) = (StrRange *)(puVar16 + -0x1140);
            *(undefined8 *)(puVar16 + -0x1100) = 0x1b;
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b0dc;
            String::parse_latin1((StrRange *)(puVar16 + -0x1140));
            pSVar5 = (String *)(puVar16 + -0x1130);
            *(StrRange **)(puVar16 + -0x1190) = (StrRange *)(puVar16 + -0x1138);
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b0fc;
            TTR(pSVar5,*(String **)(puVar16 + -0x11b0));
            *(String **)(puVar16 + -0x1180) = pSVar5;
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b116;
            vformat<String>(pSVar4,pSVar5,*(undefined8 *)(puVar16 + -0x11a0));
            *(undefined **)(puVar16 + -0x1108) = &_LC7;
            pSVar3 = (StrRange *)(puVar16 + -0x1150);
            *(undefined8 *)(puVar16 + -0x1148) = 0;
            *(undefined8 *)(puVar16 + -0x1100) = 0;
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b143;
            String::parse_latin1((StrRange *)(puVar16 + -0x1148));
            *(char **)(puVar16 + -0x1108) = "Prepare Templates";
            *(undefined8 *)(puVar16 + -0x1150) = 0;
            *(undefined8 *)(puVar16 + -0x1100) = 0x11;
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b172;
            String::parse_latin1(pSVar3);
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b180;
            TTR(pSVar7,(String *)pSVar3);
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b197;
            (**(code **)(puVar16 + -0x1198))(*(undefined8 *)(puVar16 + -0x1188),3,pSVar7,pSVar4);
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b19f;
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar7);
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b1a7;
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b1af;
            CowData<char32_t>::_unref((CowData<char32_t> *)(puVar16 + -0x1148));
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b1b7;
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar4);
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b1c1;
            CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar16 + -0x1180));
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b1cb;
            CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar16 + -0x11b0));
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b1d5;
            CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar16 + -0x1190));
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b1df;
            CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar16 + -0x11a0));
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b1e7;
            unzClose(lVar15);
            if (*(long *)(puVar16 + -0x1158) != 0) {
              *(undefined8 *)(puVar16 + -0x11c0) = 0x10b1f6;
              cVar12 = RefCounted::unreference();
              if (cVar12 != '\0') {
                pOVar8 = *(Object **)(puVar16 + -0x1158);
                *(undefined8 *)(puVar16 + -0x11c0) = 0x10b3ea;
                cVar12 = predelete_handler(pOVar8);
                if (cVar12 != '\0') {
                  pcVar9 = *(code **)(*(long *)pOVar8 + 0x140);
                  *(undefined8 *)(puVar16 + -0x11c0) = 0x10b3fe;
                  (*pcVar9)(pOVar8);
                  *(undefined8 *)(puVar16 + -0x11c0) = 0x10b408;
                  Memory::free_static(pOVar8,false);
                }
              }
            }
            uVar14 = 0xd;
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b20c;
            CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar16 + -0x11b8));
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b216;
            CowData<unsigned_char>::_unref(*(CowData<unsigned_char> **)(puVar16 + -0x11a8));
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b21e;
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
            goto LAB_0010ad6a;
          }
          pcVar9 = *(code **)(*plVar1 + 0x2d0);
          if (lVar10 == 0) {
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b006;
            (*pcVar9)(plVar1,0,0);
            if (*(long *)(puVar16 + -0x1158) != 0) goto LAB_0010ac93;
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10b01d;
            CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar16 + -0x11b8));
          }
          else {
            uVar14 = *(undefined8 *)(lVar10 + -8);
            *(undefined8 *)(puVar16 + -0x11c0) = 0x10ac85;
            (*pcVar9)(plVar1,lVar10,uVar14);
            if (*(long *)(puVar16 + -0x1158) == 0) {
              *(undefined8 *)(puVar16 + -0x11c0) = 0x10adb9;
              CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar16 + -0x11b8));
            }
            else {
LAB_0010ac93:
              *(undefined8 *)(puVar16 + -0x11c0) = 0x10ac98;
              cVar12 = RefCounted::unreference();
              if (cVar12 != '\0') {
                pOVar8 = *(Object **)(puVar16 + -0x1158);
                *(undefined8 *)(puVar16 + -0x11c0) = 0x10adcd;
                cVar12 = predelete_handler(pOVar8);
                if (cVar12 != '\0') {
                  pcVar9 = *(code **)(*(long *)pOVar8 + 0x140);
                  *(undefined8 *)(puVar16 + -0x11c0) = 0x10ade2;
                  (*pcVar9)(pOVar8);
                  *(undefined8 *)(puVar16 + -0x11c0) = 0x10adec;
                  Memory::free_static(pOVar8,false);
                }
              }
              *(undefined8 *)(puVar16 + -0x11c0) = 0x10aca9;
              CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar16 + -0x11b8));
              if (lVar10 == 0) goto LAB_0010acc9;
            }
            LOCK();
            plVar1 = (long *)(lVar10 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              *(undefined8 *)(puVar16 + -0x11c0) = 0x10acc9;
              Memory::free_static((void *)(*(long *)(puVar16 + -0x1110) + -0x10),false);
            }
          }
LAB_0010acc9:
          *(undefined8 *)(puVar16 + -0x11c0) = 0x10acd1;
          CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
LAB_0010acd1:
          *(undefined8 *)(puVar16 + -0x11c0) = 0x10acd9;
          iVar13 = unzGoToNextFile(lVar15);
          if (iVar13 != 0) goto LAB_0010ad60;
        }
        if (*(long *)(puVar16 + -0x1168) == 0) goto LAB_0010acd1;
        LOCK();
        plVar1 = (long *)(*(long *)(puVar16 + -0x1168) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_0010acd1;
        lVar10 = *(long *)(puVar16 + -0x1168);
        *(undefined8 *)(puVar16 + -0x1168) = 0;
        *(undefined8 *)(puVar16 + -0x11c0) = 0x10ad54;
        Memory::free_static((void *)(lVar10 + -0x10),false);
        *(undefined8 *)(puVar16 + -0x11c0) = 0x10ad5c;
        iVar13 = unzGoToNextFile(lVar15);
      } while (iVar13 == 0);
LAB_0010ad60:
      uVar14 = 0;
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10ad6a;
      unzClose(lVar15);
    }
    else {
      lVar10 = *(long *)param_1;
      pCVar6 = (CowData<char32_t> *)(puVar16 + -0x1108);
      uVar14 = *(undefined8 *)(**(long **)(puVar16 + -0x1188) + 0x178);
      *(undefined8 *)(puVar16 + -0x1108) = 0;
      *(undefined8 *)(puVar16 + -0x11a0) = uVar14;
      if (lVar10 != 0) {
        *(undefined8 *)(puVar16 + -0x11c0) = 0x10b299;
        CowData<char32_t>::_ref(pCVar6,(CowData *)param_1);
      }
      *(undefined8 *)(puVar16 + -0x1120) = 0;
      pSVar2 = (String *)(puVar16 + -0x1128);
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b2c7;
      String::parse_latin1((String *)(puVar16 + -0x1120),"");
      pSVar7 = (String *)(puVar16 + -0x1118);
      *(undefined8 *)(puVar16 + -0x1128) = 0;
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b2f2;
      String::parse_latin1(pSVar2,"Invalid export template: \"%s\".");
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b300;
      TTR(pSVar7,pSVar2);
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b310;
      vformat<String>(*(undefined8 *)(puVar16 + -0x11b0),pSVar7,pCVar6);
      *(undefined8 *)(puVar16 + -0x1138) = 0;
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b32e;
      String::parse_latin1((String *)(puVar16 + -0x1138),"");
      *(undefined8 *)(puVar16 + -0x1140) = 0;
      *(String **)(puVar16 + -0x11b8) = (String *)(puVar16 + -0x1140);
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b34f;
      String::parse_latin1((String *)(puVar16 + -0x1140),"Prepare Templates");
      *(String **)(puVar16 + -0x11a8) = (String *)(puVar16 + -0x1130);
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b36b;
      TTR((String *)(puVar16 + -0x1130),*(String **)(puVar16 + -0x11b8));
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b386;
      (**(code **)(puVar16 + -0x11a0))
                (*(undefined8 *)(puVar16 + -0x1188),3,*(undefined8 *)(puVar16 + -0x11a8),
                 *(undefined8 *)(puVar16 + -0x11b0));
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b390;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar16 + -0x11a8));
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b399;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar16 + -0x11b8));
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b3a1;
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar16 + -0x1138));
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b3ab;
      CowData<char32_t>::_unref(*(CowData<char32_t> **)(puVar16 + -0x11b0));
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b3b3;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar7);
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b3bb;
      CowData<char32_t>::_unref((CowData<char32_t> *)pSVar2);
      uVar14 = 0x10;
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b3c8;
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar16 + -0x1120));
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b3d0;
      CowData<char32_t>::_unref(pCVar6);
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b3d8;
      unzClose(lVar15);
    }
  }
LAB_0010ad6a:
  if (*(long *)(puVar16 + -0x1170) != 0) {
    *(undefined8 *)(puVar16 + -0x11c0) = 0x10ad79;
    cVar12 = RefCounted::unreference();
    if (cVar12 != '\0') {
      pOVar8 = *(Object **)(puVar16 + -0x1170);
      *(undefined8 *)(puVar16 + -0x11c0) = 0x10b235;
      cVar12 = predelete_handler(pOVar8);
      if (cVar12 != '\0') {
        pcVar9 = *(code **)(*(long *)pOVar8 + 0x140);
        *(undefined8 *)(puVar16 + -0x11c0) = 0x10b24a;
        (*pcVar9)(pOVar8);
        *(undefined8 *)(puVar16 + -0x11c0) = 0x10b254;
        Memory::free_static(pOVar8,false);
      }
    }
  }
  if (*(long *)(puVar16 + 0x2ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar16 + -0x11c0) = &UNK_0010b412;
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::export_project(Ref<EditorExportPreset> const&, bool, String const&,
   BitField<EditorExportPlatform::DebugFlags>) */

int __thiscall
EditorExportPlatformWeb::export_project
          (EditorExportPlatformWeb *this,undefined8 *param_1,byte param_2,CowData *param_3,
          undefined8 param_5)

{
  long *plVar1;
  bool *pbVar2;
  code *pcVar3;
  Object *pOVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  Variant *pVVar12;
  long lVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  long lVar16;
  long in_FS_OFFSET;
  StrRange *local_218;
  CowData<char32_t> *local_180;
  ExportNotifier local_161;
  Variant local_160 [8];
  Variant local_158 [8];
  long local_150;
  long local_148;
  String local_140 [8];
  String local_138 [8];
  Object *local_130;
  long local_128;
  Dictionary local_120 [8];
  Object *local_118;
  long local_110;
  String *local_108;
  long local_100;
  String *local_f8;
  long local_f0;
  long *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  String local_a8 [8];
  long local_a0;
  undefined8 local_98;
  long local_90;
  Object *local_88;
  long local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorExportPlatform::ExportNotifier::ExportNotifier(&local_161,this,param_1,param_2,param_3);
  pbVar2 = (bool *)*param_1;
  StringName::StringName((StringName *)&local_88,"custom_template/debug",false);
  Object::get((StringName *)local_58,pbVar2);
  Variant::operator_cast_to_String(local_160);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
    StringName::unref();
  }
  pbVar2 = (bool *)*param_1;
  StringName::StringName((StringName *)&local_88,"custom_template/release",false);
  Object::get((StringName *)local_58,pbVar2);
  Variant::operator_cast_to_String(local_158);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
    StringName::unref();
  }
  pbVar2 = (bool *)*param_1;
  StringName::StringName((StringName *)&local_88,"html/custom_html_shell",false);
  Object::get((StringName *)local_58,pbVar2);
  Variant::operator_cast_to_String((Variant *)&local_150);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
    StringName::unref();
  }
  pbVar2 = (bool *)*param_1;
  StringName::StringName((StringName *)&local_88,"html/export_icon",false);
  Object::get((StringName *)local_58,pbVar2);
  bVar5 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
    StringName::unref();
  }
  pbVar2 = (bool *)*param_1;
  StringName::StringName((StringName *)&local_88,"progressive_web_app/enabled",false);
  Object::get((StringName *)local_58,pbVar2);
  bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
    StringName::unref();
  }
  String::get_base_dir();
  String::get_basename();
  String::get_file();
  String::get_basename();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  cVar7 = DirAccess::exists((String *)&local_148);
  if (cVar7 == '\0') {
    pcVar3 = *(code **)(*(long *)this + 0x178);
    local_98 = 0;
    if (local_148 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_148);
    }
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"");
    local_b8 = 0;
    String::parse_latin1
              ((String *)&local_b8,"Target folder does not exist or is inaccessible: \"%s\"");
    TTR(local_a8,(String *)&local_b8);
    vformat<String>((StringName *)&local_88,local_a8,(CowData<char32_t> *)&local_98);
    local_c8 = 0;
    String::parse_latin1((String *)&local_c8,"");
    local_d0 = 0;
    String::parse_latin1((String *)&local_d0,"Export");
    TTR((String *)&local_c0,(String *)&local_d0);
    (*pcVar3)(this,3,(String *)&local_c0,(StringName *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    iVar10 = 9;
    goto LAB_0010bb97;
  }
  pVVar12 = local_160;
  if (param_2 == 0) {
    pVVar12 = local_158;
  }
  local_130 = (Object *)0x0;
  if (*(long *)pVVar12 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)pVVar12);
  }
  String::strip_edges(SUB81((StringName *)&local_88,0),SUB81((CowData<char32_t> *)&local_130,0));
  if (local_130 != local_88) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
    local_130 = local_88;
    local_88 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((local_130 == (Object *)0x0) || (*(uint *)(local_130 + -8) < 2)) {
    pbVar2 = (bool *)*param_1;
    StringName::StringName((StringName *)&local_88,"variant/extensions_support",false);
    Object::get((StringName *)local_58,pbVar2);
    bVar8 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
      StringName::unref();
    }
    pbVar2 = (bool *)*param_1;
    StringName::StringName((StringName *)&local_88,"variant/thread_support",false);
    Object::get((StringName *)local_58,pbVar2);
    bVar9 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = (Object *)&_LC58;
    local_80 = 3;
    String::parse_latin1((StrRange *)&local_98);
    if (bVar8) {
      String::operator+=((String *)&local_98,"_dlink");
      if (!bVar9) goto LAB_0010c080;
LAB_0010b8be:
      if (param_2 == 0) goto LAB_0010b8c7;
LAB_0010bc18:
      String::operator+=((String *)&local_98,"_debug.zip");
    }
    else {
      if (bVar9) goto LAB_0010b8be;
LAB_0010c080:
      String::operator+=((String *)&local_98,"_nothreads");
      if (param_2 != 0) goto LAB_0010bc18;
LAB_0010b8c7:
      String::operator+=((String *)&local_98,"_release.zip");
    }
    EditorExportPlatform::find_export_template((String *)&local_88,(String *)this);
    if (local_130 != local_88) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
      local_130 = local_88;
      local_88 = (Object *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if ((local_130 != (Object *)0x0) && (1 < *(uint *)(local_130 + -8))) goto LAB_0010bc3c;
LAB_0010b94a:
    local_218 = (StrRange *)&local_98;
    local_88 = (Object *)&_LC111;
    local_a0 = 0;
    local_98 = 0;
    local_80 = 4;
    String::parse_latin1(local_218);
    String::operator+((String *)&local_128,local_140);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
    iVar10 = EditorExportPlatform::save_pack
                       ((Ref *)this,SUB81(param_1,0),(String *)(ulong)param_2,(Vector *)&local_128,
                        (_func_Error_void_ptr_String_ptr_Vector_ptr_int_int_Vector_ptr_Vector_ptr_Vector_ptr_ulong
                         *)local_a8,(_func_Error_void_ptr_String_ptr *)0x0,false,(long *)0x0,
                        (long *)0x0);
    if (iVar10 == 0) {
      DirAccess::create((Ref<DirAccess> *)&local_e8,2);
      for (lVar16 = 0; (local_a0 != 0 && (lVar16 < *(long *)(local_a0 + -8))); lVar16 = lVar16 + 1)
      {
        String::get_file();
        String::path_join((String *)&local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (local_a0 == 0) {
LAB_0010beb5:
          lVar13 = 0;
LAB_0010beb8:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar16,lVar13,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar13 = *(long *)(local_a0 + -8);
        if (lVar13 <= lVar16) goto LAB_0010beb8;
        iVar10 = (**(code **)(*local_e8 + 0x1f8))
                           (local_e8,local_a0 + lVar16 * 0x20,(CowData<char32_t> *)&local_e0,
                            0xffffffff);
        if (iVar10 != 0) {
          pcVar3 = *(code **)(*(long *)this + 0x178);
          if (local_a0 == 0) goto LAB_0010beb5;
          lVar13 = *(long *)(local_a0 + -8);
          if (lVar13 <= lVar16) goto LAB_0010beb8;
          String::get_file();
          local_b8 = 0;
          String::parse_latin1((String *)&local_b8,"");
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"Could not write file: \"%s\".");
          TTR((String *)&local_b0,(String *)&local_c0);
          vformat<String>((StringName *)&local_88,(String *)&local_b0,local_218);
          local_d0 = 0;
          String::parse_latin1((String *)&local_d0,"");
          local_d8 = 0;
          String::parse_latin1((String *)&local_d8,"Export");
          TTR((String *)&local_c8,(String *)&local_d8);
          (*pcVar3)(this,3,(String *)&local_c8,(StringName *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          Ref<DirAccess>::unref((Ref<DirAccess> *)&local_e8);
          goto LAB_0010bb66;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      }
      Ref<DirAccess>::unref((Ref<DirAccess> *)&local_e8);
      iVar10 = _extract_template(this,(String *)&local_130,(String *)&local_148,local_138,bVar6);
      if (iVar10 == 0) {
        Dictionary::Dictionary(local_120);
        FileAccess::open((String *)&local_118,(int)(String *)&local_128,(Error *)0x1);
        if (local_118 != (Object *)0x0) {
          uVar11 = (**(code **)(*(long *)local_118 + 0x1d0))();
          Variant::Variant((Variant *)local_58,uVar11);
          String::get_file();
          Variant::Variant((Variant *)local_78,(String *)&local_88);
          pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_120);
          Variant::operator=(pVVar12,(Variant *)local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        local_b0 = 0;
        String::parse_latin1((String *)&local_b0,".wasm");
        String::operator+((String *)local_218,local_140);
        FileAccess::open((String *)&local_88,(int)local_218,(Error *)0x1);
        pOVar4 = local_118;
        if (local_88 != local_118) {
          local_118 = local_88;
          if ((local_88 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
            local_118 = (Object *)0x0;
          }
          if (((pOVar4 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
             (cVar7 = predelete_handler(pOVar4), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if (local_118 != (Object *)0x0) {
          uVar11 = (**(code **)(*(long *)local_118 + 0x1d0))();
          Variant::Variant((Variant *)local_58,uVar11);
          local_98 = 0;
          String::parse_latin1((String *)local_218,".wasm");
          String::operator+((String *)&local_88,local_138);
          Variant::Variant((Variant *)local_78,(String *)&local_88);
          pVVar12 = (Variant *)Dictionary::operator[]((Variant *)local_120);
          Variant::operator=(pVVar12,(Variant *)local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if ((local_150 == 0) || (*(uint *)(local_150 + -8) < 2)) {
          local_88 = (Object *)0x0;
          String::parse_latin1((String *)&local_88,".html");
          String::operator+((String *)&local_110,local_140);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        }
        else {
          local_110 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,(CowData *)&local_150);
        }
        local_180 = (CowData<char32_t> *)&local_110;
        local_90 = 0;
        FileAccess::open((String *)&local_88,(int)local_180,(Error *)0x1);
        pOVar4 = local_118;
        if (local_88 != local_118) {
          local_118 = local_88;
          if ((local_88 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
            local_118 = (Object *)0x0;
          }
          if (((pOVar4 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
             (cVar7 = predelete_handler(pOVar4), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_88);
        if (local_118 == (Object *)0x0) {
          pcVar3 = *(code **)(*(long *)this + 0x178);
          local_b0 = 0;
          if (local_110 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)local_180);
          }
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"");
          local_c8 = 0;
          String::parse_latin1((String *)&local_c8,"Could not read HTML shell: \"%s\".");
          TTR((String *)&local_b8,(String *)&local_c8);
          vformat<String>((StringName *)&local_88,(String *)&local_b8,(String *)&local_b0);
          local_d8 = 0;
          String::parse_latin1((String *)&local_d8,"");
          local_e0 = 0;
          String::parse_latin1((String *)&local_e0,"Export");
          TTR((String *)&local_d0,(String *)&local_e0);
          (*pcVar3)(this,3,(String *)&local_d0,(StringName *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          iVar10 = 0xe;
        }
        else {
          lVar16 = (**(code **)(*(long *)local_118 + 0x1d0))();
          CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_90,lVar16);
          pOVar4 = local_118;
          pcVar3 = *(code **)(*(long *)local_118 + 0x220);
          if (local_90 == 0) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(undefined8 *)(local_90 + -8);
          }
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_90);
          (*pcVar3)(pOVar4,local_90,uVar15);
          Ref<FileAccess>::unref((Ref<FileAccess> *)&local_118);
          local_80 = 0;
          plVar1 = (long *)(local_a0 + -0x10);
          if (local_a0 != 0) {
            do {
              lVar16 = *plVar1;
              if (lVar16 == 0) goto LAB_0010c4ef;
              LOCK();
              lVar13 = *plVar1;
              bVar8 = lVar16 == lVar13;
              if (bVar8) {
                *plVar1 = lVar16 + 1;
                lVar13 = lVar16;
              }
              UNLOCK();
            } while (!bVar8);
            if (lVar13 != -1) {
              local_80 = local_a0;
            }
          }
LAB_0010c4ef:
          _fix_html(this,local_218,param_1,local_138,param_2,param_5,(StringName *)&local_88,
                    local_120);
          CowData<SharedObject>::_unref((CowData<SharedObject> *)&local_80);
          local_88 = (Object *)0x0;
          if (*(long *)param_3 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,param_3);
          }
          if (local_90 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined4 *)(local_90 + -8);
          }
          iVar10 = _write_or_error(this,local_90,uVar14,(StringName *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          if (iVar10 == 0) {
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_90,0);
            _get_project_splash();
            local_88 = (Object *)0x0;
            String::parse_latin1((String *)&local_88,".png");
            String::operator+((String *)&local_100,local_140);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            iVar10 = Image::save_png(local_108);
            if (iVar10 == 0) {
              if (bVar5) {
                _get_project_icon();
                local_88 = (Object *)0x0;
                String::parse_latin1((String *)&local_88,".icon.png");
                String::operator+((String *)&local_f0,local_140);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                iVar10 = Image::save_png(local_f8);
                if (iVar10 == 0) {
                  Image::resize(local_f8,0xb4,0xb4,1);
                  local_88 = (Object *)0x0;
                  String::parse_latin1((String *)&local_88,".apple-touch-icon.png");
                  String::operator+((String *)&local_e8,local_140);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  iVar10 = Image::save_png(local_f8);
                  if (iVar10 == 0) {
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                    Ref<Image>::unref((Ref<Image> *)&local_f8);
                    goto LAB_0010c608;
                  }
                  pcVar3 = *(code **)(*(long *)this + 0x178);
                  local_b0 = 0;
                  if (local_e8 != (long *)0x0) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_e8);
                  }
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,"");
                  local_c8 = 0;
                  String::parse_latin1((String *)&local_c8,"Could not write file: \"%s\".");
                  TTR((String *)&local_b8,(String *)&local_c8);
                  vformat<String>((StringName *)&local_88,(String *)&local_b8,(String *)&local_b0);
                  local_d8 = 0;
                  String::parse_latin1((String *)&local_d8,"");
                  local_e0 = 0;
                  String::parse_latin1((String *)&local_e0,"Export");
                  TTR((String *)&local_d0,(String *)&local_e0);
                  (*pcVar3)(this,3,(String *)&local_d0,(StringName *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                }
                else {
                  pcVar3 = *(code **)(*(long *)this + 0x178);
                  local_b0 = 0;
                  if (local_f0 != 0) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_f0);
                  }
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,"");
                  local_c8 = 0;
                  String::parse_latin1((String *)&local_c8,"Could not write file: \"%s\".");
                  TTR((String *)&local_b8,(String *)&local_c8);
                  vformat<String>((StringName *)&local_88,(String *)&local_b8,(String *)&local_b0);
                  local_d8 = 0;
                  String::parse_latin1((String *)&local_d8,"");
                  local_e0 = 0;
                  String::parse_latin1((String *)&local_e0,"Export");
                  TTR((String *)&local_d0,(String *)&local_e0);
                  (*pcVar3)(this,3,(String *)&local_d0,(StringName *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                Ref<Image>::unref((Ref<Image> *)&local_f8);
                goto LAB_0010cc53;
              }
LAB_0010c608:
              iVar10 = 0;
              if (bVar6) {
                local_88 = (Object *)0x0;
                if (*(long *)param_3 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,param_3);
                }
                iVar10 = _build_pwa(this,param_1,(StringName *)&local_88,local_a8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              }
            }
            else {
              pcVar3 = *(code **)(*(long *)this + 0x178);
              local_b0 = 0;
              if (local_100 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_100);
              }
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"");
              local_c8 = 0;
              String::parse_latin1((String *)&local_c8,"Could not write file: \"%s\".");
              TTR((String *)&local_b8,(String *)&local_c8);
              vformat<String>((StringName *)&local_88,(String *)&local_b8,(String *)&local_b0);
              local_d8 = 0;
              String::parse_latin1((String *)&local_d8,"");
              local_e0 = 0;
              String::parse_latin1((String *)&local_e0,"Export");
              TTR((String *)&local_d0,(String *)&local_e0);
              (*pcVar3)(this,3,(String *)&local_d0,(StringName *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
LAB_0010cc53:
              iVar10 = 0xd;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
            Ref<Image>::unref((Ref<Image> *)&local_108);
          }
        }
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_90);
        CowData<char32_t>::_unref(local_180);
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_118);
        Dictionary::~Dictionary(local_120);
      }
    }
    else {
      pcVar3 = *(code **)(*(long *)this + 0x178);
      local_98 = 0;
      if (local_128 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_218,(CowData *)&local_128);
      }
      local_b8 = 0;
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"Could not write file: \"%s\".");
      TTR((String *)&local_b0,(String *)&local_c0);
      vformat<String>((StringName *)&local_88,(String *)&local_b0,local_218);
      local_d0 = 0;
      String::parse_latin1((String *)&local_d0,"");
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,"Export");
      TTR((String *)&local_c8,(String *)&local_d8);
      (*pcVar3)(this,3,(String *)&local_c8,(StringName *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
    }
LAB_0010bb66:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
    CowData<SharedObject>::_unref((CowData<SharedObject> *)&local_a0);
  }
  else {
LAB_0010bc3c:
    local_218 = (StrRange *)&local_98;
    cVar7 = FileAccess::exists((String *)&local_130);
    if (cVar7 != '\0') goto LAB_0010b94a;
    pcVar3 = *(code **)(*(long *)this + 0x178);
    local_98 = 0;
    if (local_130 != (Object *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_218,(CowData *)&local_130);
    }
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"");
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"Template file not found: \"%s\".");
    TTR(local_a8,(String *)&local_b8);
    vformat<String>((StringName *)&local_88,local_a8,local_218);
    local_c8 = 0;
    String::parse_latin1((String *)&local_c8,"");
    local_d0 = 0;
    String::parse_latin1((String *)&local_d0,"Prepare Templates");
    TTR((String *)&local_c0,(String *)&local_d0);
    (*pcVar3)(this,3,(String *)&local_c0,(StringName *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
    iVar10 = 7;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
LAB_0010bb97:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_150);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_160);
  EditorExportPlatform::ExportNotifier::~ExportNotifier(&local_161);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<EditorExportPlatform::ExportMessage>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorExportPlatform::ExportMessage>::_copy_on_write
          (CowData<EditorExportPlatform::ExportMessage> *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
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
  if (lVar2 * 0x18 != 0) {
    uVar7 = lVar2 * 0x18 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    puVar9 = puVar5 + 2;
    if (lVar2 != 0) {
      do {
        puVar6 = (undefined4 *)((long)puVar9 + *(long *)this + (-0x10 - (long)puVar5));
        uVar1 = *puVar6;
        puVar9[1] = 0;
        lVar3 = *(long *)(puVar6 + 2);
        *(undefined4 *)puVar9 = uVar1;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 1),(CowData *)(puVar6 + 2));
        }
        puVar9[2] = 0;
        if (*(long *)(puVar6 + 4) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar9 + 2),(CowData *)(puVar6 + 4));
        }
        lVar8 = lVar8 + 1;
        puVar9 = puVar9 + 3;
      } while (lVar2 != lVar8);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* EditorExportPlatformWeb::~EditorExportPlatformWeb() */

void __thiscall EditorExportPlatformWeb::~EditorExportPlatformWeb(EditorExportPlatformWeb *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001148f8;
  if (*(long *)(this + 0x1b8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x1b8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x1a8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x1a8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x1a0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x1a0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x198) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x198);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 400) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 400);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(code **)this = __print_line;
  CowData<EditorExportPlatform::ExportMessage>::_unref
            ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188));
  *(undefined ***)this = &PTR__initialize_classv_00114798;
  Object::~Object((Object *)this);
  return;
}



/* EditorExportPlatformWeb::~EditorExportPlatformWeb() */

void __thiscall EditorExportPlatformWeb::~EditorExportPlatformWeb(EditorExportPlatformWeb *this)

{
  ~EditorExportPlatformWeb(this);
  operator_delete(this,0x1c0);
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
  return (uint)CONCAT71(0x1186,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1185,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* EditorExportPlatform::is_executable(String const&) const */

undefined8 EditorExportPlatform::is_executable(String *param_1)

{
  return 0;
}



/* EditorExportPlatform::get_message_count() const */

undefined4 __thiscall EditorExportPlatform::get_message_count(EditorExportPlatform *this)

{
  if (*(long *)(this + 0x188) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x188) + -8);
  }
  return 0;
}



/* EditorExportPlatform::get_worst_message_type() const */

int __thiscall EditorExportPlatform::get_worst_message_type(EditorExportPlatform *this)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(this + 0x188);
  if ((piVar3 == (int *)0x0) || (lVar2 = *(long *)(piVar3 + -2), lVar2 < 1)) {
    return 0;
  }
  iVar4 = 0;
  piVar1 = piVar3 + lVar2 * 6;
  if (((int)lVar2 * 3 & 1U) != 0) {
    iVar4 = 0;
    if (0 < *piVar3) {
      iVar4 = *piVar3;
    }
    piVar3 = piVar3 + 6;
    if (piVar1 == piVar3) {
      return iVar4;
    }
  }
  do {
    if (iVar4 < *piVar3) {
      iVar4 = *piVar3;
    }
    if (iVar4 < piVar3[6]) {
      iVar4 = piVar3[6];
    }
    piVar3 = piVar3 + 0xc;
  } while (piVar1 != piVar3);
  return iVar4;
}



/* EditorExportPlatform::should_update_export_options() */

undefined8 EditorExportPlatform::should_update_export_options(void)

{
  return 0;
}



/* EditorExportPlatform::get_export_option_warning(EditorExportPreset const*, StringName const&)
   const */

EditorExportPreset *
EditorExportPlatform::get_export_option_warning(EditorExportPreset *param_1,StringName *param_2)

{
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* EditorExportPlatform::cleanup() */

void EditorExportPlatform::cleanup(void)

{
  return;
}



/* EditorExportPlatform::get_custom_project_settings(Ref<EditorExportPreset> const&) const */

Ref * EditorExportPlatform::get_custom_project_settings(Ref *param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 2;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
  return param_1;
}



/* EditorExportPlatformWeb::is_class_ptr(void*) const */

uint __thiscall EditorExportPlatformWeb::is_class_ptr(EditorExportPlatformWeb *this,void *param_1)

{
  return (uint)CONCAT71(0x1185,(undefined4 *)param_1 ==
                               &EditorExportPlatform::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x114b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1185,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1186,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorExportPlatformWeb::_getv(StringName const&, Variant&) const */

undefined8 EditorExportPlatformWeb::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportPlatformWeb::_setv(StringName const&, Variant const&) */

undefined8 EditorExportPlatformWeb::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportPlatformWeb::_validate_propertyv(PropertyInfo&) const */

void EditorExportPlatformWeb::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorExportPlatformWeb::_property_can_revertv(StringName const&) const */

undefined8 EditorExportPlatformWeb::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorExportPlatformWeb::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorExportPlatformWeb::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportPlatformWeb::_notificationv(int, bool) */

void EditorExportPlatformWeb::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorExportPlatformWeb::resolve_platform_feature_priorities(Ref<EditorExportPreset> const&,
   HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >&) */

void EditorExportPlatformWeb::resolve_platform_feature_priorities(Ref *param_1,HashSet *param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00114798;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00114798;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* EditorExportPlatform::_get_message_type(int) const */

undefined4 __thiscall
EditorExportPlatform::_get_message_type(EditorExportPlatform *this,int param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x188);
  lVar2 = (long)param_1;
  if (param_1 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_0010dff9;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(lVar1 + lVar2 * 0x18);
    }
    goto LAB_0010dff9;
  }
  lVar3 = 0;
LAB_0010dff9:
  _err_print_index_error
            ("_get_message_type","./editor/export/editor_export_platform.h",0x104,lVar2,lVar3,
             "p_index","messages.size()","",false,false);
  return 0;
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
LAB_0010e083:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e083;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010e0ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010e0ee:
  return &_get_class_namev()::_class_name_static;
}



/* EditorExportPlatformWeb::_get_class_namev() const */

undefined8 * EditorExportPlatformWeb::_get_class_namev(void)

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
LAB_0010e173:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010e173;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorExportPlatformWeb");
      goto LAB_0010e1de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorExportPlatformWeb");
LAB_0010e1de:
  return &_get_class_namev()::_class_name_static;
}



/* EditorExportPlatform::get_device_architecture(int) const */

undefined8 EditorExportPlatform::get_device_architecture(int param_1)

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



/* EditorExportPlatform::get_options_tooltip() const */

EditorExportPlatform * __thiscall
EditorExportPlatform::get_options_tooltip(EditorExportPlatform *this)

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



/* EditorExportPlatformWeb::get_debug_protocol() const */

EditorExportPlatformWeb * __thiscall
EditorExportPlatformWeb::get_debug_protocol(EditorExportPlatformWeb *this)

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



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* EditorExportPlatform::_get_message_text(int) const */

CowData<char32_t> * EditorExportPlatform::_get_message_text(int param_1)

{
  long lVar1;
  long lVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  CowData<char32_t> *this;
  long lVar3;
  
  this = (CowData<char32_t> *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 0x188);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_0010ee19;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      *(undefined8 *)this = 0;
      lVar1 = lVar1 + lVar2 * 0x18;
      if (*(long *)(lVar1 + 0x10) != 0) {
        CowData<char32_t>::_ref(this,(CowData *)(lVar1 + 0x10));
      }
      return this;
    }
    goto LAB_0010ee19;
  }
  lVar3 = 0;
LAB_0010ee19:
  _err_print_index_error
            ("_get_message_text","./editor/export/editor_export_platform.h",0x10e,lVar2,lVar3,
             "p_index","messages.size()","",false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* EditorExportPlatform::_get_message_category(int) const */

CowData<char32_t> * EditorExportPlatform::_get_message_category(int param_1)

{
  long lVar1;
  long lVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  CowData<char32_t> *this;
  long lVar3;
  
  this = (CowData<char32_t> *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 0x188);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_0010eed9;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      *(undefined8 *)this = 0;
      lVar1 = lVar1 + lVar2 * 0x18;
      if (*(long *)(lVar1 + 8) != 0) {
        CowData<char32_t>::_ref(this,(CowData *)(lVar1 + 8));
      }
      return this;
    }
    goto LAB_0010eed9;
  }
  lVar3 = 0;
LAB_0010eed9:
  _err_print_index_error
            ("_get_message_category","./editor/export/editor_export_platform.h",0x109,lVar2,lVar3,
             "p_index","messages.size()","",false,false);
  *(undefined8 *)this = 0;
  return this;
}



/* EditorExportPlatform::get_message(int) const */

undefined4 * EditorExportPlatform::get_message(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long lVar6;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  lVar4 = (long)in_EDX;
  lVar3 = *(long *)(in_RSI + 0x188);
  if (in_EDX < 0) {
    if (lVar3 != 0) {
      lVar6 = *(long *)(lVar3 + -8);
      goto LAB_0010efc9;
    }
  }
  else if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + -8);
    if (lVar4 < lVar6) {
      puVar1 = (undefined4 *)(lVar3 + lVar4 * 0x18);
      uVar2 = *puVar1;
      *(undefined8 *)(puVar5 + 2) = 0;
      lVar3 = *(long *)(puVar1 + 2);
      *puVar5 = uVar2;
      if (lVar3 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)(puVar1 + 2));
      }
      *(undefined8 *)(puVar5 + 4) = 0;
      if (*(long *)(puVar1 + 4) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 4),(CowData *)(puVar1 + 4));
      }
      return puVar5;
    }
    goto LAB_0010efc9;
  }
  lVar6 = 0;
LAB_0010efc9:
  _err_print_index_error
            ("get_message","./editor/export/editor_export_platform.h",0xff,lVar4,lVar6,"p_index",
             "messages.size()","",false,false);
  *puVar5 = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  return puVar5;
}



/* EditorExportPlatformWeb::get_class() const */

void EditorExportPlatformWeb::get_class(void)

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
    if (cVar5 != '\0') goto LAB_0010f2db;
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
      if (cVar5 != '\0') goto LAB_0010f2db;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010f2db:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::is_class(String const&) const */

undefined8 __thiscall
EditorExportPlatformWeb::is_class(EditorExportPlatformWeb *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010f52b;
  }
  cVar5 = String::operator==(param_1,"EditorExportPlatformWeb");
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
      if (cVar5 != '\0') goto LAB_0010f52b;
    }
    cVar5 = String::operator==(param_1,"EditorExportPlatform");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0010f668;
    }
  }
LAB_0010f52b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010f668:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010f68e(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorExportPlatform::ExportMessage>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorExportPlatform::ExportMessage>::_copy_on_write(void)

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



/* EditorExportPlatform::ExportOption::~ExportOption() */

void __thiscall EditorExportPlatform::ExportOption::~ExportOption(ExportOption *this)

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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* Ref<FileAccess>::unref() */

void __thiscall Ref<FileAccess>::unref(Ref<FileAccess> *this)

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



/* void Ref<ImageTexture>::instantiate<>() */

void __thiscall Ref<ImageTexture>::instantiate<>(Ref<ImageTexture> *this)

{
  char cVar1;
  ImageTexture *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (ImageTexture *)operator_new(0x318,"");
  ImageTexture::ImageTexture(this_00);
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
    this_00 = (ImageTexture *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (ImageTexture *)pOVar3) goto LAB_0010fbe5;
    *(ImageTexture **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010fbe5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (ImageTexture *)0x0) {
    return;
  }
LAB_0010fbe5:
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



/* WARNING: Removing unreachable block (ram,0x0010fe58) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* WARNING: Removing unreachable block (ram,0x00110190) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

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
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
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



/* WARNING: Removing unreachable block (ram,0x00110490) */
/* String vformat<String, int, int>(String const&, String const, int const, int const) */

undefined8 *
vformat<String,int,int>(undefined8 *param_1,bool *param_2,String *param_3,int param_4,int param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
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
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  local_f0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  pVVar2 = local_48;
  Array::~Array(local_f8);
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



/* WARNING: Removing unreachable block (ram,0x00110780) */
/* String vformat<int, int>(String const&, int const, int const) */

String * vformat<int,int>(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
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
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
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



/* WARNING: Removing unreachable block (ram,0x00110a38) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* WARNING: Removing unreachable block (ram,0x00110d38) */
/* String vformat<Error>(String const&, Error const) */

undefined8 * vformat<Error>(undefined8 *param_1,bool *param_2,int param_3)

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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* EditorExportPlatformWeb::get_platform_features(List<String, DefaultAllocator>*) const */

void __thiscall
EditorExportPlatformWeb::get_platform_features(EditorExportPlatformWeb *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *pCVar3;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_50 = 3;
  local_58 = &_LC58;
  String::parse_latin1((StrRange *)&local_60);
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  pCVar3 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar3 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar3 + 0x10) = (undefined1  [16])0x0;
  if (local_60 != 0) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_60);
  }
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(pCVar3 + 8) = 0;
  *(long **)(pCVar3 + 0x18) = plVar1;
  *(long *)(pCVar3 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = pCVar3;
  }
  plVar1[1] = (long)pCVar3;
  if (*plVar1 == 0) {
    *plVar1 = (long)pCVar3;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (*(code **)(*(long *)this + 0x1d8) == get_os_name) {
    local_60 = 0;
    local_58 = &_LC11;
    local_50 = 3;
    String::parse_latin1((StrRange *)&local_60);
  }
  else {
    (**(code **)(*(long *)this + 0x1d8))((StrRange *)&local_60,this);
  }
  String::to_lower();
  if (*(long *)param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  pCVar3 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar3 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar3 + 0x10) = (undefined1  [16])0x0;
  if (local_58 != (undefined *)0x0) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_58);
  }
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(pCVar3 + 8) = 0;
  *(long **)(pCVar3 + 0x18) = plVar1;
  *(long *)(pCVar3 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = pCVar3;
  }
  plVar1[1] = (long)pCVar3;
  if (*plVar1 == 0) {
    *plVar1 = (long)pCVar3;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DirAccess::remove_file_or_error(String const&) */

void DirAccess::remove_file_or_error(String *param_1)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  Object *local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::create(&local_60,2);
  pOVar2 = local_60;
  pcVar1 = *(code **)(*(long *)local_60 + 0x1d0);
  local_48 = (char *)0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)param_1);
  }
  cVar3 = (*pcVar1)(pOVar2,(CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  pOVar2 = local_60;
  if (cVar3 == '\0') {
    local_50 = 0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)param_1);
    }
    local_58 = 0;
    local_48 = "Cannot remove non-existent file or directory: \'%s\'.";
    local_40 = 0x33;
    String::parse_latin1((StrRange *)&local_58);
    vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_58,
                    (CowData<char32_t> *)&local_50);
    uVar5 = 0x81;
  }
  else {
    pcVar1 = *(code **)(*(long *)local_60 + 0x208);
    local_48 = (char *)0x0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)param_1);
    }
    iVar4 = (*pcVar1)(pOVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (iVar4 == 0) goto LAB_001112b1;
    local_50 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)param_1);
    local_48 = "Cannot remove file or directory: \'%s\'.";
    local_58 = 0;
    local_40 = 0x26;
    String::parse_latin1((StrRange *)&local_58);
    vformat<String>((CowData<char32_t> *)&local_48,(StrRange *)&local_58,
                    (CowData<char32_t> *)&local_50);
    uVar5 = 0x7e;
  }
  _err_print_error("remove_file_or_error","./core/io/dir_access.h",uVar5,"Method/function failed.",
                   (CowData<char32_t> *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001112b1:
  if (local_60 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_60);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)local_60 + 0x140))(local_60);
        Memory::free_static(local_60,false);
      }
    }
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
        if (pvVar5 == (void *)0x0) goto LAB_001115a4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001115a4:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 (*pauVar37) [16];
  char cVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  void *pvVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50 [2];
  long local_40;
  
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 8) == 0) {
LAB_00111d6c:
    local_70 = 0;
    uVar48 = (ulong)uVar55;
    uVar41 = uVar48 * 4;
    uVar52 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    pvVar44 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar44;
    if (uVar55 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar52)) && (pvVar44 < (void *)((long)pvVar3 + uVar41))
         ) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar41 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar48 != uVar41);
      }
      else {
        memset(pvVar3,0,uVar41);
        memset(pvVar44,0,uVar52);
      }
LAB_00111c55:
      iVar45 = *(int *)(this + 0x2c);
      if (iVar45 != 0) {
LAB_00111c65:
        uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar41 = CONCAT44(0,uVar39);
        lVar53 = *(long *)(this + 0x10);
        uVar40 = 1;
        if (uVar51 != 0) {
          uVar40 = uVar51;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar40 * lVar4;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar41;
        lVar46 = SUB168(auVar17 * auVar33,8);
        uVar51 = *(uint *)(lVar53 + lVar46 * 4);
        uVar50 = SUB164(auVar17 * auVar33,8);
        if (uVar51 != 0) {
          do {
            if (uVar40 == uVar51) {
              cVar38 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar38 != '\0') {
                pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                if (*(long *)(pauVar43[1] + 8) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(pauVar43[1] + 8),(CowData *)&local_70);
                  pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                }
                goto LAB_00111b03;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar50 + 1) * lVar4;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar41;
            lVar46 = SUB168(auVar18 * auVar34,8);
            uVar51 = *(uint *)(lVar53 + lVar46 * 4);
            uVar50 = SUB164(auVar18 * auVar34,8);
          } while ((uVar51 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar51 * lVar4, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar41, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar39 + uVar50) - SUB164(auVar19 * auVar35,8)) * lVar4,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar41, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar48 = (ulong)uVar55;
      goto LAB_00111727;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00111727;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00111c65;
LAB_0011174d:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00111b03;
    }
    uVar41 = (ulong)(uVar55 + 1);
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar55 + 1 < 2) {
      uVar41 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar44 = *(void **)(this + 8);
    uVar48 = (ulong)uVar55;
    uVar41 = uVar48 * 4;
    pvVar3 = *(void **)(this + 0x10);
    uVar52 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar48);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar52);
      }
    }
    uVar41 = 0;
    if (uVar39 != 0) {
      do {
        uVar55 = *(uint *)((long)pvVar3 + uVar41 * 4);
        if (uVar55 != 0) {
          uVar50 = 0;
          lVar4 = *(long *)(this + 0x10);
          uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar40);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar55 * lVar53;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar52;
          lVar46 = SUB168(auVar5 * auVar21,8);
          puVar1 = (uint *)(lVar4 + lVar46 * 4);
          iVar45 = SUB164(auVar5 * auVar21,8);
          uVar51 = *puVar1;
          uVar42 = *(undefined8 *)((long)pvVar44 + uVar41 * 8);
          while (uVar51 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar51 * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar52;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar40 + iVar45) - SUB164(auVar6 * auVar22,8)) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar52;
            uVar54 = SUB164(auVar7 * auVar23,8);
            uVar49 = uVar42;
            if (uVar54 < uVar50) {
              *puVar1 = uVar55;
              puVar2 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar42;
              uVar55 = uVar51;
              uVar50 = uVar54;
            }
            uVar50 = uVar50 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar52;
            lVar46 = SUB168(auVar8 * auVar24,8);
            puVar1 = (uint *)(lVar4 + lVar46 * 4);
            iVar45 = SUB164(auVar8 * auVar24,8);
            uVar42 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar42;
          *puVar1 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar39 != uVar41);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar41 = CONCAT44(0,uVar55);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar40 = String::hash();
      uVar39 = 1;
      if (uVar40 != 0) {
        uVar39 = uVar40;
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar39 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar41;
      lVar46 = SUB168(auVar13 * auVar29,8);
      lVar53 = *(long *)(this + 0x10);
      uVar51 = SUB164(auVar13 * auVar29,8);
      uVar40 = *(uint *)(lVar53 + lVar46 * 4);
      if (uVar40 == 0) {
        lVar47 = *(long *)(this + 8);
      }
      else {
        uVar50 = 0;
        lVar47 = *(long *)(this + 8);
        do {
          if (uVar39 == uVar40) {
            cVar38 = String::operator==((String *)(*(long *)(lVar47 + lVar46 * 8) + 0x10),param_1);
            if (cVar38 != '\0') {
              pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_00111b0f;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar47 = *(long *)(this + 8);
          }
          uVar50 = uVar50 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar51 + 1) * lVar4;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar41;
          lVar46 = SUB168(auVar14 * auVar30,8);
          uVar40 = *(uint *)(lVar53 + lVar46 * 4);
          uVar51 = SUB164(auVar14 * auVar30,8);
        } while ((uVar40 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar40 * lVar4, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar41, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar51 + uVar55) - SUB164(auVar15 * auVar31,8)) * lVar4,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar41, uVar50 <= SUB164(auVar16 * auVar32,8)));
      }
      local_70 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar47 == 0) goto LAB_00111d6c;
      goto LAB_00111c55;
    }
    local_70 = 0;
    uVar48 = (ulong)uVar55;
    iVar45 = 0;
LAB_00111727:
    if ((float)uVar48 * __LC123 < (float)(iVar45 + 1)) goto LAB_0011174d;
  }
  local_58 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_50[0] = 0;
    pauVar43 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar43[1] = 0;
    *pauVar43 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    lVar4 = local_58;
    uVar42 = local_68._0_8_;
    uVar49 = local_68._8_8_;
    local_50[0] = 0;
    pauVar43 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar43[1] = 0;
    *(undefined8 *)*pauVar43 = uVar42;
    *(undefined8 *)(*pauVar43 + 8) = uVar49;
    if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar43 + 1),(CowData *)&local_58);
    }
  }
  *(undefined8 *)(pauVar43[1] + 8) = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar39 = String::hash();
  lVar4 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar39 != 0) {
    uVar55 = uVar39;
  }
  uVar51 = 0;
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar39);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar55 * lVar53;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar41;
  lVar47 = SUB168(auVar9 * auVar25,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar4 + lVar47 * 4);
  iVar45 = SUB164(auVar9 * auVar25,8);
  uVar40 = *puVar1;
  pauVar37 = pauVar43;
  while (uVar40 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar40 * lVar53;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar41;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar39 + iVar45) - SUB164(auVar10 * auVar26,8)) * lVar53;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar41;
    uVar50 = SUB164(auVar11 * auVar27,8);
    pauVar56 = pauVar37;
    if (uVar50 < uVar51) {
      *puVar1 = uVar55;
      puVar2 = (undefined8 *)(lVar46 + lVar47 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar51 = uVar50;
      uVar55 = uVar40;
    }
    uVar51 = uVar51 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar53;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar41;
    lVar47 = SUB168(auVar12 * auVar28,8);
    puVar1 = (uint *)(lVar4 + lVar47 * 4);
    iVar45 = SUB164(auVar12 * auVar28,8);
    pauVar37 = pauVar56;
    uVar40 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar37;
  *puVar1 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00111b03:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00111b0f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar43[1] + 8;
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



/* EditorExportPlatformWeb::_initialize_classv() */

void EditorExportPlatformWeb::_initialize_classv(void)

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
    if (EditorExportPlatform::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0011c010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorExportPlatform";
      local_70 = 0;
      local_50 = 0x14;
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
      if ((code *)PTR__bind_methods_0011c008 != RefCounted::_bind_methods) {
        EditorExportPlatform::_bind_methods();
      }
      EditorExportPlatform::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorExportPlatform";
    local_68 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorExportPlatformWeb";
    local_70 = 0;
    local_50 = 0x17;
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
LAB_0011253d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011253d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011255f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011255f:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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



/* EditorExportPlatform::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorExportPlatform::_get_property_listv(EditorExportPlatform *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorExportPlatform";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorExportPlatform";
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
LAB_001128bd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001128bd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001128df;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001128df:
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
  StringName::StringName((StringName *)&local_78,"EditorExportPlatform",false);
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



/* EditorExportPlatformWeb::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorExportPlatformWeb::_get_property_listv
          (EditorExportPlatformWeb *this,List *param_1,bool param_2)

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
    EditorExportPlatform::_get_property_listv((EditorExportPlatform *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorExportPlatformWeb";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorExportPlatformWeb";
  local_98 = 0;
  local_70 = 0x17;
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
LAB_00112c9d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00112c9d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00112cbf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00112cbf:
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
  StringName::StringName((StringName *)&local_78,"EditorExportPlatformWeb",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorExportPlatform::_get_property_listv((EditorExportPlatform *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<DirAccess>::unref() */

void __thiscall Ref<DirAccess>::unref(Ref<DirAccess> *this)

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



/* void Ref<Image>::instantiate<>() */

void __thiscall Ref<Image>::instantiate<>(Ref<Image> *this)

{
  Image *pIVar1;
  char cVar2;
  Resource *this_00;
  long lVar3;
  Resource *pRVar4;
  Image *pIVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (Resource *)operator_new(0x268,"");
  pRVar4 = this_00;
  for (lVar3 = 0x4d; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar4 = 0;
    pRVar4 = pRVar4 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  this_00[0x260] = (Resource)0x0;
  *(code **)this_00 = Memory::free_static;
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pIVar1 = *(Image **)this;
    if (pIVar1 == (Image *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') {
      return;
    }
    memdelete<Image>(pIVar1);
    return;
  }
  pIVar1 = *(Image **)this;
  pIVar5 = pIVar1;
  if (this_00 != (Resource *)pIVar1) {
    *(Resource **)this = this_00;
    cVar2 = RefCounted::reference();
    pIVar5 = (Image *)this_00;
    if (cVar2 == '\0') {
      *(undefined8 *)this = 0;
      if (pIVar1 == (Image *)0x0) goto LAB_00113278;
      cVar2 = RefCounted::unreference();
    }
    else {
      if (pIVar1 == (Image *)0x0) goto LAB_00113278;
      cVar2 = RefCounted::unreference();
    }
    if (cVar2 != '\0') {
      memdelete<Image>(pIVar1);
    }
  }
LAB_00113278:
  cVar2 = RefCounted::unreference();
  if (cVar2 == '\0') {
    return;
  }
  memdelete<Image>(pIVar5);
  return;
}



/* EditorExportPlatformWeb::_get_project_icon() const */

void EditorExportPlatformWeb::_get_project_icon(void)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  Image *pIVar6;
  Image *pIVar7;
  Error *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  Image *local_78;
  long local_70;
  long local_68;
  Image *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (Image *)0x0;
  Ref<Image>::instantiate<>((Ref<Image> *)&local_78);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_68,"application/config/icon",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_60);
  String::strip_edges(SUB81((CowData<char32_t> *)&local_70,0),SUB81((Variant *)&local_60,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if ((local_70 == 0) || (*(uint *)(local_70 + -8) < 2)) {
LAB_001133d9:
    pOVar5 = *(Object **)(EditorNode::singleton + 0x838);
    if (pOVar5 == (Object *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    pcVar2 = *(code **)(*(long *)pOVar5 + 0x1c8);
    lVar1 = EditorStringNames::singleton + 0x10;
    if ((const::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&const::{lambda()#1}::operator()()::sname), iVar4 != 0)) {
      _scs_create((char *)&const::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&const::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&const::{lambda()#1}::operator()()::sname);
    }
    (*pcVar2)((Variant *)&local_60,pOVar5,&const::{lambda()#1}::operator()()::sname,lVar1);
    (**(code **)(*(long *)local_60 + 0x210))();
    if (((local_60 == (Image *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0')) ||
       (cVar3 = predelete_handler((Object *)local_60), cVar3 == '\0')) {
      cVar3 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)local_60 + 0x140))(local_60);
      Memory::free_static(local_60,false);
      cVar3 = RefCounted::unreference();
    }
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    pIVar6 = local_78;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (pIVar6 == (Image *)0x0) goto LAB_00113497;
  }
  else {
    EditorExportPlatform::_load_icon_or_splash_image((String *)&local_60,in_RSI);
    pIVar6 = local_78;
    pIVar7 = local_78;
    if (local_60 == local_78) {
LAB_0011351c:
      if ((pIVar7 != (Image *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) {
        memdelete<Image>(local_60);
      }
    }
    else {
      local_78 = local_60;
      if (local_60 != (Image *)0x0) {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          local_78 = (Image *)0x0;
        }
        pIVar7 = local_60;
        if (pIVar6 != (Image *)0x0) goto LAB_00113507;
        goto LAB_0011351c;
      }
      if (pIVar6 != (Image *)0x0) {
LAB_00113507:
        cVar3 = RefCounted::unreference();
        pIVar7 = local_60;
        if (cVar3 != '\0') {
          memdelete<Image>(pIVar6);
          pIVar7 = local_60;
        }
        goto LAB_0011351c;
      }
    }
    pIVar6 = local_78;
    if ((((local_70 == 0) || (*(uint *)(local_70 + -8) < 2)) || (local_78 == (Image *)0x0)) ||
       (cVar3 = Image::is_empty(), cVar3 != '\0')) goto LAB_001133d9;
    *in_RDI = pIVar6;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *in_RDI = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    memdelete<Image>(pIVar6);
  }
LAB_00113497:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorExportPlatformWeb::_get_project_splash() const */

void EditorExportPlatformWeb::_get_project_splash(void)

{
  char cVar1;
  Image *pIVar2;
  Image *pIVar3;
  Error *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  Image *local_78;
  long local_70;
  long local_68;
  Image *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (Image *)0x0;
  Ref<Image>::instantiate<>((Ref<Image> *)&local_78);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_68,"application/boot_splash/image",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_60);
  String::strip_edges(SUB81((CowData<char32_t> *)&local_70,0),SUB81((Variant *)&local_60,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  pIVar3 = local_78;
  if ((local_70 == 0) || (*(uint *)(local_70 + -8) < 2)) {
LAB_001137ee:
    pIVar2 = (Image *)operator_new(0x268,"");
    Image::Image(pIVar2,boot_splash_png,-1);
    postinitialize_handler((Object *)pIVar2);
    *in_RDI = pIVar2;
    cVar1 = RefCounted::init_ref();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (pIVar3 == (Image *)0x0) goto LAB_00113853;
  }
  else {
    EditorExportPlatform::_load_icon_or_splash_image((String *)&local_60,in_RSI);
    if (pIVar3 == local_60) {
LAB_001138d7:
      pIVar3 = local_78;
      if ((local_60 != (Image *)0x0) &&
         (cVar1 = RefCounted::unreference(), pIVar3 = local_78, cVar1 != '\0')) {
        memdelete<Image>(local_60);
        pIVar3 = local_78;
      }
    }
    else {
      local_78 = local_60;
      if (local_60 != (Image *)0x0) {
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          local_78 = (Image *)0x0;
        }
        if (pIVar3 != (Image *)0x0) goto LAB_001138c2;
        goto LAB_001138d7;
      }
      if (pIVar3 != (Image *)0x0) {
LAB_001138c2:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          memdelete<Image>(pIVar3);
        }
        goto LAB_001138d7;
      }
    }
    if ((local_70 == 0) || (*(uint *)(local_70 + -8) < 2)) goto LAB_001137ee;
    if (pIVar3 == (Image *)0x0) {
      pIVar3 = (Image *)operator_new(0x268,"");
      Image::Image(pIVar3,boot_splash_png,-1);
      postinitialize_handler((Object *)pIVar3);
      *in_RDI = pIVar3;
      cVar1 = RefCounted::init_ref();
      if (cVar1 == '\0') {
        *in_RDI = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      goto LAB_00113853;
    }
    cVar1 = Image::is_empty();
    if (cVar1 == '\0') {
      *in_RDI = pIVar3;
      cVar1 = RefCounted::reference();
    }
    else {
      pIVar2 = (Image *)operator_new(0x268,"");
      Image::Image(pIVar2,boot_splash_png,-1);
      postinitialize_handler((Object *)pIVar2);
      *in_RDI = pIVar2;
      cVar1 = RefCounted::init_ref();
    }
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  cVar1 = RefCounted::unreference();
  if (cVar1 != '\0') {
    memdelete<Image>(pIVar3);
  }
LAB_00113853:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* CowData<SharedObject>::_unref() */

void __thiscall CowData<SharedObject>::_unref(CowData<SharedObject> *this)

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
          if (plVar6[3] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[3] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[3];
              plVar6[3] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<String>::_unref((CowData<String> *)(plVar6 + 2));
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
          plVar6 = plVar6 + 4;
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



/* CowData<EditorExportPlatform::ExportMessage>::_unref() */

void __thiscall
CowData<EditorExportPlatform::ExportMessage>::_unref
          (CowData<EditorExportPlatform::ExportMessage> *this)

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
          if (*(long *)(lVar6 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x10);
              *(undefined8 *)(lVar6 + 0x10) = 0;
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
          lVar6 = lVar6 + 0x18;
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



/* EditorExportPlatform::clear_messages() */

void __thiscall EditorExportPlatform::clear_messages(EditorExportPlatform *this)

{
  if ((*(long *)(this + 0x188) != 0) && (*(long *)(*(long *)(this + 0x188) + -8) != 0)) {
    CowData<EditorExportPlatform::ExportMessage>::_unref
              ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188));
    return;
  }
  return;
}



/* CowData<EditorExportPlatform::ExportMessage>::_realloc(long) */

undefined8 __thiscall
CowData<EditorExportPlatform::ExportMessage>::_realloc
          (CowData<EditorExportPlatform::ExportMessage> *this,long param_1)

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
/* Error CowData<EditorExportPlatform::ExportMessage>::resize<false>(long) */

undefined8 __thiscall
CowData<EditorExportPlatform::ExportMessage>::resize<false>
          (CowData<EditorExportPlatform::ExportMessage> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
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
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar5) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar5 * 0x18;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_00114060:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x18 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar11 = uVar8 + 1;
  if (lVar11 == 0) goto LAB_00114060;
  uVar9 = param_1;
  if (param_1 <= lVar5) {
    while (lVar5 = *(long *)this, lVar5 != 0) {
      if (*(ulong *)(lVar5 + -8) <= uVar9) {
        if (lVar11 != lVar7) {
          uVar4 = _realloc(this,lVar11);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar5 = *(long *)this;
          if (lVar5 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar5 + -8) = param_1;
        return 0;
      }
      lVar5 = lVar5 + uVar9 * 0x18;
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar5 + 0x10));
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar5 + 8));
      uVar9 = uVar9 + 1;
    }
    goto LAB_001140b6;
  }
  if (lVar11 == lVar7) {
LAB_00113fcb:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_001140b6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = puVar6[-1];
    if (param_1 <= lVar5) goto LAB_00113f21;
  }
  else {
    if (lVar5 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00113fcb;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar5 = 0;
  }
  puVar10 = puVar6 + param_1 * 3;
  puVar2 = puVar6 + lVar5 * 3;
  puVar3 = puVar2;
  if (((int)puVar10 - (int)puVar2 & 8U) != 0) {
    *(undefined1 (*) [16])(puVar2 + 1) = (undefined1  [16])0x0;
    puVar3 = puVar2 + 3;
    if (puVar2 + 3 == puVar10) goto LAB_00113f21;
  }
  do {
    *(undefined1 (*) [16])(puVar3 + 1) = (undefined1  [16])0x0;
    puVar2 = puVar3 + 6;
    *(undefined1 (*) [16])(puVar3 + 4) = (undefined1  [16])0x0;
    puVar3 = puVar2;
  } while (puVar2 != puVar10);
LAB_00113f21:
  puVar6[-1] = param_1;
  return 0;
}



/* EditorExportPlatform::add_message(EditorExportPlatform::ExportMessageType, String const&, String
   const&) */

void __thiscall
EditorExportPlatform::add_message
          (EditorExportPlatform *this,int param_2,CowData *param_3,CowData *param_4)

{
  undefined4 *puVar1;
  CowData<char32_t> *this_00;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98;
  undefined1 local_90 [16];
  char *local_78;
  long local_70;
  long local_68 [2];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = (undefined1  [16])0x0;
  lVar7 = *(long *)param_3;
  if (*(long *)param_3 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_90,param_3);
    lVar7 = local_90._8_8_;
  }
  this_00 = (CowData<char32_t> *)(local_90 + 8);
  if (*(long *)param_4 != lVar7) {
    CowData<char32_t>::_ref(this_00,param_4);
    lVar7 = local_90._8_8_;
  }
  uVar4 = local_90._0_8_;
  local_78 = (char *)CONCAT44(local_78._4_4_,param_2);
  local_70 = 0;
  local_98 = param_2;
  if (local_90._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)local_90);
  }
  local_68[0] = 0;
  if (lVar7 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_68,(CowData *)this_00);
  }
  if (*(long *)(this + 0x188) == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = *(long *)(*(long *)(this + 0x188) + -8) + 1;
  }
  iVar2 = CowData<EditorExportPlatform::ExportMessage>::resize<false>
                    ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188),lVar5);
  if (iVar2 == 0) {
    if (*(long *)(this + 0x188) == 0) {
      lVar3 = -1;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(this + 0x188) + -8);
      lVar3 = lVar5 + -1;
      if (-1 < lVar3) {
        CowData<EditorExportPlatform::ExportMessage>::_copy_on_write
                  ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188));
        puVar1 = (undefined4 *)(*(long *)(this + 0x188) + lVar3 * 0x18);
        *puVar1 = local_78._0_4_;
        if (*(long *)(puVar1 + 2) != local_70) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 2),(CowData *)&local_70);
        }
        if (*(long *)(puVar1 + 4) != local_68[0]) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 4),(CowData *)local_68);
        }
        goto LAB_00114271;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar5,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00114271:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (param_2 == 2) {
    local_a0 = 0;
    if (lVar7 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)this_00);
    }
    local_a8 = 0;
    if (uVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_90);
    }
    local_b0 = 0;
    local_70 = 6;
    local_78 = "%s: %s";
    String::parse_latin1((StrRange *)&local_b0);
    vformat<String,String>
              (&local_78,(StrRange *)&local_b0,(CowData<char32_t> *)&local_a8,
               (CowData<char32_t> *)&local_a0);
    uVar4 = 0xf0;
    uVar6 = 1;
  }
  else {
    if (param_2 != 3) {
      if (param_2 == 1) {
        local_a8 = 0;
        if (lVar7 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)this_00);
        }
        local_b0 = 0;
        if (uVar4 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)local_90);
        }
        local_b8 = 0;
        local_78 = "%s: %s";
        local_70 = 6;
        String::parse_latin1((StrRange *)&local_b8);
        vformat<String,String>
                  ((CowData<char32_t> *)&local_a0,(StrRange *)&local_b8,
                   (CowData<char32_t> *)&local_b0,(CowData<char32_t> *)&local_a8);
        Variant::Variant((Variant *)local_58,(String *)&local_a0);
        stringify_variants((Variant *)&local_78);
        __print_line((String *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      }
      goto LAB_00114469;
    }
    local_a0 = 0;
    if (lVar7 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)this_00);
    }
    local_a8 = 0;
    if (uVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_90);
    }
    local_b0 = 0;
    local_70 = 6;
    local_78 = "%s: %s";
    String::parse_latin1((StrRange *)&local_b0);
    vformat<String,String>
              (&local_78,(StrRange *)&local_b0,(CowData<char32_t> *)&local_a8,
               (CowData<char32_t> *)&local_a0);
    uVar6 = 0;
    uVar4 = 0xf3;
  }
  _err_print_error("add_message","./editor/export/editor_export_platform.h",uVar4,
                   (CowData<char32_t> *)&local_78,0,uVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_00114469:
  CowData<char32_t>::_unref(this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformWeb::_extract_template(String const&, String const&, String const&, bool) */

void EditorExportPlatformWeb::_GLOBAL__sub_I__extract_template(void)

{
  undefined8 uStack_18;
  
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  ENV_SCRIPT_ENCRYPTION_KEY = 0;
  String::parse_latin1((String *)&ENV_SCRIPT_ENCRYPTION_KEY,"GODOT_SCRIPT_ENCRYPTION_KEY");
  __cxa_atexit(String::~String,&ENV_SCRIPT_ENCRYPTION_KEY,&__dso_handle);
  if (EditorExport::_export_presets_updated == '\0') {
    EditorExport::_export_presets_updated = '\x01';
    EditorExport::_export_presets_updated = 0;
    __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_updated,&__dso_handle);
  }
  if (EditorExport::_export_presets_runnable_updated != '\0') {
    return;
  }
  EditorExport::_export_presets_runnable_updated = 1;
  EditorExport::_export_presets_runnable_updated = 0;
  __cxa_atexit(StringName::~StringName,&EditorExport::_export_presets_runnable_updated,&__dso_handle
               ,uStack_18);
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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorExportPlatform::ExportOption::~ExportOption() */

void __thiscall EditorExportPlatform::ExportOption::~ExportOption(ExportOption *this)

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
/* PropertyInfo::PropertyInfo(PropertyInfo const&) */

void __thiscall PropertyInfo::PropertyInfo(PropertyInfo *this,PropertyInfo *param_1)

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


