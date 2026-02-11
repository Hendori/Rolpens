
/* EditorExportPlatformLinuxBSD::get_options_count() const */

undefined4 __thiscall
EditorExportPlatformLinuxBSD::get_options_count(EditorExportPlatformLinuxBSD *this)

{
  return *(undefined4 *)(this + 0x208);
}



/* EditorExportPlatformLinuxBSD::get_export_option_visibility(EditorExportPreset const*, String
   const&) const */

undefined4 __thiscall
EditorExportPlatformLinuxBSD::get_export_option_visibility
          (EditorExportPlatformLinuxBSD *this,EditorExportPreset *param_1,String *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (EditorExportPreset *)0x0) {
    uVar3 = EditorExportPreset::are_advanced_options_enabled();
    StringName::StringName((StringName *)&local_60,"ssh_remote_deploy/enabled",false);
    Object::get((StringName *)local_58,(bool *)param_1);
    bVar1 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    if (!bVar1) {
      cVar2 = String::operator!=(param_2,"ssh_remote_deploy/enabled");
      if (cVar2 != '\0') {
        cVar2 = String::begins_with((char *)param_2);
        if (cVar2 != '\0') {
          uVar3 = 0;
          goto LAB_001000d9;
        }
      }
    }
    cVar2 = String::operator==(param_2,"dotnet/embed_build_outputs");
    if (cVar2 != '\0') goto LAB_001000d9;
    cVar2 = String::operator==(param_2,"custom_template/debug");
    if (cVar2 != '\0') goto LAB_001000d9;
    cVar2 = String::operator==(param_2,"custom_template/release");
    if (cVar2 != '\0') goto LAB_001000d9;
  }
  uVar3 = 1;
LAB_001000d9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformLinuxBSD::get_run_icon() const */

void EditorExportPlatformLinuxBSD::get_run_icon(void)

{
  char cVar1;
  long lVar2;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x1e0) != 0) {
    lVar2 = __dynamic_cast(*(long *)(in_RSI + 0x1e0),&Object::typeinfo,&Texture2D::typeinfo,0);
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



/* EditorExportPlatformLinuxBSD::poll_export() */

ulong __thiscall EditorExportPlatformLinuxBSD::poll_export(EditorExportPlatformLinuxBSD *this)

{
  EditorExportPlatformLinuxBSD *pEVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  Object *pOVar6;
  undefined7 uVar8;
  ulong uVar7;
  long in_FS_OFFSET;
  Object *local_58;
  EditorExportPlatformLinuxBSD *local_50;
  int local_48 [6];
  long local_30;
  
  iVar5 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar4 = EditorExport::get_export_preset_count();
    uVar8 = (undefined7)((ulong)this >> 8);
    if (iVar4 <= iVar5) {
LAB_00100408:
      iVar5 = *(int *)(this + 0x208);
LAB_0010040f:
      *(undefined4 *)(this + 0x208) = 0;
      if ((*(long *)(this + 0x200) == 0) && (*(long *)(this + 0x1f8) == 0)) {
        uVar7 = CONCAT71(uVar8,iVar5 != 0);
      }
      else {
        pOVar6 = (Object *)0x0;
LAB_00100442:
        (**(code **)(*(long *)this + 0x228))(this);
        uVar7 = CONCAT71(uVar8,*(int *)(this + 0x208) != iVar5);
        if (pOVar6 != (Object *)0x0) {
LAB_001003b6:
          cVar2 = RefCounted::unreference();
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar7 & 0xffffffff;
    }
    EditorExport::get_export_preset((int)&local_58);
    cVar2 = EditorExportPreset::is_runnable();
    if (cVar2 != '\0') {
      EditorExportPreset::get_platform();
      if (this == local_50) {
        cVar2 = RefCounted::unreference();
        pEVar1 = local_50;
        if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)local_50), cVar2 != '\0')) {
          (**(code **)(*(long *)pEVar1 + 0x140))(pEVar1);
          Memory::free_static(pEVar1,false);
        }
        pOVar6 = local_58;
        if (local_58 == (Object *)0x0) goto LAB_00100408;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          if ((local_58 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0'))
          goto LAB_00100408;
          pOVar6 = (Object *)0x0;
          cVar2 = predelete_handler(local_58);
          if (cVar2 == '\0') goto LAB_00100408;
LAB_001004e0:
          (**(code **)(*(long *)local_58 + 0x140))(local_58);
          Memory::free_static(local_58,false);
          iVar5 = *(int *)(this + 0x208);
          if (pOVar6 == (Object *)0x0) goto LAB_0010040f;
        }
        else {
          if (((local_58 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
             (cVar2 = predelete_handler(local_58), cVar2 != '\0')) goto LAB_001004e0;
          iVar5 = *(int *)(this + 0x208);
        }
        StringName::StringName((StringName *)&local_50,"ssh_remote_deploy/enabled",false);
        Object::get((StringName *)local_48,(bool *)pOVar6);
        bVar3 = Variant::operator_cast_to_bool((Variant *)local_48);
        *(uint *)(this + 0x208) = (uint)bVar3;
        if (Variant::needs_deinit[local_48[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_50 != (EditorExportPlatformLinuxBSD *)0x0)) {
          StringName::unref();
        }
        iVar4 = *(int *)(this + 0x208);
        if ((*(long *)(this + 0x200) == 0) && (*(long *)(this + 0x1f8) == 0)) {
          uVar7 = CONCAT71(uVar8,iVar4 != iVar5);
          goto LAB_001003b6;
        }
        if (iVar4 == 0) goto LAB_00100442;
        *(int *)(this + 0x208) = iVar4 + 1;
        uVar7 = CONCAT71(uVar8,iVar4 + 1 != iVar5);
        goto LAB_001003b6;
      }
      if (((local_50 != (EditorExportPlatformLinuxBSD *)0x0) &&
          (cVar2 = RefCounted::unreference(), pEVar1 = local_50, cVar2 != '\0')) &&
         (cVar2 = predelete_handler((Object *)local_50), cVar2 != '\0')) {
        (**(code **)(*(long *)pEVar1 + 0x140))(pEVar1);
        Memory::free_static(pEVar1,false);
      }
    }
    if (((local_58 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar6 = local_58, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_58), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/* EditorExportPlatformLinuxBSD::get_option_icon(int) const */

long * EditorExportPlatformLinuxBSD::get_option_icon(int param_1)

{
  long lVar1;
  char cVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar3;
  long in_FS_OFFSET;
  
  plVar3 = (long *)CONCAT44(in_register_0000003c,param_1);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 1) {
    *plVar3 = 0;
    if (*(long *)(in_RSI + 0x1e8) != 0) {
      *plVar3 = *(long *)(in_RSI + 0x1e8);
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *plVar3 = 0;
      }
    }
  }
  else {
    EditorExportPlatform::get_option_icon(param_1);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar3;
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



/* EditorExportPlatformLinuxBSD::get_template_file_name(String const&, String const&) const */

String * EditorExportPlatformLinuxBSD::get_template_file_name(String *param_1,String *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = &_LC19;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_60);
  operator+((char *)&local_68,(String *)"linux_");
  String::operator+((String *)&local_58,(String *)&local_68);
  String::operator+(param_1,(String *)&local_58);
  puVar3 = local_58;
  if (local_58 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformLinuxBSD::_get_exe_arch(String const&) const */

String * EditorExportPlatformLinuxBSD::_get_exe_arch(String *param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  int in_EDX;
  long in_FS_OFFSET;
  Object *local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_40,in_EDX,(Error *)0x1);
  if (local_40 != (Object *)0x0) {
    iVar3 = (**(code **)(*(long *)local_40 + 0x1f0))();
    if (iVar3 == 0x464c457f) {
      lVar4 = (**(code **)(*(long *)local_40 + 0x1c8))();
      (**(code **)(*(long *)local_40 + 0x1b8))(local_40,lVar4 + 0xe);
      uVar2 = (**(code **)(*(long *)local_40 + 0x1e8))();
      (**(code **)(*(long *)local_40 + 0x2d8))();
      if (uVar2 == 0x3e) {
        *(undefined8 *)param_1 = 0;
        String::parse_latin1(param_1,"x86_64");
        goto LAB_001009e9;
      }
      if (uVar2 < 0x3f) {
        if (uVar2 == 0x15) {
          *(undefined8 *)param_1 = 0;
          String::parse_latin1(param_1,"ppc64");
          goto LAB_001009e9;
        }
        if (uVar2 < 0x16) {
          if (uVar2 == 3) {
            *(undefined8 *)param_1 = 0;
            String::parse_latin1(param_1,"x86_32");
            goto LAB_001009e9;
          }
          if (uVar2 == 0x14) {
            *(undefined8 *)param_1 = 0;
            String::parse_latin1(param_1,"ppc32");
            goto LAB_001009e9;
          }
        }
        else if (uVar2 == 0x28) {
          *(undefined8 *)param_1 = 0;
          String::parse_latin1(param_1,"arm32");
          goto LAB_001009e9;
        }
      }
      else {
        if (uVar2 == 0xf3) {
          *(undefined8 *)param_1 = 0;
          String::parse_latin1(param_1,"rv64");
          goto LAB_001009e9;
        }
        if (uVar2 == 0x102) {
          *(undefined8 *)param_1 = 0;
          String::parse_latin1(param_1,"loongarch64");
          goto LAB_001009e9;
        }
        if (uVar2 == 0xb7) {
          *(undefined8 *)param_1 = 0;
          String::parse_latin1(param_1,"arm64");
          goto LAB_001009e9;
        }
      }
      *(undefined8 *)param_1 = 0;
      String::parse_latin1(param_1,"unknown");
      goto LAB_001009e9;
    }
  }
  *(undefined8 *)param_1 = 0;
  local_38 = "invalid";
  local_30 = 7;
  String::parse_latin1((StrRange *)param_1);
LAB_001009e9:
  if (local_40 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_40);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_40 + 0x140))(local_40);
        Memory::free_static(local_40,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformLinuxBSD::get_option_label(int) const */

String * EditorExportPlatformLinuxBSD::get_option_label(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "";
  local_40 = 0;
  if (in_EDX == 0) {
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Run on remote Linux/BSD system";
    local_40 = 0x1e;
  }
  else {
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Stop and uninstall";
    local_40 = 0x12;
  }
  local_58 = 0;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)CONCAT44(in_register_0000003c,param_1),(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (String *)CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformLinuxBSD::get_option_tooltip(int) const */

String * EditorExportPlatformLinuxBSD::get_option_tooltip(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "";
  local_40 = 0;
  if (in_EDX == 0) {
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Run exported project on remote Linux/BSD system";
    local_40 = 0x2f;
  }
  else {
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Stop and uninstall running project from the remote system";
    local_40 = 0x39;
  }
  local_58 = 0;
  String::parse_latin1((StrRange *)&local_58);
  TTR((String *)CONCAT44(in_register_0000003c,param_1),(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (String *)CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformLinuxBSD::get_binary_extensions(Ref<EditorExportPreset> const&) const */

Ref * EditorExportPlatformLinuxBSD::get_binary_extensions(Ref *param_1)

{
  bool *pbVar1;
  long *plVar2;
  long lVar3;
  CowData<char32_t> *pCVar4;
  undefined1 (*pauVar5) [16];
  undefined8 *in_RDX;
  long in_FS_OFFSET;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pbVar1 = (bool *)*in_RDX;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  StringName::StringName((StringName *)&local_70,"binary_format/architecture",false);
  Object::get((StringName *)local_58,pbVar1);
  Variant::operator_cast_to_String((Variant *)&local_68);
  if (*(long *)param_1 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  pCVar4 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar4 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar4 + 0x10) = (undefined1  [16])0x0;
  if (local_68 != (undefined *)0x0) {
    CowData<char32_t>::_ref(pCVar4,(CowData *)&local_68);
  }
  plVar2 = *(long **)param_1;
  lVar3 = plVar2[1];
  *(undefined8 *)(pCVar4 + 8) = 0;
  *(long **)(pCVar4 + 0x18) = plVar2;
  *(long *)(pCVar4 + 0x10) = lVar3;
  if (lVar3 != 0) {
    *(CowData<char32_t> **)(lVar3 + 8) = pCVar4;
  }
  plVar2[1] = (long)pCVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)pCVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  local_70 = 0;
  local_68 = &_LC43;
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_70);
  if (*(long *)param_1 == 0) {
    pauVar5 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar5;
    *(undefined4 *)pauVar5[1] = 0;
    *pauVar5 = (undefined1  [16])0x0;
  }
  pCVar4 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar4 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar4 + 0x10) = (undefined1  [16])0x0;
  if (local_70 != 0) {
    CowData<char32_t>::_ref(pCVar4,(CowData *)&local_70);
  }
  plVar2 = *(long **)param_1;
  lVar3 = plVar2[1];
  *(undefined8 *)(pCVar4 + 8) = 0;
  *(long **)(pCVar4 + 0x18) = plVar2;
  *(long *)(pCVar4 + 0x10) = lVar3;
  if (lVar3 != 0) {
    *(CowData<char32_t> **)(lVar3 + 8) = pCVar4;
  }
  plVar2[1] = (long)pCVar4;
  if (*plVar2 == 0) {
    *plVar2 = (long)pCVar4;
  }
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformLinuxBSD::_export_debug_script(Ref<EditorExportPreset> const&, String const&,
   String const&, String const&) */

undefined8
EditorExportPlatformLinuxBSD::_export_debug_script
          (Ref *param_1,String *param_2,String *param_3,String *param_4)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  undefined8 uVar4;
  CowData *in_R8;
  long in_FS_OFFSET;
  Object *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  String local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_98,(int)in_R8,(Error *)0x2);
  pOVar2 = local_98;
  if (local_98 == (Object *)0x0) {
    pcVar1 = *(code **)(*(long *)param_1 + 0x178);
    local_68 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,in_R8);
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"");
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"Could not open file \"%s\".");
    TTR(local_70,(String *)&local_80);
    vformat<String>((CowData<char32_t> *)&local_60,local_70,(CowData<char32_t> *)&local_68);
    local_88 = 0;
    String::parse_latin1((String *)&local_88,"");
    local_58 = "Debug Script Export";
    local_90 = 0;
    local_50 = 0x13;
    String::parse_latin1((StrRange *)&local_90);
    TTR((String *)&local_58,(String *)&local_90);
    uVar4 = 0x14;
    (*pcVar1)(param_1,3,(String *)&local_58,(CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    pcVar1 = *(code **)(*(long *)local_98 + 0x2b0);
    local_60 = 0;
    local_58 = "#!/bin/sh";
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_60);
    (*pcVar1)(pOVar2,(StrRange *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    pOVar2 = local_98;
    pcVar1 = *(code **)(*(long *)local_98 + 0x2b0);
    local_60 = 0;
    local_58 = "\\a\'";
    local_50 = 3;
    String::parse_latin1((StrRange *)&local_60);
    operator+((char *)&local_68,(String *)"echo -ne \'\\033c\\033]0;");
    String::operator+((String *)&local_58,(String *)&local_68);
    (*pcVar1)(pOVar2,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    pOVar2 = local_98;
    pcVar1 = *(code **)(*(long *)local_98 + 0x2b0);
    local_60 = 0;
    local_58 = "base_path=\"$(dirname \"$(realpath \"$0\")\")\"";
    local_50 = 0x29;
    String::parse_latin1((StrRange *)&local_60);
    (*pcVar1)(pOVar2,(StrRange *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    pOVar2 = local_98;
    pcVar1 = *(code **)(*(long *)local_98 + 0x2b0);
    local_60 = 0;
    local_58 = "\" \"$@\"";
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_60);
    operator+((char *)&local_68,(String *)"\"$base_path/");
    String::operator+((String *)&local_58,(String *)&local_68);
    (*pcVar1)(pOVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    uVar4 = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformLinuxBSD::is_elf(String const&) const */

ulong __thiscall
EditorExportPlatformLinuxBSD::is_elf(EditorExportPlatformLinuxBSD *this,String *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  Object *local_50;
  undefined8 local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_50,(int)param_1,(Error *)0x1);
  if (local_50 == (Object *)0x0) {
    local_40 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_40,(CowData *)param_1);
    local_38 = "Can\'t open file: \"%s\".";
    local_48 = 0;
    local_30 = 0x16;
    String::parse_latin1((StrRange *)&local_48);
    vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_48,
                    (CowData<char32_t> *)&local_40);
    _err_print_error("is_elf","platform/linuxbsd/export/export_plugin.cpp",0xcd,
                     "Condition \"fb.is_null()\" is true. Returning: false",
                     (CowData<char32_t> *)&local_38,0,0);
    uVar3 = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  else {
    iVar2 = (**(code **)(*(long *)local_50 + 0x1f0))();
    uVar3 = CONCAT71((int7)((ulong)param_1 >> 8),iVar2 == 0x464c457f);
  }
  if (local_50 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_50);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_50 + 0x140))(local_50);
        Memory::free_static(local_50,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformLinuxBSD::is_shebang(String const&) const */

ulong __thiscall
EditorExportPlatformLinuxBSD::is_shebang(EditorExportPlatformLinuxBSD *this,String *param_1)

{
  char cVar1;
  short sVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  Object *local_50;
  undefined8 local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_50,(int)param_1,(Error *)0x1);
  if (local_50 == (Object *)0x0) {
    local_40 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_40,(CowData *)param_1);
    local_38 = "Can\'t open file: \"%s\".";
    local_48 = 0;
    local_30 = 0x16;
    String::parse_latin1((StrRange *)&local_48);
    vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_48,
                    (CowData<char32_t> *)&local_40);
    _err_print_error("is_shebang","platform/linuxbsd/export/export_plugin.cpp",0xd4,
                     "Condition \"fb.is_null()\" is true. Returning: false",
                     (CowData<char32_t> *)&local_38,0,0);
    uVar3 = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  else {
    sVar2 = (**(code **)(*(long *)local_50 + 0x1e8))();
    uVar3 = CONCAT71((int7)((ulong)param_1 >> 8),sVar2 == 0x2123);
  }
  if (local_50 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_50);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_50 + 0x140))(local_50);
        Memory::free_static(local_50,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformLinuxBSD::is_executable(String const&) const */

void __thiscall
EditorExportPlatformLinuxBSD::is_executable(EditorExportPlatformLinuxBSD *this,String *param_1)

{
  char cVar1;
  
  cVar1 = is_elf(this,param_1);
  if (cVar1 != '\0') {
    return;
  }
  is_shebang(this,param_1);
  return;
}



/* EditorExportPlatformLinuxBSD::has_valid_export_configuration(Ref<EditorExportPreset> const&,
   String&, bool&, bool) const */

undefined1
EditorExportPlatformLinuxBSD::has_valid_export_configuration
          (Ref *param_1,String *param_2,bool *param_3,bool param_4)

{
  bool *pbVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long in_FS_OFFSET;
  long local_c0;
  long local_b8;
  long local_b0;
  Variant local_a8 [8];
  String local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  String local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  CowData<char32_t> local_70 [8];
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  uVar2 = EditorExportPlatformPC::has_valid_export_configuration
                    (param_1,param_2,(bool *)&local_c0,param_4);
  pbVar1 = *(bool **)param_2;
  StringName::StringName((StringName *)&local_68,"custom_template/debug",false);
  Object::get((StringName *)local_58,pbVar1);
  Variant::operator_cast_to_String((Variant *)&local_60);
  bVar4 = SUB81((Variant *)&local_60,0);
  String::strip_edges(SUB81((String *)&local_b8,0),bVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  pbVar1 = *(bool **)param_2;
  StringName::StringName((StringName *)&local_68,"custom_template/release",false);
  Object::get((StringName *)local_58,pbVar1);
  Variant::operator_cast_to_String((Variant *)&local_60);
  String::strip_edges(SUB81((CowData<char32_t> *)&local_b0,0),bVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  pbVar1 = *(bool **)param_2;
  StringName::StringName((StringName *)&local_60,"binary_format/architecture",false);
  Object::get((StringName *)local_58,pbVar1);
  Variant::operator_cast_to_String(local_a8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if ((local_b8 != 0) && (1 < *(uint *)(local_b8 + -8))) {
    cVar3 = FileAccess::exists((String *)&local_b8);
    if (cVar3 != '\0') {
      _get_exe_arch(local_a0);
      cVar3 = String::operator!=((String *)local_a8,local_a0);
      if (cVar3 != '\0') {
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"\n");
        local_78 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)local_a8);
        local_80 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)local_a0);
        local_90 = 0;
        String::parse_latin1((String *)&local_90,"");
        local_98 = 0;
        String::parse_latin1
                  ((String *)&local_98,
                   "Mismatching custom debug export template executable architecture: found \"%s\", expected \"%s\"."
                  );
        TTR(local_88,(String *)&local_98);
        vformat<String,String>
                  (local_70,local_88,(CowData<char32_t> *)&local_80,(CowData<char32_t> *)&local_78);
        String::operator+((String *)&local_60,(String *)local_70);
        String::operator+=((String *)&local_c0,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref(local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    }
  }
  if ((local_b0 != 0) && (1 < *(uint *)(local_b0 + -8))) {
    cVar3 = FileAccess::exists((String *)&local_b0);
    if (cVar3 != '\0') {
      _get_exe_arch(local_a0);
      cVar3 = String::operator!=((String *)local_a8,local_a0);
      if (cVar3 != '\0') {
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"\n");
        local_78 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)local_a8);
        local_80 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)local_a0);
        local_90 = 0;
        String::parse_latin1((String *)&local_90,"");
        local_98 = 0;
        String::parse_latin1
                  ((String *)&local_98,
                   "Mismatching custom release export template executable architecture: found \"%s\", expected \"%s\"."
                  );
        TTR(local_88,(String *)&local_98);
        vformat<String,String>
                  (local_70,local_88,(CowData<char32_t> *)&local_80,(CowData<char32_t> *)&local_78);
        String::operator+((String *)&local_60,(String *)local_70);
        String::operator+=((String *)&local_c0,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref(local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    }
  }
  if ((local_c0 != 0) && (1 < *(uint *)(local_c0 + -8))) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_c0);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformLinuxBSD::fixup_embedded_pck(String const&, long, long) */

undefined8 __thiscall
EditorExportPlatformLinuxBSD::fixup_embedded_pck
          (EditorExportPlatformLinuxBSD *this,String *param_1,long param_2,long param_3)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  code *local_a8;
  Object *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_88,(int)param_1,(Error *)0x3);
  if (local_88 == (Object *)0x0) {
    pcVar1 = *(code **)(*(long *)this + 0x178);
    local_50 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)param_1);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"");
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"Failed to open executable file \"%s\".");
    TTR((String *)&local_58,(String *)&local_68);
    vformat<String>((CowData<char32_t> *)local_48,(String *)&local_58,(CowData<char32_t> *)&local_50
                   );
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"");
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"PCK Embedding");
    TTR((String *)&local_70,(String *)&local_80);
    (*pcVar1)(this,3,(String *)&local_70,(CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    uVar12 = 0x13;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    goto LAB_00102103;
  }
  iVar6 = (**(code **)(*(long *)local_88 + 0x1f0))();
  if (iVar6 == 0x464c457f) {
    cVar3 = (**(code **)(*(long *)local_88 + 0x1e0))();
    if ((cVar3 == '\x01') && (0xffffffff < param_3)) {
      pcVar1 = *(code **)(*(long *)this + 0x178);
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1
                ((String *)&local_58,"32-bit executables cannot have embedded data >= 4 GiB.");
      TTR(local_48,(String *)&local_58);
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"");
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"PCK Embedding");
      TTR((String *)&local_60,(String *)&local_70);
      (*pcVar1)(this,3,(String *)&local_60,local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00101dfd:
      lVar14 = 0x28;
      (**(code **)(*(long *)local_88 + 0x1b8))(local_88,0x20);
      uVar7 = (**(code **)(*(long *)local_88 + 0x1f0))();
      uVar15 = (ulong)uVar7;
      (**(code **)(*(long *)local_88 + 0x1b8))(local_88,0x30);
    }
    else {
      if (cVar3 == '\x01') goto LAB_00101dfd;
      lVar14 = 0x40;
      (**(code **)(*(long *)local_88 + 0x1b8))(local_88,0x28);
      uVar15 = (**(code **)(*(long *)local_88 + 0x1f8))();
      (**(code **)(*(long *)local_88 + 0x1b8))(local_88,0x3c);
    }
    uVar4 = (**(code **)(*(long *)local_88 + 0x1e8))();
    uVar5 = (**(code **)(*(long *)local_88 + 0x1e8))();
    (**(code **)(*(long *)local_88 + 0x1b8))(local_88,(ulong)uVar5 * lVar14 + uVar15);
    pOVar2 = local_88;
    lVar9 = *(long *)local_88;
    pcVar1 = *(code **)(lVar9 + 0x1b8);
    if (cVar3 == '\x01') {
      lVar9 = (**(code **)(lVar9 + 0x1c8))(local_88);
      (*pcVar1)(pOVar2,lVar9 + 0x10);
      (**(code **)(*(long *)local_88 + 0x1f0))();
      uVar7 = (**(code **)(*(long *)local_88 + 0x1f0))();
      uVar10 = (ulong)uVar7;
    }
    else {
      lVar9 = (**(code **)(lVar9 + 0x1c8))();
      (*pcVar1)(pOVar2,lVar9 + 0x18);
      (**(code **)(*(long *)local_88 + 0x1f8))();
      uVar10 = (**(code **)(*(long *)local_88 + 0x1f8))();
    }
    (**(code **)(*(long *)local_88 + 0x1b8))();
    pvVar11 = (void *)Memory::alloc_static(uVar10,false);
    if (pvVar11 == (void *)0x0) {
      uVar12 = 6;
      goto LAB_00102103;
    }
    uVar7 = 0;
    (**(code **)(*(long *)local_88 + 0x220))(local_88,pvVar11,uVar10);
    if (uVar4 != 0) {
      do {
        (**(code **)(*(long *)local_88 + 0x1b8))(local_88,uVar15);
        uVar8 = (**(code **)(*(long *)local_88 + 0x1f0))();
        iVar6 = strcmp((char *)((ulong)uVar8 + (long)pvVar11),"pck");
        if (iVar6 == 0) {
          if (cVar3 == '\x01') {
            uVar12 = 0;
            (**(code **)(*(long *)local_88 + 0x1b8))(local_88,uVar15 + 0x10);
            (**(code **)(*(long *)local_88 + 0x278))(local_88,param_2 & 0xffffffff);
            (**(code **)(*(long *)local_88 + 0x278))();
            Memory::free_static(pvVar11,false);
          }
          else {
            uVar12 = 0;
            (**(code **)(*(long *)local_88 + 0x1b8))(local_88,uVar15 + 0x18);
            (**(code **)(*(long *)local_88 + 0x280))(local_88,param_2);
            (**(code **)(*(long *)local_88 + 0x280))();
            Memory::free_static(pvVar11,false);
          }
          goto LAB_00102103;
        }
        uVar7 = uVar7 + 1;
        uVar15 = uVar15 + lVar14;
      } while (uVar4 != uVar7);
    }
    Memory::free_static(pvVar11,false);
    local_a8 = *(code **)(*(long *)this + 0x178);
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    pcVar13 = "Executable \"pck\" section not found.";
  }
  else {
    local_a8 = *(code **)(*(long *)this + 0x178);
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"");
    pcVar13 = "Executable file header corrupted.";
  }
  local_58 = 0;
  String::parse_latin1((String *)&local_58,pcVar13);
  TTR(local_48,(String *)&local_58);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"PCK Embedding");
  TTR((String *)&local_60,(String *)&local_70);
  (*local_a8)(this,3,(String *)&local_60,local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  uVar12 = 0x10;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00102103:
  if (((local_88 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
     (cVar3 = predelete_handler(local_88), cVar3 != '\0')) {
    (**(code **)(*(long *)local_88 + 0x140))(local_88);
    Memory::free_static(local_88,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



/* EditorExportPlatformLinuxBSD::get_export_options(List<EditorExportPlatform::ExportOption,
   DefaultAllocator>*) const */

void __thiscall
EditorExportPlatformLinuxBSD::get_export_options(EditorExportPlatformLinuxBSD *this,List *param_1)

{
  long in_FS_OFFSET;
  StringName *local_160;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  long local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  int local_b8 [8];
  undefined4 local_98 [2];
  undefined8 local_90;
  long local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  int local_68 [6];
  undefined2 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorExportPlatformPC::get_export_options((List *)this);
  Variant::Variant((Variant *)local_b8,"x86_64");
  local_e8 = "x86_64,x86_32,arm64,arm32,rv64,ppc64,ppc32,loongarch64";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0x36;
  String::parse_latin1((StrRange *)&local_100);
  local_e8 = "binary_format/architecture";
  local_108 = 0;
  local_e0 = 0x1a;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,4);
  local_e0 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_108);
  }
  local_d8 = 0;
  local_d0 = 2;
  local_c8 = 0;
  if (local_100 == 0) {
LAB_0010255b:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,(StringName *)&local_f8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_100);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_0010255b;
    StringName::StringName((StringName *)&local_f0,(String *)&local_c8,false);
    if (local_d8 == local_f0) {
      if ((StringName::configured != '\0') && (local_f0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f0;
    }
  }
  local_160 = (StringName *)&local_d8;
  local_90 = 0;
  local_98[0] = local_e8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  StringName::StringName((StringName *)&local_88,local_160);
  local_78 = 0;
  local_80 = local_d0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_118 = 0;
  local_e8 = 
  "#!/usr/bin/env bash\nexport DISPLAY=:0\nunzip -o -q \"{temp_dir}/{archive_name}\" -d \"{temp_dir}\"\n\"{temp_dir}/{exe_name}\" {cmd_args}"
  ;
  local_e0 = 0x80;
  String::parse_latin1((StrRange *)&local_118);
  local_110 = 0;
  local_e8 = 
  "#!/usr/bin/env bash\nkill $(pgrep -x -f \"{temp_dir}/{exe_name} {cmd_args}\")\nrm -rf \"{temp_dir}\""
  ;
  local_e0 = 0x5e;
  String::parse_latin1((StrRange *)&local_110);
  Variant::Variant((Variant *)local_b8,false);
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "ssh_remote_deploy/enabled";
  local_e0 = 0x19;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,1);
  local_e0 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_108);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  if (local_100 == 0) {
LAB_00102893:
    local_c0 = 6;
    StringName::operator=(local_160,(StringName *)&local_f8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_100);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00102893;
    StringName::StringName((StringName *)&local_f0,(String *)&local_c8,false);
    if (local_d8 == local_f0) {
      if ((StringName::configured != '\0') && (local_f0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f0;
    }
  }
  local_90 = 0;
  local_98[0] = local_e8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  StringName::StringName((StringName *)&local_88,local_160);
  local_78 = 0;
  local_80 = local_d0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 1;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"user@host_ip");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "ssh_remote_deploy/host";
  local_e0 = 0x16;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,4);
  local_e0 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_108);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  if (local_100 == 0) {
LAB_00102b1b:
    local_c0 = 6;
    StringName::operator=(local_160,(StringName *)&local_f8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_100);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00102b1b;
    StringName::StringName((StringName *)&local_f0,(String *)&local_c8,false);
    if (local_d8 == local_f0) {
      if ((StringName::configured != '\0') && (local_f0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f0;
    }
  }
  local_90 = 0;
  local_98[0] = local_e8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  StringName::StringName((StringName *)&local_88,local_160);
  local_78 = 0;
  local_80 = local_d0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"22");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "ssh_remote_deploy/port";
  local_e0 = 0x16;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,4);
  local_e0 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_108);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  if (local_100 == 0) {
LAB_00102da3:
    local_c0 = 6;
    StringName::operator=(local_160,(StringName *)&local_f8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_100);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00102da3;
    StringName::StringName((StringName *)&local_f0,(String *)&local_c8,false);
    if (local_d8 == local_f0) {
      if ((StringName::configured != '\0') && (local_f0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f0;
    }
  }
  local_90 = 0;
  local_98[0] = local_e8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  StringName::StringName((StringName *)&local_88,local_160);
  local_78 = 0;
  local_80 = local_d0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "ssh_remote_deploy/extra_args_ssh";
  local_e0 = 0x20;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,4);
  local_e0 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_108);
  }
  local_d8 = 0;
  local_d0 = 0x12;
  local_c8 = 0;
  if (local_100 == 0) {
LAB_0010302b:
    local_c0 = 6;
    StringName::operator=(local_160,(StringName *)&local_f8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_100);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_0010302b;
    StringName::StringName((StringName *)&local_f0,(String *)&local_c8,false);
    if (local_d8 == local_f0) {
      if ((StringName::configured != '\0') && (local_f0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f0;
    }
  }
  local_90 = 0;
  local_98[0] = local_e8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  StringName::StringName((StringName *)&local_88,local_160);
  local_78 = 0;
  local_80 = local_d0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "ssh_remote_deploy/extra_args_scp";
  local_e0 = 0x20;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,4);
  local_e0 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_108);
  }
  local_d8 = 0;
  local_d0 = 0x12;
  local_c8 = 0;
  if (local_100 == 0) {
LAB_001032ab:
    local_c0 = 6;
    StringName::operator=(local_160,(StringName *)&local_f8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_100);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_001032ab;
    StringName::StringName((StringName *)&local_f0,(String *)&local_c8,false);
    if (local_d8 == local_f0) {
      if ((StringName::configured != '\0') && (local_f0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f0;
    }
  }
  local_90 = 0;
  local_98[0] = local_e8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  StringName::StringName((StringName *)&local_88,local_160);
  local_78 = 0;
  local_80 = local_d0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,(String *)&local_118);
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "ssh_remote_deploy/run_script";
  local_e0 = 0x1c;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,4);
  local_e0 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_108);
  }
  local_d8 = 0;
  local_d0 = 0x12;
  local_c8 = 0;
  if (local_100 == 0) {
LAB_0010352b:
    local_c0 = 6;
    StringName::operator=(local_160,(StringName *)&local_f8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_100);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_0010352b;
    StringName::StringName((StringName *)&local_f0,(String *)&local_c8,false);
    if (local_d8 == local_f0) {
      if ((StringName::configured != '\0') && (local_f0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_d8 = local_f0;
    }
  }
  local_90 = 0;
  local_98[0] = local_e8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  StringName::StringName((StringName *)&local_88,local_160);
  local_78 = 0;
  local_80 = local_d0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,(String *)&local_110);
  local_e8 = "";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "ssh_remote_deploy/cleanup_script";
  local_e0 = 0x20;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,4);
  local_e0 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_108);
  }
  local_d8 = 0;
  local_d0 = 0x12;
  local_c8 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_100);
    local_c0 = 6;
    if (local_d0 == 0x11) {
      StringName::StringName((StringName *)&local_f0,(String *)&local_c8,false);
      if (local_d8 == local_f0) {
        if ((StringName::configured != '\0') && (local_f0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_d8 = local_f0;
      }
      goto LAB_001037bd;
    }
  }
  local_c0 = 6;
  StringName::operator=(local_160,(StringName *)&local_f8);
LAB_001037bd:
  local_90 = 0;
  local_98[0] = local_e8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  StringName::StringName((StringName *)&local_88,local_160);
  local_78 = 0;
  local_80 = local_d0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 0;
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::push_back
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)param_1,
             (ExportOption *)local_98);
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorExportPlatformLinuxBSD::export_project(Ref<EditorExportPreset> const&, bool, String const&,
   BitField<EditorExportPlatform::DebugFlags>) */

int __thiscall
EditorExportPlatformLinuxBSD::export_project
          (EditorExportPlatformLinuxBSD *this,String *param_1,byte param_2,CowData *param_3,
          undefined8 param_5)

{
  bool *pbVar1;
  code *pcVar2;
  Object *pOVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  String *local_190;
  CowData<char32_t> *local_188;
  Variant local_120 [8];
  Variant local_118 [8];
  Variant local_110 [8];
  char *local_108;
  char *local_100;
  char *local_f8;
  String local_f0 [8];
  Object *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  int local_58 [6];
  long local_40;
  
  pbVar1 = *(bool **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_a8,"custom_template/debug",false);
  Object::get((StringName *)local_58,pbVar1);
  Variant::operator_cast_to_String(local_120);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  pbVar1 = *(bool **)param_1;
  StringName::StringName((StringName *)&local_a8,"custom_template/release",false);
  Object::get((StringName *)local_58,pbVar1);
  Variant::operator_cast_to_String(local_118);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  pbVar1 = *(bool **)param_1;
  StringName::StringName((StringName *)&local_a8,"binary_format/architecture",false);
  Object::get((StringName *)local_58,pbVar1);
  Variant::operator_cast_to_String(local_110);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  local_108 = (char *)0x0;
  pVVar12 = local_120;
  if (param_2 == 0) {
    pVVar12 = local_118;
  }
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)pVVar12);
  String::strip_edges(SUB81((StringName *)&local_a8,0),SUB81((CowData<char32_t> *)&local_108,0));
  if (local_108 != local_a8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    local_108 = local_a8;
    local_a8 = (char *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if ((local_108 != (char *)0x0) && (1 < *(uint *)(local_108 + -8))) {
    _get_exe_arch(local_f0);
    cVar5 = String::operator!=((String *)local_110,local_f0);
    if (cVar5 != '\0') {
      pcVar2 = *(code **)(*(long *)this + 0x178);
      local_b0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)local_110);
      local_b8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)local_f0);
      local_c8 = 0;
      String::parse_latin1((String *)&local_c8,"");
      local_d0 = 0;
      String::parse_latin1
                ((String *)&local_d0,
                 "Mismatching custom export template executable architecture, found \"%s\", expected \"%s\"."
                );
      TTR((String *)&local_c0,(String *)&local_d0);
      vformat<String,String>
                ((StringName *)&local_a8,(String *)&local_c0,(CowData<char32_t> *)&local_b8,
                 (CowData<char32_t> *)&local_b0);
      local_e0 = 0;
      String::parse_latin1((String *)&local_e0,"");
      local_e8 = (Object *)0x0;
      String::parse_latin1((String *)&local_e8,"Prepare Templates");
      TTR((String *)&local_d8,(String *)&local_e8);
      (*pcVar2)(this,3,(String *)&local_d8,(StringName *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      iVar8 = 0x14;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      goto LAB_001040d8;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  }
  local_190 = local_f0;
  cVar5 = String::ends_with((char *)param_3);
  local_100 = (char *)0x0;
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_b0,"application/config/name",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_a8);
  cVar6 = String::operator!=((String *)&local_a8,"");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  if (cVar6 == '\0') {
    local_a0 = 7;
    local_a8 = "Unnamed";
    String::parse_latin1((StrRange *)&local_100);
  }
  else {
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_b0,"application/config/name",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    Variant::operator_cast_to_String((Variant *)&local_a8);
    if (local_100 != local_a8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      local_100 = local_a8;
      local_a8 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
  }
  local_188 = (CowData<char32_t> *)&local_100;
  bVar7 = (bool)OS::get_singleton();
  OS::get_safe_dir_name((String *)&local_a8,bVar7);
  if (local_100 != local_a8) {
    CowData<char32_t>::_unref(local_188);
    local_100 = local_a8;
    local_a8 = (char *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  local_f8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,param_3);
  EditorPaths::get_temp_dir();
  String::path_join(local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  DirAccess::create_for_path((String *)&local_e8);
  if (cVar5 == '\0') {
LAB_00103fe7:
    iVar8 = EditorExportPlatformPC::export_project
                      (this,param_1,param_2,(CowData<char32_t> *)&local_f8,param_5);
    if (iVar8 == 0) {
      pbVar1 = *(bool **)param_1;
      StringName::StringName((StringName *)&local_a8,"debug/export_console_wrapper",false);
      Object::get((StringName *)local_58,pbVar1);
      iVar9 = Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      if (((param_2 & iVar9 == 1) != 0) || (iVar9 == 2)) {
        local_a8 = (char *)0x0;
        String::parse_latin1((String *)&local_a8,".sh");
        String::get_basename();
        String::operator+((String *)&local_d8,(String *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        String::get_file();
        iVar8 = _export_debug_script((Ref *)this,param_1,(String *)local_188,(String *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        FileAccess::set_unix_permissions((String *)&local_d8);
        if (iVar8 != 0) {
          pcVar2 = *(code **)(*(long *)this + 0x178);
          local_b0 = 0;
          String::parse_latin1((String *)&local_b0,"");
          local_b8 = 0;
          String::parse_latin1((String *)&local_b8,"Could not create console wrapper.");
          TTR((String *)&local_a8,(String *)&local_b8);
          local_c8 = 0;
          String::parse_latin1((String *)&local_c8,"");
          local_d0 = 0;
          String::parse_latin1((String *)&local_d0,"Debug Console Export");
          TTR((String *)&local_c0,(String *)&local_d0);
          (*pcVar2)(this,3,(String *)&local_c0,(StringName *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      }
      if (cVar5 != '\0') {
        cVar5 = FileAccess::exists((String *)param_3);
        if (cVar5 != '\0') {
          plVar11 = (long *)OS::get_singleton();
          if (*(code **)(*plVar11 + 0x2c0) != OS::move_to_trash) {
            (**(code **)(*plVar11 + 0x2c0))(plVar11,param_3);
          }
        }
        local_c0 = 0;
        zipio_create_io((Ref *)&local_a8);
        String::utf8();
        uVar10 = CharString::get_data();
        local_b8 = zipOpen2(uVar10,0,0,(StringName *)&local_a8);
        lVar4 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar11 = (long *)(local_b0 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        pcVar2 = *(code **)(*(long *)this + 0x150);
        local_b0 = 0;
        String::parse_latin1((String *)&local_b0,"");
        (*pcVar2)(this,&local_b8,local_190,(StringName *)&local_b0,local_188);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        zipClose(local_b8,0);
        pOVar3 = local_e8;
        pcVar2 = *(code **)(*(long *)local_e8 + 0x1a8);
        local_b0 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)local_190);
        iVar9 = (*pcVar2)(pOVar3);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if (iVar9 == 0) {
          (**(code **)(*(long *)local_e8 + 0x1c8))();
          pOVar3 = local_e8;
          pcVar2 = *(code **)(*(long *)local_e8 + 0x1a8);
          local_b0 = 0;
          String::parse_latin1((String *)&local_b0,"..");
          (*pcVar2)(pOVar3,(StringName *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          pOVar3 = local_e8;
          pcVar2 = *(code **)(*(long *)local_e8 + 0x208);
          local_b0 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)local_188);
          (*pcVar2)(pOVar3);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        }
        Ref<FileAccess>::unref((Ref<FileAccess> *)&local_c0);
      }
    }
  }
  else {
    if (local_e8 != (Object *)0x0) {
      cVar6 = DirAccess::exists(local_190);
      pOVar3 = local_e8;
      if (cVar6 != '\0') {
        pcVar2 = *(code **)(*(long *)local_e8 + 0x1a8);
        local_a8 = (char *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_190);
        iVar8 = (*pcVar2)(pOVar3,(StringName *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        if (iVar8 == 0) {
          (**(code **)(*(long *)local_e8 + 0x1c8))();
        }
      }
      (**(code **)(*(long *)local_e8 + 0x1c0))(local_e8,local_190);
      String::get_file();
      String::get_basename();
      String::path_join((String *)&local_a8);
      if (local_f8 != local_a8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        local_f8 = local_a8;
        local_a8 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      goto LAB_00103fe7;
    }
    pcVar2 = *(code **)(*(long *)this + 0x178);
    local_b0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)local_190);
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"");
    local_c8 = 0;
    String::parse_latin1((String *)&local_c8,"Could not create and open the directory: \"%s\"");
    TTR((String *)&local_b8,(String *)&local_c8);
    vformat<String>((StringName *)&local_a8,(String *)&local_b8,(StringName *)&local_b0);
    local_d8 = 0;
    String::parse_latin1((String *)&local_d8,"");
    local_e0 = 0;
    String::parse_latin1((String *)&local_e0,"Prepare Templates");
    TTR((String *)&local_d0,(String *)&local_e0);
    (*pcVar2)(this,3,(String *)&local_d0,(StringName *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    iVar8 = 0x14;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  }
  if (((local_e8 != (Object *)0x0) &&
      (cVar5 = RefCounted::unreference(), pOVar3 = local_e8, cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_e8), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_190);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref(local_188);
LAB_001040d8:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

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



/* EditorExportPlatformLinuxBSD::EditorExportPlatformLinuxBSD() */

void __thiscall
EditorExportPlatformLinuxBSD::EditorExportPlatformLinuxBSD(EditorExportPlatformLinuxBSD *this)

{
  uint uVar1;
  code *pcVar2;
  Image *pIVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  ImageTexture *this_00;
  Object *pOVar7;
  Object *pOVar8;
  void *pvVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
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
  bVar11 = EditorNode::singleton == 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a8) = 0xffffffff;
  *(undefined ***)this = &PTR__initialize_classv_0010e608;
  *(undefined8 *)(this + 0x1d8) = 2;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e0) = (undefined1  [16])0x0;
  if (bVar11) goto LAB_00105020;
  local_98 = (Image *)operator_new(0x268,"");
  Resource::Resource((Resource *)local_98);
  ((Resource *)local_98)[0x260] = (Resource)0x0;
  *(code **)local_98 = Memory::free_static;
  *(undefined4 *)((Resource *)local_98 + 0x240) = 0;
  *(undefined8 *)((Resource *)local_98 + 0x250) = 0;
  *(undefined8 *)((Resource *)local_98 + 600) = 0;
  postinitialize_handler((Object *)local_98);
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
    local_98 = (Image *)0x0;
  }
  fVar12 = (float)EditorScale::get_scale();
  fVar13 = (float)EditorScale::get_scale();
  fVar13 = roundf(fVar13);
  bVar11 = false;
  if (fVar12 != fVar13) {
    fVar15 = _LC93;
    if (_LC93 <= ABS(fVar13) * _LC93) {
      fVar15 = ABS(fVar13) * _LC93;
    }
    bVar11 = fVar15 <= ABS(fVar13 - fVar12);
  }
  local_50 = 0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  uVar14 = EditorScale::get_scale();
  local_90 = 0;
  local_88 = (Image *)&_LC94;
  local_80 = 0x65f;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = (Image *)0x0;
  if (local_98 != (Image *)0x0) {
    local_88 = local_98;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      local_88 = (Image *)0x0;
    }
  }
  ImageLoaderSVG::create_image_from_string
            (uVar14,(Ref *)&local_88,(StrRange *)&local_90,bVar11,(Ref *)&local_78);
  if ((local_88 != (Image *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    memdelete<Image>(local_88);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((void *)local_70._0_8_ != (void *)0x0) {
    pvVar9 = (void *)local_70._0_8_;
    if (local_50._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
      }
      else {
        lVar10 = 0;
        do {
          if (*(int *)(local_70._8_8_ + lVar10) != 0) {
            *(int *)(local_70._8_8_ + lVar10) = 0;
            Memory::free_static(*(void **)((long)pvVar9 + lVar10 * 2),false);
            *(undefined8 *)(local_70._0_8_ + lVar10 * 2) = 0;
            pvVar9 = (void *)local_70._0_8_;
          }
          lVar10 = lVar10 + 4;
        } while ((ulong)uVar1 << 2 != lVar10);
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00104d4f;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static((void *)local_70._8_8_,false);
  }
LAB_00104d4f:
  ImageTexture::create_from_image((Ref *)&local_88);
  local_78 = (Object *)0x0;
  if (((local_88 != (Image *)0x0) &&
      (pOVar6 = (Object *)__dynamic_cast(local_88,&Object::typeinfo,&Texture2D::typeinfo,0),
      pOVar6 != (Object *)0x0)) &&
     (local_78 = pOVar6, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    local_78 = (Object *)0x0;
  }
  EditorExportPlatformPC::set_logo((Ref *)this);
  if (((local_78 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar6 = local_78, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_78), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))();
    Memory::free_static(pOVar6,false);
  }
  if (((local_88 != (Image *)0x0) &&
      (cVar4 = RefCounted::unreference(), pIVar3 = local_88, cVar4 != '\0')) &&
     (cVar4 = predelete_handler((Object *)local_88), cVar4 != '\0')) {
    (**(code **)(*(long *)pIVar3 + 0x140))();
    Memory::free_static(pIVar3,false);
  }
  local_50 = 0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  uVar14 = EditorScale::get_scale();
  local_90 = 0;
  local_88 = (Image *)0x10a6c0;
  local_80 = 0x58e;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = (Image *)0x0;
  if (local_98 != (Image *)0x0) {
    local_88 = local_98;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      local_88 = (Image *)0x0;
    }
  }
  ImageLoaderSVG::create_image_from_string
            (uVar14,(Ref *)&local_88,(StrRange *)&local_90,bVar11,(Ref *)&local_78);
  if ((local_88 != (Image *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    memdelete<Image>(local_88);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((void *)local_70._0_8_ != (void *)0x0) {
    pvVar9 = (void *)local_70._0_8_;
    if (local_50._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
      }
      else {
        lVar10 = 0;
        do {
          if (*(int *)(local_70._8_8_ + lVar10) != 0) {
            *(int *)(local_70._8_8_ + lVar10) = 0;
            Memory::free_static(*(void **)((long)pvVar9 + lVar10 * 2),false);
            *(undefined8 *)(local_70._0_8_ + lVar10 * 2) = 0;
            pvVar9 = (void *)local_70._0_8_;
          }
          lVar10 = lVar10 + 4;
        } while (lVar10 != (ulong)uVar1 << 2);
        local_50 = local_50 & 0xffffffff;
        local_60 = (undefined1  [16])0x0;
        if (pvVar9 == (void *)0x0) goto LAB_00104f0f;
      }
    }
    Memory::free_static(pvVar9,false);
    Memory::free_static((void *)local_70._8_8_,false);
  }
LAB_00104f0f:
  ImageTexture::create_from_image((Ref *)&local_78);
  pOVar6 = *(Object **)(this + 0x1e0);
  pOVar8 = pOVar6;
  if (local_78 == pOVar6) {
LAB_00104f69:
    if (((pOVar8 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar6 = local_78, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_78), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
  else {
    *(Object **)(this + 0x1e0) = local_78;
    if (local_78 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x1e0) = 0;
      }
      pOVar8 = local_78;
      if (pOVar6 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        goto joined_r0x00104f5e;
      }
      goto LAB_00104f69;
    }
    if (pOVar6 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
joined_r0x00104f5e:
      pOVar8 = local_78;
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), pOVar8 = local_78, cVar4 != '\0'))
      {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
        pOVar8 = local_78;
      }
      goto LAB_00104f69;
    }
  }
  pOVar6 = *(Object **)(EditorNode::singleton + 0x838);
  if ((pOVar6 == (Object *)0x0) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    this_00 = (ImageTexture *)operator_new(0x318,"");
    ImageTexture::ImageTexture(this_00);
    postinitialize_handler((Object *)this_00);
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') {
      pOVar6 = *(Object **)(this + 0x1e8);
      if (pOVar6 != (Object *)0x0) {
        *(undefined8 *)(this + 0x1e8) = 0;
        goto LAB_00104ff0;
      }
    }
    else {
      pOVar6 = *(Object **)(this + 0x1e8);
      pOVar8 = pOVar6;
      if (this_00 != (ImageTexture *)pOVar6) {
        *(ImageTexture **)(this + 0x1e8) = this_00;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)(this + 0x1e8) = 0;
        }
        pOVar8 = (Object *)this_00;
        if (((pOVar6 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
  }
  else {
    pcVar2 = *(code **)(*(long *)pOVar6 + 0x1c8);
    lVar10 = EditorStringNames::singleton + 0x10;
    if ((EditorExportPlatformLinuxBSD()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar5 = __cxa_guard_acquire(&EditorExportPlatformLinuxBSD()::{lambda()#1}::operator()()::
                                     sname), iVar5 != 0)) {
      _scs_create((char *)&EditorExportPlatformLinuxBSD()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &EditorExportPlatformLinuxBSD()::{lambda()#1}::operator()()::sname,&__dso_handle)
      ;
      __cxa_guard_release(&EditorExportPlatformLinuxBSD()::{lambda()#1}::operator()()::sname);
    }
    (*pcVar2)((Ref *)&local_78,pOVar6,
              &EditorExportPlatformLinuxBSD()::{lambda()#1}::operator()()::sname,lVar10);
    if (local_78 == (Object *)0x0) {
      pOVar8 = *(Object **)(this + 0x1e8);
      if (pOVar8 != (Object *)0x0) {
        *(undefined8 *)(this + 0x1e8) = 0;
        goto LAB_00105341;
      }
    }
    else {
      pOVar7 = (Object *)__dynamic_cast(local_78,&Object::typeinfo,&ImageTexture::typeinfo,0);
      pOVar8 = *(Object **)(this + 0x1e8);
      if (pOVar8 != pOVar7) {
        *(Object **)(this + 0x1e8) = pOVar7;
        if (pOVar7 == (Object *)0x0) {
          if (pOVar8 != (Object *)0x0) goto LAB_00105341;
        }
        else {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *(undefined8 *)(this + 0x1e8) = 0;
          }
          if (pOVar8 != (Object *)0x0) {
LAB_00105341:
            cVar4 = RefCounted::unreference();
            if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar8), cVar4 != '\0')) {
              (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
              Memory::free_static(pOVar8,false);
            }
          }
          if (local_78 == (Object *)0x0) goto LAB_00104ff0;
        }
      }
      cVar4 = RefCounted::unreference();
      pOVar8 = local_78;
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(local_78), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
    }
LAB_00104ff0:
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
  if ((local_98 != (Image *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    memdelete<Image>(local_98);
  }
LAB_00105020:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_copy_on_write
          (CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData *pCVar4;
  CowData<char32_t> *this_00;
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
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        pCVar4 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar3));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar4 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar4);
        }
        *(undefined8 *)(this_00 + 8) = 0;
        if (*(long *)(pCVar4 + 8) != 0) {
          CowData<char32_t>::_ref(this_00 + 8,pCVar4 + 8);
        }
        *(undefined8 *)(this_00 + 0x18) = 0;
        if (*(long *)(pCVar4 + 0x18) != 0) {
          CowData<String>::_ref((CowData<String> *)(this_00 + 0x18),pCVar4 + 0x18);
        }
        *(undefined8 *)(this_00 + 0x20) = 0;
        if (*(long *)(pCVar4 + 0x20) != 0) {
          CowData<char32_t>::_ref(this_00 + 0x20,pCVar4 + 0x20);
        }
        lVar6 = lVar6 + 1;
        *(CowData *)(this_00 + 0x28) = pCVar4[0x28];
        this_00 = this_00 + 0x30;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* EditorExportPlatformLinuxBSD::cleanup() */

void __thiscall EditorExportPlatformLinuxBSD::cleanup(EditorExportPlatformLinuxBSD *this)

{
  CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand> *this_00;
  char cVar1;
  long lVar2;
  long *plVar3;
  String *pSVar4;
  String *pSVar5;
  String *pSVar6;
  long in_FS_OFFSET;
  Variant local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x200) != 0) {
    plVar3 = (long *)OS::get_singleton();
    cVar1 = (**(code **)(*plVar3 + 0x138))(plVar3,this + 0x200);
    if (cVar1 != '\0') {
      Variant::Variant((Variant *)local_48,"Terminating connection...");
      stringify_variants(local_50);
      __print_line((String *)local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      plVar3 = (long *)OS::get_singleton();
      (**(code **)(*plVar3 + 0x128))(plVar3,this + 0x200);
      plVar3 = (long *)OS::get_singleton();
      (**(code **)(*plVar3 + 0x1f8))(plVar3,1000);
    }
  }
  if (*(long *)(this + 0x1f8) == 0) {
LAB_00105940:
    *(undefined8 *)(this + 0x200) = 0;
  }
  else {
    Variant::Variant((Variant *)local_48,"Stopping and deleting previous version...");
    stringify_variants(local_50);
    __print_line((String *)local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    this_00 = (CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand> *)(this + 0x1f8);
    CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_copy_on_write(this_00);
    pSVar4 = *(String **)(this + 0x1f8);
    CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_copy_on_write(this_00);
    lVar2 = *(long *)(this + 0x1f8);
    if (lVar2 == 0) {
      pSVar6 = (String *)0x0;
      if (pSVar4 == (String *)0x0) goto LAB_00105940;
LAB_001058c3:
      do {
        while( true ) {
          if (pSVar4[0x28] != (String)0x0) break;
          pSVar5 = pSVar4 + 0x30;
          EditorExportPlatform::ssh_run_on_remote_no_wait
                    ((String *)this,pSVar4,(Vector *)(pSVar4 + 8),pSVar4 + 0x10,
                     (long *)(pSVar4 + 0x20),0);
          pSVar4 = pSVar5;
          if (pSVar5 == pSVar6) goto LAB_001058f4;
        }
        pSVar5 = pSVar4 + 0x30;
        EditorExportPlatform::ssh_run_on_remote
                  ((String *)this,pSVar4,(Vector *)(pSVar4 + 8),pSVar4 + 0x10,pSVar4 + 0x20,0);
        pSVar4 = pSVar5;
      } while (pSVar5 != pSVar6);
LAB_001058f4:
      lVar2 = *(long *)(this + 0x1f8);
      *(undefined8 *)(this + 0x200) = 0;
      if (lVar2 == 0) goto LAB_0010594b;
    }
    else {
      pSVar6 = (String *)(*(long *)(lVar2 + -8) * 0x30 + lVar2);
      if (pSVar4 != pSVar6) goto LAB_001058c3;
      *(undefined8 *)(this + 0x200) = 0;
    }
    if (*(long *)(lVar2 + -8) != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_unref(this_00);
        return;
      }
      goto LAB_00105a3a;
    }
  }
LAB_0010594b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105a3a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformLinuxBSD::run(Ref<EditorExportPreset> const&, int,
   BitField<EditorExportPlatform::DebugFlags>) */

int __thiscall
EditorExportPlatformLinuxBSD::run
          (EditorExportPlatformLinuxBSD *this,undefined8 *param_1,int param_2,undefined8 param_4)

{
  CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand> *this_00;
  CowData<String> *this_01;
  code *pcVar1;
  undefined1 auVar2 [16];
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
  String *pSVar13;
  Object *pOVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  bool *pbVar18;
  long lVar19;
  CowData<char32_t> *this_02;
  long lVar20;
  bool bVar21;
  int iVar22;
  long lVar23;
  long in_FS_OFFSET;
  CowData<char32_t> *local_150;
  long local_120;
  Object *local_118;
  long local_110;
  long local_108;
  String local_100 [8];
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long *local_c8;
  long local_c0;
  EditorProgress local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  long local_98;
  CowData<String> local_90 [8];
  undefined1 local_88 [16];
  undefined1 local_70 [16];
  undefined1 local_60;
  int local_58 [6];
  long local_40;
  
  iVar16 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0x228))();
  if (param_2 != 0) goto LAB_00105a86;
  local_a8 = 0;
  String::parse_latin1((String *)&local_a8,"");
  local_c0 = 0;
  String::parse_latin1((String *)&local_c0,"Running...");
  TTR((String *)&local_98,(String *)&local_c0);
  local_88._0_8_ = 0;
  String::parse_latin1((String *)local_88,"run");
  EditorProgress::EditorProgress(local_b8,(String *)local_88,(String *)&local_98,5,false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  EditorPaths::get_temp_dir();
  local_88._0_8_ = 0;
  String::parse_latin1((String *)local_88,"linuxbsd");
  String::path_join((String *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  DirAccess::create(&local_118,2);
  pOVar14 = local_118;
  pcVar1 = *(code **)(*(long *)local_118 + 0x1d8);
  local_88._0_8_ = 0;
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_88,(CowData *)&local_120);
  }
  cVar15 = (*pcVar1)(pOVar14,(String *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  if ((cVar15 == '\0') &&
     (iVar16 = (**(code **)(*(long *)local_118 + 0x1c0))(local_118,(String *)&local_120),
     pSVar13 = EditorNode::singleton, iVar16 != 0)) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = local_88._8_8_;
    local_88 = auVar12 << 0x40;
    String::parse_latin1((String *)local_88,"");
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"Warning!");
    TTR((String *)&local_a8,(String *)&local_98);
    local_d0 = 0;
    String::parse_latin1((String *)&local_d0,"\n");
    local_e0 = 0;
    String::parse_latin1((String *)&local_e0,"");
    local_e8 = 0;
    String::parse_latin1((String *)&local_e8,"Could not create temp directory:");
    TTR((String *)&local_d8,(String *)&local_e8);
    String::operator+((String *)&local_c8,(String *)&local_d8);
    String::operator+((String *)&local_c0,(String *)&local_c8);
    EditorNode::show_warning(pSVar13,(String *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  }
  else {
    pbVar18 = (bool *)*param_1;
    StringName::StringName((StringName *)local_88,"ssh_remote_deploy/host",false);
    Object::get((StringName *)local_58,pbVar18);
    Variant::operator_cast_to_String((Variant *)&local_110);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88._0_8_ != 0)) {
      StringName::unref();
    }
    pbVar18 = (bool *)*param_1;
    StringName::StringName((StringName *)local_88,"ssh_remote_deploy/port",false);
    Object::get((StringName *)local_58,pbVar18);
    Variant::operator_cast_to_String((Variant *)&local_108);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88._0_8_ != 0)) {
      StringName::unref();
    }
    if ((local_108 == 0) || (*(uint *)(local_108 + -8) < 2)) {
      String::parse_latin1((String *)&local_108,"22");
    }
    pbVar18 = (bool *)*param_1;
    StringName::StringName((StringName *)&local_98,"ssh_remote_deploy/extra_args_ssh",false);
    Object::get((StringName *)local_58,pbVar18);
    Variant::operator_cast_to_String((Variant *)local_88);
    bVar21 = SUB81((String *)local_88,0);
    String::split((char *)&local_a8,bVar21,0x10890e);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    pbVar18 = (bool *)*param_1;
    StringName::StringName((StringName *)&local_c0,"ssh_remote_deploy/extra_args_scp",false);
    Object::get((StringName *)local_58,pbVar18);
    Variant::operator_cast_to_String((Variant *)local_88);
    String::split((char *)&local_98,bVar21,0x10890e);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = local_88._8_8_;
    local_88 = auVar11 << 0x40;
    String::parse_latin1((String *)local_88,"tmp_linuxbsd_export");
    String::path_join(local_100);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"");
    local_c8 = (long *)0x0;
    String::parse_latin1((String *)&local_c8,"Exporting project...");
    TTR((String *)local_88,(String *)&local_c8);
    iVar22 = (int)(String *)local_88;
    cVar15 = EditorProgress::step((String *)local_b8,iVar22,true);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    if (cVar15 == '\0') {
      pcVar1 = *(code **)(*(long *)this + 0x260);
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,".zip");
      String::operator+((String *)local_88,local_100);
      iVar16 = (*pcVar1)(this,param_1,1,(String *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      if (iVar16 == 0) {
        local_f8 = 0;
        EditorExportPlatform::gen_export_flags((String *)local_88,this,param_4);
        for (lVar20 = 0; (local_88._8_8_ != 0 && (lVar20 < *(long *)(local_88._8_8_ + -8)));
            lVar20 = lVar20 + 1) {
          lVar19 = local_88._8_8_;
          if (lVar20 != 0) {
            String::operator+=((String *)&local_f8," ");
            lVar19 = local_88._8_8_;
          }
          if (lVar19 == 0) {
            lVar23 = 0;
LAB_00106186:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar20,lVar23,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          lVar23 = *(long *)(lVar19 + -8);
          if (lVar23 <= lVar20) goto LAB_00106186;
          String::operator+=((String *)&local_f8,(String *)(lVar19 + lVar20 * 8));
        }
        local_150 = (CowData<char32_t> *)&local_f8;
        this_01 = (CowData<String> *)(local_88 + 8);
        CowData<String>::_unref(this_01);
        pbVar18 = (bool *)EditorSettings::get_singleton();
        StringName::StringName((StringName *)local_88,"network/debug/remote_port",false);
        Object::get((StringName *)local_58,pbVar18);
        Variant::operator_cast_to_int((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_88._0_8_ != 0)) {
          StringName::unref();
        }
        Variant::Variant((Variant *)local_58,"Creating temporary directory...");
        print_line((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"");
        local_c8 = (long *)0x0;
        String::parse_latin1((String *)&local_c8,"Creating temporary directory...");
        TTR((String *)local_88,(String *)&local_c8);
        EditorProgress::step((String *)local_b8,iVar22,true);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        local_f0 = 0;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_88._8_8_;
        local_88 = auVar2 << 0x40;
        String::parse_latin1((String *)local_88,"mktemp -d");
        iVar17 = EditorExportPlatform::ssh_run_on_remote
                           ((String *)this,(String *)&local_110,(Vector *)&local_108,
                            (String *)&local_a8,(String *)local_88,(int)(CowData *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        if (((iVar17 == 0) && (local_f0 != 0)) && (1 < *(uint *)(local_f0 + -8))) {
          Variant::Variant((Variant *)local_58,"Uploading archive...");
          print_line((Variant *)local_58);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"");
          local_c8 = (long *)0x0;
          String::parse_latin1((String *)&local_c8,"Uploading archive...");
          TTR((String *)local_88,(String *)&local_c8);
          EditorProgress::step((String *)local_b8,iVar22,true);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,".zip");
          String::operator+((String *)local_88,local_100);
          iVar17 = EditorExportPlatform::ssh_push_to_remote
                             ((String *)this,(String *)&local_110,(Vector *)&local_108,
                              (String *)&local_98,(String *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          if (iVar17 != 0) goto LAB_00106502;
          pbVar18 = (bool *)*param_1;
          StringName::StringName((StringName *)local_88,"ssh_remote_deploy/run_script",false);
          Object::get((StringName *)local_58,pbVar18);
          Variant::operator_cast_to_String((Variant *)&local_e0);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_88._0_8_ != 0)) {
            StringName::unref();
          }
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"{temp_dir}");
          String::replace((String *)local_88,(String *)&local_e0);
          if (local_e0 != local_88._0_8_) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            local_e0 = local_88._0_8_;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_88._8_8_;
            local_88 = auVar3 << 0x40;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          local_d0 = 0;
          String::parse_latin1((String *)&local_d0,".zip");
          String::get_file();
          String::operator+((String *)&local_c8,(String *)&local_d8);
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"{archive_name}");
          String::replace((String *)local_88,(String *)&local_e0);
          if (local_e0 != local_88._0_8_) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            local_e0 = local_88._0_8_;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_88._8_8_;
            local_88 = auVar4 << 0x40;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          String::get_file();
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"{exe_name}");
          String::replace((String *)local_88,(String *)&local_e0);
          if (local_e0 != local_88._0_8_) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            local_e0 = local_88._0_8_;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = local_88._8_8_;
            local_88 = auVar5 << 0x40;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"{cmd_args}");
          String::replace((String *)local_88,(String *)&local_e0);
          if (local_e0 != local_88._0_8_) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            local_e0 = local_88._0_8_;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = local_88._8_8_;
            local_88 = auVar6 << 0x40;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"_start.sh");
          String::operator+((String *)local_88,local_100);
          FileAccess::open((String *)&local_c8,iVar22,(Error *)0x2);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          pOVar14 = local_118;
          if (local_c8 == (long *)0x0) {
            pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,".zip");
            String::operator+((String *)local_88,local_100);
            cVar15 = (*pcVar1)(pOVar14,(String *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            pOVar14 = local_118;
            if (cVar15 != '\0') {
              pcVar1 = *(code **)(*(long *)local_118 + 0x208);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,".zip");
              String::operator+((String *)local_88,local_100);
              (*pcVar1)(pOVar14,(String *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            }
            pOVar14 = local_118;
            pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"_start.sh");
            String::operator+((String *)local_88,local_100);
            cVar15 = (*pcVar1)(pOVar14);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            pOVar14 = local_118;
            if (cVar15 != '\0') {
              pcVar1 = *(code **)(*(long *)local_118 + 0x208);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_start.sh");
              String::operator+((String *)local_88,local_100);
              (*pcVar1)(pOVar14);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            }
            pOVar14 = local_118;
            pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"_clean.sh");
            String::operator+((String *)local_88,local_100);
            cVar15 = (*pcVar1)(pOVar14);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            pOVar14 = local_118;
            if (cVar15 != '\0') {
              pcVar1 = *(code **)(*(long *)local_118 + 0x208);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_clean.sh");
              String::operator+((String *)local_88,local_100);
              (*pcVar1)(pOVar14);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            }
LAB_001077ca:
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            iVar16 = iVar17;
          }
          else {
            (**(code **)(*local_c8 + 0x2a8))(local_c8,(Variant *)&local_e0);
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            pbVar18 = (bool *)*param_1;
            StringName::StringName((StringName *)local_88,"ssh_remote_deploy/cleanup_script",false);
            Object::get((StringName *)local_58,pbVar18);
            Variant::operator_cast_to_String((Variant *)&local_e0);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_88._0_8_ != 0)) {
              StringName::unref();
            }
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"{temp_dir}");
            String::replace((String *)local_88,(String *)&local_e0);
            if (local_e0 != local_88._0_8_) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              local_e0 = local_88._0_8_;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = local_88._8_8_;
              local_88 = auVar7 << 0x40;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            local_d0 = 0;
            String::parse_latin1((String *)&local_d0,".zip");
            String::get_file();
            String::operator+((String *)&local_c8,(String *)&local_d8);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"{archive_name}");
            String::replace((String *)local_88,(String *)&local_e0);
            if (local_e0 != local_88._0_8_) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              local_e0 = local_88._0_8_;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = local_88._8_8_;
              local_88 = auVar8 << 0x40;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            String::get_file();
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"{exe_name}");
            String::replace((String *)local_88,(String *)&local_e0);
            if (local_e0 != local_88._0_8_) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              local_e0 = local_88._0_8_;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = local_88._8_8_;
              local_88 = auVar9 << 0x40;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"{cmd_args}");
            String::replace((String *)local_88,(String *)&local_e0);
            if (local_e0 != local_88._0_8_) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              local_e0 = local_88._0_8_;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = local_88._8_8_;
              local_88 = auVar10 << 0x40;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"_clean.sh");
            String::operator+((String *)local_88,local_100);
            FileAccess::open((String *)&local_c8,iVar22,(Error *)0x2);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            pOVar14 = local_118;
            if (local_c8 == (long *)0x0) {
              pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,".zip");
              String::operator+((String *)local_88,local_100);
              cVar15 = (*pcVar1)(pOVar14,(String *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              pOVar14 = local_118;
              if (cVar15 != '\0') {
                pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,".zip");
                String::operator+((String *)local_88,local_100);
                (*pcVar1)(pOVar14,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              }
              pOVar14 = local_118;
              pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_start.sh");
              String::operator+((String *)local_88,local_100);
              cVar15 = (*pcVar1)(pOVar14,(String *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              pOVar14 = local_118;
              if (cVar15 != '\0') {
                pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_start.sh");
                String::operator+((String *)local_88,local_100);
                (*pcVar1)(pOVar14,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              }
              pOVar14 = local_118;
              pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_clean.sh");
              String::operator+((String *)local_88,local_100);
              cVar15 = (*pcVar1)(pOVar14);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              pOVar14 = local_118;
              if (cVar15 != '\0') {
                pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_clean.sh");
                String::operator+((String *)local_88,local_100);
                (*pcVar1)(pOVar14);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              }
              goto LAB_001077ca;
            }
            (**(code **)(*local_c8 + 0x2a8))(local_c8,(Variant *)&local_e0);
            Ref<FileAccess>::unref((Ref<FileAccess> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
            Variant::Variant((Variant *)local_58,"Uploading scripts...");
            print_line((Variant *)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"");
            local_c8 = (long *)0x0;
            String::parse_latin1((String *)&local_c8,"Uploading scripts...");
            TTR((String *)local_88,(String *)&local_c8);
            EditorProgress::step((String *)local_b8,iVar22,true);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"_start.sh");
            String::operator+((String *)local_88,local_100);
            iVar16 = EditorExportPlatform::ssh_push_to_remote
                               ((String *)this,(String *)&local_110,(Vector *)&local_108,
                                (String *)&local_98,(String *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            if (iVar16 == 0) {
              local_d8 = 0;
              String::parse_latin1((String *)&local_d8,"_start.sh");
              String::get_file();
              String::operator+((String *)&local_d0,(String *)&local_e0);
              local_c0 = 0;
              if (local_f0 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_f0);
              }
              local_c8 = (long *)0x0;
              String::parse_latin1((String *)&local_c8,"chmod +x \"%s/%s\"");
              vformat<String,String>
                        ((String *)local_88,(String *)&local_c8,(String *)&local_c0,
                         (String *)&local_d0);
              iVar16 = EditorExportPlatform::ssh_run_on_remote
                                 ((String *)this,(String *)&local_110,(Vector *)&local_108,
                                  (String *)&local_a8,(String *)local_88,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
              if (((iVar16 != 0) || (local_f0 == 0)) || (*(uint *)(local_f0 + -8) < 2))
              goto LAB_001071ad;
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_clean.sh");
              String::operator+((String *)local_88,local_100);
              iVar16 = EditorExportPlatform::ssh_push_to_remote
                                 ((String *)this,(String *)&local_110,(Vector *)&local_108,
                                  (String *)&local_98,(String *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              if (iVar16 == 0) {
                local_d8 = 0;
                String::parse_latin1((String *)&local_d8,"_clean.sh");
                String::get_file();
                String::operator+((String *)&local_d0,(String *)&local_e0);
                local_c0 = 0;
                if (local_f0 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_f0);
                }
                local_c8 = (long *)0x0;
                String::parse_latin1((String *)&local_c8,"chmod +x \"%s/%s\"");
                vformat<String,String>
                          ((String *)local_88,(String *)&local_c8,(String *)&local_c0,
                           (String *)&local_d0);
                iVar16 = EditorExportPlatform::ssh_run_on_remote
                                   ((String *)this,(String *)&local_110,(Vector *)&local_108,
                                    (String *)&local_a8,(String *)local_88,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                if (((iVar16 != 0) || (local_f0 == 0)) || (*(uint *)(local_f0 + -8) < 2))
                goto LAB_0010757c;
                Variant::Variant((Variant *)local_58,"Starting project...");
                print_line((Variant *)local_58);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"");
                local_c8 = (long *)0x0;
                String::parse_latin1((String *)&local_c8,"Starting project...");
                TTR((String *)local_88,(String *)&local_c8);
                EditorProgress::step((String *)local_b8,iVar22,true);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                local_d8 = 0;
                String::parse_latin1((String *)&local_d8,"_start.sh");
                String::get_file();
                String::operator+((String *)&local_d0,(String *)&local_e0);
                local_c0 = 0;
                if (local_f0 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_f0);
                }
                local_c8 = (long *)0x0;
                String::parse_latin1((String *)&local_c8,"\"%s/%s\"");
                vformat<String,String>((String *)local_88,(String *)&local_c8,(String *)&local_c0);
                iVar16 = EditorExportPlatform::ssh_run_on_remote_no_wait
                                   ((String *)this,(String *)&local_110,(Vector *)&local_108,
                                    (String *)&local_a8,(long *)local_88,(int)this + 0x200);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                if (iVar16 != 0) goto LAB_0010757c;
                this_00 = (CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand> *)(this + 0x1f8)
                ;
                CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::resize<false>(this_00,0);
                local_e0 = 0;
                String::parse_latin1((String *)&local_e0,"_clean.sh");
                String::get_file();
                String::operator+((String *)&local_d8,(String *)&local_e8);
                local_c8 = (long *)0x0;
                if (local_f0 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f0);
                }
                local_d0 = 0;
                String::parse_latin1((String *)&local_d0,"\"%s/%s\"");
                vformat<String,String>((String *)&local_c0,(String *)&local_d0,(String *)&local_c8);
                local_60 = 0;
                local_88 = (undefined1  [16])0x0;
                local_70 = (undefined1  [16])0x0;
                if (local_110 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)local_88,(CowData *)&local_110);
                }
                if (local_88._8_8_ != local_108) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)this_01,(CowData *)&local_108);
                }
                if (local_70._0_8_ != local_a0) {
                  CowData<String>::_ref((CowData<String> *)local_70,(CowData *)&local_a0);
                }
                if (local_70._8_8_ != local_c0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(local_70 + 8),(CowData *)&local_c0);
                }
                local_60 = 0;
                if (*(long *)(this + 0x1f8) == 0) {
                  lVar20 = 0;
                }
                else {
                  lVar20 = *(long *)(*(long *)(this + 0x1f8) + -8);
                }
                iVar16 = CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::resize<false>
                                   (this_00,lVar20 + 1);
                if (iVar16 == 0) {
                  if (*(long *)(this + 0x1f8) == 0) {
                    lVar19 = -1;
                    lVar20 = 0;
                  }
                  else {
                    lVar20 = *(long *)(*(long *)(this + 0x1f8) + -8);
                    lVar19 = lVar20 + -1;
                    if (-1 < lVar19) {
                      CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_copy_on_write
                                (this_00);
                      this_02 = (CowData<char32_t> *)(lVar19 * 0x30 + *(long *)(this + 0x1f8));
                      if (*(long *)this_02 != local_88._0_8_) {
                        CowData<char32_t>::_ref(this_02,(CowData *)local_88);
                      }
                      if (*(long *)(this_02 + 8) != local_88._8_8_) {
                        CowData<char32_t>::_ref(this_02 + 8,(CowData *)this_01);
                      }
                      if (*(long *)(this_02 + 0x18) != local_70._0_8_) {
                        CowData<String>::_ref
                                  ((CowData<String> *)(this_02 + 0x18),(CowData *)local_70);
                      }
                      if (*(long *)(this_02 + 0x20) != local_70._8_8_) {
                        CowData<char32_t>::_ref(this_02 + 0x20,(CowData *)(local_70 + 8));
                      }
                      this_02[0x28] = (CowData<char32_t>)0x0;
                      goto LAB_0010804e;
                    }
                  }
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar19,lVar20,"p_index",
                             "size()","",false,false);
                }
                else {
                  _err_print_error("push_back","./core/templates/vector.h",0x142,
                                   "Condition \"err\" is true. Returning: true",0,0);
                }
LAB_0010804e:
                SSHCleanupCommand::~SSHCleanupCommand((SSHCleanupCommand *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                Variant::Variant((Variant *)local_58,"Project started.");
                print_line((Variant *)local_58);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                pOVar14 = local_118;
                pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,".zip");
                String::operator+((String *)local_88,local_100);
                cVar15 = (*pcVar1)(pOVar14);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                pOVar14 = local_118;
                if (cVar15 != '\0') {
                  pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,".zip");
                  String::operator+((String *)local_88,local_100);
                  (*pcVar1)(pOVar14);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                }
                pOVar14 = local_118;
                pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_start.sh");
                String::operator+((String *)local_88,local_100);
                cVar15 = (*pcVar1)(pOVar14,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                pOVar14 = local_118;
                if (cVar15 != '\0') {
                  pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,"_start.sh");
                  String::operator+((String *)local_88,local_100);
                  (*pcVar1)(pOVar14,(String *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                }
                pOVar14 = local_118;
                pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_clean.sh");
                String::operator+((String *)local_88,local_100);
                cVar15 = (*pcVar1)(pOVar14);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                pOVar14 = local_118;
                iVar16 = iVar17;
                if (cVar15 != '\0') {
                  pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,"_clean.sh");
                  String::operator+((String *)local_88,local_100);
                  (*pcVar1)(pOVar14);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                }
              }
              else {
LAB_0010757c:
                pOVar14 = local_118;
                pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,".zip");
                String::operator+((String *)local_88,local_100);
                cVar15 = (*pcVar1)(pOVar14,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                pOVar14 = local_118;
                if (cVar15 != '\0') {
                  pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,".zip");
                  String::operator+((String *)local_88,local_100);
                  (*pcVar1)(pOVar14,(String *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                }
                pOVar14 = local_118;
                pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_start.sh");
                String::operator+((String *)local_88,local_100);
                cVar15 = (*pcVar1)(pOVar14,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                pOVar14 = local_118;
                if (cVar15 != '\0') {
                  pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,"_start.sh");
                  String::operator+((String *)local_88,local_100);
                  (*pcVar1)(pOVar14,(String *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                }
                pOVar14 = local_118;
                pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_clean.sh");
                String::operator+((String *)local_88,local_100);
                cVar15 = (*pcVar1)(pOVar14);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                pOVar14 = local_118;
                if (cVar15 != '\0') {
                  pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,"_clean.sh");
                  String::operator+((String *)local_88,local_100);
                  (*pcVar1)(pOVar14);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                }
              }
            }
            else {
LAB_001071ad:
              pOVar14 = local_118;
              pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,".zip");
              String::operator+((String *)local_88,local_100);
              cVar15 = (*pcVar1)(pOVar14,(String *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              pOVar14 = local_118;
              if (cVar15 != '\0') {
                pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,".zip");
                String::operator+((String *)local_88,local_100);
                (*pcVar1)(pOVar14,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              }
              pOVar14 = local_118;
              pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_start.sh");
              String::operator+((String *)local_88,local_100);
              cVar15 = (*pcVar1)(pOVar14,(String *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              pOVar14 = local_118;
              if (cVar15 != '\0') {
                pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_start.sh");
                String::operator+((String *)local_88,local_100);
                (*pcVar1)(pOVar14,(String *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              }
              pOVar14 = local_118;
              pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
              local_c0 = 0;
              String::parse_latin1((String *)&local_c0,"_clean.sh");
              String::operator+((String *)local_88,local_100);
              cVar15 = (*pcVar1)(pOVar14);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              pOVar14 = local_118;
              if (cVar15 != '\0') {
                pcVar1 = *(code **)(*(long *)local_118 + 0x208);
                local_c0 = 0;
                String::parse_latin1((String *)&local_c0,"_clean.sh");
                String::operator+((String *)local_88,local_100);
                (*pcVar1)(pOVar14);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              }
            }
          }
        }
        else {
LAB_00106502:
          pOVar14 = local_118;
          pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,".zip");
          String::operator+((String *)local_88,local_100);
          cVar15 = (*pcVar1)(pOVar14,(String *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          pOVar14 = local_118;
          if (cVar15 != '\0') {
            pcVar1 = *(code **)(*(long *)local_118 + 0x208);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,".zip");
            String::operator+((String *)local_88,local_100);
            (*pcVar1)(pOVar14,(String *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          }
          pOVar14 = local_118;
          pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"_start.sh");
          String::operator+((String *)local_88,local_100);
          cVar15 = (*pcVar1)(pOVar14,(String *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          pOVar14 = local_118;
          if (cVar15 != '\0') {
            pcVar1 = *(code **)(*(long *)local_118 + 0x208);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"_start.sh");
            String::operator+((String *)local_88,local_100);
            (*pcVar1)(pOVar14,(String *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          }
          pOVar14 = local_118;
          pcVar1 = *(code **)(*(long *)local_118 + 0x1d0);
          local_c0 = 0;
          String::parse_latin1((String *)&local_c0,"_clean.sh");
          String::operator+((String *)local_88,local_100);
          cVar15 = (*pcVar1)(pOVar14);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          pOVar14 = local_118;
          iVar16 = iVar17;
          if (cVar15 != '\0') {
            pcVar1 = *(code **)(*(long *)local_118 + 0x208);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"_clean.sh");
            String::operator+((String *)local_88,local_100);
            (*pcVar1)(pOVar14);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref(local_150);
      }
      else {
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,".zip");
        String::operator+((String *)local_88,local_100);
        DirAccess::remove_file_or_error((String *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      }
    }
    else {
      iVar16 = 0x2d;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_100);
    CowData<String>::_unref(local_90);
    CowData<String>::_unref((CowData<String> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  }
  if (((local_118 != (Object *)0x0) && (cVar15 = RefCounted::unreference(), cVar15 != '\0')) &&
     (cVar15 = predelete_handler(local_118), cVar15 != '\0')) {
    (**(code **)(*(long *)local_118 + 0x140))(local_118);
    Memory::free_static(local_118,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  EditorProgress::~EditorProgress(local_b8);
LAB_00105a86:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar16;
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
  return (uint)CONCAT71(0x10e9,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e9,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* OS::move_to_trash(String const&) */

undefined8 OS::move_to_trash(String *param_1)

{
  return 1;
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
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(this + 0x188);
  if ((piVar2 != (int *)0x0) && (0 < *(long *)(piVar2 + -2))) {
    piVar1 = piVar2 + *(long *)(piVar2 + -2) * 6;
    iVar3 = 0;
    do {
      if (iVar3 < *piVar2) {
        iVar3 = *piVar2;
      }
      piVar2 = piVar2 + 6;
    } while (piVar1 != piVar2);
    return iVar3;
  }
  return 0;
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



/* EditorExportPlatform::get_custom_project_settings(Ref<EditorExportPreset> const&) const */

Ref * EditorExportPlatform::get_custom_project_settings(Ref *param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 2;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
  return param_1;
}



/* EditorExportPlatformPC::modify_template(Ref<EditorExportPreset> const&, bool, String const&,
   BitField<EditorExportPlatform::DebugFlags>) */

undefined8 EditorExportPlatformPC::modify_template(void)

{
  return 0;
}



/* EditorExportPlatformLinuxBSD::is_class_ptr(void*) const */

uint __thiscall
EditorExportPlatformLinuxBSD::is_class_ptr(EditorExportPlatformLinuxBSD *this,void *param_1)

{
  return (uint)CONCAT71(0x10e9,(undefined4 *)param_1 ==
                               &EditorExportPlatformPC::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e8,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e9,(undefined4 *)param_1 ==
                               &EditorExportPlatform::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e9,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e9,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorExportPlatformLinuxBSD::_getv(StringName const&, Variant&) const */

undefined8 EditorExportPlatformLinuxBSD::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportPlatformLinuxBSD::_setv(StringName const&, Variant const&) */

undefined8 EditorExportPlatformLinuxBSD::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportPlatformLinuxBSD::_validate_propertyv(PropertyInfo&) const */

void EditorExportPlatformLinuxBSD::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorExportPlatformLinuxBSD::_property_can_revertv(StringName const&) const */

undefined8 EditorExportPlatformLinuxBSD::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorExportPlatformLinuxBSD::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorExportPlatformLinuxBSD::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportPlatformLinuxBSD::_notificationv(int, bool) */

void EditorExportPlatformLinuxBSD::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e4a8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e4a8;
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
      goto LAB_00108b09;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(lVar1 + lVar2 * 0x18);
    }
    goto LAB_00108b09;
  }
  lVar3 = 0;
LAB_00108b09:
  _err_print_index_error
            ("_get_message_type","./editor/export/editor_export_platform.h",0x104,lVar2,lVar3,
             "p_index","messages.size()","",false,false);
  return 0;
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
LAB_00108c03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108c03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00108c6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00108c6e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorExportPlatformLinuxBSD::_get_class_namev() const */

undefined8 * EditorExportPlatformLinuxBSD::_get_class_namev(void)

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
LAB_00108d03:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108d03;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorExportPlatformLinuxBSD");
      goto LAB_00108d6e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorExportPlatformLinuxBSD");
LAB_00108d6e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorExportPlatform::get_debug_protocol() const */

EditorExportPlatform * __thiscall
EditorExportPlatform::get_debug_protocol(EditorExportPlatform *this)

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
      goto LAB_00108f79;
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
    goto LAB_00108f79;
  }
  lVar3 = 0;
LAB_00108f79:
  _err_print_index_error
            ("_get_message_category","./editor/export/editor_export_platform.h",0x109,lVar2,lVar3,
             "p_index","messages.size()","",false,false);
  *(undefined8 *)this = 0;
  return this;
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
      goto LAB_00109039;
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
    goto LAB_00109039;
  }
  lVar3 = 0;
LAB_00109039:
  _err_print_index_error
            ("_get_message_text","./editor/export/editor_export_platform.h",0x10e,lVar2,lVar3,
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
      goto LAB_00109129;
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
    goto LAB_00109129;
  }
  lVar6 = 0;
LAB_00109129:
  _err_print_index_error
            ("get_message","./editor/export/editor_export_platform.h",0xff,lVar4,lVar6,"p_index",
             "messages.size()","",false,false);
  *puVar5 = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  return puVar5;
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



/* EditorExportPlatformLinuxBSD::get_class() const */

void EditorExportPlatformLinuxBSD::get_class(void)

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
    if (cVar5 != '\0') goto LAB_0010943b;
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
      if (cVar5 != '\0') goto LAB_0010943b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010943b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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



/* EditorExportPlatformPC::is_class(String const&) const */

undefined8 __thiscall EditorExportPlatformPC::is_class(EditorExportPlatformPC *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010985b;
  }
  cVar5 = String::operator==(param_1,"EditorExportPlatformPC");
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
      if (cVar5 != '\0') goto LAB_0010985b;
    }
    cVar5 = String::operator==(param_1,"EditorExportPlatform");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_00109998;
    }
  }
LAB_0010985b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00109998:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformLinuxBSD::is_class(String const&) const */

undefined8 __thiscall
EditorExportPlatformLinuxBSD::is_class(EditorExportPlatformLinuxBSD *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00109a0f;
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
LAB_00109a0f:
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
    if (cVar5 != '\0') goto LAB_00109ac3;
  }
  cVar5 = String::operator==(param_1,"EditorExportPlatformLinuxBSD");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorExportPlatformPC::is_class((EditorExportPlatformPC *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00109ac3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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



/* WARNING: Removing unreachable block (ram,0x0010ae68) */
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



/* WARNING: Removing unreachable block (ram,0x0010b1a0) */
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



/* EditorExportPlatformLinuxBSD::_initialize_classv() */

void EditorExportPlatformLinuxBSD::_initialize_classv(void)

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
    if (EditorExportPlatformPC::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
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
        if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
          EditorExportPlatform::_bind_methods();
        }
        EditorExportPlatform::initialize_class()::initialized = '\x01';
      }
      local_58 = "EditorExportPlatform";
      local_68 = 0;
      local_50 = 0x14;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorExportPlatformPC";
      local_70 = 0;
      local_50 = 0x16;
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
      EditorExportPlatformPC::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorExportPlatformPC";
    local_68 = 0;
    local_50 = 0x16;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorExportPlatformLinuxBSD";
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
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)param_1);
    local_48 = "Cannot remove non-existent file or directory: \'%s\'.";
    local_58 = 0;
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
    if (iVar4 == 0) goto LAB_0010b8b1;
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
LAB_0010b8b1:
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
        if (pvVar5 == (void *)0x0) goto LAB_0010bb94;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010bb94:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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
    if ((code *)PTR__bind_methods_00111010 != Object::_bind_methods) {
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
LAB_0010becd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010becd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010beef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010beef:
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
LAB_0010c24d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c24d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010c26f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010c26f:
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



/* EditorExportPlatformPC::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorExportPlatformPC::_get_property_listv(EditorExportPlatformPC *this,List *param_1,bool param_2)

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
  local_78 = "EditorExportPlatformPC";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorExportPlatformPC";
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
LAB_0010c62d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c62d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010c64f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010c64f:
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
  StringName::StringName((StringName *)&local_78,"EditorExportPlatformPC",false);
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



/* EditorExportPlatformLinuxBSD::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorExportPlatformLinuxBSD::_get_property_listv
          (EditorExportPlatformLinuxBSD *this,List *param_1,bool param_2)

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
    EditorExportPlatformPC::_get_property_listv((EditorExportPlatformPC *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorExportPlatformLinuxBSD";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorExportPlatformLinuxBSD";
  local_98 = 0;
  local_70 = 0x1c;
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
LAB_0010ca0d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ca0d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010ca2f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010ca2f:
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
  StringName::StringName((StringName *)&local_78,"EditorExportPlatformLinuxBSD",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorExportPlatformPC::_get_property_listv((EditorExportPlatformPC *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* EditorExportPlatformLinuxBSD::SSHCleanupCommand::~SSHCleanupCommand() */

void __thiscall
EditorExportPlatformLinuxBSD::SSHCleanupCommand::~SSHCleanupCommand(SSHCleanupCommand *this)

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
  CowData<String>::_unref((CowData<String> *)(this + 0x18));
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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



/* CowData<EditorExportPlatform::ExportMessage>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorExportPlatform::ExportMessage>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_unref() */

void __thiscall
CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_unref
          (CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand> *this)

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
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<String>::_unref((CowData<String> *)(plVar6 + 3));
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
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
          plVar6 = plVar6 + 6;
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



/* EditorExportPlatformLinuxBSD::~EditorExportPlatformLinuxBSD() */

void __thiscall
EditorExportPlatformLinuxBSD::~EditorExportPlatformLinuxBSD(EditorExportPlatformLinuxBSD *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  void *pvVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e608;
  CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_unref
            ((CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand> *)(this + 0x1f8));
  if (*(long *)(this + 0x1e8) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0x1e8);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  if (*(long *)(this + 0x1e0) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0x1e0);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  pvVar7 = *(void **)(this + 0x1b8);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x1dc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1dc) = 0;
        *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1c0) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0x1c0) + lVar6) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x18));
            if (*(long *)((long)pvVar7 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar7 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar7 + 0x10);
                *(undefined8 *)((long)pvVar7 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x1b8);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1dc) = 0;
        *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0010d234;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x1c0),false);
  }
LAB_0010d234:
  *(code **)this = EditorExportPlatform::ssh_run_on_remote;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1a0));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x198));
  if (*(long *)(this + 400) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 400);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  *(code **)this = EditorExportPlatform::ssh_run_on_remote_no_wait;
  CowData<EditorExportPlatform::ExportMessage>::_unref
            ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188));
  *(undefined ***)this = &PTR__initialize_classv_0010e4a8;
  Object::~Object((Object *)this);
  return;
}



/* EditorExportPlatformLinuxBSD::~EditorExportPlatformLinuxBSD() */

void __thiscall
EditorExportPlatformLinuxBSD::~EditorExportPlatformLinuxBSD(EditorExportPlatformLinuxBSD *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  void *pvVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e608;
  CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_unref
            ((CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand> *)(this + 0x1f8));
  if (*(long *)(this + 0x1e8) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0x1e8);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  if (*(long *)(this + 0x1e0) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 0x1e0);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  pvVar7 = *(void **)(this + 0x1b8);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x1dc) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1d8) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x1dc) = 0;
        *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1c0) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0x1c0) + lVar6) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x18));
            if (*(long *)((long)pvVar7 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar7 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar7 + 0x10);
                *(undefined8 *)((long)pvVar7 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x1b8);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while (lVar6 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x1dc) = 0;
        *(undefined1 (*) [16])(this + 0x1c8) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0010d4b4;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x1c0),false);
  }
LAB_0010d4b4:
  *(code **)this = EditorExportPlatform::ssh_run_on_remote;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1a0));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x198));
  if (*(long *)(this + 400) != 0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      pOVar4 = *(Object **)(this + 400);
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  *(code **)this = EditorExportPlatform::ssh_run_on_remote_no_wait;
  CowData<EditorExportPlatform::ExportMessage>::_unref
            ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188));
  *(undefined ***)this = &PTR__initialize_classv_0010e4a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x210);
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
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
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
    lVar6 = 0;
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
    lVar6 = lVar4 * 0x18;
    if (lVar6 != 0) {
      uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      lVar6 = (uVar7 | uVar7 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_0010d9c0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar7 = param_1 * 0x18 - 1;
  uVar7 = uVar7 >> 1 | uVar7;
  uVar7 = uVar7 | uVar7 >> 2;
  uVar7 = uVar7 | uVar7 >> 4;
  uVar7 = uVar7 | uVar7 >> 8;
  uVar7 = uVar7 | uVar7 >> 0x10;
  uVar7 = uVar7 | uVar7 >> 0x20;
  lVar9 = uVar7 + 1;
  if (lVar9 == 0) goto LAB_0010d9c0;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar6) {
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
      lVar4 = lVar4 + uVar8 * 0x18;
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + 0x10));
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_0010da16;
  }
  if (lVar9 == lVar6) {
LAB_0010d92b:
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
LAB_0010da16:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar5[-1];
    if (param_1 <= lVar4) goto LAB_0010d88d;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010d92b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
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
  puVar2 = puVar5 + lVar4 * 3;
  do {
    *(undefined1 (*) [16])(puVar2 + 1) = (undefined1  [16])0x0;
    puVar2 = puVar2 + 3;
  } while (puVar2 != puVar5 + param_1 * 3);
LAB_0010d88d:
  puVar5[-1] = param_1;
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
        goto LAB_0010dc01;
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
LAB_0010dc01:
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
      goto LAB_0010ddf9;
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
LAB_0010ddf9:
  CowData<char32_t>::_unref(this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_realloc(long) */

undefined8 __thiscall
CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::_realloc
          (CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand> *this,long param_1)

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
/* Error CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::resize<false>(long) */

undefined8 __thiscall
CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand>::resize<false>
          (CowData<EditorExportPlatformLinuxBSD::SSHCleanupCommand> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 *puVar6;
  CowData<char32_t> *this_00;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
    lVar8 = lVar7 * 0x30;
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
LAB_0010e2a0:
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
  if (lVar11 == 0) goto LAB_0010e2a0;
  uVar10 = param_1;
  if (param_1 <= lVar7) {
    while (lVar7 = *(long *)this, lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar10) {
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      this_00 = (CowData<char32_t> *)(lVar7 + uVar10 * 0x30);
      CowData<char32_t>::_unref(this_00 + 0x20);
      CowData<String>::_unref((CowData<String> *)(this_00 + 0x18));
      CowData<char32_t>::_unref(this_00 + 8);
      CowData<char32_t>::_unref(this_00);
      uVar10 = uVar10 + 1;
    }
    goto LAB_0010e2f6;
  }
  if (lVar11 == lVar8) {
LAB_0010e213:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_0010e2f6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar6[-1];
    if (param_1 <= lVar7) goto LAB_0010e155;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010e213;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar7 = 0;
  }
  pauVar3 = (undefined1 (*) [16])(puVar6 + lVar7 * 6);
  do {
    pauVar3[2][8] = 0;
    pauVar4 = pauVar3 + 3;
    *pauVar3 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pauVar3[1] + 8) = (undefined1  [16])0x0;
    pauVar3 = pauVar4;
  } while (pauVar4 != (undefined1 (*) [16])(puVar6 + param_1 * 6));
LAB_0010e155:
  puVar6[-1] = param_1;
  return 0;
}



/* EditorExportPlatformLinuxBSD::_export_debug_script(Ref<EditorExportPreset> const&, String const&,
   String const&, String const&) */

void EditorExportPlatformLinuxBSD::_GLOBAL__sub_I__export_debug_script(void)

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
/* EditorExportPlatformLinuxBSD::~EditorExportPlatformLinuxBSD() */

void __thiscall
EditorExportPlatformLinuxBSD::~EditorExportPlatformLinuxBSD(EditorExportPlatformLinuxBSD *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorExportPlatformLinuxBSD::SSHCleanupCommand::~SSHCleanupCommand() */

void __thiscall
EditorExportPlatformLinuxBSD::SSHCleanupCommand::~SSHCleanupCommand(SSHCleanupCommand *this)

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
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


