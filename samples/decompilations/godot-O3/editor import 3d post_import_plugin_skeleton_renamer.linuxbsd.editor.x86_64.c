
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



/* PostImportPluginSkeletonRenamer::PostImportPluginSkeletonRenamer() */

void __thiscall
PostImportPluginSkeletonRenamer::PostImportPluginSkeletonRenamer
          (PostImportPluginSkeletonRenamer *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(code **)this = operator_new;
  *(undefined8 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x198) = 7;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x1a0),"_get_internal_import_options",false);
  this[0x1a8] = (PostImportPluginSkeletonRenamer)0x0;
  *(undefined8 *)(this + 0x1b0) = 0;
  StringName::StringName((StringName *)(this + 0x1b8),"_get_internal_option_visibility",false);
  this[0x1c0] = (PostImportPluginSkeletonRenamer)0x0;
  *(undefined8 *)(this + 0x1c8) = 0;
  StringName::StringName
            ((StringName *)(this + 0x1d0),"_get_internal_option_update_view_required",false);
  this[0x1d8] = (PostImportPluginSkeletonRenamer)0x0;
  *(undefined8 *)(this + 0x1e0) = 0;
  StringName::StringName((StringName *)(this + 0x1e8),"_internal_process",false);
  this[0x1f0] = (PostImportPluginSkeletonRenamer)0x0;
  *(undefined8 *)(this + 0x1f8) = 0;
  StringName::StringName((StringName *)(this + 0x200),"_get_import_options",false);
  this[0x208] = (PostImportPluginSkeletonRenamer)0x0;
  *(undefined8 *)(this + 0x210) = 0;
  StringName::StringName((StringName *)(this + 0x218),"_get_option_visibility",false);
  this[0x220] = (PostImportPluginSkeletonRenamer)0x0;
  *(undefined8 *)(this + 0x228) = 0;
  StringName::StringName((StringName *)(this + 0x230),"_pre_process",false);
  this[0x238] = (PostImportPluginSkeletonRenamer)0x0;
  *(undefined8 *)(this + 0x240) = 0;
  StringName::StringName((StringName *)(this + 0x248),"_post_process",false);
  this[0x250] = (PostImportPluginSkeletonRenamer)0x0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined ***)this = &PTR__initialize_classv_001071f0;
  return;
}



/* PostImportPluginSkeletonRenamer::get_internal_import_options(EditorScenePostImportPlugin::InternalImportCategory,
   List<ResourceImporter::ImportOption, DefaultAllocator>*) [clone .part.0] */

void PostImportPluginSkeletonRenamer::get_internal_import_options(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  StringName *local_120;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  long local_c8;
  int local_c0;
  undefined8 local_b8;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_a8,true);
  local_e8 = 0;
  local_d8 = "";
  local_f0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_f0);
  local_d8 = "retarget/bone_renamer/rename_bones";
  local_f8 = 0;
  local_d0 = 0x22;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
  local_b0 = 0x4006;
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
  }
  else {
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_e8);
  }
  local_120 = (StringName *)&local_c8;
  local_80 = 0;
  local_88 = local_d8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  StringName::StringName((StringName *)&local_78,local_120);
  local_68 = 0;
  local_70 = local_c0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *param_1 = (long)pauVar4;
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
  *puVar3 = local_88;
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
  uVar1 = *(undefined8 *)(*param_1 + 8);
  *(long *)(puVar3 + 0x16) = *param_1;
  plVar2 = (long *)*param_1;
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
  Variant::Variant((Variant *)local_a8,true);
  local_d8 = "";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_f0);
  local_d8 = "retarget/bone_renamer/unique_node/make_unique";
  local_f8 = 0;
  local_d0 = 0x2d;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
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
  }
  else {
    StringName::operator=(local_120,(StringName *)&local_e8);
  }
  local_80 = 0;
  local_88 = local_d8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  StringName::StringName((StringName *)&local_78,local_120);
  local_68 = 0;
  local_70 = local_c0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *param_1 = (long)pauVar4;
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
  *puVar3 = local_88;
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
  uVar1 = *(undefined8 *)(*param_1 + 8);
  *(long *)(puVar3 + 0x16) = *param_1;
  plVar2 = (long *)*param_1;
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
  Variant::Variant((Variant *)local_a8,"GeneralSkeleton");
  local_d8 = "";
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_f0);
  local_d8 = "retarget/bone_renamer/unique_node/skeleton_name";
  local_f8 = 0;
  local_d0 = 0x2f;
  String::parse_latin1((StrRange *)&local_f8);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,4);
  local_d0 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_f8);
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
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
  }
  else {
    StringName::operator=(local_120,(StringName *)&local_e8);
  }
  local_80 = 0;
  local_88 = local_d8._0_4_;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d0);
  StringName::StringName((StringName *)&local_78,local_120);
  local_68 = 0;
  local_70 = local_c0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b8);
  local_60 = local_b0;
  Variant::Variant((Variant *)local_58,(Variant *)local_a8);
  if (*param_1 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *param_1 = (long)pauVar4;
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
  *puVar3 = local_88;
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
  uVar1 = *(undefined8 *)(*param_1 + 8);
  *(long *)(puVar3 + 0x16) = *param_1;
  param_1 = (long *)*param_1;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = uVar1;
  if (param_1[1] != 0) {
    *(undefined4 **)(param_1[1] + 0x48) = puVar3;
  }
  param_1[1] = (long)puVar3;
  if (*param_1 == 0) {
    *param_1 = (long)puVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
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



/* PostImportPluginSkeletonRenamer::get_internal_import_options(EditorScenePostImportPlugin::InternalImportCategory,
   List<ResourceImporter::ImportOption, DefaultAllocator>*) */

void __thiscall
PostImportPluginSkeletonRenamer::get_internal_import_options
          (undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 != 6) {
    return;
  }
  get_internal_import_options(param_3);
  return;
}



/* PostImportPluginSkeletonRenamer::_internal_process(EditorScenePostImportPlugin::InternalImportCategory,
   Node*, Node*, Ref<Resource>, Dictionary const&, HashMap<String, String, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, String> > >
   const&) */

void __thiscall
PostImportPluginSkeletonRenamer::_internal_process
          (undefined8 param_1,undefined8 param_2,String *param_3,long param_4,undefined8 param_5,
          Variant *param_6,
          HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
          *param_7)

{
  Object *pOVar1;
  char *pcVar2;
  undefined8 *puVar3;
  code *pcVar4;
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
  bool bVar21;
  char cVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  Variant *pVVar28;
  Object *pOVar29;
  long lVar30;
  NodePath *pNVar31;
  long *plVar32;
  ulong uVar33;
  bool bVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  uint uVar38;
  String *pSVar39;
  ulong uVar40;
  uint uVar41;
  ulong uVar42;
  long in_FS_OFFSET;
  bool bVar43;
  List *local_140;
  long local_138;
  long local_120;
  String *local_d8;
  String local_c0 [8];
  long *local_b8;
  Object *local_b0;
  long local_a8;
  Object *local_a0;
  long local_98;
  ulong local_90;
  char *local_88;
  size_t local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,"retarget/bone_map");
  Dictionary::operator[](param_6);
  lVar27 = Variant::get_validated_object();
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar27 != 0) {
    Variant::Variant((Variant *)local_58,"retarget/bone_renamer/rename_bones");
    pVVar28 = (Variant *)Dictionary::operator[](param_6);
    bVar21 = Variant::operator_cast_to_bool(pVVar28);
    if (bVar21) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_120 = param_4;
      if ((param_4 != 0) &&
         (local_120 = __dynamic_cast(param_4,&Object::typeinfo,&Skeleton3D::typeinfo,0),
         local_120 != 0)) {
        pSVar39 = (String *)0x0;
        uVar23 = Skeleton3D::get_bone_count();
        if (0 < (int)uVar23) {
          do {
            Skeleton3D::get_bone_name((int)(CowData<char32_t> *)&local_88);
            local_90 = local_90 & 0xffffffff00000000;
            cVar22 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                     ::_lookup_pos(param_7,(CowData<char32_t> *)&local_88,(uint *)&local_90);
            if ((cVar22 != '\0') &&
               (*(long *)(*(long *)(param_7 + 8) + (local_90 & 0xffffffff) * 8) != 0)) {
              Skeleton3D::set_bone_name((int)local_120,pSVar39);
            }
            uVar38 = (int)pSVar39 + 1;
            pSVar39 = (String *)(ulong)uVar38;
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          } while (uVar23 != uVar38);
        }
      }
      local_d8 = (String *)&local_90;
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"ImporterMeshInstance3D");
      local_90 = 0;
      String::parse_latin1(local_d8,"*");
      bVar21 = SUB81((String *)&local_88,0);
      bVar34 = SUB81(local_d8,0);
      Node::find_children((String *)&local_a8,param_3,bVar34,bVar21);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
LAB_001011d0:
      iVar24 = Array::size();
      if (iVar24 != 0) {
        while( true ) {
          Array::pop_back();
          pOVar29 = Variant::operator_cast_to_Object_((Variant *)local_58);
          if (pOVar29 != (Object *)0x0) {
            pOVar29 = (Object *)
                      __dynamic_cast(pOVar29,&Object::typeinfo,&ImporterMeshInstance3D::typeinfo,0);
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          ImporterMeshInstance3D::get_skin();
          if (local_a0 == (Object *)0x0) break;
          ImporterMeshInstance3D::get_skeleton_path();
          lVar27 = Node::get_node((NodePath *)pOVar29);
          NodePath::~NodePath((NodePath *)&local_88);
          if (((lVar27 == 0) ||
              (lVar30 = __dynamic_cast(lVar27,&Object::typeinfo,&Skeleton3D::typeinfo,0),
              lVar30 == 0)) || (lVar27 != local_120)) {
LAB_001012af:
            if (local_a0 == (Object *)0x0) break;
          }
          else {
            iVar24 = *(int *)(local_a0 + 600);
            if (0 < iVar24) {
              uVar33 = (ulong)iVar24;
              uVar40 = 0;
              lVar27 = *(long *)(local_a0 + 0x250);
              if (iVar24 < 1) goto LAB_00101fea;
LAB_00101e28:
              StringName::StringName
                        ((StringName *)local_d8,(StringName *)(lVar27 + 8 + uVar40 * 0x40));
              if (local_90 == 0) goto LAB_00102024;
              pcVar2 = *(char **)(local_90 + 8);
              local_98 = 0;
              if (pcVar2 == (char *)0x0) {
                if (*(long *)(local_90 + 0x10) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_98,(CowData *)(local_90 + 0x10));
                  goto LAB_00101e91;
                }
                if (StringName::configured == '\0') goto LAB_00101eb2;
              }
              else {
                local_80 = strlen(pcVar2);
                local_88 = pcVar2;
                String::parse_latin1((StrRange *)&local_98);
LAB_00101e91:
                if ((StringName::configured == '\0') || (local_90 == 0)) goto LAB_00101eb2;
              }
              StringName::unref();
LAB_00101eb2:
              do {
                if ((*(long *)(param_7 + 8) != 0) && (*(int *)(param_7 + 0x2c) != 0)) {
                  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_7 + 0x28) * 4);
                  uVar42 = CONCAT44(0,uVar23);
                  lVar27 = *(long *)(hash_table_size_primes_inv +
                                    (ulong)*(uint *)(param_7 + 0x28) * 8);
                  uVar26 = String::hash();
                  lVar30 = *(long *)(param_7 + 0x10);
                  uVar38 = 1;
                  if (uVar26 != 0) {
                    uVar38 = uVar26;
                  }
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar38 * lVar27;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar42;
                  lVar37 = SUB168(auVar9 * auVar17,8);
                  uVar26 = *(uint *)(lVar30 + lVar37 * 4);
                  if (uVar26 != 0) {
                    uVar36 = SUB164(auVar9 * auVar17,8);
                    uVar25 = 0;
                    do {
                      if (uVar26 == uVar38) {
                        cVar22 = String::operator==((String *)
                                                    (*(long *)(*(long *)(param_7 + 8) + lVar37 * 8)
                                                    + 0x10),(String *)&local_98);
                        pOVar29 = local_a0;
                        if (cVar22 != '\0') {
                          lVar27 = *(long *)(*(long *)(param_7 + 8) + (ulong)uVar36 * 8);
                          if (lVar27 != 0) {
                            StringName::StringName
                                      ((StringName *)&local_88,(String *)(lVar27 + 0x18),false);
                            Skin::set_bind_name((int)pOVar29,(StringName *)(uVar40 & 0xffffffff));
                            if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
                              StringName::unref();
                            }
                          }
                          break;
                        }
                        lVar30 = *(long *)(param_7 + 0x10);
                      }
                      uVar25 = uVar25 + 1;
                      auVar10._8_8_ = 0;
                      auVar10._0_8_ = (ulong)(uVar36 + 1) * lVar27;
                      auVar18._8_8_ = 0;
                      auVar18._0_8_ = uVar42;
                      lVar37 = SUB168(auVar10 * auVar18,8);
                      uVar26 = *(uint *)(lVar30 + lVar37 * 4);
                      uVar36 = SUB164(auVar10 * auVar18,8);
                      if ((uVar26 == 0) ||
                         (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar26 * lVar27,
                         auVar19._8_8_ = 0, auVar19._0_8_ = uVar42, auVar12._8_8_ = 0,
                         auVar12._0_8_ =
                              (ulong)((uVar23 + uVar36) - SUB164(auVar11 * auVar19,8)) * lVar27,
                         auVar20._8_8_ = 0, auVar20._0_8_ = uVar42,
                         SUB164(auVar12 * auVar20,8) < uVar25)) break;
                    } while( true );
                  }
                }
                uVar40 = uVar40 + 1;
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                if (uVar33 == uVar40) goto LAB_001012af;
                iVar24 = *(int *)(local_a0 + 600);
                lVar27 = *(long *)(local_a0 + 0x250);
                if ((int)uVar40 < iVar24) goto LAB_00101e28;
LAB_00101fea:
                _err_print_index_error
                          ("get_bind_name","./scene/resources/3d/skin.h",0x4b,uVar40,(long)iVar24,
                           "p_index","bind_count","",false,false);
LAB_00102024:
                local_98 = 0;
              } while( true );
            }
          }
          cVar22 = RefCounted::unreference();
          pOVar29 = local_a0;
          if ((cVar22 == '\0') || (cVar22 = predelete_handler(local_a0), cVar22 == '\0')) break;
          (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
          Memory::free_static(pOVar29,false);
          iVar24 = Array::size();
          if (iVar24 == 0) goto LAB_00101303;
        }
        goto LAB_001011d0;
      }
LAB_00101303:
      Array::~Array((Array *)&local_a8);
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,_LC29);
      local_90 = 0;
      String::parse_latin1(local_d8,"*");
      Node::find_children(local_c0,param_3,bVar34,bVar21);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      iVar24 = Array::size();
      while (iVar24 != 0) {
        Array::pop_back();
        local_140 = (List *)Variant::operator_cast_to_Object_((Variant *)local_58);
        if (local_140 != (List *)0x0) {
          local_140 = (List *)__dynamic_cast(local_140,&Object::typeinfo,&AnimationPlayer::typeinfo,
                                             0);
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_b8 = (long *)0x0;
        AnimationMixer::get_animation_list(local_140);
        if ((local_b8 != (long *)0x0) && (local_138 = *local_b8, local_138 != 0)) {
          do {
            uVar38 = 0;
            AnimationMixer::get_animation((StringName *)&local_b0);
            uVar23 = Animation::get_track_count();
            if (0 < (int)uVar23) {
              do {
                while( true ) {
                  Animation::track_get_path((int)(String *)&local_88);
                  iVar24 = NodePath::get_subname_count();
                  if ((iVar24 == 1) &&
                     (((cVar22 = Animation::track_get_type((int)local_b0), cVar22 == '\x01' ||
                       (cVar22 = Animation::track_get_type((int)local_b0), cVar22 == '\x02')) ||
                      (cVar22 = Animation::track_get_type((int)local_b0), cVar22 == '\x03'))))
                  break;
                  NodePath::~NodePath((NodePath *)&local_88);
LAB_00101488:
                  uVar38 = uVar38 + 1;
                  if (uVar23 == uVar38) goto LAB_001018d0;
                }
                NodePath::~NodePath((NodePath *)&local_88);
                iVar24 = (int)(CowData<char32_t> *)&local_98;
                Animation::track_get_path(iVar24);
                NodePath::get_concatenated_names();
                if (local_90 == 0) {
                  local_a8 = 0;
                }
                else {
                  pcVar2 = *(char **)(local_90 + 8);
                  local_a8 = 0;
                  if (pcVar2 == (char *)0x0) {
                    if (*(long *)(local_90 + 0x10) != 0) {
                      plVar32 = (long *)(*(long *)(local_90 + 0x10) + -0x10);
                      do {
                        lVar27 = *plVar32;
                        if (lVar27 == 0) goto LAB_00101568;
                        LOCK();
                        lVar30 = *plVar32;
                        bVar43 = lVar27 == lVar30;
                        if (bVar43) {
                          *plVar32 = lVar27 + 1;
                          lVar30 = lVar27;
                        }
                        UNLOCK();
                      } while (!bVar43);
                      if (lVar30 != -1) {
                        local_a8 = *(long *)(local_90 + 0x10);
                      }
                      goto LAB_00101568;
                    }
                    if (StringName::configured == '\0') goto LAB_00101584;
                  }
                  else {
                    local_80 = strlen(pcVar2);
                    local_88 = pcVar2;
                    String::parse_latin1((StrRange *)&local_a8);
LAB_00101568:
                    if ((StringName::configured == '\0') || (local_90 == 0)) goto LAB_00101584;
                  }
                  StringName::unref();
                }
LAB_00101584:
                NodePath::~NodePath((NodePath *)&local_98);
                AnimationMixer::get_root_node();
                pNVar31 = (NodePath *)Node::get_node((NodePath *)local_140);
                NodePath::NodePath((NodePath *)&local_88,(String *)&local_a8);
                lVar27 = Node::get_node(pNVar31);
                NodePath::~NodePath((NodePath *)&local_88);
                NodePath::~NodePath((NodePath *)local_d8);
                if (((lVar27 != 0) &&
                    (lVar27 = __dynamic_cast(lVar27,&Object::typeinfo,&Skeleton3D::typeinfo,0),
                    lVar27 != 0)) && (local_120 == lVar27)) {
                  Animation::track_get_path(iVar24);
                  NodePath::get_subname((int)local_d8);
                  if (local_90 == 0) {
                    local_a0 = (Object *)0x0;
                  }
                  else {
                    pcVar2 = *(char **)(local_90 + 8);
                    local_a0 = (Object *)0x0;
                    if (pcVar2 == (char *)0x0) {
                      if (*(long *)(local_90 + 0x10) != 0) {
                        CowData<char32_t>::_ref
                                  ((CowData<char32_t> *)&local_a0,(CowData *)(local_90 + 0x10));
                        goto LAB_0010167c;
                      }
                      if (StringName::configured == '\0') goto LAB_00101698;
                    }
                    else {
                      local_80 = strlen(pcVar2);
                      local_88 = pcVar2;
                      String::parse_latin1((StrRange *)&local_a0);
LAB_0010167c:
                      if ((StringName::configured == '\0') || (local_90 == 0)) goto LAB_00101698;
                    }
                    StringName::unref();
                  }
LAB_00101698:
                  NodePath::~NodePath((NodePath *)&local_98);
                  if ((*(long *)(param_7 + 8) != 0) && (*(int *)(param_7 + 0x2c) != 0)) {
                    uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_7 + 0x28) * 4
                                      );
                    lVar27 = *(long *)(hash_table_size_primes_inv +
                                      (ulong)*(uint *)(param_7 + 0x28) * 8);
                    uVar25 = String::hash();
                    uVar33 = CONCAT44(0,uVar26);
                    uVar36 = 1;
                    if (uVar25 != 0) {
                      uVar36 = uVar25;
                    }
                    auVar5._8_8_ = 0;
                    auVar5._0_8_ = (ulong)uVar36 * lVar27;
                    auVar13._8_8_ = 0;
                    auVar13._0_8_ = uVar33;
                    lVar37 = SUB168(auVar5 * auVar13,8);
                    lVar30 = *(long *)(param_7 + 0x10);
                    uVar35 = SUB164(auVar5 * auVar13,8);
                    uVar25 = *(uint *)(lVar30 + lVar37 * 4);
                    if (uVar25 != 0) {
                      uVar41 = 0;
                      do {
                        if (uVar25 == uVar36) {
                          cVar22 = String::operator==((String *)
                                                      (*(long *)(*(long *)(param_7 + 8) + lVar37 * 8
                                                                ) + 0x10),(String *)&local_a0);
                          if (cVar22 != '\0') {
                            if (*(long *)(*(long *)(param_7 + 8) + (ulong)uVar35 * 8) != 0) {
                              local_90 = 0;
                              local_88 = ":";
                              local_80 = 1;
                              String::parse_latin1((StrRange *)local_d8);
                              String::operator+((String *)&local_88,(String *)&local_a8);
                              String::operator+((String *)&local_98,(String *)&local_88);
                              pcVar2 = local_88;
                              if (local_88 != (char *)0x0) {
                                LOCK();
                                plVar32 = (long *)(local_88 + -0x10);
                                *plVar32 = *plVar32 + -1;
                                UNLOCK();
                                if (*plVar32 == 0) {
                                  local_88 = (char *)0x0;
                                  Memory::free_static(pcVar2 + -0x10,false);
                                }
                              }
                              uVar33 = local_90;
                              if (local_90 != 0) {
                                LOCK();
                                plVar32 = (long *)(local_90 - 0x10);
                                *plVar32 = *plVar32 + -1;
                                UNLOCK();
                                if (*plVar32 == 0) {
                                  local_90 = 0;
                                  Memory::free_static((void *)(uVar33 - 0x10),false);
                                }
                              }
                              pOVar29 = local_b0;
                              NodePath::NodePath((NodePath *)&local_88,(String *)&local_98);
                              Animation::track_set_path((int)pOVar29,(NodePath *)(ulong)uVar38);
                              NodePath::~NodePath((NodePath *)&local_88);
                              lVar27 = local_98;
                              if (local_98 != 0) {
                                LOCK();
                                plVar32 = (long *)(local_98 + -0x10);
                                *plVar32 = *plVar32 + -1;
                                UNLOCK();
                                if (*plVar32 == 0) {
                                  local_98 = 0;
                                  Memory::free_static((void *)(lVar27 + -0x10),false);
                                }
                              }
                            }
                            break;
                          }
                          lVar30 = *(long *)(param_7 + 0x10);
                        }
                        uVar41 = uVar41 + 1;
                        auVar6._8_8_ = 0;
                        auVar6._0_8_ = (ulong)(uVar35 + 1) * lVar27;
                        auVar14._8_8_ = 0;
                        auVar14._0_8_ = uVar33;
                        lVar37 = SUB168(auVar6 * auVar14,8);
                        uVar25 = *(uint *)(lVar30 + lVar37 * 4);
                        uVar35 = SUB164(auVar6 * auVar14,8);
                        if ((uVar25 == 0) ||
                           (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar25 * lVar27,
                           auVar15._8_8_ = 0, auVar15._0_8_ = uVar33, auVar8._8_8_ = 0,
                           auVar8._0_8_ = (ulong)((uVar26 + uVar35) - SUB164(auVar7 * auVar15,8)) *
                                          lVar27, auVar16._8_8_ = 0, auVar16._0_8_ = uVar33,
                           SUB164(auVar8 * auVar16,8) < uVar41)) break;
                      } while( true );
                    }
                  }
                  pOVar29 = local_a0;
                  if (local_a0 != (Object *)0x0) {
                    LOCK();
                    pOVar1 = local_a0 + -0x10;
                    *(long *)pOVar1 = *(long *)pOVar1 + -1;
                    UNLOCK();
                    if (*(long *)pOVar1 == 0) {
                      local_a0 = (Object *)0x0;
                      Memory::free_static(pOVar29 + -0x10,false);
                    }
                  }
                }
                lVar27 = local_a8;
                if (local_a8 == 0) goto LAB_00101488;
                LOCK();
                plVar32 = (long *)(local_a8 + -0x10);
                *plVar32 = *plVar32 + -1;
                UNLOCK();
                if (*plVar32 != 0) goto LAB_00101488;
                uVar38 = uVar38 + 1;
                local_a8 = 0;
                Memory::free_static((void *)(lVar27 + -0x10),false);
              } while (uVar23 != uVar38);
            }
LAB_001018d0:
            if (((local_b0 != (Object *)0x0) &&
                (cVar22 = RefCounted::unreference(), pOVar29 = local_b0, cVar22 != '\0')) &&
               (cVar22 = predelete_handler(local_b0), cVar22 != '\0')) {
              (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
              Memory::free_static(pOVar29,false);
            }
            local_138 = *(long *)(local_138 + 8);
          } while (local_138 != 0);
        }
        List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_b8);
        iVar24 = Array::size();
      }
      Array::~Array((Array *)local_c0);
      Dictionary::Dictionary((Dictionary *)&local_a0);
      for (puVar3 = *(undefined8 **)(param_7 + 0x18); puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)*puVar3) {
        Variant::Variant((Variant *)local_58,(String *)(puVar3 + 3));
        Variant::Variant((Variant *)local_78,(String *)(puVar3 + 2));
        pVVar28 = (Variant *)Dictionary::operator[]((Variant *)&local_a0);
        if (pVVar28 != (Variant *)local_58) {
          if (Variant::needs_deinit[*(int *)pVVar28] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar28 = 0;
          *(int *)pVVar28 = local_58[0];
          *(undefined8 *)(pVVar28 + 8) = local_50;
          *(undefined8 *)(pVVar28 + 0x10) = uStack_48;
          local_58[0] = 0;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      local_88 = (char *)0x0;
      String::parse_latin1((String *)&local_88,"BoneAttachment3D");
      local_90 = 0;
      String::parse_latin1(local_d8,"*");
      Node::find_children((String *)&local_98,param_3,bVar34,bVar21);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      while (iVar24 = Array::size(), iVar24 != 0) {
        Array::pop_back();
        pOVar29 = Variant::operator_cast_to_Object_((Variant *)local_58);
        if (pOVar29 == (Object *)0x0) {
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          plVar32 = (long *)__dynamic_cast(pOVar29,&Object::typeinfo,&BoneAttachment3D::typeinfo,0);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (plVar32 != (long *)0x0) {
            pcVar4 = *(code **)(*plVar32 + 0x1e0);
            Dictionary::Dictionary((Dictionary *)&local_88,(Dictionary *)&local_a0);
            (*pcVar4)(plVar32,param_3,local_120);
            Dictionary::~Dictionary((Dictionary *)&local_88);
          }
        }
      }
      Array::~Array((Array *)&local_98);
      Dictionary::~Dictionary((Dictionary *)&local_a0);
    }
    else if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* PostImportPluginSkeletonRenamer::internal_process(EditorScenePostImportPlugin::InternalImportCategory,
   Node*, Node*, Ref<Resource>, Dictionary const&) [clone .part.0] */

void PostImportPluginSkeletonRenamer::internal_process
               (PostImportPluginSkeletonRenamer *param_1,String *param_2,long param_3,
               undefined8 *param_4,Variant *param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Object *pOVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
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
  code *pcVar28;
  StringName *pSVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  bool bVar32;
  char cVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  Variant *pVVar39;
  size_t sVar40;
  NodePath *pNVar41;
  long lVar42;
  String *pSVar43;
  uint uVar44;
  long lVar45;
  ulong uVar46;
  uint uVar47;
  ulong uVar48;
  long *plVar49;
  long *plVar50;
  ulong uVar51;
  ulong uVar52;
  uint uVar53;
  int iVar54;
  uint *puVar55;
  long in_FS_OFFSET;
  long local_218;
  List *local_208;
  NodePath *local_200;
  String *local_1f0;
  Vector<String> *local_1b8;
  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
  *local_190;
  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
  *local_188;
  long local_158;
  String local_150 [8];
  long *local_148;
  Object *local_140;
  undefined8 local_138;
  String local_130 [8];
  undefined8 local_128;
  String local_120 [8];
  Node local_118 [8];
  NodePath local_110 [8];
  String local_108 [8];
  undefined8 local_100;
  long local_f8;
  StringName *local_f0;
  Object *local_e8;
  long local_e0;
  Object *local_d8;
  long local_d0;
  Object *local_c8;
  size_t local_c0;
  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
  local_b8 [8];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  char *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  ulong local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,"retarget/bone_map");
  Dictionary::operator[](param_5);
  lVar38 = Variant::get_validated_object();
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar38 == 0) goto LAB_00102681;
  Variant::Variant((Variant *)local_58,"retarget/bone_renamer/rename_bones");
  pVVar39 = (Variant *)Dictionary::operator[](param_5);
  bVar32 = Variant::operator_cast_to_bool(pVVar39);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (!bVar32) goto LAB_00102681;
  if (param_3 == 0) {
    local_1f0 = (String *)0x0;
  }
  else {
    local_1f0 = (String *)__dynamic_cast(param_3,&Object::typeinfo,&Skeleton3D::typeinfo,0);
  }
  __dynamic_cast(lVar38,&Object::typeinfo,&BoneMap::typeinfo,0);
  iVar34 = Skeleton3D::get_bone_count();
  uVar51 = _LC51;
  local_60 = _LC51;
  local_b0 = (undefined1  [16])0x0;
  local_90 = _LC51;
  local_a0 = (undefined1  [16])0x0;
  if (0 < iVar34) {
    iVar35 = 0;
    do {
      iVar54 = iVar35;
      Skeleton3D::get_bone_name((int)(CowData<char32_t> *)&local_e8);
      StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
      BoneMap::find_profile_bone_name((StringName *)&local_c8);
      if (local_c8 == (Object *)0x0) {
        local_e0 = 0;
LAB_00102590:
        if (StringName::configured != '\0') {
LAB_00102594:
          if (local_d8 != (Object *)0x0) {
            StringName::unref();
          }
        }
      }
      else {
        pcVar7 = *(char **)(local_c8 + 8);
        local_e0 = 0;
        if (pcVar7 == (char *)0x0) {
          if (*(long *)(local_c8 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)(local_c8 + 0x10));
            goto LAB_0010256b;
          }
          if (StringName::configured != '\0') goto LAB_0010257f;
        }
        else {
          sVar40 = strlen(pcVar7);
          local_80._0_8_ = sVar40;
          local_88 = pcVar7;
          String::parse_latin1((StrRange *)&local_e0);
LAB_0010256b:
          if (StringName::configured != '\0') {
            if (local_c8 != (Object *)0x0) {
LAB_0010257f:
              StringName::unref();
              goto LAB_00102590;
            }
            goto LAB_00102594;
          }
        }
      }
      if ((local_e0 != 0) && (1 < *(uint *)(local_e0 + -8))) {
        HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
        ::insert((String *)&local_88,local_b8,SUB81((CowData<char32_t> *)&local_e8,0));
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      iVar35 = iVar54 + 1;
    } while (iVar34 != iVar35);
    local_60 = uVar51;
    local_d0 = 0;
    local_80 = (undefined1  [16])0x0;
    local_70 = (undefined1  [16])0x0;
    iVar34 = 0;
LAB_001027f6:
    Skeleton3D::get_bone_name((int)(String *)&local_100);
    StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
    BoneMap::find_profile_bone_name((StringName *)&local_e0);
    if (local_e0 == 0) {
      local_f8 = 0;
LAB_001027ab:
      if (StringName::configured != '\0') {
LAB_001027af:
        if (local_e8 != (Object *)0x0) {
          StringName::unref();
        }
      }
    }
    else {
      pOVar4 = *(Object **)(local_e0 + 8);
      local_f8 = 0;
      if (pOVar4 == (Object *)0x0) {
        if (*(long *)(local_e0 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)(local_e0 + 0x10));
          goto LAB_00102788;
        }
        if (StringName::configured != '\0') goto LAB_0010279c;
      }
      else {
        local_c0 = strlen((char *)pOVar4);
        local_c8 = pOVar4;
        String::parse_latin1((StrRange *)&local_f8);
LAB_00102788:
        if (StringName::configured != '\0') {
          if (local_e0 != 0) {
LAB_0010279c:
            StringName::unref();
            goto LAB_001027ab;
          }
          goto LAB_001027af;
        }
      }
    }
    if ((((local_f8 != 0) && (1 < *(uint *)(local_f8 + -8))) &&
        (cVar33 = String::operator==((String *)&local_100,(String *)&local_f8), cVar33 == '\0')) &&
       (iVar35 = Skeleton3D::find_bone(local_1f0), iVar35 != -1)) {
      BoneMap::get_profile();
      local_e8 = (Object *)0x0;
      lVar38 = local_d0;
      if (local_f8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_f8);
        lVar38 = local_d0;
      }
      do {
        iVar35 = Skeleton3D::find_bone(local_1f0);
        pSVar29 = local_f0;
        if (iVar35 < 0) {
          StringName::StringName((StringName *)&local_c8,(String *)&local_e8,false);
          iVar35 = SkeletonProfile::find_bone(pSVar29);
          if (iVar35 < 0) {
            if ((lVar38 == 0) || (*(long *)(lVar38 + -8) < 1)) goto LAB_00102ef2;
            lVar45 = 0;
            while (cVar33 = String::operator==((String *)(lVar38 + lVar45 * 8),(String *)&local_e8),
                  cVar33 == '\0') {
              lVar45 = lVar45 + 1;
              if (*(long *)(lVar38 + -8) <= lVar45) goto LAB_00102ef2;
            }
          }
          if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        itos((long)&local_e0);
        String::operator+((String *)&local_c8,(String *)&local_f8);
        if (local_e8 != local_c8) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          local_e8 = local_c8;
          local_c8 = (Object *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      } while( true );
    }
    goto LAB_001027d5;
  }
  plVar50 = (long *)0x0;
  local_d0 = 0;
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
LAB_001029ca:
  local_188 = local_b8;
  local_190 = (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
               *)&local_88;
  local_1b8 = (Vector<String> *)&local_c8;
  pOVar4 = (Object *)*param_4;
  if ((pOVar4 == (Object *)0x0) ||
     (local_c8 = pOVar4, cVar33 = RefCounted::reference(), cVar33 == '\0')) {
    _internal_process(param_1,6,param_2,param_3,local_1b8,param_5,local_190);
  }
  else {
    _internal_process(param_1,6,param_2,param_3,local_1b8,param_5,local_190);
    cVar33 = RefCounted::unreference();
    if ((cVar33 != '\0') && (cVar33 = predelete_handler(pOVar4), cVar33 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_d0);
  local_c0 = 0;
  if (plVar50 != (long *)0x0) {
    do {
      local_d8 = (Object *)((ulong)local_d8 & 0xffffffff00000000);
      cVar33 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
               ::_lookup_pos(local_190,(CowData *)(plVar50 + 2),(uint *)&local_d8);
      if (cVar33 != '\0') {
        local_d8 = (Object *)0x0;
        if (plVar50[2] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)(plVar50 + 2));
        }
        Vector<String>::push_back(local_1b8,(CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      }
      sVar40 = local_c0;
      plVar50 = (long *)*plVar50;
    } while (plVar50 != (long *)0x0);
    if (local_c0 != 0) {
      local_218 = 0;
      lVar38 = *(long *)(local_c0 - 8);
      for (; local_218 < lVar38; local_218 = local_218 + 1) {
        pSVar43 = (String *)(sVar40 + local_218 * 8);
        HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
        ::operator[](local_188,pSVar43);
        lVar38 = *(long *)(sVar40 - 8);
        if (lVar38 <= local_218) {
LAB_00102dc0:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,local_218,lVar38,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar28 = (code *)invalidInstructionException();
          (*pcVar28)();
        }
        bVar32 = (bool)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                       ::operator[](local_190,pSVar43);
        HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
        ::insert((CowData<char32_t> *)&local_d8,local_188,bVar32);
        lVar38 = *(long *)(sVar40 - 8);
        if (lVar38 <= local_218) goto LAB_00102dc0;
        uVar30 = local_b0._0_8_;
        if ((local_b0._0_8_ != 0) && (iVar34 = local_90._4_4_, local_90._4_4_ != 0)) {
          uVar37 = *(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar38 = *(long *)(hash_table_size_primes_inv + (local_90 & 0xffffffff) * 8);
          uVar36 = String::hash();
          uVar31 = local_b0._8_8_;
          uVar53 = 1;
          if (uVar36 != 0) {
            uVar53 = uVar36;
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar53 * lVar38;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar51;
          lVar45 = SUB168(auVar8 * auVar18,8);
          uVar36 = *(uint *)(local_b0._8_8_ + lVar45 * 4);
          if (uVar36 != 0) {
            uVar47 = 0;
            uVar44 = SUB164(auVar8 * auVar18,8);
LAB_00102c36:
            if ((uVar36 != uVar53) ||
               (cVar33 = String::operator==((String *)(*(long *)(uVar30 + lVar45 * 8) + 0x10),
                                            pSVar43), cVar33 == '\0')) goto LAB_00102bf0;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(uVar44 + 1) * lVar38;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar51;
            uVar46 = SUB168(auVar12 * auVar22,8);
            puVar55 = (uint *)(uVar31 + uVar46 * 4);
            uVar36 = SUB164(auVar12 * auVar22,8);
            uVar53 = *puVar55;
            if ((uVar53 == 0) ||
               (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar53 * lVar38, auVar23._8_8_ = 0,
               auVar23._0_8_ = uVar51, auVar14._8_8_ = 0,
               auVar14._0_8_ = (ulong)((uVar36 + uVar37) - SUB164(auVar13 * auVar23,8)) * lVar38,
               auVar24._8_8_ = 0, auVar24._0_8_ = uVar51, uVar48 = (ulong)uVar44,
               uVar52 = (ulong)uVar36, SUB164(auVar14 * auVar24,8) == 0)) {
              uVar52 = (ulong)uVar44;
            }
            else {
              while( true ) {
                puVar1 = (uint *)(uVar31 + uVar48 * 4);
                *puVar55 = *puVar1;
                puVar2 = (undefined8 *)(uVar30 + uVar46 * 8);
                *puVar1 = uVar53;
                puVar3 = (undefined8 *)(uVar30 + uVar48 * 8);
                uVar5 = *puVar2;
                *puVar2 = *puVar3;
                *puVar3 = uVar5;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = (ulong)((int)uVar52 + 1) * lVar38;
                auVar27._8_8_ = 0;
                auVar27._0_8_ = uVar51;
                uVar46 = SUB168(auVar17 * auVar27,8);
                puVar55 = (uint *)(uVar31 + uVar46 * 4);
                uVar53 = *puVar55;
                if ((uVar53 == 0) ||
                   (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar53 * lVar38, auVar25._8_8_ = 0,
                   auVar25._0_8_ = uVar51, auVar16._8_8_ = 0,
                   auVar16._0_8_ =
                        (ulong)((SUB164(auVar17 * auVar27,8) + uVar37) - SUB164(auVar15 * auVar25,8)
                               ) * lVar38, auVar26._8_8_ = 0, auVar26._0_8_ = uVar51,
                   SUB164(auVar16 * auVar26,8) == 0)) break;
                uVar48 = uVar52;
                uVar52 = uVar46 & 0xffffffff;
              }
            }
            plVar50 = (long *)(uVar30 + uVar52 * 8);
            *(undefined4 *)(uVar31 + uVar52 * 4) = 0;
            plVar49 = (long *)*plVar50;
            lVar38 = *plVar49;
            if ((long *)local_a0._0_8_ == plVar49) {
              local_a0._0_8_ = lVar38;
            }
            plVar6 = (long *)plVar49[1];
            if (plVar49 == (long *)local_a0._8_8_) {
              local_a0._8_8_ = plVar6;
            }
            if (plVar6 != (long *)0x0) {
              *plVar6 = lVar38;
              plVar49 = (long *)*plVar50;
              lVar38 = *plVar49;
            }
            if (lVar38 != 0) {
              *(long *)(lVar38 + 8) = plVar49[1];
              plVar49 = (long *)*plVar50;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)(plVar49 + 3));
            CowData<char32_t>::_unref((CowData<char32_t> *)(plVar49 + 2));
            Memory::free_static(plVar49,false);
            *plVar50 = 0;
            local_90 = CONCAT44(iVar34 + -1,(undefined4)local_90);
          }
LAB_00102dad:
          lVar38 = *(long *)(sVar40 - 8);
        }
      }
    }
  }
  pOVar4 = (Object *)*param_4;
  if ((pOVar4 == (Object *)0x0) ||
     (local_d8 = pOVar4, cVar33 = RefCounted::reference(), cVar33 == '\0')) {
    _internal_process(param_1,6,param_2,param_3,(CowData<char32_t> *)&local_d8,param_5,local_188);
  }
  else {
    _internal_process(param_1,6,param_2,param_3,(CowData<char32_t> *)&local_d8,param_5,local_188);
    cVar33 = RefCounted::unreference();
    if ((cVar33 != '\0') && (cVar33 = predelete_handler(pOVar4), cVar33 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_c0);
  Variant::Variant((Variant *)local_58,"retarget/bone_renamer/unique_node/make_unique");
  pVVar39 = (Variant *)Dictionary::operator[](param_5);
  bVar32 = Variant::operator_cast_to_bool(pVVar39);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (bVar32) {
    Variant::Variant((Variant *)local_58,"retarget/bone_renamer/unique_node/skeleton_name");
    Dictionary::operator[](param_5);
    Variant::operator_cast_to_String((Variant *)&local_158);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((local_158 == 0) || (*(uint *)(local_158 + -8) < 2)) {
      _err_print_error("internal_process","editor/import/3d/post_import_plugin_skeleton_renamer.cpp"
                       ,0xce,"Condition \"unique_name.is_empty()\" is true.",
                       "Skeleton unique name cannot be empty.",0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
      HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
      ::~HashMap(local_190);
      HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
      ::~HashMap(local_188);
      goto LAB_00102681;
    }
    local_c8 = (Object *)0x0;
    String::parse_latin1((String *)local_1b8,_LC29);
    local_d8 = (Object *)0x0;
    String::parse_latin1((String *)&local_d8,"*");
    Node::find_children(local_150,param_2,SUB81((CowData<char32_t> *)&local_d8,0),SUB81(local_1b8,0)
                       );
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1b8);
    while (iVar34 = Array::size(), iVar34 != 0) {
      Array::pop_back();
      local_208 = (List *)Variant::operator_cast_to_Object_((Variant *)local_58);
      if (local_208 != (List *)0x0) {
        local_208 = (List *)__dynamic_cast(local_208,&Object::typeinfo,&AnimationPlayer::typeinfo,0)
        ;
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_148 = (long *)0x0;
      AnimationMixer::get_animation_list(local_208);
      if ((local_148 != (long *)0x0) && (lVar38 = *local_148, lVar38 != 0)) {
        do {
          AnimationMixer::get_animation((StringName *)&local_140);
          uVar37 = Animation::get_track_count();
          if (0 < (int)uVar37) {
            uVar53 = 0;
            do {
              Animation::track_get_path((int)(NodePath *)&local_e0);
              NodePath::get_concatenated_names();
              if (local_d8 == (Object *)0x0) {
                local_138 = 0;
              }
              else {
                pOVar4 = *(Object **)(local_d8 + 8);
                local_138 = 0;
                if (pOVar4 == (Object *)0x0) {
                  if (*(long *)(local_d8 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_138,(CowData *)(local_d8 + 0x10));
                    goto LAB_00103451;
                  }
                  if (StringName::configured == '\0') goto LAB_0010346d;
                }
                else {
                  local_c0 = strlen((char *)pOVar4);
                  local_c8 = pOVar4;
                  String::parse_latin1((StrRange *)&local_138);
LAB_00103451:
                  if ((StringName::configured == '\0') || (local_d8 == (Object *)0x0))
                  goto LAB_0010346d;
                }
                StringName::unref();
              }
LAB_0010346d:
              NodePath::~NodePath((NodePath *)&local_e0);
              AnimationMixer::get_root_node();
              pNVar41 = (NodePath *)Node::get_node((NodePath *)local_208);
              NodePath::NodePath((NodePath *)&local_d8,(String *)&local_138);
              lVar42 = Node::get_node(pNVar41);
              NodePath::~NodePath((NodePath *)&local_d8);
              NodePath::~NodePath((NodePath *)local_1b8);
              AnimationMixer::get_root_node();
              pNVar41 = (NodePath *)Node::get_node((NodePath *)local_208);
              NodePath::NodePath((NodePath *)&local_d8,(String *)&local_138);
              lVar45 = Node::get_node(pNVar41);
              NodePath::~NodePath((NodePath *)&local_d8);
              NodePath::~NodePath((NodePath *)local_1b8);
              while (lVar45 != 0) {
                pSVar43 = (String *)__dynamic_cast(lVar45,&Object::typeinfo,&Skeleton3D::typeinfo,0)
                ;
                if ((pSVar43 != (String *)0x0) && (local_1f0 == pSVar43)) {
                  if (lVar42 == lVar45) {
                    Animation::track_get_path((int)local_1b8);
                    iVar34 = NodePath::get_subname_count();
                    NodePath::~NodePath((NodePath *)local_1b8);
                    iVar35 = (int)local_140;
                    if (iVar34 < 1) {
                      operator+((char *)&local_d8,(String *)&_LC57);
                      NodePath::NodePath((NodePath *)local_1b8,(String *)&local_d8);
                      Animation::track_set_path(iVar35,(NodePath *)(ulong)uVar53);
                      NodePath::~NodePath((NodePath *)local_1b8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                      break;
                    }
                    Animation::track_get_path((int)&local_f0);
                    NodePath::get_concatenated_subnames();
                    if (local_e8 == (Object *)0x0) {
                      local_e0 = 0;
                    }
                    else {
                      local_e0 = 0;
                      if (*(char **)(local_e8 + 8) == (char *)0x0) {
                        if (*(long *)(local_e8 + 0x10) != 0) {
                          CowData<char32_t>::_ref
                                    ((CowData<char32_t> *)&local_e0,(CowData *)(local_e8 + 0x10));
                        }
                      }
                      else {
                        String::parse_latin1((String *)&local_e0,*(char **)(local_e8 + 8));
                      }
                    }
                    local_100 = 0;
                    local_c8 = (Object *)&_LC30;
                    local_c0 = 1;
                    String::parse_latin1((StrRange *)&local_100);
                    operator+((char *)local_108,(String *)&_LC57);
                    String::operator+((String *)&local_f8,local_108);
                    String::operator+((String *)&local_d8,(String *)&local_f8);
                    NodePath::NodePath((NodePath *)local_1b8,(String *)&local_d8);
                    Animation::track_set_path(iVar35,(NodePath *)(ulong)uVar53);
                    NodePath::~NodePath((NodePath *)local_1b8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
                  }
                  else {
                    Animation::track_get_path((int)local_1b8);
                    iVar34 = NodePath::get_subname_count();
                    NodePath::~NodePath((NodePath *)local_1b8);
                    iVar35 = (int)local_140;
                    if (iVar34 < 1) {
                      Node::get_path_to((Node *)&local_e8,SUB81(lVar45,0));
                      NodePath::operator_cast_to_String((NodePath *)&local_e0);
                      local_c8 = (Object *)&_LC58;
                      local_f8 = 0;
                      local_c0 = 1;
                      String::parse_latin1((StrRange *)&local_f8);
                      operator+((char *)&local_100,(String *)&_LC57);
                      String::operator+((String *)&local_f0,(String *)&local_100);
                      String::operator+((String *)&local_d8,(String *)&local_f0);
                      NodePath::NodePath((NodePath *)local_1b8,(String *)&local_d8);
                      Animation::track_set_path(iVar35,(NodePath *)(ulong)uVar53);
                      NodePath::~NodePath((NodePath *)local_1b8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                      NodePath::~NodePath((NodePath *)&local_e8);
                      break;
                    }
                    Animation::track_get_path((int)&local_f0);
                    NodePath::get_concatenated_subnames();
                    if (local_e8 == (Object *)0x0) {
                      local_e0 = 0;
                    }
                    else {
                      pcVar7 = *(char **)(local_e8 + 8);
                      local_e0 = 0;
                      if (pcVar7 == (char *)0x0) {
                        if (*(long *)(local_e8 + 0x10) != 0) {
                          CowData<char32_t>::_ref
                                    ((CowData<char32_t> *)&local_e0,(CowData *)(local_e8 + 0x10));
                        }
                      }
                      else {
                        local_c0 = strlen(pcVar7);
                        local_c8 = (Object *)pcVar7;
                        String::parse_latin1((StrRange *)&local_e0);
                      }
                    }
                    local_100 = 0;
                    local_c8 = (Object *)&_LC30;
                    local_c0 = 1;
                    String::parse_latin1((StrRange *)&local_100);
                    Node::get_path_to(local_118,SUB81(lVar45,0));
                    NodePath::operator_cast_to_String(local_110);
                    local_128 = 0;
                    local_c8 = (Object *)&_LC58;
                    local_c0 = 1;
                    String::parse_latin1((StrRange *)&local_128);
                    operator+((char *)local_130,(String *)&_LC57);
                    String::operator+(local_120,local_130);
                    String::operator+(local_108,local_120);
                    String::operator+((String *)&local_f8,local_108);
                    String::operator+((String *)&local_d8,(String *)&local_f8);
                    NodePath::NodePath((NodePath *)local_1b8,(String *)&local_d8);
                    Animation::track_set_path(iVar35,(NodePath *)(ulong)uVar53);
                    NodePath::~NodePath((NodePath *)local_1b8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
                    NodePath::~NodePath((NodePath *)local_118);
                  }
                  local_200 = (NodePath *)&local_f0;
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                  if ((StringName::configured != '\0') && (local_e8 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  NodePath::~NodePath(local_200);
                  break;
                }
                lVar45 = Node::get_parent();
              }
              uVar53 = uVar53 + 1;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_138);
            } while (uVar37 != uVar53);
          }
          if (((local_140 != (Object *)0x0) &&
              (cVar33 = RefCounted::unreference(), pOVar4 = local_140, cVar33 != '\0')) &&
             (cVar33 = predelete_handler(local_140), cVar33 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
          lVar38 = *(long *)(lVar38 + 8);
        } while (lVar38 != 0);
      }
      List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_148);
    }
    Node::set_name(local_1f0);
    Node::set_unique_name_in_owner(SUB81(local_1f0,0));
    Array::~Array((Array *)local_150);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  }
  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
  ::~HashMap(local_190);
  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
  ::~HashMap(local_188);
LAB_00102681:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102ef2:
  if ((StringName::configured != '\0') && (local_c8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_c8 = (Object *)0x0;
  if (local_e8 != (Object *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_e8);
  }
  Vector<String>::push_back((Vector<String> *)&local_d8,(StringName *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
  ::insert((StringName *)&local_c8,(String *)&local_88,SUB81((StrRange *)&local_f8,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (((local_f0 != (StringName *)0x0) &&
      (cVar33 = RefCounted::unreference(), pSVar29 = local_f0, cVar33 != '\0')) &&
     (cVar33 = predelete_handler((Object *)local_f0), cVar33 != '\0')) {
    (**(code **)(*(long *)pSVar29 + 0x140))();
    Memory::free_static(pSVar29,false);
  }
LAB_001027d5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  bVar32 = iVar34 == iVar54;
  iVar34 = iVar34 + 1;
  if (bVar32) goto LAB_001029b8;
  goto LAB_001027f6;
LAB_001029b8:
  plVar50 = (long *)local_a0._0_8_;
  goto LAB_001029ca;
LAB_00102bf0:
  uVar47 = uVar47 + 1;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)(uVar44 + 1) * lVar38;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar51;
  lVar45 = SUB168(auVar9 * auVar19,8);
  uVar36 = *(uint *)(uVar31 + lVar45 * 4);
  uVar44 = SUB164(auVar9 * auVar19,8);
  if ((uVar36 == 0) ||
     (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar36 * lVar38, auVar20._8_8_ = 0,
     auVar20._0_8_ = uVar51, auVar11._8_8_ = 0,
     auVar11._0_8_ = (ulong)((uVar37 + uVar44) - SUB164(auVar10 * auVar20,8)) * lVar38,
     auVar21._8_8_ = 0, auVar21._0_8_ = uVar51, SUB164(auVar11 * auVar21,8) < uVar47))
  goto LAB_00102dad;
  goto LAB_00102c36;
}



/* PostImportPluginSkeletonRenamer::internal_process(EditorScenePostImportPlugin::InternalImportCategory,
   Node*, Node*, Ref<Resource>, Dictionary const&) */

void __thiscall
PostImportPluginSkeletonRenamer::internal_process
          (PostImportPluginSkeletonRenamer *this,int param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  if (param_2 != 6) {
    return;
  }
  internal_process(this,param_3,param_4,param_5,param_6);
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
  return (uint)CONCAT71(0x1074,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
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



/* PostImportPluginSkeletonRenamer::is_class_ptr(void*) const */

uint __thiscall
PostImportPluginSkeletonRenamer::is_class_ptr(PostImportPluginSkeletonRenamer *this,void *param_1)

{
  return (uint)CONCAT71(0x1073,(undefined4 *)param_1 ==
                               &EditorScenePostImportPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1073,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1073,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1074,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* PostImportPluginSkeletonRenamer::_getv(StringName const&, Variant&) const */

undefined8 PostImportPluginSkeletonRenamer::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PostImportPluginSkeletonRenamer::_setv(StringName const&, Variant const&) */

undefined8 PostImportPluginSkeletonRenamer::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PostImportPluginSkeletonRenamer::_validate_propertyv(PropertyInfo&) const */

void PostImportPluginSkeletonRenamer::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PostImportPluginSkeletonRenamer::_property_can_revertv(StringName const&) const */

undefined8 PostImportPluginSkeletonRenamer::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PostImportPluginSkeletonRenamer::_property_get_revertv(StringName const&, Variant&) const */

undefined8
PostImportPluginSkeletonRenamer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PostImportPluginSkeletonRenamer::_notificationv(int, bool) */

void PostImportPluginSkeletonRenamer::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107090;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107090;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* PostImportPluginSkeletonRenamer::_get_class_namev() const */

undefined8 * PostImportPluginSkeletonRenamer::_get_class_namev(void)

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
LAB_00103f53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103f53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "PostImportPluginSkeletonRenamer");
      goto LAB_00103fbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PostImportPluginSkeletonRenamer"
            );
LAB_00103fbe:
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
LAB_00104033:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104033;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010409e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010409e:
  return &_get_class_namev()::_class_name_static;
}



/* PostImportPluginSkeletonRenamer::~PostImportPluginSkeletonRenamer() */

void __thiscall
PostImportPluginSkeletonRenamer::~PostImportPluginSkeletonRenamer
          (PostImportPluginSkeletonRenamer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = operator_new;
  if (bVar1) {
    if (*(long *)(this + 0x248) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041fa;
    }
    if (*(long *)(this + 0x230) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041fa;
    }
    if (*(long *)(this + 0x218) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041fa;
    }
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041fa;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041fa;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041fa;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041fa;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
    }
  }
LAB_001041fa:
  *(undefined ***)this = &PTR__initialize_classv_00107090;
  Object::~Object((Object *)this);
  return;
}



/* PostImportPluginSkeletonRenamer::~PostImportPluginSkeletonRenamer() */

void __thiscall
PostImportPluginSkeletonRenamer::~PostImportPluginSkeletonRenamer
          (PostImportPluginSkeletonRenamer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = operator_new;
  if (bVar1) {
    if (*(long *)(this + 0x248) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010432a;
    }
    if (*(long *)(this + 0x230) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010432a;
    }
    if (*(long *)(this + 0x218) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010432a;
    }
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010432a;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010432a;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010432a;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010432a;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
    }
  }
LAB_0010432a:
  *(undefined ***)this = &PTR__initialize_classv_00107090;
  Object::~Object((Object *)this);
  operator_delete(this,0x260);
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



/* PostImportPluginSkeletonRenamer::get_class() const */

void PostImportPluginSkeletonRenamer::get_class(void)

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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
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



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::~HashMap() */

void __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::~HashMap(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 8);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar2 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar4 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar4) != 0) {
          pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar4) = 0;
          if (*(long *)((long)pvVar5 + 0x18) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)((long)pvVar5 + 0x18) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar3 = *(long *)((long)pvVar5 + 0x18);
              *(undefined8 *)((long)pvVar5 + 0x18) = 0;
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
          pvVar5 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
        }
        lVar4 = lVar4 + 4;
      } while (lVar4 != (ulong)uVar2 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar5 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar5,false);
  Memory::free_static(*(void **)(this + 0x10),false);
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
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00104d25;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00104d25:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00104e8b;
  }
  cVar5 = String::operator==((String *)param_1,"RefCounted");
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
      cVar5 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_00104e8b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==((String *)param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00104e8b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PostImportPluginSkeletonRenamer::is_class(String const&) const */

undefined8 __thiscall
PostImportPluginSkeletonRenamer::is_class(PostImportPluginSkeletonRenamer *this,String *param_1)

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
    cVar5 = String::operator==((String *)param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010509b;
  }
  cVar5 = String::operator==((String *)param_1,"PostImportPluginSkeletonRenamer");
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
      cVar5 = String::operator==((String *)param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010509b;
    }
    cVar5 = String::operator==((String *)param_1,"EditorScenePostImportPlugin");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0010519e;
    }
  }
LAB_0010509b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010519e:
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



/* PostImportPluginSkeletonRenamer::_initialize_classv() */

void PostImportPluginSkeletonRenamer::_initialize_classv(void)

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
    if (EditorScenePostImportPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0010a010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorScenePostImportPlugin";
      local_70 = 0;
      local_50 = 0x1b;
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
      if ((code *)PTR__bind_methods_0010a008 != RefCounted::_bind_methods) {
        EditorScenePostImportPlugin::_bind_methods();
      }
      EditorScenePostImportPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorScenePostImportPlugin";
    local_68 = 0;
    local_50 = 0x1b;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "PostImportPluginSkeletonRenamer";
    local_70 = 0;
    local_50 = 0x1f;
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
      goto LAB_0010578c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010578c:
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



/* EditorScenePostImportPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorScenePostImportPlugin::_get_property_listv
          (EditorScenePostImportPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorScenePostImportPlugin";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorScenePostImportPlugin";
  local_98 = 0;
  local_70 = 0x1b;
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
      goto LAB_001059f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001059f1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorScenePostImportPlugin",false);
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



/* PostImportPluginSkeletonRenamer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
PostImportPluginSkeletonRenamer::_get_property_listv
          (PostImportPluginSkeletonRenamer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    EditorScenePostImportPlugin::_get_property_listv
              ((EditorScenePostImportPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PostImportPluginSkeletonRenamer";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PostImportPluginSkeletonRenamer";
  local_98 = 0;
  local_70 = 0x1f;
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
      goto LAB_00105ca1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105ca1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"PostImportPluginSkeletonRenamer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorScenePostImportPlugin::_get_property_listv
                ((EditorScenePostImportPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::_lookup_pos(String const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::_lookup_pos(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
              *this,String *param_1,uint *param_2)

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
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = String::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    lVar17 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,(String *)param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar14;
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x10);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
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
    lVar5 = 0;
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
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00106340:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar9 = uVar6 + 1;
  if (lVar9 == 0) goto LAB_00106340;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar5) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_00106396;
  }
  if (lVar9 == lVar5) {
LAB_001062bb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00106396:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010622f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_001062bb;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0010622f:
  puVar7[-1] = param_1;
  return 0;
}



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::_resize_and_rehash
          (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
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
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
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
  undefined8 uVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  undefined1 (*pauVar17) [16];
  undefined8 uVar18;
  void *__s_00;
  ulong uVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  uint *puVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  long in_FS_OFFSET;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  cVar14 = _lookup_pos(this,param_1,&local_78);
  if (cVar14 != '\0') {
    pauVar17 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_78 * 8);
    goto LAB_0010690f;
  }
  local_70 = 0;
  uVar16 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
    uVar26 = (ulong)uVar16;
    uVar19 = uVar26 * 4;
    uVar24 = uVar26 * 8;
    uVar18 = Memory::alloc_static(uVar19,false);
    *(undefined8 *)(this + 0x10) = uVar18;
    __s_00 = (void *)Memory::alloc_static(uVar24,false);
    *(void **)(this + 8) = __s_00;
    if (uVar16 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar24)) && (__s_00 < (void *)((long)__s + uVar19))) {
        uVar19 = 0;
        do {
          *(undefined4 *)((long)__s + uVar19 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar19 * 8) = 0;
          uVar19 = uVar19 + 1;
        } while (uVar26 != uVar19);
      }
      else {
        memset(__s,0,uVar19);
        memset(__s_00,0,uVar24);
      }
    }
  }
  local_74 = 0;
  cVar14 = _lookup_pos(this,param_1,&local_74);
  if (cVar14 == '\0') {
    if ((float)uVar16 * __LC45 < (float)(*(int *)(this + 0x2c) + 1)) {
      if (*(int *)(this + 0x28) == 0x1c) {
        pauVar17 = (undefined1 (*) [16])0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_00106903;
      }
      _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
    }
    local_58 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(long *)param_1 == 0) {
      local_50[0] = 0;
      pauVar17 = (undefined1 (*) [16])operator_new(0x20,"");
      *(undefined8 *)pauVar17[1] = 0;
      *pauVar17 = (undefined1  [16])0x0;
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
      lVar2 = local_58;
      uVar18 = local_68._0_8_;
      uVar13 = local_68._8_8_;
      local_50[0] = 0;
      pauVar17 = (undefined1 (*) [16])operator_new(0x20,"");
      *(undefined8 *)pauVar17[1] = 0;
      *(undefined8 *)*pauVar17 = uVar18;
      *(undefined8 *)(*pauVar17 + 8) = uVar13;
      if (lVar2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar17 + 1),(CowData *)&local_58);
      }
    }
    *(undefined8 *)(pauVar17[1] + 8) = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    puVar1 = *(undefined8 **)(this + 0x20);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar17;
    }
    else {
      *puVar1 = pauVar17;
      *(undefined8 **)(*pauVar17 + 8) = puVar1;
    }
    *(undefined1 (**) [16])(this + 0x20) = pauVar17;
    uVar15 = String::hash();
    lVar2 = *(long *)(this + 0x10);
    uVar16 = 1;
    if (uVar15 != 0) {
      uVar16 = uVar15;
    }
    uVar24 = (ulong)uVar16;
    uVar15 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar19 = CONCAT44(0,uVar15);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar24 * lVar3;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar19;
    lVar21 = SUB168(auVar5 * auVar9,8);
    lVar4 = *(long *)(this + 8);
    puVar25 = (uint *)(lVar2 + lVar21 * 4);
    iVar20 = SUB164(auVar5 * auVar9,8);
    uVar22 = *puVar25;
    pauVar28 = pauVar17;
    if (uVar22 != 0) {
      uVar23 = 0;
      pauVar27 = pauVar17;
      do {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)uVar22 * lVar3;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar19;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)((iVar20 + uVar15) - SUB164(auVar6 * auVar10,8)) * lVar3;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar19;
        uVar16 = SUB164(auVar7 * auVar11,8);
        pauVar28 = pauVar27;
        if (uVar16 < uVar23) {
          *puVar25 = (uint)uVar24;
          uVar24 = (ulong)uVar22;
          puVar1 = (undefined8 *)(lVar4 + lVar21 * 8);
          pauVar28 = (undefined1 (*) [16])*puVar1;
          *puVar1 = pauVar27;
          uVar23 = uVar16;
        }
        uVar16 = (uint)uVar24;
        uVar23 = uVar23 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)(iVar20 + 1) * lVar3;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar19;
        lVar21 = SUB168(auVar8 * auVar12,8);
        puVar25 = (uint *)(lVar2 + lVar21 * 4);
        iVar20 = SUB164(auVar8 * auVar12,8);
        uVar22 = *puVar25;
        pauVar27 = pauVar28;
      } while (uVar22 != 0);
    }
    *(undefined1 (**) [16])(lVar4 + lVar21 * 8) = pauVar28;
    *puVar25 = uVar16;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar19 = (ulong)local_74;
    pauVar17 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar19 * 8);
    if (*(long *)(pauVar17[1] + 8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar17[1] + 8),(CowData *)&local_70);
      pauVar17 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar19 * 8);
    }
  }
LAB_00106903:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010690f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar17[1] + 8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::insert(String const&, String const&,
   bool) */

String * HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
         ::insert(String *param_1,String *param_2,bool param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  uint uVar13;
  long *plVar14;
  undefined8 uVar15;
  void *__s_00;
  ulong uVar16;
  CowData *in_RCX;
  uint uVar17;
  int iVar18;
  undefined7 in_register_00000011;
  CowData *pCVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  char in_R8B;
  uint uVar24;
  long lVar25;
  uint *puVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  uint local_a8;
  long *local_90;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58;
  long local_50 [2];
  long local_40;
  
  pCVar19 = (CowData *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar27 = (ulong)uVar17;
    uVar16 = uVar27 * 4;
    uVar15 = Memory::alloc_static(uVar16,false);
    *(undefined8 *)(param_2 + 0x10) = uVar15;
    uVar21 = uVar27 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar21,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar17 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)(uVar21 + (long)__s_00)) && (__s_00 < (void *)((long)__s + uVar16))) {
        uVar16 = 0;
        do {
          *(undefined4 *)((long)__s + uVar16 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar16 * 8) = 0;
          uVar16 = uVar16 + 1;
        } while (uVar27 != uVar16);
      }
      else {
        memset(__s,0,uVar16);
        memset(__s_00,0,uVar21);
      }
    }
  }
  local_6c = 0;
  cVar12 = _lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                        *)param_2,pCVar19,&local_6c);
  if (cVar12 == '\0') {
    if ((float)uVar17 * __LC45 < (float)(*(int *)(param_2 + 0x2c) + 1)) {
      if (*(int *)(param_2 + 0x28) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_90 = (long *)0x0;
        goto LAB_00106d43;
      }
      _resize_and_rehash((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          *)param_2,*(int *)(param_2 + 0x28) + 1);
    }
    local_58 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(long *)pCVar19 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,pCVar19);
    }
    local_50[0] = 0;
    lVar25 = *(long *)in_RCX;
    if (*(long *)in_RCX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_50,in_RCX);
      lVar25 = local_50[0];
    }
    local_90 = (long *)operator_new(0x20,"");
    local_90[2] = 0;
    *local_90 = local_68._0_8_;
    local_90[1] = local_68._8_8_;
    if (local_58 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_90 + 2),(CowData *)&local_58);
    }
    local_90[3] = 0;
    if (lVar25 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_90 + 3),(CowData *)local_50);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    puVar1 = *(undefined8 **)(param_2 + 0x20);
    if (puVar1 == (undefined8 *)0x0) {
      *(long **)(param_2 + 0x18) = local_90;
      *(long **)(param_2 + 0x20) = local_90;
    }
    else if (in_R8B == '\0') {
      *puVar1 = local_90;
      local_90[1] = (long)puVar1;
      *(long **)(param_2 + 0x20) = local_90;
    }
    else {
      lVar25 = *(long *)(param_2 + 0x18);
      *(long **)(lVar25 + 8) = local_90;
      *local_90 = lVar25;
      *(long **)(param_2 + 0x18) = local_90;
    }
    uVar13 = String::hash();
    lVar25 = *(long *)(param_2 + 8);
    uVar17 = 1;
    if (uVar13 != 0) {
      uVar17 = uVar13;
    }
    uVar21 = (ulong)uVar17;
    uVar13 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar13);
    lVar2 = *(long *)(param_2 + 0x10);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar21 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar16;
    lVar20 = SUB168(auVar4 * auVar8,8);
    puVar26 = (uint *)(lVar2 + lVar20 * 4);
    iVar18 = SUB164(auVar4 * auVar8,8);
    uVar23 = *puVar26;
    plVar14 = local_90;
    if (uVar23 != 0) {
      uVar24 = 0;
      plVar22 = local_90;
      do {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)uVar23 * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar16;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)((iVar18 + uVar13) - SUB164(auVar5 * auVar9,8)) * lVar3;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar16;
        local_a8 = SUB164(auVar6 * auVar10,8);
        plVar14 = plVar22;
        if (local_a8 < uVar24) {
          puVar1 = (undefined8 *)(lVar25 + lVar20 * 8);
          *puVar26 = (uint)uVar21;
          uVar21 = (ulong)uVar23;
          plVar14 = (long *)*puVar1;
          *puVar1 = plVar22;
          uVar24 = local_a8;
        }
        uVar17 = (uint)uVar21;
        uVar24 = uVar24 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)(iVar18 + 1) * lVar3;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar16;
        lVar20 = SUB168(auVar7 * auVar11,8);
        puVar26 = (uint *)(lVar2 + lVar20 * 4);
        iVar18 = SUB164(auVar7 * auVar11,8);
        uVar23 = *puVar26;
        plVar22 = plVar14;
      } while (uVar23 != 0);
    }
    *(long **)(lVar25 + lVar20 * 8) = plVar14;
    *puVar26 = uVar17;
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  }
  else {
    uVar16 = (ulong)local_6c;
    local_90 = *(long **)(*(long *)(param_2 + 8) + uVar16 * 8);
    if (local_90[3] != *(long *)in_RCX) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_90 + 3),in_RCX);
      local_90 = *(long **)(*(long *)(param_2 + 8) + uVar16 * 8);
    }
  }
LAB_00106d43:
  *(long **)param_1 = local_90;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* PostImportPluginSkeletonRenamer::get_internal_import_options(EditorScenePostImportPlugin::InternalImportCategory,
   List<ResourceImporter::ImportOption, DefaultAllocator>*) */

void PostImportPluginSkeletonRenamer::_GLOBAL__sub_I_get_internal_import_options(void)

{
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper != '\0') {
    return;
  }
  AudioStreamRandomizer::base_property_helper = 1;
  AudioStreamRandomizer::base_property_helper._56_8_ = 2;
  AudioStreamRandomizer::base_property_helper._64_8_ = 0;
  AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper,
               &__dso_handle);
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
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::~HashMap() */

void __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::~HashMap(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

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
/* PostImportPluginSkeletonRenamer::~PostImportPluginSkeletonRenamer() */

void __thiscall
PostImportPluginSkeletonRenamer::~PostImportPluginSkeletonRenamer
          (PostImportPluginSkeletonRenamer *this)

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


