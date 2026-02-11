
/* EditorExportPlatformPC::has_valid_project_configuration(Ref<EditorExportPreset> const&, String&)
   const */

undefined8 EditorExportPlatformPC::has_valid_project_configuration(Ref *param_1,String *param_2)

{
  return 1;
}



/* EditorExportPlatformPC::sign_shared_object(Ref<EditorExportPreset> const&, bool, String const&)
    */

undefined8 EditorExportPlatformPC::sign_shared_object(Ref *param_1,bool param_2,String *param_3)

{
  return 0;
}



/* EditorExportPlatformPC::resolve_platform_feature_priorities(Ref<EditorExportPreset> const&,
   HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >&) */

void EditorExportPlatformPC::resolve_platform_feature_priorities(Ref *param_1,HashSet *param_2)

{
  return;
}



/* EditorExportPlatformPC::export_project(Ref<EditorExportPreset> const&, bool, String const&,
   BitField<EditorExportPlatform::DebugFlags>) */

int __thiscall
EditorExportPlatformPC::export_project
          (EditorExportPlatformPC *this,undefined8 param_1,undefined1 param_2,undefined8 param_3,
          undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  ExportNotifier local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorExportPlatform::ExportNotifier::ExportNotifier
            (&local_41,this,param_1,param_2,param_3,param_5);
  iVar1 = (**(code **)(*(long *)this + 0x2b8))(this,param_1,param_2,param_3,param_5);
  if (iVar1 == 0) {
    lVar2 = *(long *)this;
    if (*(code **)(lVar2 + 0x2c0) != modify_template) {
      iVar1 = (**(code **)(lVar2 + 0x2c0))(this,param_1,param_2,param_3,param_5);
      if (iVar1 != 0) goto LAB_001000c5;
      lVar2 = *(long *)this;
    }
    iVar1 = (**(code **)(lVar2 + 0x2c8))(this,param_1,param_2,param_3,param_5);
  }
LAB_001000c5:
  EditorExportPlatform::ExportNotifier::~ExportNotifier(&local_41);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformPC::get_logo() const */

void EditorExportPlatformPC::get_logo(void)

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



/* EditorExportPlatformPC::get_name() const */

void EditorExportPlatformPC::get_name(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x198) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x198));
  }
  return;
}



/* EditorExportPlatformPC::get_os_name() const */

void EditorExportPlatformPC::get_os_name(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x1a0) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x1a0));
  }
  return;
}



/* EditorExportPlatformPC::get_platform_features(List<String, DefaultAllocator>*) const */

void __thiscall
EditorExportPlatformPC::get_platform_features(EditorExportPlatformPC *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  CowData<char32_t> *pCVar5;
  undefined1 (*pauVar6) [16];
  long in_FS_OFFSET;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_50 = 2;
  local_58 = &_LC12;
  String::parse_latin1((StrRange *)&local_60);
  if (*(long *)param_1 == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  pCVar5 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar5 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar5 + 0x10) = (undefined1  [16])0x0;
  if (local_60 != 0) {
    CowData<char32_t>::_ref(pCVar5,(CowData *)&local_60);
  }
  lVar3 = local_60;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(pCVar5 + 8) = 0;
  *(long **)(pCVar5 + 0x18) = plVar1;
  *(long *)(pCVar5 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = pCVar5;
  }
  plVar1[1] = (long)pCVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)pCVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  if (*(code **)(*(long *)this + 0x1d8) == get_os_name) {
    local_60 = 0;
    if (*(long *)(this + 0x1a0) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(this + 0x1a0));
    }
  }
  else {
    (**(code **)(*(long *)this + 0x1d8))((StrRange *)&local_60,this);
  }
  String::to_lower();
  if (*(long *)param_1 == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  pCVar5 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar5 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar5 + 0x10) = (undefined1  [16])0x0;
  if (local_58 != (undefined *)0x0) {
    CowData<char32_t>::_ref(pCVar5,(CowData *)&local_58);
  }
  puVar4 = local_58;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(pCVar5 + 8) = 0;
  *(long **)(pCVar5 + 0x18) = plVar1;
  *(long *)(pCVar5 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = pCVar5;
  }
  plVar1[1] = (long)pCVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)pCVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = (undefined *)0x0;
      Memory::free_static(puVar4 + -0x10,false);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformPC::get_preset_features(Ref<EditorExportPreset> const&, List<String,
   DefaultAllocator>*) const */

void __thiscall
EditorExportPlatformPC::get_preset_features(EditorExportPlatformPC *this,Ref *param_1,List *param_2)

{
  char cVar1;
  bool *pbVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  bool bVar7;
  CowData<char32_t> *pCVar8;
  undefined1 (*pauVar9) [16];
  long in_FS_OFFSET;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pbVar2 = *(bool **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_68,"texture_format/s3tc_bptc",false);
  Object::get((StringName *)local_58,pbVar2);
  bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (bVar7) {
    local_70 = 0;
    local_68 = &_LC17;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_70);
    if (*(long *)param_2 == 0) {
      pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_2 = pauVar9;
      *(undefined4 *)pauVar9[1] = 0;
      *pauVar9 = (undefined1  [16])0x0;
    }
    pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
    if (local_70 != 0) {
      CowData<char32_t>::_ref(pCVar8,(CowData *)&local_70);
    }
    lVar5 = local_70;
    plVar3 = *(long **)param_2;
    lVar4 = plVar3[1];
    *(undefined8 *)(pCVar8 + 8) = 0;
    *(long **)(pCVar8 + 0x18) = plVar3;
    *(long *)(pCVar8 + 0x10) = lVar4;
    if (lVar4 != 0) {
      *(CowData<char32_t> **)(lVar4 + 8) = pCVar8;
    }
    plVar3[1] = (long)pCVar8;
    if (*plVar3 == 0) {
      *plVar3 = (long)pCVar8;
    }
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    if (local_70 != 0) {
      LOCK();
      plVar3 = (long *)(local_70 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    local_70 = 0;
    local_68 = &_LC18;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_70);
    if (*(long *)param_2 == 0) {
      pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_2 = pauVar9;
      *(undefined4 *)pauVar9[1] = 0;
      *pauVar9 = (undefined1  [16])0x0;
    }
    pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
    if (local_70 != 0) {
      CowData<char32_t>::_ref(pCVar8,(CowData *)&local_70);
    }
    lVar5 = local_70;
    plVar3 = *(long **)param_2;
    lVar4 = plVar3[1];
    *(undefined8 *)(pCVar8 + 8) = 0;
    *(long **)(pCVar8 + 0x18) = plVar3;
    *(long *)(pCVar8 + 0x10) = lVar4;
    if (lVar4 != 0) {
      *(CowData<char32_t> **)(lVar4 + 8) = pCVar8;
    }
    plVar3[1] = (long)pCVar8;
    if (*plVar3 == 0) {
      *plVar3 = (long)pCVar8;
    }
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    if (local_70 != 0) {
      LOCK();
      plVar3 = (long *)(local_70 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  pbVar2 = *(bool **)param_1;
  StringName::StringName((StringName *)&local_68,"texture_format/etc2_astc",false);
  Object::get((StringName *)local_58,pbVar2);
  bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (bVar7) {
    local_70 = 0;
    local_68 = &_LC20;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_70);
    if (*(long *)param_2 == 0) {
      pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_2 = pauVar9;
      *(undefined4 *)pauVar9[1] = 0;
      *pauVar9 = (undefined1  [16])0x0;
    }
    pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
    if (local_70 != 0) {
      CowData<char32_t>::_ref(pCVar8,(CowData *)&local_70);
    }
    lVar5 = local_70;
    plVar3 = *(long **)param_2;
    lVar4 = plVar3[1];
    *(undefined8 *)(pCVar8 + 8) = 0;
    *(long **)(pCVar8 + 0x18) = plVar3;
    *(long *)(pCVar8 + 0x10) = lVar4;
    if (lVar4 != 0) {
      *(CowData<char32_t> **)(lVar4 + 8) = pCVar8;
    }
    plVar3[1] = (long)pCVar8;
    if (*plVar3 == 0) {
      *plVar3 = (long)pCVar8;
    }
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    if (local_70 != 0) {
      LOCK();
      plVar3 = (long *)(local_70 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    local_70 = 0;
    local_68 = &_LC21;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_70);
    if (*(long *)param_2 == 0) {
      pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_2 = pauVar9;
      *(undefined4 *)pauVar9[1] = 0;
      *pauVar9 = (undefined1  [16])0x0;
    }
    pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
    if (local_70 != 0) {
      CowData<char32_t>::_ref(pCVar8,(CowData *)&local_70);
    }
    lVar5 = local_70;
    plVar3 = *(long **)param_2;
    lVar4 = plVar3[1];
    *(undefined8 *)(pCVar8 + 8) = 0;
    *(long **)(pCVar8 + 0x18) = plVar3;
    *(long *)(pCVar8 + 0x10) = lVar4;
    if (lVar4 != 0) {
      *(CowData<char32_t> **)(lVar4 + 8) = pCVar8;
    }
    plVar3[1] = (long)pCVar8;
    if (*plVar3 == 0) {
      *plVar3 = (long)pCVar8;
    }
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    if (local_70 != 0) {
      LOCK();
      plVar3 = (long *)(local_70 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  pbVar2 = *(bool **)param_1;
  StringName::StringName((StringName *)&local_70,"binary_format/architecture",false);
  Object::get((StringName *)local_58,pbVar2);
  Variant::operator_cast_to_String((Variant *)&local_68);
  if (*(long *)param_2 == 0) {
    pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_2 = pauVar9;
    *(undefined4 *)pauVar9[1] = 0;
    *pauVar9 = (undefined1  [16])0x0;
  }
  pCVar8 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])pCVar8 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(pCVar8 + 0x10) = (undefined1  [16])0x0;
  if (local_68 != (undefined *)0x0) {
    CowData<char32_t>::_ref(pCVar8,(CowData *)&local_68);
  }
  puVar6 = local_68;
  plVar3 = *(long **)param_2;
  lVar4 = plVar3[1];
  *(undefined8 *)(pCVar8 + 8) = 0;
  *(long **)(pCVar8 + 0x18) = plVar3;
  *(long *)(pCVar8 + 0x10) = lVar4;
  if (lVar4 != 0) {
    *(CowData<char32_t> **)(lVar4 + 8) = pCVar8;
  }
  plVar3[1] = (long)pCVar8;
  if (*plVar3 == 0) {
    *plVar3 = (long)pCVar8;
  }
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar3 = (long *)(local_68 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar6 + -0x10,false);
      cVar1 = Variant::needs_deinit[local_58[0]];
      goto joined_r0x00100763;
    }
  }
  cVar1 = Variant::needs_deinit[local_58[0]];
joined_r0x00100763:
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorExportPlatformPC::get_export_options(List<EditorExportPlatform::ExportOption,
   DefaultAllocator>*) const */

void __thiscall
EditorExportPlatformPC::get_export_options(EditorExportPlatformPC *this,List *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  long in_FS_OFFSET;
  String *local_128;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  char *local_e8;
  long local_e0;
  long local_d8;
  int local_d0;
  long local_c8;
  undefined4 local_c0;
  int local_b8 [8];
  undefined4 local_98;
  long local_90;
  long local_88;
  int local_80;
  long local_78;
  undefined4 local_70;
  int local_68 [6];
  undefined2 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*(long *)this + 0x1d8) == get_os_name) {
    local_f0 = 0;
    if (*(long *)(this + 0x1a0) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)(this + 0x1a0));
    }
  }
  else {
    (**(code **)(*(long *)this + 0x1d8))(&local_f0,this);
  }
  local_128 = (String *)&local_f0;
  cVar4 = String::operator==(local_128,"Windows");
  local_110 = 0;
  if (cVar4 == '\0') {
    local_e8 = "";
    local_e0 = 0;
  }
  else {
    local_e0 = 5;
    local_e8 = "*.exe";
  }
  String::parse_latin1((StrRange *)&local_110);
  lVar3 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar1 = (long *)(local_f0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  Variant::Variant((Variant *)local_b8,"");
  local_f8 = 0;
  local_e8 = "custom_template/debug";
  local_100 = 0;
  local_e0 = 0x15;
  String::parse_latin1((StrRange *)&local_100);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,4);
  local_e0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_100);
  }
  local_d8 = 0;
  local_d0 = 0xf;
  local_c8 = 0;
  if (local_110 == 0) {
LAB_00100e53:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,(StringName *)&local_f8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00100e53;
    StringName::StringName((StringName *)local_128,(String *)&local_c8,false);
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
  local_98 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_88,(StringName *)&local_d8);
  local_78 = 0;
  local_80 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  }
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 0;
  if (*(long *)param_1 == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar6;
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
  *(undefined2 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *puVar5 = local_98;
  *(undefined1 (*) [16])(puVar5 + 0x14) = (undefined1  [16])0x0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_90);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_88);
  puVar5[6] = local_80;
  if (*(long *)(puVar5 + 8) != local_78) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
  }
  puVar5[10] = local_70;
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_68);
  *(undefined1 *)(puVar5 + 0x12) = (undefined1)local_50;
  *(undefined1 *)((long)puVar5 + 0x49) = local_50._1_1_;
  uVar2 = *(undefined8 *)(*(long *)param_1 + 8);
  *(long *)(puVar5 + 0x18) = *(long *)param_1;
  plVar1 = *(long **)param_1;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x16) = uVar2;
  if (plVar1[1] != 0) {
    *(undefined4 **)(plVar1[1] + 0x50) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,"");
  local_f8 = 0;
  local_100 = 0;
  local_e8 = "custom_template/release";
  local_e0 = 0x17;
  String::parse_latin1((StrRange *)&local_100);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,4);
  local_e0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_100);
  }
  local_d8 = 0;
  local_d0 = 0xf;
  local_c8 = 0;
  if (local_110 == 0) {
LAB_0010122b:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,(StringName *)&local_f8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_0010122b;
    StringName::StringName((StringName *)local_128,(String *)&local_c8,false);
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
  local_98 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_88,(StringName *)&local_d8);
  local_78 = 0;
  local_80 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  }
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 0;
  if (*(long *)param_1 == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x68,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 0xe) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  puVar5[0xc] = 0;
  *(undefined2 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined1 (*) [16])(puVar5 + 0x14) = (undefined1  [16])0x0;
  *puVar5 = local_98;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_90);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_88);
  puVar5[6] = local_80;
  if (*(long *)(puVar5 + 8) != local_78) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
  }
  puVar5[10] = local_70;
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_68);
  *(undefined1 *)(puVar5 + 0x12) = (undefined1)local_50;
  *(undefined1 *)((long)puVar5 + 0x49) = local_50._1_1_;
  uVar2 = *(undefined8 *)(*(long *)param_1 + 8);
  *(long *)(puVar5 + 0x18) = *(long *)param_1;
  plVar1 = *(long **)param_1;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x16) = uVar2;
  if (plVar1[1] != 0) {
    *(undefined4 **)(plVar1[1] + 0x50) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,1);
  local_e8 = "No,Debug Only,Debug and Release";
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0x1f;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "debug/export_console_wrapper";
  local_e0 = 0x1c;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,2);
  local_e0 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_108);
  }
  local_d8 = 0;
  local_d0 = 2;
  local_c8 = 0;
  if (local_100 == 0) {
LAB_0010163b:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,(StringName *)&local_f8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_100);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_0010163b;
    StringName::StringName((StringName *)local_128,(String *)&local_c8,false);
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
  local_98 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_88,(StringName *)&local_d8);
  local_78 = 0;
  local_80 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  }
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 0;
  if (*(long *)param_1 == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x68,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 0xe) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  puVar5[0xc] = 0;
  *(undefined2 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined1 (*) [16])(puVar5 + 0x14) = (undefined1  [16])0x0;
  *puVar5 = local_98;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_90);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_88);
  puVar5[6] = local_80;
  if (*(long *)(puVar5 + 8) != local_78) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
  }
  puVar5[10] = local_70;
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_68);
  *(undefined1 *)(puVar5 + 0x12) = (undefined1)local_50;
  *(undefined1 *)((long)puVar5 + 0x49) = local_50._1_1_;
  uVar2 = *(undefined8 *)(*(long *)param_1 + 8);
  *(long *)(puVar5 + 0x18) = *(long *)param_1;
  plVar1 = *(long **)param_1;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x16) = uVar2;
  if (plVar1[1] != 0) {
    *(undefined4 **)(plVar1[1] + 0x50) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,false);
  local_f8 = 0;
  local_100 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "binary_format/embed_pck";
  local_e0 = 0x17;
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
LAB_00101a53:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,(StringName *)&local_f8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_100);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00101a53;
    StringName::StringName((StringName *)local_128,(String *)&local_c8,false);
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
  local_98 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_88,(StringName *)&local_d8);
  local_78 = 0;
  local_80 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  }
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 0;
  if (*(long *)param_1 == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x68,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 0xe) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  puVar5[0xc] = 0;
  *(undefined2 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined1 (*) [16])(puVar5 + 0x14) = (undefined1  [16])0x0;
  *puVar5 = local_98;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_90);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_88);
  puVar5[6] = local_80;
  if (*(long *)(puVar5 + 8) != local_78) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
  }
  puVar5[10] = local_70;
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_68);
  *(undefined1 *)(puVar5 + 0x12) = (undefined1)local_50;
  *(undefined1 *)((long)puVar5 + 0x49) = local_50._1_1_;
  uVar2 = *(undefined8 *)(*(long *)param_1 + 8);
  *(long *)(puVar5 + 0x18) = *(long *)param_1;
  plVar1 = *(long **)param_1;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x16) = uVar2;
  if (plVar1[1] != 0) {
    *(undefined4 **)(plVar1[1] + 0x50) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,true);
  local_f8 = 0;
  local_100 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "texture_format/s3tc_bptc";
  local_e0 = 0x18;
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
LAB_00101e6b:
    local_c0 = 6;
    StringName::operator=((StringName *)&local_d8,(StringName *)&local_f8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_100);
    local_c0 = 6;
    if (local_d0 != 0x11) goto LAB_00101e6b;
    StringName::StringName((StringName *)local_128,(String *)&local_c8,false);
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
  local_98 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_88,(StringName *)&local_d8);
  local_78 = 0;
  local_80 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  }
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 0;
  if (*(long *)param_1 == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x68,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 0xe) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  puVar5[0xc] = 0;
  *(undefined2 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined1 (*) [16])(puVar5 + 0x14) = (undefined1  [16])0x0;
  *puVar5 = local_98;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_90);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_88);
  puVar5[6] = local_80;
  if (*(long *)(puVar5 + 8) != local_78) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
  }
  puVar5[10] = local_70;
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_68);
  *(undefined1 *)(puVar5 + 0x12) = (undefined1)local_50;
  *(undefined1 *)((long)puVar5 + 0x49) = local_50._1_1_;
  uVar2 = *(undefined8 *)(*(long *)param_1 + 8);
  *(long *)(puVar5 + 0x18) = *(long *)param_1;
  plVar1 = *(long **)param_1;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x16) = uVar2;
  if (plVar1[1] != 0) {
    *(undefined4 **)(plVar1[1] + 0x50) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_b8,false);
  local_f8 = 0;
  local_100 = 0;
  local_e8 = "";
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_100);
  local_108 = 0;
  local_e8 = "texture_format/etc2_astc";
  local_e0 = 0x18;
  String::parse_latin1((StrRange *)&local_108);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,1);
  local_e0 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_108);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_100);
    local_c0 = 6;
    if (local_d0 == 0x11) {
      StringName::StringName((StringName *)local_128,(String *)&local_c8,false);
      if (local_d8 == local_f0) {
        if ((StringName::configured != '\0') && (local_f0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_d8 = local_f0;
      }
      goto LAB_00102288;
    }
  }
  local_c0 = 6;
  StringName::operator=((StringName *)&local_d8,(StringName *)&local_f8);
LAB_00102288:
  local_90 = 0;
  local_98 = local_e8._0_4_;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_e0);
  }
  StringName::StringName((StringName *)&local_88,(StringName *)&local_d8);
  local_78 = 0;
  local_80 = local_d0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
  }
  local_70 = local_c0;
  Variant::Variant((Variant *)local_68,(Variant *)local_b8);
  local_50 = 0;
  if (*(long *)param_1 == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar6;
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
  *(undefined2 *)(puVar5 + 0x12) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *puVar5 = local_98;
  *(undefined1 (*) [16])(puVar5 + 0x14) = (undefined1  [16])0x0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_90);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_88);
  puVar5[6] = local_80;
  if (*(long *)(puVar5 + 8) != local_78) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
  }
  puVar5[10] = local_70;
  Variant::operator=((Variant *)(puVar5 + 0xc),(Variant *)local_68);
  *(undefined1 *)(puVar5 + 0x12) = (undefined1)local_50;
  *(undefined1 *)((long)puVar5 + 0x49) = local_50._1_1_;
  uVar2 = *(undefined8 *)(*(long *)param_1 + 8);
  *(long *)(puVar5 + 0x18) = *(long *)param_1;
  plVar1 = *(long **)param_1;
  *(undefined8 *)(puVar5 + 0x14) = 0;
  *(undefined8 *)(puVar5 + 0x16) = uVar2;
  if (plVar1[1] != 0) {
    *(undefined4 **)(plVar1[1] + 0x50) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != 0)) {
    StringName::unref();
  }
  lVar3 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_108;
  if (local_108 != 0) {
    LOCK();
    plVar1 = (long *)(local_108 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar1 = (long *)(local_100 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar1 = (long *)(local_110 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorExportPlatformPC::has_valid_export_configuration(Ref<EditorExportPreset> const&, String&,
   bool&, bool) const */

uint EditorExportPlatformPC::has_valid_export_configuration
               (Ref *param_1,String *param_2,bool *param_3,bool param_4)

{
  long *plVar1;
  bool *pbVar2;
  code *pcVar3;
  long lVar4;
  char *pcVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  undefined7 in_register_00000009;
  uint uVar10;
  long in_FS_OFFSET;
  byte local_ca;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  pbVar2 = *(bool **)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 0;
  StringName::StringName((StringName *)&local_88,"binary_format/architecture",false);
  Object::get((StringName *)local_58,pbVar2);
  Variant::operator_cast_to_String((Variant *)&local_b0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  pcVar3 = *(code **)(*(long *)param_1 + 0x2b0);
  local_90 = 0;
  local_80 = 5;
  local_88 = _LC30;
  String::parse_latin1((StrRange *)&local_90);
  (*pcVar3)((StringName *)&local_88,param_1,(StrRange *)&local_90,(Variant *)&local_b0);
  local_ca = EditorExportPlatform::exists_export_template((String *)param_1,(String *)&local_88);
  pcVar5 = local_88;
  if (local_88 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = (char *)0x0;
      Memory::free_static(pcVar5 + -0x10,false);
    }
  }
  lVar4 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  pcVar3 = *(code **)(*(long *)param_1 + 0x2b0);
  local_90 = 0;
  local_80 = 7;
  local_88 = "release";
  String::parse_latin1((StrRange *)&local_90);
  (*pcVar3)((StringName *)&local_88,param_1,(StrRange *)&local_90,(Variant *)&local_b0);
  bVar6 = EditorExportPlatform::exists_export_template((String *)param_1,(String *)&local_88);
  pcVar5 = local_88;
  if (local_88 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = (char *)0x0;
      Memory::free_static(pcVar5 + -0x10,false);
    }
  }
  lVar4 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  Variant::Variant((Variant *)local_58,"");
  pbVar2 = *(bool **)param_2;
  StringName::StringName((StringName *)&local_88,"custom_template/debug",false);
  Object::get((StringName *)local_78,pbVar2);
  cVar7 = Variant::operator!=((Variant *)local_78,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar7 != '\0') {
    pbVar2 = *(bool **)param_2;
    StringName::StringName((StringName *)&local_90,"custom_template/debug",false);
    Object::get((StringName *)local_58,pbVar2);
    Variant::operator_cast_to_String((Variant *)&local_88);
    local_ca = FileAccess::exists((String *)&local_88);
    pcVar5 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    if (local_ca == 0) {
      local_90 = 0;
      local_88 = "\n";
      local_80 = 1;
      String::parse_latin1((StrRange *)&local_90);
      local_88 = "";
      local_a0 = 0;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = "Custom debug template not found.";
      local_a8 = 0;
      local_80 = 0x20;
      String::parse_latin1((StrRange *)&local_a8);
      TTR((String *)&local_98,(String *)&local_a8);
      String::operator+((String *)&local_88,(String *)&local_98);
      String::operator+=((String *)&local_b8,(String *)&local_88);
      pcVar5 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar4 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
    }
  }
  Variant::Variant((Variant *)local_58,"");
  pbVar2 = *(bool **)param_2;
  StringName::StringName((StringName *)&local_88,"custom_template/release",false);
  Object::get((StringName *)local_78,pbVar2);
  cVar7 = Variant::operator!=((Variant *)local_78,(Variant *)local_58);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar7 == '\0') {
    uVar10 = (uint)(local_ca | bVar6);
    bVar6 = (local_ca | bVar6) ^ 1;
  }
  else {
    pbVar2 = *(bool **)param_2;
    StringName::StringName((StringName *)&local_90,"custom_template/release",false);
    Object::get((StringName *)local_58,pbVar2);
    Variant::operator_cast_to_String((Variant *)&local_88);
    uVar10 = FileAccess::exists((String *)&local_88);
    pcVar5 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    bVar6 = 0;
    if ((char)uVar10 == '\0') {
      local_90 = 0;
      local_88 = "\n";
      local_80 = 1;
      String::parse_latin1((StrRange *)&local_90);
      local_88 = "";
      local_a0 = 0;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = "Custom release template not found.";
      local_a8 = 0;
      local_80 = 0x22;
      String::parse_latin1((StrRange *)&local_a8);
      TTR((String *)&local_98,(String *)&local_a8);
      String::operator+((String *)&local_88,(String *)&local_98);
      String::operator+=((String *)&local_b8,(String *)&local_88);
      pcVar5 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar4 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      uVar10 = (uint)local_ca;
      bVar6 = local_ca ^ 1;
    }
  }
  pbVar2 = *(bool **)param_2;
  *(byte *)CONCAT71(in_register_00000009,param_4) = bVar6;
  StringName::StringName((StringName *)&local_88,"texture_format/s3tc_bptc",false);
  Object::get((StringName *)local_58,pbVar2);
  bVar8 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  pbVar2 = *(bool **)param_2;
  StringName::StringName((StringName *)&local_88,"texture_format/etc2_astc",false);
  Object::get((StringName *)local_58,pbVar2);
  bVar9 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  if (!bVar9 && !bVar8) {
    local_88 = "";
    local_90 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = 
    "A texture format must be selected to export the project. Please select at least one texture format."
    ;
    local_98 = 0;
    local_80 = 99;
    String::parse_latin1((StrRange *)&local_98);
    TTR((String *)&local_88,(String *)&local_98);
    String::operator+=((String *)&local_b8,(String *)&local_88);
    pcVar5 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar5 + -0x10,false);
      }
    }
    lVar4 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    lVar4 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        uVar10 = 0;
        local_90 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
        goto LAB_0010323d;
      }
    }
    uVar10 = 0;
  }
LAB_0010323d:
  if (((local_b8 != 0) && (1 < *(uint *)(local_b8 + -8))) && (local_b8 != *(long *)param_3)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_b8);
  }
  lVar4 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformPC::set_name(String const&) */

void __thiscall EditorExportPlatformPC::set_name(EditorExportPlatformPC *this,String *param_1)

{
  if (*(long *)(this + 0x198) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x198),(CowData *)param_1);
    return;
  }
  return;
}



/* EditorExportPlatformPC::set_os_name(String const&) */

void __thiscall EditorExportPlatformPC::set_os_name(EditorExportPlatformPC *this,String *param_1)

{
  if (*(long *)(this + 0x1a0) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1a0),(CowData *)param_1);
    return;
  }
  return;
}



/* EditorExportPlatformPC::set_logo(Ref<Texture2D> const&) */

void __thiscall EditorExportPlatformPC::set_logo(EditorExportPlatformPC *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)(this + 400);
  if (*(long *)param_1 == 0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)(this + 400) = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(*(long *)param_1,&Object::typeinfo,&ImageTexture::typeinfo,0);
    if (pOVar3 == pOVar1) {
      return;
    }
    *(Object **)(this + 400) = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)(this + 400) = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* EditorExportPlatformPC::get_chmod_flags() const */

undefined4 __thiscall EditorExportPlatformPC::get_chmod_flags(EditorExportPlatformPC *this)

{
  return *(undefined4 *)(this + 0x1a8);
}



/* EditorExportPlatformPC::set_chmod_flags(int) */

void __thiscall EditorExportPlatformPC::set_chmod_flags(EditorExportPlatformPC *this,int param_1)

{
  *(int *)(this + 0x1a8) = param_1;
  return;
}



/* EditorExportPlatformPC::prepare_template(Ref<EditorExportPreset> const&, bool, String const&,
   BitField<EditorExportPlatform::DebugFlags>) */

int EditorExportPlatformPC::prepare_template
              (String *param_1,undefined8 *param_2,byte param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 uVar2;
  bool *pbVar3;
  long lVar4;
  code *pcVar5;
  Object *pOVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  Variant *pVVar13;
  undefined1 *puVar14;
  char *pcVar15;
  long in_FS_OFFSET;
  bool bVar16;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  Object *local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_base_dir();
  cVar9 = DirAccess::exists((String *)&local_68);
  pcVar15 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar15 + -0x10,false);
    }
  }
  if (cVar9 == '\0') {
    pcVar5 = *(code **)(*(long *)param_1 + 0x178);
    local_68 = "";
    local_78 = (char *)0x0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "The given export path doesn\'t exist.";
    local_80 = 0;
    local_60 = 0x24;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String *)&local_70,(String *)&local_80);
    local_68 = "";
    local_88 = 0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_68 = "Prepare Template";
    local_90 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_90);
    TTR((String *)&local_68,(String *)&local_90);
    (*pcVar5)(param_1,3,(String *)&local_68,(String *)&local_70);
    pcVar15 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar15 + -0x10,false);
      }
    }
    lVar4 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    lVar4 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
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
    pcVar15 = local_78;
    if (local_78 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = (char *)0x0;
        Memory::free_static(pcVar15 + -0x10,false);
      }
    }
    iVar11 = 9;
    goto LAB_00104632;
  }
  pbVar3 = (bool *)*param_2;
  StringName::StringName((StringName *)&local_68,"custom_template/debug",false);
  Object::get((StringName *)local_58,pbVar3);
  Variant::operator_cast_to_String((Variant *)&local_b8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  pbVar3 = (bool *)*param_2;
  StringName::StringName((StringName *)&local_68,"custom_template/release",false);
  Object::get((StringName *)local_58,pbVar3);
  Variant::operator_cast_to_String((Variant *)&local_b0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = (char *)0x0;
  pVVar13 = (Variant *)&local_b0;
  if (param_3 != 0) {
    pVVar13 = (Variant *)&local_b8;
  }
  plVar1 = (long *)(*(long *)pVVar13 + -0x10);
  if (*(long *)pVVar13 != 0) {
    do {
      lVar4 = *plVar1;
      if (lVar4 == 0) goto LAB_00103d31;
      LOCK();
      lVar12 = *plVar1;
      bVar16 = lVar4 == lVar12;
      if (bVar16) {
        *plVar1 = lVar4 + 1;
        lVar12 = lVar4;
      }
      UNLOCK();
    } while (!bVar16);
    if (lVar12 != -1) {
      local_a8 = *(char **)pVVar13;
    }
  }
LAB_00103d31:
  String::strip_edges(SUB81((String *)&local_68,0),SUB81((String *)&local_a8,0));
  pcVar7 = local_68;
  pcVar15 = local_a8;
  if (local_a8 == local_68) {
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      pcVar8 = local_a8;
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar7 + -0x10,false);
        pcVar8 = local_a8;
      }
      goto LAB_00103d83;
    }
LAB_00103d92:
    pbVar3 = (bool *)*param_2;
    pcVar5 = *(code **)(*(long *)param_1 + 0x2b0);
    StringName::StringName((StringName *)&local_88,"binary_format/architecture",false);
    Object::get((StringName *)local_58,pbVar3);
    Variant::operator_cast_to_String((Variant *)&local_78);
    local_80 = 0;
    local_60 = 5;
    local_68 = _LC30;
    if (param_3 == 0) {
      local_60 = 7;
      local_68 = "release";
    }
    String::parse_latin1((StrRange *)&local_80);
    (*pcVar5)(&local_70,param_1,(StrRange *)&local_80,(Variant *)&local_78);
    EditorExportPlatform::find_export_template((String *)&local_68,param_1);
    pcVar7 = local_68;
    pcVar15 = local_a8;
    if (local_a8 == local_68) {
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar7 + -0x10,false);
        }
      }
    }
    else {
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = (char *)0x0;
          Memory::free_static(pcVar15 + -0x10,false);
        }
      }
      local_a8 = local_68;
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
    pcVar15 = local_78;
    if (local_78 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = (char *)0x0;
        Memory::free_static(pcVar15 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    if ((local_a8 != (char *)0x0) && (1 < *(uint *)(local_a8 + -8))) goto LAB_00104660;
LAB_00104235:
    pbVar3 = (bool *)*param_2;
    StringName::StringName((StringName *)&local_68,"debug/export_console_wrapper",false);
    Object::get((StringName *)local_58,pbVar3);
    iVar10 = Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    DirAccess::create(&local_98,2);
    pOVar6 = local_98;
    pcVar5 = *(code **)(*(long *)local_98 + 0x1c0);
    String::get_base_dir();
    (*pcVar5)(pOVar6);
    pcVar15 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar15 + -0x10,false);
      }
    }
    iVar11 = (**(code **)(*(long *)local_98 + 0x1f8))
                       (local_98,(String *)&local_a8,param_4,*(undefined4 *)(param_1 + 0x1a8));
    if (iVar11 == 0) {
      if ((iVar10 == 1 & param_3) == 0 && iVar10 != 2) {
LAB_00104590:
        if (iVar11 != 0) goto LAB_00104880;
      }
      else {
        puVar14 = prepare_template(Ref<EditorExportPreset>const&,bool,String_const&,BitField<EditorExportPlatform::DebugFlags>)
                  ::wrapper_extensions;
        pcVar15 = ".console.exe";
        do {
          local_70 = 0;
          local_60 = strlen(pcVar15);
          local_68 = pcVar15;
          String::parse_latin1((StrRange *)&local_70);
          String::get_basename();
          String::operator+((String *)&local_80,(String *)&local_68);
          pcVar15 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar15 + -0x10,false);
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
          cVar9 = FileAccess::exists((String *)&local_80);
          lVar4 = local_80;
          pOVar6 = local_98;
          if (cVar9 != '\0') {
            uVar2 = *(undefined4 *)(param_1 + 0x1a8);
            pcVar5 = *(code **)(*(long *)local_98 + 0x1f8);
            local_70 = 0;
            local_68 = ".console.exe";
            local_60 = 0xc;
            String::parse_latin1((StrRange *)&local_70);
            String::get_basename();
            String::operator+((String *)&local_68,(String *)&local_78);
            iVar11 = (*pcVar5)(pOVar6,(String *)&local_80,(String *)&local_68,uVar2);
            pcVar15 = local_68;
            if (local_68 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_68 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar15 + -0x10,false);
              }
            }
            pcVar15 = local_78;
            if (local_78 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_78 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_78 = (char *)0x0;
                Memory::free_static(pcVar15 + -0x10,false);
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
            goto LAB_00104590;
          }
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
          pcVar15 = *(char **)(puVar14 + 8);
          puVar14 = puVar14 + 8;
        } while (pcVar15 != (char *)0x0);
      }
      iVar11 = 0;
    }
    else {
LAB_00104880:
      pcVar5 = *(code **)(*(long *)param_1 + 0x178);
      local_68 = "";
      local_78 = (char *)0x0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_78);
      local_68 = "Failed to copy export template.";
      local_80 = 0;
      local_60 = 0x1f;
      String::parse_latin1((StrRange *)&local_80);
      TTR((String *)&local_70,(String *)&local_80);
      local_68 = "";
      local_88 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_88);
      local_68 = "Prepare Template";
      local_90 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange *)&local_90);
      TTR((String *)&local_68,(String *)&local_90);
      (*pcVar5)(param_1,3,(String *)&local_68,(String *)&local_70);
      pcVar15 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar15 + -0x10,false);
        }
      }
      lVar4 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      lVar4 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = 0;
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
      pcVar15 = local_78;
      if (local_78 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = (char *)0x0;
          Memory::free_static(pcVar15 + -0x10,false);
        }
      }
    }
    if (((local_98 != (Object *)0x0) &&
        (cVar9 = RefCounted::unreference(), pOVar6 = local_98, cVar9 != '\0')) &&
       (cVar9 = predelete_handler(local_98), cVar9 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
  else {
    pcVar8 = local_68;
    if (local_a8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      pcVar8 = local_68;
      if (*plVar1 == 0) {
        local_a8 = (char *)0x0;
        Memory::free_static(pcVar15 + -0x10,false);
        pcVar8 = local_68;
      }
    }
LAB_00103d83:
    local_a8 = pcVar8;
    if ((local_a8 == (char *)0x0) || (*(uint *)(local_a8 + -8) < 2)) goto LAB_00103d92;
LAB_00104660:
    cVar9 = FileAccess::exists((String *)&local_a8);
    if (cVar9 != '\0') goto LAB_00104235;
    pcVar5 = *(code **)(*(long *)param_1 + 0x178);
    local_78 = (char *)0x0;
    plVar1 = (long *)(local_a8 + -0x10);
    if (local_a8 != (char *)0x0) {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_001046b5;
        LOCK();
        lVar12 = *plVar1;
        bVar16 = lVar4 == lVar12;
        if (bVar16) {
          *plVar1 = lVar4 + 1;
          lVar12 = lVar4;
        }
        UNLOCK();
      } while (!bVar16);
      if (lVar12 != -1) {
        local_78 = local_a8;
      }
    }
LAB_001046b5:
    local_88 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_68 = "Template file not found: \"%s\".";
    local_90 = 0;
    local_60 = 0x1e;
    String::parse_latin1((StrRange *)&local_90);
    TTR((String *)&local_80,(String *)&local_90);
    vformat<String>((CowData<char32_t> *)&local_70,(String *)&local_80,
                    (CowData<char32_t> *)&local_78);
    local_68 = "";
    local_98 = (Object *)0x0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_98);
    local_68 = "Prepare Template";
    local_a0 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_a0);
    TTR((String *)&local_68,(String *)&local_a0);
    (*pcVar5)(param_1,3,(String *)&local_68,(CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar11 = 7;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  }
  pcVar15 = local_a8;
  if (local_a8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = (char *)0x0;
      Memory::free_static(pcVar15 + -0x10,false);
    }
  }
  lVar4 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
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
LAB_00104632:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformPC::export_project_data(Ref<EditorExportPreset> const&, bool, String const&,
   BitField<EditorExportPlatform::DebugFlags>) */

int EditorExportPlatformPC::export_project_data
              (Ref *param_1,undefined8 *param_2,byte param_3,CowData *param_4)

{
  long *plVar1;
  bool *pbVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  char *local_e0;
  long local_d8;
  long local_d0;
  Object *local_c8;
  char *local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  char *local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pbVar2 = (bool *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = (char *)0x0;
  StringName::StringName((StringName *)&local_68,"binary_format/embed_pck",false);
  Object::get((StringName *)local_58,pbVar2);
  bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (bVar6) {
    if (local_e0 != *(char **)param_4) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,param_4);
    }
  }
  else {
    local_78 = 0;
    local_68 = ".pck";
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_78);
    String::get_basename();
    String::operator+((String *)&local_68,(String *)&local_80);
    pcVar5 = local_68;
    pcVar4 = local_e0;
    if (local_e0 == local_68) {
      if (local_e0 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_e0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
    }
    else {
      if (local_e0 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_e0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_e0 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      local_e0 = local_68;
    }
    lVar12 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    lVar12 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
  }
  local_70 = 0;
  pbVar2 = (bool *)*param_2;
  StringName::StringName((StringName *)&local_68,"binary_format/embed_pck",false);
  Object::get((StringName *)local_58,pbVar2);
  bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
  iVar8 = EditorExportPlatform::save_pack
                    (param_1,SUB81(param_2,0),(String *)(ulong)param_3,(Vector *)&local_e0,
                     (_func_Error_void_ptr_String_ptr_Vector_ptr_int_int_Vector_ptr_Vector_ptr_Vector_ptr_ulong
                      *)&local_78,(_func_Error_void_ptr_String_ptr *)0x0,false,(long *)(ulong)bVar6,
                     &local_d8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  iVar9 = iVar8;
  if (iVar8 == 0) {
    pbVar2 = (bool *)*param_2;
    StringName::StringName((StringName *)&local_68,"binary_format/embed_pck",false);
    Object::get((StringName *)local_58,pbVar2);
    bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    if (bVar6) {
      if (local_d0 < 0x100000000) {
        lVar12 = *(long *)param_1;
      }
      else {
        pbVar2 = (bool *)*param_2;
        StringName::StringName((StringName *)&local_80,"binary_format/architecture",false);
        Object::get((StringName *)local_58,pbVar2);
        Variant::operator_cast_to_String((Variant *)&local_68);
        iVar9 = String::find((char *)&local_68,0x106b66);
        pcVar4 = local_68;
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
        lVar12 = *(long *)param_1;
        if (iVar9 != -1) {
          pcVar3 = *(code **)(lVar12 + 0x178);
          local_88 = (char *)0x0;
          local_68 = "";
          local_60 = 0;
          String::parse_latin1((StrRange *)&local_88);
          local_68 = "On 32-bit exports the embedded PCK cannot be bigger than 4 GiB.";
          local_90 = 0;
          local_60 = 0x3f;
          String::parse_latin1((StrRange *)&local_90);
          TTR((String *)&local_80,(String *)&local_90);
          local_68 = "";
          local_98 = 0;
          local_60 = 0;
          String::parse_latin1((StrRange *)&local_98);
          local_68 = "PCK Embedding";
          local_a0 = 0;
          local_60 = 0xd;
          String::parse_latin1((StrRange *)&local_a0);
          TTR((String *)&local_68,(String *)&local_a0);
          (*pcVar3)(param_1,3,(StringName *)&local_68,(StringName *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          iVar9 = 0x1f;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          goto LAB_00104ccb;
        }
      }
      if ((*(code **)(lVar12 + 0x2d0) != fixup_embedded_pck) &&
         (iVar9 = (**(code **)(lVar12 + 0x2d0))(param_1,param_4,local_d8,local_d0), iVar9 != 0))
      goto LAB_00104ccb;
    }
    iVar9 = iVar8;
    if (local_70 != 0) {
      DirAccess::create(&local_c8);
      if ((local_70 == 0) || (lVar12 = 0, *(long *)(local_70 + -8) < 1)) {
        iVar9 = 0;
      }
      else {
        do {
          ProjectSettings::get_singleton();
          if (local_70 == 0) {
LAB_00105300:
            lVar11 = 0;
LAB_00105303:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar11,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar11 = *(long *)(local_70 + -8);
          if (lVar11 <= lVar12) goto LAB_00105303;
          ProjectSettings::globalize_path((String *)&local_c0);
          local_b8 = (char *)0x0;
          if (local_70 == 0) goto LAB_00105300;
          lVar11 = *(long *)(local_70 + -8);
          if (lVar11 <= lVar12) goto LAB_00105303;
          lVar11 = *(long *)(local_70 + 0x18 + lVar12 * 0x20);
          if ((lVar11 == 0) || (*(uint *)(lVar11 + -8) < 2)) {
            String::get_base_dir();
            pcVar5 = local_68;
            pcVar4 = local_b8;
            if (local_b8 == local_68) {
              if (local_b8 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_b8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_68 = (char *)0x0;
                  Memory::free_static(pcVar5 + -0x10,false);
                }
              }
            }
            else {
              if (local_b8 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_b8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_b8 = (char *)0x0;
                  Memory::free_static(pcVar4 + -0x10,false);
                }
              }
              local_b8 = local_68;
            }
          }
          else {
            String::get_base_dir();
            if (local_70 == 0) goto LAB_00105300;
            lVar11 = *(long *)(local_70 + -8);
            if (lVar11 <= lVar12) goto LAB_00105303;
            String::path_join((String *)&local_68);
            if (local_b8 != local_68) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              local_b8 = local_68;
              local_68 = (char *)0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            (**(code **)(*(long *)local_c8 + 0x1c0))(local_c8,(CowData<char32_t> *)&local_b8);
          }
          String::get_file();
          String::path_join((String *)&local_68);
          pcVar5 = local_68;
          pcVar4 = local_b8;
          if (local_b8 == local_68) {
            if (local_b8 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_b8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar5 + -0x10,false);
              }
            }
          }
          else {
            if (local_b8 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_b8 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_b8 = (char *)0x0;
                Memory::free_static(pcVar4 + -0x10,false);
              }
            }
            local_b8 = local_68;
          }
          lVar11 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          pcVar3 = *(code **)(*(long *)local_c8 + 0x1d8);
          local_68 = (char *)0x0;
          plVar1 = (long *)(local_c0 + -0x10);
          if (local_c0 != (char *)0x0) {
            do {
              lVar11 = *plVar1;
              if (lVar11 == 0) goto LAB_00104fa0;
              LOCK();
              lVar10 = *plVar1;
              bVar6 = lVar11 == lVar10;
              if (bVar6) {
                *plVar1 = lVar11 + 1;
                lVar10 = lVar11;
              }
              UNLOCK();
            } while (!bVar6);
            if (lVar10 != -1) {
              local_68 = local_c0;
            }
          }
LAB_00104fa0:
          cVar7 = (*pcVar3)();
          pcVar4 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar4 + -0x10,false);
            }
          }
          if (cVar7 == '\0') {
            iVar9 = (**(code **)(*(long *)local_c8 + 0x1f8))
                              (local_c8,(String *)&local_c0,&local_b8,0xffffffff);
            if (iVar9 == 0) {
              pcVar3 = *(code **)(*(long *)param_1 + 0x2a8);
              if (pcVar3 == sign_shared_object) goto LAB_001052f2;
              iVar9 = (*pcVar3)(param_1,param_2,param_3,&local_b8);
            }
            else {
              pcVar3 = *(code **)(*(long *)param_1 + 0x178);
              local_88 = (char *)0x0;
              plVar1 = (long *)(local_c0 + -0x10);
              if (local_c0 != (char *)0x0) {
                do {
                  lVar11 = *plVar1;
                  if (lVar11 == 0) goto LAB_001058ff;
                  LOCK();
                  lVar10 = *plVar1;
                  bVar6 = lVar11 == lVar10;
                  if (bVar6) {
                    *plVar1 = lVar11 + 1;
                    lVar10 = lVar11;
                  }
                  UNLOCK();
                } while (!bVar6);
                if (lVar10 != -1) {
                  local_88 = local_c0;
                }
              }
LAB_001058ff:
              local_68 = "";
              local_98 = 0;
              local_60 = 0;
              String::parse_latin1((StrRange *)&local_98);
              local_68 = "Failed to copy shared object \"%s\".";
              local_a0 = 0;
              local_60 = 0x22;
              String::parse_latin1((StrRange *)&local_a0);
              TTR((String *)&local_90,(String *)&local_a0);
              vformat<String>((CowData<char32_t> *)&local_80,(String *)&local_90,
                              (CowData<char32_t> *)&local_88);
              local_68 = "";
              local_a8 = 0;
              local_60 = 0;
              String::parse_latin1((StrRange *)&local_a8);
              local_b0 = 0;
              local_68 = "GDExtension";
              local_60 = 0xb;
              String::parse_latin1((StrRange *)&local_b0);
              TTR((String *)&local_68,(String *)&local_b0);
              (*pcVar3)(param_1,3,(StringName *)&local_68,(CowData<char32_t> *)&local_80);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
              lVar11 = local_80;
              if (local_80 != 0) {
                LOCK();
                plVar1 = (long *)(local_80 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_80 = 0;
                  Memory::free_static((void *)(lVar11 + -0x10),false);
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
              lVar11 = local_a0;
              if (local_a0 != 0) {
                LOCK();
                plVar1 = (long *)(local_a0 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_a0 = 0;
                  Memory::free_static((void *)(lVar11 + -0x10),false);
                }
              }
              lVar11 = local_98;
              if (local_98 != 0) {
                LOCK();
                plVar1 = (long *)(local_98 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_98 = 0;
                  Memory::free_static((void *)(lVar11 + -0x10),false);
                }
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            }
          }
          else {
            iVar9 = (**(code **)(*(long *)local_c8 + 0x1c0))();
            if (iVar9 == 0) {
              local_68 = (char *)0x0;
              plVar1 = (long *)(local_b8 + -0x10);
              if (local_b8 != (char *)0x0) {
                do {
                  lVar11 = *plVar1;
                  if (lVar11 == 0) goto LAB_0010568b;
                  LOCK();
                  lVar10 = *plVar1;
                  bVar6 = lVar11 == lVar10;
                  if (bVar6) {
                    *plVar1 = lVar11 + 1;
                    lVar10 = lVar11;
                  }
                  UNLOCK();
                } while (!bVar6);
                if (lVar10 != -1) {
                  local_68 = local_b8;
                }
              }
LAB_0010568b:
              iVar9 = DirAccess::copy_dir(local_c8,(String *)&local_c0,(StringName *)&local_68,
                                          0xffffffff);
              pcVar4 = local_68;
              if (local_68 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_68 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_68 = (char *)0x0;
                  Memory::free_static(pcVar4 + -0x10,false);
                }
              }
              if (iVar9 == 0) {
LAB_001052f2:
                iVar9 = 0;
              }
              else {
                pcVar3 = *(code **)(*(long *)param_1 + 0x178);
                local_88 = (char *)0x0;
                plVar1 = (long *)(local_c0 + -0x10);
                if (local_c0 != (char *)0x0) {
                  do {
                    lVar11 = *plVar1;
                    if (lVar11 == 0) goto LAB_00105713;
                    LOCK();
                    lVar10 = *plVar1;
                    bVar6 = lVar11 == lVar10;
                    if (bVar6) {
                      *plVar1 = lVar11 + 1;
                      lVar10 = lVar11;
                    }
                    UNLOCK();
                  } while (!bVar6);
                  if (lVar10 != -1) {
                    local_88 = local_c0;
                  }
                }
LAB_00105713:
                local_68 = "";
                local_98 = 0;
                local_60 = 0;
                String::parse_latin1((StrRange *)&local_98);
                local_a0 = 0;
                local_68 = "Failed to copy shared object \"%s\".";
                local_60 = 0x22;
                String::parse_latin1((StrRange *)&local_a0);
                TTR((String *)&local_90,(String *)&local_a0);
                vformat<String>((CowData<char32_t> *)&local_80,(String *)&local_90,
                                (CowData<char32_t> *)&local_88);
                local_68 = "";
                local_a8 = 0;
                local_60 = 0;
                String::parse_latin1((StrRange *)&local_a8);
                local_68 = "GDExtension";
                local_b0 = 0;
                local_60 = 0xb;
                String::parse_latin1((StrRange *)&local_b0);
                TTR((String *)&local_68,(String *)&local_b0);
                (*pcVar3)(param_1,3,(StringName *)&local_68,(CowData<char32_t> *)&local_80);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              }
            }
          }
          pcVar4 = local_b8;
          if (local_b8 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_b8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_b8 = (char *)0x0;
              Memory::free_static(pcVar4 + -0x10,false);
            }
          }
          pcVar4 = local_c0;
          if (local_c0 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_c0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_c0 = (char *)0x0;
              Memory::free_static(pcVar4 + -0x10,false);
            }
          }
          lVar12 = lVar12 + 1;
        } while (((local_70 != 0) && (lVar12 < *(long *)(local_70 + -8))) && (iVar9 == 0));
      }
      if (((local_c8 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
         (cVar7 = predelete_handler(local_c8), cVar7 != '\0')) {
        (**(code **)(*(long *)local_c8 + 0x140))(local_c8);
        Memory::free_static(local_c8,false);
      }
    }
  }
LAB_00104ccb:
  CowData<SharedObject>::_unref((CowData<SharedObject> *)&local_70);
  pcVar4 = local_e0;
  if (local_e0 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = (char *)0x0;
      Memory::free_static(pcVar4 + -0x10,false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
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



/* EditorExportPlatform::get_export_option_visibility(EditorExportPreset const*, String const&)
   const */

undefined8
EditorExportPlatform::get_export_option_visibility(EditorExportPreset *param_1,String *param_2)

{
  return 1;
}



/* EditorExportPlatform::get_export_option_warning(EditorExportPreset const*, StringName const&)
   const */

EditorExportPreset *
EditorExportPlatform::get_export_option_warning(EditorExportPreset *param_1,StringName *param_2)

{
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* EditorExportPlatform::poll_export() */

undefined8 EditorExportPlatform::poll_export(void)

{
  return 0;
}



/* EditorExportPlatform::get_options_count() const */

undefined8 EditorExportPlatform::get_options_count(void)

{
  return 0;
}



/* EditorExportPlatform::cleanup() */

void EditorExportPlatform::cleanup(void)

{
  return;
}



/* EditorExportPlatform::run(Ref<EditorExportPreset> const&, int,
   BitField<EditorExportPlatform::DebugFlags>) */

undefined8 EditorExportPlatform::run(void)

{
  return 0;
}



/* EditorExportPlatform::get_custom_project_settings(Ref<EditorExportPreset> const&) const */

Ref * EditorExportPlatform::get_custom_project_settings(Ref *param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 2;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
  return param_1;
}



/* EditorExportPlatformPC::is_class_ptr(void*) const */

uint __thiscall EditorExportPlatformPC::is_class_ptr(EditorExportPlatformPC *this,void *param_1)

{
  return (uint)CONCAT71(0x10a0,(undefined4 *)param_1 ==
                               &EditorExportPlatform::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a0,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorExportPlatformPC::_getv(StringName const&, Variant&) const */

undefined8 EditorExportPlatformPC::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportPlatformPC::_setv(StringName const&, Variant const&) */

undefined8 EditorExportPlatformPC::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportPlatformPC::_validate_propertyv(PropertyInfo&) const */

void EditorExportPlatformPC::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorExportPlatformPC::_property_can_revertv(StringName const&) const */

undefined8 EditorExportPlatformPC::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorExportPlatformPC::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorExportPlatformPC::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExportPlatformPC::_notificationv(int, bool) */

void EditorExportPlatformPC::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorExportPlatformPC::modify_template(Ref<EditorExportPreset> const&, bool, String const&,
   BitField<EditorExportPlatform::DebugFlags>) */

undefined8 EditorExportPlatformPC::modify_template(void)

{
  return 0;
}



/* EditorExportPlatformPC::fixup_embedded_pck(String const&, long, long) */

undefined8 EditorExportPlatformPC::fixup_embedded_pck(String *param_1,long param_2,long param_3)

{
  return 0;
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
      goto LAB_00106109;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined4 *)(lVar1 + lVar2 * 0x18);
    }
    goto LAB_00106109;
  }
  lVar3 = 0;
LAB_00106109:
  _err_print_index_error
            ("_get_message_type","editor/export/editor_export_platform.h",0x104,lVar2,lVar3,
             "p_index","messages.size()","",false,false);
  return 0;
}



/* EditorExportPlatform::get_run_icon() const */

void EditorExportPlatform::get_run_icon(void)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long *in_RSI;
  long *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*in_RSI + 0x1e8) == EditorExportPlatformPC::get_logo) {
    *in_RDI = 0;
    if (in_RSI[0x32] != 0) {
      lVar3 = __dynamic_cast(in_RSI[0x32],&Object::typeinfo,&Texture2D::typeinfo,0);
      if (lVar3 != 0) {
        *in_RDI = lVar3;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *in_RDI = 0;
        }
      }
    }
  }
  else {
    (**(code **)(*in_RSI + 0x1e8))();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformPC::_get_class_namev() const */

undefined8 * EditorExportPlatformPC::_get_class_namev(void)

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
LAB_00106253:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106253;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorExportPlatformPC");
      goto LAB_001062be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorExportPlatformPC");
LAB_001062be:
  return &_get_class_namev()::_class_name_static;
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



/* EditorExportPlatform::get_option_tooltip(int) const */

undefined8 EditorExportPlatform::get_option_tooltip(int param_1)

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



/* EditorExportPlatform::get_option_label(int) const */

undefined8 EditorExportPlatform::get_option_label(int param_1)

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
      goto LAB_00106599;
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
    goto LAB_00106599;
  }
  lVar3 = 0;
LAB_00106599:
  _err_print_index_error
            ("_get_message_category","editor/export/editor_export_platform.h",0x109,lVar2,lVar3,
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
      goto LAB_00106659;
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
    goto LAB_00106659;
  }
  lVar3 = 0;
LAB_00106659:
  _err_print_index_error
            ("_get_message_text","editor/export/editor_export_platform.h",0x10e,lVar2,lVar3,
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
      goto LAB_00106749;
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
    goto LAB_00106749;
  }
  lVar6 = 0;
LAB_00106749:
  _err_print_index_error
            ("get_message","editor/export/editor_export_platform.h",0xff,lVar4,lVar6,"p_index",
             "messages.size()","",false,false);
  *puVar5 = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  return puVar5;
}



/* EditorExportPlatformPC::get_class() const */

void EditorExportPlatformPC::get_class(void)

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
        if (pvVar5 == (void *)0x0) goto LAB_001069d4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001069d4:
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



/* EditorExportPlatformPC::_initialize_classv() */

void EditorExportPlatformPC::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_0010c008 != RefCounted::_bind_methods) {
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
            if (lVar5 == 0) goto LAB_0010726f;
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
LAB_0010726f:
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
    if (cVar6 != '\0') goto LAB_00107323;
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
              if (lVar5 == 0) goto LAB_001073d3;
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
LAB_001073d3:
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
      if (cVar6 != '\0') goto LAB_00107323;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00107323:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformPC::is_class(String const&) const */

undefined8 __thiscall EditorExportPlatformPC::is_class(EditorExportPlatformPC *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001074ff;
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
LAB_001074ff:
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
    if (cVar6 != '\0') goto LAB_001075b3;
  }
  cVar6 = String::operator==(param_1,"EditorExportPlatformPC");
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
              if (lVar5 == 0) goto LAB_00107673;
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
LAB_00107673:
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
      if (cVar6 != '\0') goto LAB_001075b3;
    }
    cVar6 = String::operator==(param_1,"EditorExportPlatform");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010771c;
    }
  }
LAB_001075b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010771c:
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
LAB_00107898:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107898;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001078b6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001078b6:
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



/* EditorExportPlatform::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorExportPlatform::_get_property_listv(EditorExportPlatform *this,List *param_1,bool param_2)

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
LAB_00107c98:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107c98;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107cb5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107cb5:
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
LAB_001080e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001080e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108105;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108105:
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



/* WARNING: Removing unreachable block (ram,0x00108548) */
/* WARNING: Removing unreachable block (ram,0x00108678) */
/* WARNING: Removing unreachable block (ram,0x00108840) */
/* WARNING: Removing unreachable block (ram,0x00108684) */
/* WARNING: Removing unreachable block (ram,0x0010868e) */
/* WARNING: Removing unreachable block (ram,0x00108820) */
/* WARNING: Removing unreachable block (ram,0x0010869a) */
/* WARNING: Removing unreachable block (ram,0x001086a4) */
/* WARNING: Removing unreachable block (ram,0x00108800) */
/* WARNING: Removing unreachable block (ram,0x001086b0) */
/* WARNING: Removing unreachable block (ram,0x001086ba) */
/* WARNING: Removing unreachable block (ram,0x001087e0) */
/* WARNING: Removing unreachable block (ram,0x001086c6) */
/* WARNING: Removing unreachable block (ram,0x001086d0) */
/* WARNING: Removing unreachable block (ram,0x001087c0) */
/* WARNING: Removing unreachable block (ram,0x001086dc) */
/* WARNING: Removing unreachable block (ram,0x001086e6) */
/* WARNING: Removing unreachable block (ram,0x001087a0) */
/* WARNING: Removing unreachable block (ram,0x001086f2) */
/* WARNING: Removing unreachable block (ram,0x001086fc) */
/* WARNING: Removing unreachable block (ram,0x00108780) */
/* WARNING: Removing unreachable block (ram,0x00108704) */
/* WARNING: Removing unreachable block (ram,0x0010871a) */
/* WARNING: Removing unreachable block (ram,0x00108726) */
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



/* WARNING: Removing unreachable block (ram,0x001089c0) */
/* WARNING: Removing unreachable block (ram,0x00108af0) */
/* WARNING: Removing unreachable block (ram,0x00108c69) */
/* WARNING: Removing unreachable block (ram,0x00108afc) */
/* WARNING: Removing unreachable block (ram,0x00108b06) */
/* WARNING: Removing unreachable block (ram,0x00108c4b) */
/* WARNING: Removing unreachable block (ram,0x00108b12) */
/* WARNING: Removing unreachable block (ram,0x00108b1c) */
/* WARNING: Removing unreachable block (ram,0x00108c2d) */
/* WARNING: Removing unreachable block (ram,0x00108b28) */
/* WARNING: Removing unreachable block (ram,0x00108b32) */
/* WARNING: Removing unreachable block (ram,0x00108c0f) */
/* WARNING: Removing unreachable block (ram,0x00108b3e) */
/* WARNING: Removing unreachable block (ram,0x00108b48) */
/* WARNING: Removing unreachable block (ram,0x00108bf1) */
/* WARNING: Removing unreachable block (ram,0x00108b54) */
/* WARNING: Removing unreachable block (ram,0x00108b5e) */
/* WARNING: Removing unreachable block (ram,0x00108bd3) */
/* WARNING: Removing unreachable block (ram,0x00108b66) */
/* WARNING: Removing unreachable block (ram,0x00108b70) */
/* WARNING: Removing unreachable block (ram,0x00108bb8) */
/* WARNING: Removing unreachable block (ram,0x00108b78) */
/* WARNING: Removing unreachable block (ram,0x00108b8e) */
/* WARNING: Removing unreachable block (ram,0x00108b9a) */
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



/* CowData<SharedObject>::_unref() */

void __thiscall CowData<SharedObject>::_unref(CowData<SharedObject> *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    lVar4 = plVar1[-1];
    *(undefined8 *)this = 0;
    if (lVar4 != 0) {
      lVar9 = 0;
      plVar10 = plVar1;
      do {
        if (plVar10[3] != 0) {
          LOCK();
          plVar2 = (long *)(plVar10[3] + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar5 = plVar10[3];
            plVar10[3] = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        if (plVar10[2] != 0) {
          LOCK();
          plVar2 = (long *)(plVar10[2] + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            plVar2 = (long *)plVar10[2];
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            lVar5 = plVar2[-1];
            plVar10[2] = 0;
            if (lVar5 != 0) {
              lVar11 = 0;
              plVar8 = plVar2;
              do {
                if (*plVar8 != 0) {
                  LOCK();
                  plVar3 = (long *)(*plVar8 + -0x10);
                  *plVar3 = *plVar3 + -1;
                  UNLOCK();
                  if (*plVar3 == 0) {
                    lVar6 = *plVar8;
                    *plVar8 = 0;
                    Memory::free_static((void *)(lVar6 + -0x10),false);
                  }
                }
                lVar11 = lVar11 + 1;
                plVar8 = plVar8 + 1;
              } while (lVar5 != lVar11);
            }
            Memory::free_static(plVar2 + -2,false);
          }
        }
        if (*plVar10 != 0) {
          LOCK();
          plVar2 = (long *)(*plVar10 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar5 = *plVar10;
            *plVar10 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        lVar9 = lVar9 + 1;
        plVar10 = plVar10 + 4;
      } while (lVar4 != lVar9);
    }
    Memory::free_static(plVar1 + -2,false);
    return;
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



/* CowData<EditorExportPlatform::ExportMessage>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorExportPlatform::ExportMessage>::_copy_on_write(void)

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
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  
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
    lVar9 = 0;
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
    lVar9 = lVar7 * 0x18;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_00109390:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x18 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar13 = uVar10 + 1;
  if (lVar13 == 0) goto LAB_00109390;
  uVar11 = param_1;
  if (param_1 <= lVar7) {
    while (lVar7 = *(long *)this, lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar11) {
        if (lVar13 != lVar9) {
          uVar6 = _realloc(this,lVar13);
          if ((int)uVar6 != 0) {
            return uVar6;
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
      lVar7 = lVar7 + uVar11 * 0x18;
      if (*(long *)(lVar7 + 0x10) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 0x10) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 0x10);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if (*(long *)(lVar7 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar7 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)(lVar7 + 8);
          *(undefined8 *)(lVar7 + 8) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      uVar11 = uVar11 + 1;
    }
    goto LAB_001093e6;
  }
  if (lVar13 == lVar9) {
LAB_001092fb:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
LAB_001093e6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_00109211;
  }
  else {
    if (lVar7 != 0) {
      uVar6 = _realloc(this,lVar13);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_001092fb;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
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
  puVar12 = puVar8 + param_1 * 3;
  puVar4 = puVar8 + lVar7 * 3;
  puVar5 = puVar4;
  if (((int)puVar12 - (int)puVar4 & 8U) != 0) {
    *(undefined1 (*) [16])(puVar4 + 1) = (undefined1  [16])0x0;
    puVar5 = puVar4 + 3;
    if (puVar4 + 3 == puVar12) goto LAB_00109211;
  }
  do {
    *(undefined1 (*) [16])(puVar5 + 1) = (undefined1  [16])0x0;
    puVar4 = puVar5 + 6;
    *(undefined1 (*) [16])(puVar5 + 4) = (undefined1  [16])0x0;
    puVar5 = puVar4;
  } while (puVar4 != puVar12);
LAB_00109211:
  puVar8[-1] = param_1;
  return 0;
}



/* EditorExportPlatform::add_message(EditorExportPlatform::ExportMessageType, String const&, String
   const&) */

void __thiscall
EditorExportPlatform::add_message
          (EditorExportPlatform *this,int param_2,long *param_3,CowData *param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  int local_88;
  long local_80;
  long alStack_78 [2];
  char *local_68;
  long local_60;
  long local_58 [2];
  int local_48 [6];
  long local_30;
  
  lVar6 = *param_3;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + -0x10);
    do {
      lVar6 = *plVar1;
      if (lVar6 == 0) goto LAB_001094be;
      LOCK();
      lVar7 = *plVar1;
      bVar10 = lVar6 == lVar7;
      if (bVar10) {
        *plVar1 = lVar6 + 1;
        lVar7 = lVar6;
      }
      UNLOCK();
    } while (!bVar10);
    if (lVar7 != -1) {
      local_80 = *param_3;
    }
LAB_001094be:
    alStack_78[0] = 0;
    lVar6 = alStack_78[0];
  }
  alStack_78[0] = 0;
  if (*(long *)param_4 != lVar6) {
    CowData<char32_t>::_ref((CowData<char32_t> *)alStack_78,param_4);
    lVar6 = alStack_78[0];
  }
  local_68 = (char *)CONCAT44(local_68._4_4_,param_2);
  local_60 = 0;
  local_88 = param_2;
  if (local_80 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_80);
  }
  local_58[0] = 0;
  if (lVar6 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)alStack_78);
    lVar6 = local_58[0];
  }
  if (*(long *)(this + 0x188) == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 0x188) + -8) + 1;
  }
  iVar4 = CowData<EditorExportPlatform::ExportMessage>::resize<false>
                    ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188),lVar7);
  if (iVar4 == 0) {
    if (*(long *)(this + 0x188) == 0) {
      lVar9 = -1;
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(this + 0x188) + -8);
      lVar9 = lVar7 + -1;
      if (-1 < lVar9) {
        CowData<EditorExportPlatform::ExportMessage>::_copy_on_write
                  ((CowData<EditorExportPlatform::ExportMessage> *)(this + 0x188));
        puVar2 = (undefined4 *)(*(long *)(this + 0x188) + lVar9 * 0x18);
        *puVar2 = local_68._0_4_;
        if (*(long *)(puVar2 + 2) != local_60) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 2),(CowData *)&local_60);
        }
        if (*(long *)(puVar2 + 4) != lVar6) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 4),(CowData *)local_58);
        }
        goto LAB_001095c5;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar7,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_001095c5:
  if (lVar6 != 0) {
    LOCK();
    plVar1 = (long *)(lVar6 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_58[0] + -0x10),false);
    }
  }
  if (local_60 == 0) {
LAB_001095ec:
    if (param_2 != 2) goto LAB_001095fa;
LAB_00109806:
    local_90 = 0;
    plVar1 = (long *)(alStack_78[0] + -0x10);
    if (alStack_78[0] != 0) {
      do {
        lVar6 = *plVar1;
        if (lVar6 == 0) goto LAB_0010983b;
        LOCK();
        lVar7 = *plVar1;
        bVar10 = lVar6 == lVar7;
        if (bVar10) {
          *plVar1 = lVar6 + 1;
          lVar7 = lVar6;
        }
        UNLOCK();
      } while (!bVar10);
      if (lVar7 != -1) {
        local_90 = alStack_78[0];
      }
    }
LAB_0010983b:
    local_98 = 0;
    plVar1 = (long *)(local_80 + -0x10);
    if (local_80 != 0) {
      do {
        lVar6 = *plVar1;
        if (lVar6 == 0) goto LAB_00109875;
        LOCK();
        lVar7 = *plVar1;
        bVar10 = lVar6 == lVar7;
        if (bVar10) {
          *plVar1 = lVar6 + 1;
          lVar7 = lVar6;
        }
        UNLOCK();
      } while (!bVar10);
      if (lVar7 != -1) {
        local_98 = local_80;
      }
    }
LAB_00109875:
    local_a0 = 0;
    local_60 = 6;
    local_68 = "%s: %s";
    String::parse_latin1((StrRange *)&local_a0);
    vformat<String,String>(&local_68,(StrRange *)&local_a0,&local_98,&local_90);
    uVar5 = 0xf0;
    uVar8 = 1;
LAB_001099b5:
    _err_print_error("add_message","editor/export/editor_export_platform.h",uVar5,&local_68,0,uVar8)
    ;
    pcVar3 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar6 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_001095ec;
    Memory::free_static((void *)(local_60 + -0x10),false);
    if (param_2 == 2) goto LAB_00109806;
LAB_001095fa:
    if (param_2 == 3) {
      local_90 = 0;
      plVar1 = (long *)(alStack_78[0] + -0x10);
      if (alStack_78[0] != 0) {
        do {
          lVar6 = *plVar1;
          if (lVar6 == 0) goto LAB_00109925;
          LOCK();
          lVar7 = *plVar1;
          bVar10 = lVar6 == lVar7;
          if (bVar10) {
            *plVar1 = lVar6 + 1;
            lVar7 = lVar6;
          }
          UNLOCK();
        } while (!bVar10);
        if (lVar7 != -1) {
          local_90 = alStack_78[0];
        }
      }
LAB_00109925:
      local_98 = 0;
      plVar1 = (long *)(local_80 + -0x10);
      if (local_80 != 0) {
        do {
          lVar6 = *plVar1;
          if (lVar6 == 0) goto LAB_0010995f;
          LOCK();
          lVar7 = *plVar1;
          bVar10 = lVar6 == lVar7;
          if (bVar10) {
            *plVar1 = lVar6 + 1;
            lVar7 = lVar6;
          }
          UNLOCK();
        } while (!bVar10);
        if (lVar7 != -1) {
          local_98 = local_80;
        }
      }
LAB_0010995f:
      local_a0 = 0;
      local_60 = 6;
      local_68 = "%s: %s";
      String::parse_latin1((StrRange *)&local_a0);
      vformat<String,String>(&local_68,(StrRange *)&local_a0,&local_98,&local_90);
      uVar8 = 0;
      uVar5 = 0xf3;
      goto LAB_001099b5;
    }
    if (param_2 == 1) {
      local_98 = 0;
      plVar1 = (long *)(alStack_78[0] + -0x10);
      if (alStack_78[0] != 0) {
        do {
          lVar6 = *plVar1;
          if (lVar6 == 0) goto LAB_00109641;
          LOCK();
          lVar7 = *plVar1;
          bVar10 = lVar6 == lVar7;
          if (bVar10) {
            *plVar1 = lVar6 + 1;
            lVar7 = lVar6;
          }
          UNLOCK();
        } while (!bVar10);
        if (lVar7 != -1) {
          local_98 = alStack_78[0];
        }
      }
LAB_00109641:
      local_a0 = 0;
      plVar1 = (long *)(local_80 + -0x10);
      if (local_80 != 0) {
        do {
          lVar6 = *plVar1;
          if (lVar6 == 0) goto LAB_0010967b;
          LOCK();
          lVar7 = *plVar1;
          bVar10 = lVar6 == lVar7;
          if (bVar10) {
            *plVar1 = lVar6 + 1;
            lVar7 = lVar6;
          }
          UNLOCK();
        } while (!bVar10);
        if (lVar7 != -1) {
          local_a0 = local_80;
        }
      }
LAB_0010967b:
      local_a8 = 0;
      local_68 = "%s: %s";
      local_60 = 6;
      String::parse_latin1((StrRange *)&local_a8);
      vformat<String,String>((String *)&local_90,&local_a8,&local_a0,&local_98);
      Variant::Variant((Variant *)local_48,(String *)&local_90);
      stringify_variants((Variant *)&local_68);
      __print_line((String *)&local_68);
      pcVar3 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar6 = local_90;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_a8;
      if (local_a8 != 0) {
        LOCK();
        plVar1 = (long *)(local_a8 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a8 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_a0;
      if (local_a0 != 0) {
        LOCK();
        plVar1 = (long *)(local_a0 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_a0 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
    }
  }
  if (alStack_78[0] != 0) {
    LOCK();
    plVar1 = (long *)(alStack_78[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(alStack_78[0] + -0x10),false);
    }
  }
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)(local_80 + -0x10),false);
        return;
      }
      goto LAB_00109bcd;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109bcd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExportPlatformPC::get_preset_features(Ref<EditorExportPreset> const&, List<String,
   DefaultAllocator>*) const */

void EditorExportPlatformPC::_GLOBAL__sub_I_get_preset_features(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    PopupMenu::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  ENV_SCRIPT_ENCRYPTION_KEY = 0;
  String::parse_latin1((StrRange *)&ENV_SCRIPT_ENCRYPTION_KEY);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    __cxa_atexit(String::~String,&ENV_SCRIPT_ENCRYPTION_KEY,&__dso_handle);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


