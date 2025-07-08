/* EditorFileSystemImportFormatSupportQueryBlend::_path_confirmed() */

void __thiscall
EditorFileSystemImportFormatSupportQueryBlend::_path_confirmed
          (EditorFileSystemImportFormatSupportQueryBlend *this)

{
  this[0x1f0] = (EditorFileSystemImportFormatSupportQueryBlend)0x1;
  return;
}



/* EditorFileSystemImportFormatSupportQueryBlend::_update_icons() */

void __thiscall
EditorFileSystemImportFormatSupportQueryBlend::_update_icons
          (EditorFileSystemImportFormatSupportQueryBlend *this)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  pRVar1 = *(Ref **)(this + 0x1d8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_update_icons()::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&_update_icons()::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&_update_icons()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_icons()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_icons()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_28);
  Button::set_button_icon(pRVar1);
  if (local_28 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_28);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)local_28 + 0x140))(local_28);
        Memory::free_static(local_28,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* EditorSceneFormatImporterBlend::get_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
EditorSceneFormatImporterBlend::get_extensions(EditorSceneFormatImporterBlend *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = "blend";
  local_30 = 5;
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



/* EditorFileSystemImportFormatSupportQueryBlend::EditorFileSystemImportFormatSupportQueryBlend() */

void __thiscall
EditorFileSystemImportFormatSupportQueryBlend::EditorFileSystemImportFormatSupportQueryBlend
          (EditorFileSystemImportFormatSupportQueryBlend *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00115c48;
  StringName::StringName((StringName *)(this + 0x180),"_is_active",false);
  this[0x188] = (EditorFileSystemImportFormatSupportQueryBlend)0x0;
  *(undefined8 *)(this + 400) = 0;
  StringName::StringName((StringName *)(this + 0x198),"_get_file_extensions",false);
  this[0x1a0] = (EditorFileSystemImportFormatSupportQueryBlend)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  StringName::StringName((StringName *)(this + 0x1b0),"_query",false);
  this[0x1b8] = (EditorFileSystemImportFormatSupportQueryBlend)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00116810;
  this[0x1f0] = (EditorFileSystemImportFormatSupportQueryBlend)0x0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e0) = (undefined1  [16])0x0;
  return;
}



/* EditorFileSystemImportFormatSupportQueryBlend::_browse_install() */

void __thiscall
EditorFileSystemImportFormatSupportQueryBlend::_browse_install
          (EditorFileSystemImportFormatSupportQueryBlend *this)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char cVar4;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  LineEdit::get_text();
  cVar4 = String::operator!=((String *)&local_30,(String *)&local_28);
  lVar3 = local_30;
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_30 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_28;
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_28 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (cVar4 != '\0') {
    pSVar2 = *(String **)(this + 0x1e0);
    LineEdit::get_text();
    EditorFileDialog::set_current_file(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    Window::popup_centered_ratio(_LC30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSceneFormatImporterBlend::get_import_options(String const&,
   List<ResourceImporter::ImportOption, DefaultAllocator>*) */

void __thiscall
EditorSceneFormatImporterBlend::get_import_options
          (EditorSceneFormatImporterBlend *this,String *param_1,List *param_2)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  String local_d8 [48];
  int local_a8 [8];
  PropertyInfo local_88 [48];
  Variant local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 != 0) && (1 < *(uint *)(*(long *)param_1 + -8))) {
    String::get_extension();
    String::to_lower();
    cVar1 = String::operator!=(local_d8,"blend");
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
    if (cVar1 != '\0') goto LAB_001007ab;
  }
  Variant::Variant((Variant *)local_a8,0);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"All,Visible Only,Renderable");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#1}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#1}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#1}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#1}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#1}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#1}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#1}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,2,(CowData<char32_t> *)&local_f0,2,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,false);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#2}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#2}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#2}::operator()()::sname,false);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#2}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#2}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#2}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#2}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#2}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#2}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#3}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#3}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#3}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#3}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#3}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#3}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#3}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#3}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#4}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#4}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#4}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#4}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#4}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#4}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#4}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#4}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#4}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#5}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#5}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#5}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#5}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#5}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#5}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#5}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#5}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#5}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,1);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"No Modifiers,All Modifiers");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#6}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#6}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#6}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#6}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#6}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#6}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#6}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#6}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#6}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,2,(CowData<char32_t> *)&local_f0,2,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,false);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#7}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#7}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#7}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#7}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#7}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#7}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#7}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#7}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#7}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#8}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#8}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#8}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#8}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#8}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#8}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#8}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#8}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#8}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#9}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#9}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#9}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#9}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#9}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#9}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#9}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#9}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#9}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,false);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#10}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#10}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#10}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#10}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#10}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#10}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#10}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#10}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#10}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#11}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#11}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#11}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#11}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#11}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#11}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#11}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#11}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#11}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,2);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"None,4 Influences (Compatible),All Influences");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#12}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#12}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#12}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#12}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#12}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#12}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#12}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#12}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#12}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,2,(CowData<char32_t> *)&local_f0,2,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,false);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#13}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#13}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#13}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#13}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#13}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#13}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#13}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#13}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#13}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#14}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#14}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#14}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#14}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#14}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#14}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#14}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#14}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#14}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,1);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"Placeholder,Export");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#15}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#15}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#15}::operator()()::sname,false);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#15}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#15}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#15}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#15}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#15}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#15}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,2,(CowData<char32_t> *)&local_f0,2,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#16}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#16}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#16}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#16}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#16}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#16}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#16}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#16}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#16}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#17}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#17}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#17}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#17}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#17}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#17}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#17}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#17}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#17}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_a8,true);
  local_e0 = 0;
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"");
  if ((get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
       {lambda()#18}::operator()()::sname == '\0') &&
     (iVar2 = __cxa_guard_acquire(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                                   ::{lambda()#18}::operator()()::sname), iVar2 != 0)) {
    _scs_create((char *)&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#18}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#18}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                         ::{lambda()#18}::operator()()::sname);
  }
  if (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)::
      {lambda()#18}::operator()()::sname == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = 0;
    if (*(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                   ::{lambda()#18}::operator()()::sname + 8) == (char *)0x0) {
      CowData<char32_t>::_ref
                ((CowData<char32_t> *)&local_f0,
                 (CowData *)
                 (get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                  ::{lambda()#18}::operator()()::sname + 0x10));
    }
    else {
      String::parse_latin1
                ((String *)&local_f0,
                 *(char **)(get_import_options(String_const&,List<ResourceImporter::ImportOption,DefaultAllocator>*)
                            ::{lambda()#18}::operator()()::sname + 8));
    }
  }
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_d8,1,(CowData<char32_t> *)&local_f0,0,(String *)&local_e8,6,
             (CowData<char32_t> *)&local_e0);
  PropertyInfo::PropertyInfo(local_88,(PropertyInfo *)local_d8);
  Variant::Variant(local_58,(Variant *)local_a8);
  List<ResourceImporter::ImportOption,DefaultAllocator>::push_back
            ((List<ResourceImporter::ImportOption,DefaultAllocator> *)param_2,
             (ImportOption *)local_88);
  ResourceImporter::ImportOption::~ImportOption((ImportOption *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((StringName::configured != '\0') && (local_e0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_001007ab:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorSceneFormatImporterBlend::get_option_visibility(String const&, String const&, String
   const&, HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) */

String * EditorSceneFormatImporterBlend::get_option_visibility
                   (String *param_1,String *param_2,String *param_3,HashMap *param_4)

{
  char cVar1;
  bool bVar2;
  Variant *this;
  String *in_R8;
  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
  *in_R9;
  long in_FS_OFFSET;
  CowData<char32_t> local_50 [8];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  cVar1 = String::operator!=((String *)&local_48,"blend");
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_50);
  if (cVar1 == '\0') {
    cVar1 = String::begins_with((char *)in_R8);
    if (cVar1 != '\0') {
      cVar1 = String::operator!=(in_R8,"animation/import");
      if (cVar1 != '\0') {
        StringName::StringName((StringName *)&local_48,"animation/import",false);
        this = (Variant *)
               HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
               ::operator[](in_R9,(StringName *)&local_48);
        bVar2 = Variant::operator_cast_to_bool(this);
        if (!bVar2) {
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          Variant::Variant((Variant *)param_1,false);
          goto LAB_001025c2;
        }
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
      }
    }
  }
  Variant::Variant((Variant *)param_1,true);
LAB_001025c2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */

void __thiscall PropertyInfo::operator=(PropertyInfo *this,PropertyInfo *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
    StringName::unref();
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(this + 0x20) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return;
}



/* EditorFileSystemImportFormatSupportQueryBlend::is_active() const */

ulong EditorFileSystemImportFormatSupportQueryBlend::is_active(void)

{
  bool bVar1;
  uint uVar2;
  undefined7 extraout_var;
  ulong uVar3;
  long in_FS_OFFSET;
  int iStack_68;
  int local_64;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_58,"filesystem/import/blender/enabled",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_48);
  uVar3 = CONCAT71(extraout_var,bVar1) & 0xffffffff;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  if ((char)uVar3 != '\0') {
    local_60 = 0;
    local_58 = "filesystem/import/blender/blender_path";
    local_50 = 0x26;
    String::parse_latin1((StrRange *)&local_60);
    _EDITOR_GET((String *)local_48);
    Variant::operator_cast_to_String((Variant *)&local_58);
    uVar2 = _get_blender_version((String *)&local_58,&iStack_68,&local_64,(String *)0x0);
    uVar3 = (ulong)(uVar2 ^ 1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFileSystemImportFormatSupportQueryBlend::_validate_path(String) */

void EditorFileSystemImportFormatSupportQueryBlend::_validate_path
               (undefined8 param_1,undefined8 param_2,long param_3,String *param_4)

{
  StringName *pSVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (char *)0x0;
  cVar2 = String::operator==(param_4,"");
  if (cVar2 == '\0') {
    cVar2 = _get_blender_version(param_4,(int *)&local_70,(int *)&local_68,(String *)&local_80);
    if (cVar2 != '\0') {
      cVar2 = String::operator==((String *)(param_3 + 0x1f8),param_4);
      local_70 = 0;
      if (cVar2 == '\0') {
        String::parse_latin1((String *)&local_70,"");
        pcVar4 = "Path to Blender executable is valid.";
      }
      else {
        String::parse_latin1((String *)&local_70,"");
        pcVar4 = "Path to Blender executable is valid (Autodetected).";
      }
      local_78 = 0;
      String::parse_latin1((String *)&local_78,pcVar4);
      TTR((String *)&local_68,(String *)&local_78);
      if (local_80 != local_68) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        local_80 = local_68;
        local_68 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      Label::set_text(*(String **)(param_3 + 0x1e8));
      pSVar1 = *(StringName **)(param_3 + 0x1e8);
      if (_validate_path(String)::{lambda()#1}::operator()()::sname == '\0') {
        iVar3 = __cxa_guard_acquire(&_validate_path(String)::{lambda()#1}::operator()()::sname);
        if (iVar3 != 0) {
          _scs_create((char *)&_validate_path(String)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_validate_path(String)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_validate_path(String)::{lambda()#1}::operator()()::sname);
        }
      }
      local_58 = Control::get_theme_color
                           (pSVar1,(StringName *)
                                   &_validate_path(String)::{lambda()#1}::operator()()::sname);
      local_50 = param_2;
      Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
      BaseButton::set_disabled(SUB81(*(undefined8 *)(*(long *)(param_3 + 0x1c8) + 0xd88),0));
      goto LAB_00103057;
    }
    Label::set_text(*(String **)(param_3 + 0x1e8));
  }
  else {
    local_70 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_68 = "Path is empty.";
    local_78 = 0;
    local_60 = 0xe;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    if (local_80 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_80 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    Label::set_text(*(String **)(param_3 + 0x1e8));
  }
  pSVar1 = *(StringName **)(param_3 + 0x1e8);
  if (_validate_path(String)::{lambda()#2}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&_validate_path(String)::{lambda()#2}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&_validate_path(String)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_validate_path(String)::{lambda()#2}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_validate_path(String)::{lambda()#2}::operator()()::sname);
    }
  }
  local_58 = Control::get_theme_color
                       (pSVar1,(StringName *)
                               &_validate_path(String)::{lambda()#2}::operator()()::sname);
  local_50 = param_2;
  Control::add_theme_color_override(pSVar1,(Color *)(SceneStringNames::singleton + 0xb0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(*(long *)(param_3 + 0x1c8) + 0xd88),0));
LAB_00103057:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFileSystemImportFormatSupportQueryBlend::_select_install(String) */

void __thiscall
EditorFileSystemImportFormatSupportQueryBlend::_select_install
          (EditorFileSystemImportFormatSupportQueryBlend *this,CowData *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  uVar2 = *(undefined8 *)(this + 0x1d0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,param_2);
  }
  LineEdit::set_text(uVar2);
  lVar3 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  local_38 = 0;
  if (*(long *)param_2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,param_2);
  }
  _validate_path(this);
  lVar3 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSceneFormatImporterBlend::import_scene(String const&, unsigned int, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, Error*) */

undefined8 __thiscall
EditorSceneFormatImporterBlend::import_scene
          (EditorSceneFormatImporterBlend *this,String *param_1,uint param_2,HashMap *param_3,
          List *param_4,Error *param_5)

{
  code *pcVar1;
  Object *pOVar2;
  String *pSVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  Variant *pVVar7;
  undefined8 uVar8;
  String *pSVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  float fVar11;
  bool local_108;
  char *local_f8;
  long local_e8;
  String local_e0 [8];
  long local_d8;
  String local_d0 [8];
  String local_c8 [8];
  Dictionary local_c0 [8];
  Dictionary local_b8 [8];
  Object *local_b0;
  String *local_a8;
  CowData<char32_t> local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  String *local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (String *)0x0;
  String::parse_latin1((String *)&local_80,"filesystem/import/blender/blender_path");
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_e8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((local_e8 == 0) || (*(uint *)(local_e8 + -8) < 2)) {
    _err_print_error("import_scene","modules/gltf/editor/editor_scene_importer_blend.cpp",0x72,
                     "Condition \"blender_path.is_empty()\" is true. Returning: nullptr",
                     "Blender path is empty, check your Editor Settings.",0,0);
  }
  else {
    cVar4 = FileAccess::exists((String *)&local_e8);
    if (cVar4 != '\0') {
      if (((*(int *)(this + 0x1e8) == -1) || (*(int *)(this + 0x1ec) == -1)) ||
         (cVar4 = String::operator!=((String *)(this + 0x1f0),(String *)&local_e8), cVar4 != '\0'))
      {
        local_80 = (String *)0x0;
        cVar4 = _get_blender_version
                          ((String *)&local_e8,(int *)(this + 0x1e8),(int *)(this + 0x1ec),
                           (String *)&local_80);
        if (cVar4 == '\0') {
          _err_print_error("import_scene","modules/gltf/editor/editor_scene_importer_blend.cpp",0x78
                           ,"Method/function failed. Returning: nullptr",(String *)&local_80,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          goto LAB_00105373;
        }
        if (*(long *)(this + 0x1f0) != local_e8) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1f0),(CowData *)&local_e8);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      }
      ProjectSettings::get_singleton();
      ProjectSettings::globalize_path(local_e0);
      String::get_file();
      String::get_basename();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      ProjectSettings::get_singleton();
      ProjectSettings::get_imported_files_path();
      String::md5_text();
      local_88 = 0;
      if (local_d8 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_d8);
      }
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"%s-%s.gltf");
      vformat<String,String>
                ((String *)&local_80,(String *)&local_90,(CowData<char32_t> *)&local_88,
                 (CowData<char32_t> *)&local_98);
      String::path_join(local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref(local_a0);
      ProjectSettings::get_singleton();
      ProjectSettings::globalize_path(local_c8);
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#1}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#1}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#1}::operator()()::sname,(uint *)&local_80);
      local_108 = false;
      if (cVar4 != '\0') {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#2}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#2}::operator()()::sname);
        }
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#2}::operator()()::sname);
        local_108 = Variant::operator_cast_to_bool(pVVar7);
      }
      Dictionary::Dictionary(local_c0);
      Dictionary::Dictionary(local_b8);
      Variant::Variant((Variant *)local_58,local_c8);
      Variant::Variant((Variant *)local_78,"filepath");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_108);
      Variant::Variant((Variant *)local_78,"export_keep_originals");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,"GLTF_SEPARATE");
      Variant::Variant((Variant *)local_78,"export_format");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,true);
      Variant::Variant((Variant *)local_78,"export_yup");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#3}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#3}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#3}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#3}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#3}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_00103889:
        bVar5 = false;
      }
      else {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#4}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#4}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#4}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#4}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#4}::operator()()::sname);
        }
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#4}::operator()()::sname);
        bVar5 = Variant::operator_cast_to_bool(pVVar7);
        if (!bVar5) goto LAB_00103889;
        bVar5 = true;
      }
      Variant::Variant((Variant *)local_58,bVar5);
      Variant::Variant((Variant *)local_78,"export_extras");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#5}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#5}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#5}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#5}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#5}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_00103917:
        Variant::Variant((Variant *)local_58,false);
        pcVar10 = "export_skins";
LAB_00103928:
        Variant::Variant((Variant *)local_78,pcVar10);
        pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
        Variant::operator=(pVVar7,(Variant *)local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        StringName::StringName((StringName *)&local_80,"blender/meshes/skins",false);
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,(StringName *)&local_80);
        iVar6 = Variant::operator_cast_to_int(pVVar7);
        if ((StringName::configured != '\0') && (local_80 != (String *)0x0)) {
          StringName::unref();
        }
        if (iVar6 == 0) goto LAB_00103917;
        if (iVar6 == 1) {
          Variant::Variant((Variant *)local_58,true);
          Variant::Variant((Variant *)local_78,"export_skins");
          pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
          Variant::operator=(pVVar7,(Variant *)local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,false);
          pcVar10 = "export_all_influences";
          goto LAB_00103928;
        }
        if (iVar6 == 2) {
          Variant::Variant((Variant *)local_58,true);
          Variant::Variant((Variant *)local_78,"export_skins");
          pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
          Variant::operator=(pVVar7,(Variant *)local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          Variant::Variant((Variant *)local_58,true);
          pcVar10 = "export_all_influences";
          goto LAB_00103928;
        }
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#6}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#6}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#6}::operator()()::sname,false);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#6}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#6}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#6}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_00104750:
        pcVar10 = "PLACEHOLDER";
LAB_00104757:
        Variant::Variant((Variant *)local_58,pcVar10);
        Variant::Variant((Variant *)local_78,"export_materials");
        pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
        Variant::operator=(pVVar7,(Variant *)local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        StringName::StringName((StringName *)&local_80,"blender/materials/export_materials",false);
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,(StringName *)&local_80);
        iVar6 = Variant::operator_cast_to_int(pVVar7);
        if ((StringName::configured != '\0') && (local_80 != (String *)0x0)) {
          StringName::unref();
        }
        if (iVar6 == 0) goto LAB_00104750;
        pcVar10 = "EXPORT";
        if (iVar6 == 1) goto LAB_00104757;
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#7}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#7}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#7}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#7}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#7}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#7}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_00103a66:
        bVar5 = false;
      }
      else {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#8}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#8}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#8}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#8}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#8}::operator()()::sname);
        }
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#8}::operator()()::sname);
        bVar5 = Variant::operator_cast_to_bool(pVVar7);
        if (!bVar5) goto LAB_00103a66;
        bVar5 = true;
      }
      Variant::Variant((Variant *)local_58,bVar5);
      Variant::Variant((Variant *)local_78,"export_cameras");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#9}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#9}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#9}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#9}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#9}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_00103b21:
        bVar5 = false;
      }
      else {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#10}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#10}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#10}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#10}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#10}::operator()()::sname);
        }
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#10}::operator()()::sname);
        bVar5 = Variant::operator_cast_to_bool(pVVar7);
        if (!bVar5) goto LAB_00103b21;
        bVar5 = true;
      }
      Variant::Variant((Variant *)local_58,bVar5);
      local_f8 = "export_lights";
      Variant::Variant((Variant *)local_78,"export_lights");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((*(int *)(this + 0x1e8) < 5) &&
         ((*(int *)(this + 0x1e8) != 4 || (*(int *)(this + 0x1ec) < 2)))) {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#13}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#13}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#13}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#13}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#13}::operator()()::sname);
        }
        local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
        cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#13}::operator()()::sname,(uint *)&local_80);
        if (cVar4 == '\0') {
LAB_00104670:
          bVar5 = false;
        }
        else {
          if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
               ::{lambda()#14}::operator()()::sname == '\0') &&
             (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                           ::{lambda()#14}::operator()()::sname), iVar6 != 0)) {
            _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                 ::{lambda()#14}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                          ::{lambda()#14}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                 ::{lambda()#14}::operator()()::sname);
          }
          pVVar7 = (Variant *)
                   HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                 *)param_3,
                                (StringName *)
                                &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                 ::{lambda()#14}::operator()()::sname);
          bVar5 = Variant::operator_cast_to_bool(pVVar7);
          if (!bVar5) goto LAB_00104670;
          bVar5 = true;
        }
        Variant::Variant((Variant *)local_58,bVar5);
        pcVar10 = "export_colors";
      }
      else {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#11}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#11}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#11}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#11}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#11}::operator()()::sname);
        }
        local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
        cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#11}::operator()()::sname,(uint *)&local_80);
        if (cVar4 == '\0') {
LAB_00103bdb:
          Variant::Variant((Variant *)local_58,"NONE");
          pcVar10 = "export_vertex_color";
        }
        else {
          if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
               ::{lambda()#12}::operator()()::sname == '\0') &&
             (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                           ::{lambda()#12}::operator()()::sname), iVar6 != 0)) {
            _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                 ::{lambda()#12}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                          ::{lambda()#12}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                 ::{lambda()#12}::operator()()::sname);
          }
          pVVar7 = (Variant *)
                   HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                 *)param_3,
                                (StringName *)
                                &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                 ::{lambda()#12}::operator()()::sname);
          bVar5 = Variant::operator_cast_to_bool(pVVar7);
          if (!bVar5) goto LAB_00103bdb;
          Variant::Variant((Variant *)local_58,"MATERIAL");
          pcVar10 = "export_vertex_color";
        }
      }
      Variant::Variant((Variant *)local_78,pcVar10);
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#15}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#15}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#15}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#15}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#15}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#15}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_00104690:
        Variant::Variant((Variant *)local_58,false);
        Variant::Variant((Variant *)local_78,"use_renderable");
        pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
        Variant::operator=(pVVar7,(Variant *)local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        bVar5 = false;
LAB_001046e9:
        Variant::Variant((Variant *)local_58,bVar5);
        pcVar10 = "use_visible";
LAB_001046f8:
        Variant::Variant((Variant *)local_78,pcVar10);
        pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
        Variant::operator=(pVVar7,(Variant *)local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        StringName::StringName((StringName *)&local_80,"blender/nodes/visible",false);
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,(StringName *)&local_80);
        iVar6 = Variant::operator_cast_to_int(pVVar7);
        if ((StringName::configured != '\0') && (local_80 != (String *)0x0)) {
          StringName::unref();
        }
        bVar5 = true;
        if (iVar6 == 1) goto LAB_001046e9;
        if (iVar6 == 2) {
          Variant::Variant((Variant *)local_58,true);
          pcVar10 = "use_renderable";
          goto LAB_001046f8;
        }
        if (iVar6 == 0) goto LAB_00104690;
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#16}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#16}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#16}::operator()()::sname,false);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#16}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#16}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#16}::operator()()::sname,(uint *)&local_80);
      if (cVar4 != '\0') {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#17}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#17}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#17}::operator()()::sname,false);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#17}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#17}::operator()()::sname);
        }
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#17}::operator()()::sname);
        bVar5 = Variant::operator_cast_to_bool(pVVar7);
        if (bVar5) {
          Variant::Variant((Variant *)local_58,true);
          Variant::Variant((Variant *)local_78,"use_active_collection");
          pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
          Variant::operator=(pVVar7,(Variant *)local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#18}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#18}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#18}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#18}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#18}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#18}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_00103d6e:
        bVar5 = false;
      }
      else {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#19}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#19}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#19}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#19}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#19}::operator()()::sname);
        }
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#19}::operator()()::sname);
        bVar5 = Variant::operator_cast_to_bool(pVVar7);
        if (!bVar5) goto LAB_00103d6e;
        bVar5 = true;
      }
      Variant::Variant((Variant *)local_58,bVar5);
      Variant::Variant((Variant *)local_78,"export_texcoords");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#20}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#20}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#20}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#20}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#20}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#20}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_00103e29:
        bVar5 = false;
      }
      else {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#21}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#21}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#21}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#21}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#21}::operator()()::sname);
        }
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#21}::operator()()::sname);
        bVar5 = Variant::operator_cast_to_bool(pVVar7);
        if (!bVar5) goto LAB_00103e29;
        bVar5 = true;
      }
      Variant::Variant((Variant *)local_58,bVar5);
      Variant::Variant((Variant *)local_78,"export_normals");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((4 < *(int *)(this + 0x1e8)) ||
         ((*(int *)(this + 0x1e8) == 4 && (0 < *(int *)(this + 0x1ec))))) {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#22}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#22}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#22}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#22}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#22}::operator()()::sname);
        }
        local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
        cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#22}::operator()()::sname,(uint *)&local_80);
        if (cVar4 == '\0') {
LAB_00104ad0:
          Variant::Variant((Variant *)local_58,false);
          local_f8 = "export_gn_mesh";
        }
        else {
          if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
               ::{lambda()#23}::operator()()::sname == '\0') &&
             (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                           ::{lambda()#23}::operator()()::sname), iVar6 != 0)) {
            _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                 ::{lambda()#23}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                          ::{lambda()#23}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                 ::{lambda()#23}::operator()()::sname);
          }
          pVVar7 = (Variant *)
                   HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                 *)param_3,
                                (StringName *)
                                &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                 ::{lambda()#23}::operator()()::sname);
          bVar5 = Variant::operator_cast_to_bool(pVVar7);
          if (!bVar5) goto LAB_00104ad0;
          Variant::Variant((Variant *)local_58,true);
          Variant::Variant((Variant *)local_78,"export_gn_mesh");
          pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
          Variant::operator=(pVVar7,(Variant *)local_58);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (*(long *)(this + 0x1e8) != 0x100000004) goto LAB_00103e98;
          Variant::Variant((Variant *)local_58,false);
        }
        Variant::Variant((Variant *)local_78,local_f8);
        pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
        Variant::operator=(pVVar7,(Variant *)local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
LAB_00103e98:
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#24}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#24}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#24}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#24}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#24}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#24}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_00103efc:
        bVar5 = false;
      }
      else {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#25}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#25}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#25}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#25}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#25}::operator()()::sname);
        }
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#25}::operator()()::sname);
        bVar5 = Variant::operator_cast_to_bool(pVVar7);
        if (!bVar5) goto LAB_00103efc;
        bVar5 = true;
      }
      Variant::Variant((Variant *)local_58,bVar5);
      Variant::Variant((Variant *)local_78,"export_tangents");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#26}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#26}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#26}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#26}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#26}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#26}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_00103f8a:
        if ((*(int *)(this + 0x1e8) < 4) &&
           ((*(int *)(this + 0x1e8) != 3 || (*(int *)(this + 0x1ec) < 6)))) {
          bVar5 = false;
LAB_001045e2:
          Variant::Variant((Variant *)local_58,bVar5);
          pcVar10 = "export_nla_strips";
        }
        else {
          Variant::Variant((Variant *)local_58,"ACTIVE_ACTIONS");
          pcVar10 = "export_animation_mode";
        }
      }
      else {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#27}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#27}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#27}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#27}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#27}::operator()()::sname);
        }
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#27}::operator()()::sname);
        bVar5 = Variant::operator_cast_to_bool(pVVar7);
        if (!bVar5) goto LAB_00103f8a;
        if ((*(int *)(this + 0x1e8) < 4) &&
           ((*(int *)(this + 0x1e8) != 3 || (*(int *)(this + 0x1ec) < 6)))) {
          bVar5 = true;
          goto LAB_001045e2;
        }
        Variant::Variant((Variant *)local_58,"ACTIONS");
        pcVar10 = "export_animation_mode";
      }
      Variant::Variant((Variant *)local_78,pcVar10);
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#28}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#28}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#28}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#28}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#28}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#28}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_00104070:
        bVar5 = false;
      }
      else {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#29}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#29}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#29}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#29}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#29}::operator()()::sname);
        }
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#29}::operator()()::sname);
        bVar5 = Variant::operator_cast_to_bool(pVVar7);
        if (!bVar5) goto LAB_00104070;
        bVar5 = true;
      }
      Variant::Variant((Variant *)local_58,bVar5);
      Variant::Variant((Variant *)local_78,"export_frame_range");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#30}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#30}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#30}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#30}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#30}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#30}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_0010412b:
        bVar5 = false;
      }
      else {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#31}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#31}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#31}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#31}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#31}::operator()()::sname);
        }
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#31}::operator()()::sname);
        bVar5 = Variant::operator_cast_to_bool(pVVar7);
        if (!bVar5) goto LAB_0010412b;
        bVar5 = true;
      }
      Variant::Variant((Variant *)local_58,bVar5);
      Variant::Variant((Variant *)local_78,"export_force_sampling");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#32}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#32}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#32}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#32}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#32}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#32}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_001041e6:
        bVar5 = false;
      }
      else {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#33}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#33}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#33}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#33}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#33}::operator()()::sname);
        }
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#33}::operator()()::sname);
        bVar5 = Variant::operator_cast_to_bool(pVVar7);
        if (!bVar5) goto LAB_001041e6;
        bVar5 = true;
      }
      Variant::Variant((Variant *)local_58,bVar5);
      Variant::Variant((Variant *)local_78,"export_def_bones");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
           ::{lambda()#34}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                       ::{lambda()#34}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#34}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                      ::{lambda()#34}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#34}::operator()()::sname);
      }
      local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
      cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                             *)param_3,
                            (StringName *)
                            &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                             ::{lambda()#34}::operator()()::sname,(uint *)&local_80);
      if (cVar4 == '\0') {
LAB_001042a1:
        bVar5 = false;
      }
      else {
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#35}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#35}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#35}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#35}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#35}::operator()()::sname);
        }
        pVVar7 = (Variant *)
                 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                 ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#35}::operator()()::sname);
        bVar5 = Variant::operator_cast_to_bool(pVVar7);
        if (!bVar5) goto LAB_001042a1;
        bVar5 = true;
      }
      Variant::Variant((Variant *)local_58,bVar5);
      Variant::Variant((Variant *)local_78,"export_apply");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_b8);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_108);
      Variant::Variant((Variant *)local_78,"unpack_all");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_e0);
      Variant::Variant((Variant *)local_78,"path");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,local_b8);
      Variant::Variant((Variant *)local_78,"gltf_options");
      pVVar7 = (Variant *)Dictionary::operator[]((Variant *)local_c0);
      Variant::operator=(pVVar7,(Variant *)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar6 = EditorImportBlendRunner::do_import(EditorImportBlendRunner::singleton);
      if (iVar6 == 0) {
        local_b0 = (Object *)0x0;
        Ref<GLTFDocument>::instantiate<>((Ref<GLTFDocument> *)&local_b0);
        local_a8 = (String *)0x0;
        Ref<GLTFState>::instantiate<>((Ref<GLTFState> *)&local_a8);
        if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
             ::{lambda()#36}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                         ::{lambda()#36}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#36}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                        ::{lambda()#36}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#36}::operator()()::sname);
        }
        local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
        cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                               *)param_3,
                              (StringName *)
                              &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                               ::{lambda()#36}::operator()()::sname,(uint *)&local_80);
        pSVar9 = local_a8;
        if (cVar4 != '\0') {
          if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
               ::{lambda()#37}::operator()()::sname == '\0') &&
             (iVar6 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                           ::{lambda()#37}::operator()()::sname), iVar6 != 0)) {
            _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                 ::{lambda()#37}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                          ::{lambda()#37}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                 ::{lambda()#37}::operator()()::sname);
          }
          pVVar7 = (Variant *)
                   HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                 *)param_3,
                                (StringName *)
                                &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                 ::{lambda()#37}::operator()()::sname);
          bVar5 = Variant::operator_cast_to_bool(pVVar7);
          pSVar9 = local_a8;
          if (bVar5) {
            GLTFState::set_import_as_skeleton_bones(SUB81(local_a8,0));
          }
        }
        local_80 = (String *)0x0;
        if (local_d8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_d8);
        }
        GLTFState::set_scene_name(pSVar9,(String *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        String::get_base_dir();
        GLTFState::set_extract_path(pSVar9);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        GLTFState::set_extract_prefix(pSVar9);
        pOVar2 = local_b0;
        pcVar1 = *(code **)(*(long *)local_b0 + 0x1c8);
        String::get_base_dir();
        local_80 = pSVar9;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          local_80 = (String *)0x0;
        }
        local_98 = 0;
        String::parse_latin1((String *)&local_98,".gltf");
        String::get_basename();
        String::operator+((String *)&local_90,(String *)local_a0);
        iVar6 = (*pcVar1)(pOVar2,(String *)&local_90,(String *)&local_80,param_2,
                          (CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref(local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        if (((local_80 != (String *)0x0) &&
            (cVar4 = RefCounted::unreference(), pSVar3 = local_80, cVar4 != '\0')) &&
           (cVar4 = predelete_handler((Object *)local_80), cVar4 != '\0')) {
          (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
          Memory::free_static(pSVar3,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (iVar6 == 0) {
          StringName::StringName((StringName *)&local_80,"animation/fps",false);
          local_88 = local_88 & 0xffffffff00000000;
          cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                  ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                 *)param_3,(StringName *)&local_80,(uint *)&local_88);
          if ((StringName::configured != '\0') && (local_80 != (String *)0x0)) {
            StringName::unref();
          }
          if (cVar4 == '\0') {
            _err_print_error("import_scene","modules/gltf/editor/editor_scene_importer_blend.cpp",
                             0x142,
                             "Condition \"!p_options.has(\"animation/fps\")\" is true. Returning: nullptr"
                             ,0,0);
            goto LAB_001049bb;
          }
          StringName::StringName((StringName *)&local_88,"animation/trimming",false);
          local_80 = (String *)((ulong)local_80 & 0xffffffff00000000);
          cVar4 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                  ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                 *)param_3,(StringName *)&local_88,(uint *)&local_80);
          if (cVar4 == '\0') {
            bVar5 = false;
LAB_0010546f:
            if (StringName::configured != '\0') {
LAB_00105473:
              if (local_88 != 0) {
                StringName::unref();
              }
            }
          }
          else {
            StringName::StringName((StringName *)&local_80,"animation/trimming",false);
            pVVar7 = (Variant *)
                     HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                     ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                   *)param_3,(StringName *)&local_80);
            bVar5 = Variant::operator_cast_to_bool(pVVar7);
            if (StringName::configured != '\0') {
              if (local_80 != (String *)0x0) {
                StringName::unref();
                goto LAB_0010546f;
              }
              goto LAB_00105473;
            }
          }
          pcVar1 = *(code **)(*(long *)pOVar2 + 0x1e0);
          StringName::StringName((StringName *)&local_88,"animation/fps",false);
          pVVar7 = (Variant *)
                   HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                   ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                 *)param_3,(StringName *)&local_88);
          fVar11 = Variant::operator_cast_to_float(pVVar7);
          local_80 = pSVar9;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_80 = (String *)0x0;
          }
          uVar8 = (*pcVar1)(fVar11,pOVar2,(String *)&local_80,bVar5,0);
          if (((local_80 != (String *)0x0) &&
              (cVar4 = RefCounted::unreference(), pSVar3 = local_80, cVar4 != '\0')) &&
             (cVar4 = predelete_handler((Object *)local_80), cVar4 != '\0')) {
            (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
            Memory::free_static(pSVar3,false);
          }
          if ((StringName::configured != '\0') && (local_88 != 0)) {
            StringName::unref();
          }
        }
        else {
          if (param_5 != (Error *)0x0) {
            *(undefined4 *)param_5 = 1;
          }
LAB_001049bb:
          uVar8 = 0;
        }
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pSVar9), cVar4 != '\0')) {
          (**(code **)(*(long *)pSVar9 + 0x140))(pSVar9);
          Memory::free_static(pSVar9,false);
        }
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      else {
        if (param_5 != (Error *)0x0) {
          *(undefined4 *)param_5 = 0x27;
        }
        uVar8 = 0;
      }
      Dictionary::~Dictionary(local_b8);
      Dictionary::~Dictionary(local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      goto LAB_0010446d;
    }
    local_88 = 0;
    if (local_e8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_e8);
    }
    local_90 = 0;
    String::parse_latin1
              ((String *)&local_90,"Invalid Blender path: %s, check your Editor Settings.");
    vformat<String>((String *)&local_80,(String *)&local_90,(CowData<char32_t> *)&local_88);
    _err_print_error("import_scene","modules/gltf/editor/editor_scene_importer_blend.cpp",0x73,
                     "Condition \"!FileAccess::exists(blender_path)\" is true. Returning: nullptr",
                     (String *)&local_80,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
LAB_00105373:
  uVar8 = 0;
LAB_0010446d:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
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



/* EditorFileSystemImportFormatSupportQueryBlend::_autodetect_path() */

char __thiscall
EditorFileSystemImportFormatSupportQueryBlend::_autodetect_path
          (EditorFileSystemImportFormatSupportQueryBlend *this)

{
  StrRange *pSVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  StrRange *pSVar5;
  String *pSVar6;
  long lVar7;
  String *pSVar8;
  long lVar9;
  long in_FS_OFFSET;
  int local_70;
  int local_6c;
  char *local_68;
  String *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = "";
  local_60 = (String *)0x0;
  String::parse_latin1((StrRange *)(this + 0x1f8));
  local_68 = "/usr/bin/blender";
  local_58 = 0;
  local_60 = (String *)0x10;
  String::parse_latin1((StrRange *)&local_58);
  local_68 = "/usr/local/bin/blender";
  local_50 = 0;
  local_60 = (String *)0x16;
  String::parse_latin1((StrRange *)&local_50);
  local_48 = 0;
  local_68 = "/opt/blender/bin/blender";
  local_60 = (String *)0x18;
  String::parse_latin1((StrRange *)&local_48);
  local_60 = (String *)0x0;
  iVar4 = CowData<String>::resize<false>((CowData<String> *)&local_60,3);
  if (iVar4 == 0) {
    lVar9 = 0;
    pSVar5 = (StrRange *)&local_58;
    do {
      if (local_60 == (String *)0x0) {
        lVar7 = 0;
LAB_00106859:
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar7,"p_index","size()","",false,
                   false);
      }
      else {
        lVar7 = *(long *)(local_60 + -8);
        if (lVar7 <= lVar9) goto LAB_00106859;
        CowData<String>::_copy_on_write((CowData<String> *)&local_60);
        if (*(long *)(local_60 + lVar9 * 8) != *(long *)pSVar5) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(local_60 + lVar9 * 8),(CowData *)pSVar5);
        }
      }
      lVar9 = lVar9 + 1;
      pSVar5 = (StrRange *)((CowData *)pSVar5 + 8);
    } while (lVar9 != 3);
  }
  pSVar5 = (StrRange *)local_40;
  do {
    pSVar1 = pSVar5 + -8;
    pSVar5 = pSVar5 + -8;
    if (*(long *)pSVar1 != 0) {
      LOCK();
      plVar2 = (long *)(*(long *)pSVar1 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar9 = *(long *)pSVar5;
        *(undefined8 *)pSVar5 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
  } while (pSVar5 != (StrRange *)&local_58);
  CowData<String>::_copy_on_write((CowData<String> *)&local_60);
  pSVar8 = local_60;
  CowData<String>::_copy_on_write((CowData<String> *)&local_60);
  pSVar6 = local_60;
  if (local_60 != (String *)0x0) {
    pSVar6 = local_60 + *(long *)(local_60 + -8) * 8;
  }
  do {
    if (pSVar6 == pSVar8) {
      cVar3 = '\0';
LAB_001067d2:
      CowData<String>::_unref((CowData<String> *)&local_60);
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        return cVar3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    cVar3 = _get_blender_version(pSVar8,&local_70,&local_6c,(String *)0x0);
    if (cVar3 != '\0') {
      if (*(long *)(this + 0x1f8) != *(long *)pSVar8) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1f8),(CowData *)pSVar8);
      }
      goto LAB_001067d2;
    }
    pSVar8 = pSVar8 + 8;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorFileSystemImportFormatSupportQueryBlend::query() */

undefined8 __thiscall
EditorFileSystemImportFormatSupportQueryBlend::query
          (EditorFileSystemImportFormatSupportQueryBlend *this)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  StringName *pSVar5;
  ConfirmationDialog *this_00;
  BoxContainer *this_01;
  Label *pLVar6;
  BoxContainer *this_02;
  LineEdit *this_03;
  Button *this_04;
  String *pSVar7;
  EditorFileDialog *this_05;
  undefined8 uVar8;
  long in_FS_OFFSET;
  float fVar9;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  String local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  String local_80 [8];
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  ulong local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x1c8) == 0) {
    this_00 = (ConfirmationDialog *)operator_new(0xdb8,"");
    ConfirmationDialog::ConfirmationDialog(this_00);
    postinitialize_handler((Object *)this_00);
    *(ConfirmationDialog **)(this + 0x1c8) = this_00;
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Configure Blender Importer");
    TTR((String *)&local_68,(String *)&local_78);
    Window::set_title((String *)this_00);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    Window::set_flag(*(undefined8 *)(this + 0x1c8),1,1);
    AcceptDialog::set_close_on_escape(SUB81(*(undefined8 *)(this + 0x1c8),0));
    local_68 = (char *)0x0;
    String::parse_latin1((String *)&local_68,"");
    local_70 = 0;
    String::parse_latin1
              ((String *)&local_70,
               "Blender 3.0+ is required to import \'.blend\' files.\nPlease provide a valid path to a Blender executable."
              );
    TTR(local_80,(String *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    this_01 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(this_01,true);
    this_01[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)this_01 = &PTR__initialize_classv_00116310;
    postinitialize_handler((Object *)this_01);
    pLVar6 = (Label *)operator_new(0xad8,"");
    Label::Label(pLVar6,local_80);
    postinitialize_handler((Object *)pLVar6);
    Node::add_child(this_01,pLVar6,0,0);
    this_02 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(this_02,false);
    this_02[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)this_02 = &PTR__initialize_classv_00115f98;
    postinitialize_handler((Object *)this_02);
    this_03 = (LineEdit *)operator_new(0xbb0,"");
    local_68 = (char *)0x0;
    LineEdit::LineEdit(this_03,(String *)&local_68);
    postinitialize_handler((Object *)this_03);
    *(LineEdit **)(this + 0x1d0) = this_03;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Control::set_h_size_flags(*(undefined8 *)(this + 0x1d0),3);
    Node::add_child(this_02,*(undefined8 *)(this + 0x1d0),0,0);
    this_04 = (Button *)operator_new(0xc10,"");
    local_68 = (char *)0x0;
    Button::Button(this_04,(String *)&local_68);
    postinitialize_handler((Object *)this_04);
    *(Button **)(this + 0x1d8) = this_04;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    pSVar7 = *(String **)(this + 0x1d8);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Browse");
    TTR((String *)&local_68,(String *)&local_78);
    Button::set_text(pSVar7);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    plVar1 = *(long **)(this + 0x1d8);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<EditorFileSystemImportFormatSupportQueryBlend>
              ((EditorFileSystemImportFormatSupportQueryBlend *)&local_68,(char *)this,
               (_func_void *)"&EditorFileSystemImportFormatSupportQueryBlend::_browse_install");
    (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(String *)&local_68,0);
    Callable::~Callable((Callable *)&local_68);
    Node::add_child(this_02,*(undefined8 *)(this + 0x1d8),0,0);
    Control::set_h_size_flags(this_02,3);
    fVar9 = (float)EditorScale::get_scale();
    local_58[0] = (ulong)(uint)(fVar9 * __LC157);
    Control::set_custom_minimum_size((Vector2 *)this_02);
    Node::add_child(this_01,this_02,0,0);
    pLVar6 = (Label *)operator_new(0xad8,"");
    local_68 = (char *)0x0;
    Label::Label(pLVar6,(String *)&local_68);
    postinitialize_handler((Object *)pLVar6);
    *(Label **)(this + 0x1e8) = pLVar6;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Node::add_child(this_01,*(undefined8 *)(this + 0x1e8),0,0);
    Node::add_child(*(undefined8 *)(this + 0x1c8),this_01,0,0);
    plVar1 = *(long **)(this + 0x1d0);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<EditorFileSystemImportFormatSupportQueryBlend,String>
              ((EditorFileSystemImportFormatSupportQueryBlend *)&local_68,(char *)this,
               (_func_void_String *)"&EditorFileSystemImportFormatSupportQueryBlend::_validate_path"
              );
    (*pcVar2)(plVar1,SceneStringNames::singleton + 0x270,(String *)&local_68,0);
    Callable::~Callable((Callable *)&local_68);
    Node::add_child(*(undefined8 *)(EditorNode::singleton + 0x6c8),*(undefined8 *)(this + 0x1c8),0,0
                   );
    uVar8 = *(undefined8 *)(this + 0x1c8);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Confirm Path");
    TTR((String *)&local_68,(String *)&local_78);
    AcceptDialog::set_ok_button_text(uVar8,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    uVar8 = *(undefined8 *)(this + 0x1c8);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"Disable \'.blend\' Import");
    TTR((String *)&local_68,(String *)&local_78);
    ConfirmationDialog::set_cancel_button_text(uVar8,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    pSVar7 = (String *)ConfirmationDialog::get_cancel_button();
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"");
    local_78 = 0;
    String::parse_latin1
              ((String *)&local_78,
               "Disables Blender \'.blend\' files import for this project. Can be re-enabled in Project Settings."
              );
    TTR((String *)&local_68,(String *)&local_78);
    Control::set_tooltip_text(pSVar7);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    plVar1 = *(long **)(this + 0x1c8);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<EditorFileSystemImportFormatSupportQueryBlend>
              ((EditorFileSystemImportFormatSupportQueryBlend *)&local_68,(char *)this,
               (_func_void *)"&EditorFileSystemImportFormatSupportQueryBlend::_path_confirmed");
    (*pcVar2)(plVar1,SceneStringNames::singleton + 0x268,(String *)&local_68,0);
    Callable::~Callable((Callable *)&local_68);
    this_05 = (EditorFileDialog *)operator_new(0x1108,"");
    EditorFileDialog::EditorFileDialog(this_05);
    postinitialize_handler((Object *)this_05);
    *(EditorFileDialog **)(this + 0x1e0) = this_05;
    EditorFileDialog::set_access(this_05,2);
    EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0x1e0),0);
    plVar1 = *(long **)(this + 0x1e0);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<EditorFileSystemImportFormatSupportQueryBlend,String>
              ((EditorFileSystemImportFormatSupportQueryBlend *)&local_68,(char *)this,
               (_func_void_String *)
               "&EditorFileSystemImportFormatSupportQueryBlend::_select_install");
    StringName::StringName((StringName *)&local_70,"file_selected",false);
    (*pcVar2)(plVar1,(String *)&local_70,(String *)&local_68,0);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_68);
    Node::add_child(*(undefined8 *)(EditorNode::singleton + 0x6c8),*(undefined8 *)(this + 0x1e0),0,0
                   );
    create_custom_callable_function_pointer<EditorFileSystemImportFormatSupportQueryBlend>
              ((EditorFileSystemImportFormatSupportQueryBlend *)&local_68,(char *)this,
               (_func_void *)"&EditorFileSystemImportFormatSupportQueryBlend::_update_icons");
    Variant::Variant((Variant *)local_58,0);
    Callable::call_deferredp((Variant **)&local_68,0);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  }
  local_70 = 0;
  local_68 = "filesystem/import/blender/blender_path";
  local_60 = 0x26;
  String::parse_latin1((StrRange *)&local_70);
  _EDITOR_GET((String *)local_58);
  Variant::operator_cast_to_String((Variant *)&local_b0);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((local_b0 == 0) || (*(uint *)(local_b0 + -8) < 2)) {
    cVar3 = _autodetect_path(this);
    lVar4 = local_b0;
    if ((cVar3 != '\0') && (lVar4 = *(long *)(this + 0x1f8), local_b0 != *(long *)(this + 0x1f8))) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(this + 0x1f8));
      lVar4 = local_b0;
    }
    local_68 = (char *)0x0;
    uVar8 = *(undefined8 *)(this + 0x1d0);
    if (lVar4 == 0) goto LAB_001069c9;
  }
  else {
    uVar8 = *(undefined8 *)(this + 0x1d0);
  }
  local_68 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b0);
LAB_001069c9:
  LineEdit::set_text(uVar8,(CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_68 = (char *)0x0;
  if (local_b0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_b0);
  }
  _validate_path(this,(CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  local_58[0] = 0;
  Window::popup_centered(*(Vector2i **)(this + 0x1c8));
  this[0x1f0] = (EditorFileSystemImportFormatSupportQueryBlend)0x0;
  do {
    (**(code **)(*DisplayServer::singleton + 0x748))();
    Main::iteration();
    cVar3 = Window::is_visible();
    if (cVar3 == '\0') {
      if (this[0x1f0] == (EditorFileSystemImportFormatSupportQueryBlend)0x0) {
        pSVar5 = (StringName *)ProjectSettings::get_singleton();
        Variant::Variant((Variant *)local_58,false);
        StringName::StringName((StringName *)&local_68,"filesystem/import/blender/enabled",false);
        Object::set(pSVar5,(Variant *)&local_68,(bool *)local_58);
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        ProjectSettings::get_singleton();
        ProjectSettings::save();
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"");
        local_78 = 0;
        String::parse_latin1((String *)&local_78,"Restart");
        TTR((String *)&local_68,(String *)&local_78);
        local_88 = 0;
        String::parse_latin1((String *)&local_88,"");
        local_90 = 0;
        String::parse_latin1((String *)&local_90,"Save & Restart");
        TTR(local_80,(String *)&local_90);
        local_a0 = 0;
        String::parse_latin1((String *)&local_a0,"");
        local_a8 = 0;
        String::parse_latin1
                  ((String *)&local_a8,
                   "Disabling \'.blend\' file import requires restarting the editor.");
        TTR(local_98,(String *)&local_a8);
        cVar3 = EditorNode::immediate_confirmation_dialog(local_98,local_80,(String *)&local_68,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if (cVar3 != '\0') {
          EditorNode::save_all_scenes();
        }
        uVar8 = 1;
        EditorNode::restart_editor(SUB81(EditorNode::singleton,0));
        goto LAB_00106af2;
      }
      break;
    }
  } while (this[0x1f0] == (EditorFileSystemImportFormatSupportQueryBlend)0x0);
  pSVar5 = (StringName *)EditorSettings::get_singleton();
  LineEdit::get_text();
  Variant::Variant((Variant *)local_58,(String *)&local_70);
  StringName::StringName((StringName *)&local_68,"filesystem/import/blender/blender_path",false);
  Object::set(pSVar5,(Variant *)&local_68,(bool *)local_58);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar8 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  EditorSettings::get_singleton();
  EditorSettings::save();
LAB_00106af2:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* EditorFileSystemImportFormatSupportQueryBlend::get_file_extensions() const */

EditorFileSystemImportFormatSupportQueryBlend * __thiscall
EditorFileSystemImportFormatSupportQueryBlend::get_file_extensions
          (EditorFileSystemImportFormatSupportQueryBlend *this)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  local_48 = "blend";
  local_50 = 0;
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_50);
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
        if (*(long *)this_00 != local_50) {
          CowData<char32_t>::_ref(this_00,(CowData *)&local_50);
        }
        goto LAB_0010759e;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010759e:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

{
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
  return (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* EditorFileSystemImportFormatSupportQuery::is_class_ptr(void*) const */

uint __thiscall
EditorFileSystemImportFormatSupportQuery::is_class_ptr
          (EditorFileSystemImportFormatSupportQuery *this,void *param_1)

{
  return (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorFileSystemImportFormatSupportQuery::_getv(StringName const&, Variant&) const */

undefined8 EditorFileSystemImportFormatSupportQuery::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFileSystemImportFormatSupportQuery::_setv(StringName const&, Variant const&) */

undefined8 EditorFileSystemImportFormatSupportQuery::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFileSystemImportFormatSupportQuery::_validate_propertyv(PropertyInfo&) const */

void EditorFileSystemImportFormatSupportQuery::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorFileSystemImportFormatSupportQuery::_property_can_revertv(StringName const&) const */

undefined8 EditorFileSystemImportFormatSupportQuery::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorFileSystemImportFormatSupportQuery::_property_get_revertv(StringName const&, Variant&)
   const */

undefined8
EditorFileSystemImportFormatSupportQuery::_property_get_revertv
          (StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFileSystemImportFormatSupportQuery::_notificationv(int, bool) */

void EditorFileSystemImportFormatSupportQuery::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorSceneFormatImporter::handle_compatibility_options(HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >&) const */

void EditorSceneFormatImporter::handle_compatibility_options(HashMap *param_1)

{
  return;
}



/* EditorSceneFormatImporterBlend::is_class_ptr(void*) const */

uint __thiscall
EditorSceneFormatImporterBlend::is_class_ptr(EditorSceneFormatImporterBlend *this,void *param_1)

{
  return (uint)CONCAT71(0x116c,(undefined4 *)param_1 ==
                               &EditorSceneFormatImporter::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorSceneFormatImporterBlend::_getv(StringName const&, Variant&) const */

undefined8 EditorSceneFormatImporterBlend::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorSceneFormatImporterBlend::_setv(StringName const&, Variant const&) */

undefined8 EditorSceneFormatImporterBlend::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorSceneFormatImporterBlend::_validate_propertyv(PropertyInfo&) const */

void EditorSceneFormatImporterBlend::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorSceneFormatImporterBlend::_property_can_revertv(StringName const&) const */

undefined8 EditorSceneFormatImporterBlend::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorSceneFormatImporterBlend::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorSceneFormatImporterBlend::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorSceneFormatImporterBlend::_notificationv(int, bool) */

void EditorSceneFormatImporterBlend::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorFileSystemImportFormatSupportQueryBlend::is_class_ptr(void*) const */

uint __thiscall
EditorFileSystemImportFormatSupportQueryBlend::is_class_ptr
          (EditorFileSystemImportFormatSupportQueryBlend *this,void *param_1)

{
  return (uint)CONCAT71(0x116c,(undefined4 *)param_1 ==
                               &EditorFileSystemImportFormatSupportQuery::get_class_ptr_static()::
                                ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorFileSystemImportFormatSupportQueryBlend::_getv(StringName const&, Variant&) const */

undefined8
EditorFileSystemImportFormatSupportQueryBlend::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFileSystemImportFormatSupportQueryBlend::_setv(StringName const&, Variant const&) */

undefined8
EditorFileSystemImportFormatSupportQueryBlend::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFileSystemImportFormatSupportQueryBlend::_validate_propertyv(PropertyInfo&) const */

void EditorFileSystemImportFormatSupportQueryBlend::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorFileSystemImportFormatSupportQueryBlend::_property_can_revertv(StringName const&) const */

undefined8 EditorFileSystemImportFormatSupportQueryBlend::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorFileSystemImportFormatSupportQueryBlend::_property_get_revertv(StringName const&, Variant&)
   const */

undefined8
EditorFileSystemImportFormatSupportQueryBlend::_property_get_revertv
          (StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFileSystemImportFormatSupportQueryBlend::_notificationv(int, bool) */

void EditorFileSystemImportFormatSupportQueryBlend::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GLTFState::is_class_ptr(void*) const */

uint __thiscall GLTFState::is_class_ptr(GLTFState *this,void *param_1)

{
  return (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x116c,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GLTFState::_getv(StringName const&, Variant&) const */

undefined8 GLTFState::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFState::_setv(StringName const&, Variant const&) */

undefined8 GLTFState::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFState::_validate_propertyv(PropertyInfo&) const */

void GLTFState::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GLTFState::_property_can_revertv(StringName const&) const */

undefined8 GLTFState::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GLTFState::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GLTFState::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GLTFState::_notificationv(int, bool) */

void GLTFState::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend, void,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void,String>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend, void,
   String>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void,String>::
get_argument_count(CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void,String>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,
   void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void>::get_argument_count
          (CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void> *this,
          bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend, void,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void,String>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00115ae8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00115ae8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* EditorFileSystemImportFormatSupportQuery::~EditorFileSystemImportFormatSupportQuery() */

void __thiscall
EditorFileSystemImportFormatSupportQuery::~EditorFileSystemImportFormatSupportQuery
          (EditorFileSystemImportFormatSupportQuery *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00115c48;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f7f;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107f7f;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00107f7f:
  *(undefined ***)this = &PTR__initialize_classv_00115ae8;
  Object::~Object((Object *)this);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011b008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011b008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend, void>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void>::get_object
          (CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010865d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010865d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010865d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend, void,
   String>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void,String>::get_object
          (CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void,String>
           *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010875d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010875d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010875d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011b010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011b010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011b018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011b018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108a28) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011b020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00108a98) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011b020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x116b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116c,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x116b,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116b,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116b,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116b,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x116c,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined **)this = &Container::vtable;
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



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108c40;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108c40:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108ca0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108ca0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108d00;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108d00:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::parse_latin1;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108d70;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00108d70:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* EditorFileSystemImportFormatSupportQuery::~EditorFileSystemImportFormatSupportQuery() */

void __thiscall
EditorFileSystemImportFormatSupportQuery::~EditorFileSystemImportFormatSupportQuery
          (EditorFileSystemImportFormatSupportQuery *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00115c48;
  if (bVar1) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108dff;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00108dff;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00108dff:
  *(undefined ***)this = &PTR__initialize_classv_00115ae8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
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



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
LAB_00108f43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108f43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00108fae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00108fae:
  return &_get_class_namev()::_class_name_static;
}



/* GLTFState::_get_class_namev() const */

undefined8 * GLTFState::_get_class_namev(void)

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
LAB_00109023:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109023;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GLTFState");
      goto LAB_0010908e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFState");
LAB_0010908e:
  return &_get_class_namev()::_class_name_static;
}



/* VBoxContainer::_get_class_namev() const */

undefined8 * VBoxContainer::_get_class_namev(void)

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
LAB_00109113:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109113;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010917e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010917e:
  return &_get_class_namev()::_class_name_static;
}



/* HBoxContainer::_get_class_namev() const */

undefined8 * HBoxContainer::_get_class_namev(void)

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
LAB_00109203:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109203;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010926e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010926e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorFileSystemImportFormatSupportQueryBlend::_get_class_namev() const */

undefined8 * EditorFileSystemImportFormatSupportQueryBlend::_get_class_namev(void)

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
LAB_00109313:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109313;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorFileSystemImportFormatSupportQueryBlend");
      goto LAB_0010937e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "EditorFileSystemImportFormatSupportQueryBlend");
LAB_0010937e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorSceneFormatImporterBlend::_get_class_namev() const */

undefined8 * EditorSceneFormatImporterBlend::_get_class_namev(void)

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
LAB_00109413:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109413;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorSceneFormatImporterBlend");
      goto LAB_0010947e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorSceneFormatImporterBlend")
  ;
LAB_0010947e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorFileSystemImportFormatSupportQuery::_get_class_namev() const */

undefined8 * EditorFileSystemImportFormatSupportQuery::_get_class_namev(void)

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
LAB_00109523:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109523;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorFileSystemImportFormatSupportQuery");
      goto LAB_0010958e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "EditorFileSystemImportFormatSupportQuery");
LAB_0010958e:
  return &_get_class_namev()::_class_name_static;
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



/* GLTFState::get_class() const */

void GLTFState::get_class(void)

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



/* HBoxContainer::get_class() const */

void HBoxContainer::get_class(void)

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



/* EditorSceneFormatImporterBlend::get_class() const */

void EditorSceneFormatImporterBlend::get_class(void)

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



/* VBoxContainer::get_class() const */

void VBoxContainer::get_class(void)

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



/* EditorFileSystemImportFormatSupportQuery::get_class() const */

void EditorFileSystemImportFormatSupportQuery::get_class(void)

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



/* EditorFileSystemImportFormatSupportQueryBlend::get_class() const */

void EditorFileSystemImportFormatSupportQueryBlend::get_class(void)

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



/* EditorFileSystemImportFormatSupportQueryBlend::~EditorFileSystemImportFormatSupportQueryBlend()
    */

void __thiscall
EditorFileSystemImportFormatSupportQueryBlend::~EditorFileSystemImportFormatSupportQueryBlend
          (EditorFileSystemImportFormatSupportQueryBlend *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00116810;
  if (*(long *)(this + 0x1f8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1f8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1f8);
      *(undefined8 *)(this + 0x1f8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00115c48;
  if (bVar3) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109c3d;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109c3d;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00109c3d:
  *(undefined ***)this = &PTR__initialize_classv_00115ae8;
  Object::~Object((Object *)this);
  return;
}



/* EditorFileSystemImportFormatSupportQueryBlend::~EditorFileSystemImportFormatSupportQueryBlend()
    */

void __thiscall
EditorFileSystemImportFormatSupportQueryBlend::~EditorFileSystemImportFormatSupportQueryBlend
          (EditorFileSystemImportFormatSupportQueryBlend *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00116810;
  if (*(long *)(this + 0x1f8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1f8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1f8);
      *(undefined8 *)(this + 0x1f8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_00115c48;
  if (bVar3) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109d11;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109d11;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00109d11:
  *(undefined ***)this = &PTR__initialize_classv_00115ae8;
  Object::~Object((Object *)this);
  operator_delete(this,0x200);
  return;
}



/* EditorSceneFormatImporterBlend::~EditorSceneFormatImporterBlend() */

void __thiscall
EditorSceneFormatImporterBlend::~EditorSceneFormatImporterBlend
          (EditorSceneFormatImporterBlend *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00116688;
  if (*(long *)(this + 0x1f0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1f0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1f0);
      *(undefined8 *)(this + 0x1f0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = String::operator==;
  if (bVar3) {
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109e10;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109e10;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109e10;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_00109e10:
  *(undefined ***)this = &PTR__initialize_classv_00115ae8;
  Object::~Object((Object *)this);
  return;
}



/* EditorSceneFormatImporterBlend::~EditorSceneFormatImporterBlend() */

void __thiscall
EditorSceneFormatImporterBlend::~EditorSceneFormatImporterBlend
          (EditorSceneFormatImporterBlend *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00116688;
  if (*(long *)(this + 0x1f0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1f0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1f0);
      *(undefined8 *)(this + 0x1f0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = String::operator==;
  if (bVar3) {
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f00;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f00;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109f00;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_00109f00:
  *(undefined ***)this = &PTR__initialize_classv_00115ae8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
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
    if (cVar5 != '\0') goto LAB_0010a04b;
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
      if (cVar5 != '\0') goto LAB_0010a04b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010a04b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFileSystemImportFormatSupportQuery::is_class(String const&) const */

undefined8 __thiscall
EditorFileSystemImportFormatSupportQuery::is_class
          (EditorFileSystemImportFormatSupportQuery *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010a1ef;
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
LAB_0010a1ef:
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
    if (cVar5 != '\0') goto LAB_0010a2a3;
  }
  cVar5 = String::operator==(param_1,"EditorFileSystemImportFormatSupportQuery");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010a2a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSceneFormatImporterBlend::is_class(String const&) const */

undefined8 __thiscall
EditorSceneFormatImporterBlend::is_class(EditorSceneFormatImporterBlend *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010a41b;
  }
  cVar5 = String::operator==(param_1,"EditorSceneFormatImporterBlend");
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
      if (cVar5 != '\0') goto LAB_0010a41b;
    }
    cVar5 = String::operator==(param_1,"EditorSceneFormatImporter");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0010a558;
    }
  }
LAB_0010a41b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a558:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFileSystemImportFormatSupportQueryBlend::is_class(String const&) const */

undefined8 __thiscall
EditorFileSystemImportFormatSupportQueryBlend::is_class
          (EditorFileSystemImportFormatSupportQueryBlend *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010a65b;
  }
  cVar5 = String::operator==(param_1,"EditorFileSystemImportFormatSupportQueryBlend");
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
      if (cVar5 != '\0') goto LAB_0010a65b;
    }
    cVar5 = String::operator==(param_1,"EditorFileSystemImportFormatSupportQuery");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar6;
      }
      goto LAB_0010a798;
    }
  }
LAB_0010a65b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010a798:
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



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010aaff;
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
LAB_0010aaff:
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
    if (cVar5 != '\0') goto LAB_0010abb3;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010abb3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFState::is_class(String const&) const */

undefined8 __thiscall GLTFState::is_class(GLTFState *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010ac7f;
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
LAB_0010ac7f:
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
    if (cVar5 != '\0') goto LAB_0010ad33;
  }
  cVar5 = String::operator==(param_1,"GLTFState");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010ad33:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined **)this = &Container::vtable;
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



/* WARNING: Removing unreachable block (ram,0x0010aed0) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011b028 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_0011b028 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  if (param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  if (param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  return;
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
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



/* void Ref<GLTFDocument>::instantiate<>() */

void __thiscall Ref<GLTFDocument>::instantiate<>(Ref<GLTFDocument> *this)

{
  long lVar1;
  char cVar2;
  Resource *this_00;
  long lVar3;
  Object *pOVar4;
  Resource *pRVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  byte bVar7;
  
  bVar7 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Resource *)operator_new(0x278,"");
  pRVar5 = this_00;
  for (lVar3 = 0x4f; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar5 = 0;
    pRVar5 = pRVar5 + (ulong)bVar7 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined8 *)(this_00 + 0x248) = 0;
  *(code **)this_00 = RefCounted::init_ref;
  *(undefined8 *)(this_00 + 0x240) = _LC23;
  String::parse_latin1((StrRange *)(this_00 + 0x248));
  *(undefined4 *)(this_00 + 0x250) = 0x3f400000;
  *(undefined8 *)(this_00 + 600) = 0;
  *(undefined4 *)(this_00 + 0x260) = 0;
  *(undefined8 *)(this_00 + 0x270) = 0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pOVar6 = *(Object **)this;
    if (pOVar6 != (Object *)0x0) {
      *(undefined8 *)this = 0;
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        this_00 = (Resource *)0x0;
        cVar2 = predelete_handler(pOVar6);
        if (cVar2 != '\0') goto LAB_0010b35a;
      }
    }
  }
  else {
    pOVar6 = *(Object **)this;
    pOVar4 = pOVar6;
    if (this_00 != (Resource *)pOVar6) {
      *(Resource **)this = this_00;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
      pOVar4 = (Object *)this_00;
      if (((pOVar6 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
LAB_0010b35a:
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
        pOVar4 = (Object *)this_00;
        if (this_00 == (Resource *)0x0) goto LAB_0010b29f;
      }
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar4,false);
        return;
      }
      goto LAB_0010b398;
    }
  }
LAB_0010b29f:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b398:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void Ref<GLTFState>::instantiate<>() */

void __thiscall Ref<GLTFState>::instantiate<>(Ref<GLTFState> *this)

{
  undefined8 uVar1;
  char cVar2;
  Resource *this_00;
  long lVar3;
  Object *pOVar4;
  Resource *pRVar5;
  Object *pOVar6;
  byte bVar7;
  
  bVar7 = 0;
  this_00 = (Resource *)operator_new(0x558,"");
  pRVar5 = this_00;
  for (lVar3 = 0xab; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar5 = 0;
    pRVar5 = pRVar5 + (ulong)bVar7 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00115dc0;
  *(undefined1 (*) [16])(this_00 + 0x240) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x250) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this_00 + 0x260));
  uVar1 = _LC26;
  *(undefined8 *)(this_00 + 0x268) = 0;
  *(undefined1 (*) [16])(this_00 + 0x308) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x288) = uVar1;
  *(undefined2 *)(this_00 + 0x294) = 1;
  uVar1 = _LC28;
  *(undefined1 (*) [16])(this_00 + 0x318) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x328) = uVar1;
  *(undefined1 (*) [16])(this_00 + 0x338) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x370) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 1000) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x3f8) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x270) = 0;
  *(undefined8 *)(this_00 + 0x280) = 0;
  *(undefined4 *)(this_00 + 0x290) = 0;
  this_00[0x296] = (Resource)0x0;
  *(undefined4 *)(this_00 + 0x298) = 1;
  *(undefined8 *)(this_00 + 0x2a8) = 0;
  *(undefined8 *)(this_00 + 0x2b8) = 0;
  *(undefined8 *)(this_00 + 0x2c8) = 0;
  *(undefined8 *)(this_00 + 0x2d8) = 0;
  *(undefined8 *)(this_00 + 0x2e8) = 0;
  *(undefined8 *)(this_00 + 0x2f8) = 0;
  *(undefined8 *)(this_00 + 0x350) = 0;
  *(undefined8 *)(this_00 + 0x360) = 0;
  *(undefined8 *)(this_00 + 0x388) = 0;
  *(undefined8 *)(this_00 + 0x398) = 0;
  *(undefined8 *)(this_00 + 0x3a8) = 0;
  *(undefined8 *)(this_00 + 0x3b8) = 0;
  *(undefined8 *)(this_00 + 0x3c8) = 0;
  *(undefined8 *)(this_00 + 0x3d8) = 0;
  *(undefined8 *)(this_00 + 0x408) = 0;
  *(undefined8 *)(this_00 + 0x410) = uVar1;
  *(undefined8 *)(this_00 + 0x438) = uVar1;
  *(undefined8 *)(this_00 + 0x488) = uVar1;
  *(undefined8 *)(this_00 + 0x4b8) = uVar1;
  *(undefined8 *)(this_00 + 0x4e8) = uVar1;
  *(undefined8 *)(this_00 + 0x518) = uVar1;
  *(undefined8 *)(this_00 + 0x548) = uVar1;
  *(undefined8 *)(this_00 + 0x448) = 0;
  *(undefined8 *)(this_00 + 0x458) = 0;
  *(undefined1 (*) [16])(this_00 + 0x418) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x428) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x468) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x478) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x498) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x4a8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x4c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x4d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x4f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x508) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x528) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x538) = (undefined1  [16])0x0;
  Dictionary::Dictionary((Dictionary *)(this_00 + 0x550));
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pOVar6 = *(Object **)this;
    if (pOVar6 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') {
      return;
    }
    this_00 = (Resource *)0x0;
    cVar2 = predelete_handler(pOVar6);
    if (cVar2 == '\0') {
      return;
    }
  }
  else {
    pOVar6 = *(Object **)this;
    pOVar4 = pOVar6;
    if (this_00 == (Resource *)pOVar6) goto LAB_0010b655;
    *(Resource **)this = this_00;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar6 == (Object *)0x0) || (cVar2 = RefCounted::unreference(), cVar2 == '\0')) ||
       (cVar2 = predelete_handler(pOVar6), cVar2 == '\0')) goto LAB_0010b655;
  }
  (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
  Memory::free_static(pOVar6,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_0010b655:
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* Callable
   create_custom_callable_function_pointer<EditorFileSystemImportFormatSupportQueryBlend>(EditorFileSystemImportFormatSupportQueryBlend*,
   char const*, void (EditorFileSystemImportFormatSupportQueryBlend::*)()) */

EditorFileSystemImportFormatSupportQueryBlend *
create_custom_callable_function_pointer<EditorFileSystemImportFormatSupportQueryBlend>
          (EditorFileSystemImportFormatSupportQueryBlend *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC22;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00116988;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<EditorFileSystemImportFormatSupportQueryBlend,
   String>(EditorFileSystemImportFormatSupportQueryBlend*, char const*, void
   (EditorFileSystemImportFormatSupportQueryBlend::*)(String)) */

EditorFileSystemImportFormatSupportQueryBlend *
create_custom_callable_function_pointer<EditorFileSystemImportFormatSupportQueryBlend,String>
          (EditorFileSystemImportFormatSupportQueryBlend *param_1,char *param_2,
          _func_void_String *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC22;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00116a18;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
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



/* GetTypeInfo<bool, void>::get_class_info() */

GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC22;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
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
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
      }
      goto LAB_0010b995;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
LAB_0010b995:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC22;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
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
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
      }
      goto LAB_0010baf5;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
LAB_0010baf5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010bd08) */
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



/* EditorSceneFormatImporterBlend::_initialize_classv() */

void EditorSceneFormatImporterBlend::_initialize_classv(void)

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
    if (EditorSceneFormatImporter::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0011b038 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorSceneFormatImporter";
      local_70 = 0;
      local_50 = 0x19;
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
      if ((code *)PTR__bind_methods_0011b030 != RefCounted::_bind_methods) {
        EditorSceneFormatImporter::_bind_methods();
      }
      EditorSceneFormatImporter::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorSceneFormatImporter";
    local_68 = 0;
    local_50 = 0x19;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorSceneFormatImporterBlend";
    local_70 = 0;
    local_50 = 0x1e;
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



/* WARNING: Removing unreachable block (ram,0x0010c338) */
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



/* WARNING: Removing unreachable block (ram,0x0010c670) */
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
        if (pvVar5 == (void *)0x0) goto LAB_0010d114;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010d114:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend, void>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void>::call
          (CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010d4df;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010d4df;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010d5a1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010d4df:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC70,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010d5a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend, void,
   String>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void,String>::call
          (CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void,String>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC71;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0010d67e;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_50 = 0;
  local_48 = "\', can\'t call method.";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC70,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010d67e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010d92b;
  }
  cVar5 = String::operator==(param_1,"CanvasItem");
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
      if (cVar5 != '\0') goto LAB_0010d92b;
    }
    cVar5 = String::operator==(param_1,"Node");
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
        if (cVar5 != '\0') goto LAB_0010d92b;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_0010db08;
    }
  }
LAB_0010d92b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010db08:
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
    if ((code *)PTR__bind_methods_0011b040 != Object::_bind_methods) {
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



/* GLTFState::_initialize_classv() */

void GLTFState::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0011b038 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
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
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "GLTFState";
    local_70 = 0;
    local_50 = 9;
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
    if ((code *)PTR__bind_methods_0011b048 != Resource::_bind_methods) {
      GLTFState::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010e0db;
  }
  cVar5 = String::operator==(param_1,"BoxContainer");
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010e0db;
    }
    cVar5 = String::operator==(param_1,"Container");
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
        if (cVar5 != '\0') goto LAB_0010e0db;
      }
      cVar5 = String::operator==(param_1,"Control");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
          return uVar6;
        }
        goto LAB_0010e29e;
      }
    }
  }
LAB_0010e0db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e29e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010e31f;
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
LAB_0010e31f:
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
    if (cVar5 != '\0') goto LAB_0010e3d3;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010e3d3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010e49f;
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
LAB_0010e49f:
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
    if (cVar5 != '\0') goto LAB_0010e553;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010e553:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

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
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Node");
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
              if ((code *)PTR__bind_methods_0011b038 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
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
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0011b050 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_58 = "CanvasItem";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Control";
          local_70 = 0;
          local_50 = 7;
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_0011b058 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

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
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Node");
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
              if ((code *)PTR__bind_methods_0011b038 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
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
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0011b050 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_58 = "CanvasItem";
          local_60 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_60);
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Control");
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_0011b058 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "VBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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
      goto LAB_0010f37c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f37c:
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
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
      goto LAB_0010f5e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f5e1:
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



/* GLTFState::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GLTFState::_get_property_listv(GLTFState *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GLTFState";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GLTFState";
  local_98 = 0;
  local_70 = 9;
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
      goto LAB_0010f891;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f891:
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
  StringName::StringName((StringName *)&local_78,"GLTFState",false);
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



/* EditorSceneFormatImporter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorSceneFormatImporter::_get_property_listv
          (EditorSceneFormatImporter *this,List *param_1,bool param_2)

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
  local_78 = "EditorSceneFormatImporter";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorSceneFormatImporter";
  local_98 = 0;
  local_70 = 0x19;
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
      goto LAB_0010fb41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fb41:
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
  StringName::StringName((StringName *)&local_78,"EditorSceneFormatImporter",false);
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



/* EditorFileSystemImportFormatSupportQuery::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
EditorFileSystemImportFormatSupportQuery::_get_property_listv
          (EditorFileSystemImportFormatSupportQuery *this,List *param_1,bool param_2)

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
  local_78 = "EditorFileSystemImportFormatSupportQuery";
  local_70 = 0x28;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorFileSystemImportFormatSupportQuery";
  local_98 = 0;
  local_70 = 0x28;
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
      goto LAB_0010fdf1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fdf1:
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
  StringName::StringName((StringName *)&local_78,"EditorFileSystemImportFormatSupportQuery",false);
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



/* EditorSceneFormatImporterBlend::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorSceneFormatImporterBlend::_get_property_listv
          (EditorSceneFormatImporterBlend *this,List *param_1,bool param_2)

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
    EditorSceneFormatImporter::_get_property_listv((EditorSceneFormatImporter *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorSceneFormatImporterBlend";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorSceneFormatImporterBlend";
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
      goto LAB_001100a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001100a1:
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
  StringName::StringName((StringName *)&local_78,"EditorSceneFormatImporterBlend",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorSceneFormatImporter::_get_property_listv((EditorSceneFormatImporter *)this,param_1,true)
      ;
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFileSystemImportFormatSupportQueryBlend::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
EditorFileSystemImportFormatSupportQueryBlend::_get_property_listv
          (EditorFileSystemImportFormatSupportQueryBlend *this,List *param_1,bool param_2)

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
    EditorFileSystemImportFormatSupportQuery::_get_property_listv
              ((EditorFileSystemImportFormatSupportQuery *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorFileSystemImportFormatSupportQueryBlend";
  local_70 = 0x2d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorFileSystemImportFormatSupportQueryBlend";
  local_98 = 0;
  local_70 = 0x2d;
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
      goto LAB_00110351;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110351:
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
  StringName::StringName
            ((StringName *)&local_78,"EditorFileSystemImportFormatSupportQueryBlend",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorFileSystemImportFormatSupportQuery::_get_property_listv
                ((EditorFileSystemImportFormatSupportQuery *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
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



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
  CowData<char32_t> *local_a8;
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
    local_80 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_a8 = (CowData<char32_t> *)&local_70;
  local_b8 = (CowData<char32_t> *)&local_58;
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref(local_a8,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref(local_b8,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)local_b8,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_0011071f;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011071f:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011b060 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
  }
  if (param_2) {
    local_80 = 0;
    local_78 = "Node";
    local_88 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref(local_b8);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

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
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Control";
  local_98 = 0;
  local_70 = 7;
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
      goto LAB_00110c31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110c31:
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
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011b068 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Container::_get_property_listv(Container *this,List *param_1,bool param_2)

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
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Container";
  local_98 = 0;
  local_70 = 9;
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
      goto LAB_00110f01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00110f01:
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
  StringName::StringName((StringName *)&local_78,"Container",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

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
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoxContainer";
  local_98 = 0;
  local_70 = 0xc;
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
      goto LAB_001111b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001111b1:
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
  StringName::StringName((StringName *)&local_78,"BoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

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
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
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
      goto LAB_00111461;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111461:
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
  StringName::StringName((StringName *)&local_78,"VBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

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
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
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
      goto LAB_00111711;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111711:
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
  StringName::StringName((StringName *)&local_78,"HBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::_lookup_pos(StringName const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::_lookup_pos(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
              *this,StringName *param_1,uint *param_2)

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
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
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
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)(this + 0x50));
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x28));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
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



/* EditorFileSystemImportFormatSupportQuery::_bind_methods() */

void EditorFileSystemImportFormatSupportQuery::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  Vector local_f8 [8];
  undefined8 local_f0;
  char *local_e8;
  long local_e0;
  long local_d8;
  undefined4 local_d0;
  long local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  ulong local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  lStack_a0 = 0;
  local_f0 = 0;
  local_e8 = "_is_active";
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0 = 10;
  String::parse_latin1((StrRange *)&local_b8);
  local_e8 = "";
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  local_110 = 0;
  local_108 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_100 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,1,(CowData<char32_t> *)&local_100,0,(StrRange *)&local_108,6,
             &local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    local_a8 = local_e0;
    local_e0 = 0;
  }
  if (lStack_a0 != local_d8) {
    StringName::unref();
    lStack_a0 = local_d8;
    local_d8 = 0;
  }
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 != local_c8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    local_90 = local_c8;
    local_c8 = 0;
  }
  local_88 = CONCAT44(local_88._4_4_,local_c0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "EditorFileSystemImportFormatSupportQuery";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0 = 0x28;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
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
  CowData<Variant>::_unref((CowData<Variant> *)&local_68);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = 0;
  lStack_a0 = 0;
  local_e8 = "_get_file_extensions";
  local_f0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0 = 0x14;
  String::parse_latin1((StrRange *)&local_b8);
  local_e8 = "";
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  local_110 = 0;
  local_108 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_100 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,0x22,(CowData<char32_t> *)&local_100,0,(StrRange *)&local_108
             ,6,&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    local_a8 = local_e0;
    local_e0 = 0;
  }
  if (lStack_a0 != local_d8) {
    StringName::unref();
    lStack_a0 = local_d8;
    local_d8 = 0;
  }
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 != local_c8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    local_90 = local_c8;
    local_c8 = 0;
  }
  local_88 = CONCAT44(local_88._4_4_,local_c0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "EditorFileSystemImportFormatSupportQuery";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0 = 0x28;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
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
  CowData<Variant>::_unref((CowData<Variant> *)&local_68);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  local_a8 = 0;
  lStack_a0 = 0;
  local_e8 = "_query";
  local_f0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_e0 = 6;
  String::parse_latin1((StrRange *)&local_b8);
  local_e8 = "";
  local_80 = CONCAT44(local_80._4_4_,0x8c);
  local_110 = 0;
  local_108 = 0;
  local_e0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_100 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_e8,1,(CowData<char32_t> *)&local_100,0,(StrRange *)&local_108,6,
             &local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((StringName::configured != '\0') && (local_110 != 0)) {
    StringName::unref();
  }
  local_b0 = CONCAT44(local_b0._4_4_,local_e8._0_4_);
  if (local_a8 != local_e0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    local_a8 = local_e0;
    local_e0 = 0;
  }
  if (lStack_a0 != local_d8) {
    StringName::unref();
    lStack_a0 = local_d8;
    local_d8 = 0;
  }
  local_98 = CONCAT44(local_98._4_4_,local_d0);
  if (local_90 != local_c8) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    local_90 = local_c8;
    local_c8 = 0;
  }
  local_88 = CONCAT44(local_88._4_4_,local_c0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_e8 = "EditorFileSystemImportFormatSupportQuery";
  local_60 = local_60 & 0xffffffff00000000;
  local_100 = 0;
  local_e0 = 0x28;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_e8,(String *)&local_100,false);
  ClassDB::add_virtual_method((StringName *)&local_e8,(MethodInfo *)&local_b8,true,local_f8,false);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
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
  CowData<Variant>::_unref((CowData<Variant> *)&local_68);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<String>::_unref((CowData<String> *)&local_f0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFileSystemImportFormatSupportQueryBlend::_initialize_classv() */

void EditorFileSystemImportFormatSupportQueryBlend::_initialize_classv(void)

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
    if (EditorFileSystemImportFormatSupportQuery::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0011b038 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorFileSystemImportFormatSupportQuery";
      local_70 = 0;
      local_50 = 0x28;
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
      EditorFileSystemImportFormatSupportQuery::_bind_methods();
      EditorFileSystemImportFormatSupportQuery::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorFileSystemImportFormatSupportQuery";
    local_68 = 0;
    local_50 = 0x28;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorFileSystemImportFormatSupportQueryBlend";
    local_70 = 0;
    local_50 = 0x2d;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFileSystemImportFormatSupportQuery::_initialize_classv() */

void EditorFileSystemImportFormatSupportQuery::_initialize_classv(void)

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
      if ((code *)PTR__bind_methods_0011b038 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorFileSystemImportFormatSupportQuery";
    local_70 = 0;
    local_50 = 0x28;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00112e70:
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
  if (lVar9 == 0) goto LAB_00112e70;
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
    goto LAB_00112ec6;
  }
  if (lVar9 == lVar5) {
LAB_00112deb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00112ec6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00112d5f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00112deb;
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
LAB_00112d5f:
  puVar7[-1] = param_1;
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



/* EditorFileSystemImportFormatSupportQuery::query() */

bool __thiscall
EditorFileSystemImportFormatSupportQuery::query(EditorFileSystemImportFormatSupportQuery *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
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
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x1b0,0,0,local_c8);
    if (local_c8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0011306f;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1b8] == (EditorFileSystemImportFormatSupportQuery)0x0))
  {
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
    String::parse_latin1((String *)local_c8,"_query");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x1c0) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"EditorFileSystemImportFormatSupportQuery");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00113419;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_0011342e:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00113368;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x1b0);
        *(undefined8 *)(this + 0x1c0) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00113419:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_0011342e;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x1b0,uVar1);
      *(undefined8 *)(this + 0x1c0) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00113368:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 0x1c0);
      plVar4[1] = (long)(this + 0x1b8);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x1b8] = (EditorFileSystemImportFormatSupportQuery)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 0x1c0);
  if (pcVar5 == (code *)0x0) {
    if (_gdvirtual__query_call(bool&)::first_print == '\0') {
      bVar6 = false;
    }
    else {
      local_f8 = 0;
      String::parse_latin1((String *)&local_f8," must be overridden before calling.");
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"_query");
      local_118 = 0;
      String::parse_latin1((String *)&local_118,"::");
      (**(code **)(*(long *)this + 0x48))(local_128,this);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__query_call","./editor/editor_file_system.h",0x7b,
                       (String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__query_call(bool&)::first_print = '\0';
      bVar6 = false;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
    bVar6 = local_c8[0]._0_1_ != (String)0x0;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x1b0,pcVar5,0,local_c8);
    bVar6 = local_c8[0]._0_1_ != (String)0x0;
  }
LAB_0011306f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* EditorFileSystemImportFormatSupportQuery::get_file_extensions() const */

void EditorFileSystemImportFormatSupportQuery::get_file_extensions(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long *in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
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
  
  plVar3 = (long *)in_RSI[0x13];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  if (plVar3 != (long *)0x0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    (**(code **)(*plVar3 + 0x60))(local_58,plVar3,in_RSI + 0x33,0,0,local_f8);
    if (local_f8[0] == 0) {
      Variant::operator_cast_to_Vector((Variant *)&local_c8);
      if (*(long *)(in_RDI + 8) != local_c0) {
        CowData<String>::_unref((CowData<String> *)(in_RDI + 8));
        lVar2 = local_c0;
        local_c0 = 0;
        *(long *)(in_RDI + 8) = lVar2;
      }
      CowData<String>::_unref((CowData<String> *)&local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00113665;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((in_RSI[1] != 0) && ((char)in_RSI[0x34] == '\0')) {
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
    String::parse_latin1((String *)&local_c8,"_get_file_extensions");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)local_f8);
    PropertyInfo::operator=((PropertyInfo *)&local_c0,(PropertyInfo *)local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar2 = in_RSI[1];
    in_RSI[0x35] = 0;
    pcVar4 = *(code **)(lVar2 + 0xd8);
    if (((pcVar4 == (code *)0x0) || (*(long *)(lVar2 + 0xe0) == 0)) &&
       (pcVar4 = *(code **)(lVar2 + 0xd0), pcVar4 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"EditorFileSystemImportFormatSupportQuery");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)local_f8,(StringName *)&local_100);
      if (CONCAT44(uStack_ec,uStack_f0) == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if ((StringName::configured != '\0') && (lVar2 = 0, local_100 != 0)) goto LAB_00113a4f;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00113a64:
        lVar2 = in_RSI[1];
        pcVar4 = *(code **)(lVar2 + 200);
        if (((pcVar4 == (code *)0x0) || (*(long *)(lVar2 + 0xe0) == 0)) &&
           (pcVar4 = *(code **)(lVar2 + 0xc0), pcVar4 == (code *)0x0)) goto LAB_0011399e;
        lVar2 = (*pcVar4)(*(undefined8 *)(lVar2 + 0xa0),in_RSI + 0x33);
        in_RSI[0x35] = lVar2;
      }
      else {
        lVar2 = *(long *)(CONCAT44(uStack_ec,uStack_f0) + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00113a4f:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar2 == 0) goto LAB_00113a64;
      }
      lVar2 = in_RSI[1];
    }
    else {
      lVar2 = (*pcVar4)(*(undefined8 *)(lVar2 + 0xa0),in_RSI + 0x33,uVar1);
      in_RSI[0x35] = lVar2;
      lVar2 = in_RSI[1];
    }
LAB_0011399e:
    if (*(char *)(lVar2 + 0x29) != '\0') {
      plVar3 = (long *)operator_new(0x18,"");
      *plVar3 = (long)(in_RSI + 0x35);
      plVar3[1] = (long)(in_RSI + 0x34);
      plVar3[2] = in_RSI[0x2d];
      in_RSI[0x2d] = (long)plVar3;
    }
    *(undefined1 *)(in_RSI + 0x34) = 1;
    MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
  }
  pcVar4 = (code *)in_RSI[0x35];
  if (pcVar4 == (code *)0x0) {
    if (_gdvirtual__get_file_extensions_call(Vector<String>&)::first_print != '\0') {
      local_f8[0] = 0;
      local_f8[1] = 0;
      String::parse_latin1((String *)local_f8," must be overridden before calling.");
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"_get_file_extensions");
      local_118 = 0;
      String::parse_latin1((String *)&local_118,"::");
      (**(code **)(*in_RSI + 0x48))(local_128);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)&local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__get_file_extensions_call","./editor/editor_file_system.h",0x7a,
                       (String *)&local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
      _gdvirtual__get_file_extensions_call(Vector<String>&)::first_print = '\0';
    }
  }
  else {
    uStack_f0 = 0;
    uStack_ec = 0;
    if (*(code **)(in_RSI[1] + 0xe0) == (code *)0x0) {
      (*pcVar4)(in_RSI[2],0,local_f8);
    }
    else {
      (**(code **)(in_RSI[1] + 0xe0))(in_RSI[2],in_RSI + 0x33,pcVar4,0,local_f8);
    }
    local_c0 = 0;
    CowData<String>::_ref((CowData<String> *)&local_c0,(CowData *)&uStack_f0);
    lVar2 = local_c0;
    if (*(long *)(in_RDI + 8) != local_c0) {
      CowData<String>::_unref((CowData<String> *)(in_RDI + 8));
      *(long *)(in_RDI + 8) = lVar2;
      local_c0 = 0;
    }
    CowData<String>::_unref((CowData<String> *)&local_c0);
    CowData<String>::_unref((CowData<String> *)&uStack_f0);
  }
LAB_00113665:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorFileSystemImportFormatSupportQuery::is_active() const */

bool __thiscall
EditorFileSystemImportFormatSupportQuery::is_active(EditorFileSystemImportFormatSupportQuery *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_128 [8];
  CowData<char32_t> local_120 [8];
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
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
    (**(code **)(*plVar4 + 0x60))((Variant *)local_58,plVar4,this + 0x180,0,0,local_c8);
    if (local_c8[0] == 0) {
      bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00113c1f;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((*(long *)(this + 8) != 0) && (this[0x188] == (EditorFileSystemImportFormatSupportQuery)0x0))
  {
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
    String::parse_latin1((String *)local_c8,"_is_active");
    local_90 = CONCAT44(local_90._4_4_,0x8c);
    GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void> *)&local_f8);
    PropertyInfo::operator=((PropertyInfo *)&uStack_c0,(PropertyInfo *)&local_f8);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
    local_70 = local_70 & 0xffffffff00000000;
    uVar1 = MethodInfo::get_compatibility_hash();
    lVar3 = *(long *)(this + 8);
    *(undefined8 *)(this + 400) = 0;
    pcVar5 = *(code **)(lVar3 + 0xd8);
    if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
       (pcVar5 = *(code **)(lVar3 + 0xd0), pcVar5 == (code *)0x0)) {
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"EditorFileSystemImportFormatSupportQuery");
      StringName::StringName((StringName *)&local_100,(String *)&local_108,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_f8,(StringName *)&local_100);
      if (local_f0[0] == 0) {
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (lVar3 = 0, local_100 != 0)) goto LAB_00113fc9;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
LAB_00113fde:
        lVar3 = *(long *)(this + 8);
        pcVar5 = *(code **)(lVar3 + 200);
        if (((pcVar5 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
           (pcVar5 = *(code **)(lVar3 + 0xc0), pcVar5 == (code *)0x0)) goto LAB_00113f18;
        uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x180);
        *(undefined8 *)(this + 400) = uVar2;
      }
      else {
        lVar3 = *(long *)(local_f0[0] + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_f0);
        if ((StringName::configured != '\0') && (local_100 != 0)) {
LAB_00113fc9:
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
        if (lVar3 == 0) goto LAB_00113fde;
      }
      lVar3 = *(long *)(this + 8);
    }
    else {
      uVar2 = (*pcVar5)(*(undefined8 *)(lVar3 + 0xa0),this + 0x180,uVar1);
      *(undefined8 *)(this + 400) = uVar2;
      lVar3 = *(long *)(this + 8);
    }
LAB_00113f18:
    if (*(char *)(lVar3 + 0x29) != '\0') {
      plVar4 = (long *)operator_new(0x18,"");
      *plVar4 = (long)(this + 400);
      plVar4[1] = (long)(this + 0x188);
      plVar4[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar4;
    }
    this[0x188] = (EditorFileSystemImportFormatSupportQuery)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_c8);
  }
  pcVar5 = *(code **)(this + 400);
  if (pcVar5 == (code *)0x0) {
    if (_gdvirtual__is_active_call(bool&)::first_print == '\0') {
      bVar6 = false;
    }
    else {
      local_f8 = 0;
      String::parse_latin1((String *)&local_f8," must be overridden before calling.");
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"_is_active");
      local_118 = 0;
      String::parse_latin1((String *)&local_118,"::");
      (**(code **)(*(long *)this + 0x48))(local_128,this);
      operator+((char *)local_120,(String *)"Required virtual method ");
      String::operator+(local_110,(String *)local_120);
      String::operator+((String *)&local_100,local_110);
      String::operator+((String *)local_c8,(String *)&local_100);
      _err_print_error("_gdvirtual__is_active_call","./editor/editor_file_system.h",0x79,
                       (String *)local_c8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref(local_120);
      CowData<char32_t>::_unref(local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      _gdvirtual__is_active_call(bool&)::first_print = '\0';
      bVar6 = false;
    }
  }
  else if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
    (*pcVar5)(*(undefined8 *)(this + 0x10),0,local_c8);
    bVar6 = local_c8[0]._0_1_ != (String)0x0;
  }
  else {
    (**(code **)(*(long *)(this + 8) + 0xe0))
              (*(undefined8 *)(this + 0x10),this + 0x180,pcVar5,0,local_c8);
    bVar6 = local_c8[0]._0_1_ != (String)0x0;
  }
LAB_00113c1f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



/* CowData<Ref<GLTFNode> >::_unref() */

void __thiscall CowData<Ref<GLTFNode>>::_unref(CowData<Ref<GLTFNode>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
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
LAB_001140fd:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_001140fd;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<GLTFBufferView> >::_unref() */

void __thiscall CowData<Ref<GLTFBufferView>>::_unref(CowData<Ref<GLTFBufferView>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
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
LAB_001141dd:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_001141dd;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<GLTFAccessor> >::_unref() */

void __thiscall CowData<Ref<GLTFAccessor>>::_unref(CowData<Ref<GLTFAccessor>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
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
LAB_001142bd:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_001142bd;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<GLTFTexture> >::_unref() */

void __thiscall CowData<Ref<GLTFTexture>>::_unref(CowData<Ref<GLTFTexture>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
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
LAB_0011439d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0011439d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<GLTFSkin> >::_unref() */

void __thiscall CowData<Ref<GLTFSkin>>::_unref(CowData<Ref<GLTFSkin>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
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
LAB_0011447d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0011447d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<GLTFCamera> >::_unref() */

void __thiscall CowData<Ref<GLTFCamera>>::_unref(CowData<Ref<GLTFCamera>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
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
LAB_0011455d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0011455d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<GLTFAnimation> >::_unref() */

void __thiscall CowData<Ref<GLTFAnimation>>::_unref(CowData<Ref<GLTFAnimation>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
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
LAB_0011463d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0011463d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* GLTFState::~GLTFState() */

void __thiscall GLTFState::~GLTFState(GLTFState *this)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  Object *pOVar5;
  long lVar6;
  code *pcVar7;
  char cVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  void *pvVar13;
  void *pvVar14;
  long lVar15;
  long lVar16;
  
  *(undefined ***)this = &PTR__initialize_classv_00115dc0;
  Dictionary::~Dictionary((Dictionary *)(this + 0x550));
  pvVar14 = *(void **)(this + 0x528);
  if (pvVar14 != (void *)0x0) {
    if (*(int *)(this + 0x54c) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x548) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x54c) = 0;
        *(undefined1 (*) [16])(this + 0x538) = (undefined1  [16])0x0;
      }
      else {
        lVar16 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x530) + lVar16) != 0) {
            pvVar14 = *(void **)((long)pvVar14 + lVar16 * 2);
            *(int *)(*(long *)(this + 0x530) + lVar16) = 0;
            pvVar13 = *(void **)((long)pvVar14 + 0x20);
            if (pvVar13 != (void *)0x0) {
              if (*(int *)((long)pvVar14 + 0x44) != 0) {
                uVar4 = *(uint *)(hash_table_size_primes +
                                 (ulong)*(uint *)((long)pvVar14 + 0x40) * 4);
                if (uVar4 == 0) {
                  *(undefined4 *)((long)pvVar14 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar14 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar10 = 0;
                  do {
                    piVar9 = (int *)(*(long *)((long)pvVar14 + 0x28) + lVar10);
                    if (*piVar9 != 0) {
                      *piVar9 = 0;
                      Memory::free_static(*(void **)((long)pvVar13 + lVar10 * 2),false);
                      pvVar13 = *(void **)((long)pvVar14 + 0x20);
                      *(undefined8 *)((long)pvVar13 + lVar10 * 2) = 0;
                    }
                    lVar10 = lVar10 + 4;
                  } while ((ulong)uVar4 << 2 != lVar10);
                  *(undefined4 *)((long)pvVar14 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar14 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar13 == (void *)0x0) goto LAB_001147dd;
                }
              }
              Memory::free_static(pvVar13,false);
              Memory::free_static(*(void **)((long)pvVar14 + 0x28),false);
            }
LAB_001147dd:
            Memory::free_static(pvVar14,false);
            pvVar14 = *(void **)(this + 0x528);
            *(undefined8 *)((long)pvVar14 + lVar16 * 2) = 0;
          }
          lVar16 = lVar16 + 4;
        } while (lVar16 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 0x54c) = 0;
        *(undefined1 (*) [16])(this + 0x538) = (undefined1  [16])0x0;
        if (pvVar14 == (void *)0x0) goto LAB_00114826;
      }
    }
    Memory::free_static(pvVar14,false);
    Memory::free_static(*(void **)(this + 0x530),false);
  }
LAB_00114826:
  pvVar14 = *(void **)(this + 0x4f8);
  if (pvVar14 != (void *)0x0) {
    if (*(int *)(this + 0x51c) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x518) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x51c) = 0;
        *(undefined1 (*) [16])(this + 0x508) = (undefined1  [16])0x0;
      }
      else {
        lVar16 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x500) + lVar16) != 0) {
            *(int *)(*(long *)(this + 0x500) + lVar16) = 0;
            Memory::free_static(*(void **)((long)pvVar14 + lVar16 * 2),false);
            pvVar14 = *(void **)(this + 0x4f8);
            *(undefined8 *)((long)pvVar14 + lVar16 * 2) = 0;
          }
          lVar16 = lVar16 + 4;
        } while ((ulong)uVar3 << 2 != lVar16);
        *(undefined4 *)(this + 0x51c) = 0;
        *(undefined1 (*) [16])(this + 0x508) = (undefined1  [16])0x0;
        if (pvVar14 == (void *)0x0) goto LAB_001148bf;
      }
    }
    Memory::free_static(pvVar14,false);
    Memory::free_static(*(void **)(this + 0x500),false);
  }
LAB_001148bf:
  pvVar14 = *(void **)(this + 0x4c8);
  if (pvVar14 != (void *)0x0) {
    if (*(int *)(this + 0x4ec) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4e8) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x4ec) = 0;
        *(undefined1 (*) [16])(this + 0x4d8) = (undefined1  [16])0x0;
      }
      else {
        lVar16 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x4d0) + lVar16) != 0) {
            pvVar14 = *(void **)((long)pvVar14 + lVar16 * 2);
            *(int *)(*(long *)(this + 0x4d0) + lVar16) = 0;
            if ((*(long *)((long)pvVar14 + 0x18) != 0) &&
               (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
              pOVar5 = *(Object **)((long)pvVar14 + 0x18);
              cVar8 = predelete_handler(pOVar5);
              if (cVar8 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar14 + 0x10));
            Memory::free_static(pvVar14,false);
            pvVar14 = *(void **)(this + 0x4c8);
            *(undefined8 *)((long)pvVar14 + lVar16 * 2) = 0;
          }
          lVar16 = lVar16 + 4;
        } while ((ulong)uVar3 << 2 != lVar16);
        *(undefined4 *)(this + 0x4ec) = 0;
        *(undefined1 (*) [16])(this + 0x4d8) = (undefined1  [16])0x0;
        if (pvVar14 == (void *)0x0) goto LAB_00114982;
      }
    }
    Memory::free_static(pvVar14,false);
    Memory::free_static(*(void **)(this + 0x4d0),false);
  }
LAB_00114982:
  pvVar14 = *(void **)(this + 0x498);
  if (pvVar14 != (void *)0x0) {
    if (*(int *)(this + 0x4bc) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x4b8) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x4bc) = 0;
        *(undefined1 (*) [16])(this + 0x4a8) = (undefined1  [16])0x0;
      }
      else {
        lVar16 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x4a0) + lVar16) != 0) {
            *(int *)(*(long *)(this + 0x4a0) + lVar16) = 0;
            Memory::free_static(*(void **)((long)pvVar14 + lVar16 * 2),false);
            pvVar14 = *(void **)(this + 0x498);
            *(undefined8 *)((long)pvVar14 + lVar16 * 2) = 0;
          }
          lVar16 = lVar16 + 4;
        } while (lVar16 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 0x4bc) = 0;
        *(undefined1 (*) [16])(this + 0x4a8) = (undefined1  [16])0x0;
        if (pvVar14 == (void *)0x0) goto LAB_00114a21;
      }
    }
    Memory::free_static(pvVar14,false);
    Memory::free_static(*(void **)(this + 0x4a0),false);
  }
LAB_00114a21:
  pvVar14 = *(void **)(this + 0x468);
  if (pvVar14 != (void *)0x0) {
    if (*(int *)(this + 0x48c) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x488) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x48c) = 0;
        *(undefined1 (*) [16])(this + 0x478) = (undefined1  [16])0x0;
      }
      else {
        lVar16 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x470) + lVar16) != 0) {
            *(int *)(*(long *)(this + 0x470) + lVar16) = 0;
            Memory::free_static(*(void **)((long)pvVar14 + lVar16 * 2),false);
            pvVar14 = *(void **)(this + 0x468);
            *(undefined8 *)((long)pvVar14 + lVar16 * 2) = 0;
          }
          lVar16 = lVar16 + 4;
        } while (lVar16 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 0x48c) = 0;
        *(undefined1 (*) [16])(this + 0x478) = (undefined1  [16])0x0;
        if (pvVar14 == (void *)0x0) goto LAB_00114ac1;
      }
    }
    Memory::free_static(pvVar14,false);
    Memory::free_static(*(void **)(this + 0x470),false);
  }
LAB_00114ac1:
  CowData<Ref<GLTFAnimation>>::_unref((CowData<Ref<GLTFAnimation>> *)(this + 0x458));
  if (*(long *)(this + 0x448) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x448) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x448);
      if (plVar1 == (long *)0x0) goto LAB_00115674;
      lVar16 = plVar1[-1];
      lVar10 = 0;
      *(undefined8 *)(this + 0x448) = 0;
      plVar11 = plVar1;
      if (lVar16 != 0) {
        do {
          while ((*plVar11 == 0 || (cVar8 = RefCounted::unreference(), cVar8 == '\0'))) {
LAB_00114b18:
            lVar10 = lVar10 + 1;
            plVar11 = plVar11 + 1;
            if (lVar16 == lVar10) goto LAB_00114b70;
          }
          pOVar5 = (Object *)*plVar11;
          cVar8 = predelete_handler(pOVar5);
          if (cVar8 == '\0') goto LAB_00114b18;
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        } while (lVar16 != lVar10);
      }
LAB_00114b70:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  pvVar14 = *(void **)(this + 0x418);
  if (pvVar14 != (void *)0x0) {
    if ((*(int *)(this + 0x43c) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x438) * 4) == 0 ||
        (memset(*(void **)(this + 0x430),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x438) * 4) * 4),
        *(int *)(this + 0x43c) != 0)))) {
      lVar16 = 0;
      do {
        lVar10 = lVar16 * 8;
        lVar16 = lVar16 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar14 + lVar10));
        pvVar14 = *(void **)(this + 0x418);
      } while ((uint)lVar16 < *(uint *)(this + 0x43c));
      *(undefined4 *)(this + 0x43c) = 0;
      if (pvVar14 == (void *)0x0) goto LAB_00114c0f;
    }
    Memory::free_static(pvVar14,false);
    Memory::free_static(*(void **)(this + 0x428),false);
    Memory::free_static(*(void **)(this + 0x420),false);
    Memory::free_static(*(void **)(this + 0x430),false);
  }
LAB_00114c0f:
  pvVar14 = *(void **)(this + 0x3f0);
  if (pvVar14 != (void *)0x0) {
    if ((*(int *)(this + 0x414) != 0) &&
       ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x410) * 4) == 0 ||
        (memset(*(void **)(this + 0x408),0,
                (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x410) * 4) * 4),
        *(int *)(this + 0x414) != 0)))) {
      lVar16 = 0;
      do {
        lVar10 = lVar16 * 8;
        lVar16 = lVar16 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar14 + lVar10));
        pvVar14 = *(void **)(this + 0x3f0);
      } while ((uint)lVar16 < *(uint *)(this + 0x414));
      *(undefined4 *)(this + 0x414) = 0;
      if (pvVar14 == (void *)0x0) goto LAB_00114c97;
    }
    Memory::free_static(pvVar14,false);
    Memory::free_static(*(void **)(this + 0x400),false);
    Memory::free_static(*(void **)(this + 0x3f8),false);
    Memory::free_static(*(void **)(this + 0x408),false);
  }
LAB_00114c97:
  if (*(long *)(this + 1000) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 1000) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 1000);
      if (plVar1 == (long *)0x0) goto LAB_00115674;
      lVar16 = plVar1[-1];
      lVar10 = 0;
      *(undefined8 *)(this + 1000) = 0;
      plVar11 = plVar1;
      if (lVar16 != 0) {
        do {
          while ((*plVar11 == 0 || (cVar8 = RefCounted::unreference(), cVar8 == '\0'))) {
LAB_00114ce0:
            lVar10 = lVar10 + 1;
            plVar11 = plVar11 + 1;
            if (lVar16 == lVar10) goto LAB_00114d38;
          }
          pOVar5 = (Object *)*plVar11;
          cVar8 = predelete_handler(pOVar5);
          if (cVar8 == '\0') goto LAB_00114ce0;
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        } while (lVar16 != lVar10);
      }
LAB_00114d38:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<Ref<GLTFCamera>>::_unref((CowData<Ref<GLTFCamera>> *)(this + 0x3d8));
  CowData<Ref<GLTFSkin>>::_unref((CowData<Ref<GLTFSkin>> *)(this + 0x3c8));
  if (*(long *)(this + 0x3b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x3b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x3b8);
      if (plVar1 == (long *)0x0) goto LAB_00115674;
      lVar16 = plVar1[-1];
      lVar10 = 0;
      *(undefined8 *)(this + 0x3b8) = 0;
      plVar11 = plVar1;
      if (lVar16 != 0) {
        do {
          while ((*plVar11 == 0 || (cVar8 = RefCounted::unreference(), cVar8 == '\0'))) {
LAB_00114db0:
            lVar10 = lVar10 + 1;
            plVar11 = plVar11 + 1;
            if (lVar16 == lVar10) goto LAB_00114e40;
          }
          pOVar5 = (Object *)*plVar11;
          cVar8 = predelete_handler(pOVar5);
          if (cVar8 == '\0') goto LAB_00114db0;
          if (*(code **)(*(long *)pOVar5 + 0x140) == Image::~Image) {
            *(undefined **)pOVar5 = &Container::vtable;
            if (*(long *)(pOVar5 + 0x250) != 0) {
              LOCK();
              plVar2 = (long *)(*(long *)(pOVar5 + 0x250) + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                lVar12 = *(long *)(pOVar5 + 0x250);
                *(undefined8 *)(pOVar5 + 0x250) = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            Resource::~Resource((Resource *)pOVar5);
          }
          else {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          }
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
          Memory::free_static(pOVar5,false);
        } while (lVar16 != lVar10);
      }
LAB_00114e40:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<String>::_unref((CowData<String> *)(this + 0x3a8));
  CowData<String>::_unref((CowData<String> *)(this + 0x398));
  if (*(long *)(this + 0x388) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x388) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x388);
      if (plVar1 == (long *)0x0) goto LAB_00115674;
      lVar16 = plVar1[-1];
      lVar10 = 0;
      *(undefined8 *)(this + 0x388) = 0;
      plVar11 = plVar1;
      if (lVar16 != 0) {
        do {
          while ((*plVar11 == 0 || (cVar8 = RefCounted::unreference(), cVar8 == '\0'))) {
LAB_00114eb0:
            lVar10 = lVar10 + 1;
            plVar11 = plVar11 + 1;
            if (lVar16 == lVar10) goto LAB_00114f08;
          }
          pOVar5 = (Object *)*plVar11;
          cVar8 = predelete_handler(pOVar5);
          if (cVar8 == '\0') goto LAB_00114eb0;
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        } while (lVar16 != lVar10);
      }
LAB_00114f08:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((*(long *)(this + 0x378) != 0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
    pOVar5 = *(Object **)(this + 0x378);
    cVar8 = predelete_handler(pOVar5);
    if (cVar8 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if (*(long *)(this + 0x370) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x370) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x370);
      if (plVar1 == (long *)0x0) goto LAB_00115674;
      lVar16 = plVar1[-1];
      lVar10 = 0;
      *(undefined8 *)(this + 0x370) = 0;
      plVar11 = plVar1;
      if (lVar16 != 0) {
        do {
          while ((*plVar11 == 0 || (cVar8 = RefCounted::unreference(), cVar8 == '\0'))) {
LAB_00114f78:
            lVar10 = lVar10 + 1;
            plVar11 = plVar11 + 1;
            if (lVar16 == lVar10) goto LAB_00114fd0;
          }
          pOVar5 = (Object *)*plVar11;
          cVar8 = predelete_handler(pOVar5);
          if (cVar8 == '\0') goto LAB_00114f78;
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        } while (lVar16 != lVar10);
      }
LAB_00114fd0:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<Ref<GLTFTexture>>::_unref((CowData<Ref<GLTFTexture>> *)(this + 0x360));
  if (*(long *)(this + 0x350) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x350) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar16 = *(long *)(this + 0x350);
      *(undefined8 *)(this + 0x350) = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x340));
  if (*(long *)(this + 0x338) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x338) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x338);
      if (plVar1 == (long *)0x0) goto LAB_00115674;
      lVar16 = plVar1[-1];
      lVar10 = 0;
      *(undefined8 *)(this + 0x338) = 0;
      plVar11 = plVar1;
      if (lVar16 != 0) {
        do {
          while ((*plVar11 == 0 || (cVar8 = RefCounted::unreference(), cVar8 == '\0'))) {
LAB_00115058:
            lVar10 = lVar10 + 1;
            plVar11 = plVar11 + 1;
            if (lVar16 == lVar10) goto LAB_001150b0;
          }
          pOVar5 = (Object *)*plVar11;
          cVar8 = predelete_handler(pOVar5);
          if (cVar8 == '\0') goto LAB_00115058;
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        } while (lVar16 != lVar10);
      }
LAB_001150b0:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  pvVar14 = *(void **)(this + 0x308);
  if (pvVar14 != (void *)0x0) {
    if (*(int *)(this + 0x32c) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x328) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x32c) = 0;
        *(undefined1 (*) [16])(this + 0x318) = (undefined1  [16])0x0;
      }
      else {
        lVar16 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x310) + lVar16) != 0) {
            pvVar14 = *(void **)((long)pvVar14 + lVar16 * 2);
            *(int *)(*(long *)(this + 0x310) + lVar16) = 0;
            if ((*(long *)((long)pvVar14 + 0x10) != 0) &&
               (cVar8 = RefCounted::unreference(), cVar8 != '\0')) {
              pOVar5 = *(Object **)((long)pvVar14 + 0x10);
              cVar8 = predelete_handler(pOVar5);
              if (cVar8 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
            Memory::free_static(pvVar14,false);
            pvVar14 = *(void **)(this + 0x308);
            *(undefined8 *)((long)pvVar14 + lVar16 * 2) = 0;
          }
          lVar16 = lVar16 + 4;
        } while (lVar16 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 0x32c) = 0;
        *(undefined1 (*) [16])(this + 0x318) = (undefined1  [16])0x0;
        if (pvVar14 == (void *)0x0) goto LAB_00115175;
      }
    }
    Memory::free_static(pvVar14,false);
    Memory::free_static(*(void **)(this + 0x310),false);
  }
LAB_00115175:
  if (*(long *)(this + 0x2f8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2f8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar16 = *(long *)(this + 0x2f8);
      *(undefined8 *)(this + 0x2f8) = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x2e8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2e8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x2e8);
      if (plVar1 == (long *)0x0) goto LAB_00115674;
      lVar16 = plVar1[-1];
      lVar10 = 0;
      *(undefined8 *)(this + 0x2e8) = 0;
      plVar11 = plVar1;
      if (lVar16 != 0) {
        do {
          while ((*plVar11 == 0 || (cVar8 = RefCounted::unreference(), cVar8 == '\0'))) {
LAB_001151d8:
            lVar10 = lVar10 + 1;
            plVar11 = plVar11 + 1;
            if (lVar16 == lVar10) goto LAB_00115230;
          }
          pOVar5 = (Object *)*plVar11;
          cVar8 = predelete_handler(pOVar5);
          if (cVar8 == '\0') goto LAB_001151d8;
          lVar10 = lVar10 + 1;
          plVar11 = plVar11 + 1;
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        } while (lVar16 != lVar10);
      }
LAB_00115230:
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<Ref<GLTFAccessor>>::_unref((CowData<Ref<GLTFAccessor>> *)(this + 0x2d8));
  CowData<Ref<GLTFBufferView>>::_unref((CowData<Ref<GLTFBufferView>> *)(this + 0x2c8));
  if (*(long *)(this + 0x2b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar16 = *(long *)(this + 0x2b8);
      if (lVar16 == 0) {
LAB_00115674:
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      lVar10 = *(long *)(lVar16 + -8);
      lVar15 = 0;
      *(undefined8 *)(this + 0x2b8) = 0;
      lVar12 = lVar16;
      if (lVar10 != 0) {
        do {
          if (*(long *)(lVar12 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar12 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar6 = *(long *)(lVar12 + 8);
              *(undefined8 *)(lVar12 + 8) = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          lVar15 = lVar15 + 1;
          lVar12 = lVar12 + 0x10;
        } while (lVar10 != lVar15);
      }
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  CowData<Ref<GLTFNode>>::_unref((CowData<Ref<GLTFNode>> *)(this + 0x2a8));
  if (*(long *)(this + 0x280) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar16 = *(long *)(this + 0x280);
      *(undefined8 *)(this + 0x280) = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x270));
  Dictionary::~Dictionary((Dictionary *)(this + 0x260));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 600));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x250));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x248));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x240));
  Resource::~Resource((Resource *)this);
  return;
}



/* GLTFState::~GLTFState() */

void __thiscall GLTFState::~GLTFState(GLTFState *this)

{
  ~GLTFState(this);
  operator_delete(this,0x558);
  return;
}



/* EditorSceneFormatImporterBlend::get_extensions(List<String, DefaultAllocator>*) const */

void EditorSceneFormatImporterBlend::_GLOBAL__sub_I_get_extensions(void)

{
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
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
  if (EditorFileDialog::base_property_helper == '\0') {
    EditorFileDialog::base_property_helper = '\x01';
    EditorFileDialog::base_property_helper._64_8_ = 0;
    EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
                 &__dso_handle);
  }
  if (PopupMenu::base_property_helper != '\0') {
    return;
  }
  PopupMenu::base_property_helper = 1;
  PopupMenu::base_property_helper._56_8_ = 2;
  PopupMenu::base_property_helper._64_8_ = 0;
  PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,&__dso_handle
              );
  return;
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
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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
/* PropertyInfo::PropertyInfo(PropertyInfo const&) */

void __thiscall PropertyInfo::PropertyInfo(PropertyInfo *this,PropertyInfo *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorSceneFormatImporterBlend::~EditorSceneFormatImporterBlend() */

void __thiscall
EditorSceneFormatImporterBlend::~EditorSceneFormatImporterBlend
          (EditorSceneFormatImporterBlend *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorFileSystemImportFormatSupportQueryBlend::~EditorFileSystemImportFormatSupportQueryBlend()
    */

void __thiscall
EditorFileSystemImportFormatSupportQueryBlend::~EditorFileSystemImportFormatSupportQueryBlend
          (EditorFileSystemImportFormatSupportQueryBlend *this)

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
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

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
/* EditorFileSystemImportFormatSupportQuery::~EditorFileSystemImportFormatSupportQuery() */

void __thiscall
EditorFileSystemImportFormatSupportQuery::~EditorFileSystemImportFormatSupportQuery
          (EditorFileSystemImportFormatSupportQuery *this)

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
/* CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend, void,
   String>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void,String>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorFileSystemImportFormatSupportQueryBlend,void,String>
           *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* GLTFState::~GLTFState() */

void __thiscall GLTFState::~GLTFState(GLTFState *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



